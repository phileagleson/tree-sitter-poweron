#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 274
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 219
#define ALIAS_COUNT 0
#define TOKEN_COUNT 179
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_keyword_token1 = 1,
  aux_sym_keyword_token2 = 2,
  aux_sym_keyword_token3 = 3,
  aux_sym_keyword_token4 = 4,
  aux_sym_keyword_token5 = 5,
  aux_sym_keyword_token6 = 6,
  aux_sym_target_division_token1 = 7,
  anon_sym_EQ = 8,
  aux_sym_define_division_token1 = 9,
  aux_sym_define_division_token2 = 10,
  aux_sym_setup_division_token1 = 11,
  aux_sym_select_division_token1 = 12,
  aux_sym_sort_division_token1 = 13,
  aux_sym_letter_division_token1 = 14,
  aux_sym_print_division_token1 = 15,
  aux_sym_print_division_token2 = 16,
  aux_sym_total_division_token1 = 17,
  aux_sym_record_type_token1 = 18,
  aux_sym_record_type_token2 = 19,
  aux_sym_record_type_token3 = 20,
  aux_sym_record_type_token4 = 21,
  aux_sym_record_type_token5 = 22,
  aux_sym_record_type_token6 = 23,
  aux_sym_record_type_token7 = 24,
  aux_sym_record_type_token8 = 25,
  aux_sym_record_type_token9 = 26,
  aux_sym_record_type_token10 = 27,
  aux_sym_record_type_token11 = 28,
  aux_sym_record_type_token12 = 29,
  aux_sym_record_type_token13 = 30,
  aux_sym_record_type_token14 = 31,
  aux_sym_record_type_token15 = 32,
  aux_sym_record_type_token16 = 33,
  aux_sym_record_type_token17 = 34,
  aux_sym_record_type_token18 = 35,
  aux_sym_record_type_token19 = 36,
  aux_sym_record_type_token20 = 37,
  aux_sym_record_type_token21 = 38,
  aux_sym_record_type_token22 = 39,
  aux_sym_record_type_token23 = 40,
  aux_sym_record_type_token24 = 41,
  aux_sym_record_type_token25 = 42,
  aux_sym_record_type_token26 = 43,
  aux_sym_record_type_token27 = 44,
  aux_sym_record_type_token28 = 45,
  aux_sym_record_type_token29 = 46,
  aux_sym_record_type_token30 = 47,
  aux_sym_record_type_token31 = 48,
  aux_sym_record_type_token32 = 49,
  aux_sym_record_type_token33 = 50,
  aux_sym_record_type_token34 = 51,
  aux_sym_record_type_token35 = 52,
  aux_sym_record_type_token36 = 53,
  aux_sym_record_type_token37 = 54,
  aux_sym_record_type_token38 = 55,
  aux_sym_record_type_token39 = 56,
  aux_sym_record_type_token40 = 57,
  aux_sym_record_type_token41 = 58,
  aux_sym_record_type_token42 = 59,
  aux_sym_record_type_token43 = 60,
  aux_sym_record_type_token44 = 61,
  aux_sym_record_type_token45 = 62,
  aux_sym_record_type_token46 = 63,
  aux_sym_record_type_token47 = 64,
  aux_sym_record_type_token48 = 65,
  aux_sym_record_type_token49 = 66,
  aux_sym_record_type_token50 = 67,
  aux_sym_record_type_token51 = 68,
  aux_sym_record_type_token52 = 69,
  aux_sym_record_type_token53 = 70,
  aux_sym_record_type_token54 = 71,
  aux_sym_record_type_token55 = 72,
  aux_sym_record_type_token56 = 73,
  aux_sym_record_type_token57 = 74,
  aux_sym_record_type_token58 = 75,
  aux_sym_record_type_token59 = 76,
  aux_sym_record_type_token60 = 77,
  aux_sym_record_type_token61 = 78,
  aux_sym_record_type_token62 = 79,
  aux_sym_record_type_token63 = 80,
  aux_sym_record_type_token64 = 81,
  aux_sym_record_type_token65 = 82,
  aux_sym_record_type_token66 = 83,
  aux_sym_record_type_token67 = 84,
  aux_sym_record_type_token68 = 85,
  aux_sym_record_type_token69 = 86,
  aux_sym_record_type_token70 = 87,
  aux_sym_record_type_token71 = 88,
  aux_sym_record_type_token72 = 89,
  aux_sym_record_type_token73 = 90,
  aux_sym_record_type_token74 = 91,
  aux_sym_record_type_token75 = 92,
  aux_sym_record_type_token76 = 93,
  aux_sym_record_type_token77 = 94,
  aux_sym_record_type_token78 = 95,
  aux_sym_record_type_token79 = 96,
  aux_sym_record_type_token80 = 97,
  aux_sym_record_type_token81 = 98,
  aux_sym_record_type_token82 = 99,
  aux_sym_record_type_token83 = 100,
  aux_sym_record_type_token84 = 101,
  aux_sym_record_type_token85 = 102,
  aux_sym_record_type_token86 = 103,
  aux_sym_record_type_token87 = 104,
  aux_sym_record_type_token88 = 105,
  aux_sym_record_type_token89 = 106,
  aux_sym_record_type_token90 = 107,
  aux_sym_record_type_token91 = 108,
  aux_sym_record_type_token92 = 109,
  aux_sym_record_type_token93 = 110,
  aux_sym_record_type_token94 = 111,
  aux_sym_record_type_token95 = 112,
  aux_sym_record_type_token96 = 113,
  aux_sym_record_type_token97 = 114,
  aux_sym_record_type_token98 = 115,
  aux_sym_record_type_token99 = 116,
  aux_sym_record_type_token100 = 117,
  aux_sym_record_type_token101 = 118,
  aux_sym_record_type_token102 = 119,
  aux_sym_record_type_token103 = 120,
  aux_sym_record_type_token104 = 121,
  aux_sym_record_type_token105 = 122,
  aux_sym_record_type_token106 = 123,
  aux_sym_record_type_token107 = 124,
  aux_sym_record_type_token108 = 125,
  aux_sym_record_type_token109 = 126,
  aux_sym_record_type_token110 = 127,
  aux_sym_record_type_token111 = 128,
  aux_sym_data_type_token1 = 129,
  aux_sym_data_type_token2 = 130,
  aux_sym_data_type_token3 = 131,
  aux_sym_data_type_token4 = 132,
  aux_sym_data_type_token5 = 133,
  aux_sym_data_type_token6 = 134,
  aux_sym_data_type_token7 = 135,
  aux_sym_array_type_token1 = 136,
  anon_sym_LPAREN = 137,
  anon_sym_COMMA = 138,
  anon_sym_RPAREN = 139,
  anon_sym_DQUOTE = 140,
  sym_unescaped_double_string_fragment = 141,
  aux_sym__identifier_token1 = 142,
  sym_number = 143,
  anon_sym_POUND = 144,
  aux_sym_include_directive_token1 = 145,
  anon_sym_COLON = 146,
  aux_sym_special_keywords_token1 = 147,
  aux_sym_special_keywords_token2 = 148,
  aux_sym_special_keywords_token3 = 149,
  aux_sym_special_keywords_token4 = 150,
  aux_sym_special_keywords_token5 = 151,
  aux_sym_special_keywords_token6 = 152,
  aux_sym_special_keywords_token7 = 153,
  aux_sym_special_keywords_token8 = 154,
  aux_sym_special_keywords_token9 = 155,
  aux_sym_special_keywords_token10 = 156,
  aux_sym_special_keywords_token11 = 157,
  aux_sym_special_keywords_token12 = 158,
  aux_sym_special_keywords_token13 = 159,
  aux_sym_special_keywords_token14 = 160,
  aux_sym_special_keywords_token15 = 161,
  aux_sym_special_keywords_token16 = 162,
  aux_sym_special_keywords_token17 = 163,
  aux_sym_special_keywords_token18 = 164,
  aux_sym_special_keywords_token19 = 165,
  sym_comment = 166,
  anon_sym_AND = 167,
  anon_sym_OR = 168,
  anon_sym_PLUS = 169,
  anon_sym_DASH = 170,
  anon_sym_STAR = 171,
  anon_sym_SLASH = 172,
  anon_sym_LT_GT = 173,
  anon_sym_GT = 174,
  anon_sym_LT = 175,
  aux_sym_for_statement_token1 = 176,
  aux_sym_if_statement_token1 = 177,
  aux_sym_procedure_definition_token1 = 178,
  sym_source_file = 179,
  sym_keyword = 180,
  sym__optional_divisions = 181,
  sym_target_division = 182,
  sym_define_division = 183,
  sym_define_statement = 184,
  sym_setup_division = 185,
  sym_select_division = 186,
  sym_sort_division = 187,
  sym_letter_division = 188,
  sym_print_division = 189,
  sym_total_division = 190,
  sym_record_type = 191,
  sym_data_type = 192,
  sym_array_type = 193,
  sym_string_literal = 194,
  sym__identifier = 195,
  sym_identifier = 196,
  sym__array_identifier = 197,
  sym_variable_declaration = 198,
  sym_include_directive = 199,
  sym_special_keywords = 200,
  sym_expression = 201,
  sym_assignment_expression = 202,
  sym__lhs_expression = 203,
  sym_parenthesized_expression = 204,
  sym_binary_expression = 205,
  sym_primary_expression = 206,
  sym_for_statement = 207,
  sym_if_statement = 208,
  sym_statement = 209,
  sym_procedure_definition = 210,
  sym_procedure_call = 211,
  aux_sym_source_file_repeat1 = 212,
  aux_sym_source_file_repeat2 = 213,
  aux_sym_source_file_repeat3 = 214,
  aux_sym_define_division_repeat1 = 215,
  aux_sym_array_type_repeat1 = 216,
  aux_sym_string_literal_repeat1 = 217,
  aux_sym__array_identifier_repeat1 = 218,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_keyword_token2] = "keyword_token2",
  [aux_sym_keyword_token3] = "keyword_token3",
  [aux_sym_keyword_token4] = "keyword_token4",
  [aux_sym_keyword_token5] = "keyword_token5",
  [aux_sym_keyword_token6] = "keyword_token6",
  [aux_sym_target_division_token1] = "target_division_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_define_division_token1] = "define_division_token1",
  [aux_sym_define_division_token2] = "define_division_token2",
  [aux_sym_setup_division_token1] = "setup_division_token1",
  [aux_sym_select_division_token1] = "select_division_token1",
  [aux_sym_sort_division_token1] = "sort_division_token1",
  [aux_sym_letter_division_token1] = "letter_division_token1",
  [aux_sym_print_division_token1] = "print_division_token1",
  [aux_sym_print_division_token2] = "print_division_token2",
  [aux_sym_total_division_token1] = "total_division_token1",
  [aux_sym_record_type_token1] = "record_type_token1",
  [aux_sym_record_type_token2] = "record_type_token2",
  [aux_sym_record_type_token3] = "record_type_token3",
  [aux_sym_record_type_token4] = "record_type_token4",
  [aux_sym_record_type_token5] = "record_type_token5",
  [aux_sym_record_type_token6] = "record_type_token6",
  [aux_sym_record_type_token7] = "record_type_token7",
  [aux_sym_record_type_token8] = "record_type_token8",
  [aux_sym_record_type_token9] = "record_type_token9",
  [aux_sym_record_type_token10] = "record_type_token10",
  [aux_sym_record_type_token11] = "record_type_token11",
  [aux_sym_record_type_token12] = "record_type_token12",
  [aux_sym_record_type_token13] = "record_type_token13",
  [aux_sym_record_type_token14] = "record_type_token14",
  [aux_sym_record_type_token15] = "record_type_token15",
  [aux_sym_record_type_token16] = "record_type_token16",
  [aux_sym_record_type_token17] = "record_type_token17",
  [aux_sym_record_type_token18] = "record_type_token18",
  [aux_sym_record_type_token19] = "record_type_token19",
  [aux_sym_record_type_token20] = "record_type_token20",
  [aux_sym_record_type_token21] = "record_type_token21",
  [aux_sym_record_type_token22] = "record_type_token22",
  [aux_sym_record_type_token23] = "record_type_token23",
  [aux_sym_record_type_token24] = "record_type_token24",
  [aux_sym_record_type_token25] = "record_type_token25",
  [aux_sym_record_type_token26] = "record_type_token26",
  [aux_sym_record_type_token27] = "record_type_token27",
  [aux_sym_record_type_token28] = "record_type_token28",
  [aux_sym_record_type_token29] = "record_type_token29",
  [aux_sym_record_type_token30] = "record_type_token30",
  [aux_sym_record_type_token31] = "record_type_token31",
  [aux_sym_record_type_token32] = "record_type_token32",
  [aux_sym_record_type_token33] = "record_type_token33",
  [aux_sym_record_type_token34] = "record_type_token34",
  [aux_sym_record_type_token35] = "record_type_token35",
  [aux_sym_record_type_token36] = "record_type_token36",
  [aux_sym_record_type_token37] = "record_type_token37",
  [aux_sym_record_type_token38] = "record_type_token38",
  [aux_sym_record_type_token39] = "record_type_token39",
  [aux_sym_record_type_token40] = "record_type_token40",
  [aux_sym_record_type_token41] = "record_type_token41",
  [aux_sym_record_type_token42] = "record_type_token42",
  [aux_sym_record_type_token43] = "record_type_token43",
  [aux_sym_record_type_token44] = "record_type_token44",
  [aux_sym_record_type_token45] = "record_type_token45",
  [aux_sym_record_type_token46] = "record_type_token46",
  [aux_sym_record_type_token47] = "record_type_token47",
  [aux_sym_record_type_token48] = "record_type_token48",
  [aux_sym_record_type_token49] = "record_type_token49",
  [aux_sym_record_type_token50] = "record_type_token50",
  [aux_sym_record_type_token51] = "record_type_token51",
  [aux_sym_record_type_token52] = "record_type_token52",
  [aux_sym_record_type_token53] = "record_type_token53",
  [aux_sym_record_type_token54] = "record_type_token54",
  [aux_sym_record_type_token55] = "record_type_token55",
  [aux_sym_record_type_token56] = "record_type_token56",
  [aux_sym_record_type_token57] = "record_type_token57",
  [aux_sym_record_type_token58] = "record_type_token58",
  [aux_sym_record_type_token59] = "record_type_token59",
  [aux_sym_record_type_token60] = "record_type_token60",
  [aux_sym_record_type_token61] = "record_type_token61",
  [aux_sym_record_type_token62] = "record_type_token62",
  [aux_sym_record_type_token63] = "record_type_token63",
  [aux_sym_record_type_token64] = "record_type_token64",
  [aux_sym_record_type_token65] = "record_type_token65",
  [aux_sym_record_type_token66] = "record_type_token66",
  [aux_sym_record_type_token67] = "record_type_token67",
  [aux_sym_record_type_token68] = "record_type_token68",
  [aux_sym_record_type_token69] = "record_type_token69",
  [aux_sym_record_type_token70] = "record_type_token70",
  [aux_sym_record_type_token71] = "record_type_token71",
  [aux_sym_record_type_token72] = "record_type_token72",
  [aux_sym_record_type_token73] = "record_type_token73",
  [aux_sym_record_type_token74] = "record_type_token74",
  [aux_sym_record_type_token75] = "record_type_token75",
  [aux_sym_record_type_token76] = "record_type_token76",
  [aux_sym_record_type_token77] = "record_type_token77",
  [aux_sym_record_type_token78] = "record_type_token78",
  [aux_sym_record_type_token79] = "record_type_token79",
  [aux_sym_record_type_token80] = "record_type_token80",
  [aux_sym_record_type_token81] = "record_type_token81",
  [aux_sym_record_type_token82] = "record_type_token82",
  [aux_sym_record_type_token83] = "record_type_token83",
  [aux_sym_record_type_token84] = "record_type_token84",
  [aux_sym_record_type_token85] = "record_type_token85",
  [aux_sym_record_type_token86] = "record_type_token86",
  [aux_sym_record_type_token87] = "record_type_token87",
  [aux_sym_record_type_token88] = "record_type_token88",
  [aux_sym_record_type_token89] = "record_type_token89",
  [aux_sym_record_type_token90] = "record_type_token90",
  [aux_sym_record_type_token91] = "record_type_token91",
  [aux_sym_record_type_token92] = "record_type_token92",
  [aux_sym_record_type_token93] = "record_type_token93",
  [aux_sym_record_type_token94] = "record_type_token94",
  [aux_sym_record_type_token95] = "record_type_token95",
  [aux_sym_record_type_token96] = "record_type_token96",
  [aux_sym_record_type_token97] = "record_type_token97",
  [aux_sym_record_type_token98] = "record_type_token98",
  [aux_sym_record_type_token99] = "record_type_token99",
  [aux_sym_record_type_token100] = "record_type_token100",
  [aux_sym_record_type_token101] = "record_type_token101",
  [aux_sym_record_type_token102] = "record_type_token102",
  [aux_sym_record_type_token103] = "record_type_token103",
  [aux_sym_record_type_token104] = "record_type_token104",
  [aux_sym_record_type_token105] = "record_type_token105",
  [aux_sym_record_type_token106] = "record_type_token106",
  [aux_sym_record_type_token107] = "record_type_token107",
  [aux_sym_record_type_token108] = "record_type_token108",
  [aux_sym_record_type_token109] = "record_type_token109",
  [aux_sym_record_type_token110] = "record_type_token110",
  [aux_sym_record_type_token111] = "record_type_token111",
  [aux_sym_data_type_token1] = "data_type_token1",
  [aux_sym_data_type_token2] = "data_type_token2",
  [aux_sym_data_type_token3] = "data_type_token3",
  [aux_sym_data_type_token4] = "data_type_token4",
  [aux_sym_data_type_token5] = "data_type_token5",
  [aux_sym_data_type_token6] = "data_type_token6",
  [aux_sym_data_type_token7] = "data_type_token7",
  [aux_sym_array_type_token1] = "array_type_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [sym_unescaped_double_string_fragment] = "string_literal",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [sym_number] = "number",
  [anon_sym_POUND] = "#",
  [aux_sym_include_directive_token1] = "include_directive_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_special_keywords_token1] = "special_keywords_token1",
  [aux_sym_special_keywords_token2] = "special_keywords_token2",
  [aux_sym_special_keywords_token3] = "special_keywords_token3",
  [aux_sym_special_keywords_token4] = "special_keywords_token4",
  [aux_sym_special_keywords_token5] = "special_keywords_token5",
  [aux_sym_special_keywords_token6] = "special_keywords_token6",
  [aux_sym_special_keywords_token7] = "special_keywords_token7",
  [aux_sym_special_keywords_token8] = "special_keywords_token8",
  [aux_sym_special_keywords_token9] = "special_keywords_token9",
  [aux_sym_special_keywords_token10] = "special_keywords_token10",
  [aux_sym_special_keywords_token11] = "special_keywords_token11",
  [aux_sym_special_keywords_token12] = "special_keywords_token12",
  [aux_sym_special_keywords_token13] = "special_keywords_token13",
  [aux_sym_special_keywords_token14] = "special_keywords_token14",
  [aux_sym_special_keywords_token15] = "special_keywords_token15",
  [aux_sym_special_keywords_token16] = "special_keywords_token16",
  [aux_sym_special_keywords_token17] = "special_keywords_token17",
  [aux_sym_special_keywords_token18] = "special_keywords_token18",
  [aux_sym_special_keywords_token19] = "special_keywords_token19",
  [sym_comment] = "comment",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym_for_statement_token1] = "for_statement_token1",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_procedure_definition_token1] = "procedure_definition_token1",
  [sym_source_file] = "source_file",
  [sym_keyword] = "keyword",
  [sym__optional_divisions] = "_optional_divisions",
  [sym_target_division] = "target_division",
  [sym_define_division] = "define_division",
  [sym_define_statement] = "define_statement",
  [sym_setup_division] = "setup_division",
  [sym_select_division] = "select_division",
  [sym_sort_division] = "sort_division",
  [sym_letter_division] = "letter_division",
  [sym_print_division] = "print_division",
  [sym_total_division] = "total_division",
  [sym_record_type] = "record_type",
  [sym_data_type] = "data_type",
  [sym_array_type] = "array_type",
  [sym_string_literal] = "string_literal",
  [sym__identifier] = "_identifier",
  [sym_identifier] = "identifier",
  [sym__array_identifier] = "_array_identifier",
  [sym_variable_declaration] = "variable_declaration",
  [sym_include_directive] = "include_directive",
  [sym_special_keywords] = "special_keywords",
  [sym_expression] = "expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym__lhs_expression] = "_lhs_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_for_statement] = "for_statement",
  [sym_if_statement] = "if_statement",
  [sym_statement] = "statement",
  [sym_procedure_definition] = "procedure_definition",
  [sym_procedure_call] = "procedure_call",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_define_division_repeat1] = "define_division_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym__array_identifier_repeat1] = "_array_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [aux_sym_keyword_token2] = aux_sym_keyword_token2,
  [aux_sym_keyword_token3] = aux_sym_keyword_token3,
  [aux_sym_keyword_token4] = aux_sym_keyword_token4,
  [aux_sym_keyword_token5] = aux_sym_keyword_token5,
  [aux_sym_keyword_token6] = aux_sym_keyword_token6,
  [aux_sym_target_division_token1] = aux_sym_target_division_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_define_division_token1] = aux_sym_define_division_token1,
  [aux_sym_define_division_token2] = aux_sym_define_division_token2,
  [aux_sym_setup_division_token1] = aux_sym_setup_division_token1,
  [aux_sym_select_division_token1] = aux_sym_select_division_token1,
  [aux_sym_sort_division_token1] = aux_sym_sort_division_token1,
  [aux_sym_letter_division_token1] = aux_sym_letter_division_token1,
  [aux_sym_print_division_token1] = aux_sym_print_division_token1,
  [aux_sym_print_division_token2] = aux_sym_print_division_token2,
  [aux_sym_total_division_token1] = aux_sym_total_division_token1,
  [aux_sym_record_type_token1] = aux_sym_record_type_token1,
  [aux_sym_record_type_token2] = aux_sym_record_type_token2,
  [aux_sym_record_type_token3] = aux_sym_record_type_token3,
  [aux_sym_record_type_token4] = aux_sym_record_type_token4,
  [aux_sym_record_type_token5] = aux_sym_record_type_token5,
  [aux_sym_record_type_token6] = aux_sym_record_type_token6,
  [aux_sym_record_type_token7] = aux_sym_record_type_token7,
  [aux_sym_record_type_token8] = aux_sym_record_type_token8,
  [aux_sym_record_type_token9] = aux_sym_record_type_token9,
  [aux_sym_record_type_token10] = aux_sym_record_type_token10,
  [aux_sym_record_type_token11] = aux_sym_record_type_token11,
  [aux_sym_record_type_token12] = aux_sym_record_type_token12,
  [aux_sym_record_type_token13] = aux_sym_record_type_token13,
  [aux_sym_record_type_token14] = aux_sym_record_type_token14,
  [aux_sym_record_type_token15] = aux_sym_record_type_token15,
  [aux_sym_record_type_token16] = aux_sym_record_type_token16,
  [aux_sym_record_type_token17] = aux_sym_record_type_token17,
  [aux_sym_record_type_token18] = aux_sym_record_type_token18,
  [aux_sym_record_type_token19] = aux_sym_record_type_token19,
  [aux_sym_record_type_token20] = aux_sym_record_type_token20,
  [aux_sym_record_type_token21] = aux_sym_record_type_token21,
  [aux_sym_record_type_token22] = aux_sym_record_type_token22,
  [aux_sym_record_type_token23] = aux_sym_record_type_token23,
  [aux_sym_record_type_token24] = aux_sym_record_type_token24,
  [aux_sym_record_type_token25] = aux_sym_record_type_token25,
  [aux_sym_record_type_token26] = aux_sym_record_type_token26,
  [aux_sym_record_type_token27] = aux_sym_record_type_token27,
  [aux_sym_record_type_token28] = aux_sym_record_type_token28,
  [aux_sym_record_type_token29] = aux_sym_record_type_token29,
  [aux_sym_record_type_token30] = aux_sym_record_type_token30,
  [aux_sym_record_type_token31] = aux_sym_record_type_token31,
  [aux_sym_record_type_token32] = aux_sym_record_type_token32,
  [aux_sym_record_type_token33] = aux_sym_record_type_token33,
  [aux_sym_record_type_token34] = aux_sym_record_type_token34,
  [aux_sym_record_type_token35] = aux_sym_record_type_token35,
  [aux_sym_record_type_token36] = aux_sym_record_type_token36,
  [aux_sym_record_type_token37] = aux_sym_record_type_token37,
  [aux_sym_record_type_token38] = aux_sym_record_type_token38,
  [aux_sym_record_type_token39] = aux_sym_record_type_token39,
  [aux_sym_record_type_token40] = aux_sym_record_type_token40,
  [aux_sym_record_type_token41] = aux_sym_record_type_token41,
  [aux_sym_record_type_token42] = aux_sym_record_type_token42,
  [aux_sym_record_type_token43] = aux_sym_record_type_token43,
  [aux_sym_record_type_token44] = aux_sym_record_type_token44,
  [aux_sym_record_type_token45] = aux_sym_record_type_token45,
  [aux_sym_record_type_token46] = aux_sym_record_type_token46,
  [aux_sym_record_type_token47] = aux_sym_record_type_token47,
  [aux_sym_record_type_token48] = aux_sym_record_type_token48,
  [aux_sym_record_type_token49] = aux_sym_record_type_token49,
  [aux_sym_record_type_token50] = aux_sym_record_type_token50,
  [aux_sym_record_type_token51] = aux_sym_record_type_token51,
  [aux_sym_record_type_token52] = aux_sym_record_type_token52,
  [aux_sym_record_type_token53] = aux_sym_record_type_token53,
  [aux_sym_record_type_token54] = aux_sym_record_type_token54,
  [aux_sym_record_type_token55] = aux_sym_record_type_token55,
  [aux_sym_record_type_token56] = aux_sym_record_type_token56,
  [aux_sym_record_type_token57] = aux_sym_record_type_token57,
  [aux_sym_record_type_token58] = aux_sym_record_type_token58,
  [aux_sym_record_type_token59] = aux_sym_record_type_token59,
  [aux_sym_record_type_token60] = aux_sym_record_type_token60,
  [aux_sym_record_type_token61] = aux_sym_record_type_token61,
  [aux_sym_record_type_token62] = aux_sym_record_type_token62,
  [aux_sym_record_type_token63] = aux_sym_record_type_token63,
  [aux_sym_record_type_token64] = aux_sym_record_type_token64,
  [aux_sym_record_type_token65] = aux_sym_record_type_token65,
  [aux_sym_record_type_token66] = aux_sym_record_type_token66,
  [aux_sym_record_type_token67] = aux_sym_record_type_token67,
  [aux_sym_record_type_token68] = aux_sym_record_type_token68,
  [aux_sym_record_type_token69] = aux_sym_record_type_token69,
  [aux_sym_record_type_token70] = aux_sym_record_type_token70,
  [aux_sym_record_type_token71] = aux_sym_record_type_token71,
  [aux_sym_record_type_token72] = aux_sym_record_type_token72,
  [aux_sym_record_type_token73] = aux_sym_record_type_token73,
  [aux_sym_record_type_token74] = aux_sym_record_type_token74,
  [aux_sym_record_type_token75] = aux_sym_record_type_token75,
  [aux_sym_record_type_token76] = aux_sym_record_type_token76,
  [aux_sym_record_type_token77] = aux_sym_record_type_token77,
  [aux_sym_record_type_token78] = aux_sym_record_type_token78,
  [aux_sym_record_type_token79] = aux_sym_record_type_token79,
  [aux_sym_record_type_token80] = aux_sym_record_type_token80,
  [aux_sym_record_type_token81] = aux_sym_record_type_token81,
  [aux_sym_record_type_token82] = aux_sym_record_type_token82,
  [aux_sym_record_type_token83] = aux_sym_record_type_token83,
  [aux_sym_record_type_token84] = aux_sym_record_type_token84,
  [aux_sym_record_type_token85] = aux_sym_record_type_token85,
  [aux_sym_record_type_token86] = aux_sym_record_type_token86,
  [aux_sym_record_type_token87] = aux_sym_record_type_token87,
  [aux_sym_record_type_token88] = aux_sym_record_type_token88,
  [aux_sym_record_type_token89] = aux_sym_record_type_token89,
  [aux_sym_record_type_token90] = aux_sym_record_type_token90,
  [aux_sym_record_type_token91] = aux_sym_record_type_token91,
  [aux_sym_record_type_token92] = aux_sym_record_type_token92,
  [aux_sym_record_type_token93] = aux_sym_record_type_token93,
  [aux_sym_record_type_token94] = aux_sym_record_type_token94,
  [aux_sym_record_type_token95] = aux_sym_record_type_token95,
  [aux_sym_record_type_token96] = aux_sym_record_type_token96,
  [aux_sym_record_type_token97] = aux_sym_record_type_token97,
  [aux_sym_record_type_token98] = aux_sym_record_type_token98,
  [aux_sym_record_type_token99] = aux_sym_record_type_token99,
  [aux_sym_record_type_token100] = aux_sym_record_type_token100,
  [aux_sym_record_type_token101] = aux_sym_record_type_token101,
  [aux_sym_record_type_token102] = aux_sym_record_type_token102,
  [aux_sym_record_type_token103] = aux_sym_record_type_token103,
  [aux_sym_record_type_token104] = aux_sym_record_type_token104,
  [aux_sym_record_type_token105] = aux_sym_record_type_token105,
  [aux_sym_record_type_token106] = aux_sym_record_type_token106,
  [aux_sym_record_type_token107] = aux_sym_record_type_token107,
  [aux_sym_record_type_token108] = aux_sym_record_type_token108,
  [aux_sym_record_type_token109] = aux_sym_record_type_token109,
  [aux_sym_record_type_token110] = aux_sym_record_type_token110,
  [aux_sym_record_type_token111] = aux_sym_record_type_token111,
  [aux_sym_data_type_token1] = aux_sym_data_type_token1,
  [aux_sym_data_type_token2] = aux_sym_data_type_token2,
  [aux_sym_data_type_token3] = aux_sym_data_type_token3,
  [aux_sym_data_type_token4] = aux_sym_data_type_token4,
  [aux_sym_data_type_token5] = aux_sym_data_type_token5,
  [aux_sym_data_type_token6] = aux_sym_data_type_token6,
  [aux_sym_data_type_token7] = aux_sym_data_type_token7,
  [aux_sym_array_type_token1] = aux_sym_array_type_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unescaped_double_string_fragment] = sym_string_literal,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [sym_number] = sym_number,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_special_keywords_token1] = aux_sym_special_keywords_token1,
  [aux_sym_special_keywords_token2] = aux_sym_special_keywords_token2,
  [aux_sym_special_keywords_token3] = aux_sym_special_keywords_token3,
  [aux_sym_special_keywords_token4] = aux_sym_special_keywords_token4,
  [aux_sym_special_keywords_token5] = aux_sym_special_keywords_token5,
  [aux_sym_special_keywords_token6] = aux_sym_special_keywords_token6,
  [aux_sym_special_keywords_token7] = aux_sym_special_keywords_token7,
  [aux_sym_special_keywords_token8] = aux_sym_special_keywords_token8,
  [aux_sym_special_keywords_token9] = aux_sym_special_keywords_token9,
  [aux_sym_special_keywords_token10] = aux_sym_special_keywords_token10,
  [aux_sym_special_keywords_token11] = aux_sym_special_keywords_token11,
  [aux_sym_special_keywords_token12] = aux_sym_special_keywords_token12,
  [aux_sym_special_keywords_token13] = aux_sym_special_keywords_token13,
  [aux_sym_special_keywords_token14] = aux_sym_special_keywords_token14,
  [aux_sym_special_keywords_token15] = aux_sym_special_keywords_token15,
  [aux_sym_special_keywords_token16] = aux_sym_special_keywords_token16,
  [aux_sym_special_keywords_token17] = aux_sym_special_keywords_token17,
  [aux_sym_special_keywords_token18] = aux_sym_special_keywords_token18,
  [aux_sym_special_keywords_token19] = aux_sym_special_keywords_token19,
  [sym_comment] = sym_comment,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_for_statement_token1] = aux_sym_for_statement_token1,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_procedure_definition_token1] = aux_sym_procedure_definition_token1,
  [sym_source_file] = sym_source_file,
  [sym_keyword] = sym_keyword,
  [sym__optional_divisions] = sym__optional_divisions,
  [sym_target_division] = sym_target_division,
  [sym_define_division] = sym_define_division,
  [sym_define_statement] = sym_define_statement,
  [sym_setup_division] = sym_setup_division,
  [sym_select_division] = sym_select_division,
  [sym_sort_division] = sym_sort_division,
  [sym_letter_division] = sym_letter_division,
  [sym_print_division] = sym_print_division,
  [sym_total_division] = sym_total_division,
  [sym_record_type] = sym_record_type,
  [sym_data_type] = sym_data_type,
  [sym_array_type] = sym_array_type,
  [sym_string_literal] = sym_string_literal,
  [sym__identifier] = sym__identifier,
  [sym_identifier] = sym_identifier,
  [sym__array_identifier] = sym__array_identifier,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_include_directive] = sym_include_directive,
  [sym_special_keywords] = sym_special_keywords,
  [sym_expression] = sym_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym__lhs_expression] = sym__lhs_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_for_statement] = sym_for_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_statement] = sym_statement,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_procedure_call] = sym_procedure_call,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_define_division_repeat1] = aux_sym_define_division_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym__array_identifier_repeat1] = aux_sym__array_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_division_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_division_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setup_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sort_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_letter_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_division_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_total_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token49] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token50] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token51] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token52] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token53] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token54] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token55] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token56] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token57] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token58] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token59] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token60] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token61] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token62] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token63] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token64] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token65] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token66] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token67] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token68] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token69] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token70] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token71] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token72] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token73] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token74] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token75] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token76] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token77] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token78] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token79] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token80] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token81] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token82] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token83] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token84] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token85] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token86] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token87] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token88] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token89] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token90] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token91] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token92] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token93] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token94] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token95] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token96] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token97] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token98] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token99] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token100] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token101] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token102] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token103] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token104] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token105] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token106] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token107] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token108] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token109] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token110] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_token111] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_special_keywords_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token19] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_divisions] = {
    .visible = false,
    .named = true,
  },
  [sym_target_division] = {
    .visible = true,
    .named = true,
  },
  [sym_define_division] = {
    .visible = true,
    .named = true,
  },
  [sym_define_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_setup_division] = {
    .visible = true,
    .named = true,
  },
  [sym_select_division] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_division] = {
    .visible = true,
    .named = true,
  },
  [sym_letter_division] = {
    .visible = true,
    .named = true,
  },
  [sym_print_division] = {
    .visible = true,
    .named = true,
  },
  [sym_total_division] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__array_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_special_keywords] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__lhs_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_procedure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__array_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_initializer = 1,
  field_left = 2,
  field_operator = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [3] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_initializer, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym__identifier_token1_character_set_1(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1003);
      if (lookahead == '"') ADVANCE(1151);
      if (lookahead == '#') ADVANCE(1211);
      if (lookahead == '(') ADVANCE(1148);
      if (lookahead == ')') ADVANCE(1150);
      if (lookahead == '*') ADVANCE(1240);
      if (lookahead == '+') ADVANCE(1238);
      if (lookahead == ',') ADVANCE(1149);
      if (lookahead == '-') ADVANCE(1239);
      if (lookahead == '.') ADVANCE(993);
      if (lookahead == '/') ADVANCE(1241);
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == ':') ADVANCE(1213);
      if (lookahead == '<') ADVANCE(1244);
      if (lookahead == '=') ADVANCE(1017);
      if (lookahead == '>') ADVANCE(1243);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(13);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(505);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(496);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(653);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(824);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(332);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1247);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(887);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1151);
      if (lookahead == '#') ADVANCE(1211);
      if (lookahead == '(') ADVANCE(1148);
      if (lookahead == '*') ADVANCE(1240);
      if (lookahead == '+') ADVANCE(1238);
      if (lookahead == '-') ADVANCE(1239);
      if (lookahead == '.') ADVANCE(993);
      if (lookahead == '/') ADVANCE(1241);
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == '<') ADVANCE(1244);
      if (lookahead == '=') ADVANCE(1017);
      if (lookahead == '>') ADVANCE(1243);
      if (lookahead == 'A') ADVANCE(1157);
      if (lookahead == 'O') ADVANCE(1158);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1196);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1200);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(1151);
      if (lookahead == '#') ADVANCE(1211);
      if (lookahead == '(') ADVANCE(1148);
      if (lookahead == '.') ADVANCE(993);
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1182);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1177);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1196);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1200);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1151);
      if (lookahead == '#') ADVANCE(1211);
      if (lookahead == '(') ADVANCE(1148);
      if (lookahead == '.') ADVANCE(993);
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1196);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1200);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1151);
      if (lookahead == '.') ADVANCE(993);
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1200);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1151);
      if (lookahead == '[') ADVANCE(1152);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1154);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1211);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1192);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1200);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1211);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1200);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(731);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(1234);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(753);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(1236);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(977);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(709);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(36);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(477);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(281);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(542);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(496);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(666);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(120);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(701);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(824);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(278);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(333);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1000);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1208);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(562);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(826);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(675);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(675);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(959);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(959);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(548);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1080);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1079);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(978);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1030);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1066);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(562);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(288);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(877);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1245);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(557);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(972);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(934);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(765);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(738);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(290);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1008);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(738);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(444);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(444);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(793);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(947);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(447);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(826);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(889);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(784);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(893);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(321);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(930);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 115:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(763);
      END_STATE();
    case 116:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(763);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(733);
      END_STATE();
    case 117:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(941);
      END_STATE();
    case 118:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(345);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(440);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(323);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(843);
      END_STATE();
    case 119:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(761);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(966);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 120:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(761);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 121:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(953);
      END_STATE();
    case 122:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 123:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 126:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(313);
      END_STATE();
    case 127:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(442);
      END_STATE();
    case 128:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(753);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1215);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1091);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(753);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(966);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(725);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(492);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(813);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(983);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(508);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(952);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(676);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(715);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(428);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(857);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(897);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(898);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(866);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(900);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(901);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1215);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(902);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(789);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(706);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(680);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(717);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(924);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(926);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(927);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(928);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1019);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1039);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1075);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1223);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1076);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1050);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1046);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1138);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1217);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1219);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(954);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(507);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(955);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(945);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(956);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(957);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(948);
      END_STATE();
    case 209:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 210:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 211:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(668);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(674);
      END_STATE();
    case 217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 220:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 222:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(682);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(704);
      END_STATE();
    case 229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(779);
      END_STATE();
    case 230:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 240:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 241:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      END_STATE();
    case 242:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 243:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(976);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(548);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1140);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1141);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1246);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1094);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1117);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1115);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1018);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1103);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1212);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1111);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1228);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1218);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1093);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1024);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1226);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1087);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1214);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(944);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(828);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 323:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 334:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 342:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 356:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 357:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 358:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 359:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 363:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 365:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 366:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1006);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 367:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(853);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 368:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(853);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 369:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(444);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 370:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(678);
      END_STATE();
    case 371:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(430);
      END_STATE();
    case 372:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(656);
      END_STATE();
    case 373:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(657);
      END_STATE();
    case 374:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      END_STATE();
    case 375:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(484);
      END_STATE();
    case 376:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(658);
      END_STATE();
    case 377:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(659);
      END_STATE();
    case 378:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(660);
      END_STATE();
    case 379:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(415);
      END_STATE();
    case 380:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(661);
      END_STATE();
    case 381:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(443);
      END_STATE();
    case 382:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(662);
      END_STATE();
    case 383:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(663);
      END_STATE();
    case 384:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(664);
      END_STATE();
    case 385:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(665);
      END_STATE();
    case 386:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 387:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(451);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(362);
      END_STATE();
    case 388:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(688);
      END_STATE();
    case 389:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 390:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(485);
      END_STATE();
    case 391:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1119);
      END_STATE();
    case 392:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1037);
      END_STATE();
    case 393:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1042);
      END_STATE();
    case 394:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1224);
      END_STATE();
    case 395:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1038);
      END_STATE();
    case 396:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(815);
      END_STATE();
    case 397:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(569);
      END_STATE();
    case 398:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 399:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 400:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 401:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 402:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 403:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(524);
      END_STATE();
    case 404:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1055);
      END_STATE();
    case 405:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(449);
      END_STATE();
    case 406:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(679);
      END_STATE();
    case 407:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 408:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 409:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(691);
      END_STATE();
    case 410:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(695);
      END_STATE();
    case 411:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 412:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(705);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(988);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(960);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 419:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 421:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 423:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 425:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 426:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 427:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 428:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      END_STATE();
    case 429:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 430:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 431:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 432:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      END_STATE();
    case 433:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 434:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(821);
      END_STATE();
    case 435:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 436:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 437:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(875);
      END_STATE();
    case 438:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(841);
      END_STATE();
    case 439:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 440:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 441:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 442:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(931);
      END_STATE();
    case 443:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 444:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(963);
      END_STATE();
    case 446:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(965);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 448:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 449:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(961);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 452:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      END_STATE();
    case 454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 455:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(839);
      END_STATE();
    case 457:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(932);
      END_STATE();
    case 458:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 461:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 462:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 463:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 464:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(893);
      END_STATE();
    case 465:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      END_STATE();
    case 466:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 467:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 468:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
      END_STATE();
    case 469:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      END_STATE();
    case 470:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(896);
      END_STATE();
    case 471:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 472:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 473:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(700);
      END_STATE();
    case 474:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(907);
      END_STATE();
    case 475:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 476:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      END_STATE();
    case 477:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 478:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 479:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 480:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 481:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 482:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 483:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(989);
      END_STATE();
    case 484:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 485:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 486:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(929);
      END_STATE();
    case 487:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1043);
      END_STATE();
    case 488:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(152);
      END_STATE();
    case 489:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(796);
      END_STATE();
    case 490:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(936);
      END_STATE();
    case 491:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(538);
      END_STATE();
    case 492:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(429);
      END_STATE();
    case 493:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(439);
      END_STATE();
    case 494:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(220);
      END_STATE();
    case 495:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(539);
      END_STATE();
    case 496:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 497:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1061);
      END_STATE();
    case 498:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1010);
      END_STATE();
    case 499:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1099);
      END_STATE();
    case 500:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1062);
      END_STATE();
    case 501:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 502:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1045);
      END_STATE();
    case 503:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 504:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1027);
      END_STATE();
    case 505:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(673);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 506:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 507:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 508:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(943);
      END_STATE();
    case 509:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(498);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      END_STATE();
    case 510:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(833);
      END_STATE();
    case 511:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(833);
      END_STATE();
    case 512:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(986);
      END_STATE();
    case 513:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 514:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 515:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(669);
      END_STATE();
    case 516:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 517:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(935);
      END_STATE();
    case 518:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 519:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 520:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 521:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 522:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 523:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 524:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 525:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 526:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 527:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 528:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 529:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 530:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 531:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 532:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 533:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 534:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(987);
      END_STATE();
    case 535:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 536:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 537:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 538:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 539:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 540:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(714);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      END_STATE();
    case 541:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 542:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 543:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 544:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1033);
      END_STATE();
    case 545:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1068);
      END_STATE();
    case 546:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1052);
      END_STATE();
    case 547:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1106);
      END_STATE();
    case 548:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 549:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 550:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 551:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(820);
      END_STATE();
    case 552:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 553:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 554:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 555:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 556:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 557:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 558:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 559:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 560:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 561:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(359);
      END_STATE();
    case 562:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 563:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1085);
      END_STATE();
    case 564:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1012);
      END_STATE();
    case 565:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1074);
      END_STATE();
    case 566:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1101);
      END_STATE();
    case 567:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1057);
      END_STATE();
    case 568:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1220);
      END_STATE();
    case 569:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1056);
      END_STATE();
    case 570:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1230);
      END_STATE();
    case 571:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1120);
      END_STATE();
    case 572:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1070);
      END_STATE();
    case 573:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1108);
      END_STATE();
    case 574:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1124);
      END_STATE();
    case 575:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1098);
      END_STATE();
    case 576:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1088);
      END_STATE();
    case 577:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1081);
      END_STATE();
    case 578:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1100);
      END_STATE();
    case 579:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1109);
      END_STATE();
    case 580:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1114);
      END_STATE();
    case 581:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1036);
      END_STATE();
    case 582:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1097);
      END_STATE();
    case 583:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1110);
      END_STATE();
    case 584:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 585:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 586:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 587:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 588:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 589:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 590:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(971);
      END_STATE();
    case 591:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(958);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 592:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 593:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 594:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 595:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 596:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 597:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 598:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(859);
      END_STATE();
    case 599:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      END_STATE();
    case 600:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 601:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 602:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(861);
      END_STATE();
    case 603:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 604:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(862);
      END_STATE();
    case 605:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 606:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(864);
      END_STATE();
    case 607:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 608:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 609:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(867);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      END_STATE();
    case 610:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 611:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(869);
      END_STATE();
    case 612:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(871);
      END_STATE();
    case 613:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 614:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 615:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 616:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 617:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 618:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 619:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(939);
      END_STATE();
    case 620:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 621:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 622:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 623:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 624:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 625:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 626:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 627:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 628:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 629:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 630:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 631:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 632:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 633:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 634:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 635:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 636:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 637:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 638:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 639:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 640:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 641:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      END_STATE();
    case 642:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 643:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 644:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      END_STATE();
    case 645:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 646:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 647:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 648:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(918);
      END_STATE();
    case 649:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 650:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 651:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 652:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 653:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 654:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1216);
      END_STATE();
    case 655:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1104);
      END_STATE();
    case 656:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1031);
      END_STATE();
    case 657:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1067);
      END_STATE();
    case 658:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1063);
      END_STATE();
    case 659:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1131);
      END_STATE();
    case 660:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1136);
      END_STATE();
    case 661:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1133);
      END_STATE();
    case 662:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1134);
      END_STATE();
    case 663:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1129);
      END_STATE();
    case 664:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 665:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1128);
      END_STATE();
    case 666:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 667:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(967);
      END_STATE();
    case 668:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(969);
      END_STATE();
    case 669:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 670:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 671:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 672:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 673:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 674:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(974);
      END_STATE();
    case 675:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 676:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 677:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 678:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 679:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 680:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 681:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 682:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 683:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 684:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(754);
      END_STATE();
    case 685:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(757);
      END_STATE();
    case 686:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 687:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 688:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(764);
      END_STATE();
    case 689:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 690:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 691:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 692:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 693:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 694:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 695:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(797);
      END_STATE();
    case 696:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 697:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 698:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 699:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 700:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 701:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(910);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 702:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 703:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 704:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(970);
      END_STATE();
    case 705:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 706:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 707:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(942);
      END_STATE();
    case 708:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(938);
      END_STATE();
    case 709:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 710:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 711:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 712:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 713:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 714:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 715:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(946);
      END_STATE();
    case 716:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 717:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(950);
      END_STATE();
    case 718:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(951);
      END_STATE();
    case 719:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 720:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1021);
      END_STATE();
    case 721:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1089);
      END_STATE();
    case 722:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1051);
      END_STATE();
    case 723:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1086);
      END_STATE();
    case 724:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1113);
      END_STATE();
    case 725:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 726:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(723);
      END_STATE();
    case 727:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(908);
      END_STATE();
    case 728:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 729:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(532);
      END_STATE();
    case 730:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 731:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 732:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(888);
      END_STATE();
    case 733:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(781);
      END_STATE();
    case 734:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(788);
      END_STATE();
    case 735:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(464);
      END_STATE();
    case 736:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1053);
      END_STATE();
    case 737:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1004);
      END_STATE();
    case 738:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 739:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      END_STATE();
    case 740:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1059);
      END_STATE();
    case 741:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 742:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1144);
      END_STATE();
    case 743:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1123);
      END_STATE();
    case 744:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1121);
      END_STATE();
    case 745:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1041);
      END_STATE();
    case 746:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1139);
      END_STATE();
    case 747:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1040);
      END_STATE();
    case 748:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1044);
      END_STATE();
    case 749:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1049);
      END_STATE();
    case 750:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 751:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      END_STATE();
    case 752:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(964);
      END_STATE();
    case 753:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 754:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(981);
      END_STATE();
    case 755:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 756:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 757:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(982);
      END_STATE();
    case 758:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 759:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 760:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 761:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 762:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 763:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 764:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 765:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 766:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(854);
      END_STATE();
    case 767:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(984);
      END_STATE();
    case 768:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 769:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 770:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 771:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 772:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 773:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 774:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 775:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 776:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 777:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 778:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(708);
      END_STATE();
    case 779:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 780:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 781:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 782:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 783:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 784:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 785:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(878);
      END_STATE();
    case 786:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 787:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 788:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 789:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 790:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(881);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      END_STATE();
    case 791:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 792:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 793:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 794:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 795:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 796:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(937);
      END_STATE();
    case 797:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 798:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 799:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 800:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 801:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 802:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 803:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 804:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 805:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 806:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 807:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 808:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 809:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 810:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 811:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 812:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 813:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 814:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1028);
      END_STATE();
    case 815:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1116);
      END_STATE();
    case 816:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1231);
      END_STATE();
    case 817:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1227);
      END_STATE();
    case 818:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1090);
      END_STATE();
    case 819:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1095);
      END_STATE();
    case 820:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1221);
      END_STATE();
    case 821:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1065);
      END_STATE();
    case 822:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1112);
      END_STATE();
    case 823:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1222);
      END_STATE();
    case 824:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      END_STATE();
    case 825:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(814);
      END_STATE();
    case 826:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(876);
      END_STATE();
    case 827:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      END_STATE();
    case 828:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 829:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(844);
      END_STATE();
    case 830:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(817);
      END_STATE();
    case 831:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(818);
      END_STATE();
    case 832:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(899);
      END_STATE();
    case 833:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      END_STATE();
    case 834:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(835);
      END_STATE();
    case 835:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 836:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 837:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      END_STATE();
    case 838:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(891);
      END_STATE();
    case 839:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(906);
      END_STATE();
    case 840:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      END_STATE();
    case 841:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 842:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      END_STATE();
    case 843:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 844:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      END_STATE();
    case 845:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 846:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      END_STATE();
    case 847:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      END_STATE();
    case 848:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(920);
      END_STATE();
    case 849:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      END_STATE();
    case 850:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      END_STATE();
    case 851:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 852:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 853:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1060);
      END_STATE();
    case 854:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      END_STATE();
    case 855:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1142);
      END_STATE();
    case 856:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 857:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 858:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1016);
      END_STATE();
    case 859:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1029);
      END_STATE();
    case 860:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 861:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1048);
      END_STATE();
    case 862:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1035);
      END_STATE();
    case 863:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1072);
      END_STATE();
    case 864:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1083);
      END_STATE();
    case 865:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1054);
      END_STATE();
    case 866:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1229);
      END_STATE();
    case 867:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 868:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1073);
      END_STATE();
    case 869:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1232);
      END_STATE();
    case 870:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1137);
      END_STATE();
    case 871:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1069);
      END_STATE();
    case 872:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1047);
      END_STATE();
    case 873:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 874:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 875:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(980);
      END_STATE();
    case 876:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(670);
      END_STATE();
    case 877:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 878:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      END_STATE();
    case 879:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      END_STATE();
    case 880:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      END_STATE();
    case 881:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      END_STATE();
    case 882:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 883:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 884:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(912);
      END_STATE();
    case 885:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 886:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(703);
      END_STATE();
    case 887:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      END_STATE();
    case 888:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 889:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 890:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 891:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(773);
      END_STATE();
    case 892:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 893:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 894:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 895:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      END_STATE();
    case 896:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 897:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(452);
      END_STATE();
    case 898:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      END_STATE();
    case 899:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(684);
      END_STATE();
    case 900:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      END_STATE();
    case 901:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 902:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      END_STATE();
    case 903:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      END_STATE();
    case 904:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 905:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 906:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 907:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      END_STATE();
    case 908:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      END_STATE();
    case 909:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 910:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 911:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      END_STATE();
    case 912:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 913:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(803);
      END_STATE();
    case 914:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      END_STATE();
    case 915:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 916:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      END_STATE();
    case 917:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 918:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      END_STATE();
    case 919:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 920:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      END_STATE();
    case 921:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(454);
      END_STATE();
    case 922:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      END_STATE();
    case 923:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(911);
      END_STATE();
    case 924:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      END_STATE();
    case 925:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      END_STATE();
    case 926:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 927:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      END_STATE();
    case 928:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      END_STATE();
    case 929:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      END_STATE();
    case 930:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      END_STATE();
    case 931:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 932:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      END_STATE();
    case 933:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(811);
      END_STATE();
    case 934:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 935:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      END_STATE();
    case 936:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(721);
      END_STATE();
    case 937:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(732);
      END_STATE();
    case 938:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(724);
      END_STATE();
    case 939:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(647);
      END_STATE();
    case 940:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      END_STATE();
    case 941:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(800);
      END_STATE();
    case 942:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 943:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 944:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      END_STATE();
    case 945:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 946:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 947:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 948:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(787);
      END_STATE();
    case 949:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(608);
      END_STATE();
    case 950:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(610);
      END_STATE();
    case 951:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(612);
      END_STATE();
    case 952:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 953:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(925);
      END_STATE();
    case 954:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1132);
      END_STATE();
    case 955:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1126);
      END_STATE();
    case 956:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1127);
      END_STATE();
    case 957:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1130);
      END_STATE();
    case 958:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 959:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(420);
      END_STATE();
    case 960:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 961:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(268);
      END_STATE();
    case 962:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(459);
      END_STATE();
    case 963:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(437);
      END_STATE();
    case 964:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(314);
      END_STATE();
    case 965:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(330);
      END_STATE();
    case 966:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1225);
      END_STATE();
    case 967:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1064);
      END_STATE();
    case 968:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(677);
      END_STATE();
    case 969:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(816);
      END_STATE();
    case 970:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(823);
      END_STATE();
    case 971:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(413);
      END_STATE();
    case 972:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 973:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(537);
      END_STATE();
    case 974:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(629);
      END_STATE();
    case 975:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(719);
      END_STATE();
    case 976:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(483);
      END_STATE();
    case 977:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 978:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1146);
      END_STATE();
    case 979:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1143);
      END_STATE();
    case 980:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1034);
      END_STATE();
    case 981:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1071);
      END_STATE();
    case 982:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1077);
      END_STATE();
    case 983:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1084);
      END_STATE();
    case 984:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 985:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(730);
      END_STATE();
    case 986:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(836);
      END_STATE();
    case 987:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(837);
      END_STATE();
    case 988:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(92);
      END_STATE();
    case 989:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(95);
      END_STATE();
    case 990:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1204);
      END_STATE();
    case 991:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1205);
      END_STATE();
    case 992:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      END_STATE();
    case 993:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1209);
      END_STATE();
    case 994:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1207);
      END_STATE();
    case 995:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1208);
      END_STATE();
    case 996:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1206);
      END_STATE();
    case 997:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1200);
      END_STATE();
    case 998:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 999:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(997);
      END_STATE();
    case 1000:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(999);
      END_STATE();
    case 1001:
      if (eof) ADVANCE(1003);
      if (lookahead == '"') ADVANCE(1151);
      if (lookahead == '#') ADVANCE(1211);
      if (lookahead == '(') ADVANCE(1148);
      if (lookahead == '*') ADVANCE(1240);
      if (lookahead == '+') ADVANCE(1238);
      if (lookahead == '-') ADVANCE(1239);
      if (lookahead == '.') ADVANCE(993);
      if (lookahead == '/') ADVANCE(1241);
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == '<') ADVANCE(1244);
      if (lookahead == '=') ADVANCE(1017);
      if (lookahead == '>') ADVANCE(1243);
      if (lookahead == 'A') ADVANCE(1157);
      if (lookahead == 'O') ADVANCE(1158);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1159);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1196);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1001)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1200);
      END_STATE();
    case 1002:
      if (eof) ADVANCE(1003);
      if (lookahead == '"') ADVANCE(1151);
      if (lookahead == '#') ADVANCE(1211);
      if (lookahead == '(') ADVANCE(1148);
      if (lookahead == '.') ADVANCE(993);
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1159);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1196);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1002)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1200);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_define_division_token2);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_define_division_token2);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_letter_division_token1);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_print_division_token2);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_total_division_token1);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_record_type_token2);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_record_type_token3);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_record_type_token4);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_record_type_token5);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_record_type_token6);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_record_type_token7);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_record_type_token8);
      if (lookahead == ' ') ADVANCE(913);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_record_type_token9);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_record_type_token10);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_record_type_token11);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_record_type_token12);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_record_type_token13);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_record_type_token14);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_record_type_token15);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_record_type_token16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_record_type_token17);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_record_type_token18);
      if (lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_record_type_token19);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_record_type_token20);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_record_type_token21);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_record_type_token22);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_record_type_token23);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_record_type_token24);
      if (lookahead == ' ') ADVANCE(468);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_record_type_token25);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_record_type_token26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(791);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(710);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_record_type_token27);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_record_type_token28);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_record_type_token29);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_record_type_token30);
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_record_type_token31);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_record_type_token32);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_record_type_token33);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_record_type_token34);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_record_type_token35);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_record_type_token36);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_record_type_token37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_record_type_token38);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_record_type_token39);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_record_type_token40);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_record_type_token41);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_record_type_token42);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_record_type_token43);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_record_type_token44);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_record_type_token45);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_record_type_token46);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_record_type_token47);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_record_type_token48);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_record_type_token49);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_record_type_token50);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_record_type_token51);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_record_type_token52);
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_record_type_token53);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_record_type_token54);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_record_type_token55);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_record_type_token56);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_record_type_token57);
      if (lookahead == ' ') ADVANCE(734);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_record_type_token58);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_record_type_token59);
      if (lookahead == ' ') ADVANCE(387);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_record_type_token60);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_record_type_token61);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_record_type_token62);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_record_type_token63);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_record_type_token64);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_record_type_token65);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_record_type_token66);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_record_type_token67);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_record_type_token68);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_record_type_token69);
      if (lookahead == ' ') ADVANCE(933);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_record_type_token70);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_record_type_token71);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_record_type_token72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(711);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_record_type_token73);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_record_type_token74);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_record_type_token75);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_record_type_token76);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_record_type_token77);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_record_type_token78);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_record_type_token79);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_record_type_token80);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_record_type_token81);
      if (lookahead == ' ') ADVANCE(540);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_record_type_token82);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_record_type_token83);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_record_type_token84);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_record_type_token85);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(778);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_record_type_token86);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_record_type_token87);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_record_type_token88);
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_record_type_token89);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_record_type_token90);
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_record_type_token91);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_record_type_token92);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_record_type_token93);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_record_type_token94);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_record_type_token95);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_record_type_token96);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_record_type_token97);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_record_type_token98);
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_record_type_token99);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_record_type_token100);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_record_type_token101);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_record_type_token102);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_record_type_token103);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_record_type_token104);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_record_type_token105);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_record_type_token106);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_record_type_token107);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_record_type_token108);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_record_type_token109);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_record_type_token110);
      if (lookahead == ' ') ADVANCE(975);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_record_type_token111);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_data_type_token1);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_data_type_token2);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_data_type_token3);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_data_type_token4);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_data_type_token5);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_data_type_token6);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_data_type_token7);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(1154);
      if (lookahead == ']') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1152);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '[') ADVANCE(1152);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1154);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1154);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(1247);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'D') ADVANCE(1235);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'N') ADVANCE(1156);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1176);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1199);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1170);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1197);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1200);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1193);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1155);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1198);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1015);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1179);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1163);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1169);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1009);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1011);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1173);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1174);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1195);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1162);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1013);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1167);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1168);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1200);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1161);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1187);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1186);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1190);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1005);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1160);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1183);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1165);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1166);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1188);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1194);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1180);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1164);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1185);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1191);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1175);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1147);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1210);
      if (lookahead == '0') ADVANCE(1207);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(990);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(991);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(996);
      if (lookahead == '_') ADVANCE(994);
      if (lookahead == 'n') ADVANCE(1201);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '_') ADVANCE(992);
      if (lookahead == 'n') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(990);
      if (lookahead == 'n') ADVANCE(1201);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1204);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(991);
      if (lookahead == 'n') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1205);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(996);
      if (lookahead == 'n') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1206);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(994);
      if (lookahead == 'n') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1207);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1208);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '_') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1209);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1209);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_special_keywords_token1);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_special_keywords_token2);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_special_keywords_token3);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_special_keywords_token4);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_special_keywords_token5);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_special_keywords_token6);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_special_keywords_token7);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_special_keywords_token8);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(462);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_special_keywords_token9);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_special_keywords_token10);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_special_keywords_token11);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_special_keywords_token12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_special_keywords_token13);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_special_keywords_token14);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_special_keywords_token15);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_special_keywords_token16);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_special_keywords_token17);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_special_keywords_token18);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(774);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_special_keywords_token19);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1200);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(1242);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_procedure_definition_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 1001},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 1002},
  [15] = {.lex_state = 1002},
  [16] = {.lex_state = 1002},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1002},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 1002},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 1002},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 1002},
  [35] = {.lex_state = 1002},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 1001},
  [39] = {.lex_state = 1001},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 1001},
  [47] = {.lex_state = 1001},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 1001},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 1001},
  [65] = {.lex_state = 1001},
  [66] = {.lex_state = 1001},
  [67] = {.lex_state = 1001},
  [68] = {.lex_state = 1001},
  [69] = {.lex_state = 1001},
  [70] = {.lex_state = 1001},
  [71] = {.lex_state = 1001},
  [72] = {.lex_state = 1001},
  [73] = {.lex_state = 1001},
  [74] = {.lex_state = 1001},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 1001},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1001},
  [93] = {.lex_state = 1001},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 1001},
  [97] = {.lex_state = 1001},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 1001},
  [106] = {.lex_state = 1001},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 1001},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 1002},
  [125] = {.lex_state = 1002},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1002},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 1002},
  [133] = {.lex_state = 1002},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 1002},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 1002},
  [138] = {.lex_state = 1002},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 1002},
  [141] = {.lex_state = 1002},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 1002},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 1002},
  [147] = {.lex_state = 1002},
  [148] = {.lex_state = 1002},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 1002},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1002},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1002},
  [165] = {.lex_state = 1002},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1002},
  [168] = {.lex_state = 1002},
  [169] = {.lex_state = 1002},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [aux_sym_keyword_token2] = ACTIONS(1),
    [aux_sym_keyword_token3] = ACTIONS(1),
    [aux_sym_keyword_token4] = ACTIONS(1),
    [aux_sym_keyword_token5] = ACTIONS(1),
    [aux_sym_keyword_token6] = ACTIONS(1),
    [aux_sym_target_division_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_define_division_token1] = ACTIONS(1),
    [aux_sym_define_division_token2] = ACTIONS(1),
    [aux_sym_setup_division_token1] = ACTIONS(1),
    [aux_sym_select_division_token1] = ACTIONS(1),
    [aux_sym_sort_division_token1] = ACTIONS(1),
    [aux_sym_letter_division_token1] = ACTIONS(1),
    [aux_sym_print_division_token1] = ACTIONS(1),
    [aux_sym_print_division_token2] = ACTIONS(1),
    [aux_sym_record_type_token1] = ACTIONS(1),
    [aux_sym_record_type_token2] = ACTIONS(1),
    [aux_sym_record_type_token3] = ACTIONS(1),
    [aux_sym_record_type_token4] = ACTIONS(1),
    [aux_sym_record_type_token5] = ACTIONS(1),
    [aux_sym_record_type_token6] = ACTIONS(1),
    [aux_sym_record_type_token7] = ACTIONS(1),
    [aux_sym_record_type_token8] = ACTIONS(1),
    [aux_sym_record_type_token9] = ACTIONS(1),
    [aux_sym_record_type_token10] = ACTIONS(1),
    [aux_sym_record_type_token11] = ACTIONS(1),
    [aux_sym_record_type_token12] = ACTIONS(1),
    [aux_sym_record_type_token13] = ACTIONS(1),
    [aux_sym_record_type_token14] = ACTIONS(1),
    [aux_sym_record_type_token15] = ACTIONS(1),
    [aux_sym_record_type_token16] = ACTIONS(1),
    [aux_sym_record_type_token17] = ACTIONS(1),
    [aux_sym_record_type_token18] = ACTIONS(1),
    [aux_sym_record_type_token19] = ACTIONS(1),
    [aux_sym_record_type_token20] = ACTIONS(1),
    [aux_sym_record_type_token21] = ACTIONS(1),
    [aux_sym_record_type_token22] = ACTIONS(1),
    [aux_sym_record_type_token23] = ACTIONS(1),
    [aux_sym_record_type_token24] = ACTIONS(1),
    [aux_sym_record_type_token25] = ACTIONS(1),
    [aux_sym_record_type_token26] = ACTIONS(1),
    [aux_sym_record_type_token27] = ACTIONS(1),
    [aux_sym_record_type_token28] = ACTIONS(1),
    [aux_sym_record_type_token29] = ACTIONS(1),
    [aux_sym_record_type_token30] = ACTIONS(1),
    [aux_sym_record_type_token31] = ACTIONS(1),
    [aux_sym_record_type_token32] = ACTIONS(1),
    [aux_sym_record_type_token33] = ACTIONS(1),
    [aux_sym_record_type_token34] = ACTIONS(1),
    [aux_sym_record_type_token35] = ACTIONS(1),
    [aux_sym_record_type_token36] = ACTIONS(1),
    [aux_sym_record_type_token37] = ACTIONS(1),
    [aux_sym_record_type_token38] = ACTIONS(1),
    [aux_sym_record_type_token39] = ACTIONS(1),
    [aux_sym_record_type_token40] = ACTIONS(1),
    [aux_sym_record_type_token41] = ACTIONS(1),
    [aux_sym_record_type_token42] = ACTIONS(1),
    [aux_sym_record_type_token43] = ACTIONS(1),
    [aux_sym_record_type_token44] = ACTIONS(1),
    [aux_sym_record_type_token45] = ACTIONS(1),
    [aux_sym_record_type_token46] = ACTIONS(1),
    [aux_sym_record_type_token47] = ACTIONS(1),
    [aux_sym_record_type_token48] = ACTIONS(1),
    [aux_sym_record_type_token49] = ACTIONS(1),
    [aux_sym_record_type_token50] = ACTIONS(1),
    [aux_sym_record_type_token51] = ACTIONS(1),
    [aux_sym_record_type_token52] = ACTIONS(1),
    [aux_sym_record_type_token53] = ACTIONS(1),
    [aux_sym_record_type_token54] = ACTIONS(1),
    [aux_sym_record_type_token55] = ACTIONS(1),
    [aux_sym_record_type_token56] = ACTIONS(1),
    [aux_sym_record_type_token57] = ACTIONS(1),
    [aux_sym_record_type_token58] = ACTIONS(1),
    [aux_sym_record_type_token59] = ACTIONS(1),
    [aux_sym_record_type_token60] = ACTIONS(1),
    [aux_sym_record_type_token61] = ACTIONS(1),
    [aux_sym_record_type_token62] = ACTIONS(1),
    [aux_sym_record_type_token63] = ACTIONS(1),
    [aux_sym_record_type_token64] = ACTIONS(1),
    [aux_sym_record_type_token65] = ACTIONS(1),
    [aux_sym_record_type_token66] = ACTIONS(1),
    [aux_sym_record_type_token67] = ACTIONS(1),
    [aux_sym_record_type_token68] = ACTIONS(1),
    [aux_sym_record_type_token69] = ACTIONS(1),
    [aux_sym_record_type_token70] = ACTIONS(1),
    [aux_sym_record_type_token71] = ACTIONS(1),
    [aux_sym_record_type_token72] = ACTIONS(1),
    [aux_sym_record_type_token73] = ACTIONS(1),
    [aux_sym_record_type_token74] = ACTIONS(1),
    [aux_sym_record_type_token75] = ACTIONS(1),
    [aux_sym_record_type_token76] = ACTIONS(1),
    [aux_sym_record_type_token77] = ACTIONS(1),
    [aux_sym_record_type_token78] = ACTIONS(1),
    [aux_sym_record_type_token79] = ACTIONS(1),
    [aux_sym_record_type_token80] = ACTIONS(1),
    [aux_sym_record_type_token81] = ACTIONS(1),
    [aux_sym_record_type_token82] = ACTIONS(1),
    [aux_sym_record_type_token83] = ACTIONS(1),
    [aux_sym_record_type_token84] = ACTIONS(1),
    [aux_sym_record_type_token85] = ACTIONS(1),
    [aux_sym_record_type_token86] = ACTIONS(1),
    [aux_sym_record_type_token87] = ACTIONS(1),
    [aux_sym_record_type_token88] = ACTIONS(1),
    [aux_sym_record_type_token89] = ACTIONS(1),
    [aux_sym_record_type_token90] = ACTIONS(1),
    [aux_sym_record_type_token91] = ACTIONS(1),
    [aux_sym_record_type_token92] = ACTIONS(1),
    [aux_sym_record_type_token93] = ACTIONS(1),
    [aux_sym_record_type_token94] = ACTIONS(1),
    [aux_sym_record_type_token95] = ACTIONS(1),
    [aux_sym_record_type_token96] = ACTIONS(1),
    [aux_sym_record_type_token97] = ACTIONS(1),
    [aux_sym_record_type_token98] = ACTIONS(1),
    [aux_sym_record_type_token99] = ACTIONS(1),
    [aux_sym_record_type_token100] = ACTIONS(1),
    [aux_sym_record_type_token101] = ACTIONS(1),
    [aux_sym_record_type_token102] = ACTIONS(1),
    [aux_sym_record_type_token103] = ACTIONS(1),
    [aux_sym_record_type_token104] = ACTIONS(1),
    [aux_sym_record_type_token105] = ACTIONS(1),
    [aux_sym_record_type_token106] = ACTIONS(1),
    [aux_sym_record_type_token107] = ACTIONS(1),
    [aux_sym_record_type_token108] = ACTIONS(1),
    [aux_sym_record_type_token109] = ACTIONS(1),
    [aux_sym_record_type_token110] = ACTIONS(1),
    [aux_sym_record_type_token111] = ACTIONS(1),
    [aux_sym_data_type_token1] = ACTIONS(1),
    [aux_sym_data_type_token2] = ACTIONS(1),
    [aux_sym_data_type_token3] = ACTIONS(1),
    [aux_sym_data_type_token4] = ACTIONS(1),
    [aux_sym_data_type_token5] = ACTIONS(1),
    [aux_sym_data_type_token6] = ACTIONS(1),
    [aux_sym_data_type_token7] = ACTIONS(1),
    [aux_sym_array_type_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_include_directive_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_special_keywords_token2] = ACTIONS(1),
    [aux_sym_special_keywords_token3] = ACTIONS(1),
    [aux_sym_special_keywords_token5] = ACTIONS(1),
    [aux_sym_special_keywords_token7] = ACTIONS(1),
    [aux_sym_special_keywords_token8] = ACTIONS(1),
    [aux_sym_special_keywords_token9] = ACTIONS(1),
    [aux_sym_special_keywords_token10] = ACTIONS(1),
    [aux_sym_special_keywords_token11] = ACTIONS(1),
    [aux_sym_special_keywords_token12] = ACTIONS(1),
    [aux_sym_special_keywords_token13] = ACTIONS(1),
    [aux_sym_special_keywords_token14] = ACTIONS(1),
    [aux_sym_special_keywords_token15] = ACTIONS(1),
    [aux_sym_special_keywords_token16] = ACTIONS(1),
    [aux_sym_special_keywords_token17] = ACTIONS(1),
    [aux_sym_special_keywords_token18] = ACTIONS(1),
    [aux_sym_special_keywords_token19] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_for_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_procedure_definition_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(250),
    [sym_target_division] = STATE(115),
    [sym_special_keywords] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [aux_sym_target_division_token1] = ACTIONS(5),
    [aux_sym_record_type_token10] = ACTIONS(7),
    [aux_sym_record_type_token41] = ACTIONS(7),
    [aux_sym_special_keywords_token1] = ACTIONS(7),
    [aux_sym_special_keywords_token2] = ACTIONS(7),
    [aux_sym_special_keywords_token3] = ACTIONS(7),
    [aux_sym_special_keywords_token4] = ACTIONS(7),
    [aux_sym_special_keywords_token5] = ACTIONS(7),
    [aux_sym_special_keywords_token6] = ACTIONS(7),
    [aux_sym_special_keywords_token7] = ACTIONS(7),
    [aux_sym_special_keywords_token8] = ACTIONS(9),
    [aux_sym_special_keywords_token9] = ACTIONS(7),
    [aux_sym_special_keywords_token10] = ACTIONS(7),
    [aux_sym_special_keywords_token11] = ACTIONS(7),
    [aux_sym_special_keywords_token12] = ACTIONS(9),
    [aux_sym_special_keywords_token13] = ACTIONS(7),
    [aux_sym_special_keywords_token14] = ACTIONS(7),
    [aux_sym_special_keywords_token15] = ACTIONS(7),
    [aux_sym_special_keywords_token16] = ACTIONS(7),
    [aux_sym_special_keywords_token17] = ACTIONS(7),
    [aux_sym_special_keywords_token18] = ACTIONS(9),
    [aux_sym_special_keywords_token19] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_record_type] = STATE(182),
    [aux_sym_define_division_token1] = ACTIONS(11),
    [aux_sym_setup_division_token1] = ACTIONS(11),
    [aux_sym_select_division_token1] = ACTIONS(11),
    [aux_sym_sort_division_token1] = ACTIONS(11),
    [aux_sym_letter_division_token1] = ACTIONS(11),
    [aux_sym_print_division_token1] = ACTIONS(11),
    [aux_sym_total_division_token1] = ACTIONS(11),
    [aux_sym_record_type_token1] = ACTIONS(13),
    [aux_sym_record_type_token2] = ACTIONS(13),
    [aux_sym_record_type_token3] = ACTIONS(13),
    [aux_sym_record_type_token4] = ACTIONS(13),
    [aux_sym_record_type_token5] = ACTIONS(13),
    [aux_sym_record_type_token6] = ACTIONS(13),
    [aux_sym_record_type_token7] = ACTIONS(13),
    [aux_sym_record_type_token8] = ACTIONS(15),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(13),
    [aux_sym_record_type_token11] = ACTIONS(13),
    [aux_sym_record_type_token12] = ACTIONS(13),
    [aux_sym_record_type_token13] = ACTIONS(13),
    [aux_sym_record_type_token14] = ACTIONS(13),
    [aux_sym_record_type_token15] = ACTIONS(13),
    [aux_sym_record_type_token16] = ACTIONS(15),
    [aux_sym_record_type_token17] = ACTIONS(13),
    [aux_sym_record_type_token18] = ACTIONS(15),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(13),
    [aux_sym_record_type_token22] = ACTIONS(13),
    [aux_sym_record_type_token23] = ACTIONS(13),
    [aux_sym_record_type_token24] = ACTIONS(15),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(15),
    [aux_sym_record_type_token27] = ACTIONS(13),
    [aux_sym_record_type_token28] = ACTIONS(13),
    [aux_sym_record_type_token29] = ACTIONS(13),
    [aux_sym_record_type_token30] = ACTIONS(15),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(13),
    [aux_sym_record_type_token33] = ACTIONS(15),
    [aux_sym_record_type_token34] = ACTIONS(13),
    [aux_sym_record_type_token35] = ACTIONS(13),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(15),
    [aux_sym_record_type_token38] = ACTIONS(13),
    [aux_sym_record_type_token39] = ACTIONS(13),
    [aux_sym_record_type_token40] = ACTIONS(13),
    [aux_sym_record_type_token41] = ACTIONS(13),
    [aux_sym_record_type_token42] = ACTIONS(13),
    [aux_sym_record_type_token43] = ACTIONS(13),
    [aux_sym_record_type_token44] = ACTIONS(13),
    [aux_sym_record_type_token45] = ACTIONS(13),
    [aux_sym_record_type_token46] = ACTIONS(13),
    [aux_sym_record_type_token47] = ACTIONS(13),
    [aux_sym_record_type_token48] = ACTIONS(13),
    [aux_sym_record_type_token49] = ACTIONS(13),
    [aux_sym_record_type_token50] = ACTIONS(13),
    [aux_sym_record_type_token51] = ACTIONS(13),
    [aux_sym_record_type_token52] = ACTIONS(15),
    [aux_sym_record_type_token53] = ACTIONS(13),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(13),
    [aux_sym_record_type_token57] = ACTIONS(15),
    [aux_sym_record_type_token58] = ACTIONS(15),
    [aux_sym_record_type_token59] = ACTIONS(15),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(13),
    [aux_sym_record_type_token63] = ACTIONS(13),
    [aux_sym_record_type_token64] = ACTIONS(13),
    [aux_sym_record_type_token65] = ACTIONS(13),
    [aux_sym_record_type_token66] = ACTIONS(13),
    [aux_sym_record_type_token67] = ACTIONS(13),
    [aux_sym_record_type_token68] = ACTIONS(13),
    [aux_sym_record_type_token69] = ACTIONS(15),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(15),
    [aux_sym_record_type_token72] = ACTIONS(15),
    [aux_sym_record_type_token73] = ACTIONS(13),
    [aux_sym_record_type_token74] = ACTIONS(13),
    [aux_sym_record_type_token75] = ACTIONS(13),
    [aux_sym_record_type_token76] = ACTIONS(13),
    [aux_sym_record_type_token77] = ACTIONS(13),
    [aux_sym_record_type_token78] = ACTIONS(13),
    [aux_sym_record_type_token79] = ACTIONS(13),
    [aux_sym_record_type_token80] = ACTIONS(13),
    [aux_sym_record_type_token81] = ACTIONS(15),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(13),
    [aux_sym_record_type_token85] = ACTIONS(15),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(15),
    [aux_sym_record_type_token89] = ACTIONS(13),
    [aux_sym_record_type_token90] = ACTIONS(15),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(13),
    [aux_sym_record_type_token93] = ACTIONS(13),
    [aux_sym_record_type_token94] = ACTIONS(13),
    [aux_sym_record_type_token95] = ACTIONS(13),
    [aux_sym_record_type_token96] = ACTIONS(13),
    [aux_sym_record_type_token97] = ACTIONS(13),
    [aux_sym_record_type_token98] = ACTIONS(15),
    [aux_sym_record_type_token99] = ACTIONS(13),
    [aux_sym_record_type_token100] = ACTIONS(13),
    [aux_sym_record_type_token101] = ACTIONS(13),
    [aux_sym_record_type_token102] = ACTIONS(13),
    [aux_sym_record_type_token103] = ACTIONS(13),
    [aux_sym_record_type_token104] = ACTIONS(13),
    [aux_sym_record_type_token105] = ACTIONS(13),
    [aux_sym_record_type_token106] = ACTIONS(13),
    [aux_sym_record_type_token107] = ACTIONS(13),
    [aux_sym_record_type_token108] = ACTIONS(13),
    [aux_sym_record_type_token109] = ACTIONS(13),
    [aux_sym_record_type_token110] = ACTIONS(15),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_record_type] = STATE(2),
    [aux_sym_define_division_token1] = ACTIONS(17),
    [aux_sym_setup_division_token1] = ACTIONS(17),
    [aux_sym_select_division_token1] = ACTIONS(17),
    [aux_sym_sort_division_token1] = ACTIONS(17),
    [aux_sym_letter_division_token1] = ACTIONS(17),
    [aux_sym_print_division_token1] = ACTIONS(17),
    [aux_sym_total_division_token1] = ACTIONS(17),
    [aux_sym_record_type_token1] = ACTIONS(13),
    [aux_sym_record_type_token2] = ACTIONS(13),
    [aux_sym_record_type_token3] = ACTIONS(13),
    [aux_sym_record_type_token4] = ACTIONS(13),
    [aux_sym_record_type_token5] = ACTIONS(13),
    [aux_sym_record_type_token6] = ACTIONS(13),
    [aux_sym_record_type_token7] = ACTIONS(13),
    [aux_sym_record_type_token8] = ACTIONS(15),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(13),
    [aux_sym_record_type_token11] = ACTIONS(13),
    [aux_sym_record_type_token12] = ACTIONS(13),
    [aux_sym_record_type_token13] = ACTIONS(13),
    [aux_sym_record_type_token14] = ACTIONS(13),
    [aux_sym_record_type_token15] = ACTIONS(13),
    [aux_sym_record_type_token16] = ACTIONS(15),
    [aux_sym_record_type_token17] = ACTIONS(13),
    [aux_sym_record_type_token18] = ACTIONS(15),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(13),
    [aux_sym_record_type_token22] = ACTIONS(13),
    [aux_sym_record_type_token23] = ACTIONS(13),
    [aux_sym_record_type_token24] = ACTIONS(15),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(15),
    [aux_sym_record_type_token27] = ACTIONS(13),
    [aux_sym_record_type_token28] = ACTIONS(13),
    [aux_sym_record_type_token29] = ACTIONS(13),
    [aux_sym_record_type_token30] = ACTIONS(15),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(13),
    [aux_sym_record_type_token33] = ACTIONS(15),
    [aux_sym_record_type_token34] = ACTIONS(13),
    [aux_sym_record_type_token35] = ACTIONS(13),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(15),
    [aux_sym_record_type_token38] = ACTIONS(13),
    [aux_sym_record_type_token39] = ACTIONS(13),
    [aux_sym_record_type_token40] = ACTIONS(13),
    [aux_sym_record_type_token41] = ACTIONS(13),
    [aux_sym_record_type_token42] = ACTIONS(13),
    [aux_sym_record_type_token43] = ACTIONS(13),
    [aux_sym_record_type_token44] = ACTIONS(13),
    [aux_sym_record_type_token45] = ACTIONS(13),
    [aux_sym_record_type_token46] = ACTIONS(13),
    [aux_sym_record_type_token47] = ACTIONS(13),
    [aux_sym_record_type_token48] = ACTIONS(13),
    [aux_sym_record_type_token49] = ACTIONS(13),
    [aux_sym_record_type_token50] = ACTIONS(13),
    [aux_sym_record_type_token51] = ACTIONS(13),
    [aux_sym_record_type_token52] = ACTIONS(15),
    [aux_sym_record_type_token53] = ACTIONS(13),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(13),
    [aux_sym_record_type_token57] = ACTIONS(15),
    [aux_sym_record_type_token58] = ACTIONS(15),
    [aux_sym_record_type_token59] = ACTIONS(15),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(13),
    [aux_sym_record_type_token63] = ACTIONS(13),
    [aux_sym_record_type_token64] = ACTIONS(13),
    [aux_sym_record_type_token65] = ACTIONS(13),
    [aux_sym_record_type_token66] = ACTIONS(13),
    [aux_sym_record_type_token67] = ACTIONS(13),
    [aux_sym_record_type_token68] = ACTIONS(13),
    [aux_sym_record_type_token69] = ACTIONS(15),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(15),
    [aux_sym_record_type_token72] = ACTIONS(15),
    [aux_sym_record_type_token73] = ACTIONS(13),
    [aux_sym_record_type_token74] = ACTIONS(13),
    [aux_sym_record_type_token75] = ACTIONS(13),
    [aux_sym_record_type_token76] = ACTIONS(13),
    [aux_sym_record_type_token77] = ACTIONS(13),
    [aux_sym_record_type_token78] = ACTIONS(13),
    [aux_sym_record_type_token79] = ACTIONS(13),
    [aux_sym_record_type_token80] = ACTIONS(13),
    [aux_sym_record_type_token81] = ACTIONS(15),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(13),
    [aux_sym_record_type_token85] = ACTIONS(15),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(15),
    [aux_sym_record_type_token89] = ACTIONS(13),
    [aux_sym_record_type_token90] = ACTIONS(15),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(13),
    [aux_sym_record_type_token93] = ACTIONS(13),
    [aux_sym_record_type_token94] = ACTIONS(13),
    [aux_sym_record_type_token95] = ACTIONS(13),
    [aux_sym_record_type_token96] = ACTIONS(13),
    [aux_sym_record_type_token97] = ACTIONS(13),
    [aux_sym_record_type_token98] = ACTIONS(15),
    [aux_sym_record_type_token99] = ACTIONS(13),
    [aux_sym_record_type_token100] = ACTIONS(13),
    [aux_sym_record_type_token101] = ACTIONS(13),
    [aux_sym_record_type_token102] = ACTIONS(13),
    [aux_sym_record_type_token103] = ACTIONS(13),
    [aux_sym_record_type_token104] = ACTIONS(13),
    [aux_sym_record_type_token105] = ACTIONS(13),
    [aux_sym_record_type_token106] = ACTIONS(13),
    [aux_sym_record_type_token107] = ACTIONS(13),
    [aux_sym_record_type_token108] = ACTIONS(13),
    [aux_sym_record_type_token109] = ACTIONS(13),
    [aux_sym_record_type_token110] = ACTIONS(15),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym_define_division_token1] = ACTIONS(19),
    [aux_sym_setup_division_token1] = ACTIONS(19),
    [aux_sym_select_division_token1] = ACTIONS(19),
    [aux_sym_sort_division_token1] = ACTIONS(19),
    [aux_sym_letter_division_token1] = ACTIONS(19),
    [aux_sym_print_division_token1] = ACTIONS(19),
    [aux_sym_total_division_token1] = ACTIONS(19),
    [aux_sym_record_type_token1] = ACTIONS(19),
    [aux_sym_record_type_token2] = ACTIONS(19),
    [aux_sym_record_type_token3] = ACTIONS(19),
    [aux_sym_record_type_token4] = ACTIONS(19),
    [aux_sym_record_type_token5] = ACTIONS(19),
    [aux_sym_record_type_token6] = ACTIONS(19),
    [aux_sym_record_type_token7] = ACTIONS(19),
    [aux_sym_record_type_token8] = ACTIONS(21),
    [aux_sym_record_type_token9] = ACTIONS(19),
    [aux_sym_record_type_token10] = ACTIONS(19),
    [aux_sym_record_type_token11] = ACTIONS(19),
    [aux_sym_record_type_token12] = ACTIONS(19),
    [aux_sym_record_type_token13] = ACTIONS(19),
    [aux_sym_record_type_token14] = ACTIONS(19),
    [aux_sym_record_type_token15] = ACTIONS(19),
    [aux_sym_record_type_token16] = ACTIONS(21),
    [aux_sym_record_type_token17] = ACTIONS(19),
    [aux_sym_record_type_token18] = ACTIONS(21),
    [aux_sym_record_type_token19] = ACTIONS(19),
    [aux_sym_record_type_token20] = ACTIONS(19),
    [aux_sym_record_type_token21] = ACTIONS(19),
    [aux_sym_record_type_token22] = ACTIONS(19),
    [aux_sym_record_type_token23] = ACTIONS(19),
    [aux_sym_record_type_token24] = ACTIONS(21),
    [aux_sym_record_type_token25] = ACTIONS(19),
    [aux_sym_record_type_token26] = ACTIONS(21),
    [aux_sym_record_type_token27] = ACTIONS(19),
    [aux_sym_record_type_token28] = ACTIONS(19),
    [aux_sym_record_type_token29] = ACTIONS(19),
    [aux_sym_record_type_token30] = ACTIONS(21),
    [aux_sym_record_type_token31] = ACTIONS(19),
    [aux_sym_record_type_token32] = ACTIONS(19),
    [aux_sym_record_type_token33] = ACTIONS(21),
    [aux_sym_record_type_token34] = ACTIONS(19),
    [aux_sym_record_type_token35] = ACTIONS(19),
    [aux_sym_record_type_token36] = ACTIONS(19),
    [aux_sym_record_type_token37] = ACTIONS(21),
    [aux_sym_record_type_token38] = ACTIONS(19),
    [aux_sym_record_type_token39] = ACTIONS(19),
    [aux_sym_record_type_token40] = ACTIONS(19),
    [aux_sym_record_type_token41] = ACTIONS(19),
    [aux_sym_record_type_token42] = ACTIONS(19),
    [aux_sym_record_type_token43] = ACTIONS(19),
    [aux_sym_record_type_token44] = ACTIONS(19),
    [aux_sym_record_type_token45] = ACTIONS(19),
    [aux_sym_record_type_token46] = ACTIONS(19),
    [aux_sym_record_type_token47] = ACTIONS(19),
    [aux_sym_record_type_token48] = ACTIONS(19),
    [aux_sym_record_type_token49] = ACTIONS(19),
    [aux_sym_record_type_token50] = ACTIONS(19),
    [aux_sym_record_type_token51] = ACTIONS(19),
    [aux_sym_record_type_token52] = ACTIONS(21),
    [aux_sym_record_type_token53] = ACTIONS(19),
    [aux_sym_record_type_token54] = ACTIONS(19),
    [aux_sym_record_type_token55] = ACTIONS(19),
    [aux_sym_record_type_token56] = ACTIONS(19),
    [aux_sym_record_type_token57] = ACTIONS(21),
    [aux_sym_record_type_token58] = ACTIONS(21),
    [aux_sym_record_type_token59] = ACTIONS(21),
    [aux_sym_record_type_token60] = ACTIONS(19),
    [aux_sym_record_type_token61] = ACTIONS(19),
    [aux_sym_record_type_token62] = ACTIONS(19),
    [aux_sym_record_type_token63] = ACTIONS(19),
    [aux_sym_record_type_token64] = ACTIONS(19),
    [aux_sym_record_type_token65] = ACTIONS(19),
    [aux_sym_record_type_token66] = ACTIONS(19),
    [aux_sym_record_type_token67] = ACTIONS(19),
    [aux_sym_record_type_token68] = ACTIONS(19),
    [aux_sym_record_type_token69] = ACTIONS(21),
    [aux_sym_record_type_token70] = ACTIONS(19),
    [aux_sym_record_type_token71] = ACTIONS(21),
    [aux_sym_record_type_token72] = ACTIONS(21),
    [aux_sym_record_type_token73] = ACTIONS(19),
    [aux_sym_record_type_token74] = ACTIONS(19),
    [aux_sym_record_type_token75] = ACTIONS(19),
    [aux_sym_record_type_token76] = ACTIONS(19),
    [aux_sym_record_type_token77] = ACTIONS(19),
    [aux_sym_record_type_token78] = ACTIONS(19),
    [aux_sym_record_type_token79] = ACTIONS(19),
    [aux_sym_record_type_token80] = ACTIONS(19),
    [aux_sym_record_type_token81] = ACTIONS(21),
    [aux_sym_record_type_token82] = ACTIONS(19),
    [aux_sym_record_type_token83] = ACTIONS(19),
    [aux_sym_record_type_token84] = ACTIONS(19),
    [aux_sym_record_type_token85] = ACTIONS(21),
    [aux_sym_record_type_token86] = ACTIONS(19),
    [aux_sym_record_type_token87] = ACTIONS(19),
    [aux_sym_record_type_token88] = ACTIONS(21),
    [aux_sym_record_type_token89] = ACTIONS(19),
    [aux_sym_record_type_token90] = ACTIONS(21),
    [aux_sym_record_type_token91] = ACTIONS(19),
    [aux_sym_record_type_token92] = ACTIONS(19),
    [aux_sym_record_type_token93] = ACTIONS(19),
    [aux_sym_record_type_token94] = ACTIONS(19),
    [aux_sym_record_type_token95] = ACTIONS(19),
    [aux_sym_record_type_token96] = ACTIONS(19),
    [aux_sym_record_type_token97] = ACTIONS(19),
    [aux_sym_record_type_token98] = ACTIONS(21),
    [aux_sym_record_type_token99] = ACTIONS(19),
    [aux_sym_record_type_token100] = ACTIONS(19),
    [aux_sym_record_type_token101] = ACTIONS(19),
    [aux_sym_record_type_token102] = ACTIONS(19),
    [aux_sym_record_type_token103] = ACTIONS(19),
    [aux_sym_record_type_token104] = ACTIONS(19),
    [aux_sym_record_type_token105] = ACTIONS(19),
    [aux_sym_record_type_token106] = ACTIONS(19),
    [aux_sym_record_type_token107] = ACTIONS(19),
    [aux_sym_record_type_token108] = ACTIONS(19),
    [aux_sym_record_type_token109] = ACTIONS(19),
    [aux_sym_record_type_token110] = ACTIONS(21),
    [aux_sym_record_type_token111] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_record_type] = STATE(3),
    [aux_sym_record_type_token1] = ACTIONS(13),
    [aux_sym_record_type_token2] = ACTIONS(13),
    [aux_sym_record_type_token3] = ACTIONS(13),
    [aux_sym_record_type_token4] = ACTIONS(13),
    [aux_sym_record_type_token5] = ACTIONS(13),
    [aux_sym_record_type_token6] = ACTIONS(13),
    [aux_sym_record_type_token7] = ACTIONS(13),
    [aux_sym_record_type_token8] = ACTIONS(15),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(13),
    [aux_sym_record_type_token11] = ACTIONS(13),
    [aux_sym_record_type_token12] = ACTIONS(13),
    [aux_sym_record_type_token13] = ACTIONS(13),
    [aux_sym_record_type_token14] = ACTIONS(13),
    [aux_sym_record_type_token15] = ACTIONS(13),
    [aux_sym_record_type_token16] = ACTIONS(15),
    [aux_sym_record_type_token17] = ACTIONS(13),
    [aux_sym_record_type_token18] = ACTIONS(15),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(13),
    [aux_sym_record_type_token22] = ACTIONS(13),
    [aux_sym_record_type_token23] = ACTIONS(13),
    [aux_sym_record_type_token24] = ACTIONS(15),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(15),
    [aux_sym_record_type_token27] = ACTIONS(13),
    [aux_sym_record_type_token28] = ACTIONS(13),
    [aux_sym_record_type_token29] = ACTIONS(13),
    [aux_sym_record_type_token30] = ACTIONS(15),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(13),
    [aux_sym_record_type_token33] = ACTIONS(15),
    [aux_sym_record_type_token34] = ACTIONS(13),
    [aux_sym_record_type_token35] = ACTIONS(13),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(15),
    [aux_sym_record_type_token38] = ACTIONS(13),
    [aux_sym_record_type_token39] = ACTIONS(13),
    [aux_sym_record_type_token40] = ACTIONS(13),
    [aux_sym_record_type_token41] = ACTIONS(13),
    [aux_sym_record_type_token42] = ACTIONS(13),
    [aux_sym_record_type_token43] = ACTIONS(13),
    [aux_sym_record_type_token44] = ACTIONS(13),
    [aux_sym_record_type_token45] = ACTIONS(13),
    [aux_sym_record_type_token46] = ACTIONS(13),
    [aux_sym_record_type_token47] = ACTIONS(13),
    [aux_sym_record_type_token48] = ACTIONS(13),
    [aux_sym_record_type_token49] = ACTIONS(13),
    [aux_sym_record_type_token50] = ACTIONS(13),
    [aux_sym_record_type_token51] = ACTIONS(13),
    [aux_sym_record_type_token52] = ACTIONS(15),
    [aux_sym_record_type_token53] = ACTIONS(13),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(13),
    [aux_sym_record_type_token57] = ACTIONS(15),
    [aux_sym_record_type_token58] = ACTIONS(15),
    [aux_sym_record_type_token59] = ACTIONS(15),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(13),
    [aux_sym_record_type_token63] = ACTIONS(13),
    [aux_sym_record_type_token64] = ACTIONS(13),
    [aux_sym_record_type_token65] = ACTIONS(13),
    [aux_sym_record_type_token66] = ACTIONS(13),
    [aux_sym_record_type_token67] = ACTIONS(13),
    [aux_sym_record_type_token68] = ACTIONS(13),
    [aux_sym_record_type_token69] = ACTIONS(15),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(15),
    [aux_sym_record_type_token72] = ACTIONS(15),
    [aux_sym_record_type_token73] = ACTIONS(13),
    [aux_sym_record_type_token74] = ACTIONS(13),
    [aux_sym_record_type_token75] = ACTIONS(13),
    [aux_sym_record_type_token76] = ACTIONS(13),
    [aux_sym_record_type_token77] = ACTIONS(13),
    [aux_sym_record_type_token78] = ACTIONS(13),
    [aux_sym_record_type_token79] = ACTIONS(13),
    [aux_sym_record_type_token80] = ACTIONS(13),
    [aux_sym_record_type_token81] = ACTIONS(15),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(13),
    [aux_sym_record_type_token85] = ACTIONS(15),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(15),
    [aux_sym_record_type_token89] = ACTIONS(13),
    [aux_sym_record_type_token90] = ACTIONS(15),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(13),
    [aux_sym_record_type_token93] = ACTIONS(13),
    [aux_sym_record_type_token94] = ACTIONS(13),
    [aux_sym_record_type_token95] = ACTIONS(13),
    [aux_sym_record_type_token96] = ACTIONS(13),
    [aux_sym_record_type_token97] = ACTIONS(13),
    [aux_sym_record_type_token98] = ACTIONS(15),
    [aux_sym_record_type_token99] = ACTIONS(13),
    [aux_sym_record_type_token100] = ACTIONS(13),
    [aux_sym_record_type_token101] = ACTIONS(13),
    [aux_sym_record_type_token102] = ACTIONS(13),
    [aux_sym_record_type_token103] = ACTIONS(13),
    [aux_sym_record_type_token104] = ACTIONS(13),
    [aux_sym_record_type_token105] = ACTIONS(13),
    [aux_sym_record_type_token106] = ACTIONS(13),
    [aux_sym_record_type_token107] = ACTIONS(13),
    [aux_sym_record_type_token108] = ACTIONS(13),
    [aux_sym_record_type_token109] = ACTIONS(13),
    [aux_sym_record_type_token110] = ACTIONS(15),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(173), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    ACTIONS(27), 4,
      aux_sym_define_division_token2,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    ACTIONS(25), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [69] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(176), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    ACTIONS(27), 3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [138] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(47), 1,
      aux_sym_define_division_token2,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [213] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(61), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [288] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(63), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(20), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [363] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(65), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [438] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(67), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(11), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [513] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_keyword_token1,
    ACTIONS(72), 1,
      aux_sym_keyword_token2,
    ACTIONS(78), 1,
      aux_sym_keyword_token4,
    ACTIONS(81), 1,
      aux_sym_define_division_token2,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym__identifier_token1,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      aux_sym_procedure_definition_token1,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(75), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [588] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_keyword_token1,
    ACTIONS(105), 1,
      aux_sym_keyword_token2,
    ACTIONS(109), 1,
      aux_sym_keyword_token4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      aux_sym_procedure_definition_token1,
    STATE(46), 1,
      sym__identifier,
    STATE(93), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(16), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(107), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(147), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [663] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_keyword_token1,
    ACTIONS(105), 1,
      aux_sym_keyword_token2,
    ACTIONS(109), 1,
      aux_sym_keyword_token4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__identifier,
    STATE(93), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(30), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(107), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(147), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [738] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      aux_sym_keyword_token1,
    ACTIONS(130), 1,
      aux_sym_keyword_token2,
    ACTIONS(136), 1,
      aux_sym_keyword_token4,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      aux_sym__identifier_token1,
    ACTIONS(148), 1,
      sym_number,
    ACTIONS(151), 1,
      anon_sym_POUND,
    ACTIONS(154), 1,
      aux_sym_procedure_definition_token1,
    STATE(46), 1,
      sym__identifier,
    STATE(93), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(16), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(133), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(147), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [813] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(157), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [888] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(159), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(26), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [963] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(161), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1038] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(163), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1113] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(165), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1188] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(159), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1263] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(163), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(29), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1338] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(167), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1413] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(169), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(24), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1488] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(171), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1563] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_keyword_token1,
    ACTIONS(105), 1,
      aux_sym_keyword_token2,
    ACTIONS(109), 1,
      aux_sym_keyword_token4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__identifier,
    STATE(93), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(16), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(107), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(147), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1638] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(175), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(17), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1713] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(177), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1788] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_keyword_token1,
    ACTIONS(105), 1,
      aux_sym_keyword_token2,
    ACTIONS(109), 1,
      aux_sym_keyword_token4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__identifier,
    STATE(93), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(16), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(107), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(147), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1863] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(181), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(19), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [1938] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_keyword_token1,
    ACTIONS(105), 1,
      aux_sym_keyword_token2,
    ACTIONS(109), 1,
      aux_sym_keyword_token4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__identifier,
    STATE(93), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(27), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(107), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(147), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [2013] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(183), 1,
      aux_sym_define_division_token2,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [2088] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_keyword_token1,
    ACTIONS(105), 1,
      aux_sym_keyword_token2,
    ACTIONS(109), 1,
      aux_sym_keyword_token4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__identifier,
    STATE(93), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(14), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(107), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(147), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [2163] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(45), 1,
      aux_sym_keyword_token4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_procedure_definition_token1,
    STATE(54), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(33), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(43), 3,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(127), 4,
      sym_for_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
  [2235] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__identifier_token1,
    STATE(142), 1,
      sym_identifier,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    ACTIONS(27), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(25), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [2277] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(268), 1,
      sym_identifier,
    ACTIONS(27), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(25), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [2319] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(27), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(25), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [2361] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym__identifier_token1,
    STATE(140), 1,
      sym__array_identifier,
    STATE(141), 1,
      sym__identifier,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(27), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(25), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [2403] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_target_division_token1,
    STATE(119), 1,
      sym_target_division,
    STATE(44), 2,
      sym_special_keywords,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(7), 18,
      aux_sym_record_type_token10,
      aux_sym_record_type_token41,
      aux_sym_special_keywords_token1,
      aux_sym_special_keywords_token2,
      aux_sym_special_keywords_token3,
      aux_sym_special_keywords_token4,
      aux_sym_special_keywords_token5,
      aux_sym_special_keywords_token6,
      aux_sym_special_keywords_token7,
      aux_sym_special_keywords_token9,
      aux_sym_special_keywords_token10,
      aux_sym_special_keywords_token11,
      aux_sym_special_keywords_token13,
      aux_sym_special_keywords_token14,
      aux_sym_special_keywords_token15,
      aux_sym_special_keywords_token16,
      aux_sym_special_keywords_token17,
      aux_sym_special_keywords_token19,
  [2442] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      aux_sym_for_statement_token1,
    ACTIONS(191), 1,
      aux_sym_if_statement_token1,
    STATE(46), 1,
      sym__identifier,
    STATE(66), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [2501] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      aux_sym_for_statement_token1,
    ACTIONS(195), 1,
      aux_sym_if_statement_token1,
    STATE(54), 1,
      sym_identifier,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(112), 1,
      sym_expression,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [2560] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      aux_sym_for_statement_token1,
    STATE(54), 1,
      sym_identifier,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(111), 1,
      sym_expression,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [2616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_target_division_token1,
    STATE(44), 2,
      sym_special_keywords,
      aux_sym_source_file_repeat1,
    ACTIONS(204), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(201), 18,
      aux_sym_record_type_token10,
      aux_sym_record_type_token41,
      aux_sym_special_keywords_token1,
      aux_sym_special_keywords_token2,
      aux_sym_special_keywords_token3,
      aux_sym_special_keywords_token4,
      aux_sym_special_keywords_token5,
      aux_sym_special_keywords_token6,
      aux_sym_special_keywords_token7,
      aux_sym_special_keywords_token9,
      aux_sym_special_keywords_token10,
      aux_sym_special_keywords_token11,
      aux_sym_special_keywords_token13,
      aux_sym_special_keywords_token14,
      aux_sym_special_keywords_token15,
      aux_sym_special_keywords_token16,
      aux_sym_special_keywords_token17,
      aux_sym_special_keywords_token19,
  [2652] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      aux_sym_for_statement_token1,
    STATE(46), 1,
      sym__identifier,
    STATE(64), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [2708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(209), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [2741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(25), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [2803] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(174), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [2856] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(177), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [2909] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(175), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(221), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [2993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(223), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(219), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(221), 11,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(231), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3088] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_AND,
    ACTIONS(241), 1,
      anon_sym_OR,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(235), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(243), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(237), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(233), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [3133] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(166), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [3186] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(170), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [3239] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(171), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [3292] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(162), 1,
      sym_identifier,
    STATE(172), 1,
      sym_expression,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [3345] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(160), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [3398] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(155), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [3451] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(158), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(253), 1,
      sym__lhs_expression,
    STATE(154), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(161), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(23), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [3504] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_AND,
    ACTIONS(259), 1,
      anon_sym_OR,
    ACTIONS(265), 1,
      anon_sym_GT,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(255), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(253), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [3549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(269), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3580] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_AND,
    ACTIONS(259), 1,
      anon_sym_OR,
    ACTIONS(265), 1,
      anon_sym_GT,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(255), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(275), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [3625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(277), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(281), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(285), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(285), 11,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3786] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_AND,
    ACTIONS(265), 1,
      anon_sym_GT,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(255), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_OR,
  [3829] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_GT,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(255), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
  [3870] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_GT,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_LT_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
  [3909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(291), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(293), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [3971] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_identifier,
    STATE(98), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4024] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4077] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_identifier,
    STATE(100), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4130] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_identifier,
    STATE(101), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4183] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4236] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_identifier,
    STATE(103), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4289] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(265), 1,
      sym__lhs_expression,
    STATE(52), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(55), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(43), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(223), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [4373] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym__identifier,
    STATE(68), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4426] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym__identifier,
    STATE(69), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4479] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym__identifier,
    STATE(70), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4532] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym__identifier,
    STATE(71), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4585] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym__identifier,
    STATE(72), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4638] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym__identifier,
    STATE(73), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4691] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym__identifier,
    STATE(74), 1,
      sym_expression,
    STATE(97), 1,
      sym_identifier,
    STATE(109), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym__lhs_expression,
    STATE(105), 3,
      sym_keyword,
      sym_string_literal,
      sym_parenthesized_expression,
    STATE(96), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(107), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
  [4744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(291), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [4775] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_AND,
    ACTIONS(259), 1,
      anon_sym_OR,
    ACTIONS(265), 1,
      anon_sym_GT,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(255), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(233), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [4820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(215), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [4851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(293), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [4882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(231), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [4913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(219), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(221), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [4946] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(243), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_LT_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
  [4985] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(235), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(243), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
  [5026] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_AND,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(235), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(243), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_OR,
  [5069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 10,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [5102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(285), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [5133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(287), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [5168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(281), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [5199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(221), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [5230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(25), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [5261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(277), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [5292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [5325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [5356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(209), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [5387] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_AND,
    ACTIONS(241), 1,
      anon_sym_OR,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(235), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(243), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(251), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(253), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [5432] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_AND,
    ACTIONS(241), 1,
      anon_sym_OR,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(235), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(243), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(273), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(275), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [5477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 11,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
    ACTIONS(269), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
  [5508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(299), 19,
      aux_sym_target_division_token1,
      aux_sym_record_type_token10,
      aux_sym_record_type_token41,
      aux_sym_special_keywords_token1,
      aux_sym_special_keywords_token2,
      aux_sym_special_keywords_token3,
      aux_sym_special_keywords_token4,
      aux_sym_special_keywords_token5,
      aux_sym_special_keywords_token6,
      aux_sym_special_keywords_token7,
      aux_sym_special_keywords_token9,
      aux_sym_special_keywords_token10,
      aux_sym_special_keywords_token11,
      aux_sym_special_keywords_token13,
      aux_sym_special_keywords_token14,
      aux_sym_special_keywords_token15,
      aux_sym_special_keywords_token16,
      aux_sym_special_keywords_token17,
      aux_sym_special_keywords_token19,
  [5538] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      aux_sym_define_division_token1,
    ACTIONS(305), 1,
      aux_sym_setup_division_token1,
    ACTIONS(307), 1,
      aux_sym_select_division_token1,
    ACTIONS(309), 1,
      aux_sym_sort_division_token1,
    ACTIONS(311), 1,
      aux_sym_letter_division_token1,
    ACTIONS(313), 1,
      aux_sym_print_division_token1,
    ACTIONS(315), 1,
      aux_sym_total_division_token1,
    STATE(15), 2,
      sym_letter_division,
      sym_print_division,
    STATE(118), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [5576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 14,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      aux_sym_define_division_token2,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_for_statement_token1,
  [5602] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      aux_sym_define_division_token1,
    ACTIONS(305), 1,
      aux_sym_setup_division_token1,
    ACTIONS(307), 1,
      aux_sym_select_division_token1,
    ACTIONS(309), 1,
      aux_sym_sort_division_token1,
    ACTIONS(311), 1,
      aux_sym_letter_division_token1,
    ACTIONS(313), 1,
      aux_sym_print_division_token1,
    ACTIONS(315), 1,
      aux_sym_total_division_token1,
    STATE(34), 2,
      sym_letter_division,
      sym_print_division,
    STATE(123), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [5640] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      aux_sym_define_division_token1,
    ACTIONS(305), 1,
      aux_sym_setup_division_token1,
    ACTIONS(307), 1,
      aux_sym_select_division_token1,
    ACTIONS(309), 1,
      aux_sym_sort_division_token1,
    ACTIONS(311), 1,
      aux_sym_letter_division_token1,
    ACTIONS(313), 1,
      aux_sym_print_division_token1,
    ACTIONS(315), 1,
      aux_sym_total_division_token1,
    STATE(32), 2,
      sym_letter_division,
      sym_print_division,
    STATE(123), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [5678] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      aux_sym_define_division_token1,
    ACTIONS(305), 1,
      aux_sym_setup_division_token1,
    ACTIONS(307), 1,
      aux_sym_select_division_token1,
    ACTIONS(309), 1,
      aux_sym_sort_division_token1,
    ACTIONS(311), 1,
      aux_sym_letter_division_token1,
    ACTIONS(313), 1,
      aux_sym_print_division_token1,
    ACTIONS(315), 1,
      aux_sym_total_division_token1,
    STATE(32), 2,
      sym_letter_division,
      sym_print_division,
    STATE(117), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [5716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(209), 14,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      aux_sym_define_division_token2,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_for_statement_token1,
  [5739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LT,
    ACTIONS(277), 14,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      aux_sym_define_division_token2,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_for_statement_token1,
  [5762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LT,
    ACTIONS(269), 14,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      aux_sym_define_division_token2,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_for_statement_token1,
  [5785] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_define_division_token1,
    ACTIONS(322), 1,
      aux_sym_setup_division_token1,
    ACTIONS(325), 1,
      aux_sym_select_division_token1,
    ACTIONS(328), 1,
      aux_sym_sort_division_token1,
    ACTIONS(333), 1,
      aux_sym_total_division_token1,
    ACTIONS(331), 2,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
    STATE(123), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [5817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(338), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [5838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(342), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [5859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LT,
    ACTIONS(293), 12,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      aux_sym_define_division_token2,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [5880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(233), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [5901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LT,
    ACTIONS(291), 12,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      aux_sym_define_division_token2,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [5922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(346), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [5943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(348), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [5964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(352), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [5985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(348), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(352), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(342), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(271), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(346), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(279), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(253), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(253), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(358), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(364), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(366), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(271), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(366), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(233), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(358), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(279), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(372), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(338), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 4,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [6451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LT,
    ACTIONS(221), 11,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6471] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_LT,
    ACTIONS(376), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 4,
      aux_sym_keyword_token5,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [6499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LT,
    ACTIONS(223), 11,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(289), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6539] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_LT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 6,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
  [6565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LT,
    ACTIONS(215), 11,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6585] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_LT,
    ACTIONS(386), 1,
      anon_sym_AND,
    ACTIONS(376), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 3,
      aux_sym_keyword_token5,
      anon_sym_RPAREN,
      anon_sym_OR,
  [6615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LT,
    ACTIONS(231), 11,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LT,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(221), 10,
      aux_sym_keyword_token5,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(25), 11,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(271), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(295), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(281), 11,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(279), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 4,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym__identifier_token1,
  [6799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 7,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(285), 11,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      aux_sym_keyword_token5,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [6865] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_LT,
    ACTIONS(386), 1,
      anon_sym_AND,
    ACTIONS(390), 1,
      aux_sym_keyword_token5,
    ACTIONS(392), 1,
      anon_sym_OR,
    ACTIONS(376), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [6896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_LT,
    ACTIONS(386), 1,
      anon_sym_AND,
    ACTIONS(392), 1,
      anon_sym_OR,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [6927] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_LT,
    ACTIONS(386), 1,
      anon_sym_AND,
    ACTIONS(392), 1,
      anon_sym_OR,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [6958] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_LT,
    ACTIONS(386), 1,
      anon_sym_AND,
    ACTIONS(392), 1,
      anon_sym_OR,
    ACTIONS(398), 1,
      aux_sym_keyword_token5,
    ACTIONS(376), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [6989] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_LT,
    ACTIONS(386), 1,
      anon_sym_AND,
    ACTIONS(392), 1,
      anon_sym_OR,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [7020] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(402), 1,
      aux_sym_define_division_token2,
    ACTIONS(404), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(261), 1,
      sym_identifier,
    STATE(180), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(227), 2,
      sym_variable_declaration,
      sym_include_directive,
  [7050] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_define_division_token2,
    ACTIONS(408), 1,
      aux_sym__identifier_token1,
    ACTIONS(411), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(261), 1,
      sym_identifier,
    STATE(179), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(227), 2,
      sym_variable_declaration,
      sym_include_directive,
  [7080] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym__identifier_token1,
    ACTIONS(404), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      aux_sym_define_division_token2,
    STATE(108), 1,
      sym__identifier,
    STATE(110), 1,
      sym__array_identifier,
    STATE(261), 1,
      sym_identifier,
    STATE(179), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(227), 2,
      sym_variable_declaration,
      sym_include_directive,
  [7110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_data_type,
    STATE(213), 1,
      sym_string_literal,
    ACTIONS(416), 7,
      aux_sym_data_type_token1,
      aux_sym_data_type_token2,
      aux_sym_data_type_token3,
      aux_sym_data_type_token4,
      aux_sym_data_type_token5,
      aux_sym_data_type_token6,
      aux_sym_data_type_token7,
  [7132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [7145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [7158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [7171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [7184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [7197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [7210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [7223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [7236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      aux_sym__identifier_token1,
    STATE(168), 1,
      sym__array_identifier,
    STATE(169), 1,
      sym__identifier,
    STATE(35), 2,
      sym_string_literal,
      sym_identifier,
  [7256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      aux_sym__identifier_token1,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(267), 2,
      sym_string_literal,
      sym_identifier,
  [7276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym__identifier_token1,
    ACTIONS(442), 1,
      sym_number,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(271), 1,
      sym_identifier,
  [7295] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym__identifier_token1,
    ACTIONS(444), 1,
      sym_number,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(270), 1,
      sym_identifier,
  [7314] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym__identifier_token1,
    ACTIONS(446), 1,
      sym_number,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(262), 1,
      sym_identifier,
  [7333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym__identifier_token1,
    ACTIONS(448), 1,
      sym_number,
    STATE(116), 1,
      sym__identifier,
    STATE(120), 1,
      sym__array_identifier,
    STATE(249), 1,
      sym_identifier,
  [7352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_array_type_token1,
    ACTIONS(454), 1,
      anon_sym_POUND,
    STATE(220), 1,
      sym_array_type,
    ACTIONS(450), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym__identifier_token1,
    STATE(8), 1,
      sym_identifier,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
  [7385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_POUND,
    ACTIONS(458), 3,
      aux_sym_define_division_token2,
      aux_sym_array_type_token1,
      aux_sym__identifier_token1,
  [7397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      sym_identifier,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
  [7413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_POUND,
    ACTIONS(462), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym__array_identifier_repeat1,
  [7437] = 4,
    ACTIONS(470), 1,
      anon_sym_DQUOTE,
    ACTIONS(472), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(474), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_string_literal_repeat1,
  [7450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(237), 1,
      sym__identifier,
    ACTIONS(476), 2,
      aux_sym__identifier_token1,
      sym_number,
  [7461] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(480), 1,
      sym_unescaped_double_string_fragment,
    STATE(214), 1,
      aux_sym_string_literal_repeat1,
  [7474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(224), 1,
      sym__identifier,
    ACTIONS(482), 2,
      aux_sym__identifier_token1,
      sym_number,
  [7485] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      aux_sym_string_literal_repeat1,
  [7498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(239), 1,
      sym__identifier,
    ACTIONS(486), 2,
      aux_sym__identifier_token1,
      sym_number,
  [7509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(225), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_POUND,
    ACTIONS(289), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym__array_identifier_repeat1,
  [7544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_POUND,
    ACTIONS(295), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7555] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      sym_unescaped_double_string_fragment,
    STATE(204), 1,
      aux_sym_string_literal_repeat1,
  [7568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_POUND,
    ACTIONS(450), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7579] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      sym_unescaped_double_string_fragment,
    STATE(214), 1,
      aux_sym_string_literal_repeat1,
  [7592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(246), 1,
      sym__identifier,
    ACTIONS(499), 2,
      aux_sym__identifier_token1,
      sym_number,
  [7603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_array_type_repeat1,
  [7616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym__array_identifier_repeat1,
  [7629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(231), 1,
      sym__identifier,
    ACTIONS(507), 2,
      aux_sym__identifier_token1,
      sym_number,
  [7640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym__array_identifier_repeat1,
  [7653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_POUND,
    ACTIONS(514), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym_array_type_repeat1,
  [7677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym__array_identifier_repeat1,
  [7690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(210), 1,
      sym__identifier,
    ACTIONS(525), 2,
      aux_sym__identifier_token1,
      sym_number,
  [7701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym__array_identifier_repeat1,
  [7714] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      sym_unescaped_double_string_fragment,
    STATE(206), 1,
      aux_sym_string_literal_repeat1,
  [7727] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      aux_sym_string_literal_repeat1,
  [7740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_POUND,
    ACTIONS(535), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym_array_type_repeat1,
  [7764] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      aux_sym_string_literal_repeat1,
  [7777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym__array_identifier_repeat1,
  [7790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym__array_identifier_repeat1,
  [7803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      aux_sym__array_identifier_repeat1,
  [7816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym__array_identifier_repeat1,
  [7829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(232), 1,
      sym__identifier,
    ACTIONS(551), 2,
      aux_sym__identifier_token1,
      sym_number,
  [7840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(553), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [7851] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      sym_unescaped_double_string_fragment,
    STATE(238), 1,
      aux_sym_string_literal_repeat1,
  [7864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      aux_sym__array_identifier_repeat1,
  [7877] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(563), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      aux_sym_string_literal_repeat1,
  [7890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym__array_identifier_repeat1,
  [7903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym__array_identifier_repeat1,
  [7916] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    ACTIONS(571), 1,
      sym_unescaped_double_string_fragment,
    STATE(226), 1,
      aux_sym_string_literal_repeat1,
  [7929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_string_literal,
  [7939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_string_literal,
  [7949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_string_literal,
  [7959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_string_literal,
  [7969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      aux_sym_include_directive_token1,
  [7992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_for_statement_token1,
  [7999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
  [8006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_EQ,
  [8013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_define_division_token2,
  [8020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_EQ,
  [8027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym_number,
  [8034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_EQ,
  [8041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      aux_sym_define_division_token2,
  [8048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_EQ,
  [8055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      aux_sym_include_directive_token1,
  [8062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      aux_sym_print_division_token2,
  [8069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_EQ,
  [8076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_EQ,
  [8083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_for_statement_token1,
  [8090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      aux_sym_include_directive_token1,
  [8097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
  [8104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_EQ,
  [8111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_include_directive_token1,
  [8118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym_define_division_token2,
  [8125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_EQ,
  [8132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      aux_sym_define_division_token2,
  [8139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_keyword_token3,
  [8146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      aux_sym_keyword_token3,
  [8153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_number,
  [8160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 438,
  [SMALL_STATE(13)] = 513,
  [SMALL_STATE(14)] = 588,
  [SMALL_STATE(15)] = 663,
  [SMALL_STATE(16)] = 738,
  [SMALL_STATE(17)] = 813,
  [SMALL_STATE(18)] = 888,
  [SMALL_STATE(19)] = 963,
  [SMALL_STATE(20)] = 1038,
  [SMALL_STATE(21)] = 1113,
  [SMALL_STATE(22)] = 1188,
  [SMALL_STATE(23)] = 1263,
  [SMALL_STATE(24)] = 1338,
  [SMALL_STATE(25)] = 1413,
  [SMALL_STATE(26)] = 1488,
  [SMALL_STATE(27)] = 1563,
  [SMALL_STATE(28)] = 1638,
  [SMALL_STATE(29)] = 1713,
  [SMALL_STATE(30)] = 1788,
  [SMALL_STATE(31)] = 1863,
  [SMALL_STATE(32)] = 1938,
  [SMALL_STATE(33)] = 2013,
  [SMALL_STATE(34)] = 2088,
  [SMALL_STATE(35)] = 2163,
  [SMALL_STATE(36)] = 2235,
  [SMALL_STATE(37)] = 2277,
  [SMALL_STATE(38)] = 2319,
  [SMALL_STATE(39)] = 2361,
  [SMALL_STATE(40)] = 2403,
  [SMALL_STATE(41)] = 2442,
  [SMALL_STATE(42)] = 2501,
  [SMALL_STATE(43)] = 2560,
  [SMALL_STATE(44)] = 2616,
  [SMALL_STATE(45)] = 2652,
  [SMALL_STATE(46)] = 2708,
  [SMALL_STATE(47)] = 2741,
  [SMALL_STATE(48)] = 2772,
  [SMALL_STATE(49)] = 2803,
  [SMALL_STATE(50)] = 2856,
  [SMALL_STATE(51)] = 2909,
  [SMALL_STATE(52)] = 2962,
  [SMALL_STATE(53)] = 2993,
  [SMALL_STATE(54)] = 3024,
  [SMALL_STATE(55)] = 3057,
  [SMALL_STATE(56)] = 3088,
  [SMALL_STATE(57)] = 3133,
  [SMALL_STATE(58)] = 3186,
  [SMALL_STATE(59)] = 3239,
  [SMALL_STATE(60)] = 3292,
  [SMALL_STATE(61)] = 3345,
  [SMALL_STATE(62)] = 3398,
  [SMALL_STATE(63)] = 3451,
  [SMALL_STATE(64)] = 3504,
  [SMALL_STATE(65)] = 3549,
  [SMALL_STATE(66)] = 3580,
  [SMALL_STATE(67)] = 3625,
  [SMALL_STATE(68)] = 3656,
  [SMALL_STATE(69)] = 3687,
  [SMALL_STATE(70)] = 3722,
  [SMALL_STATE(71)] = 3753,
  [SMALL_STATE(72)] = 3786,
  [SMALL_STATE(73)] = 3829,
  [SMALL_STATE(74)] = 3870,
  [SMALL_STATE(75)] = 3909,
  [SMALL_STATE(76)] = 3940,
  [SMALL_STATE(77)] = 3971,
  [SMALL_STATE(78)] = 4024,
  [SMALL_STATE(79)] = 4077,
  [SMALL_STATE(80)] = 4130,
  [SMALL_STATE(81)] = 4183,
  [SMALL_STATE(82)] = 4236,
  [SMALL_STATE(83)] = 4289,
  [SMALL_STATE(84)] = 4342,
  [SMALL_STATE(85)] = 4373,
  [SMALL_STATE(86)] = 4426,
  [SMALL_STATE(87)] = 4479,
  [SMALL_STATE(88)] = 4532,
  [SMALL_STATE(89)] = 4585,
  [SMALL_STATE(90)] = 4638,
  [SMALL_STATE(91)] = 4691,
  [SMALL_STATE(92)] = 4744,
  [SMALL_STATE(93)] = 4775,
  [SMALL_STATE(94)] = 4820,
  [SMALL_STATE(95)] = 4851,
  [SMALL_STATE(96)] = 4882,
  [SMALL_STATE(97)] = 4913,
  [SMALL_STATE(98)] = 4946,
  [SMALL_STATE(99)] = 4985,
  [SMALL_STATE(100)] = 5026,
  [SMALL_STATE(101)] = 5069,
  [SMALL_STATE(102)] = 5102,
  [SMALL_STATE(103)] = 5133,
  [SMALL_STATE(104)] = 5168,
  [SMALL_STATE(105)] = 5199,
  [SMALL_STATE(106)] = 5230,
  [SMALL_STATE(107)] = 5261,
  [SMALL_STATE(108)] = 5292,
  [SMALL_STATE(109)] = 5325,
  [SMALL_STATE(110)] = 5356,
  [SMALL_STATE(111)] = 5387,
  [SMALL_STATE(112)] = 5432,
  [SMALL_STATE(113)] = 5477,
  [SMALL_STATE(114)] = 5508,
  [SMALL_STATE(115)] = 5538,
  [SMALL_STATE(116)] = 5576,
  [SMALL_STATE(117)] = 5602,
  [SMALL_STATE(118)] = 5640,
  [SMALL_STATE(119)] = 5678,
  [SMALL_STATE(120)] = 5716,
  [SMALL_STATE(121)] = 5739,
  [SMALL_STATE(122)] = 5762,
  [SMALL_STATE(123)] = 5785,
  [SMALL_STATE(124)] = 5817,
  [SMALL_STATE(125)] = 5838,
  [SMALL_STATE(126)] = 5859,
  [SMALL_STATE(127)] = 5880,
  [SMALL_STATE(128)] = 5901,
  [SMALL_STATE(129)] = 5922,
  [SMALL_STATE(130)] = 5943,
  [SMALL_STATE(131)] = 5964,
  [SMALL_STATE(132)] = 5985,
  [SMALL_STATE(133)] = 6006,
  [SMALL_STATE(134)] = 6027,
  [SMALL_STATE(135)] = 6048,
  [SMALL_STATE(136)] = 6069,
  [SMALL_STATE(137)] = 6090,
  [SMALL_STATE(138)] = 6111,
  [SMALL_STATE(139)] = 6132,
  [SMALL_STATE(140)] = 6153,
  [SMALL_STATE(141)] = 6174,
  [SMALL_STATE(142)] = 6197,
  [SMALL_STATE(143)] = 6218,
  [SMALL_STATE(144)] = 6239,
  [SMALL_STATE(145)] = 6260,
  [SMALL_STATE(146)] = 6281,
  [SMALL_STATE(147)] = 6302,
  [SMALL_STATE(148)] = 6323,
  [SMALL_STATE(149)] = 6344,
  [SMALL_STATE(150)] = 6365,
  [SMALL_STATE(151)] = 6386,
  [SMALL_STATE(152)] = 6407,
  [SMALL_STATE(153)] = 6428,
  [SMALL_STATE(154)] = 6451,
  [SMALL_STATE(155)] = 6471,
  [SMALL_STATE(156)] = 6499,
  [SMALL_STATE(157)] = 6519,
  [SMALL_STATE(158)] = 6539,
  [SMALL_STATE(159)] = 6565,
  [SMALL_STATE(160)] = 6585,
  [SMALL_STATE(161)] = 6615,
  [SMALL_STATE(162)] = 6635,
  [SMALL_STATE(163)] = 6657,
  [SMALL_STATE(164)] = 6677,
  [SMALL_STATE(165)] = 6697,
  [SMALL_STATE(166)] = 6717,
  [SMALL_STATE(167)] = 6737,
  [SMALL_STATE(168)] = 6757,
  [SMALL_STATE(169)] = 6777,
  [SMALL_STATE(170)] = 6799,
  [SMALL_STATE(171)] = 6823,
  [SMALL_STATE(172)] = 6843,
  [SMALL_STATE(173)] = 6865,
  [SMALL_STATE(174)] = 6896,
  [SMALL_STATE(175)] = 6927,
  [SMALL_STATE(176)] = 6958,
  [SMALL_STATE(177)] = 6989,
  [SMALL_STATE(178)] = 7020,
  [SMALL_STATE(179)] = 7050,
  [SMALL_STATE(180)] = 7080,
  [SMALL_STATE(181)] = 7110,
  [SMALL_STATE(182)] = 7132,
  [SMALL_STATE(183)] = 7145,
  [SMALL_STATE(184)] = 7158,
  [SMALL_STATE(185)] = 7171,
  [SMALL_STATE(186)] = 7184,
  [SMALL_STATE(187)] = 7197,
  [SMALL_STATE(188)] = 7210,
  [SMALL_STATE(189)] = 7223,
  [SMALL_STATE(190)] = 7236,
  [SMALL_STATE(191)] = 7256,
  [SMALL_STATE(192)] = 7276,
  [SMALL_STATE(193)] = 7295,
  [SMALL_STATE(194)] = 7314,
  [SMALL_STATE(195)] = 7333,
  [SMALL_STATE(196)] = 7352,
  [SMALL_STATE(197)] = 7369,
  [SMALL_STATE(198)] = 7385,
  [SMALL_STATE(199)] = 7397,
  [SMALL_STATE(200)] = 7413,
  [SMALL_STATE(201)] = 7424,
  [SMALL_STATE(202)] = 7437,
  [SMALL_STATE(203)] = 7450,
  [SMALL_STATE(204)] = 7461,
  [SMALL_STATE(205)] = 7474,
  [SMALL_STATE(206)] = 7485,
  [SMALL_STATE(207)] = 7498,
  [SMALL_STATE(208)] = 7509,
  [SMALL_STATE(209)] = 7520,
  [SMALL_STATE(210)] = 7531,
  [SMALL_STATE(211)] = 7544,
  [SMALL_STATE(212)] = 7555,
  [SMALL_STATE(213)] = 7568,
  [SMALL_STATE(214)] = 7579,
  [SMALL_STATE(215)] = 7592,
  [SMALL_STATE(216)] = 7603,
  [SMALL_STATE(217)] = 7616,
  [SMALL_STATE(218)] = 7629,
  [SMALL_STATE(219)] = 7640,
  [SMALL_STATE(220)] = 7653,
  [SMALL_STATE(221)] = 7664,
  [SMALL_STATE(222)] = 7677,
  [SMALL_STATE(223)] = 7690,
  [SMALL_STATE(224)] = 7701,
  [SMALL_STATE(225)] = 7714,
  [SMALL_STATE(226)] = 7727,
  [SMALL_STATE(227)] = 7740,
  [SMALL_STATE(228)] = 7751,
  [SMALL_STATE(229)] = 7764,
  [SMALL_STATE(230)] = 7777,
  [SMALL_STATE(231)] = 7790,
  [SMALL_STATE(232)] = 7803,
  [SMALL_STATE(233)] = 7816,
  [SMALL_STATE(234)] = 7829,
  [SMALL_STATE(235)] = 7840,
  [SMALL_STATE(236)] = 7851,
  [SMALL_STATE(237)] = 7864,
  [SMALL_STATE(238)] = 7877,
  [SMALL_STATE(239)] = 7890,
  [SMALL_STATE(240)] = 7903,
  [SMALL_STATE(241)] = 7916,
  [SMALL_STATE(242)] = 7929,
  [SMALL_STATE(243)] = 7939,
  [SMALL_STATE(244)] = 7949,
  [SMALL_STATE(245)] = 7959,
  [SMALL_STATE(246)] = 7969,
  [SMALL_STATE(247)] = 7977,
  [SMALL_STATE(248)] = 7985,
  [SMALL_STATE(249)] = 7992,
  [SMALL_STATE(250)] = 7999,
  [SMALL_STATE(251)] = 8006,
  [SMALL_STATE(252)] = 8013,
  [SMALL_STATE(253)] = 8020,
  [SMALL_STATE(254)] = 8027,
  [SMALL_STATE(255)] = 8034,
  [SMALL_STATE(256)] = 8041,
  [SMALL_STATE(257)] = 8048,
  [SMALL_STATE(258)] = 8055,
  [SMALL_STATE(259)] = 8062,
  [SMALL_STATE(260)] = 8069,
  [SMALL_STATE(261)] = 8076,
  [SMALL_STATE(262)] = 8083,
  [SMALL_STATE(263)] = 8090,
  [SMALL_STATE(264)] = 8097,
  [SMALL_STATE(265)] = 8104,
  [SMALL_STATE(266)] = 8111,
  [SMALL_STATE(267)] = 8118,
  [SMALL_STATE(268)] = 8125,
  [SMALL_STATE(269)] = 8132,
  [SMALL_STATE(270)] = 8139,
  [SMALL_STATE(271)] = 8146,
  [SMALL_STATE(272)] = 8153,
  [SMALL_STATE(273)] = 8160,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(37),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(6),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(48),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(36),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(50),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(225),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(108),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(52),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(258),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(197),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(38),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(7),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(106),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(39),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(51),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(202),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(46),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(105),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(263),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(199),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lhs_expression, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keywords, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keywords, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(178),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(28),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(252),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(256),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(269),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 9, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 9, .production_id = 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter_division, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter_division, 4),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_division, 6),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_division, 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(108),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(248),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_division, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_division, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_division, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(214),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2), SHIFT_REPEAT(215),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(254),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_statement, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [577] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_poweron(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
