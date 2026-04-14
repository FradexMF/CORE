
// Generated from CEQLQueryParser.g4 by ANTLR 4.12.0


#include "CEQLQueryParserVisitor.h"

#include "CEQLQueryParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CEQLQueryParserStaticData final {
  CEQLQueryParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CEQLQueryParserStaticData(const CEQLQueryParserStaticData&) = delete;
  CEQLQueryParserStaticData(CEQLQueryParserStaticData&&) = delete;
  CEQLQueryParserStaticData& operator=(const CEQLQueryParserStaticData&) = delete;
  CEQLQueryParserStaticData& operator=(CEQLQueryParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ceqlqueryparserParserOnceFlag;
CEQLQueryParserStaticData *ceqlqueryparserParserStaticData = nullptr;

void ceqlqueryparserParserInitialize() {
  assert(ceqlqueryparserParserStaticData == nullptr);
  auto staticData = std::make_unique<CEQLQueryParserStaticData>(
    std::vector<std::string>{
      "parse", "error", "core_query", "selection_strategy", "list_of_variables", 
      "from_clause", "cel_formula", "partition_list", "attribute_list", 
      "consumption_policy", "limit", "filter", "predicate", "string_literal", 
      "math_expr", "value_seq", "number_seq", "string_seq", "time_window", 
      "event_span", "time_span", "hour_span", "minute_span", "second_span", 
      "custom_span", "named_event", "s_event_name_with_projection", "s_event_name", 
      "event_name", "atomic_cel_formula", "stream_name", "list_of_attribute_names", 
      "attribute_name", "integer", "double", "number", "string", "any_name", 
      "keyword"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'%'", 
      "'+'", "'-'", "'*'", "'/'", "'<'", "'<='", "'>'", "'>='", "", "", 
      "';'", "':'", "','", "'..'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
      "':+'", "':o'"
    },
    std::vector<std::string>{
      "", "K_ALL", "K_AND", "K_ANY", "K_AS", "K_BY", "K_CONSUME", "K_LIMIT", 
      "K_DISTINCT", "K_EVENT", "K_EVENTS", "K_FILTER", "K_FROM", "K_HOURS", 
      "K_IN", "K_LAST", "K_LIKE", "K_MAX", "K_MINUTES", "K_NEXT", "K_NONE", 
      "K_NOT", "K_OR", "K_PARTITION", "K_RANGE", "K_SECONDS", "K_SELECT", 
      "K_STREAM", "K_STRICT", "K_UNLESS", "K_WHERE", "K_WITHIN", "PERCENT", 
      "PLUS", "MINUS", "STAR", "SLASH", "LE", "LEQ", "GE", "GEQ", "EQ", 
      "NEQ", "SEMICOLON", "COLON", "COMMA", "DOUBLE_DOT", "LEFT_PARENTHESIS", 
      "RIGHT_PARENTHESIS", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", 
      "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "COLON_PLUS", "COLON_O", 
      "IDENTIFIER", "DOUBLE_LITERAL", "INTEGER_LITERAL", "NUMERICAL_EXPONENT", 
      "STRING_LITERAL", "SINGLE_LINE_COMMENT", "MULTILINE_COMMENT", "SPACES", 
      "UNEXPECTED_CHAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,63,441,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,1,0,1,0,5,0,81,8,0,10,0,12,0,84,9,0,
  	1,0,1,0,1,1,1,1,1,1,1,2,1,2,3,2,93,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,
  	2,102,8,2,1,2,1,2,3,2,106,8,2,1,2,1,2,1,2,3,2,111,8,2,1,2,1,2,3,2,115,
  	8,2,1,3,1,3,1,3,1,3,1,3,1,3,3,3,123,8,3,1,4,1,4,1,4,1,4,1,4,5,4,130,8,
  	4,10,4,12,4,133,9,4,3,4,135,8,4,1,5,1,5,1,5,1,5,5,5,141,8,5,10,5,12,5,
  	144,9,5,3,5,146,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,159,
  	8,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,5,6,183,8,6,10,6,12,6,186,9,6,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,3,7,196,8,7,1,8,1,8,1,8,5,8,201,8,8,10,8,12,8,204,9,8,1,
  	9,1,9,1,9,3,9,209,8,9,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,3,11,223,8,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,231,8,11,
  	10,11,12,11,234,9,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,
  	259,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,
  	272,8,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,280,8,12,10,12,12,12,283,
  	9,12,1,13,1,13,3,13,287,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,3,14,298,8,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,306,8,14,10,14,
  	12,14,309,9,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,319,8,15,
  	1,16,1,16,1,16,5,16,324,8,16,10,16,12,16,327,9,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,342,8,16,1,17,1,17,
  	1,17,5,17,347,8,17,10,17,12,17,350,9,17,1,18,1,18,1,18,3,18,355,8,18,
  	1,19,1,19,1,19,1,20,3,20,361,8,20,1,20,3,20,364,8,20,1,20,3,20,367,8,
  	20,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,
  	24,1,25,1,25,1,25,3,25,386,8,25,1,26,1,26,1,26,1,26,1,26,3,26,393,8,26,
  	1,27,1,27,1,27,3,27,398,8,27,1,27,1,27,1,28,1,28,1,29,1,29,1,29,1,29,
  	1,29,1,29,5,29,410,8,29,10,29,12,29,413,9,29,1,30,1,30,1,31,1,31,1,31,
  	5,31,420,8,31,10,31,12,31,423,9,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,
  	1,35,3,35,433,8,35,1,36,1,36,1,37,1,37,1,38,1,38,1,38,0,5,12,22,24,28,
  	58,39,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,0,5,1,0,37,42,1,0,41,
  	42,1,0,33,34,2,0,32,32,35,36,2,0,1,6,8,31,468,0,82,1,0,0,0,2,87,1,0,0,
  	0,4,90,1,0,0,0,6,122,1,0,0,0,8,134,1,0,0,0,10,145,1,0,0,0,12,158,1,0,
  	0,0,14,187,1,0,0,0,16,197,1,0,0,0,18,208,1,0,0,0,20,210,1,0,0,0,22,222,
  	1,0,0,0,24,271,1,0,0,0,26,286,1,0,0,0,28,297,1,0,0,0,30,318,1,0,0,0,32,
  	341,1,0,0,0,34,343,1,0,0,0,36,354,1,0,0,0,38,356,1,0,0,0,40,360,1,0,0,
  	0,42,368,1,0,0,0,44,371,1,0,0,0,46,374,1,0,0,0,48,377,1,0,0,0,50,382,
  	1,0,0,0,52,387,1,0,0,0,54,397,1,0,0,0,56,401,1,0,0,0,58,403,1,0,0,0,60,
  	414,1,0,0,0,62,416,1,0,0,0,64,424,1,0,0,0,66,426,1,0,0,0,68,428,1,0,0,
  	0,70,432,1,0,0,0,72,434,1,0,0,0,74,436,1,0,0,0,76,438,1,0,0,0,78,81,3,
  	4,2,0,79,81,3,2,1,0,80,78,1,0,0,0,80,79,1,0,0,0,81,84,1,0,0,0,82,80,1,
  	0,0,0,82,83,1,0,0,0,83,85,1,0,0,0,84,82,1,0,0,0,85,86,5,0,0,1,86,1,1,
  	0,0,0,87,88,5,63,0,0,88,89,6,1,-1,0,89,3,1,0,0,0,90,92,5,26,0,0,91,93,
  	3,6,3,0,92,91,1,0,0,0,92,93,1,0,0,0,93,94,1,0,0,0,94,95,3,8,4,0,95,96,
  	3,10,5,0,96,97,5,30,0,0,97,101,3,12,6,0,98,99,5,23,0,0,99,100,5,5,0,0,
  	100,102,3,14,7,0,101,98,1,0,0,0,101,102,1,0,0,0,102,105,1,0,0,0,103,104,
  	5,31,0,0,104,106,3,36,18,0,105,103,1,0,0,0,105,106,1,0,0,0,106,110,1,
  	0,0,0,107,108,5,6,0,0,108,109,5,5,0,0,109,111,3,18,9,0,110,107,1,0,0,
  	0,110,111,1,0,0,0,111,114,1,0,0,0,112,113,5,7,0,0,113,115,3,20,10,0,114,
  	112,1,0,0,0,114,115,1,0,0,0,115,5,1,0,0,0,116,123,5,1,0,0,117,123,5,3,
  	0,0,118,123,5,15,0,0,119,123,5,17,0,0,120,123,5,19,0,0,121,123,5,28,0,
  	0,122,116,1,0,0,0,122,117,1,0,0,0,122,118,1,0,0,0,122,119,1,0,0,0,122,
  	120,1,0,0,0,122,121,1,0,0,0,123,7,1,0,0,0,124,135,5,35,0,0,125,135,5,
  	20,0,0,126,131,3,52,26,0,127,128,5,45,0,0,128,130,3,52,26,0,129,127,1,
  	0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,132,135,1,0,0,0,
  	133,131,1,0,0,0,134,124,1,0,0,0,134,125,1,0,0,0,134,126,1,0,0,0,135,9,
  	1,0,0,0,136,137,5,12,0,0,137,142,3,60,30,0,138,139,5,45,0,0,139,141,3,
  	60,30,0,140,138,1,0,0,0,141,144,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,
  	0,143,146,1,0,0,0,144,142,1,0,0,0,145,136,1,0,0,0,145,146,1,0,0,0,146,
  	11,1,0,0,0,147,148,6,6,-1,0,148,149,5,47,0,0,149,150,3,12,6,0,150,151,
  	5,48,0,0,151,159,1,0,0,0,152,159,3,54,27,0,153,154,5,21,0,0,154,155,5,
  	47,0,0,155,156,3,58,29,0,156,157,5,48,0,0,157,159,1,0,0,0,158,147,1,0,
  	0,0,158,152,1,0,0,0,158,153,1,0,0,0,159,184,1,0,0,0,160,161,10,5,0,0,
  	161,162,5,43,0,0,162,183,3,12,6,6,163,164,10,4,0,0,164,165,5,44,0,0,165,
  	183,3,12,6,5,166,167,10,3,0,0,167,168,5,22,0,0,168,183,3,12,6,4,169,170,
  	10,1,0,0,170,171,5,54,0,0,171,183,3,12,6,2,172,173,10,8,0,0,173,174,5,
  	4,0,0,174,183,3,56,28,0,175,176,10,7,0,0,176,183,5,33,0,0,177,178,10,
  	6,0,0,178,183,5,53,0,0,179,180,10,2,0,0,180,181,5,11,0,0,181,183,3,22,
  	11,0,182,160,1,0,0,0,182,163,1,0,0,0,182,166,1,0,0,0,182,169,1,0,0,0,
  	182,172,1,0,0,0,182,175,1,0,0,0,182,177,1,0,0,0,182,179,1,0,0,0,183,186,
  	1,0,0,0,184,182,1,0,0,0,184,185,1,0,0,0,185,13,1,0,0,0,186,184,1,0,0,
  	0,187,188,5,49,0,0,188,189,3,16,8,0,189,195,5,50,0,0,190,191,5,45,0,0,
  	191,192,5,49,0,0,192,193,3,16,8,0,193,194,5,50,0,0,194,196,1,0,0,0,195,
  	190,1,0,0,0,195,196,1,0,0,0,196,15,1,0,0,0,197,202,3,64,32,0,198,199,
  	5,45,0,0,199,201,3,64,32,0,200,198,1,0,0,0,201,204,1,0,0,0,202,200,1,
  	0,0,0,202,203,1,0,0,0,203,17,1,0,0,0,204,202,1,0,0,0,205,209,5,3,0,0,
  	206,209,5,23,0,0,207,209,5,20,0,0,208,205,1,0,0,0,208,206,1,0,0,0,208,
  	207,1,0,0,0,209,19,1,0,0,0,210,211,3,66,33,0,211,21,1,0,0,0,212,213,6,
  	11,-1,0,213,214,5,47,0,0,214,215,3,22,11,0,215,216,5,48,0,0,216,223,1,
  	0,0,0,217,218,3,54,27,0,218,219,5,49,0,0,219,220,3,24,12,0,220,221,5,
  	50,0,0,221,223,1,0,0,0,222,212,1,0,0,0,222,217,1,0,0,0,223,232,1,0,0,
  	0,224,225,10,2,0,0,225,226,5,2,0,0,226,231,3,22,11,3,227,228,10,1,0,0,
  	228,229,5,22,0,0,229,231,3,22,11,2,230,224,1,0,0,0,230,227,1,0,0,0,231,
  	234,1,0,0,0,232,230,1,0,0,0,232,233,1,0,0,0,233,23,1,0,0,0,234,232,1,
  	0,0,0,235,236,6,12,-1,0,236,237,5,47,0,0,237,238,3,24,12,0,238,239,5,
  	48,0,0,239,272,1,0,0,0,240,241,5,21,0,0,241,272,3,24,12,8,242,243,3,28,
  	14,0,243,244,7,0,0,0,244,245,3,28,14,0,245,272,1,0,0,0,246,247,3,26,13,
  	0,247,248,7,1,0,0,248,249,3,26,13,0,249,272,1,0,0,0,250,251,3,64,32,0,
  	251,252,5,16,0,0,252,253,3,26,13,0,253,272,1,0,0,0,254,258,3,64,32,0,
  	255,259,5,14,0,0,256,257,5,21,0,0,257,259,5,14,0,0,258,255,1,0,0,0,258,
  	256,1,0,0,0,259,260,1,0,0,0,260,261,3,30,15,0,261,272,1,0,0,0,262,263,
  	3,28,14,0,263,264,5,14,0,0,264,265,5,24,0,0,265,266,5,47,0,0,266,267,
  	3,28,14,0,267,268,5,45,0,0,268,269,3,28,14,0,269,270,5,48,0,0,270,272,
  	1,0,0,0,271,235,1,0,0,0,271,240,1,0,0,0,271,242,1,0,0,0,271,246,1,0,0,
  	0,271,250,1,0,0,0,271,254,1,0,0,0,271,262,1,0,0,0,272,281,1,0,0,0,273,
  	274,10,5,0,0,274,275,5,2,0,0,275,280,3,24,12,6,276,277,10,4,0,0,277,278,
  	5,22,0,0,278,280,3,24,12,5,279,273,1,0,0,0,279,276,1,0,0,0,280,283,1,
  	0,0,0,281,279,1,0,0,0,281,282,1,0,0,0,282,25,1,0,0,0,283,281,1,0,0,0,
  	284,287,3,72,36,0,285,287,3,64,32,0,286,284,1,0,0,0,286,285,1,0,0,0,287,
  	27,1,0,0,0,288,289,6,14,-1,0,289,290,5,47,0,0,290,291,3,28,14,0,291,292,
  	5,48,0,0,292,298,1,0,0,0,293,298,3,70,35,0,294,298,3,64,32,0,295,296,
  	7,2,0,0,296,298,3,28,14,3,297,288,1,0,0,0,297,293,1,0,0,0,297,294,1,0,
  	0,0,297,295,1,0,0,0,298,307,1,0,0,0,299,300,10,2,0,0,300,301,7,3,0,0,
  	301,306,3,28,14,3,302,303,10,1,0,0,303,304,7,2,0,0,304,306,3,28,14,2,
  	305,299,1,0,0,0,305,302,1,0,0,0,306,309,1,0,0,0,307,305,1,0,0,0,307,308,
  	1,0,0,0,308,29,1,0,0,0,309,307,1,0,0,0,310,311,5,51,0,0,311,312,3,32,
  	16,0,312,313,5,52,0,0,313,319,1,0,0,0,314,315,5,51,0,0,315,316,3,34,17,
  	0,316,317,5,52,0,0,317,319,1,0,0,0,318,310,1,0,0,0,318,314,1,0,0,0,319,
  	31,1,0,0,0,320,325,3,70,35,0,321,322,5,45,0,0,322,324,3,70,35,0,323,321,
  	1,0,0,0,324,327,1,0,0,0,325,323,1,0,0,0,325,326,1,0,0,0,326,342,1,0,0,
  	0,327,325,1,0,0,0,328,329,3,66,33,0,329,330,5,46,0,0,330,331,3,66,33,
  	0,331,342,1,0,0,0,332,333,3,68,34,0,333,334,5,46,0,0,334,335,3,68,34,
  	0,335,342,1,0,0,0,336,337,3,70,35,0,337,338,5,46,0,0,338,342,1,0,0,0,
  	339,340,5,46,0,0,340,342,3,70,35,0,341,320,1,0,0,0,341,328,1,0,0,0,341,
  	332,1,0,0,0,341,336,1,0,0,0,341,339,1,0,0,0,342,33,1,0,0,0,343,348,3,
  	72,36,0,344,345,5,45,0,0,345,347,3,72,36,0,346,344,1,0,0,0,347,350,1,
  	0,0,0,348,346,1,0,0,0,348,349,1,0,0,0,349,35,1,0,0,0,350,348,1,0,0,0,
  	351,355,3,38,19,0,352,355,3,40,20,0,353,355,3,48,24,0,354,351,1,0,0,0,
  	354,352,1,0,0,0,354,353,1,0,0,0,355,37,1,0,0,0,356,357,3,66,33,0,357,
  	358,5,10,0,0,358,39,1,0,0,0,359,361,3,42,21,0,360,359,1,0,0,0,360,361,
  	1,0,0,0,361,363,1,0,0,0,362,364,3,44,22,0,363,362,1,0,0,0,363,364,1,0,
  	0,0,364,366,1,0,0,0,365,367,3,46,23,0,366,365,1,0,0,0,366,367,1,0,0,0,
  	367,41,1,0,0,0,368,369,3,70,35,0,369,370,5,13,0,0,370,43,1,0,0,0,371,
  	372,3,70,35,0,372,373,5,18,0,0,373,45,1,0,0,0,374,375,3,70,35,0,375,376,
  	5,25,0,0,376,47,1,0,0,0,377,378,3,66,33,0,378,379,5,49,0,0,379,380,3,
  	74,37,0,380,381,5,50,0,0,381,49,1,0,0,0,382,385,3,54,27,0,383,384,5,4,
  	0,0,384,386,3,56,28,0,385,383,1,0,0,0,385,386,1,0,0,0,386,51,1,0,0,0,
  	387,392,3,54,27,0,388,389,5,49,0,0,389,390,3,62,31,0,390,391,5,50,0,0,
  	391,393,1,0,0,0,392,388,1,0,0,0,392,393,1,0,0,0,393,53,1,0,0,0,394,395,
  	3,60,30,0,395,396,5,39,0,0,396,398,1,0,0,0,397,394,1,0,0,0,397,398,1,
  	0,0,0,398,399,1,0,0,0,399,400,3,56,28,0,400,55,1,0,0,0,401,402,3,74,37,
  	0,402,57,1,0,0,0,403,404,6,29,-1,0,404,405,3,54,27,0,405,411,1,0,0,0,
  	406,407,10,1,0,0,407,408,5,11,0,0,408,410,3,22,11,0,409,406,1,0,0,0,410,
  	413,1,0,0,0,411,409,1,0,0,0,411,412,1,0,0,0,412,59,1,0,0,0,413,411,1,
  	0,0,0,414,415,3,74,37,0,415,61,1,0,0,0,416,421,3,64,32,0,417,418,5,45,
  	0,0,418,420,3,64,32,0,419,417,1,0,0,0,420,423,1,0,0,0,421,419,1,0,0,0,
  	421,422,1,0,0,0,422,63,1,0,0,0,423,421,1,0,0,0,424,425,3,74,37,0,425,
  	65,1,0,0,0,426,427,5,57,0,0,427,67,1,0,0,0,428,429,5,56,0,0,429,69,1,
  	0,0,0,430,433,3,66,33,0,431,433,3,68,34,0,432,430,1,0,0,0,432,431,1,0,
  	0,0,433,71,1,0,0,0,434,435,5,59,0,0,435,73,1,0,0,0,436,437,5,55,0,0,437,
  	75,1,0,0,0,438,439,7,4,0,0,439,77,1,0,0,0,43,80,82,92,101,105,110,114,
  	122,131,134,142,145,158,182,184,195,202,208,222,230,232,258,271,279,281,
  	286,297,305,307,318,325,341,348,354,360,363,366,385,392,397,411,421,432
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ceqlqueryparserParserStaticData = staticData.release();
}

}

CEQLQueryParser::CEQLQueryParser(TokenStream *input) : CEQLQueryParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CEQLQueryParser::CEQLQueryParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CEQLQueryParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ceqlqueryparserParserStaticData->atn, ceqlqueryparserParserStaticData->decisionToDFA, ceqlqueryparserParserStaticData->sharedContextCache, options);
}

