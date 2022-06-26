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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 465
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 248
#define ALIAS_COUNT 0
#define TOKEN_COUNT 192
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_keyword_token1 = 1,
  aux_sym_keyword_token2 = 2,
  aux_sym_keyword_token3 = 3,
  aux_sym_keyword_token4 = 4,
  aux_sym_keyword_token5 = 5,
  aux_sym_keyword_token6 = 6,
  aux_sym_keyword_token7 = 7,
  aux_sym_keyword_token8 = 8,
  aux_sym_keyword_token9 = 9,
  aux_sym_keyword_token10 = 10,
  aux_sym_keyword_token11 = 11,
  aux_sym_keyword_token12 = 12,
  aux_sym_keyword_token13 = 13,
  aux_sym_keyword_token14 = 14,
  aux_sym_keyword_token15 = 15,
  aux_sym_keyword_token16 = 16,
  aux_sym_keyword_token17 = 17,
  aux_sym_keyword_token18 = 18,
  aux_sym_keyword_token19 = 19,
  aux_sym_keyword_token20 = 20,
  aux_sym_target_division_token1 = 21,
  anon_sym_EQ = 22,
  aux_sym_define_division_token1 = 23,
  aux_sym_setup_division_token1 = 24,
  aux_sym_select_division_token1 = 25,
  aux_sym_sort_division_token1 = 26,
  aux_sym_letter_division_token1 = 27,
  aux_sym_print_division_token1 = 28,
  aux_sym_print_division_token2 = 29,
  aux_sym_total_division_token1 = 30,
  aux_sym_record_type_token1 = 31,
  aux_sym_record_type_token2 = 32,
  aux_sym_record_type_token3 = 33,
  aux_sym_record_type_token4 = 34,
  aux_sym_record_type_token5 = 35,
  aux_sym_record_type_token6 = 36,
  aux_sym_record_type_token7 = 37,
  aux_sym_record_type_token8 = 38,
  aux_sym_record_type_token9 = 39,
  aux_sym_record_type_token10 = 40,
  aux_sym_record_type_token11 = 41,
  aux_sym_record_type_token12 = 42,
  aux_sym_record_type_token13 = 43,
  aux_sym_record_type_token14 = 44,
  aux_sym_record_type_token15 = 45,
  aux_sym_record_type_token16 = 46,
  aux_sym_record_type_token17 = 47,
  aux_sym_record_type_token18 = 48,
  aux_sym_record_type_token19 = 49,
  aux_sym_record_type_token20 = 50,
  aux_sym_record_type_token21 = 51,
  aux_sym_record_type_token22 = 52,
  aux_sym_record_type_token23 = 53,
  aux_sym_record_type_token24 = 54,
  aux_sym_record_type_token25 = 55,
  aux_sym_record_type_token26 = 56,
  aux_sym_record_type_token27 = 57,
  aux_sym_record_type_token28 = 58,
  aux_sym_record_type_token29 = 59,
  aux_sym_record_type_token30 = 60,
  aux_sym_record_type_token31 = 61,
  aux_sym_record_type_token32 = 62,
  aux_sym_record_type_token33 = 63,
  aux_sym_record_type_token34 = 64,
  aux_sym_record_type_token35 = 65,
  aux_sym_record_type_token36 = 66,
  aux_sym_record_type_token37 = 67,
  aux_sym_record_type_token38 = 68,
  aux_sym_record_type_token39 = 69,
  aux_sym_record_type_token40 = 70,
  aux_sym_record_type_token41 = 71,
  aux_sym_record_type_token42 = 72,
  aux_sym_record_type_token43 = 73,
  aux_sym_record_type_token44 = 74,
  aux_sym_record_type_token45 = 75,
  aux_sym_record_type_token46 = 76,
  aux_sym_record_type_token47 = 77,
  aux_sym_record_type_token48 = 78,
  aux_sym_record_type_token49 = 79,
  aux_sym_record_type_token50 = 80,
  aux_sym_record_type_token51 = 81,
  aux_sym_record_type_token52 = 82,
  aux_sym_record_type_token53 = 83,
  aux_sym_record_type_token54 = 84,
  aux_sym_record_type_token55 = 85,
  aux_sym_record_type_token56 = 86,
  aux_sym_record_type_token57 = 87,
  aux_sym_record_type_token58 = 88,
  aux_sym_record_type_token59 = 89,
  aux_sym_record_type_token60 = 90,
  aux_sym_record_type_token61 = 91,
  aux_sym_record_type_token62 = 92,
  aux_sym_record_type_token63 = 93,
  aux_sym_record_type_token64 = 94,
  aux_sym_record_type_token65 = 95,
  aux_sym_record_type_token66 = 96,
  aux_sym_record_type_token67 = 97,
  aux_sym_record_type_token68 = 98,
  aux_sym_record_type_token69 = 99,
  aux_sym_record_type_token70 = 100,
  aux_sym_record_type_token71 = 101,
  aux_sym_record_type_token72 = 102,
  aux_sym_record_type_token73 = 103,
  aux_sym_record_type_token74 = 104,
  aux_sym_record_type_token75 = 105,
  aux_sym_record_type_token76 = 106,
  aux_sym_record_type_token77 = 107,
  aux_sym_record_type_token78 = 108,
  aux_sym_record_type_token79 = 109,
  aux_sym_record_type_token80 = 110,
  aux_sym_record_type_token81 = 111,
  aux_sym_record_type_token82 = 112,
  aux_sym_record_type_token83 = 113,
  aux_sym_record_type_token84 = 114,
  aux_sym_record_type_token85 = 115,
  aux_sym_record_type_token86 = 116,
  aux_sym_record_type_token87 = 117,
  aux_sym_record_type_token88 = 118,
  aux_sym_record_type_token89 = 119,
  aux_sym_record_type_token90 = 120,
  aux_sym_record_type_token91 = 121,
  aux_sym_record_type_token92 = 122,
  aux_sym_record_type_token93 = 123,
  aux_sym_record_type_token94 = 124,
  aux_sym_record_type_token95 = 125,
  aux_sym_record_type_token96 = 126,
  aux_sym_record_type_token97 = 127,
  aux_sym_record_type_token98 = 128,
  aux_sym_record_type_token99 = 129,
  aux_sym_record_type_token100 = 130,
  aux_sym_record_type_token101 = 131,
  aux_sym_record_type_token102 = 132,
  aux_sym_record_type_token103 = 133,
  aux_sym_record_type_token104 = 134,
  aux_sym_record_type_token105 = 135,
  aux_sym_record_type_token106 = 136,
  aux_sym_record_type_token107 = 137,
  aux_sym_record_type_token108 = 138,
  aux_sym_record_type_token109 = 139,
  aux_sym_record_type_token110 = 140,
  aux_sym_record_type_token111 = 141,
  aux_sym_data_type_token1 = 142,
  aux_sym_data_type_token2 = 143,
  aux_sym_data_type_token3 = 144,
  aux_sym_data_type_token4 = 145,
  aux_sym_data_type_token5 = 146,
  aux_sym_array_type_token1 = 147,
  anon_sym_LPAREN = 148,
  anon_sym_COMMA = 149,
  anon_sym_RPAREN = 150,
  anon_sym_DQUOTE = 151,
  aux_sym_string_literal_token1 = 152,
  aux_sym__identifier_token1 = 153,
  sym_number = 154,
  sym_money = 155,
  sym_date = 156,
  sym_rate = 157,
  anon_sym_POUND = 158,
  aux_sym_include_statement_token1 = 159,
  anon_sym_COLON = 160,
  aux_sym_special_keywords_token1 = 161,
  aux_sym_special_keywords_token2 = 162,
  aux_sym_special_keywords_token3 = 163,
  aux_sym_special_keywords_token4 = 164,
  aux_sym_special_keywords_token5 = 165,
  aux_sym_special_keywords_token6 = 166,
  aux_sym_special_keywords_token7 = 167,
  aux_sym_special_keywords_token8 = 168,
  aux_sym_special_keywords_token9 = 169,
  aux_sym_special_keywords_token10 = 170,
  aux_sym_special_keywords_token11 = 171,
  aux_sym_special_keywords_token12 = 172,
  aux_sym_special_keywords_token13 = 173,
  aux_sym_special_keywords_token14 = 174,
  aux_sym_special_keywords_token15 = 175,
  aux_sym_special_keywords_token16 = 176,
  aux_sym_special_keywords_token17 = 177,
  aux_sym_special_keywords_token18 = 178,
  aux_sym_special_keywords_token19 = 179,
  sym_comment = 180,
  anon_sym_AND = 181,
  anon_sym_OR = 182,
  anon_sym_PLUS = 183,
  anon_sym_DASH = 184,
  anon_sym_STAR = 185,
  anon_sym_SLASH = 186,
  anon_sym_LT_GT = 187,
  anon_sym_GT = 188,
  anon_sym_LT = 189,
  aux_sym_for_statement_token1 = 190,
  aux_sym_procedure_definition_token1 = 191,
  sym_source_file = 192,
  sym_keyword = 193,
  sym__optional_divisions = 194,
  sym_target_division = 195,
  sym_define_division = 196,
  sym_define_statement = 197,
  sym_setup_division = 198,
  sym_select_division = 199,
  sym_sort_division = 200,
  sym_letter_division = 201,
  sym_print_division = 202,
  sym_total_division = 203,
  sym_record_type = 204,
  sym_data_type = 205,
  sym_array_type = 206,
  sym_string_literal = 207,
  sym__identifier = 208,
  sym_identifier = 209,
  sym__array_identifier = 210,
  sym_variable_declaration = 211,
  sym_include_statement = 212,
  sym_database_field = 213,
  sym_special_keywords = 214,
  sym_special_function = 215,
  sym__datevalue = 216,
  sym__rate = 217,
  sym__money = 218,
  sym__value = 219,
  sym__format = 220,
  sym__segment = 221,
  sym__charactersearch = 222,
  sym__length = 223,
  sym__fileopen = 224,
  sym__filereadline = 225,
  sym_expression = 226,
  sym_assignment_expression = 227,
  sym__lhs_expression = 228,
  sym_parenthesized_expression = 229,
  sym_binary_expression = 230,
  sym_primary_expression = 231,
  sym_for_statement = 232,
  sym_while_statement = 233,
  sym_if_statement = 234,
  sym_if_statement_no_block = 235,
  sym_if_else_block = 236,
  sym_if_else_no_block = 237,
  sym_if_statement_block = 238,
  sym_statement = 239,
  sym_procedure_definition = 240,
  sym_procedure_call = 241,
  aux_sym_source_file_repeat1 = 242,
  aux_sym_source_file_repeat2 = 243,
  aux_sym_source_file_repeat3 = 244,
  aux_sym_define_division_repeat1 = 245,
  aux_sym_array_type_repeat1 = 246,
  aux_sym__array_identifier_repeat1 = 247,
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
  [aux_sym_keyword_token8] = "keyword_token8",
  [aux_sym_keyword_token9] = "keyword_token9",
  [aux_sym_keyword_token10] = "keyword_token10",
  [aux_sym_keyword_token11] = "keyword_token11",
  [aux_sym_keyword_token12] = "keyword_token12",
  [aux_sym_keyword_token13] = "keyword_token13",
  [aux_sym_keyword_token14] = "keyword_token14",
  [aux_sym_keyword_token15] = "keyword_token15",
  [aux_sym_keyword_token16] = "keyword_token16",
  [aux_sym_keyword_token17] = "keyword_token17",
  [aux_sym_keyword_token18] = "keyword_token18",
  [aux_sym_keyword_token19] = "keyword_token19",
  [aux_sym_keyword_token20] = "keyword_token20",
  [aux_sym_target_division_token1] = "target_division_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_define_division_token1] = "define_division_token1",
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
  [aux_sym_array_type_token1] = "array_type_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [sym_number] = "number",
  [sym_money] = "money",
  [sym_date] = "date",
  [sym_rate] = "rate",
  [anon_sym_POUND] = "#",
  [aux_sym_include_statement_token1] = "include_statement_token1",
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
  [sym_include_statement] = "include_statement",
  [sym_database_field] = "database_field",
  [sym_special_keywords] = "special_keywords",
  [sym_special_function] = "special_function",
  [sym__datevalue] = "_datevalue",
  [sym__rate] = "_rate",
  [sym__money] = "_money",
  [sym__value] = "_value",
  [sym__format] = "_format",
  [sym__segment] = "_segment",
  [sym__charactersearch] = "_charactersearch",
  [sym__length] = "_length",
  [sym__fileopen] = "_fileopen",
  [sym__filereadline] = "_filereadline",
  [sym_expression] = "expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym__lhs_expression] = "_lhs_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_if_statement] = "if_statement",
  [sym_if_statement_no_block] = "if_statement_no_block",
  [sym_if_else_block] = "if_else_block",
  [sym_if_else_no_block] = "if_else_no_block",
  [sym_if_statement_block] = "if_statement_block",
  [sym_statement] = "statement",
  [sym_procedure_definition] = "procedure_definition",
  [sym_procedure_call] = "procedure_call",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_define_division_repeat1] = "define_division_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
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
  [aux_sym_keyword_token7] = aux_sym_keyword_token7,
  [aux_sym_keyword_token8] = aux_sym_keyword_token8,
  [aux_sym_keyword_token9] = aux_sym_keyword_token9,
  [aux_sym_keyword_token10] = aux_sym_keyword_token10,
  [aux_sym_keyword_token11] = aux_sym_keyword_token11,
  [aux_sym_keyword_token12] = aux_sym_keyword_token12,
  [aux_sym_keyword_token13] = aux_sym_keyword_token13,
  [aux_sym_keyword_token14] = aux_sym_keyword_token14,
  [aux_sym_keyword_token15] = aux_sym_keyword_token15,
  [aux_sym_keyword_token16] = aux_sym_keyword_token16,
  [aux_sym_keyword_token17] = aux_sym_keyword_token17,
  [aux_sym_keyword_token18] = aux_sym_keyword_token18,
  [aux_sym_keyword_token19] = aux_sym_keyword_token19,
  [aux_sym_keyword_token20] = aux_sym_keyword_token20,
  [aux_sym_target_division_token1] = aux_sym_target_division_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_define_division_token1] = aux_sym_define_division_token1,
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
  [aux_sym_array_type_token1] = aux_sym_array_type_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [sym_number] = sym_number,
  [sym_money] = sym_money,
  [sym_date] = sym_date,
  [sym_rate] = sym_rate,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_include_statement_token1] = aux_sym_include_statement_token1,
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
  [sym_include_statement] = sym_include_statement,
  [sym_database_field] = sym_database_field,
  [sym_special_keywords] = sym_special_keywords,
  [sym_special_function] = sym_special_function,
  [sym__datevalue] = sym__datevalue,
  [sym__rate] = sym__rate,
  [sym__money] = sym__money,
  [sym__value] = sym__value,
  [sym__format] = sym__format,
  [sym__segment] = sym__segment,
  [sym__charactersearch] = sym__charactersearch,
  [sym__length] = sym__length,
  [sym__fileopen] = sym__fileopen,
  [sym__filereadline] = sym__filereadline,
  [sym_expression] = sym_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym__lhs_expression] = sym__lhs_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_if_statement_no_block] = sym_if_statement_no_block,
  [sym_if_else_block] = sym_if_else_block,
  [sym_if_else_no_block] = sym_if_else_no_block,
  [sym_if_statement_block] = sym_if_statement_block,
  [sym_statement] = sym_statement,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_procedure_call] = sym_procedure_call,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_define_division_repeat1] = aux_sym_define_division_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
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
  [aux_sym_keyword_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token20] = {
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
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_money] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_rate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_statement_token1] = {
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
    .visible = false,
    .named = true,
    .supertype = true,
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
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_database_field] = {
    .visible = true,
    .named = true,
  },
  [sym_special_keywords] = {
    .visible = true,
    .named = true,
  },
  [sym_special_function] = {
    .visible = true,
    .named = true,
  },
  [sym__datevalue] = {
    .visible = false,
    .named = true,
  },
  [sym__rate] = {
    .visible = false,
    .named = true,
  },
  [sym__money] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__format] = {
    .visible = false,
    .named = true,
  },
  [sym__segment] = {
    .visible = false,
    .named = true,
  },
  [sym__charactersearch] = {
    .visible = false,
    .named = true,
  },
  [sym__length] = {
    .visible = false,
    .named = true,
  },
  [sym__fileopen] = {
    .visible = false,
    .named = true,
  },
  [sym__filereadline] = {
    .visible = false,
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
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement_no_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_else_no_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement_block] = {
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
  [aux_sym__array_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_condition = 1,
  field_initializer = 2,
  field_left = 3,
  field_operator = 4,
  field_right = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 1},
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
    {field_condition, 1},
  [6] =
    {field_initializer, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 13,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 24,
  [31] = 25,
  [32] = 28,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 23,
  [38] = 36,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 40,
  [43] = 20,
  [44] = 27,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 53,
  [58] = 51,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 50,
  [64] = 55,
  [65] = 52,
  [66] = 54,
  [67] = 61,
  [68] = 59,
  [69] = 47,
  [70] = 62,
  [71] = 56,
  [72] = 72,
  [73] = 53,
  [74] = 72,
  [75] = 75,
  [76] = 72,
  [77] = 49,
  [78] = 55,
  [79] = 50,
  [80] = 59,
  [81] = 61,
  [82] = 51,
  [83] = 60,
  [84] = 54,
  [85] = 52,
  [86] = 62,
  [87] = 56,
  [88] = 75,
  [89] = 49,
  [90] = 75,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 93,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 100,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 97,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 101,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 99,
  [153] = 98,
  [154] = 144,
  [155] = 120,
  [156] = 121,
  [157] = 123,
  [158] = 125,
  [159] = 130,
  [160] = 131,
  [161] = 132,
  [162] = 134,
  [163] = 135,
  [164] = 143,
  [165] = 136,
  [166] = 138,
  [167] = 137,
  [168] = 139,
  [169] = 145,
  [170] = 140,
  [171] = 146,
  [172] = 141,
  [173] = 147,
  [174] = 142,
  [175] = 149,
  [176] = 118,
  [177] = 117,
  [178] = 119,
  [179] = 151,
  [180] = 148,
  [181] = 150,
  [182] = 104,
  [183] = 129,
  [184] = 128,
  [185] = 103,
  [186] = 105,
  [187] = 126,
  [188] = 124,
  [189] = 122,
  [190] = 108,
  [191] = 109,
  [192] = 106,
  [193] = 110,
  [194] = 102,
  [195] = 111,
  [196] = 112,
  [197] = 113,
  [198] = 114,
  [199] = 116,
  [200] = 99,
  [201] = 98,
  [202] = 202,
  [203] = 100,
  [204] = 101,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 101,
  [211] = 100,
  [212] = 99,
  [213] = 98,
  [214] = 209,
  [215] = 97,
  [216] = 208,
  [217] = 202,
  [218] = 206,
  [219] = 207,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 98,
  [224] = 101,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 100,
  [230] = 99,
  [231] = 147,
  [232] = 146,
  [233] = 97,
  [234] = 145,
  [235] = 143,
  [236] = 132,
  [237] = 148,
  [238] = 131,
  [239] = 130,
  [240] = 144,
  [241] = 129,
  [242] = 110,
  [243] = 109,
  [244] = 139,
  [245] = 104,
  [246] = 140,
  [247] = 142,
  [248] = 149,
  [249] = 117,
  [250] = 151,
  [251] = 119,
  [252] = 138,
  [253] = 120,
  [254] = 121,
  [255] = 108,
  [256] = 126,
  [257] = 150,
  [258] = 102,
  [259] = 111,
  [260] = 112,
  [261] = 261,
  [262] = 113,
  [263] = 116,
  [264] = 124,
  [265] = 128,
  [266] = 103,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 268,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 267,
  [275] = 271,
  [276] = 269,
  [277] = 277,
  [278] = 272,
  [279] = 267,
  [280] = 272,
  [281] = 273,
  [282] = 282,
  [283] = 273,
  [284] = 277,
  [285] = 271,
  [286] = 269,
  [287] = 287,
  [288] = 282,
  [289] = 282,
  [290] = 277,
  [291] = 287,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 302,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 304,
  [310] = 310,
  [311] = 302,
  [312] = 312,
  [313] = 313,
  [314] = 313,
  [315] = 304,
  [316] = 310,
  [317] = 312,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 307,
  [323] = 305,
  [324] = 324,
  [325] = 319,
  [326] = 308,
  [327] = 320,
  [328] = 310,
  [329] = 308,
  [330] = 330,
  [331] = 312,
  [332] = 305,
  [333] = 321,
  [334] = 306,
  [335] = 313,
  [336] = 319,
  [337] = 306,
  [338] = 330,
  [339] = 307,
  [340] = 321,
  [341] = 320,
  [342] = 330,
  [343] = 343,
  [344] = 344,
  [345] = 344,
  [346] = 346,
  [347] = 343,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 349,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 356,
  [358] = 353,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 353,
  [364] = 364,
  [365] = 365,
  [366] = 352,
  [367] = 352,
  [368] = 356,
  [369] = 356,
  [370] = 370,
  [371] = 353,
  [372] = 97,
  [373] = 138,
  [374] = 352,
  [375] = 353,
  [376] = 352,
  [377] = 377,
  [378] = 356,
  [379] = 379,
  [380] = 379,
  [381] = 381,
  [382] = 379,
  [383] = 379,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 385,
  [389] = 389,
  [390] = 390,
  [391] = 385,
  [392] = 392,
  [393] = 393,
  [394] = 387,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 392,
  [400] = 400,
  [401] = 395,
  [402] = 396,
  [403] = 396,
  [404] = 387,
  [405] = 390,
  [406] = 389,
  [407] = 386,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 393,
  [414] = 414,
  [415] = 385,
  [416] = 396,
  [417] = 387,
  [418] = 392,
  [419] = 387,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 385,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 421,
  [428] = 422,
  [429] = 424,
  [430] = 430,
  [431] = 426,
  [432] = 432,
  [433] = 421,
  [434] = 434,
  [435] = 435,
  [436] = 422,
  [437] = 393,
  [438] = 438,
  [439] = 439,
  [440] = 434,
  [441] = 441,
  [442] = 442,
  [443] = 424,
  [444] = 430,
  [445] = 435,
  [446] = 446,
  [447] = 430,
  [448] = 435,
  [449] = 446,
  [450] = 420,
  [451] = 451,
  [452] = 386,
  [453] = 453,
  [454] = 389,
  [455] = 398,
  [456] = 456,
  [457] = 451,
  [458] = 451,
  [459] = 395,
  [460] = 426,
  [461] = 438,
  [462] = 438,
  [463] = 446,
  [464] = 390,
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

static inline bool aux_sym__identifier_token1_character_set_2(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
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
      if (eof) ADVANCE(1066);
      if (lookahead == '"') ADVANCE(1323);
      if (lookahead == '#') ADVANCE(1918);
      if (lookahead == '$') ADVANCE(1045);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ')') ADVANCE(1322);
      if (lookahead == '*') ADVANCE(1949);
      if (lookahead == '+') ADVANCE(1946);
      if (lookahead == ',') ADVANCE(1321);
      if (lookahead == '-') ADVANCE(1948);
      if (lookahead == '.') ADVANCE(1047);
      if (lookahead == '/') ADVANCE(1950);
      if (lookahead == '0') ADVANCE(1899);
      if (lookahead == ':') ADVANCE(1920);
      if (lookahead == '<') ADVANCE(1953);
      if (lookahead == '=') ADVANCE(1106);
      if (lookahead == '>') ADVANCE(1952);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(448);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(532);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(701);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(873);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(358);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1902);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1955);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(940);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1323);
      if (lookahead == '#') ADVANCE(1918);
      if (lookahead == '$') ADVANCE(1893);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1949);
      if (lookahead == '+') ADVANCE(1946);
      if (lookahead == '-') ADVANCE(1948);
      if (lookahead == '.') ADVANCE(1047);
      if (lookahead == '/') ADVANCE(1950);
      if (lookahead == '0') ADVANCE(1899);
      if (lookahead == '<') ADVANCE(1953);
      if (lookahead == '=') ADVANCE(1106);
      if (lookahead == '>') ADVANCE(1952);
      if (lookahead == 'A') ADVANCE(1330);
      if (lookahead == 'O') ADVANCE(1331);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1378);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1634);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1590);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1537);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1481);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1725);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1479);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1761);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1473);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1564);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1360);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1563);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1902);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1894);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(1323);
      if (lookahead == '#') ADVANCE(1918);
      if (lookahead == '$') ADVANCE(1893);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(1047);
      if (lookahead == '0') ADVANCE(1899);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1634);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1590);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1537);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1510);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1725);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1535);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1565);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1360);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1563);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1902);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1894);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1323);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1046);
      if (lookahead == '.') ADVANCE(1047);
      if (lookahead == '0') ADVANCE(1903);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1904);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1894);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1918);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1796);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1677);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1894);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1918);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1677);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(7)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1894);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1911);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(1893);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(1047);
      if (lookahead == '0') ADVANCE(1899);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1388);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1332);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1333);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1448);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1538);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1638);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1605);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1704);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1651);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1690);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1386);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1539);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1334);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1449);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1339);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1766);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1806);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1450);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1476);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1902);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1894);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1917);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(1917);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(1917);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(1916);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(1916);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(1916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1052);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ')') ADVANCE(1322);
      if (lookahead == '*') ADVANCE(1949);
      if (lookahead == '+') ADVANCE(1945);
      if (lookahead == ',') ADVANCE(1321);
      if (lookahead == '-') ADVANCE(1947);
      if (lookahead == '/') ADVANCE(1950);
      if (lookahead == '<') ADVANCE(1953);
      if (lookahead == '=') ADVANCE(1106);
      if (lookahead == '>') ADVANCE(1952);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(328);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(758);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(925);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(513);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1053);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(780);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(1058);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(1055);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(1941);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(803);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(805);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(1943);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(1943);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(1940);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '{') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1063);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(1894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1046);
      if (lookahead == '.') ADVANCE(1047);
      if (lookahead == '0') ADVANCE(1903);
      if (lookahead == ':') ADVANCE(1920);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(306);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(582);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(532);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(714);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(636);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(750);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(873);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(359);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1904);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1911);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(926);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1021);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(875);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(724);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(724);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1012);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(938);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(812);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(589);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1012);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(938);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1219);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1217);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1031);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1125);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1191);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(801);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(312);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1021);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(929);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1073);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(666);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(987);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(799);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(951);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1954);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(799);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1954);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1026);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(999);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(942);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(898);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(904);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(906);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(480);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(935);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(477);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(477);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(825);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(875);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(941);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(944);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(944);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(946);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(945);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(973);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(983);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(699);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 137:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(814);
      END_STATE();
    case 138:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(814);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(783);
      END_STATE();
    case 139:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(994);
      END_STATE();
    case 140:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(378);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(820);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(473);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(696);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(892);
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(811);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1019);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 142:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(811);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 143:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1005);
      END_STATE();
    case 144:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 146:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 147:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 148:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(475);
      END_STATE();
    case 149:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(338);
      END_STATE();
    case 150:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(340);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(803);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(805);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1922);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(66);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1236);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(803);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1019);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(774);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(526);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(862);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1036);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(543);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(362);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(810);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1006);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(725);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(326);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(456);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(785);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(907);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(949);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(950);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(953);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(958);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1922);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(954);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(839);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(970);
      END_STATE();
    case 202:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 203:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 205:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(977);
      END_STATE();
    case 206:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 207:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 208:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 209:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(979);
      END_STATE();
    case 210:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(980);
      END_STATE();
    case 211:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(981);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1075);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1142);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1209);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1930);
      END_STATE();
    case 217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1211);
      END_STATE();
    case 218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1162);
      END_STATE();
    case 219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1156);
      END_STATE();
    case 220:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1312);
      END_STATE();
    case 221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1924);
      END_STATE();
    case 222:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1926);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1007);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1008);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(998);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      END_STATE();
    case 229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1010);
      END_STATE();
    case 230:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1001);
      END_STATE();
    case 231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(716);
      END_STATE();
    case 233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(778);
      END_STATE();
    case 234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(722);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 240:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 241:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 242:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 243:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 244:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 245:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 246:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 247:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 248:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 249:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(469);
      END_STATE();
    case 250:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 251:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(829);
      END_STATE();
    case 252:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 253:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 254:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 255:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 256:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 257:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 258:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 259:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 260:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      END_STATE();
    case 261:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 262:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      END_STATE();
    case 263:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      END_STATE();
    case 264:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 265:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(578);
      END_STATE();
    case 266:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1029);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(877);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1314);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1315);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1238);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1242);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1282);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1297);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1257);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1278);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1098);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1259);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1919);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1215);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1273);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1263);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1267);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1935);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1925);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1240);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1115);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1933);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1230);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1089);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1284);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1921);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(997);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 323:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1073);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 334:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 342:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 356:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 357:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(955);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(877);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 358:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(488);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(634);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 359:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(822);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 363:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(976);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 391:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 393:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 395:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 396:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1071);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 397:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(902);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(876);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 398:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(902);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 399:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      END_STATE();
    case 400:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(463);
      END_STATE();
    case 401:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(704);
      END_STATE();
    case 402:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      END_STATE();
    case 403:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(485);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 404:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(706);
      END_STATE();
    case 405:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(383);
      END_STATE();
    case 406:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(707);
      END_STATE();
    case 407:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      END_STATE();
    case 408:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(708);
      END_STATE();
    case 409:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(520);
      END_STATE();
    case 410:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(709);
      END_STATE();
    case 411:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(710);
      END_STATE();
    case 412:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(711);
      END_STATE();
    case 413:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(712);
      END_STATE();
    case 414:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(713);
      END_STATE();
    case 415:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(447);
      END_STATE();
    case 416:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(476);
      END_STATE();
    case 417:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(737);
      END_STATE();
    case 418:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      END_STATE();
    case 419:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(521);
      END_STATE();
    case 420:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1285);
      END_STATE();
    case 421:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1138);
      END_STATE();
    case 422:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1148);
      END_STATE();
    case 423:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1931);
      END_STATE();
    case 424:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1140);
      END_STATE();
    case 425:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(864);
      END_STATE();
    case 426:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(930);
      END_STATE();
    case 427:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(613);
      END_STATE();
    case 428:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(337);
      END_STATE();
    case 429:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 430:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 431:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 432:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(599);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(988);
      END_STATE();
    case 433:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(602);
      END_STATE();
    case 434:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(561);
      END_STATE();
    case 435:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1096);
      END_STATE();
    case 436:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1171);
      END_STATE();
    case 437:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(483);
      END_STATE();
    case 438:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(728);
      END_STATE();
    case 439:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 440:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(753);
      END_STATE();
    case 441:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 442:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(740);
      END_STATE();
    case 443:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(744);
      END_STATE();
    case 444:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 445:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1041);
      END_STATE();
    case 446:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1013);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 448:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(721);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(437);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 449:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 452:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 455:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 457:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 458:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 461:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(936);
      END_STATE();
    case 462:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 463:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 464:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 465:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 466:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 467:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 468:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 469:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(910);
      END_STATE();
    case 470:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(927);
      END_STATE();
    case 471:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      END_STATE();
    case 472:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 473:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(937);
      END_STATE();
    case 474:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(921);
      END_STATE();
    case 475:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(984);
      END_STATE();
    case 476:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 477:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 478:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1016);
      END_STATE();
    case 479:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1018);
      END_STATE();
    case 480:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 481:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 482:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 483:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(881);
      END_STATE();
    case 484:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1014);
      END_STATE();
    case 485:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      END_STATE();
    case 486:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 487:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      END_STATE();
    case 488:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 489:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      END_STATE();
    case 490:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      END_STATE();
    case 491:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 492:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 493:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 494:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 495:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      END_STATE();
    case 496:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(691);
      END_STATE();
    case 497:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 498:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 499:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(945);
      END_STATE();
    case 500:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 501:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 502:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 503:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(947);
      END_STATE();
    case 504:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 505:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      END_STATE();
    case 506:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 507:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      END_STATE();
    case 508:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 509:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 510:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(962);
      END_STATE();
    case 511:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 512:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(897);
      END_STATE();
    case 513:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 514:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 515:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 516:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 517:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 518:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 519:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      END_STATE();
    case 520:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 521:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 522:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(982);
      END_STATE();
    case 523:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1151);
      END_STATE();
    case 524:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(577);
      END_STATE();
    case 525:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 526:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 527:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(472);
      END_STATE();
    case 528:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(844);
      END_STATE();
    case 529:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(989);
      END_STATE();
    case 530:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 531:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(579);
      END_STATE();
    case 532:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 533:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 534:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1182);
      END_STATE();
    case 535:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1081);
      END_STATE();
    case 536:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1252);
      END_STATE();
    case 537:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1184);
      END_STATE();
    case 538:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 539:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1154);
      END_STATE();
    case 540:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1222);
      END_STATE();
    case 541:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1119);
      END_STATE();
    case 542:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 543:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(996);
      END_STATE();
    case 544:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 545:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(882);
      END_STATE();
    case 546:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(882);
      END_STATE();
    case 547:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(535);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 548:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1039);
      END_STATE();
    case 549:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 550:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 551:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 552:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 553:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      END_STATE();
    case 554:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(988);
      END_STATE();
    case 555:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      END_STATE();
    case 556:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 557:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 558:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 559:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 560:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 561:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 562:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 563:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 564:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 565:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 566:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 567:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 568:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 569:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(567);
      END_STATE();
    case 570:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 571:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 572:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 573:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 574:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1040);
      END_STATE();
    case 575:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 576:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 577:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 578:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 579:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 580:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(763);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(861);
      END_STATE();
    case 581:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 582:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 583:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 584:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1131);
      END_STATE();
    case 585:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1195);
      END_STATE();
    case 586:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1166);
      END_STATE();
    case 587:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1265);
      END_STATE();
    case 588:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 589:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 590:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 591:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(272);
      END_STATE();
    case 592:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(869);
      END_STATE();
    case 593:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 594:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 595:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(375);
      END_STATE();
    case 596:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 597:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 598:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 599:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(382);
      END_STATE();
    case 600:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(385);
      END_STATE();
    case 601:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      END_STATE();
    case 602:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 603:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 604:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 605:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(961);
      END_STATE();
    case 606:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 607:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1079);
      END_STATE();
    case 608:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1207);
      END_STATE();
    case 609:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1085);
      END_STATE();
    case 610:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 611:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1175);
      END_STATE();
    case 612:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1927);
      END_STATE();
    case 613:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1173);
      END_STATE();
    case 614:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1937);
      END_STATE();
    case 615:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1287);
      END_STATE();
    case 616:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1199);
      END_STATE();
    case 617:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1269);
      END_STATE();
    case 618:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1295);
      END_STATE();
    case 619:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1250);
      END_STATE();
    case 620:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1231);
      END_STATE();
    case 621:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1221);
      END_STATE();
    case 622:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 623:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1271);
      END_STATE();
    case 624:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1277);
      END_STATE();
    case 625:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1137);
      END_STATE();
    case 626:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1248);
      END_STATE();
    case 627:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1272);
      END_STATE();
    case 628:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 629:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 630:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 631:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 632:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 633:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 634:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 635:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1025);
      END_STATE();
    case 636:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1011);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 637:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 638:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 639:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 640:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      END_STATE();
    case 641:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 642:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 643:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      END_STATE();
    case 644:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 645:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 646:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 647:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 648:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 649:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 650:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      END_STATE();
    case 651:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      END_STATE();
    case 652:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      END_STATE();
    case 653:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 654:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 655:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(918);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      END_STATE();
    case 656:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      END_STATE();
    case 657:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(920);
      END_STATE();
    case 658:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(922);
      END_STATE();
    case 659:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 660:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(923);
      END_STATE();
    case 661:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 662:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 663:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 664:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 665:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 666:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 667:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(992);
      END_STATE();
    case 668:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 669:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 670:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 671:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 672:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 673:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 674:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 675:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 676:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 677:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 678:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 679:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 680:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 681:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 682:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 683:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 684:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 685:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 686:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 687:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 688:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 689:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 690:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(957);
      END_STATE();
    case 691:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 692:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(956);
      END_STATE();
    case 693:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 694:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(969);
      END_STATE();
    case 695:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 696:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(971);
      END_STATE();
    case 697:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 698:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 699:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      END_STATE();
    case 700:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      END_STATE();
    case 701:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 702:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1923);
      END_STATE();
    case 703:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1261);
      END_STATE();
    case 704:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1127);
      END_STATE();
    case 705:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1193);
      END_STATE();
    case 706:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1186);
      END_STATE();
    case 707:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1304);
      END_STATE();
    case 708:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1309);
      END_STATE();
    case 709:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1306);
      END_STATE();
    case 710:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1307);
      END_STATE();
    case 711:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1302);
      END_STATE();
    case 712:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1177);
      END_STATE();
    case 713:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1301);
      END_STATE();
    case 714:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 715:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1020);
      END_STATE();
    case 716:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1022);
      END_STATE();
    case 717:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 718:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 719:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(993);
      END_STATE();
    case 720:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 721:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 722:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1027);
      END_STATE();
    case 723:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 724:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(536);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 725:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 726:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(807);
      END_STATE();
    case 727:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 728:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 729:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 730:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 731:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 732:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      END_STATE();
    case 733:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 734:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 735:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 736:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 737:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(815);
      END_STATE();
    case 738:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 739:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 740:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(827);
      END_STATE();
    case 741:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(796);
      END_STATE();
    case 742:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 743:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 744:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 745:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 746:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 747:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 748:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 749:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 750:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(966);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 751:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 752:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1024);
      END_STATE();
    case 753:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 754:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 755:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(995);
      END_STATE();
    case 756:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 757:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(991);
      END_STATE();
    case 758:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 759:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 760:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 761:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 762:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 763:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 764:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1000);
      END_STATE();
    case 765:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1002);
      END_STATE();
    case 766:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1003);
      END_STATE();
    case 767:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1004);
      END_STATE();
    case 768:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 769:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1109);
      END_STATE();
    case 770:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1232);
      END_STATE();
    case 771:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1164);
      END_STATE();
    case 772:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1228);
      END_STATE();
    case 773:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1276);
      END_STATE();
    case 774:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 775:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(959);
      END_STATE();
    case 776:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(772);
      END_STATE();
    case 777:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 778:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(570);
      END_STATE();
    case 779:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 780:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 781:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(939);
      END_STATE();
    case 782:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 783:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(833);
      END_STATE();
    case 784:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(838);
      END_STATE();
    case 785:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(499);
      END_STATE();
    case 786:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1168);
      END_STATE();
    case 787:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1068);
      END_STATE();
    case 788:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1291);
      END_STATE();
    case 789:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1178);
      END_STATE();
    case 790:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 791:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1317);
      END_STATE();
    case 792:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1293);
      END_STATE();
    case 793:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1289);
      END_STATE();
    case 794:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1146);
      END_STATE();
    case 795:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1313);
      END_STATE();
    case 796:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1144);
      END_STATE();
    case 797:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1152);
      END_STATE();
    case 798:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1160);
      END_STATE();
    case 799:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 800:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 801:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 802:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 803:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 804:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1034);
      END_STATE();
    case 805:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 806:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 807:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 808:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1035);
      END_STATE();
    case 809:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 810:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 811:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 812:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 813:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 814:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      END_STATE();
    case 815:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 816:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 817:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 818:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 819:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 820:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 821:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 822:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 823:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 824:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 825:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 826:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 827:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 828:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 829:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 830:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 831:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 832:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 833:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 834:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 835:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 836:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 837:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 838:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 839:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 840:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(933);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 841:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 842:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 843:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1015);
      END_STATE();
    case 844:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(990);
      END_STATE();
    case 845:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 846:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 847:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 848:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 849:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(894);
      END_STATE();
    case 850:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 851:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 852:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 853:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 854:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 855:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 856:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(974);
      END_STATE();
    case 857:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 858:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 859:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 860:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 861:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 862:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 863:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1121);
      END_STATE();
    case 864:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1280);
      END_STATE();
    case 865:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1938);
      END_STATE();
    case 866:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1934);
      END_STATE();
    case 867:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1234);
      END_STATE();
    case 868:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1244);
      END_STATE();
    case 869:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1928);
      END_STATE();
    case 870:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1189);
      END_STATE();
    case 871:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1275);
      END_STATE();
    case 872:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1929);
      END_STATE();
    case 873:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(322);
      END_STATE();
    case 874:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
      END_STATE();
    case 875:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(928);
      END_STATE();
    case 876:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      END_STATE();
    case 877:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 878:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(895);
      END_STATE();
    case 879:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(866);
      END_STATE();
    case 880:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(867);
      END_STATE();
    case 881:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(952);
      END_STATE();
    case 882:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      END_STATE();
    case 883:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(884);
      END_STATE();
    case 884:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 885:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(943);
      END_STATE();
    case 886:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      END_STATE();
    case 887:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(468);
      END_STATE();
    case 888:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(960);
      END_STATE();
    case 889:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 890:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 891:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(731);
      END_STATE();
    case 892:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      END_STATE();
    case 893:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 894:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 895:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      END_STATE();
    case 896:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(742);
      END_STATE();
    case 897:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(972);
      END_STATE();
    case 898:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(443);
      END_STATE();
    case 899:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(968);
      END_STATE();
    case 900:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 901:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 902:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 903:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1113);
      END_STATE();
    case 904:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1316);
      END_STATE();
    case 905:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 906:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1087);
      END_STATE();
    case 907:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1111);
      END_STATE();
    case 908:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 909:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1123);
      END_STATE();
    case 910:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1129);
      END_STATE();
    case 911:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1158);
      END_STATE();
    case 912:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 913:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1135);
      END_STATE();
    case 914:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 915:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1223);
      END_STATE();
    case 916:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 917:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1936);
      END_STATE();
    case 918:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1246);
      END_STATE();
    case 919:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1205);
      END_STATE();
    case 920:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1939);
      END_STATE();
    case 921:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1310);
      END_STATE();
    case 922:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 923:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1157);
      END_STATE();
    case 924:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 925:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(589);
      END_STATE();
    case 926:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 927:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1033);
      END_STATE();
    case 928:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      END_STATE();
    case 929:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 930:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(435);
      END_STATE();
    case 931:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1038);
      END_STATE();
    case 932:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      END_STATE();
    case 933:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      END_STATE();
    case 934:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 935:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 936:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(965);
      END_STATE();
    case 937:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(756);
      END_STATE();
    case 938:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 939:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      END_STATE();
    case 940:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      END_STATE();
    case 941:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 942:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 943:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(823);
      END_STATE();
    case 944:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      END_STATE();
    case 945:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 946:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 947:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 948:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 949:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      END_STATE();
    case 950:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      END_STATE();
    case 951:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      END_STATE();
    case 952:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      END_STATE();
    case 953:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(856);
      END_STATE();
    case 954:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(484);
      END_STATE();
    case 955:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(961);
      END_STATE();
    case 956:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      END_STATE();
    case 957:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 958:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 959:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(848);
      END_STATE();
    case 960:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      END_STATE();
    case 961:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 962:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 963:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(741);
      END_STATE();
    case 964:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      END_STATE();
    case 965:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 966:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 967:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      END_STATE();
    case 968:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 969:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      END_STATE();
    case 970:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 971:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      END_STATE();
    case 972:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 973:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      END_STATE();
    case 974:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(853);
      END_STATE();
    case 975:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      END_STATE();
    case 976:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(963);
      END_STATE();
    case 977:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(492);
      END_STATE();
    case 978:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(501);
      END_STATE();
    case 979:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      END_STATE();
    case 980:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      END_STATE();
    case 981:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(507);
      END_STATE();
    case 982:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      END_STATE();
    case 983:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      END_STATE();
    case 984:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 985:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      END_STATE();
    case 986:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(860);
      END_STATE();
    case 987:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 988:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(769);
      END_STATE();
    case 989:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(770);
      END_STATE();
    case 990:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(781);
      END_STATE();
    case 991:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(773);
      END_STATE();
    case 992:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(695);
      END_STATE();
    case 993:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(975);
      END_STATE();
    case 994:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(849);
      END_STATE();
    case 995:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(690);
      END_STATE();
    case 996:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 997:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(643);
      END_STATE();
    case 998:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 999:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 1000:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(651);
      END_STATE();
    case 1001:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(837);
      END_STATE();
    case 1002:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 1003:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(656);
      END_STATE();
    case 1004:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 1005:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(978);
      END_STATE();
    case 1006:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 1007:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1305);
      END_STATE();
    case 1008:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1299);
      END_STATE();
    case 1009:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1300);
      END_STATE();
    case 1010:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1303);
      END_STATE();
    case 1011:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(362);
      END_STATE();
    case 1012:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(452);
      END_STATE();
    case 1013:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(377);
      END_STATE();
    case 1014:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(295);
      END_STATE();
    case 1015:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(493);
      END_STATE();
    case 1016:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(470);
      END_STATE();
    case 1017:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 1018:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(356);
      END_STATE();
    case 1019:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1932);
      END_STATE();
    case 1020:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1188);
      END_STATE();
    case 1021:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(726);
      END_STATE();
    case 1022:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(865);
      END_STATE();
    case 1023:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(572);
      END_STATE();
    case 1024:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(872);
      END_STATE();
    case 1025:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(445);
      END_STATE();
    case 1026:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(237);
      END_STATE();
    case 1027:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(678);
      END_STATE();
    case 1028:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(768);
      END_STATE();
    case 1029:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(519);
      END_STATE();
    case 1030:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(581);
      END_STATE();
    case 1031:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1318);
      END_STATE();
    case 1032:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1100);
      END_STATE();
    case 1033:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1133);
      END_STATE();
    case 1034:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1201);
      END_STATE();
    case 1035:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1213);
      END_STATE();
    case 1036:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1225);
      END_STATE();
    case 1037:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 1038:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(779);
      END_STATE();
    case 1039:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(886);
      END_STATE();
    case 1040:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(887);
      END_STATE();
    case 1041:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(115);
      END_STATE();
    case 1042:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(117);
      END_STATE();
    case 1043:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1907);
      END_STATE();
    case 1044:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1908);
      END_STATE();
    case 1045:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1046:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1911);
      END_STATE();
    case 1047:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1912);
      END_STATE();
    case 1048:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1910);
      END_STATE();
    case 1049:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 1050:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1915);
      END_STATE();
    case 1051:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 1052:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 1053:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 1054:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      END_STATE();
    case 1055:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      END_STATE();
    case 1056:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1904);
      END_STATE();
    case 1057:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 1058:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      END_STATE();
    case 1059:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1909);
      END_STATE();
    case 1060:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1894);
      END_STATE();
    case 1061:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 1062:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1060);
      END_STATE();
    case 1063:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1062);
      END_STATE();
    case 1064:
      if (eof) ADVANCE(1066);
      if (lookahead == '"') ADVANCE(1323);
      if (lookahead == '#') ADVANCE(1918);
      if (lookahead == '$') ADVANCE(1893);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ')') ADVANCE(1322);
      if (lookahead == '*') ADVANCE(1949);
      if (lookahead == '+') ADVANCE(1946);
      if (lookahead == ',') ADVANCE(1321);
      if (lookahead == '-') ADVANCE(1948);
      if (lookahead == '.') ADVANCE(1047);
      if (lookahead == '/') ADVANCE(1950);
      if (lookahead == '0') ADVANCE(1899);
      if (lookahead == '<') ADVANCE(1953);
      if (lookahead == '=') ADVANCE(1106);
      if (lookahead == '>') ADVANCE(1952);
      if (lookahead == 'A') ADVANCE(1330);
      if (lookahead == 'O') ADVANCE(1331);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1634);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1590);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1537);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1510);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1725);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1479);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1776);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1535);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1565);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1360);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1563);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1902);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1064)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1894);
      END_STATE();
    case 1065:
      if (eof) ADVANCE(1066);
      if (lookahead == '"') ADVANCE(1323);
      if (lookahead == '#') ADVANCE(1918);
      if (lookahead == '$') ADVANCE(1893);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(1047);
      if (lookahead == '0') ADVANCE(1899);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1634);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1590);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1537);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1510);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1725);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1479);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1776);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1380);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1535);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1565);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1360);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1563);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1902);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1065)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1894);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1367);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_keyword_token20);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_letter_division_token1);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_print_division_token2);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_total_division_token1);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_total_division_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_record_type_token2);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_record_type_token2);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_record_type_token3);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_record_type_token3);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_record_type_token4);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_record_type_token4);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_record_type_token5);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_record_type_token5);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_record_type_token6);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_record_type_token6);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_record_type_token7);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_record_type_token7);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_record_type_token8);
      if (lookahead == ' ') ADVANCE(967);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_record_type_token8);
      if (lookahead == ' ') ADVANCE(967);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_record_type_token9);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_record_type_token10);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_record_type_token10);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_record_type_token11);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_record_type_token11);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_record_type_token12);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_record_type_token12);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_record_type_token13);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_record_type_token13);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_record_type_token14);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_record_type_token14);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_record_type_token15);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_record_type_token15);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_record_type_token16);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1792);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_record_type_token16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_record_type_token17);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_record_type_token17);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_record_type_token18);
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_record_type_token18);
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_record_type_token19);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_record_type_token20);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_record_type_token21);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_record_type_token21);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_record_type_token22);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_record_type_token22);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_record_type_token23);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_record_type_token23);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_record_type_token24);
      if (lookahead == ' ') ADVANCE(503);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_record_type_token24);
      if (lookahead == ' ') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_record_type_token25);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_record_type_token26);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1415);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1772);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1730);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1497);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_record_type_token26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(841);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(759);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_record_type_token27);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_record_type_token27);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_record_type_token28);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_record_type_token28);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_record_type_token29);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_record_type_token29);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_record_type_token30);
      if (lookahead == ' ') ADVANCE(183);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_record_type_token30);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_record_type_token31);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_record_type_token32);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_record_type_token32);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_record_type_token33);
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_record_type_token33);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_record_type_token34);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_record_type_token34);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_record_type_token35);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_record_type_token35);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_record_type_token36);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_record_type_token37);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1700);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_record_type_token37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_record_type_token38);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_record_type_token38);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_record_type_token39);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_record_type_token39);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_record_type_token40);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_record_type_token40);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_record_type_token41);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_record_type_token41);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_record_type_token42);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_record_type_token42);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_record_type_token43);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_record_type_token43);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_record_type_token44);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_record_type_token44);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_record_type_token45);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_record_type_token45);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_record_type_token46);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_record_type_token46);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_record_type_token47);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_record_type_token47);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_record_type_token48);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_record_type_token48);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_record_type_token49);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_record_type_token49);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_record_type_token50);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_record_type_token50);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_record_type_token51);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_record_type_token51);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_record_type_token52);
      if (lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_record_type_token52);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_record_type_token53);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_record_type_token53);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_record_type_token54);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_record_type_token55);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_record_type_token56);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_record_type_token56);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_record_type_token57);
      if (lookahead == ' ') ADVANCE(784);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_record_type_token58);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1742);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_record_type_token58);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_record_type_token59);
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_record_type_token59);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_record_type_token60);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_record_type_token61);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_record_type_token62);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_record_type_token62);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_record_type_token63);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_record_type_token63);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_record_type_token64);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_record_type_token64);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_record_type_token65);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_record_type_token65);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_record_type_token66);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_record_type_token66);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_record_type_token67);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_record_type_token67);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_record_type_token68);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_record_type_token68);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_record_type_token69);
      if (lookahead == ' ') ADVANCE(986);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_record_type_token69);
      if (lookahead == ' ') ADVANCE(986);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_record_type_token70);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_record_type_token71);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1731);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_record_type_token71);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(762);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_record_type_token72);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1727);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_record_type_token72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_record_type_token73);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_record_type_token73);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_record_type_token74);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_record_type_token74);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_record_type_token75);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_record_type_token75);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_record_type_token76);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_record_type_token76);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_record_type_token77);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_record_type_token77);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_record_type_token78);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_record_type_token78);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_record_type_token79);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_record_type_token79);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_record_type_token80);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_record_type_token80);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_record_type_token81);
      if (lookahead == ' ') ADVANCE(580);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_record_type_token81);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_record_type_token82);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_record_type_token83);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_record_type_token84);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_record_type_token84);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_record_type_token85);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(828);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_record_type_token86);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_record_type_token87);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_record_type_token88);
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_record_type_token88);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_record_type_token89);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_record_type_token89);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_record_type_token90);
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_record_type_token90);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_record_type_token91);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_record_type_token92);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_record_type_token92);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_record_type_token93);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_record_type_token93);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_record_type_token94);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_record_type_token94);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_record_type_token95);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_record_type_token95);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_record_type_token96);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_record_type_token96);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_record_type_token97);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_record_type_token97);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_record_type_token98);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_record_type_token98);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_record_type_token99);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_record_type_token100);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_record_type_token101);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_record_type_token102);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_record_type_token103);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_record_type_token104);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_record_type_token105);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_record_type_token106);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_record_type_token107);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_record_type_token108);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_record_type_token109);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_record_type_token110);
      if (lookahead == ' ') ADVANCE(1028);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_record_type_token110);
      if (lookahead == ' ') ADVANCE(1028);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_record_type_token111);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_data_type_token1);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_data_type_token2);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_data_type_token3);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_data_type_token4);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_data_type_token5);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(1325);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(1325);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(1955);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '\\') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1328);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'D') ADVANCE(1942);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'N') ADVANCE(1329);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(1944);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1838);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1613);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1758);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1650);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1480);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1614);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1884);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1483);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1748);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1765);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1487);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1710);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1475);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1220);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1218);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1394);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1126);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1192);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1878);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1562);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1845);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1680);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1601);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1691);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1397);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1864);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1771);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1626);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1403);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1653);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1891);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1696);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1431);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1438);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1847);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1619);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1444);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1609);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1412);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1505);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1668);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1582);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1610);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1413);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1654);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1617);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1447);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1612);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1658);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1779);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1659);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1662);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1833);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1793);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1398);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1400);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1621);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1632);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1625);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1377);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1782);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1646);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1848);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1795);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1851);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1545);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1851);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1852);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1698);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1849);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1417);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1729);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1501);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1767);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1640);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1383);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1389);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1773);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1639);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1478);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1349);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1586);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1237);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1740);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1493);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1600);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1567);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1603);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1799);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1732);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1763);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1395);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1568);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1558);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1406);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1573);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1560);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1435);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1364);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1517);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1494);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1843);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1837);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1459);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1461);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1462);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1504);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1844);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1853);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1733);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1414);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1734);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1416);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1735);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1418);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1143);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1210);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1516);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1212);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1163);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1076);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1553);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1871);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1584);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1875);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1746);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1422);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1597);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1337);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1338);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1522);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1507);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1508);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1579);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1716);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1784);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1583);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1787);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1524);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1442);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1589);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1443);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1636);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1344);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1405);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1667);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1554);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1239);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1243);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1283);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1298);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1258);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1279);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1260);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1216);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1274);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1264);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1268);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1241);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1103);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1099);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1070);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1092);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1104);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1326);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1084);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1555);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1783);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1743);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1108);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1780);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1759);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1714);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1805);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1870);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1885);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1392);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1669);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1701);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1572);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1882);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1641);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1426);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1737);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1890);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1642);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1749);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1643);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1768);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1790);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1574);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1427);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1770);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1750);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1390);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1430);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1797);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1694);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1775);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1429);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1752);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1534);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1753);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1755);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1756);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1670);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1456);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1726);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1663);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1777);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1664);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1762);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1674);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1693);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1569);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1808);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1361);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1863);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1842);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1368);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1695);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1697);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1432);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1811);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1673);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1675);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1794);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1786);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1678);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1683);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1441);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1647);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1556);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1743);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1886);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1072);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1820);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1396);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1391);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1345);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1713);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1706);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1707);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1530);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1509);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1596);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1286);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1139);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1149);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1141);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1801);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1656);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1840);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1458);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1648);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1649);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1521);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1866);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1649);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1627);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1172);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1097);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1095);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1585);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1496);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1592);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1512);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1861);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1512);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1715);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1369);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1721);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1879);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1665);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1841);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1408);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1744);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1551);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1666);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1549);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1401);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1705);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1822);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1804);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1823);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1622);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1831);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1350);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1807);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1881);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1720);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1686);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1371);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1629);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1757);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1722);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1630);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1724);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1687);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1688);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1689);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1850);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1684);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1411);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1819);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1150);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1865);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1631);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1575);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1404);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1343);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1183);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1251);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1185);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1384);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1155);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1082);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1120);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1606);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1618);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1645);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1741);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1421);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1813);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1892);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1868);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1376);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1709);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1608);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1711);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1803);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1578);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1423);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1611);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1498);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1520);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1791);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1460);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1477);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1467);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1599);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1869);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1588);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1814);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1425);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1365);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1594);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1595);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1561);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1428);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1385);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1132);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1196);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1266);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1452);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1527);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1463);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1528);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1531);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1532);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1445);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1877);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1335);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1226);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1208);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1256);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1176);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1174);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1288);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1200);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1270);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1296);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1249);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1254);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1080);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1086);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1550);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1546);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1439);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1815);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1552);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1854);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1552);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1821);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1375);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1824);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1433);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1825);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1826);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1425);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1827);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1828);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1829);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1593);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1830);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1832);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1834);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1836);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1489);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1468);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1471);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1472);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1474);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1810);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1341);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1370);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1453);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1867);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1541);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1409);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1434);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1399);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1542);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1410);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1352);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1359);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1859);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1591);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1536);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1615);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1262);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1128);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1194);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1883);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1547);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1839);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1548);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1769);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1623);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1745);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1519);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1624);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1751);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1655);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1760);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1764);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1657);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1778);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1660);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1754);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1661);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1685);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1620);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1358);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1411);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1363);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1785);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1366);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1872);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1873);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1874);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1876);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1233);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1165);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1229);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1110);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1382);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1858);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1738);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1747);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1340);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1514);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1635);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1798);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1167);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1292);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1179);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1294);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1290);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1147);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1145);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1153);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1161);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1067);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1420);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1602);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1888);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1598);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1327);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1708);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1889);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1855);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1511);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1336);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1351);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1699);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1604);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1809);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1346);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1348);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1506);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1354);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1692);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1728);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1817);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1576);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1424);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1455);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1347);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1457);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1835);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1488);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1495);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1502);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1518);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1499);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1470);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1880);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1436);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1437);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1402);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1356);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1357);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1781);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1788);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1526);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1353);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1122);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1281);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1235);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1245);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1190);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1800);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1491);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1857);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1802);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1717);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1451);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1818);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1580);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1486);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1464);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1544);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1846);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1523);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1703);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1862);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1181);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1124);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1130);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1887);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1159);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1136);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1204);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1224);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1170);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1247);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1206);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1311);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1198);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1088);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1094);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1114);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1117);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1112);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1393);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1540);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1559);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1856);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1355);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1672);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1587);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1454);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1503);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1485);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1529);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1490);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1492);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1484);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1465);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1513);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1515);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1577);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1381);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1718);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1774);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1719);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1723);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1362);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1533);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1860);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1387);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1736);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1739);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1702);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1466);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1469);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1671);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1628);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1676);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1679);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1681);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1789);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1682);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1482);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1570);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1525);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1500);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1581);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1372);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1187);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1712);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1633);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1637);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1134);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1202);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1214);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1101);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1319);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1812);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1328);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1917);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1912);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1917);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1896);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1917);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1897);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == '0') ADVANCE(1906);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1059);
      if (lookahead == '_') ADVANCE(1048);
      if (lookahead == 'n') ADVANCE(1895);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1901);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1904);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1900);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1901);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1913);
      if (lookahead == '0') ADVANCE(1910);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1043);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1044);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1059);
      if (lookahead == '_') ADVANCE(1048);
      if (lookahead == 'n') ADVANCE(1895);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1904);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1913);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1904);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1049);
      if (lookahead == '_') ADVANCE(1048);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1910);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1049);
      if (lookahead == '_') ADVANCE(1048);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1905);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1043);
      if (lookahead == 'n') ADVANCE(1895);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1907);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1044);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1908);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1059);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1909);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1048);
      if (lookahead == 'n') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1910);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1911);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1912);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1912);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1898);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(sym_money);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(sym_rate);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym_special_keywords_token1);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym_special_keywords_token2);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym_special_keywords_token3);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym_special_keywords_token4);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym_special_keywords_token5);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym_special_keywords_token6);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym_special_keywords_token7);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym_special_keywords_token8);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(496);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym_special_keywords_token9);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym_special_keywords_token10);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym_special_keywords_token11);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym_special_keywords_token12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym_special_keywords_token13);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym_special_keywords_token14);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym_special_keywords_token15);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym_special_keywords_token16);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym_special_keywords_token17);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym_special_keywords_token18);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(824);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym_special_keywords_token19);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(1940);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '\\') ADVANCE(36);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1894);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '$') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1911);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1911);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(1951);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym_procedure_definition_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1064},
  [10] = {.lex_state = 1064},
  [11] = {.lex_state = 1064},
  [12] = {.lex_state = 1064},
  [13] = {.lex_state = 1065},
  [14] = {.lex_state = 1065},
  [15] = {.lex_state = 1065},
  [16] = {.lex_state = 1065},
  [17] = {.lex_state = 1065},
  [18] = {.lex_state = 1065},
  [19] = {.lex_state = 1065},
  [20] = {.lex_state = 1064},
  [21] = {.lex_state = 1065},
  [22] = {.lex_state = 1065},
  [23] = {.lex_state = 1065},
  [24] = {.lex_state = 1065},
  [25] = {.lex_state = 1065},
  [26] = {.lex_state = 1065},
  [27] = {.lex_state = 1064},
  [28] = {.lex_state = 1065},
  [29] = {.lex_state = 1065},
  [30] = {.lex_state = 1065},
  [31] = {.lex_state = 1065},
  [32] = {.lex_state = 1065},
  [33] = {.lex_state = 1065},
  [34] = {.lex_state = 1065},
  [35] = {.lex_state = 1065},
  [36] = {.lex_state = 1065},
  [37] = {.lex_state = 1065},
  [38] = {.lex_state = 1065},
  [39] = {.lex_state = 1065},
  [40] = {.lex_state = 1065},
  [41] = {.lex_state = 1065},
  [42] = {.lex_state = 1065},
  [43] = {.lex_state = 1064},
  [44] = {.lex_state = 1064},
  [45] = {.lex_state = 1065},
  [46] = {.lex_state = 1065},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 1064},
  [94] = {.lex_state = 1064},
  [95] = {.lex_state = 1064},
  [96] = {.lex_state = 1064},
  [97] = {.lex_state = 1064},
  [98] = {.lex_state = 1064},
  [99] = {.lex_state = 1064},
  [100] = {.lex_state = 1064},
  [101] = {.lex_state = 1064},
  [102] = {.lex_state = 1064},
  [103] = {.lex_state = 1064},
  [104] = {.lex_state = 1064},
  [105] = {.lex_state = 1064},
  [106] = {.lex_state = 1064},
  [107] = {.lex_state = 1064},
  [108] = {.lex_state = 1064},
  [109] = {.lex_state = 1064},
  [110] = {.lex_state = 1064},
  [111] = {.lex_state = 1064},
  [112] = {.lex_state = 1064},
  [113] = {.lex_state = 1064},
  [114] = {.lex_state = 1064},
  [115] = {.lex_state = 1064},
  [116] = {.lex_state = 1064},
  [117] = {.lex_state = 1064},
  [118] = {.lex_state = 1064},
  [119] = {.lex_state = 1064},
  [120] = {.lex_state = 1064},
  [121] = {.lex_state = 1064},
  [122] = {.lex_state = 1064},
  [123] = {.lex_state = 1064},
  [124] = {.lex_state = 1064},
  [125] = {.lex_state = 1064},
  [126] = {.lex_state = 1064},
  [127] = {.lex_state = 1064},
  [128] = {.lex_state = 1064},
  [129] = {.lex_state = 1064},
  [130] = {.lex_state = 1064},
  [131] = {.lex_state = 1064},
  [132] = {.lex_state = 1064},
  [133] = {.lex_state = 1064},
  [134] = {.lex_state = 1064},
  [135] = {.lex_state = 1064},
  [136] = {.lex_state = 1064},
  [137] = {.lex_state = 1064},
  [138] = {.lex_state = 1064},
  [139] = {.lex_state = 1064},
  [140] = {.lex_state = 1064},
  [141] = {.lex_state = 1064},
  [142] = {.lex_state = 1064},
  [143] = {.lex_state = 1064},
  [144] = {.lex_state = 1064},
  [145] = {.lex_state = 1064},
  [146] = {.lex_state = 1064},
  [147] = {.lex_state = 1064},
  [148] = {.lex_state = 1064},
  [149] = {.lex_state = 1064},
  [150] = {.lex_state = 1064},
  [151] = {.lex_state = 1064},
  [152] = {.lex_state = 1064},
  [153] = {.lex_state = 1064},
  [154] = {.lex_state = 1064},
  [155] = {.lex_state = 1064},
  [156] = {.lex_state = 1064},
  [157] = {.lex_state = 1064},
  [158] = {.lex_state = 1064},
  [159] = {.lex_state = 1064},
  [160] = {.lex_state = 1064},
  [161] = {.lex_state = 1064},
  [162] = {.lex_state = 1064},
  [163] = {.lex_state = 1064},
  [164] = {.lex_state = 1064},
  [165] = {.lex_state = 1064},
  [166] = {.lex_state = 1064},
  [167] = {.lex_state = 1064},
  [168] = {.lex_state = 1064},
  [169] = {.lex_state = 1064},
  [170] = {.lex_state = 1064},
  [171] = {.lex_state = 1064},
  [172] = {.lex_state = 1064},
  [173] = {.lex_state = 1064},
  [174] = {.lex_state = 1064},
  [175] = {.lex_state = 1064},
  [176] = {.lex_state = 1064},
  [177] = {.lex_state = 1064},
  [178] = {.lex_state = 1064},
  [179] = {.lex_state = 1064},
  [180] = {.lex_state = 1064},
  [181] = {.lex_state = 1064},
  [182] = {.lex_state = 1064},
  [183] = {.lex_state = 1064},
  [184] = {.lex_state = 1064},
  [185] = {.lex_state = 1064},
  [186] = {.lex_state = 1064},
  [187] = {.lex_state = 1064},
  [188] = {.lex_state = 1064},
  [189] = {.lex_state = 1064},
  [190] = {.lex_state = 1064},
  [191] = {.lex_state = 1064},
  [192] = {.lex_state = 1064},
  [193] = {.lex_state = 1064},
  [194] = {.lex_state = 1064},
  [195] = {.lex_state = 1064},
  [196] = {.lex_state = 1064},
  [197] = {.lex_state = 1064},
  [198] = {.lex_state = 1064},
  [199] = {.lex_state = 1064},
  [200] = {.lex_state = 1065},
  [201] = {.lex_state = 1065},
  [202] = {.lex_state = 1065},
  [203] = {.lex_state = 1065},
  [204] = {.lex_state = 1065},
  [205] = {.lex_state = 1065},
  [206] = {.lex_state = 1065},
  [207] = {.lex_state = 1065},
  [208] = {.lex_state = 1065},
  [209] = {.lex_state = 1065},
  [210] = {.lex_state = 1065},
  [211] = {.lex_state = 1065},
  [212] = {.lex_state = 1065},
  [213] = {.lex_state = 1065},
  [214] = {.lex_state = 1065},
  [215] = {.lex_state = 1065},
  [216] = {.lex_state = 1065},
  [217] = {.lex_state = 1065},
  [218] = {.lex_state = 1065},
  [219] = {.lex_state = 1065},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 16},
  [225] = {.lex_state = 39},
  [226] = {.lex_state = 39},
  [227] = {.lex_state = 39},
  [228] = {.lex_state = 39},
  [229] = {.lex_state = 16},
  [230] = {.lex_state = 16},
  [231] = {.lex_state = 16},
  [232] = {.lex_state = 16},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 16},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 16},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 16},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 16},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 16},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 16},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 16},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 16},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 16},
  [273] = {.lex_state = 16},
  [274] = {.lex_state = 16},
  [275] = {.lex_state = 16},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 16},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 16},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 16},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 16},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 16},
  [289] = {.lex_state = 16},
  [290] = {.lex_state = 16},
  [291] = {.lex_state = 16},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 39},
  [297] = {.lex_state = 39},
  [298] = {.lex_state = 39},
  [299] = {.lex_state = 39},
  [300] = {.lex_state = 39},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 5},
  [337] = {.lex_state = 5},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 5},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 5},
  [342] = {.lex_state = 5},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 5},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 5},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 7},
  [356] = {.lex_state = 5},
  [357] = {.lex_state = 5},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 7},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 5},
  [369] = {.lex_state = 5},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 7},
  [373] = {.lex_state = 7},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 5},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 1324},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 1324},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 39},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 1324},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 1324},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 1324},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 39},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
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
    [aux_sym_keyword_token8] = ACTIONS(1),
    [aux_sym_keyword_token9] = ACTIONS(1),
    [aux_sym_keyword_token10] = ACTIONS(1),
    [aux_sym_keyword_token11] = ACTIONS(1),
    [aux_sym_keyword_token12] = ACTIONS(1),
    [aux_sym_keyword_token13] = ACTIONS(1),
    [aux_sym_keyword_token14] = ACTIONS(1),
    [aux_sym_keyword_token16] = ACTIONS(1),
    [aux_sym_keyword_token17] = ACTIONS(1),
    [aux_sym_keyword_token18] = ACTIONS(1),
    [aux_sym_keyword_token19] = ACTIONS(1),
    [aux_sym_target_division_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_define_division_token1] = ACTIONS(1),
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
    [aux_sym_array_type_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_money] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_rate] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_include_statement_token1] = ACTIONS(1),
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
    [aux_sym_procedure_definition_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(441),
    [sym_target_division] = STATE(225),
    [sym_special_keywords] = STATE(220),
    [aux_sym_source_file_repeat1] = STATE(220),
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
    [sym_record_type] = STATE(453),
    [sym__identifier] = STATE(98),
    [sym_identifier] = STATE(452),
    [sym__array_identifier] = STATE(99),
    [sym_database_field] = STATE(452),
    [aux_sym_record_type_token1] = ACTIONS(11),
    [aux_sym_record_type_token2] = ACTIONS(11),
    [aux_sym_record_type_token3] = ACTIONS(11),
    [aux_sym_record_type_token4] = ACTIONS(11),
    [aux_sym_record_type_token5] = ACTIONS(11),
    [aux_sym_record_type_token6] = ACTIONS(11),
    [aux_sym_record_type_token7] = ACTIONS(11),
    [aux_sym_record_type_token8] = ACTIONS(11),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(11),
    [aux_sym_record_type_token11] = ACTIONS(11),
    [aux_sym_record_type_token12] = ACTIONS(11),
    [aux_sym_record_type_token13] = ACTIONS(11),
    [aux_sym_record_type_token14] = ACTIONS(11),
    [aux_sym_record_type_token15] = ACTIONS(11),
    [aux_sym_record_type_token16] = ACTIONS(11),
    [aux_sym_record_type_token17] = ACTIONS(11),
    [aux_sym_record_type_token18] = ACTIONS(11),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(11),
    [aux_sym_record_type_token22] = ACTIONS(11),
    [aux_sym_record_type_token23] = ACTIONS(11),
    [aux_sym_record_type_token24] = ACTIONS(11),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(11),
    [aux_sym_record_type_token27] = ACTIONS(11),
    [aux_sym_record_type_token28] = ACTIONS(11),
    [aux_sym_record_type_token29] = ACTIONS(11),
    [aux_sym_record_type_token30] = ACTIONS(11),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(11),
    [aux_sym_record_type_token33] = ACTIONS(11),
    [aux_sym_record_type_token34] = ACTIONS(11),
    [aux_sym_record_type_token35] = ACTIONS(11),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(11),
    [aux_sym_record_type_token38] = ACTIONS(11),
    [aux_sym_record_type_token39] = ACTIONS(11),
    [aux_sym_record_type_token40] = ACTIONS(11),
    [aux_sym_record_type_token41] = ACTIONS(11),
    [aux_sym_record_type_token42] = ACTIONS(11),
    [aux_sym_record_type_token43] = ACTIONS(11),
    [aux_sym_record_type_token44] = ACTIONS(11),
    [aux_sym_record_type_token45] = ACTIONS(11),
    [aux_sym_record_type_token46] = ACTIONS(11),
    [aux_sym_record_type_token47] = ACTIONS(11),
    [aux_sym_record_type_token48] = ACTIONS(11),
    [aux_sym_record_type_token49] = ACTIONS(11),
    [aux_sym_record_type_token50] = ACTIONS(11),
    [aux_sym_record_type_token51] = ACTIONS(11),
    [aux_sym_record_type_token52] = ACTIONS(11),
    [aux_sym_record_type_token53] = ACTIONS(11),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(11),
    [aux_sym_record_type_token57] = ACTIONS(11),
    [aux_sym_record_type_token58] = ACTIONS(11),
    [aux_sym_record_type_token59] = ACTIONS(11),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(11),
    [aux_sym_record_type_token63] = ACTIONS(11),
    [aux_sym_record_type_token64] = ACTIONS(11),
    [aux_sym_record_type_token65] = ACTIONS(11),
    [aux_sym_record_type_token66] = ACTIONS(11),
    [aux_sym_record_type_token67] = ACTIONS(11),
    [aux_sym_record_type_token68] = ACTIONS(11),
    [aux_sym_record_type_token69] = ACTIONS(11),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(11),
    [aux_sym_record_type_token72] = ACTIONS(11),
    [aux_sym_record_type_token73] = ACTIONS(11),
    [aux_sym_record_type_token74] = ACTIONS(11),
    [aux_sym_record_type_token75] = ACTIONS(11),
    [aux_sym_record_type_token76] = ACTIONS(11),
    [aux_sym_record_type_token77] = ACTIONS(11),
    [aux_sym_record_type_token78] = ACTIONS(11),
    [aux_sym_record_type_token79] = ACTIONS(11),
    [aux_sym_record_type_token80] = ACTIONS(11),
    [aux_sym_record_type_token81] = ACTIONS(11),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(11),
    [aux_sym_record_type_token85] = ACTIONS(11),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(11),
    [aux_sym_record_type_token89] = ACTIONS(11),
    [aux_sym_record_type_token90] = ACTIONS(11),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(11),
    [aux_sym_record_type_token93] = ACTIONS(11),
    [aux_sym_record_type_token94] = ACTIONS(11),
    [aux_sym_record_type_token95] = ACTIONS(11),
    [aux_sym_record_type_token96] = ACTIONS(11),
    [aux_sym_record_type_token97] = ACTIONS(11),
    [aux_sym_record_type_token98] = ACTIONS(11),
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
    [aux_sym_record_type_token110] = ACTIONS(11),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [aux_sym__identifier_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_money] = ACTIONS(19),
    [sym_rate] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_record_type] = STATE(453),
    [sym__identifier] = STATE(98),
    [sym_identifier] = STATE(386),
    [sym__array_identifier] = STATE(99),
    [sym_database_field] = STATE(386),
    [aux_sym_record_type_token1] = ACTIONS(11),
    [aux_sym_record_type_token2] = ACTIONS(11),
    [aux_sym_record_type_token3] = ACTIONS(11),
    [aux_sym_record_type_token4] = ACTIONS(11),
    [aux_sym_record_type_token5] = ACTIONS(11),
    [aux_sym_record_type_token6] = ACTIONS(11),
    [aux_sym_record_type_token7] = ACTIONS(11),
    [aux_sym_record_type_token8] = ACTIONS(11),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(11),
    [aux_sym_record_type_token11] = ACTIONS(11),
    [aux_sym_record_type_token12] = ACTIONS(11),
    [aux_sym_record_type_token13] = ACTIONS(11),
    [aux_sym_record_type_token14] = ACTIONS(11),
    [aux_sym_record_type_token15] = ACTIONS(11),
    [aux_sym_record_type_token16] = ACTIONS(11),
    [aux_sym_record_type_token17] = ACTIONS(11),
    [aux_sym_record_type_token18] = ACTIONS(11),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(11),
    [aux_sym_record_type_token22] = ACTIONS(11),
    [aux_sym_record_type_token23] = ACTIONS(11),
    [aux_sym_record_type_token24] = ACTIONS(11),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(11),
    [aux_sym_record_type_token27] = ACTIONS(11),
    [aux_sym_record_type_token28] = ACTIONS(11),
    [aux_sym_record_type_token29] = ACTIONS(11),
    [aux_sym_record_type_token30] = ACTIONS(11),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(11),
    [aux_sym_record_type_token33] = ACTIONS(11),
    [aux_sym_record_type_token34] = ACTIONS(11),
    [aux_sym_record_type_token35] = ACTIONS(11),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(11),
    [aux_sym_record_type_token38] = ACTIONS(11),
    [aux_sym_record_type_token39] = ACTIONS(11),
    [aux_sym_record_type_token40] = ACTIONS(11),
    [aux_sym_record_type_token41] = ACTIONS(11),
    [aux_sym_record_type_token42] = ACTIONS(11),
    [aux_sym_record_type_token43] = ACTIONS(11),
    [aux_sym_record_type_token44] = ACTIONS(11),
    [aux_sym_record_type_token45] = ACTIONS(11),
    [aux_sym_record_type_token46] = ACTIONS(11),
    [aux_sym_record_type_token47] = ACTIONS(11),
    [aux_sym_record_type_token48] = ACTIONS(11),
    [aux_sym_record_type_token49] = ACTIONS(11),
    [aux_sym_record_type_token50] = ACTIONS(11),
    [aux_sym_record_type_token51] = ACTIONS(11),
    [aux_sym_record_type_token52] = ACTIONS(11),
    [aux_sym_record_type_token53] = ACTIONS(11),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(11),
    [aux_sym_record_type_token57] = ACTIONS(11),
    [aux_sym_record_type_token58] = ACTIONS(11),
    [aux_sym_record_type_token59] = ACTIONS(11),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(11),
    [aux_sym_record_type_token63] = ACTIONS(11),
    [aux_sym_record_type_token64] = ACTIONS(11),
    [aux_sym_record_type_token65] = ACTIONS(11),
    [aux_sym_record_type_token66] = ACTIONS(11),
    [aux_sym_record_type_token67] = ACTIONS(11),
    [aux_sym_record_type_token68] = ACTIONS(11),
    [aux_sym_record_type_token69] = ACTIONS(11),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(11),
    [aux_sym_record_type_token72] = ACTIONS(11),
    [aux_sym_record_type_token73] = ACTIONS(11),
    [aux_sym_record_type_token74] = ACTIONS(11),
    [aux_sym_record_type_token75] = ACTIONS(11),
    [aux_sym_record_type_token76] = ACTIONS(11),
    [aux_sym_record_type_token77] = ACTIONS(11),
    [aux_sym_record_type_token78] = ACTIONS(11),
    [aux_sym_record_type_token79] = ACTIONS(11),
    [aux_sym_record_type_token80] = ACTIONS(11),
    [aux_sym_record_type_token81] = ACTIONS(11),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(11),
    [aux_sym_record_type_token85] = ACTIONS(11),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(11),
    [aux_sym_record_type_token89] = ACTIONS(11),
    [aux_sym_record_type_token90] = ACTIONS(11),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(11),
    [aux_sym_record_type_token93] = ACTIONS(11),
    [aux_sym_record_type_token94] = ACTIONS(11),
    [aux_sym_record_type_token95] = ACTIONS(11),
    [aux_sym_record_type_token96] = ACTIONS(11),
    [aux_sym_record_type_token97] = ACTIONS(11),
    [aux_sym_record_type_token98] = ACTIONS(11),
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
    [aux_sym_record_type_token110] = ACTIONS(11),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [aux_sym__identifier_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(21),
    [sym_money] = ACTIONS(23),
    [sym_rate] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_record_type] = STATE(453),
    [sym__identifier] = STATE(98),
    [sym_identifier] = STATE(407),
    [sym__array_identifier] = STATE(99),
    [sym_database_field] = STATE(407),
    [aux_sym_record_type_token1] = ACTIONS(11),
    [aux_sym_record_type_token2] = ACTIONS(11),
    [aux_sym_record_type_token3] = ACTIONS(11),
    [aux_sym_record_type_token4] = ACTIONS(11),
    [aux_sym_record_type_token5] = ACTIONS(11),
    [aux_sym_record_type_token6] = ACTIONS(11),
    [aux_sym_record_type_token7] = ACTIONS(11),
    [aux_sym_record_type_token8] = ACTIONS(11),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(11),
    [aux_sym_record_type_token11] = ACTIONS(11),
    [aux_sym_record_type_token12] = ACTIONS(11),
    [aux_sym_record_type_token13] = ACTIONS(11),
    [aux_sym_record_type_token14] = ACTIONS(11),
    [aux_sym_record_type_token15] = ACTIONS(11),
    [aux_sym_record_type_token16] = ACTIONS(11),
    [aux_sym_record_type_token17] = ACTIONS(11),
    [aux_sym_record_type_token18] = ACTIONS(11),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(11),
    [aux_sym_record_type_token22] = ACTIONS(11),
    [aux_sym_record_type_token23] = ACTIONS(11),
    [aux_sym_record_type_token24] = ACTIONS(11),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(11),
    [aux_sym_record_type_token27] = ACTIONS(11),
    [aux_sym_record_type_token28] = ACTIONS(11),
    [aux_sym_record_type_token29] = ACTIONS(11),
    [aux_sym_record_type_token30] = ACTIONS(11),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(11),
    [aux_sym_record_type_token33] = ACTIONS(11),
    [aux_sym_record_type_token34] = ACTIONS(11),
    [aux_sym_record_type_token35] = ACTIONS(11),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(11),
    [aux_sym_record_type_token38] = ACTIONS(11),
    [aux_sym_record_type_token39] = ACTIONS(11),
    [aux_sym_record_type_token40] = ACTIONS(11),
    [aux_sym_record_type_token41] = ACTIONS(11),
    [aux_sym_record_type_token42] = ACTIONS(11),
    [aux_sym_record_type_token43] = ACTIONS(11),
    [aux_sym_record_type_token44] = ACTIONS(11),
    [aux_sym_record_type_token45] = ACTIONS(11),
    [aux_sym_record_type_token46] = ACTIONS(11),
    [aux_sym_record_type_token47] = ACTIONS(11),
    [aux_sym_record_type_token48] = ACTIONS(11),
    [aux_sym_record_type_token49] = ACTIONS(11),
    [aux_sym_record_type_token50] = ACTIONS(11),
    [aux_sym_record_type_token51] = ACTIONS(11),
    [aux_sym_record_type_token52] = ACTIONS(11),
    [aux_sym_record_type_token53] = ACTIONS(11),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(11),
    [aux_sym_record_type_token57] = ACTIONS(11),
    [aux_sym_record_type_token58] = ACTIONS(11),
    [aux_sym_record_type_token59] = ACTIONS(11),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(11),
    [aux_sym_record_type_token63] = ACTIONS(11),
    [aux_sym_record_type_token64] = ACTIONS(11),
    [aux_sym_record_type_token65] = ACTIONS(11),
    [aux_sym_record_type_token66] = ACTIONS(11),
    [aux_sym_record_type_token67] = ACTIONS(11),
    [aux_sym_record_type_token68] = ACTIONS(11),
    [aux_sym_record_type_token69] = ACTIONS(11),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(11),
    [aux_sym_record_type_token72] = ACTIONS(11),
    [aux_sym_record_type_token73] = ACTIONS(11),
    [aux_sym_record_type_token74] = ACTIONS(11),
    [aux_sym_record_type_token75] = ACTIONS(11),
    [aux_sym_record_type_token76] = ACTIONS(11),
    [aux_sym_record_type_token77] = ACTIONS(11),
    [aux_sym_record_type_token78] = ACTIONS(11),
    [aux_sym_record_type_token79] = ACTIONS(11),
    [aux_sym_record_type_token80] = ACTIONS(11),
    [aux_sym_record_type_token81] = ACTIONS(11),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(11),
    [aux_sym_record_type_token85] = ACTIONS(11),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(11),
    [aux_sym_record_type_token89] = ACTIONS(11),
    [aux_sym_record_type_token90] = ACTIONS(11),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(11),
    [aux_sym_record_type_token93] = ACTIONS(11),
    [aux_sym_record_type_token94] = ACTIONS(11),
    [aux_sym_record_type_token95] = ACTIONS(11),
    [aux_sym_record_type_token96] = ACTIONS(11),
    [aux_sym_record_type_token97] = ACTIONS(11),
    [aux_sym_record_type_token98] = ACTIONS(11),
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
    [aux_sym_record_type_token110] = ACTIONS(11),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [aux_sym__identifier_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(25),
    [sym_money] = ACTIONS(27),
    [sym_rate] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_record_type] = STATE(6),
    [aux_sym_define_division_token1] = ACTIONS(29),
    [aux_sym_setup_division_token1] = ACTIONS(29),
    [aux_sym_select_division_token1] = ACTIONS(29),
    [aux_sym_sort_division_token1] = ACTIONS(29),
    [aux_sym_letter_division_token1] = ACTIONS(29),
    [aux_sym_print_division_token1] = ACTIONS(29),
    [aux_sym_total_division_token1] = ACTIONS(29),
    [aux_sym_record_type_token1] = ACTIONS(13),
    [aux_sym_record_type_token2] = ACTIONS(13),
    [aux_sym_record_type_token3] = ACTIONS(13),
    [aux_sym_record_type_token4] = ACTIONS(13),
    [aux_sym_record_type_token5] = ACTIONS(13),
    [aux_sym_record_type_token6] = ACTIONS(13),
    [aux_sym_record_type_token7] = ACTIONS(13),
    [aux_sym_record_type_token8] = ACTIONS(11),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(13),
    [aux_sym_record_type_token11] = ACTIONS(13),
    [aux_sym_record_type_token12] = ACTIONS(13),
    [aux_sym_record_type_token13] = ACTIONS(13),
    [aux_sym_record_type_token14] = ACTIONS(13),
    [aux_sym_record_type_token15] = ACTIONS(13),
    [aux_sym_record_type_token16] = ACTIONS(11),
    [aux_sym_record_type_token17] = ACTIONS(13),
    [aux_sym_record_type_token18] = ACTIONS(11),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(13),
    [aux_sym_record_type_token22] = ACTIONS(13),
    [aux_sym_record_type_token23] = ACTIONS(13),
    [aux_sym_record_type_token24] = ACTIONS(11),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(11),
    [aux_sym_record_type_token27] = ACTIONS(13),
    [aux_sym_record_type_token28] = ACTIONS(13),
    [aux_sym_record_type_token29] = ACTIONS(13),
    [aux_sym_record_type_token30] = ACTIONS(11),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(13),
    [aux_sym_record_type_token33] = ACTIONS(11),
    [aux_sym_record_type_token34] = ACTIONS(13),
    [aux_sym_record_type_token35] = ACTIONS(13),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(11),
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
    [aux_sym_record_type_token52] = ACTIONS(11),
    [aux_sym_record_type_token53] = ACTIONS(13),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(13),
    [aux_sym_record_type_token57] = ACTIONS(11),
    [aux_sym_record_type_token58] = ACTIONS(11),
    [aux_sym_record_type_token59] = ACTIONS(11),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(13),
    [aux_sym_record_type_token63] = ACTIONS(13),
    [aux_sym_record_type_token64] = ACTIONS(13),
    [aux_sym_record_type_token65] = ACTIONS(13),
    [aux_sym_record_type_token66] = ACTIONS(13),
    [aux_sym_record_type_token67] = ACTIONS(13),
    [aux_sym_record_type_token68] = ACTIONS(13),
    [aux_sym_record_type_token69] = ACTIONS(11),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(11),
    [aux_sym_record_type_token72] = ACTIONS(11),
    [aux_sym_record_type_token73] = ACTIONS(13),
    [aux_sym_record_type_token74] = ACTIONS(13),
    [aux_sym_record_type_token75] = ACTIONS(13),
    [aux_sym_record_type_token76] = ACTIONS(13),
    [aux_sym_record_type_token77] = ACTIONS(13),
    [aux_sym_record_type_token78] = ACTIONS(13),
    [aux_sym_record_type_token79] = ACTIONS(13),
    [aux_sym_record_type_token80] = ACTIONS(13),
    [aux_sym_record_type_token81] = ACTIONS(11),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(13),
    [aux_sym_record_type_token85] = ACTIONS(11),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(11),
    [aux_sym_record_type_token89] = ACTIONS(13),
    [aux_sym_record_type_token90] = ACTIONS(11),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(13),
    [aux_sym_record_type_token93] = ACTIONS(13),
    [aux_sym_record_type_token94] = ACTIONS(13),
    [aux_sym_record_type_token95] = ACTIONS(13),
    [aux_sym_record_type_token96] = ACTIONS(13),
    [aux_sym_record_type_token97] = ACTIONS(13),
    [aux_sym_record_type_token98] = ACTIONS(11),
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
    [aux_sym_record_type_token110] = ACTIONS(11),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_record_type] = STATE(297),
    [aux_sym_define_division_token1] = ACTIONS(31),
    [aux_sym_setup_division_token1] = ACTIONS(31),
    [aux_sym_select_division_token1] = ACTIONS(31),
    [aux_sym_sort_division_token1] = ACTIONS(31),
    [aux_sym_letter_division_token1] = ACTIONS(31),
    [aux_sym_print_division_token1] = ACTIONS(31),
    [aux_sym_total_division_token1] = ACTIONS(31),
    [aux_sym_record_type_token1] = ACTIONS(13),
    [aux_sym_record_type_token2] = ACTIONS(13),
    [aux_sym_record_type_token3] = ACTIONS(13),
    [aux_sym_record_type_token4] = ACTIONS(13),
    [aux_sym_record_type_token5] = ACTIONS(13),
    [aux_sym_record_type_token6] = ACTIONS(13),
    [aux_sym_record_type_token7] = ACTIONS(13),
    [aux_sym_record_type_token8] = ACTIONS(11),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(13),
    [aux_sym_record_type_token11] = ACTIONS(13),
    [aux_sym_record_type_token12] = ACTIONS(13),
    [aux_sym_record_type_token13] = ACTIONS(13),
    [aux_sym_record_type_token14] = ACTIONS(13),
    [aux_sym_record_type_token15] = ACTIONS(13),
    [aux_sym_record_type_token16] = ACTIONS(11),
    [aux_sym_record_type_token17] = ACTIONS(13),
    [aux_sym_record_type_token18] = ACTIONS(11),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(13),
    [aux_sym_record_type_token22] = ACTIONS(13),
    [aux_sym_record_type_token23] = ACTIONS(13),
    [aux_sym_record_type_token24] = ACTIONS(11),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(11),
    [aux_sym_record_type_token27] = ACTIONS(13),
    [aux_sym_record_type_token28] = ACTIONS(13),
    [aux_sym_record_type_token29] = ACTIONS(13),
    [aux_sym_record_type_token30] = ACTIONS(11),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(13),
    [aux_sym_record_type_token33] = ACTIONS(11),
    [aux_sym_record_type_token34] = ACTIONS(13),
    [aux_sym_record_type_token35] = ACTIONS(13),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(11),
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
    [aux_sym_record_type_token52] = ACTIONS(11),
    [aux_sym_record_type_token53] = ACTIONS(13),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(13),
    [aux_sym_record_type_token57] = ACTIONS(11),
    [aux_sym_record_type_token58] = ACTIONS(11),
    [aux_sym_record_type_token59] = ACTIONS(11),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(13),
    [aux_sym_record_type_token63] = ACTIONS(13),
    [aux_sym_record_type_token64] = ACTIONS(13),
    [aux_sym_record_type_token65] = ACTIONS(13),
    [aux_sym_record_type_token66] = ACTIONS(13),
    [aux_sym_record_type_token67] = ACTIONS(13),
    [aux_sym_record_type_token68] = ACTIONS(13),
    [aux_sym_record_type_token69] = ACTIONS(11),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(11),
    [aux_sym_record_type_token72] = ACTIONS(11),
    [aux_sym_record_type_token73] = ACTIONS(13),
    [aux_sym_record_type_token74] = ACTIONS(13),
    [aux_sym_record_type_token75] = ACTIONS(13),
    [aux_sym_record_type_token76] = ACTIONS(13),
    [aux_sym_record_type_token77] = ACTIONS(13),
    [aux_sym_record_type_token78] = ACTIONS(13),
    [aux_sym_record_type_token79] = ACTIONS(13),
    [aux_sym_record_type_token80] = ACTIONS(13),
    [aux_sym_record_type_token81] = ACTIONS(11),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(13),
    [aux_sym_record_type_token85] = ACTIONS(11),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(11),
    [aux_sym_record_type_token89] = ACTIONS(13),
    [aux_sym_record_type_token90] = ACTIONS(11),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(13),
    [aux_sym_record_type_token93] = ACTIONS(13),
    [aux_sym_record_type_token94] = ACTIONS(13),
    [aux_sym_record_type_token95] = ACTIONS(13),
    [aux_sym_record_type_token96] = ACTIONS(13),
    [aux_sym_record_type_token97] = ACTIONS(13),
    [aux_sym_record_type_token98] = ACTIONS(11),
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
    [aux_sym_record_type_token110] = ACTIONS(11),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym_define_division_token1] = ACTIONS(33),
    [aux_sym_setup_division_token1] = ACTIONS(33),
    [aux_sym_select_division_token1] = ACTIONS(33),
    [aux_sym_sort_division_token1] = ACTIONS(33),
    [aux_sym_letter_division_token1] = ACTIONS(33),
    [aux_sym_print_division_token1] = ACTIONS(33),
    [aux_sym_total_division_token1] = ACTIONS(33),
    [aux_sym_record_type_token1] = ACTIONS(33),
    [aux_sym_record_type_token2] = ACTIONS(33),
    [aux_sym_record_type_token3] = ACTIONS(33),
    [aux_sym_record_type_token4] = ACTIONS(33),
    [aux_sym_record_type_token5] = ACTIONS(33),
    [aux_sym_record_type_token6] = ACTIONS(33),
    [aux_sym_record_type_token7] = ACTIONS(33),
    [aux_sym_record_type_token8] = ACTIONS(35),
    [aux_sym_record_type_token9] = ACTIONS(33),
    [aux_sym_record_type_token10] = ACTIONS(33),
    [aux_sym_record_type_token11] = ACTIONS(33),
    [aux_sym_record_type_token12] = ACTIONS(33),
    [aux_sym_record_type_token13] = ACTIONS(33),
    [aux_sym_record_type_token14] = ACTIONS(33),
    [aux_sym_record_type_token15] = ACTIONS(33),
    [aux_sym_record_type_token16] = ACTIONS(35),
    [aux_sym_record_type_token17] = ACTIONS(33),
    [aux_sym_record_type_token18] = ACTIONS(35),
    [aux_sym_record_type_token19] = ACTIONS(33),
    [aux_sym_record_type_token20] = ACTIONS(33),
    [aux_sym_record_type_token21] = ACTIONS(33),
    [aux_sym_record_type_token22] = ACTIONS(33),
    [aux_sym_record_type_token23] = ACTIONS(33),
    [aux_sym_record_type_token24] = ACTIONS(35),
    [aux_sym_record_type_token25] = ACTIONS(33),
    [aux_sym_record_type_token26] = ACTIONS(35),
    [aux_sym_record_type_token27] = ACTIONS(33),
    [aux_sym_record_type_token28] = ACTIONS(33),
    [aux_sym_record_type_token29] = ACTIONS(33),
    [aux_sym_record_type_token30] = ACTIONS(35),
    [aux_sym_record_type_token31] = ACTIONS(33),
    [aux_sym_record_type_token32] = ACTIONS(33),
    [aux_sym_record_type_token33] = ACTIONS(35),
    [aux_sym_record_type_token34] = ACTIONS(33),
    [aux_sym_record_type_token35] = ACTIONS(33),
    [aux_sym_record_type_token36] = ACTIONS(33),
    [aux_sym_record_type_token37] = ACTIONS(35),
    [aux_sym_record_type_token38] = ACTIONS(33),
    [aux_sym_record_type_token39] = ACTIONS(33),
    [aux_sym_record_type_token40] = ACTIONS(33),
    [aux_sym_record_type_token41] = ACTIONS(33),
    [aux_sym_record_type_token42] = ACTIONS(33),
    [aux_sym_record_type_token43] = ACTIONS(33),
    [aux_sym_record_type_token44] = ACTIONS(33),
    [aux_sym_record_type_token45] = ACTIONS(33),
    [aux_sym_record_type_token46] = ACTIONS(33),
    [aux_sym_record_type_token47] = ACTIONS(33),
    [aux_sym_record_type_token48] = ACTIONS(33),
    [aux_sym_record_type_token49] = ACTIONS(33),
    [aux_sym_record_type_token50] = ACTIONS(33),
    [aux_sym_record_type_token51] = ACTIONS(33),
    [aux_sym_record_type_token52] = ACTIONS(35),
    [aux_sym_record_type_token53] = ACTIONS(33),
    [aux_sym_record_type_token54] = ACTIONS(33),
    [aux_sym_record_type_token55] = ACTIONS(33),
    [aux_sym_record_type_token56] = ACTIONS(33),
    [aux_sym_record_type_token57] = ACTIONS(35),
    [aux_sym_record_type_token58] = ACTIONS(35),
    [aux_sym_record_type_token59] = ACTIONS(35),
    [aux_sym_record_type_token60] = ACTIONS(33),
    [aux_sym_record_type_token61] = ACTIONS(33),
    [aux_sym_record_type_token62] = ACTIONS(33),
    [aux_sym_record_type_token63] = ACTIONS(33),
    [aux_sym_record_type_token64] = ACTIONS(33),
    [aux_sym_record_type_token65] = ACTIONS(33),
    [aux_sym_record_type_token66] = ACTIONS(33),
    [aux_sym_record_type_token67] = ACTIONS(33),
    [aux_sym_record_type_token68] = ACTIONS(33),
    [aux_sym_record_type_token69] = ACTIONS(35),
    [aux_sym_record_type_token70] = ACTIONS(33),
    [aux_sym_record_type_token71] = ACTIONS(35),
    [aux_sym_record_type_token72] = ACTIONS(35),
    [aux_sym_record_type_token73] = ACTIONS(33),
    [aux_sym_record_type_token74] = ACTIONS(33),
    [aux_sym_record_type_token75] = ACTIONS(33),
    [aux_sym_record_type_token76] = ACTIONS(33),
    [aux_sym_record_type_token77] = ACTIONS(33),
    [aux_sym_record_type_token78] = ACTIONS(33),
    [aux_sym_record_type_token79] = ACTIONS(33),
    [aux_sym_record_type_token80] = ACTIONS(33),
    [aux_sym_record_type_token81] = ACTIONS(35),
    [aux_sym_record_type_token82] = ACTIONS(33),
    [aux_sym_record_type_token83] = ACTIONS(33),
    [aux_sym_record_type_token84] = ACTIONS(33),
    [aux_sym_record_type_token85] = ACTIONS(35),
    [aux_sym_record_type_token86] = ACTIONS(33),
    [aux_sym_record_type_token87] = ACTIONS(33),
    [aux_sym_record_type_token88] = ACTIONS(35),
    [aux_sym_record_type_token89] = ACTIONS(33),
    [aux_sym_record_type_token90] = ACTIONS(35),
    [aux_sym_record_type_token91] = ACTIONS(33),
    [aux_sym_record_type_token92] = ACTIONS(33),
    [aux_sym_record_type_token93] = ACTIONS(33),
    [aux_sym_record_type_token94] = ACTIONS(33),
    [aux_sym_record_type_token95] = ACTIONS(33),
    [aux_sym_record_type_token96] = ACTIONS(33),
    [aux_sym_record_type_token97] = ACTIONS(33),
    [aux_sym_record_type_token98] = ACTIONS(35),
    [aux_sym_record_type_token99] = ACTIONS(33),
    [aux_sym_record_type_token100] = ACTIONS(33),
    [aux_sym_record_type_token101] = ACTIONS(33),
    [aux_sym_record_type_token102] = ACTIONS(33),
    [aux_sym_record_type_token103] = ACTIONS(33),
    [aux_sym_record_type_token104] = ACTIONS(33),
    [aux_sym_record_type_token105] = ACTIONS(33),
    [aux_sym_record_type_token106] = ACTIONS(33),
    [aux_sym_record_type_token107] = ACTIONS(33),
    [aux_sym_record_type_token108] = ACTIONS(33),
    [aux_sym_record_type_token109] = ACTIONS(33),
    [aux_sym_record_type_token110] = ACTIONS(35),
    [aux_sym_record_type_token111] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_record_type] = STATE(5),
    [aux_sym_record_type_token1] = ACTIONS(13),
    [aux_sym_record_type_token2] = ACTIONS(13),
    [aux_sym_record_type_token3] = ACTIONS(13),
    [aux_sym_record_type_token4] = ACTIONS(13),
    [aux_sym_record_type_token5] = ACTIONS(13),
    [aux_sym_record_type_token6] = ACTIONS(13),
    [aux_sym_record_type_token7] = ACTIONS(13),
    [aux_sym_record_type_token8] = ACTIONS(11),
    [aux_sym_record_type_token9] = ACTIONS(13),
    [aux_sym_record_type_token10] = ACTIONS(13),
    [aux_sym_record_type_token11] = ACTIONS(13),
    [aux_sym_record_type_token12] = ACTIONS(13),
    [aux_sym_record_type_token13] = ACTIONS(13),
    [aux_sym_record_type_token14] = ACTIONS(13),
    [aux_sym_record_type_token15] = ACTIONS(13),
    [aux_sym_record_type_token16] = ACTIONS(11),
    [aux_sym_record_type_token17] = ACTIONS(13),
    [aux_sym_record_type_token18] = ACTIONS(11),
    [aux_sym_record_type_token19] = ACTIONS(13),
    [aux_sym_record_type_token20] = ACTIONS(13),
    [aux_sym_record_type_token21] = ACTIONS(13),
    [aux_sym_record_type_token22] = ACTIONS(13),
    [aux_sym_record_type_token23] = ACTIONS(13),
    [aux_sym_record_type_token24] = ACTIONS(11),
    [aux_sym_record_type_token25] = ACTIONS(13),
    [aux_sym_record_type_token26] = ACTIONS(11),
    [aux_sym_record_type_token27] = ACTIONS(13),
    [aux_sym_record_type_token28] = ACTIONS(13),
    [aux_sym_record_type_token29] = ACTIONS(13),
    [aux_sym_record_type_token30] = ACTIONS(11),
    [aux_sym_record_type_token31] = ACTIONS(13),
    [aux_sym_record_type_token32] = ACTIONS(13),
    [aux_sym_record_type_token33] = ACTIONS(11),
    [aux_sym_record_type_token34] = ACTIONS(13),
    [aux_sym_record_type_token35] = ACTIONS(13),
    [aux_sym_record_type_token36] = ACTIONS(13),
    [aux_sym_record_type_token37] = ACTIONS(11),
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
    [aux_sym_record_type_token52] = ACTIONS(11),
    [aux_sym_record_type_token53] = ACTIONS(13),
    [aux_sym_record_type_token54] = ACTIONS(13),
    [aux_sym_record_type_token55] = ACTIONS(13),
    [aux_sym_record_type_token56] = ACTIONS(13),
    [aux_sym_record_type_token57] = ACTIONS(11),
    [aux_sym_record_type_token58] = ACTIONS(11),
    [aux_sym_record_type_token59] = ACTIONS(11),
    [aux_sym_record_type_token60] = ACTIONS(13),
    [aux_sym_record_type_token61] = ACTIONS(13),
    [aux_sym_record_type_token62] = ACTIONS(13),
    [aux_sym_record_type_token63] = ACTIONS(13),
    [aux_sym_record_type_token64] = ACTIONS(13),
    [aux_sym_record_type_token65] = ACTIONS(13),
    [aux_sym_record_type_token66] = ACTIONS(13),
    [aux_sym_record_type_token67] = ACTIONS(13),
    [aux_sym_record_type_token68] = ACTIONS(13),
    [aux_sym_record_type_token69] = ACTIONS(11),
    [aux_sym_record_type_token70] = ACTIONS(13),
    [aux_sym_record_type_token71] = ACTIONS(11),
    [aux_sym_record_type_token72] = ACTIONS(11),
    [aux_sym_record_type_token73] = ACTIONS(13),
    [aux_sym_record_type_token74] = ACTIONS(13),
    [aux_sym_record_type_token75] = ACTIONS(13),
    [aux_sym_record_type_token76] = ACTIONS(13),
    [aux_sym_record_type_token77] = ACTIONS(13),
    [aux_sym_record_type_token78] = ACTIONS(13),
    [aux_sym_record_type_token79] = ACTIONS(13),
    [aux_sym_record_type_token80] = ACTIONS(13),
    [aux_sym_record_type_token81] = ACTIONS(11),
    [aux_sym_record_type_token82] = ACTIONS(13),
    [aux_sym_record_type_token83] = ACTIONS(13),
    [aux_sym_record_type_token84] = ACTIONS(13),
    [aux_sym_record_type_token85] = ACTIONS(11),
    [aux_sym_record_type_token86] = ACTIONS(13),
    [aux_sym_record_type_token87] = ACTIONS(13),
    [aux_sym_record_type_token88] = ACTIONS(11),
    [aux_sym_record_type_token89] = ACTIONS(13),
    [aux_sym_record_type_token90] = ACTIONS(11),
    [aux_sym_record_type_token91] = ACTIONS(13),
    [aux_sym_record_type_token92] = ACTIONS(13),
    [aux_sym_record_type_token93] = ACTIONS(13),
    [aux_sym_record_type_token94] = ACTIONS(13),
    [aux_sym_record_type_token95] = ACTIONS(13),
    [aux_sym_record_type_token96] = ACTIONS(13),
    [aux_sym_record_type_token97] = ACTIONS(13),
    [aux_sym_record_type_token98] = ACTIONS(11),
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
    [aux_sym_record_type_token110] = ACTIONS(11),
    [aux_sym_record_type_token111] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_keyword] = STATE(184),
    [sym_string_literal] = STATE(184),
    [sym__identifier] = STATE(98),
    [sym_identifier] = STATE(185),
    [sym__array_identifier] = STATE(99),
    [sym_include_statement] = STATE(187),
    [sym_special_function] = STATE(184),
    [sym__datevalue] = STATE(188),
    [sym__rate] = STATE(188),
    [sym__money] = STATE(188),
    [sym__value] = STATE(188),
    [sym__format] = STATE(188),
    [sym__segment] = STATE(188),
    [sym__charactersearch] = STATE(188),
    [sym__length] = STATE(188),
    [sym__fileopen] = STATE(188),
    [sym__filereadline] = STATE(188),
    [sym_expression] = STATE(189),
    [sym_assignment_expression] = STATE(187),
    [sym__lhs_expression] = STATE(392),
    [sym_parenthesized_expression] = STATE(184),
    [sym_binary_expression] = STATE(187),
    [sym_primary_expression] = STATE(187),
    [sym_for_statement] = STATE(218),
    [sym_while_statement] = STATE(218),
    [sym_if_statement] = STATE(219),
    [sym_if_statement_no_block] = STATE(216),
    [sym_if_else_block] = STATE(216),
    [sym_if_else_no_block] = STATE(216),
    [sym_if_statement_block] = STATE(216),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(218),
    [sym_procedure_call] = STATE(218),
    [aux_sym_source_file_repeat3] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_keyword_token1] = ACTIONS(39),
    [aux_sym_keyword_token2] = ACTIONS(41),
    [aux_sym_keyword_token3] = ACTIONS(43),
    [aux_sym_keyword_token4] = ACTIONS(45),
    [aux_sym_keyword_token5] = ACTIONS(47),
    [aux_sym_keyword_token6] = ACTIONS(45),
    [aux_sym_keyword_token7] = ACTIONS(45),
    [aux_sym_keyword_token8] = ACTIONS(49),
    [aux_sym_keyword_token9] = ACTIONS(51),
    [aux_sym_keyword_token10] = ACTIONS(53),
    [aux_sym_keyword_token11] = ACTIONS(55),
    [aux_sym_keyword_token12] = ACTIONS(45),
    [aux_sym_keyword_token13] = ACTIONS(45),
    [aux_sym_keyword_token14] = ACTIONS(57),
    [aux_sym_keyword_token15] = ACTIONS(59),
    [aux_sym_keyword_token16] = ACTIONS(61),
    [aux_sym_keyword_token17] = ACTIONS(63),
    [aux_sym_keyword_token18] = ACTIONS(65),
    [aux_sym_keyword_token19] = ACTIONS(67),
    [aux_sym_keyword_token20] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym__identifier_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(75),
    [sym_money] = ACTIONS(77),
    [sym_date] = ACTIONS(77),
    [sym_rate] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(81),
    [aux_sym_procedure_definition_token1] = ACTIONS(83),
  },
  [10] = {
    [sym_keyword] = STATE(184),
    [sym_string_literal] = STATE(184),
    [sym__identifier] = STATE(98),
    [sym_identifier] = STATE(185),
    [sym__array_identifier] = STATE(99),
    [sym_include_statement] = STATE(187),
    [sym_special_function] = STATE(184),
    [sym__datevalue] = STATE(188),
    [sym__rate] = STATE(188),
    [sym__money] = STATE(188),
    [sym__value] = STATE(188),
    [sym__format] = STATE(188),
    [sym__segment] = STATE(188),
    [sym__charactersearch] = STATE(188),
    [sym__length] = STATE(188),
    [sym__fileopen] = STATE(188),
    [sym__filereadline] = STATE(188),
    [sym_expression] = STATE(189),
    [sym_assignment_expression] = STATE(187),
    [sym__lhs_expression] = STATE(392),
    [sym_parenthesized_expression] = STATE(184),
    [sym_binary_expression] = STATE(187),
    [sym_primary_expression] = STATE(187),
    [sym_for_statement] = STATE(218),
    [sym_while_statement] = STATE(218),
    [sym_if_statement] = STATE(219),
    [sym_if_statement_no_block] = STATE(216),
    [sym_if_else_block] = STATE(216),
    [sym_if_else_no_block] = STATE(216),
    [sym_if_statement_block] = STATE(216),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(218),
    [sym_procedure_call] = STATE(218),
    [aux_sym_source_file_repeat3] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_keyword_token1] = ACTIONS(39),
    [aux_sym_keyword_token2] = ACTIONS(41),
    [aux_sym_keyword_token3] = ACTIONS(43),
    [aux_sym_keyword_token4] = ACTIONS(45),
    [aux_sym_keyword_token5] = ACTIONS(85),
    [aux_sym_keyword_token6] = ACTIONS(45),
    [aux_sym_keyword_token7] = ACTIONS(45),
    [aux_sym_keyword_token8] = ACTIONS(49),
    [aux_sym_keyword_token9] = ACTIONS(51),
    [aux_sym_keyword_token10] = ACTIONS(53),
    [aux_sym_keyword_token11] = ACTIONS(55),
    [aux_sym_keyword_token12] = ACTIONS(45),
    [aux_sym_keyword_token13] = ACTIONS(45),
    [aux_sym_keyword_token14] = ACTIONS(57),
    [aux_sym_keyword_token15] = ACTIONS(59),
    [aux_sym_keyword_token16] = ACTIONS(61),
    [aux_sym_keyword_token17] = ACTIONS(63),
    [aux_sym_keyword_token18] = ACTIONS(65),
    [aux_sym_keyword_token19] = ACTIONS(67),
    [aux_sym_keyword_token20] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym__identifier_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(75),
    [sym_money] = ACTIONS(77),
    [sym_date] = ACTIONS(77),
    [sym_rate] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(81),
    [aux_sym_procedure_definition_token1] = ACTIONS(83),
  },
  [11] = {
    [sym_keyword] = STATE(184),
    [sym_string_literal] = STATE(184),
    [sym__identifier] = STATE(98),
    [sym_identifier] = STATE(185),
    [sym__array_identifier] = STATE(99),
    [sym_include_statement] = STATE(187),
    [sym_special_function] = STATE(184),
    [sym__datevalue] = STATE(188),
    [sym__rate] = STATE(188),
    [sym__money] = STATE(188),
    [sym__value] = STATE(188),
    [sym__format] = STATE(188),
    [sym__segment] = STATE(188),
    [sym__charactersearch] = STATE(188),
    [sym__length] = STATE(188),
    [sym__fileopen] = STATE(188),
    [sym__filereadline] = STATE(188),
    [sym_expression] = STATE(189),
    [sym_assignment_expression] = STATE(187),
    [sym__lhs_expression] = STATE(392),
    [sym_parenthesized_expression] = STATE(184),
    [sym_binary_expression] = STATE(187),
    [sym_primary_expression] = STATE(187),
    [sym_for_statement] = STATE(218),
    [sym_while_statement] = STATE(218),
    [sym_if_statement] = STATE(219),
    [sym_if_statement_no_block] = STATE(216),
    [sym_if_else_block] = STATE(216),
    [sym_if_else_no_block] = STATE(216),
    [sym_if_statement_block] = STATE(216),
    [sym_statement] = STATE(36),
    [sym_procedure_definition] = STATE(218),
    [sym_procedure_call] = STATE(218),
    [aux_sym_source_file_repeat3] = STATE(36),
    [aux_sym_keyword_token1] = ACTIONS(39),
    [aux_sym_keyword_token2] = ACTIONS(41),
    [aux_sym_keyword_token3] = ACTIONS(43),
    [aux_sym_keyword_token4] = ACTIONS(45),
    [aux_sym_keyword_token5] = ACTIONS(87),
    [aux_sym_keyword_token6] = ACTIONS(45),
    [aux_sym_keyword_token7] = ACTIONS(45),
    [aux_sym_keyword_token8] = ACTIONS(49),
    [aux_sym_keyword_token9] = ACTIONS(51),
    [aux_sym_keyword_token10] = ACTIONS(53),
    [aux_sym_keyword_token11] = ACTIONS(55),
    [aux_sym_keyword_token12] = ACTIONS(45),
    [aux_sym_keyword_token13] = ACTIONS(45),
    [aux_sym_keyword_token14] = ACTIONS(57),
    [aux_sym_keyword_token15] = ACTIONS(59),
    [aux_sym_keyword_token16] = ACTIONS(61),
    [aux_sym_keyword_token17] = ACTIONS(63),
    [aux_sym_keyword_token18] = ACTIONS(65),
    [aux_sym_keyword_token19] = ACTIONS(67),
    [aux_sym_keyword_token20] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym__identifier_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(75),
    [sym_money] = ACTIONS(77),
    [sym_date] = ACTIONS(77),
    [sym_rate] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(81),
    [aux_sym_procedure_definition_token1] = ACTIONS(83),
  },
  [12] = {
    [sym_keyword] = STATE(184),
    [sym_string_literal] = STATE(184),
    [sym__identifier] = STATE(98),
    [sym_identifier] = STATE(185),
    [sym__array_identifier] = STATE(99),
    [sym_include_statement] = STATE(187),
    [sym_special_function] = STATE(184),
    [sym__datevalue] = STATE(188),
    [sym__rate] = STATE(188),
    [sym__money] = STATE(188),
    [sym__value] = STATE(188),
    [sym__format] = STATE(188),
    [sym__segment] = STATE(188),
    [sym__charactersearch] = STATE(188),
    [sym__length] = STATE(188),
    [sym__fileopen] = STATE(188),
    [sym__filereadline] = STATE(188),
    [sym_expression] = STATE(189),
    [sym_assignment_expression] = STATE(187),
    [sym__lhs_expression] = STATE(392),
    [sym_parenthesized_expression] = STATE(184),
    [sym_binary_expression] = STATE(187),
    [sym_primary_expression] = STATE(187),
    [sym_for_statement] = STATE(218),
    [sym_while_statement] = STATE(218),
    [sym_if_statement] = STATE(219),
    [sym_if_statement_no_block] = STATE(216),
    [sym_if_else_block] = STATE(216),
    [sym_if_else_no_block] = STATE(216),
    [sym_if_statement_block] = STATE(216),
    [sym_statement] = STATE(23),
    [sym_procedure_definition] = STATE(218),
    [sym_procedure_call] = STATE(218),
    [aux_sym_source_file_repeat3] = STATE(23),
    [aux_sym_keyword_token1] = ACTIONS(39),
    [aux_sym_keyword_token2] = ACTIONS(41),
    [aux_sym_keyword_token3] = ACTIONS(43),
    [aux_sym_keyword_token4] = ACTIONS(45),
    [aux_sym_keyword_token5] = ACTIONS(89),
    [aux_sym_keyword_token6] = ACTIONS(45),
    [aux_sym_keyword_token7] = ACTIONS(45),
    [aux_sym_keyword_token8] = ACTIONS(49),
    [aux_sym_keyword_token9] = ACTIONS(51),
    [aux_sym_keyword_token10] = ACTIONS(53),
    [aux_sym_keyword_token11] = ACTIONS(55),
    [aux_sym_keyword_token12] = ACTIONS(45),
    [aux_sym_keyword_token13] = ACTIONS(45),
    [aux_sym_keyword_token14] = ACTIONS(57),
    [aux_sym_keyword_token15] = ACTIONS(59),
    [aux_sym_keyword_token16] = ACTIONS(61),
    [aux_sym_keyword_token17] = ACTIONS(63),
    [aux_sym_keyword_token18] = ACTIONS(65),
    [aux_sym_keyword_token19] = ACTIONS(67),
    [aux_sym_keyword_token20] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym__identifier_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(75),
    [sym_money] = ACTIONS(77),
    [sym_date] = ACTIONS(77),
    [sym_rate] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(81),
    [aux_sym_procedure_definition_token1] = ACTIONS(83),
  },
  [13] = {
    [sym_keyword] = STATE(128),
    [sym_string_literal] = STATE(128),
    [sym__identifier] = STATE(153),
    [sym_identifier] = STATE(103),
    [sym__array_identifier] = STATE(152),
    [sym_include_statement] = STATE(126),
    [sym_special_function] = STATE(128),
    [sym__datevalue] = STATE(124),
    [sym__rate] = STATE(124),
    [sym__money] = STATE(124),
    [sym__value] = STATE(124),
    [sym__format] = STATE(124),
    [sym__segment] = STATE(124),
    [sym__charactersearch] = STATE(124),
    [sym__length] = STATE(124),
    [sym__fileopen] = STATE(124),
    [sym__filereadline] = STATE(124),
    [sym_expression] = STATE(122),
    [sym_assignment_expression] = STATE(126),
    [sym__lhs_expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(128),
    [sym_binary_expression] = STATE(126),
    [sym_primary_expression] = STATE(126),
    [sym_for_statement] = STATE(206),
    [sym_while_statement] = STATE(206),
    [sym_if_statement] = STATE(207),
    [sym_if_statement_no_block] = STATE(208),
    [sym_if_else_block] = STATE(208),
    [sym_if_else_no_block] = STATE(208),
    [sym_if_statement_block] = STATE(208),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(206),
    [sym_procedure_call] = STATE(206),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_keyword_token1] = ACTIONS(93),
    [aux_sym_keyword_token2] = ACTIONS(96),
    [aux_sym_keyword_token3] = ACTIONS(99),
    [aux_sym_keyword_token4] = ACTIONS(102),
    [aux_sym_keyword_token5] = ACTIONS(102),
    [aux_sym_keyword_token6] = ACTIONS(102),
    [aux_sym_keyword_token7] = ACTIONS(102),
    [aux_sym_keyword_token8] = ACTIONS(105),
    [aux_sym_keyword_token9] = ACTIONS(108),
    [aux_sym_keyword_token10] = ACTIONS(111),
    [aux_sym_keyword_token11] = ACTIONS(114),
    [aux_sym_keyword_token12] = ACTIONS(102),
    [aux_sym_keyword_token13] = ACTIONS(102),
    [aux_sym_keyword_token14] = ACTIONS(117),
    [aux_sym_keyword_token15] = ACTIONS(120),
    [aux_sym_keyword_token16] = ACTIONS(123),
    [aux_sym_keyword_token17] = ACTIONS(126),
    [aux_sym_keyword_token18] = ACTIONS(129),
    [aux_sym_keyword_token19] = ACTIONS(132),
    [aux_sym_keyword_token20] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [aux_sym__identifier_token1] = ACTIONS(144),
    [sym_number] = ACTIONS(147),
    [sym_money] = ACTIONS(150),
    [sym_date] = ACTIONS(150),
    [sym_rate] = ACTIONS(150),
    [anon_sym_POUND] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(156),
  },
  [14] = {
    [sym_keyword] = STATE(128),
    [sym_string_literal] = STATE(128),
    [sym__identifier] = STATE(153),
    [sym_identifier] = STATE(103),
    [sym__array_identifier] = STATE(152),
    [sym_include_statement] = STATE(126),
    [sym_special_function] = STATE(128),
    [sym__datevalue] = STATE(124),
    [sym__rate] = STATE(124),
    [sym__money] = STATE(124),
    [sym__value] = STATE(124),
    [sym__format] = STATE(124),
    [sym__segment] = STATE(124),
    [sym__charactersearch] = STATE(124),
    [sym__length] = STATE(124),
    [sym__fileopen] = STATE(124),
    [sym__filereadline] = STATE(124),
    [sym_expression] = STATE(122),
    [sym_assignment_expression] = STATE(126),
    [sym__lhs_expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(128),
    [sym_binary_expression] = STATE(126),
    [sym_primary_expression] = STATE(126),
    [sym_for_statement] = STATE(206),
    [sym_while_statement] = STATE(206),
    [sym_if_statement] = STATE(207),
    [sym_if_statement_no_block] = STATE(208),
    [sym_if_else_block] = STATE(208),
    [sym_if_else_no_block] = STATE(208),
    [sym_if_statement_block] = STATE(208),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(206),
    [sym_procedure_call] = STATE(206),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_keyword_token1] = ACTIONS(161),
    [aux_sym_keyword_token2] = ACTIONS(163),
    [aux_sym_keyword_token3] = ACTIONS(165),
    [aux_sym_keyword_token4] = ACTIONS(167),
    [aux_sym_keyword_token5] = ACTIONS(167),
    [aux_sym_keyword_token6] = ACTIONS(167),
    [aux_sym_keyword_token7] = ACTIONS(167),
    [aux_sym_keyword_token8] = ACTIONS(169),
    [aux_sym_keyword_token9] = ACTIONS(171),
    [aux_sym_keyword_token10] = ACTIONS(173),
    [aux_sym_keyword_token11] = ACTIONS(175),
    [aux_sym_keyword_token12] = ACTIONS(167),
    [aux_sym_keyword_token13] = ACTIONS(167),
    [aux_sym_keyword_token14] = ACTIONS(177),
    [aux_sym_keyword_token15] = ACTIONS(179),
    [aux_sym_keyword_token16] = ACTIONS(181),
    [aux_sym_keyword_token17] = ACTIONS(183),
    [aux_sym_keyword_token18] = ACTIONS(185),
    [aux_sym_keyword_token19] = ACTIONS(187),
    [aux_sym_keyword_token20] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [aux_sym__identifier_token1] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_money] = ACTIONS(199),
    [sym_date] = ACTIONS(199),
    [sym_rate] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(203),
  },
  [15] = {
    [sym_keyword] = STATE(128),
    [sym_string_literal] = STATE(128),
    [sym__identifier] = STATE(153),
    [sym_identifier] = STATE(103),
    [sym__array_identifier] = STATE(152),
    [sym_include_statement] = STATE(126),
    [sym_special_function] = STATE(128),
    [sym__datevalue] = STATE(124),
    [sym__rate] = STATE(124),
    [sym__money] = STATE(124),
    [sym__value] = STATE(124),
    [sym__format] = STATE(124),
    [sym__segment] = STATE(124),
    [sym__charactersearch] = STATE(124),
    [sym__length] = STATE(124),
    [sym__fileopen] = STATE(124),
    [sym__filereadline] = STATE(124),
    [sym_expression] = STATE(122),
    [sym_assignment_expression] = STATE(126),
    [sym__lhs_expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(128),
    [sym_binary_expression] = STATE(126),
    [sym_primary_expression] = STATE(126),
    [sym_for_statement] = STATE(206),
    [sym_while_statement] = STATE(206),
    [sym_if_statement] = STATE(207),
    [sym_if_statement_no_block] = STATE(208),
    [sym_if_else_block] = STATE(208),
    [sym_if_else_no_block] = STATE(208),
    [sym_if_statement_block] = STATE(208),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(206),
    [sym_procedure_call] = STATE(206),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_keyword_token1] = ACTIONS(161),
    [aux_sym_keyword_token2] = ACTIONS(163),
    [aux_sym_keyword_token3] = ACTIONS(165),
    [aux_sym_keyword_token4] = ACTIONS(167),
    [aux_sym_keyword_token5] = ACTIONS(167),
    [aux_sym_keyword_token6] = ACTIONS(167),
    [aux_sym_keyword_token7] = ACTIONS(167),
    [aux_sym_keyword_token8] = ACTIONS(169),
    [aux_sym_keyword_token9] = ACTIONS(171),
    [aux_sym_keyword_token10] = ACTIONS(173),
    [aux_sym_keyword_token11] = ACTIONS(175),
    [aux_sym_keyword_token12] = ACTIONS(167),
    [aux_sym_keyword_token13] = ACTIONS(167),
    [aux_sym_keyword_token14] = ACTIONS(177),
    [aux_sym_keyword_token15] = ACTIONS(179),
    [aux_sym_keyword_token16] = ACTIONS(181),
    [aux_sym_keyword_token17] = ACTIONS(183),
    [aux_sym_keyword_token18] = ACTIONS(185),
    [aux_sym_keyword_token19] = ACTIONS(187),
    [aux_sym_keyword_token20] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [aux_sym__identifier_token1] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_money] = ACTIONS(199),
    [sym_date] = ACTIONS(199),
    [sym_rate] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(203),
  },
  [16] = {
    [sym_keyword] = STATE(128),
    [sym_string_literal] = STATE(128),
    [sym__identifier] = STATE(153),
    [sym_identifier] = STATE(103),
    [sym__array_identifier] = STATE(152),
    [sym_include_statement] = STATE(126),
    [sym_special_function] = STATE(128),
    [sym__datevalue] = STATE(124),
    [sym__rate] = STATE(124),
    [sym__money] = STATE(124),
    [sym__value] = STATE(124),
    [sym__format] = STATE(124),
    [sym__segment] = STATE(124),
    [sym__charactersearch] = STATE(124),
    [sym__length] = STATE(124),
    [sym__fileopen] = STATE(124),
    [sym__filereadline] = STATE(124),
    [sym_expression] = STATE(122),
    [sym_assignment_expression] = STATE(126),
    [sym__lhs_expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(128),
    [sym_binary_expression] = STATE(126),
    [sym_primary_expression] = STATE(126),
    [sym_for_statement] = STATE(206),
    [sym_while_statement] = STATE(206),
    [sym_if_statement] = STATE(207),
    [sym_if_statement_no_block] = STATE(208),
    [sym_if_else_block] = STATE(208),
    [sym_if_else_no_block] = STATE(208),
    [sym_if_statement_block] = STATE(208),
    [sym_statement] = STATE(18),
    [sym_procedure_definition] = STATE(206),
    [sym_procedure_call] = STATE(206),
    [aux_sym_source_file_repeat3] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_keyword_token1] = ACTIONS(161),
    [aux_sym_keyword_token2] = ACTIONS(163),
    [aux_sym_keyword_token3] = ACTIONS(165),
    [aux_sym_keyword_token4] = ACTIONS(167),
    [aux_sym_keyword_token5] = ACTIONS(167),
    [aux_sym_keyword_token6] = ACTIONS(167),
    [aux_sym_keyword_token7] = ACTIONS(167),
    [aux_sym_keyword_token8] = ACTIONS(169),
    [aux_sym_keyword_token9] = ACTIONS(171),
    [aux_sym_keyword_token10] = ACTIONS(173),
    [aux_sym_keyword_token11] = ACTIONS(175),
    [aux_sym_keyword_token12] = ACTIONS(167),
    [aux_sym_keyword_token13] = ACTIONS(167),
    [aux_sym_keyword_token14] = ACTIONS(177),
    [aux_sym_keyword_token15] = ACTIONS(179),
    [aux_sym_keyword_token16] = ACTIONS(181),
    [aux_sym_keyword_token17] = ACTIONS(183),
    [aux_sym_keyword_token18] = ACTIONS(185),
    [aux_sym_keyword_token19] = ACTIONS(187),
    [aux_sym_keyword_token20] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [aux_sym__identifier_token1] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_money] = ACTIONS(199),
    [sym_date] = ACTIONS(199),
    [sym_rate] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(203),
  },
  [17] = {
    [sym_keyword] = STATE(128),
    [sym_string_literal] = STATE(128),
    [sym__identifier] = STATE(153),
    [sym_identifier] = STATE(103),
    [sym__array_identifier] = STATE(152),
    [sym_include_statement] = STATE(126),
    [sym_special_function] = STATE(128),
    [sym__datevalue] = STATE(124),
    [sym__rate] = STATE(124),
    [sym__money] = STATE(124),
    [sym__value] = STATE(124),
    [sym__format] = STATE(124),
    [sym__segment] = STATE(124),
    [sym__charactersearch] = STATE(124),
    [sym__length] = STATE(124),
    [sym__fileopen] = STATE(124),
    [sym__filereadline] = STATE(124),
    [sym_expression] = STATE(122),
    [sym_assignment_expression] = STATE(126),
    [sym__lhs_expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(128),
    [sym_binary_expression] = STATE(126),
    [sym_primary_expression] = STATE(126),
    [sym_for_statement] = STATE(206),
    [sym_while_statement] = STATE(206),
    [sym_if_statement] = STATE(207),
    [sym_if_statement_no_block] = STATE(208),
    [sym_if_else_block] = STATE(208),
    [sym_if_else_no_block] = STATE(208),
    [sym_if_statement_block] = STATE(208),
    [sym_statement] = STATE(14),
    [sym_procedure_definition] = STATE(206),
    [sym_procedure_call] = STATE(206),
    [aux_sym_source_file_repeat3] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_keyword_token1] = ACTIONS(161),
    [aux_sym_keyword_token2] = ACTIONS(163),
    [aux_sym_keyword_token3] = ACTIONS(165),
    [aux_sym_keyword_token4] = ACTIONS(167),
    [aux_sym_keyword_token5] = ACTIONS(167),
    [aux_sym_keyword_token6] = ACTIONS(167),
    [aux_sym_keyword_token7] = ACTIONS(167),
    [aux_sym_keyword_token8] = ACTIONS(169),
    [aux_sym_keyword_token9] = ACTIONS(171),
    [aux_sym_keyword_token10] = ACTIONS(173),
    [aux_sym_keyword_token11] = ACTIONS(175),
    [aux_sym_keyword_token12] = ACTIONS(167),
    [aux_sym_keyword_token13] = ACTIONS(167),
    [aux_sym_keyword_token14] = ACTIONS(177),
    [aux_sym_keyword_token15] = ACTIONS(179),
    [aux_sym_keyword_token16] = ACTIONS(181),
    [aux_sym_keyword_token17] = ACTIONS(183),
    [aux_sym_keyword_token18] = ACTIONS(185),
    [aux_sym_keyword_token19] = ACTIONS(187),
    [aux_sym_keyword_token20] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [aux_sym__identifier_token1] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_money] = ACTIONS(199),
    [sym_date] = ACTIONS(199),
    [sym_rate] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(203),
  },
  [18] = {
    [sym_keyword] = STATE(128),
    [sym_string_literal] = STATE(128),
    [sym__identifier] = STATE(153),
    [sym_identifier] = STATE(103),
    [sym__array_identifier] = STATE(152),
    [sym_include_statement] = STATE(126),
    [sym_special_function] = STATE(128),
    [sym__datevalue] = STATE(124),
    [sym__rate] = STATE(124),
    [sym__money] = STATE(124),
    [sym__value] = STATE(124),
    [sym__format] = STATE(124),
    [sym__segment] = STATE(124),
    [sym__charactersearch] = STATE(124),
    [sym__length] = STATE(124),
    [sym__fileopen] = STATE(124),
    [sym__filereadline] = STATE(124),
    [sym_expression] = STATE(122),
    [sym_assignment_expression] = STATE(126),
    [sym__lhs_expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(128),
    [sym_binary_expression] = STATE(126),
    [sym_primary_expression] = STATE(126),
    [sym_for_statement] = STATE(206),
    [sym_while_statement] = STATE(206),
    [sym_if_statement] = STATE(207),
    [sym_if_statement_no_block] = STATE(208),
    [sym_if_else_block] = STATE(208),
    [sym_if_else_no_block] = STATE(208),
    [sym_if_statement_block] = STATE(208),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(206),
    [sym_procedure_call] = STATE(206),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_keyword_token1] = ACTIONS(161),
    [aux_sym_keyword_token2] = ACTIONS(163),
    [aux_sym_keyword_token3] = ACTIONS(165),
    [aux_sym_keyword_token4] = ACTIONS(167),
    [aux_sym_keyword_token5] = ACTIONS(167),
    [aux_sym_keyword_token6] = ACTIONS(167),
    [aux_sym_keyword_token7] = ACTIONS(167),
    [aux_sym_keyword_token8] = ACTIONS(169),
    [aux_sym_keyword_token9] = ACTIONS(171),
    [aux_sym_keyword_token10] = ACTIONS(173),
    [aux_sym_keyword_token11] = ACTIONS(175),
    [aux_sym_keyword_token12] = ACTIONS(167),
    [aux_sym_keyword_token13] = ACTIONS(167),
    [aux_sym_keyword_token14] = ACTIONS(177),
    [aux_sym_keyword_token15] = ACTIONS(179),
    [aux_sym_keyword_token16] = ACTIONS(181),
    [aux_sym_keyword_token17] = ACTIONS(183),
    [aux_sym_keyword_token18] = ACTIONS(185),
    [aux_sym_keyword_token19] = ACTIONS(187),
    [aux_sym_keyword_token20] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [aux_sym__identifier_token1] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_money] = ACTIONS(199),
    [sym_date] = ACTIONS(199),
    [sym_rate] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(203),
  },
  [19] = {
    [sym_keyword] = STATE(128),
    [sym_string_literal] = STATE(128),
    [sym__identifier] = STATE(153),
    [sym_identifier] = STATE(103),
    [sym__array_identifier] = STATE(152),
    [sym_include_statement] = STATE(126),
    [sym_special_function] = STATE(128),
    [sym__datevalue] = STATE(124),
    [sym__rate] = STATE(124),
    [sym__money] = STATE(124),
    [sym__value] = STATE(124),
    [sym__format] = STATE(124),
    [sym__segment] = STATE(124),
    [sym__charactersearch] = STATE(124),
    [sym__length] = STATE(124),
    [sym__fileopen] = STATE(124),
    [sym__filereadline] = STATE(124),
    [sym_expression] = STATE(122),
    [sym_assignment_expression] = STATE(126),
    [sym__lhs_expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(128),
    [sym_binary_expression] = STATE(126),
    [sym_primary_expression] = STATE(126),
    [sym_for_statement] = STATE(206),
    [sym_while_statement] = STATE(206),
    [sym_if_statement] = STATE(207),
    [sym_if_statement_no_block] = STATE(208),
    [sym_if_else_block] = STATE(208),
    [sym_if_else_no_block] = STATE(208),
    [sym_if_statement_block] = STATE(208),
    [sym_statement] = STATE(15),
    [sym_procedure_definition] = STATE(206),
    [sym_procedure_call] = STATE(206),
    [aux_sym_source_file_repeat3] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_keyword_token1] = ACTIONS(161),
    [aux_sym_keyword_token2] = ACTIONS(163),
    [aux_sym_keyword_token3] = ACTIONS(165),
    [aux_sym_keyword_token4] = ACTIONS(167),
    [aux_sym_keyword_token5] = ACTIONS(167),
    [aux_sym_keyword_token6] = ACTIONS(167),
    [aux_sym_keyword_token7] = ACTIONS(167),
    [aux_sym_keyword_token8] = ACTIONS(169),
    [aux_sym_keyword_token9] = ACTIONS(171),
    [aux_sym_keyword_token10] = ACTIONS(173),
    [aux_sym_keyword_token11] = ACTIONS(175),
    [aux_sym_keyword_token12] = ACTIONS(167),
    [aux_sym_keyword_token13] = ACTIONS(167),
    [aux_sym_keyword_token14] = ACTIONS(177),
    [aux_sym_keyword_token15] = ACTIONS(179),
    [aux_sym_keyword_token16] = ACTIONS(181),
    [aux_sym_keyword_token17] = ACTIONS(183),
    [aux_sym_keyword_token18] = ACTIONS(185),
    [aux_sym_keyword_token19] = ACTIONS(187),
    [aux_sym_keyword_token20] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [aux_sym__identifier_token1] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_money] = ACTIONS(199),
    [sym_date] = ACTIONS(199),
    [sym_rate] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(203),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(291), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [121] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(245), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(35), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [258] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_keyword_token1,
    ACTIONS(250), 1,
      aux_sym_keyword_token2,
    ACTIONS(253), 1,
      aux_sym_keyword_token3,
    ACTIONS(259), 1,
      aux_sym_keyword_token8,
    ACTIONS(262), 1,
      aux_sym_keyword_token9,
    ACTIONS(265), 1,
      aux_sym_keyword_token10,
    ACTIONS(268), 1,
      aux_sym_keyword_token11,
    ACTIONS(271), 1,
      aux_sym_keyword_token14,
    ACTIONS(274), 1,
      aux_sym_keyword_token15,
    ACTIONS(277), 1,
      aux_sym_keyword_token16,
    ACTIONS(280), 1,
      aux_sym_keyword_token17,
    ACTIONS(283), 1,
      aux_sym_keyword_token18,
    ACTIONS(286), 1,
      aux_sym_keyword_token19,
    ACTIONS(289), 1,
      aux_sym_keyword_token20,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      aux_sym__identifier_token1,
    ACTIONS(301), 1,
      sym_number,
    ACTIONS(307), 1,
      anon_sym_POUND,
    ACTIONS(310), 1,
      aux_sym_procedure_definition_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(304), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(256), 6,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [393] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(313), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [530] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(315), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(28), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [667] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(317), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(33), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [804] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(319), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [941] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(270), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [1062] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(321), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [1199] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(26), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 6,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [1334] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(323), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(32), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [1471] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(325), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(34), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [1608] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(327), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [1745] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(329), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [1882] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(331), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [2019] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(333), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [2156] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(335), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [2293] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(337), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [2430] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(339), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [2567] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(341), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(42), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [2704] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(343), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [2841] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(345), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(40), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [2978] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(347), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [3115] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(287), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(37), 6,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [3235] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(268), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(37), 6,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [3355] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_keyword_token1,
    ACTIONS(163), 1,
      aux_sym_keyword_token2,
    ACTIONS(165), 1,
      aux_sym_keyword_token3,
    ACTIONS(169), 1,
      aux_sym_keyword_token8,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(349), 1,
      aux_sym_keyword_token4,
    STATE(103), 1,
      sym_identifier,
    STATE(122), 1,
      sym_expression,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(202), 1,
      sym_statement,
    STATE(207), 1,
      sym_if_statement,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(206), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(208), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    ACTIONS(167), 5,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [3491] = 36,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_token1,
    ACTIONS(41), 1,
      aux_sym_keyword_token2,
    ACTIONS(43), 1,
      aux_sym_keyword_token3,
    ACTIONS(49), 1,
      aux_sym_keyword_token8,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(351), 1,
      aux_sym_keyword_token4,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      sym_expression,
    STATE(217), 1,
      sym_statement,
    STATE(219), 1,
      sym_if_statement,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(216), 4,
      sym_if_statement_no_block,
      sym_if_else_block,
      sym_if_else_no_block,
      sym_if_statement_block,
    STATE(218), 4,
      sym_for_statement,
      sym_while_statement,
      sym_procedure_definition,
      sym_procedure_call,
    ACTIONS(45), 5,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [3627] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(242), 1,
      sym_expression,
    STATE(266), 1,
      sym_identifier,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [3732] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_identifier,
    STATE(110), 1,
      sym_expression,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(167), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [3837] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(289), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [3942] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(260), 1,
      sym_expression,
    STATE(266), 1,
      sym_identifier,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4047] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(284), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4152] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(285), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4257] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(259), 1,
      sym_expression,
    STATE(266), 1,
      sym_identifier,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4362] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(286), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4467] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(272), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4572] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(273), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4677] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_identifier,
    STATE(111), 1,
      sym_expression,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(167), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4782] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(290), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4887] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(243), 1,
      sym_expression,
    STATE(266), 1,
      sym_identifier,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [4992] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      aux_sym_keyword_token4,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(186), 1,
      sym_expression,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(45), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5099] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(255), 1,
      sym_expression,
    STATE(266), 1,
      sym_identifier,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5204] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(274), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5309] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_identifier,
    STATE(112), 1,
      sym_expression,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(167), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5414] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(278), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5519] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(275), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5624] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(276), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5729] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(190), 1,
      sym_expression,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(45), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5834] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(191), 1,
      sym_expression,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(45), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [5939] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(193), 1,
      sym_expression,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(45), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6044] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(267), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6149] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(283), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6254] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(194), 1,
      sym_expression,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(45), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6359] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(195), 1,
      sym_expression,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(45), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6464] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym_expression,
    STATE(103), 1,
      sym_identifier,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(167), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6569] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(262), 1,
      sym_expression,
    STATE(266), 1,
      sym_identifier,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6674] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(258), 1,
      sym_expression,
    STATE(266), 1,
      sym_identifier,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6779] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(282), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6884] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(280), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [6989] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(196), 1,
      sym_expression,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(45), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7094] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_identifier,
    STATE(109), 1,
      sym_expression,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(167), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7199] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(167), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7304] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(277), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7409] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      aux_sym_keyword_token4,
    STATE(103), 1,
      sym_identifier,
    STATE(105), 1,
      sym_expression,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(167), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7516] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(269), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7621] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(271), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7726] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(279), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7831] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(281), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [7936] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 1,
      aux_sym_keyword_token9,
    ACTIONS(53), 1,
      aux_sym_keyword_token10,
    ACTIONS(55), 1,
      aux_sym_keyword_token11,
    ACTIONS(57), 1,
      aux_sym_keyword_token14,
    ACTIONS(59), 1,
      aux_sym_keyword_token15,
    ACTIONS(61), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      aux_sym_keyword_token17,
    ACTIONS(65), 1,
      aux_sym_keyword_token18,
    ACTIONS(67), 1,
      aux_sym_keyword_token19,
    ACTIONS(69), 1,
      aux_sym_keyword_token20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(197), 1,
      sym_expression,
    STATE(392), 1,
      sym__lhs_expression,
    ACTIONS(77), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(184), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(187), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(45), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(188), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [8041] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_keyword_token9,
    ACTIONS(215), 1,
      aux_sym_keyword_token10,
    ACTIONS(217), 1,
      aux_sym_keyword_token11,
    ACTIONS(219), 1,
      aux_sym_keyword_token14,
    ACTIONS(221), 1,
      aux_sym_keyword_token15,
    ACTIONS(223), 1,
      aux_sym_keyword_token16,
    ACTIONS(225), 1,
      aux_sym_keyword_token17,
    ACTIONS(227), 1,
      aux_sym_keyword_token18,
    ACTIONS(229), 1,
      aux_sym_keyword_token19,
    ACTIONS(231), 1,
      aux_sym_keyword_token20,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym__identifier_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(266), 1,
      sym_identifier,
    STATE(288), 1,
      sym_expression,
    STATE(399), 1,
      sym__lhs_expression,
    ACTIONS(241), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(256), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(265), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(211), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(264), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [8146] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_keyword_token9,
    ACTIONS(173), 1,
      aux_sym_keyword_token10,
    ACTIONS(175), 1,
      aux_sym_keyword_token11,
    ACTIONS(177), 1,
      aux_sym_keyword_token14,
    ACTIONS(179), 1,
      aux_sym_keyword_token15,
    ACTIONS(181), 1,
      aux_sym_keyword_token16,
    ACTIONS(183), 1,
      aux_sym_keyword_token17,
    ACTIONS(185), 1,
      aux_sym_keyword_token18,
    ACTIONS(187), 1,
      aux_sym_keyword_token19,
    ACTIONS(189), 1,
      aux_sym_keyword_token20,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(201), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(152), 1,
      sym__array_identifier,
    STATE(153), 1,
      sym__identifier,
    STATE(418), 1,
      sym__lhs_expression,
    ACTIONS(199), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(126), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(128), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(167), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(124), 10,
      sym__datevalue,
      sym__rate,
      sym__money,
      sym__value,
      sym__format,
      sym__segment,
      sym__charactersearch,
      sym__length,
      sym__fileopen,
      sym__filereadline,
  [8251] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      aux_sym_letter_division_token1,
    ACTIONS(357), 6,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
    ACTIONS(37), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym_letter_division_token1,
    ACTIONS(361), 6,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
    ACTIONS(37), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8367] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym__identifier_token1,
    STATE(200), 1,
      sym__array_identifier,
    STATE(201), 1,
      sym__identifier,
    STATE(209), 1,
      sym_identifier,
    ACTIONS(37), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8426] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(450), 1,
      sym_identifier,
    ACTIONS(37), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8485] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(420), 1,
      sym_identifier,
    ACTIONS(37), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8543] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym__identifier_token1,
    STATE(212), 1,
      sym__array_identifier,
    STATE(213), 1,
      sym__identifier,
    STATE(214), 1,
      sym_identifier,
    ACTIONS(37), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 14,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(369), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 13,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(373), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 14,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(373), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 14,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(379), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 14,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(383), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 11,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(393), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(395), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8996] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_AND,
    ACTIONS(411), 1,
      anon_sym_OR,
    ACTIONS(415), 1,
      anon_sym_GT,
    ACTIONS(417), 1,
      anon_sym_LT,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(405), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [9058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(419), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(421), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [9110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(379), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(425), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(387), 11,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [9258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9306] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_AND,
    ACTIONS(415), 1,
      anon_sym_GT,
    ACTIONS(417), 1,
      anon_sym_LT,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [9366] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_GT,
    ACTIONS(417), 1,
      anon_sym_LT,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 24,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [9424] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_GT,
    ACTIONS(417), 1,
      anon_sym_LT,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(387), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 24,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [9480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(427), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(429), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [9532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(369), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(433), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(437), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(439), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(441), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [9728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(445), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(449), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(453), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9872] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_AND,
    ACTIONS(411), 1,
      anon_sym_OR,
    ACTIONS(415), 1,
      anon_sym_GT,
    ACTIONS(417), 1,
      anon_sym_LT,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(455), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(457), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [9934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(459), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(461), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [9986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(465), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(467), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(469), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [10086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(473), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(475), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(477), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [10186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(395), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(383), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(487), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(489), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [10534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(491), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(493), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [10586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(495), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(497), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [10638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(499), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(501), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [10690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(505), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(509), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(513), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10834] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(515), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(517), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [10886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(521), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(537), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(541), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(373), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(373), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(449), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(453), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(459), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(461), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [11670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(467), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(469), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [11721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(487), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(489), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [11919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(491), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(493), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [11970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(495), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(497), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [12070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(505), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(499), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(501), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [12168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(509), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(513), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12360] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(515), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(517), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [12411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(521), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(537), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(439), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(441), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [12605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(437), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(445), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(541), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(81), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(395), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(393), 11,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(395), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13034] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_AND,
    ACTIONS(569), 1,
      anon_sym_OR,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(565), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(571), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(573), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(403), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(405), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(473), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(465), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13189] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_AND,
    ACTIONS(569), 1,
      anon_sym_OR,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(565), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(571), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(573), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(455), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(457), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(425), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(573), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 10,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [13348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(419), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(421), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 10,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13495] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_AND,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(565), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(571), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(573), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [13554] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(565), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(571), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(573), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 24,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [13611] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(571), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(573), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(389), 24,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [13666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(81), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(427), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(429), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 12,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(433), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(373), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(373), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(583), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(379), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(383), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(587), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [13994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(457), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      aux_sym_keyword_token6,
    ACTIONS(455), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(457), 21,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(593), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(597), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(383), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(379), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(373), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 6,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(373), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(597), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(369), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(593), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(583), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(457), 22,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_keyword_token6,
    ACTIONS(455), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(457), 21,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym__identifier_token1,
      sym_number,
  [14522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_target_division_token1,
    STATE(228), 1,
      sym_target_division,
    STATE(221), 2,
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
  [14561] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      aux_sym_target_division_token1,
    STATE(221), 2,
      sym_special_keywords,
      aux_sym_source_file_repeat1,
    ACTIONS(608), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(605), 18,
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
  [14597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(611), 19,
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
  [14627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LT,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 15,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
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
  [14654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 15,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
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
  [14678] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_define_division_token1,
    ACTIONS(619), 1,
      aux_sym_setup_division_token1,
    ACTIONS(621), 1,
      aux_sym_select_division_token1,
    ACTIONS(623), 1,
      aux_sym_sort_division_token1,
    ACTIONS(625), 1,
      aux_sym_letter_division_token1,
    ACTIONS(627), 1,
      aux_sym_print_division_token1,
    ACTIONS(629), 1,
      aux_sym_total_division_token1,
    STATE(16), 2,
      sym_letter_division,
      sym_print_division,
    STATE(227), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [14716] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_define_division_token1,
    ACTIONS(619), 1,
      aux_sym_setup_division_token1,
    ACTIONS(621), 1,
      aux_sym_select_division_token1,
    ACTIONS(623), 1,
      aux_sym_sort_division_token1,
    ACTIONS(625), 1,
      aux_sym_letter_division_token1,
    ACTIONS(627), 1,
      aux_sym_print_division_token1,
    ACTIONS(629), 1,
      aux_sym_total_division_token1,
    STATE(17), 2,
      sym_letter_division,
      sym_print_division,
    STATE(261), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [14754] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_define_division_token1,
    ACTIONS(619), 1,
      aux_sym_setup_division_token1,
    ACTIONS(621), 1,
      aux_sym_select_division_token1,
    ACTIONS(623), 1,
      aux_sym_sort_division_token1,
    ACTIONS(625), 1,
      aux_sym_letter_division_token1,
    ACTIONS(627), 1,
      aux_sym_print_division_token1,
    ACTIONS(629), 1,
      aux_sym_total_division_token1,
    STATE(19), 2,
      sym_letter_division,
      sym_print_division,
    STATE(261), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [14792] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_define_division_token1,
    ACTIONS(619), 1,
      aux_sym_setup_division_token1,
    ACTIONS(621), 1,
      aux_sym_select_division_token1,
    ACTIONS(623), 1,
      aux_sym_sort_division_token1,
    ACTIONS(625), 1,
      aux_sym_letter_division_token1,
    ACTIONS(627), 1,
      aux_sym_print_division_token1,
    ACTIONS(629), 1,
      aux_sym_total_division_token1,
    STATE(19), 2,
      sym_letter_division,
      sym_print_division,
    STATE(226), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [14830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LT,
    ACTIONS(381), 15,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
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
  [14854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LT,
    ACTIONS(375), 15,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
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
  [14878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [14903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [14928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LT,
    ACTIONS(371), 14,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [14951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [14976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(387), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 9,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LT,
    ACTIONS(507), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT,
    ACTIONS(399), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LT,
    ACTIONS(511), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LT,
    ACTIONS(519), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(535), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(435), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LT,
    ACTIONS(539), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LT,
    ACTIONS(443), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LT,
    ACTIONS(503), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(447), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LT,
    ACTIONS(451), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(423), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LT,
    ACTIONS(471), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(37), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 11,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15531] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(387), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_OR,
  [15563] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(387), 6,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [15593] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      aux_sym_define_division_token1,
    ACTIONS(666), 1,
      aux_sym_setup_division_token1,
    ACTIONS(669), 1,
      aux_sym_select_division_token1,
    ACTIONS(672), 1,
      aux_sym_sort_division_token1,
    ACTIONS(677), 1,
      aux_sym_total_division_token1,
    ACTIONS(675), 2,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
    STATE(261), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [15625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 8,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
  [15653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LT,
    ACTIONS(431), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LT,
    ACTIONS(463), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LT,
    ACTIONS(393), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LT,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(393), 12,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15743] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15774] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(684), 1,
      aux_sym_keyword_token4,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15805] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15836] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(688), 1,
      aux_sym_keyword_token4,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15867] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15898] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15929] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15960] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15991] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16022] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16053] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16084] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16115] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16146] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16177] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16208] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16239] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16270] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16301] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16332] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16363] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(722), 1,
      aux_sym_keyword_token7,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16394] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16425] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16456] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16487] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_AND,
    ACTIONS(659), 1,
      anon_sym_GT,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_OR,
    ACTIONS(730), 1,
      aux_sym_keyword_token7,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(655), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16518] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      aux_sym_keyword_token5,
    ACTIONS(734), 1,
      aux_sym__identifier_token1,
    ACTIONS(737), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(400), 1,
      sym_identifier,
    STATE(292), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(355), 2,
      sym_variable_declaration,
      sym_include_statement,
  [16548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    STATE(346), 1,
      sym_data_type,
    STATE(364), 1,
      sym_string_literal,
    ACTIONS(740), 7,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_data_type_token1,
      aux_sym_data_type_token2,
      aux_sym_data_type_token3,
      aux_sym_data_type_token4,
      aux_sym_data_type_token5,
  [16570] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(744), 1,
      aux_sym_keyword_token5,
    ACTIONS(746), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(400), 1,
      sym_identifier,
    STATE(292), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(355), 2,
      sym_variable_declaration,
      sym_include_statement,
  [16600] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(746), 1,
      anon_sym_POUND,
    ACTIONS(748), 1,
      aux_sym_keyword_token5,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(400), 1,
      sym_identifier,
    STATE(294), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(355), 2,
      sym_variable_declaration,
      sym_include_statement,
  [16630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16708] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(393), 2,
      sym_string_literal,
      sym_identifier,
  [16728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(437), 2,
      sym_string_literal,
      sym_identifier,
  [16748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(429), 2,
      sym_string_literal,
      sym_identifier,
  [16768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(462), 2,
      sym_string_literal,
      sym_identifier,
  [16788] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(401), 2,
      sym_string_literal,
      sym_identifier,
  [16808] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(454), 2,
      sym_string_literal,
      sym_identifier,
  [16828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(451), 2,
      sym_string_literal,
      sym_identifier,
  [16848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(443), 2,
      sym_string_literal,
      sym_identifier,
  [16868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(428), 2,
      sym_string_literal,
      sym_identifier,
  [16888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(413), 2,
      sym_string_literal,
      sym_identifier,
  [16908] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(427), 2,
      sym_string_literal,
      sym_identifier,
  [16928] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(460), 2,
      sym_string_literal,
      sym_identifier,
  [16948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(426), 2,
      sym_string_literal,
      sym_identifier,
  [16968] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(424), 2,
      sym_string_literal,
      sym_identifier,
  [16988] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(422), 2,
      sym_string_literal,
      sym_identifier,
  [17008] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(421), 2,
      sym_string_literal,
      sym_identifier,
  [17028] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      aux_sym__identifier_token1,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(425), 2,
      sym_string_literal,
      sym_identifier,
  [17048] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(463), 2,
      sym_string_literal,
      sym_identifier,
  [17068] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(464), 2,
      sym_string_literal,
      sym_identifier,
  [17088] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(447), 2,
      sym_string_literal,
      sym_identifier,
  [17108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(389), 2,
      sym_string_literal,
      sym_identifier,
  [17128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(461), 2,
      sym_string_literal,
      sym_identifier,
  [17148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_DQUOTE,
    ACTIONS(768), 1,
      aux_sym__identifier_token1,
    STATE(212), 1,
      sym__array_identifier,
    STATE(213), 1,
      sym__identifier,
    STATE(29), 2,
      sym_string_literal,
      sym_identifier,
  [17168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(446), 2,
      sym_string_literal,
      sym_identifier,
  [17188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(458), 2,
      sym_string_literal,
      sym_identifier,
  [17208] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(405), 2,
      sym_string_literal,
      sym_identifier,
  [17228] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(436), 2,
      sym_string_literal,
      sym_identifier,
  [17248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(457), 2,
      sym_string_literal,
      sym_identifier,
  [17268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(435), 2,
      sym_string_literal,
      sym_identifier,
  [17288] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(433), 2,
      sym_string_literal,
      sym_identifier,
  [17308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(438), 2,
      sym_string_literal,
      sym_identifier,
  [17328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(430), 2,
      sym_string_literal,
      sym_identifier,
  [17348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(459), 2,
      sym_string_literal,
      sym_identifier,
  [17368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(431), 2,
      sym_string_literal,
      sym_identifier,
  [17388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(449), 2,
      sym_string_literal,
      sym_identifier,
  [17408] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(395), 2,
      sym_string_literal,
      sym_identifier,
  [17428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(448), 2,
      sym_string_literal,
      sym_identifier,
  [17448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(406), 2,
      sym_string_literal,
      sym_identifier,
  [17468] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(444), 2,
      sym_string_literal,
      sym_identifier,
  [17488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(390), 2,
      sym_string_literal,
      sym_identifier,
  [17508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(445), 2,
      sym_string_literal,
      sym_identifier,
  [17528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      aux_sym__identifier_token1,
    ACTIONS(770), 1,
      sym_number,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(434), 1,
      sym_identifier,
  [17547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      aux_sym__identifier_token1,
    ACTIONS(772), 1,
      sym_number,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(398), 1,
      sym_identifier,
  [17566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      aux_sym__identifier_token1,
    ACTIONS(774), 1,
      sym_number,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(455), 1,
      sym_identifier,
  [17585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      aux_sym_array_type_token1,
    ACTIONS(780), 1,
      anon_sym_POUND,
    STATE(361), 1,
      sym_array_type,
    ACTIONS(776), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [17602] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      aux_sym__identifier_token1,
    ACTIONS(782), 1,
      sym_number,
    STATE(223), 1,
      sym__identifier,
    STATE(230), 1,
      sym__array_identifier,
    STATE(440), 1,
      sym_identifier,
  [17621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_POUND,
    ACTIONS(784), 3,
      aux_sym_keyword_token5,
      aux_sym_array_type_token1,
      aux_sym__identifier_token1,
  [17633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym__identifier_token1,
    STATE(30), 1,
      sym_identifier,
    STATE(212), 1,
      sym__array_identifier,
    STATE(213), 1,
      sym__identifier,
  [17649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__identifier,
    STATE(99), 1,
      sym__array_identifier,
    STATE(456), 1,
      sym_identifier,
  [17665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym__identifier_token1,
    STATE(24), 1,
      sym_identifier,
    STATE(212), 1,
      sym__array_identifier,
    STATE(213), 1,
      sym__identifier,
  [17681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym__array_identifier_repeat1,
  [17694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym__array_identifier_repeat1,
  [17707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(384), 1,
      sym__identifier,
    ACTIONS(794), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_POUND,
    ACTIONS(796), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [17729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(366), 1,
      sym__identifier,
    ACTIONS(800), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(352), 1,
      sym__identifier,
    ACTIONS(802), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym__array_identifier_repeat1,
  [17764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_array_type_repeat1,
  [17777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_POUND,
    ACTIONS(811), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [17788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_POUND,
    ACTIONS(815), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [17799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym__array_identifier_repeat1,
  [17812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym__array_identifier_repeat1,
  [17825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_POUND,
    ACTIONS(776), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [17836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_POUND,
    ACTIONS(826), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [17847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym__array_identifier_repeat1,
  [17860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym__array_identifier_repeat1,
  [17873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(367), 1,
      sym__identifier,
    ACTIONS(834), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(374), 1,
      sym__identifier,
    ACTIONS(836), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_array_type_repeat1,
  [17908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym__array_identifier_repeat1,
  [17921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_POUND,
    ACTIONS(369), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [17932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(505), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [17943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      aux_sym__array_identifier_repeat1,
  [17956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym__array_identifier_repeat1,
  [17969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym__array_identifier_repeat1,
  [17982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      aux_sym_array_type_repeat1,
  [17995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(376), 1,
      sym__identifier,
    ACTIONS(852), 2,
      aux_sym__identifier_token1,
      sym_number,
  [18006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      sym_string_literal,
  [18016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_string_literal,
  [18026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_string_literal,
  [18044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      sym_string_literal,
  [18054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DQUOTE,
  [18069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [18076] = 2,
    ACTIONS(858), 1,
      aux_sym_string_literal_token1,
    ACTIONS(860), 1,
      sym_comment,
  [18083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_DQUOTE,
  [18090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
  [18097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
  [18104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
  [18111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_EQ,
  [18118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [18125] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym_string_literal_token1,
  [18132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
  [18139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym_include_statement_token1,
  [18146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym_number,
  [18153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      aux_sym_keyword_token4,
  [18160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_EQ,
  [18167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_EQ,
  [18174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [18181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_include_statement_token1,
  [18188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym_include_statement_token1,
  [18195] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym_string_literal_token1,
  [18202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
  [18209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
  [18216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
  [18223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      aux_sym_keyword_token5,
  [18230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym_print_division_token2,
  [18237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_EQ,
  [18244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      aux_sym_keyword_token5,
  [18251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_EQ,
  [18258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [18265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      aux_sym_keyword_token5,
  [18272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_DQUOTE,
  [18279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      aux_sym_include_statement_token1,
  [18286] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(920), 1,
      aux_sym_string_literal_token1,
  [18293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_EQ,
  [18300] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_string_literal_token1,
  [18307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_EQ,
  [18314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_COMMA,
  [18321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_COMMA,
  [18328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DQUOTE,
  [18335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_COMMA,
  [18342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym_keyword_token5,
  [18349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
  [18356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_COMMA,
  [18363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_COMMA,
  [18370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
  [18377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_COMMA,
  [18384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_COMMA,
  [18391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_EQ,
  [18398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_COMMA,
  [18405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_for_statement_token1,
  [18412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_COMMA,
  [18419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_COMMA,
  [18426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
  [18433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_COMMA,
  [18440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_LPAREN,
  [18447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_for_statement_token1,
  [18454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      ts_builtin_sym_end,
  [18461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_number,
  [18468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_COMMA,
  [18475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_COMMA,
  [18482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_COMMA,
  [18489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_COMMA,
  [18496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
  [18503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
  [18510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_COMMA,
  [18517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_EQ,
  [18524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_COMMA,
  [18531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
  [18538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_COLON,
  [18545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
  [18552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      aux_sym_keyword_token4,
  [18559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
  [18566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
  [18573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
  [18580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
  [18587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
  [18594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
  [18601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
  [18608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
  [18615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 121,
  [SMALL_STATE(22)] = 258,
  [SMALL_STATE(23)] = 393,
  [SMALL_STATE(24)] = 530,
  [SMALL_STATE(25)] = 667,
  [SMALL_STATE(26)] = 804,
  [SMALL_STATE(27)] = 941,
  [SMALL_STATE(28)] = 1062,
  [SMALL_STATE(29)] = 1199,
  [SMALL_STATE(30)] = 1334,
  [SMALL_STATE(31)] = 1471,
  [SMALL_STATE(32)] = 1608,
  [SMALL_STATE(33)] = 1745,
  [SMALL_STATE(34)] = 1882,
  [SMALL_STATE(35)] = 2019,
  [SMALL_STATE(36)] = 2156,
  [SMALL_STATE(37)] = 2293,
  [SMALL_STATE(38)] = 2430,
  [SMALL_STATE(39)] = 2567,
  [SMALL_STATE(40)] = 2704,
  [SMALL_STATE(41)] = 2841,
  [SMALL_STATE(42)] = 2978,
  [SMALL_STATE(43)] = 3115,
  [SMALL_STATE(44)] = 3235,
  [SMALL_STATE(45)] = 3355,
  [SMALL_STATE(46)] = 3491,
  [SMALL_STATE(47)] = 3627,
  [SMALL_STATE(48)] = 3732,
  [SMALL_STATE(49)] = 3837,
  [SMALL_STATE(50)] = 3942,
  [SMALL_STATE(51)] = 4047,
  [SMALL_STATE(52)] = 4152,
  [SMALL_STATE(53)] = 4257,
  [SMALL_STATE(54)] = 4362,
  [SMALL_STATE(55)] = 4467,
  [SMALL_STATE(56)] = 4572,
  [SMALL_STATE(57)] = 4677,
  [SMALL_STATE(58)] = 4782,
  [SMALL_STATE(59)] = 4887,
  [SMALL_STATE(60)] = 4992,
  [SMALL_STATE(61)] = 5099,
  [SMALL_STATE(62)] = 5204,
  [SMALL_STATE(63)] = 5309,
  [SMALL_STATE(64)] = 5414,
  [SMALL_STATE(65)] = 5519,
  [SMALL_STATE(66)] = 5624,
  [SMALL_STATE(67)] = 5729,
  [SMALL_STATE(68)] = 5834,
  [SMALL_STATE(69)] = 5939,
  [SMALL_STATE(70)] = 6044,
  [SMALL_STATE(71)] = 6149,
  [SMALL_STATE(72)] = 6254,
  [SMALL_STATE(73)] = 6359,
  [SMALL_STATE(74)] = 6464,
  [SMALL_STATE(75)] = 6569,
  [SMALL_STATE(76)] = 6674,
  [SMALL_STATE(77)] = 6779,
  [SMALL_STATE(78)] = 6884,
  [SMALL_STATE(79)] = 6989,
  [SMALL_STATE(80)] = 7094,
  [SMALL_STATE(81)] = 7199,
  [SMALL_STATE(82)] = 7304,
  [SMALL_STATE(83)] = 7409,
  [SMALL_STATE(84)] = 7516,
  [SMALL_STATE(85)] = 7621,
  [SMALL_STATE(86)] = 7726,
  [SMALL_STATE(87)] = 7831,
  [SMALL_STATE(88)] = 7936,
  [SMALL_STATE(89)] = 8041,
  [SMALL_STATE(90)] = 8146,
  [SMALL_STATE(91)] = 8251,
  [SMALL_STATE(92)] = 8309,
  [SMALL_STATE(93)] = 8367,
  [SMALL_STATE(94)] = 8426,
  [SMALL_STATE(95)] = 8485,
  [SMALL_STATE(96)] = 8543,
  [SMALL_STATE(97)] = 8601,
  [SMALL_STATE(98)] = 8650,
  [SMALL_STATE(99)] = 8701,
  [SMALL_STATE(100)] = 8750,
  [SMALL_STATE(101)] = 8799,
  [SMALL_STATE(102)] = 8848,
  [SMALL_STATE(103)] = 8898,
  [SMALL_STATE(104)] = 8948,
  [SMALL_STATE(105)] = 8996,
  [SMALL_STATE(106)] = 9058,
  [SMALL_STATE(107)] = 9110,
  [SMALL_STATE(108)] = 9158,
  [SMALL_STATE(109)] = 9206,
  [SMALL_STATE(110)] = 9258,
  [SMALL_STATE(111)] = 9306,
  [SMALL_STATE(112)] = 9366,
  [SMALL_STATE(113)] = 9424,
  [SMALL_STATE(114)] = 9480,
  [SMALL_STATE(115)] = 9532,
  [SMALL_STATE(116)] = 9580,
  [SMALL_STATE(117)] = 9628,
  [SMALL_STATE(118)] = 9676,
  [SMALL_STATE(119)] = 9728,
  [SMALL_STATE(120)] = 9776,
  [SMALL_STATE(121)] = 9824,
  [SMALL_STATE(122)] = 9872,
  [SMALL_STATE(123)] = 9934,
  [SMALL_STATE(124)] = 9986,
  [SMALL_STATE(125)] = 10034,
  [SMALL_STATE(126)] = 10086,
  [SMALL_STATE(127)] = 10134,
  [SMALL_STATE(128)] = 10186,
  [SMALL_STATE(129)] = 10234,
  [SMALL_STATE(130)] = 10284,
  [SMALL_STATE(131)] = 10334,
  [SMALL_STATE(132)] = 10384,
  [SMALL_STATE(133)] = 10434,
  [SMALL_STATE(134)] = 10482,
  [SMALL_STATE(135)] = 10534,
  [SMALL_STATE(136)] = 10586,
  [SMALL_STATE(137)] = 10638,
  [SMALL_STATE(138)] = 10690,
  [SMALL_STATE(139)] = 10738,
  [SMALL_STATE(140)] = 10786,
  [SMALL_STATE(141)] = 10834,
  [SMALL_STATE(142)] = 10886,
  [SMALL_STATE(143)] = 10934,
  [SMALL_STATE(144)] = 10984,
  [SMALL_STATE(145)] = 11034,
  [SMALL_STATE(146)] = 11084,
  [SMALL_STATE(147)] = 11134,
  [SMALL_STATE(148)] = 11184,
  [SMALL_STATE(149)] = 11234,
  [SMALL_STATE(150)] = 11282,
  [SMALL_STATE(151)] = 11330,
  [SMALL_STATE(152)] = 11378,
  [SMALL_STATE(153)] = 11426,
  [SMALL_STATE(154)] = 11476,
  [SMALL_STATE(155)] = 11525,
  [SMALL_STATE(156)] = 11572,
  [SMALL_STATE(157)] = 11619,
  [SMALL_STATE(158)] = 11670,
  [SMALL_STATE(159)] = 11721,
  [SMALL_STATE(160)] = 11770,
  [SMALL_STATE(161)] = 11819,
  [SMALL_STATE(162)] = 11868,
  [SMALL_STATE(163)] = 11919,
  [SMALL_STATE(164)] = 11970,
  [SMALL_STATE(165)] = 12019,
  [SMALL_STATE(166)] = 12070,
  [SMALL_STATE(167)] = 12117,
  [SMALL_STATE(168)] = 12168,
  [SMALL_STATE(169)] = 12215,
  [SMALL_STATE(170)] = 12264,
  [SMALL_STATE(171)] = 12311,
  [SMALL_STATE(172)] = 12360,
  [SMALL_STATE(173)] = 12411,
  [SMALL_STATE(174)] = 12460,
  [SMALL_STATE(175)] = 12507,
  [SMALL_STATE(176)] = 12554,
  [SMALL_STATE(177)] = 12605,
  [SMALL_STATE(178)] = 12652,
  [SMALL_STATE(179)] = 12699,
  [SMALL_STATE(180)] = 12746,
  [SMALL_STATE(181)] = 12795,
  [SMALL_STATE(182)] = 12842,
  [SMALL_STATE(183)] = 12889,
  [SMALL_STATE(184)] = 12938,
  [SMALL_STATE(185)] = 12985,
  [SMALL_STATE(186)] = 13034,
  [SMALL_STATE(187)] = 13095,
  [SMALL_STATE(188)] = 13142,
  [SMALL_STATE(189)] = 13189,
  [SMALL_STATE(190)] = 13250,
  [SMALL_STATE(191)] = 13297,
  [SMALL_STATE(192)] = 13348,
  [SMALL_STATE(193)] = 13399,
  [SMALL_STATE(194)] = 13446,
  [SMALL_STATE(195)] = 13495,
  [SMALL_STATE(196)] = 13554,
  [SMALL_STATE(197)] = 13611,
  [SMALL_STATE(198)] = 13666,
  [SMALL_STATE(199)] = 13717,
  [SMALL_STATE(200)] = 13764,
  [SMALL_STATE(201)] = 13802,
  [SMALL_STATE(202)] = 13842,
  [SMALL_STATE(203)] = 13880,
  [SMALL_STATE(204)] = 13918,
  [SMALL_STATE(205)] = 13956,
  [SMALL_STATE(206)] = 13994,
  [SMALL_STATE(207)] = 14032,
  [SMALL_STATE(208)] = 14072,
  [SMALL_STATE(209)] = 14110,
  [SMALL_STATE(210)] = 14148,
  [SMALL_STATE(211)] = 14185,
  [SMALL_STATE(212)] = 14222,
  [SMALL_STATE(213)] = 14259,
  [SMALL_STATE(214)] = 14298,
  [SMALL_STATE(215)] = 14335,
  [SMALL_STATE(216)] = 14372,
  [SMALL_STATE(217)] = 14409,
  [SMALL_STATE(218)] = 14446,
  [SMALL_STATE(219)] = 14483,
  [SMALL_STATE(220)] = 14522,
  [SMALL_STATE(221)] = 14561,
  [SMALL_STATE(222)] = 14597,
  [SMALL_STATE(223)] = 14627,
  [SMALL_STATE(224)] = 14654,
  [SMALL_STATE(225)] = 14678,
  [SMALL_STATE(226)] = 14716,
  [SMALL_STATE(227)] = 14754,
  [SMALL_STATE(228)] = 14792,
  [SMALL_STATE(229)] = 14830,
  [SMALL_STATE(230)] = 14854,
  [SMALL_STATE(231)] = 14878,
  [SMALL_STATE(232)] = 14903,
  [SMALL_STATE(233)] = 14928,
  [SMALL_STATE(234)] = 14951,
  [SMALL_STATE(235)] = 14976,
  [SMALL_STATE(236)] = 15001,
  [SMALL_STATE(237)] = 15026,
  [SMALL_STATE(238)] = 15051,
  [SMALL_STATE(239)] = 15076,
  [SMALL_STATE(240)] = 15101,
  [SMALL_STATE(241)] = 15126,
  [SMALL_STATE(242)] = 15151,
  [SMALL_STATE(243)] = 15173,
  [SMALL_STATE(244)] = 15199,
  [SMALL_STATE(245)] = 15221,
  [SMALL_STATE(246)] = 15243,
  [SMALL_STATE(247)] = 15265,
  [SMALL_STATE(248)] = 15287,
  [SMALL_STATE(249)] = 15309,
  [SMALL_STATE(250)] = 15331,
  [SMALL_STATE(251)] = 15353,
  [SMALL_STATE(252)] = 15375,
  [SMALL_STATE(253)] = 15397,
  [SMALL_STATE(254)] = 15419,
  [SMALL_STATE(255)] = 15441,
  [SMALL_STATE(256)] = 15463,
  [SMALL_STATE(257)] = 15485,
  [SMALL_STATE(258)] = 15507,
  [SMALL_STATE(259)] = 15531,
  [SMALL_STATE(260)] = 15563,
  [SMALL_STATE(261)] = 15593,
  [SMALL_STATE(262)] = 15625,
  [SMALL_STATE(263)] = 15653,
  [SMALL_STATE(264)] = 15675,
  [SMALL_STATE(265)] = 15697,
  [SMALL_STATE(266)] = 15719,
  [SMALL_STATE(267)] = 15743,
  [SMALL_STATE(268)] = 15774,
  [SMALL_STATE(269)] = 15805,
  [SMALL_STATE(270)] = 15836,
  [SMALL_STATE(271)] = 15867,
  [SMALL_STATE(272)] = 15898,
  [SMALL_STATE(273)] = 15929,
  [SMALL_STATE(274)] = 15960,
  [SMALL_STATE(275)] = 15991,
  [SMALL_STATE(276)] = 16022,
  [SMALL_STATE(277)] = 16053,
  [SMALL_STATE(278)] = 16084,
  [SMALL_STATE(279)] = 16115,
  [SMALL_STATE(280)] = 16146,
  [SMALL_STATE(281)] = 16177,
  [SMALL_STATE(282)] = 16208,
  [SMALL_STATE(283)] = 16239,
  [SMALL_STATE(284)] = 16270,
  [SMALL_STATE(285)] = 16301,
  [SMALL_STATE(286)] = 16332,
  [SMALL_STATE(287)] = 16363,
  [SMALL_STATE(288)] = 16394,
  [SMALL_STATE(289)] = 16425,
  [SMALL_STATE(290)] = 16456,
  [SMALL_STATE(291)] = 16487,
  [SMALL_STATE(292)] = 16518,
  [SMALL_STATE(293)] = 16548,
  [SMALL_STATE(294)] = 16570,
  [SMALL_STATE(295)] = 16600,
  [SMALL_STATE(296)] = 16630,
  [SMALL_STATE(297)] = 16643,
  [SMALL_STATE(298)] = 16656,
  [SMALL_STATE(299)] = 16669,
  [SMALL_STATE(300)] = 16682,
  [SMALL_STATE(301)] = 16695,
  [SMALL_STATE(302)] = 16708,
  [SMALL_STATE(303)] = 16728,
  [SMALL_STATE(304)] = 16748,
  [SMALL_STATE(305)] = 16768,
  [SMALL_STATE(306)] = 16788,
  [SMALL_STATE(307)] = 16808,
  [SMALL_STATE(308)] = 16828,
  [SMALL_STATE(309)] = 16848,
  [SMALL_STATE(310)] = 16868,
  [SMALL_STATE(311)] = 16888,
  [SMALL_STATE(312)] = 16908,
  [SMALL_STATE(313)] = 16928,
  [SMALL_STATE(314)] = 16948,
  [SMALL_STATE(315)] = 16968,
  [SMALL_STATE(316)] = 16988,
  [SMALL_STATE(317)] = 17008,
  [SMALL_STATE(318)] = 17028,
  [SMALL_STATE(319)] = 17048,
  [SMALL_STATE(320)] = 17068,
  [SMALL_STATE(321)] = 17088,
  [SMALL_STATE(322)] = 17108,
  [SMALL_STATE(323)] = 17128,
  [SMALL_STATE(324)] = 17148,
  [SMALL_STATE(325)] = 17168,
  [SMALL_STATE(326)] = 17188,
  [SMALL_STATE(327)] = 17208,
  [SMALL_STATE(328)] = 17228,
  [SMALL_STATE(329)] = 17248,
  [SMALL_STATE(330)] = 17268,
  [SMALL_STATE(331)] = 17288,
  [SMALL_STATE(332)] = 17308,
  [SMALL_STATE(333)] = 17328,
  [SMALL_STATE(334)] = 17348,
  [SMALL_STATE(335)] = 17368,
  [SMALL_STATE(336)] = 17388,
  [SMALL_STATE(337)] = 17408,
  [SMALL_STATE(338)] = 17428,
  [SMALL_STATE(339)] = 17448,
  [SMALL_STATE(340)] = 17468,
  [SMALL_STATE(341)] = 17488,
  [SMALL_STATE(342)] = 17508,
  [SMALL_STATE(343)] = 17528,
  [SMALL_STATE(344)] = 17547,
  [SMALL_STATE(345)] = 17566,
  [SMALL_STATE(346)] = 17585,
  [SMALL_STATE(347)] = 17602,
  [SMALL_STATE(348)] = 17621,
  [SMALL_STATE(349)] = 17633,
  [SMALL_STATE(350)] = 17649,
  [SMALL_STATE(351)] = 17665,
  [SMALL_STATE(352)] = 17681,
  [SMALL_STATE(353)] = 17694,
  [SMALL_STATE(354)] = 17707,
  [SMALL_STATE(355)] = 17718,
  [SMALL_STATE(356)] = 17729,
  [SMALL_STATE(357)] = 17740,
  [SMALL_STATE(358)] = 17751,
  [SMALL_STATE(359)] = 17764,
  [SMALL_STATE(360)] = 17777,
  [SMALL_STATE(361)] = 17788,
  [SMALL_STATE(362)] = 17799,
  [SMALL_STATE(363)] = 17812,
  [SMALL_STATE(364)] = 17825,
  [SMALL_STATE(365)] = 17836,
  [SMALL_STATE(366)] = 17847,
  [SMALL_STATE(367)] = 17860,
  [SMALL_STATE(368)] = 17873,
  [SMALL_STATE(369)] = 17884,
  [SMALL_STATE(370)] = 17895,
  [SMALL_STATE(371)] = 17908,
  [SMALL_STATE(372)] = 17921,
  [SMALL_STATE(373)] = 17932,
  [SMALL_STATE(374)] = 17943,
  [SMALL_STATE(375)] = 17956,
  [SMALL_STATE(376)] = 17969,
  [SMALL_STATE(377)] = 17982,
  [SMALL_STATE(378)] = 17995,
  [SMALL_STATE(379)] = 18006,
  [SMALL_STATE(380)] = 18016,
  [SMALL_STATE(381)] = 18026,
  [SMALL_STATE(382)] = 18034,
  [SMALL_STATE(383)] = 18044,
  [SMALL_STATE(384)] = 18054,
  [SMALL_STATE(385)] = 18062,
  [SMALL_STATE(386)] = 18069,
  [SMALL_STATE(387)] = 18076,
  [SMALL_STATE(388)] = 18083,
  [SMALL_STATE(389)] = 18090,
  [SMALL_STATE(390)] = 18097,
  [SMALL_STATE(391)] = 18104,
  [SMALL_STATE(392)] = 18111,
  [SMALL_STATE(393)] = 18118,
  [SMALL_STATE(394)] = 18125,
  [SMALL_STATE(395)] = 18132,
  [SMALL_STATE(396)] = 18139,
  [SMALL_STATE(397)] = 18146,
  [SMALL_STATE(398)] = 18153,
  [SMALL_STATE(399)] = 18160,
  [SMALL_STATE(400)] = 18167,
  [SMALL_STATE(401)] = 18174,
  [SMALL_STATE(402)] = 18181,
  [SMALL_STATE(403)] = 18188,
  [SMALL_STATE(404)] = 18195,
  [SMALL_STATE(405)] = 18202,
  [SMALL_STATE(406)] = 18209,
  [SMALL_STATE(407)] = 18216,
  [SMALL_STATE(408)] = 18223,
  [SMALL_STATE(409)] = 18230,
  [SMALL_STATE(410)] = 18237,
  [SMALL_STATE(411)] = 18244,
  [SMALL_STATE(412)] = 18251,
  [SMALL_STATE(413)] = 18258,
  [SMALL_STATE(414)] = 18265,
  [SMALL_STATE(415)] = 18272,
  [SMALL_STATE(416)] = 18279,
  [SMALL_STATE(417)] = 18286,
  [SMALL_STATE(418)] = 18293,
  [SMALL_STATE(419)] = 18300,
  [SMALL_STATE(420)] = 18307,
  [SMALL_STATE(421)] = 18314,
  [SMALL_STATE(422)] = 18321,
  [SMALL_STATE(423)] = 18328,
  [SMALL_STATE(424)] = 18335,
  [SMALL_STATE(425)] = 18342,
  [SMALL_STATE(426)] = 18349,
  [SMALL_STATE(427)] = 18356,
  [SMALL_STATE(428)] = 18363,
  [SMALL_STATE(429)] = 18370,
  [SMALL_STATE(430)] = 18377,
  [SMALL_STATE(431)] = 18384,
  [SMALL_STATE(432)] = 18391,
  [SMALL_STATE(433)] = 18398,
  [SMALL_STATE(434)] = 18405,
  [SMALL_STATE(435)] = 18412,
  [SMALL_STATE(436)] = 18419,
  [SMALL_STATE(437)] = 18426,
  [SMALL_STATE(438)] = 18433,
  [SMALL_STATE(439)] = 18440,
  [SMALL_STATE(440)] = 18447,
  [SMALL_STATE(441)] = 18454,
  [SMALL_STATE(442)] = 18461,
  [SMALL_STATE(443)] = 18468,
  [SMALL_STATE(444)] = 18475,
  [SMALL_STATE(445)] = 18482,
  [SMALL_STATE(446)] = 18489,
  [SMALL_STATE(447)] = 18496,
  [SMALL_STATE(448)] = 18503,
  [SMALL_STATE(449)] = 18510,
  [SMALL_STATE(450)] = 18517,
  [SMALL_STATE(451)] = 18524,
  [SMALL_STATE(452)] = 18531,
  [SMALL_STATE(453)] = 18538,
  [SMALL_STATE(454)] = 18545,
  [SMALL_STATE(455)] = 18552,
  [SMALL_STATE(456)] = 18559,
  [SMALL_STATE(457)] = 18566,
  [SMALL_STATE(458)] = 18573,
  [SMALL_STATE(459)] = 18580,
  [SMALL_STATE(460)] = 18587,
  [SMALL_STATE(461)] = 18594,
  [SMALL_STATE(462)] = 18601,
  [SMALL_STATE(463)] = 18608,
  [SMALL_STATE(464)] = 18615,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(94),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(27),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(20),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(150),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(93),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(148),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(147),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(146),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(145),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(143),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(132),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(131),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(130),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(144),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(129),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(58),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(387),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(153),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(128),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(128),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(402),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(349),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(95),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(44),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(43),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(181),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(96),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(180),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(173),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(171),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(169),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(164),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(161),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(160),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(159),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(154),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(183),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(51),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(394),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(98),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(184),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(184),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(396),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(351),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_division, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_division, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lhs_expression, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__length, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__length, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_no_block, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_no_block, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, .production_id = 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileopen, 12),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fileopen, 12),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 9, .production_id = 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 9, .production_id = 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__money, 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__money, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rate, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rate, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datevalue, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datevalue, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_function, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_function, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else_block, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else_block, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_division, 6),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_division, 6),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_block, 5),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_block, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else_block, 5),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else_block, 5),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_block, 6),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_block, 6),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format, 6),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format, 6),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__charactersearch, 6),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__charactersearch, 6),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 4),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, .production_id = 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filereadline, 8),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filereadline, 8),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__segment, 8),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__segment, 8),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else_no_block, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else_no_block, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter_division, 4),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter_division, 4),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keywords, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keywords, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(295),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(21),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(414),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(411),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(408),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(98),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(403),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 5),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_division, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_division, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_division, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_statement, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(397),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2), SHIFT_REPEAT(354),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [968] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 3),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
