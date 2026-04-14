#include <algorithm>
#include <catch2/catch_message.hpp>
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>
#include <cstdint>
#include <memory>
#include <string>
#include <tuple>
#include <utility>

#include "core_server/internal/ceql/cel_formula/formula/visitors/formula_to_logical_cea.hpp"
#include "core_server/internal/coordination/catalog.hpp"
#include "core_server/internal/coordination/query_catalog.hpp"
#include "core_server/internal/evaluation/cea/cea.hpp"
#include "core_server/internal/evaluation/logical_cea/logical_cea.hpp"
#include "core_server/internal/evaluation/predicate_set.hpp"
#include "core_server/internal/parsing/ceql_query/parser.hpp"
#include "shared/datatypes/bitset.hpp"
#include "shared/datatypes/catalog/stream_info.hpp"

#include "core_server/internal/evaluation/logical_cea/transformations/constructions/allen_overlap.hpp"

namespace CORE::Internal::CEQL::UnitTests::CEAConstructionFromLogicalCEA {

using CORE::Bitset;

std::string create_query(std::string clause) {
  // clang-format off
  return "SELECT ALL * \n"
         "FROM S\n"
         "WHERE " + clause + " WITHIN 4 EVENTS\n";
  // clang-format on
}

TEST_CASE("Remove Epsilons of Sequencing and Contiguous Iteration Combined",
          "[LogicalCEA To CEA]") {
  Catalog catalog;
  Types::StreamInfo stream_info = catalog.add_stream_type({"S", {{"H", {}}, {"S", {}}}});
  auto query = Parsing::QueryParser::parse_query(create_query("(H:+ ; S):+"), catalog);
  QueryCatalog query_catalog(catalog, query);
  auto visitor = FormulaToLogicalCEA(query_catalog);
  query.where.formula->accept_visitor(visitor);
  CEA::LogicalCEA logical_cea = visitor.current_cea;
  INFO(logical_cea.to_string());
  auto cea = CEA::CEA(std::move(logical_cea));

  INFO(cea.to_string());
  REQUIRE(cea.amount_of_states == 4);       // NOLINT
  REQUIRE(cea.transitions[0].size() == 3);  // NOLINT
  REQUIRE(cea.transitions[1].size() == 2);  // NOLINT
  REQUIRE(cea.transitions[2].size() == 1);  // NOLINT
  REQUIRE(cea.transitions[3].size() == 1);  // NOLINT
  // clang-format off
  REQUIRE(cea.transitions[0].contains(std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b010), Bitset::from_ulong(0b010)), Bitset::from_ulong(0b100), uint64_t{0}))); // NOLINT
  REQUIRE(cea.transitions[0].contains(std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b100), Bitset::from_ulong(0b100)), Bitset::from_ulong(0b1000), uint64_t{2}))); // NOLINT
  REQUIRE(cea.transitions[0].contains(std::make_tuple(CEA::PredicateSet(CEA::PredicateSet::Type::Tautology), Bitset{}, uint64_t{1}))); // NOLINT
  REQUIRE(cea.transitions[1].contains(std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b100), Bitset::from_ulong(0b100)), Bitset::from_ulong(0b1000), uint64_t{2}))); // NOLINT
  REQUIRE(cea.transitions[1].contains(std::make_tuple(CEA::PredicateSet(CEA::PredicateSet::Type::Tautology), Bitset{}, uint64_t{1}))); // NOLINT
  REQUIRE(cea.transitions[2].contains(std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b010), Bitset::from_ulong(0b010)), Bitset::from_ulong(0b100), uint64_t{0}))); // NOLINT
  REQUIRE(cea.transitions[3].contains(std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b010), Bitset::from_ulong(0b010)), Bitset::from_ulong(0b100), uint64_t{0}))); // NOLINT
  // clang-format on
  REQUIRE(cea.initial_state == 3);     // NOLINT
  REQUIRE(cea.final_states == 0b100);  // NOLINT
}

