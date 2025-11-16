#pragma once

#include <gmpxx.h>

#include <cstdint>

#include "core_server/internal/evaluation/logical_cea/logical_cea.hpp"
#include "core_server/internal/evaluation/logical_cea/transformations/logical_cea_transformer.hpp"
#include "core_server/internal/evaluation/predicate_set.hpp"
#include "union.hpp"

namespace CORE::Internal::CEA {

class NonContiguousSequencing final : public LogicalCEATransformer {
 public:
  using VariablesToMark = mpz_class;
  using EndNodeId = uint64_t;

  //The construction is as follows: A_overlap = (Q1 U Q2 U Q1xQ2, P1 U P2, X1 U X2, T', q0, F2)
  //with T' (transitions) = T1 U+ T2 U
  // {(qi,P1i,L1i,(qi+1,p0)| with p0 the initial state of A2} U #this or epsilon
  // {( (qi,pj),P1i AND P2j, L1i U L2j, (qi+1, pj+1) )| the product of both A1 and A2 really}
  // {( (qn, pj), P2j, L2j, pj+1) | qn the final state of A1 } #this or epsilon

  LogicalCEA eval(LogicalCEA&& left, LogicalCEA&& right) override {

    //Q1 U Q2, T1 U+ T2, q0, F2
    LogicalCEA out = Union()(left, right);
    out.initial_states = left.initial_states;
    out.final_states = right.final_states << left.amount_of_states;
    auto left_final_states = left.get_final_states();
    auto right_initial_states = right.get_initial_states();

    //create the intersection (from opeartor_and branch)
    uint64_t num_prod_states = left.amount_of_states * right.amount_of_states
    out.add_n_states(num_prod_states)

    for (size_t i = 0; i < left.transitions.size(); ++i) {
      for (const auto& transition1 : left.transitions[i]) {
        for (size_t j = 0; j < right.transitions.size(); ++j) {
          for (const auto& transition2 : right.transitions[j]) {

            PredicateSet intersection = std::get<0>(transition1)
                                        & std::get<0>(transition2);

            if (intersection.type != PredicateSet::Contradiction) {
              VariablesToMark combined_mark = std::get<1>(transition1)
                                              | std::get<1>(transition2);

              if (combined_mark == 0) { //im not sure if this is needed

                EndNodeId source = out.amount_of_states + i * right.amount_of_states + j;

                EndNodeId target = out.amount_of_states + 
                                   std::get<2>(transition1) * right.amount_of_states
                                   + std::get<2>(transition2);

                out.transitions[source].push_back(
                  std::make_tuple(intersection, combined_mark, target));
              }                         
            }
          }
        }
      }
    }


    //for each state in left, create an epsilon transition to the intersection
    //so a for on each state in left, with a for on each initial state of right, epsilon

    //for eac state in intersection with qn, create epsilon transition to right
    //a for on each final state on left, with a for on each state in right, epsilon

    
    //done... ?
    

  }
};

}  // namespace CORE::Internal::CEA


    // LogicalCEA out = Union()(left, right);
    // out.initial_states = left.initial_states;
    // out.final_states = right.final_states << left.amount_of_states;
    // auto left_final_states = left.get_final_states();
    // auto right_initial_states = right.get_initial_states();

    // // Tautology loop
    // for (auto right_initial_state : right_initial_states) {
    //   uint64_t target_state_id = right_initial_state + left.amount_of_states;
    //   out.transitions[target_state_id]
    //     .emplace_back(PredicateSet(PredicateSet::Type::Tautology), 0, target_state_id);
    // }

    // for (auto left_final_state : left_final_states) {
    //   for (auto right_initial_state : right_initial_states) {
    //     EndNodeId target = right_initial_state + left.amount_of_states; 
    //     out.epsilon_transitions[left_final_state].insert(target);
    //   }
    // }
    // return out;