CEQLQueryParser::~CEQLQueryParser() {
  delete _interpreter;
}

const atn::ATN& CEQLQueryParser::getATN() const {
  return *ceqlqueryparserParserStaticData->atn;
}

std::string CEQLQueryParser::getGrammarFileName() const {
  return "CEQLQueryParser.g4";
}

const std::vector<std::string>& CEQLQueryParser::getRuleNames() const {
  return ceqlqueryparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& CEQLQueryParser::getVocabulary() const {
  return ceqlqueryparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CEQLQueryParser::getSerializedATN() const {
  return ceqlqueryparserParserStaticData->serializedATN;
}


//----------------- ParseContext ------------------------------------------------------------------

CEQLQueryParser::ParseContext::ParseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::ParseContext::EOF() {
  return getToken(CEQLQueryParser::EOF, 0);
}

std::vector<CEQLQueryParser::Core_queryContext *> CEQLQueryParser::ParseContext::core_query() {
  return getRuleContexts<CEQLQueryParser::Core_queryContext>();
}

CEQLQueryParser::Core_queryContext* CEQLQueryParser::ParseContext::core_query(size_t i) {
  return getRuleContext<CEQLQueryParser::Core_queryContext>(i);
}

std::vector<CEQLQueryParser::ErrorContext *> CEQLQueryParser::ParseContext::error() {
  return getRuleContexts<CEQLQueryParser::ErrorContext>();
}

CEQLQueryParser::ErrorContext* CEQLQueryParser::ParseContext::error(size_t i) {
  return getRuleContext<CEQLQueryParser::ErrorContext>(i);
}


size_t CEQLQueryParser::ParseContext::getRuleIndex() const {
  return CEQLQueryParser::RuleParse;
}


std::any CEQLQueryParser::ParseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitParse(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::ParseContext* CEQLQueryParser::parse() {
  ParseContext *_localctx = _tracker.createInstance<ParseContext>(_ctx, getState());
  enterRule(_localctx, 0, CEQLQueryParser::RuleParse);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CEQLQueryParser::K_SELECT

    || _la == CEQLQueryParser::UNEXPECTED_CHAR) {
      setState(80);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CEQLQueryParser::K_SELECT: {
          setState(78);
          core_query();
          break;
        }

        case CEQLQueryParser::UNEXPECTED_CHAR: {
          setState(79);
          error();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(85);
    match(CEQLQueryParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorContext ------------------------------------------------------------------

CEQLQueryParser::ErrorContext::ErrorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::ErrorContext::UNEXPECTED_CHAR() {
  return getToken(CEQLQueryParser::UNEXPECTED_CHAR, 0);
}


size_t CEQLQueryParser::ErrorContext::getRuleIndex() const {
  return CEQLQueryParser::RuleError;
}


std::any CEQLQueryParser::ErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitError(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::ErrorContext* CEQLQueryParser::error() {
  ErrorContext *_localctx = _tracker.createInstance<ErrorContext>(_ctx, getState());
  enterRule(_localctx, 2, CEQLQueryParser::RuleError);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    antlrcpp::downCast<ErrorContext *>(_localctx)->unexpected_charToken = match(CEQLQueryParser::UNEXPECTED_CHAR);

         throw new RuntimeException("UNEXPECTED_CHAR=" + (antlrcpp::downCast<ErrorContext *>(_localctx)->unexpected_charToken != nullptr ? antlrcpp::downCast<ErrorContext *>(_localctx)->unexpected_charToken->getText() : ""));
       
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Core_queryContext ------------------------------------------------------------------

CEQLQueryParser::Core_queryContext::Core_queryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::Core_queryContext::K_SELECT() {
  return getToken(CEQLQueryParser::K_SELECT, 0);
}

CEQLQueryParser::List_of_variablesContext* CEQLQueryParser::Core_queryContext::list_of_variables() {
  return getRuleContext<CEQLQueryParser::List_of_variablesContext>(0);
}

CEQLQueryParser::From_clauseContext* CEQLQueryParser::Core_queryContext::from_clause() {
  return getRuleContext<CEQLQueryParser::From_clauseContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Core_queryContext::K_WHERE() {
  return getToken(CEQLQueryParser::K_WHERE, 0);
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Core_queryContext::cel_formula() {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(0);
}

CEQLQueryParser::Selection_strategyContext* CEQLQueryParser::Core_queryContext::selection_strategy() {
  return getRuleContext<CEQLQueryParser::Selection_strategyContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Core_queryContext::K_PARTITION() {
  return getToken(CEQLQueryParser::K_PARTITION, 0);
}

std::vector<tree::TerminalNode *> CEQLQueryParser::Core_queryContext::K_BY() {
  return getTokens(CEQLQueryParser::K_BY);
}

tree::TerminalNode* CEQLQueryParser::Core_queryContext::K_BY(size_t i) {
  return getToken(CEQLQueryParser::K_BY, i);
}

CEQLQueryParser::Partition_listContext* CEQLQueryParser::Core_queryContext::partition_list() {
  return getRuleContext<CEQLQueryParser::Partition_listContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Core_queryContext::K_WITHIN() {
  return getToken(CEQLQueryParser::K_WITHIN, 0);
}

CEQLQueryParser::Time_windowContext* CEQLQueryParser::Core_queryContext::time_window() {
  return getRuleContext<CEQLQueryParser::Time_windowContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Core_queryContext::K_CONSUME() {
  return getToken(CEQLQueryParser::K_CONSUME, 0);
}

CEQLQueryParser::Consumption_policyContext* CEQLQueryParser::Core_queryContext::consumption_policy() {
  return getRuleContext<CEQLQueryParser::Consumption_policyContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Core_queryContext::K_LIMIT() {
  return getToken(CEQLQueryParser::K_LIMIT, 0);
}

CEQLQueryParser::LimitContext* CEQLQueryParser::Core_queryContext::limit() {
  return getRuleContext<CEQLQueryParser::LimitContext>(0);
}


size_t CEQLQueryParser::Core_queryContext::getRuleIndex() const {
  return CEQLQueryParser::RuleCore_query;
}


std::any CEQLQueryParser::Core_queryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitCore_query(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Core_queryContext* CEQLQueryParser::core_query() {
  Core_queryContext *_localctx = _tracker.createInstance<Core_queryContext>(_ctx, getState());
  enterRule(_localctx, 4, CEQLQueryParser::RuleCore_query);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(CEQLQueryParser::K_SELECT);
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 269123594) != 0)) {
      setState(91);
      selection_strategy();
    }
    setState(94);
    list_of_variables();
    setState(95);
    from_clause();
    setState(96);
    match(CEQLQueryParser::K_WHERE);
    setState(97);
    cel_formula(0);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::K_PARTITION) {
      setState(98);
      match(CEQLQueryParser::K_PARTITION);
      setState(99);
      match(CEQLQueryParser::K_BY);
      setState(100);
      partition_list();
    }
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::K_WITHIN) {
      setState(103);
      match(CEQLQueryParser::K_WITHIN);
      setState(104);
      time_window();
    }
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::K_CONSUME) {
      setState(107);
      match(CEQLQueryParser::K_CONSUME);
      setState(108);
      match(CEQLQueryParser::K_BY);
      setState(109);
      consumption_policy();
    }
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::K_LIMIT) {
      setState(112);
      match(CEQLQueryParser::K_LIMIT);
      setState(113);
      limit();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Selection_strategyContext ------------------------------------------------------------------

CEQLQueryParser::Selection_strategyContext::Selection_strategyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::Selection_strategyContext::getRuleIndex() const {
  return CEQLQueryParser::RuleSelection_strategy;
}

void CEQLQueryParser::Selection_strategyContext::copyFrom(Selection_strategyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Ss_lastContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Ss_lastContext::K_LAST() {
  return getToken(CEQLQueryParser::K_LAST, 0);
}

CEQLQueryParser::Ss_lastContext::Ss_lastContext(Selection_strategyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Ss_lastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitSs_last(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Ss_strictContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Ss_strictContext::K_STRICT() {
  return getToken(CEQLQueryParser::K_STRICT, 0);
}

CEQLQueryParser::Ss_strictContext::Ss_strictContext(Selection_strategyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Ss_strictContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitSs_strict(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Ss_anyContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Ss_anyContext::K_ANY() {
  return getToken(CEQLQueryParser::K_ANY, 0);
}

CEQLQueryParser::Ss_anyContext::Ss_anyContext(Selection_strategyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Ss_anyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitSs_any(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Ss_nextContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Ss_nextContext::K_NEXT() {
  return getToken(CEQLQueryParser::K_NEXT, 0);
}

CEQLQueryParser::Ss_nextContext::Ss_nextContext(Selection_strategyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Ss_nextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitSs_next(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Ss_maxContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Ss_maxContext::K_MAX() {
  return getToken(CEQLQueryParser::K_MAX, 0);
}

CEQLQueryParser::Ss_maxContext::Ss_maxContext(Selection_strategyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Ss_maxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitSs_max(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Ss_allContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Ss_allContext::K_ALL() {
  return getToken(CEQLQueryParser::K_ALL, 0);
}

CEQLQueryParser::Ss_allContext::Ss_allContext(Selection_strategyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Ss_allContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitSs_all(this);
  else
    return visitor->visitChildren(this);
}
CEQLQueryParser::Selection_strategyContext* CEQLQueryParser::selection_strategy() {
  Selection_strategyContext *_localctx = _tracker.createInstance<Selection_strategyContext>(_ctx, getState());
  enterRule(_localctx, 6, CEQLQueryParser::RuleSelection_strategy);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CEQLQueryParser::K_ALL: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Ss_allContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(116);
        match(CEQLQueryParser::K_ALL);
        break;
      }

      case CEQLQueryParser::K_ANY: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Ss_anyContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(117);
        match(CEQLQueryParser::K_ANY);
        break;
      }

      case CEQLQueryParser::K_LAST: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Ss_lastContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(118);
        match(CEQLQueryParser::K_LAST);
        break;
      }

      case CEQLQueryParser::K_MAX: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Ss_maxContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(119);
        match(CEQLQueryParser::K_MAX);
        break;
      }

      case CEQLQueryParser::K_NEXT: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Ss_nextContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(120);
        match(CEQLQueryParser::K_NEXT);
        break;
      }

      case CEQLQueryParser::K_STRICT: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Ss_strictContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(121);
        match(CEQLQueryParser::K_STRICT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_of_variablesContext ------------------------------------------------------------------

CEQLQueryParser::List_of_variablesContext::List_of_variablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::List_of_variablesContext::getRuleIndex() const {
  return CEQLQueryParser::RuleList_of_variables;
}

void CEQLQueryParser::List_of_variablesContext::copyFrom(List_of_variablesContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- S_starContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::S_starContext::STAR() {
  return getToken(CEQLQueryParser::STAR, 0);
}

CEQLQueryParser::S_starContext::S_starContext(List_of_variablesContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::S_starContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitS_star(this);
  else
    return visitor->visitChildren(this);
}
//----------------- S_event_name_with_projection_listContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::S_event_name_with_projectionContext *> CEQLQueryParser::S_event_name_with_projection_listContext::s_event_name_with_projection() {
  return getRuleContexts<CEQLQueryParser::S_event_name_with_projectionContext>();
}

CEQLQueryParser::S_event_name_with_projectionContext* CEQLQueryParser::S_event_name_with_projection_listContext::s_event_name_with_projection(size_t i) {
  return getRuleContext<CEQLQueryParser::S_event_name_with_projectionContext>(i);
}

std::vector<tree::TerminalNode *> CEQLQueryParser::S_event_name_with_projection_listContext::COMMA() {
  return getTokens(CEQLQueryParser::COMMA);
}

tree::TerminalNode* CEQLQueryParser::S_event_name_with_projection_listContext::COMMA(size_t i) {
  return getToken(CEQLQueryParser::COMMA, i);
}

CEQLQueryParser::S_event_name_with_projection_listContext::S_event_name_with_projection_listContext(List_of_variablesContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::S_event_name_with_projection_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitS_event_name_with_projection_list(this);
  else
    return visitor->visitChildren(this);
}
//----------------- S_noneContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::S_noneContext::K_NONE() {
  return getToken(CEQLQueryParser::K_NONE, 0);
}

CEQLQueryParser::S_noneContext::S_noneContext(List_of_variablesContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::S_noneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitS_none(this);
  else
    return visitor->visitChildren(this);
}
CEQLQueryParser::List_of_variablesContext* CEQLQueryParser::list_of_variables() {
  List_of_variablesContext *_localctx = _tracker.createInstance<List_of_variablesContext>(_ctx, getState());
  enterRule(_localctx, 8, CEQLQueryParser::RuleList_of_variables);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CEQLQueryParser::STAR: {
        _localctx = _tracker.createInstance<CEQLQueryParser::S_starContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(124);
        match(CEQLQueryParser::STAR);
        break;
      }

      case CEQLQueryParser::K_NONE: {
        _localctx = _tracker.createInstance<CEQLQueryParser::S_noneContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(125);
        match(CEQLQueryParser::K_NONE);
        break;
      }

      case CEQLQueryParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<CEQLQueryParser::S_event_name_with_projection_listContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(126);
        s_event_name_with_projection();
        setState(131);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CEQLQueryParser::COMMA) {
          setState(127);
          match(CEQLQueryParser::COMMA);
          setState(128);
          s_event_name_with_projection();
          setState(133);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- From_clauseContext ------------------------------------------------------------------

CEQLQueryParser::From_clauseContext::From_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::From_clauseContext::K_FROM() {
  return getToken(CEQLQueryParser::K_FROM, 0);
}

std::vector<CEQLQueryParser::Stream_nameContext *> CEQLQueryParser::From_clauseContext::stream_name() {
  return getRuleContexts<CEQLQueryParser::Stream_nameContext>();
}

CEQLQueryParser::Stream_nameContext* CEQLQueryParser::From_clauseContext::stream_name(size_t i) {
  return getRuleContext<CEQLQueryParser::Stream_nameContext>(i);
}

std::vector<tree::TerminalNode *> CEQLQueryParser::From_clauseContext::COMMA() {
  return getTokens(CEQLQueryParser::COMMA);
}

tree::TerminalNode* CEQLQueryParser::From_clauseContext::COMMA(size_t i) {
  return getToken(CEQLQueryParser::COMMA, i);
}


size_t CEQLQueryParser::From_clauseContext::getRuleIndex() const {
  return CEQLQueryParser::RuleFrom_clause;
}


std::any CEQLQueryParser::From_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitFrom_clause(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::From_clauseContext* CEQLQueryParser::from_clause() {
  From_clauseContext *_localctx = _tracker.createInstance<From_clauseContext>(_ctx, getState());
  enterRule(_localctx, 10, CEQLQueryParser::RuleFrom_clause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::K_FROM) {
      setState(136);
      match(CEQLQueryParser::K_FROM);
      setState(137);
      stream_name();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CEQLQueryParser::COMMA) {
        setState(138);
        match(CEQLQueryParser::COMMA);
        setState(139);
        stream_name();
        setState(144);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cel_formulaContext ------------------------------------------------------------------

CEQLQueryParser::Cel_formulaContext::Cel_formulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::Cel_formulaContext::getRuleIndex() const {
  return CEQLQueryParser::RuleCel_formula;
}

void CEQLQueryParser::Cel_formulaContext::copyFrom(Cel_formulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Contiguous_sequencing_cel_formulaContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Cel_formulaContext *> CEQLQueryParser::Contiguous_sequencing_cel_formulaContext::cel_formula() {
  return getRuleContexts<CEQLQueryParser::Cel_formulaContext>();
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Contiguous_sequencing_cel_formulaContext::cel_formula(size_t i) {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Contiguous_sequencing_cel_formulaContext::COLON() {
  return getToken(CEQLQueryParser::COLON, 0);
}

CEQLQueryParser::Contiguous_sequencing_cel_formulaContext::Contiguous_sequencing_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Contiguous_sequencing_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitContiguous_sequencing_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Not_event_type_atomic_cel_formulaContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Not_event_type_atomic_cel_formulaContext::K_NOT() {
  return getToken(CEQLQueryParser::K_NOT, 0);
}

tree::TerminalNode* CEQLQueryParser::Not_event_type_atomic_cel_formulaContext::LEFT_PARENTHESIS() {
  return getToken(CEQLQueryParser::LEFT_PARENTHESIS, 0);
}

CEQLQueryParser::Atomic_cel_formulaContext* CEQLQueryParser::Not_event_type_atomic_cel_formulaContext::atomic_cel_formula() {
  return getRuleContext<CEQLQueryParser::Atomic_cel_formulaContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Not_event_type_atomic_cel_formulaContext::RIGHT_PARENTHESIS() {
  return getToken(CEQLQueryParser::RIGHT_PARENTHESIS, 0);
}

CEQLQueryParser::Not_event_type_atomic_cel_formulaContext::Not_event_type_atomic_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Not_event_type_atomic_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNot_event_type_atomic_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Event_type_cel_formulaContext ------------------------------------------------------------------

CEQLQueryParser::S_event_nameContext* CEQLQueryParser::Event_type_cel_formulaContext::s_event_name() {
  return getRuleContext<CEQLQueryParser::S_event_nameContext>(0);
}

CEQLQueryParser::Event_type_cel_formulaContext::Event_type_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Event_type_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitEvent_type_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Contiguous_iteration_cel_formulaContext ------------------------------------------------------------------

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Contiguous_iteration_cel_formulaContext::cel_formula() {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Contiguous_iteration_cel_formulaContext::COLON_PLUS() {
  return getToken(CEQLQueryParser::COLON_PLUS, 0);
}

CEQLQueryParser::Contiguous_iteration_cel_formulaContext::Contiguous_iteration_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Contiguous_iteration_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitContiguous_iteration_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Par_cel_formulaContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Par_cel_formulaContext::LEFT_PARENTHESIS() {
  return getToken(CEQLQueryParser::LEFT_PARENTHESIS, 0);
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Par_cel_formulaContext::cel_formula() {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Par_cel_formulaContext::RIGHT_PARENTHESIS() {
  return getToken(CEQLQueryParser::RIGHT_PARENTHESIS, 0);
}

CEQLQueryParser::Par_cel_formulaContext::Par_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Par_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitPar_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Allen_overlap_formulaContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Cel_formulaContext *> CEQLQueryParser::Allen_overlap_formulaContext::cel_formula() {
  return getRuleContexts<CEQLQueryParser::Cel_formulaContext>();
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Allen_overlap_formulaContext::cel_formula(size_t i) {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Allen_overlap_formulaContext::COLON_O() {
  return getToken(CEQLQueryParser::COLON_O, 0);
}

CEQLQueryParser::Allen_overlap_formulaContext::Allen_overlap_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Allen_overlap_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAllen_overlap_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Filter_cel_formulaContext ------------------------------------------------------------------

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Filter_cel_formulaContext::cel_formula() {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Filter_cel_formulaContext::K_FILTER() {
  return getToken(CEQLQueryParser::K_FILTER, 0);
}

CEQLQueryParser::FilterContext* CEQLQueryParser::Filter_cel_formulaContext::filter() {
  return getRuleContext<CEQLQueryParser::FilterContext>(0);
}

CEQLQueryParser::Filter_cel_formulaContext::Filter_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Filter_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitFilter_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Allen_interval_algebra_overlapContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Cel_formulaContext *> CEQLQueryParser::Allen_interval_algebra_overlapContext::cel_formula() {
  return getRuleContexts<CEQLQueryParser::Cel_formulaContext>();
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Allen_interval_algebra_overlapContext::cel_formula(size_t i) {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Allen_interval_algebra_overlapContext::COLON_O() {
  return getToken(CEQLQueryParser::COLON_O, 0);
}

CEQLQueryParser::Allen_interval_algebra_overlapContext::Allen_interval_algebra_overlapContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Allen_interval_algebra_overlapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAllen_interval_algebra_overlap(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Or_cel_formulaContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Cel_formulaContext *> CEQLQueryParser::Or_cel_formulaContext::cel_formula() {
  return getRuleContexts<CEQLQueryParser::Cel_formulaContext>();
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Or_cel_formulaContext::cel_formula(size_t i) {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Or_cel_formulaContext::K_OR() {
  return getToken(CEQLQueryParser::K_OR, 0);
}

CEQLQueryParser::Or_cel_formulaContext::Or_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Or_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitOr_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- As_cel_formulaContext ------------------------------------------------------------------

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::As_cel_formulaContext::cel_formula() {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(0);
}

tree::TerminalNode* CEQLQueryParser::As_cel_formulaContext::K_AS() {
  return getToken(CEQLQueryParser::K_AS, 0);
}

CEQLQueryParser::Event_nameContext* CEQLQueryParser::As_cel_formulaContext::event_name() {
  return getRuleContext<CEQLQueryParser::Event_nameContext>(0);
}

CEQLQueryParser::As_cel_formulaContext::As_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::As_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAs_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Non_contiguous_sequencing_cel_formulaContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Cel_formulaContext *> CEQLQueryParser::Non_contiguous_sequencing_cel_formulaContext::cel_formula() {
  return getRuleContexts<CEQLQueryParser::Cel_formulaContext>();
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Non_contiguous_sequencing_cel_formulaContext::cel_formula(size_t i) {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Non_contiguous_sequencing_cel_formulaContext::SEMICOLON() {
  return getToken(CEQLQueryParser::SEMICOLON, 0);
}

CEQLQueryParser::Non_contiguous_sequencing_cel_formulaContext::Non_contiguous_sequencing_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Non_contiguous_sequencing_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNon_contiguous_sequencing_cel_formula(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Non_contiguous_iteration_cel_formulaContext ------------------------------------------------------------------

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::Non_contiguous_iteration_cel_formulaContext::cel_formula() {
  return getRuleContext<CEQLQueryParser::Cel_formulaContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Non_contiguous_iteration_cel_formulaContext::PLUS() {
  return getToken(CEQLQueryParser::PLUS, 0);
}

CEQLQueryParser::Non_contiguous_iteration_cel_formulaContext::Non_contiguous_iteration_cel_formulaContext(Cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Non_contiguous_iteration_cel_formulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNon_contiguous_iteration_cel_formula(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::cel_formula() {
   return cel_formula(0);
}

CEQLQueryParser::Cel_formulaContext* CEQLQueryParser::cel_formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CEQLQueryParser::Cel_formulaContext *_localctx = _tracker.createInstance<Cel_formulaContext>(_ctx, parentState);
  CEQLQueryParser::Cel_formulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, CEQLQueryParser::RuleCel_formula, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CEQLQueryParser::LEFT_PARENTHESIS: {
        _localctx = _tracker.createInstance<Par_cel_formulaContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(148);
        match(CEQLQueryParser::LEFT_PARENTHESIS);
        setState(149);
        cel_formula(0);
        setState(150);
        match(CEQLQueryParser::RIGHT_PARENTHESIS);
        break;
      }

      case CEQLQueryParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<Event_type_cel_formulaContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(152);
        s_event_name();
        break;
      }

      case CEQLQueryParser::K_NOT: {
        _localctx = _tracker.createInstance<Not_event_type_atomic_cel_formulaContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(153);
        match(CEQLQueryParser::K_NOT);
        setState(154);
        match(CEQLQueryParser::LEFT_PARENTHESIS);
        setState(155);
        atomic_cel_formula(0);
        setState(156);
        match(CEQLQueryParser::RIGHT_PARENTHESIS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(184);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(182);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Non_contiguous_sequencing_cel_formulaContext>(_tracker.createInstance<Cel_formulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCel_formula);
          setState(160);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(161);
          match(CEQLQueryParser::SEMICOLON);
          setState(162);
          cel_formula(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Contiguous_sequencing_cel_formulaContext>(_tracker.createInstance<Cel_formulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCel_formula);
          setState(163);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(164);
          match(CEQLQueryParser::COLON);
          setState(165);
          cel_formula(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Or_cel_formulaContext>(_tracker.createInstance<Cel_formulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCel_formula);
          setState(166);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(167);
          match(CEQLQueryParser::K_OR);
          setState(168);
          cel_formula(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Allen_overlap_formulaContext>(_tracker.createInstance<Cel_formulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCel_formula);
          setState(169);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(170);
          match(CEQLQueryParser::COLON_O);
          setState(171);
          cel_formula(2);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<As_cel_formulaContext>(_tracker.createInstance<Cel_formulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCel_formula);
          setState(172);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(173);
          match(CEQLQueryParser::K_AS);
          setState(174);
          event_name();
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<Non_contiguous_iteration_cel_formulaContext>(_tracker.createInstance<Cel_formulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCel_formula);
          setState(175);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(176);
          match(CEQLQueryParser::PLUS);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<Contiguous_iteration_cel_formulaContext>(_tracker.createInstance<Cel_formulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCel_formula);
          setState(177);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(178);
          match(CEQLQueryParser::COLON_PLUS);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Filter_cel_formulaContext>(_tracker.createInstance<Cel_formulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCel_formula);
          setState(179);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(180);
          match(CEQLQueryParser::K_FILTER);
          setState(181);
          filter(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(186);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Partition_listContext ------------------------------------------------------------------

CEQLQueryParser::Partition_listContext::Partition_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CEQLQueryParser::Partition_listContext::LEFT_SQUARE_BRACKET() {
  return getTokens(CEQLQueryParser::LEFT_SQUARE_BRACKET);
}

tree::TerminalNode* CEQLQueryParser::Partition_listContext::LEFT_SQUARE_BRACKET(size_t i) {
  return getToken(CEQLQueryParser::LEFT_SQUARE_BRACKET, i);
}

std::vector<CEQLQueryParser::Attribute_listContext *> CEQLQueryParser::Partition_listContext::attribute_list() {
  return getRuleContexts<CEQLQueryParser::Attribute_listContext>();
}

CEQLQueryParser::Attribute_listContext* CEQLQueryParser::Partition_listContext::attribute_list(size_t i) {
  return getRuleContext<CEQLQueryParser::Attribute_listContext>(i);
}

std::vector<tree::TerminalNode *> CEQLQueryParser::Partition_listContext::RIGHT_SQUARE_BRACKET() {
  return getTokens(CEQLQueryParser::RIGHT_SQUARE_BRACKET);
}

tree::TerminalNode* CEQLQueryParser::Partition_listContext::RIGHT_SQUARE_BRACKET(size_t i) {
  return getToken(CEQLQueryParser::RIGHT_SQUARE_BRACKET, i);
}

tree::TerminalNode* CEQLQueryParser::Partition_listContext::COMMA() {
  return getToken(CEQLQueryParser::COMMA, 0);
}


size_t CEQLQueryParser::Partition_listContext::getRuleIndex() const {
  return CEQLQueryParser::RulePartition_list;
}


std::any CEQLQueryParser::Partition_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitPartition_list(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Partition_listContext* CEQLQueryParser::partition_list() {
  Partition_listContext *_localctx = _tracker.createInstance<Partition_listContext>(_ctx, getState());
  enterRule(_localctx, 14, CEQLQueryParser::RulePartition_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(CEQLQueryParser::LEFT_SQUARE_BRACKET);
    setState(188);
    attribute_list();
    setState(189);
    match(CEQLQueryParser::RIGHT_SQUARE_BRACKET);
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::COMMA) {
      setState(190);
      match(CEQLQueryParser::COMMA);
      setState(191);
      match(CEQLQueryParser::LEFT_SQUARE_BRACKET);
      setState(192);
      attribute_list();
      setState(193);
      match(CEQLQueryParser::RIGHT_SQUARE_BRACKET);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_listContext ------------------------------------------------------------------

CEQLQueryParser::Attribute_listContext::Attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CEQLQueryParser::Attribute_nameContext *> CEQLQueryParser::Attribute_listContext::attribute_name() {
  return getRuleContexts<CEQLQueryParser::Attribute_nameContext>();
}

CEQLQueryParser::Attribute_nameContext* CEQLQueryParser::Attribute_listContext::attribute_name(size_t i) {
  return getRuleContext<CEQLQueryParser::Attribute_nameContext>(i);
}

std::vector<tree::TerminalNode *> CEQLQueryParser::Attribute_listContext::COMMA() {
  return getTokens(CEQLQueryParser::COMMA);
}

tree::TerminalNode* CEQLQueryParser::Attribute_listContext::COMMA(size_t i) {
  return getToken(CEQLQueryParser::COMMA, i);
}


size_t CEQLQueryParser::Attribute_listContext::getRuleIndex() const {
  return CEQLQueryParser::RuleAttribute_list;
}


std::any CEQLQueryParser::Attribute_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAttribute_list(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Attribute_listContext* CEQLQueryParser::attribute_list() {
  Attribute_listContext *_localctx = _tracker.createInstance<Attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 16, CEQLQueryParser::RuleAttribute_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    attribute_name();
    setState(202);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CEQLQueryParser::COMMA) {
      setState(198);
      match(CEQLQueryParser::COMMA);
      setState(199);
      attribute_name();
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Consumption_policyContext ------------------------------------------------------------------

CEQLQueryParser::Consumption_policyContext::Consumption_policyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::Consumption_policyContext::getRuleIndex() const {
  return CEQLQueryParser::RuleConsumption_policy;
}

void CEQLQueryParser::Consumption_policyContext::copyFrom(Consumption_policyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Cp_partitionContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Cp_partitionContext::K_PARTITION() {
  return getToken(CEQLQueryParser::K_PARTITION, 0);
}

CEQLQueryParser::Cp_partitionContext::Cp_partitionContext(Consumption_policyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Cp_partitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitCp_partition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Cp_anyContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Cp_anyContext::K_ANY() {
  return getToken(CEQLQueryParser::K_ANY, 0);
}

CEQLQueryParser::Cp_anyContext::Cp_anyContext(Consumption_policyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Cp_anyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitCp_any(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Cp_noneContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Cp_noneContext::K_NONE() {
  return getToken(CEQLQueryParser::K_NONE, 0);
}

CEQLQueryParser::Cp_noneContext::Cp_noneContext(Consumption_policyContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Cp_noneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitCp_none(this);
  else
    return visitor->visitChildren(this);
}
CEQLQueryParser::Consumption_policyContext* CEQLQueryParser::consumption_policy() {
  Consumption_policyContext *_localctx = _tracker.createInstance<Consumption_policyContext>(_ctx, getState());
  enterRule(_localctx, 18, CEQLQueryParser::RuleConsumption_policy);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CEQLQueryParser::K_ANY: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Cp_anyContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(205);
        match(CEQLQueryParser::K_ANY);
        break;
      }

      case CEQLQueryParser::K_PARTITION: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Cp_partitionContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(206);
        match(CEQLQueryParser::K_PARTITION);
        break;
      }

      case CEQLQueryParser::K_NONE: {
        _localctx = _tracker.createInstance<CEQLQueryParser::Cp_noneContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(207);
        match(CEQLQueryParser::K_NONE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LimitContext ------------------------------------------------------------------

CEQLQueryParser::LimitContext::LimitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::LimitContext::getRuleIndex() const {
  return CEQLQueryParser::RuleLimit;
}

void CEQLQueryParser::LimitContext::copyFrom(LimitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- L_integerContext ------------------------------------------------------------------

CEQLQueryParser::IntegerContext* CEQLQueryParser::L_integerContext::integer() {
  return getRuleContext<CEQLQueryParser::IntegerContext>(0);
}

CEQLQueryParser::L_integerContext::L_integerContext(LimitContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::L_integerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitL_integer(this);
  else
    return visitor->visitChildren(this);
}
CEQLQueryParser::LimitContext* CEQLQueryParser::limit() {
  LimitContext *_localctx = _tracker.createInstance<LimitContext>(_ctx, getState());
  enterRule(_localctx, 20, CEQLQueryParser::RuleLimit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CEQLQueryParser::L_integerContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(210);
    integer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilterContext ------------------------------------------------------------------

CEQLQueryParser::FilterContext::FilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::FilterContext::getRuleIndex() const {
  return CEQLQueryParser::RuleFilter;
}

void CEQLQueryParser::FilterContext::copyFrom(FilterContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Par_filterContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Par_filterContext::LEFT_PARENTHESIS() {
  return getToken(CEQLQueryParser::LEFT_PARENTHESIS, 0);
}

CEQLQueryParser::FilterContext* CEQLQueryParser::Par_filterContext::filter() {
  return getRuleContext<CEQLQueryParser::FilterContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Par_filterContext::RIGHT_PARENTHESIS() {
  return getToken(CEQLQueryParser::RIGHT_PARENTHESIS, 0);
}

CEQLQueryParser::Par_filterContext::Par_filterContext(FilterContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Par_filterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitPar_filter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- And_filterContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::FilterContext *> CEQLQueryParser::And_filterContext::filter() {
  return getRuleContexts<CEQLQueryParser::FilterContext>();
}

CEQLQueryParser::FilterContext* CEQLQueryParser::And_filterContext::filter(size_t i) {
  return getRuleContext<CEQLQueryParser::FilterContext>(i);
}

tree::TerminalNode* CEQLQueryParser::And_filterContext::K_AND() {
  return getToken(CEQLQueryParser::K_AND, 0);
}

CEQLQueryParser::And_filterContext::And_filterContext(FilterContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::And_filterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAnd_filter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Atomic_filterContext ------------------------------------------------------------------

CEQLQueryParser::S_event_nameContext* CEQLQueryParser::Atomic_filterContext::s_event_name() {
  return getRuleContext<CEQLQueryParser::S_event_nameContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Atomic_filterContext::LEFT_SQUARE_BRACKET() {
  return getToken(CEQLQueryParser::LEFT_SQUARE_BRACKET, 0);
}

CEQLQueryParser::PredicateContext* CEQLQueryParser::Atomic_filterContext::predicate() {
  return getRuleContext<CEQLQueryParser::PredicateContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Atomic_filterContext::RIGHT_SQUARE_BRACKET() {
  return getToken(CEQLQueryParser::RIGHT_SQUARE_BRACKET, 0);
}

CEQLQueryParser::Atomic_filterContext::Atomic_filterContext(FilterContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Atomic_filterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAtomic_filter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Or_filterContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::FilterContext *> CEQLQueryParser::Or_filterContext::filter() {
  return getRuleContexts<CEQLQueryParser::FilterContext>();
}

CEQLQueryParser::FilterContext* CEQLQueryParser::Or_filterContext::filter(size_t i) {
  return getRuleContext<CEQLQueryParser::FilterContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Or_filterContext::K_OR() {
  return getToken(CEQLQueryParser::K_OR, 0);
}

CEQLQueryParser::Or_filterContext::Or_filterContext(FilterContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Or_filterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitOr_filter(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::FilterContext* CEQLQueryParser::filter() {
   return filter(0);
}

CEQLQueryParser::FilterContext* CEQLQueryParser::filter(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CEQLQueryParser::FilterContext *_localctx = _tracker.createInstance<FilterContext>(_ctx, parentState);
  CEQLQueryParser::FilterContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, CEQLQueryParser::RuleFilter, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(222);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CEQLQueryParser::LEFT_PARENTHESIS: {
        _localctx = _tracker.createInstance<Par_filterContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(213);
        match(CEQLQueryParser::LEFT_PARENTHESIS);
        setState(214);
        filter(0);
        setState(215);
        match(CEQLQueryParser::RIGHT_PARENTHESIS);
        break;
      }

      case CEQLQueryParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<Atomic_filterContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(217);
        s_event_name();
        setState(218);
        match(CEQLQueryParser::LEFT_SQUARE_BRACKET);
        setState(219);
        predicate(0);
        setState(220);
        match(CEQLQueryParser::RIGHT_SQUARE_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(232);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(230);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<And_filterContext>(_tracker.createInstance<FilterContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFilter);
          setState(224);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(225);
          match(CEQLQueryParser::K_AND);
          setState(226);
          filter(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Or_filterContext>(_tracker.createInstance<FilterContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFilter);
          setState(227);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(228);
          match(CEQLQueryParser::K_OR);
          setState(229);
          filter(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(234);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PredicateContext ------------------------------------------------------------------

CEQLQueryParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::PredicateContext::getRuleIndex() const {
  return CEQLQueryParser::RulePredicate;
}

void CEQLQueryParser::PredicateContext::copyFrom(PredicateContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Regex_predicateContext ------------------------------------------------------------------

CEQLQueryParser::Attribute_nameContext* CEQLQueryParser::Regex_predicateContext::attribute_name() {
  return getRuleContext<CEQLQueryParser::Attribute_nameContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Regex_predicateContext::K_LIKE() {
  return getToken(CEQLQueryParser::K_LIKE, 0);
}

CEQLQueryParser::String_literalContext* CEQLQueryParser::Regex_predicateContext::string_literal() {
  return getRuleContext<CEQLQueryParser::String_literalContext>(0);
}

CEQLQueryParser::Regex_predicateContext::Regex_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Regex_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitRegex_predicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- In_range_predicateContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Math_exprContext *> CEQLQueryParser::In_range_predicateContext::math_expr() {
  return getRuleContexts<CEQLQueryParser::Math_exprContext>();
}

CEQLQueryParser::Math_exprContext* CEQLQueryParser::In_range_predicateContext::math_expr(size_t i) {
  return getRuleContext<CEQLQueryParser::Math_exprContext>(i);
}

tree::TerminalNode* CEQLQueryParser::In_range_predicateContext::K_IN() {
  return getToken(CEQLQueryParser::K_IN, 0);
}

tree::TerminalNode* CEQLQueryParser::In_range_predicateContext::K_RANGE() {
  return getToken(CEQLQueryParser::K_RANGE, 0);
}

tree::TerminalNode* CEQLQueryParser::In_range_predicateContext::LEFT_PARENTHESIS() {
  return getToken(CEQLQueryParser::LEFT_PARENTHESIS, 0);
}

tree::TerminalNode* CEQLQueryParser::In_range_predicateContext::COMMA() {
  return getToken(CEQLQueryParser::COMMA, 0);
}

tree::TerminalNode* CEQLQueryParser::In_range_predicateContext::RIGHT_PARENTHESIS() {
  return getToken(CEQLQueryParser::RIGHT_PARENTHESIS, 0);
}

CEQLQueryParser::In_range_predicateContext::In_range_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::In_range_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitIn_range_predicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- In_predicateContext ------------------------------------------------------------------

CEQLQueryParser::Attribute_nameContext* CEQLQueryParser::In_predicateContext::attribute_name() {
  return getRuleContext<CEQLQueryParser::Attribute_nameContext>(0);
}

CEQLQueryParser::Value_seqContext* CEQLQueryParser::In_predicateContext::value_seq() {
  return getRuleContext<CEQLQueryParser::Value_seqContext>(0);
}

tree::TerminalNode* CEQLQueryParser::In_predicateContext::K_IN() {
  return getToken(CEQLQueryParser::K_IN, 0);
}

tree::TerminalNode* CEQLQueryParser::In_predicateContext::K_NOT() {
  return getToken(CEQLQueryParser::K_NOT, 0);
}

CEQLQueryParser::In_predicateContext::In_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::In_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitIn_predicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Not_predicateContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Not_predicateContext::K_NOT() {
  return getToken(CEQLQueryParser::K_NOT, 0);
}

CEQLQueryParser::PredicateContext* CEQLQueryParser::Not_predicateContext::predicate() {
  return getRuleContext<CEQLQueryParser::PredicateContext>(0);
}

CEQLQueryParser::Not_predicateContext::Not_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Not_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNot_predicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Par_predicateContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Par_predicateContext::LEFT_PARENTHESIS() {
  return getToken(CEQLQueryParser::LEFT_PARENTHESIS, 0);
}

CEQLQueryParser::PredicateContext* CEQLQueryParser::Par_predicateContext::predicate() {
  return getRuleContext<CEQLQueryParser::PredicateContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Par_predicateContext::RIGHT_PARENTHESIS() {
  return getToken(CEQLQueryParser::RIGHT_PARENTHESIS, 0);
}

CEQLQueryParser::Par_predicateContext::Par_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Par_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitPar_predicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- And_predicateContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::PredicateContext *> CEQLQueryParser::And_predicateContext::predicate() {
  return getRuleContexts<CEQLQueryParser::PredicateContext>();
}

CEQLQueryParser::PredicateContext* CEQLQueryParser::And_predicateContext::predicate(size_t i) {
  return getRuleContext<CEQLQueryParser::PredicateContext>(i);
}

tree::TerminalNode* CEQLQueryParser::And_predicateContext::K_AND() {
  return getToken(CEQLQueryParser::K_AND, 0);
}

CEQLQueryParser::And_predicateContext::And_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::And_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAnd_predicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Equality_string_predicateContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::String_literalContext *> CEQLQueryParser::Equality_string_predicateContext::string_literal() {
  return getRuleContexts<CEQLQueryParser::String_literalContext>();
}

CEQLQueryParser::String_literalContext* CEQLQueryParser::Equality_string_predicateContext::string_literal(size_t i) {
  return getRuleContext<CEQLQueryParser::String_literalContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Equality_string_predicateContext::EQ() {
  return getToken(CEQLQueryParser::EQ, 0);
}

tree::TerminalNode* CEQLQueryParser::Equality_string_predicateContext::NEQ() {
  return getToken(CEQLQueryParser::NEQ, 0);
}

CEQLQueryParser::Equality_string_predicateContext::Equality_string_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Equality_string_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitEquality_string_predicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Inequality_predicateContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Math_exprContext *> CEQLQueryParser::Inequality_predicateContext::math_expr() {
  return getRuleContexts<CEQLQueryParser::Math_exprContext>();
}

CEQLQueryParser::Math_exprContext* CEQLQueryParser::Inequality_predicateContext::math_expr(size_t i) {
  return getRuleContext<CEQLQueryParser::Math_exprContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Inequality_predicateContext::LE() {
  return getToken(CEQLQueryParser::LE, 0);
}

tree::TerminalNode* CEQLQueryParser::Inequality_predicateContext::LEQ() {
  return getToken(CEQLQueryParser::LEQ, 0);
}

tree::TerminalNode* CEQLQueryParser::Inequality_predicateContext::GE() {
  return getToken(CEQLQueryParser::GE, 0);
}

tree::TerminalNode* CEQLQueryParser::Inequality_predicateContext::GEQ() {
  return getToken(CEQLQueryParser::GEQ, 0);
}

tree::TerminalNode* CEQLQueryParser::Inequality_predicateContext::EQ() {
  return getToken(CEQLQueryParser::EQ, 0);
}

tree::TerminalNode* CEQLQueryParser::Inequality_predicateContext::NEQ() {
  return getToken(CEQLQueryParser::NEQ, 0);
}

CEQLQueryParser::Inequality_predicateContext::Inequality_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Inequality_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitInequality_predicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Or_predicateContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::PredicateContext *> CEQLQueryParser::Or_predicateContext::predicate() {
  return getRuleContexts<CEQLQueryParser::PredicateContext>();
}

CEQLQueryParser::PredicateContext* CEQLQueryParser::Or_predicateContext::predicate(size_t i) {
  return getRuleContext<CEQLQueryParser::PredicateContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Or_predicateContext::K_OR() {
  return getToken(CEQLQueryParser::K_OR, 0);
}

CEQLQueryParser::Or_predicateContext::Or_predicateContext(PredicateContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Or_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitOr_predicate(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::PredicateContext* CEQLQueryParser::predicate() {
   return predicate(0);
}

CEQLQueryParser::PredicateContext* CEQLQueryParser::predicate(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CEQLQueryParser::PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, parentState);
  CEQLQueryParser::PredicateContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, CEQLQueryParser::RulePredicate, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Par_predicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(236);
      match(CEQLQueryParser::LEFT_PARENTHESIS);
      setState(237);
      predicate(0);
      setState(238);
      match(CEQLQueryParser::RIGHT_PARENTHESIS);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Not_predicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(240);
      match(CEQLQueryParser::K_NOT);
      setState(241);
      predicate(8);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Inequality_predicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(242);
      math_expr(0);
      setState(243);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8658654068736) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(244);
      math_expr(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Equality_string_predicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(246);
      string_literal();
      setState(247);
      _la = _input->LA(1);
      if (!(_la == CEQLQueryParser::EQ

      || _la == CEQLQueryParser::NEQ)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(248);
      string_literal();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Regex_predicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(250);
      attribute_name();
      setState(251);
      match(CEQLQueryParser::K_LIKE);
      setState(252);
      string_literal();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<In_predicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(254);
      attribute_name();
      setState(258);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CEQLQueryParser::K_IN: {
          setState(255);
          match(CEQLQueryParser::K_IN);
          break;
        }

        case CEQLQueryParser::K_NOT: {
          setState(256);
          match(CEQLQueryParser::K_NOT);
          setState(257);
          match(CEQLQueryParser::K_IN);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(260);
      value_seq();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<In_range_predicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(262);
      math_expr(0);
      setState(263);
      match(CEQLQueryParser::K_IN);
      setState(264);
      match(CEQLQueryParser::K_RANGE);
      setState(265);
      match(CEQLQueryParser::LEFT_PARENTHESIS);
      setState(266);
      math_expr(0);
      setState(267);
      match(CEQLQueryParser::COMMA);
      setState(268);
      math_expr(0);
      setState(269);
      match(CEQLQueryParser::RIGHT_PARENTHESIS);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(281);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(279);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<And_predicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(273);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(274);
          match(CEQLQueryParser::K_AND);
          setState(275);
          predicate(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Or_predicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(276);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(277);
          match(CEQLQueryParser::K_OR);
          setState(278);
          predicate(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(283);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- String_literalContext ------------------------------------------------------------------

CEQLQueryParser::String_literalContext::String_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::StringContext* CEQLQueryParser::String_literalContext::string() {
  return getRuleContext<CEQLQueryParser::StringContext>(0);
}

CEQLQueryParser::Attribute_nameContext* CEQLQueryParser::String_literalContext::attribute_name() {
  return getRuleContext<CEQLQueryParser::Attribute_nameContext>(0);
}


size_t CEQLQueryParser::String_literalContext::getRuleIndex() const {
  return CEQLQueryParser::RuleString_literal;
}


std::any CEQLQueryParser::String_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitString_literal(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::String_literalContext* CEQLQueryParser::string_literal() {
  String_literalContext *_localctx = _tracker.createInstance<String_literalContext>(_ctx, getState());
  enterRule(_localctx, 26, CEQLQueryParser::RuleString_literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(286);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CEQLQueryParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(284);
        string();
        break;
      }

      case CEQLQueryParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(285);
        attribute_name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Math_exprContext ------------------------------------------------------------------

CEQLQueryParser::Math_exprContext::Math_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::Math_exprContext::getRuleIndex() const {
  return CEQLQueryParser::RuleMath_expr;
}

void CEQLQueryParser::Math_exprContext::copyFrom(Math_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Mul_math_exprContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Math_exprContext *> CEQLQueryParser::Mul_math_exprContext::math_expr() {
  return getRuleContexts<CEQLQueryParser::Math_exprContext>();
}

CEQLQueryParser::Math_exprContext* CEQLQueryParser::Mul_math_exprContext::math_expr(size_t i) {
  return getRuleContext<CEQLQueryParser::Math_exprContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Mul_math_exprContext::STAR() {
  return getToken(CEQLQueryParser::STAR, 0);
}

tree::TerminalNode* CEQLQueryParser::Mul_math_exprContext::SLASH() {
  return getToken(CEQLQueryParser::SLASH, 0);
}

tree::TerminalNode* CEQLQueryParser::Mul_math_exprContext::PERCENT() {
  return getToken(CEQLQueryParser::PERCENT, 0);
}

CEQLQueryParser::Mul_math_exprContext::Mul_math_exprContext(Math_exprContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Mul_math_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitMul_math_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Sum_math_exprContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::Math_exprContext *> CEQLQueryParser::Sum_math_exprContext::math_expr() {
  return getRuleContexts<CEQLQueryParser::Math_exprContext>();
}

CEQLQueryParser::Math_exprContext* CEQLQueryParser::Sum_math_exprContext::math_expr(size_t i) {
  return getRuleContext<CEQLQueryParser::Math_exprContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Sum_math_exprContext::PLUS() {
  return getToken(CEQLQueryParser::PLUS, 0);
}

tree::TerminalNode* CEQLQueryParser::Sum_math_exprContext::MINUS() {
  return getToken(CEQLQueryParser::MINUS, 0);
}

CEQLQueryParser::Sum_math_exprContext::Sum_math_exprContext(Math_exprContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Sum_math_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitSum_math_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Number_math_exprContext ------------------------------------------------------------------

CEQLQueryParser::NumberContext* CEQLQueryParser::Number_math_exprContext::number() {
  return getRuleContext<CEQLQueryParser::NumberContext>(0);
}

CEQLQueryParser::Number_math_exprContext::Number_math_exprContext(Math_exprContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Number_math_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNumber_math_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_math_exprContext ------------------------------------------------------------------

CEQLQueryParser::Math_exprContext* CEQLQueryParser::Unary_math_exprContext::math_expr() {
  return getRuleContext<CEQLQueryParser::Math_exprContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Unary_math_exprContext::PLUS() {
  return getToken(CEQLQueryParser::PLUS, 0);
}

tree::TerminalNode* CEQLQueryParser::Unary_math_exprContext::MINUS() {
  return getToken(CEQLQueryParser::MINUS, 0);
}

CEQLQueryParser::Unary_math_exprContext::Unary_math_exprContext(Math_exprContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Unary_math_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitUnary_math_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Attribute_math_exprContext ------------------------------------------------------------------

CEQLQueryParser::Attribute_nameContext* CEQLQueryParser::Attribute_math_exprContext::attribute_name() {
  return getRuleContext<CEQLQueryParser::Attribute_nameContext>(0);
}

CEQLQueryParser::Attribute_math_exprContext::Attribute_math_exprContext(Math_exprContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Attribute_math_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAttribute_math_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Par_math_exprContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Par_math_exprContext::LEFT_PARENTHESIS() {
  return getToken(CEQLQueryParser::LEFT_PARENTHESIS, 0);
}

CEQLQueryParser::Math_exprContext* CEQLQueryParser::Par_math_exprContext::math_expr() {
  return getRuleContext<CEQLQueryParser::Math_exprContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Par_math_exprContext::RIGHT_PARENTHESIS() {
  return getToken(CEQLQueryParser::RIGHT_PARENTHESIS, 0);
}

CEQLQueryParser::Par_math_exprContext::Par_math_exprContext(Math_exprContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Par_math_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitPar_math_expr(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Math_exprContext* CEQLQueryParser::math_expr() {
   return math_expr(0);
}

CEQLQueryParser::Math_exprContext* CEQLQueryParser::math_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CEQLQueryParser::Math_exprContext *_localctx = _tracker.createInstance<Math_exprContext>(_ctx, parentState);
  CEQLQueryParser::Math_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, CEQLQueryParser::RuleMath_expr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(297);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CEQLQueryParser::LEFT_PARENTHESIS: {
        _localctx = _tracker.createInstance<Par_math_exprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(289);
        match(CEQLQueryParser::LEFT_PARENTHESIS);
        setState(290);
        math_expr(0);
        setState(291);
        match(CEQLQueryParser::RIGHT_PARENTHESIS);
        break;
      }

      case CEQLQueryParser::DOUBLE_LITERAL:
      case CEQLQueryParser::INTEGER_LITERAL: {
        _localctx = _tracker.createInstance<Number_math_exprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(293);
        number();
        break;
      }

      case CEQLQueryParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<Attribute_math_exprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(294);
        attribute_name();
        break;
      }

      case CEQLQueryParser::PLUS:
      case CEQLQueryParser::MINUS: {
        _localctx = _tracker.createInstance<Unary_math_exprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(295);
        _la = _input->LA(1);
        if (!(_la == CEQLQueryParser::PLUS

        || _la == CEQLQueryParser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(296);
        math_expr(3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(307);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(305);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_math_exprContext>(_tracker.createInstance<Math_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMath_expr);
          setState(299);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(300);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 107374182400) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(301);
          math_expr(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Sum_math_exprContext>(_tracker.createInstance<Math_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMath_expr);
          setState(302);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(303);
          _la = _input->LA(1);
          if (!(_la == CEQLQueryParser::PLUS

          || _la == CEQLQueryParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(304);
          math_expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(309);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Value_seqContext ------------------------------------------------------------------

CEQLQueryParser::Value_seqContext::Value_seqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::Value_seqContext::LEFT_CURLY_BRACKET() {
  return getToken(CEQLQueryParser::LEFT_CURLY_BRACKET, 0);
}

CEQLQueryParser::Number_seqContext* CEQLQueryParser::Value_seqContext::number_seq() {
  return getRuleContext<CEQLQueryParser::Number_seqContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Value_seqContext::RIGHT_CURLY_BRACKET() {
  return getToken(CEQLQueryParser::RIGHT_CURLY_BRACKET, 0);
}

CEQLQueryParser::String_seqContext* CEQLQueryParser::Value_seqContext::string_seq() {
  return getRuleContext<CEQLQueryParser::String_seqContext>(0);
}


size_t CEQLQueryParser::Value_seqContext::getRuleIndex() const {
  return CEQLQueryParser::RuleValue_seq;
}


std::any CEQLQueryParser::Value_seqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitValue_seq(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Value_seqContext* CEQLQueryParser::value_seq() {
  Value_seqContext *_localctx = _tracker.createInstance<Value_seqContext>(_ctx, getState());
  enterRule(_localctx, 30, CEQLQueryParser::RuleValue_seq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(318);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(310);
      match(CEQLQueryParser::LEFT_CURLY_BRACKET);
      setState(311);
      number_seq();
      setState(312);
      match(CEQLQueryParser::RIGHT_CURLY_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(314);
      match(CEQLQueryParser::LEFT_CURLY_BRACKET);
      setState(315);
      string_seq();
      setState(316);
      match(CEQLQueryParser::RIGHT_CURLY_BRACKET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Number_seqContext ------------------------------------------------------------------

CEQLQueryParser::Number_seqContext::Number_seqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::Number_seqContext::getRuleIndex() const {
  return CEQLQueryParser::RuleNumber_seq;
}

void CEQLQueryParser::Number_seqContext::copyFrom(Number_seqContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Number_listContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::NumberContext *> CEQLQueryParser::Number_listContext::number() {
  return getRuleContexts<CEQLQueryParser::NumberContext>();
}

CEQLQueryParser::NumberContext* CEQLQueryParser::Number_listContext::number(size_t i) {
  return getRuleContext<CEQLQueryParser::NumberContext>(i);
}

std::vector<tree::TerminalNode *> CEQLQueryParser::Number_listContext::COMMA() {
  return getTokens(CEQLQueryParser::COMMA);
}

tree::TerminalNode* CEQLQueryParser::Number_listContext::COMMA(size_t i) {
  return getToken(CEQLQueryParser::COMMA, i);
}

CEQLQueryParser::Number_listContext::Number_listContext(Number_seqContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Number_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNumber_list(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Double_rangeContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::DoubleContext *> CEQLQueryParser::Double_rangeContext::double_() {
  return getRuleContexts<CEQLQueryParser::DoubleContext>();
}

CEQLQueryParser::DoubleContext* CEQLQueryParser::Double_rangeContext::double_(size_t i) {
  return getRuleContext<CEQLQueryParser::DoubleContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Double_rangeContext::DOUBLE_DOT() {
  return getToken(CEQLQueryParser::DOUBLE_DOT, 0);
}

CEQLQueryParser::Double_rangeContext::Double_rangeContext(Number_seqContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Double_rangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitDouble_range(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Number_range_lowerContext ------------------------------------------------------------------

CEQLQueryParser::NumberContext* CEQLQueryParser::Number_range_lowerContext::number() {
  return getRuleContext<CEQLQueryParser::NumberContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Number_range_lowerContext::DOUBLE_DOT() {
  return getToken(CEQLQueryParser::DOUBLE_DOT, 0);
}

CEQLQueryParser::Number_range_lowerContext::Number_range_lowerContext(Number_seqContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Number_range_lowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNumber_range_lower(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Number_range_upperContext ------------------------------------------------------------------

tree::TerminalNode* CEQLQueryParser::Number_range_upperContext::DOUBLE_DOT() {
  return getToken(CEQLQueryParser::DOUBLE_DOT, 0);
}

CEQLQueryParser::NumberContext* CEQLQueryParser::Number_range_upperContext::number() {
  return getRuleContext<CEQLQueryParser::NumberContext>(0);
}

CEQLQueryParser::Number_range_upperContext::Number_range_upperContext(Number_seqContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Number_range_upperContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNumber_range_upper(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Integer_rangeContext ------------------------------------------------------------------

std::vector<CEQLQueryParser::IntegerContext *> CEQLQueryParser::Integer_rangeContext::integer() {
  return getRuleContexts<CEQLQueryParser::IntegerContext>();
}

CEQLQueryParser::IntegerContext* CEQLQueryParser::Integer_rangeContext::integer(size_t i) {
  return getRuleContext<CEQLQueryParser::IntegerContext>(i);
}

tree::TerminalNode* CEQLQueryParser::Integer_rangeContext::DOUBLE_DOT() {
  return getToken(CEQLQueryParser::DOUBLE_DOT, 0);
}

CEQLQueryParser::Integer_rangeContext::Integer_rangeContext(Number_seqContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Integer_rangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitInteger_range(this);
  else
    return visitor->visitChildren(this);
}
CEQLQueryParser::Number_seqContext* CEQLQueryParser::number_seq() {
  Number_seqContext *_localctx = _tracker.createInstance<Number_seqContext>(_ctx, getState());
  enterRule(_localctx, 32, CEQLQueryParser::RuleNumber_seq);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CEQLQueryParser::Number_listContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(320);
      number();
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CEQLQueryParser::COMMA) {
        setState(321);
        match(CEQLQueryParser::COMMA);
        setState(322);
        number();
        setState(327);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CEQLQueryParser::Integer_rangeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(328);
      integer();
      setState(329);
      match(CEQLQueryParser::DOUBLE_DOT);
      setState(330);
      integer();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CEQLQueryParser::Double_rangeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(332);
      double_();
      setState(333);
      match(CEQLQueryParser::DOUBLE_DOT);
      setState(334);
      double_();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CEQLQueryParser::Number_range_lowerContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(336);
      number();
      setState(337);
      match(CEQLQueryParser::DOUBLE_DOT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CEQLQueryParser::Number_range_upperContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(339);
      match(CEQLQueryParser::DOUBLE_DOT);
      setState(340);
      number();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_seqContext ------------------------------------------------------------------

CEQLQueryParser::String_seqContext::String_seqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CEQLQueryParser::StringContext *> CEQLQueryParser::String_seqContext::string() {
  return getRuleContexts<CEQLQueryParser::StringContext>();
}

CEQLQueryParser::StringContext* CEQLQueryParser::String_seqContext::string(size_t i) {
  return getRuleContext<CEQLQueryParser::StringContext>(i);
}

std::vector<tree::TerminalNode *> CEQLQueryParser::String_seqContext::COMMA() {
  return getTokens(CEQLQueryParser::COMMA);
}

tree::TerminalNode* CEQLQueryParser::String_seqContext::COMMA(size_t i) {
  return getToken(CEQLQueryParser::COMMA, i);
}


size_t CEQLQueryParser::String_seqContext::getRuleIndex() const {
  return CEQLQueryParser::RuleString_seq;
}


std::any CEQLQueryParser::String_seqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitString_seq(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::String_seqContext* CEQLQueryParser::string_seq() {
  String_seqContext *_localctx = _tracker.createInstance<String_seqContext>(_ctx, getState());
  enterRule(_localctx, 34, CEQLQueryParser::RuleString_seq);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    string();
    setState(348);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CEQLQueryParser::COMMA) {
      setState(344);
      match(CEQLQueryParser::COMMA);
      setState(345);
      string();
      setState(350);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_windowContext ------------------------------------------------------------------

CEQLQueryParser::Time_windowContext::Time_windowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::Event_spanContext* CEQLQueryParser::Time_windowContext::event_span() {
  return getRuleContext<CEQLQueryParser::Event_spanContext>(0);
}

CEQLQueryParser::Time_spanContext* CEQLQueryParser::Time_windowContext::time_span() {
  return getRuleContext<CEQLQueryParser::Time_spanContext>(0);
}

CEQLQueryParser::Custom_spanContext* CEQLQueryParser::Time_windowContext::custom_span() {
  return getRuleContext<CEQLQueryParser::Custom_spanContext>(0);
}


size_t CEQLQueryParser::Time_windowContext::getRuleIndex() const {
  return CEQLQueryParser::RuleTime_window;
}


std::any CEQLQueryParser::Time_windowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitTime_window(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Time_windowContext* CEQLQueryParser::time_window() {
  Time_windowContext *_localctx = _tracker.createInstance<Time_windowContext>(_ctx, getState());
  enterRule(_localctx, 36, CEQLQueryParser::RuleTime_window);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(351);
      event_span();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(352);
      time_span();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(353);
      custom_span();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_spanContext ------------------------------------------------------------------

CEQLQueryParser::Event_spanContext::Event_spanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::IntegerContext* CEQLQueryParser::Event_spanContext::integer() {
  return getRuleContext<CEQLQueryParser::IntegerContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Event_spanContext::K_EVENTS() {
  return getToken(CEQLQueryParser::K_EVENTS, 0);
}


size_t CEQLQueryParser::Event_spanContext::getRuleIndex() const {
  return CEQLQueryParser::RuleEvent_span;
}


std::any CEQLQueryParser::Event_spanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitEvent_span(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Event_spanContext* CEQLQueryParser::event_span() {
  Event_spanContext *_localctx = _tracker.createInstance<Event_spanContext>(_ctx, getState());
  enterRule(_localctx, 38, CEQLQueryParser::RuleEvent_span);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    integer();
    setState(357);
    match(CEQLQueryParser::K_EVENTS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_spanContext ------------------------------------------------------------------

CEQLQueryParser::Time_spanContext::Time_spanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::Hour_spanContext* CEQLQueryParser::Time_spanContext::hour_span() {
  return getRuleContext<CEQLQueryParser::Hour_spanContext>(0);
}

CEQLQueryParser::Minute_spanContext* CEQLQueryParser::Time_spanContext::minute_span() {
  return getRuleContext<CEQLQueryParser::Minute_spanContext>(0);
}

CEQLQueryParser::Second_spanContext* CEQLQueryParser::Time_spanContext::second_span() {
  return getRuleContext<CEQLQueryParser::Second_spanContext>(0);
}


size_t CEQLQueryParser::Time_spanContext::getRuleIndex() const {
  return CEQLQueryParser::RuleTime_span;
}


std::any CEQLQueryParser::Time_spanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitTime_span(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Time_spanContext* CEQLQueryParser::time_span() {
  Time_spanContext *_localctx = _tracker.createInstance<Time_spanContext>(_ctx, getState());
  enterRule(_localctx, 40, CEQLQueryParser::RuleTime_span);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(359);
      hour_span();
      break;
    }

    default:
      break;
    }
    setState(363);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(362);
      minute_span();
      break;
    }

    default:
      break;
    }
    setState(366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::DOUBLE_LITERAL

    || _la == CEQLQueryParser::INTEGER_LITERAL) {
      setState(365);
      second_span();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Hour_spanContext ------------------------------------------------------------------

CEQLQueryParser::Hour_spanContext::Hour_spanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::NumberContext* CEQLQueryParser::Hour_spanContext::number() {
  return getRuleContext<CEQLQueryParser::NumberContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Hour_spanContext::K_HOURS() {
  return getToken(CEQLQueryParser::K_HOURS, 0);
}


size_t CEQLQueryParser::Hour_spanContext::getRuleIndex() const {
  return CEQLQueryParser::RuleHour_span;
}


std::any CEQLQueryParser::Hour_spanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitHour_span(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Hour_spanContext* CEQLQueryParser::hour_span() {
  Hour_spanContext *_localctx = _tracker.createInstance<Hour_spanContext>(_ctx, getState());
  enterRule(_localctx, 42, CEQLQueryParser::RuleHour_span);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    number();
    setState(369);
    match(CEQLQueryParser::K_HOURS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Minute_spanContext ------------------------------------------------------------------

CEQLQueryParser::Minute_spanContext::Minute_spanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::NumberContext* CEQLQueryParser::Minute_spanContext::number() {
  return getRuleContext<CEQLQueryParser::NumberContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Minute_spanContext::K_MINUTES() {
  return getToken(CEQLQueryParser::K_MINUTES, 0);
}


size_t CEQLQueryParser::Minute_spanContext::getRuleIndex() const {
  return CEQLQueryParser::RuleMinute_span;
}


std::any CEQLQueryParser::Minute_spanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitMinute_span(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Minute_spanContext* CEQLQueryParser::minute_span() {
  Minute_spanContext *_localctx = _tracker.createInstance<Minute_spanContext>(_ctx, getState());
  enterRule(_localctx, 44, CEQLQueryParser::RuleMinute_span);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    number();
    setState(372);
    match(CEQLQueryParser::K_MINUTES);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Second_spanContext ------------------------------------------------------------------

CEQLQueryParser::Second_spanContext::Second_spanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::NumberContext* CEQLQueryParser::Second_spanContext::number() {
  return getRuleContext<CEQLQueryParser::NumberContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Second_spanContext::K_SECONDS() {
  return getToken(CEQLQueryParser::K_SECONDS, 0);
}


size_t CEQLQueryParser::Second_spanContext::getRuleIndex() const {
  return CEQLQueryParser::RuleSecond_span;
}


std::any CEQLQueryParser::Second_spanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitSecond_span(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Second_spanContext* CEQLQueryParser::second_span() {
  Second_spanContext *_localctx = _tracker.createInstance<Second_spanContext>(_ctx, getState());
  enterRule(_localctx, 46, CEQLQueryParser::RuleSecond_span);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    number();
    setState(375);
    match(CEQLQueryParser::K_SECONDS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Custom_spanContext ------------------------------------------------------------------

CEQLQueryParser::Custom_spanContext::Custom_spanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::IntegerContext* CEQLQueryParser::Custom_spanContext::integer() {
  return getRuleContext<CEQLQueryParser::IntegerContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Custom_spanContext::LEFT_SQUARE_BRACKET() {
  return getToken(CEQLQueryParser::LEFT_SQUARE_BRACKET, 0);
}

CEQLQueryParser::Any_nameContext* CEQLQueryParser::Custom_spanContext::any_name() {
  return getRuleContext<CEQLQueryParser::Any_nameContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Custom_spanContext::RIGHT_SQUARE_BRACKET() {
  return getToken(CEQLQueryParser::RIGHT_SQUARE_BRACKET, 0);
}


size_t CEQLQueryParser::Custom_spanContext::getRuleIndex() const {
  return CEQLQueryParser::RuleCustom_span;
}


std::any CEQLQueryParser::Custom_spanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitCustom_span(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Custom_spanContext* CEQLQueryParser::custom_span() {
  Custom_spanContext *_localctx = _tracker.createInstance<Custom_spanContext>(_ctx, getState());
  enterRule(_localctx, 48, CEQLQueryParser::RuleCustom_span);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    integer();
    setState(378);
    match(CEQLQueryParser::LEFT_SQUARE_BRACKET);
    setState(379);
    any_name();
    setState(380);
    match(CEQLQueryParser::RIGHT_SQUARE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Named_eventContext ------------------------------------------------------------------

CEQLQueryParser::Named_eventContext::Named_eventContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::S_event_nameContext* CEQLQueryParser::Named_eventContext::s_event_name() {
  return getRuleContext<CEQLQueryParser::S_event_nameContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Named_eventContext::K_AS() {
  return getToken(CEQLQueryParser::K_AS, 0);
}

CEQLQueryParser::Event_nameContext* CEQLQueryParser::Named_eventContext::event_name() {
  return getRuleContext<CEQLQueryParser::Event_nameContext>(0);
}


size_t CEQLQueryParser::Named_eventContext::getRuleIndex() const {
  return CEQLQueryParser::RuleNamed_event;
}


std::any CEQLQueryParser::Named_eventContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNamed_event(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Named_eventContext* CEQLQueryParser::named_event() {
  Named_eventContext *_localctx = _tracker.createInstance<Named_eventContext>(_ctx, getState());
  enterRule(_localctx, 50, CEQLQueryParser::RuleNamed_event);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    s_event_name();
    setState(385);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::K_AS) {
      setState(383);
      match(CEQLQueryParser::K_AS);
      setState(384);
      event_name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_event_name_with_projectionContext ------------------------------------------------------------------

CEQLQueryParser::S_event_name_with_projectionContext::S_event_name_with_projectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::S_event_nameContext* CEQLQueryParser::S_event_name_with_projectionContext::s_event_name() {
  return getRuleContext<CEQLQueryParser::S_event_nameContext>(0);
}

tree::TerminalNode* CEQLQueryParser::S_event_name_with_projectionContext::LEFT_SQUARE_BRACKET() {
  return getToken(CEQLQueryParser::LEFT_SQUARE_BRACKET, 0);
}

CEQLQueryParser::List_of_attribute_namesContext* CEQLQueryParser::S_event_name_with_projectionContext::list_of_attribute_names() {
  return getRuleContext<CEQLQueryParser::List_of_attribute_namesContext>(0);
}

tree::TerminalNode* CEQLQueryParser::S_event_name_with_projectionContext::RIGHT_SQUARE_BRACKET() {
  return getToken(CEQLQueryParser::RIGHT_SQUARE_BRACKET, 0);
}


size_t CEQLQueryParser::S_event_name_with_projectionContext::getRuleIndex() const {
  return CEQLQueryParser::RuleS_event_name_with_projection;
}


std::any CEQLQueryParser::S_event_name_with_projectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitS_event_name_with_projection(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::S_event_name_with_projectionContext* CEQLQueryParser::s_event_name_with_projection() {
  S_event_name_with_projectionContext *_localctx = _tracker.createInstance<S_event_name_with_projectionContext>(_ctx, getState());
  enterRule(_localctx, 52, CEQLQueryParser::RuleS_event_name_with_projection);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    s_event_name();
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CEQLQueryParser::LEFT_SQUARE_BRACKET) {
      setState(388);
      match(CEQLQueryParser::LEFT_SQUARE_BRACKET);
      setState(389);
      list_of_attribute_names();
      setState(390);
      match(CEQLQueryParser::RIGHT_SQUARE_BRACKET);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_event_nameContext ------------------------------------------------------------------

CEQLQueryParser::S_event_nameContext::S_event_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::Event_nameContext* CEQLQueryParser::S_event_nameContext::event_name() {
  return getRuleContext<CEQLQueryParser::Event_nameContext>(0);
}

CEQLQueryParser::Stream_nameContext* CEQLQueryParser::S_event_nameContext::stream_name() {
  return getRuleContext<CEQLQueryParser::Stream_nameContext>(0);
}

tree::TerminalNode* CEQLQueryParser::S_event_nameContext::GE() {
  return getToken(CEQLQueryParser::GE, 0);
}


size_t CEQLQueryParser::S_event_nameContext::getRuleIndex() const {
  return CEQLQueryParser::RuleS_event_name;
}


std::any CEQLQueryParser::S_event_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitS_event_name(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::S_event_nameContext* CEQLQueryParser::s_event_name() {
  S_event_nameContext *_localctx = _tracker.createInstance<S_event_nameContext>(_ctx, getState());
  enterRule(_localctx, 54, CEQLQueryParser::RuleS_event_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(394);
      stream_name();
      setState(395);
      match(CEQLQueryParser::GE);
      break;
    }

    default:
      break;
    }
    setState(399);
    event_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Event_nameContext ------------------------------------------------------------------

CEQLQueryParser::Event_nameContext::Event_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::Any_nameContext* CEQLQueryParser::Event_nameContext::any_name() {
  return getRuleContext<CEQLQueryParser::Any_nameContext>(0);
}


size_t CEQLQueryParser::Event_nameContext::getRuleIndex() const {
  return CEQLQueryParser::RuleEvent_name;
}


std::any CEQLQueryParser::Event_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitEvent_name(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Event_nameContext* CEQLQueryParser::event_name() {
  Event_nameContext *_localctx = _tracker.createInstance<Event_nameContext>(_ctx, getState());
  enterRule(_localctx, 56, CEQLQueryParser::RuleEvent_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atomic_cel_formulaContext ------------------------------------------------------------------

CEQLQueryParser::Atomic_cel_formulaContext::Atomic_cel_formulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CEQLQueryParser::Atomic_cel_formulaContext::getRuleIndex() const {
  return CEQLQueryParser::RuleAtomic_cel_formula;
}

void CEQLQueryParser::Atomic_cel_formulaContext::copyFrom(Atomic_cel_formulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Atomic_cel_formula_filterContext ------------------------------------------------------------------

CEQLQueryParser::Atomic_cel_formulaContext* CEQLQueryParser::Atomic_cel_formula_filterContext::atomic_cel_formula() {
  return getRuleContext<CEQLQueryParser::Atomic_cel_formulaContext>(0);
}

tree::TerminalNode* CEQLQueryParser::Atomic_cel_formula_filterContext::K_FILTER() {
  return getToken(CEQLQueryParser::K_FILTER, 0);
}

CEQLQueryParser::FilterContext* CEQLQueryParser::Atomic_cel_formula_filterContext::filter() {
  return getRuleContext<CEQLQueryParser::FilterContext>(0);
}

CEQLQueryParser::Atomic_cel_formula_filterContext::Atomic_cel_formula_filterContext(Atomic_cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Atomic_cel_formula_filterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAtomic_cel_formula_filter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Atomic_cel_formula_rContext ------------------------------------------------------------------

CEQLQueryParser::S_event_nameContext* CEQLQueryParser::Atomic_cel_formula_rContext::s_event_name() {
  return getRuleContext<CEQLQueryParser::S_event_nameContext>(0);
}

CEQLQueryParser::Atomic_cel_formula_rContext::Atomic_cel_formula_rContext(Atomic_cel_formulaContext *ctx) { copyFrom(ctx); }


std::any CEQLQueryParser::Atomic_cel_formula_rContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAtomic_cel_formula_r(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Atomic_cel_formulaContext* CEQLQueryParser::atomic_cel_formula() {
   return atomic_cel_formula(0);
}

CEQLQueryParser::Atomic_cel_formulaContext* CEQLQueryParser::atomic_cel_formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CEQLQueryParser::Atomic_cel_formulaContext *_localctx = _tracker.createInstance<Atomic_cel_formulaContext>(_ctx, parentState);
  CEQLQueryParser::Atomic_cel_formulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, CEQLQueryParser::RuleAtomic_cel_formula, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Atomic_cel_formula_rContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(404);
    s_event_name();
    _ctx->stop = _input->LT(-1);
    setState(411);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Atomic_cel_formula_filterContext>(_tracker.createInstance<Atomic_cel_formulaContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleAtomic_cel_formula);
        setState(406);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(407);
        match(CEQLQueryParser::K_FILTER);
        setState(408);
        filter(0); 
      }
      setState(413);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Stream_nameContext ------------------------------------------------------------------

CEQLQueryParser::Stream_nameContext::Stream_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::Any_nameContext* CEQLQueryParser::Stream_nameContext::any_name() {
  return getRuleContext<CEQLQueryParser::Any_nameContext>(0);
}


size_t CEQLQueryParser::Stream_nameContext::getRuleIndex() const {
  return CEQLQueryParser::RuleStream_name;
}


std::any CEQLQueryParser::Stream_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitStream_name(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Stream_nameContext* CEQLQueryParser::stream_name() {
  Stream_nameContext *_localctx = _tracker.createInstance<Stream_nameContext>(_ctx, getState());
  enterRule(_localctx, 60, CEQLQueryParser::RuleStream_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_of_attribute_namesContext ------------------------------------------------------------------

CEQLQueryParser::List_of_attribute_namesContext::List_of_attribute_namesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CEQLQueryParser::Attribute_nameContext *> CEQLQueryParser::List_of_attribute_namesContext::attribute_name() {
  return getRuleContexts<CEQLQueryParser::Attribute_nameContext>();
}

CEQLQueryParser::Attribute_nameContext* CEQLQueryParser::List_of_attribute_namesContext::attribute_name(size_t i) {
  return getRuleContext<CEQLQueryParser::Attribute_nameContext>(i);
}

std::vector<tree::TerminalNode *> CEQLQueryParser::List_of_attribute_namesContext::COMMA() {
  return getTokens(CEQLQueryParser::COMMA);
}

tree::TerminalNode* CEQLQueryParser::List_of_attribute_namesContext::COMMA(size_t i) {
  return getToken(CEQLQueryParser::COMMA, i);
}


size_t CEQLQueryParser::List_of_attribute_namesContext::getRuleIndex() const {
  return CEQLQueryParser::RuleList_of_attribute_names;
}


std::any CEQLQueryParser::List_of_attribute_namesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitList_of_attribute_names(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::List_of_attribute_namesContext* CEQLQueryParser::list_of_attribute_names() {
  List_of_attribute_namesContext *_localctx = _tracker.createInstance<List_of_attribute_namesContext>(_ctx, getState());
  enterRule(_localctx, 62, CEQLQueryParser::RuleList_of_attribute_names);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    attribute_name();
    setState(421);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CEQLQueryParser::COMMA) {
      setState(417);
      match(CEQLQueryParser::COMMA);
      setState(418);
      attribute_name();
      setState(423);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_nameContext ------------------------------------------------------------------

CEQLQueryParser::Attribute_nameContext::Attribute_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::Any_nameContext* CEQLQueryParser::Attribute_nameContext::any_name() {
  return getRuleContext<CEQLQueryParser::Any_nameContext>(0);
}


size_t CEQLQueryParser::Attribute_nameContext::getRuleIndex() const {
  return CEQLQueryParser::RuleAttribute_name;
}


std::any CEQLQueryParser::Attribute_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAttribute_name(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Attribute_nameContext* CEQLQueryParser::attribute_name() {
  Attribute_nameContext *_localctx = _tracker.createInstance<Attribute_nameContext>(_ctx, getState());
  enterRule(_localctx, 64, CEQLQueryParser::RuleAttribute_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

CEQLQueryParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::IntegerContext::INTEGER_LITERAL() {
  return getToken(CEQLQueryParser::INTEGER_LITERAL, 0);
}


size_t CEQLQueryParser::IntegerContext::getRuleIndex() const {
  return CEQLQueryParser::RuleInteger;
}


std::any CEQLQueryParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::IntegerContext* CEQLQueryParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 66, CEQLQueryParser::RuleInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(426);
    match(CEQLQueryParser::INTEGER_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoubleContext ------------------------------------------------------------------

CEQLQueryParser::DoubleContext::DoubleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::DoubleContext::DOUBLE_LITERAL() {
  return getToken(CEQLQueryParser::DOUBLE_LITERAL, 0);
}


size_t CEQLQueryParser::DoubleContext::getRuleIndex() const {
  return CEQLQueryParser::RuleDouble;
}


std::any CEQLQueryParser::DoubleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitDouble(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::DoubleContext* CEQLQueryParser::double_() {
  DoubleContext *_localctx = _tracker.createInstance<DoubleContext>(_ctx, getState());
  enterRule(_localctx, 68, CEQLQueryParser::RuleDouble);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(CEQLQueryParser::DOUBLE_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

CEQLQueryParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CEQLQueryParser::IntegerContext* CEQLQueryParser::NumberContext::integer() {
  return getRuleContext<CEQLQueryParser::IntegerContext>(0);
}

CEQLQueryParser::DoubleContext* CEQLQueryParser::NumberContext::double_() {
  return getRuleContext<CEQLQueryParser::DoubleContext>(0);
}


size_t CEQLQueryParser::NumberContext::getRuleIndex() const {
  return CEQLQueryParser::RuleNumber;
}


std::any CEQLQueryParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::NumberContext* CEQLQueryParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 70, CEQLQueryParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(432);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CEQLQueryParser::INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(430);
        integer();
        break;
      }

      case CEQLQueryParser::DOUBLE_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(431);
        double_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

CEQLQueryParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::StringContext::STRING_LITERAL() {
  return getToken(CEQLQueryParser::STRING_LITERAL, 0);
}


size_t CEQLQueryParser::StringContext::getRuleIndex() const {
  return CEQLQueryParser::RuleString;
}


std::any CEQLQueryParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::StringContext* CEQLQueryParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 72, CEQLQueryParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(CEQLQueryParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Any_nameContext ------------------------------------------------------------------

CEQLQueryParser::Any_nameContext::Any_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::Any_nameContext::IDENTIFIER() {
  return getToken(CEQLQueryParser::IDENTIFIER, 0);
}


size_t CEQLQueryParser::Any_nameContext::getRuleIndex() const {
  return CEQLQueryParser::RuleAny_name;
}


std::any CEQLQueryParser::Any_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitAny_name(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::Any_nameContext* CEQLQueryParser::any_name() {
  Any_nameContext *_localctx = _tracker.createInstance<Any_nameContext>(_ctx, getState());
  enterRule(_localctx, 74, CEQLQueryParser::RuleAny_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    match(CEQLQueryParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

CEQLQueryParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_ALL() {
  return getToken(CEQLQueryParser::K_ALL, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_AND() {
  return getToken(CEQLQueryParser::K_AND, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_ANY() {
  return getToken(CEQLQueryParser::K_ANY, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_AS() {
  return getToken(CEQLQueryParser::K_AS, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_BY() {
  return getToken(CEQLQueryParser::K_BY, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_CONSUME() {
  return getToken(CEQLQueryParser::K_CONSUME, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_DISTINCT() {
  return getToken(CEQLQueryParser::K_DISTINCT, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_EVENT() {
  return getToken(CEQLQueryParser::K_EVENT, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_EVENTS() {
  return getToken(CEQLQueryParser::K_EVENTS, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_FILTER() {
  return getToken(CEQLQueryParser::K_FILTER, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_FROM() {
  return getToken(CEQLQueryParser::K_FROM, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_HOURS() {
  return getToken(CEQLQueryParser::K_HOURS, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_IN() {
  return getToken(CEQLQueryParser::K_IN, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_LAST() {
  return getToken(CEQLQueryParser::K_LAST, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_LIKE() {
  return getToken(CEQLQueryParser::K_LIKE, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_MAX() {
  return getToken(CEQLQueryParser::K_MAX, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_MINUTES() {
  return getToken(CEQLQueryParser::K_MINUTES, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_NEXT() {
  return getToken(CEQLQueryParser::K_NEXT, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_NONE() {
  return getToken(CEQLQueryParser::K_NONE, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_NOT() {
  return getToken(CEQLQueryParser::K_NOT, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_OR() {
  return getToken(CEQLQueryParser::K_OR, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_PARTITION() {
  return getToken(CEQLQueryParser::K_PARTITION, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_RANGE() {
  return getToken(CEQLQueryParser::K_RANGE, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_SECONDS() {
  return getToken(CEQLQueryParser::K_SECONDS, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_SELECT() {
  return getToken(CEQLQueryParser::K_SELECT, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_STREAM() {
  return getToken(CEQLQueryParser::K_STREAM, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_STRICT() {
  return getToken(CEQLQueryParser::K_STRICT, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_UNLESS() {
  return getToken(CEQLQueryParser::K_UNLESS, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_WHERE() {
  return getToken(CEQLQueryParser::K_WHERE, 0);
}

tree::TerminalNode* CEQLQueryParser::KeywordContext::K_WITHIN() {
  return getToken(CEQLQueryParser::K_WITHIN, 0);
}


size_t CEQLQueryParser::KeywordContext::getRuleIndex() const {
  return CEQLQueryParser::RuleKeyword;
}


std::any CEQLQueryParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CEQLQueryParserVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

CEQLQueryParser::KeywordContext* CEQLQueryParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 76, CEQLQueryParser::RuleKeyword);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294967166) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CEQLQueryParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return cel_formulaSempred(antlrcpp::downCast<Cel_formulaContext *>(context), predicateIndex);
    case 11: return filterSempred(antlrcpp::downCast<FilterContext *>(context), predicateIndex);
    case 12: return predicateSempred(antlrcpp::downCast<PredicateContext *>(context), predicateIndex);
    case 14: return math_exprSempred(antlrcpp::downCast<Math_exprContext *>(context), predicateIndex);
    case 29: return atomic_cel_formulaSempred(antlrcpp::downCast<Atomic_cel_formulaContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CEQLQueryParser::cel_formulaSempred(Cel_formulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 1);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CEQLQueryParser::filterSempred(FilterContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CEQLQueryParser::predicateSempred(PredicateContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool CEQLQueryParser::math_exprSempred(Math_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 2);
    case 13: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CEQLQueryParser::atomic_cel_formulaSempred(Atomic_cel_formulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void CEQLQueryParser::initialize() {
  ::antlr4::internal::call_once(ceqlqueryparserParserOnceFlag, ceqlqueryparserParserInitialize);
}
