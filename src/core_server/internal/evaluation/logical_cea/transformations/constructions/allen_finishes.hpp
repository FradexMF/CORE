#pragma once

#include <gmpxx.h>

#include <cstdint>

#include "core_server/internal/evaluation/logical_cea/logical_cea.hpp"
#include "core_server/internal/evaluation/logical_cea/transformations/logical_cea_transformer.hpp"
#include "core_server/internal/evaluation/predicate_set.hpp"
#include "union.hpp"

namespace CORE::Internal::CEA {

class AllenFinishes final : public LogicalCEATransformer {
 public:
  using VariablesToMark = Bitset;
  using EndNodeId = uint64_t;

  // The construction is as follows: 
  // A_finishes = (Q2 U (Q1xQ2x{0,1}), P1 U P2 U (P1 AND P2), X1 U X2, Delta', p0, F_finishes)
  // where F_finishes = { (q_n, p_n, 1) | q_n in F1 AND p_n in F2 }
  // 
  // With Delta' (transitions) = Delta2 U
  // { (p, epsilon, (q_0, p, 0)) | p in Q2 } 
  // { ((q, p, b), epsilon, (q', p, b)) | (q, epsilon, q') in Delta1 }
  // { ((q, p, b), epsilon, (q, p', b)) | (p, epsilon, p') in Delta2 }
  // { ((q, p, b), P_1 AND P_2, L_1 U L_2, (q', p', 1)) | Synced Read }
  LogicalCEA eval(LogicalCEA&& left, LogicalCEA&& right) override {

    // Base states Q1 U Q2, Delta1 U Delta2. 
    // Q1 base states will become unreachable orphans. Q2 is active.
    LogicalCEA out = Union()(left, right);  

    const uint64_t left_n = left.amount_of_states;
    const uint64_t right_n = right.amount_of_states;
    const uint64_t left_right_n_states = left_n + right_n;

    // Q1 x Q2 x {0, 1}
    uint64_t num_prod_states = left_n * right_n * 2;
    out.add_n_states(num_prod_states);

    auto get_prod_state_id = [&](uint64_t i, uint64_t j, uint64_t b) -> EndNodeId {
      return left_right_n_states + (i * right_n + j) * 2 + b;
    };

    // I_finishes = p0 (initial state of A_phi_2)
    out.initial_states.reset();
    for (auto right_initial : right.get_initial_states()) {
      out.initial_states.set(left_n + right_initial);
    }

    // F_finishes = { (q_n, p_n, 1) | q_n in F1 AND p_n in F2 }
    out.final_states.reset();
    for (auto left_final : left.get_final_states()) {
      for (auto right_final : right.get_final_states()) {
        out.final_states.set(get_prod_state_id(left_final, right_final, 1));
      }
    }

    // { (p, epsilon, (q_0, p, 0)) | p in Q2 }
    for (size_t j = 0; j < right_n; ++j) {
      EndNodeId source_p = left_n + j; 
      for (auto left_initial : left.get_initial_states()) {
        EndNodeId target_prod_state = get_prod_state_id(left_initial, j, 0);
        out.epsilon_transitions[source_p].insert(target_prod_state);
      }
    }

    for (size_t i = 0; i < left_n; ++i) {
      for (size_t j = 0; j < right_n; ++j) {

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

    return out;
  }
};

} // namespace CORE::Internal::CEA