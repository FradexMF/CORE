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
  // {(qi,P1i,L1i,(qi+1,p0)| with p0 the initial state of A2} U #this or epsilon
  // {( (qi,pj),P1i AND P2j, L1i U L2j, (qi+1, pj+1) )| the product of both A1 and A2 really}
  // {( (qn, pj), P2j, L2j, pj+1) | qn the final state of A1 } #this or epsilon

  LogicalCEA eval(LogicalCEA&& left, LogicalCEA&& right) override {

    return left;
  }

};

}