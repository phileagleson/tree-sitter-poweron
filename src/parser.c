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
#define STATE_COUNT 472
#define LARGE_STATE_COUNT 49
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 3

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
  sym_record_type = 31,
  aux_sym_data_type_token1 = 32,
  aux_sym_data_type_token2 = 33,
  aux_sym_data_type_token3 = 34,
  aux_sym_data_type_token4 = 35,
  aux_sym_data_type_token5 = 36,
  aux_sym_array_type_token1 = 37,
  anon_sym_LPAREN = 38,
  anon_sym_COMMA = 39,
  anon_sym_RPAREN = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_string_literal_token1 = 42,
  aux_sym__identifier_token1 = 43,
  sym_number = 44,
  sym_money = 45,
  sym_date = 46,
  sym_rate = 47,
  anon_sym_POUND = 48,
  aux_sym_include_statement_token1 = 49,
  anon_sym_COLON = 50,
  aux_sym_special_keywords_token1 = 51,
  aux_sym_special_keywords_token2 = 52,
  aux_sym_special_keywords_token3 = 53,
  aux_sym_special_keywords_token4 = 54,
  aux_sym_special_keywords_token5 = 55,
  aux_sym_special_keywords_token6 = 56,
  aux_sym_special_keywords_token7 = 57,
  aux_sym_special_keywords_token8 = 58,
  aux_sym_special_keywords_token9 = 59,
  aux_sym_special_keywords_token10 = 60,
  aux_sym_special_keywords_token11 = 61,
  aux_sym_special_keywords_token12 = 62,
  aux_sym_special_keywords_token13 = 63,
  aux_sym_special_keywords_token14 = 64,
  aux_sym_special_keywords_token15 = 65,
  aux_sym_special_keywords_token16 = 66,
  aux_sym_special_keywords_token17 = 67,
  aux_sym_special_keywords_token18 = 68,
  aux_sym_special_keywords_token19 = 69,
  aux_sym_special_keywords_token20 = 70,
  aux_sym_special_keywords_token21 = 71,
  sym_comment = 72,
  anon_sym_AND = 73,
  anon_sym_OR = 74,
  anon_sym_PLUS = 75,
  anon_sym_DASH = 76,
  anon_sym_STAR = 77,
  anon_sym_SLASH = 78,
  anon_sym_LT_GT = 79,
  anon_sym_GT = 80,
  anon_sym_LT = 81,
  aux_sym_for_statement_token1 = 82,
  aux_sym_procedure_definition_token1 = 83,
  sym_source_file = 84,
  sym_keyword = 85,
  sym__optional_divisions = 86,
  sym_target_division = 87,
  sym_define_division = 88,
  sym_define_statement = 89,
  sym_setup_division = 90,
  sym_select_division = 91,
  sym_sort_division = 92,
  sym_letter_division = 93,
  sym_print_division = 94,
  sym_total_division = 95,
  sym_data_type = 96,
  sym_array_type = 97,
  sym_string_literal = 98,
  sym__identifier = 99,
  sym_identifier = 100,
  sym__array_identifier = 101,
  sym_variable_declaration = 102,
  sym_include_statement = 103,
  sym_database_field = 104,
  sym_special_keywords = 105,
  sym_special_function = 106,
  sym__datevalue = 107,
  sym__rate = 108,
  sym__money = 109,
  sym__value = 110,
  sym__format = 111,
  sym__segment = 112,
  sym__charactersearch = 113,
  sym__length = 114,
  sym__fileopen = 115,
  sym__filereadline = 116,
  sym_expression = 117,
  sym_assignment_expression = 118,
  sym__lhs_expression = 119,
  sym_parenthesized_expression = 120,
  sym_binary_expression = 121,
  sym_primary_expression = 122,
  sym_for_statement = 123,
  sym_while_statement = 124,
  sym_if_statement = 125,
  sym__if_statement_no_block = 126,
  sym__if_else_block = 127,
  sym__if_else_no_block = 128,
  sym__if_statement_block = 129,
  sym_statement = 130,
  sym_procedure_definition = 131,
  sym_procedure_call = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_source_file_repeat2 = 134,
  aux_sym_source_file_repeat3 = 135,
  aux_sym_define_division_repeat1 = 136,
  aux_sym_array_type_repeat1 = 137,
  aux_sym__array_identifier_repeat1 = 138,
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
  [sym_record_type] = "record_type",
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
  [aux_sym_special_keywords_token20] = "special_keywords_token20",
  [aux_sym_special_keywords_token21] = "special_keywords_token21",
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
  [sym__if_statement_no_block] = "_if_statement_no_block",
  [sym__if_else_block] = "_if_else_block",
  [sym__if_else_no_block] = "_if_else_no_block",
  [sym__if_statement_block] = "_if_statement_block",
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
  [sym_record_type] = sym_record_type,
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
  [aux_sym_special_keywords_token20] = aux_sym_special_keywords_token20,
  [aux_sym_special_keywords_token21] = aux_sym_special_keywords_token21,
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
  [sym__if_statement_no_block] = sym__if_statement_no_block,
  [sym__if_else_block] = sym__if_else_block,
  [sym__if_else_no_block] = sym__if_else_no_block,
  [sym__if_statement_block] = sym__if_statement_block,
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
  [sym_record_type] = {
    .visible = true,
    .named = true,
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
  [aux_sym_special_keywords_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_keywords_token21] = {
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
  [sym__if_statement_no_block] = {
    .visible = false,
    .named = true,
  },
  [sym__if_else_block] = {
    .visible = false,
    .named = true,
  },
  [sym__if_else_no_block] = {
    .visible = false,
    .named = true,
  },
  [sym__if_statement_block] = {
    .visible = false,
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
  field_left = 2,
  field_operator = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_condition, 1},
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 22,
  [35] = 25,
  [36] = 36,
  [37] = 12,
  [38] = 29,
  [39] = 30,
  [40] = 40,
  [41] = 36,
  [42] = 32,
  [43] = 31,
  [44] = 44,
  [45] = 24,
  [46] = 46,
  [47] = 46,
  [48] = 26,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 51,
  [57] = 57,
  [58] = 58,
  [59] = 52,
  [60] = 60,
  [61] = 52,
  [62] = 62,
  [63] = 63,
  [64] = 60,
  [65] = 62,
  [66] = 66,
  [67] = 67,
  [68] = 58,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 57,
  [73] = 63,
  [74] = 69,
  [75] = 55,
  [76] = 70,
  [77] = 67,
  [78] = 66,
  [79] = 60,
  [80] = 80,
  [81] = 62,
  [82] = 54,
  [83] = 58,
  [84] = 57,
  [85] = 51,
  [86] = 55,
  [87] = 54,
  [88] = 53,
  [89] = 80,
  [90] = 80,
  [91] = 63,
  [92] = 53,
  [93] = 70,
  [94] = 69,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 99,
  [106] = 98,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
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
  [133] = 133,
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
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 148,
  [156] = 101,
  [157] = 126,
  [158] = 125,
  [159] = 104,
  [160] = 122,
  [161] = 107,
  [162] = 103,
  [163] = 123,
  [164] = 128,
  [165] = 129,
  [166] = 130,
  [167] = 131,
  [168] = 144,
  [169] = 135,
  [170] = 145,
  [171] = 143,
  [172] = 149,
  [173] = 138,
  [174] = 154,
  [175] = 152,
  [176] = 109,
  [177] = 146,
  [178] = 110,
  [179] = 141,
  [180] = 147,
  [181] = 112,
  [182] = 114,
  [183] = 142,
  [184] = 151,
  [185] = 150,
  [186] = 115,
  [187] = 139,
  [188] = 137,
  [189] = 136,
  [190] = 116,
  [191] = 118,
  [192] = 119,
  [193] = 102,
  [194] = 132,
  [195] = 134,
  [196] = 140,
  [197] = 121,
  [198] = 153,
  [199] = 120,
  [200] = 113,
  [201] = 108,
  [202] = 100,
  [203] = 124,
  [204] = 111,
  [205] = 127,
  [206] = 117,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 103,
  [215] = 102,
  [216] = 100,
  [217] = 101,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 220,
  [224] = 104,
  [225] = 213,
  [226] = 102,
  [227] = 219,
  [228] = 218,
  [229] = 100,
  [230] = 222,
  [231] = 101,
  [232] = 103,
  [233] = 100,
  [234] = 102,
  [235] = 101,
  [236] = 103,
  [237] = 104,
  [238] = 112,
  [239] = 141,
  [240] = 153,
  [241] = 140,
  [242] = 132,
  [243] = 119,
  [244] = 118,
  [245] = 116,
  [246] = 115,
  [247] = 114,
  [248] = 107,
  [249] = 143,
  [250] = 108,
  [251] = 125,
  [252] = 126,
  [253] = 127,
  [254] = 128,
  [255] = 129,
  [256] = 130,
  [257] = 131,
  [258] = 113,
  [259] = 149,
  [260] = 122,
  [261] = 110,
  [262] = 111,
  [263] = 144,
  [264] = 145,
  [265] = 146,
  [266] = 147,
  [267] = 148,
  [268] = 136,
  [269] = 152,
  [270] = 134,
  [271] = 121,
  [272] = 120,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 274,
  [277] = 273,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 274,
  [282] = 282,
  [283] = 279,
  [284] = 284,
  [285] = 285,
  [286] = 275,
  [287] = 284,
  [288] = 278,
  [289] = 284,
  [290] = 278,
  [291] = 280,
  [292] = 282,
  [293] = 280,
  [294] = 282,
  [295] = 275,
  [296] = 285,
  [297] = 285,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 302,
  [304] = 302,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 307,
  [310] = 310,
  [311] = 308,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 313,
  [317] = 317,
  [318] = 317,
  [319] = 319,
  [320] = 306,
  [321] = 310,
  [322] = 322,
  [323] = 310,
  [324] = 314,
  [325] = 313,
  [326] = 314,
  [327] = 315,
  [328] = 322,
  [329] = 329,
  [330] = 322,
  [331] = 312,
  [332] = 315,
  [333] = 307,
  [334] = 334,
  [335] = 305,
  [336] = 306,
  [337] = 337,
  [338] = 319,
  [339] = 312,
  [340] = 308,
  [341] = 337,
  [342] = 337,
  [343] = 305,
  [344] = 319,
  [345] = 317,
  [346] = 346,
  [347] = 347,
  [348] = 347,
  [349] = 349,
  [350] = 349,
  [351] = 351,
  [352] = 352,
  [353] = 352,
  [354] = 354,
  [355] = 351,
  [356] = 351,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 358,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 358,
  [367] = 358,
  [368] = 368,
  [369] = 369,
  [370] = 358,
  [371] = 363,
  [372] = 372,
  [373] = 108,
  [374] = 374,
  [375] = 359,
  [376] = 359,
  [377] = 363,
  [378] = 359,
  [379] = 363,
  [380] = 380,
  [381] = 359,
  [382] = 363,
  [383] = 104,
  [384] = 384,
  [385] = 385,
  [386] = 385,
  [387] = 385,
  [388] = 388,
  [389] = 385,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 390,
  [396] = 396,
  [397] = 396,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 401,
  [407] = 407,
  [408] = 407,
  [409] = 409,
  [410] = 410,
  [411] = 390,
  [412] = 399,
  [413] = 400,
  [414] = 391,
  [415] = 415,
  [416] = 416,
  [417] = 396,
  [418] = 400,
  [419] = 419,
  [420] = 401,
  [421] = 421,
  [422] = 393,
  [423] = 399,
  [424] = 400,
  [425] = 391,
  [426] = 399,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 429,
  [433] = 415,
  [434] = 428,
  [435] = 429,
  [436] = 402,
  [437] = 437,
  [438] = 415,
  [439] = 439,
  [440] = 427,
  [441] = 441,
  [442] = 396,
  [443] = 443,
  [444] = 392,
  [445] = 431,
  [446] = 446,
  [447] = 402,
  [448] = 396,
  [449] = 393,
  [450] = 399,
  [451] = 451,
  [452] = 416,
  [453] = 430,
  [454] = 451,
  [455] = 416,
  [456] = 430,
  [457] = 394,
  [458] = 458,
  [459] = 392,
  [460] = 431,
  [461] = 451,
  [462] = 462,
  [463] = 428,
  [464] = 446,
  [465] = 446,
  [466] = 441,
  [467] = 467,
  [468] = 462,
  [469] = 462,
  [470] = 470,
  [471] = 427,
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
      if (eof) ADVANCE(825);
      if (lookahead == '"') ADVANCE(934);
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '$') ADVANCE(801);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == ')') ADVANCE(933);
      if (lookahead == '*') ADVANCE(1592);
      if (lookahead == '+') ADVANCE(1589);
      if (lookahead == ',') ADVANCE(932);
      if (lookahead == '-') ADVANCE(1591);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '/') ADVANCE(1593);
      if (lookahead == '0') ADVANCE(1542);
      if (lookahead == ':') ADVANCE(1563);
      if (lookahead == '<') ADVANCE(1596);
      if (lookahead == '=') ADVANCE(866);
      if (lookahead == '>') ADVANCE(1595);
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(356);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(424);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(40);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(56);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(286);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1598);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(718);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(934);
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '$') ADVANCE(1536);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '0') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1025);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(943);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(995);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(954);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1198);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1246);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1138);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(947);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(957);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1004);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1141);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(934);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(802);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '0') ADVANCE(1546);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1547);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1301);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(802);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '0') ADVANCE(1546);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1301);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1547);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1554);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(1536);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '0') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1025);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(943);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(951);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1167);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1281);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1246);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1293);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1334);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1016);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(947);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1083);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(958);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1394);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1098);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1142);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(1560);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(1560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(1559);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(1559);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(1559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == ')') ADVANCE(933);
      if (lookahead == '*') ADVANCE(1592);
      if (lookahead == '+') ADVANCE(1588);
      if (lookahead == ',') ADVANCE(932);
      if (lookahead == '-') ADVANCE(1590);
      if (lookahead == '/') ADVANCE(1593);
      if (lookahead == '<') ADVANCE(1596);
      if (lookahead == '=') ADVANCE(866);
      if (lookahead == '>') ADVANCE(1595);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(281);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(463);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(424);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(541);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(486);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(236);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(287);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(814);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(811);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(1584);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(602);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(602);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(1586);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(1583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(819);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(1537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1554);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(469);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(779);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(666);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(715);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(466);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(715);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(897);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(469);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(276);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(779);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(473);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(753);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1597);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(784);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(713);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(386);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(723);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(724);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 117:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(760);
      END_STATE();
    case 118:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(615);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(590);
      END_STATE();
    case 119:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 120:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(305);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(619);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(682);
      END_STATE();
    case 121:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(777);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 122:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 123:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(767);
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 126:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      END_STATE();
    case 128:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(384);
      END_STATE();
    case 129:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(602);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(64);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1565);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(880);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(602);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(579);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(657);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(291);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(554);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(369);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(261);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(695);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(730);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(559);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(731);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(743);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(64);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(834);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(880);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(919);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1573);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1567);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1569);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(768);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(217);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(470);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 184:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(764);
      END_STATE();
    case 185:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(766);
      END_STATE();
    case 186:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 187:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 188:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(586);
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(555);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(572);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(629);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 209:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(640);
      END_STATE();
    case 210:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 211:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1562);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1564);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1576);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(398);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 317:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 318:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(830);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 319:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(689);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(667);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 320:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(689);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 321:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      END_STATE();
    case 322:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(557);
      END_STATE();
    case 323:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(371);
      END_STATE();
    case 324:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(539);
      END_STATE();
    case 325:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(311);
      END_STATE();
    case 326:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(394);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 327:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      END_STATE();
    case 328:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 329:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      END_STATE();
    case 330:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(385);
      END_STATE();
    case 331:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(564);
      END_STATE();
    case 332:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(880);
      END_STATE();
    case 333:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1574);
      END_STATE();
    case 334:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(656);
      END_STATE();
    case 335:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(470);
      END_STATE();
    case 336:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(477);
      END_STATE();
    case 337:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(706);
      END_STATE();
    case 338:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 339:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 340:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 341:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(474);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(754);
      END_STATE();
    case 342:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(880);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(450);
      END_STATE();
    case 344:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(855);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1597);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 346:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(392);
      END_STATE();
    case 347:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(558);
      END_STATE();
    case 348:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(257);
      END_STATE();
    case 349:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 350:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(566);
      END_STATE();
    case 351:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(569);
      END_STATE();
    case 352:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(771);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(714);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 378:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 380:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 381:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(716);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(710);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(776);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 394:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 395:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 397:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 398:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 403:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 404:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 405:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 406:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 407:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 408:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(798);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(751);
      END_STATE();
    case 415:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(920);
      END_STATE();
    case 416:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(923);
      END_STATE();
    case 417:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(459);
      END_STATE();
    case 418:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(150);
      END_STATE();
    case 419:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(370);
      END_STATE();
    case 420:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(380);
      END_STATE();
    case 421:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(643);
      END_STATE();
    case 422:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(756);
      END_STATE();
    case 423:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(461);
      END_STATE();
    case 424:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 425:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(880);
      END_STATE();
    case 426:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 427:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(922);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(795);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(245);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(674);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(674);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(885);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(458);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(470);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 463:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 464:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(880);
      END_STATE();
    case 465:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 466:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 467:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 468:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(660);
      END_STATE();
    case 469:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 470:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 471:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(331);
      END_STATE();
    case 472:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 473:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 477:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 478:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      END_STATE();
    case 479:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      END_STATE();
    case 480:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(922);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(844);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1570);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1580);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(769);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(783);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(887);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(758);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 535:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 537:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(880);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1566);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(446);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 575:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 576:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 577:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(880);
      END_STATE();
    case 578:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(869);
      END_STATE();
    case 579:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 580:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(893);
      END_STATE();
    case 581:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(883);
      END_STATE();
    case 582:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(734);
      END_STATE();
    case 583:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(581);
      END_STATE();
    case 584:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 585:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 586:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(454);
      END_STATE();
    case 587:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 588:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(717);
      END_STATE();
    case 589:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 590:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      END_STATE();
    case 591:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(928);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(789);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 648:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 651:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 654:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 655:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(880);
      END_STATE();
    case 657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1581);
      END_STATE();
    case 659:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1577);
      END_STATE();
    case 660:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1571);
      END_STATE();
    case 661:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(921);
      END_STATE();
    case 662:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1572);
      END_STATE();
    case 663:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 664:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 665:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(656);
      END_STATE();
    case 666:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      END_STATE();
    case 667:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      END_STATE();
    case 668:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 669:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(685);
      END_STATE();
    case 670:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      END_STATE();
    case 671:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      END_STATE();
    case 672:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(552);
      END_STATE();
    case 673:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(675);
      END_STATE();
    case 674:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      END_STATE();
    case 675:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 676:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(720);
      END_STATE();
    case 677:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 678:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 679:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(736);
      END_STATE();
    case 680:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      END_STATE();
    case 681:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      END_STATE();
    case 682:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 683:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 684:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      END_STATE();
    case 685:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(515);
      END_STATE();
    case 686:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      END_STATE();
    case 687:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 688:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(741);
      END_STATE();
    case 689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(895);
      END_STATE();
    case 690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      END_STATE();
    case 691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(873);
      END_STATE();
    case 692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(927);
      END_STATE();
    case 693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(876);
      END_STATE();
    case 694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(846);
      END_STATE();
    case 695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      END_STATE();
    case 696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      END_STATE();
    case 697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      END_STATE();
    case 698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1579);
      END_STATE();
    case 699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1582);
      END_STATE();
    case 700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(918);
      END_STATE();
    case 701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      END_STATE();
    case 704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      END_STATE();
    case 705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(794);
      END_STATE();
    case 708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(906);
      END_STATE();
    case 709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      END_STATE();
    case 711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      END_STATE();
    case 712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(737);
      END_STATE();
    case 715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      END_STATE();
    case 717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      END_STATE();
    case 721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
      END_STATE();
    case 728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(448);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      END_STATE();
    case 739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      END_STATE();
    case 740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      END_STATE();
    case 741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(725);
      END_STATE();
    case 746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      END_STATE();
    case 749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 753:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 754:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(578);
      END_STATE();
    case 755:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(470);
      END_STATE();
    case 756:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(577);
      END_STATE();
    case 757:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 758:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 759:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      END_STATE();
    case 760:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(649);
      END_STATE();
    case 761:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 762:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(502);
      END_STATE();
    case 763:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 764:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 765:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 766:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(635);
      END_STATE();
    case 767:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(732);
      END_STATE();
    case 768:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(880);
      END_STATE();
    case 769:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(291);
      END_STATE();
    case 770:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(362);
      END_STATE();
    case 771:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 772:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(232);
      END_STATE();
    case 773:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 774:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(379);
      END_STATE();
    case 775:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(275);
      END_STATE();
    case 776:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(284);
      END_STATE();
    case 777:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1575);
      END_STATE();
    case 778:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(917);
      END_STATE();
    case 779:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(556);
      END_STATE();
    case 780:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(658);
      END_STATE();
    case 781:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(455);
      END_STATE();
    case 782:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(662);
      END_STATE();
    case 783:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(353);
      END_STATE();
    case 784:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      END_STATE();
    case 785:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(531);
      END_STATE();
    case 786:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(576);
      END_STATE();
    case 787:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(411);
      END_STATE();
    case 788:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(462);
      END_STATE();
    case 789:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(880);
      END_STATE();
    case 790:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(929);
      END_STATE();
    case 791:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(859);
      END_STATE();
    case 792:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 793:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(903);
      END_STATE();
    case 794:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(584);
      END_STATE();
    case 795:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(677);
      END_STATE();
    case 796:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(678);
      END_STATE();
    case 797:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(104);
      END_STATE();
    case 798:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(105);
      END_STATE();
    case 799:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1550);
      END_STATE();
    case 800:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1551);
      END_STATE();
    case 801:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 802:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1554);
      END_STATE();
    case 803:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1555);
      END_STATE();
    case 804:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      END_STATE();
    case 805:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 806:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1558);
      END_STATE();
    case 807:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 808:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 809:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 810:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      END_STATE();
    case 811:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      END_STATE();
    case 812:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1547);
      END_STATE();
    case 813:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 814:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      END_STATE();
    case 815:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1552);
      END_STATE();
    case 816:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1537);
      END_STATE();
    case 817:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 818:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(816);
      END_STATE();
    case 819:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(818);
      END_STATE();
    case 820:
      if (eof) ADVANCE(825);
      if (lookahead == '"') ADVANCE(934);
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '$') ADVANCE(1536);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == ')') ADVANCE(933);
      if (lookahead == '*') ADVANCE(1592);
      if (lookahead == '+') ADVANCE(1589);
      if (lookahead == ',') ADVANCE(932);
      if (lookahead == '-') ADVANCE(1591);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '/') ADVANCE(1593);
      if (lookahead == '0') ADVANCE(1542);
      if (lookahead == '<') ADVANCE(1596);
      if (lookahead == '=') ADVANCE(866);
      if (lookahead == '>') ADVANCE(1595);
      if (lookahead == 'A') ADVANCE(941);
      if (lookahead == 'O') ADVANCE(942);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(1025);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(943);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(995);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(954);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1198);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1246);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1138);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(946);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(957);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1004);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1141);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(820)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 821:
      if (eof) ADVANCE(825);
      if (lookahead == '"') ADVANCE(934);
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '$') ADVANCE(1536);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == '*') ADVANCE(1592);
      if (lookahead == '+') ADVANCE(1589);
      if (lookahead == '-') ADVANCE(1591);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '/') ADVANCE(1593);
      if (lookahead == '0') ADVANCE(1542);
      if (lookahead == '<') ADVANCE(1596);
      if (lookahead == '=') ADVANCE(866);
      if (lookahead == '>') ADVANCE(1595);
      if (lookahead == 'A') ADVANCE(941);
      if (lookahead == 'O') ADVANCE(942);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(1025);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(943);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(995);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(953);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1198);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1246);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1082);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(945);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(956);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1189);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1004);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1141);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(821)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 822:
      if (eof) ADVANCE(825);
      if (lookahead == '"') ADVANCE(934);
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '$') ADVANCE(1536);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '0') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1022);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(943);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(944);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(952);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1198);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1246);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1345);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1082);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1014);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(945);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(955);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(970);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(964);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1140);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(822)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 823:
      if (eof) ADVANCE(825);
      if (lookahead == '"') ADVANCE(934);
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '$') ADVANCE(1536);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '0') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1025);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(943);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(995);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(953);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1198);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1246);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1082);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(945);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(956);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1189);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1004);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1141);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(823)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 824:
      if (eof) ADVANCE(825);
      if (lookahead == '"') ADVANCE(934);
      if (lookahead == '#') ADVANCE(1561);
      if (lookahead == '$') ADVANCE(1536);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(803);
      if (lookahead == '0') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1025);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(943);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(995);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(954);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1198);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1246);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1138);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(946);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(957);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1004);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1141);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(824)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1537);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(983);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_keyword_token20);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_letter_division_token1);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_print_division_token2);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_total_division_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_record_type);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(452);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(404);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(786);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(591);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1380);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(740);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(740);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1408);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1371);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1123);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1340);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1196);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1419);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1207);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1412);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1357);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1412);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(639);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(574);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(632);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(363);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(622);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_data_type_token1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_data_type_token2);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_data_type_token3);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_data_type_token4);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_data_type_token5);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(936);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(936);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(1598);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(718);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '.') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(939);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1537);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'D') ADVANCE(1585);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'N') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1053);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1288);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(1587);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(969);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1467);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1256);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1261);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1288);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1397);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(971);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1263);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1523);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1386);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1441);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1422);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1355);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1095);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1422);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1355);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1096);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1422);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1355);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1097);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(915);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(898);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1029);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1395);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1288);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1144);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1270);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1523);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1386);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1001);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1002);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1516);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1193);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(994);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1007);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1018);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1285);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1516);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1193);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(994);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1376);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1516);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1193);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1184);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(994);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1481);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1376);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1516);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1193);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(994);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1481);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1526);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1328);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1328);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1286);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1319);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1245);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1248);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1304);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1357);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1503);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1407);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1533);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1037);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1390);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1111);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1474);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(950);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1027);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1030);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1067);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1073);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1485);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1067);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1485);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1052);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1294);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1251);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1079);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1336);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1268);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1332);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1265);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1463);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1252);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1308);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1266);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1254);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1080);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1311);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1396);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1337);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1428);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1307);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1414);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1262);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1288);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(972);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1270);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1523);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1386);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1217);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1478);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1040);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1031);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1314);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1253);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1221);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(999);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1253);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1221);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1253);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1046);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1304);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1410);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1483);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1484);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1486);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1049);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1502);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1495);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1116);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1524);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1283);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1309);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1283);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1309);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1283);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1514);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1403);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1385);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(981);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(967);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1130);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1023);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1288);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1060);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1101);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(973);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1537);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1222);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1053);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1288);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1375);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1119);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1239);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1194);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1243);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1437);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1240);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1195);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1358);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1400);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1185);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1188);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1372);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1070);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1084);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(990);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1120);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1121);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1464);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1208);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1482);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1458);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1036);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1043);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1483);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1124);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1489);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1008);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1499);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1497);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1102);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(973);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1222);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(835);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(911);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1148);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1116);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1199);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1512);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1513);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1224);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1350);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1006);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1382);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1058);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(949);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1233);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1150);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1359);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1180);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1216);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1370);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1417);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1529);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1220);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1424);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1078);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1279);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1295);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1444);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(963);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1040);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1532);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(862);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1048);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1048);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1304);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1351);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(937);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1510);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1511);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1519);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1177);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1019);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1075);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1192);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1299);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1282);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1041);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1377);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1388);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1084);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1348);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1061);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1406);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1201);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1398);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1024);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1401);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1062);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1465);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1389);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1300);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1002);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1434);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1409);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1066);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1311);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1205);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1498);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1429);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1076);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1296);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1444);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(963);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1457);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1227);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1306);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1391);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1457);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1227);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1411);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1391);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1457);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1411);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1391);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1443);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1030);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1312);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1209);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1317);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1329);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1445);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1480);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1044);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1069);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1277);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1316);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1318);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1430);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1320);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1427);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1432);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1010);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1291);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1530);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(831);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1515);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(948);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(969);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1459);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1442);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1055);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1026);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1459);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1026);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1116);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1361);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1346);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1214);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1159);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1366);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1436);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1289);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1294);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1473);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1084);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1125);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1081);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1290);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1504);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1290);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1272);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(856);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(854);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1111);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1474);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(950);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(950);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1226);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1362);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1118);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(998);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1367);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(991);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1535);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1387);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1344);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1171);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1517);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1436);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1175);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1343);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1178);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1302);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1439);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1381);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1038);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1488);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1065);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1088);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1303);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1050);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1346);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1460);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1257);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1469);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1305);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1477);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1322);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1520);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1518);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(980);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1323);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1447);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1271);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1365);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1341);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1356);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1324);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1368);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1485);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1369);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1326);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1321);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1327);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1456);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(912);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(914);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1276);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1039);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1213);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1219);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1505);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(966);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1212);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(841);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(879);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(965);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1116);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1534);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1011);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1247);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1436);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1056);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1448);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1056);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1448);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1056);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1186);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1056);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1186);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1255);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1379);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1099);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1509);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(886);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1084);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1353);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1215);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1278);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1379);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1089);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1412);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1508);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(993);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1225);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1238);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1149);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1235);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1237);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1191);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1021);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1173);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1032);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1084);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1452);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1063);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1154);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1156);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1158);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1515);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(948);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1493);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1179);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(839);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1055);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1176);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1175);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1071);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1174);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1064);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1109);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1451);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1086);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1462);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1038);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1490);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(961);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1054);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1468);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1460);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1068);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1466);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1234);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1475);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1458);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1091);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1081);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1163);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1093);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1094);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1003);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1084);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1170);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1506);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1244);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1151);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1444);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(963);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1529);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1034);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1182);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1333);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(984);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(987);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1074);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1230);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1496);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1258);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1259);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1256);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1522);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1525);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1384);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1146);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1507);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1175);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1284);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1250);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1470);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1294);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(976);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1338);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1388);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1399);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1269);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1260);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1392);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1330);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1292);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1404);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1416);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1335);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1298);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1527);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1423);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1511);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(870);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(974);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1385);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(894);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(884);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1491);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1378);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(962);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1274);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1415);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1128);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1418);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(908);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(826);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(938);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1181);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1241);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1531);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1127);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(950);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1056);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1186);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1056);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1476);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1521);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1242);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1349);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1453);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(978);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1352);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1287);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1461);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1339);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(976);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(979);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1331);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1054);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1109);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1059);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(968);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1139);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1236);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1203);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1115);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1143);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1161);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1100);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1479);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1117);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1134);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1103);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(975);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1133);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1035);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1450);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(986);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1454);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1009);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1413);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1420);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1013);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1116);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1017);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1436);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1471);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1085);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1455);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1106);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1435);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1383);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1490);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1110);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1202);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1147);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1168);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1528);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1364);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1137);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1325);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1500);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1494);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(896);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(874);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(877);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(872);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(865);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(853);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1028);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(910);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1531);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1169);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1354);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1187);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(977);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(907);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1200);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(902);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1087);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1211);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(996);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1313);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1228);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1153);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1113);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1081);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1359);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1492);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1223);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1363);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1426);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(989);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1126);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1131);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1157);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1160);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1136);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1487);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1230);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1155);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1231);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1232);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1020);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1374);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1373);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1342);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1501);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1088);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1092);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1315);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1316);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1267);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1421);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1431);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1145);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1206);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1152);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1081);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(982);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1218);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1132);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(909);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1360);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1204);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1446);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1275);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1435);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1229);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1197);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1280);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(860);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(930);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1449);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1005);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(939);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '_') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1555);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '_') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1539);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '_') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1540);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1557);
      if (lookahead == '0') ADVANCE(1549);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(815);
      if (lookahead == '_') ADVANCE(804);
      if (lookahead == 'n') ADVANCE(1538);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1544);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '_') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1547);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '_') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1543);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '_') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1544);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1556);
      if (lookahead == '0') ADVANCE(1553);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(799);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(815);
      if (lookahead == '_') ADVANCE(804);
      if (lookahead == 'n') ADVANCE(1538);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1547);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1556);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '_') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1547);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(805);
      if (lookahead == '_') ADVANCE(804);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(805);
      if (lookahead == '_') ADVANCE(804);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1548);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(1538);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1550);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1551);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(815);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1552);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(804);
      if (lookahead == 'n') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1554);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '_') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1555);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1555);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1541);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_money);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_rate);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_special_keywords_token1);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_special_keywords_token2);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_special_keywords_token4);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_special_keywords_token5);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_special_keywords_token6);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_special_keywords_token7);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_special_keywords_token8);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_special_keywords_token9);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(405);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_special_keywords_token10);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_special_keywords_token11);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_special_keywords_token13);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_special_keywords_token14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_special_keywords_token15);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_special_keywords_token16);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_special_keywords_token17);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_special_keywords_token18);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_special_keywords_token19);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_special_keywords_token20);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(625);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_special_keywords_token21);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(1583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '\\') ADVANCE(34);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '$') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1554);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1554);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(1594);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_procedure_definition_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 822},
  [2] = {.lex_state = 822},
  [3] = {.lex_state = 823},
  [4] = {.lex_state = 823},
  [5] = {.lex_state = 823},
  [6] = {.lex_state = 823},
  [7] = {.lex_state = 823},
  [8] = {.lex_state = 820},
  [9] = {.lex_state = 820},
  [10] = {.lex_state = 820},
  [11] = {.lex_state = 820},
  [12] = {.lex_state = 824},
  [13] = {.lex_state = 824},
  [14] = {.lex_state = 824},
  [15] = {.lex_state = 824},
  [16] = {.lex_state = 824},
  [17] = {.lex_state = 824},
  [18] = {.lex_state = 824},
  [19] = {.lex_state = 824},
  [20] = {.lex_state = 824},
  [21] = {.lex_state = 824},
  [22] = {.lex_state = 824},
  [23] = {.lex_state = 824},
  [24] = {.lex_state = 820},
  [25] = {.lex_state = 824},
  [26] = {.lex_state = 820},
  [27] = {.lex_state = 824},
  [28] = {.lex_state = 824},
  [29] = {.lex_state = 824},
  [30] = {.lex_state = 824},
  [31] = {.lex_state = 824},
  [32] = {.lex_state = 824},
  [33] = {.lex_state = 824},
  [34] = {.lex_state = 824},
  [35] = {.lex_state = 824},
  [36] = {.lex_state = 824},
  [37] = {.lex_state = 824},
  [38] = {.lex_state = 824},
  [39] = {.lex_state = 824},
  [40] = {.lex_state = 824},
  [41] = {.lex_state = 824},
  [42] = {.lex_state = 824},
  [43] = {.lex_state = 824},
  [44] = {.lex_state = 824},
  [45] = {.lex_state = 820},
  [46] = {.lex_state = 824},
  [47] = {.lex_state = 824},
  [48] = {.lex_state = 820},
  [49] = {.lex_state = 822},
  [50] = {.lex_state = 822},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 821},
  [96] = {.lex_state = 821},
  [97] = {.lex_state = 823},
  [98] = {.lex_state = 820},
  [99] = {.lex_state = 820},
  [100] = {.lex_state = 820},
  [101] = {.lex_state = 820},
  [102] = {.lex_state = 820},
  [103] = {.lex_state = 820},
  [104] = {.lex_state = 820},
  [105] = {.lex_state = 820},
  [106] = {.lex_state = 820},
  [107] = {.lex_state = 820},
  [108] = {.lex_state = 820},
  [109] = {.lex_state = 820},
  [110] = {.lex_state = 820},
  [111] = {.lex_state = 820},
  [112] = {.lex_state = 820},
  [113] = {.lex_state = 820},
  [114] = {.lex_state = 820},
  [115] = {.lex_state = 820},
  [116] = {.lex_state = 820},
  [117] = {.lex_state = 820},
  [118] = {.lex_state = 820},
  [119] = {.lex_state = 820},
  [120] = {.lex_state = 820},
  [121] = {.lex_state = 820},
  [122] = {.lex_state = 820},
  [123] = {.lex_state = 820},
  [124] = {.lex_state = 820},
  [125] = {.lex_state = 820},
  [126] = {.lex_state = 820},
  [127] = {.lex_state = 820},
  [128] = {.lex_state = 820},
  [129] = {.lex_state = 820},
  [130] = {.lex_state = 820},
  [131] = {.lex_state = 820},
  [132] = {.lex_state = 820},
  [133] = {.lex_state = 820},
  [134] = {.lex_state = 820},
  [135] = {.lex_state = 820},
  [136] = {.lex_state = 820},
  [137] = {.lex_state = 820},
  [138] = {.lex_state = 820},
  [139] = {.lex_state = 820},
  [140] = {.lex_state = 820},
  [141] = {.lex_state = 820},
  [142] = {.lex_state = 820},
  [143] = {.lex_state = 820},
  [144] = {.lex_state = 820},
  [145] = {.lex_state = 820},
  [146] = {.lex_state = 820},
  [147] = {.lex_state = 820},
  [148] = {.lex_state = 820},
  [149] = {.lex_state = 820},
  [150] = {.lex_state = 820},
  [151] = {.lex_state = 820},
  [152] = {.lex_state = 820},
  [153] = {.lex_state = 820},
  [154] = {.lex_state = 820},
  [155] = {.lex_state = 820},
  [156] = {.lex_state = 820},
  [157] = {.lex_state = 820},
  [158] = {.lex_state = 820},
  [159] = {.lex_state = 820},
  [160] = {.lex_state = 820},
  [161] = {.lex_state = 820},
  [162] = {.lex_state = 820},
  [163] = {.lex_state = 820},
  [164] = {.lex_state = 820},
  [165] = {.lex_state = 820},
  [166] = {.lex_state = 820},
  [167] = {.lex_state = 820},
  [168] = {.lex_state = 820},
  [169] = {.lex_state = 820},
  [170] = {.lex_state = 820},
  [171] = {.lex_state = 820},
  [172] = {.lex_state = 820},
  [173] = {.lex_state = 820},
  [174] = {.lex_state = 820},
  [175] = {.lex_state = 820},
  [176] = {.lex_state = 820},
  [177] = {.lex_state = 820},
  [178] = {.lex_state = 820},
  [179] = {.lex_state = 820},
  [180] = {.lex_state = 820},
  [181] = {.lex_state = 820},
  [182] = {.lex_state = 820},
  [183] = {.lex_state = 820},
  [184] = {.lex_state = 820},
  [185] = {.lex_state = 820},
  [186] = {.lex_state = 820},
  [187] = {.lex_state = 820},
  [188] = {.lex_state = 820},
  [189] = {.lex_state = 820},
  [190] = {.lex_state = 820},
  [191] = {.lex_state = 820},
  [192] = {.lex_state = 820},
  [193] = {.lex_state = 820},
  [194] = {.lex_state = 820},
  [195] = {.lex_state = 820},
  [196] = {.lex_state = 820},
  [197] = {.lex_state = 820},
  [198] = {.lex_state = 820},
  [199] = {.lex_state = 820},
  [200] = {.lex_state = 820},
  [201] = {.lex_state = 820},
  [202] = {.lex_state = 820},
  [203] = {.lex_state = 820},
  [204] = {.lex_state = 820},
  [205] = {.lex_state = 820},
  [206] = {.lex_state = 820},
  [207] = {.lex_state = 823},
  [208] = {.lex_state = 823},
  [209] = {.lex_state = 823},
  [210] = {.lex_state = 823},
  [211] = {.lex_state = 823},
  [212] = {.lex_state = 823},
  [213] = {.lex_state = 824},
  [214] = {.lex_state = 824},
  [215] = {.lex_state = 824},
  [216] = {.lex_state = 824},
  [217] = {.lex_state = 824},
  [218] = {.lex_state = 824},
  [219] = {.lex_state = 824},
  [220] = {.lex_state = 824},
  [221] = {.lex_state = 824},
  [222] = {.lex_state = 824},
  [223] = {.lex_state = 824},
  [224] = {.lex_state = 824},
  [225] = {.lex_state = 824},
  [226] = {.lex_state = 824},
  [227] = {.lex_state = 824},
  [228] = {.lex_state = 824},
  [229] = {.lex_state = 824},
  [230] = {.lex_state = 824},
  [231] = {.lex_state = 824},
  [232] = {.lex_state = 824},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 15},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 15},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 15},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 15},
  [244] = {.lex_state = 15},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 15},
  [250] = {.lex_state = 15},
  [251] = {.lex_state = 15},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 15},
  [254] = {.lex_state = 15},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 15},
  [257] = {.lex_state = 15},
  [258] = {.lex_state = 15},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 15},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 15},
  [266] = {.lex_state = 15},
  [267] = {.lex_state = 15},
  [268] = {.lex_state = 15},
  [269] = {.lex_state = 15},
  [270] = {.lex_state = 15},
  [271] = {.lex_state = 15},
  [272] = {.lex_state = 15},
  [273] = {.lex_state = 15},
  [274] = {.lex_state = 15},
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 15},
  [277] = {.lex_state = 15},
  [278] = {.lex_state = 15},
  [279] = {.lex_state = 15},
  [280] = {.lex_state = 15},
  [281] = {.lex_state = 15},
  [282] = {.lex_state = 15},
  [283] = {.lex_state = 15},
  [284] = {.lex_state = 15},
  [285] = {.lex_state = 15},
  [286] = {.lex_state = 15},
  [287] = {.lex_state = 15},
  [288] = {.lex_state = 15},
  [289] = {.lex_state = 15},
  [290] = {.lex_state = 15},
  [291] = {.lex_state = 15},
  [292] = {.lex_state = 15},
  [293] = {.lex_state = 15},
  [294] = {.lex_state = 15},
  [295] = {.lex_state = 15},
  [296] = {.lex_state = 15},
  [297] = {.lex_state = 15},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 5},
  [347] = {.lex_state = 4},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 4},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 6},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 6},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 6},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 935},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 935},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 6},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 6},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 935},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 935},
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
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 935},
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
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
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
    [sym_record_type] = ACTIONS(1),
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
    [aux_sym_special_keywords_token1] = ACTIONS(1),
    [aux_sym_special_keywords_token2] = ACTIONS(1),
    [aux_sym_special_keywords_token3] = ACTIONS(1),
    [aux_sym_special_keywords_token4] = ACTIONS(1),
    [aux_sym_special_keywords_token5] = ACTIONS(1),
    [aux_sym_special_keywords_token6] = ACTIONS(1),
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
    [aux_sym_special_keywords_token20] = ACTIONS(1),
    [aux_sym_special_keywords_token21] = ACTIONS(1),
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
    [sym_source_file] = STATE(405),
    [sym_keyword] = STATE(110),
    [sym__optional_divisions] = STATE(7),
    [sym_target_division] = STATE(6),
    [sym_define_division] = STATE(7),
    [sym_setup_division] = STATE(7),
    [sym_select_division] = STATE(7),
    [sym_sort_division] = STATE(7),
    [sym_letter_division] = STATE(19),
    [sym_print_division] = STATE(19),
    [sym_total_division] = STATE(7),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_keywords] = STATE(2),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(18),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(7),
    [aux_sym_source_file_repeat3] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [aux_sym_target_division_token1] = ACTIONS(37),
    [aux_sym_define_division_token1] = ACTIONS(39),
    [aux_sym_setup_division_token1] = ACTIONS(41),
    [aux_sym_select_division_token1] = ACTIONS(43),
    [aux_sym_sort_division_token1] = ACTIONS(45),
    [aux_sym_letter_division_token1] = ACTIONS(47),
    [aux_sym_print_division_token1] = ACTIONS(49),
    [aux_sym_total_division_token1] = ACTIONS(51),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [aux_sym_special_keywords_token1] = ACTIONS(67),
    [aux_sym_special_keywords_token2] = ACTIONS(67),
    [aux_sym_special_keywords_token3] = ACTIONS(67),
    [aux_sym_special_keywords_token4] = ACTIONS(67),
    [aux_sym_special_keywords_token5] = ACTIONS(67),
    [aux_sym_special_keywords_token6] = ACTIONS(67),
    [aux_sym_special_keywords_token7] = ACTIONS(67),
    [aux_sym_special_keywords_token8] = ACTIONS(67),
    [aux_sym_special_keywords_token9] = ACTIONS(67),
    [aux_sym_special_keywords_token10] = ACTIONS(67),
    [aux_sym_special_keywords_token11] = ACTIONS(67),
    [aux_sym_special_keywords_token12] = ACTIONS(67),
    [aux_sym_special_keywords_token13] = ACTIONS(67),
    [aux_sym_special_keywords_token14] = ACTIONS(67),
    [aux_sym_special_keywords_token15] = ACTIONS(67),
    [aux_sym_special_keywords_token16] = ACTIONS(67),
    [aux_sym_special_keywords_token17] = ACTIONS(67),
    [aux_sym_special_keywords_token18] = ACTIONS(67),
    [aux_sym_special_keywords_token19] = ACTIONS(67),
    [aux_sym_special_keywords_token20] = ACTIONS(67),
    [aux_sym_special_keywords_token21] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [2] = {
    [sym_keyword] = STATE(110),
    [sym__optional_divisions] = STATE(3),
    [sym_target_division] = STATE(5),
    [sym_define_division] = STATE(3),
    [sym_setup_division] = STATE(3),
    [sym_select_division] = STATE(3),
    [sym_sort_division] = STATE(3),
    [sym_letter_division] = STATE(14),
    [sym_print_division] = STATE(14),
    [sym_total_division] = STATE(3),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_keywords] = STATE(49),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat1] = STATE(49),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [aux_sym_target_division_token1] = ACTIONS(37),
    [aux_sym_define_division_token1] = ACTIONS(39),
    [aux_sym_setup_division_token1] = ACTIONS(41),
    [aux_sym_select_division_token1] = ACTIONS(43),
    [aux_sym_sort_division_token1] = ACTIONS(45),
    [aux_sym_letter_division_token1] = ACTIONS(47),
    [aux_sym_print_division_token1] = ACTIONS(49),
    [aux_sym_total_division_token1] = ACTIONS(51),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [aux_sym_special_keywords_token1] = ACTIONS(67),
    [aux_sym_special_keywords_token2] = ACTIONS(67),
    [aux_sym_special_keywords_token3] = ACTIONS(67),
    [aux_sym_special_keywords_token4] = ACTIONS(67),
    [aux_sym_special_keywords_token5] = ACTIONS(67),
    [aux_sym_special_keywords_token6] = ACTIONS(67),
    [aux_sym_special_keywords_token7] = ACTIONS(67),
    [aux_sym_special_keywords_token8] = ACTIONS(67),
    [aux_sym_special_keywords_token9] = ACTIONS(67),
    [aux_sym_special_keywords_token10] = ACTIONS(67),
    [aux_sym_special_keywords_token11] = ACTIONS(67),
    [aux_sym_special_keywords_token12] = ACTIONS(67),
    [aux_sym_special_keywords_token13] = ACTIONS(67),
    [aux_sym_special_keywords_token14] = ACTIONS(67),
    [aux_sym_special_keywords_token15] = ACTIONS(67),
    [aux_sym_special_keywords_token16] = ACTIONS(67),
    [aux_sym_special_keywords_token17] = ACTIONS(67),
    [aux_sym_special_keywords_token18] = ACTIONS(67),
    [aux_sym_special_keywords_token19] = ACTIONS(67),
    [aux_sym_special_keywords_token20] = ACTIONS(67),
    [aux_sym_special_keywords_token21] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [3] = {
    [sym_keyword] = STATE(110),
    [sym__optional_divisions] = STATE(97),
    [sym_define_division] = STATE(97),
    [sym_setup_division] = STATE(97),
    [sym_select_division] = STATE(97),
    [sym_sort_division] = STATE(97),
    [sym_letter_division] = STATE(21),
    [sym_print_division] = STATE(21),
    [sym_total_division] = STATE(97),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat2] = STATE(97),
    [aux_sym_source_file_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [aux_sym_define_division_token1] = ACTIONS(39),
    [aux_sym_setup_division_token1] = ACTIONS(41),
    [aux_sym_select_division_token1] = ACTIONS(43),
    [aux_sym_sort_division_token1] = ACTIONS(45),
    [aux_sym_letter_division_token1] = ACTIONS(47),
    [aux_sym_print_division_token1] = ACTIONS(49),
    [aux_sym_total_division_token1] = ACTIONS(51),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [4] = {
    [sym_keyword] = STATE(110),
    [sym__optional_divisions] = STATE(97),
    [sym_define_division] = STATE(97),
    [sym_setup_division] = STATE(97),
    [sym_select_division] = STATE(97),
    [sym_sort_division] = STATE(97),
    [sym_letter_division] = STATE(16),
    [sym_print_division] = STATE(16),
    [sym_total_division] = STATE(97),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(15),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat2] = STATE(97),
    [aux_sym_source_file_repeat3] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [aux_sym_define_division_token1] = ACTIONS(39),
    [aux_sym_setup_division_token1] = ACTIONS(41),
    [aux_sym_select_division_token1] = ACTIONS(43),
    [aux_sym_sort_division_token1] = ACTIONS(45),
    [aux_sym_letter_division_token1] = ACTIONS(47),
    [aux_sym_print_division_token1] = ACTIONS(49),
    [aux_sym_total_division_token1] = ACTIONS(51),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [5] = {
    [sym_keyword] = STATE(110),
    [sym__optional_divisions] = STATE(4),
    [sym_define_division] = STATE(4),
    [sym_setup_division] = STATE(4),
    [sym_select_division] = STATE(4),
    [sym_sort_division] = STATE(4),
    [sym_letter_division] = STATE(21),
    [sym_print_division] = STATE(21),
    [sym_total_division] = STATE(4),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_source_file_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [aux_sym_define_division_token1] = ACTIONS(39),
    [aux_sym_setup_division_token1] = ACTIONS(41),
    [aux_sym_select_division_token1] = ACTIONS(43),
    [aux_sym_sort_division_token1] = ACTIONS(45),
    [aux_sym_letter_division_token1] = ACTIONS(47),
    [aux_sym_print_division_token1] = ACTIONS(49),
    [aux_sym_total_division_token1] = ACTIONS(51),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [6] = {
    [sym_keyword] = STATE(110),
    [sym__optional_divisions] = STATE(3),
    [sym_define_division] = STATE(3),
    [sym_setup_division] = STATE(3),
    [sym_select_division] = STATE(3),
    [sym_sort_division] = STATE(3),
    [sym_letter_division] = STATE(14),
    [sym_print_division] = STATE(14),
    [sym_total_division] = STATE(3),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [aux_sym_define_division_token1] = ACTIONS(39),
    [aux_sym_setup_division_token1] = ACTIONS(41),
    [aux_sym_select_division_token1] = ACTIONS(43),
    [aux_sym_sort_division_token1] = ACTIONS(45),
    [aux_sym_letter_division_token1] = ACTIONS(47),
    [aux_sym_print_division_token1] = ACTIONS(49),
    [aux_sym_total_division_token1] = ACTIONS(51),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [7] = {
    [sym_keyword] = STATE(110),
    [sym__optional_divisions] = STATE(97),
    [sym_define_division] = STATE(97),
    [sym_setup_division] = STATE(97),
    [sym_select_division] = STATE(97),
    [sym_sort_division] = STATE(97),
    [sym_letter_division] = STATE(14),
    [sym_print_division] = STATE(14),
    [sym_total_division] = STATE(97),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat2] = STATE(97),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [aux_sym_define_division_token1] = ACTIONS(39),
    [aux_sym_setup_division_token1] = ACTIONS(41),
    [aux_sym_select_division_token1] = ACTIONS(43),
    [aux_sym_sort_division_token1] = ACTIONS(45),
    [aux_sym_letter_division_token1] = ACTIONS(47),
    [aux_sym_print_division_token1] = ACTIONS(49),
    [aux_sym_total_division_token1] = ACTIONS(51),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [8] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(42),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(87),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [9] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(43),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(129),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [10] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(31),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(31),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(131),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [11] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(32),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(32),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(133),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [12] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(135),
    [aux_sym_keyword_token1] = ACTIONS(137),
    [aux_sym_keyword_token2] = ACTIONS(140),
    [aux_sym_keyword_token3] = ACTIONS(143),
    [aux_sym_keyword_token4] = ACTIONS(146),
    [aux_sym_keyword_token5] = ACTIONS(146),
    [aux_sym_keyword_token6] = ACTIONS(146),
    [aux_sym_keyword_token7] = ACTIONS(146),
    [aux_sym_keyword_token8] = ACTIONS(149),
    [aux_sym_keyword_token9] = ACTIONS(152),
    [aux_sym_keyword_token10] = ACTIONS(155),
    [aux_sym_keyword_token11] = ACTIONS(158),
    [aux_sym_keyword_token12] = ACTIONS(146),
    [aux_sym_keyword_token13] = ACTIONS(146),
    [aux_sym_keyword_token14] = ACTIONS(161),
    [aux_sym_keyword_token15] = ACTIONS(164),
    [aux_sym_keyword_token16] = ACTIONS(167),
    [aux_sym_keyword_token17] = ACTIONS(170),
    [aux_sym_keyword_token18] = ACTIONS(173),
    [aux_sym_keyword_token19] = ACTIONS(176),
    [aux_sym_keyword_token20] = ACTIONS(179),
    [sym_record_type] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym__identifier_token1] = ACTIONS(191),
    [sym_number] = ACTIONS(194),
    [sym_money] = ACTIONS(197),
    [sym_date] = ACTIONS(197),
    [sym_rate] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(203),
  },
  [13] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [14] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [15] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(206),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [16] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(17),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(206),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [17] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [18] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [19] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [20] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [21] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(15),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_source_file_repeat3] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [22] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(33),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(33),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(210),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [23] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(212),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [24] = {
    [sym_keyword] = STATE(261),
    [sym_string_literal] = STATE(261),
    [sym__identifier] = STATE(233),
    [sym_identifier] = STATE(269),
    [sym__array_identifier] = STATE(235),
    [sym_include_statement] = STATE(259),
    [sym_database_field] = STATE(259),
    [sym_special_function] = STATE(261),
    [sym__datevalue] = STATE(249),
    [sym__rate] = STATE(249),
    [sym__money] = STATE(249),
    [sym__value] = STATE(249),
    [sym__format] = STATE(249),
    [sym__segment] = STATE(249),
    [sym__charactersearch] = STATE(249),
    [sym__length] = STATE(249),
    [sym__fileopen] = STATE(249),
    [sym__filereadline] = STATE(249),
    [sym_expression] = STATE(273),
    [sym_assignment_expression] = STATE(259),
    [sym__lhs_expression] = STATE(401),
    [sym_parenthesized_expression] = STATE(261),
    [sym_binary_expression] = STATE(259),
    [sym_primary_expression] = STATE(259),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_keyword_token1] = ACTIONS(214),
    [aux_sym_keyword_token2] = ACTIONS(214),
    [aux_sym_keyword_token3] = ACTIONS(214),
    [aux_sym_keyword_token4] = ACTIONS(214),
    [aux_sym_keyword_token5] = ACTIONS(214),
    [aux_sym_keyword_token6] = ACTIONS(214),
    [aux_sym_keyword_token7] = ACTIONS(214),
    [aux_sym_keyword_token8] = ACTIONS(214),
    [aux_sym_keyword_token9] = ACTIONS(216),
    [aux_sym_keyword_token10] = ACTIONS(218),
    [aux_sym_keyword_token11] = ACTIONS(220),
    [aux_sym_keyword_token12] = ACTIONS(214),
    [aux_sym_keyword_token13] = ACTIONS(214),
    [aux_sym_keyword_token14] = ACTIONS(222),
    [aux_sym_keyword_token15] = ACTIONS(224),
    [aux_sym_keyword_token16] = ACTIONS(226),
    [aux_sym_keyword_token17] = ACTIONS(228),
    [aux_sym_keyword_token18] = ACTIONS(230),
    [aux_sym_keyword_token19] = ACTIONS(232),
    [aux_sym_keyword_token20] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [aux_sym__identifier_token1] = ACTIONS(242),
    [sym_number] = ACTIONS(244),
    [sym_money] = ACTIONS(246),
    [sym_date] = ACTIONS(246),
    [sym_rate] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_procedure_definition_token1] = ACTIONS(77),
  },
  [25] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(250),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [26] = {
    [sym_keyword] = STATE(261),
    [sym_string_literal] = STATE(261),
    [sym__identifier] = STATE(233),
    [sym_identifier] = STATE(269),
    [sym__array_identifier] = STATE(235),
    [sym_include_statement] = STATE(259),
    [sym_database_field] = STATE(259),
    [sym_special_function] = STATE(261),
    [sym__datevalue] = STATE(249),
    [sym__rate] = STATE(249),
    [sym__money] = STATE(249),
    [sym__value] = STATE(249),
    [sym__format] = STATE(249),
    [sym__segment] = STATE(249),
    [sym__charactersearch] = STATE(249),
    [sym__length] = STATE(249),
    [sym__fileopen] = STATE(249),
    [sym__filereadline] = STATE(249),
    [sym_expression] = STATE(279),
    [sym_assignment_expression] = STATE(259),
    [sym__lhs_expression] = STATE(401),
    [sym_parenthesized_expression] = STATE(261),
    [sym_binary_expression] = STATE(259),
    [sym_primary_expression] = STATE(259),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_keyword_token1] = ACTIONS(214),
    [aux_sym_keyword_token2] = ACTIONS(214),
    [aux_sym_keyword_token3] = ACTIONS(214),
    [aux_sym_keyword_token4] = ACTIONS(214),
    [aux_sym_keyword_token5] = ACTIONS(214),
    [aux_sym_keyword_token6] = ACTIONS(214),
    [aux_sym_keyword_token7] = ACTIONS(214),
    [aux_sym_keyword_token8] = ACTIONS(214),
    [aux_sym_keyword_token9] = ACTIONS(216),
    [aux_sym_keyword_token10] = ACTIONS(218),
    [aux_sym_keyword_token11] = ACTIONS(220),
    [aux_sym_keyword_token12] = ACTIONS(214),
    [aux_sym_keyword_token13] = ACTIONS(214),
    [aux_sym_keyword_token14] = ACTIONS(222),
    [aux_sym_keyword_token15] = ACTIONS(224),
    [aux_sym_keyword_token16] = ACTIONS(226),
    [aux_sym_keyword_token17] = ACTIONS(228),
    [aux_sym_keyword_token18] = ACTIONS(230),
    [aux_sym_keyword_token19] = ACTIONS(232),
    [aux_sym_keyword_token20] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [aux_sym__identifier_token1] = ACTIONS(242),
    [sym_number] = ACTIONS(244),
    [sym_money] = ACTIONS(246),
    [sym_date] = ACTIONS(246),
    [sym_rate] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_procedure_definition_token1] = ACTIONS(77),
  },
  [27] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(44),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(44),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(252),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [28] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(254),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [29] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(256),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [30] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(29),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(29),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(258),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [31] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(260),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [32] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(262),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [33] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(264),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [34] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(28),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(28),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(266),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [35] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(268),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [36] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(270),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [37] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(272),
    [aux_sym_keyword_token2] = ACTIONS(275),
    [aux_sym_keyword_token3] = ACTIONS(278),
    [aux_sym_keyword_token4] = ACTIONS(281),
    [aux_sym_keyword_token5] = ACTIONS(281),
    [aux_sym_keyword_token6] = ACTIONS(281),
    [aux_sym_keyword_token7] = ACTIONS(281),
    [aux_sym_keyword_token8] = ACTIONS(284),
    [aux_sym_keyword_token9] = ACTIONS(287),
    [aux_sym_keyword_token10] = ACTIONS(290),
    [aux_sym_keyword_token11] = ACTIONS(293),
    [aux_sym_keyword_token12] = ACTIONS(281),
    [aux_sym_keyword_token13] = ACTIONS(281),
    [aux_sym_keyword_token14] = ACTIONS(296),
    [aux_sym_keyword_token15] = ACTIONS(299),
    [aux_sym_keyword_token16] = ACTIONS(302),
    [aux_sym_keyword_token17] = ACTIONS(305),
    [aux_sym_keyword_token18] = ACTIONS(308),
    [aux_sym_keyword_token19] = ACTIONS(311),
    [aux_sym_keyword_token20] = ACTIONS(314),
    [sym_record_type] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [aux_sym__identifier_token1] = ACTIONS(326),
    [sym_number] = ACTIONS(329),
    [sym_money] = ACTIONS(332),
    [sym_date] = ACTIONS(332),
    [sym_rate] = ACTIONS(332),
    [anon_sym_POUND] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(338),
  },
  [38] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(341),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [39] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(343),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [40] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(23),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(23),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(85),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [41] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(25),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(25),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(345),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [42] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(347),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [43] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(349),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [44] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(351),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [45] = {
    [sym_keyword] = STATE(261),
    [sym_string_literal] = STATE(261),
    [sym__identifier] = STATE(233),
    [sym_identifier] = STATE(269),
    [sym__array_identifier] = STATE(235),
    [sym_include_statement] = STATE(259),
    [sym_database_field] = STATE(259),
    [sym_special_function] = STATE(261),
    [sym__datevalue] = STATE(249),
    [sym__rate] = STATE(249),
    [sym__money] = STATE(249),
    [sym__value] = STATE(249),
    [sym__format] = STATE(249),
    [sym__segment] = STATE(249),
    [sym__charactersearch] = STATE(249),
    [sym__length] = STATE(249),
    [sym__fileopen] = STATE(249),
    [sym__filereadline] = STATE(249),
    [sym_expression] = STATE(277),
    [sym_assignment_expression] = STATE(259),
    [sym__lhs_expression] = STATE(401),
    [sym_parenthesized_expression] = STATE(261),
    [sym_binary_expression] = STATE(259),
    [sym_primary_expression] = STATE(259),
    [aux_sym_keyword_token1] = ACTIONS(214),
    [aux_sym_keyword_token2] = ACTIONS(214),
    [aux_sym_keyword_token3] = ACTIONS(214),
    [aux_sym_keyword_token4] = ACTIONS(214),
    [aux_sym_keyword_token5] = ACTIONS(214),
    [aux_sym_keyword_token6] = ACTIONS(214),
    [aux_sym_keyword_token7] = ACTIONS(214),
    [aux_sym_keyword_token8] = ACTIONS(214),
    [aux_sym_keyword_token9] = ACTIONS(216),
    [aux_sym_keyword_token10] = ACTIONS(218),
    [aux_sym_keyword_token11] = ACTIONS(220),
    [aux_sym_keyword_token12] = ACTIONS(214),
    [aux_sym_keyword_token13] = ACTIONS(214),
    [aux_sym_keyword_token14] = ACTIONS(222),
    [aux_sym_keyword_token15] = ACTIONS(224),
    [aux_sym_keyword_token16] = ACTIONS(226),
    [aux_sym_keyword_token17] = ACTIONS(228),
    [aux_sym_keyword_token18] = ACTIONS(230),
    [aux_sym_keyword_token19] = ACTIONS(232),
    [aux_sym_keyword_token20] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [aux_sym__identifier_token1] = ACTIONS(242),
    [sym_number] = ACTIONS(244),
    [sym_money] = ACTIONS(246),
    [sym_date] = ACTIONS(246),
    [sym_rate] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_procedure_definition_token1] = ACTIONS(77),
  },
  [46] = {
    [sym_keyword] = STATE(110),
    [sym_string_literal] = STATE(110),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(152),
    [sym__array_identifier] = STATE(101),
    [sym_include_statement] = STATE(149),
    [sym_database_field] = STATE(149),
    [sym_special_function] = STATE(110),
    [sym__datevalue] = STATE(143),
    [sym__rate] = STATE(143),
    [sym__money] = STATE(143),
    [sym__value] = STATE(143),
    [sym__format] = STATE(143),
    [sym__segment] = STATE(143),
    [sym__charactersearch] = STATE(143),
    [sym__length] = STATE(143),
    [sym__fileopen] = STATE(143),
    [sym__filereadline] = STATE(143),
    [sym_expression] = STATE(142),
    [sym_assignment_expression] = STATE(149),
    [sym__lhs_expression] = STATE(406),
    [sym_parenthesized_expression] = STATE(110),
    [sym_binary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_for_statement] = STATE(219),
    [sym_while_statement] = STATE(219),
    [sym_if_statement] = STATE(218),
    [sym__if_statement_no_block] = STATE(220),
    [sym__if_else_block] = STATE(220),
    [sym__if_else_no_block] = STATE(220),
    [sym__if_statement_block] = STATE(220),
    [sym_statement] = STATE(213),
    [sym_procedure_definition] = STATE(219),
    [sym_procedure_call] = STATE(219),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(353),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(15),
    [aux_sym_keyword_token9] = ACTIONS(17),
    [aux_sym_keyword_token10] = ACTIONS(19),
    [aux_sym_keyword_token11] = ACTIONS(21),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(23),
    [aux_sym_keyword_token15] = ACTIONS(25),
    [aux_sym_keyword_token16] = ACTIONS(27),
    [aux_sym_keyword_token17] = ACTIONS(29),
    [aux_sym_keyword_token18] = ACTIONS(31),
    [aux_sym_keyword_token19] = ACTIONS(33),
    [aux_sym_keyword_token20] = ACTIONS(35),
    [sym_record_type] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym__identifier_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_money] = ACTIONS(63),
    [sym_date] = ACTIONS(63),
    [sym_rate] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(69),
  },
  [47] = {
    [sym_keyword] = STATE(178),
    [sym_string_literal] = STATE(178),
    [sym__identifier] = STATE(202),
    [sym_identifier] = STATE(175),
    [sym__array_identifier] = STATE(156),
    [sym_include_statement] = STATE(172),
    [sym_database_field] = STATE(172),
    [sym_special_function] = STATE(178),
    [sym__datevalue] = STATE(171),
    [sym__rate] = STATE(171),
    [sym__money] = STATE(171),
    [sym__value] = STATE(171),
    [sym__format] = STATE(171),
    [sym__segment] = STATE(171),
    [sym__charactersearch] = STATE(171),
    [sym__length] = STATE(171),
    [sym__fileopen] = STATE(171),
    [sym__filereadline] = STATE(171),
    [sym_expression] = STATE(183),
    [sym_assignment_expression] = STATE(172),
    [sym__lhs_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(178),
    [sym_binary_expression] = STATE(172),
    [sym_primary_expression] = STATE(172),
    [sym_for_statement] = STATE(227),
    [sym_while_statement] = STATE(227),
    [sym_if_statement] = STATE(228),
    [sym__if_statement_no_block] = STATE(223),
    [sym__if_else_block] = STATE(223),
    [sym__if_else_no_block] = STATE(223),
    [sym__if_statement_block] = STATE(223),
    [sym_statement] = STATE(225),
    [sym_procedure_definition] = STATE(227),
    [sym_procedure_call] = STATE(227),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(355),
    [aux_sym_keyword_token5] = ACTIONS(85),
    [aux_sym_keyword_token6] = ACTIONS(85),
    [aux_sym_keyword_token7] = ACTIONS(85),
    [aux_sym_keyword_token8] = ACTIONS(89),
    [aux_sym_keyword_token9] = ACTIONS(91),
    [aux_sym_keyword_token10] = ACTIONS(93),
    [aux_sym_keyword_token11] = ACTIONS(95),
    [aux_sym_keyword_token12] = ACTIONS(85),
    [aux_sym_keyword_token13] = ACTIONS(85),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(99),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(103),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(107),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [sym_record_type] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym__identifier_token1] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_money] = ACTIONS(121),
    [sym_date] = ACTIONS(121),
    [sym_rate] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(127),
  },
  [48] = {
    [sym_keyword] = STATE(261),
    [sym_string_literal] = STATE(261),
    [sym__identifier] = STATE(233),
    [sym_identifier] = STATE(269),
    [sym__array_identifier] = STATE(235),
    [sym_include_statement] = STATE(259),
    [sym_database_field] = STATE(259),
    [sym_special_function] = STATE(261),
    [sym__datevalue] = STATE(249),
    [sym__rate] = STATE(249),
    [sym__money] = STATE(249),
    [sym__value] = STATE(249),
    [sym__format] = STATE(249),
    [sym__segment] = STATE(249),
    [sym__charactersearch] = STATE(249),
    [sym__length] = STATE(249),
    [sym__fileopen] = STATE(249),
    [sym__filereadline] = STATE(249),
    [sym_expression] = STATE(283),
    [sym_assignment_expression] = STATE(259),
    [sym__lhs_expression] = STATE(401),
    [sym_parenthesized_expression] = STATE(261),
    [sym_binary_expression] = STATE(259),
    [sym_primary_expression] = STATE(259),
    [aux_sym_keyword_token1] = ACTIONS(214),
    [aux_sym_keyword_token2] = ACTIONS(214),
    [aux_sym_keyword_token3] = ACTIONS(214),
    [aux_sym_keyword_token4] = ACTIONS(214),
    [aux_sym_keyword_token5] = ACTIONS(214),
    [aux_sym_keyword_token6] = ACTIONS(214),
    [aux_sym_keyword_token7] = ACTIONS(214),
    [aux_sym_keyword_token8] = ACTIONS(214),
    [aux_sym_keyword_token9] = ACTIONS(216),
    [aux_sym_keyword_token10] = ACTIONS(218),
    [aux_sym_keyword_token11] = ACTIONS(220),
    [aux_sym_keyword_token12] = ACTIONS(214),
    [aux_sym_keyword_token13] = ACTIONS(214),
    [aux_sym_keyword_token14] = ACTIONS(222),
    [aux_sym_keyword_token15] = ACTIONS(224),
    [aux_sym_keyword_token16] = ACTIONS(226),
    [aux_sym_keyword_token17] = ACTIONS(228),
    [aux_sym_keyword_token18] = ACTIONS(230),
    [aux_sym_keyword_token19] = ACTIONS(232),
    [aux_sym_keyword_token20] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [aux_sym__identifier_token1] = ACTIONS(242),
    [sym_number] = ACTIONS(244),
    [sym_money] = ACTIONS(246),
    [sym_date] = ACTIONS(246),
    [sym_rate] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_procedure_definition_token1] = ACTIONS(77),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 2,
      sym_special_keywords,
      aux_sym_source_file_repeat1,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(361), 21,
      aux_sym_special_keywords_token1,
      aux_sym_special_keywords_token2,
      aux_sym_special_keywords_token3,
      aux_sym_special_keywords_token4,
      aux_sym_special_keywords_token5,
      aux_sym_special_keywords_token6,
      aux_sym_special_keywords_token7,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token9,
      aux_sym_special_keywords_token10,
      aux_sym_special_keywords_token11,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token13,
      aux_sym_special_keywords_token14,
      aux_sym_special_keywords_token15,
      aux_sym_special_keywords_token16,
      aux_sym_special_keywords_token17,
      aux_sym_special_keywords_token18,
      aux_sym_special_keywords_token19,
      aux_sym_special_keywords_token20,
      aux_sym_special_keywords_token21,
    ACTIONS(359), 30,
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
      aux_sym_target_division_token1,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [74] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(366), 51,
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
      aux_sym_target_division_token1,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      aux_sym_special_keywords_token1,
      aux_sym_special_keywords_token2,
      aux_sym_special_keywords_token3,
      aux_sym_special_keywords_token4,
      aux_sym_special_keywords_token5,
      aux_sym_special_keywords_token6,
      aux_sym_special_keywords_token7,
      aux_sym_special_keywords_token8,
      aux_sym_special_keywords_token9,
      aux_sym_special_keywords_token10,
      aux_sym_special_keywords_token11,
      aux_sym_special_keywords_token12,
      aux_sym_special_keywords_token13,
      aux_sym_special_keywords_token14,
      aux_sym_special_keywords_token15,
      aux_sym_special_keywords_token16,
      aux_sym_special_keywords_token17,
      aux_sym_special_keywords_token18,
      aux_sym_special_keywords_token19,
      aux_sym_special_keywords_token20,
      aux_sym_special_keywords_token21,
  [142] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_keyword_token9,
    ACTIONS(93), 1,
      aux_sym_keyword_token10,
    ACTIONS(95), 1,
      aux_sym_keyword_token11,
    ACTIONS(97), 1,
      aux_sym_keyword_token14,
    ACTIONS(99), 1,
      aux_sym_keyword_token15,
    ACTIONS(101), 1,
      aux_sym_keyword_token16,
    ACTIONS(103), 1,
      aux_sym_keyword_token17,
    ACTIONS(105), 1,
      aux_sym_keyword_token18,
    ACTIONS(107), 1,
      aux_sym_keyword_token19,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      sym_record_type,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym__identifier_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(123), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym__array_identifier,
    STATE(175), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
    STATE(205), 1,
      sym_expression,
    STATE(420), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(178), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(172), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(85), 10,
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
    STATE(171), 10,
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
  [251] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(291), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [360] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(256), 1,
      sym_expression,
    STATE(269), 1,
      sym_identifier,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [469] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(255), 1,
      sym_expression,
    STATE(269), 1,
      sym_identifier,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [578] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(254), 1,
      sym_expression,
    STATE(269), 1,
      sym_identifier,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [687] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(253), 1,
      sym_expression,
    STATE(269), 1,
      sym_identifier,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [796] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(252), 1,
      sym_expression,
    STATE(269), 1,
      sym_identifier,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [905] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(251), 1,
      sym_expression,
    STATE(269), 1,
      sym_identifier,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1014] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(280), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1123] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(278), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1232] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(293), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1341] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(294), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1450] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(295), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1559] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(288), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1668] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(282), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1777] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_keyword_token9,
    ACTIONS(93), 1,
      aux_sym_keyword_token10,
    ACTIONS(95), 1,
      aux_sym_keyword_token11,
    ACTIONS(97), 1,
      aux_sym_keyword_token14,
    ACTIONS(99), 1,
      aux_sym_keyword_token15,
    ACTIONS(101), 1,
      aux_sym_keyword_token16,
    ACTIONS(103), 1,
      aux_sym_keyword_token17,
    ACTIONS(105), 1,
      aux_sym_keyword_token18,
    ACTIONS(107), 1,
      aux_sym_keyword_token19,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      sym_record_type,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym__identifier_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      aux_sym_keyword_token4,
    STATE(156), 1,
      sym__array_identifier,
    STATE(173), 1,
      sym_expression,
    STATE(175), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
    STATE(420), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(178), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(172), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(85), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(171), 10,
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
  [1888] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(281), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [1997] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_keyword_token9,
    ACTIONS(93), 1,
      aux_sym_keyword_token10,
    ACTIONS(95), 1,
      aux_sym_keyword_token11,
    ACTIONS(97), 1,
      aux_sym_keyword_token14,
    ACTIONS(99), 1,
      aux_sym_keyword_token15,
    ACTIONS(101), 1,
      aux_sym_keyword_token16,
    ACTIONS(103), 1,
      aux_sym_keyword_token17,
    ACTIONS(105), 1,
      aux_sym_keyword_token18,
    ACTIONS(107), 1,
      aux_sym_keyword_token19,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      sym_record_type,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym__identifier_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(123), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym__array_identifier,
    STATE(158), 1,
      sym_expression,
    STATE(175), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
    STATE(420), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(178), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(172), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(85), 10,
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
    STATE(171), 10,
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
  [2106] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(289), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [2215] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(297), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [2324] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(276), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [2433] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_keyword_token9,
    ACTIONS(93), 1,
      aux_sym_keyword_token10,
    ACTIONS(95), 1,
      aux_sym_keyword_token11,
    ACTIONS(97), 1,
      aux_sym_keyword_token14,
    ACTIONS(99), 1,
      aux_sym_keyword_token15,
    ACTIONS(101), 1,
      aux_sym_keyword_token16,
    ACTIONS(103), 1,
      aux_sym_keyword_token17,
    ACTIONS(105), 1,
      aux_sym_keyword_token18,
    ACTIONS(107), 1,
      aux_sym_keyword_token19,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      sym_record_type,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym__identifier_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(123), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym__array_identifier,
    STATE(157), 1,
      sym_expression,
    STATE(175), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
    STATE(420), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(178), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(172), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(85), 10,
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
    STATE(171), 10,
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
  [2542] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(286), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [2651] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(287), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [2760] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_keyword_token9,
    ACTIONS(93), 1,
      aux_sym_keyword_token10,
    ACTIONS(95), 1,
      aux_sym_keyword_token11,
    ACTIONS(97), 1,
      aux_sym_keyword_token14,
    ACTIONS(99), 1,
      aux_sym_keyword_token15,
    ACTIONS(101), 1,
      aux_sym_keyword_token16,
    ACTIONS(103), 1,
      aux_sym_keyword_token17,
    ACTIONS(105), 1,
      aux_sym_keyword_token18,
    ACTIONS(107), 1,
      aux_sym_keyword_token19,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      sym_record_type,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym__identifier_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(123), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym__array_identifier,
    STATE(164), 1,
      sym_expression,
    STATE(175), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
    STATE(420), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(178), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(172), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(85), 10,
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
    STATE(171), 10,
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
  [2869] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(296), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [2978] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(274), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [3087] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_keyword_token9,
    ACTIONS(19), 1,
      aux_sym_keyword_token10,
    ACTIONS(21), 1,
      aux_sym_keyword_token11,
    ACTIONS(23), 1,
      aux_sym_keyword_token14,
    ACTIONS(25), 1,
      aux_sym_keyword_token15,
    ACTIONS(27), 1,
      aux_sym_keyword_token16,
    ACTIONS(29), 1,
      aux_sym_keyword_token17,
    ACTIONS(31), 1,
      aux_sym_keyword_token18,
    ACTIONS(33), 1,
      aux_sym_keyword_token19,
    ACTIONS(35), 1,
      aux_sym_keyword_token20,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(370), 1,
      aux_sym_keyword_token4,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(138), 1,
      sym_expression,
    STATE(152), 1,
      sym_identifier,
    STATE(406), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(110), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(149), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 9,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
    STATE(143), 10,
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
  [3198] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(290), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [3307] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(257), 1,
      sym_expression,
    STATE(269), 1,
      sym_identifier,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [3416] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(292), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [3525] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_keyword_token9,
    ACTIONS(93), 1,
      aux_sym_keyword_token10,
    ACTIONS(95), 1,
      aux_sym_keyword_token11,
    ACTIONS(97), 1,
      aux_sym_keyword_token14,
    ACTIONS(99), 1,
      aux_sym_keyword_token15,
    ACTIONS(101), 1,
      aux_sym_keyword_token16,
    ACTIONS(103), 1,
      aux_sym_keyword_token17,
    ACTIONS(105), 1,
      aux_sym_keyword_token18,
    ACTIONS(107), 1,
      aux_sym_keyword_token19,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      sym_record_type,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym__identifier_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(123), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym__array_identifier,
    STATE(165), 1,
      sym_expression,
    STATE(175), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
    STATE(420), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(178), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(172), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(85), 10,
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
    STATE(171), 10,
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
  [3634] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_keyword_token9,
    ACTIONS(19), 1,
      aux_sym_keyword_token10,
    ACTIONS(21), 1,
      aux_sym_keyword_token11,
    ACTIONS(23), 1,
      aux_sym_keyword_token14,
    ACTIONS(25), 1,
      aux_sym_keyword_token15,
    ACTIONS(27), 1,
      aux_sym_keyword_token16,
    ACTIONS(29), 1,
      aux_sym_keyword_token17,
    ACTIONS(31), 1,
      aux_sym_keyword_token18,
    ACTIONS(33), 1,
      aux_sym_keyword_token19,
    ACTIONS(35), 1,
      aux_sym_keyword_token20,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(125), 1,
      sym_expression,
    STATE(152), 1,
      sym_identifier,
    STATE(406), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(110), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(149), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 10,
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
    STATE(143), 10,
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
  [3743] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_keyword_token9,
    ACTIONS(19), 1,
      aux_sym_keyword_token10,
    ACTIONS(21), 1,
      aux_sym_keyword_token11,
    ACTIONS(23), 1,
      aux_sym_keyword_token14,
    ACTIONS(25), 1,
      aux_sym_keyword_token15,
    ACTIONS(27), 1,
      aux_sym_keyword_token16,
    ACTIONS(29), 1,
      aux_sym_keyword_token17,
    ACTIONS(31), 1,
      aux_sym_keyword_token18,
    ACTIONS(33), 1,
      aux_sym_keyword_token19,
    ACTIONS(35), 1,
      aux_sym_keyword_token20,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(126), 1,
      sym_expression,
    STATE(152), 1,
      sym_identifier,
    STATE(406), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(110), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(149), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 10,
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
    STATE(143), 10,
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
  [3852] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_keyword_token9,
    ACTIONS(19), 1,
      aux_sym_keyword_token10,
    ACTIONS(21), 1,
      aux_sym_keyword_token11,
    ACTIONS(23), 1,
      aux_sym_keyword_token14,
    ACTIONS(25), 1,
      aux_sym_keyword_token15,
    ACTIONS(27), 1,
      aux_sym_keyword_token16,
    ACTIONS(29), 1,
      aux_sym_keyword_token17,
    ACTIONS(31), 1,
      aux_sym_keyword_token18,
    ACTIONS(33), 1,
      aux_sym_keyword_token19,
    ACTIONS(35), 1,
      aux_sym_keyword_token20,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(127), 1,
      sym_expression,
    STATE(152), 1,
      sym_identifier,
    STATE(406), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(110), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(149), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 10,
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
    STATE(143), 10,
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
  [3961] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_keyword_token9,
    ACTIONS(19), 1,
      aux_sym_keyword_token10,
    ACTIONS(21), 1,
      aux_sym_keyword_token11,
    ACTIONS(23), 1,
      aux_sym_keyword_token14,
    ACTIONS(25), 1,
      aux_sym_keyword_token15,
    ACTIONS(27), 1,
      aux_sym_keyword_token16,
    ACTIONS(29), 1,
      aux_sym_keyword_token17,
    ACTIONS(31), 1,
      aux_sym_keyword_token18,
    ACTIONS(33), 1,
      aux_sym_keyword_token19,
    ACTIONS(35), 1,
      aux_sym_keyword_token20,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(128), 1,
      sym_expression,
    STATE(152), 1,
      sym_identifier,
    STATE(406), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(110), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(149), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 10,
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
    STATE(143), 10,
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
  [4070] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_keyword_token9,
    ACTIONS(19), 1,
      aux_sym_keyword_token10,
    ACTIONS(21), 1,
      aux_sym_keyword_token11,
    ACTIONS(23), 1,
      aux_sym_keyword_token14,
    ACTIONS(25), 1,
      aux_sym_keyword_token15,
    ACTIONS(27), 1,
      aux_sym_keyword_token16,
    ACTIONS(29), 1,
      aux_sym_keyword_token17,
    ACTIONS(31), 1,
      aux_sym_keyword_token18,
    ACTIONS(33), 1,
      aux_sym_keyword_token19,
    ACTIONS(35), 1,
      aux_sym_keyword_token20,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(129), 1,
      sym_expression,
    STATE(152), 1,
      sym_identifier,
    STATE(406), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(110), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(149), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 10,
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
    STATE(143), 10,
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
  [4179] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_keyword_token9,
    ACTIONS(19), 1,
      aux_sym_keyword_token10,
    ACTIONS(21), 1,
      aux_sym_keyword_token11,
    ACTIONS(23), 1,
      aux_sym_keyword_token14,
    ACTIONS(25), 1,
      aux_sym_keyword_token15,
    ACTIONS(27), 1,
      aux_sym_keyword_token16,
    ACTIONS(29), 1,
      aux_sym_keyword_token17,
    ACTIONS(31), 1,
      aux_sym_keyword_token18,
    ACTIONS(33), 1,
      aux_sym_keyword_token19,
    ACTIONS(35), 1,
      aux_sym_keyword_token20,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(130), 1,
      sym_expression,
    STATE(152), 1,
      sym_identifier,
    STATE(406), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(110), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(149), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 10,
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
    STATE(143), 10,
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
  [4288] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_keyword_token9,
    ACTIONS(19), 1,
      aux_sym_keyword_token10,
    ACTIONS(21), 1,
      aux_sym_keyword_token11,
    ACTIONS(23), 1,
      aux_sym_keyword_token14,
    ACTIONS(25), 1,
      aux_sym_keyword_token15,
    ACTIONS(27), 1,
      aux_sym_keyword_token16,
    ACTIONS(29), 1,
      aux_sym_keyword_token17,
    ACTIONS(31), 1,
      aux_sym_keyword_token18,
    ACTIONS(33), 1,
      aux_sym_keyword_token19,
    ACTIONS(35), 1,
      aux_sym_keyword_token20,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(131), 1,
      sym_expression,
    STATE(152), 1,
      sym_identifier,
    STATE(406), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(110), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(149), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 10,
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
    STATE(143), 10,
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
  [4397] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_keyword_token9,
    ACTIONS(93), 1,
      aux_sym_keyword_token10,
    ACTIONS(95), 1,
      aux_sym_keyword_token11,
    ACTIONS(97), 1,
      aux_sym_keyword_token14,
    ACTIONS(99), 1,
      aux_sym_keyword_token15,
    ACTIONS(101), 1,
      aux_sym_keyword_token16,
    ACTIONS(103), 1,
      aux_sym_keyword_token17,
    ACTIONS(105), 1,
      aux_sym_keyword_token18,
    ACTIONS(107), 1,
      aux_sym_keyword_token19,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      sym_record_type,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym__identifier_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(123), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym__array_identifier,
    STATE(167), 1,
      sym_expression,
    STATE(175), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
    STATE(420), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(178), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(172), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(85), 10,
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
    STATE(171), 10,
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
  [4506] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(275), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [4615] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_keyword_token9,
    ACTIONS(93), 1,
      aux_sym_keyword_token10,
    ACTIONS(95), 1,
      aux_sym_keyword_token11,
    ACTIONS(97), 1,
      aux_sym_keyword_token14,
    ACTIONS(99), 1,
      aux_sym_keyword_token15,
    ACTIONS(101), 1,
      aux_sym_keyword_token16,
    ACTIONS(103), 1,
      aux_sym_keyword_token17,
    ACTIONS(105), 1,
      aux_sym_keyword_token18,
    ACTIONS(107), 1,
      aux_sym_keyword_token19,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      sym_record_type,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym__identifier_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(123), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym__array_identifier,
    STATE(166), 1,
      sym_expression,
    STATE(175), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
    STATE(420), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(178), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(172), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(85), 10,
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
    STATE(171), 10,
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
  [4724] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(285), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [4833] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_keyword_token9,
    ACTIONS(218), 1,
      aux_sym_keyword_token10,
    ACTIONS(220), 1,
      aux_sym_keyword_token11,
    ACTIONS(222), 1,
      aux_sym_keyword_token14,
    ACTIONS(224), 1,
      aux_sym_keyword_token15,
    ACTIONS(226), 1,
      aux_sym_keyword_token16,
    ACTIONS(228), 1,
      aux_sym_keyword_token17,
    ACTIONS(230), 1,
      aux_sym_keyword_token18,
    ACTIONS(232), 1,
      aux_sym_keyword_token19,
    ACTIONS(234), 1,
      aux_sym_keyword_token20,
    ACTIONS(236), 1,
      sym_record_type,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      aux_sym__identifier_token1,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(269), 1,
      sym_identifier,
    STATE(284), 1,
      sym_expression,
    STATE(401), 1,
      sym__lhs_expression,
    ACTIONS(246), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(261), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(259), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(214), 10,
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
    STATE(249), 10,
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
  [4942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(374), 29,
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
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [5002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(378), 29,
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
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [5062] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      aux_sym_define_division_token1,
    ACTIONS(387), 1,
      aux_sym_setup_division_token1,
    ACTIONS(390), 1,
      aux_sym_select_division_token1,
    ACTIONS(393), 1,
      aux_sym_sort_division_token1,
    ACTIONS(396), 1,
      aux_sym_total_division_token1,
    STATE(97), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(382), 24,
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
      aux_sym_print_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [5127] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__identifier_token1,
    STATE(216), 1,
      sym__identifier,
    STATE(217), 1,
      sym__array_identifier,
    STATE(222), 1,
      sym_identifier,
    ACTIONS(77), 13,
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
    ACTIONS(125), 27,
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
      sym_record_type,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5187] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(394), 1,
      sym_identifier,
    ACTIONS(77), 13,
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
    ACTIONS(125), 27,
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
      sym_record_type,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 14,
      ts_builtin_sym_end,
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
    ACTIONS(403), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 15,
      ts_builtin_sym_end,
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
    ACTIONS(403), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 15,
      ts_builtin_sym_end,
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
    ACTIONS(409), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 15,
      ts_builtin_sym_end,
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
    ACTIONS(413), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 15,
      ts_builtin_sym_end,
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
    ACTIONS(417), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5504] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(457), 1,
      sym_identifier,
    ACTIONS(77), 12,
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
    ACTIONS(125), 27,
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
      sym_record_type,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5563] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym__identifier_token1,
    STATE(229), 1,
      sym__identifier,
    STATE(230), 1,
      sym_identifier,
    STATE(231), 1,
      sym__array_identifier,
    ACTIONS(77), 12,
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
    ACTIONS(125), 27,
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
      sym_record_type,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
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
    ACTIONS(423), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 13,
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
    ACTIONS(427), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(429), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(431), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [5774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 13,
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
    ACTIONS(435), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 13,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 13,
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
    ACTIONS(441), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(449), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(451), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [6178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 13,
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
    ACTIONS(459), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 13,
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
    ACTIONS(463), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 13,
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
    ACTIONS(467), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(469), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(471), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [6480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(473), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(475), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [6533] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_GT,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(481), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 10,
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
    ACTIONS(479), 25,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [6590] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_GT,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(481), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(489), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(477), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(479), 25,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [6649] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_GT,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(491), 1,
      anon_sym_AND,
    ACTIONS(481), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(489), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(477), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(479), 24,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [6710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 11,
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
    ACTIONS(479), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 13,
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
    ACTIONS(479), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 11,
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
    ACTIONS(479), 26,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [6863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 13,
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
    ACTIONS(495), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
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
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7016] = 3,
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
    ACTIONS(505), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(507), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(509), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7118] = 3,
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
    ACTIONS(513), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
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
    ACTIONS(517), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7220] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_GT,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(491), 1,
      anon_sym_AND,
    ACTIONS(523), 1,
      anon_sym_OR,
    ACTIONS(481), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(489), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(519), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(521), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(525), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
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
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7438] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_GT,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(491), 1,
      anon_sym_AND,
    ACTIONS(523), 1,
      anon_sym_OR,
    ACTIONS(481), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(489), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(533), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(535), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 13,
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
    ACTIONS(539), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 13,
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
    ACTIONS(543), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 13,
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
    ACTIONS(547), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 13,
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
    ACTIONS(551), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 13,
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
    ACTIONS(555), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 13,
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
    ACTIONS(559), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 13,
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
    ACTIONS(563), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(565), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(567), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(569), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(571), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(433), 12,
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
    ACTIONS(435), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(577), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(579), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [8105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 12,
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
    ACTIONS(559), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 12,
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
    ACTIONS(403), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8201] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_GT,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(581), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(583), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(479), 25,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [8259] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_GT,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(583), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(479), 25,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [8315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 12,
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
    ACTIONS(417), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 12,
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
    ACTIONS(467), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 12,
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
    ACTIONS(423), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 12,
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
    ACTIONS(413), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(469), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(471), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [8559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 10,
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
    ACTIONS(479), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 12,
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
    ACTIONS(479), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 10,
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
    ACTIONS(479), 26,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [8709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 12,
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
    ACTIONS(495), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 12,
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
    ACTIONS(543), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(507), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(509), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [8857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 12,
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
    ACTIONS(547), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 12,
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
    ACTIONS(539), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 12,
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
    ACTIONS(563), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9001] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_GT,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(591), 1,
      anon_sym_AND,
    ACTIONS(593), 1,
      anon_sym_OR,
    ACTIONS(581), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(583), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(519), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(521), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9063] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(577), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(579), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(433), 11,
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
    ACTIONS(435), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9165] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(429), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(431), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 12,
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
    ACTIONS(551), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 12,
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
    ACTIONS(435), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 12,
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
    ACTIONS(555), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9511] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_GT,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(591), 1,
      anon_sym_AND,
    ACTIONS(593), 1,
      anon_sym_OR,
    ACTIONS(581), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(583), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(533), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(535), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(569), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(571), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(565), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(567), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(525), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
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
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
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
    ACTIONS(517), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9831] = 3,
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
    ACTIONS(513), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 12,
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
    ACTIONS(409), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10127] = 3,
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
    ACTIONS(505), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 12,
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
    ACTIONS(463), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 11,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 12,
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
    ACTIONS(459), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 12,
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
    ACTIONS(441), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 12,
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
    ACTIONS(427), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 11,
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
    ACTIONS(403), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(473), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(475), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 12,
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
    ACTIONS(125), 28,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10617] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_GT,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(591), 1,
      anon_sym_AND,
    ACTIONS(581), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(583), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(585), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(479), 24,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [10677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(449), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(451), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(619), 29,
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
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(623), 29,
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
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(627), 29,
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
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(631), 29,
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
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(635), 29,
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
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(639), 29,
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
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(643), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(413), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(409), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(403), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(403), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      aux_sym_keyword_token6,
    ACTIONS(533), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(535), 22,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(535), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(651), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(655), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(659), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(651), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
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
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(643), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(409), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(535), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_keyword_token6,
    ACTIONS(533), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(535), 22,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 6,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(403), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(659), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(403), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(413), 23,
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
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 15,
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
  [11810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LT,
    ACTIONS(407), 15,
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
  [11834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(401), 15,
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
  [11858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LT,
    ACTIONS(411), 15,
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
  [11882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LT,
    ACTIONS(415), 14,
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
  [11905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [11930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [11955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [11980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [12005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [12030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [12055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [12080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [12105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [12130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 13,
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
  [12155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LT,
    ACTIONS(421), 13,
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
  [12177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LT,
    ACTIONS(537), 13,
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
  [12199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LT,
    ACTIONS(425), 13,
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
  [12221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 8,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
  [12249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(477), 6,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [12279] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(477), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_OR,
  [12311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LT,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 11,
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
  [12335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LT,
    ACTIONS(477), 13,
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
  [12357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LT,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(477), 9,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
      anon_sym_GT,
  [12383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LT,
    ACTIONS(493), 13,
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
  [12405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LT,
    ACTIONS(439), 13,
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
  [12427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LT,
    ACTIONS(561), 13,
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
  [12449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LT,
    ACTIONS(465), 13,
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
  [12471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LT,
    ACTIONS(433), 13,
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
  [12493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(77), 13,
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
  [12515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LT,
    ACTIONS(541), 13,
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
  [12537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_LT,
    ACTIONS(545), 13,
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
  [12559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LT,
    ACTIONS(549), 13,
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
  [12581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(553), 13,
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
  [12603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LT,
    ACTIONS(557), 13,
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
  [12625] = 3,
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
  [12647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LT,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(433), 12,
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
  [12671] = 3,
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
  [12693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LT,
    ACTIONS(461), 13,
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
  [12715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LT,
    ACTIONS(457), 13,
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
  [12737] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(699), 1,
      aux_sym_keyword_token4,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [12768] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [12799] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [12830] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [12861] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(709), 1,
      aux_sym_keyword_token4,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [12892] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [12923] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(713), 1,
      aux_sym_keyword_token7,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [12954] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [12985] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13016] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13047] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(721), 1,
      aux_sym_keyword_token7,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13078] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13109] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13140] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13171] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13202] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13233] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13264] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13295] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13326] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13357] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13388] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13419] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13450] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13481] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      anon_sym_AND,
    ACTIONS(701), 1,
      anon_sym_OR,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(687), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [13512] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(751), 1,
      aux_sym_keyword_token5,
    ACTIONS(753), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(410), 1,
      sym_identifier,
    STATE(299), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(380), 2,
      sym_variable_declaration,
      sym_include_statement,
  [13542] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(753), 1,
      anon_sym_POUND,
    ACTIONS(755), 1,
      aux_sym_keyword_token5,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(410), 1,
      sym_identifier,
    STATE(300), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(380), 2,
      sym_variable_declaration,
      sym_include_statement,
  [13572] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_keyword_token5,
    ACTIONS(759), 1,
      aux_sym__identifier_token1,
    ACTIONS(762), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(410), 1,
      sym_identifier,
    STATE(300), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(380), 2,
      sym_variable_declaration,
      sym_include_statement,
  [13602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_DQUOTE,
    STATE(346), 1,
      sym_data_type,
    STATE(360), 1,
      sym_string_literal,
    ACTIONS(765), 7,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_data_type_token1,
      aux_sym_data_type_token2,
      aux_sym_data_type_token3,
      aux_sym_data_type_token4,
      aux_sym_data_type_token5,
  [13624] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(769), 1,
      sym_number,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    ACTIONS(771), 2,
      sym_money,
      sym_rate,
    STATE(431), 2,
      sym_identifier,
      sym_database_field,
  [13651] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(773), 1,
      sym_number,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    ACTIONS(775), 2,
      sym_money,
      sym_rate,
    STATE(460), 2,
      sym_identifier,
      sym_database_field,
  [13678] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_record_type,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(777), 1,
      sym_number,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    ACTIONS(779), 2,
      sym_money,
      sym_rate,
    STATE(445), 2,
      sym_identifier,
      sym_database_field,
  [13705] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(393), 2,
      sym_string_literal,
      sym_identifier,
  [13725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(456), 2,
      sym_string_literal,
      sym_identifier,
  [13745] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(429), 2,
      sym_string_literal,
      sym_identifier,
  [13765] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(471), 2,
      sym_string_literal,
      sym_identifier,
  [13785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(432), 2,
      sym_string_literal,
      sym_identifier,
  [13805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(436), 2,
      sym_string_literal,
      sym_identifier,
  [13825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(440), 2,
      sym_string_literal,
      sym_identifier,
  [13845] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(438), 2,
      sym_string_literal,
      sym_identifier,
  [13865] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(416), 2,
      sym_string_literal,
      sym_identifier,
  [13885] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(451), 2,
      sym_string_literal,
      sym_identifier,
  [13905] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(463), 2,
      sym_string_literal,
      sym_identifier,
  [13925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(452), 2,
      sym_string_literal,
      sym_identifier,
  [13945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(462), 2,
      sym_string_literal,
      sym_identifier,
  [13965] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(468), 2,
      sym_string_literal,
      sym_identifier,
  [13985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(444), 2,
      sym_string_literal,
      sym_identifier,
  [14005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(453), 2,
      sym_string_literal,
      sym_identifier,
  [14025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(402), 2,
      sym_string_literal,
      sym_identifier,
  [14045] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(446), 2,
      sym_string_literal,
      sym_identifier,
  [14065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(447), 2,
      sym_string_literal,
      sym_identifier,
  [14085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(454), 2,
      sym_string_literal,
      sym_identifier,
  [14105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(455), 2,
      sym_string_literal,
      sym_identifier,
  [14125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(461), 2,
      sym_string_literal,
      sym_identifier,
  [14145] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(428), 2,
      sym_string_literal,
      sym_identifier,
  [14165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(464), 2,
      sym_string_literal,
      sym_identifier,
  [14185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_DQUOTE,
    ACTIONS(785), 1,
      aux_sym__identifier_token1,
    STATE(229), 1,
      sym__identifier,
    STATE(231), 1,
      sym__array_identifier,
    STATE(40), 2,
      sym_string_literal,
      sym_identifier,
  [14205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(465), 2,
      sym_string_literal,
      sym_identifier,
  [14225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(433), 2,
      sym_string_literal,
      sym_identifier,
  [14245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(434), 2,
      sym_string_literal,
      sym_identifier,
  [14265] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(435), 2,
      sym_string_literal,
      sym_identifier,
  [14285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(787), 1,
      aux_sym__identifier_token1,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(470), 2,
      sym_string_literal,
      sym_identifier,
  [14305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(422), 2,
      sym_string_literal,
      sym_identifier,
  [14325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(430), 2,
      sym_string_literal,
      sym_identifier,
  [14345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(395), 2,
      sym_string_literal,
      sym_identifier,
  [14365] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(392), 2,
      sym_string_literal,
      sym_identifier,
  [14385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(415), 2,
      sym_string_literal,
      sym_identifier,
  [14405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(427), 2,
      sym_string_literal,
      sym_identifier,
  [14425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(411), 2,
      sym_string_literal,
      sym_identifier,
  [14445] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(390), 2,
      sym_string_literal,
      sym_identifier,
  [14465] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(449), 2,
      sym_string_literal,
      sym_identifier,
  [14485] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(459), 2,
      sym_string_literal,
      sym_identifier,
  [14505] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(469), 2,
      sym_string_literal,
      sym_identifier,
  [14525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      aux_sym_array_type_token1,
    ACTIONS(793), 1,
      anon_sym_POUND,
    STATE(364), 1,
      sym_array_type,
    ACTIONS(789), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [14542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym__identifier_token1,
    ACTIONS(795), 1,
      sym_number,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(408), 1,
      sym_identifier,
  [14561] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym__identifier_token1,
    ACTIONS(797), 1,
      sym_number,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(407), 1,
      sym_identifier,
  [14580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym__identifier_token1,
    ACTIONS(799), 1,
      sym_number,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(466), 1,
      sym_identifier,
  [14599] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym__identifier_token1,
    ACTIONS(801), 1,
      sym_number,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(441), 1,
      sym_identifier,
  [14618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym__identifier_token1,
    STATE(233), 1,
      sym__identifier,
    STATE(235), 1,
      sym__array_identifier,
    STATE(248), 1,
      sym_identifier,
  [14634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym__identifier_token1,
    STATE(41), 1,
      sym_identifier,
    STATE(229), 1,
      sym__identifier,
    STATE(231), 1,
      sym__array_identifier,
  [14650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym__identifier_token1,
    STATE(36), 1,
      sym_identifier,
    STATE(229), 1,
      sym__identifier,
    STATE(231), 1,
      sym__array_identifier,
  [14666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_POUND,
    ACTIONS(803), 3,
      aux_sym_keyword_token5,
      aux_sym_array_type_token1,
      aux_sym__identifier_token1,
  [14678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(101), 1,
      sym__array_identifier,
    STATE(107), 1,
      sym_identifier,
  [14694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      aux_sym__identifier_token1,
    STATE(156), 1,
      sym__array_identifier,
    STATE(161), 1,
      sym_identifier,
    STATE(202), 1,
      sym__identifier,
  [14710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_array_type_repeat1,
  [14723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(376), 1,
      sym__identifier,
    ACTIONS(813), 2,
      aux_sym__identifier_token1,
      sym_number,
  [14734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym__array_identifier_repeat1,
  [14747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_POUND,
    ACTIONS(789), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [14758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(359), 1,
      sym__identifier,
    ACTIONS(819), 2,
      aux_sym__identifier_token1,
      sym_number,
  [14769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(388), 1,
      sym__identifier,
    ACTIONS(821), 2,
      aux_sym__identifier_token1,
      sym_number,
  [14780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym__array_identifier_repeat1,
  [14793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_POUND,
    ACTIONS(825), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [14804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym__array_identifier_repeat1,
  [14817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(381), 1,
      sym__identifier,
    ACTIONS(834), 2,
      aux_sym__identifier_token1,
      sym_number,
  [14828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(375), 1,
      sym__identifier,
    ACTIONS(836), 2,
      aux_sym__identifier_token1,
      sym_number,
  [14839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_array_type_repeat1,
  [14852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_POUND,
    ACTIONS(840), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [14863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(378), 1,
      sym__identifier,
    ACTIONS(844), 2,
      aux_sym__identifier_token1,
      sym_number,
  [14874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym__array_identifier_repeat1,
  [14887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_POUND,
    ACTIONS(848), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [14898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_POUND,
    ACTIONS(427), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [14909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_array_type_repeat1,
  [14922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym__array_identifier_repeat1,
  [14935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym__array_identifier_repeat1,
  [14948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym__array_identifier_repeat1,
  [14961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym__array_identifier_repeat1,
  [14974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym__array_identifier_repeat1,
  [14987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_POUND,
    ACTIONS(867), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [14998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym__array_identifier_repeat1,
  [15011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym__array_identifier_repeat1,
  [15024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_POUND,
    ACTIONS(417), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [15035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      sym_string_literal,
  [15053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_string_literal,
  [15063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(250), 1,
      sym_string_literal,
  [15073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym_string_literal,
  [15091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
  [15098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COLON,
  [15105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [15112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [15119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_EQ,
  [15126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
  [15133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
  [15140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_DQUOTE,
  [15147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym_keyword_token5,
  [15154] = 2,
    ACTIONS(893), 1,
      aux_sym_string_literal_token1,
    ACTIONS(895), 1,
      sym_comment,
  [15161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym_include_statement_token1,
  [15168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_EQ,
  [15175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_COMMA,
  [15182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      aux_sym_keyword_token5,
  [15189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_EQ,
  [15196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      ts_builtin_sym_end,
  [15203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_EQ,
  [15210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      aux_sym_keyword_token4,
  [15217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      aux_sym_keyword_token4,
  [15224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_record_type,
  [15231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_EQ,
  [15238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [15245] = 2,
    ACTIONS(895), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym_string_literal_token1,
  [15252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      aux_sym_include_statement_token1,
  [15259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COLON,
  [15266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_COMMA,
  [15273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
  [15280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
  [15287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      aux_sym_include_statement_token1,
  [15294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_number,
  [15301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_EQ,
  [15308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym_number,
  [15315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
  [15322] = 2,
    ACTIONS(895), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_string_literal_token1,
  [15329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      aux_sym_include_statement_token1,
  [15336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COLON,
  [15343] = 2,
    ACTIONS(895), 1,
      sym_comment,
    ACTIONS(949), 1,
      aux_sym_string_literal_token1,
  [15350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [15357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
  [15364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COMMA,
  [15371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
  [15378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [15385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
  [15392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_COMMA,
  [15399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_COMMA,
  [15406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
  [15413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_COMMA,
  [15420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_EQ,
  [15427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_COMMA,
  [15434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_EQ,
  [15441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [15448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      aux_sym_for_statement_token1,
  [15455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
  [15462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_LPAREN,
  [15469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [15476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
  [15483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_COMMA,
  [15490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_COMMA,
  [15497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
  [15504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
  [15511] = 2,
    ACTIONS(895), 1,
      sym_comment,
    ACTIONS(997), 1,
      aux_sym_string_literal_token1,
  [15518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_COMMA,
  [15525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
  [15532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
  [15539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
  [15546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
  [15553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
  [15560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_EQ,
  [15567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      aux_sym_print_division_token2,
  [15574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
  [15581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
  [15588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
  [15595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
  [15602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
  [15609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
  [15616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
  [15623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      aux_sym_for_statement_token1,
  [15630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      aux_sym_keyword_token5,
  [15637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
  [15644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
  [15651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      aux_sym_keyword_token5,
  [15658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(49)] = 0,
  [SMALL_STATE(50)] = 74,
  [SMALL_STATE(51)] = 142,
  [SMALL_STATE(52)] = 251,
  [SMALL_STATE(53)] = 360,
  [SMALL_STATE(54)] = 469,
  [SMALL_STATE(55)] = 578,
  [SMALL_STATE(56)] = 687,
  [SMALL_STATE(57)] = 796,
  [SMALL_STATE(58)] = 905,
  [SMALL_STATE(59)] = 1014,
  [SMALL_STATE(60)] = 1123,
  [SMALL_STATE(61)] = 1232,
  [SMALL_STATE(62)] = 1341,
  [SMALL_STATE(63)] = 1450,
  [SMALL_STATE(64)] = 1559,
  [SMALL_STATE(65)] = 1668,
  [SMALL_STATE(66)] = 1777,
  [SMALL_STATE(67)] = 1888,
  [SMALL_STATE(68)] = 1997,
  [SMALL_STATE(69)] = 2106,
  [SMALL_STATE(70)] = 2215,
  [SMALL_STATE(71)] = 2324,
  [SMALL_STATE(72)] = 2433,
  [SMALL_STATE(73)] = 2542,
  [SMALL_STATE(74)] = 2651,
  [SMALL_STATE(75)] = 2760,
  [SMALL_STATE(76)] = 2869,
  [SMALL_STATE(77)] = 2978,
  [SMALL_STATE(78)] = 3087,
  [SMALL_STATE(79)] = 3198,
  [SMALL_STATE(80)] = 3307,
  [SMALL_STATE(81)] = 3416,
  [SMALL_STATE(82)] = 3525,
  [SMALL_STATE(83)] = 3634,
  [SMALL_STATE(84)] = 3743,
  [SMALL_STATE(85)] = 3852,
  [SMALL_STATE(86)] = 3961,
  [SMALL_STATE(87)] = 4070,
  [SMALL_STATE(88)] = 4179,
  [SMALL_STATE(89)] = 4288,
  [SMALL_STATE(90)] = 4397,
  [SMALL_STATE(91)] = 4506,
  [SMALL_STATE(92)] = 4615,
  [SMALL_STATE(93)] = 4724,
  [SMALL_STATE(94)] = 4833,
  [SMALL_STATE(95)] = 4942,
  [SMALL_STATE(96)] = 5002,
  [SMALL_STATE(97)] = 5062,
  [SMALL_STATE(98)] = 5127,
  [SMALL_STATE(99)] = 5187,
  [SMALL_STATE(100)] = 5247,
  [SMALL_STATE(101)] = 5300,
  [SMALL_STATE(102)] = 5351,
  [SMALL_STATE(103)] = 5402,
  [SMALL_STATE(104)] = 5453,
  [SMALL_STATE(105)] = 5504,
  [SMALL_STATE(106)] = 5563,
  [SMALL_STATE(107)] = 5622,
  [SMALL_STATE(108)] = 5672,
  [SMALL_STATE(109)] = 5721,
  [SMALL_STATE(110)] = 5774,
  [SMALL_STATE(111)] = 5823,
  [SMALL_STATE(112)] = 5872,
  [SMALL_STATE(113)] = 5923,
  [SMALL_STATE(114)] = 5972,
  [SMALL_STATE(115)] = 6023,
  [SMALL_STATE(116)] = 6074,
  [SMALL_STATE(117)] = 6125,
  [SMALL_STATE(118)] = 6178,
  [SMALL_STATE(119)] = 6229,
  [SMALL_STATE(120)] = 6280,
  [SMALL_STATE(121)] = 6329,
  [SMALL_STATE(122)] = 6378,
  [SMALL_STATE(123)] = 6427,
  [SMALL_STATE(124)] = 6480,
  [SMALL_STATE(125)] = 6533,
  [SMALL_STATE(126)] = 6590,
  [SMALL_STATE(127)] = 6649,
  [SMALL_STATE(128)] = 6710,
  [SMALL_STATE(129)] = 6761,
  [SMALL_STATE(130)] = 6810,
  [SMALL_STATE(131)] = 6863,
  [SMALL_STATE(132)] = 6912,
  [SMALL_STATE(133)] = 6963,
  [SMALL_STATE(134)] = 7016,
  [SMALL_STATE(135)] = 7065,
  [SMALL_STATE(136)] = 7118,
  [SMALL_STATE(137)] = 7167,
  [SMALL_STATE(138)] = 7220,
  [SMALL_STATE(139)] = 7283,
  [SMALL_STATE(140)] = 7336,
  [SMALL_STATE(141)] = 7387,
  [SMALL_STATE(142)] = 7438,
  [SMALL_STATE(143)] = 7501,
  [SMALL_STATE(144)] = 7550,
  [SMALL_STATE(145)] = 7599,
  [SMALL_STATE(146)] = 7648,
  [SMALL_STATE(147)] = 7697,
  [SMALL_STATE(148)] = 7746,
  [SMALL_STATE(149)] = 7795,
  [SMALL_STATE(150)] = 7844,
  [SMALL_STATE(151)] = 7897,
  [SMALL_STATE(152)] = 7950,
  [SMALL_STATE(153)] = 8001,
  [SMALL_STATE(154)] = 8052,
  [SMALL_STATE(155)] = 8105,
  [SMALL_STATE(156)] = 8153,
  [SMALL_STATE(157)] = 8201,
  [SMALL_STATE(158)] = 8259,
  [SMALL_STATE(159)] = 8315,
  [SMALL_STATE(160)] = 8363,
  [SMALL_STATE(161)] = 8411,
  [SMALL_STATE(162)] = 8459,
  [SMALL_STATE(163)] = 8507,
  [SMALL_STATE(164)] = 8559,
  [SMALL_STATE(165)] = 8609,
  [SMALL_STATE(166)] = 8657,
  [SMALL_STATE(167)] = 8709,
  [SMALL_STATE(168)] = 8757,
  [SMALL_STATE(169)] = 8805,
  [SMALL_STATE(170)] = 8857,
  [SMALL_STATE(171)] = 8905,
  [SMALL_STATE(172)] = 8953,
  [SMALL_STATE(173)] = 9001,
  [SMALL_STATE(174)] = 9063,
  [SMALL_STATE(175)] = 9115,
  [SMALL_STATE(176)] = 9165,
  [SMALL_STATE(177)] = 9217,
  [SMALL_STATE(178)] = 9265,
  [SMALL_STATE(179)] = 9313,
  [SMALL_STATE(180)] = 9363,
  [SMALL_STATE(181)] = 9411,
  [SMALL_STATE(182)] = 9461,
  [SMALL_STATE(183)] = 9511,
  [SMALL_STATE(184)] = 9573,
  [SMALL_STATE(185)] = 9625,
  [SMALL_STATE(186)] = 9677,
  [SMALL_STATE(187)] = 9727,
  [SMALL_STATE(188)] = 9779,
  [SMALL_STATE(189)] = 9831,
  [SMALL_STATE(190)] = 9879,
  [SMALL_STATE(191)] = 9929,
  [SMALL_STATE(192)] = 9979,
  [SMALL_STATE(193)] = 10029,
  [SMALL_STATE(194)] = 10077,
  [SMALL_STATE(195)] = 10127,
  [SMALL_STATE(196)] = 10175,
  [SMALL_STATE(197)] = 10225,
  [SMALL_STATE(198)] = 10273,
  [SMALL_STATE(199)] = 10323,
  [SMALL_STATE(200)] = 10371,
  [SMALL_STATE(201)] = 10419,
  [SMALL_STATE(202)] = 10467,
  [SMALL_STATE(203)] = 10517,
  [SMALL_STATE(204)] = 10569,
  [SMALL_STATE(205)] = 10617,
  [SMALL_STATE(206)] = 10677,
  [SMALL_STATE(207)] = 10729,
  [SMALL_STATE(208)] = 10775,
  [SMALL_STATE(209)] = 10821,
  [SMALL_STATE(210)] = 10867,
  [SMALL_STATE(211)] = 10913,
  [SMALL_STATE(212)] = 10959,
  [SMALL_STATE(213)] = 11005,
  [SMALL_STATE(214)] = 11044,
  [SMALL_STATE(215)] = 11083,
  [SMALL_STATE(216)] = 11122,
  [SMALL_STATE(217)] = 11163,
  [SMALL_STATE(218)] = 11202,
  [SMALL_STATE(219)] = 11243,
  [SMALL_STATE(220)] = 11282,
  [SMALL_STATE(221)] = 11321,
  [SMALL_STATE(222)] = 11360,
  [SMALL_STATE(223)] = 11399,
  [SMALL_STATE(224)] = 11437,
  [SMALL_STATE(225)] = 11475,
  [SMALL_STATE(226)] = 11513,
  [SMALL_STATE(227)] = 11551,
  [SMALL_STATE(228)] = 11589,
  [SMALL_STATE(229)] = 11629,
  [SMALL_STATE(230)] = 11669,
  [SMALL_STATE(231)] = 11707,
  [SMALL_STATE(232)] = 11745,
  [SMALL_STATE(233)] = 11783,
  [SMALL_STATE(234)] = 11810,
  [SMALL_STATE(235)] = 11834,
  [SMALL_STATE(236)] = 11858,
  [SMALL_STATE(237)] = 11882,
  [SMALL_STATE(238)] = 11905,
  [SMALL_STATE(239)] = 11930,
  [SMALL_STATE(240)] = 11955,
  [SMALL_STATE(241)] = 11980,
  [SMALL_STATE(242)] = 12005,
  [SMALL_STATE(243)] = 12030,
  [SMALL_STATE(244)] = 12055,
  [SMALL_STATE(245)] = 12080,
  [SMALL_STATE(246)] = 12105,
  [SMALL_STATE(247)] = 12130,
  [SMALL_STATE(248)] = 12155,
  [SMALL_STATE(249)] = 12177,
  [SMALL_STATE(250)] = 12199,
  [SMALL_STATE(251)] = 12221,
  [SMALL_STATE(252)] = 12249,
  [SMALL_STATE(253)] = 12279,
  [SMALL_STATE(254)] = 12311,
  [SMALL_STATE(255)] = 12335,
  [SMALL_STATE(256)] = 12357,
  [SMALL_STATE(257)] = 12383,
  [SMALL_STATE(258)] = 12405,
  [SMALL_STATE(259)] = 12427,
  [SMALL_STATE(260)] = 12449,
  [SMALL_STATE(261)] = 12471,
  [SMALL_STATE(262)] = 12493,
  [SMALL_STATE(263)] = 12515,
  [SMALL_STATE(264)] = 12537,
  [SMALL_STATE(265)] = 12559,
  [SMALL_STATE(266)] = 12581,
  [SMALL_STATE(267)] = 12603,
  [SMALL_STATE(268)] = 12625,
  [SMALL_STATE(269)] = 12647,
  [SMALL_STATE(270)] = 12671,
  [SMALL_STATE(271)] = 12693,
  [SMALL_STATE(272)] = 12715,
  [SMALL_STATE(273)] = 12737,
  [SMALL_STATE(274)] = 12768,
  [SMALL_STATE(275)] = 12799,
  [SMALL_STATE(276)] = 12830,
  [SMALL_STATE(277)] = 12861,
  [SMALL_STATE(278)] = 12892,
  [SMALL_STATE(279)] = 12923,
  [SMALL_STATE(280)] = 12954,
  [SMALL_STATE(281)] = 12985,
  [SMALL_STATE(282)] = 13016,
  [SMALL_STATE(283)] = 13047,
  [SMALL_STATE(284)] = 13078,
  [SMALL_STATE(285)] = 13109,
  [SMALL_STATE(286)] = 13140,
  [SMALL_STATE(287)] = 13171,
  [SMALL_STATE(288)] = 13202,
  [SMALL_STATE(289)] = 13233,
  [SMALL_STATE(290)] = 13264,
  [SMALL_STATE(291)] = 13295,
  [SMALL_STATE(292)] = 13326,
  [SMALL_STATE(293)] = 13357,
  [SMALL_STATE(294)] = 13388,
  [SMALL_STATE(295)] = 13419,
  [SMALL_STATE(296)] = 13450,
  [SMALL_STATE(297)] = 13481,
  [SMALL_STATE(298)] = 13512,
  [SMALL_STATE(299)] = 13542,
  [SMALL_STATE(300)] = 13572,
  [SMALL_STATE(301)] = 13602,
  [SMALL_STATE(302)] = 13624,
  [SMALL_STATE(303)] = 13651,
  [SMALL_STATE(304)] = 13678,
  [SMALL_STATE(305)] = 13705,
  [SMALL_STATE(306)] = 13725,
  [SMALL_STATE(307)] = 13745,
  [SMALL_STATE(308)] = 13765,
  [SMALL_STATE(309)] = 13785,
  [SMALL_STATE(310)] = 13805,
  [SMALL_STATE(311)] = 13825,
  [SMALL_STATE(312)] = 13845,
  [SMALL_STATE(313)] = 13865,
  [SMALL_STATE(314)] = 13885,
  [SMALL_STATE(315)] = 13905,
  [SMALL_STATE(316)] = 13925,
  [SMALL_STATE(317)] = 13945,
  [SMALL_STATE(318)] = 13965,
  [SMALL_STATE(319)] = 13985,
  [SMALL_STATE(320)] = 14005,
  [SMALL_STATE(321)] = 14025,
  [SMALL_STATE(322)] = 14045,
  [SMALL_STATE(323)] = 14065,
  [SMALL_STATE(324)] = 14085,
  [SMALL_STATE(325)] = 14105,
  [SMALL_STATE(326)] = 14125,
  [SMALL_STATE(327)] = 14145,
  [SMALL_STATE(328)] = 14165,
  [SMALL_STATE(329)] = 14185,
  [SMALL_STATE(330)] = 14205,
  [SMALL_STATE(331)] = 14225,
  [SMALL_STATE(332)] = 14245,
  [SMALL_STATE(333)] = 14265,
  [SMALL_STATE(334)] = 14285,
  [SMALL_STATE(335)] = 14305,
  [SMALL_STATE(336)] = 14325,
  [SMALL_STATE(337)] = 14345,
  [SMALL_STATE(338)] = 14365,
  [SMALL_STATE(339)] = 14385,
  [SMALL_STATE(340)] = 14405,
  [SMALL_STATE(341)] = 14425,
  [SMALL_STATE(342)] = 14445,
  [SMALL_STATE(343)] = 14465,
  [SMALL_STATE(344)] = 14485,
  [SMALL_STATE(345)] = 14505,
  [SMALL_STATE(346)] = 14525,
  [SMALL_STATE(347)] = 14542,
  [SMALL_STATE(348)] = 14561,
  [SMALL_STATE(349)] = 14580,
  [SMALL_STATE(350)] = 14599,
  [SMALL_STATE(351)] = 14618,
  [SMALL_STATE(352)] = 14634,
  [SMALL_STATE(353)] = 14650,
  [SMALL_STATE(354)] = 14666,
  [SMALL_STATE(355)] = 14678,
  [SMALL_STATE(356)] = 14694,
  [SMALL_STATE(357)] = 14710,
  [SMALL_STATE(358)] = 14723,
  [SMALL_STATE(359)] = 14734,
  [SMALL_STATE(360)] = 14747,
  [SMALL_STATE(361)] = 14758,
  [SMALL_STATE(362)] = 14769,
  [SMALL_STATE(363)] = 14780,
  [SMALL_STATE(364)] = 14793,
  [SMALL_STATE(365)] = 14804,
  [SMALL_STATE(366)] = 14817,
  [SMALL_STATE(367)] = 14828,
  [SMALL_STATE(368)] = 14839,
  [SMALL_STATE(369)] = 14852,
  [SMALL_STATE(370)] = 14863,
  [SMALL_STATE(371)] = 14874,
  [SMALL_STATE(372)] = 14887,
  [SMALL_STATE(373)] = 14898,
  [SMALL_STATE(374)] = 14909,
  [SMALL_STATE(375)] = 14922,
  [SMALL_STATE(376)] = 14935,
  [SMALL_STATE(377)] = 14948,
  [SMALL_STATE(378)] = 14961,
  [SMALL_STATE(379)] = 14974,
  [SMALL_STATE(380)] = 14987,
  [SMALL_STATE(381)] = 14998,
  [SMALL_STATE(382)] = 15011,
  [SMALL_STATE(383)] = 15024,
  [SMALL_STATE(384)] = 15035,
  [SMALL_STATE(385)] = 15043,
  [SMALL_STATE(386)] = 15053,
  [SMALL_STATE(387)] = 15063,
  [SMALL_STATE(388)] = 15073,
  [SMALL_STATE(389)] = 15081,
  [SMALL_STATE(390)] = 15091,
  [SMALL_STATE(391)] = 15098,
  [SMALL_STATE(392)] = 15105,
  [SMALL_STATE(393)] = 15112,
  [SMALL_STATE(394)] = 15119,
  [SMALL_STATE(395)] = 15126,
  [SMALL_STATE(396)] = 15133,
  [SMALL_STATE(397)] = 15140,
  [SMALL_STATE(398)] = 15147,
  [SMALL_STATE(399)] = 15154,
  [SMALL_STATE(400)] = 15161,
  [SMALL_STATE(401)] = 15168,
  [SMALL_STATE(402)] = 15175,
  [SMALL_STATE(403)] = 15182,
  [SMALL_STATE(404)] = 15189,
  [SMALL_STATE(405)] = 15196,
  [SMALL_STATE(406)] = 15203,
  [SMALL_STATE(407)] = 15210,
  [SMALL_STATE(408)] = 15217,
  [SMALL_STATE(409)] = 15224,
  [SMALL_STATE(410)] = 15231,
  [SMALL_STATE(411)] = 15238,
  [SMALL_STATE(412)] = 15245,
  [SMALL_STATE(413)] = 15252,
  [SMALL_STATE(414)] = 15259,
  [SMALL_STATE(415)] = 15266,
  [SMALL_STATE(416)] = 15273,
  [SMALL_STATE(417)] = 15280,
  [SMALL_STATE(418)] = 15287,
  [SMALL_STATE(419)] = 15294,
  [SMALL_STATE(420)] = 15301,
  [SMALL_STATE(421)] = 15308,
  [SMALL_STATE(422)] = 15315,
  [SMALL_STATE(423)] = 15322,
  [SMALL_STATE(424)] = 15329,
  [SMALL_STATE(425)] = 15336,
  [SMALL_STATE(426)] = 15343,
  [SMALL_STATE(427)] = 15350,
  [SMALL_STATE(428)] = 15357,
  [SMALL_STATE(429)] = 15364,
  [SMALL_STATE(430)] = 15371,
  [SMALL_STATE(431)] = 15378,
  [SMALL_STATE(432)] = 15385,
  [SMALL_STATE(433)] = 15392,
  [SMALL_STATE(434)] = 15399,
  [SMALL_STATE(435)] = 15406,
  [SMALL_STATE(436)] = 15413,
  [SMALL_STATE(437)] = 15420,
  [SMALL_STATE(438)] = 15427,
  [SMALL_STATE(439)] = 15434,
  [SMALL_STATE(440)] = 15441,
  [SMALL_STATE(441)] = 15448,
  [SMALL_STATE(442)] = 15455,
  [SMALL_STATE(443)] = 15462,
  [SMALL_STATE(444)] = 15469,
  [SMALL_STATE(445)] = 15476,
  [SMALL_STATE(446)] = 15483,
  [SMALL_STATE(447)] = 15490,
  [SMALL_STATE(448)] = 15497,
  [SMALL_STATE(449)] = 15504,
  [SMALL_STATE(450)] = 15511,
  [SMALL_STATE(451)] = 15518,
  [SMALL_STATE(452)] = 15525,
  [SMALL_STATE(453)] = 15532,
  [SMALL_STATE(454)] = 15539,
  [SMALL_STATE(455)] = 15546,
  [SMALL_STATE(456)] = 15553,
  [SMALL_STATE(457)] = 15560,
  [SMALL_STATE(458)] = 15567,
  [SMALL_STATE(459)] = 15574,
  [SMALL_STATE(460)] = 15581,
  [SMALL_STATE(461)] = 15588,
  [SMALL_STATE(462)] = 15595,
  [SMALL_STATE(463)] = 15602,
  [SMALL_STATE(464)] = 15609,
  [SMALL_STATE(465)] = 15616,
  [SMALL_STATE(466)] = 15623,
  [SMALL_STATE(467)] = 15630,
  [SMALL_STATE(468)] = 15637,
  [SMALL_STATE(469)] = 15644,
  [SMALL_STATE(470)] = 15651,
  [SMALL_STATE(471)] = 15658,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(99),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(24),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(26),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(111),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(98),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(153),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(140),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(132),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(119),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(118),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(116),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(115),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(114),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(112),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(141),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(414),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(71),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(450),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(100),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(110),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(110),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(418),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(352),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(105),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(45),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(48),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(204),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(106),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(198),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(196),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(194),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(192),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(191),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(190),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(186),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(182),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(181),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(179),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(425),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(77),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(412),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(202),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(178),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(178),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(424),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(353),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keywords, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keywords, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_division, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_division, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(298),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(27),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(403),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(398),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(467),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_database_field, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_block, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_block, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileopen, 12),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fileopen, 12),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 9),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 9),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__segment, 8),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__segment, 8),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filereadline, 8),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filereadline, 8),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_division, 6),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_division, 6),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__charactersearch, 6),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__charactersearch, 6),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, .production_id = 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format, 6),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format, 6),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_block, 6),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_block, 6),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_no_block, 4),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_no_block, 4),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_block, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_block, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_function, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_function, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__length, 4),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__length, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__money, 4),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__money, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rate, 4),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rate, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datevalue, 4),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datevalue, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_block, 5),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_block, 5),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, .production_id = 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lhs_expression, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_division, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_division, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_division, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_division, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_division, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_division, 2),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort_division, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_division, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_division, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_no_block, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_no_block, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter_division, 4),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter_division, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 2),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(100),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(413),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2), SHIFT_REPEAT(362),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(419),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_statement, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [907] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
