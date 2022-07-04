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
#define STATE_COUNT 576
#define LARGE_STATE_COUNT 50
#define SYMBOL_COUNT 144
#define ALIAS_COUNT 1
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 13

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
  aux_sym_keyword_token21 = 21,
  aux_sym_keyword_token22 = 22,
  aux_sym_target_division_token1 = 23,
  anon_sym_EQ = 24,
  aux_sym_define_division_token1 = 25,
  aux_sym_setup_division_token1 = 26,
  aux_sym_select_division_token1 = 27,
  aux_sym_sort_division_token1 = 28,
  aux_sym_letter_division_token1 = 29,
  aux_sym_print_division_token1 = 30,
  aux_sym_print_division_token2 = 31,
  aux_sym_total_division_token1 = 32,
  sym_record_type = 33,
  aux_sym_data_type_token1 = 34,
  aux_sym_data_type_token2 = 35,
  aux_sym_data_type_token3 = 36,
  aux_sym_data_type_token4 = 37,
  aux_sym_array_type_token1 = 38,
  anon_sym_LPAREN = 39,
  anon_sym_COMMA = 40,
  anon_sym_RPAREN = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_string_literal_token1 = 43,
  aux_sym__identifier_token1 = 44,
  sym_number = 45,
  sym_money = 46,
  sym_date = 47,
  sym_rate = 48,
  anon_sym_POUND = 49,
  aux_sym_include_statement_token1 = 50,
  anon_sym_COLON = 51,
  aux_sym_special_keywords_token1 = 52,
  aux_sym_special_keywords_token2 = 53,
  aux_sym_special_keywords_token3 = 54,
  aux_sym_special_keywords_token4 = 55,
  aux_sym_special_keywords_token5 = 56,
  aux_sym_special_keywords_token6 = 57,
  aux_sym_special_keywords_token7 = 58,
  aux_sym_special_keywords_token8 = 59,
  aux_sym_special_keywords_token9 = 60,
  aux_sym_special_keywords_token10 = 61,
  aux_sym_special_keywords_token11 = 62,
  aux_sym_special_keywords_token12 = 63,
  aux_sym_special_keywords_token13 = 64,
  aux_sym_special_keywords_token14 = 65,
  aux_sym_special_keywords_token15 = 66,
  aux_sym_special_keywords_token16 = 67,
  aux_sym_special_keywords_token17 = 68,
  aux_sym_special_keywords_token18 = 69,
  aux_sym_special_keywords_token19 = 70,
  aux_sym_special_keywords_token20 = 71,
  aux_sym_special_keywords_token21 = 72,
  sym_comment = 73,
  anon_sym_AND = 74,
  anon_sym_OR = 75,
  anon_sym_PLUS = 76,
  anon_sym_DASH = 77,
  anon_sym_STAR = 78,
  anon_sym_SLASH = 79,
  anon_sym_LT_GT = 80,
  anon_sym_GT = 81,
  anon_sym_LT = 82,
  aux_sym_for_statement_token1 = 83,
  aux_sym_procedure_definition_token1 = 84,
  sym_source_file = 85,
  sym_keyword = 86,
  sym__optional_divisions = 87,
  sym_target_division = 88,
  sym_define_division = 89,
  sym_define_statement = 90,
  sym_setup_division = 91,
  sym_select_division = 92,
  sym_sort_division = 93,
  sym_letter_division = 94,
  sym_print_division = 95,
  sym_total_division = 96,
  sym_data_type = 97,
  sym_array_type = 98,
  sym_string_literal = 99,
  sym__identifier = 100,
  sym_identifier = 101,
  sym_array_identifier = 102,
  sym_subIndex = 103,
  sym_variable_declaration = 104,
  sym_include_statement = 105,
  sym_database_field = 106,
  sym_field_name = 107,
  sym_special_keywords = 108,
  sym_poweron_function = 109,
  sym__abs = 110,
  sym__datevalue = 111,
  sym__rate = 112,
  sym__money = 113,
  sym__value = 114,
  sym__format = 115,
  sym__segment = 116,
  sym__charactersearch = 117,
  sym__length = 118,
  sym__fileopen = 119,
  sym__filereadline = 120,
  sym_expression = 121,
  sym_assignment_expression = 122,
  sym__lhs_expression = 123,
  sym_parenthesized_expression = 124,
  sym_binary_expression = 125,
  sym_primary_expression = 126,
  sym_for_statement = 127,
  sym_while_statement = 128,
  sym_if_statement = 129,
  sym__if_statement_no_block = 130,
  sym__if_else_block = 131,
  sym__if_else_no_block = 132,
  sym__if_statement_block = 133,
  sym_statement = 134,
  sym_procedure_definition = 135,
  sym_procedure_call = 136,
  aux_sym_source_file_repeat1 = 137,
  aux_sym_source_file_repeat2 = 138,
  aux_sym_source_file_repeat3 = 139,
  aux_sym_define_division_repeat1 = 140,
  aux_sym_setup_division_repeat1 = 141,
  aux_sym_array_type_repeat1 = 142,
  aux_sym_subIndex_repeat1 = 143,
  alias_sym_name = 144,
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
  [aux_sym_keyword_token21] = "keyword_token21",
  [aux_sym_keyword_token22] = "keyword_token22",
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
  [sym_array_identifier] = "array_identifier",
  [sym_subIndex] = "subIndex",
  [sym_variable_declaration] = "variable_declaration",
  [sym_include_statement] = "include_statement",
  [sym_database_field] = "database_field",
  [sym_field_name] = "field_name",
  [sym_special_keywords] = "special_keywords",
  [sym_poweron_function] = "poweron_function",
  [sym__abs] = "_abs",
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
  [aux_sym_setup_division_repeat1] = "setup_division_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_subIndex_repeat1] = "subIndex_repeat1",
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
  [aux_sym_keyword_token21] = aux_sym_keyword_token21,
  [aux_sym_keyword_token22] = aux_sym_keyword_token22,
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
  [sym_array_identifier] = sym_array_identifier,
  [sym_subIndex] = sym_subIndex,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_include_statement] = sym_include_statement,
  [sym_database_field] = sym_database_field,
  [sym_field_name] = sym_field_name,
  [sym_special_keywords] = sym_special_keywords,
  [sym_poweron_function] = sym_poweron_function,
  [sym__abs] = sym__abs,
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
  [aux_sym_setup_division_repeat1] = aux_sym_setup_division_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_subIndex_repeat1] = aux_sym_subIndex_repeat1,
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
  [aux_sym_keyword_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token22] = {
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
  [sym_array_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_subIndex] = {
    .visible = true,
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
  [sym_poweron_function] = {
    .visible = true,
    .named = true,
  },
  [sym__abs] = {
    .visible = false,
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
  [aux_sym_setup_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subIndex_repeat1] = {
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
  field_name = 4,
  field_operator = 5,
  field_poweron = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_index] = "index",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_poweron] = "poweron",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_index, 1},
    {field_name, 0},
  [2] =
    {field_poweron, 2},
  [3] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [6] =
    {field_condition, 1},
  [7] =
    {field_index, 1},
  [8] =
    {field_index, 1},
    {field_index, 2},
  [10] =
    {field_index, 2},
  [11] =
    {field_index, 1},
    {field_index, 3},
  [13] =
    {field_index, 2},
    {field_index, 3},
  [15] =
    {field_index, 3},
  [16] =
    {field_index, 2},
    {field_index, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [2] = {
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
  [12] = {
    [0] = alias_sym_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__identifier, 2,
    sym__identifier,
    sym_identifier,
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
      if (eof) ADVANCE(835);
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '$') ADVANCE(810);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == ')') ADVANCE(946);
      if (lookahead == '*') ADVANCE(1615);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == ',') ADVANCE(945);
      if (lookahead == '-') ADVANCE(1613);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '/') ADVANCE(1616);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == ':') ADVANCE(1583);
      if (lookahead == '<') ADVANCE(1619);
      if (lookahead == '=') ADVANCE(880);
      if (lookahead == '>') ADVANCE(1618);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(362);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(430);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(546);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(672);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(61);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(248);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ']') ADVANCE(1604);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ']') ADVANCE(1604);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(1621);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '$') ADVANCE(1556);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(956);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1008);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(967);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1215);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1031);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(960);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(970);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1207);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1017);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(811);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '0') ADVANCE(1566);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1319);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(7)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1319);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (lookahead != 0 &&
          lookahead > '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1574);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(1556);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1041);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(956);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(964);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1184);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1298);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1032);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(973);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(960);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1099);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(971);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1413);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1114);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1123);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(1580);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(1580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(1580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(1579);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(1579);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(1579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == ')') ADVANCE(946);
      if (lookahead == '*') ADVANCE(1615);
      if (lookahead == '+') ADVANCE(1611);
      if (lookahead == ',') ADVANCE(945);
      if (lookahead == '-') ADVANCE(1614);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '/') ADVANCE(1616);
      if (lookahead == '0') ADVANCE(1566);
      if (lookahead == ':') ADVANCE(1583);
      if (lookahead == '<') ADVANCE(1619);
      if (lookahead == '=') ADVANCE(880);
      if (lookahead == '>') ADVANCE(1618);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(469);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(430);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(672);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(241);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(249);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == ')') ADVANCE(946);
      if (lookahead == '*') ADVANCE(1615);
      if (lookahead == '+') ADVANCE(1609);
      if (lookahead == ',') ADVANCE(945);
      if (lookahead == '-') ADVANCE(1612);
      if (lookahead == '/') ADVANCE(1616);
      if (lookahead == '<') ADVANCE(1619);
      if (lookahead == '=') ADVANCE(880);
      if (lookahead == '>') ADVANCE(1618);
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(36);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(350);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(823);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(820);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(1605);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(664);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(610);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(610);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(1607);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(1607);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(1603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(828);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(1557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1574);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(711);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(788);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(674);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(779);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(472);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(779);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(911);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(475);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(788);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(714);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(479);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(485);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(762);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1620);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(793);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(703);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(392);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(732);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(264);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(542);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 122:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(664);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(610);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 123:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(769);
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(623);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(598);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 126:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(310);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(627);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(681);
      END_STATE();
    case 127:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(620);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 128:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(620);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 129:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(776);
      END_STATE();
    case 130:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 131:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 132:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 133:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(276);
      END_STATE();
    case 134:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(390);
      END_STATE();
    case 135:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1585);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(894);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(610);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(587);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(425);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(802);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(295);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(616);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(562);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(584);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(267);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(375);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(704);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(736);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(578);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(741);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(844);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(933);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1593);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1587);
      END_STATE();
    case 184:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1589);
      END_STATE();
    case 185:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 186:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 187:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(777);
      END_STATE();
    case 188:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(437);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(775);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(552);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(594);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(558);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(407);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(563);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(580);
      END_STATE();
    case 209:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      END_STATE();
    case 210:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 211:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(796);
      END_STATE();
    case 218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1582);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1598);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1588);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1584);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1596);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(404);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 322:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 323:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(840);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 324:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(698);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(676);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 325:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(698);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 326:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(264);
      END_STATE();
    case 327:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(565);
      END_STATE();
    case 328:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(377);
      END_STATE();
    case 329:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(547);
      END_STATE();
    case 330:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(316);
      END_STATE();
    case 331:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 332:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(383);
      END_STATE();
    case 333:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(388);
      END_STATE();
    case 334:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 335:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(391);
      END_STATE();
    case 336:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(572);
      END_STATE();
    case 337:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(894);
      END_STATE();
    case 338:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1594);
      END_STATE();
    case 339:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(476);
      END_STATE();
    case 340:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(665);
      END_STATE();
    case 341:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(483);
      END_STATE();
    case 342:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(715);
      END_STATE();
    case 343:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(221);
      END_STATE();
    case 344:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 345:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 346:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(480);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      END_STATE();
    case 347:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(894);
      END_STATE();
    case 348:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(457);
      END_STATE();
    case 349:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(865);
      END_STATE();
    case 350:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1620);
      END_STATE();
    case 351:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(256);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 352:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      END_STATE();
    case 353:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(566);
      END_STATE();
    case 354:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(265);
      END_STATE();
    case 355:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 356:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(574);
      END_STATE();
    case 357:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(577);
      END_STATE();
    case 358:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(352);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 378:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 380:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 381:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(783);
      END_STATE();
    case 394:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(785);
      END_STATE();
    case 395:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 397:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 398:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 403:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 404:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 405:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 406:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 407:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 408:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 419:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 421:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(934);
      END_STATE();
    case 422:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(937);
      END_STATE();
    case 423:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(451);
      END_STATE();
    case 424:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(155);
      END_STATE();
    case 425:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(376);
      END_STATE();
    case 426:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(386);
      END_STATE();
    case 427:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(466);
      END_STATE();
    case 428:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(652);
      END_STATE();
    case 429:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(765);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(894);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(770);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(804);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(433);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(901);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(559);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(805);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 467:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 469:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(352);
      END_STATE();
    case 470:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(894);
      END_STATE();
    case 471:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 472:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 473:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(669);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(336);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 481:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 482:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(936);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(854);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1590);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1600);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(778);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(903);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(692);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(717);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 535:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 537:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 538:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 539:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 540:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 541:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 542:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 543:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 544:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1586);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(790);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(794);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 575:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 576:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 577:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 578:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 579:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 580:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(791);
      END_STATE();
    case 581:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 582:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 583:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 584:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 585:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(894);
      END_STATE();
    case 586:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(883);
      END_STATE();
    case 587:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 588:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(907);
      END_STATE();
    case 589:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(899);
      END_STATE();
    case 590:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(743);
      END_STATE();
    case 591:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(589);
      END_STATE();
    case 592:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 593:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 594:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 595:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 596:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(726);
      END_STATE();
    case 597:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 598:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(638);
      END_STATE();
    case 599:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(644);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(894);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(266);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 648:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 651:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 654:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 655:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 656:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 657:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 658:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 659:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 660:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 661:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 662:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 663:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 664:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(876);
      END_STATE();
    case 665:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(894);
      END_STATE();
    case 666:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 667:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1601);
      END_STATE();
    case 668:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1597);
      END_STATE();
    case 669:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1591);
      END_STATE();
    case 670:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(935);
      END_STATE();
    case 671:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1592);
      END_STATE();
    case 672:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      END_STATE();
    case 673:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 674:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      END_STATE();
    case 675:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      END_STATE();
    case 676:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 677:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 678:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(694);
      END_STATE();
    case 679:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(738);
      END_STATE();
    case 680:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      END_STATE();
    case 681:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 682:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      END_STATE();
    case 683:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      END_STATE();
    case 684:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(685);
      END_STATE();
    case 685:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      END_STATE();
    case 686:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      END_STATE();
    case 687:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      END_STATE();
    case 688:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      END_STATE();
    case 689:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      END_STATE();
    case 690:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      END_STATE();
    case 691:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      END_STATE();
    case 692:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 693:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 694:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      END_STATE();
    case 695:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(755);
      END_STATE();
    case 696:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      END_STATE();
    case 697:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(750);
      END_STATE();
    case 698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      END_STATE();
    case 699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(894);
      END_STATE();
    case 700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(887);
      END_STATE();
    case 701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(941);
      END_STATE();
    case 702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      END_STATE();
    case 703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(856);
      END_STATE();
    case 704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(885);
      END_STATE();
    case 705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(878);
      END_STATE();
    case 706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(862);
      END_STATE();
    case 707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1599);
      END_STATE();
    case 708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1602);
      END_STATE();
    case 709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(932);
      END_STATE();
    case 710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
      END_STATE();
    case 713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      END_STATE();
    case 714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(349);
      END_STATE();
    case 716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(803);
      END_STATE();
    case 717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(920);
      END_STATE();
    case 718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(915);
      END_STATE();
    case 721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(746);
      END_STATE();
    case 724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(582);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      END_STATE();
    case 728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      END_STATE();
    case 737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      END_STATE();
    case 739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      END_STATE();
    case 740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      END_STATE();
    case 744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      END_STATE();
    case 748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      END_STATE();
    case 749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      END_STATE();
    case 750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 753:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 754:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      END_STATE();
    case 755:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 756:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(662);
      END_STATE();
    case 758:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      END_STATE();
    case 759:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 760:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      END_STATE();
    case 761:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 762:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 763:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(586);
      END_STATE();
    case 764:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(476);
      END_STATE();
    case 765:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 766:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 767:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      END_STATE();
    case 768:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      END_STATE();
    case 769:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 770:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 771:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 772:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(510);
      END_STATE();
    case 773:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 774:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 775:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(643);
      END_STATE();
    case 776:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      END_STATE();
    case 777:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(894);
      END_STATE();
    case 778:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(295);
      END_STATE();
    case 779:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(368);
      END_STATE();
    case 780:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(309);
      END_STATE();
    case 781:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(237);
      END_STATE();
    case 782:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(403);
      END_STATE();
    case 783:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(385);
      END_STATE();
    case 784:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(283);
      END_STATE();
    case 785:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(292);
      END_STATE();
    case 786:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1595);
      END_STATE();
    case 787:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(931);
      END_STATE();
    case 788:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(564);
      END_STATE();
    case 789:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(462);
      END_STATE();
    case 790:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(667);
      END_STATE();
    case 791:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(671);
      END_STATE();
    case 792:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(359);
      END_STATE();
    case 793:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(197);
      END_STATE();
    case 794:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(538);
      END_STATE();
    case 795:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(581);
      END_STATE();
    case 796:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(417);
      END_STATE();
    case 797:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(468);
      END_STATE();
    case 798:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(894);
      END_STATE();
    case 799:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(942);
      END_STATE();
    case 800:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(869);
      END_STATE();
    case 801:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 802:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(917);
      END_STATE();
    case 803:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(592);
      END_STATE();
    case 804:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(687);
      END_STATE();
    case 805:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(688);
      END_STATE();
    case 806:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(109);
      END_STATE();
    case 807:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(110);
      END_STATE();
    case 808:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1570);
      END_STATE();
    case 809:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1571);
      END_STATE();
    case 810:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 811:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1574);
      END_STATE();
    case 812:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      END_STATE();
    case 813:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1573);
      END_STATE();
    case 814:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 815:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1578);
      END_STATE();
    case 816:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 817:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 818:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 819:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      END_STATE();
    case 820:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      END_STATE();
    case 821:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      END_STATE();
    case 822:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 823:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      END_STATE();
    case 824:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1572);
      END_STATE();
    case 825:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1557);
      END_STATE();
    case 826:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 827:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(825);
      END_STATE();
    case 828:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(827);
      END_STATE();
    case 829:
      if (eof) ADVANCE(835);
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '$') ADVANCE(1556);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == ')') ADVANCE(946);
      if (lookahead == '*') ADVANCE(1615);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == ',') ADVANCE(945);
      if (lookahead == '-') ADVANCE(1613);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '/') ADVANCE(1616);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == ':') ADVANCE(1583);
      if (lookahead == '<') ADVANCE(1619);
      if (lookahead == '=') ADVANCE(880);
      if (lookahead == '>') ADVANCE(1618);
      if (lookahead == 'A') ADVANCE(954);
      if (lookahead == 'O') ADVANCE(955);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'o') ADVANCE(1182);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(956);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1008);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(967);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1215);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1031);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(959);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(970);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1207);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1017);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(829)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 830:
      if (eof) ADVANCE(835);
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '$') ADVANCE(1556);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == '*') ADVANCE(1615);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(1613);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '/') ADVANCE(1616);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1619);
      if (lookahead == '=') ADVANCE(880);
      if (lookahead == '>') ADVANCE(1618);
      if (lookahead == 'A') ADVANCE(954);
      if (lookahead == 'O') ADVANCE(955);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'o') ADVANCE(1182);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(956);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1008);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(966);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1215);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1098);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1031);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(958);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(969);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1017);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(830)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 831:
      if (eof) ADVANCE(835);
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '$') ADVANCE(1556);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1027);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(956);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(957);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1215);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1363);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1098);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1030);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(958);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(968);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(983);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(977);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(831)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 832:
      if (eof) ADVANCE(835);
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '$') ADVANCE(1556);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(956);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1008);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(966);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1215);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1098);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1031);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(958);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(969);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1017);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(832)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 833:
      if (eof) ADVANCE(835);
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '$') ADVANCE(1556);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(956);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1008);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(967);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1215);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1031);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(959);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(970);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1207);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1017);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(833)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 834:
      if (eof) ADVANCE(835);
      if (lookahead == '"') ADVANCE(947);
      if (lookahead == '#') ADVANCE(1581);
      if (lookahead == '$') ADVANCE(1556);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(944);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '0') ADVANCE(1562);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1028);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(956);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1008);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(967);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1215);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1031);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(959);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(970);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1207);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1017);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(834)
      if (lookahead != 0 &&
          lookahead > '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1557);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(997);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_keyword_token20);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_keyword_token20);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_keyword_token21);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_keyword_token22);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_keyword_token22);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_target_division_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_define_division_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_setup_division_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_select_division_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_sort_division_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_letter_division_token1);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_print_division_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_print_division_token2);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_total_division_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_record_type);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(331);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(459);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(410);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(795);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(599);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1398);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(749);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == ' ') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1061);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1427);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1389);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1143);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1358);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1213);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1438);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1431);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1375);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1431);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(648);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(583);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(372);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(630);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_record_type);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_data_type_token1);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_data_type_token2);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_data_type_token3);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_data_type_token4);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(949);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(949);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(1621);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == ' ') ADVANCE(727);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '.') ADVANCE(819);
      if (lookahead == '\\') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(952);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1557);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'D') ADVANCE(1606);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'N') ADVANCE(953);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1455);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1069);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1412);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1305);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(1608);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(982);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1487);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1273);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1277);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1416);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(984);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1279);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1404);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1460);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1132);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1111);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1132);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1112);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1132);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1113);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(929);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(912);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1414);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1305);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1160);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1287);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1404);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1492);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(843);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1492);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(843);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1492);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1015);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(843);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1536);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1200);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1007);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1501);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1424);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1020);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1034);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1302);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1536);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1200);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1007);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1501);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1424);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1394);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1536);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1201);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1007);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1501);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1394);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1536);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1210);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1007);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1501);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1303);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1545);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1346);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1307);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1303);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1346);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1303);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1337);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1262);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1322);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1061);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1375);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1061);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1523);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1426);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1061);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1553);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1053);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1494);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1444);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1043);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1444);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1046);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1083);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1089);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1505);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1083);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1505);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1068);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1312);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1268);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1095);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1354);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1285);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1350);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1282);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1269);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1483);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1283);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1329);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1271);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1096);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1328);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1415);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1355);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1326);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1447);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1433);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1278);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1305);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(985);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1287);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1404);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1233);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1498);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1056);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1047);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1332);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1270);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1238);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1012);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1270);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1238);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1270);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1062);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1322);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1429);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1503);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1504);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1506);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1065);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1522);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1515);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1063);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1515);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1067);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1136);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1455);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1039);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1412);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1305);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1076);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1455);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1069);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1412);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1432);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1305);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1455);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1069);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1412);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1305);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1420);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1544);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1325);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1325);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1300);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1534);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1421);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1403);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(994);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(980);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1150);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1151);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1126);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(986);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1239);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1069);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1412);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1305);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1256);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1211);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1260);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1457);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1257);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1212);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1376);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1419);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1202);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1205);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1390);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1086);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1100);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1003);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1227);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1141);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1484);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1225);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1502);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1478);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1052);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1059);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1503);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1144);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1509);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1021);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1519);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1517);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1127);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(986);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1239);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(845);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(925);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1165);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1136);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1216);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1532);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1533);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1242);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1368);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1019);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1400);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1074);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(962);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1250);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1166);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1377);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1197);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1234);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1387);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1436);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1549);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1237);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1443);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1094);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1296);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1313);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1463);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(976);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1056);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1552);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(861);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1327);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1064);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1064);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1322);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1369);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1539);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1193);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1035);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1477);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1244);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1410);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1477);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1244);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1430);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1410);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1477);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1430);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1410);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1091);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1462);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1530);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1462);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1531);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1462);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1209);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1317);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1088);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1299);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1057);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1395);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1406);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1366);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1425);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1218);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1417);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1040);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1422);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1485);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1179);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1318);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1015);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1453);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1408);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1082);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1328);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1518);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1221);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1092);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1448);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1314);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1463);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(976);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1046);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1330);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1226);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1464);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1001);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1335);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1347);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1500);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1466);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1060);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1085);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1294);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1334);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1093);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1336);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1449);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1338);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1446);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1451);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1309);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1550);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(841);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1535);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(961);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(982);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1479);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1461);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1071);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1049);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1042);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1049);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1042);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1136);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1388);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1364);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1231);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1176);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1383);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1306);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1456);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1312);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1493);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1100);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1145);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1097);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1308);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1524);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1308);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1290);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(866);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(864);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1494);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1240);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1379);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1138);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1011);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1385);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1004);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1555);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1281);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1208);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1405);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1362);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1188);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1537);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1192);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1361);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1195);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1456);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1320);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1459);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1399);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1054);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1508);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1058);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1081);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1104);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1321);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1066);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1364);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1280);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1480);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1489);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1323);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1497);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1340);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1540);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1467);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1538);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(993);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1341);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1289);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1382);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1359);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1374);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1342);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1384);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1505);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1386);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1344);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1339);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1345);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1476);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(926);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(928);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1286);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1055);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1230);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1236);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1525);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(979);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1229);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(851);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(927);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(893);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(978);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1136);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1554);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1024);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1264);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1072);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1120);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1468);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1072);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1468);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1072);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1073);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1203);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1072);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1203);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1272);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1397);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1456);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1115);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1529);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(902);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1100);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1371);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1255);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1295);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1397);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1232);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1105);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1431);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1528);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1005);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1243);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1167);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1025);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1252);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1254);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1208);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1037);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1190);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1048);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1100);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1472);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1079);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1171);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1038);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1173);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1175);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1535);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(961);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1196);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1513);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1196);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(918);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(927);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(849);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(855);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1071);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1194);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1192);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1087);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1191);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1080);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1125);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1102);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1482);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1054);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1471);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1510);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(974);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1070);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1488);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1480);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1084);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1486);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1251);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1495);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1478);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1106);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1107);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1097);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1180);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1109);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1110);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1016);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1100);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1187);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1526);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1261);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1168);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1463);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(976);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1549);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1050);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1199);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1351);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(996);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1000);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1090);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1247);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1516);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1274);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1275);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1273);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1542);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1546);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1163);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1527);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1192);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1301);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1490);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1312);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(989);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1356);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1406);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1418);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1276);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1348);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1411);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1310);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1423);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1353);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1435);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1316);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1547);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1288);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1442);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1531);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(884);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(987);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1403);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(908);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(900);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1511);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1396);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(975);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1292);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1434);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1148);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1437);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(836);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(951);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(872);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1198);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1258);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1551);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1147);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1072);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1203);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1072);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1496);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1541);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1259);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1367);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(991);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1370);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1473);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1304);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1481);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1357);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(989);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(992);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1349);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1070);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1125);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1075);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(981);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1131);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1253);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1219);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1135);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1162);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1178);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1142);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1116);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1499);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1137);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1156);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1128);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(988);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(999);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1153);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1051);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1470);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(998);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1474);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1022);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1432);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1439);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(877);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1026);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1136);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1491);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1101);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1456);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1119);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1475);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1401);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1454);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1510);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1129);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1222);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1164);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1185);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1548);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1380);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1157);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1343);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1520);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1514);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1557);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(910);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(888);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(891);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(857);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(886);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(863);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1044);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(924);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1551);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1186);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1372);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1117);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1204);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(990);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(921);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1217);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(916);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1103);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1228);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1009);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1118);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1331);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1245);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1170);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1133);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1097);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1377);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1512);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1241);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1381);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1445);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1146);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1154);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1174);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1177);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1158);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1507);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1247);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1248);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1249);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1036);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1392);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1391);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1360);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1521);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1104);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1108);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1333);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1334);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1284);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1440);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1450);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1161);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1223);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1169);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1097);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(995);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1235);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1152);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(923);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1378);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1220);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1293);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1465);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1454);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1246);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1214);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1297);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(929);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(870);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(943);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1469);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1018);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(952);
      if (!aux_sym__identifier_token1_character_set_2(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1580);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '_') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1580);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '_') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1559);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1580);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '_') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1577);
      if (lookahead == '0') ADVANCE(1569);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(809);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(824);
      if (lookahead == '_') ADVANCE(813);
      if (lookahead == 'n') ADVANCE(1558);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1564);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1577);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '_') ADVANCE(821);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1577);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '_') ADVANCE(821);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1563);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1577);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '_') ADVANCE(821);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1564);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1576);
      if (lookahead == '0') ADVANCE(1573);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(808);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(809);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(824);
      if (lookahead == '_') ADVANCE(813);
      if (lookahead == 'n') ADVANCE(1558);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1576);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '_') ADVANCE(821);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '_') ADVANCE(813);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1573);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(814);
      if (lookahead == '_') ADVANCE(813);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1568);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(808);
      if (lookahead == 'n') ADVANCE(1558);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1570);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(809);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1571);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(824);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1572);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(813);
      if (lookahead == 'n') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1573);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1574);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '_') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym_money);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym_rate);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_special_keywords_token1);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_special_keywords_token2);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_special_keywords_token4);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_special_keywords_token5);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_special_keywords_token6);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_special_keywords_token7);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_special_keywords_token8);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_special_keywords_token9);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(411);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_special_keywords_token10);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_special_keywords_token11);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_special_keywords_token13);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_special_keywords_token14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_special_keywords_token15);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_special_keywords_token16);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_special_keywords_token17);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_special_keywords_token18);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_special_keywords_token19);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_special_keywords_token20);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(633);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_special_keywords_token21);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ']') ADVANCE(1604);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '\\') ADVANCE(39);
      if (!aux_sym__identifier_token1_character_set_1(lookahead)) ADVANCE(1557);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '$') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1574);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1574);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1574);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1574);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(1617);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_procedure_definition_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 831},
  [2] = {.lex_state = 831},
  [3] = {.lex_state = 832},
  [4] = {.lex_state = 832},
  [5] = {.lex_state = 832},
  [6] = {.lex_state = 832},
  [7] = {.lex_state = 832},
  [8] = {.lex_state = 829},
  [9] = {.lex_state = 829},
  [10] = {.lex_state = 829},
  [11] = {.lex_state = 829},
  [12] = {.lex_state = 833},
  [13] = {.lex_state = 833},
  [14] = {.lex_state = 833},
  [15] = {.lex_state = 833},
  [16] = {.lex_state = 833},
  [17] = {.lex_state = 833},
  [18] = {.lex_state = 833},
  [19] = {.lex_state = 833},
  [20] = {.lex_state = 833},
  [21] = {.lex_state = 833},
  [22] = {.lex_state = 833},
  [23] = {.lex_state = 833},
  [24] = {.lex_state = 833},
  [25] = {.lex_state = 833},
  [26] = {.lex_state = 833},
  [27] = {.lex_state = 833},
  [28] = {.lex_state = 833},
  [29] = {.lex_state = 833},
  [30] = {.lex_state = 833},
  [31] = {.lex_state = 833},
  [32] = {.lex_state = 829},
  [33] = {.lex_state = 829},
  [34] = {.lex_state = 833},
  [35] = {.lex_state = 833},
  [36] = {.lex_state = 833},
  [37] = {.lex_state = 833},
  [38] = {.lex_state = 833},
  [39] = {.lex_state = 833},
  [40] = {.lex_state = 833},
  [41] = {.lex_state = 833},
  [42] = {.lex_state = 833},
  [43] = {.lex_state = 833},
  [44] = {.lex_state = 833},
  [45] = {.lex_state = 829},
  [46] = {.lex_state = 829},
  [47] = {.lex_state = 833},
  [48] = {.lex_state = 833},
  [49] = {.lex_state = 831},
  [50] = {.lex_state = 831},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 830},
  [99] = {.lex_state = 830},
  [100] = {.lex_state = 829},
  [101] = {.lex_state = 832},
  [102] = {.lex_state = 829},
  [103] = {.lex_state = 829},
  [104] = {.lex_state = 829},
  [105] = {.lex_state = 829},
  [106] = {.lex_state = 829},
  [107] = {.lex_state = 829},
  [108] = {.lex_state = 829},
  [109] = {.lex_state = 829},
  [110] = {.lex_state = 829},
  [111] = {.lex_state = 829},
  [112] = {.lex_state = 829},
  [113] = {.lex_state = 829},
  [114] = {.lex_state = 829},
  [115] = {.lex_state = 829},
  [116] = {.lex_state = 829},
  [117] = {.lex_state = 829},
  [118] = {.lex_state = 829},
  [119] = {.lex_state = 829},
  [120] = {.lex_state = 829},
  [121] = {.lex_state = 829},
  [122] = {.lex_state = 829},
  [123] = {.lex_state = 829},
  [124] = {.lex_state = 829},
  [125] = {.lex_state = 829},
  [126] = {.lex_state = 829},
  [127] = {.lex_state = 829},
  [128] = {.lex_state = 829},
  [129] = {.lex_state = 829},
  [130] = {.lex_state = 829},
  [131] = {.lex_state = 829},
  [132] = {.lex_state = 829},
  [133] = {.lex_state = 829},
  [134] = {.lex_state = 829},
  [135] = {.lex_state = 829},
  [136] = {.lex_state = 829},
  [137] = {.lex_state = 829},
  [138] = {.lex_state = 829},
  [139] = {.lex_state = 829},
  [140] = {.lex_state = 829},
  [141] = {.lex_state = 829},
  [142] = {.lex_state = 829},
  [143] = {.lex_state = 829},
  [144] = {.lex_state = 829},
  [145] = {.lex_state = 829},
  [146] = {.lex_state = 829},
  [147] = {.lex_state = 829},
  [148] = {.lex_state = 829},
  [149] = {.lex_state = 829},
  [150] = {.lex_state = 829},
  [151] = {.lex_state = 829},
  [152] = {.lex_state = 829},
  [153] = {.lex_state = 829},
  [154] = {.lex_state = 829},
  [155] = {.lex_state = 829},
  [156] = {.lex_state = 829},
  [157] = {.lex_state = 829},
  [158] = {.lex_state = 829},
  [159] = {.lex_state = 829},
  [160] = {.lex_state = 829},
  [161] = {.lex_state = 829},
  [162] = {.lex_state = 829},
  [163] = {.lex_state = 829},
  [164] = {.lex_state = 829},
  [165] = {.lex_state = 829},
  [166] = {.lex_state = 829},
  [167] = {.lex_state = 829},
  [168] = {.lex_state = 829},
  [169] = {.lex_state = 829},
  [170] = {.lex_state = 829},
  [171] = {.lex_state = 829},
  [172] = {.lex_state = 829},
  [173] = {.lex_state = 829},
  [174] = {.lex_state = 829},
  [175] = {.lex_state = 829},
  [176] = {.lex_state = 829},
  [177] = {.lex_state = 829},
  [178] = {.lex_state = 829},
  [179] = {.lex_state = 829},
  [180] = {.lex_state = 829},
  [181] = {.lex_state = 829},
  [182] = {.lex_state = 829},
  [183] = {.lex_state = 829},
  [184] = {.lex_state = 829},
  [185] = {.lex_state = 829},
  [186] = {.lex_state = 829},
  [187] = {.lex_state = 829},
  [188] = {.lex_state = 829},
  [189] = {.lex_state = 829},
  [190] = {.lex_state = 829},
  [191] = {.lex_state = 829},
  [192] = {.lex_state = 829},
  [193] = {.lex_state = 829},
  [194] = {.lex_state = 829},
  [195] = {.lex_state = 829},
  [196] = {.lex_state = 829},
  [197] = {.lex_state = 829},
  [198] = {.lex_state = 829},
  [199] = {.lex_state = 829},
  [200] = {.lex_state = 829},
  [201] = {.lex_state = 829},
  [202] = {.lex_state = 829},
  [203] = {.lex_state = 829},
  [204] = {.lex_state = 829},
  [205] = {.lex_state = 829},
  [206] = {.lex_state = 829},
  [207] = {.lex_state = 829},
  [208] = {.lex_state = 829},
  [209] = {.lex_state = 829},
  [210] = {.lex_state = 829},
  [211] = {.lex_state = 829},
  [212] = {.lex_state = 829},
  [213] = {.lex_state = 829},
  [214] = {.lex_state = 829},
  [215] = {.lex_state = 829},
  [216] = {.lex_state = 829},
  [217] = {.lex_state = 829},
  [218] = {.lex_state = 829},
  [219] = {.lex_state = 829},
  [220] = {.lex_state = 829},
  [221] = {.lex_state = 829},
  [222] = {.lex_state = 829},
  [223] = {.lex_state = 829},
  [224] = {.lex_state = 829},
  [225] = {.lex_state = 829},
  [226] = {.lex_state = 829},
  [227] = {.lex_state = 829},
  [228] = {.lex_state = 829},
  [229] = {.lex_state = 829},
  [230] = {.lex_state = 829},
  [231] = {.lex_state = 829},
  [232] = {.lex_state = 829},
  [233] = {.lex_state = 829},
  [234] = {.lex_state = 829},
  [235] = {.lex_state = 829},
  [236] = {.lex_state = 829},
  [237] = {.lex_state = 829},
  [238] = {.lex_state = 832},
  [239] = {.lex_state = 832},
  [240] = {.lex_state = 832},
  [241] = {.lex_state = 832},
  [242] = {.lex_state = 832},
  [243] = {.lex_state = 832},
  [244] = {.lex_state = 834},
  [245] = {.lex_state = 833},
  [246] = {.lex_state = 834},
  [247] = {.lex_state = 833},
  [248] = {.lex_state = 833},
  [249] = {.lex_state = 833},
  [250] = {.lex_state = 833},
  [251] = {.lex_state = 833},
  [252] = {.lex_state = 833},
  [253] = {.lex_state = 833},
  [254] = {.lex_state = 833},
  [255] = {.lex_state = 833},
  [256] = {.lex_state = 833},
  [257] = {.lex_state = 833},
  [258] = {.lex_state = 833},
  [259] = {.lex_state = 833},
  [260] = {.lex_state = 833},
  [261] = {.lex_state = 833},
  [262] = {.lex_state = 833},
  [263] = {.lex_state = 833},
  [264] = {.lex_state = 833},
  [265] = {.lex_state = 833},
  [266] = {.lex_state = 833},
  [267] = {.lex_state = 833},
  [268] = {.lex_state = 833},
  [269] = {.lex_state = 833},
  [270] = {.lex_state = 833},
  [271] = {.lex_state = 833},
  [272] = {.lex_state = 833},
  [273] = {.lex_state = 833},
  [274] = {.lex_state = 833},
  [275] = {.lex_state = 17},
  [276] = {.lex_state = 18},
  [277] = {.lex_state = 18},
  [278] = {.lex_state = 17},
  [279] = {.lex_state = 18},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 17},
  [282] = {.lex_state = 17},
  [283] = {.lex_state = 18},
  [284] = {.lex_state = 17},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 18},
  [287] = {.lex_state = 17},
  [288] = {.lex_state = 17},
  [289] = {.lex_state = 17},
  [290] = {.lex_state = 18},
  [291] = {.lex_state = 18},
  [292] = {.lex_state = 17},
  [293] = {.lex_state = 18},
  [294] = {.lex_state = 17},
  [295] = {.lex_state = 18},
  [296] = {.lex_state = 18},
  [297] = {.lex_state = 18},
  [298] = {.lex_state = 18},
  [299] = {.lex_state = 18},
  [300] = {.lex_state = 18},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 18},
  [304] = {.lex_state = 17},
  [305] = {.lex_state = 18},
  [306] = {.lex_state = 18},
  [307] = {.lex_state = 18},
  [308] = {.lex_state = 18},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 18},
  [312] = {.lex_state = 18},
  [313] = {.lex_state = 18},
  [314] = {.lex_state = 18},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 18},
  [318] = {.lex_state = 18},
  [319] = {.lex_state = 18},
  [320] = {.lex_state = 18},
  [321] = {.lex_state = 18},
  [322] = {.lex_state = 18},
  [323] = {.lex_state = 18},
  [324] = {.lex_state = 18},
  [325] = {.lex_state = 18},
  [326] = {.lex_state = 18},
  [327] = {.lex_state = 18},
  [328] = {.lex_state = 18},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 18},
  [334] = {.lex_state = 18},
  [335] = {.lex_state = 18},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 18},
  [338] = {.lex_state = 18},
  [339] = {.lex_state = 18},
  [340] = {.lex_state = 18},
  [341] = {.lex_state = 18},
  [342] = {.lex_state = 18},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 18},
  [345] = {.lex_state = 18},
  [346] = {.lex_state = 18},
  [347] = {.lex_state = 18},
  [348] = {.lex_state = 18},
  [349] = {.lex_state = 18},
  [350] = {.lex_state = 18},
  [351] = {.lex_state = 18},
  [352] = {.lex_state = 18},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 18},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 18},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 18},
  [361] = {.lex_state = 18},
  [362] = {.lex_state = 18},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 18},
  [366] = {.lex_state = 18},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 8},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 10},
  [373] = {.lex_state = 10},
  [374] = {.lex_state = 10},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 6},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 6},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 6},
  [386] = {.lex_state = 6},
  [387] = {.lex_state = 6},
  [388] = {.lex_state = 6},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 6},
  [391] = {.lex_state = 6},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 6},
  [394] = {.lex_state = 6},
  [395] = {.lex_state = 6},
  [396] = {.lex_state = 6},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 6},
  [399] = {.lex_state = 6},
  [400] = {.lex_state = 6},
  [401] = {.lex_state = 6},
  [402] = {.lex_state = 6},
  [403] = {.lex_state = 6},
  [404] = {.lex_state = 6},
  [405] = {.lex_state = 6},
  [406] = {.lex_state = 6},
  [407] = {.lex_state = 6},
  [408] = {.lex_state = 6},
  [409] = {.lex_state = 6},
  [410] = {.lex_state = 6},
  [411] = {.lex_state = 6},
  [412] = {.lex_state = 6},
  [413] = {.lex_state = 6},
  [414] = {.lex_state = 6},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 6},
  [417] = {.lex_state = 6},
  [418] = {.lex_state = 6},
  [419] = {.lex_state = 6},
  [420] = {.lex_state = 6},
  [421] = {.lex_state = 6},
  [422] = {.lex_state = 6},
  [423] = {.lex_state = 6},
  [424] = {.lex_state = 6},
  [425] = {.lex_state = 6},
  [426] = {.lex_state = 6},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 6},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 6},
  [432] = {.lex_state = 7},
  [433] = {.lex_state = 6},
  [434] = {.lex_state = 6},
  [435] = {.lex_state = 7},
  [436] = {.lex_state = 6},
  [437] = {.lex_state = 6},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 8},
  [441] = {.lex_state = 8},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 8},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 8},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 17},
  [452] = {.lex_state = 8},
  [453] = {.lex_state = 17},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 6},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 17},
  [460] = {.lex_state = 6},
  [461] = {.lex_state = 6},
  [462] = {.lex_state = 6},
  [463] = {.lex_state = 8},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 8},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 6},
  [471] = {.lex_state = 17},
  [472] = {.lex_state = 17},
  [473] = {.lex_state = 17},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 17},
  [476] = {.lex_state = 17},
  [477] = {.lex_state = 17},
  [478] = {.lex_state = 17},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 17},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 17},
  [484] = {.lex_state = 17},
  [485] = {.lex_state = 17},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 17},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 948},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 17},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 948},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 948},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 17},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 948},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 948},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 948},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 17},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 17},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
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
    [aux_sym_keyword_token20] = ACTIONS(1),
    [aux_sym_keyword_token22] = ACTIONS(1),
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
    [sym_source_file] = STATE(502),
    [sym_keyword] = STATE(137),
    [sym__optional_divisions] = STATE(3),
    [sym_target_division] = STATE(4),
    [sym_define_division] = STATE(3),
    [sym_setup_division] = STATE(3),
    [sym_select_division] = STATE(3),
    [sym_sort_division] = STATE(3),
    [sym_letter_division] = STATE(16),
    [sym_print_division] = STATE(16),
    [sym_total_division] = STATE(3),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(14),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_special_keywords] = STATE(2),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(14),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_source_file_repeat3] = STATE(14),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [aux_sym_target_division_token1] = ACTIONS(39),
    [aux_sym_define_division_token1] = ACTIONS(41),
    [aux_sym_setup_division_token1] = ACTIONS(43),
    [aux_sym_select_division_token1] = ACTIONS(45),
    [aux_sym_sort_division_token1] = ACTIONS(47),
    [aux_sym_letter_division_token1] = ACTIONS(49),
    [aux_sym_print_division_token1] = ACTIONS(51),
    [aux_sym_total_division_token1] = ACTIONS(53),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [aux_sym_special_keywords_token1] = ACTIONS(69),
    [aux_sym_special_keywords_token2] = ACTIONS(69),
    [aux_sym_special_keywords_token3] = ACTIONS(69),
    [aux_sym_special_keywords_token4] = ACTIONS(69),
    [aux_sym_special_keywords_token5] = ACTIONS(69),
    [aux_sym_special_keywords_token6] = ACTIONS(69),
    [aux_sym_special_keywords_token7] = ACTIONS(69),
    [aux_sym_special_keywords_token8] = ACTIONS(69),
    [aux_sym_special_keywords_token9] = ACTIONS(69),
    [aux_sym_special_keywords_token10] = ACTIONS(69),
    [aux_sym_special_keywords_token11] = ACTIONS(69),
    [aux_sym_special_keywords_token12] = ACTIONS(69),
    [aux_sym_special_keywords_token13] = ACTIONS(69),
    [aux_sym_special_keywords_token14] = ACTIONS(69),
    [aux_sym_special_keywords_token15] = ACTIONS(69),
    [aux_sym_special_keywords_token16] = ACTIONS(69),
    [aux_sym_special_keywords_token17] = ACTIONS(69),
    [aux_sym_special_keywords_token18] = ACTIONS(69),
    [aux_sym_special_keywords_token19] = ACTIONS(69),
    [aux_sym_special_keywords_token20] = ACTIONS(69),
    [aux_sym_special_keywords_token21] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [2] = {
    [sym_keyword] = STATE(137),
    [sym__optional_divisions] = STATE(5),
    [sym_target_division] = STATE(7),
    [sym_define_division] = STATE(5),
    [sym_setup_division] = STATE(5),
    [sym_select_division] = STATE(5),
    [sym_sort_division] = STATE(5),
    [sym_letter_division] = STATE(19),
    [sym_print_division] = STATE(19),
    [sym_total_division] = STATE(5),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(20),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_special_keywords] = STATE(49),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat1] = STATE(49),
    [aux_sym_source_file_repeat2] = STATE(5),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [aux_sym_target_division_token1] = ACTIONS(39),
    [aux_sym_define_division_token1] = ACTIONS(41),
    [aux_sym_setup_division_token1] = ACTIONS(43),
    [aux_sym_select_division_token1] = ACTIONS(45),
    [aux_sym_sort_division_token1] = ACTIONS(47),
    [aux_sym_letter_division_token1] = ACTIONS(49),
    [aux_sym_print_division_token1] = ACTIONS(51),
    [aux_sym_total_division_token1] = ACTIONS(53),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [aux_sym_special_keywords_token1] = ACTIONS(69),
    [aux_sym_special_keywords_token2] = ACTIONS(69),
    [aux_sym_special_keywords_token3] = ACTIONS(69),
    [aux_sym_special_keywords_token4] = ACTIONS(69),
    [aux_sym_special_keywords_token5] = ACTIONS(69),
    [aux_sym_special_keywords_token6] = ACTIONS(69),
    [aux_sym_special_keywords_token7] = ACTIONS(69),
    [aux_sym_special_keywords_token8] = ACTIONS(69),
    [aux_sym_special_keywords_token9] = ACTIONS(69),
    [aux_sym_special_keywords_token10] = ACTIONS(69),
    [aux_sym_special_keywords_token11] = ACTIONS(69),
    [aux_sym_special_keywords_token12] = ACTIONS(69),
    [aux_sym_special_keywords_token13] = ACTIONS(69),
    [aux_sym_special_keywords_token14] = ACTIONS(69),
    [aux_sym_special_keywords_token15] = ACTIONS(69),
    [aux_sym_special_keywords_token16] = ACTIONS(69),
    [aux_sym_special_keywords_token17] = ACTIONS(69),
    [aux_sym_special_keywords_token18] = ACTIONS(69),
    [aux_sym_special_keywords_token19] = ACTIONS(69),
    [aux_sym_special_keywords_token20] = ACTIONS(69),
    [aux_sym_special_keywords_token21] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [3] = {
    [sym_keyword] = STATE(137),
    [sym__optional_divisions] = STATE(101),
    [sym_define_division] = STATE(101),
    [sym_setup_division] = STATE(101),
    [sym_select_division] = STATE(101),
    [sym_sort_division] = STATE(101),
    [sym_letter_division] = STATE(19),
    [sym_print_division] = STATE(19),
    [sym_total_division] = STATE(101),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(20),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat2] = STATE(101),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [aux_sym_define_division_token1] = ACTIONS(41),
    [aux_sym_setup_division_token1] = ACTIONS(43),
    [aux_sym_select_division_token1] = ACTIONS(45),
    [aux_sym_sort_division_token1] = ACTIONS(47),
    [aux_sym_letter_division_token1] = ACTIONS(49),
    [aux_sym_print_division_token1] = ACTIONS(51),
    [aux_sym_total_division_token1] = ACTIONS(53),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [4] = {
    [sym_keyword] = STATE(137),
    [sym__optional_divisions] = STATE(5),
    [sym_define_division] = STATE(5),
    [sym_setup_division] = STATE(5),
    [sym_select_division] = STATE(5),
    [sym_sort_division] = STATE(5),
    [sym_letter_division] = STATE(19),
    [sym_print_division] = STATE(19),
    [sym_total_division] = STATE(5),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(20),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat2] = STATE(5),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [aux_sym_define_division_token1] = ACTIONS(41),
    [aux_sym_setup_division_token1] = ACTIONS(43),
    [aux_sym_select_division_token1] = ACTIONS(45),
    [aux_sym_sort_division_token1] = ACTIONS(47),
    [aux_sym_letter_division_token1] = ACTIONS(49),
    [aux_sym_print_division_token1] = ACTIONS(51),
    [aux_sym_total_division_token1] = ACTIONS(53),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [5] = {
    [sym_keyword] = STATE(137),
    [sym__optional_divisions] = STATE(101),
    [sym_define_division] = STATE(101),
    [sym_setup_division] = STATE(101),
    [sym_select_division] = STATE(101),
    [sym_sort_division] = STATE(101),
    [sym_letter_division] = STATE(15),
    [sym_print_division] = STATE(15),
    [sym_total_division] = STATE(101),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(21),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(21),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat2] = STATE(101),
    [aux_sym_source_file_repeat3] = STATE(21),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [aux_sym_define_division_token1] = ACTIONS(41),
    [aux_sym_setup_division_token1] = ACTIONS(43),
    [aux_sym_select_division_token1] = ACTIONS(45),
    [aux_sym_sort_division_token1] = ACTIONS(47),
    [aux_sym_letter_division_token1] = ACTIONS(49),
    [aux_sym_print_division_token1] = ACTIONS(51),
    [aux_sym_total_division_token1] = ACTIONS(53),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [6] = {
    [sym_keyword] = STATE(137),
    [sym__optional_divisions] = STATE(101),
    [sym_define_division] = STATE(101),
    [sym_setup_division] = STATE(101),
    [sym_select_division] = STATE(101),
    [sym_sort_division] = STATE(101),
    [sym_letter_division] = STATE(12),
    [sym_print_division] = STATE(12),
    [sym_total_division] = STATE(101),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(18),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(18),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat2] = STATE(101),
    [aux_sym_source_file_repeat3] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(77),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [aux_sym_define_division_token1] = ACTIONS(41),
    [aux_sym_setup_division_token1] = ACTIONS(43),
    [aux_sym_select_division_token1] = ACTIONS(45),
    [aux_sym_sort_division_token1] = ACTIONS(47),
    [aux_sym_letter_division_token1] = ACTIONS(49),
    [aux_sym_print_division_token1] = ACTIONS(51),
    [aux_sym_total_division_token1] = ACTIONS(53),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [7] = {
    [sym_keyword] = STATE(137),
    [sym__optional_divisions] = STATE(6),
    [sym_define_division] = STATE(6),
    [sym_setup_division] = STATE(6),
    [sym_select_division] = STATE(6),
    [sym_sort_division] = STATE(6),
    [sym_letter_division] = STATE(15),
    [sym_print_division] = STATE(15),
    [sym_total_division] = STATE(6),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(21),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(21),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat2] = STATE(6),
    [aux_sym_source_file_repeat3] = STATE(21),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [aux_sym_define_division_token1] = ACTIONS(41),
    [aux_sym_setup_division_token1] = ACTIONS(43),
    [aux_sym_select_division_token1] = ACTIONS(45),
    [aux_sym_sort_division_token1] = ACTIONS(47),
    [aux_sym_letter_division_token1] = ACTIONS(49),
    [aux_sym_print_division_token1] = ACTIONS(51),
    [aux_sym_total_division_token1] = ACTIONS(53),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [8] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(24),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(89),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(129),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [9] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(29),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(133),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(129),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [10] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(38),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(38),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(135),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(129),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [11] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(26),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(26),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(137),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(129),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [12] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(17),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(17),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(139),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [13] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(13),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_keyword_token1] = ACTIONS(143),
    [aux_sym_keyword_token2] = ACTIONS(146),
    [aux_sym_keyword_token3] = ACTIONS(149),
    [aux_sym_keyword_token4] = ACTIONS(152),
    [aux_sym_keyword_token5] = ACTIONS(152),
    [aux_sym_keyword_token6] = ACTIONS(152),
    [aux_sym_keyword_token7] = ACTIONS(152),
    [aux_sym_keyword_token8] = ACTIONS(155),
    [aux_sym_keyword_token9] = ACTIONS(158),
    [aux_sym_keyword_token10] = ACTIONS(161),
    [aux_sym_keyword_token11] = ACTIONS(164),
    [aux_sym_keyword_token12] = ACTIONS(152),
    [aux_sym_keyword_token13] = ACTIONS(152),
    [aux_sym_keyword_token14] = ACTIONS(167),
    [aux_sym_keyword_token15] = ACTIONS(170),
    [aux_sym_keyword_token16] = ACTIONS(173),
    [aux_sym_keyword_token17] = ACTIONS(176),
    [aux_sym_keyword_token18] = ACTIONS(179),
    [aux_sym_keyword_token19] = ACTIONS(152),
    [aux_sym_keyword_token20] = ACTIONS(182),
    [aux_sym_keyword_token21] = ACTIONS(185),
    [aux_sym_keyword_token22] = ACTIONS(188),
    [sym_record_type] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [aux_sym__identifier_token1] = ACTIONS(200),
    [sym_number] = ACTIONS(203),
    [sym_money] = ACTIONS(206),
    [sym_date] = ACTIONS(206),
    [sym_rate] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(212),
  },
  [14] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(13),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(13),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [15] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(18),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(18),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(77),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [16] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(20),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(20),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [17] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(13),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(215),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [18] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(13),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(139),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [19] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(21),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(21),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(21),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [20] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(13),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(13),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [21] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(145),
    [sym_array_identifier] = STATE(108),
    [sym_variable_declaration] = STATE(13),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(13),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_source_file_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(77),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [22] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(217),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [23] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(44),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(44),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(219),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [24] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(221),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [25] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(34),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(34),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(223),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [26] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(225),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [27] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(227),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [28] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(229),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [29] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(231),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [30] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(31),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(31),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(233),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [31] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(235),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [32] = {
    [sym_keyword] = STATE(336),
    [sym_string_literal] = STATE(336),
    [sym__identifier] = STATE(276),
    [sym_identifier] = STATE(313),
    [sym_array_identifier] = STATE(290),
    [sym_include_statement] = STATE(329),
    [sym_database_field] = STATE(329),
    [sym_poweron_function] = STATE(336),
    [sym__abs] = STATE(338),
    [sym__datevalue] = STATE(338),
    [sym__rate] = STATE(338),
    [sym__money] = STATE(338),
    [sym__value] = STATE(338),
    [sym__format] = STATE(338),
    [sym__segment] = STATE(338),
    [sym__charactersearch] = STATE(338),
    [sym__length] = STATE(338),
    [sym__fileopen] = STATE(338),
    [sym__filereadline] = STATE(338),
    [sym_expression] = STATE(362),
    [sym_assignment_expression] = STATE(329),
    [sym__lhs_expression] = STATE(530),
    [sym_parenthesized_expression] = STATE(336),
    [sym_binary_expression] = STATE(329),
    [sym_primary_expression] = STATE(329),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_keyword_token1] = ACTIONS(237),
    [aux_sym_keyword_token2] = ACTIONS(237),
    [aux_sym_keyword_token3] = ACTIONS(237),
    [aux_sym_keyword_token4] = ACTIONS(237),
    [aux_sym_keyword_token5] = ACTIONS(237),
    [aux_sym_keyword_token6] = ACTIONS(237),
    [aux_sym_keyword_token7] = ACTIONS(237),
    [aux_sym_keyword_token8] = ACTIONS(237),
    [aux_sym_keyword_token9] = ACTIONS(239),
    [aux_sym_keyword_token10] = ACTIONS(241),
    [aux_sym_keyword_token11] = ACTIONS(243),
    [aux_sym_keyword_token12] = ACTIONS(237),
    [aux_sym_keyword_token13] = ACTIONS(237),
    [aux_sym_keyword_token14] = ACTIONS(245),
    [aux_sym_keyword_token15] = ACTIONS(247),
    [aux_sym_keyword_token16] = ACTIONS(249),
    [aux_sym_keyword_token17] = ACTIONS(251),
    [aux_sym_keyword_token18] = ACTIONS(253),
    [aux_sym_keyword_token19] = ACTIONS(237),
    [aux_sym_keyword_token20] = ACTIONS(255),
    [aux_sym_keyword_token21] = ACTIONS(257),
    [aux_sym_keyword_token22] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_record_type] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [aux_sym__identifier_token1] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_money] = ACTIONS(271),
    [sym_date] = ACTIONS(271),
    [sym_rate] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(273),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(129),
    [aux_sym_procedure_definition_token1] = ACTIONS(79),
  },
  [33] = {
    [sym_keyword] = STATE(336),
    [sym_string_literal] = STATE(336),
    [sym__identifier] = STATE(276),
    [sym_identifier] = STATE(313),
    [sym_array_identifier] = STATE(290),
    [sym_include_statement] = STATE(329),
    [sym_database_field] = STATE(329),
    [sym_poweron_function] = STATE(336),
    [sym__abs] = STATE(338),
    [sym__datevalue] = STATE(338),
    [sym__rate] = STATE(338),
    [sym__money] = STATE(338),
    [sym__value] = STATE(338),
    [sym__format] = STATE(338),
    [sym__segment] = STATE(338),
    [sym__charactersearch] = STATE(338),
    [sym__length] = STATE(338),
    [sym__fileopen] = STATE(338),
    [sym__filereadline] = STATE(338),
    [sym_expression] = STATE(360),
    [sym_assignment_expression] = STATE(329),
    [sym__lhs_expression] = STATE(530),
    [sym_parenthesized_expression] = STATE(336),
    [sym_binary_expression] = STATE(329),
    [sym_primary_expression] = STATE(329),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_keyword_token1] = ACTIONS(237),
    [aux_sym_keyword_token2] = ACTIONS(237),
    [aux_sym_keyword_token3] = ACTIONS(237),
    [aux_sym_keyword_token4] = ACTIONS(237),
    [aux_sym_keyword_token5] = ACTIONS(237),
    [aux_sym_keyword_token6] = ACTIONS(237),
    [aux_sym_keyword_token7] = ACTIONS(237),
    [aux_sym_keyword_token8] = ACTIONS(237),
    [aux_sym_keyword_token9] = ACTIONS(239),
    [aux_sym_keyword_token10] = ACTIONS(241),
    [aux_sym_keyword_token11] = ACTIONS(243),
    [aux_sym_keyword_token12] = ACTIONS(237),
    [aux_sym_keyword_token13] = ACTIONS(237),
    [aux_sym_keyword_token14] = ACTIONS(245),
    [aux_sym_keyword_token15] = ACTIONS(247),
    [aux_sym_keyword_token16] = ACTIONS(249),
    [aux_sym_keyword_token17] = ACTIONS(251),
    [aux_sym_keyword_token18] = ACTIONS(253),
    [aux_sym_keyword_token19] = ACTIONS(237),
    [aux_sym_keyword_token20] = ACTIONS(255),
    [aux_sym_keyword_token21] = ACTIONS(257),
    [aux_sym_keyword_token22] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_record_type] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [aux_sym__identifier_token1] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_money] = ACTIONS(271),
    [sym_date] = ACTIONS(271),
    [sym_rate] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(273),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(129),
    [aux_sym_procedure_definition_token1] = ACTIONS(79),
  },
  [34] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(275),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [35] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(277),
    [aux_sym_keyword_token2] = ACTIONS(280),
    [aux_sym_keyword_token3] = ACTIONS(283),
    [aux_sym_keyword_token4] = ACTIONS(286),
    [aux_sym_keyword_token5] = ACTIONS(286),
    [aux_sym_keyword_token6] = ACTIONS(286),
    [aux_sym_keyword_token7] = ACTIONS(286),
    [aux_sym_keyword_token8] = ACTIONS(289),
    [aux_sym_keyword_token9] = ACTIONS(292),
    [aux_sym_keyword_token10] = ACTIONS(295),
    [aux_sym_keyword_token11] = ACTIONS(298),
    [aux_sym_keyword_token12] = ACTIONS(286),
    [aux_sym_keyword_token13] = ACTIONS(286),
    [aux_sym_keyword_token14] = ACTIONS(301),
    [aux_sym_keyword_token15] = ACTIONS(304),
    [aux_sym_keyword_token16] = ACTIONS(307),
    [aux_sym_keyword_token17] = ACTIONS(310),
    [aux_sym_keyword_token18] = ACTIONS(313),
    [aux_sym_keyword_token19] = ACTIONS(286),
    [aux_sym_keyword_token20] = ACTIONS(316),
    [aux_sym_keyword_token21] = ACTIONS(319),
    [aux_sym_keyword_token22] = ACTIONS(322),
    [sym_record_type] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym__identifier_token1] = ACTIONS(334),
    [sym_number] = ACTIONS(337),
    [sym_money] = ACTIONS(340),
    [sym_date] = ACTIONS(340),
    [sym_rate] = ACTIONS(340),
    [anon_sym_POUND] = ACTIONS(343),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(346),
  },
  [36] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(22),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(22),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(87),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [37] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(27),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(27),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(349),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [38] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(351),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [39] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(41),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(41),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(353),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [40] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(42),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(42),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(355),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [41] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(357),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [42] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(359),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [43] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(28),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(28),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(361),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [44] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(35),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_setup_division_repeat1] = STATE(35),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(87),
    [aux_sym_keyword_token5] = ACTIONS(363),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [45] = {
    [sym_keyword] = STATE(336),
    [sym_string_literal] = STATE(336),
    [sym__identifier] = STATE(276),
    [sym_identifier] = STATE(313),
    [sym_array_identifier] = STATE(290),
    [sym_include_statement] = STATE(329),
    [sym_database_field] = STATE(329),
    [sym_poweron_function] = STATE(336),
    [sym__abs] = STATE(338),
    [sym__datevalue] = STATE(338),
    [sym__rate] = STATE(338),
    [sym__money] = STATE(338),
    [sym__value] = STATE(338),
    [sym__format] = STATE(338),
    [sym__segment] = STATE(338),
    [sym__charactersearch] = STATE(338),
    [sym__length] = STATE(338),
    [sym__fileopen] = STATE(338),
    [sym__filereadline] = STATE(338),
    [sym_expression] = STATE(361),
    [sym_assignment_expression] = STATE(329),
    [sym__lhs_expression] = STATE(530),
    [sym_parenthesized_expression] = STATE(336),
    [sym_binary_expression] = STATE(329),
    [sym_primary_expression] = STATE(329),
    [aux_sym_keyword_token1] = ACTIONS(237),
    [aux_sym_keyword_token2] = ACTIONS(237),
    [aux_sym_keyword_token3] = ACTIONS(237),
    [aux_sym_keyword_token4] = ACTIONS(237),
    [aux_sym_keyword_token5] = ACTIONS(237),
    [aux_sym_keyword_token6] = ACTIONS(237),
    [aux_sym_keyword_token7] = ACTIONS(237),
    [aux_sym_keyword_token8] = ACTIONS(237),
    [aux_sym_keyword_token9] = ACTIONS(239),
    [aux_sym_keyword_token10] = ACTIONS(241),
    [aux_sym_keyword_token11] = ACTIONS(243),
    [aux_sym_keyword_token12] = ACTIONS(237),
    [aux_sym_keyword_token13] = ACTIONS(237),
    [aux_sym_keyword_token14] = ACTIONS(245),
    [aux_sym_keyword_token15] = ACTIONS(247),
    [aux_sym_keyword_token16] = ACTIONS(249),
    [aux_sym_keyword_token17] = ACTIONS(251),
    [aux_sym_keyword_token18] = ACTIONS(253),
    [aux_sym_keyword_token19] = ACTIONS(237),
    [aux_sym_keyword_token20] = ACTIONS(255),
    [aux_sym_keyword_token21] = ACTIONS(257),
    [aux_sym_keyword_token22] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_record_type] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [aux_sym__identifier_token1] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_money] = ACTIONS(271),
    [sym_date] = ACTIONS(271),
    [sym_rate] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(273),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(129),
    [aux_sym_procedure_definition_token1] = ACTIONS(79),
  },
  [46] = {
    [sym_keyword] = STATE(336),
    [sym_string_literal] = STATE(336),
    [sym__identifier] = STATE(276),
    [sym_identifier] = STATE(313),
    [sym_array_identifier] = STATE(290),
    [sym_include_statement] = STATE(329),
    [sym_database_field] = STATE(329),
    [sym_poweron_function] = STATE(336),
    [sym__abs] = STATE(338),
    [sym__datevalue] = STATE(338),
    [sym__rate] = STATE(338),
    [sym__money] = STATE(338),
    [sym__value] = STATE(338),
    [sym__format] = STATE(338),
    [sym__segment] = STATE(338),
    [sym__charactersearch] = STATE(338),
    [sym__length] = STATE(338),
    [sym__fileopen] = STATE(338),
    [sym__filereadline] = STATE(338),
    [sym_expression] = STATE(344),
    [sym_assignment_expression] = STATE(329),
    [sym__lhs_expression] = STATE(530),
    [sym_parenthesized_expression] = STATE(336),
    [sym_binary_expression] = STATE(329),
    [sym_primary_expression] = STATE(329),
    [aux_sym_keyword_token1] = ACTIONS(237),
    [aux_sym_keyword_token2] = ACTIONS(237),
    [aux_sym_keyword_token3] = ACTIONS(237),
    [aux_sym_keyword_token4] = ACTIONS(237),
    [aux_sym_keyword_token5] = ACTIONS(237),
    [aux_sym_keyword_token6] = ACTIONS(237),
    [aux_sym_keyword_token7] = ACTIONS(237),
    [aux_sym_keyword_token8] = ACTIONS(237),
    [aux_sym_keyword_token9] = ACTIONS(239),
    [aux_sym_keyword_token10] = ACTIONS(241),
    [aux_sym_keyword_token11] = ACTIONS(243),
    [aux_sym_keyword_token12] = ACTIONS(237),
    [aux_sym_keyword_token13] = ACTIONS(237),
    [aux_sym_keyword_token14] = ACTIONS(245),
    [aux_sym_keyword_token15] = ACTIONS(247),
    [aux_sym_keyword_token16] = ACTIONS(249),
    [aux_sym_keyword_token17] = ACTIONS(251),
    [aux_sym_keyword_token18] = ACTIONS(253),
    [aux_sym_keyword_token19] = ACTIONS(237),
    [aux_sym_keyword_token20] = ACTIONS(255),
    [aux_sym_keyword_token21] = ACTIONS(257),
    [aux_sym_keyword_token22] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(79),
    [sym_record_type] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [aux_sym__identifier_token1] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_money] = ACTIONS(271),
    [sym_date] = ACTIONS(271),
    [sym_rate] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(273),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AND] = ACTIONS(129),
    [anon_sym_OR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(129),
    [aux_sym_procedure_definition_token1] = ACTIONS(79),
  },
  [47] = {
    [sym_keyword] = STATE(227),
    [sym_string_literal] = STATE(227),
    [sym__identifier] = STATE(116),
    [sym_identifier] = STATE(223),
    [sym_array_identifier] = STATE(133),
    [sym_include_statement] = STATE(230),
    [sym_database_field] = STATE(230),
    [sym_poweron_function] = STATE(227),
    [sym__abs] = STATE(229),
    [sym__datevalue] = STATE(229),
    [sym__rate] = STATE(229),
    [sym__money] = STATE(229),
    [sym__value] = STATE(229),
    [sym__format] = STATE(229),
    [sym__segment] = STATE(229),
    [sym__charactersearch] = STATE(229),
    [sym__length] = STATE(229),
    [sym__fileopen] = STATE(229),
    [sym__filereadline] = STATE(229),
    [sym_expression] = STATE(184),
    [sym_assignment_expression] = STATE(230),
    [sym__lhs_expression] = STATE(550),
    [sym_parenthesized_expression] = STATE(227),
    [sym_binary_expression] = STATE(230),
    [sym_primary_expression] = STATE(230),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(272),
    [sym__if_statement_no_block] = STATE(264),
    [sym__if_else_block] = STATE(264),
    [sym__if_else_no_block] = STATE(264),
    [sym__if_statement_block] = STATE(264),
    [sym_statement] = STATE(267),
    [sym_procedure_definition] = STATE(271),
    [sym_procedure_call] = STATE(271),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_keyword_token2] = ACTIONS(83),
    [aux_sym_keyword_token3] = ACTIONS(85),
    [aux_sym_keyword_token4] = ACTIONS(365),
    [aux_sym_keyword_token5] = ACTIONS(87),
    [aux_sym_keyword_token6] = ACTIONS(87),
    [aux_sym_keyword_token7] = ACTIONS(87),
    [aux_sym_keyword_token8] = ACTIONS(91),
    [aux_sym_keyword_token9] = ACTIONS(93),
    [aux_sym_keyword_token10] = ACTIONS(95),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(87),
    [aux_sym_keyword_token13] = ACTIONS(87),
    [aux_sym_keyword_token14] = ACTIONS(99),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(103),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(107),
    [aux_sym_keyword_token19] = ACTIONS(87),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(111),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [sym_record_type] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym__identifier_token1] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_money] = ACTIONS(125),
    [sym_date] = ACTIONS(125),
    [sym_rate] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(131),
  },
  [48] = {
    [sym_keyword] = STATE(137),
    [sym_string_literal] = STATE(137),
    [sym__identifier] = STATE(100),
    [sym_identifier] = STATE(151),
    [sym_array_identifier] = STATE(108),
    [sym_include_statement] = STATE(146),
    [sym_database_field] = STATE(146),
    [sym_poweron_function] = STATE(137),
    [sym__abs] = STATE(147),
    [sym__datevalue] = STATE(147),
    [sym__rate] = STATE(147),
    [sym__money] = STATE(147),
    [sym__value] = STATE(147),
    [sym__format] = STATE(147),
    [sym__segment] = STATE(147),
    [sym__charactersearch] = STATE(147),
    [sym__length] = STATE(147),
    [sym__fileopen] = STATE(147),
    [sym__filereadline] = STATE(147),
    [sym_expression] = STATE(148),
    [sym_assignment_expression] = STATE(146),
    [sym__lhs_expression] = STATE(501),
    [sym_parenthesized_expression] = STATE(137),
    [sym_binary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(249),
    [sym__if_statement_no_block] = STATE(253),
    [sym__if_else_block] = STATE(253),
    [sym__if_else_no_block] = STATE(253),
    [sym__if_statement_block] = STATE(253),
    [sym_statement] = STATE(257),
    [sym_procedure_definition] = STATE(248),
    [sym_procedure_call] = STATE(248),
    [aux_sym_keyword_token1] = ACTIONS(7),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(11),
    [aux_sym_keyword_token4] = ACTIONS(367),
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
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(33),
    [aux_sym_keyword_token21] = ACTIONS(35),
    [aux_sym_keyword_token22] = ACTIONS(37),
    [sym_record_type] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym__identifier_token1] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_money] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_rate] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(71),
  },
  [49] = {
    [sym_special_keywords] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(369),
    [aux_sym_keyword_token1] = ACTIONS(371),
    [aux_sym_keyword_token2] = ACTIONS(371),
    [aux_sym_keyword_token3] = ACTIONS(371),
    [aux_sym_keyword_token4] = ACTIONS(371),
    [aux_sym_keyword_token5] = ACTIONS(371),
    [aux_sym_keyword_token6] = ACTIONS(371),
    [aux_sym_keyword_token7] = ACTIONS(371),
    [aux_sym_keyword_token8] = ACTIONS(371),
    [aux_sym_keyword_token9] = ACTIONS(371),
    [aux_sym_keyword_token10] = ACTIONS(371),
    [aux_sym_keyword_token11] = ACTIONS(371),
    [aux_sym_keyword_token12] = ACTIONS(371),
    [aux_sym_keyword_token13] = ACTIONS(371),
    [aux_sym_keyword_token14] = ACTIONS(371),
    [aux_sym_keyword_token15] = ACTIONS(371),
    [aux_sym_keyword_token16] = ACTIONS(371),
    [aux_sym_keyword_token17] = ACTIONS(371),
    [aux_sym_keyword_token18] = ACTIONS(371),
    [aux_sym_keyword_token19] = ACTIONS(371),
    [aux_sym_keyword_token20] = ACTIONS(371),
    [aux_sym_keyword_token21] = ACTIONS(371),
    [aux_sym_keyword_token22] = ACTIONS(371),
    [aux_sym_target_division_token1] = ACTIONS(371),
    [aux_sym_define_division_token1] = ACTIONS(371),
    [aux_sym_setup_division_token1] = ACTIONS(371),
    [aux_sym_select_division_token1] = ACTIONS(371),
    [aux_sym_sort_division_token1] = ACTIONS(371),
    [aux_sym_letter_division_token1] = ACTIONS(369),
    [aux_sym_print_division_token1] = ACTIONS(371),
    [aux_sym_total_division_token1] = ACTIONS(371),
    [sym_record_type] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym__identifier_token1] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [sym_money] = ACTIONS(369),
    [sym_date] = ACTIONS(369),
    [sym_rate] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(369),
    [aux_sym_special_keywords_token1] = ACTIONS(373),
    [aux_sym_special_keywords_token2] = ACTIONS(373),
    [aux_sym_special_keywords_token3] = ACTIONS(373),
    [aux_sym_special_keywords_token4] = ACTIONS(373),
    [aux_sym_special_keywords_token5] = ACTIONS(373),
    [aux_sym_special_keywords_token6] = ACTIONS(373),
    [aux_sym_special_keywords_token7] = ACTIONS(373),
    [aux_sym_special_keywords_token8] = ACTIONS(373),
    [aux_sym_special_keywords_token9] = ACTIONS(373),
    [aux_sym_special_keywords_token10] = ACTIONS(373),
    [aux_sym_special_keywords_token11] = ACTIONS(373),
    [aux_sym_special_keywords_token12] = ACTIONS(373),
    [aux_sym_special_keywords_token13] = ACTIONS(373),
    [aux_sym_special_keywords_token14] = ACTIONS(373),
    [aux_sym_special_keywords_token15] = ACTIONS(373),
    [aux_sym_special_keywords_token16] = ACTIONS(373),
    [aux_sym_special_keywords_token17] = ACTIONS(373),
    [aux_sym_special_keywords_token18] = ACTIONS(373),
    [aux_sym_special_keywords_token19] = ACTIONS(373),
    [aux_sym_special_keywords_token20] = ACTIONS(373),
    [aux_sym_special_keywords_token21] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [aux_sym_procedure_definition_token1] = ACTIONS(369),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(378), 53,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
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
  [70] = 28,
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
      aux_sym_keyword_token20,
    ACTIONS(35), 1,
      aux_sym_keyword_token21,
    ACTIONS(37), 1,
      aux_sym_keyword_token22,
    ACTIONS(55), 1,
      sym_record_type,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(138), 1,
      sym_expression,
    STATE(151), 1,
      sym_identifier,
    STATE(501), 1,
      sym__lhs_expression,
    ACTIONS(65), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(137), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(146), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 11,
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
      aux_sym_keyword_token19,
    STATE(147), 11,
      sym__abs,
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
  [184] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(353), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [298] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_keyword_token9,
    ACTIONS(95), 1,
      aux_sym_keyword_token10,
    ACTIONS(97), 1,
      aux_sym_keyword_token11,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_keyword_token17,
    ACTIONS(107), 1,
      aux_sym_keyword_token18,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      aux_sym_keyword_token21,
    ACTIONS(113), 1,
      aux_sym_keyword_token22,
    ACTIONS(115), 1,
      sym_record_type,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(195), 1,
      sym_expression,
    STATE(223), 1,
      sym_identifier,
    STATE(550), 1,
      sym__lhs_expression,
    ACTIONS(125), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(227), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(230), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(87), 11,
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
      aux_sym_keyword_token19,
    STATE(229), 11,
      sym__abs,
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
  [412] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(355), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [526] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_keyword_token9,
    ACTIONS(95), 1,
      aux_sym_keyword_token10,
    ACTIONS(97), 1,
      aux_sym_keyword_token11,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_keyword_token17,
    ACTIONS(107), 1,
      aux_sym_keyword_token18,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      aux_sym_keyword_token21,
    ACTIONS(113), 1,
      aux_sym_keyword_token22,
    ACTIONS(115), 1,
      sym_record_type,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(193), 1,
      sym_expression,
    STATE(223), 1,
      sym_identifier,
    STATE(550), 1,
      sym__lhs_expression,
    ACTIONS(125), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(227), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(230), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(87), 11,
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
      aux_sym_keyword_token19,
    STATE(229), 11,
      sym__abs,
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
  [640] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_keyword_token9,
    ACTIONS(95), 1,
      aux_sym_keyword_token10,
    ACTIONS(97), 1,
      aux_sym_keyword_token11,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_keyword_token17,
    ACTIONS(107), 1,
      aux_sym_keyword_token18,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      aux_sym_keyword_token21,
    ACTIONS(113), 1,
      aux_sym_keyword_token22,
    ACTIONS(115), 1,
      sym_record_type,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(187), 1,
      sym_expression,
    STATE(223), 1,
      sym_identifier,
    STATE(550), 1,
      sym__lhs_expression,
    ACTIONS(125), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(227), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(230), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(87), 11,
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
      aux_sym_keyword_token19,
    STATE(229), 11,
      sym__abs,
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
  [754] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(342), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [868] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(366), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [982] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(343), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [1096] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_keyword_token9,
    ACTIONS(95), 1,
      aux_sym_keyword_token10,
    ACTIONS(97), 1,
      aux_sym_keyword_token11,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_keyword_token17,
    ACTIONS(107), 1,
      aux_sym_keyword_token18,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      aux_sym_keyword_token21,
    ACTIONS(113), 1,
      aux_sym_keyword_token22,
    ACTIONS(115), 1,
      sym_record_type,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(380), 1,
      aux_sym_keyword_token4,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(204), 1,
      sym_expression,
    STATE(223), 1,
      sym_identifier,
    STATE(550), 1,
      sym__lhs_expression,
    ACTIONS(125), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(227), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(230), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(87), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token19,
    STATE(229), 11,
      sym__abs,
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
  [1212] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(364), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [1326] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(365), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [1440] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(339), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [1554] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(363), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [1668] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(350), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [1782] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(326), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [1896] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_keyword_token9,
    ACTIONS(95), 1,
      aux_sym_keyword_token10,
    ACTIONS(97), 1,
      aux_sym_keyword_token11,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_keyword_token17,
    ACTIONS(107), 1,
      aux_sym_keyword_token18,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      aux_sym_keyword_token21,
    ACTIONS(113), 1,
      aux_sym_keyword_token22,
    ACTIONS(115), 1,
      sym_record_type,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(186), 1,
      sym_expression,
    STATE(223), 1,
      sym_identifier,
    STATE(550), 1,
      sym__lhs_expression,
    ACTIONS(125), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(227), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(230), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(87), 11,
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
      aux_sym_keyword_token19,
    STATE(229), 11,
      sym__abs,
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
  [2010] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_keyword_token9,
    ACTIONS(95), 1,
      aux_sym_keyword_token10,
    ACTIONS(97), 1,
      aux_sym_keyword_token11,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_keyword_token17,
    ACTIONS(107), 1,
      aux_sym_keyword_token18,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      aux_sym_keyword_token21,
    ACTIONS(113), 1,
      aux_sym_keyword_token22,
    ACTIONS(115), 1,
      sym_record_type,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(185), 1,
      sym_expression,
    STATE(223), 1,
      sym_identifier,
    STATE(550), 1,
      sym__lhs_expression,
    ACTIONS(125), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(227), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(230), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(87), 11,
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
      aux_sym_keyword_token19,
    STATE(229), 11,
      sym__abs,
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
  [2124] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_keyword_token9,
    ACTIONS(95), 1,
      aux_sym_keyword_token10,
    ACTIONS(97), 1,
      aux_sym_keyword_token11,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_keyword_token17,
    ACTIONS(107), 1,
      aux_sym_keyword_token18,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      aux_sym_keyword_token21,
    ACTIONS(113), 1,
      aux_sym_keyword_token22,
    ACTIONS(115), 1,
      sym_record_type,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(223), 1,
      sym_identifier,
    STATE(225), 1,
      sym_expression,
    STATE(550), 1,
      sym__lhs_expression,
    ACTIONS(125), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(227), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(230), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(87), 11,
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
      aux_sym_keyword_token19,
    STATE(229), 11,
      sym__abs,
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
  [2238] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(306), 1,
      sym_expression,
    STATE(313), 1,
      sym_identifier,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [2352] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(330), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [2466] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(332), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [2580] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_keyword_token9,
    ACTIONS(95), 1,
      aux_sym_keyword_token10,
    ACTIONS(97), 1,
      aux_sym_keyword_token11,
    ACTIONS(99), 1,
      aux_sym_keyword_token14,
    ACTIONS(101), 1,
      aux_sym_keyword_token15,
    ACTIONS(103), 1,
      aux_sym_keyword_token16,
    ACTIONS(105), 1,
      aux_sym_keyword_token17,
    ACTIONS(107), 1,
      aux_sym_keyword_token18,
    ACTIONS(109), 1,
      aux_sym_keyword_token20,
    ACTIONS(111), 1,
      aux_sym_keyword_token21,
    ACTIONS(113), 1,
      aux_sym_keyword_token22,
    ACTIONS(115), 1,
      sym_record_type,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(192), 1,
      sym_expression,
    STATE(223), 1,
      sym_identifier,
    STATE(550), 1,
      sym__lhs_expression,
    ACTIONS(125), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(227), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(230), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(87), 11,
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
      aux_sym_keyword_token19,
    STATE(229), 11,
      sym__abs,
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
  [2694] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(333), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [2808] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(334), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [2922] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(359), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [3036] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(340), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [3150] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(347), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [3264] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(335), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [3378] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(358), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [3492] = 29,
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
      aux_sym_keyword_token20,
    ACTIONS(35), 1,
      aux_sym_keyword_token21,
    ACTIONS(37), 1,
      aux_sym_keyword_token22,
    ACTIONS(55), 1,
      sym_record_type,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      aux_sym_keyword_token4,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(151), 1,
      sym_identifier,
    STATE(152), 1,
      sym_expression,
    STATE(501), 1,
      sym__lhs_expression,
    ACTIONS(65), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(137), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(146), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 10,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token19,
    STATE(147), 11,
      sym__abs,
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
  [3608] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(346), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [3722] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(341), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [3836] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(356), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [3950] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(357), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [4064] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(345), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [4178] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(354), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [4292] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(352), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [4406] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(348), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [4520] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(351), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [4634] = 28,
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
      aux_sym_keyword_token20,
    ACTIONS(35), 1,
      aux_sym_keyword_token21,
    ACTIONS(37), 1,
      aux_sym_keyword_token22,
    ACTIONS(55), 1,
      sym_record_type,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(139), 1,
      sym_expression,
    STATE(151), 1,
      sym_identifier,
    STATE(501), 1,
      sym__lhs_expression,
    ACTIONS(65), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(137), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(146), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 11,
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
      aux_sym_keyword_token19,
    STATE(147), 11,
      sym__abs,
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
  [4748] = 28,
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
      aux_sym_keyword_token20,
    ACTIONS(35), 1,
      aux_sym_keyword_token21,
    ACTIONS(37), 1,
      aux_sym_keyword_token22,
    ACTIONS(55), 1,
      sym_record_type,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(140), 1,
      sym_expression,
    STATE(151), 1,
      sym_identifier,
    STATE(501), 1,
      sym__lhs_expression,
    ACTIONS(65), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(137), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(146), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 11,
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
      aux_sym_keyword_token19,
    STATE(147), 11,
      sym__abs,
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
  [4862] = 28,
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
      aux_sym_keyword_token20,
    ACTIONS(35), 1,
      aux_sym_keyword_token21,
    ACTIONS(37), 1,
      aux_sym_keyword_token22,
    ACTIONS(55), 1,
      sym_record_type,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(141), 1,
      sym_expression,
    STATE(151), 1,
      sym_identifier,
    STATE(501), 1,
      sym__lhs_expression,
    ACTIONS(65), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(137), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(146), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 11,
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
      aux_sym_keyword_token19,
    STATE(147), 11,
      sym__abs,
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
  [4976] = 28,
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
      aux_sym_keyword_token20,
    ACTIONS(35), 1,
      aux_sym_keyword_token21,
    ACTIONS(37), 1,
      aux_sym_keyword_token22,
    ACTIONS(55), 1,
      sym_record_type,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(142), 1,
      sym_expression,
    STATE(151), 1,
      sym_identifier,
    STATE(501), 1,
      sym__lhs_expression,
    ACTIONS(65), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(137), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(146), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 11,
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
      aux_sym_keyword_token19,
    STATE(147), 11,
      sym__abs,
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
  [5090] = 28,
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
      aux_sym_keyword_token20,
    ACTIONS(35), 1,
      aux_sym_keyword_token21,
    ACTIONS(37), 1,
      aux_sym_keyword_token22,
    ACTIONS(55), 1,
      sym_record_type,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(143), 1,
      sym_expression,
    STATE(151), 1,
      sym_identifier,
    STATE(501), 1,
      sym__lhs_expression,
    ACTIONS(65), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(137), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(146), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 11,
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
      aux_sym_keyword_token19,
    STATE(147), 11,
      sym__abs,
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
  [5204] = 28,
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
      aux_sym_keyword_token20,
    ACTIONS(35), 1,
      aux_sym_keyword_token21,
    ACTIONS(37), 1,
      aux_sym_keyword_token22,
    ACTIONS(55), 1,
      sym_record_type,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(144), 1,
      sym_expression,
    STATE(151), 1,
      sym_identifier,
    STATE(501), 1,
      sym__lhs_expression,
    ACTIONS(65), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(137), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(146), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 11,
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
      aux_sym_keyword_token19,
    STATE(147), 11,
      sym__abs,
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
  [5318] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_keyword_token9,
    ACTIONS(241), 1,
      aux_sym_keyword_token10,
    ACTIONS(243), 1,
      aux_sym_keyword_token11,
    ACTIONS(245), 1,
      aux_sym_keyword_token14,
    ACTIONS(247), 1,
      aux_sym_keyword_token15,
    ACTIONS(249), 1,
      aux_sym_keyword_token16,
    ACTIONS(251), 1,
      aux_sym_keyword_token17,
    ACTIONS(253), 1,
      aux_sym_keyword_token18,
    ACTIONS(255), 1,
      aux_sym_keyword_token20,
    ACTIONS(257), 1,
      aux_sym_keyword_token21,
    ACTIONS(259), 1,
      aux_sym_keyword_token22,
    ACTIONS(261), 1,
      sym_record_type,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym__identifier_token1,
    ACTIONS(269), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(313), 1,
      sym_identifier,
    STATE(349), 1,
      sym_expression,
    STATE(530), 1,
      sym__lhs_expression,
    ACTIONS(271), 3,
      sym_money,
      sym_date,
      sym_rate,
    STATE(336), 4,
      sym_keyword,
      sym_string_literal,
      sym_poweron_function,
      sym_parenthesized_expression,
    STATE(329), 5,
      sym_include_statement,
      sym_database_field,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(237), 11,
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
      aux_sym_keyword_token19,
    STATE(338), 11,
      sym__abs,
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
  [5432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(384), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(386), 31,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [5494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(388), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(390), 31,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [5556] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_subIndex,
    ACTIONS(392), 15,
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
    ACTIONS(394), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5615] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      aux_sym_define_division_token1,
    ACTIONS(405), 1,
      aux_sym_setup_division_token1,
    ACTIONS(408), 1,
      aux_sym_select_division_token1,
    ACTIONS(411), 1,
      aux_sym_sort_division_token1,
    ACTIONS(414), 1,
      aux_sym_total_division_token1,
    STATE(101), 7,
      sym__optional_divisions,
      sym_define_division,
      sym_setup_division,
      sym_select_division,
      sym_sort_division,
      sym_total_division,
      aux_sym_source_file_repeat2,
    ACTIONS(398), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(400), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_print_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [5682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 16,
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
    ACTIONS(419), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 16,
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
    ACTIONS(423), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 16,
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
    ACTIONS(427), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5844] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym__identifier_token1,
    STATE(245), 1,
      sym__identifier,
    STATE(251), 1,
      sym_array_identifier,
    STATE(256), 1,
      sym_identifier,
    ACTIONS(79), 13,
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
    ACTIONS(129), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5906] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(500), 1,
      sym_identifier,
    ACTIONS(79), 13,
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
    ACTIONS(129), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [5968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 16,
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
    ACTIONS(433), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 16,
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
    ACTIONS(394), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6076] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(561), 1,
      sym_identifier,
    ACTIONS(79), 12,
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
    ACTIONS(129), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6137] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      aux_sym__identifier_token1,
    STATE(263), 1,
      sym__identifier,
    STATE(265), 1,
      sym_identifier,
    STATE(269), 1,
      sym_array_identifier,
    ACTIONS(79), 12,
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
    ACTIONS(129), 29,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 15,
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
    ACTIONS(439), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 14,
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
    ACTIONS(443), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 14,
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
    ACTIONS(447), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 14,
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
    ACTIONS(451), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 14,
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
    ACTIONS(455), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_subIndex,
    ACTIONS(392), 12,
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
    ACTIONS(394), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 14,
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
    ACTIONS(461), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COLON,
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
    ACTIONS(465), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 14,
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
    ACTIONS(471), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 14,
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
    ACTIONS(475), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 14,
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
    ACTIONS(479), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(481), 13,
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
    ACTIONS(483), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
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
    ACTIONS(489), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [6886] = 3,
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
    ACTIONS(493), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [6990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 13,
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
    ACTIONS(507), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 13,
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
    ACTIONS(511), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(513), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(515), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [7359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 13,
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
    ACTIONS(394), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 13,
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
    ACTIONS(525), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7620] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_GT,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(533), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 10,
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
    ACTIONS(529), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [7679] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_GT,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(533), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(539), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(527), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(529), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [7740] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_GT,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(541), 1,
      anon_sym_AND,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(533), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(539), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(527), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(529), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [7803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 11,
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
    ACTIONS(529), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 13,
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
    ACTIONS(529), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [7907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(533), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 11,
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
    ACTIONS(529), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [7962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 13,
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
    ACTIONS(545), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_EQ,
    ACTIONS(523), 12,
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
    ACTIONS(525), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8066] = 3,
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
    ACTIONS(551), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8117] = 3,
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
    ACTIONS(555), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8168] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_GT,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(541), 1,
      anon_sym_AND,
    ACTIONS(561), 1,
      anon_sym_OR,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(533), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(539), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(559), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [8233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(563), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(565), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [8288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 13,
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
    ACTIONS(569), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(523), 12,
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
    ACTIONS(525), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8392] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_GT,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(541), 1,
      anon_sym_AND,
    ACTIONS(561), 1,
      anon_sym_OR,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(533), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(539), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(573), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(575), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [8457] = 3,
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
    ACTIONS(579), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(481), 12,
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
    ACTIONS(483), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 13,
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
    ACTIONS(585), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 13,
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
    ACTIONS(423), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(587), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(589), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [8718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 13,
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
    ACTIONS(593), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 13,
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
    ACTIONS(597), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8820] = 3,
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
    ACTIONS(601), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 13,
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
    ACTIONS(605), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 13,
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
    ACTIONS(609), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [8973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 13,
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
    ACTIONS(613), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 13,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 13,
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
    ACTIONS(419), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 13,
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
    ACTIONS(621), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(623), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(625), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(629), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(631), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 13,
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
    ACTIONS(427), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9497] = 3,
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
    ACTIONS(635), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 13,
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
    ACTIONS(639), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COLON,
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
    ACTIONS(465), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(643), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(645), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 13,
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
    ACTIONS(433), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [9758] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(647), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(649), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9813] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(651), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(653), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(655), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(657), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(659), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(661), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [9978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 13,
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
    ACTIONS(665), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(651), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(653), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10083] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_AND,
    ACTIONS(671), 1,
      anon_sym_OR,
    ACTIONS(677), 1,
      anon_sym_GT,
    ACTIONS(679), 1,
      anon_sym_LT,
    ACTIONS(667), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(675), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(557), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(559), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 12,
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
    ACTIONS(529), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 10,
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
    ACTIONS(529), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10249] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_AND,
    ACTIONS(677), 1,
      anon_sym_GT,
    ACTIONS(679), 1,
      anon_sym_LT,
    ACTIONS(667), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(675), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(529), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_OR,
  [10311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(655), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(657), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(643), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(645), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(623), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(625), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 12,
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
    ACTIONS(621), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 12,
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
    ACTIONS(545), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10573] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_GT,
    ACTIONS(679), 1,
      anon_sym_LT,
    ACTIONS(667), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(675), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(529), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [10633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10685] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_GT,
    ACTIONS(679), 1,
      anon_sym_LT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(675), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      anon_sym_LT_GT,
      aux_sym_procedure_definition_token1,
    ACTIONS(529), 27,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
  [10743] = 3,
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
    ACTIONS(439), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(647), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(649), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [10899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 12,
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
    ACTIONS(507), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 12,
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
    ACTIONS(593), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [10999] = 3,
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
    ACTIONS(479), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(659), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(661), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11155] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_AND,
    ACTIONS(671), 1,
      anon_sym_OR,
    ACTIONS(677), 1,
      anon_sym_GT,
    ACTIONS(679), 1,
      anon_sym_LT,
    ACTIONS(667), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(675), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(573), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(575), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 12,
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
    ACTIONS(597), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11269] = 3,
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
    ACTIONS(601), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(513), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(515), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 12,
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
    ACTIONS(605), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 12,
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
    ACTIONS(511), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(563), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(565), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 12,
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
    ACTIONS(609), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(587), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(589), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [11787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11839] = 3,
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
    ACTIONS(635), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 12,
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
    ACTIONS(639), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 12,
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
    ACTIONS(665), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [11989] = 3,
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
    ACTIONS(493), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 12,
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
    ACTIONS(613), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(523), 11,
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
    ACTIONS(525), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 12,
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
    ACTIONS(471), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(675), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 10,
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
    ACTIONS(529), 28,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT,
  [12297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 12,
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
    ACTIONS(525), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12399] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT,
    ACTIONS(129), 5,
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
    ACTIONS(489), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [12453] = 3,
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
    ACTIONS(555), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12503] = 3,
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
    ACTIONS(551), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 12,
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
    ACTIONS(569), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12655] = 3,
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
    ACTIONS(579), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12705] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(443), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 12,
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
    ACTIONS(585), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 11,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 12,
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
    ACTIONS(129), 30,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
  [12907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(705), 31,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [12955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(709), 31,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(713), 31,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(717), 31,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(721), 31,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 9,
      ts_builtin_sym_end,
      aux_sym_letter_division_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(725), 31,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      aux_sym_define_division_token1,
      aux_sym_setup_division_token1,
      aux_sym_select_division_token1,
      aux_sym_sort_division_token1,
      aux_sym_print_division_token1,
      aux_sym_total_division_token1,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      aux_sym_array_type_token1,
    STATE(262), 1,
      sym_array_type,
    ACTIONS(727), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(729), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(247), 1,
      sym_subIndex,
    ACTIONS(392), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(394), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(737), 26,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym_array_type_token1,
      aux_sym__identifier_token1,
      sym_number,
  [13330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(419), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(559), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_keyword_token6,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(559), 24,
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
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(729), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(394), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(743), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(747), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(433), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(751), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(755), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(759), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(439), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(763), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(423), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(427), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(767), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [13988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    STATE(270), 1,
      sym_subIndex,
    ACTIONS(392), 6,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(394), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(747), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(755), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(439), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(759), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(423), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(394), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(419), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(559), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      aux_sym_keyword_token6,
    ACTIONS(557), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(559), 24,
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
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(433), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 7,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_money,
      sym_date,
      sym_rate,
      anon_sym_POUND,
      aux_sym_procedure_definition_token1,
    ACTIONS(427), 25,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_keyword_token21,
      aux_sym_keyword_token22,
      sym_record_type,
      aux_sym__identifier_token1,
      sym_number,
  [14475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_LPAREN,
    STATE(281), 1,
      sym_subIndex,
    ACTIONS(394), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(392), 13,
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
  [14505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    STATE(283), 1,
      sym_subIndex,
    ACTIONS(392), 15,
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
  [14535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LT,
    ACTIONS(421), 16,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_LPAREN,
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
  [14560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(421), 14,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_LPAREN,
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
  [14585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LT,
    ACTIONS(425), 15,
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
  [14609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_number,
    ACTIONS(779), 1,
      anon_sym_COLON,
    ACTIONS(465), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(463), 11,
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
  [14637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(417), 13,
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
  [14661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym_number,
    ACTIONS(783), 1,
      anon_sym_COLON,
    ACTIONS(483), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(481), 11,
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
  [14689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LT,
    ACTIONS(417), 15,
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
  [14713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_number,
    ACTIONS(789), 1,
      anon_sym_COLON,
    ACTIONS(791), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(785), 11,
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
  [14741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_number,
    ACTIONS(797), 1,
      anon_sym_COLON,
    ACTIONS(799), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(793), 11,
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
  [14769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LT,
    ACTIONS(431), 15,
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
  [14793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(392), 13,
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
  [14817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(431), 13,
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
  [14841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(425), 13,
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
  [14865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT,
    ACTIONS(392), 15,
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
  [14889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [14914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym_number,
    ACTIONS(621), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(619), 11,
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
  [14939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [14964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_number,
    ACTIONS(665), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(663), 11,
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
  [14989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(437), 14,
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
  [15137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(819), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_number,
    ACTIONS(493), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(491), 11,
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
  [15237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [15262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LT,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 9,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
      anon_sym_GT,
  [15288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LT,
    ACTIONS(509), 13,
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
  [15310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(603), 13,
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
  [15332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LT,
    ACTIONS(607), 13,
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
  [15354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LT,
    ACTIONS(441), 13,
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
  [15376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LT,
    ACTIONS(449), 13,
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
  [15398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LT,
    ACTIONS(611), 13,
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
  [15420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LT,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(523), 12,
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
  [15444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LT,
    ACTIONS(469), 13,
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
  [15466] = 3,
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
  [15488] = 3,
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
  [15510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LT,
    ACTIONS(595), 13,
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
  [15532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_LT,
    ACTIONS(637), 13,
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
  [15554] = 3,
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
  [15576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_LT,
    ACTIONS(459), 13,
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
  [15598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LT,
    ACTIONS(453), 13,
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
  [15620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LT,
    ACTIONS(591), 13,
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
  [15642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LT,
    ACTIONS(445), 13,
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
  [15664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LT,
    ACTIONS(473), 13,
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
  [15686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LT,
    ACTIONS(505), 13,
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
  [15708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LT,
    ACTIONS(543), 13,
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
  [15730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LT,
    ACTIONS(583), 13,
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
  [15752] = 3,
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
  [15774] = 3,
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
  [15796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LT,
    ACTIONS(527), 13,
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
  [15818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LT,
    ACTIONS(567), 13,
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
  [15840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LT,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 11,
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
  [15864] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(527), 5,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_OR,
  [15896] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(527), 6,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [15926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(527), 8,
      aux_sym_keyword_token4,
      aux_sym_keyword_token7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_GT,
  [15954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LT,
    ACTIONS(523), 13,
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
  [15976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(79), 13,
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
  [15998] = 3,
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
  [16020] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16051] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16082] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16113] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16144] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16175] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(853), 1,
      aux_sym_keyword_token7,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16206] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16237] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16268] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16299] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16330] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16361] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16392] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16423] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16454] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16485] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16516] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16547] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16578] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16609] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16640] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16671] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(885), 1,
      aux_sym_keyword_token7,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16702] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(887), 1,
      aux_sym_keyword_token4,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16733] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(889), 1,
      aux_sym_keyword_token4,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16764] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16795] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16826] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16857] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AND,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_LT,
    ACTIONS(843), 1,
      anon_sym_OR,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(831), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(833), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [16888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      sym_data_type,
    STATE(250), 1,
      sym_string_literal,
    ACTIONS(899), 7,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_data_type_token1,
      aux_sym_data_type_token2,
      aux_sym_data_type_token3,
      aux_sym_data_type_token4,
  [16910] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(903), 1,
      aux_sym_keyword_token5,
    ACTIONS(905), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(574), 1,
      sym_identifier,
    STATE(369), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(463), 2,
      sym_variable_declaration,
      sym_include_statement,
  [16940] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(905), 1,
      anon_sym_POUND,
    ACTIONS(907), 1,
      aux_sym_keyword_token5,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(574), 1,
      sym_identifier,
    STATE(371), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(463), 2,
      sym_variable_declaration,
      sym_include_statement,
  [16970] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_DQUOTE,
    STATE(432), 1,
      sym_data_type,
    STATE(443), 1,
      sym_string_literal,
    ACTIONS(909), 7,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      aux_sym_keyword_token20,
      aux_sym_data_type_token1,
      aux_sym_data_type_token2,
      aux_sym_data_type_token3,
      aux_sym_data_type_token4,
  [16992] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      aux_sym_keyword_token5,
    ACTIONS(915), 1,
      aux_sym__identifier_token1,
    ACTIONS(918), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(574), 1,
      sym_identifier,
    STATE(371), 2,
      sym_define_statement,
      aux_sym_define_division_repeat1,
    STATE(463), 2,
      sym_variable_declaration,
      sym_include_statement,
  [17022] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(921), 1,
      sym_record_type,
    ACTIONS(923), 1,
      sym_number,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    ACTIONS(925), 2,
      sym_money,
      sym_rate,
    STATE(514), 2,
      sym_identifier,
      sym_database_field,
  [17049] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(921), 1,
      sym_record_type,
    ACTIONS(927), 1,
      sym_number,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    ACTIONS(929), 2,
      sym_money,
      sym_rate,
    STATE(543), 2,
      sym_identifier,
      sym_database_field,
  [17076] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    ACTIONS(921), 1,
      sym_record_type,
    ACTIONS(931), 1,
      sym_number,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    ACTIONS(933), 2,
      sym_money,
      sym_rate,
    STATE(523), 2,
      sym_identifier,
      sym_database_field,
  [17103] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(540), 2,
      sym_string_literal,
      sym_identifier,
  [17123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(565), 2,
      sym_string_literal,
      sym_identifier,
  [17143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(544), 2,
      sym_string_literal,
      sym_identifier,
  [17163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(541), 2,
      sym_string_literal,
      sym_identifier,
  [17183] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(536), 2,
      sym_string_literal,
      sym_identifier,
  [17203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(520), 2,
      sym_string_literal,
      sym_identifier,
  [17223] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(569), 2,
      sym_string_literal,
      sym_identifier,
  [17243] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(546), 2,
      sym_string_literal,
      sym_identifier,
  [17263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      aux_sym__identifier_token1,
    STATE(263), 1,
      sym__identifier,
    STATE(269), 1,
      sym_array_identifier,
    STATE(36), 2,
      sym_string_literal,
      sym_identifier,
  [17283] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(563), 2,
      sym_string_literal,
      sym_identifier,
  [17303] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(518), 2,
      sym_string_literal,
      sym_identifier,
  [17323] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(491), 2,
      sym_string_literal,
      sym_identifier,
  [17343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(507), 2,
      sym_string_literal,
      sym_identifier,
  [17363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(531), 2,
      sym_string_literal,
      sym_identifier,
  [17383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(490), 2,
      sym_string_literal,
      sym_identifier,
  [17403] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(535), 2,
      sym_string_literal,
      sym_identifier,
  [17423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(571), 2,
      sym_string_literal,
      sym_identifier,
  [17443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(575), 2,
      sym_string_literal,
      sym_identifier,
  [17463] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(537), 2,
      sym_string_literal,
      sym_identifier,
  [17483] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(573), 2,
      sym_string_literal,
      sym_identifier,
  [17503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(538), 2,
      sym_string_literal,
      sym_identifier,
  [17523] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(506), 2,
      sym_string_literal,
      sym_identifier,
  [17543] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(539), 2,
      sym_string_literal,
      sym_identifier,
  [17563] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(553), 2,
      sym_string_literal,
      sym_identifier,
  [17583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(554), 2,
      sym_string_literal,
      sym_identifier,
  [17603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(572), 2,
      sym_string_literal,
      sym_identifier,
  [17623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(542), 2,
      sym_string_literal,
      sym_identifier,
  [17643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(555), 2,
      sym_string_literal,
      sym_identifier,
  [17663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(566), 2,
      sym_string_literal,
      sym_identifier,
  [17683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(556), 2,
      sym_string_literal,
      sym_identifier,
  [17703] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(941), 1,
      aux_sym__identifier_token1,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(512), 2,
      sym_string_literal,
      sym_identifier,
  [17723] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(557), 2,
      sym_string_literal,
      sym_identifier,
  [17743] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(558), 2,
      sym_string_literal,
      sym_identifier,
  [17763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(567), 2,
      sym_string_literal,
      sym_identifier,
  [17783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(559), 2,
      sym_string_literal,
      sym_identifier,
  [17803] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(560), 2,
      sym_string_literal,
      sym_identifier,
  [17823] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(503), 2,
      sym_string_literal,
      sym_identifier,
  [17843] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(496), 2,
      sym_string_literal,
      sym_identifier,
  [17863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(508), 2,
      sym_string_literal,
      sym_identifier,
  [17883] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(568), 2,
      sym_string_literal,
      sym_identifier,
  [17903] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(499), 2,
      sym_string_literal,
      sym_identifier,
  [17923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym__identifier_token1,
    ACTIONS(943), 1,
      sym_number,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(489), 1,
      sym_identifier,
  [17942] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(118), 1,
      sym_identifier,
    STATE(119), 1,
      sym_field_name,
  [17961] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(112), 1,
      sym_field_name,
    STATE(118), 1,
      sym_identifier,
  [17980] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      aux_sym__identifier_token1,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(175), 1,
      sym_identifier,
    STATE(234), 1,
      sym_field_name,
  [17999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    STATE(100), 1,
      sym__identifier,
    STATE(108), 1,
      sym_array_identifier,
    STATE(118), 1,
      sym_identifier,
    STATE(121), 1,
      sym_field_name,
  [18018] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      aux_sym__identifier_token1,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(175), 1,
      sym_identifier,
    STATE(224), 1,
      sym_field_name,
  [18037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      aux_sym__identifier_token1,
    STATE(116), 1,
      sym__identifier,
    STATE(133), 1,
      sym_array_identifier,
    STATE(175), 1,
      sym_identifier,
    STATE(201), 1,
      sym_field_name,
  [18056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__identifier_token1,
    STATE(112), 1,
      sym_field_name,
    STATE(275), 1,
      sym__identifier,
    STATE(287), 1,
      sym_array_identifier,
    STATE(451), 1,
      sym_identifier,
  [18075] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym__identifier_token1,
    ACTIONS(949), 1,
      sym_number,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(570), 1,
      sym_identifier,
  [18094] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__identifier_token1,
    STATE(119), 1,
      sym_field_name,
    STATE(275), 1,
      sym__identifier,
    STATE(287), 1,
      sym_array_identifier,
    STATE(451), 1,
      sym_identifier,
  [18113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__identifier_token1,
    STATE(121), 1,
      sym_field_name,
    STATE(275), 1,
      sym__identifier,
    STATE(287), 1,
      sym_array_identifier,
    STATE(451), 1,
      sym_identifier,
  [18132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__identifier_token1,
    STATE(275), 1,
      sym__identifier,
    STATE(280), 1,
      sym_identifier,
    STATE(287), 1,
      sym_array_identifier,
    STATE(310), 1,
      sym_field_name,
  [18151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym__identifier_token1,
    ACTIONS(951), 1,
      sym_number,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(551), 1,
      sym_identifier,
  [18170] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym__identifier_token1,
    ACTIONS(953), 1,
      sym_number,
    STATE(276), 1,
      sym__identifier,
    STATE(290), 1,
      sym_array_identifier,
    STATE(545), 1,
      sym_identifier,
  [18189] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__identifier_token1,
    STATE(275), 1,
      sym__identifier,
    STATE(280), 1,
      sym_identifier,
    STATE(287), 1,
      sym_array_identifier,
    STATE(315), 1,
      sym_field_name,
  [18208] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__identifier_token1,
    STATE(275), 1,
      sym__identifier,
    STATE(280), 1,
      sym_identifier,
    STATE(287), 1,
      sym_array_identifier,
    STATE(314), 1,
      sym_field_name,
  [18227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_POUND,
    ACTIONS(955), 1,
      aux_sym_array_type_token1,
    STATE(449), 1,
      sym_array_type,
    ACTIONS(729), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [18244] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym__identifier_token1,
    STATE(39), 1,
      sym_identifier,
    STATE(263), 1,
      sym__identifier,
    STATE(269), 1,
      sym_array_identifier,
  [18260] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym__identifier_token1,
    STATE(30), 1,
      sym_identifier,
    STATE(263), 1,
      sym__identifier,
    STATE(269), 1,
      sym_array_identifier,
  [18276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_POUND,
    ACTIONS(737), 3,
      aux_sym_keyword_token5,
      aux_sym_array_type_token1,
      aux_sym__identifier_token1,
  [18288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    ACTIONS(957), 1,
      sym_number,
    STATE(482), 1,
      sym__identifier,
  [18301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    ACTIONS(959), 1,
      sym_number,
    STATE(458), 1,
      sym__identifier,
  [18314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_subIndex_repeat1,
  [18327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_subIndex_repeat1,
  [18340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_POUND,
    ACTIONS(751), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [18351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_POUND,
    ACTIONS(763), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [18362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      aux_sym_array_type_repeat1,
  [18375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_POUND,
    ACTIONS(729), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [18386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      aux_sym_array_type_repeat1,
  [18399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    STATE(464), 1,
      aux_sym_subIndex_repeat1,
  [18412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      aux_sym_array_type_repeat1,
  [18425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      aux_sym_array_type_repeat1,
  [18438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      aux_sym_array_type_repeat1,
  [18451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_POUND,
    ACTIONS(767), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [18462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_subIndex_repeat1,
  [18475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(986), 1,
      sym_number,
    ACTIONS(988), 1,
      anon_sym_COLON,
  [18488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(511), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [18499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(990), 1,
      sym_number,
    ACTIONS(992), 1,
      anon_sym_COLON,
  [18512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      aux_sym_subIndex_repeat1,
  [18525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_subIndex_repeat1,
  [18538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    ACTIONS(1001), 1,
      sym_number,
    STATE(438), 1,
      sym__identifier,
  [18551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_subIndex_repeat1,
  [18564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      aux_sym_subIndex_repeat1,
  [18577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(1007), 1,
      sym_number,
    ACTIONS(1009), 1,
      anon_sym_COLON,
  [18590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    ACTIONS(1011), 1,
      sym_number,
    STATE(445), 1,
      sym__identifier,
  [18603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    ACTIONS(1013), 1,
      sym_number,
    STATE(454), 1,
      sym__identifier,
  [18616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    ACTIONS(1015), 1,
      sym_number,
    STATE(469), 1,
      sym__identifier,
  [18629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_POUND,
    ACTIONS(1017), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [18640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_subIndex_repeat1,
  [18653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_POUND,
    ACTIONS(439), 2,
      aux_sym_keyword_token5,
      aux_sym__identifier_token1,
  [18664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_subIndex_repeat1,
  [18677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_subIndex_repeat1,
  [18690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_subIndex_repeat1,
  [18703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      aux_sym_subIndex_repeat1,
  [18716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__identifier_token1,
    ACTIONS(1031), 1,
      sym_number,
    STATE(467), 1,
      sym__identifier,
  [18729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(1033), 1,
      sym_number,
    ACTIONS(1035), 1,
      anon_sym_COLON,
  [18742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_record_type,
    ACTIONS(1039), 1,
      anon_sym_COLON,
  [18752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(1041), 1,
      sym_number,
  [18762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      sym_string_literal,
  [18772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_record_type,
    ACTIONS(1045), 1,
      anon_sym_COLON,
  [18782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_record_type,
    ACTIONS(1049), 1,
      anon_sym_COLON,
  [18792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_record_type,
    ACTIONS(1053), 1,
      anon_sym_COLON,
  [18802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_record_type,
    ACTIONS(1057), 1,
      anon_sym_COLON,
  [18812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_DQUOTE,
    STATE(452), 1,
      sym_string_literal,
  [18822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_string_literal,
  [18832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(1059), 1,
      sym_number,
  [18842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym_record_type,
    ACTIONS(1063), 1,
      anon_sym_COLON,
  [18860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym_record_type,
    ACTIONS(1067), 1,
      anon_sym_COLON,
  [18870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym_record_type,
    ACTIONS(1071), 1,
      anon_sym_COLON,
  [18880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(307), 1,
      sym_string_literal,
  [18890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    ACTIONS(1073), 1,
      sym_number,
  [18900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_keyword_token4,
  [18915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
  [18922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
  [18929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
  [18936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_COLON,
  [18943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_DQUOTE,
  [18950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_DQUOTE,
  [18957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
  [18964] = 2,
    ACTIONS(1091), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1093), 1,
      sym_comment,
  [18971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      aux_sym_include_statement_token1,
  [18978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
  [18985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_EQ,
  [18992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_EQ,
  [18999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      ts_builtin_sym_end,
  [19006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
  [19013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym_number,
  [19020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_COLON,
  [19027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
  [19034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
  [19041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
  [19048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      aux_sym_include_statement_token1,
  [19055] = 2,
    ACTIONS(1093), 1,
      sym_comment,
    ACTIONS(1119), 1,
      aux_sym_string_literal_token1,
  [19062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      aux_sym_include_statement_token1,
  [19069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      aux_sym_keyword_token5,
  [19076] = 2,
    ACTIONS(1093), 1,
      sym_comment,
    ACTIONS(1125), 1,
      aux_sym_string_literal_token1,
  [19083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
  [19090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      aux_sym_keyword_token5,
  [19097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      aux_sym_print_division_token2,
  [19104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_EQ,
  [19111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
  [19118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_COLON,
  [19125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
  [19132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym_record_type,
  [19139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      aux_sym_keyword_token5,
  [19146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
  [19153] = 2,
    ACTIONS(1093), 1,
      sym_comment,
    ACTIONS(1147), 1,
      aux_sym_string_literal_token1,
  [19160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      aux_sym_include_statement_token1,
  [19167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_COLON,
  [19174] = 2,
    ACTIONS(1093), 1,
      sym_comment,
    ACTIONS(1153), 1,
      aux_sym_string_literal_token1,
  [19181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_EQ,
  [19188] = 2,
    ACTIONS(1093), 1,
      sym_comment,
    ACTIONS(1157), 1,
      aux_sym_string_literal_token1,
  [19195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_EQ,
  [19202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
  [19209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_DQUOTE,
  [19216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_LPAREN,
  [19223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_LPAREN,
  [19230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
  [19237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_COMMA,
  [19244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
  [19251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
  [19258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
  [19265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
  [19272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
  [19279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
  [19286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
  [19293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
  [19300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym_for_statement_token1,
  [19307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
  [19314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      aux_sym_keyword_token5,
  [19321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_DQUOTE,
  [19328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      sym_number,
  [19335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_EQ,
  [19342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      aux_sym_keyword_token4,
  [19349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_DQUOTE,
  [19356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
  [19363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
  [19370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
  [19377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
  [19384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
  [19391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
  [19398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
  [19405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
  [19412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_EQ,
  [19419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      sym_number,
  [19426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
  [19433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_EQ,
  [19440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
  [19447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
  [19454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
  [19461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
  [19468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
  [19475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      aux_sym_for_statement_token1,
  [19482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
  [19489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
  [19496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_COMMA,
  [19503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_EQ,
  [19510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(50)] = 0,
  [SMALL_STATE(51)] = 70,
  [SMALL_STATE(52)] = 184,
  [SMALL_STATE(53)] = 298,
  [SMALL_STATE(54)] = 412,
  [SMALL_STATE(55)] = 526,
  [SMALL_STATE(56)] = 640,
  [SMALL_STATE(57)] = 754,
  [SMALL_STATE(58)] = 868,
  [SMALL_STATE(59)] = 982,
  [SMALL_STATE(60)] = 1096,
  [SMALL_STATE(61)] = 1212,
  [SMALL_STATE(62)] = 1326,
  [SMALL_STATE(63)] = 1440,
  [SMALL_STATE(64)] = 1554,
  [SMALL_STATE(65)] = 1668,
  [SMALL_STATE(66)] = 1782,
  [SMALL_STATE(67)] = 1896,
  [SMALL_STATE(68)] = 2010,
  [SMALL_STATE(69)] = 2124,
  [SMALL_STATE(70)] = 2238,
  [SMALL_STATE(71)] = 2352,
  [SMALL_STATE(72)] = 2466,
  [SMALL_STATE(73)] = 2580,
  [SMALL_STATE(74)] = 2694,
  [SMALL_STATE(75)] = 2808,
  [SMALL_STATE(76)] = 2922,
  [SMALL_STATE(77)] = 3036,
  [SMALL_STATE(78)] = 3150,
  [SMALL_STATE(79)] = 3264,
  [SMALL_STATE(80)] = 3378,
  [SMALL_STATE(81)] = 3492,
  [SMALL_STATE(82)] = 3608,
  [SMALL_STATE(83)] = 3722,
  [SMALL_STATE(84)] = 3836,
  [SMALL_STATE(85)] = 3950,
  [SMALL_STATE(86)] = 4064,
  [SMALL_STATE(87)] = 4178,
  [SMALL_STATE(88)] = 4292,
  [SMALL_STATE(89)] = 4406,
  [SMALL_STATE(90)] = 4520,
  [SMALL_STATE(91)] = 4634,
  [SMALL_STATE(92)] = 4748,
  [SMALL_STATE(93)] = 4862,
  [SMALL_STATE(94)] = 4976,
  [SMALL_STATE(95)] = 5090,
  [SMALL_STATE(96)] = 5204,
  [SMALL_STATE(97)] = 5318,
  [SMALL_STATE(98)] = 5432,
  [SMALL_STATE(99)] = 5494,
  [SMALL_STATE(100)] = 5556,
  [SMALL_STATE(101)] = 5615,
  [SMALL_STATE(102)] = 5682,
  [SMALL_STATE(103)] = 5736,
  [SMALL_STATE(104)] = 5790,
  [SMALL_STATE(105)] = 5844,
  [SMALL_STATE(106)] = 5906,
  [SMALL_STATE(107)] = 5968,
  [SMALL_STATE(108)] = 6022,
  [SMALL_STATE(109)] = 6076,
  [SMALL_STATE(110)] = 6137,
  [SMALL_STATE(111)] = 6198,
  [SMALL_STATE(112)] = 6251,
  [SMALL_STATE(113)] = 6303,
  [SMALL_STATE(114)] = 6355,
  [SMALL_STATE(115)] = 6407,
  [SMALL_STATE(116)] = 6459,
  [SMALL_STATE(117)] = 6515,
  [SMALL_STATE(118)] = 6567,
  [SMALL_STATE(119)] = 6621,
  [SMALL_STATE(120)] = 6673,
  [SMALL_STATE(121)] = 6725,
  [SMALL_STATE(122)] = 6777,
  [SMALL_STATE(123)] = 6831,
  [SMALL_STATE(124)] = 6886,
  [SMALL_STATE(125)] = 6937,
  [SMALL_STATE(126)] = 6990,
  [SMALL_STATE(127)] = 7043,
  [SMALL_STATE(128)] = 7096,
  [SMALL_STATE(129)] = 7149,
  [SMALL_STATE(130)] = 7202,
  [SMALL_STATE(131)] = 7253,
  [SMALL_STATE(132)] = 7304,
  [SMALL_STATE(133)] = 7359,
  [SMALL_STATE(134)] = 7410,
  [SMALL_STATE(135)] = 7463,
  [SMALL_STATE(136)] = 7516,
  [SMALL_STATE(137)] = 7569,
  [SMALL_STATE(138)] = 7620,
  [SMALL_STATE(139)] = 7679,
  [SMALL_STATE(140)] = 7740,
  [SMALL_STATE(141)] = 7803,
  [SMALL_STATE(142)] = 7856,
  [SMALL_STATE(143)] = 7907,
  [SMALL_STATE(144)] = 7962,
  [SMALL_STATE(145)] = 8013,
  [SMALL_STATE(146)] = 8066,
  [SMALL_STATE(147)] = 8117,
  [SMALL_STATE(148)] = 8168,
  [SMALL_STATE(149)] = 8233,
  [SMALL_STATE(150)] = 8288,
  [SMALL_STATE(151)] = 8339,
  [SMALL_STATE(152)] = 8392,
  [SMALL_STATE(153)] = 8457,
  [SMALL_STATE(154)] = 8508,
  [SMALL_STATE(155)] = 8561,
  [SMALL_STATE(156)] = 8612,
  [SMALL_STATE(157)] = 8663,
  [SMALL_STATE(158)] = 8718,
  [SMALL_STATE(159)] = 8769,
  [SMALL_STATE(160)] = 8820,
  [SMALL_STATE(161)] = 8871,
  [SMALL_STATE(162)] = 8922,
  [SMALL_STATE(163)] = 8973,
  [SMALL_STATE(164)] = 9024,
  [SMALL_STATE(165)] = 9077,
  [SMALL_STATE(166)] = 9128,
  [SMALL_STATE(167)] = 9181,
  [SMALL_STATE(168)] = 9232,
  [SMALL_STATE(169)] = 9283,
  [SMALL_STATE(170)] = 9338,
  [SMALL_STATE(171)] = 9391,
  [SMALL_STATE(172)] = 9446,
  [SMALL_STATE(173)] = 9497,
  [SMALL_STATE(174)] = 9548,
  [SMALL_STATE(175)] = 9599,
  [SMALL_STATE(176)] = 9652,
  [SMALL_STATE(177)] = 9707,
  [SMALL_STATE(178)] = 9758,
  [SMALL_STATE(179)] = 9813,
  [SMALL_STATE(180)] = 9868,
  [SMALL_STATE(181)] = 9923,
  [SMALL_STATE(182)] = 9978,
  [SMALL_STATE(183)] = 10029,
  [SMALL_STATE(184)] = 10083,
  [SMALL_STATE(185)] = 10147,
  [SMALL_STATE(186)] = 10197,
  [SMALL_STATE(187)] = 10249,
  [SMALL_STATE(188)] = 10311,
  [SMALL_STATE(189)] = 10365,
  [SMALL_STATE(190)] = 10419,
  [SMALL_STATE(191)] = 10473,
  [SMALL_STATE(192)] = 10523,
  [SMALL_STATE(193)] = 10573,
  [SMALL_STATE(194)] = 10633,
  [SMALL_STATE(195)] = 10685,
  [SMALL_STATE(196)] = 10743,
  [SMALL_STATE(197)] = 10793,
  [SMALL_STATE(198)] = 10845,
  [SMALL_STATE(199)] = 10899,
  [SMALL_STATE(200)] = 10949,
  [SMALL_STATE(201)] = 10999,
  [SMALL_STATE(202)] = 11049,
  [SMALL_STATE(203)] = 11103,
  [SMALL_STATE(204)] = 11155,
  [SMALL_STATE(205)] = 11219,
  [SMALL_STATE(206)] = 11269,
  [SMALL_STATE(207)] = 11319,
  [SMALL_STATE(208)] = 11373,
  [SMALL_STATE(209)] = 11423,
  [SMALL_STATE(210)] = 11473,
  [SMALL_STATE(211)] = 11527,
  [SMALL_STATE(212)] = 11579,
  [SMALL_STATE(213)] = 11631,
  [SMALL_STATE(214)] = 11683,
  [SMALL_STATE(215)] = 11733,
  [SMALL_STATE(216)] = 11787,
  [SMALL_STATE(217)] = 11839,
  [SMALL_STATE(218)] = 11889,
  [SMALL_STATE(219)] = 11939,
  [SMALL_STATE(220)] = 11989,
  [SMALL_STATE(221)] = 12039,
  [SMALL_STATE(222)] = 12091,
  [SMALL_STATE(223)] = 12141,
  [SMALL_STATE(224)] = 12193,
  [SMALL_STATE(225)] = 12243,
  [SMALL_STATE(226)] = 12297,
  [SMALL_STATE(227)] = 12349,
  [SMALL_STATE(228)] = 12399,
  [SMALL_STATE(229)] = 12453,
  [SMALL_STATE(230)] = 12503,
  [SMALL_STATE(231)] = 12553,
  [SMALL_STATE(232)] = 12605,
  [SMALL_STATE(233)] = 12655,
  [SMALL_STATE(234)] = 12705,
  [SMALL_STATE(235)] = 12755,
  [SMALL_STATE(236)] = 12805,
  [SMALL_STATE(237)] = 12857,
  [SMALL_STATE(238)] = 12907,
  [SMALL_STATE(239)] = 12955,
  [SMALL_STATE(240)] = 13003,
  [SMALL_STATE(241)] = 13051,
  [SMALL_STATE(242)] = 13099,
  [SMALL_STATE(243)] = 13147,
  [SMALL_STATE(244)] = 13195,
  [SMALL_STATE(245)] = 13242,
  [SMALL_STATE(246)] = 13288,
  [SMALL_STATE(247)] = 13330,
  [SMALL_STATE(248)] = 13371,
  [SMALL_STATE(249)] = 13412,
  [SMALL_STATE(250)] = 13455,
  [SMALL_STATE(251)] = 13496,
  [SMALL_STATE(252)] = 13537,
  [SMALL_STATE(253)] = 13578,
  [SMALL_STATE(254)] = 13619,
  [SMALL_STATE(255)] = 13660,
  [SMALL_STATE(256)] = 13701,
  [SMALL_STATE(257)] = 13742,
  [SMALL_STATE(258)] = 13783,
  [SMALL_STATE(259)] = 13824,
  [SMALL_STATE(260)] = 13865,
  [SMALL_STATE(261)] = 13906,
  [SMALL_STATE(262)] = 13947,
  [SMALL_STATE(263)] = 13988,
  [SMALL_STATE(264)] = 14033,
  [SMALL_STATE(265)] = 14073,
  [SMALL_STATE(266)] = 14113,
  [SMALL_STATE(267)] = 14153,
  [SMALL_STATE(268)] = 14193,
  [SMALL_STATE(269)] = 14233,
  [SMALL_STATE(270)] = 14273,
  [SMALL_STATE(271)] = 14313,
  [SMALL_STATE(272)] = 14353,
  [SMALL_STATE(273)] = 14395,
  [SMALL_STATE(274)] = 14435,
  [SMALL_STATE(275)] = 14475,
  [SMALL_STATE(276)] = 14505,
  [SMALL_STATE(277)] = 14535,
  [SMALL_STATE(278)] = 14560,
  [SMALL_STATE(279)] = 14585,
  [SMALL_STATE(280)] = 14609,
  [SMALL_STATE(281)] = 14637,
  [SMALL_STATE(282)] = 14661,
  [SMALL_STATE(283)] = 14689,
  [SMALL_STATE(284)] = 14713,
  [SMALL_STATE(285)] = 14741,
  [SMALL_STATE(286)] = 14769,
  [SMALL_STATE(287)] = 14793,
  [SMALL_STATE(288)] = 14817,
  [SMALL_STATE(289)] = 14841,
  [SMALL_STATE(290)] = 14865,
  [SMALL_STATE(291)] = 14889,
  [SMALL_STATE(292)] = 14914,
  [SMALL_STATE(293)] = 14939,
  [SMALL_STATE(294)] = 14964,
  [SMALL_STATE(295)] = 14989,
  [SMALL_STATE(296)] = 15014,
  [SMALL_STATE(297)] = 15039,
  [SMALL_STATE(298)] = 15064,
  [SMALL_STATE(299)] = 15089,
  [SMALL_STATE(300)] = 15114,
  [SMALL_STATE(301)] = 15137,
  [SMALL_STATE(302)] = 15162,
  [SMALL_STATE(303)] = 15187,
  [SMALL_STATE(304)] = 15212,
  [SMALL_STATE(305)] = 15237,
  [SMALL_STATE(306)] = 15262,
  [SMALL_STATE(307)] = 15288,
  [SMALL_STATE(308)] = 15310,
  [SMALL_STATE(309)] = 15332,
  [SMALL_STATE(310)] = 15354,
  [SMALL_STATE(311)] = 15376,
  [SMALL_STATE(312)] = 15398,
  [SMALL_STATE(313)] = 15420,
  [SMALL_STATE(314)] = 15444,
  [SMALL_STATE(315)] = 15466,
  [SMALL_STATE(316)] = 15488,
  [SMALL_STATE(317)] = 15510,
  [SMALL_STATE(318)] = 15532,
  [SMALL_STATE(319)] = 15554,
  [SMALL_STATE(320)] = 15576,
  [SMALL_STATE(321)] = 15598,
  [SMALL_STATE(322)] = 15620,
  [SMALL_STATE(323)] = 15642,
  [SMALL_STATE(324)] = 15664,
  [SMALL_STATE(325)] = 15686,
  [SMALL_STATE(326)] = 15708,
  [SMALL_STATE(327)] = 15730,
  [SMALL_STATE(328)] = 15752,
  [SMALL_STATE(329)] = 15774,
  [SMALL_STATE(330)] = 15796,
  [SMALL_STATE(331)] = 15818,
  [SMALL_STATE(332)] = 15840,
  [SMALL_STATE(333)] = 15864,
  [SMALL_STATE(334)] = 15896,
  [SMALL_STATE(335)] = 15926,
  [SMALL_STATE(336)] = 15954,
  [SMALL_STATE(337)] = 15976,
  [SMALL_STATE(338)] = 15998,
  [SMALL_STATE(339)] = 16020,
  [SMALL_STATE(340)] = 16051,
  [SMALL_STATE(341)] = 16082,
  [SMALL_STATE(342)] = 16113,
  [SMALL_STATE(343)] = 16144,
  [SMALL_STATE(344)] = 16175,
  [SMALL_STATE(345)] = 16206,
  [SMALL_STATE(346)] = 16237,
  [SMALL_STATE(347)] = 16268,
  [SMALL_STATE(348)] = 16299,
  [SMALL_STATE(349)] = 16330,
  [SMALL_STATE(350)] = 16361,
  [SMALL_STATE(351)] = 16392,
  [SMALL_STATE(352)] = 16423,
  [SMALL_STATE(353)] = 16454,
  [SMALL_STATE(354)] = 16485,
  [SMALL_STATE(355)] = 16516,
  [SMALL_STATE(356)] = 16547,
  [SMALL_STATE(357)] = 16578,
  [SMALL_STATE(358)] = 16609,
  [SMALL_STATE(359)] = 16640,
  [SMALL_STATE(360)] = 16671,
  [SMALL_STATE(361)] = 16702,
  [SMALL_STATE(362)] = 16733,
  [SMALL_STATE(363)] = 16764,
  [SMALL_STATE(364)] = 16795,
  [SMALL_STATE(365)] = 16826,
  [SMALL_STATE(366)] = 16857,
  [SMALL_STATE(367)] = 16888,
  [SMALL_STATE(368)] = 16910,
  [SMALL_STATE(369)] = 16940,
  [SMALL_STATE(370)] = 16970,
  [SMALL_STATE(371)] = 16992,
  [SMALL_STATE(372)] = 17022,
  [SMALL_STATE(373)] = 17049,
  [SMALL_STATE(374)] = 17076,
  [SMALL_STATE(375)] = 17103,
  [SMALL_STATE(376)] = 17123,
  [SMALL_STATE(377)] = 17143,
  [SMALL_STATE(378)] = 17163,
  [SMALL_STATE(379)] = 17183,
  [SMALL_STATE(380)] = 17203,
  [SMALL_STATE(381)] = 17223,
  [SMALL_STATE(382)] = 17243,
  [SMALL_STATE(383)] = 17263,
  [SMALL_STATE(384)] = 17283,
  [SMALL_STATE(385)] = 17303,
  [SMALL_STATE(386)] = 17323,
  [SMALL_STATE(387)] = 17343,
  [SMALL_STATE(388)] = 17363,
  [SMALL_STATE(389)] = 17383,
  [SMALL_STATE(390)] = 17403,
  [SMALL_STATE(391)] = 17423,
  [SMALL_STATE(392)] = 17443,
  [SMALL_STATE(393)] = 17463,
  [SMALL_STATE(394)] = 17483,
  [SMALL_STATE(395)] = 17503,
  [SMALL_STATE(396)] = 17523,
  [SMALL_STATE(397)] = 17543,
  [SMALL_STATE(398)] = 17563,
  [SMALL_STATE(399)] = 17583,
  [SMALL_STATE(400)] = 17603,
  [SMALL_STATE(401)] = 17623,
  [SMALL_STATE(402)] = 17643,
  [SMALL_STATE(403)] = 17663,
  [SMALL_STATE(404)] = 17683,
  [SMALL_STATE(405)] = 17703,
  [SMALL_STATE(406)] = 17723,
  [SMALL_STATE(407)] = 17743,
  [SMALL_STATE(408)] = 17763,
  [SMALL_STATE(409)] = 17783,
  [SMALL_STATE(410)] = 17803,
  [SMALL_STATE(411)] = 17823,
  [SMALL_STATE(412)] = 17843,
  [SMALL_STATE(413)] = 17863,
  [SMALL_STATE(414)] = 17883,
  [SMALL_STATE(415)] = 17903,
  [SMALL_STATE(416)] = 17923,
  [SMALL_STATE(417)] = 17942,
  [SMALL_STATE(418)] = 17961,
  [SMALL_STATE(419)] = 17980,
  [SMALL_STATE(420)] = 17999,
  [SMALL_STATE(421)] = 18018,
  [SMALL_STATE(422)] = 18037,
  [SMALL_STATE(423)] = 18056,
  [SMALL_STATE(424)] = 18075,
  [SMALL_STATE(425)] = 18094,
  [SMALL_STATE(426)] = 18113,
  [SMALL_STATE(427)] = 18132,
  [SMALL_STATE(428)] = 18151,
  [SMALL_STATE(429)] = 18170,
  [SMALL_STATE(430)] = 18189,
  [SMALL_STATE(431)] = 18208,
  [SMALL_STATE(432)] = 18227,
  [SMALL_STATE(433)] = 18244,
  [SMALL_STATE(434)] = 18260,
  [SMALL_STATE(435)] = 18276,
  [SMALL_STATE(436)] = 18288,
  [SMALL_STATE(437)] = 18301,
  [SMALL_STATE(438)] = 18314,
  [SMALL_STATE(439)] = 18327,
  [SMALL_STATE(440)] = 18340,
  [SMALL_STATE(441)] = 18351,
  [SMALL_STATE(442)] = 18362,
  [SMALL_STATE(443)] = 18375,
  [SMALL_STATE(444)] = 18386,
  [SMALL_STATE(445)] = 18399,
  [SMALL_STATE(446)] = 18412,
  [SMALL_STATE(447)] = 18425,
  [SMALL_STATE(448)] = 18438,
  [SMALL_STATE(449)] = 18451,
  [SMALL_STATE(450)] = 18462,
  [SMALL_STATE(451)] = 18475,
  [SMALL_STATE(452)] = 18488,
  [SMALL_STATE(453)] = 18499,
  [SMALL_STATE(454)] = 18512,
  [SMALL_STATE(455)] = 18525,
  [SMALL_STATE(456)] = 18538,
  [SMALL_STATE(457)] = 18551,
  [SMALL_STATE(458)] = 18564,
  [SMALL_STATE(459)] = 18577,
  [SMALL_STATE(460)] = 18590,
  [SMALL_STATE(461)] = 18603,
  [SMALL_STATE(462)] = 18616,
  [SMALL_STATE(463)] = 18629,
  [SMALL_STATE(464)] = 18640,
  [SMALL_STATE(465)] = 18653,
  [SMALL_STATE(466)] = 18664,
  [SMALL_STATE(467)] = 18677,
  [SMALL_STATE(468)] = 18690,
  [SMALL_STATE(469)] = 18703,
  [SMALL_STATE(470)] = 18716,
  [SMALL_STATE(471)] = 18729,
  [SMALL_STATE(472)] = 18742,
  [SMALL_STATE(473)] = 18752,
  [SMALL_STATE(474)] = 18762,
  [SMALL_STATE(475)] = 18772,
  [SMALL_STATE(476)] = 18782,
  [SMALL_STATE(477)] = 18792,
  [SMALL_STATE(478)] = 18802,
  [SMALL_STATE(479)] = 18812,
  [SMALL_STATE(480)] = 18822,
  [SMALL_STATE(481)] = 18832,
  [SMALL_STATE(482)] = 18842,
  [SMALL_STATE(483)] = 18850,
  [SMALL_STATE(484)] = 18860,
  [SMALL_STATE(485)] = 18870,
  [SMALL_STATE(486)] = 18880,
  [SMALL_STATE(487)] = 18890,
  [SMALL_STATE(488)] = 18900,
  [SMALL_STATE(489)] = 18908,
  [SMALL_STATE(490)] = 18915,
  [SMALL_STATE(491)] = 18922,
  [SMALL_STATE(492)] = 18929,
  [SMALL_STATE(493)] = 18936,
  [SMALL_STATE(494)] = 18943,
  [SMALL_STATE(495)] = 18950,
  [SMALL_STATE(496)] = 18957,
  [SMALL_STATE(497)] = 18964,
  [SMALL_STATE(498)] = 18971,
  [SMALL_STATE(499)] = 18978,
  [SMALL_STATE(500)] = 18985,
  [SMALL_STATE(501)] = 18992,
  [SMALL_STATE(502)] = 18999,
  [SMALL_STATE(503)] = 19006,
  [SMALL_STATE(504)] = 19013,
  [SMALL_STATE(505)] = 19020,
  [SMALL_STATE(506)] = 19027,
  [SMALL_STATE(507)] = 19034,
  [SMALL_STATE(508)] = 19041,
  [SMALL_STATE(509)] = 19048,
  [SMALL_STATE(510)] = 19055,
  [SMALL_STATE(511)] = 19062,
  [SMALL_STATE(512)] = 19069,
  [SMALL_STATE(513)] = 19076,
  [SMALL_STATE(514)] = 19083,
  [SMALL_STATE(515)] = 19090,
  [SMALL_STATE(516)] = 19097,
  [SMALL_STATE(517)] = 19104,
  [SMALL_STATE(518)] = 19111,
  [SMALL_STATE(519)] = 19118,
  [SMALL_STATE(520)] = 19125,
  [SMALL_STATE(521)] = 19132,
  [SMALL_STATE(522)] = 19139,
  [SMALL_STATE(523)] = 19146,
  [SMALL_STATE(524)] = 19153,
  [SMALL_STATE(525)] = 19160,
  [SMALL_STATE(526)] = 19167,
  [SMALL_STATE(527)] = 19174,
  [SMALL_STATE(528)] = 19181,
  [SMALL_STATE(529)] = 19188,
  [SMALL_STATE(530)] = 19195,
  [SMALL_STATE(531)] = 19202,
  [SMALL_STATE(532)] = 19209,
  [SMALL_STATE(533)] = 19216,
  [SMALL_STATE(534)] = 19223,
  [SMALL_STATE(535)] = 19230,
  [SMALL_STATE(536)] = 19237,
  [SMALL_STATE(537)] = 19244,
  [SMALL_STATE(538)] = 19251,
  [SMALL_STATE(539)] = 19258,
  [SMALL_STATE(540)] = 19265,
  [SMALL_STATE(541)] = 19272,
  [SMALL_STATE(542)] = 19279,
  [SMALL_STATE(543)] = 19286,
  [SMALL_STATE(544)] = 19293,
  [SMALL_STATE(545)] = 19300,
  [SMALL_STATE(546)] = 19307,
  [SMALL_STATE(547)] = 19314,
  [SMALL_STATE(548)] = 19321,
  [SMALL_STATE(549)] = 19328,
  [SMALL_STATE(550)] = 19335,
  [SMALL_STATE(551)] = 19342,
  [SMALL_STATE(552)] = 19349,
  [SMALL_STATE(553)] = 19356,
  [SMALL_STATE(554)] = 19363,
  [SMALL_STATE(555)] = 19370,
  [SMALL_STATE(556)] = 19377,
  [SMALL_STATE(557)] = 19384,
  [SMALL_STATE(558)] = 19391,
  [SMALL_STATE(559)] = 19398,
  [SMALL_STATE(560)] = 19405,
  [SMALL_STATE(561)] = 19412,
  [SMALL_STATE(562)] = 19419,
  [SMALL_STATE(563)] = 19426,
  [SMALL_STATE(564)] = 19433,
  [SMALL_STATE(565)] = 19440,
  [SMALL_STATE(566)] = 19447,
  [SMALL_STATE(567)] = 19454,
  [SMALL_STATE(568)] = 19461,
  [SMALL_STATE(569)] = 19468,
  [SMALL_STATE(570)] = 19475,
  [SMALL_STATE(571)] = 19482,
  [SMALL_STATE(572)] = 19489,
  [SMALL_STATE(573)] = 19496,
  [SMALL_STATE(574)] = 19503,
  [SMALL_STATE(575)] = 19510,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(106),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(32),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(33),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(165),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(105),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(170),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(166),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(164),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(125),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(126),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(127),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(128),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(129),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(134),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(135),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(136),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(472),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(52),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(513),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(103),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(137),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(137),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(509),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(434),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(109),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(45),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(46),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(237),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(110),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(236),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(231),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(194),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(197),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(203),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(211),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(212),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(213),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(216),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(221),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(226),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(485),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(86),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(510),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(156),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(227),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(227),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(525),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_division_repeat1, 2), SHIFT_REPEAT(433),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keywords, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keywords, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_division, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_division, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_division, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(368),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(25),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(547),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(522),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(515),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_identifier, 2, .production_id = 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_identifier, 2, .production_id = 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subIndex, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subIndex, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subIndex, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subIndex, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 5),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_database_field, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 4, .production_id = 11),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 4, .production_id = 11),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 3, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 3, .production_id = 7),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 4, .production_id = 10),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 4, .production_id = 10),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 4, .production_id = 9),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 4, .production_id = 9),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, .production_id = 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1, .production_id = 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_database_field, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 5, .production_id = 12),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 5, .production_id = 12),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_field, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_database_field, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 2, .production_id = 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 2, .production_id = 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 9),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 9),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 3, .production_id = 6),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 3, .production_id = 6),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3, .production_id = 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poweron_function, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poweron_function, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, .production_id = 5),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 5),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileopen, 12),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fileopen, 12),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lhs_expression, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_no_block, 4),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_no_block, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__segment, 8),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__segment, 8),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filereadline, 8),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filereadline, 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__length, 4),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__length, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__money, 4),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__money, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rate, 4),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rate, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datevalue, 4),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datevalue, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abs, 4),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abs, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 4, .production_id = 8),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 4, .production_id = 8),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_division, 6),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_division, 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__charactersearch, 6),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__charactersearch, 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format, 6),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format, 6),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_block, 4),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_block, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_block, 6),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_block, 6),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_block, 5),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_block, 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 5),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, .production_id = 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_statement_block, 5),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_statement_block, 5),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 3, .production_id = 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 3, .production_id = 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_division, 2),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_division, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_division, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort_division, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_division, 2),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_division, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_division, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_division, 3),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_division, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_division, 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_division, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter_division, 4),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter_division, 4),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_call, 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_call, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_no_block, 3),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_no_block, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 2, .production_id = 6),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 2, .production_id = 6),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 3, .production_id = 8),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 3, .production_id = 8),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(103),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_division_repeat1, 2), SHIFT_REPEAT(511),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(562),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subIndex_repeat1, 2), SHIFT_REPEAT(436),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subIndex_repeat1, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_statement, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 1),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
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
