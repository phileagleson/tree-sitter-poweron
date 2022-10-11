#include "tree_sitter/parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <wctype.h>

enum TokenType { COMMENT };
bool inside_html;

void skip_html_view_line(TSLexer *lexer, FILE *fd) {
  fprintf(fd, "%s\n", "checking for htmlviewline...");
  if (lexer->lookahead == 'h' || lexer->lookahead == 'H') {
    fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
    lexer->advance(lexer, false);
    if (lexer->lookahead == 't' || lexer->lookahead == 'T') {
      fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
      lexer->advance(lexer, false);
      if (lexer->lookahead == 'm' || lexer->lookahead == 'M') {
        fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
        lexer->advance(lexer, false);
        if (lexer->lookahead == 'l' || lexer->lookahead == 'L') {
          fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
          lexer->advance(lexer, false);
          if (lexer->lookahead == 'v' || lexer->lookahead == 'V') {
            fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
            lexer->advance(lexer, false);
            if (lexer->lookahead == 'i' || lexer->lookahead == 'I') {
              fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
              lexer->advance(lexer, false);
              if (lexer->lookahead == 'e' || lexer->lookahead == 'E') {
                fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
                lexer->advance(lexer, false);
                if (lexer->lookahead == 'w' || lexer->lookahead == 'W') {
                  fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
                  lexer->advance(lexer, false);
                  if (lexer->lookahead == 'l' || lexer->lookahead == 'L') {
                    fprintf(fd, "%s%c\n", "Found:", lexer->lookahead);
                    lexer->advance(lexer, false);
                    fprintf(fd, "%s\n", "HTMLVIEWLINE Found...");
                    inside_html = true;
                    fprintf(fd, "%s%d\n", "inside_html: ", inside_html);
                    // skip all until we find the closig quote, paren ")
                    bool found_quote_paren = false;
                    while (found_quote_paren == false) {
                      bool found_quote = false;
                      if (iswspace(lexer->lookahead)) {
                        lexer->advance(lexer, true);
                      }
                      if (lexer->lookahead == '"') {
                        fprintf(fd, "%s\n", "Found quote.. checking for paren");
                        found_quote = true;
                        lexer->advance(lexer, false);
                        if (lexer->lookahead == ')') {
                          fprintf(fd, "%s\n",
                                  "Found paren.. exiting while loop");
                          found_quote_paren = true;
                          lexer->advance(lexer, false);
                        }
                      }
                      lexer->advance(lexer, false);
                    }
                    return;
                  }
                  return;
                }
                return;
              }
              return;
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}

void *tree_sitter_poweron_external_scanner_create() { return NULL; }
void tree_sitter_poweron_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_poweron_external_scanner_serialize(void *payload,
                                                        char *buffer) {
  buffer[0] = inside_html;
  return 1;
}

void tree_sitter_poweron_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
  if (length == 0)
    return;
  inside_html = buffer[0];
}

bool tree_sitter_poweron_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  FILE *fd;
  fd = fopen("/Users/phil/projects/poweron/tree_sitter.log", "a");
  if (fd == NULL) {
    perror("Error opening file");
    exit(1);
  }
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  fprintf(fd, "%s%c\n", "starting scan() with char:  ", lexer->lookahead);
  fprintf(fd, "%s%d\n", "inside_html: ", inside_html);

  char open_bracket = lexer->lookahead;
  char close_bracket = ']';
  int open_bracket_count = 0;
  int close_bracket_count = 0;
  bool found = false;

  if (open_bracket == 'h' || open_bracket == 'H') {
    skip_html_view_line(lexer, fd);
  }
  if (inside_html == true) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }
    fprintf(fd, "%s%c\n",
            "I'm back from html func, next char is: ", lexer->lookahead);
    fclose(fd);
    return false;
  }

  if (open_bracket != '[') {
    fprintf(fd, "%s%c\n", "skipping ", lexer->lookahead);
    fprintf(fd, "%s\n", "returning false...");
    fclose(fd);
    return false;
  }

  fprintf(fd, "%s", "found [\n");
  open_bracket_count += 1;
  lexer->advance(lexer, false);

  for (; lexer->lookahead != 0; lexer->advance(lexer, false)) {
    if (lexer->lookahead == open_bracket) {
      open_bracket_count = open_bracket_count + 1;
      fprintf(fd, "%s%d\n", "open bracket count: ", open_bracket_count);
    }

    if (lexer->lookahead == close_bracket) {
      close_bracket_count = close_bracket_count + 1;
      fprintf(fd, "%s%d\n", "close bracket count: ", close_bracket_count);
    }

    if (close_bracket_count == open_bracket_count) {
      lexer->result_symbol = COMMENT;
      lexer->advance(lexer, false);
      fprintf(fd, "%s\n", "comment found.. returning true");
      fclose(fd);
      return true;
    } else {
      if (iswspace(lexer->lookahead)) {
        fprintf(fd, "%s\n", "consuming whitespace or newline");
      } else {
        fprintf(fd, "%s%c\n", "consuming ", lexer->lookahead);
      }
      continue;
    }
  }

  fprintf(fd, "%s\n", "returning false at end...");
  fclose(fd);
  return false;
}