TEST_CASE("Remove Epsilons of Sequencing and non_contiguous Iteration Combined",
          "[LogicalCEA To CEA]") {
  Catalog catalog;
  Types::StreamInfo stream_info = catalog.add_stream_type({"S", {{"H", {}}, {"S", {}}}});
  auto query = Parsing::QueryParser::parse_query(create_query("H+"), catalog);
  QueryCatalog query_catalog(catalog, query);
  auto visitor = FormulaToLogicalCEA(query_catalog);
  query.where.formula->accept_visitor(visitor);
  CEA::LogicalCEA logical_cea = visitor.current_cea;
  INFO(logical_cea.to_string());

  REQUIRE(logical_cea.amount_of_states == 3);    // NOLINT
  REQUIRE(logical_cea.initial_states == 0b001);  // NOLINT
  REQUIRE(logical_cea.final_states == 0b010);    // NOLINT

  REQUIRE(logical_cea.transitions[0].size() == 1);  // NOLINT
  REQUIRE(logical_cea.transitions[1].size() == 0);  // NOLINT
  REQUIRE(logical_cea.transitions[2].size() == 1);  // NOLINT

  REQUIRE(std::count(logical_cea.transitions[0].begin(),
                     logical_cea.transitions[0].end(),
                     std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b010),
                                                       Bitset::from_ulong(0b010)),
                                     0b100,
                                     1)));
  REQUIRE(std::count(logical_cea.transitions[2].begin(),
                     logical_cea.transitions[2].end(),
                     std::make_tuple(CEA::PredicateSet(CEA::PredicateSet::Type::Tautology),
                                     false,
                                     2)));

  REQUIRE(logical_cea.epsilon_transitions[1].size() == 1);  // NOLINT
  REQUIRE(logical_cea.epsilon_transitions[2].size() == 1);  // NOLINT
  REQUIRE(logical_cea.epsilon_transitions[1].contains(2));  // NOLINT
  REQUIRE(logical_cea.epsilon_transitions[2].contains(0));  // NOLINT

  auto cea = CEA::CEA(std::move(logical_cea));

  INFO(cea.to_string());
  // NOTE: Construction after logical cea not checked
  REQUIRE(cea.amount_of_states == 3);       // NOLINT
  REQUIRE(cea.transitions[0].size() == 2);  // NOLINT
  REQUIRE(cea.transitions[1].size() == 2);  // NOLINT
  REQUIRE(cea.transitions[2].size() == 1);  // NOLINT
  // clang-format off
  REQUIRE(cea.transitions[0].contains(std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b010), Bitset::from_ulong(0b010)), Bitset::from_ulong(0b100), uint64_t{0}))); // NOLINT
  REQUIRE(cea.transitions[0].contains(std::make_tuple(CEA::PredicateSet(CEA::PredicateSet::Type::Tautology), Bitset{}, uint64_t{1}))); // NOLINT
  REQUIRE(cea.transitions[1].contains(std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b010), Bitset::from_ulong(0b010)), Bitset::from_ulong(0b100), uint64_t{0}))); // NOLINT
  REQUIRE(cea.transitions[1].contains(std::make_tuple(CEA::PredicateSet(CEA::PredicateSet::Type::Tautology), Bitset{}, uint64_t{1}))); // NOLINT
  REQUIRE(cea.transitions[2].contains(std::make_tuple(CEA::PredicateSet(Bitset::from_ulong(0b010), Bitset::from_ulong(0b010)), Bitset::from_ulong(0b100), uint64_t{0}))); // NOLINT
  // clang-format on
  REQUIRE(cea.initial_state == 0b010);  // NOLINT
  REQUIRE(cea.final_states == 0b001);   // NOLINT
}




