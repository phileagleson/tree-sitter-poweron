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
#define STATE_COUNT 466
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 244
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
  aux_sym_target_division_token1 = 17,
  anon_sym_EQ = 18,
  aux_sym_define_division_token1 = 19,
  aux_sym_define_division_token2 = 20,
  aux_sym_setup_division_token1 = 21,
  aux_sym_select_division_token1 = 22,
  aux_sym_sort_division_token1 = 23,
  aux_sym_letter_division_token1 = 24,
  aux_sym_print_division_token1 = 25,
  aux_sym_print_division_token2 = 26,
  aux_sym_total_division_token1 = 27,
  aux_sym_record_type_token1 = 28,
  aux_sym_record_type_token2 = 29,
  aux_sym_record_type_token3 = 30,
  aux_sym_record_type_token4 = 31,
  aux_sym_record_type_token5 = 32,
  aux_sym_record_type_token6 = 33,
  aux_sym_record_type_token7 = 34,
  aux_sym_record_type_token8 = 35,
  aux_sym_record_type_token9 = 36,
  aux_sym_record_type_token10 = 37,
  aux_sym_record_type_token11 = 38,
  aux_sym_record_type_token12 = 39,
  aux_sym_record_type_token13 = 40,
  aux_sym_record_type_token14 = 41,
  aux_sym_record_type_token15 = 42,
  aux_sym_record_type_token16 = 43,
  aux_sym_record_type_token17 = 44,
  aux_sym_record_type_token18 = 45,
  aux_sym_record_type_token19 = 46,
  aux_sym_record_type_token20 = 47,
  aux_sym_record_type_token21 = 48,
  aux_sym_record_type_token22 = 49,
  aux_sym_record_type_token23 = 50,
  aux_sym_record_type_token24 = 51,
  aux_sym_record_type_token25 = 52,
  aux_sym_record_type_token26 = 53,
  aux_sym_record_type_token27 = 54,
  aux_sym_record_type_token28 = 55,
  aux_sym_record_type_token29 = 56,
  aux_sym_record_type_token30 = 57,
  aux_sym_record_type_token31 = 58,
  aux_sym_record_type_token32 = 59,
  aux_sym_record_type_token33 = 60,
  aux_sym_record_type_token34 = 61,
  aux_sym_record_type_token35 = 62,
  aux_sym_record_type_token36 = 63,
  aux_sym_record_type_token37 = 64,
  aux_sym_record_type_token38 = 65,
  aux_sym_record_type_token39 = 66,
  aux_sym_record_type_token40 = 67,
  aux_sym_record_type_token41 = 68,
  aux_sym_record_type_token42 = 69,
  aux_sym_record_type_token43 = 70,
  aux_sym_record_type_token44 = 71,
  aux_sym_record_type_token45 = 72,
  aux_sym_record_type_token46 = 73,
  aux_sym_record_type_token47 = 74,
  aux_sym_record_type_token48 = 75,
  aux_sym_record_type_token49 = 76,
  aux_sym_record_type_token50 = 77,
  aux_sym_record_type_token51 = 78,
  aux_sym_record_type_token52 = 79,
  aux_sym_record_type_token53 = 80,
  aux_sym_record_type_token54 = 81,
  aux_sym_record_type_token55 = 82,
  aux_sym_record_type_token56 = 83,
  aux_sym_record_type_token57 = 84,
  aux_sym_record_type_token58 = 85,
  aux_sym_record_type_token59 = 86,
  aux_sym_record_type_token60 = 87,
  aux_sym_record_type_token61 = 88,
  aux_sym_record_type_token62 = 89,
  aux_sym_record_type_token63 = 90,
  aux_sym_record_type_token64 = 91,
  aux_sym_record_type_token65 = 92,
  aux_sym_record_type_token66 = 93,
  aux_sym_record_type_token67 = 94,
  aux_sym_record_type_token68 = 95,
  aux_sym_record_type_token69 = 96,
  aux_sym_record_type_token70 = 97,
  aux_sym_record_type_token71 = 98,
  aux_sym_record_type_token72 = 99,
  aux_sym_record_type_token73 = 100,
  aux_sym_record_type_token74 = 101,
  aux_sym_record_type_token75 = 102,
  aux_sym_record_type_token76 = 103,
  aux_sym_record_type_token77 = 104,
  aux_sym_record_type_token78 = 105,
  aux_sym_record_type_token79 = 106,
  aux_sym_record_type_token80 = 107,
  aux_sym_record_type_token81 = 108,
  aux_sym_record_type_token82 = 109,
  aux_sym_record_type_token83 = 110,
  aux_sym_record_type_token84 = 111,
  aux_sym_record_type_token85 = 112,
  aux_sym_record_type_token86 = 113,
  aux_sym_record_type_token87 = 114,
  aux_sym_record_type_token88 = 115,
  aux_sym_record_type_token89 = 116,
  aux_sym_record_type_token90 = 117,
  aux_sym_record_type_token91 = 118,
  aux_sym_record_type_token92 = 119,
  aux_sym_record_type_token93 = 120,
  aux_sym_record_type_token94 = 121,
  aux_sym_record_type_token95 = 122,
  aux_sym_record_type_token96 = 123,
  aux_sym_record_type_token97 = 124,
  aux_sym_record_type_token98 = 125,
  aux_sym_record_type_token99 = 126,
  aux_sym_record_type_token100 = 127,
  aux_sym_record_type_token101 = 128,
  aux_sym_record_type_token102 = 129,
  aux_sym_record_type_token103 = 130,
  aux_sym_record_type_token104 = 131,
  aux_sym_record_type_token105 = 132,
  aux_sym_record_type_token106 = 133,
  aux_sym_record_type_token107 = 134,
  aux_sym_record_type_token108 = 135,
  aux_sym_record_type_token109 = 136,
  aux_sym_record_type_token110 = 137,
  aux_sym_record_type_token111 = 138,
  aux_sym_data_type_token1 = 139,
  aux_sym_data_type_token2 = 140,
  aux_sym_data_type_token3 = 141,
  aux_sym_data_type_token4 = 142,
  aux_sym_data_type_token5 = 143,
  aux_sym_array_type_token1 = 144,
  anon_sym_LPAREN = 145,
  anon_sym_COMMA = 146,
  anon_sym_RPAREN = 147,
  anon_sym_DQUOTE = 148,
  aux_sym_string_literal_token1 = 149,
  aux_sym__identifier_token1 = 150,
  sym_number = 151,
  sym_money = 152,
  sym_date = 153,
  sym_rate = 154,
  anon_sym_POUND = 155,
  aux_sym_include_statement_token1 = 156,
  anon_sym_COLON = 157,
  aux_sym_special_keywords_token1 = 158,
  aux_sym_special_keywords_token2 = 159,
  aux_sym_special_keywords_token3 = 160,
  aux_sym_special_keywords_token4 = 161,
  aux_sym_special_keywords_token5 = 162,
  aux_sym_special_keywords_token6 = 163,
  aux_sym_special_keywords_token7 = 164,
  aux_sym_special_keywords_token8 = 165,
  aux_sym_special_keywords_token9 = 166,
  aux_sym_special_keywords_token10 = 167,
  aux_sym_special_keywords_token11 = 168,
  aux_sym_special_keywords_token12 = 169,
  aux_sym_special_keywords_token13 = 170,
  aux_sym_special_keywords_token14 = 171,
  aux_sym_special_keywords_token15 = 172,
  aux_sym_special_keywords_token16 = 173,
  aux_sym_special_keywords_token17 = 174,
  aux_sym_special_keywords_token18 = 175,
  aux_sym_special_keywords_token19 = 176,
  sym_comment = 177,
  anon_sym_AND = 178,
  anon_sym_OR = 179,
  anon_sym_PLUS = 180,
  anon_sym_DASH = 181,
  anon_sym_STAR = 182,
  anon_sym_SLASH = 183,
  anon_sym_LT_GT = 184,
  anon_sym_GT = 185,
  anon_sym_LT = 186,
  aux_sym_for_statement_token1 = 187,
  aux_sym_for_statement_token2 = 188,
  aux_sym_if_statement_token1 = 189,
  aux_sym_if_statement_token2 = 190,
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
  sym_statement = 235,
  sym_procedure_definition = 236,
  sym_procedure_call = 237,
  aux_sym_source_file_repeat1 = 238,
  aux_sym_source_file_repeat2 = 239,
  aux_sym_source_file_repeat3 = 240,
  aux_sym_define_division_repeat1 = 241,
  aux_sym_array_type_repeat1 = 242,
  aux_sym__array_identifier_repeat1 = 243,
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
  [aux_sym_for_statement_token2] = "for_statement_token2",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_if_statement_token2] = "if_statement_token2",
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
  [aux_sym_for_statement_token2] = aux_sym_for_statement_token2,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_if_statement_token2] = aux_sym_if_statement_token2,
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
  [aux_sym_for_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token2] = {
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
      if (eof) ADVANCE(1067);
      if (lookahead == '"') ADVANCE(1312);
      if (lookahead == '#') ADVANCE(1877);
      if (lookahead == '$') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == ')') ADVANCE(1311);
      if (lookahead == '*') ADVANCE(1908);
      if (lookahead == '+') ADVANCE(1905);
      if (lookahead == ',') ADVANCE(1310);
      if (lookahead == '-') ADVANCE(1907);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '/') ADVANCE(1909);
      if (lookahead == '0') ADVANCE(1858);
      if (lookahead == ':') ADVANCE(1879);
      if (lookahead == '<') ADVANCE(1912);
      if (lookahead == '=') ADVANCE(1099);
      if (lookahead == '>') ADVANCE(1911);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(449);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(533);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(702);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(397);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(874);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(60);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(359);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1861);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1917);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(941);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1312);
      if (lookahead == '#') ADVANCE(1877);
      if (lookahead == '$') ADVANCE(1852);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == ')') ADVANCE(1311);
      if (lookahead == '*') ADVANCE(1908);
      if (lookahead == '+') ADVANCE(1905);
      if (lookahead == ',') ADVANCE(1310);
      if (lookahead == '-') ADVANCE(1907);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '/') ADVANCE(1909);
      if (lookahead == '0') ADVANCE(1858);
      if (lookahead == '<') ADVANCE(1912);
      if (lookahead == '=') ADVANCE(1099);
      if (lookahead == '>') ADVANCE(1911);
      if (lookahead == 'A') ADVANCE(1318);
      if (lookahead == 'O') ADVANCE(1319);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1360);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1648);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1517);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1493);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1694);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1463);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1515);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1348);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1541);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1861);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(1312);
      if (lookahead == '#') ADVANCE(1877);
      if (lookahead == '$') ADVANCE(1852);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '0') ADVANCE(1858);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1360);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1607);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1517);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1493);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1694);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1463);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1515);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1348);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1541);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1861);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1312);
      if (lookahead == '#') ADVANCE(1877);
      if (lookahead == '$') ADVANCE(1852);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '0') ADVANCE(1858);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1360);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1648);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1517);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1493);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1694);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1463);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1515);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1348);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1541);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1861);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1312);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1047);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '0') ADVANCE(1862);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1863);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1877);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1761);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1648);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(7)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1877);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1648);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1870);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(1852);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '0') ADVANCE(1858);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1375);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1320);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1321);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1518);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1611);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1579);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1673);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1624);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1659);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1330);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1519);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1322);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1436);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1327);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1732);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1771);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1437);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1460);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1861);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(1876);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(1876);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(1876);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(1875);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(1875);
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(1875);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1053);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == ')') ADVANCE(1311);
      if (lookahead == '*') ADVANCE(1908);
      if (lookahead == '+') ADVANCE(1904);
      if (lookahead == ',') ADVANCE(1310);
      if (lookahead == '-') ADVANCE(1906);
      if (lookahead == '/') ADVANCE(1909);
      if (lookahead == '<') ADVANCE(1912);
      if (lookahead == '=') ADVANCE(1099);
      if (lookahead == '>') ADVANCE(1911);
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(329);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(759);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(926);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(86);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(514);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1054);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(781);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(1059);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(1056);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(1900);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(804);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(806);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(1902);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(1902);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(1899);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '{') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1064);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(1853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1047);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '0') ADVANCE(1862);
      if (lookahead == ':') ADVANCE(1879);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(307);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(583);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(533);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(715);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(751);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(874);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(360);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1863);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1870);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1022);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(787);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(876);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1013);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(440);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(939);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(813);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(590);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1013);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(440);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(939);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1206);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1032);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1114);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1180);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(802);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(605);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1022);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(787);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(930);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1914);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1024);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(667);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(988);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(817);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(800);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(952);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1913);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(800);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1913);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1027);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1000);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(943);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(899);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(905);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(907);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(481);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(699);
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
          lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(936);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(478);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(478);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(831);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(347);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(876);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(942);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(833);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(945);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(945);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(947);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(946);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(974);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(348);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(984);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(762);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 138:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(815);
      END_STATE();
    case 139:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(815);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(784);
      END_STATE();
    case 140:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(995);
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(821);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(474);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(893);
      END_STATE();
    case 142:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(812);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 143:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(812);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 144:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1006);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 146:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 147:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 148:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 149:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(476);
      END_STATE();
    case 150:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      END_STATE();
    case 151:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(341);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(804);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(806);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1881);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1225);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(804);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1020);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(775);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(527);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(531);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1037);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(544);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(363);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(811);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1007);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(462);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(908);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(950);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(951);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(918);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(954);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(959);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(482);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(756);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1881);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(955);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(840);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 202:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(971);
      END_STATE();
    case 203:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 204:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 205:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 206:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(978);
      END_STATE();
    case 207:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 208:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 209:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
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
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(982);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1101);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1131);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1198);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1889);
      END_STATE();
    case 218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1200);
      END_STATE();
    case 219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1151);
      END_STATE();
    case 220:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1145);
      END_STATE();
    case 221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1301);
      END_STATE();
    case 222:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1883);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1885);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1008);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(596);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(999);
      END_STATE();
    case 229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1010);
      END_STATE();
    case 230:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1011);
      END_STATE();
    case 231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1002);
      END_STATE();
    case 232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(717);
      END_STATE();
    case 234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(779);
      END_STATE();
    case 235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 240:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 241:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 242:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 243:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 244:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 245:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 246:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 247:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 248:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(430);
      END_STATE();
    case 249:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 250:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 251:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(753);
      END_STATE();
    case 252:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(830);
      END_STATE();
    case 253:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 254:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 255:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 256:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 257:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 258:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 259:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 260:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 261:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 262:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 263:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 264:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(858);
      END_STATE();
    case 265:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 266:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      END_STATE();
    case 267:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1030);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(878);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1303);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1304);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1916);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1231);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1095);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1271);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1286);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1246);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1267);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1070);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1100);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1248);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1878);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1084);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1262);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1252);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1256);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1894);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1884);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1229);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1892);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1219);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1082);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1273);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1297);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1880);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(998);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 323:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1914);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 334:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 342:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      END_STATE();
    case 347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 348:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 349:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 354:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 356:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 357:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 358:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(956);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(878);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 359:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(489);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(635);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(823);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 363:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(977);
      END_STATE();
    case 368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 391:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 393:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1031);
      END_STATE();
    case 395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 396:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 397:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1072);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 398:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(903);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(877);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 399:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(903);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 400:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(728);
      END_STATE();
    case 401:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(464);
      END_STATE();
    case 402:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      END_STATE();
    case 403:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(706);
      END_STATE();
    case 404:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(486);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 405:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(707);
      END_STATE();
    case 406:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(384);
      END_STATE();
    case 407:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(708);
      END_STATE();
    case 408:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(467);
      END_STATE();
    case 409:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(709);
      END_STATE();
    case 410:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(521);
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
          lookahead == 'f') ADVANCE(714);
      END_STATE();
    case 416:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 417:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(477);
      END_STATE();
    case 418:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(738);
      END_STATE();
    case 419:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(356);
      END_STATE();
    case 420:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(522);
      END_STATE();
    case 421:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1274);
      END_STATE();
    case 422:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1127);
      END_STATE();
    case 423:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1137);
      END_STATE();
    case 424:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1890);
      END_STATE();
    case 425:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1129);
      END_STATE();
    case 426:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(865);
      END_STATE();
    case 427:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(931);
      END_STATE();
    case 428:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(614);
      END_STATE();
    case 429:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 430:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 431:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 432:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 433:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(600);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(989);
      END_STATE();
    case 434:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(603);
      END_STATE();
    case 435:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(562);
      END_STATE();
    case 436:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1089);
      END_STATE();
    case 437:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1160);
      END_STATE();
    case 438:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(484);
      END_STATE();
    case 439:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(729);
      END_STATE();
    case 440:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 441:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(754);
      END_STATE();
    case 442:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 443:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(741);
      END_STATE();
    case 444:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(745);
      END_STATE();
    case 445:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 446:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1014);
      END_STATE();
    case 448:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 449:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(438);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(788);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 452:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 455:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 457:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 458:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 461:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 462:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(937);
      END_STATE();
    case 463:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 464:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 465:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 466:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 467:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 468:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 469:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(872);
      END_STATE();
    case 470:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(911);
      END_STATE();
    case 471:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(928);
      END_STATE();
    case 472:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(891);
      END_STATE();
    case 473:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 474:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(938);
      END_STATE();
    case 475:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(922);
      END_STATE();
    case 476:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 477:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 478:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      END_STATE();
    case 479:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1017);
      END_STATE();
    case 480:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1019);
      END_STATE();
    case 481:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 482:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 483:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(660);
      END_STATE();
    case 484:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      END_STATE();
    case 485:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1015);
      END_STATE();
    case 486:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 487:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(734);
      END_STATE();
    case 488:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 489:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 490:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 491:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 492:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(986);
      END_STATE();
    case 493:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 494:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 495:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(663);
      END_STATE();
    case 496:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 497:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 498:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 499:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 500:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(946);
      END_STATE();
    case 501:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 502:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      END_STATE();
    case 503:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      END_STATE();
    case 504:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 505:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 506:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      END_STATE();
    case 507:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(949);
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
          lookahead == 'i') ADVANCE(750);
      END_STATE();
    case 511:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(963);
      END_STATE();
    case 512:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 513:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(898);
      END_STATE();
    case 514:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 515:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 516:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 517:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 518:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 519:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 520:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1043);
      END_STATE();
    case 521:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 522:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 523:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(983);
      END_STATE();
    case 524:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1140);
      END_STATE();
    case 525:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(578);
      END_STATE();
    case 526:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 527:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(463);
      END_STATE();
    case 528:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(473);
      END_STATE();
    case 529:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(845);
      END_STATE();
    case 530:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(990);
      END_STATE();
    case 531:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(244);
      END_STATE();
    case 532:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(580);
      END_STATE();
    case 533:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 534:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 535:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1171);
      END_STATE();
    case 536:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1074);
      END_STATE();
    case 537:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1241);
      END_STATE();
    case 538:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1173);
      END_STATE();
    case 539:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 540:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1143);
      END_STATE();
    case 541:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1211);
      END_STATE();
    case 542:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1109);
      END_STATE();
    case 543:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 544:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(997);
      END_STATE();
    case 545:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 546:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(883);
      END_STATE();
    case 547:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(883);
      END_STATE();
    case 548:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      END_STATE();
    case 549:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1040);
      END_STATE();
    case 550:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 551:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 552:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 553:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(724);
      END_STATE();
    case 554:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(869);
      END_STATE();
    case 555:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(989);
      END_STATE();
    case 556:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 557:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 558:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(596);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 559:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 560:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 561:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 562:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 563:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 564:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 565:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 566:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 567:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 568:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 569:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 570:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 571:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 572:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 573:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 574:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 575:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1041);
      END_STATE();
    case 576:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 577:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 578:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 579:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 580:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 581:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(764);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(862);
      END_STATE();
    case 582:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 583:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 584:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 585:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1120);
      END_STATE();
    case 586:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1184);
      END_STATE();
    case 587:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1155);
      END_STATE();
    case 588:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1254);
      END_STATE();
    case 589:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 590:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 591:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 592:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 593:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(870);
      END_STATE();
    case 594:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 595:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 596:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 597:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 598:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 599:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 600:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 601:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 602:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(382);
      END_STATE();
    case 603:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 604:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 605:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 606:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(962);
      END_STATE();
    case 607:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1216);
      END_STATE();
    case 608:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1915);
      END_STATE();
    case 609:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1196);
      END_STATE();
    case 610:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1078);
      END_STATE();
    case 611:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1244);
      END_STATE();
    case 612:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1164);
      END_STATE();
    case 613:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1886);
      END_STATE();
    case 614:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 615:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1896);
      END_STATE();
    case 616:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1276);
      END_STATE();
    case 617:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1188);
      END_STATE();
    case 618:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1258);
      END_STATE();
    case 619:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1284);
      END_STATE();
    case 620:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1239);
      END_STATE();
    case 621:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1220);
      END_STATE();
    case 622:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1210);
      END_STATE();
    case 623:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1242);
      END_STATE();
    case 624:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1260);
      END_STATE();
    case 625:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1266);
      END_STATE();
    case 626:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1126);
      END_STATE();
    case 627:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1237);
      END_STATE();
    case 628:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1261);
      END_STATE();
    case 629:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(178);
      END_STATE();
    case 630:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 631:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 632:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 633:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 634:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 635:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 636:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1026);
      END_STATE();
    case 637:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1012);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 638:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 639:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 640:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      END_STATE();
    case 641:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      END_STATE();
    case 642:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 643:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 644:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      END_STATE();
    case 645:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 646:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 647:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 648:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 649:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
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
          lookahead == 'n') ADVANCE(917);
      END_STATE();
    case 655:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 656:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      END_STATE();
    case 657:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(920);
      END_STATE();
    case 658:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 659:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(923);
      END_STATE();
    case 660:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 661:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(924);
      END_STATE();
    case 662:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 663:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 664:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 665:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 666:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 667:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 668:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(993);
      END_STATE();
    case 669:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 670:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 671:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 672:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 673:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 674:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 675:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 676:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 677:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 678:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 679:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 680:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 681:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 682:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 683:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 684:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 685:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
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
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 691:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(958);
      END_STATE();
    case 692:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 693:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(957);
      END_STATE();
    case 694:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 695:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(970);
      END_STATE();
    case 696:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 697:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      END_STATE();
    case 698:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 699:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 700:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      END_STATE();
    case 701:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 702:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 703:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1882);
      END_STATE();
    case 704:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 705:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1116);
      END_STATE();
    case 706:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      END_STATE();
    case 707:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1175);
      END_STATE();
    case 708:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1293);
      END_STATE();
    case 709:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1298);
      END_STATE();
    case 710:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1295);
      END_STATE();
    case 711:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1296);
      END_STATE();
    case 712:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1291);
      END_STATE();
    case 713:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1166);
      END_STATE();
    case 714:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1290);
      END_STATE();
    case 715:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 716:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1021);
      END_STATE();
    case 717:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1023);
      END_STATE();
    case 718:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 719:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 720:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 721:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 722:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 723:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1028);
      END_STATE();
    case 724:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 725:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(925);
      END_STATE();
    case 726:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 727:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 728:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 729:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 730:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 731:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(793);
      END_STATE();
    case 732:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 733:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(805);
      END_STATE();
    case 734:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 735:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 736:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 737:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 738:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(816);
      END_STATE();
    case 739:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 740:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 741:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(828);
      END_STATE();
    case 742:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(797);
      END_STATE();
    case 743:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 744:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 745:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
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
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 749:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 750:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 751:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(967);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 752:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 753:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1025);
      END_STATE();
    case 754:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 755:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 756:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(996);
      END_STATE();
    case 757:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 758:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(992);
      END_STATE();
    case 759:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 760:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      END_STATE();
    case 761:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 762:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 763:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 764:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 765:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1001);
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
          lookahead == 'o') ADVANCE(1005);
      END_STATE();
    case 769:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 770:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1103);
      END_STATE();
    case 771:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1221);
      END_STATE();
    case 772:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1153);
      END_STATE();
    case 773:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1217);
      END_STATE();
    case 774:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1265);
      END_STATE();
    case 775:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 776:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(960);
      END_STATE();
    case 777:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(773);
      END_STATE();
    case 778:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 779:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 780:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 781:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 782:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(940);
      END_STATE();
    case 783:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 784:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(834);
      END_STATE();
    case 785:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(839);
      END_STATE();
    case 786:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 787:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1157);
      END_STATE();
    case 788:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1069);
      END_STATE();
    case 789:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1280);
      END_STATE();
    case 790:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1167);
      END_STATE();
    case 791:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 792:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1306);
      END_STATE();
    case 793:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1282);
      END_STATE();
    case 794:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1278);
      END_STATE();
    case 795:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1135);
      END_STATE();
    case 796:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1302);
      END_STATE();
    case 797:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1133);
      END_STATE();
    case 798:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1141);
      END_STATE();
    case 799:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1149);
      END_STATE();
    case 800:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 801:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 802:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      END_STATE();
    case 803:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1018);
      END_STATE();
    case 804:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 805:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1035);
      END_STATE();
    case 806:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 807:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 808:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 809:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1036);
      END_STATE();
    case 810:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(892);
      END_STATE();
    case 811:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      END_STATE();
    case 812:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 813:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 814:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 815:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 816:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 817:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 818:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 819:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 820:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 821:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 822:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 823:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 824:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 825:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 826:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 827:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 828:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 829:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(758);
      END_STATE();
    case 830:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 831:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 832:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 833:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 834:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 835:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 836:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 837:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 838:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 839:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 840:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 841:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(934);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 842:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 843:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 844:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 845:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(991);
      END_STATE();
    case 846:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 847:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 848:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 849:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 850:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(895);
      END_STATE();
    case 851:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 852:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 853:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 854:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 855:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(897);
      END_STATE();
    case 856:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 857:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 858:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 859:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 860:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 861:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 862:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 863:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 864:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1110);
      END_STATE();
    case 865:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1269);
      END_STATE();
    case 866:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1897);
      END_STATE();
    case 867:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1893);
      END_STATE();
    case 868:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1223);
      END_STATE();
    case 869:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1233);
      END_STATE();
    case 870:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1887);
      END_STATE();
    case 871:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1178);
      END_STATE();
    case 872:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1264);
      END_STATE();
    case 873:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1888);
      END_STATE();
    case 874:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(323);
      END_STATE();
    case 875:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(864);
      END_STATE();
    case 876:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(929);
      END_STATE();
    case 877:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 878:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      END_STATE();
    case 879:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(896);
      END_STATE();
    case 880:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(867);
      END_STATE();
    case 881:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(868);
      END_STATE();
    case 882:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(953);
      END_STATE();
    case 883:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      END_STATE();
    case 884:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(885);
      END_STATE();
    case 885:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 886:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(944);
      END_STATE();
    case 887:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(468);
      END_STATE();
    case 888:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      END_STATE();
    case 889:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(961);
      END_STATE();
    case 890:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 891:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 892:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(732);
      END_STATE();
    case 893:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 894:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 895:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 896:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      END_STATE();
    case 897:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      END_STATE();
    case 898:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(973);
      END_STATE();
    case 899:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(444);
      END_STATE();
    case 900:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(969);
      END_STATE();
    case 901:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 902:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 903:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 904:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 905:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1305);
      END_STATE();
    case 906:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 907:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 908:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      END_STATE();
    case 909:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1098);
      END_STATE();
    case 910:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1112);
      END_STATE();
    case 911:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1118);
      END_STATE();
    case 912:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 913:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1086);
      END_STATE();
    case 914:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1124);
      END_STATE();
    case 915:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1192);
      END_STATE();
    case 916:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1212);
      END_STATE();
    case 917:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1158);
      END_STATE();
    case 918:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1895);
      END_STATE();
    case 919:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1235);
      END_STATE();
    case 920:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1194);
      END_STATE();
    case 921:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1898);
      END_STATE();
    case 922:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1299);
      END_STATE();
    case 923:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 924:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1146);
      END_STATE();
    case 925:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      END_STATE();
    case 926:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(590);
      END_STATE();
    case 927:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 928:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1034);
      END_STATE();
    case 929:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      END_STATE();
    case 930:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 931:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(436);
      END_STATE();
    case 932:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1039);
      END_STATE();
    case 933:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      END_STATE();
    case 934:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(459);
      END_STATE();
    case 935:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 936:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 937:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(966);
      END_STATE();
    case 938:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(757);
      END_STATE();
    case 939:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 940:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 941:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(511);
      END_STATE();
    case 942:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 943:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 944:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(824);
      END_STATE();
    case 945:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      END_STATE();
    case 946:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 947:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 948:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 949:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 950:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(487);
      END_STATE();
    case 951:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      END_STATE();
    case 952:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      END_STATE();
    case 953:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      END_STATE();
    case 954:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(857);
      END_STATE();
    case 955:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      END_STATE();
    case 956:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(962);
      END_STATE();
    case 957:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      END_STATE();
    case 958:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 959:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 960:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(849);
      END_STATE();
    case 961:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      END_STATE();
    case 962:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 963:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      END_STATE();
    case 964:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      END_STATE();
    case 965:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      END_STATE();
    case 966:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 967:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 968:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(853);
      END_STATE();
    case 969:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 970:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 971:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 972:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      END_STATE();
    case 973:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      END_STATE();
    case 974:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      END_STATE();
    case 975:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(854);
      END_STATE();
    case 976:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      END_STATE();
    case 977:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(964);
      END_STATE();
    case 978:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      END_STATE();
    case 979:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      END_STATE();
    case 980:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
      END_STATE();
    case 981:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(506);
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
          lookahead == 't') ADVANCE(510);
      END_STATE();
    case 985:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 986:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      END_STATE();
    case 987:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(861);
      END_STATE();
    case 988:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 989:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(770);
      END_STATE();
    case 990:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(771);
      END_STATE();
    case 991:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 992:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(774);
      END_STATE();
    case 993:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(696);
      END_STATE();
    case 994:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(976);
      END_STATE();
    case 995:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(850);
      END_STATE();
    case 996:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(691);
      END_STATE();
    case 997:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 998:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 999:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(565);
      END_STATE();
    case 1000:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 1001:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(652);
      END_STATE();
    case 1002:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(838);
      END_STATE();
    case 1003:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(654);
      END_STATE();
    case 1004:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(657);
      END_STATE();
    case 1005:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(659);
      END_STATE();
    case 1006:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(979);
      END_STATE();
    case 1007:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 1008:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1294);
      END_STATE();
    case 1009:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1288);
      END_STATE();
    case 1010:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1289);
      END_STATE();
    case 1011:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1292);
      END_STATE();
    case 1012:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(363);
      END_STATE();
    case 1013:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(453);
      END_STATE();
    case 1014:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(378);
      END_STATE();
    case 1015:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(296);
      END_STATE();
    case 1016:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(494);
      END_STATE();
    case 1017:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(471);
      END_STATE();
    case 1018:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(342);
      END_STATE();
    case 1019:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(357);
      END_STATE();
    case 1020:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1891);
      END_STATE();
    case 1021:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1177);
      END_STATE();
    case 1022:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(727);
      END_STATE();
    case 1023:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(866);
      END_STATE();
    case 1024:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(573);
      END_STATE();
    case 1025:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(873);
      END_STATE();
    case 1026:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(446);
      END_STATE();
    case 1027:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(238);
      END_STATE();
    case 1028:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(679);
      END_STATE();
    case 1029:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(769);
      END_STATE();
    case 1030:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(520);
      END_STATE();
    case 1031:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(582);
      END_STATE();
    case 1032:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1307);
      END_STATE();
    case 1033:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1093);
      END_STATE();
    case 1034:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1122);
      END_STATE();
    case 1035:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1190);
      END_STATE();
    case 1036:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1202);
      END_STATE();
    case 1037:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1214);
      END_STATE();
    case 1038:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 1039:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(780);
      END_STATE();
    case 1040:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(887);
      END_STATE();
    case 1041:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(888);
      END_STATE();
    case 1042:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(116);
      END_STATE();
    case 1043:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(118);
      END_STATE();
    case 1044:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1866);
      END_STATE();
    case 1045:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1867);
      END_STATE();
    case 1046:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 1047:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1870);
      END_STATE();
    case 1048:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1871);
      END_STATE();
    case 1049:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1869);
      END_STATE();
    case 1050:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 1051:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1874);
      END_STATE();
    case 1052:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 1053:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 1054:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 1055:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      END_STATE();
    case 1056:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1052);
      END_STATE();
    case 1057:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1863);
      END_STATE();
    case 1058:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 1059:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1058);
      END_STATE();
    case 1060:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1868);
      END_STATE();
    case 1061:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1853);
      END_STATE();
    case 1062:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 1063:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1061);
      END_STATE();
    case 1064:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1063);
      END_STATE();
    case 1065:
      if (eof) ADVANCE(1067);
      if (lookahead == '"') ADVANCE(1312);
      if (lookahead == '#') ADVANCE(1877);
      if (lookahead == '$') ADVANCE(1852);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '*') ADVANCE(1908);
      if (lookahead == '+') ADVANCE(1905);
      if (lookahead == '-') ADVANCE(1907);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '/') ADVANCE(1909);
      if (lookahead == '0') ADVANCE(1858);
      if (lookahead == '<') ADVANCE(1912);
      if (lookahead == '=') ADVANCE(1099);
      if (lookahead == '>') ADVANCE(1911);
      if (lookahead == 'A') ADVANCE(1318);
      if (lookahead == 'O') ADVANCE(1319);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1360);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1366);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1517);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1493);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1694);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1463);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1515);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1348);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1541);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1861);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1065)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 1066:
      if (eof) ADVANCE(1067);
      if (lookahead == '"') ADVANCE(1312);
      if (lookahead == '#') ADVANCE(1877);
      if (lookahead == '$') ADVANCE(1852);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(1048);
      if (lookahead == '0') ADVANCE(1858);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1360);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1366);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1517);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1493);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1694);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1463);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1515);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1348);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1541);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1861);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1066)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1853);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1354);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_define_division_token2);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_define_division_token2);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_letter_division_token1);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_print_division_token2);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_total_division_token1);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_record_type_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_record_type_token2);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_record_type_token2);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_record_type_token3);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_record_type_token3);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_record_type_token4);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_record_type_token4);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_record_type_token5);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_record_type_token5);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_record_type_token6);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_record_type_token6);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_record_type_token7);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_record_type_token7);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_record_type_token8);
      if (lookahead == ' ') ADVANCE(968);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_record_type_token8);
      if (lookahead == ' ') ADVANCE(968);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_record_type_token9);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_record_type_token10);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_record_type_token10);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_record_type_token11);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_record_type_token11);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_record_type_token12);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_record_type_token12);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_record_type_token13);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_record_type_token13);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_record_type_token14);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_record_type_token14);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_record_type_token15);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_record_type_token15);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_record_type_token16);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1757);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_record_type_token16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(856);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_record_type_token17);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_record_type_token17);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_record_type_token18);
      if (lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_record_type_token18);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_record_type_token19);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_record_type_token20);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_record_type_token21);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_record_type_token21);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_record_type_token22);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_record_type_token22);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_record_type_token23);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_record_type_token23);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_record_type_token24);
      if (lookahead == ' ') ADVANCE(504);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_record_type_token24);
      if (lookahead == ' ') ADVANCE(504);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_record_type_token25);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_record_type_token26);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1401);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1738);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1699);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1480);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_record_type_token26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(842);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(760);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_record_type_token27);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_record_type_token27);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_record_type_token28);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_record_type_token28);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_record_type_token29);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_record_type_token29);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_record_type_token30);
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_record_type_token30);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_record_type_token31);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_record_type_token32);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_record_type_token32);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_record_type_token33);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_record_type_token33);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_record_type_token34);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_record_type_token34);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_record_type_token35);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_record_type_token35);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_record_type_token36);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_record_type_token37);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1669);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_record_type_token37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_record_type_token38);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_record_type_token38);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_record_type_token39);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_record_type_token39);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_record_type_token40);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_record_type_token40);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_record_type_token41);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_record_type_token41);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_record_type_token42);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_record_type_token42);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_record_type_token43);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_record_type_token43);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_record_type_token44);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_record_type_token44);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_record_type_token45);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_record_type_token45);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_record_type_token46);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_record_type_token46);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_record_type_token47);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_record_type_token47);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_record_type_token48);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_record_type_token48);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_record_type_token49);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_record_type_token49);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_record_type_token50);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_record_type_token50);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_record_type_token51);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_record_type_token51);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_record_type_token52);
      if (lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_record_type_token52);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_record_type_token53);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_record_type_token53);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_record_type_token54);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_record_type_token55);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_record_type_token56);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_record_type_token56);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_record_type_token57);
      if (lookahead == ' ') ADVANCE(785);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_record_type_token58);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1710);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_record_type_token58);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_record_type_token59);
      if (lookahead == ' ') ADVANCE(404);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_record_type_token59);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_record_type_token60);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_record_type_token61);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_record_type_token62);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_record_type_token62);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_record_type_token63);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_record_type_token63);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_record_type_token64);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_record_type_token64);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_record_type_token65);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_record_type_token65);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_record_type_token66);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_record_type_token66);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_record_type_token67);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_record_type_token67);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_record_type_token68);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_record_type_token68);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_record_type_token69);
      if (lookahead == ' ') ADVANCE(987);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_record_type_token69);
      if (lookahead == ' ') ADVANCE(987);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_record_type_token70);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_record_type_token71);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1700);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_record_type_token71);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(763);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_record_type_token72);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1696);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_record_type_token72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_record_type_token73);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_record_type_token73);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_record_type_token74);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_record_type_token74);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_record_type_token75);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_record_type_token75);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_record_type_token76);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_record_type_token76);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_record_type_token77);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_record_type_token77);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_record_type_token78);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_record_type_token78);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_record_type_token79);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_record_type_token79);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_record_type_token80);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_record_type_token80);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_record_type_token81);
      if (lookahead == ' ') ADVANCE(581);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_record_type_token81);
      if (lookahead == ' ') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_record_type_token82);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_record_type_token83);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_record_type_token84);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_record_type_token84);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_record_type_token85);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(829);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_record_type_token86);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_record_type_token87);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_record_type_token88);
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_record_type_token88);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_record_type_token89);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_record_type_token89);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_record_type_token90);
      if (lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_record_type_token90);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_record_type_token91);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_record_type_token92);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_record_type_token92);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_record_type_token93);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_record_type_token93);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_record_type_token94);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_record_type_token94);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_record_type_token95);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_record_type_token95);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_record_type_token96);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_record_type_token96);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_record_type_token97);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_record_type_token97);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_record_type_token98);
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_record_type_token98);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_record_type_token99);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_record_type_token100);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_record_type_token101);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_record_type_token102);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_record_type_token103);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_record_type_token104);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_record_type_token105);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_record_type_token106);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_record_type_token107);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_record_type_token108);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_record_type_token109);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_record_type_token110);
      if (lookahead == ' ') ADVANCE(1029);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_record_type_token110);
      if (lookahead == ' ') ADVANCE(1029);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_record_type_token111);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_data_type_token1);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_data_type_token2);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_data_type_token3);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_data_type_token4);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_data_type_token5);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(1314);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(1314);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(1917);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '.') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1316);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'D') ADVANCE(1901);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'N') ADVANCE(1317);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(1903);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1800);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1586);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1726);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1623);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1843);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1466);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1716);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1731);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1470);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1679);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1459);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1207);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1381);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1115);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1181);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1837);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1540);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1807);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1651);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1625);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1575);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1617);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1660);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1384);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1824);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1737);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1599);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1390);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1626);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1850);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1665);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1424);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1809);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1592);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1430);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1583);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1398);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1488);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1640);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1558);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1584);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1399);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1627);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1589);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1590);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1433);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1631);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1745);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1632);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1635);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1798);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1758);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1385);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1387);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1594);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1605);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1598);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1364);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1748);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1619);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1810);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1760);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1813);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1853);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1813);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1814);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1667);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1432);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1811);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1403);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1698);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1484);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1733);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1613);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1370);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1376);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1739);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1612);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1462);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1562);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1226);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1476);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1574);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1577);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1764);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1701);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1729);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1382);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1544);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1536);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1393);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1549);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1538);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1421);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1351);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1498);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1547);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1477);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1805);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1446);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1448);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1449);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1487);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1806);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1815);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1702);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1400);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1703);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1402);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1704);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1404);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1132);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1199);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1497);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1201);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1152);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1102);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1532);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1830);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1560);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1834);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1714);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1408);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1572);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1325);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1326);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1502);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1490);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1491);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1555);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1685);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1749);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1559);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1752);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1504);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1428);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1565);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1429);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1609);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1853);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1332);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1392);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1639);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1533);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1228);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1232);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1272);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1287);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1247);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1268);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1249);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1205);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1263);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1253);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1257);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1230);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1096);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1092);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1071);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1085);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1097);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1315);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1083);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1523);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1781);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1746);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1727);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1683);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1770);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1829);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1844);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1379);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1670);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1548);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1426);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1841);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1614);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1542);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1412);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1706);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1849);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1615);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1717);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1616);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1734);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1755);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1550);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1413);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1736);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1718);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1377);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1416);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1762);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1663);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1741);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1415);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1720);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1514);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1721);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1723);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1724);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1641);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1443);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1695);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1636);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1743);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1645);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1662);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1545);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1773);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1349);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1823);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1804);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1355);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1664);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1666);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1418);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1776);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1644);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1646);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1759);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1751);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1649);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1654);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1427);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1620);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1534);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1711);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1845);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1073);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1785);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1383);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1378);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1333);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1682);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1675);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1676);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1510);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1492);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1275);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1128);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1138);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1130);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1766);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1629);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1802);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1445);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1621);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1622);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1600);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1161);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1088);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1561);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1479);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1568);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1684);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1356);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1690);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1838);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1637);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1803);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1394);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1712);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1530);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1638);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1528);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1388);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1674);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1787);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1769);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1788);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1595);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1796);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1338);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1772);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1840);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1689);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1656);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1358);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1602);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1725);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1691);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1603);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1693);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1657);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1658);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1812);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1784);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1139);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1825);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1604);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1551);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1391);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1331);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1172);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1240);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1174);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1371);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1144);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1075);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1580);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1591);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1618);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1709);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1407);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1778);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1851);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1827);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1363);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1678);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1582);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1680);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1768);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1554);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1409);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1585);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1481);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1501);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1756);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1447);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1461);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1453);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1573);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1828);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1564);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1779);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1352);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1570);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1571);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1539);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1414);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1372);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1121);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1185);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1255);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1439);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1507);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1450);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1508);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1511);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1512);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1431);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1836);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1323);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1215);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1197);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1245);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1165);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1163);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1277);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1189);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1259);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1285);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1238);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1243);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1079);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1529);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1525);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1425);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1780);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1531);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1786);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1362);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1789);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1419);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1790);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1791);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1411);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1792);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1793);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1569);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1795);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1797);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1799);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1472);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1454);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1457);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1458);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1775);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1329);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1440);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1826);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1521);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1395);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1420);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1386);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1522);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1396);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1340);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1347);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1820);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1567);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1516);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1588);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1251);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1117);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1183);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1842);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1526);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1581);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1801);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1527);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1735);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1596);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1713);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1500);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1597);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1719);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1628);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1728);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1730);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1630);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1744);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1633);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1722);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1634);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1655);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1593);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1346);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1397);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1350);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1750);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1353);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1831);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1832);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1833);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1835);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1222);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1154);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1218);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1369);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1819);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1707);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1715);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1328);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1495);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1608);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1763);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1156);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1281);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1168);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1283);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1279);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1136);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1134);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1142);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1150);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1068);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1406);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1535);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1576);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1847);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1677);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1848);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1816);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1494);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1324);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1339);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1668);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1578);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1774);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1334);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1336);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1489);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1342);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1661);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1697);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1782);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1552);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1410);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1442);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1335);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1444);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1471);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1478);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1485);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1499);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1482);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1456);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1839);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1422);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1423);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1389);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1344);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1345);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1747);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1753);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1506);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1341);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1111);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1270);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1224);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1234);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1179);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1765);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1474);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1818);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1767);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1686);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1438);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1783);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1556);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1469);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1434);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1524);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1808);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1503);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1672);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1822);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1170);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1113);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1119);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1846);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1148);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1125);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1193);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1213);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1159);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1236);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1195);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1300);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1187);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1081);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1087);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1380);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1520);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1817);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1343);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1643);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1563);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1441);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1486);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1468);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1509);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1473);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1475);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1467);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1451);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1496);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1553);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1368);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1687);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1740);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1688);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1692);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1513);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1821);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1374);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1705);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1671);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1452);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1455);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1642);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1601);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1647);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1650);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1652);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1754);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1653);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1465);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1546);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1505);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1483);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1359);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1176);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1681);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1606);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1610);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1123);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1191);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1203);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1094);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1308);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1777);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1316);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1876);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '_') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1871);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1876);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '_') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1855);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1876);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '_') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1856);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1873);
      if (lookahead == '0') ADVANCE(1865);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1044);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1045);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1060);
      if (lookahead == '_') ADVANCE(1049);
      if (lookahead == 'n') ADVANCE(1854);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1860);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1873);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '_') ADVANCE(1057);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1863);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1873);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '_') ADVANCE(1057);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1859);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1873);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '_') ADVANCE(1057);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1860);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1872);
      if (lookahead == '0') ADVANCE(1869);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1044);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1045);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1060);
      if (lookahead == '_') ADVANCE(1049);
      if (lookahead == 'n') ADVANCE(1854);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1863);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1872);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '_') ADVANCE(1057);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1863);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1050);
      if (lookahead == '_') ADVANCE(1049);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1869);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1050);
      if (lookahead == '_') ADVANCE(1049);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1864);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1044);
      if (lookahead == 'n') ADVANCE(1854);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1866);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1045);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1867);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1868);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1049);
      if (lookahead == 'n') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1869);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1870);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '_') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1871);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1871);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1857);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(sym_money);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym_rate);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym_special_keywords_token1);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym_special_keywords_token2);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym_special_keywords_token3);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym_special_keywords_token4);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym_special_keywords_token5);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym_special_keywords_token6);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym_special_keywords_token7);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym_special_keywords_token8);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(497);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym_special_keywords_token9);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym_special_keywords_token10);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym_special_keywords_token11);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym_special_keywords_token12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym_special_keywords_token13);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym_special_keywords_token14);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym_special_keywords_token15);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym_special_keywords_token16);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym_special_keywords_token17);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym_special_keywords_token18);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(825);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym_special_keywords_token19);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(1899);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1853);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '$') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1870);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1870);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(1910);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym_for_statement_token2);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym_procedure_definition_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1065},
  [12] = {.lex_state = 1065},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 1066},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 1066},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 1066},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 1066},
  [38] = {.lex_state = 1066},
  [39] = {.lex_state = 1066},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1066},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 1066},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
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
  [92] = {.lex_state = 1065},
  [93] = {.lex_state = 1065},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 1065},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 1065},
  [108] = {.lex_state = 1065},
  [109] = {.lex_state = 1065},
  [110] = {.lex_state = 1065},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 1065},
  [115] = {.lex_state = 1065},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 1065},
  [118] = {.lex_state = 1065},
  [119] = {.lex_state = 1065},
  [120] = {.lex_state = 1065},
  [121] = {.lex_state = 1065},
  [122] = {.lex_state = 1065},
  [123] = {.lex_state = 1065},
  [124] = {.lex_state = 1065},
  [125] = {.lex_state = 1065},
  [126] = {.lex_state = 1065},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 1065},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 1065},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 1065},
  [140] = {.lex_state = 1065},
  [141] = {.lex_state = 1065},
  [142] = {.lex_state = 1065},
  [143] = {.lex_state = 1065},
  [144] = {.lex_state = 1065},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 1065},
  [150] = {.lex_state = 1065},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 1065},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 1065},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 1065},
  [161] = {.lex_state = 1065},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 1065},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 1065},
  [166] = {.lex_state = 1065},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 1065},
  [169] = {.lex_state = 1065},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 1065},
  [172] = {.lex_state = 1065},
  [173] = {.lex_state = 1065},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 1065},
  [176] = {.lex_state = 1065},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 1065},
  [179] = {.lex_state = 1066},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 1066},
  [182] = {.lex_state = 1066},
  [183] = {.lex_state = 1066},
  [184] = {.lex_state = 1066},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 1066},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 1066},
  [189] = {.lex_state = 1066},
  [190] = {.lex_state = 1066},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 1066},
  [199] = {.lex_state = 1066},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 1066},
  [202] = {.lex_state = 1066},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 1066},
  [205] = {.lex_state = 1066},
  [206] = {.lex_state = 1066},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 1066},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 1066},
  [212] = {.lex_state = 1066},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 1066},
  [215] = {.lex_state = 1066},
  [216] = {.lex_state = 1066},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 40},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 40},
  [225] = {.lex_state = 40},
  [226] = {.lex_state = 40},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 17},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 40},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 17},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 17},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 17},
  [258] = {.lex_state = 17},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 17},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 17},
  [266] = {.lex_state = 17},
  [267] = {.lex_state = 17},
  [268] = {.lex_state = 17},
  [269] = {.lex_state = 17},
  [270] = {.lex_state = 17},
  [271] = {.lex_state = 17},
  [272] = {.lex_state = 17},
  [273] = {.lex_state = 17},
  [274] = {.lex_state = 17},
  [275] = {.lex_state = 17},
  [276] = {.lex_state = 17},
  [277] = {.lex_state = 17},
  [278] = {.lex_state = 17},
  [279] = {.lex_state = 17},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 17},
  [282] = {.lex_state = 17},
  [283] = {.lex_state = 17},
  [284] = {.lex_state = 17},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 17},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 40},
  [293] = {.lex_state = 40},
  [294] = {.lex_state = 40},
  [295] = {.lex_state = 40},
  [296] = {.lex_state = 40},
  [297] = {.lex_state = 40},
  [298] = {.lex_state = 40},
  [299] = {.lex_state = 40},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 6},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 6},
  [309] = {.lex_state = 6},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 6},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 6},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 6},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 6},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 7},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 8},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 6},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 8},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 6},
  [368] = {.lex_state = 8},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 8},
  [373] = {.lex_state = 8},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 1313},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 1313},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 1313},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 1313},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 1313},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 40},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 40},
  [442] = {.lex_state = 0},
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
  [465] = {.lex_state = 0},
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
    [aux_sym_keyword_token12] = ACTIONS(1),
    [aux_sym_keyword_token13] = ACTIONS(1),
    [aux_sym_keyword_token14] = ACTIONS(1),
    [aux_sym_keyword_token15] = ACTIONS(1),
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
    [aux_sym_for_statement_token2] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token2] = ACTIONS(1),
    [aux_sym_procedure_definition_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(401),
    [sym_target_division] = STATE(226),
    [sym_special_keywords] = STATE(213),
    [aux_sym_source_file_repeat1] = STATE(213),
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
    [sym_record_type] = STATE(437),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(398),
    [sym__array_identifier] = STATE(98),
    [sym_database_field] = STATE(398),
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
    [sym_record_type] = STATE(437),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(389),
    [sym__array_identifier] = STATE(98),
    [sym_database_field] = STATE(389),
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
    [sym_record_type] = STATE(437),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(438),
    [sym__array_identifier] = STATE(98),
    [sym_database_field] = STATE(438),
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
    [aux_sym_define_division_token1] = ACTIONS(29),
    [aux_sym_setup_division_token1] = ACTIONS(29),
    [aux_sym_select_division_token1] = ACTIONS(29),
    [aux_sym_sort_division_token1] = ACTIONS(29),
    [aux_sym_letter_division_token1] = ACTIONS(29),
    [aux_sym_print_division_token1] = ACTIONS(29),
    [aux_sym_total_division_token1] = ACTIONS(29),
    [aux_sym_record_type_token1] = ACTIONS(29),
    [aux_sym_record_type_token2] = ACTIONS(29),
    [aux_sym_record_type_token3] = ACTIONS(29),
    [aux_sym_record_type_token4] = ACTIONS(29),
    [aux_sym_record_type_token5] = ACTIONS(29),
    [aux_sym_record_type_token6] = ACTIONS(29),
    [aux_sym_record_type_token7] = ACTIONS(29),
    [aux_sym_record_type_token8] = ACTIONS(31),
    [aux_sym_record_type_token9] = ACTIONS(29),
    [aux_sym_record_type_token10] = ACTIONS(29),
    [aux_sym_record_type_token11] = ACTIONS(29),
    [aux_sym_record_type_token12] = ACTIONS(29),
    [aux_sym_record_type_token13] = ACTIONS(29),
    [aux_sym_record_type_token14] = ACTIONS(29),
    [aux_sym_record_type_token15] = ACTIONS(29),
    [aux_sym_record_type_token16] = ACTIONS(31),
    [aux_sym_record_type_token17] = ACTIONS(29),
    [aux_sym_record_type_token18] = ACTIONS(31),
    [aux_sym_record_type_token19] = ACTIONS(29),
    [aux_sym_record_type_token20] = ACTIONS(29),
    [aux_sym_record_type_token21] = ACTIONS(29),
    [aux_sym_record_type_token22] = ACTIONS(29),
    [aux_sym_record_type_token23] = ACTIONS(29),
    [aux_sym_record_type_token24] = ACTIONS(31),
    [aux_sym_record_type_token25] = ACTIONS(29),
    [aux_sym_record_type_token26] = ACTIONS(31),
    [aux_sym_record_type_token27] = ACTIONS(29),
    [aux_sym_record_type_token28] = ACTIONS(29),
    [aux_sym_record_type_token29] = ACTIONS(29),
    [aux_sym_record_type_token30] = ACTIONS(31),
    [aux_sym_record_type_token31] = ACTIONS(29),
    [aux_sym_record_type_token32] = ACTIONS(29),
    [aux_sym_record_type_token33] = ACTIONS(31),
    [aux_sym_record_type_token34] = ACTIONS(29),
    [aux_sym_record_type_token35] = ACTIONS(29),
    [aux_sym_record_type_token36] = ACTIONS(29),
    [aux_sym_record_type_token37] = ACTIONS(31),
    [aux_sym_record_type_token38] = ACTIONS(29),
    [aux_sym_record_type_token39] = ACTIONS(29),
    [aux_sym_record_type_token40] = ACTIONS(29),
    [aux_sym_record_type_token41] = ACTIONS(29),
    [aux_sym_record_type_token42] = ACTIONS(29),
    [aux_sym_record_type_token43] = ACTIONS(29),
    [aux_sym_record_type_token44] = ACTIONS(29),
    [aux_sym_record_type_token45] = ACTIONS(29),
    [aux_sym_record_type_token46] = ACTIONS(29),
    [aux_sym_record_type_token47] = ACTIONS(29),
    [aux_sym_record_type_token48] = ACTIONS(29),
    [aux_sym_record_type_token49] = ACTIONS(29),
    [aux_sym_record_type_token50] = ACTIONS(29),
    [aux_sym_record_type_token51] = ACTIONS(29),
    [aux_sym_record_type_token52] = ACTIONS(31),
    [aux_sym_record_type_token53] = ACTIONS(29),
    [aux_sym_record_type_token54] = ACTIONS(29),
    [aux_sym_record_type_token55] = ACTIONS(29),
    [aux_sym_record_type_token56] = ACTIONS(29),
    [aux_sym_record_type_token57] = ACTIONS(31),
    [aux_sym_record_type_token58] = ACTIONS(31),
    [aux_sym_record_type_token59] = ACTIONS(31),
    [aux_sym_record_type_token60] = ACTIONS(29),
    [aux_sym_record_type_token61] = ACTIONS(29),
    [aux_sym_record_type_token62] = ACTIONS(29),
    [aux_sym_record_type_token63] = ACTIONS(29),
    [aux_sym_record_type_token64] = ACTIONS(29),
    [aux_sym_record_type_token65] = ACTIONS(29),
    [aux_sym_record_type_token66] = ACTIONS(29),
    [aux_sym_record_type_token67] = ACTIONS(29),
    [aux_sym_record_type_token68] = ACTIONS(29),
    [aux_sym_record_type_token69] = ACTIONS(31),
    [aux_sym_record_type_token70] = ACTIONS(29),
    [aux_sym_record_type_token71] = ACTIONS(31),
    [aux_sym_record_type_token72] = ACTIONS(31),
    [aux_sym_record_type_token73] = ACTIONS(29),
    [aux_sym_record_type_token74] = ACTIONS(29),
    [aux_sym_record_type_token75] = ACTIONS(29),
    [aux_sym_record_type_token76] = ACTIONS(29),
    [aux_sym_record_type_token77] = ACTIONS(29),
    [aux_sym_record_type_token78] = ACTIONS(29),
    [aux_sym_record_type_token79] = ACTIONS(29),
    [aux_sym_record_type_token80] = ACTIONS(29),
    [aux_sym_record_type_token81] = ACTIONS(31),
    [aux_sym_record_type_token82] = ACTIONS(29),
    [aux_sym_record_type_token83] = ACTIONS(29),
    [aux_sym_record_type_token84] = ACTIONS(29),
    [aux_sym_record_type_token85] = ACTIONS(31),
    [aux_sym_record_type_token86] = ACTIONS(29),
    [aux_sym_record_type_token87] = ACTIONS(29),
    [aux_sym_record_type_token88] = ACTIONS(31),
    [aux_sym_record_type_token89] = ACTIONS(29),
    [aux_sym_record_type_token90] = ACTIONS(31),
    [aux_sym_record_type_token91] = ACTIONS(29),
    [aux_sym_record_type_token92] = ACTIONS(29),
    [aux_sym_record_type_token93] = ACTIONS(29),
    [aux_sym_record_type_token94] = ACTIONS(29),
    [aux_sym_record_type_token95] = ACTIONS(29),
    [aux_sym_record_type_token96] = ACTIONS(29),
    [aux_sym_record_type_token97] = ACTIONS(29),
    [aux_sym_record_type_token98] = ACTIONS(31),
    [aux_sym_record_type_token99] = ACTIONS(29),
    [aux_sym_record_type_token100] = ACTIONS(29),
    [aux_sym_record_type_token101] = ACTIONS(29),
    [aux_sym_record_type_token102] = ACTIONS(29),
    [aux_sym_record_type_token103] = ACTIONS(29),
    [aux_sym_record_type_token104] = ACTIONS(29),
    [aux_sym_record_type_token105] = ACTIONS(29),
    [aux_sym_record_type_token106] = ACTIONS(29),
    [aux_sym_record_type_token107] = ACTIONS(29),
    [aux_sym_record_type_token108] = ACTIONS(29),
    [aux_sym_record_type_token109] = ACTIONS(29),
    [aux_sym_record_type_token110] = ACTIONS(31),
    [aux_sym_record_type_token111] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_record_type] = STATE(294),
    [aux_sym_define_division_token1] = ACTIONS(33),
    [aux_sym_setup_division_token1] = ACTIONS(33),
    [aux_sym_select_division_token1] = ACTIONS(33),
    [aux_sym_sort_division_token1] = ACTIONS(33),
    [aux_sym_letter_division_token1] = ACTIONS(33),
    [aux_sym_print_division_token1] = ACTIONS(33),
    [aux_sym_total_division_token1] = ACTIONS(33),
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
    [sym_record_type] = STATE(6),
    [aux_sym_define_division_token1] = ACTIONS(35),
    [aux_sym_setup_division_token1] = ACTIONS(35),
    [aux_sym_select_division_token1] = ACTIONS(35),
    [aux_sym_sort_division_token1] = ACTIONS(35),
    [aux_sym_letter_division_token1] = ACTIONS(35),
    [aux_sym_print_division_token1] = ACTIONS(35),
    [aux_sym_total_division_token1] = ACTIONS(35),
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
  [8] = {
    [sym_record_type] = STATE(7),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(274), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    ACTIONS(59), 6,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(61), 6,
      aux_sym_define_division_token2,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    STATE(248), 10,
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
  [117] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(283), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    ACTIONS(59), 6,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(61), 6,
      aux_sym_define_division_token2,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    STATE(248), 10,
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
  [234] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(265), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(61), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    STATE(248), 10,
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
  [351] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(266), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(61), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    STATE(248), 10,
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
  [468] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_define_division_token2,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [594] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(119), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(33), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [720] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      aux_sym_keyword_token1,
    ACTIONS(125), 1,
      aux_sym_keyword_token2,
    ACTIONS(127), 1,
      aux_sym_keyword_token3,
    ACTIONS(129), 1,
      aux_sym_keyword_token4,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      aux_sym_procedure_definition_token1,
    STATE(118), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(137), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(201), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(119), 10,
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
  [846] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(167), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [972] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(169), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [1098] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_keyword_token1,
    ACTIONS(125), 1,
      aux_sym_keyword_token2,
    ACTIONS(127), 1,
      aux_sym_keyword_token3,
    ACTIONS(129), 1,
      aux_sym_keyword_token4,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(137), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(201), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(119), 10,
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
  [1224] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(173), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(16), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [1350] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(175), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(36), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [1476] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_keyword_token1,
    ACTIONS(180), 1,
      aux_sym_keyword_token2,
    ACTIONS(183), 1,
      aux_sym_keyword_token3,
    ACTIONS(186), 1,
      aux_sym_keyword_token4,
    ACTIONS(189), 1,
      aux_sym_keyword_token5,
    ACTIONS(192), 1,
      aux_sym_keyword_token6,
    ACTIONS(195), 1,
      aux_sym_keyword_token7,
    ACTIONS(201), 1,
      aux_sym_keyword_token10,
    ACTIONS(204), 1,
      aux_sym_keyword_token11,
    ACTIONS(207), 1,
      aux_sym_keyword_token12,
    ACTIONS(210), 1,
      aux_sym_keyword_token13,
    ACTIONS(213), 1,
      aux_sym_keyword_token14,
    ACTIONS(216), 1,
      aux_sym_keyword_token15,
    ACTIONS(219), 1,
      aux_sym_keyword_token16,
    ACTIONS(222), 1,
      aux_sym_define_division_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      aux_sym__identifier_token1,
    ACTIONS(233), 1,
      sym_number,
    ACTIONS(239), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      aux_sym_procedure_definition_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(198), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(236), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [1602] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym_keyword_token1,
    ACTIONS(250), 1,
      aux_sym_keyword_token2,
    ACTIONS(253), 1,
      aux_sym_keyword_token3,
    ACTIONS(256), 1,
      aux_sym_keyword_token4,
    ACTIONS(259), 1,
      aux_sym_keyword_token5,
    ACTIONS(262), 1,
      aux_sym_keyword_token6,
    ACTIONS(265), 1,
      aux_sym_keyword_token7,
    ACTIONS(271), 1,
      aux_sym_keyword_token10,
    ACTIONS(274), 1,
      aux_sym_keyword_token11,
    ACTIONS(277), 1,
      aux_sym_keyword_token12,
    ACTIONS(280), 1,
      aux_sym_keyword_token13,
    ACTIONS(283), 1,
      aux_sym_keyword_token14,
    ACTIONS(286), 1,
      aux_sym_keyword_token15,
    ACTIONS(289), 1,
      aux_sym_keyword_token16,
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
    STATE(118), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(268), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(304), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(201), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(119), 10,
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
  [1728] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(313), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [1854] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(119), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [1980] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(315), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [2106] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(317), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(25), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [2232] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(319), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [2358] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(321), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(27), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [2484] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(323), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(43), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [2610] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(325), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(24), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [2736] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(321), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [2862] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(327), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [2988] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(329), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [3114] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(331), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [3240] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(333), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(31), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [3366] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(335), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [3492] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_keyword_token1,
    ACTIONS(125), 1,
      aux_sym_keyword_token2,
    ACTIONS(127), 1,
      aux_sym_keyword_token3,
    ACTIONS(129), 1,
      aux_sym_keyword_token4,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(137), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(201), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(119), 10,
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
  [3618] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_keyword_token1,
    ACTIONS(125), 1,
      aux_sym_keyword_token2,
    ACTIONS(127), 1,
      aux_sym_keyword_token3,
    ACTIONS(129), 1,
      aux_sym_keyword_token4,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(137), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(37), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(201), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(119), 10,
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
  [3744] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      aux_sym_keyword_token1,
    ACTIONS(125), 1,
      aux_sym_keyword_token2,
    ACTIONS(127), 1,
      aux_sym_keyword_token3,
    ACTIONS(129), 1,
      aux_sym_keyword_token4,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      aux_sym_procedure_definition_token1,
    STATE(118), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(137), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(41), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(201), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(119), 10,
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
  [3870] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(341), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(34), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [3996] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_keyword_token1,
    ACTIONS(125), 1,
      aux_sym_keyword_token2,
    ACTIONS(127), 1,
      aux_sym_keyword_token3,
    ACTIONS(129), 1,
      aux_sym_keyword_token4,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(137), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(22), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(201), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(119), 10,
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
  [4122] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(343), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(23), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [4248] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    ACTIONS(345), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(21), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [4374] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    ACTIONS(77), 1,
      aux_sym_keyword_token2,
    ACTIONS(79), 1,
      aux_sym_keyword_token3,
    ACTIONS(81), 1,
      aux_sym_keyword_token4,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_procedure_definition_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(89), 2,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(32), 2,
      sym_statement,
      aux_sym_source_file_repeat3,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(208), 5,
      sym_for_statement,
      sym_while_statement,
      sym_if_statement,
      sym_procedure_definition,
      sym_procedure_call,
    STATE(112), 10,
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
  [4497] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      aux_sym_for_statement_token2,
    ACTIONS(349), 1,
      aux_sym_if_statement_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(148), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [4604] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      aux_sym_for_statement_token2,
    ACTIONS(353), 1,
      aux_sym_if_statement_token2,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(160), 1,
      sym_expression,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [4711] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      aux_sym_for_statement_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(167), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [4815] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(357), 1,
      aux_sym_for_statement_token2,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(171), 1,
      sym_expression,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [4919] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(158), 1,
      sym_expression,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [5020] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [5121] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(284), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [5222] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(263), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [5323] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(281), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [5424] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(280), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [5525] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(271), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [5626] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(279), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [5727] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(277), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [5828] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(276), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [5929] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(285), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6030] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(286), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6131] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(287), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6232] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(241), 1,
      sym_expression,
    STATE(250), 1,
      sym_identifier,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6333] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(243), 1,
      sym_expression,
    STATE(250), 1,
      sym_identifier,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6434] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(244), 1,
      sym_expression,
    STATE(250), 1,
      sym_identifier,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6535] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(245), 1,
      sym_expression,
    STATE(250), 1,
      sym_identifier,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6636] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(246), 1,
      sym_expression,
    STATE(250), 1,
      sym_identifier,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6737] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(255), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6838] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(240), 1,
      sym_expression,
    STATE(250), 1,
      sym_identifier,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [6939] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(282), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [7040] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [7141] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [7242] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [7343] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(135), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [7444] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [7545] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(134), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [7646] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_keyword_token5,
    ACTIONS(133), 1,
      aux_sym_keyword_token6,
    ACTIONS(135), 1,
      aux_sym_keyword_token7,
    ACTIONS(139), 1,
      aux_sym_keyword_token10,
    ACTIONS(141), 1,
      aux_sym_keyword_token11,
    ACTIONS(143), 1,
      aux_sym_keyword_token12,
    ACTIONS(145), 1,
      aux_sym_keyword_token13,
    ACTIONS(147), 1,
      aux_sym_keyword_token14,
    ACTIONS(149), 1,
      aux_sym_keyword_token15,
    ACTIONS(151), 1,
      aux_sym_keyword_token16,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym__identifier_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(110), 1,
      sym_expression,
    STATE(150), 1,
      sym__array_identifier,
    STATE(152), 1,
      sym__identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym__lhs_expression,
    ACTIONS(161), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(120), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(121), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(119), 10,
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
  [7747] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(133), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [7848] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(132), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [7949] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [8050] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(264), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [8151] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(278), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [8252] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(130), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [8353] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(275), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [8454] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(268), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [8555] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(83), 1,
      aux_sym_keyword_token5,
    ACTIONS(85), 1,
      aux_sym_keyword_token6,
    ACTIONS(87), 1,
      aux_sym_keyword_token7,
    ACTIONS(91), 1,
      aux_sym_keyword_token10,
    ACTIONS(93), 1,
      aux_sym_keyword_token11,
    ACTIONS(95), 1,
      aux_sym_keyword_token12,
    ACTIONS(97), 1,
      aux_sym_keyword_token13,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(129), 1,
      sym_expression,
    STATE(465), 1,
      sym__lhs_expression,
    ACTIONS(113), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(104), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(111), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(89), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(112), 10,
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
  [8656] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(272), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [8757] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(267), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [8858] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(269), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [8959] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(270), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [9060] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_keyword_token5,
    ACTIONS(41), 1,
      aux_sym_keyword_token6,
    ACTIONS(43), 1,
      aux_sym_keyword_token7,
    ACTIONS(45), 1,
      aux_sym_keyword_token10,
    ACTIONS(47), 1,
      aux_sym_keyword_token11,
    ACTIONS(49), 1,
      aux_sym_keyword_token12,
    ACTIONS(51), 1,
      aux_sym_keyword_token13,
    ACTIONS(53), 1,
      aux_sym_keyword_token14,
    ACTIONS(55), 1,
      aux_sym_keyword_token15,
    ACTIONS(57), 1,
      aux_sym_keyword_token16,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(250), 1,
      sym_identifier,
    STATE(273), 1,
      sym_expression,
    STATE(409), 1,
      sym__lhs_expression,
    ACTIONS(71), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(249), 4,
      sym_include_statement,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(251), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    ACTIONS(37), 6,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
    STATE(248), 10,
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
  [9161] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(461), 1,
      sym_identifier,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym_define_division_token2,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(452), 1,
      sym_identifier,
    ACTIONS(59), 13,
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
    ACTIONS(61), 22,
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
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9271] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      aux_sym__identifier_token1,
    STATE(179), 1,
      sym__identifier,
    STATE(198), 1,
      sym__array_identifier,
    STATE(199), 1,
      sym_identifier,
    ACTIONS(59), 13,
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
    ACTIONS(61), 22,
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
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9326] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym__identifier_token1,
    STATE(180), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(194), 1,
      sym__identifier,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym_define_division_token2,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 14,
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
    ACTIONS(363), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 14,
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
    ACTIONS(367), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 14,
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
    ACTIONS(371), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 14,
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
    ACTIONS(375), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 13,
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
    ACTIONS(375), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 13,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 12,
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
    ACTIONS(381), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 12,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_EQ,
    ACTIONS(391), 11,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9929] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_AND,
    ACTIONS(409), 1,
      anon_sym_GT,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(401), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(399), 19,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [9985] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_GT,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(401), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(399), 20,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [10039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 13,
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
    ACTIONS(415), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10083] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_GT,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 10,
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
    ACTIONS(399), 20,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [10135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 12,
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
    ACTIONS(417), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10179] = 3,
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
    ACTIONS(421), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10223] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_AND,
    ACTIONS(433), 1,
      anon_sym_OR,
    ACTIONS(439), 1,
      anon_sym_GT,
    ACTIONS(441), 1,
      anon_sym_LT,
    ACTIONS(427), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(435), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(429), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(425), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [10281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 13,
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
    ACTIONS(367), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10325] = 3,
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
    ACTIONS(445), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 12,
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
    ACTIONS(447), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 13,
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
    ACTIONS(399), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10457] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_AND,
    ACTIONS(409), 1,
      anon_sym_GT,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(451), 1,
      anon_sym_OR,
    ACTIONS(401), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(429), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(425), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [10515] = 3,
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
    ACTIONS(421), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 13,
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
    ACTIONS(417), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 13,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10877] = 3,
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
    ACTIONS(445), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10967] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_GT,
    ACTIONS(441), 1,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(399), 21,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [11019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_GT,
    ACTIONS(441), 1,
      anon_sym_LT,
    ACTIONS(427), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(435), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(399), 21,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [11073] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_AND,
    ACTIONS(439), 1,
      anon_sym_GT,
    ACTIONS(441), 1,
      anon_sym_LT,
    ACTIONS(427), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(435), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(399), 20,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [11129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 10,
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
    ACTIONS(399), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 12,
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
    ACTIONS(399), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 10,
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
    ACTIONS(399), 22,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [11267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 12,
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
    ACTIONS(465), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 11,
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
    ACTIONS(399), 21,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [11497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 13,
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
    ACTIONS(447), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 12,
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
    ACTIONS(61), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 13,
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
    ACTIONS(465), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 12,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11859] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_AND,
    ACTIONS(433), 1,
      anon_sym_OR,
    ACTIONS(439), 1,
      anon_sym_GT,
    ACTIONS(441), 1,
      anon_sym_LT,
    ACTIONS(427), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(435), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(487), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(485), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [11917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 13,
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
    ACTIONS(363), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 13,
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
    ACTIONS(375), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 12,
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
    ACTIONS(375), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 12,
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
    ACTIONS(493), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 12,
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
    ACTIONS(497), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12185] = 3,
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
    ACTIONS(501), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12229] = 3,
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
    ACTIONS(505), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 12,
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
    ACTIONS(415), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 11,
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
    ACTIONS(399), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12409] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_AND,
    ACTIONS(409), 1,
      anon_sym_GT,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(451), 1,
      anon_sym_OR,
    ACTIONS(401), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(487), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(485), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [12467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 13,
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
    ACTIONS(493), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 12,
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
    ACTIONS(511), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 13,
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
    ACTIONS(497), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 12,
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
    ACTIONS(515), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12643] = 3,
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
    ACTIONS(501), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12687] = 3,
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
    ACTIONS(505), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12731] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_AND,
    ACTIONS(433), 1,
      anon_sym_OR,
    ACTIONS(439), 1,
      anon_sym_GT,
    ACTIONS(441), 1,
      anon_sym_LT,
    ACTIONS(427), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(435), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(521), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(519), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [12789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_EQ,
    ACTIONS(391), 12,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 13,
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
    ACTIONS(371), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 11,
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
    ACTIONS(61), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12925] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_AND,
    ACTIONS(409), 1,
      anon_sym_GT,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(451), 1,
      anon_sym_OR,
    ACTIONS(401), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(521), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(519), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [12983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 13,
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
    ACTIONS(527), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 13,
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
    ACTIONS(531), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 12,
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
    ACTIONS(531), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 13,
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
    ACTIONS(381), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 13,
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
    ACTIONS(515), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 12,
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
    ACTIONS(527), 24,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 13,
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
    ACTIONS(511), 23,
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
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [13291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(375), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(375), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(537), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(541), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(545), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(549), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(551), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(557), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(545), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(561), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(519), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(565), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(371), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(363), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(557), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 6,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(375), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(537), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(519), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(565), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [13941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(375), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [13975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(551), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(541), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [14043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(425), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(371), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(569), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [14145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(363), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(575), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(569), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(575), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [14281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(425), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [14315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(579), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(561), 19,
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
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
      sym_number,
  [14383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 6,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(375), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(367), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14451] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_target_division_token1,
    STATE(224), 1,
      sym_target_division,
    STATE(217), 2,
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
  [14490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(375), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(363), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(371), 18,
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
      aux_sym__identifier_token1,
      sym_number,
  [14589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      aux_sym_target_division_token1,
    STATE(217), 2,
      sym_special_keywords,
      aux_sym_source_file_repeat1,
    ACTIONS(588), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(585), 18,
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
  [14625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 3,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token18,
    ACTIONS(591), 19,
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
  [14655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 15,
      anon_sym_EQ,
      aux_sym_define_division_token2,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [14682] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_define_division_token1,
    ACTIONS(599), 1,
      aux_sym_setup_division_token1,
    ACTIONS(601), 1,
      aux_sym_select_division_token1,
    ACTIONS(603), 1,
      aux_sym_sort_division_token1,
    ACTIONS(605), 1,
      aux_sym_letter_division_token1,
    ACTIONS(607), 1,
      aux_sym_print_division_token1,
    ACTIONS(609), 1,
      aux_sym_total_division_token1,
    STATE(38), 2,
      sym_letter_division,
      sym_print_division,
    STATE(239), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [14720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(365), 15,
      anon_sym_EQ,
      aux_sym_define_division_token2,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [14744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LT,
    ACTIONS(373), 15,
      anon_sym_EQ,
      aux_sym_define_division_token2,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [14768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 15,
      anon_sym_EQ,
      aux_sym_define_division_token2,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [14792] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_define_division_token1,
    ACTIONS(599), 1,
      aux_sym_setup_division_token1,
    ACTIONS(601), 1,
      aux_sym_select_division_token1,
    ACTIONS(603), 1,
      aux_sym_sort_division_token1,
    ACTIONS(605), 1,
      aux_sym_letter_division_token1,
    ACTIONS(607), 1,
      aux_sym_print_division_token1,
    ACTIONS(609), 1,
      aux_sym_total_division_token1,
    STATE(39), 2,
      sym_letter_division,
      sym_print_division,
    STATE(220), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [14830] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_define_division_token1,
    ACTIONS(599), 1,
      aux_sym_setup_division_token1,
    ACTIONS(601), 1,
      aux_sym_select_division_token1,
    ACTIONS(603), 1,
      aux_sym_sort_division_token1,
    ACTIONS(605), 1,
      aux_sym_letter_division_token1,
    ACTIONS(607), 1,
      aux_sym_print_division_token1,
    ACTIONS(609), 1,
      aux_sym_total_division_token1,
    STATE(39), 2,
      sym_letter_division,
      sym_print_division,
    STATE(239), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [14868] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_define_division_token1,
    ACTIONS(599), 1,
      aux_sym_setup_division_token1,
    ACTIONS(601), 1,
      aux_sym_select_division_token1,
    ACTIONS(603), 1,
      aux_sym_sort_division_token1,
    ACTIONS(605), 1,
      aux_sym_letter_division_token1,
    ACTIONS(607), 1,
      aux_sym_print_division_token1,
    ACTIONS(609), 1,
      aux_sym_total_division_token1,
    STATE(18), 2,
      sym_letter_division,
      sym_print_division,
    STATE(225), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [14906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LT,
    ACTIONS(369), 14,
      anon_sym_EQ,
      aux_sym_define_division_token2,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [14929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [14954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [14979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(629), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LT,
    ACTIONS(499), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15201] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_define_division_token1,
    ACTIONS(634), 1,
      aux_sym_setup_division_token1,
    ACTIONS(637), 1,
      aux_sym_select_division_token1,
    ACTIONS(640), 1,
      aux_sym_sort_division_token1,
    ACTIONS(645), 1,
      aux_sym_total_division_token1,
    ACTIONS(643), 2,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
    STATE(239), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
  [15233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 8,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LT,
    ACTIONS(467), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LT,
    ACTIONS(443), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LT,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 9,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LT,
    ACTIONS(397), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LT,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(397), 11,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15377] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(397), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_OR,
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LT,
    ACTIONS(495), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LT,
    ACTIONS(423), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LT,
    ACTIONS(419), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(393), 1,
      anon_sym_EQ,
    ACTIONS(391), 12,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(391), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LT,
    ACTIONS(503), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LT,
    ACTIONS(507), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LT,
    ACTIONS(413), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(397), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    ACTIONS(525), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LT,
    ACTIONS(529), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LT,
    ACTIONS(517), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LT,
    ACTIONS(513), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(59), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LT,
    ACTIONS(383), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LT,
    ACTIONS(449), 13,
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
      aux_sym_for_statement_token2,
      aux_sym_if_statement_token1,
  [15771] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15802] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15833] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(666), 1,
      aux_sym_for_statement_token2,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15864] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(668), 1,
      aux_sym_if_statement_token1,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15895] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15926] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15957] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [15988] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16019] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16050] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16081] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16112] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(684), 1,
      aux_sym_if_statement_token1,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16143] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16174] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16205] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16236] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16267] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16329] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16360] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16391] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(702), 1,
      aux_sym_for_statement_token2,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16453] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16484] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16515] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_LT,
    ACTIONS(658), 1,
      anon_sym_AND,
    ACTIONS(662), 1,
      anon_sym_OR,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(650), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(656), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16546] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(712), 1,
      aux_sym_define_division_token2,
    ACTIONS(714), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(417), 1,
      sym_identifier,
    STATE(291), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(354), 2,
      sym_variable_declaration,
      sym_include_statement,
  [16576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      sym_data_type,
    STATE(372), 1,
      sym_string_literal,
    ACTIONS(716), 7,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_data_type_token1,
      aux_sym_data_type_token2,
      aux_sym_data_type_token3,
      aux_sym_data_type_token4,
      aux_sym_data_type_token5,
  [16598] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      aux_sym_define_division_token2,
    ACTIONS(722), 1,
      aux_sym__identifier_token1,
    ACTIONS(725), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(417), 1,
      sym_identifier,
    STATE(290), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(354), 2,
      sym_variable_declaration,
      sym_include_statement,
  [16628] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    ACTIONS(714), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      aux_sym_define_division_token2,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(417), 1,
      sym_identifier,
    STATE(290), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(354), 2,
      sym_variable_declaration,
      sym_include_statement,
  [16658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 7,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_letter_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
  [16762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(454), 2,
      sym_string_literal,
      sym_identifier,
  [16782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(434), 2,
      sym_string_literal,
      sym_identifier,
  [16802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(440), 2,
      sym_string_literal,
      sym_identifier,
  [16822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(462), 2,
      sym_string_literal,
      sym_identifier,
  [16842] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(431), 2,
      sym_string_literal,
      sym_identifier,
  [16862] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(453), 2,
      sym_string_literal,
      sym_identifier,
  [16882] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(432), 2,
      sym_string_literal,
      sym_identifier,
  [16902] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(407), 2,
      sym_string_literal,
      sym_identifier,
  [16922] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(455), 2,
      sym_string_literal,
      sym_identifier,
  [16942] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(460), 2,
      sym_string_literal,
      sym_identifier,
  [16962] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(439), 2,
      sym_string_literal,
      sym_identifier,
  [16982] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(436), 2,
      sym_string_literal,
      sym_identifier,
  [17002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(445), 2,
      sym_string_literal,
      sym_identifier,
  [17022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(430), 2,
      sym_string_literal,
      sym_identifier,
  [17042] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(396), 2,
      sym_string_literal,
      sym_identifier,
  [17062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(429), 2,
      sym_string_literal,
      sym_identifier,
  [17082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(424), 2,
      sym_string_literal,
      sym_identifier,
  [17102] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(427), 2,
      sym_string_literal,
      sym_identifier,
  [17122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(415), 2,
      sym_string_literal,
      sym_identifier,
  [17142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(400), 2,
      sym_string_literal,
      sym_identifier,
  [17162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(459), 2,
      sym_string_literal,
      sym_identifier,
  [17182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(463), 2,
      sym_string_literal,
      sym_identifier,
  [17202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(413), 2,
      sym_string_literal,
      sym_identifier,
  [17222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(387), 2,
      sym_string_literal,
      sym_identifier,
  [17242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(456), 2,
      sym_string_literal,
      sym_identifier,
  [17262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(426), 2,
      sym_string_literal,
      sym_identifier,
  [17282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(418), 2,
      sym_string_literal,
      sym_identifier,
  [17302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(446), 2,
      sym_string_literal,
      sym_identifier,
  [17322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(447), 2,
      sym_string_literal,
      sym_identifier,
  [17342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(448), 2,
      sym_string_literal,
      sym_identifier,
  [17362] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(404), 2,
      sym_string_literal,
      sym_identifier,
  [17382] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(444), 2,
      sym_string_literal,
      sym_identifier,
  [17402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(450), 2,
      sym_string_literal,
      sym_identifier,
  [17422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(421), 2,
      sym_string_literal,
      sym_identifier,
  [17442] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(449), 2,
      sym_string_literal,
      sym_identifier,
  [17462] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(393), 2,
      sym_string_literal,
      sym_identifier,
  [17482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(399), 2,
      sym_string_literal,
      sym_identifier,
  [17502] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_DQUOTE,
    ACTIONS(750), 1,
      aux_sym__identifier_token1,
    STATE(211), 1,
      sym__identifier,
    STATE(214), 1,
      sym__array_identifier,
    STATE(44), 2,
      sym_string_literal,
      sym_identifier,
  [17522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(752), 1,
      aux_sym__identifier_token1,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(457), 2,
      sym_string_literal,
      sym_identifier,
  [17542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(391), 2,
      sym_string_literal,
      sym_identifier,
  [17562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(451), 2,
      sym_string_literal,
      sym_identifier,
  [17582] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym__identifier_token1,
    ACTIONS(754), 1,
      sym_number,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(403), 1,
      sym_identifier,
  [17601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      aux_sym_array_type_token1,
    ACTIONS(760), 1,
      anon_sym_POUND,
    STATE(358), 1,
      sym_array_type,
    ACTIONS(756), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [17618] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym__identifier_token1,
    ACTIONS(762), 1,
      sym_number,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(442), 1,
      sym_identifier,
  [17637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym__identifier_token1,
    ACTIONS(764), 1,
      sym_number,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(414), 1,
      sym_identifier,
  [17656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym__identifier_token1,
    ACTIONS(766), 1,
      sym_number,
    STATE(219), 1,
      sym__identifier,
    STATE(223), 1,
      sym__array_identifier,
    STATE(435), 1,
      sym_identifier,
  [17675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym__identifier_token1,
    STATE(19), 1,
      sym_identifier,
    STATE(180), 1,
      sym__array_identifier,
    STATE(194), 1,
      sym__identifier,
  [17691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym__identifier_token1,
    STATE(40), 1,
      sym_identifier,
    STATE(180), 1,
      sym__array_identifier,
    STATE(194), 1,
      sym__identifier,
  [17707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_POUND,
    ACTIONS(770), 3,
      aux_sym_define_division_token2,
      aux_sym_array_type_token1,
      aux_sym__identifier_token1,
  [17719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym__identifier_token1,
    STATE(98), 1,
      sym__array_identifier,
    STATE(99), 1,
      sym__identifier,
    STATE(386), 1,
      sym_identifier,
  [17735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym__array_identifier_repeat1,
  [17748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      aux_sym_array_type_repeat1,
  [17761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym__array_identifier_repeat1,
  [17774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_POUND,
    ACTIONS(785), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [17785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_POUND,
    ACTIONS(789), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [17796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym__array_identifier_repeat1,
  [17809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(359), 1,
      sym__identifier,
    ACTIONS(795), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym__array_identifier_repeat1,
  [17833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_POUND,
    ACTIONS(799), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [17844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym__array_identifier_repeat1,
  [17857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym__array_identifier_repeat1,
  [17870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym__array_identifier_repeat1,
  [17883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym__array_identifier_repeat1,
  [17896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym__array_identifier_repeat1,
  [17909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym__array_identifier_repeat1,
  [17922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(361), 1,
      sym__identifier,
    ACTIONS(815), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(363), 1,
      sym__identifier,
    ACTIONS(817), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(350), 1,
      sym__identifier,
    ACTIONS(819), 2,
      aux_sym__identifier_token1,
      sym_number,
  [17955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_POUND,
    ACTIONS(447), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [17966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      aux_sym_array_type_repeat1,
  [17979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_POUND,
    ACTIONS(825), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [17990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym__array_identifier_repeat1,
  [18003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_POUND,
    ACTIONS(756), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [18014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_POUND,
    ACTIONS(367), 2,
      aux_sym_define_division_token2,
      aux_sym__identifier_token1,
  [18025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_array_type_repeat1,
  [18038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(384), 1,
      sym__identifier,
    ACTIONS(833), 2,
      aux_sym__identifier_token1,
      sym_number,
  [18049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym__array_identifier_repeat1,
  [18062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym__array_identifier_repeat1,
  [18075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(371), 1,
      sym__identifier,
    ACTIONS(842), 2,
      aux_sym__identifier_token1,
      sym_number,
  [18086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(352), 1,
      sym__identifier,
    ACTIONS(844), 2,
      aux_sym__identifier_token1,
      sym_number,
  [18097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      sym_string_literal,
  [18107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym_string_literal,
  [18117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_string_literal,
  [18127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_DQUOTE,
    STATE(368), 1,
      sym_string_literal,
  [18153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
  [18160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_COMMA,
  [18167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
  [18174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
  [18181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      aux_sym_include_statement_token1,
  [18188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [18195] = 2,
    ACTIONS(858), 1,
      aux_sym_string_literal_token1,
    ACTIONS(860), 1,
      sym_comment,
  [18202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
  [18209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_define_division_token2,
  [18216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_EQ,
  [18223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
  [18230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_print_division_token2,
  [18237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [18244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
  [18251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
  [18258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      ts_builtin_sym_end,
  [18265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_EQ,
  [18272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      aux_sym_for_statement_token2,
  [18279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
  [18286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
  [18293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_include_statement_token1,
  [18300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
  [18307] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym_string_literal_token1,
  [18314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_EQ,
  [18321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_DQUOTE,
  [18328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_EQ,
  [18335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
  [18342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
  [18349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym_for_statement_token1,
  [18356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
  [18363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      aux_sym_include_statement_token1,
  [18370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_EQ,
  [18377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [18384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      aux_sym_include_statement_token1,
  [18391] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(916), 1,
      aux_sym_string_literal_token1,
  [18398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_COMMA,
  [18405] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(920), 1,
      aux_sym_string_literal_token1,
  [18412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      aux_sym_define_division_token2,
  [18419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA,
  [18426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      aux_sym_define_division_token2,
  [18433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
  [18440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_COMMA,
  [18447] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(932), 1,
      aux_sym_string_literal_token1,
  [18454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_COMMA,
  [18461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_COMMA,
  [18468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
  [18475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_COMMA,
  [18482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_number,
  [18489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
  [18496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      aux_sym_for_statement_token2,
  [18503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
  [18510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_COLON,
  [18517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
  [18524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_COMMA,
  [18531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_COMMA,
  [18538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_number,
  [18545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      aux_sym_for_statement_token1,
  [18552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_LPAREN,
  [18559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
  [18566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_COMMA,
  [18573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_COMMA,
  [18580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_COMMA,
  [18587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_COMMA,
  [18594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_COMMA,
  [18601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_COMMA,
  [18608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_COMMA,
  [18615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_EQ,
  [18622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
  [18629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_COMMA,
  [18636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_COMMA,
  [18643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_COMMA,
  [18650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      aux_sym_define_division_token2,
  [18657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_DQUOTE,
  [18664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_COMMA,
  [18671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_COMMA,
  [18678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_EQ,
  [18685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
  [18692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
  [18699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_EQ,
  [18706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 468,
  [SMALL_STATE(14)] = 594,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 846,
  [SMALL_STATE(17)] = 972,
  [SMALL_STATE(18)] = 1098,
  [SMALL_STATE(19)] = 1224,
  [SMALL_STATE(20)] = 1350,
  [SMALL_STATE(21)] = 1476,
  [SMALL_STATE(22)] = 1602,
  [SMALL_STATE(23)] = 1728,
  [SMALL_STATE(24)] = 1854,
  [SMALL_STATE(25)] = 1980,
  [SMALL_STATE(26)] = 2106,
  [SMALL_STATE(27)] = 2232,
  [SMALL_STATE(28)] = 2358,
  [SMALL_STATE(29)] = 2484,
  [SMALL_STATE(30)] = 2610,
  [SMALL_STATE(31)] = 2736,
  [SMALL_STATE(32)] = 2862,
  [SMALL_STATE(33)] = 2988,
  [SMALL_STATE(34)] = 3114,
  [SMALL_STATE(35)] = 3240,
  [SMALL_STATE(36)] = 3366,
  [SMALL_STATE(37)] = 3492,
  [SMALL_STATE(38)] = 3618,
  [SMALL_STATE(39)] = 3744,
  [SMALL_STATE(40)] = 3870,
  [SMALL_STATE(41)] = 3996,
  [SMALL_STATE(42)] = 4122,
  [SMALL_STATE(43)] = 4248,
  [SMALL_STATE(44)] = 4374,
  [SMALL_STATE(45)] = 4497,
  [SMALL_STATE(46)] = 4604,
  [SMALL_STATE(47)] = 4711,
  [SMALL_STATE(48)] = 4815,
  [SMALL_STATE(49)] = 4919,
  [SMALL_STATE(50)] = 5020,
  [SMALL_STATE(51)] = 5121,
  [SMALL_STATE(52)] = 5222,
  [SMALL_STATE(53)] = 5323,
  [SMALL_STATE(54)] = 5424,
  [SMALL_STATE(55)] = 5525,
  [SMALL_STATE(56)] = 5626,
  [SMALL_STATE(57)] = 5727,
  [SMALL_STATE(58)] = 5828,
  [SMALL_STATE(59)] = 5929,
  [SMALL_STATE(60)] = 6030,
  [SMALL_STATE(61)] = 6131,
  [SMALL_STATE(62)] = 6232,
  [SMALL_STATE(63)] = 6333,
  [SMALL_STATE(64)] = 6434,
  [SMALL_STATE(65)] = 6535,
  [SMALL_STATE(66)] = 6636,
  [SMALL_STATE(67)] = 6737,
  [SMALL_STATE(68)] = 6838,
  [SMALL_STATE(69)] = 6939,
  [SMALL_STATE(70)] = 7040,
  [SMALL_STATE(71)] = 7141,
  [SMALL_STATE(72)] = 7242,
  [SMALL_STATE(73)] = 7343,
  [SMALL_STATE(74)] = 7444,
  [SMALL_STATE(75)] = 7545,
  [SMALL_STATE(76)] = 7646,
  [SMALL_STATE(77)] = 7747,
  [SMALL_STATE(78)] = 7848,
  [SMALL_STATE(79)] = 7949,
  [SMALL_STATE(80)] = 8050,
  [SMALL_STATE(81)] = 8151,
  [SMALL_STATE(82)] = 8252,
  [SMALL_STATE(83)] = 8353,
  [SMALL_STATE(84)] = 8454,
  [SMALL_STATE(85)] = 8555,
  [SMALL_STATE(86)] = 8656,
  [SMALL_STATE(87)] = 8757,
  [SMALL_STATE(88)] = 8858,
  [SMALL_STATE(89)] = 8959,
  [SMALL_STATE(90)] = 9060,
  [SMALL_STATE(91)] = 9161,
  [SMALL_STATE(92)] = 9216,
  [SMALL_STATE(93)] = 9271,
  [SMALL_STATE(94)] = 9326,
  [SMALL_STATE(95)] = 9381,
  [SMALL_STATE(96)] = 9427,
  [SMALL_STATE(97)] = 9473,
  [SMALL_STATE(98)] = 9519,
  [SMALL_STATE(99)] = 9565,
  [SMALL_STATE(100)] = 9613,
  [SMALL_STATE(101)] = 9657,
  [SMALL_STATE(102)] = 9701,
  [SMALL_STATE(103)] = 9747,
  [SMALL_STATE(104)] = 9793,
  [SMALL_STATE(105)] = 9837,
  [SMALL_STATE(106)] = 9883,
  [SMALL_STATE(107)] = 9929,
  [SMALL_STATE(108)] = 9985,
  [SMALL_STATE(109)] = 10039,
  [SMALL_STATE(110)] = 10083,
  [SMALL_STATE(111)] = 10135,
  [SMALL_STATE(112)] = 10179,
  [SMALL_STATE(113)] = 10223,
  [SMALL_STATE(114)] = 10281,
  [SMALL_STATE(115)] = 10325,
  [SMALL_STATE(116)] = 10369,
  [SMALL_STATE(117)] = 10413,
  [SMALL_STATE(118)] = 10457,
  [SMALL_STATE(119)] = 10515,
  [SMALL_STATE(120)] = 10559,
  [SMALL_STATE(121)] = 10603,
  [SMALL_STATE(122)] = 10647,
  [SMALL_STATE(123)] = 10693,
  [SMALL_STATE(124)] = 10739,
  [SMALL_STATE(125)] = 10785,
  [SMALL_STATE(126)] = 10831,
  [SMALL_STATE(127)] = 10877,
  [SMALL_STATE(128)] = 10921,
  [SMALL_STATE(129)] = 10967,
  [SMALL_STATE(130)] = 11019,
  [SMALL_STATE(131)] = 11073,
  [SMALL_STATE(132)] = 11129,
  [SMALL_STATE(133)] = 11175,
  [SMALL_STATE(134)] = 11219,
  [SMALL_STATE(135)] = 11267,
  [SMALL_STATE(136)] = 11311,
  [SMALL_STATE(137)] = 11357,
  [SMALL_STATE(138)] = 11403,
  [SMALL_STATE(139)] = 11449,
  [SMALL_STATE(140)] = 11497,
  [SMALL_STATE(141)] = 11543,
  [SMALL_STATE(142)] = 11589,
  [SMALL_STATE(143)] = 11633,
  [SMALL_STATE(144)] = 11679,
  [SMALL_STATE(145)] = 11723,
  [SMALL_STATE(146)] = 11769,
  [SMALL_STATE(147)] = 11815,
  [SMALL_STATE(148)] = 11859,
  [SMALL_STATE(149)] = 11917,
  [SMALL_STATE(150)] = 11961,
  [SMALL_STATE(151)] = 12005,
  [SMALL_STATE(152)] = 12051,
  [SMALL_STATE(153)] = 12097,
  [SMALL_STATE(154)] = 12141,
  [SMALL_STATE(155)] = 12185,
  [SMALL_STATE(156)] = 12229,
  [SMALL_STATE(157)] = 12273,
  [SMALL_STATE(158)] = 12317,
  [SMALL_STATE(159)] = 12363,
  [SMALL_STATE(160)] = 12409,
  [SMALL_STATE(161)] = 12467,
  [SMALL_STATE(162)] = 12511,
  [SMALL_STATE(163)] = 12555,
  [SMALL_STATE(164)] = 12599,
  [SMALL_STATE(165)] = 12643,
  [SMALL_STATE(166)] = 12687,
  [SMALL_STATE(167)] = 12731,
  [SMALL_STATE(168)] = 12789,
  [SMALL_STATE(169)] = 12835,
  [SMALL_STATE(170)] = 12879,
  [SMALL_STATE(171)] = 12925,
  [SMALL_STATE(172)] = 12983,
  [SMALL_STATE(173)] = 13027,
  [SMALL_STATE(174)] = 13071,
  [SMALL_STATE(175)] = 13115,
  [SMALL_STATE(176)] = 13159,
  [SMALL_STATE(177)] = 13203,
  [SMALL_STATE(178)] = 13247,
  [SMALL_STATE(179)] = 13291,
  [SMALL_STATE(180)] = 13327,
  [SMALL_STATE(181)] = 13361,
  [SMALL_STATE(182)] = 13395,
  [SMALL_STATE(183)] = 13429,
  [SMALL_STATE(184)] = 13463,
  [SMALL_STATE(185)] = 13497,
  [SMALL_STATE(186)] = 13531,
  [SMALL_STATE(187)] = 13565,
  [SMALL_STATE(188)] = 13599,
  [SMALL_STATE(189)] = 13633,
  [SMALL_STATE(190)] = 13667,
  [SMALL_STATE(191)] = 13701,
  [SMALL_STATE(192)] = 13735,
  [SMALL_STATE(193)] = 13769,
  [SMALL_STATE(194)] = 13803,
  [SMALL_STATE(195)] = 13839,
  [SMALL_STATE(196)] = 13873,
  [SMALL_STATE(197)] = 13907,
  [SMALL_STATE(198)] = 13941,
  [SMALL_STATE(199)] = 13975,
  [SMALL_STATE(200)] = 14009,
  [SMALL_STATE(201)] = 14043,
  [SMALL_STATE(202)] = 14077,
  [SMALL_STATE(203)] = 14111,
  [SMALL_STATE(204)] = 14145,
  [SMALL_STATE(205)] = 14179,
  [SMALL_STATE(206)] = 14213,
  [SMALL_STATE(207)] = 14247,
  [SMALL_STATE(208)] = 14281,
  [SMALL_STATE(209)] = 14315,
  [SMALL_STATE(210)] = 14349,
  [SMALL_STATE(211)] = 14383,
  [SMALL_STATE(212)] = 14418,
  [SMALL_STATE(213)] = 14451,
  [SMALL_STATE(214)] = 14490,
  [SMALL_STATE(215)] = 14523,
  [SMALL_STATE(216)] = 14556,
  [SMALL_STATE(217)] = 14589,
  [SMALL_STATE(218)] = 14625,
  [SMALL_STATE(219)] = 14655,
  [SMALL_STATE(220)] = 14682,
  [SMALL_STATE(221)] = 14720,
  [SMALL_STATE(222)] = 14744,
  [SMALL_STATE(223)] = 14768,
  [SMALL_STATE(224)] = 14792,
  [SMALL_STATE(225)] = 14830,
  [SMALL_STATE(226)] = 14868,
  [SMALL_STATE(227)] = 14906,
  [SMALL_STATE(228)] = 14929,
  [SMALL_STATE(229)] = 14954,
  [SMALL_STATE(230)] = 14979,
  [SMALL_STATE(231)] = 15004,
  [SMALL_STATE(232)] = 15029,
  [SMALL_STATE(233)] = 15054,
  [SMALL_STATE(234)] = 15079,
  [SMALL_STATE(235)] = 15104,
  [SMALL_STATE(236)] = 15129,
  [SMALL_STATE(237)] = 15154,
  [SMALL_STATE(238)] = 15179,
  [SMALL_STATE(239)] = 15201,
  [SMALL_STATE(240)] = 15233,
  [SMALL_STATE(241)] = 15261,
  [SMALL_STATE(242)] = 15283,
  [SMALL_STATE(243)] = 15305,
  [SMALL_STATE(244)] = 15331,
  [SMALL_STATE(245)] = 15353,
  [SMALL_STATE(246)] = 15377,
  [SMALL_STATE(247)] = 15409,
  [SMALL_STATE(248)] = 15431,
  [SMALL_STATE(249)] = 15453,
  [SMALL_STATE(250)] = 15475,
  [SMALL_STATE(251)] = 15499,
  [SMALL_STATE(252)] = 15521,
  [SMALL_STATE(253)] = 15543,
  [SMALL_STATE(254)] = 15565,
  [SMALL_STATE(255)] = 15587,
  [SMALL_STATE(256)] = 15617,
  [SMALL_STATE(257)] = 15639,
  [SMALL_STATE(258)] = 15661,
  [SMALL_STATE(259)] = 15683,
  [SMALL_STATE(260)] = 15705,
  [SMALL_STATE(261)] = 15727,
  [SMALL_STATE(262)] = 15749,
  [SMALL_STATE(263)] = 15771,
  [SMALL_STATE(264)] = 15802,
  [SMALL_STATE(265)] = 15833,
  [SMALL_STATE(266)] = 15864,
  [SMALL_STATE(267)] = 15895,
  [SMALL_STATE(268)] = 15926,
  [SMALL_STATE(269)] = 15957,
  [SMALL_STATE(270)] = 15988,
  [SMALL_STATE(271)] = 16019,
  [SMALL_STATE(272)] = 16050,
  [SMALL_STATE(273)] = 16081,
  [SMALL_STATE(274)] = 16112,
  [SMALL_STATE(275)] = 16143,
  [SMALL_STATE(276)] = 16174,
  [SMALL_STATE(277)] = 16205,
  [SMALL_STATE(278)] = 16236,
  [SMALL_STATE(279)] = 16267,
  [SMALL_STATE(280)] = 16298,
  [SMALL_STATE(281)] = 16329,
  [SMALL_STATE(282)] = 16360,
  [SMALL_STATE(283)] = 16391,
  [SMALL_STATE(284)] = 16422,
  [SMALL_STATE(285)] = 16453,
  [SMALL_STATE(286)] = 16484,
  [SMALL_STATE(287)] = 16515,
  [SMALL_STATE(288)] = 16546,
  [SMALL_STATE(289)] = 16576,
  [SMALL_STATE(290)] = 16598,
  [SMALL_STATE(291)] = 16628,
  [SMALL_STATE(292)] = 16658,
  [SMALL_STATE(293)] = 16671,
  [SMALL_STATE(294)] = 16684,
  [SMALL_STATE(295)] = 16697,
  [SMALL_STATE(296)] = 16710,
  [SMALL_STATE(297)] = 16723,
  [SMALL_STATE(298)] = 16736,
  [SMALL_STATE(299)] = 16749,
  [SMALL_STATE(300)] = 16762,
  [SMALL_STATE(301)] = 16782,
  [SMALL_STATE(302)] = 16802,
  [SMALL_STATE(303)] = 16822,
  [SMALL_STATE(304)] = 16842,
  [SMALL_STATE(305)] = 16862,
  [SMALL_STATE(306)] = 16882,
  [SMALL_STATE(307)] = 16902,
  [SMALL_STATE(308)] = 16922,
  [SMALL_STATE(309)] = 16942,
  [SMALL_STATE(310)] = 16962,
  [SMALL_STATE(311)] = 16982,
  [SMALL_STATE(312)] = 17002,
  [SMALL_STATE(313)] = 17022,
  [SMALL_STATE(314)] = 17042,
  [SMALL_STATE(315)] = 17062,
  [SMALL_STATE(316)] = 17082,
  [SMALL_STATE(317)] = 17102,
  [SMALL_STATE(318)] = 17122,
  [SMALL_STATE(319)] = 17142,
  [SMALL_STATE(320)] = 17162,
  [SMALL_STATE(321)] = 17182,
  [SMALL_STATE(322)] = 17202,
  [SMALL_STATE(323)] = 17222,
  [SMALL_STATE(324)] = 17242,
  [SMALL_STATE(325)] = 17262,
  [SMALL_STATE(326)] = 17282,
  [SMALL_STATE(327)] = 17302,
  [SMALL_STATE(328)] = 17322,
  [SMALL_STATE(329)] = 17342,
  [SMALL_STATE(330)] = 17362,
  [SMALL_STATE(331)] = 17382,
  [SMALL_STATE(332)] = 17402,
  [SMALL_STATE(333)] = 17422,
  [SMALL_STATE(334)] = 17442,
  [SMALL_STATE(335)] = 17462,
  [SMALL_STATE(336)] = 17482,
  [SMALL_STATE(337)] = 17502,
  [SMALL_STATE(338)] = 17522,
  [SMALL_STATE(339)] = 17542,
  [SMALL_STATE(340)] = 17562,
  [SMALL_STATE(341)] = 17582,
  [SMALL_STATE(342)] = 17601,
  [SMALL_STATE(343)] = 17618,
  [SMALL_STATE(344)] = 17637,
  [SMALL_STATE(345)] = 17656,
  [SMALL_STATE(346)] = 17675,
  [SMALL_STATE(347)] = 17691,
  [SMALL_STATE(348)] = 17707,
  [SMALL_STATE(349)] = 17719,
  [SMALL_STATE(350)] = 17735,
  [SMALL_STATE(351)] = 17748,
  [SMALL_STATE(352)] = 17761,
  [SMALL_STATE(353)] = 17774,
  [SMALL_STATE(354)] = 17785,
  [SMALL_STATE(355)] = 17796,
  [SMALL_STATE(356)] = 17809,
  [SMALL_STATE(357)] = 17820,
  [SMALL_STATE(358)] = 17833,
  [SMALL_STATE(359)] = 17844,
  [SMALL_STATE(360)] = 17857,
  [SMALL_STATE(361)] = 17870,
  [SMALL_STATE(362)] = 17883,
  [SMALL_STATE(363)] = 17896,
  [SMALL_STATE(364)] = 17909,
  [SMALL_STATE(365)] = 17922,
  [SMALL_STATE(366)] = 17933,
  [SMALL_STATE(367)] = 17944,
  [SMALL_STATE(368)] = 17955,
  [SMALL_STATE(369)] = 17966,
  [SMALL_STATE(370)] = 17979,
  [SMALL_STATE(371)] = 17990,
  [SMALL_STATE(372)] = 18003,
  [SMALL_STATE(373)] = 18014,
  [SMALL_STATE(374)] = 18025,
  [SMALL_STATE(375)] = 18038,
  [SMALL_STATE(376)] = 18049,
  [SMALL_STATE(377)] = 18062,
  [SMALL_STATE(378)] = 18075,
  [SMALL_STATE(379)] = 18086,
  [SMALL_STATE(380)] = 18097,
  [SMALL_STATE(381)] = 18107,
  [SMALL_STATE(382)] = 18117,
  [SMALL_STATE(383)] = 18127,
  [SMALL_STATE(384)] = 18135,
  [SMALL_STATE(385)] = 18143,
  [SMALL_STATE(386)] = 18153,
  [SMALL_STATE(387)] = 18160,
  [SMALL_STATE(388)] = 18167,
  [SMALL_STATE(389)] = 18174,
  [SMALL_STATE(390)] = 18181,
  [SMALL_STATE(391)] = 18188,
  [SMALL_STATE(392)] = 18195,
  [SMALL_STATE(393)] = 18202,
  [SMALL_STATE(394)] = 18209,
  [SMALL_STATE(395)] = 18216,
  [SMALL_STATE(396)] = 18223,
  [SMALL_STATE(397)] = 18230,
  [SMALL_STATE(398)] = 18237,
  [SMALL_STATE(399)] = 18244,
  [SMALL_STATE(400)] = 18251,
  [SMALL_STATE(401)] = 18258,
  [SMALL_STATE(402)] = 18265,
  [SMALL_STATE(403)] = 18272,
  [SMALL_STATE(404)] = 18279,
  [SMALL_STATE(405)] = 18286,
  [SMALL_STATE(406)] = 18293,
  [SMALL_STATE(407)] = 18300,
  [SMALL_STATE(408)] = 18307,
  [SMALL_STATE(409)] = 18314,
  [SMALL_STATE(410)] = 18321,
  [SMALL_STATE(411)] = 18328,
  [SMALL_STATE(412)] = 18335,
  [SMALL_STATE(413)] = 18342,
  [SMALL_STATE(414)] = 18349,
  [SMALL_STATE(415)] = 18356,
  [SMALL_STATE(416)] = 18363,
  [SMALL_STATE(417)] = 18370,
  [SMALL_STATE(418)] = 18377,
  [SMALL_STATE(419)] = 18384,
  [SMALL_STATE(420)] = 18391,
  [SMALL_STATE(421)] = 18398,
  [SMALL_STATE(422)] = 18405,
  [SMALL_STATE(423)] = 18412,
  [SMALL_STATE(424)] = 18419,
  [SMALL_STATE(425)] = 18426,
  [SMALL_STATE(426)] = 18433,
  [SMALL_STATE(427)] = 18440,
  [SMALL_STATE(428)] = 18447,
  [SMALL_STATE(429)] = 18454,
  [SMALL_STATE(430)] = 18461,
  [SMALL_STATE(431)] = 18468,
  [SMALL_STATE(432)] = 18475,
  [SMALL_STATE(433)] = 18482,
  [SMALL_STATE(434)] = 18489,
  [SMALL_STATE(435)] = 18496,
  [SMALL_STATE(436)] = 18503,
  [SMALL_STATE(437)] = 18510,
  [SMALL_STATE(438)] = 18517,
  [SMALL_STATE(439)] = 18524,
  [SMALL_STATE(440)] = 18531,
  [SMALL_STATE(441)] = 18538,
  [SMALL_STATE(442)] = 18545,
  [SMALL_STATE(443)] = 18552,
  [SMALL_STATE(444)] = 18559,
  [SMALL_STATE(445)] = 18566,
  [SMALL_STATE(446)] = 18573,
  [SMALL_STATE(447)] = 18580,
  [SMALL_STATE(448)] = 18587,
  [SMALL_STATE(449)] = 18594,
  [SMALL_STATE(450)] = 18601,
  [SMALL_STATE(451)] = 18608,
  [SMALL_STATE(452)] = 18615,
  [SMALL_STATE(453)] = 18622,
  [SMALL_STATE(454)] = 18629,
  [SMALL_STATE(455)] = 18636,
  [SMALL_STATE(456)] = 18643,
  [SMALL_STATE(457)] = 18650,
  [SMALL_STATE(458)] = 18657,
  [SMALL_STATE(459)] = 18664,
  [SMALL_STATE(460)] = 18671,
  [SMALL_STATE(461)] = 18678,
  [SMALL_STATE(462)] = 18685,
  [SMALL_STATE(463)] = 18692,
  [SMALL_STATE(464)] = 18699,
  [SMALL_STATE(465)] = 18706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(91),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(10),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(9),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(94),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(137),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(159),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(151),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(147),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(146),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(145),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(138),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(106),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(170),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(102),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(103),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(55),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(428),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(99),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(104),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(104),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(390),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(347),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(92),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(11),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(12),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(93),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(143),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(141),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(140),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(100),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(136),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(128),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(126),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(125),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(124),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(123),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(122),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(58),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(392),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(152),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(121),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(121),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(406),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(346),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 5),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fileopen, 12),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileopen, 12),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lhs_expression, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datevalue, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datevalue, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_function, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_function, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__length, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__length, 4),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__money, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__money, 4),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rate, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rate, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__segment, 8),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__segment, 8),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filereadline, 8),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filereadline, 8),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format, 6),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format, 6),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__charactersearch, 6),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__charactersearch, 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, .production_id = 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 9, .production_id = 4),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 9, .production_id = 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_division, 6),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_division, 6),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 3),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, .production_id = 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, .production_id = 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter_division, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter_division, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keywords, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keywords, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(288),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(29),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(425),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(423),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(394),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(99),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(416),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_division, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 5),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_division, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_division, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(433),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_statement, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2), SHIFT_REPEAT(375),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 3),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [878] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
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
