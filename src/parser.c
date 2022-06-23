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
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 215
#define ALIAS_COUNT 0
#define TOKEN_COUNT 177
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_keyword_token1 = 1,
  aux_sym_keyword_token2 = 2,
  aux_sym_keyword_token3 = 3,
  aux_sym_keyword_token4 = 4,
  aux_sym_keyword_token5 = 5,
  aux_sym_keyword_token6 = 6,
  aux_sym_keyword_token7 = 7,
  aux_sym_target_division_token1 = 8,
  anon_sym_EQ = 9,
  aux_sym_define_division_token1 = 10,
  aux_sym_setup_division_token1 = 11,
  aux_sym_select_division_token1 = 12,
  aux_sym_sort_division_token1 = 13,
  aux_sym_letter_division_token1 = 14,
  aux_sym_print_division_token1 = 15,
  aux_sym_total_division_token1 = 16,
  aux_sym_record_type_token1 = 17,
  aux_sym_record_type_token2 = 18,
  aux_sym_record_type_token3 = 19,
  aux_sym_record_type_token4 = 20,
  aux_sym_record_type_token5 = 21,
  aux_sym_record_type_token6 = 22,
  aux_sym_record_type_token7 = 23,
  aux_sym_record_type_token8 = 24,
  aux_sym_record_type_token9 = 25,
  aux_sym_record_type_token10 = 26,
  aux_sym_record_type_token11 = 27,
  aux_sym_record_type_token12 = 28,
  aux_sym_record_type_token13 = 29,
  aux_sym_record_type_token14 = 30,
  aux_sym_record_type_token15 = 31,
  aux_sym_record_type_token16 = 32,
  aux_sym_record_type_token17 = 33,
  aux_sym_record_type_token18 = 34,
  aux_sym_record_type_token19 = 35,
  aux_sym_record_type_token20 = 36,
  aux_sym_record_type_token21 = 37,
  aux_sym_record_type_token22 = 38,
  aux_sym_record_type_token23 = 39,
  aux_sym_record_type_token24 = 40,
  aux_sym_record_type_token25 = 41,
  aux_sym_record_type_token26 = 42,
  aux_sym_record_type_token27 = 43,
  aux_sym_record_type_token28 = 44,
  aux_sym_record_type_token29 = 45,
  aux_sym_record_type_token30 = 46,
  aux_sym_record_type_token31 = 47,
  aux_sym_record_type_token32 = 48,
  aux_sym_record_type_token33 = 49,
  aux_sym_record_type_token34 = 50,
  aux_sym_record_type_token35 = 51,
  aux_sym_record_type_token36 = 52,
  aux_sym_record_type_token37 = 53,
  aux_sym_record_type_token38 = 54,
  aux_sym_record_type_token39 = 55,
  aux_sym_record_type_token40 = 56,
  aux_sym_record_type_token41 = 57,
  aux_sym_record_type_token42 = 58,
  aux_sym_record_type_token43 = 59,
  aux_sym_record_type_token44 = 60,
  aux_sym_record_type_token45 = 61,
  aux_sym_record_type_token46 = 62,
  aux_sym_record_type_token47 = 63,
  aux_sym_record_type_token48 = 64,
  aux_sym_record_type_token49 = 65,
  aux_sym_record_type_token50 = 66,
  aux_sym_record_type_token51 = 67,
  aux_sym_record_type_token52 = 68,
  aux_sym_record_type_token53 = 69,
  aux_sym_record_type_token54 = 70,
  aux_sym_record_type_token55 = 71,
  aux_sym_record_type_token56 = 72,
  aux_sym_record_type_token57 = 73,
  aux_sym_record_type_token58 = 74,
  aux_sym_record_type_token59 = 75,
  aux_sym_record_type_token60 = 76,
  aux_sym_record_type_token61 = 77,
  aux_sym_record_type_token62 = 78,
  aux_sym_record_type_token63 = 79,
  aux_sym_record_type_token64 = 80,
  aux_sym_record_type_token65 = 81,
  aux_sym_record_type_token66 = 82,
  aux_sym_record_type_token67 = 83,
  aux_sym_record_type_token68 = 84,
  aux_sym_record_type_token69 = 85,
  aux_sym_record_type_token70 = 86,
  aux_sym_record_type_token71 = 87,
  aux_sym_record_type_token72 = 88,
  aux_sym_record_type_token73 = 89,
  aux_sym_record_type_token74 = 90,
  aux_sym_record_type_token75 = 91,
  aux_sym_record_type_token76 = 92,
  aux_sym_record_type_token77 = 93,
  aux_sym_record_type_token78 = 94,
  aux_sym_record_type_token79 = 95,
  aux_sym_record_type_token80 = 96,
  aux_sym_record_type_token81 = 97,
  aux_sym_record_type_token82 = 98,
  aux_sym_record_type_token83 = 99,
  aux_sym_record_type_token84 = 100,
  aux_sym_record_type_token85 = 101,
  aux_sym_record_type_token86 = 102,
  aux_sym_record_type_token87 = 103,
  aux_sym_record_type_token88 = 104,
  aux_sym_record_type_token89 = 105,
  aux_sym_record_type_token90 = 106,
  aux_sym_record_type_token91 = 107,
  aux_sym_record_type_token92 = 108,
  aux_sym_record_type_token93 = 109,
  aux_sym_record_type_token94 = 110,
  aux_sym_record_type_token95 = 111,
  aux_sym_record_type_token96 = 112,
  aux_sym_record_type_token97 = 113,
  aux_sym_record_type_token98 = 114,
  aux_sym_record_type_token99 = 115,
  aux_sym_record_type_token100 = 116,
  aux_sym_record_type_token101 = 117,
  aux_sym_record_type_token102 = 118,
  aux_sym_record_type_token103 = 119,
  aux_sym_record_type_token104 = 120,
  aux_sym_record_type_token105 = 121,
  aux_sym_record_type_token106 = 122,
  aux_sym_record_type_token107 = 123,
  aux_sym_record_type_token108 = 124,
  aux_sym_record_type_token109 = 125,
  aux_sym_record_type_token110 = 126,
  aux_sym_record_type_token111 = 127,
  aux_sym_data_type_token1 = 128,
  aux_sym_data_type_token2 = 129,
  aux_sym_data_type_token3 = 130,
  aux_sym_data_type_token4 = 131,
  aux_sym_data_type_token5 = 132,
  aux_sym_data_type_token6 = 133,
  aux_sym_data_type_token7 = 134,
  aux_sym_array_type_token1 = 135,
  anon_sym_LPAREN = 136,
  anon_sym_COMMA = 137,
  anon_sym_RPAREN = 138,
  anon_sym_DQUOTE = 139,
  sym_unescaped_double_string_fragment = 140,
  aux_sym_identifier_token1 = 141,
  sym_number = 142,
  anon_sym_POUND = 143,
  aux_sym_include_directive_token1 = 144,
  anon_sym_COLON = 145,
  aux_sym_special_keywords_token1 = 146,
  aux_sym_special_keywords_token2 = 147,
  aux_sym_special_keywords_token3 = 148,
  aux_sym_special_keywords_token4 = 149,
  aux_sym_special_keywords_token5 = 150,
  aux_sym_special_keywords_token6 = 151,
  aux_sym_special_keywords_token7 = 152,
  aux_sym_special_keywords_token8 = 153,
  aux_sym_special_keywords_token9 = 154,
  aux_sym_special_keywords_token10 = 155,
  aux_sym_special_keywords_token11 = 156,
  aux_sym_special_keywords_token12 = 157,
  aux_sym_special_keywords_token13 = 158,
  aux_sym_special_keywords_token14 = 159,
  aux_sym_special_keywords_token15 = 160,
  aux_sym_special_keywords_token16 = 161,
  aux_sym_special_keywords_token17 = 162,
  aux_sym_special_keywords_token18 = 163,
  aux_sym_special_keywords_token19 = 164,
  sym_comment = 165,
  anon_sym_AND = 166,
  anon_sym_OR = 167,
  anon_sym_PLUS = 168,
  anon_sym_DASH = 169,
  anon_sym_STAR = 170,
  anon_sym_SLASH = 171,
  anon_sym_LT_GT = 172,
  anon_sym_GT = 173,
  anon_sym_LT = 174,
  aux_sym_if_statment_token1 = 175,
  aux_sym_procedure_call_token1 = 176,
  sym_source_file = 177,
  sym__optional_divisions = 178,
  sym_target_division = 179,
  sym_define_division = 180,
  sym_define_statement = 181,
  sym_setup_division = 182,
  sym_select_division = 183,
  sym_sort_division = 184,
  sym_letter_division = 185,
  sym_print_division = 186,
  sym_total_division = 187,
  sym_record_type = 188,
  sym_data_type = 189,
  sym_array_type = 190,
  sym_string_literal = 191,
  sym_identifier = 192,
  sym_variable_declaration = 193,
  sym_include_directive = 194,
  sym_special_keywords = 195,
  sym_expression = 196,
  sym_assignment_expression = 197,
  sym__lhs_expression = 198,
  sym_parenthesized_expression = 199,
  sym__expressions = 200,
  sym_binary_expression = 201,
  sym_primary_expression = 202,
  sym_for_statement = 203,
  sym_if_statment = 204,
  sym_statement = 205,
  sym_procedure_definition = 206,
  sym_procedure_call = 207,
  sym_block = 208,
  aux_sym_source_file_repeat1 = 209,
  aux_sym_source_file_repeat2 = 210,
  aux_sym_define_division_repeat1 = 211,
  aux_sym_setup_division_repeat1 = 212,
  aux_sym_array_type_repeat1 = 213,
  aux_sym_string_literal_repeat1 = 214,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_keyword_token2] = "keyword_token2",
  [aux_sym_keyword_token3] = "keyword_token3",
  [aux_sym_keyword_token4] = "keyword_token4",
  [aux_sym_keyword_token5] = "keyword_token5",
  [aux_sym_keyword_token6] = "keyword_token6",
  [aux_sym_keyword_token7] = "keyword_token7",
  [aux_sym_target_division_token1] = "target_division_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_define_division_token1] = "define_division_token1",
  [aux_sym_setup_division_token1] = "setup_division_token1",
  [aux_sym_select_division_token1] = "select_division_token1",
  [aux_sym_sort_division_token1] = "sort_division_token1",
  [aux_sym_letter_division_token1] = "letter_division_token1",
  [aux_sym_print_division_token1] = "print_division_token1",
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
  [aux_sym_identifier_token1] = "identifier_token1",
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
  [aux_sym_if_statment_token1] = "if_statment_token1",
  [aux_sym_procedure_call_token1] = "procedure_call_token1",
  [sym_source_file] = "source_file",
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
  [sym_identifier] = "identifier",
  [sym_variable_declaration] = "variable_declaration",
  [sym_include_directive] = "include_directive",
  [sym_special_keywords] = "special_keywords",
  [sym_expression] = "expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym__lhs_expression] = "_lhs_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__expressions] = "_expressions",
  [sym_binary_expression] = "binary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_for_statement] = "for_statement",
  [sym_if_statment] = "if_statment",
  [sym_statement] = "statement",
  [sym_procedure_definition] = "procedure_definition",
  [sym_procedure_call] = "procedure_call",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_define_division_repeat1] = "define_division_repeat1",
  [aux_sym_setup_division_repeat1] = "setup_division_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [aux_sym_keyword_token2] = aux_sym_keyword_token2,
  [aux_sym_keyword_token3] = aux_sym_keyword_token3,
  [aux_sym_keyword_token4] = aux_sym_keyword_token4,
  [aux_sym_keyword_token5] = aux_sym_keyword_token5,
  [aux_sym_keyword_token6] = aux_sym_keyword_token6,
  [aux_sym_keyword_token7] = aux_sym_keyword_token7,
  [aux_sym_target_division_token1] = aux_sym_target_division_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_define_division_token1] = aux_sym_define_division_token1,
  [aux_sym_setup_division_token1] = aux_sym_setup_division_token1,
  [aux_sym_select_division_token1] = aux_sym_select_division_token1,
  [aux_sym_sort_division_token1] = aux_sym_sort_division_token1,
  [aux_sym_letter_division_token1] = aux_sym_letter_division_token1,
  [aux_sym_print_division_token1] = aux_sym_print_division_token1,
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
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
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
  [aux_sym_if_statment_token1] = aux_sym_if_statment_token1,
  [aux_sym_procedure_call_token1] = aux_sym_procedure_call_token1,
  [sym_source_file] = sym_source_file,
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
  [sym_identifier] = sym_identifier,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_include_directive] = sym_include_directive,
  [sym_special_keywords] = sym_special_keywords,
  [sym_expression] = sym_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym__lhs_expression] = sym__lhs_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym__expressions] = sym__expressions,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_for_statement] = sym_for_statement,
  [sym_if_statment] = sym_if_statment,
  [sym_statement] = sym_statement,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_procedure_call] = sym_procedure_call,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_define_division_repeat1] = aux_sym_define_division_repeat1,
  [aux_sym_setup_division_repeat1] = aux_sym_setup_division_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [aux_sym_keyword_token7] = {
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
  [aux_sym_identifier_token1] = {
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
  [aux_sym_if_statment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_call_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
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
  [sym_identifier] = {
    .visible = true,
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
  [sym__expressions] = {
    .visible = false,
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
  [sym_if_statment] = {
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
  [sym_block] = {
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
  [aux_sym_define_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setup_division_repeat1] = {
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

static inline bool aux_sym_identifier_token1_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(990);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == ')') ADVANCE(1134);
      if (lookahead == '*') ADVANCE(1206);
      if (lookahead == '+') ADVANCE(1204);
      if (lookahead == ',') ADVANCE(1133);
      if (lookahead == '-') ADVANCE(1205);
      if (lookahead == '.') ADVANCE(982);
      if (lookahead == '/') ADVANCE(1207);
      if (lookahead == '0') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(1179);
      if (lookahead == '<') ADVANCE(1210);
      if (lookahead == '=') ADVANCE(1004);
      if (lookahead == '>') ADVANCE(1209);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(13);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(501);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(492);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(118);
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
          lookahead == 'u') ADVANCE(815);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(329);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(897);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(911);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == '*') ADVANCE(1206);
      if (lookahead == '+') ADVANCE(1204);
      if (lookahead == '-') ADVANCE(1205);
      if (lookahead == '.') ADVANCE(982);
      if (lookahead == '/') ADVANCE(1207);
      if (lookahead == '0') ADVANCE(1168);
      if (lookahead == '<') ADVANCE(1210);
      if (lookahead == '=') ADVANCE(1004);
      if (lookahead == '>') ADVANCE(1209);
      if (lookahead == 'A') ADVANCE(1140);
      if (lookahead == 'O') ADVANCE(1141);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1142);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1150);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1160);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1166);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == '.') ADVANCE(982);
      if (lookahead == '0') ADVANCE(1168);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1142);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1150);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1160);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1166);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == '.') ADVANCE(982);
      if (lookahead == '0') ADVANCE(1168);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1152);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1166);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '(') ADVANCE(1132);
      if (lookahead == '.') ADVANCE(982);
      if (lookahead == '0') ADVANCE(1168);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '!' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1166);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '[') ADVANCE(1136);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1138);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1154);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1166);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1154);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1166);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(724);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(1200);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(744);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(1202);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(782);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(36);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(473);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(537);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(492);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(659);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(586);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(815);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(277);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(330);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(989);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1174);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(863);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(958);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(817);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(873);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(873);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(543);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1064);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1063);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(967);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1014);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1050);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(742);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(557);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(285);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(958);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(866);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(996);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(552);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(962);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(924);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(757);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(288);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(995);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(899);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(783);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(937);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(817);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(879);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(879);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(638);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(910);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(920);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 115:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(755);
      END_STATE();
    case 116:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(931);
      END_STATE();
    case 117:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(341);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(761);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(436);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(833);
      END_STATE();
    case 118:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(752);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(956);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 119:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(752);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 120:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(943);
      END_STATE();
    case 121:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 122:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 123:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(311);
      END_STATE();
    case 126:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(439);
      END_STATE();
    case 127:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(314);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(744);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(281);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1181);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(281);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1075);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(744);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(956);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(483);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(972);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(504);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(751);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(942);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(669);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(423);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(846);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(884);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(885);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(855);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(887);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(888);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(700);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1181);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(890);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(779);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(699);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(673);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(906);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(914);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(711);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(916);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(918);
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(998);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1023);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1059);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(337);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1189);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1060);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1034);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1030);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1122);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1183);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1185);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(503);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(945);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(933);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(946);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(947);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(938);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 209:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(722);
      END_STATE();
    case 210:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(661);
      END_STATE();
    case 211:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(664);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 220:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 222:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(675);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(697);
      END_STATE();
    case 229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      END_STATE();
    case 230:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(797);
      END_STATE();
    case 233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 240:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(466);
      END_STATE();
    case 241:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 242:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(965);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(543);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1124);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1211);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1099);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1087);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1062);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1095);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1089);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1194);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1009);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1071);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1119);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1180);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(935);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 323:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(763);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 334:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 342:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(775);
      END_STATE();
    case 345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 356:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 357:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 358:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 359:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 361:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 362:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(993);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 363:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(842);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(818);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 364:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(842);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 365:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 366:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(671);
      END_STATE();
    case 367:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(426);
      END_STATE();
    case 368:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(649);
      END_STATE();
    case 369:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(650);
      END_STATE();
    case 370:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 371:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(480);
      END_STATE();
    case 372:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(651);
      END_STATE();
    case 373:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(652);
      END_STATE();
    case 374:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(653);
      END_STATE();
    case 375:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      END_STATE();
    case 376:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(654);
      END_STATE();
    case 377:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(440);
      END_STATE();
    case 378:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(655);
      END_STATE();
    case 379:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(656);
      END_STATE();
    case 380:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(657);
      END_STATE();
    case 381:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(658);
      END_STATE();
    case 382:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(430);
      END_STATE();
    case 383:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(448);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 384:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(681);
      END_STATE();
    case 385:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(327);
      END_STATE();
    case 386:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(481);
      END_STATE();
    case 387:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1103);
      END_STATE();
    case 388:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1021);
      END_STATE();
    case 389:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1026);
      END_STATE();
    case 390:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1190);
      END_STATE();
    case 391:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1022);
      END_STATE();
    case 392:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(806);
      END_STATE();
    case 393:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(564);
      END_STATE();
    case 394:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 395:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 396:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 397:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 398:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(555);
      END_STATE();
    case 399:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(518);
      END_STATE();
    case 400:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1039);
      END_STATE();
    case 401:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(446);
      END_STATE();
    case 402:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(672);
      END_STATE();
    case 403:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 404:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 405:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      END_STATE();
    case 406:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      END_STATE();
    case 407:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 408:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(698);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(977);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(579);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 419:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 421:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 423:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(872);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 425:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 426:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 427:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 428:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 429:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(812);
      END_STATE();
    case 430:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 431:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 432:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 433:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      END_STATE();
    case 434:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(831);
      END_STATE();
    case 435:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 436:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(874);
      END_STATE();
    case 437:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 438:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 439:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(921);
      END_STATE();
    case 440:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 441:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 442:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(953);
      END_STATE();
    case 443:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(955);
      END_STATE();
    case 444:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 446:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(951);
      END_STATE();
    case 448:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 449:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 452:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(922);
      END_STATE();
    case 455:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(680);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 457:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 458:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      END_STATE();
    case 461:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 462:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 463:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 464:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      END_STATE();
    case 465:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 466:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 467:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(691);
      END_STATE();
    case 468:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 469:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      END_STATE();
    case 470:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 471:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
      END_STATE();
    case 472:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(837);
      END_STATE();
    case 473:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 474:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 475:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 476:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 477:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 478:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 479:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(978);
      END_STATE();
    case 480:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 481:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 482:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(919);
      END_STATE();
    case 483:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1027);
      END_STATE();
    case 484:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(151);
      END_STATE();
    case 485:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(786);
      END_STATE();
    case 486:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(926);
      END_STATE();
    case 487:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(533);
      END_STATE();
    case 488:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(425);
      END_STATE();
    case 489:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(435);
      END_STATE();
    case 490:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(220);
      END_STATE();
    case 491:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(534);
      END_STATE();
    case 492:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 493:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1045);
      END_STATE();
    case 494:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1212);
      END_STATE();
    case 495:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1083);
      END_STATE();
    case 496:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1046);
      END_STATE();
    case 497:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 498:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1029);
      END_STATE();
    case 499:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1066);
      END_STATE();
    case 500:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1011);
      END_STATE();
    case 501:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(667);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 502:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 503:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 504:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 505:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(494);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      END_STATE();
    case 506:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(823);
      END_STATE();
    case 507:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(823);
      END_STATE();
    case 508:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(975);
      END_STATE();
    case 509:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 510:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 511:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(810);
      END_STATE();
    case 512:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 513:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(925);
      END_STATE();
    case 514:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(666);
      END_STATE();
    case 515:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 516:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 517:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 518:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 519:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 520:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 521:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 522:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 523:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 524:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 525:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 526:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 527:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 528:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 529:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 530:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 531:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(976);
      END_STATE();
    case 532:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 533:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 534:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 535:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(803);
      END_STATE();
    case 536:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 537:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(401);
      END_STATE();
    case 538:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1017);
      END_STATE();
    case 539:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1052);
      END_STATE();
    case 540:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1036);
      END_STATE();
    case 541:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1090);
      END_STATE();
    case 542:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 543:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 544:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 545:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 546:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(811);
      END_STATE();
    case 547:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 548:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 549:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(345);
      END_STATE();
    case 550:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 551:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 552:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 553:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 554:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 555:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 556:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 557:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 558:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1069);
      END_STATE();
    case 559:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1002);
      END_STATE();
    case 560:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1058);
      END_STATE();
    case 561:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1085);
      END_STATE();
    case 562:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1041);
      END_STATE();
    case 563:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1186);
      END_STATE();
    case 564:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1040);
      END_STATE();
    case 565:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1196);
      END_STATE();
    case 566:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1104);
      END_STATE();
    case 567:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1054);
      END_STATE();
    case 568:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1092);
      END_STATE();
    case 569:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1108);
      END_STATE();
    case 570:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1082);
      END_STATE();
    case 571:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1072);
      END_STATE();
    case 572:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 573:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1084);
      END_STATE();
    case 574:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1093);
      END_STATE();
    case 575:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1098);
      END_STATE();
    case 576:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1020);
      END_STATE();
    case 577:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1081);
      END_STATE();
    case 578:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1094);
      END_STATE();
    case 579:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 580:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 581:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 582:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 583:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 584:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 585:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 586:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(948);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 587:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 588:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 589:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 590:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      END_STATE();
    case 591:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 592:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 593:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 594:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 595:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 596:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 597:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 598:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 599:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 600:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 601:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 602:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 603:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(854);
      END_STATE();
    case 604:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(856);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(459);
      END_STATE();
    case 605:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(857);
      END_STATE();
    case 606:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(858);
      END_STATE();
    case 607:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 608:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(861);
      END_STATE();
    case 609:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 610:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 611:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 612:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(929);
      END_STATE();
    case 613:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 614:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 615:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 616:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 618:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 619:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 620:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 621:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 622:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 623:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 624:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 625:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 626:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 627:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 628:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 629:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 630:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 631:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 632:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 633:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 634:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 635:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 636:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 637:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 638:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 639:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      END_STATE();
    case 640:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 641:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      END_STATE();
    case 642:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 643:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 644:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 645:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 646:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 647:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      END_STATE();
    case 648:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1088);
      END_STATE();
    case 649:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1015);
      END_STATE();
    case 650:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1051);
      END_STATE();
    case 651:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1047);
      END_STATE();
    case 652:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1115);
      END_STATE();
    case 653:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1120);
      END_STATE();
    case 654:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1117);
      END_STATE();
    case 655:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 656:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1113);
      END_STATE();
    case 657:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1042);
      END_STATE();
    case 658:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1112);
      END_STATE();
    case 659:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 660:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(957);
      END_STATE();
    case 661:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(959);
      END_STATE();
    case 662:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 663:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 664:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(963);
      END_STATE();
    case 665:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(930);
      END_STATE();
    case 666:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 667:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 668:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(862);
      END_STATE();
    case 669:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 670:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 671:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 672:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 673:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 674:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 675:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 676:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 677:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 678:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 679:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 680:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 681:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 682:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 683:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 684:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 685:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 686:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 687:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 688:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 689:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 690:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 691:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 692:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 693:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(899);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 694:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 695:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 696:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 697:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(960);
      END_STATE();
    case 698:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 699:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 700:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(932);
      END_STATE();
    case 701:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 702:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 703:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 704:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 705:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 706:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 707:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 708:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(936);
      END_STATE();
    case 709:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 710:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 711:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(941);
      END_STATE();
    case 712:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 713:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1006);
      END_STATE();
    case 714:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1073);
      END_STATE();
    case 715:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1035);
      END_STATE();
    case 716:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1070);
      END_STATE();
    case 717:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1097);
      END_STATE();
    case 718:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 719:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(716);
      END_STATE();
    case 720:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(896);
      END_STATE();
    case 721:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 722:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(529);
      END_STATE();
    case 723:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 724:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 725:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(875);
      END_STATE();
    case 726:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(778);
      END_STATE();
    case 727:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 728:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 729:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(991);
      END_STATE();
    case 730:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 731:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1106);
      END_STATE();
    case 732:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 733:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1128);
      END_STATE();
    case 734:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1107);
      END_STATE();
    case 735:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      END_STATE();
    case 736:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1025);
      END_STATE();
    case 737:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1123);
      END_STATE();
    case 738:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1024);
      END_STATE();
    case 739:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1028);
      END_STATE();
    case 740:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 741:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 742:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      END_STATE();
    case 743:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(954);
      END_STATE();
    case 744:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 745:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 746:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 747:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 748:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 749:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(971);
      END_STATE();
    case 750:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 751:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 752:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 753:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 754:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 755:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 756:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 757:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 758:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(973);
      END_STATE();
    case 759:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 760:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 761:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 762:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 763:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 764:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 765:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 766:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 767:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 768:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 769:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 770:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 771:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 772:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 773:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 774:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 775:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 776:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 777:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 778:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 779:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 780:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(316);
      END_STATE();
    case 781:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 782:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 783:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 784:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 785:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 786:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 787:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 788:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 789:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 790:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(835);
      END_STATE();
    case 791:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 792:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 793:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 794:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 795:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 796:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 797:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 798:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 799:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 800:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 801:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 802:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 803:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 804:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 805:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1012);
      END_STATE();
    case 806:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1100);
      END_STATE();
    case 807:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1197);
      END_STATE();
    case 808:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1193);
      END_STATE();
    case 809:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1074);
      END_STATE();
    case 810:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1079);
      END_STATE();
    case 811:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1187);
      END_STATE();
    case 812:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1049);
      END_STATE();
    case 813:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 814:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1188);
      END_STATE();
    case 815:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      END_STATE();
    case 816:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(805);
      END_STATE();
    case 817:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(865);
      END_STATE();
    case 818:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      END_STATE();
    case 819:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 820:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(808);
      END_STATE();
    case 821:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(809);
      END_STATE();
    case 822:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(886);
      END_STATE();
    case 823:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 824:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(825);
      END_STATE();
    case 825:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 826:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      END_STATE();
    case 827:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(878);
      END_STATE();
    case 828:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      END_STATE();
    case 829:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(894);
      END_STATE();
    case 830:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 831:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 832:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(674);
      END_STATE();
    case 833:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 834:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 835:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(324);
      END_STATE();
    case 836:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(685);
      END_STATE();
    case 837:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(909);
      END_STATE();
    case 838:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      END_STATE();
    case 839:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      END_STATE();
    case 840:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 841:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 842:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 843:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1008);
      END_STATE();
    case 844:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1126);
      END_STATE();
    case 845:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1);
      END_STATE();
    case 846:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1007);
      END_STATE();
    case 847:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 848:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1013);
      END_STATE();
    case 849:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1016);
      END_STATE();
    case 850:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 851:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1019);
      END_STATE();
    case 852:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 853:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1067);
      END_STATE();
    case 854:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1038);
      END_STATE();
    case 855:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1195);
      END_STATE();
    case 856:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 857:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1057);
      END_STATE();
    case 858:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1198);
      END_STATE();
    case 859:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 860:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1053);
      END_STATE();
    case 861:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1031);
      END_STATE();
    case 862:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      END_STATE();
    case 863:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 864:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(969);
      END_STATE();
    case 865:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      END_STATE();
    case 866:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 867:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(974);
      END_STATE();
    case 868:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 869:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      END_STATE();
    case 870:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 871:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 872:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      END_STATE();
    case 873:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 874:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      END_STATE();
    case 875:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 876:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 877:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 878:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(764);
      END_STATE();
    case 879:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 880:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 881:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 882:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 883:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 884:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      END_STATE();
    case 885:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      END_STATE();
    case 886:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(677);
      END_STATE();
    case 887:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
      END_STATE();
    case 888:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 889:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      END_STATE();
    case 890:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(447);
      END_STATE();
    case 891:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(898);
      END_STATE();
    case 892:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(678);
      END_STATE();
    case 893:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 894:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 895:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(524);
      END_STATE();
    case 896:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      END_STATE();
    case 897:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(437);
      END_STATE();
    case 898:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 899:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 900:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      END_STATE();
    case 901:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 902:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(793);
      END_STATE();
    case 903:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(482);
      END_STATE();
    case 904:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 905:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      END_STATE();
    case 906:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 907:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 908:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(452);
      END_STATE();
    case 909:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 910:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      END_STATE();
    case 911:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      END_STATE();
    case 912:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(794);
      END_STATE();
    case 913:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(900);
      END_STATE();
    case 914:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 915:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      END_STATE();
    case 916:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      END_STATE();
    case 917:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      END_STATE();
    case 918:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 919:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 920:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      END_STATE();
    case 921:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 922:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      END_STATE();
    case 923:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(802);
      END_STATE();
    case 924:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 925:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(713);
      END_STATE();
    case 926:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(714);
      END_STATE();
    case 927:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(725);
      END_STATE();
    case 928:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(717);
      END_STATE();
    case 929:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(640);
      END_STATE();
    case 930:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(908);
      END_STATE();
    case 931:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      END_STATE();
    case 932:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(634);
      END_STATE();
    case 933:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 934:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 935:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(593);
      END_STATE();
    case 936:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(600);
      END_STATE();
    case 937:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 938:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(777);
      END_STATE();
    case 939:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 940:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 941:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 942:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 943:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(915);
      END_STATE();
    case 944:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1116);
      END_STATE();
    case 945:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1110);
      END_STATE();
    case 946:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1111);
      END_STATE();
    case 947:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1114);
      END_STATE();
    case 948:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 949:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(416);
      END_STATE();
    case 950:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(348);
      END_STATE();
    case 951:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(268);
      END_STATE();
    case 952:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(456);
      END_STATE();
    case 953:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(433);
      END_STATE();
    case 954:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(312);
      END_STATE();
    case 955:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(328);
      END_STATE();
    case 956:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1191);
      END_STATE();
    case 957:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1048);
      END_STATE();
    case 958:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(670);
      END_STATE();
    case 959:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(807);
      END_STATE();
    case 960:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(814);
      END_STATE();
    case 961:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(409);
      END_STATE();
    case 962:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 963:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(622);
      END_STATE();
    case 964:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(712);
      END_STATE();
    case 965:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(479);
      END_STATE();
    case 966:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 967:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1130);
      END_STATE();
    case 968:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1127);
      END_STATE();
    case 969:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1018);
      END_STATE();
    case 970:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1055);
      END_STATE();
    case 971:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1061);
      END_STATE();
    case 972:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1068);
      END_STATE();
    case 973:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 974:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(723);
      END_STATE();
    case 975:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(826);
      END_STATE();
    case 976:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(828);
      END_STATE();
    case 977:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(92);
      END_STATE();
    case 978:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(95);
      END_STATE();
    case 979:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1170);
      END_STATE();
    case 980:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1171);
      END_STATE();
    case 981:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      END_STATE();
    case 982:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1175);
      END_STATE();
    case 983:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1173);
      END_STATE();
    case 984:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1174);
      END_STATE();
    case 985:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1172);
      END_STATE();
    case 986:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1166);
      END_STATE();
    case 987:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 988:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(986);
      END_STATE();
    case 989:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(988);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_letter_division_token1);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_total_division_token1);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_record_type_token2);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_record_type_token3);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_record_type_token4);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_record_type_token5);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_record_type_token6);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_record_type_token7);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_record_type_token8);
      if (lookahead == ' ') ADVANCE(902);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_record_type_token9);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_record_type_token10);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_record_type_token11);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_record_type_token12);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_record_type_token13);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_record_type_token14);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_record_type_token15);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_record_type_token16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(796);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_record_type_token17);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_record_type_token18);
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_record_type_token19);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_record_type_token20);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_record_type_token21);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_record_type_token22);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_record_type_token23);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_record_type_token24);
      if (lookahead == ' ') ADVANCE(464);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_record_type_token25);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_record_type_token26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(781);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(701);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_record_type_token27);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_record_type_token28);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_record_type_token29);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_record_type_token30);
      if (lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_record_type_token31);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_record_type_token32);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_record_type_token33);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_record_type_token34);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_record_type_token35);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_record_type_token36);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_record_type_token37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_record_type_token38);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_record_type_token39);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_record_type_token40);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_record_type_token41);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_record_type_token42);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_record_type_token43);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_record_type_token44);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_record_type_token45);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_record_type_token46);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_record_type_token47);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_record_type_token48);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_record_type_token49);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_record_type_token50);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_record_type_token51);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_record_type_token52);
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_record_type_token53);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_record_type_token54);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_record_type_token55);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_record_type_token56);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_record_type_token57);
      if (lookahead == ' ') ADVANCE(726);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_record_type_token58);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_record_type_token59);
      if (lookahead == ' ') ADVANCE(383);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_record_type_token60);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_record_type_token61);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_record_type_token62);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_record_type_token63);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_record_type_token64);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_record_type_token65);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_record_type_token66);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_record_type_token67);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_record_type_token68);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_record_type_token69);
      if (lookahead == ' ') ADVANCE(923);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_record_type_token70);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_record_type_token71);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(706);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_record_type_token72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_record_type_token73);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_record_type_token74);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_record_type_token75);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_record_type_token76);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_record_type_token77);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_record_type_token78);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_record_type_token79);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_record_type_token80);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_record_type_token81);
      if (lookahead == ' ') ADVANCE(535);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_record_type_token82);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_record_type_token83);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_record_type_token84);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_record_type_token85);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(769);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(530);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_record_type_token86);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_record_type_token87);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_record_type_token88);
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_record_type_token89);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_record_type_token90);
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_record_type_token91);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_record_type_token92);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_record_type_token93);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_record_type_token94);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_record_type_token95);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_record_type_token96);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_record_type_token97);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_record_type_token98);
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_record_type_token99);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_record_type_token100);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_record_type_token101);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_record_type_token102);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_record_type_token103);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_record_type_token104);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_record_type_token105);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_record_type_token106);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_record_type_token107);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_record_type_token108);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_record_type_token109);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_record_type_token110);
      if (lookahead == ' ') ADVANCE(964);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_record_type_token111);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_data_type_token1);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_data_type_token2);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_data_type_token3);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_data_type_token4);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_data_type_token5);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_data_type_token6);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_data_type_token7);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(1138);
      if (lookahead == ']') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1136);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '[') ADVANCE(1136);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1138);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1138);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(1201);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R') ADVANCE(1203);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1153);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1165);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1149);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(999);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1164);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1001);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1146);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(994);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1166);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1163);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1151);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1145);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1144);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(997);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1158);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(992);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1143);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1155);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1148);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1159);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1147);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1161);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1131);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1176);
      if (lookahead == '0') ADVANCE(1173);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(979);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(980);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(985);
      if (lookahead == '_') ADVANCE(983);
      if (lookahead == 'n') ADVANCE(1167);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '_') ADVANCE(981);
      if (lookahead == 'n') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(979);
      if (lookahead == 'n') ADVANCE(1167);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1170);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(980);
      if (lookahead == 'n') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1171);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1172);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(983);
      if (lookahead == 'n') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1173);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1174);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '_') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1175);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1175);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_special_keywords_token1);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_special_keywords_token2);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_special_keywords_token3);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_special_keywords_token4);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_special_keywords_token5);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_special_keywords_token6);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_special_keywords_token7);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_special_keywords_token8);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(458);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_special_keywords_token9);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_special_keywords_token10);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_special_keywords_token11);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_special_keywords_token12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_special_keywords_token13);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_special_keywords_token14);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_special_keywords_token15);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_special_keywords_token16);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_special_keywords_token17);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_special_keywords_token18);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(765);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_special_keywords_token19);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '\\') ADVANCE(17);
      if (!aux_sym_identifier_token1_character_set_1(lookahead)) ADVANCE(1166);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(1208);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_if_statment_token1);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_procedure_call_token1);
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
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
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
    [aux_sym_keyword_token7] = ACTIONS(1),
    [aux_sym_target_division_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_define_division_token1] = ACTIONS(1),
    [aux_sym_setup_division_token1] = ACTIONS(1),
    [aux_sym_select_division_token1] = ACTIONS(1),
    [aux_sym_sort_division_token1] = ACTIONS(1),
    [aux_sym_letter_division_token1] = ACTIONS(1),
    [aux_sym_print_division_token1] = ACTIONS(1),
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
    [aux_sym_if_statment_token1] = ACTIONS(1),
    [aux_sym_procedure_call_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(160),
    [sym_target_division] = STATE(38),
    [sym_special_keywords] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
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
    [sym_record_type] = STATE(99),
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
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_keyword_token1,
    ACTIONS(25), 1,
      aux_sym_keyword_token2,
    ACTIONS(27), 1,
      aux_sym_keyword_token5,
    ACTIONS(29), 1,
      aux_sym_keyword_token6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_procedure_call_token1,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(30), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(11), 2,
      sym_statement,
      aux_sym_setup_division_repeat1,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(85), 4,
      sym_for_statement,
      sym_if_statment,
      sym_procedure_definition,
      sym_procedure_call,
  [65] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_target_division_token1,
    STATE(40), 1,
      sym_target_division,
    STATE(14), 2,
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
  [104] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_keyword_token1,
    ACTIONS(25), 1,
      aux_sym_keyword_token2,
    ACTIONS(29), 1,
      aux_sym_keyword_token6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_procedure_call_token1,
    ACTIONS(43), 1,
      aux_sym_keyword_token5,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(30), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(11), 2,
      sym_statement,
      aux_sym_setup_division_repeat1,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(85), 4,
      sym_for_statement,
      sym_if_statment,
      sym_procedure_definition,
      sym_procedure_call,
  [169] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_keyword_token1,
    ACTIONS(25), 1,
      aux_sym_keyword_token2,
    ACTIONS(29), 1,
      aux_sym_keyword_token6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_procedure_call_token1,
    ACTIONS(45), 1,
      aux_sym_keyword_token5,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(30), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(12), 2,
      sym_statement,
      aux_sym_setup_division_repeat1,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(85), 4,
      sym_for_statement,
      sym_if_statment,
      sym_procedure_definition,
      sym_procedure_call,
  [234] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_keyword_token1,
    ACTIONS(25), 1,
      aux_sym_keyword_token2,
    ACTIONS(29), 1,
      aux_sym_keyword_token6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_procedure_call_token1,
    ACTIONS(47), 1,
      aux_sym_keyword_token5,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(30), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(6), 2,
      sym_statement,
      aux_sym_setup_division_repeat1,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(85), 4,
      sym_for_statement,
      sym_if_statment,
      sym_procedure_definition,
      sym_procedure_call,
  [299] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_keyword_token1,
    ACTIONS(52), 1,
      aux_sym_keyword_token2,
    ACTIONS(55), 1,
      aux_sym_keyword_token5,
    ACTIONS(57), 1,
      aux_sym_keyword_token6,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(72), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_procedure_call_token1,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(30), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(11), 2,
      sym_statement,
      aux_sym_setup_division_repeat1,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(85), 4,
      sym_for_statement,
      sym_if_statment,
      sym_procedure_definition,
      sym_procedure_call,
  [364] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_keyword_token1,
    ACTIONS(25), 1,
      aux_sym_keyword_token2,
    ACTIONS(29), 1,
      aux_sym_keyword_token6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_procedure_call_token1,
    ACTIONS(78), 1,
      aux_sym_keyword_token5,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(30), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(11), 2,
      sym_statement,
      aux_sym_setup_division_repeat1,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(85), 4,
      sym_for_statement,
      sym_if_statment,
      sym_procedure_definition,
      sym_procedure_call,
  [429] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_keyword_token1,
    ACTIONS(25), 1,
      aux_sym_keyword_token2,
    ACTIONS(29), 1,
      aux_sym_keyword_token6,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_procedure_call_token1,
    ACTIONS(80), 1,
      aux_sym_keyword_token5,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(30), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(8), 2,
      sym_statement,
      aux_sym_setup_division_repeat1,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(85), 4,
      sym_for_statement,
      sym_if_statment,
      sym_procedure_definition,
      sym_procedure_call,
  [494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_target_division_token1,
    STATE(14), 2,
      sym_special_keywords,
      aux_sym_source_file_repeat1,
    ACTIONS(87), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(84), 18,
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
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(90), 19,
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
  [560] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(96), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_LT_GT,
    ACTIONS(94), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_procedure_call_token1,
  [596] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(96), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(94), 8,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_procedure_call_token1,
  [634] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_AND,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(96), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(94), 7,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_OR,
      aux_sym_procedure_call_token1,
  [674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(94), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(96), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(112), 11,
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
  [732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(116), 11,
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
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(120), 11,
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
  [788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(96), 11,
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
  [816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(122), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(126), 10,
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
  [846] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_AND,
    ACTIONS(132), 1,
      anon_sym_OR,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(130), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(128), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(136), 11,
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
  [916] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(96), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(94), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
  [948] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_AND,
    ACTIONS(132), 1,
      anon_sym_OR,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(140), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(138), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(144), 11,
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
  [1018] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_AND,
    ACTIONS(132), 1,
      anon_sym_OR,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(148), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(146), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [1060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(152), 11,
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
  [1088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(126), 11,
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
  [1116] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_AND,
    ACTIONS(132), 1,
      anon_sym_OR,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(156), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(154), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [1158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_EQ,
    ACTIONS(122), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
      aux_sym_procedure_call_token1,
    ACTIONS(126), 10,
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
  [1188] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      aux_sym_keyword_token4,
    ACTIONS(163), 1,
      aux_sym_if_statment_token1,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(28), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(79), 1,
      sym_block,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1237] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      aux_sym_keyword_token4,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(25), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(78), 1,
      sym_block,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1283] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_define_division_token1,
    ACTIONS(167), 1,
      aux_sym_setup_division_token1,
    ACTIONS(169), 1,
      aux_sym_select_division_token1,
    ACTIONS(171), 1,
      aux_sym_sort_division_token1,
    ACTIONS(173), 1,
      aux_sym_letter_division_token1,
    ACTIONS(175), 1,
      aux_sym_print_division_token1,
    ACTIONS(177), 1,
      aux_sym_total_division_token1,
    STATE(142), 2,
      sym_letter_division,
      sym_print_division,
    STATE(49), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [1321] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_define_division_token1,
    ACTIONS(167), 1,
      aux_sym_setup_division_token1,
    ACTIONS(169), 1,
      aux_sym_select_division_token1,
    ACTIONS(171), 1,
      aux_sym_sort_division_token1,
    ACTIONS(173), 1,
      aux_sym_letter_division_token1,
    ACTIONS(175), 1,
      aux_sym_print_division_token1,
    ACTIONS(177), 1,
      aux_sym_total_division_token1,
    STATE(144), 2,
      sym_letter_division,
      sym_print_division,
    STATE(39), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [1359] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_define_division_token1,
    ACTIONS(167), 1,
      aux_sym_setup_division_token1,
    ACTIONS(169), 1,
      aux_sym_select_division_token1,
    ACTIONS(171), 1,
      aux_sym_sort_division_token1,
    ACTIONS(173), 1,
      aux_sym_letter_division_token1,
    ACTIONS(175), 1,
      aux_sym_print_division_token1,
    ACTIONS(177), 1,
      aux_sym_total_division_token1,
    STATE(135), 2,
      sym_letter_division,
      sym_print_division,
    STATE(49), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [1397] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_define_division_token1,
    ACTIONS(167), 1,
      aux_sym_setup_division_token1,
    ACTIONS(169), 1,
      aux_sym_select_division_token1,
    ACTIONS(171), 1,
      aux_sym_sort_division_token1,
    ACTIONS(173), 1,
      aux_sym_letter_division_token1,
    ACTIONS(175), 1,
      aux_sym_print_division_token1,
    ACTIONS(177), 1,
      aux_sym_total_division_token1,
    STATE(135), 2,
      sym_letter_division,
      sym_print_division,
    STATE(37), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [1435] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(76), 1,
      sym_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(152), 1,
      sym__expressions,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1478] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(76), 1,
      sym_expression,
    STATE(145), 1,
      sym__expressions,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LT,
    ACTIONS(120), 14,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
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
  [1544] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(72), 1,
      sym_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1584] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(75), 1,
      sym_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1624] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(70), 1,
      sym_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1664] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(73), 1,
      sym_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1704] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(63), 1,
      sym_expression,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1744] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_define_division_token1,
    ACTIONS(192), 1,
      aux_sym_setup_division_token1,
    ACTIONS(195), 1,
      aux_sym_select_division_token1,
    ACTIONS(198), 1,
      aux_sym_sort_division_token1,
    ACTIONS(203), 1,
      aux_sym_total_division_token1,
    ACTIONS(201), 2,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
    STATE(49), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [1776] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(74), 1,
      sym_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1816] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(71), 1,
      sym_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1856] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_identifier_token1,
    STATE(16), 1,
      sym_expression,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1896] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_expression,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1936] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_expression,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1976] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_expression,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2016] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym_expression,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2056] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(27), 1,
      sym_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2096] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      sym_parenthesized_expression,
    STATE(32), 1,
      sym_string_literal,
    STATE(33), 1,
      sym_expression,
    STATE(34), 1,
      sym_identifier,
    STATE(139), 1,
      sym__lhs_expression,
    STATE(26), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2136] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_string_literal,
    STATE(64), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parenthesized_expression,
    STATE(69), 1,
      sym_expression,
    STATE(150), 1,
      sym__lhs_expression,
    STATE(65), 4,
      sym_include_directive,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LT,
    ACTIONS(112), 12,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
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
  [2197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(144), 12,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
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
  [2218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LT,
    ACTIONS(126), 11,
      aux_sym_keyword_token7,
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
  [2238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(208), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(96), 9,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [2260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LT,
    ACTIONS(158), 1,
      anon_sym_EQ,
    ACTIONS(126), 10,
      aux_sym_keyword_token7,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [2282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LT,
    ACTIONS(136), 11,
      aux_sym_keyword_token7,
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
  [2302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(116), 11,
      aux_sym_keyword_token7,
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
  [2322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LT,
    ACTIONS(210), 1,
      anon_sym_EQ,
    ACTIONS(126), 10,
      aux_sym_keyword_token7,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [2344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(152), 11,
      aux_sym_keyword_token7,
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
  [2364] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(208), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(96), 6,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
  [2390] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(208), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(218), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(96), 4,
      aux_sym_keyword_token7,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [2418] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      anon_sym_AND,
    ACTIONS(222), 1,
      anon_sym_OR,
    ACTIONS(156), 2,
      aux_sym_keyword_token7,
      anon_sym_RPAREN,
    ACTIONS(208), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(218), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [2450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(208), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(96), 7,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
      anon_sym_GT,
  [2474] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      anon_sym_AND,
    ACTIONS(208), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(218), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(96), 3,
      aux_sym_keyword_token7,
      anon_sym_RPAREN,
      anon_sym_OR,
  [2504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(96), 11,
      aux_sym_keyword_token7,
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
  [2524] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      anon_sym_AND,
    ACTIONS(222), 1,
      anon_sym_OR,
    ACTIONS(224), 1,
      aux_sym_keyword_token7,
    ACTIONS(208), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(218), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [2555] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      anon_sym_AND,
    ACTIONS(222), 1,
      anon_sym_OR,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(218), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(118), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(128), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(138), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(228), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_data_type,
    STATE(123), 1,
      sym_string_literal,
    ACTIONS(232), 7,
      aux_sym_data_type_token1,
      aux_sym_data_type_token2,
      aux_sym_data_type_token3,
      aux_sym_data_type_token4,
      aux_sym_data_type_token5,
      aux_sym_data_type_token6,
      aux_sym_data_type_token7,
  [2680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(236), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(240), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(244), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(146), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(110), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(142), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_POUND,
    ACTIONS(248), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_identifier_token1,
      aux_sym_procedure_call_token1,
  [2806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_keyword_token5,
    ACTIONS(254), 1,
      aux_sym_identifier_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_identifier,
    STATE(89), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(121), 2,
      sym_variable_declaration,
      sym_include_directive,
  [2830] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(260), 1,
      aux_sym_keyword_token5,
    ACTIONS(262), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_identifier,
    STATE(91), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(121), 2,
      sym_variable_declaration,
      sym_include_directive,
  [2854] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    ACTIONS(262), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      aux_sym_keyword_token5,
    STATE(138), 1,
      sym_identifier,
    STATE(89), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(121), 2,
      sym_variable_declaration,
      sym_include_directive,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [2904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [2982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym_array_type_token1,
    ACTIONS(286), 1,
      anon_sym_POUND,
    STATE(110), 1,
      sym_array_type,
    ACTIONS(282), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [2999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_identifier_token1,
    STATE(13), 2,
      sym_string_literal,
      sym_identifier,
  [3013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    STATE(143), 2,
      sym_string_literal,
      sym_identifier,
  [3027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(292), 3,
      aux_sym_keyword_token5,
      aux_sym_array_type_token1,
      aux_sym_identifier_token1,
  [3039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_POUND,
    ACTIONS(296), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [3050] = 4,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(304), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
  [3063] = 4,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      sym_unescaped_double_string_fragment,
    STATE(117), 1,
      aux_sym_string_literal_repeat1,
  [3076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(310), 1,
      sym_number,
    STATE(130), 1,
      sym_identifier,
  [3089] = 4,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      sym_unescaped_double_string_fragment,
    STATE(114), 1,
      aux_sym_string_literal_repeat1,
  [3102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_array_type_repeat1,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_POUND,
    ACTIONS(320), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [3126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_array_type_repeat1,
  [3139] = 4,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      sym_unescaped_double_string_fragment,
    STATE(105), 1,
      aux_sym_string_literal_repeat1,
  [3152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(142), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [3163] = 4,
    ACTIONS(302), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
  [3176] = 4,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      sym_unescaped_double_string_fragment,
    STATE(122), 1,
      aux_sym_string_literal_repeat1,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    ACTIONS(336), 1,
      sym_number,
    STATE(147), 1,
      sym_identifier,
  [3202] = 4,
    ACTIONS(302), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
  [3215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_POUND,
    ACTIONS(340), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [3226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_array_type_repeat1,
  [3239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_POUND,
    ACTIONS(114), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [3250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_POUND,
    ACTIONS(349), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [3261] = 4,
    ACTIONS(302), 1,
      sym_unescaped_double_string_fragment,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_POUND,
    ACTIONS(282), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [3285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(110), 2,
      aux_sym_keyword_token5,
      aux_sym_identifier_token1,
  [3296] = 4,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym_unescaped_double_string_fragment,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
  [3309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_string_literal,
  [3327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym_identifier_token1,
    STATE(154), 1,
      sym_identifier,
  [3337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_string_literal,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_keyword_token4,
    STATE(88), 1,
      sym_block,
  [3357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_string_literal,
  [3367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_keyword_token4,
    STATE(82), 1,
      sym_block,
  [3377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_identifier_token1,
    STATE(83), 1,
      sym_identifier,
  [3387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
    STATE(132), 1,
      sym_identifier,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
  [3404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_EQ,
  [3418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_EQ,
  [3425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_EQ,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [3446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_keyword_token5,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [3474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_keyword_token5,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      aux_sym_keyword_token3,
  [3488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_include_directive_token1,
  [3495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_number,
  [3502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_EQ,
  [3509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym_keyword_token5,
  [3516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [3523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [3530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_EQ,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_EQ,
  [3544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_keyword_token5,
  [3551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_number,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_include_directive_token1,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      aux_sym_include_directive_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 234,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 364,
  [SMALL_STATE(13)] = 429,
  [SMALL_STATE(14)] = 494,
  [SMALL_STATE(15)] = 530,
  [SMALL_STATE(16)] = 560,
  [SMALL_STATE(17)] = 596,
  [SMALL_STATE(18)] = 634,
  [SMALL_STATE(19)] = 674,
  [SMALL_STATE(20)] = 704,
  [SMALL_STATE(21)] = 732,
  [SMALL_STATE(22)] = 760,
  [SMALL_STATE(23)] = 788,
  [SMALL_STATE(24)] = 816,
  [SMALL_STATE(25)] = 846,
  [SMALL_STATE(26)] = 888,
  [SMALL_STATE(27)] = 916,
  [SMALL_STATE(28)] = 948,
  [SMALL_STATE(29)] = 990,
  [SMALL_STATE(30)] = 1018,
  [SMALL_STATE(31)] = 1060,
  [SMALL_STATE(32)] = 1088,
  [SMALL_STATE(33)] = 1116,
  [SMALL_STATE(34)] = 1158,
  [SMALL_STATE(35)] = 1188,
  [SMALL_STATE(36)] = 1237,
  [SMALL_STATE(37)] = 1283,
  [SMALL_STATE(38)] = 1321,
  [SMALL_STATE(39)] = 1359,
  [SMALL_STATE(40)] = 1397,
  [SMALL_STATE(41)] = 1435,
  [SMALL_STATE(42)] = 1478,
  [SMALL_STATE(43)] = 1521,
  [SMALL_STATE(44)] = 1544,
  [SMALL_STATE(45)] = 1584,
  [SMALL_STATE(46)] = 1624,
  [SMALL_STATE(47)] = 1664,
  [SMALL_STATE(48)] = 1704,
  [SMALL_STATE(49)] = 1744,
  [SMALL_STATE(50)] = 1776,
  [SMALL_STATE(51)] = 1816,
  [SMALL_STATE(52)] = 1856,
  [SMALL_STATE(53)] = 1896,
  [SMALL_STATE(54)] = 1936,
  [SMALL_STATE(55)] = 1976,
  [SMALL_STATE(56)] = 2016,
  [SMALL_STATE(57)] = 2056,
  [SMALL_STATE(58)] = 2096,
  [SMALL_STATE(59)] = 2136,
  [SMALL_STATE(60)] = 2176,
  [SMALL_STATE(61)] = 2197,
  [SMALL_STATE(62)] = 2218,
  [SMALL_STATE(63)] = 2238,
  [SMALL_STATE(64)] = 2260,
  [SMALL_STATE(65)] = 2282,
  [SMALL_STATE(66)] = 2302,
  [SMALL_STATE(67)] = 2322,
  [SMALL_STATE(68)] = 2344,
  [SMALL_STATE(69)] = 2364,
  [SMALL_STATE(70)] = 2390,
  [SMALL_STATE(71)] = 2418,
  [SMALL_STATE(72)] = 2450,
  [SMALL_STATE(73)] = 2474,
  [SMALL_STATE(74)] = 2504,
  [SMALL_STATE(75)] = 2524,
  [SMALL_STATE(76)] = 2555,
  [SMALL_STATE(77)] = 2586,
  [SMALL_STATE(78)] = 2604,
  [SMALL_STATE(79)] = 2622,
  [SMALL_STATE(80)] = 2640,
  [SMALL_STATE(81)] = 2658,
  [SMALL_STATE(82)] = 2680,
  [SMALL_STATE(83)] = 2698,
  [SMALL_STATE(84)] = 2716,
  [SMALL_STATE(85)] = 2734,
  [SMALL_STATE(86)] = 2752,
  [SMALL_STATE(87)] = 2770,
  [SMALL_STATE(88)] = 2788,
  [SMALL_STATE(89)] = 2806,
  [SMALL_STATE(90)] = 2830,
  [SMALL_STATE(91)] = 2854,
  [SMALL_STATE(92)] = 2878,
  [SMALL_STATE(93)] = 2891,
  [SMALL_STATE(94)] = 2904,
  [SMALL_STATE(95)] = 2917,
  [SMALL_STATE(96)] = 2930,
  [SMALL_STATE(97)] = 2943,
  [SMALL_STATE(98)] = 2956,
  [SMALL_STATE(99)] = 2969,
  [SMALL_STATE(100)] = 2982,
  [SMALL_STATE(101)] = 2999,
  [SMALL_STATE(102)] = 3013,
  [SMALL_STATE(103)] = 3027,
  [SMALL_STATE(104)] = 3039,
  [SMALL_STATE(105)] = 3050,
  [SMALL_STATE(106)] = 3063,
  [SMALL_STATE(107)] = 3076,
  [SMALL_STATE(108)] = 3089,
  [SMALL_STATE(109)] = 3102,
  [SMALL_STATE(110)] = 3115,
  [SMALL_STATE(111)] = 3126,
  [SMALL_STATE(112)] = 3139,
  [SMALL_STATE(113)] = 3152,
  [SMALL_STATE(114)] = 3163,
  [SMALL_STATE(115)] = 3176,
  [SMALL_STATE(116)] = 3189,
  [SMALL_STATE(117)] = 3202,
  [SMALL_STATE(118)] = 3215,
  [SMALL_STATE(119)] = 3226,
  [SMALL_STATE(120)] = 3239,
  [SMALL_STATE(121)] = 3250,
  [SMALL_STATE(122)] = 3261,
  [SMALL_STATE(123)] = 3274,
  [SMALL_STATE(124)] = 3285,
  [SMALL_STATE(125)] = 3296,
  [SMALL_STATE(126)] = 3309,
  [SMALL_STATE(127)] = 3317,
  [SMALL_STATE(128)] = 3327,
  [SMALL_STATE(129)] = 3337,
  [SMALL_STATE(130)] = 3347,
  [SMALL_STATE(131)] = 3357,
  [SMALL_STATE(132)] = 3367,
  [SMALL_STATE(133)] = 3377,
  [SMALL_STATE(134)] = 3387,
  [SMALL_STATE(135)] = 3397,
  [SMALL_STATE(136)] = 3404,
  [SMALL_STATE(137)] = 3411,
  [SMALL_STATE(138)] = 3418,
  [SMALL_STATE(139)] = 3425,
  [SMALL_STATE(140)] = 3432,
  [SMALL_STATE(141)] = 3439,
  [SMALL_STATE(142)] = 3446,
  [SMALL_STATE(143)] = 3453,
  [SMALL_STATE(144)] = 3460,
  [SMALL_STATE(145)] = 3467,
  [SMALL_STATE(146)] = 3474,
  [SMALL_STATE(147)] = 3481,
  [SMALL_STATE(148)] = 3488,
  [SMALL_STATE(149)] = 3495,
  [SMALL_STATE(150)] = 3502,
  [SMALL_STATE(151)] = 3509,
  [SMALL_STATE(152)] = 3516,
  [SMALL_STATE(153)] = 3523,
  [SMALL_STATE(154)] = 3530,
  [SMALL_STATE(155)] = 3537,
  [SMALL_STATE(156)] = 3544,
  [SMALL_STATE(157)] = 3551,
  [SMALL_STATE(158)] = 3558,
  [SMALL_STATE(159)] = 3565,
  [SMALL_STATE(160)] = 3572,
  [SMALL_STATE(161)] = 3579,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(128),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(45),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(134),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(42),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(106),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(22),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(32),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(159),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(133),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keywords, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keywords, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statment, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statment, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statment, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statment, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__lhs_expression, 1), REDUCE(sym_primary_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(90),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(146),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(151),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(156),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(22),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(148),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_division, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_division, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_division, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(149),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_statement, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(125),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter_division, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_division, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_division, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
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