TEST_CASE("Allen Overlap Simple Construction",
          "[LogicalCEA To CEA - Overlap]") {
  Catalog catalog;
  Types::StreamInfo stream_info = catalog.add_stream_type({"S", {{"H", {}}, {"S", {}}}});

  auto query1 = Parsing::QueryParser::parse_query(create_query("H"), catalog);
  QueryCatalog query_catalog1(catalog, query1);
  auto visitor1 = FormulaToLogicalCEA(query_catalog1);
  query1.where.formula->accept_visitor(visitor1);
  CEA::LogicalCEA cea_left = visitor1.current_cea;

  auto query2 = Parsing::QueryParser::parse_query(create_query("S"), catalog);
  QueryCatalog query_catalog2(catalog, query2);
  auto visitor2 = FormulaToLogicalCEA(query_catalog2);
  query2.where.formula->accept_visitor(visitor2);
  CEA::LogicalCEA cea_right = visitor2.current_cea;

  const uint64_t left_n = cea_left.amount_of_states;
  const uint64_t right_n = cea_right.amount_of_states;

  INFO("Left CEA:\n" << cea_left.to_string_visualization());
  INFO("Right CEA:\n" << cea_right.to_string_visualization());

  CEA::AllenOverlap overlap;
  CEA::LogicalCEA logical_cea = overlap.eval(std::move(cea_left), std::move(cea_right));

  INFO("Overlap LogicalCEA:\n" << logical_cea.to_string_visualization());

  REQUIRE(logical_cea.amount_of_states == 8);  // NOLINT
  REQUIRE(logical_cea.initial_states.test(0));  // NOLINT
  REQUIRE(logical_cea.final_states.test(3));  // NOLINT

  REQUIRE(logical_cea.epsilon_transitions[0].contains(4)); // NOLINT
  REQUIRE(logical_cea.epsilon_transitions[1].contains(6)); // NOLINT
  REQUIRE(logical_cea.epsilon_transitions[6].contains(2)); // NOLINT
  REQUIRE(logical_cea.epsilon_transitions[7].contains(3)); // NOLINT

  bool has_left_to_product_epsilon = false;
  for (size_t i = 0; i < left_n; ++i) {
    if (!logical_cea.epsilon_transitions[i].empty()) {
      has_left_to_product_epsilon = true;
      break;
    }
  }
  REQUIRE(has_left_to_product_epsilon);  // NOLINT

  const uint64_t left_right_n_states = left_n + right_n;
  const uint64_t product_count = left_n * right_n;

  bool has_product_to_right_epsilon = false;
  for (size_t i = left_right_n_states; i < left_right_n_states + product_count; ++i) {
    if (!logical_cea.epsilon_transitions[i].empty()) {
      has_product_to_right_epsilon = true;
      break;
    }
  }
  REQUIRE(has_product_to_right_epsilon);  // NOLINT

  auto cea = CEA::CEA(std::move(logical_cea));
  INFO("Overlap CEA:\n" << cea.to_string());

  REQUIRE(cea.amount_of_states == 4);           // NOLINT
  REQUIRE(cea.initial_state == 3);              // NOLINT
  REQUIRE(cea.final_states == 0b0110);          // NOLINT
  REQUIRE(cea.transitions[0].size() == 1);      // NOLINT
  REQUIRE(cea.transitions[3].size() == 2);      // NOLINT

  REQUIRE(cea.transitions[0].contains(std::make_tuple(
    CEA::PredicateSet(Bitset::from_ulong(0b100), Bitset::from_ulong(0b100)),
    Bitset::from_ulong(0b1000), uint64_t{1}))); // NOLINT

  REQUIRE(cea.transitions[3].contains(std::make_tuple(
    CEA::PredicateSet(Bitset::from_ulong(0b010), Bitset::from_ulong(0b010)),
    Bitset::from_ulong(0b0100), uint64_t{0}))); // NOLINT

  REQUIRE(cea.transitions[3].contains(std::make_tuple(
    CEA::PredicateSet(Bitset::from_ulong(0b110), Bitset::from_ulong(0b110)),
    Bitset::from_ulong(0b1100), uint64_t{2}))); // NOLINT

}


TEST_CASE("Allen Overlap with Sequencing Formulas",
          "[LogicalCEA To CEA - Overlap]") {
  Catalog catalog;
  Types::StreamInfo stream_info =
      catalog.add_stream_type({"S", {{"H", {}}, {"S", {}}}});

  auto query1 = Parsing::QueryParser::parse_query(create_query("(H ; S)"), catalog);
  QueryCatalog query_catalog1(catalog, query1);
  auto visitor1 = FormulaToLogicalCEA(query_catalog1);
  query1.where.formula->accept_visitor(visitor1);
  CEA::LogicalCEA cea_left = visitor1.current_cea;

  auto query2 = Parsing::QueryParser::parse_query(create_query("(S ; H)"), catalog);
  QueryCatalog query_catalog2(catalog, query2);
  auto visitor2 = FormulaToLogicalCEA(query_catalog2);
  query2.where.formula->accept_visitor(visitor2);
  CEA::LogicalCEA cea_right = visitor2.current_cea;

  const uint64_t left_n = cea_left.amount_of_states;
  const uint64_t right_n = cea_right.amount_of_states;

  INFO("Left LogicalCEA:\n" << cea_left.to_string_visualization());
  INFO("Right LogicalCEA:\n" << cea_right.to_string_visualization());

  CEA::AllenOverlap overlap;
  CEA::LogicalCEA logical_cea = overlap.eval(std::move(cea_left), std::move(cea_right));

  INFO("Overlap LogicalCEA:\n" << logical_cea.to_string_visualization());

  REQUIRE(logical_cea.amount_of_states == 24);       // NOLINT

  auto cea = CEA::CEA(std::move(logical_cea));
  INFO("Overlap CEA:\n" << cea.to_string());

}


