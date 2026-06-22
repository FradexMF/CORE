#pragma once

#include <gmpxx.h>

#include <cstdint>

#include "core_server/internal/evaluation/logical_cea/logical_cea.hpp"
#include "core_server/internal/evaluation/logical_cea/transformations/logical_cea_transformer.hpp"
#include "core_server/internal/evaluation/predicate_set.hpp"
#include "union.hpp"

namespace CORE::Internal::CEA {

class AllenOverlap final : public LogicalCEATransformer {
  public:
  using VariablesToMark = Bitset;
  using EndNodeId = uint64_t;

  // The construction is as follows: 
  // A_overlap = (Q1 U (Q1xQ2x{0,1}) U Q2, P1 U P2 U (P1 AND P2), X1 U X2, T', q0, F2)
  // 
  // With T' (transitions) = T1 U T2 U
  // { (q_i, epsilon, (q_i, p_0, 0)) | q_i in Q1 }  // Entry into overlap
  // { ((q_i, p_j, b), P_1 AND P_2, L_1 U L_2, (q_{i+1}, p_{j+1}, 1)) | Synced Read }
  // { ((q_i, p_j, b), epsilon, (q_{i+1}, p_j, b)) | Epsilon from Q1 }
  // { ((q_i, p_j, b), epsilon, (q_i, p_{j+1}, b)) | Epsilon from Q2 }
  // { ((q_n, p_j, 1), epsilon, p_j) | q_n in F1 }  // Exit from overlap (only if b=1)

  LogicalCEA eval(LogicalCEA&& left, LogicalCEA&& right) override {

    // Base states Q1 U Q2, T1 U T2, q0, F2
    LogicalCEA out = Union()(left, right);  

    out.initial_states = left.initial_states;
    out.final_states = right.final_states << left.amount_of_states;

    const uint64_t left_n = left.amount_of_states;
    const uint64_t right_n = right.amount_of_states;
    const uint64_t left_right_n_states = left_n + right_n;

    //Product states Q1 x Q2 x {0, 1}
    uint64_t num_prod_states = left_n * right_n * 2;
    out.add_n_states(num_prod_states);

    //lambda for the correct index considering the b bit
    auto get_prod_state_id = [&](uint64_t i, uint64_t j, uint64_t b) -> EndNodeId {
      return left_right_n_states + (i * right_n + j) * 2 + b;
    };

    //epsilon en teoria... definir

    for (size_t i = 0; i < left.amount_of_states; ++i) {
      for (size_t j = 0; j < right.amount_of_states; ++j) {

        for (uint64_t b = 0; b <= 1; ++b) {
          EndNodeId source = get_prod_state_id(i, j, b);

          // ((q_i, p_j, b), P_1 AND P_2, L_1 U L_2, (q_{i+1}, p_{j+1}, 1))
          for (const auto& transition1 : left.transitions[i]) {
            for (const auto& transition2 : right.transitions[j]) {
              PredicateSet intersection = std::get<0>(transition1) & std::get<0>(transition2);

              if (intersection.type != PredicateSet::Contradiction) {
                VariablesToMark combined_mark = std::get<1>(transition1) | std::get<1>(transition2);

                EndNodeId target = get_prod_state_id(std::get<2>(transition1), std::get<2>(transition2), 1);

                out.transitions[source].push_back(
                    std::make_tuple(intersection, combined_mark, target));
              }
            }
          }

          // ((q_i, p_j, b), epsilon, (q_{i_eps}, p_j, b))
          for (auto i_eps : left.epsilon_transitions[i]) {
            if (i_eps >= left_n) continue;
            EndNodeId target = get_prod_state_id(i_eps, j, b);
            out.epsilon_transitions[source].insert(target);
          }
          
          // ((q_i, p_j, b), epsilon, (q_i, p_{j_eps}, b))
          for (auto j_eps : right.epsilon_transitions[j]) {
            if (j_eps >= right_n) continue;
            EndNodeId target = get_prod_state_id(i, j_eps, b);
            out.epsilon_transitions[source].insert(target);
          }
        }
      }
    }

    //(qi,P1i,L1i,(qi,p0))
    for (size_t i = 0; i < left_n; ++i) {
      for (auto right_initial : right.get_initial_states()) {
        EndNodeId target_prod_state = get_prod_state_id(i, right_initial, 0);
        out.epsilon_transitions[i].insert(target_prod_state);
      }
    }
    //((qn, pj), P2j, L2j, pj)
    for (auto left_final : left.get_final_states()) {
      for (size_t j = 0; j < right_n; ++j) {
        EndNodeId source_prod_state_b1 = get_prod_state_id(left_final, j, 1);
        EndNodeId target_right_state = left_n + j; 
        out.epsilon_transitions[source_prod_state_b1].insert(target_right_state); 
      }
    }

    return out;
    }
  };
}