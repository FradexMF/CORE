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

  //The construction is as follows: A_overlap = (Q1 U Q2 U Q1xQ2, P1 U P2, X1 U X2, T', q0, F2)
  //with T' (transitions) = T1 U+ T2 U
  // {(qi,P1i,L1i,(qi+1,p0))| with p0 the initial state of A2} U #this or epsilon
  // {( (qi,pj),P1i AND P2j, L1i U L2j, (qi+1, pj+1) )| the product of both A1 and A2 really}
  // {( (qn, pj), P2j, L2j, pj+1) | qn the final state of A1 } #this or epsilon

  LogicalCEA eval(LogicalCEA&& left, LogicalCEA&& right) override {

    // Q1 U Q2, T1 U+ T2, q0, F2
    LogicalCEA out = Union()(left, right);  

    out.initial_states = left.initial_states;
    out.final_states = right.final_states << left.amount_of_states;

    const uint64_t left_n = left.amount_of_states;
    const uint64_t right_n = right.amount_of_states;
    const uint64_t left_right_n_states = left_n + right_n;

    uint64_t num_prod_states = left_n * right_n;
    out.add_n_states(num_prod_states);

    //epsilon en teoria... definir

    for (size_t i = 0; i < left.amount_of_states; ++i) {
      for (size_t j = 0; j < right.amount_of_states; ++j) {

        EndNodeId source = left_right_n_states + i * right.amount_of_states + j;

        for (const auto& transition1 : left.transitions[i]) {
          for (const auto& transition2 : right.transitions[j]) {
            PredicateSet intersection = std::get<0>(transition1) & std::get<0>(transition2);

            if (intersection.type != PredicateSet::Contradiction) {
              VariablesToMark combined_mark = std::get<1>(transition1) | std::get<1>(transition2);

              EndNodeId target = left_right_n_states
                              + std::get<2>(transition1) * right.amount_of_states
                              + std::get<2>(transition2);

              out.transitions[source].push_back(
                  std::make_tuple(intersection, combined_mark, target));
            }
          }
        }

        //epsilon transitions between product states
        //{((a,x),eps,(b,x)) | forall x, (a,eps,b), x in Q_right} (and viceversa)
        for (auto i_eps : left.epsilon_transitions[i]) {
          if (i_eps >= left.amount_of_states) continue;
            EndNodeId target = left_right_n_states + i_eps * right.amount_of_states + j;
            out.epsilon_transitions[source].insert(target);
        }

        for (auto j_eps : right.epsilon_transitions[j]) {
          if (j_eps >= right.amount_of_states) continue;
            EndNodeId target = left_right_n_states + i * right.amount_of_states + j_eps;
            out.epsilon_transitions[source].insert(target);
        }

        //this does not handle (a,x) -> (b,y) where (a,eps,b) and (x,eps,y)
        //but it should simply create (a,x) ->(b,x), (b,x) -> (b,y) which is equivalent... i think
      }
    }

    //(qi,P1i,L1i,(qi,p0))
    for (size_t i = 0; i < left_n; ++i) {
      for (auto right_initial : right.get_initial_states()) {
        EndNodeId product_state = left_right_n_states + i * right_n + right_initial;
        out.epsilon_transitions[i].insert(product_state);
      }
    }
    //((qn, pj), P2j, L2j, pj)
    for (auto left_final : left.get_final_states()) {
      for (size_t j = 0; j < right_n; ++j) {
        
        EndNodeId product_state = left_right_n_states + left_final * right_n + j;
        EndNodeId right_state = left_n + j;
        out.epsilon_transitions[product_state].insert(right_state); 
      }
    }

    return out;
    }
  };
}