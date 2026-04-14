#pragma once

#include <gmpxx.h>

#include <cstdint>

#include "core_server/internal/evaluation/logical_cea/logical_cea.hpp"
#include "core_server/internal/evaluation/logical_cea/transformations/logical_cea_transformer.hpp"
#include "core_server/internal/evaluation/predicate_set.hpp"
#include "union.hpp"

namespace CORE::Internal::CEA {

class AllenIntervalAlgebraOverlap final : public LogicalCEATransformer {
  public:
  using VariablesToMark = Bitset;
  using EndNodeId = uint64_t;

  //The construction is as follows: A_overlap = (Q1 U Q2 U Q1xQ2, P1 U P2, X1 U X2, T', q0, F2)
  //with T' (transitions) = T1 U+ T2 U
  // {(qi,P1i,L1i,(qi+1,p0)| with p0 the initial state of A2} U #this or epsilon
  // {( (qi,pj),P1i AND P2j, L1i U L2j, (qi+1, pj+1) )| the product of both A1 and A2 really}
  // {( (qn, pj), P2j, L2j, pj+1) | qn the final state of A1 } #this or epsilon

  LogicalCEA eval(LogicalCEA&& left, LogicalCEA&& right) override {

    return left;
    // Q1 U Q2, T1 U+ T2, q0, F2
    LogicalCEA out = Union()(left, right);  
    uint64_t num_prod_states = left.amount_of_states * right.amount_of_states;
    out.add_n_states(num_prod_states);
    
    auto left_final_states = left.get_final_states();
    auto right_initial_states = right.get_initial_states();

    auto left_right_n_states = left.amount_of_states + right.amount_of_states;

    //create product transitions
    for (size_t i = 0; i < left.amount_of_states; ++i) {
      for (const auto& transition1 : left.transitions[i]) {

        for (size_t j = 0; j < right.amount_of_states; ++j) {
          for (const auto& transition2 : right.transitions[j]) {

            PredicateSet intersection = std::get<0>(transition1)
                                        & std::get<0>(transition2);

            if (intersection.type != PredicateSet::Contradiction) {
              VariablesToMark combined_mark = std::get<1>(transition1) | std::get<1>(transition2);

              EndNodeId source = left_right_n_states + i * right.amount_of_states + j;
              EndNodeId target = left_right_n_states + 
                                  std::get<2>(transition1) * right.amount_of_states
                                + std::get<2>(transition2);

              out.transitions[source].push_back(
                std::make_tuple(intersection, combined_mark, target));
              }

            }
          }

        }
      }

    //create epsilon transitions from left to product to right
    for (size_t i = 0; i < left.amount_of_states; ++i) {
      for (auto right_initial : right.get_initial_states()) {

        EndNodeId product_state = left_right_n_states + i * right.amount_of_states + right_initial;

        out.epsilon_transitions[i].insert(product_state);
      }
    }

    for (auto left_final : left.get_final_states()) {
      for (size_t j = 0; j < right.amount_of_states; ++j) {
        
        EndNodeId product_state = left_right_n_states + left_final * right.amount_of_states + j;
        EndNodeId right_state = left.amount_of_states + j;
        out.epsilon_transitions[product_state].insert(right_state); 
      }
    }

    }
  };