// TEST_CASE("Allen Overlap with Iterative Formulas",
//           "[LogicalCEA To CEA - Overlap]") {
//   Catalog catalog;
//   Types::StreamInfo stream_info =
//       catalog.add_stream_type({"S", {{"H", {}}, {"S", {}}}});

//   auto query1 = Parsing::QueryParser::parse_query(create_query("H+"), catalog);
//   QueryCatalog query_catalog1(catalog, query1);
//   auto visitor1 = FormulaToLogicalCEA(query_catalog1);
//   query1.where.formula->accept_visitor(visitor1);
//   CEA::LogicalCEA cea_left = visitor1.current_cea;

//   auto query2 = Parsing::QueryParser::parse_query(create_query("S+"), catalog);
//   QueryCatalog query_catalog2(catalog, query2);
//   auto visitor2 = FormulaToLogicalCEA(query_catalog2);
//   query2.where.formula->accept_visitor(visitor2);
//   CEA::LogicalCEA cea_right = visitor2.current_cea;

//   const uint64_t left_n = cea_left.amount_of_states;
//   const uint64_t right_n = cea_right.amount_of_states;

//   INFO("Left LogicalCEA (H+):\n" << cea_left.to_string_visualization());
//   INFO("Right LogicalCEA (S+):\n" << cea_right.to_string_visualization());

//   CEA::AllenOverlap overlap;
//   CEA::LogicalCEA logical_cea = overlap.eval(std::move(cea_left), std::move(cea_right));

//   INFO("Overlap LogicalCEA:\n" << logical_cea.to_string_visualization());

//   REQUIRE(logical_cea.amount_of_states == 15);       // NOLINT

//   auto cea = CEA::CEA(std::move(logical_cea));
//   INFO("Overlap CEA:\n" << cea.to_string());

// }


// TEST_CASE("Allen Overlap Applied Twice",
//           "[LogicalCEA To CEA - Overlap]") {
//   Catalog catalog;
//   Types::StreamInfo stream_info =
//       catalog.add_stream_type({"S", {{"H", {}}, {"S", {}}}});

//   auto query_h = Parsing::QueryParser::parse_query(create_query("H"), catalog);
//   QueryCatalog query_catalog_h(catalog, query_h);
//   auto visitor_h = FormulaToLogicalCEA(query_catalog_h);
//   query_h.where.formula->accept_visitor(visitor_h);
//   CEA::LogicalCEA cea_h = visitor_h.current_cea;

//   auto query_s = Parsing::QueryParser::parse_query(create_query("S"), catalog);
//   QueryCatalog query_catalog_s(catalog, query_s);
//   auto visitor_s = FormulaToLogicalCEA(query_catalog_s);
//   query_s.where.formula->accept_visitor(visitor_s);
//   CEA::LogicalCEA cea_s = visitor_s.current_cea;

//   CEA::AllenOverlap overlap;

//   CEA::LogicalCEA overlap_1 = overlap.eval(std::move(cea_h), std::move(cea_s));
//   INFO("First overlap LogicalCEA:\n" << overlap_1.to_string_visualization());
//   REQUIRE(overlap_1.amount_of_states > 0);  // NOLINT

//   auto query_h2 = Parsing::QueryParser::parse_query(create_query("H"), catalog);
//   QueryCatalog query_catalog_h2(catalog, query_h2);
//   auto visitor_h2 = FormulaToLogicalCEA(query_catalog_h2);
//   query_h2.where.formula->accept_visitor(visitor_h2);
//   CEA::LogicalCEA cea_h2 = visitor_h2.current_cea;

//   const uint64_t left_n = overlap_1.amount_of_states;
//   const uint64_t right_n = cea_h2.amount_of_states;

//   CEA::LogicalCEA overlap_2 = overlap.eval(std::move(overlap_1), std::move(cea_h2));
//   INFO("Second overlap LogicalCEA:\n" << overlap_2.to_string_visualization());

//   REQUIRE(overlap_2.amount_of_states == 26);         // NOLINT

//   auto cea = CEA::CEA(std::move(overlap_2));
//   INFO("Second overlap CEA:\n" << cea.to_string());
  
// }

}  // namespace CORE::Internal::CEQL::UnitTests::CEAConstructionFromLogicalCEA
