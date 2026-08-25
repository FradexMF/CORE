#pragma once

#include <gmpxx.h>

#include <cstdint>

#include "core_server/internal/evaluation/logical_cea/logical_cea.hpp"
#include "core_server/internal/evaluation/logical_cea/transformations/logical_cea_transformer.hpp"
#include "core_server/internal/evaluation/predicate_set.hpp"
#include "union.hpp"

namespace CORE::Internal::CEA {

class AllenStarts final : public LogicalCEATransformer {
 public:
  using VariablesToMark = Bitset;
  using EndNodeId = uint64_t;

  // The construction is as follows: 
  // A_starts = (Q2 U (Q1xQ2x{0,1}), P1 U P2 U (P1 AND P2), X1 U X2, Delta, (q0, p0, 0), F2)
  // 
  // With Delta' (transitions) = Delta2 U
  // { ((q_i, p_j, b), P_1 AND P_2, L_1 U L_2, (q_{i+1}, p_{j+1}, 1)) }
  // { ((q_i, p_j, b), epsilon, (q_{i+1}, p_j, b)) | Epsilon from Q1 }
  // { ((q_i, p_j, b), epsilon, (q_i, p_{j+1}, b)) | Epsilon from Q2 }
  // { ((q_n, p_j, 1), epsilon, p_j) | q_n in F1 }  // Exit from product to Q2
  LogicalCEA eval(LogicalCEA&& left, LogicalCEA&& right) override {

    // Base states Q1 U Q2, Delta1 U Delta2. 
    LogicalCEA out = Union()(left, right);  

    const uint64_t left_n = left.amount_of_states;
    const uint64_t right_n = right.amount_of_states;
    const uint64_t left_right_n_states = left_n + right_n;

    out.final_states = right.final_states << left_n;

    uint64_t num_prod_states = left_n * right_n * 2;
    out.add_n_states(num_prod_states);

    auto get_prod_state_id = [&](uint64_t i, uint64_t j, uint64_t b) -> EndNodeId {
      return left_right_n_states + (i * right_n + j) * 2 + b;
    };

    // I_starts = (q0, p0, 0)
    out.initial_states.reset();
    for (auto left_initial : left.get_initial_states()) {
      for (auto right_initial : right.get_initial_states()) {
        out.initial_states.set(get_prod_state_id(left_initial, right_initial, 0));
      }
    }

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

    // {((q_n, p_j, 1), epsilon, p_j) | q_n in F1}
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

} // namespace CORE::Internal::CEA