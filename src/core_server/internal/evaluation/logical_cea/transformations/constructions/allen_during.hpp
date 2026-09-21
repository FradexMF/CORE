#pragma once

#include <gmpxx.h>

#include <cstdint>

#include "core_server/internal/evaluation/logical_cea/logical_cea.hpp"
#include "core_server/internal/evaluation/logical_cea/transformations/logical_cea_transformer.hpp"
#include "core_server/internal/evaluation/predicate_set.hpp"
#include "union.hpp"

namespace CORE::Internal::CEA {

class AllenDuring final : public LogicalCEATransformer {
 public:
  using VariablesToMark = Bitset;
  using EndNodeId = uint64_t;

  // The construction is as follows: 
  // A_during = (Q1 U (Q1xQ2x{0,1}) U (Q1x{2}), P1 U P2 U (P1 AND P2), X1 U X2, Delta', q0, F_during)
  // where F_during = { (q_n, 2) | q_n in F1 }
  // 
  // With Delta' (transitions) = Delta1 U
  // { ((q, 2), epsilon, (q', 2)) | (q, epsilon, q') in Delta1 }
  // { ((q, 2), P_1, L_1, (q', 2)) | (q, P_1, L_1, q') in Delta1 }
  // { (q, epsilon, (q, p_0, 0)) | q in Q1 } 
  // { ((q, p, b), epsilon, (q', p, b)) | (q, epsilon, q') in Delta1 }
  // { ((q, p, b), epsilon, (q, p', b)) | (p, epsilon, p') in Delta2 }
  // { ((q, p, b), P_1 AND P_2, L_1 U L_2, (q', p', 1)) | Synced Read }
  // { ((q, p_n, 1), epsilon, (q, 2)) | p_n in F2, q in Q1 }
  LogicalCEA eval(LogicalCEA&& left, LogicalCEA&& right) override {

    // Base states Q1 U Q2, Delta1 U Delta2. 
    LogicalCEA out = Union()(left, right);  

    const uint64_t left_n = left.amount_of_states;
    const uint64_t right_n = right.amount_of_states;
    const uint64_t left_right_n_states = left_n + right_n;

    // Q1 x Q2 x {0, 1}
    uint64_t num_prod_states = left_n * right_n * 2;
    // Q1 x {2}
    uint64_t num_q1_2_states = left_n;
    
    out.add_n_states(num_prod_states + num_q1_2_states);

    auto get_prod_state_id = [&](uint64_t i, uint64_t j, uint64_t b) -> EndNodeId {
      return left_right_n_states + (i * right_n + j) * 2 + b;
    };
    
    auto get_q1_2_state_id = [&](uint64_t i) -> EndNodeId {
      return left_right_n_states + num_prod_states + i;
    };

    // I_during = q0 (initial state of A_phi_1)
    out.initial_states = left.initial_states;

    // F_during = { (q, 2) | q in F1 }
    out.final_states.reset();
    for (auto left_final : left.get_final_states()) {
      out.final_states.set(get_q1_2_state_id(left_final));
    }

    // { (q, epsilon, (q, p_0, 0)) | q in Q1 }
    for (size_t i = 0; i < left_n; ++i) {
      for (auto right_initial : right.get_initial_states()) {
        EndNodeId target_prod_state = get_prod_state_id(i, right_initial, 0);
        out.epsilon_transitions[i].insert(target_prod_state);
      }
    }

    for (size_t i = 0; i < left.amount_of_states; ++i) {
      for (size_t j = 0; j < right.amount_of_states; ++j) {

        for (uint64_t b = 0; b <= 1; ++b) {
          EndNodeId source = get_prod_state_id(i, j, b);

          // { ((q, p, b), P_1 AND P_2, L_1 U L_2, (q', p', 1)) }
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

          // { ((q, p, b), epsilon, (q', p, b)) }
          for (auto i_eps : left.epsilon_transitions[i]) {
            if (i_eps >= left_n) continue;
            EndNodeId target = get_prod_state_id(i_eps, j, b);
            out.epsilon_transitions[source].insert(target);
          }
          
          // { ((q, p, b), epsilon, (q, p', b)) }
          for (auto j_eps : right.epsilon_transitions[j]) {
            if (j_eps >= right_n) continue;
            EndNodeId target = get_prod_state_id(i, j_eps, b);
            out.epsilon_transitions[source].insert(target);
          }
        }
      }
    }

    // { ((q, p_n, 1), epsilon, (q, 2)) | p_n in F2, q in Q1 }
    for (size_t i = 0; i < left_n; ++i) {
      for (auto right_final : right.get_final_states()) {
        EndNodeId source_prod_state_b1 = get_prod_state_id(i, right_final, 1);
        EndNodeId target_q1_2_state = get_q1_2_state_id(i);
        out.epsilon_transitions[source_prod_state_b1].insert(target_q1_2_state);
      }
    }

    // { ((q, 2), P_1, L_1, (q', 2)) } and { ((q, 2), epsilon, (q', 2)) }
    for (size_t i = 0; i < left_n; ++i) {
      EndNodeId source = get_q1_2_state_id(i);

      for (const auto& transition1 : left.transitions[i]) {
        EndNodeId target = get_q1_2_state_id(std::get<2>(transition1));
        out.transitions[source].push_back(
            std::make_tuple(std::get<0>(transition1), std::get<1>(transition1), target));
      }

      for (auto i_eps : left.epsilon_transitions[i]) {
        if (i_eps >= left_n) continue;
        EndNodeId target = get_q1_2_state_id(i_eps);
        out.epsilon_transitions[source].insert(target);
      }
    }

    return out;
  }
};

} // namespace CORE::Internal::CEA