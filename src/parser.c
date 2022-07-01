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
#define STATE_COUNT 537
#define LARGE_STATE_COUNT 49
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 1
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 12

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
  sym_field_name = 105,
  sym_special_keywords = 106,
  sym_special_function = 107,
  sym__datevalue = 108,
  sym__rate = 109,
  sym__money = 110,
  sym__value = 111,
  sym__format = 112,
  sym__segment = 113,
  sym__charactersearch = 114,
  sym__length = 115,
  sym__fileopen = 116,
  sym__filereadline = 117,
  sym_expression = 118,
  sym_assignment_expression = 119,
  sym__lhs_expression = 120,
  sym_parenthesized_expression = 121,
  sym_binary_expression = 122,
  sym_primary_expression = 123,
  sym_for_statement = 124,
  sym_while_statement = 125,
  sym_if_statement = 126,
  sym__if_statement_no_block = 127,
  sym__if_else_block = 128,
  sym__if_else_no_block = 129,
  sym__if_statement_block = 130,
  sym_statement = 131,
  sym_procedure_definition = 132,
  sym_procedure_call = 133,
  aux_sym_source_file_repeat1 = 134,
  aux_sym_source_file_repeat2 = 135,
  aux_sym_source_file_repeat3 = 136,
  aux_sym_define_division_repeat1 = 137,
  aux_sym_array_type_repeat1 = 138,
  aux_sym__array_identifier_repeat1 = 139,
  alias_sym_name = 140,
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
  [sym_field_name] = "field_name",
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
  [alias_sym_name] = "name",
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
  [sym_field_name] = sym_field_name,
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
  [alias_sym_name] = alias_sym_name,
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
  [sym_field_name] = {
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
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_condition = 1,
  field_index = 2,
  field_left = 3,
  field_operator = 4,
  field_poweron = 5,
  field_right = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_index] = "index",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_poweron] = "poweron",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 3},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_poweron, 2},
  [1] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [4] =
    {field_condition, 1},
  [5] =
    {field_index, 1},
  [6] =
    {field_index, 1},
    {field_index, 2},
  [8] =
    {field_index, 2},
  [9] =
    {field_index, 1},
    {field_index, 3},
  [11] =
    {field_index, 2},
    {field_index, 3},
  [13] =
    {field_index, 3},
  [14] =
    {field_index, 2},
    {field_index, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_name,
  },
  [5] = {
    [0] = alias_sym_name,
  },
  [6] = {
    [0] = alias_sym_name,
  },
  [7] = {
    [0] = alias_sym_name,
  },
  [8] = {
    [0] = alias_sym_name,
  },
  [9] = {
    [0] = alias_sym_name,
  },
  [10] = {
    [0] = alias_sym_name,
  },
  [11] = {
    [0] = alias_sym_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    alias_sym_name,
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
      if (eof) ADVANCE(831);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '$') ADVANCE(807);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == ')') ADVANCE(939);
      if (lookahead == '*') ADVANCE(1600);
      if (lookahead == '+') ADVANCE(1595);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(1598);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '/') ADVANCE(1601);
      if (lookahead == '0') ADVANCE(1548);
      if (lookahead == ':') ADVANCE(1569);
      if (lookahead == '<') ADVANCE(1604);
      if (lookahead == '=') ADVANCE(872);
      if (lookahead == '>') ADVANCE(1603);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(360);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(428);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(544);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(669);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(289);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1606);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(724);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '$') ADVANCE(1542);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '0') ADVANCE(1548);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1001);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1145);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1021);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(953);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(963);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1196);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1444);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1010);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1147);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(808);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '0') ADVANCE(1552);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1307);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1307);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(1542);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '0') ADVANCE(1548);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(957);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1136);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1173);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1287);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1299);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1340);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1022);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(966);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(953);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1089);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(964);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1400);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1444);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1104);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1148);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(1566);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(1566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(1565);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(1565);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(1565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == ')') ADVANCE(939);
      if (lookahead == '*') ADVANCE(1600);
      if (lookahead == '+') ADVANCE(1596);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(1599);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '/') ADVANCE(1601);
      if (lookahead == '0') ADVANCE(1552);
      if (lookahead == ':') ADVANCE(1569);
      if (lookahead == '<') ADVANCE(1604);
      if (lookahead == '=') ADVANCE(872);
      if (lookahead == '>') ADVANCE(1603);
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(467);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(428);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(547);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(530);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(349);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(669);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(239);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == ')') ADVANCE(939);
      if (lookahead == '*') ADVANCE(1600);
      if (lookahead == '+') ADVANCE(1594);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(1597);
      if (lookahead == '/') ADVANCE(1601);
      if (lookahead == '<') ADVANCE(1604);
      if (lookahead == '=') ADVANCE(872);
      if (lookahead == '>') ADVANCE(1603);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(820);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(817);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(1590);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(608);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(608);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(1592);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(1592);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(1589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '{') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(825);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(1543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(785);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(672);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(121);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(470);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(903);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(280);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(785);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(759);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(252);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(734);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1605);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(647);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(359);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(719);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(390);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(729);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(753);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 120:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(766);
      END_STATE();
    case 121:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(621);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 122:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 123:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(308);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(386);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(678);
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(618);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(783);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(618);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 126:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(773);
      END_STATE();
    case 127:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 129:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 130:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(273);
      END_STATE();
    case 131:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(388);
      END_STATE();
    case 132:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(276);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(608);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1571);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(886);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(608);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(585);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(423);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(799);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(294);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(761);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(581);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(701);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(704);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(736);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(576);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(565);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(737);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(749);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(840);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(886);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(925);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1579);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1573);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1575);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 184:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 185:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 186:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(435);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(474);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 187:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      END_STATE();
    case 188:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(592);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(556);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(405);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(578);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(635);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 209:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 210:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 211:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(646);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(793);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1584);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1574);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1570);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1582);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(402);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 320:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 321:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(836);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 322:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(695);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(673);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 323:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(695);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 324:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      END_STATE();
    case 325:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      END_STATE();
    case 326:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 327:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(545);
      END_STATE();
    case 328:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(314);
      END_STATE();
    case 329:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(398);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 330:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 331:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(385);
      END_STATE();
    case 332:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(359);
      END_STATE();
    case 333:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(389);
      END_STATE();
    case 334:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(570);
      END_STATE();
    case 335:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(886);
      END_STATE();
    case 336:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1580);
      END_STATE();
    case 337:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(662);
      END_STATE();
    case 338:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(474);
      END_STATE();
    case 339:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(481);
      END_STATE();
    case 340:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(712);
      END_STATE();
    case 341:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 342:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 343:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 344:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(478);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(886);
      END_STATE();
    case 346:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(454);
      END_STATE();
    case 347:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(861);
      END_STATE();
    case 348:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(252);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1605);
      END_STATE();
    case 349:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(252);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 350:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(396);
      END_STATE();
    case 351:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(564);
      END_STATE();
    case 352:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 353:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 354:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(572);
      END_STATE();
    case 355:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(575);
      END_STATE();
    case 356:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(555);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(350);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 378:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 380:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 381:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 394:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 395:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 397:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 398:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 403:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 404:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 405:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 406:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 407:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 408:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 419:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(926);
      END_STATE();
    case 420:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(929);
      END_STATE();
    case 421:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(463);
      END_STATE();
    case 422:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(153);
      END_STATE();
    case 423:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(374);
      END_STATE();
    case 424:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(384);
      END_STATE();
    case 425:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(649);
      END_STATE();
    case 426:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(762);
      END_STATE();
    case 427:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(465);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(886);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(801);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(681);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(681);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(462);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(474);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 467:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 468:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(886);
      END_STATE();
    case 469:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 470:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 471:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 472:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(666);
      END_STATE();
    case 473:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(334);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(741);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(928);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(844);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1576);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1586);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 535:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 537:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 538:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 539:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 540:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 541:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 542:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(886);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1572);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(784);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(786);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(791);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 575:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 576:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 577:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 578:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(788);
      END_STATE();
    case 579:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 580:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 581:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 582:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 583:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(886);
      END_STATE();
    case 584:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(875);
      END_STATE();
    case 585:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 586:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(899);
      END_STATE();
    case 587:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(891);
      END_STATE();
    case 588:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(740);
      END_STATE();
    case 589:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(587);
      END_STATE();
    case 590:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 591:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 592:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 593:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 594:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(723);
      END_STATE();
    case 595:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 596:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 597:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(833);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(795);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(262);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 648:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(763);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 651:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 654:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 655:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 656:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 657:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 658:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 659:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 660:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 661:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 662:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(886);
      END_STATE();
    case 663:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 664:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1587);
      END_STATE();
    case 665:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1583);
      END_STATE();
    case 666:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1577);
      END_STATE();
    case 667:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(927);
      END_STATE();
    case 668:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1578);
      END_STATE();
    case 669:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 670:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 671:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(662);
      END_STATE();
    case 672:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(710);
      END_STATE();
    case 673:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 674:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      END_STATE();
    case 675:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      END_STATE();
    case 676:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      END_STATE();
    case 677:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      END_STATE();
    case 678:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 679:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      END_STATE();
    case 680:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(682);
      END_STATE();
    case 681:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      END_STATE();
    case 682:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 683:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(726);
      END_STATE();
    case 684:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 685:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      END_STATE();
    case 686:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(742);
      END_STATE();
    case 687:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(324);
      END_STATE();
    case 688:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(566);
      END_STATE();
    case 689:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 690:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 691:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      END_STATE();
    case 692:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(752);
      END_STATE();
    case 693:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      END_STATE();
    case 694:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(747);
      END_STATE();
    case 695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      END_STATE();
    case 696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(886);
      END_STATE();
    case 697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      END_STATE();
    case 698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(933);
      END_STATE();
    case 699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(882);
      END_STATE();
    case 700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      END_STATE();
    case 701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(877);
      END_STATE();
    case 702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(870);
      END_STATE();
    case 703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(858);
      END_STATE();
    case 704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1585);
      END_STATE();
    case 705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1588);
      END_STATE();
    case 706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(924);
      END_STATE();
    case 707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(795);
      END_STATE();
    case 710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      END_STATE();
    case 711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      END_STATE();
    case 714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(912);
      END_STATE();
    case 715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      END_STATE();
    case 716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(907);
      END_STATE();
    case 718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      END_STATE();
    case 721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(579);
      END_STATE();
    case 723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      END_STATE();
    case 725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(630);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
      END_STATE();
    case 734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(452);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      END_STATE();
    case 737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      END_STATE();
    case 738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      END_STATE();
    case 741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      END_STATE();
    case 746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      END_STATE();
    case 747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      END_STATE();
    case 751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(731);
      END_STATE();
    case 752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 753:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 754:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      END_STATE();
    case 755:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      END_STATE();
    case 756:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 758:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 759:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 760:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 761:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      END_STATE();
    case 762:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 763:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 764:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 765:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(755);
      END_STATE();
    case 766:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(655);
      END_STATE();
    case 767:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 768:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 769:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(508);
      END_STATE();
    case 770:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(448);
      END_STATE();
    case 771:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 772:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 773:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(738);
      END_STATE();
    case 774:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(886);
      END_STATE();
    case 775:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(294);
      END_STATE();
    case 776:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(366);
      END_STATE();
    case 777:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(307);
      END_STATE();
    case 778:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 779:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(400);
      END_STATE();
    case 780:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(383);
      END_STATE();
    case 781:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(279);
      END_STATE();
    case 782:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(288);
      END_STATE();
    case 783:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1581);
      END_STATE();
    case 784:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(923);
      END_STATE();
    case 785:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(562);
      END_STATE();
    case 786:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(664);
      END_STATE();
    case 787:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(459);
      END_STATE();
    case 788:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(668);
      END_STATE();
    case 789:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(357);
      END_STATE();
    case 790:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(196);
      END_STATE();
    case 791:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(536);
      END_STATE();
    case 792:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(582);
      END_STATE();
    case 793:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(415);
      END_STATE();
    case 794:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(466);
      END_STATE();
    case 795:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(886);
      END_STATE();
    case 796:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(935);
      END_STATE();
    case 797:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(865);
      END_STATE();
    case 798:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 799:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(909);
      END_STATE();
    case 800:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(590);
      END_STATE();
    case 801:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(684);
      END_STATE();
    case 802:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(685);
      END_STATE();
    case 803:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(107);
      END_STATE();
    case 804:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(108);
      END_STATE();
    case 805:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1556);
      END_STATE();
    case 806:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1557);
      END_STATE();
    case 807:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 808:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 809:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      END_STATE();
    case 810:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1559);
      END_STATE();
    case 811:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 812:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1564);
      END_STATE();
    case 813:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 814:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 815:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 816:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      END_STATE();
    case 817:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      END_STATE();
    case 818:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      END_STATE();
    case 819:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 820:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      END_STATE();
    case 821:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1558);
      END_STATE();
    case 822:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1543);
      END_STATE();
    case 823:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 824:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(822);
      END_STATE();
    case 825:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(824);
      END_STATE();
    case 826:
      if (eof) ADVANCE(831);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '$') ADVANCE(1542);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == ')') ADVANCE(939);
      if (lookahead == '*') ADVANCE(1600);
      if (lookahead == '+') ADVANCE(1595);
      if (lookahead == ',') ADVANCE(938);
      if (lookahead == '-') ADVANCE(1598);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '/') ADVANCE(1601);
      if (lookahead == '0') ADVANCE(1548);
      if (lookahead == ':') ADVANCE(1569);
      if (lookahead == '<') ADVANCE(1604);
      if (lookahead == '=') ADVANCE(872);
      if (lookahead == '>') ADVANCE(1603);
      if (lookahead == 'A') ADVANCE(947);
      if (lookahead == 'O') ADVANCE(948);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1001);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1145);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1021);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(965);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(952);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(963);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1196);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1444);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1010);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1147);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(826)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 827:
      if (eof) ADVANCE(831);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '$') ADVANCE(1542);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == '*') ADVANCE(1600);
      if (lookahead == '+') ADVANCE(1595);
      if (lookahead == '-') ADVANCE(1598);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '/') ADVANCE(1601);
      if (lookahead == '0') ADVANCE(1548);
      if (lookahead == '<') ADVANCE(1604);
      if (lookahead == '=') ADVANCE(872);
      if (lookahead == '>') ADVANCE(1603);
      if (lookahead == 'A') ADVANCE(947);
      if (lookahead == 'O') ADVANCE(948);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1001);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(959);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1088);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1021);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(965);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(951);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(962);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1195);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1444);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1010);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1147);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(827)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 828:
      if (eof) ADVANCE(831);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '$') ADVANCE(1542);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '0') ADVANCE(1548);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1028);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(950);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(958);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1088);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(951);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(961);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(976);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1444);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(970);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1146);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(828)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 829:
      if (eof) ADVANCE(831);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '$') ADVANCE(1542);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '0') ADVANCE(1548);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1001);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(959);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1088);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1021);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(951);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(962);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1195);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1444);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1010);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1147);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(829)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 830:
      if (eof) ADVANCE(831);
      if (lookahead == '"') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1567);
      if (lookahead == '$') ADVANCE(1542);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(809);
      if (lookahead == '0') ADVANCE(1548);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1001);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1145);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1021);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(965);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(952);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(963);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1196);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1444);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1010);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1147);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(830)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1543);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(989);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_keyword_token20);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_letter_division_token1);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_print_division_token2);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_total_division_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_record_type);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(456);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(792);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(597);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1386);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(746);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(746);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1414);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1377);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1130);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1346);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1202);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1425);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1213);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1418);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1363);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1418);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(645);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(580);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(638);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(628);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(446);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_data_type_token1);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_data_type_token2);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_data_type_token3);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_data_type_token4);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_data_type_token5);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(942);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(942);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(1606);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(724);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '.') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(945);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1543);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'D') ADVANCE(1591);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'N') ADVANCE(946);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1059);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1294);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(1593);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(975);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1473);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1262);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1267);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1403);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(977);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1269);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1529);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1392);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1447);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1428);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1101);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1428);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1102);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1428);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1103);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1035);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1401);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1294);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1150);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1276);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1529);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1392);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1478);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1478);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1007);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1478);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1008);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1522);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1199);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1000);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1487);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1411);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1013);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1024);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1291);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1522);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1199);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1000);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1487);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1411);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1382);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1522);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1199);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1190);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1000);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1487);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1382);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1522);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1199);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1000);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1487);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1532);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1334);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1334);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1292);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1325);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1303);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1251);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1254);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1310);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1363);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1509);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1413);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1051);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1539);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1043);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1396);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1480);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1431);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1033);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1431);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1073);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1079);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1491);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1073);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1491);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1058);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1300);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1257);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1085);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1342);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1274);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1338);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1271);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1469);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1258);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1313);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1272);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1260);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1086);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1317);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1402);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1343);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1434);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1315);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1420);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1268);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1294);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(978);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1276);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1529);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1392);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1223);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1046);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1037);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1320);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1259);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1227);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1005);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1259);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1227);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1259);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1052);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1310);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1416);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1489);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1490);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1492);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1508);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1501);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1053);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1501);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1057);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1123);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1408);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1530);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1314);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1408);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1314);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1408);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1289);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1520);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1409);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1391);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(987);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(973);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1137);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1029);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1294);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1066);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(979);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1228);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1059);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1294);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1381);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1126);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1245);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1200);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1249);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1443);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1246);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1201);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1364);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1406);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1191);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1194);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1378);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1076);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(996);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1127);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1128);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1470);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1214);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1488);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1464);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1042);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1049);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1489);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1131);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1495);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1014);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1505);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1503);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1108);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(979);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1228);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(841);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(917);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1154);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1123);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1205);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1518);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1519);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1230);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1356);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1012);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1388);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1064);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(955);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1239);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1156);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1365);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1186);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1222);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1376);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1423);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1535);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1226);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1430);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1084);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1285);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1450);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(969);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1046);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1538);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(864);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(869);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1054);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1054);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1310);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1357);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(943);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1446);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1516);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1446);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1517);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1446);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1525);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1025);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1081);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1198);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1305);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1288);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1383);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1394);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1090);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1354);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1067);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1412);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1207);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1404);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1030);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1068);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1471);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1395);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1168);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1306);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1008);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1415);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1317);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1211);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1504);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1435);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1082);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1302);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1450);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(969);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1463);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1233);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1312);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1397);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1463);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1233);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1417);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1397);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1463);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1417);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1397);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1449);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1215);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(994);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(998);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1323);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1335);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1451);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1486);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1050);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1075);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1283);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1322);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1083);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1324);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1436);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1326);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1433);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1438);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1297);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1536);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(837);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1521);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(954);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(975);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1465);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1448);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1061);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1039);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1032);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1465);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1039);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1032);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1123);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1367);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1352);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1220);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1165);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1372);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1442);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1295);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1300);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1479);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1132);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1087);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1296);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1121);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1510);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1296);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1278);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(862);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(860);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1480);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1232);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1368);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1125);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1004);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1373);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(997);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1541);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1270);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1393);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1350);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1177);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1523);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1442);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1349);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1184);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1308);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1445);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1387);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1044);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1494);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1048);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1071);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1094);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1309);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1056);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1352);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1466);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1263);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1475);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1311);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1483);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1328);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1526);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1524);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(986);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1329);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1453);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1277);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1371);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1347);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1362);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1330);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1374);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1491);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1375);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1332);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1327);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1333);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1462);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(918);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(920);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1282);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1045);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1219);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1225);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1511);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(972);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1218);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(847);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(919);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(885);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(971);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1123);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1540);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1017);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1253);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1442);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1062);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1113);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1454);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1062);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1454);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1062);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1255);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1063);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1192);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1255);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1062);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1192);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1261);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1295);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1385);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1105);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1515);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(894);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1359);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1221);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1284);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1295);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1385);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1095);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1142);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1418);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1514);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(999);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1231);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1244);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1155);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1018);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1241);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1243);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1197);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1027);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1179);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1038);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1458);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1069);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1160);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1162);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1164);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1521);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(954);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1499);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1185);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(851);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1061);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1182);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1181);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1077);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1180);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1070);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1115);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1457);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1092);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1468);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1044);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1496);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(967);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1060);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1474);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1466);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1074);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1472);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1481);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1240);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1481);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1464);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1096);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1097);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1087);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1169);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1099);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1100);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1009);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1176);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1512);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1250);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1157);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1450);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(969);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1535);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1040);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1188);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1339);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(990);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(993);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1080);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1236);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1502);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1264);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1265);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1262);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1528);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1531);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1152);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1513);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1181);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1290);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1256);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1476);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1300);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(982);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1344);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1394);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1405);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1275);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1266);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1398);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1336);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1298);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1410);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1422);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1341);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1304);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1533);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1429);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1517);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(876);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(980);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1391);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(900);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(892);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1497);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1384);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(968);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1280);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1421);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1135);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1424);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(944);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1187);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1247);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1134);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1062);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1192);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1062);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1482);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1527);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1248);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1355);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1459);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(984);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1358);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1293);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1467);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1345);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(982);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1337);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1060);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1115);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1065);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(974);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1118);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1242);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1209);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1149);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1167);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1129);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1106);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1485);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1124);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1141);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1109);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(981);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(991);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1140);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1041);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1456);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(992);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1460);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1015);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1419);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1426);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1019);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1123);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1023);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1442);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1477);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1091);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1461);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1112);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1441);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1389);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1496);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1116);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1208);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1153);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1174);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1534);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1370);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1144);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1331);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1506);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1500);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1543);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(902);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(853);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(878);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(859);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1034);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(916);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1175);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1360);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1110);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1193);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(983);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(913);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1206);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(908);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1217);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1111);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1319);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1234);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1159);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1120);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1087);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1365);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1498);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1229);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1369);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1432);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(995);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1133);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1138);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1163);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1166);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1143);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1493);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1236);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1161);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1237);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1238);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1026);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1380);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1379);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1348);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1507);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1094);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1098);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1321);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1322);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1273);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1427);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1437);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1151);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1212);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1158);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1087);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(988);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1224);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1139);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(915);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1366);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1210);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1452);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1281);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1441);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1235);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1203);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1286);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(866);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(936);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1455);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1011);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(945);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1546);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1563);
      if (lookahead == '0') ADVANCE(1555);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(806);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(821);
      if (lookahead == '_') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(1544);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1550);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1563);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(818);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1563);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(818);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1549);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1563);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(818);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1550);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1562);
      if (lookahead == '0') ADVANCE(1559);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(805);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(806);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(821);
      if (lookahead == '_') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(1544);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1562);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(818);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(811);
      if (lookahead == '_') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1559);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(811);
      if (lookahead == '_') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1554);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(805);
      if (lookahead == 'n') ADVANCE(1544);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1556);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(806);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1557);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(821);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1558);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1559);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1547);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_money);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_rate);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_special_keywords_token1);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_special_keywords_token2);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_special_keywords_token4);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_special_keywords_token5);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_special_keywords_token6);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_special_keywords_token7);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_special_keywords_token8);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_special_keywords_token9);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(409);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_special_keywords_token10);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_special_keywords_token11);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_special_keywords_token13);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_special_keywords_token14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_special_keywords_token15);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_special_keywords_token16);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_special_keywords_token17);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_special_keywords_token18);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_special_keywords_token19);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_special_keywords_token20);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_special_keywords_token21);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ']') ADVANCE(1589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '\\') ADVANCE(37);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '$') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(1602);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_procedure_definition_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 828},
  [2] = {.lex_state = 828},
  [3] = {.lex_state = 829},
  [4] = {.lex_state = 829},
  [5] = {.lex_state = 829},
  [6] = {.lex_state = 829},
  [7] = {.lex_state = 829},
  [8] = {.lex_state = 826},
  [9] = {.lex_state = 826},
  [10] = {.lex_state = 826},
  [11] = {.lex_state = 826},
  [12] = {.lex_state = 830},
  [13] = {.lex_state = 830},
  [14] = {.lex_state = 830},
  [15] = {.lex_state = 830},
  [16] = {.lex_state = 830},
  [17] = {.lex_state = 830},
  [18] = {.lex_state = 830},
  [19] = {.lex_state = 830},
  [20] = {.lex_state = 830},
  [21] = {.lex_state = 830},
  [22] = {.lex_state = 830},
  [23] = {.lex_state = 830},
  [24] = {.lex_state = 830},
  [25] = {.lex_state = 830},
  [26] = {.lex_state = 830},
  [27] = {.lex_state = 830},
  [28] = {.lex_state = 830},
  [29] = {.lex_state = 830},
  [30] = {.lex_state = 830},
  [31] = {.lex_state = 830},
  [32] = {.lex_state = 830},
  [33] = {.lex_state = 830},
  [34] = {.lex_state = 830},
  [35] = {.lex_state = 830},
  [36] = {.lex_state = 830},
  [37] = {.lex_state = 830},
  [38] = {.lex_state = 830},
  [39] = {.lex_state = 830},
  [40] = {.lex_state = 830},
  [41] = {.lex_state = 830},
  [42] = {.lex_state = 830},
  [43] = {.lex_state = 826},
  [44] = {.lex_state = 826},
  [45] = {.lex_state = 830},
  [46] = {.lex_state = 830},
  [47] = {.lex_state = 826},
  [48] = {.lex_state = 826},
  [49] = {.lex_state = 828},
  [50] = {.lex_state = 828},
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
  [95] = {.lex_state = 827},
  [96] = {.lex_state = 827},
  [97] = {.lex_state = 829},
  [98] = {.lex_state = 826},
  [99] = {.lex_state = 826},
  [100] = {.lex_state = 826},
  [101] = {.lex_state = 826},
  [102] = {.lex_state = 826},
  [103] = {.lex_state = 826},
  [104] = {.lex_state = 826},
  [105] = {.lex_state = 826},
  [106] = {.lex_state = 826},
  [107] = {.lex_state = 826},
  [108] = {.lex_state = 826},
  [109] = {.lex_state = 826},
  [110] = {.lex_state = 826},
  [111] = {.lex_state = 826},
  [112] = {.lex_state = 826},
  [113] = {.lex_state = 826},
  [114] = {.lex_state = 826},
  [115] = {.lex_state = 826},
  [116] = {.lex_state = 826},
  [117] = {.lex_state = 826},
  [118] = {.lex_state = 826},
  [119] = {.lex_state = 826},
  [120] = {.lex_state = 826},
  [121] = {.lex_state = 826},
  [122] = {.lex_state = 826},
  [123] = {.lex_state = 826},
  [124] = {.lex_state = 826},
  [125] = {.lex_state = 826},
  [126] = {.lex_state = 826},
  [127] = {.lex_state = 826},
  [128] = {.lex_state = 826},
  [129] = {.lex_state = 826},
  [130] = {.lex_state = 826},
  [131] = {.lex_state = 826},
  [132] = {.lex_state = 826},
  [133] = {.lex_state = 826},
  [134] = {.lex_state = 826},
  [135] = {.lex_state = 826},
  [136] = {.lex_state = 826},
  [137] = {.lex_state = 826},
  [138] = {.lex_state = 826},
  [139] = {.lex_state = 826},
  [140] = {.lex_state = 826},
  [141] = {.lex_state = 826},
  [142] = {.lex_state = 826},
  [143] = {.lex_state = 826},
  [144] = {.lex_state = 826},
  [145] = {.lex_state = 826},
  [146] = {.lex_state = 826},
  [147] = {.lex_state = 826},
  [148] = {.lex_state = 826},
  [149] = {.lex_state = 826},
  [150] = {.lex_state = 826},
  [151] = {.lex_state = 826},
  [152] = {.lex_state = 826},
  [153] = {.lex_state = 826},
  [154] = {.lex_state = 826},
  [155] = {.lex_state = 826},
  [156] = {.lex_state = 826},
  [157] = {.lex_state = 826},
  [158] = {.lex_state = 826},
  [159] = {.lex_state = 826},
  [160] = {.lex_state = 826},
  [161] = {.lex_state = 826},
  [162] = {.lex_state = 826},
  [163] = {.lex_state = 826},
  [164] = {.lex_state = 826},
  [165] = {.lex_state = 826},
  [166] = {.lex_state = 826},
  [167] = {.lex_state = 826},
  [168] = {.lex_state = 826},
  [169] = {.lex_state = 826},
  [170] = {.lex_state = 826},
  [171] = {.lex_state = 826},
  [172] = {.lex_state = 826},
  [173] = {.lex_state = 826},
  [174] = {.lex_state = 826},
  [175] = {.lex_state = 826},
  [176] = {.lex_state = 826},
  [177] = {.lex_state = 826},
  [178] = {.lex_state = 826},
  [179] = {.lex_state = 826},
  [180] = {.lex_state = 826},
  [181] = {.lex_state = 826},
  [182] = {.lex_state = 826},
  [183] = {.lex_state = 826},
  [184] = {.lex_state = 826},
  [185] = {.lex_state = 826},
  [186] = {.lex_state = 826},
  [187] = {.lex_state = 826},
  [188] = {.lex_state = 826},
  [189] = {.lex_state = 826},
  [190] = {.lex_state = 826},
  [191] = {.lex_state = 826},
  [192] = {.lex_state = 826},
  [193] = {.lex_state = 826},
  [194] = {.lex_state = 826},
  [195] = {.lex_state = 826},
  [196] = {.lex_state = 826},
  [197] = {.lex_state = 826},
  [198] = {.lex_state = 826},
  [199] = {.lex_state = 826},
  [200] = {.lex_state = 826},
  [201] = {.lex_state = 826},
  [202] = {.lex_state = 826},
  [203] = {.lex_state = 826},
  [204] = {.lex_state = 826},
  [205] = {.lex_state = 826},
  [206] = {.lex_state = 826},
  [207] = {.lex_state = 826},
  [208] = {.lex_state = 826},
  [209] = {.lex_state = 826},
  [210] = {.lex_state = 826},
  [211] = {.lex_state = 826},
  [212] = {.lex_state = 826},
  [213] = {.lex_state = 826},
  [214] = {.lex_state = 826},
  [215] = {.lex_state = 826},
  [216] = {.lex_state = 826},
  [217] = {.lex_state = 826},
  [218] = {.lex_state = 826},
  [219] = {.lex_state = 826},
  [220] = {.lex_state = 826},
  [221] = {.lex_state = 826},
  [222] = {.lex_state = 826},
  [223] = {.lex_state = 826},
  [224] = {.lex_state = 826},
  [225] = {.lex_state = 826},
  [226] = {.lex_state = 829},
  [227] = {.lex_state = 829},
  [228] = {.lex_state = 829},
  [229] = {.lex_state = 829},
  [230] = {.lex_state = 829},
  [231] = {.lex_state = 829},
  [232] = {.lex_state = 830},
  [233] = {.lex_state = 830},
  [234] = {.lex_state = 830},
  [235] = {.lex_state = 830},
  [236] = {.lex_state = 830},
  [237] = {.lex_state = 830},
  [238] = {.lex_state = 830},
  [239] = {.lex_state = 830},
  [240] = {.lex_state = 830},
  [241] = {.lex_state = 830},
  [242] = {.lex_state = 830},
  [243] = {.lex_state = 830},
  [244] = {.lex_state = 830},
  [245] = {.lex_state = 830},
  [246] = {.lex_state = 830},
  [247] = {.lex_state = 830},
  [248] = {.lex_state = 830},
  [249] = {.lex_state = 830},
  [250] = {.lex_state = 830},
  [251] = {.lex_state = 830},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 15},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 15},
  [258] = {.lex_state = 15},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 15},
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
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 15},
  [277] = {.lex_state = 15},
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
  [292] = {.lex_state = 16},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 16},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 16},
  [299] = {.lex_state = 16},
  [300] = {.lex_state = 16},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 16},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 16},
  [313] = {.lex_state = 16},
  [314] = {.lex_state = 16},
  [315] = {.lex_state = 16},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 16},
  [318] = {.lex_state = 16},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 16},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 16},
  [323] = {.lex_state = 16},
  [324] = {.lex_state = 16},
  [325] = {.lex_state = 16},
  [326] = {.lex_state = 16},
  [327] = {.lex_state = 16},
  [328] = {.lex_state = 16},
  [329] = {.lex_state = 16},
  [330] = {.lex_state = 16},
  [331] = {.lex_state = 16},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 16},
  [334] = {.lex_state = 16},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 8},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 4},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 4},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 4},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 4},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 4},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 4},
  [373] = {.lex_state = 4},
  [374] = {.lex_state = 4},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 4},
  [377] = {.lex_state = 4},
  [378] = {.lex_state = 4},
  [379] = {.lex_state = 4},
  [380] = {.lex_state = 4},
  [381] = {.lex_state = 4},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 4},
  [384] = {.lex_state = 4},
  [385] = {.lex_state = 4},
  [386] = {.lex_state = 4},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 4},
  [390] = {.lex_state = 4},
  [391] = {.lex_state = 4},
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 5},
  [394] = {.lex_state = 4},
  [395] = {.lex_state = 4},
  [396] = {.lex_state = 4},
  [397] = {.lex_state = 4},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 4},
  [400] = {.lex_state = 5},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 4},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 4},
  [405] = {.lex_state = 6},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 4},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 4},
  [412] = {.lex_state = 4},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 6},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 6},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 15},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 15},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 4},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 15},
  [426] = {.lex_state = 6},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 6},
  [429] = {.lex_state = 4},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 4},
  [432] = {.lex_state = 6},
  [433] = {.lex_state = 6},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 15},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 15},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 15},
  [451] = {.lex_state = 15},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 941},
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
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 941},
  [474] = {.lex_state = 941},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 15},
  [487] = {.lex_state = 941},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 941},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 15},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
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
    [sym_source_file] = STATE(464),
    [sym_keyword] = STATE(124),
    [sym__optional_divisions] = STATE(4),
    [sym_target_division] = STATE(6),
    [sym_define_division] = STATE(4),
    [sym_setup_division] = STATE(4),
    [sym_select_division] = STATE(4),
    [sym_sort_division] = STATE(4),
    [sym_letter_division] = STATE(21),
    [sym_print_division] = STATE(21),
    [sym_total_division] = STATE(4),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_keywords] = STATE(2),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_source_file_repeat3] = STATE(13),
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
    [sym_keyword] = STATE(124),
    [sym__optional_divisions] = STATE(5),
    [sym_target_division] = STATE(7),
    [sym_define_division] = STATE(5),
    [sym_setup_division] = STATE(5),
    [sym_select_division] = STATE(5),
    [sym_sort_division] = STATE(5),
    [sym_letter_division] = STATE(19),
    [sym_print_division] = STATE(19),
    [sym_total_division] = STATE(5),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_keywords] = STATE(49),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat1] = STATE(49),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_source_file_repeat3] = STATE(20),
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
    [sym_keyword] = STATE(124),
    [sym__optional_divisions] = STATE(97),
    [sym_define_division] = STATE(97),
    [sym_setup_division] = STATE(97),
    [sym_select_division] = STATE(97),
    [sym_sort_division] = STATE(97),
    [sym_letter_division] = STATE(17),
    [sym_print_division] = STATE(17),
    [sym_total_division] = STATE(97),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(18),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat2] = STATE(97),
    [aux_sym_source_file_repeat3] = STATE(18),
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
    [sym_keyword] = STATE(124),
    [sym__optional_divisions] = STATE(97),
    [sym_define_division] = STATE(97),
    [sym_setup_division] = STATE(97),
    [sym_select_division] = STATE(97),
    [sym_sort_division] = STATE(97),
    [sym_letter_division] = STATE(19),
    [sym_print_division] = STATE(19),
    [sym_total_division] = STATE(97),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat2] = STATE(97),
    [aux_sym_source_file_repeat3] = STATE(20),
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
  [5] = {
    [sym_keyword] = STATE(124),
    [sym__optional_divisions] = STATE(97),
    [sym_define_division] = STATE(97),
    [sym_setup_division] = STATE(97),
    [sym_select_division] = STATE(97),
    [sym_sort_division] = STATE(97),
    [sym_letter_division] = STATE(15),
    [sym_print_division] = STATE(15),
    [sym_total_division] = STATE(97),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(16),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat2] = STATE(97),
    [aux_sym_source_file_repeat3] = STATE(16),
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
  [6] = {
    [sym_keyword] = STATE(124),
    [sym__optional_divisions] = STATE(5),
    [sym_define_division] = STATE(5),
    [sym_setup_division] = STATE(5),
    [sym_select_division] = STATE(5),
    [sym_sort_division] = STATE(5),
    [sym_letter_division] = STATE(19),
    [sym_print_division] = STATE(19),
    [sym_total_division] = STATE(5),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_source_file_repeat3] = STATE(20),
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
    [sym_keyword] = STATE(124),
    [sym__optional_divisions] = STATE(3),
    [sym_define_division] = STATE(3),
    [sym_setup_division] = STATE(3),
    [sym_select_division] = STATE(3),
    [sym_sort_division] = STATE(3),
    [sym_letter_division] = STATE(15),
    [sym_print_division] = STATE(15),
    [sym_total_division] = STATE(3),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(16),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_source_file_repeat3] = STATE(16),
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
  [8] = {
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(24),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(24),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(41),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(41),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(27),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(27),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(26),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(26),
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
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
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
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
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
  [14] = {
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
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
  [15] = {
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(18),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat3] = STATE(18),
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
  [16] = {
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
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
  [17] = {
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(14),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat3] = STATE(14),
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
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
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
  [19] = {
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(16),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat3] = STATE(16),
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
  [20] = {
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(12),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
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
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
    [aux_sym_source_file_repeat3] = STATE(20),
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
  [22] = {
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(35),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(214),
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
  [25] = {
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(34),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(34),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(216),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(218),
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
  [27] = {
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(220),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(222),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(224),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(226),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(28),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(28),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(228),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(29),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(29),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(230),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(30),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(30),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(232),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(234),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(236),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(238),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(240),
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
  [38] = {
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(242),
    [aux_sym_keyword_token2] = ACTIONS(245),
    [aux_sym_keyword_token3] = ACTIONS(248),
    [aux_sym_keyword_token4] = ACTIONS(251),
    [aux_sym_keyword_token5] = ACTIONS(251),
    [aux_sym_keyword_token6] = ACTIONS(251),
    [aux_sym_keyword_token7] = ACTIONS(251),
    [aux_sym_keyword_token8] = ACTIONS(254),
    [aux_sym_keyword_token9] = ACTIONS(257),
    [aux_sym_keyword_token10] = ACTIONS(260),
    [aux_sym_keyword_token11] = ACTIONS(263),
    [aux_sym_keyword_token12] = ACTIONS(251),
    [aux_sym_keyword_token13] = ACTIONS(251),
    [aux_sym_keyword_token14] = ACTIONS(266),
    [aux_sym_keyword_token15] = ACTIONS(269),
    [aux_sym_keyword_token16] = ACTIONS(272),
    [aux_sym_keyword_token17] = ACTIONS(275),
    [aux_sym_keyword_token18] = ACTIONS(278),
    [aux_sym_keyword_token19] = ACTIONS(281),
    [aux_sym_keyword_token20] = ACTIONS(284),
    [sym_record_type] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym__identifier_token1] = ACTIONS(296),
    [sym_number] = ACTIONS(299),
    [sym_money] = ACTIONS(302),
    [sym_date] = ACTIONS(302),
    [sym_rate] = ACTIONS(302),
    [anon_sym_POUND] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(308),
  },
  [39] = {
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(23),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
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
  [40] = {
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(36),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(36),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(311),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(313),
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
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(37),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
    [aux_sym_source_file_repeat3] = STATE(37),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_keyword_token2] = ACTIONS(81),
    [aux_sym_keyword_token3] = ACTIONS(83),
    [aux_sym_keyword_token4] = ACTIONS(85),
    [aux_sym_keyword_token5] = ACTIONS(315),
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
    [sym_keyword] = STATE(307),
    [sym_string_literal] = STATE(307),
    [sym__identifier] = STATE(253),
    [sym_identifier] = STATE(302),
    [sym__array_identifier] = STATE(255),
    [sym_include_statement] = STATE(301),
    [sym_database_field] = STATE(301),
    [sym_special_function] = STATE(307),
    [sym__datevalue] = STATE(300),
    [sym__rate] = STATE(300),
    [sym__money] = STATE(300),
    [sym__value] = STATE(300),
    [sym__format] = STATE(300),
    [sym__segment] = STATE(300),
    [sym__charactersearch] = STATE(300),
    [sym__length] = STATE(300),
    [sym__fileopen] = STATE(300),
    [sym__filereadline] = STATE(300),
    [sym_expression] = STATE(310),
    [sym_assignment_expression] = STATE(301),
    [sym__lhs_expression] = STATE(507),
    [sym_parenthesized_expression] = STATE(307),
    [sym_binary_expression] = STATE(301),
    [sym_primary_expression] = STATE(301),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_keyword_token1] = ACTIONS(317),
    [aux_sym_keyword_token2] = ACTIONS(317),
    [aux_sym_keyword_token3] = ACTIONS(317),
    [aux_sym_keyword_token4] = ACTIONS(317),
    [aux_sym_keyword_token5] = ACTIONS(317),
    [aux_sym_keyword_token6] = ACTIONS(317),
    [aux_sym_keyword_token7] = ACTIONS(317),
    [aux_sym_keyword_token8] = ACTIONS(317),
    [aux_sym_keyword_token9] = ACTIONS(319),
    [aux_sym_keyword_token10] = ACTIONS(321),
    [aux_sym_keyword_token11] = ACTIONS(323),
    [aux_sym_keyword_token12] = ACTIONS(317),
    [aux_sym_keyword_token13] = ACTIONS(317),
    [aux_sym_keyword_token14] = ACTIONS(325),
    [aux_sym_keyword_token15] = ACTIONS(327),
    [aux_sym_keyword_token16] = ACTIONS(329),
    [aux_sym_keyword_token17] = ACTIONS(331),
    [aux_sym_keyword_token18] = ACTIONS(333),
    [aux_sym_keyword_token19] = ACTIONS(335),
    [aux_sym_keyword_token20] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [aux_sym__identifier_token1] = ACTIONS(345),
    [sym_number] = ACTIONS(347),
    [sym_money] = ACTIONS(349),
    [sym_date] = ACTIONS(349),
    [sym_rate] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(351),
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
  [44] = {
    [sym_keyword] = STATE(307),
    [sym_string_literal] = STATE(307),
    [sym__identifier] = STATE(253),
    [sym_identifier] = STATE(302),
    [sym__array_identifier] = STATE(255),
    [sym_include_statement] = STATE(301),
    [sym_database_field] = STATE(301),
    [sym_special_function] = STATE(307),
    [sym__datevalue] = STATE(300),
    [sym__rate] = STATE(300),
    [sym__money] = STATE(300),
    [sym__value] = STATE(300),
    [sym__format] = STATE(300),
    [sym__segment] = STATE(300),
    [sym__charactersearch] = STATE(300),
    [sym__length] = STATE(300),
    [sym__fileopen] = STATE(300),
    [sym__filereadline] = STATE(300),
    [sym_expression] = STATE(318),
    [sym_assignment_expression] = STATE(301),
    [sym__lhs_expression] = STATE(507),
    [sym_parenthesized_expression] = STATE(307),
    [sym_binary_expression] = STATE(301),
    [sym_primary_expression] = STATE(301),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_keyword_token1] = ACTIONS(317),
    [aux_sym_keyword_token2] = ACTIONS(317),
    [aux_sym_keyword_token3] = ACTIONS(317),
    [aux_sym_keyword_token4] = ACTIONS(317),
    [aux_sym_keyword_token5] = ACTIONS(317),
    [aux_sym_keyword_token6] = ACTIONS(317),
    [aux_sym_keyword_token7] = ACTIONS(317),
    [aux_sym_keyword_token8] = ACTIONS(317),
    [aux_sym_keyword_token9] = ACTIONS(319),
    [aux_sym_keyword_token10] = ACTIONS(321),
    [aux_sym_keyword_token11] = ACTIONS(323),
    [aux_sym_keyword_token12] = ACTIONS(317),
    [aux_sym_keyword_token13] = ACTIONS(317),
    [aux_sym_keyword_token14] = ACTIONS(325),
    [aux_sym_keyword_token15] = ACTIONS(327),
    [aux_sym_keyword_token16] = ACTIONS(329),
    [aux_sym_keyword_token17] = ACTIONS(331),
    [aux_sym_keyword_token18] = ACTIONS(333),
    [aux_sym_keyword_token19] = ACTIONS(335),
    [aux_sym_keyword_token20] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [aux_sym__identifier_token1] = ACTIONS(345),
    [sym_number] = ACTIONS(347),
    [sym_money] = ACTIONS(349),
    [sym_date] = ACTIONS(349),
    [sym_rate] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(351),
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
  [45] = {
    [sym_keyword] = STATE(124),
    [sym_string_literal] = STATE(124),
    [sym__identifier] = STATE(99),
    [sym_identifier] = STATE(172),
    [sym__array_identifier] = STATE(100),
    [sym_include_statement] = STATE(171),
    [sym_database_field] = STATE(171),
    [sym_special_function] = STATE(124),
    [sym__datevalue] = STATE(170),
    [sym__rate] = STATE(170),
    [sym__money] = STATE(170),
    [sym__value] = STATE(170),
    [sym__format] = STATE(170),
    [sym__segment] = STATE(170),
    [sym__charactersearch] = STATE(170),
    [sym__length] = STATE(170),
    [sym__fileopen] = STATE(170),
    [sym__filereadline] = STATE(170),
    [sym_expression] = STATE(169),
    [sym_assignment_expression] = STATE(171),
    [sym__lhs_expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(124),
    [sym_binary_expression] = STATE(171),
    [sym_primary_expression] = STATE(171),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(235),
    [sym__if_statement_no_block] = STATE(237),
    [sym__if_else_block] = STATE(237),
    [sym__if_else_no_block] = STATE(237),
    [sym__if_statement_block] = STATE(237),
    [sym_statement] = STATE(238),
    [sym_procedure_definition] = STATE(240),
    [sym_procedure_call] = STATE(240),
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
  [46] = {
    [sym_keyword] = STATE(204),
    [sym_string_literal] = STATE(204),
    [sym__identifier] = STATE(155),
    [sym_identifier] = STATE(193),
    [sym__array_identifier] = STATE(157),
    [sym_include_statement] = STATE(190),
    [sym_database_field] = STATE(190),
    [sym_special_function] = STATE(204),
    [sym__datevalue] = STATE(187),
    [sym__rate] = STATE(187),
    [sym__money] = STATE(187),
    [sym__value] = STATE(187),
    [sym__format] = STATE(187),
    [sym__segment] = STATE(187),
    [sym__charactersearch] = STATE(187),
    [sym__length] = STATE(187),
    [sym__fileopen] = STATE(187),
    [sym__filereadline] = STATE(187),
    [sym_expression] = STATE(178),
    [sym_assignment_expression] = STATE(190),
    [sym__lhs_expression] = STATE(482),
    [sym_parenthesized_expression] = STATE(204),
    [sym_binary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(248),
    [sym__if_statement_no_block] = STATE(249),
    [sym__if_else_block] = STATE(249),
    [sym__if_else_no_block] = STATE(249),
    [sym__if_statement_block] = STATE(249),
    [sym_statement] = STATE(246),
    [sym_procedure_definition] = STATE(247),
    [sym_procedure_call] = STATE(247),
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
  [47] = {
    [sym_keyword] = STATE(307),
    [sym_string_literal] = STATE(307),
    [sym__identifier] = STATE(253),
    [sym_identifier] = STATE(302),
    [sym__array_identifier] = STATE(255),
    [sym_include_statement] = STATE(301),
    [sym_database_field] = STATE(301),
    [sym_special_function] = STATE(307),
    [sym__datevalue] = STATE(300),
    [sym__rate] = STATE(300),
    [sym__money] = STATE(300),
    [sym__value] = STATE(300),
    [sym__format] = STATE(300),
    [sym__segment] = STATE(300),
    [sym__charactersearch] = STATE(300),
    [sym__length] = STATE(300),
    [sym__fileopen] = STATE(300),
    [sym__filereadline] = STATE(300),
    [sym_expression] = STATE(317),
    [sym_assignment_expression] = STATE(301),
    [sym__lhs_expression] = STATE(507),
    [sym_parenthesized_expression] = STATE(307),
    [sym_binary_expression] = STATE(301),
    [sym_primary_expression] = STATE(301),
    [aux_sym_keyword_token1] = ACTIONS(317),
    [aux_sym_keyword_token2] = ACTIONS(317),
    [aux_sym_keyword_token3] = ACTIONS(317),
    [aux_sym_keyword_token4] = ACTIONS(317),
    [aux_sym_keyword_token5] = ACTIONS(317),
    [aux_sym_keyword_token6] = ACTIONS(317),
    [aux_sym_keyword_token7] = ACTIONS(317),
    [aux_sym_keyword_token8] = ACTIONS(317),
    [aux_sym_keyword_token9] = ACTIONS(319),
    [aux_sym_keyword_token10] = ACTIONS(321),
    [aux_sym_keyword_token11] = ACTIONS(323),
    [aux_sym_keyword_token12] = ACTIONS(317),
    [aux_sym_keyword_token13] = ACTIONS(317),
    [aux_sym_keyword_token14] = ACTIONS(325),
    [aux_sym_keyword_token15] = ACTIONS(327),
    [aux_sym_keyword_token16] = ACTIONS(329),
    [aux_sym_keyword_token17] = ACTIONS(331),
    [aux_sym_keyword_token18] = ACTIONS(333),
    [aux_sym_keyword_token19] = ACTIONS(335),
    [aux_sym_keyword_token20] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [aux_sym__identifier_token1] = ACTIONS(345),
    [sym_number] = ACTIONS(347),
    [sym_money] = ACTIONS(349),
    [sym_date] = ACTIONS(349),
    [sym_rate] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(351),
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
  [48] = {
    [sym_keyword] = STATE(307),
    [sym_string_literal] = STATE(307),
    [sym__identifier] = STATE(253),
    [sym_identifier] = STATE(302),
    [sym__array_identifier] = STATE(255),
    [sym_include_statement] = STATE(301),
    [sym_database_field] = STATE(301),
    [sym_special_function] = STATE(307),
    [sym__datevalue] = STATE(300),
    [sym__rate] = STATE(300),
    [sym__money] = STATE(300),
    [sym__value] = STATE(300),
    [sym__format] = STATE(300),
    [sym__segment] = STATE(300),
    [sym__charactersearch] = STATE(300),
    [sym__length] = STATE(300),
    [sym__fileopen] = STATE(300),
    [sym__filereadline] = STATE(300),
    [sym_expression] = STATE(333),
    [sym_assignment_expression] = STATE(301),
    [sym__lhs_expression] = STATE(507),
    [sym_parenthesized_expression] = STATE(307),
    [sym_binary_expression] = STATE(301),
    [sym_primary_expression] = STATE(301),
    [aux_sym_keyword_token1] = ACTIONS(317),
    [aux_sym_keyword_token2] = ACTIONS(317),
    [aux_sym_keyword_token3] = ACTIONS(317),
    [aux_sym_keyword_token4] = ACTIONS(317),
    [aux_sym_keyword_token5] = ACTIONS(317),
    [aux_sym_keyword_token6] = ACTIONS(317),
    [aux_sym_keyword_token7] = ACTIONS(317),
    [aux_sym_keyword_token8] = ACTIONS(317),
    [aux_sym_keyword_token9] = ACTIONS(319),
    [aux_sym_keyword_token10] = ACTIONS(321),
    [aux_sym_keyword_token11] = ACTIONS(323),
    [aux_sym_keyword_token12] = ACTIONS(317),
    [aux_sym_keyword_token13] = ACTIONS(317),
    [aux_sym_keyword_token14] = ACTIONS(325),
    [aux_sym_keyword_token15] = ACTIONS(327),
    [aux_sym_keyword_token16] = ACTIONS(329),
    [aux_sym_keyword_token17] = ACTIONS(331),
    [aux_sym_keyword_token18] = ACTIONS(333),
    [aux_sym_keyword_token19] = ACTIONS(335),
    [aux_sym_keyword_token20] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_record_type] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [aux_sym__identifier_token1] = ACTIONS(345),
    [sym_number] = ACTIONS(347),
    [sym_money] = ACTIONS(349),
    [sym_date] = ACTIONS(349),
    [sym_rate] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(351),
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
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(130), 1,
      sym_expression,
    STATE(172), 1,
      sym_identifier,
    STATE(463), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(124), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(171), 5,
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
    STATE(170), 10,
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
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(129), 1,
      sym_expression,
    STATE(172), 1,
      sym_identifier,
    STATE(463), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(124), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(171), 5,
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
    STATE(170), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(327), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(182), 1,
      sym_expression,
    STATE(193), 1,
      sym_identifier,
    STATE(482), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(204), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(190), 5,
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
    STATE(187), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(328), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(329), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(330), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(316), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(183), 1,
      sym_expression,
    STATE(193), 1,
      sym_identifier,
    STATE(482), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(204), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(190), 5,
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
    STATE(187), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(332), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(184), 1,
      sym_expression,
    STATE(193), 1,
      sym_identifier,
    STATE(482), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(204), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(190), 5,
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
    STATE(187), 10,
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
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(185), 1,
      sym_expression,
    STATE(193), 1,
      sym_identifier,
    STATE(482), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(204), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(190), 5,
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
    STATE(187), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(311), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(334), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(325), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(193), 1,
      sym_identifier,
    STATE(197), 1,
      sym_expression,
    STATE(482), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(204), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(190), 5,
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
    STATE(187), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(331), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(315), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(312), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(313), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(292), 1,
      sym_expression,
    STATE(302), 1,
      sym_identifier,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(291), 1,
      sym_expression,
    STATE(302), 1,
      sym_identifier,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(290), 1,
      sym_expression,
    STATE(302), 1,
      sym_identifier,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(314), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(289), 1,
      sym_expression,
    STATE(302), 1,
      sym_identifier,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(288), 1,
      sym_expression,
    STATE(302), 1,
      sym_identifier,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(280), 1,
      sym_expression,
    STATE(302), 1,
      sym_identifier,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
  [3087] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(286), 1,
      sym_expression,
    STATE(302), 1,
      sym_identifier,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
  [3196] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(319), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
  [3305] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(320), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
  [3414] = 27,
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
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(176), 1,
      sym_expression,
    STATE(193), 1,
      sym_identifier,
    STATE(482), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(204), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(190), 5,
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
    STATE(187), 10,
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
  [3523] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(324), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
  [3632] = 28,
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
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(142), 1,
      sym_expression,
    STATE(172), 1,
      sym_identifier,
    STATE(463), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(124), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(171), 5,
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
    STATE(170), 10,
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
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(128), 1,
      sym_expression,
    STATE(172), 1,
      sym_identifier,
    STATE(463), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(124), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(171), 5,
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
    STATE(170), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(321), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(181), 1,
      sym_expression,
    STATE(193), 1,
      sym_identifier,
    STATE(482), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(204), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(190), 5,
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
    STATE(187), 10,
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
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(131), 1,
      sym_expression,
    STATE(172), 1,
      sym_identifier,
    STATE(463), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(124), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(171), 5,
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
    STATE(170), 10,
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
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(132), 1,
      sym_expression,
    STATE(172), 1,
      sym_identifier,
    STATE(463), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(124), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(171), 5,
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
    STATE(170), 10,
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
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(133), 1,
      sym_expression,
    STATE(172), 1,
      sym_identifier,
    STATE(463), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(124), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(171), 5,
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
    STATE(170), 10,
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
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(134), 1,
      sym_expression,
    STATE(172), 1,
      sym_identifier,
    STATE(463), 1,
      sym__lhs_expression,
    ACTIONS(63), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(124), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(171), 5,
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
    STATE(170), 10,
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
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(180), 1,
      sym_expression,
    STATE(193), 1,
      sym_identifier,
    STATE(482), 1,
      sym__lhs_expression,
    ACTIONS(121), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(204), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(190), 5,
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
    STATE(187), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(326), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(323), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(319), 1,
      aux_sym_keyword_token9,
    ACTIONS(321), 1,
      aux_sym_keyword_token10,
    ACTIONS(323), 1,
      aux_sym_keyword_token11,
    ACTIONS(325), 1,
      aux_sym_keyword_token14,
    ACTIONS(327), 1,
      aux_sym_keyword_token15,
    ACTIONS(329), 1,
      aux_sym_keyword_token16,
    ACTIONS(331), 1,
      aux_sym_keyword_token17,
    ACTIONS(333), 1,
      aux_sym_keyword_token18,
    ACTIONS(335), 1,
      aux_sym_keyword_token19,
    ACTIONS(337), 1,
      aux_sym_keyword_token20,
    ACTIONS(339), 1,
      sym_record_type,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym__identifier_token1,
    ACTIONS(347), 1,
      sym_number,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(302), 1,
      sym_identifier,
    STATE(322), 1,
      sym_expression,
    STATE(507), 1,
      sym__lhs_expression,
    ACTIONS(349), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(307), 4,
      sym_keyword,
      sym_string_literal,
      sym_special_function,
      sym_parenthesized_expression,
    STATE(301), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(317), 10,
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
    STATE(300), 10,
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
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(462), 1,
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
  [5187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [5241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 16,
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
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [5293] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym__identifier_token1,
    STATE(234), 1,
      sym__identifier,
    STATE(236), 1,
      sym__array_identifier,
    STATE(239), 1,
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
  [5353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 16,
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
      anon_sym_COLON,
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
  [5405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 16,
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
      anon_sym_COLON,
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
  [5457] = 3,
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
  [5508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(522), 1,
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
  [5567] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym__identifier_token1,
    STATE(242), 1,
      sym__identifier,
    STATE(244), 1,
      sym__array_identifier,
    STATE(250), 1,
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
  [5626] = 3,
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
  [5676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 14,
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
  [5726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 14,
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
    ACTIONS(431), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [5776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 14,
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
  [5826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 14,
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
    ACTIONS(439), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [5876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COLON,
    ACTIONS(441), 13,
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
    ACTIONS(443), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [5928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 14,
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
    ACTIONS(449), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [5978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 14,
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
    ACTIONS(453), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_COLON,
    ACTIONS(455), 13,
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
    ACTIONS(457), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 14,
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
  [6130] = 5,
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
    ACTIONS(465), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(467), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(441), 12,
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
    ACTIONS(443), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6234] = 3,
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
    ACTIONS(473), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 13,
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
    ACTIONS(477), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6332] = 5,
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
    ACTIONS(479), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(481), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 13,
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
    ACTIONS(485), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6434] = 5,
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
    ACTIONS(487), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(489), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 13,
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
    ACTIONS(493), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6536] = 3,
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
    ACTIONS(497), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
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
  [6636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
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
  [6687] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_GT,
    ACTIONS(513), 1,
      anon_sym_LT,
    ACTIONS(507), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(509), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 10,
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
    ACTIONS(505), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6744] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_GT,
    ACTIONS(513), 1,
      anon_sym_LT,
    ACTIONS(507), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(509), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(515), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(503), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(505), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [6803] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_GT,
    ACTIONS(513), 1,
      anon_sym_LT,
    ACTIONS(517), 1,
      anon_sym_AND,
    ACTIONS(507), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(509), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(515), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(503), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
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
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [6864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 11,
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
  [6915] = 3,
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
  [6964] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(509), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 11,
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
    ACTIONS(505), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7017] = 3,
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
    ACTIONS(521), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
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
  [7117] = 5,
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
  [7170] = 4,
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
  [7221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 13,
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
    ACTIONS(533), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7270] = 5,
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
    ACTIONS(535), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(537), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
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
  [7374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
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
  [7425] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_GT,
    ACTIONS(513), 1,
      anon_sym_LT,
    ACTIONS(517), 1,
      anon_sym_AND,
    ACTIONS(547), 1,
      anon_sym_OR,
    ACTIONS(507), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(509), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(515), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(543), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(545), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7488] = 5,
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
    ACTIONS(549), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(551), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7541] = 3,
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
  [7590] = 3,
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
  [7639] = 3,
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
  [7688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 13,
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
    ACTIONS(567), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 13,
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
    ACTIONS(571), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 13,
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
    ACTIONS(575), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 13,
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
    ACTIONS(579), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 13,
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
    ACTIONS(583), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 13,
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
    ACTIONS(587), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [7982] = 5,
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
    ACTIONS(589), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(591), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
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
  [8086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 12,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
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
  [8188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 13,
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
    ACTIONS(601), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8286] = 5,
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
    ACTIONS(603), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(605), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
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
  [8390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_COLON,
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
  [8439] = 5,
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
    ACTIONS(609), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(611), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
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
  [8543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_COLON,
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
  [8592] = 5,
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
    ACTIONS(615), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(617), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8645] = 5,
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
    ACTIONS(619), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(621), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8698] = 3,
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
  [8747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_COLON,
    ACTIONS(455), 12,
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
    ACTIONS(457), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8798] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_GT,
    ACTIONS(513), 1,
      anon_sym_LT,
    ACTIONS(517), 1,
      anon_sym_AND,
    ACTIONS(547), 1,
      anon_sym_OR,
    ACTIONS(507), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(509), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(515), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(625), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(627), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 13,
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
    ACTIONS(631), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 13,
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
    ACTIONS(635), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [8959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_EQ,
    ACTIONS(491), 12,
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
    ACTIONS(493), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
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
  [9060] = 3,
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
    ACTIONS(473), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 12,
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
    ACTIONS(477), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_GT,
    ACTIONS(647), 1,
      anon_sym_LT,
    ACTIONS(641), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(643), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(505), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9212] = 3,
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
  [9260] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_GT,
    ACTIONS(647), 1,
      anon_sym_LT,
    ACTIONS(651), 1,
      anon_sym_AND,
    ACTIONS(653), 1,
      anon_sym_OR,
    ACTIONS(641), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(643), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(649), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(625), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(627), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9322] = 5,
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
    ACTIONS(479), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(481), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9374] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_GT,
    ACTIONS(647), 1,
      anon_sym_LT,
    ACTIONS(641), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(643), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(649), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(503), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(505), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9432] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_GT,
    ACTIONS(647), 1,
      anon_sym_LT,
    ACTIONS(651), 1,
      anon_sym_AND,
    ACTIONS(641), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(643), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(649), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(503), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
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
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [9492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 10,
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
  [9542] = 3,
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
  [9590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(643), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 10,
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
    ACTIONS(505), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9642] = 3,
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
    ACTIONS(521), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 12,
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
    ACTIONS(571), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 12,
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
    ACTIONS(631), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 12,
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
    ACTIONS(575), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9834] = 5,
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
    ACTIONS(487), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(489), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 12,
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
    ACTIONS(635), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 12,
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
    ACTIONS(579), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [9982] = 5,
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
    ACTIONS(535), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(537), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_EQ,
    ACTIONS(491), 11,
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
    ACTIONS(493), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 12,
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
    ACTIONS(583), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 12,
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
    ACTIONS(587), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 12,
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
    ACTIONS(439), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10228] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_GT,
    ACTIONS(647), 1,
      anon_sym_LT,
    ACTIONS(651), 1,
      anon_sym_AND,
    ACTIONS(653), 1,
      anon_sym_OR,
    ACTIONS(641), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(643), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(649), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(543), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(545), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10290] = 5,
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
    ACTIONS(603), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(605), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10342] = 5,
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
    ACTIONS(609), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(611), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10394] = 3,
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
    ACTIONS(453), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10442] = 5,
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
    ACTIONS(615), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(617), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10494] = 3,
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
  [10542] = 3,
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
  [10590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 12,
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
    ACTIONS(493), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
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
  [10688] = 5,
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
    ACTIONS(619), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(621), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
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
  [10790] = 3,
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
  [10838] = 5,
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
  [10890] = 3,
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
    ACTIONS(497), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 12,
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
    ACTIONS(533), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [10986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
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
  [11036] = 3,
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
  [11084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
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
  [11134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
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
  [11184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
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
  [11234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 12,
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
    ACTIONS(567), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
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
  [11332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
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
  [11382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
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
  [11432] = 3,
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
  [11480] = 5,
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
    ACTIONS(589), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(591), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11532] = 5,
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
    ACTIONS(549), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(551), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 12,
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
    ACTIONS(601), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 12,
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
    ACTIONS(485), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(675), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(679), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(683), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(687), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(691), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(695), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [11956] = 3,
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
  [11995] = 3,
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
  [12034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      aux_sym_keyword_token6,
    ACTIONS(625), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(627), 22,
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
  [12116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(703), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(707), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(711), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(627), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(715), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 6,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12390] = 3,
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
  [12428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(401), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12466] = 3,
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
  [12504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(707), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(627), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      aux_sym_keyword_token6,
    ACTIONS(625), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(627), 22,
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
  [12620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(703), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(711), 23,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
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
  [12696] = 3,
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
  [12734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(399), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_COLON,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [12761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 15,
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
  [12788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_number,
    ACTIONS(729), 1,
      anon_sym_COLON,
    ACTIONS(731), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(725), 11,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [12816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT,
    ACTIONS(399), 15,
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
  [12840] = 3,
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
  [12864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_number,
    ACTIONS(735), 1,
      anon_sym_COLON,
    ACTIONS(443), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(441), 11,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [12892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(399), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_COLON,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [12916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(407), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_COLON,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [12940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_number,
    ACTIONS(741), 1,
      anon_sym_COLON,
    ACTIONS(743), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(737), 11,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [12968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(411), 13,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_COLON,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [12992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_number,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(457), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(455), 11,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [13020] = 3,
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
  [13044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(749), 1,
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
  [13069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(751), 1,
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
  [13094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(753), 1,
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
  [13119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(755), 1,
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
  [13144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(757), 1,
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
  [13169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(759), 1,
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
  [13194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(761), 1,
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
  [13219] = 3,
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
  [13242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(763), 1,
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
  [13267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(765), 1,
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
  [13292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(767), 1,
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
  [13317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_number,
    ACTIONS(559), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(557), 11,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [13342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_number,
    ACTIONS(533), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(531), 11,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [13367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_number,
    ACTIONS(555), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(553), 11,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
  [13392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(483), 13,
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
  [13414] = 3,
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
  [13436] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 6,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [13466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LT,
    ACTIONS(569), 13,
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
  [13488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LT,
    ACTIONS(573), 13,
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
  [13510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LT,
    ACTIONS(577), 13,
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
  [13532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LT,
    ACTIONS(581), 13,
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
  [13554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LT,
    ACTIONS(585), 13,
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
  [13576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 8,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
  [13604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(437), 13,
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
  [13626] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_OR,
  [13658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LT,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 11,
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
  [13682] = 3,
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
  [13704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(503), 9,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
      anon_sym_GT,
  [13730] = 3,
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
  [13752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LT,
    ACTIONS(599), 13,
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
  [13774] = 3,
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
  [13796] = 3,
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
  [13818] = 3,
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
  [13840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LT,
    ACTIONS(475), 13,
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
  [13862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LT,
    ACTIONS(565), 13,
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
  [13884] = 3,
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
  [13906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LT,
    ACTIONS(629), 13,
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
  [13928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_LT,
    ACTIONS(633), 13,
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
  [13950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LT,
    ACTIONS(637), 1,
      anon_sym_EQ,
    ACTIONS(491), 12,
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
  [13974] = 3,
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
  [13996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LT,
    ACTIONS(495), 13,
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
  [14018] = 3,
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
  [14040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(429), 13,
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
  [14062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LT,
    ACTIONS(491), 13,
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
  [14084] = 3,
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
  [14106] = 3,
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
  [14128] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(787), 1,
      aux_sym_keyword_token7,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14159] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14190] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14221] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14252] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14283] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14314] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14345] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(803), 1,
      aux_sym_keyword_token4,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14376] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(805), 1,
      aux_sym_keyword_token4,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14407] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14438] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14469] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14500] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14531] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14562] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14593] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14624] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14655] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14686] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14717] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14748] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14779] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14810] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14841] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(835), 1,
      aux_sym_keyword_token7,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14872] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(785), 1,
      anon_sym_AND,
    ACTIONS(789), 1,
      anon_sym_OR,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(777), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [14903] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_keyword_token5,
    ACTIONS(841), 1,
      aux_sym__identifier_token1,
    ACTIONS(844), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(509), 1,
      sym_identifier,
    STATE(335), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(417), 2,
      sym_variable_declaration,
      sym_include_statement,
  [14933] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(847), 1,
      aux_sym_keyword_token5,
    ACTIONS(849), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(509), 1,
      sym_identifier,
    STATE(335), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(417), 2,
      sym_variable_declaration,
      sym_include_statement,
  [14963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    STATE(393), 1,
      sym_data_type,
    STATE(414), 1,
      sym_string_literal,
    ACTIONS(851), 7,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_data_type_token1,
      aux_sym_data_type_token2,
      aux_sym_data_type_token3,
      aux_sym_data_type_token4,
      aux_sym_data_type_token5,
  [14985] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(849), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      aux_sym_keyword_token5,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(509), 1,
      sym_identifier,
    STATE(336), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(417), 2,
      sym_variable_declaration,
      sym_include_statement,
  [15015] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(857), 1,
      sym_record_type,
    ACTIONS(859), 1,
      sym_number,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    ACTIONS(861), 2,
      sym_money,
      sym_rate,
    STATE(492), 2,
      sym_identifier,
      sym_database_field,
  [15042] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(857), 1,
      sym_record_type,
    ACTIONS(863), 1,
      sym_number,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    ACTIONS(865), 2,
      sym_money,
      sym_rate,
    STATE(468), 2,
      sym_identifier,
      sym_database_field,
  [15069] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    ACTIONS(857), 1,
      sym_record_type,
    ACTIONS(867), 1,
      sym_number,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    ACTIONS(869), 2,
      sym_money,
      sym_rate,
    STATE(535), 2,
      sym_identifier,
      sym_database_field,
  [15096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(483), 2,
      sym_string_literal,
      sym_identifier,
  [15116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      aux_sym__identifier_token1,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(526), 2,
      sym_string_literal,
      sym_identifier,
  [15136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(502), 2,
      sym_string_literal,
      sym_identifier,
  [15156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(491), 2,
      sym_string_literal,
      sym_identifier,
  [15176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(489), 2,
      sym_string_literal,
      sym_identifier,
  [15196] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(534), 2,
      sym_string_literal,
      sym_identifier,
  [15216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(533), 2,
      sym_string_literal,
      sym_identifier,
  [15236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(530), 2,
      sym_string_literal,
      sym_identifier,
  [15256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(529), 2,
      sym_string_literal,
      sym_identifier,
  [15276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(521), 2,
      sym_string_literal,
      sym_identifier,
  [15296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(456), 2,
      sym_string_literal,
      sym_identifier,
  [15316] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(476), 2,
      sym_string_literal,
      sym_identifier,
  [15336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(497), 2,
      sym_string_literal,
      sym_identifier,
  [15356] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(467), 2,
      sym_string_literal,
      sym_identifier,
  [15376] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(454), 2,
      sym_string_literal,
      sym_identifier,
  [15396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(465), 2,
      sym_string_literal,
      sym_identifier,
  [15416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(513), 2,
      sym_string_literal,
      sym_identifier,
  [15436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(514), 2,
      sym_string_literal,
      sym_identifier,
  [15456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(536), 2,
      sym_string_literal,
      sym_identifier,
  [15476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(532), 2,
      sym_string_literal,
      sym_identifier,
  [15496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(531), 2,
      sym_string_literal,
      sym_identifier,
  [15516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(520), 2,
      sym_string_literal,
      sym_identifier,
  [15536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(515), 2,
      sym_string_literal,
      sym_identifier,
  [15556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(523), 2,
      sym_string_literal,
      sym_identifier,
  [15576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(519), 2,
      sym_string_literal,
      sym_identifier,
  [15596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      aux_sym__identifier_token1,
    STATE(242), 1,
      sym__identifier,
    STATE(244), 1,
      sym__array_identifier,
    STATE(39), 2,
      sym_string_literal,
      sym_identifier,
  [15616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(518), 2,
      sym_string_literal,
      sym_identifier,
  [15636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(517), 2,
      sym_string_literal,
      sym_identifier,
  [15656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(516), 2,
      sym_string_literal,
      sym_identifier,
  [15676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(524), 2,
      sym_string_literal,
      sym_identifier,
  [15696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(503), 2,
      sym_string_literal,
      sym_identifier,
  [15716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(481), 2,
      sym_string_literal,
      sym_identifier,
  [15736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(501), 2,
      sym_string_literal,
      sym_identifier,
  [15756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(484), 2,
      sym_string_literal,
      sym_identifier,
  [15776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(525), 2,
      sym_string_literal,
      sym_identifier,
  [15796] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(493), 2,
      sym_string_literal,
      sym_identifier,
  [15816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(494), 2,
      sym_string_literal,
      sym_identifier,
  [15836] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(500), 2,
      sym_string_literal,
      sym_identifier,
  [15856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(498), 2,
      sym_string_literal,
      sym_identifier,
  [15876] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(496), 2,
      sym_string_literal,
      sym_identifier,
  [15896] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(499), 2,
      sym_string_literal,
      sym_identifier,
  [15916] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym__identifier_token1,
    STATE(252), 1,
      sym__identifier,
    STATE(258), 1,
      sym__array_identifier,
    STATE(262), 1,
      sym_identifier,
    STATE(294), 1,
      sym_field_name,
  [15935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      aux_sym__identifier_token1,
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(196), 1,
      sym_field_name,
  [15954] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym__identifier_token1,
    STATE(114), 1,
      sym_field_name,
    STATE(252), 1,
      sym__identifier,
    STATE(258), 1,
      sym__array_identifier,
    STATE(419), 1,
      sym_identifier,
  [15973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym__identifier_token1,
    STATE(111), 1,
      sym_field_name,
    STATE(252), 1,
      sym__identifier,
    STATE(258), 1,
      sym__array_identifier,
    STATE(419), 1,
      sym_identifier,
  [15992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym__identifier_token1,
    STATE(116), 1,
      sym_field_name,
    STATE(252), 1,
      sym__identifier,
    STATE(258), 1,
      sym__array_identifier,
    STATE(419), 1,
      sym_identifier,
  [16011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym__identifier_token1,
    ACTIONS(883), 1,
      sym_number,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(466), 1,
      sym_identifier,
  [16030] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(115), 1,
      sym_identifier,
    STATE(116), 1,
      sym_field_name,
  [16049] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      aux_sym__identifier_token1,
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(200), 1,
      sym_field_name,
  [16068] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      aux_sym__identifier_token1,
    STATE(155), 1,
      sym__identifier,
    STATE(157), 1,
      sym__array_identifier,
    STATE(168), 1,
      sym_identifier,
    STATE(208), 1,
      sym_field_name,
  [16087] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(114), 1,
      sym_field_name,
    STATE(115), 1,
      sym_identifier,
  [16106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      aux_sym_array_type_token1,
    ACTIONS(889), 1,
      anon_sym_POUND,
    STATE(433), 1,
      sym_array_type,
    ACTIONS(885), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [16123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      aux_sym__identifier_token1,
    STATE(99), 1,
      sym__identifier,
    STATE(100), 1,
      sym__array_identifier,
    STATE(111), 1,
      sym_field_name,
    STATE(115), 1,
      sym_identifier,
  [16142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym__identifier_token1,
    ACTIONS(891), 1,
      sym_number,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(506), 1,
      sym_identifier,
  [16161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym__identifier_token1,
    STATE(252), 1,
      sym__identifier,
    STATE(258), 1,
      sym__array_identifier,
    STATE(262), 1,
      sym_identifier,
    STATE(287), 1,
      sym_field_name,
  [16180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym__identifier_token1,
    ACTIONS(893), 1,
      sym_number,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(528), 1,
      sym_identifier,
  [16199] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym__identifier_token1,
    STATE(252), 1,
      sym__identifier,
    STATE(258), 1,
      sym__array_identifier,
    STATE(262), 1,
      sym_identifier,
    STATE(295), 1,
      sym_field_name,
  [16218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym__identifier_token1,
    ACTIONS(895), 1,
      sym_number,
    STATE(253), 1,
      sym__identifier,
    STATE(255), 1,
      sym__array_identifier,
    STATE(469), 1,
      sym_identifier,
  [16237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_POUND,
    ACTIONS(897), 3,
      aux_sym_keyword_token5,
      aux_sym_array_type_token1,
      aux_sym__identifier_token1,
  [16249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym__identifier_token1,
    STATE(32), 1,
      sym_identifier,
    STATE(242), 1,
      sym__identifier,
    STATE(244), 1,
      sym__array_identifier,
  [16265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym__identifier_token1,
    STATE(25), 1,
      sym_identifier,
    STATE(242), 1,
      sym__identifier,
    STATE(244), 1,
      sym__array_identifier,
  [16281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_array_type_repeat1,
  [16294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(440), 1,
      sym__identifier,
    ACTIONS(905), 2,
      aux_sym__identifier_token1,
      sym_number,
  [16305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_POUND,
    ACTIONS(417), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [16316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym__array_identifier_repeat1,
  [16329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(410), 1,
      sym__identifier,
    ACTIONS(911), 2,
      aux_sym__identifier_token1,
      sym_number,
  [16340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym__array_identifier_repeat1,
  [16353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym__array_identifier_repeat1,
  [16366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym__array_identifier_repeat1,
  [16379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(420), 1,
      sym__identifier,
    ACTIONS(919), 2,
      aux_sym__identifier_token1,
      sym_number,
  [16390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(424), 1,
      sym__identifier,
    ACTIONS(921), 2,
      aux_sym__identifier_token1,
      sym_number,
  [16401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym__array_identifier_repeat1,
  [16414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(885), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [16425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      aux_sym__array_identifier_repeat1,
  [16438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_array_type_repeat1,
  [16451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_POUND,
    ACTIONS(932), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [16462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym__array_identifier_repeat1,
  [16475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(938), 1,
      sym_number,
    ACTIONS(940), 1,
      anon_sym_COLON,
  [16488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym__array_identifier_repeat1,
  [16501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 1,
      sym_number,
    ACTIONS(946), 1,
      anon_sym_COLON,
  [16514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym__array_identifier_repeat1,
  [16527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(434), 1,
      sym__identifier,
    ACTIONS(950), 2,
      aux_sym__identifier_token1,
      sym_number,
  [16538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym__array_identifier_repeat1,
  [16551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      sym_number,
    ACTIONS(956), 1,
      anon_sym_COLON,
  [16564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_POUND,
    ACTIONS(485), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [16575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(958), 1,
      sym_number,
    ACTIONS(960), 1,
      anon_sym_COLON,
  [16588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_POUND,
    ACTIONS(962), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [16599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(415), 1,
      sym__identifier,
    ACTIONS(966), 2,
      aux_sym__identifier_token1,
      sym_number,
  [16610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym__array_identifier_repeat1,
  [16623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(406), 1,
      sym__identifier,
    ACTIONS(970), 2,
      aux_sym__identifier_token1,
      sym_number,
  [16634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_POUND,
    ACTIONS(972), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [16645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(976), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [16656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      aux_sym__array_identifier_repeat1,
  [16669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym__array_identifier_repeat1,
  [16682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_array_type_repeat1,
  [16695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    ACTIONS(989), 1,
      sym_number,
  [16705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_record_type,
    ACTIONS(993), 1,
      anon_sym_COLON,
  [16723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_string_literal,
  [16741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(995), 1,
      sym_number,
  [16751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_record_type,
    ACTIONS(999), 1,
      anon_sym_COLON,
  [16761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_record_type,
    ACTIONS(1003), 1,
      anon_sym_COLON,
  [16771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_record_type,
    ACTIONS(1007), 1,
      anon_sym_COLON,
  [16781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_string_literal,
  [16791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_record_type,
    ACTIONS(1011), 1,
      anon_sym_COLON,
  [16801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym_record_type,
    ACTIONS(1015), 1,
      anon_sym_COLON,
  [16811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym_record_type,
    ACTIONS(1019), 1,
      anon_sym_COLON,
  [16821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(1021), 1,
      sym_number,
  [16831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym_record_type,
    ACTIONS(1025), 1,
      anon_sym_COLON,
  [16841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      sym_string_literal,
  [16851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_string_literal,
  [16861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [16868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
  [16875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
  [16882] = 2,
    ACTIONS(1033), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1035), 1,
      sym_comment,
  [16889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      aux_sym_include_statement_token1,
  [16896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COLON,
  [16903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE,
  [16910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
  [16917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_EQ,
  [16924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_EQ,
  [16931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      ts_builtin_sym_end,
  [16938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [16945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym_keyword_token4,
  [16952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [16959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [16966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      aux_sym_keyword_token4,
  [16973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_COLON,
  [16980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      aux_sym_include_statement_token1,
  [16987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym_number,
  [16994] = 2,
    ACTIONS(1035), 1,
      sym_comment,
    ACTIONS(1067), 1,
      aux_sym_string_literal_token1,
  [17001] = 2,
    ACTIONS(1035), 1,
      sym_comment,
    ACTIONS(1069), 1,
      aux_sym_string_literal_token1,
  [17008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      aux_sym_include_statement_token1,
  [17015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
  [17022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_DQUOTE,
  [17029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      aux_sym_keyword_token5,
  [17036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      aux_sym_print_division_token2,
  [17043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_EQ,
  [17050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
  [17057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_EQ,
  [17064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [17071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [17078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym_keyword_token5,
  [17085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym_number,
  [17092] = 2,
    ACTIONS(1035), 1,
      sym_comment,
    ACTIONS(1095), 1,
      aux_sym_string_literal_token1,
  [17099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_include_statement_token1,
  [17106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
  [17113] = 2,
    ACTIONS(1035), 1,
      sym_comment,
    ACTIONS(1101), 1,
      aux_sym_string_literal_token1,
  [17120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
  [17127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
  [17134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
  [17141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
  [17148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_COLON,
  [17155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
  [17162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
  [17169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
  [17176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
  [17183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
  [17190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
  [17197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
  [17204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
  [17211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      sym_record_type,
  [17218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_DQUOTE,
  [17225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      aux_sym_for_statement_token1,
  [17232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_EQ,
  [17239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      aux_sym_keyword_token5,
  [17246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_EQ,
  [17253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_EQ,
  [17260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_EQ,
  [17267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_DQUOTE,
  [17274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
  [17281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
  [17288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
  [17295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
  [17302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
  [17309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
  [17316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
  [17323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
  [17330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
  [17337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_EQ,
  [17344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
  [17351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
  [17358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
  [17365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      aux_sym_keyword_token5,
  [17372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COLON,
  [17379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      aux_sym_for_statement_token1,
  [17386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
  [17393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
  [17400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
  [17407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
  [17414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
  [17421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
  [17428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
  [17435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
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
  [SMALL_STATE(79)] = 3196,
  [SMALL_STATE(80)] = 3305,
  [SMALL_STATE(81)] = 3414,
  [SMALL_STATE(82)] = 3523,
  [SMALL_STATE(83)] = 3632,
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
  [SMALL_STATE(100)] = 5241,
  [SMALL_STATE(101)] = 5293,
  [SMALL_STATE(102)] = 5353,
  [SMALL_STATE(103)] = 5405,
  [SMALL_STATE(104)] = 5457,
  [SMALL_STATE(105)] = 5508,
  [SMALL_STATE(106)] = 5567,
  [SMALL_STATE(107)] = 5626,
  [SMALL_STATE(108)] = 5676,
  [SMALL_STATE(109)] = 5726,
  [SMALL_STATE(110)] = 5776,
  [SMALL_STATE(111)] = 5826,
  [SMALL_STATE(112)] = 5876,
  [SMALL_STATE(113)] = 5928,
  [SMALL_STATE(114)] = 5978,
  [SMALL_STATE(115)] = 6028,
  [SMALL_STATE(116)] = 6080,
  [SMALL_STATE(117)] = 6130,
  [SMALL_STATE(118)] = 6183,
  [SMALL_STATE(119)] = 6234,
  [SMALL_STATE(120)] = 6283,
  [SMALL_STATE(121)] = 6332,
  [SMALL_STATE(122)] = 6385,
  [SMALL_STATE(123)] = 6434,
  [SMALL_STATE(124)] = 6487,
  [SMALL_STATE(125)] = 6536,
  [SMALL_STATE(126)] = 6585,
  [SMALL_STATE(127)] = 6636,
  [SMALL_STATE(128)] = 6687,
  [SMALL_STATE(129)] = 6744,
  [SMALL_STATE(130)] = 6803,
  [SMALL_STATE(131)] = 6864,
  [SMALL_STATE(132)] = 6915,
  [SMALL_STATE(133)] = 6964,
  [SMALL_STATE(134)] = 7017,
  [SMALL_STATE(135)] = 7066,
  [SMALL_STATE(136)] = 7117,
  [SMALL_STATE(137)] = 7170,
  [SMALL_STATE(138)] = 7221,
  [SMALL_STATE(139)] = 7270,
  [SMALL_STATE(140)] = 7323,
  [SMALL_STATE(141)] = 7374,
  [SMALL_STATE(142)] = 7425,
  [SMALL_STATE(143)] = 7488,
  [SMALL_STATE(144)] = 7541,
  [SMALL_STATE(145)] = 7590,
  [SMALL_STATE(146)] = 7639,
  [SMALL_STATE(147)] = 7688,
  [SMALL_STATE(148)] = 7737,
  [SMALL_STATE(149)] = 7786,
  [SMALL_STATE(150)] = 7835,
  [SMALL_STATE(151)] = 7884,
  [SMALL_STATE(152)] = 7933,
  [SMALL_STATE(153)] = 7982,
  [SMALL_STATE(154)] = 8035,
  [SMALL_STATE(155)] = 8086,
  [SMALL_STATE(156)] = 8137,
  [SMALL_STATE(157)] = 8188,
  [SMALL_STATE(158)] = 8237,
  [SMALL_STATE(159)] = 8286,
  [SMALL_STATE(160)] = 8339,
  [SMALL_STATE(161)] = 8390,
  [SMALL_STATE(162)] = 8439,
  [SMALL_STATE(163)] = 8492,
  [SMALL_STATE(164)] = 8543,
  [SMALL_STATE(165)] = 8592,
  [SMALL_STATE(166)] = 8645,
  [SMALL_STATE(167)] = 8698,
  [SMALL_STATE(168)] = 8747,
  [SMALL_STATE(169)] = 8798,
  [SMALL_STATE(170)] = 8861,
  [SMALL_STATE(171)] = 8910,
  [SMALL_STATE(172)] = 8959,
  [SMALL_STATE(173)] = 9010,
  [SMALL_STATE(174)] = 9060,
  [SMALL_STATE(175)] = 9108,
  [SMALL_STATE(176)] = 9156,
  [SMALL_STATE(177)] = 9212,
  [SMALL_STATE(178)] = 9260,
  [SMALL_STATE(179)] = 9322,
  [SMALL_STATE(180)] = 9374,
  [SMALL_STATE(181)] = 9432,
  [SMALL_STATE(182)] = 9492,
  [SMALL_STATE(183)] = 9542,
  [SMALL_STATE(184)] = 9590,
  [SMALL_STATE(185)] = 9642,
  [SMALL_STATE(186)] = 9690,
  [SMALL_STATE(187)] = 9738,
  [SMALL_STATE(188)] = 9786,
  [SMALL_STATE(189)] = 9834,
  [SMALL_STATE(190)] = 9886,
  [SMALL_STATE(191)] = 9934,
  [SMALL_STATE(192)] = 9982,
  [SMALL_STATE(193)] = 10034,
  [SMALL_STATE(194)] = 10084,
  [SMALL_STATE(195)] = 10132,
  [SMALL_STATE(196)] = 10180,
  [SMALL_STATE(197)] = 10228,
  [SMALL_STATE(198)] = 10290,
  [SMALL_STATE(199)] = 10342,
  [SMALL_STATE(200)] = 10394,
  [SMALL_STATE(201)] = 10442,
  [SMALL_STATE(202)] = 10494,
  [SMALL_STATE(203)] = 10542,
  [SMALL_STATE(204)] = 10590,
  [SMALL_STATE(205)] = 10638,
  [SMALL_STATE(206)] = 10688,
  [SMALL_STATE(207)] = 10740,
  [SMALL_STATE(208)] = 10790,
  [SMALL_STATE(209)] = 10838,
  [SMALL_STATE(210)] = 10890,
  [SMALL_STATE(211)] = 10938,
  [SMALL_STATE(212)] = 10986,
  [SMALL_STATE(213)] = 11036,
  [SMALL_STATE(214)] = 11084,
  [SMALL_STATE(215)] = 11134,
  [SMALL_STATE(216)] = 11184,
  [SMALL_STATE(217)] = 11234,
  [SMALL_STATE(218)] = 11282,
  [SMALL_STATE(219)] = 11332,
  [SMALL_STATE(220)] = 11382,
  [SMALL_STATE(221)] = 11432,
  [SMALL_STATE(222)] = 11480,
  [SMALL_STATE(223)] = 11532,
  [SMALL_STATE(224)] = 11584,
  [SMALL_STATE(225)] = 11632,
  [SMALL_STATE(226)] = 11680,
  [SMALL_STATE(227)] = 11726,
  [SMALL_STATE(228)] = 11772,
  [SMALL_STATE(229)] = 11818,
  [SMALL_STATE(230)] = 11864,
  [SMALL_STATE(231)] = 11910,
  [SMALL_STATE(232)] = 11956,
  [SMALL_STATE(233)] = 11995,
  [SMALL_STATE(234)] = 12034,
  [SMALL_STATE(235)] = 12075,
  [SMALL_STATE(236)] = 12116,
  [SMALL_STATE(237)] = 12155,
  [SMALL_STATE(238)] = 12194,
  [SMALL_STATE(239)] = 12233,
  [SMALL_STATE(240)] = 12272,
  [SMALL_STATE(241)] = 12311,
  [SMALL_STATE(242)] = 12350,
  [SMALL_STATE(243)] = 12390,
  [SMALL_STATE(244)] = 12428,
  [SMALL_STATE(245)] = 12466,
  [SMALL_STATE(246)] = 12504,
  [SMALL_STATE(247)] = 12542,
  [SMALL_STATE(248)] = 12580,
  [SMALL_STATE(249)] = 12620,
  [SMALL_STATE(250)] = 12658,
  [SMALL_STATE(251)] = 12696,
  [SMALL_STATE(252)] = 12734,
  [SMALL_STATE(253)] = 12761,
  [SMALL_STATE(254)] = 12788,
  [SMALL_STATE(255)] = 12816,
  [SMALL_STATE(256)] = 12840,
  [SMALL_STATE(257)] = 12864,
  [SMALL_STATE(258)] = 12892,
  [SMALL_STATE(259)] = 12916,
  [SMALL_STATE(260)] = 12940,
  [SMALL_STATE(261)] = 12968,
  [SMALL_STATE(262)] = 12992,
  [SMALL_STATE(263)] = 13020,
  [SMALL_STATE(264)] = 13044,
  [SMALL_STATE(265)] = 13069,
  [SMALL_STATE(266)] = 13094,
  [SMALL_STATE(267)] = 13119,
  [SMALL_STATE(268)] = 13144,
  [SMALL_STATE(269)] = 13169,
  [SMALL_STATE(270)] = 13194,
  [SMALL_STATE(271)] = 13219,
  [SMALL_STATE(272)] = 13242,
  [SMALL_STATE(273)] = 13267,
  [SMALL_STATE(274)] = 13292,
  [SMALL_STATE(275)] = 13317,
  [SMALL_STATE(276)] = 13342,
  [SMALL_STATE(277)] = 13367,
  [SMALL_STATE(278)] = 13392,
  [SMALL_STATE(279)] = 13414,
  [SMALL_STATE(280)] = 13436,
  [SMALL_STATE(281)] = 13466,
  [SMALL_STATE(282)] = 13488,
  [SMALL_STATE(283)] = 13510,
  [SMALL_STATE(284)] = 13532,
  [SMALL_STATE(285)] = 13554,
  [SMALL_STATE(286)] = 13576,
  [SMALL_STATE(287)] = 13604,
  [SMALL_STATE(288)] = 13626,
  [SMALL_STATE(289)] = 13658,
  [SMALL_STATE(290)] = 13682,
  [SMALL_STATE(291)] = 13704,
  [SMALL_STATE(292)] = 13730,
  [SMALL_STATE(293)] = 13752,
  [SMALL_STATE(294)] = 13774,
  [SMALL_STATE(295)] = 13796,
  [SMALL_STATE(296)] = 13818,
  [SMALL_STATE(297)] = 13840,
  [SMALL_STATE(298)] = 13862,
  [SMALL_STATE(299)] = 13884,
  [SMALL_STATE(300)] = 13906,
  [SMALL_STATE(301)] = 13928,
  [SMALL_STATE(302)] = 13950,
  [SMALL_STATE(303)] = 13974,
  [SMALL_STATE(304)] = 13996,
  [SMALL_STATE(305)] = 14018,
  [SMALL_STATE(306)] = 14040,
  [SMALL_STATE(307)] = 14062,
  [SMALL_STATE(308)] = 14084,
  [SMALL_STATE(309)] = 14106,
  [SMALL_STATE(310)] = 14128,
  [SMALL_STATE(311)] = 14159,
  [SMALL_STATE(312)] = 14190,
  [SMALL_STATE(313)] = 14221,
  [SMALL_STATE(314)] = 14252,
  [SMALL_STATE(315)] = 14283,
  [SMALL_STATE(316)] = 14314,
  [SMALL_STATE(317)] = 14345,
  [SMALL_STATE(318)] = 14376,
  [SMALL_STATE(319)] = 14407,
  [SMALL_STATE(320)] = 14438,
  [SMALL_STATE(321)] = 14469,
  [SMALL_STATE(322)] = 14500,
  [SMALL_STATE(323)] = 14531,
  [SMALL_STATE(324)] = 14562,
  [SMALL_STATE(325)] = 14593,
  [SMALL_STATE(326)] = 14624,
  [SMALL_STATE(327)] = 14655,
  [SMALL_STATE(328)] = 14686,
  [SMALL_STATE(329)] = 14717,
  [SMALL_STATE(330)] = 14748,
  [SMALL_STATE(331)] = 14779,
  [SMALL_STATE(332)] = 14810,
  [SMALL_STATE(333)] = 14841,
  [SMALL_STATE(334)] = 14872,
  [SMALL_STATE(335)] = 14903,
  [SMALL_STATE(336)] = 14933,
  [SMALL_STATE(337)] = 14963,
  [SMALL_STATE(338)] = 14985,
  [SMALL_STATE(339)] = 15015,
  [SMALL_STATE(340)] = 15042,
  [SMALL_STATE(341)] = 15069,
  [SMALL_STATE(342)] = 15096,
  [SMALL_STATE(343)] = 15116,
  [SMALL_STATE(344)] = 15136,
  [SMALL_STATE(345)] = 15156,
  [SMALL_STATE(346)] = 15176,
  [SMALL_STATE(347)] = 15196,
  [SMALL_STATE(348)] = 15216,
  [SMALL_STATE(349)] = 15236,
  [SMALL_STATE(350)] = 15256,
  [SMALL_STATE(351)] = 15276,
  [SMALL_STATE(352)] = 15296,
  [SMALL_STATE(353)] = 15316,
  [SMALL_STATE(354)] = 15336,
  [SMALL_STATE(355)] = 15356,
  [SMALL_STATE(356)] = 15376,
  [SMALL_STATE(357)] = 15396,
  [SMALL_STATE(358)] = 15416,
  [SMALL_STATE(359)] = 15436,
  [SMALL_STATE(360)] = 15456,
  [SMALL_STATE(361)] = 15476,
  [SMALL_STATE(362)] = 15496,
  [SMALL_STATE(363)] = 15516,
  [SMALL_STATE(364)] = 15536,
  [SMALL_STATE(365)] = 15556,
  [SMALL_STATE(366)] = 15576,
  [SMALL_STATE(367)] = 15596,
  [SMALL_STATE(368)] = 15616,
  [SMALL_STATE(369)] = 15636,
  [SMALL_STATE(370)] = 15656,
  [SMALL_STATE(371)] = 15676,
  [SMALL_STATE(372)] = 15696,
  [SMALL_STATE(373)] = 15716,
  [SMALL_STATE(374)] = 15736,
  [SMALL_STATE(375)] = 15756,
  [SMALL_STATE(376)] = 15776,
  [SMALL_STATE(377)] = 15796,
  [SMALL_STATE(378)] = 15816,
  [SMALL_STATE(379)] = 15836,
  [SMALL_STATE(380)] = 15856,
  [SMALL_STATE(381)] = 15876,
  [SMALL_STATE(382)] = 15896,
  [SMALL_STATE(383)] = 15916,
  [SMALL_STATE(384)] = 15935,
  [SMALL_STATE(385)] = 15954,
  [SMALL_STATE(386)] = 15973,
  [SMALL_STATE(387)] = 15992,
  [SMALL_STATE(388)] = 16011,
  [SMALL_STATE(389)] = 16030,
  [SMALL_STATE(390)] = 16049,
  [SMALL_STATE(391)] = 16068,
  [SMALL_STATE(392)] = 16087,
  [SMALL_STATE(393)] = 16106,
  [SMALL_STATE(394)] = 16123,
  [SMALL_STATE(395)] = 16142,
  [SMALL_STATE(396)] = 16161,
  [SMALL_STATE(397)] = 16180,
  [SMALL_STATE(398)] = 16199,
  [SMALL_STATE(399)] = 16218,
  [SMALL_STATE(400)] = 16237,
  [SMALL_STATE(401)] = 16249,
  [SMALL_STATE(402)] = 16265,
  [SMALL_STATE(403)] = 16281,
  [SMALL_STATE(404)] = 16294,
  [SMALL_STATE(405)] = 16305,
  [SMALL_STATE(406)] = 16316,
  [SMALL_STATE(407)] = 16329,
  [SMALL_STATE(408)] = 16340,
  [SMALL_STATE(409)] = 16353,
  [SMALL_STATE(410)] = 16366,
  [SMALL_STATE(411)] = 16379,
  [SMALL_STATE(412)] = 16390,
  [SMALL_STATE(413)] = 16401,
  [SMALL_STATE(414)] = 16414,
  [SMALL_STATE(415)] = 16425,
  [SMALL_STATE(416)] = 16438,
  [SMALL_STATE(417)] = 16451,
  [SMALL_STATE(418)] = 16462,
  [SMALL_STATE(419)] = 16475,
  [SMALL_STATE(420)] = 16488,
  [SMALL_STATE(421)] = 16501,
  [SMALL_STATE(422)] = 16514,
  [SMALL_STATE(423)] = 16527,
  [SMALL_STATE(424)] = 16538,
  [SMALL_STATE(425)] = 16551,
  [SMALL_STATE(426)] = 16564,
  [SMALL_STATE(427)] = 16575,
  [SMALL_STATE(428)] = 16588,
  [SMALL_STATE(429)] = 16599,
  [SMALL_STATE(430)] = 16610,
  [SMALL_STATE(431)] = 16623,
  [SMALL_STATE(432)] = 16634,
  [SMALL_STATE(433)] = 16645,
  [SMALL_STATE(434)] = 16656,
  [SMALL_STATE(435)] = 16669,
  [SMALL_STATE(436)] = 16682,
  [SMALL_STATE(437)] = 16695,
  [SMALL_STATE(438)] = 16705,
  [SMALL_STATE(439)] = 16713,
  [SMALL_STATE(440)] = 16723,
  [SMALL_STATE(441)] = 16731,
  [SMALL_STATE(442)] = 16741,
  [SMALL_STATE(443)] = 16751,
  [SMALL_STATE(444)] = 16761,
  [SMALL_STATE(445)] = 16771,
  [SMALL_STATE(446)] = 16781,
  [SMALL_STATE(447)] = 16791,
  [SMALL_STATE(448)] = 16801,
  [SMALL_STATE(449)] = 16811,
  [SMALL_STATE(450)] = 16821,
  [SMALL_STATE(451)] = 16831,
  [SMALL_STATE(452)] = 16841,
  [SMALL_STATE(453)] = 16851,
  [SMALL_STATE(454)] = 16861,
  [SMALL_STATE(455)] = 16868,
  [SMALL_STATE(456)] = 16875,
  [SMALL_STATE(457)] = 16882,
  [SMALL_STATE(458)] = 16889,
  [SMALL_STATE(459)] = 16896,
  [SMALL_STATE(460)] = 16903,
  [SMALL_STATE(461)] = 16910,
  [SMALL_STATE(462)] = 16917,
  [SMALL_STATE(463)] = 16924,
  [SMALL_STATE(464)] = 16931,
  [SMALL_STATE(465)] = 16938,
  [SMALL_STATE(466)] = 16945,
  [SMALL_STATE(467)] = 16952,
  [SMALL_STATE(468)] = 16959,
  [SMALL_STATE(469)] = 16966,
  [SMALL_STATE(470)] = 16973,
  [SMALL_STATE(471)] = 16980,
  [SMALL_STATE(472)] = 16987,
  [SMALL_STATE(473)] = 16994,
  [SMALL_STATE(474)] = 17001,
  [SMALL_STATE(475)] = 17008,
  [SMALL_STATE(476)] = 17015,
  [SMALL_STATE(477)] = 17022,
  [SMALL_STATE(478)] = 17029,
  [SMALL_STATE(479)] = 17036,
  [SMALL_STATE(480)] = 17043,
  [SMALL_STATE(481)] = 17050,
  [SMALL_STATE(482)] = 17057,
  [SMALL_STATE(483)] = 17064,
  [SMALL_STATE(484)] = 17071,
  [SMALL_STATE(485)] = 17078,
  [SMALL_STATE(486)] = 17085,
  [SMALL_STATE(487)] = 17092,
  [SMALL_STATE(488)] = 17099,
  [SMALL_STATE(489)] = 17106,
  [SMALL_STATE(490)] = 17113,
  [SMALL_STATE(491)] = 17120,
  [SMALL_STATE(492)] = 17127,
  [SMALL_STATE(493)] = 17134,
  [SMALL_STATE(494)] = 17141,
  [SMALL_STATE(495)] = 17148,
  [SMALL_STATE(496)] = 17155,
  [SMALL_STATE(497)] = 17162,
  [SMALL_STATE(498)] = 17169,
  [SMALL_STATE(499)] = 17176,
  [SMALL_STATE(500)] = 17183,
  [SMALL_STATE(501)] = 17190,
  [SMALL_STATE(502)] = 17197,
  [SMALL_STATE(503)] = 17204,
  [SMALL_STATE(504)] = 17211,
  [SMALL_STATE(505)] = 17218,
  [SMALL_STATE(506)] = 17225,
  [SMALL_STATE(507)] = 17232,
  [SMALL_STATE(508)] = 17239,
  [SMALL_STATE(509)] = 17246,
  [SMALL_STATE(510)] = 17253,
  [SMALL_STATE(511)] = 17260,
  [SMALL_STATE(512)] = 17267,
  [SMALL_STATE(513)] = 17274,
  [SMALL_STATE(514)] = 17281,
  [SMALL_STATE(515)] = 17288,
  [SMALL_STATE(516)] = 17295,
  [SMALL_STATE(517)] = 17302,
  [SMALL_STATE(518)] = 17309,
  [SMALL_STATE(519)] = 17316,
  [SMALL_STATE(520)] = 17323,
  [SMALL_STATE(521)] = 17330,
  [SMALL_STATE(522)] = 17337,
  [SMALL_STATE(523)] = 17344,
  [SMALL_STATE(524)] = 17351,
  [SMALL_STATE(525)] = 17358,
  [SMALL_STATE(526)] = 17365,
  [SMALL_STATE(527)] = 17372,
  [SMALL_STATE(528)] = 17379,
  [SMALL_STATE(529)] = 17386,
  [SMALL_STATE(530)] = 17393,
  [SMALL_STATE(531)] = 17400,
  [SMALL_STATE(532)] = 17407,
  [SMALL_STATE(533)] = 17414,
  [SMALL_STATE(534)] = 17421,
  [SMALL_STATE(535)] = 17428,
  [SMALL_STATE(536)] = 17435,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(98),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(44),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(43),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(167),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(101),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(163),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(160),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(156),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(154),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(141),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(140),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(137),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(135),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(127),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(126),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(443),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(63),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(473),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(99),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(124),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(124),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(471),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(402),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(105),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(47),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(48),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(221),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(106),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(220),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(219),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(218),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(216),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(215),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(214),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(212),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(207),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(173),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(205),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(448),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(92),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(474),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(155),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(204),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(204),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(488),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(401),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keywords, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keywords, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_division, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_division, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(338),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(40),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(508),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(485),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(478),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_identifier, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_identifier, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 5, .production_id = 11),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 5, .production_id = 11),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 4, .production_id = 10),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 4, .production_id = 10),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 4, .production_id = 9),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 4, .production_id = 9),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 4, .production_id = 8),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 4, .production_id = 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_database_field, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 2, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 2, .production_id = 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 3, .production_id = 6),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 3, .production_id = 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 5),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_database_field, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_database_field, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_division, 6),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_division, 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format, 6),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format, 6),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_block, 6),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_block, 6),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__charactersearch, 6),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__charactersearch, 6),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_block, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_block, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 4, .production_id = 7),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 4, .production_id = 7),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, .production_id = 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_no_block, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_no_block, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 3, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 3, .production_id = 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 3, .production_id = 5),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 3, .production_id = 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filereadline, 8),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filereadline, 8),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__segment, 8),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__segment, 8),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__length, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__length, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__money, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__money, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rate, 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rate, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datevalue, 4),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datevalue, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 9),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 9),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileopen, 12),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fileopen, 12),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_block, 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_block, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 4),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, .production_id = 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_block, 5),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_block, 5),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_function, 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_function, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lhs_expression, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 3),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_division, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 3),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_division, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 2),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_division, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_division, 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_division, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_division, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort_division, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_division, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_division, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_no_block, 3),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_no_block, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter_division, 4),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter_division, 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 3, .production_id = 7),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 3, .production_id = 7),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 2, .production_id = 5),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 2, .production_id = 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(99),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(475),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2), SHIFT_REPEAT(404),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_identifier_repeat1, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_statement, 1),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(472),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1049] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
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
