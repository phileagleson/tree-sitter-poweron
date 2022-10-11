#include "tree_sitter/parser.h"
#include <cctype>
#include <stdio.h>
#include <stdlib.h>
#include <wctype.h>

namespace {

enum TokenType { COMMENT, STRING_LITERAL, COL, DATASIZE };

struct Scanner {
  unsigned serialize(char *buffer) { return 0; }

  void deserialize(const char *buffer, unsigned length) {}

  bool scan_datasize(TSLexer *lexer) {
    const char datasize[] = "datasize=";
    bool match_found = false;
    for (int i = 0; i < 9; i++) {
      if (i == 8) {
        while (iswspace(lexer->lookahead) && lexer->lookahead != 0) {
          lexer->advance(lexer, false);
        }
      }
      if (tolower(lexer->lookahead) == datasize[i]) {
        match_found = true;
        lexer->advance(lexer, false);
      } else {
        match_found = false;
      }
      if (!match_found) {
        break;
      }
    }
    return match_found;
  }

  bool scan_col(TSLexer *lexer) {
    const char col[] = "col=";
    bool match_found = false;
    for (int i = 0; i < 4; i++) {
      if (i == 3) {
        while (iswspace(lexer->lookahead) && lexer->lookahead != 0) {
          lexer->advance(lexer, false);
        }
      }
      if (tolower(lexer->lookahead) == col[i]) {
        match_found = true;
        lexer->advance(lexer, false);
      } else {
        match_found = false;
      }
      if (!match_found) {
        break;
      }
    }
    return match_found;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    char next_char = lexer->lookahead;

    if (next_char == '"') {
      lexer->advance(lexer, false);
      while (lexer->lookahead != '"' && lexer->lookahead != 0) {
        lexer->advance(lexer, false);
      }
      lexer->advance(lexer, false);
      lexer->result_symbol = STRING_LITERAL;
      return true;
    }

    if (tolower(next_char) == 'd') {
      bool is_datasize = scan_datasize(lexer);
      if (is_datasize) {
        lexer->result_symbol = DATASIZE;
        return true;
      }
      return false;
    }

    if (tolower(next_char) == 'c') {
      bool is_col = scan_col(lexer);
      if (is_col) {
        lexer->result_symbol = COL;
        return true;
      }
      return false;
    }

    char close_bracket = ']';
    int open_bracket_count = 0;
    int close_bracket_count = 0;

    if (next_char != '[') {
      return false;
    }
    char open_bracket = next_char;

    open_bracket_count += 1;
    lexer->advance(lexer, false);

    for (; lexer->lookahead != 0; lexer->advance(lexer, false)) {
      if (lexer->lookahead == open_bracket) {
        open_bracket_count = open_bracket_count + 1;
      }

      if (lexer->lookahead == close_bracket) {
        close_bracket_count = close_bracket_count + 1;
      }

      if (close_bracket_count == open_bracket_count) {
        lexer->result_symbol = COMMENT;
        lexer->advance(lexer, false);
        return true;
      } else {
        if (iswspace(lexer->lookahead)) {
        } else {
        }
        continue;
      }
    }
    return false;
  }
};

} // namespace

extern "C" {

void *tree_sitter_poweron_external_scanner_create() { return new Scanner(); }

bool tree_sitter_poweron_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
  return false;
}

unsigned tree_sitter_poweron_external_scanner_serialize(void *payload,
                                                        char *state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_poweron_external_scanner_deserialize(void *payload,
                                                      const char *state,
                                                      unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state, length);
}

void tree_sitter_poweron_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}
}
