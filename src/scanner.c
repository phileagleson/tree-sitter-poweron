#include "tree_sitter/parser.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

enum TokenType { COMMENT, STRING_LITERAL, COL, DATASIZE };

static int32_t to_lower(int32_t c) {
  if (c >= 'A' && c <= 'Z') {
    return c + ('a' - 'A');
  }

  return c;
}

static bool is_whitespace(int32_t c) {
  return c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' ||
         c == '\r';
}

static bool scan_keyword(TSLexer *lexer, const char *keyword) {
  for (size_t i = 0; keyword[i] != '\0'; i++) {
    if (keyword[i] == '=') {
      while (is_whitespace(lexer->lookahead)) {
        lexer->advance(lexer, false);
      }
    }

    if (to_lower(lexer->lookahead) != keyword[i]) {
      return false;
    }

    lexer->advance(lexer, false);
  }

  return true;
}

static bool scan_string(TSLexer *lexer) {
  lexer->advance(lexer, false);

  while (lexer->lookahead != '"' && lexer->lookahead != 0) {
    lexer->advance(lexer, false);
  }

  if (lexer->lookahead != '"') {
    return false;
  }

  lexer->advance(lexer, false);
  lexer->result_symbol = STRING_LITERAL;

  return true;
}

static bool scan_comment(TSLexer *lexer) {
  unsigned depth = 1;

  lexer->advance(lexer, false);

  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '[') {
      depth++;
    } else if (lexer->lookahead == ']') {
      depth--;
    }

    lexer->advance(lexer, false);

    if (depth == 0) {
      lexer->result_symbol = COMMENT;
      return true;
    }
  }

  return false;
}

void *tree_sitter_poweron_external_scanner_create(void) { return NULL; }

void tree_sitter_poweron_external_scanner_destroy(void *payload) {
  (void)payload;
}

unsigned tree_sitter_poweron_external_scanner_serialize(void *payload,
                                                        char *buffer) {
  (void)payload;
  (void)buffer;

  return 0;
}

void tree_sitter_poweron_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}

bool tree_sitter_poweron_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  (void)payload;

  while (is_whitespace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  int32_t next_char = lexer->lookahead;

  if (next_char == '"' && valid_symbols[STRING_LITERAL]) {
    return scan_string(lexer);
  }

  if (to_lower(next_char) == 'd' && valid_symbols[DATASIZE]) {
    if (scan_keyword(lexer, "datasize=")) {
      lexer->result_symbol = DATASIZE;
      return true;
    }

    return false;
  }

  if (to_lower(next_char) == 'c' && valid_symbols[COL]) {
    if (scan_keyword(lexer, "col=")) {
      lexer->result_symbol = COL;
      return true;
    }

    return false;
  }

  if (next_char == '[' && valid_symbols[COMMENT]) {
    return scan_comment(lexer);
  }

  return false;
}
