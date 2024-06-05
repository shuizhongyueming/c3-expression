#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__identifier = 1,
  sym_identifier = 2,
  anon_sym_DOT = 3,
  sym__string_literal = 4,
  sym__number_literal = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_PIPE = 9,
  anon_sym_AMP = 10,
  anon_sym_EQ = 11,
  anon_sym_LT_GT = 12,
  anon_sym_LT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_CARET = 22,
  anon_sym_QMARK = 23,
  anon_sym_COLON = 24,
  sym_source_file = 25,
  sym_member_expression = 26,
  sym_literal = 27,
  sym_call_expression = 28,
  sym_binary_expression = 29,
  sym_ternary_expression = 30,
  sym_parenthesized_expression = 31,
  sym__expression = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_call_expression_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym__string_literal] = "_string_literal",
  [sym__number_literal] = "_number_literal",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [sym_source_file] = "source_file",
  [sym_member_expression] = "member_expression",
  [sym_literal] = "literal",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__string_literal] = sym__string_literal,
  [sym__number_literal] = sym__number_literal,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_source_file] = sym_source_file,
  [sym_member_expression] = sym_member_expression,
  [sym_literal] = sym_literal,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_call_expression_repeat1] = aux_sym_call_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__number_literal] = {
    .visible = false,
    .named = true,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [10] = 10,
  [11] = 11,
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
};

static TSCharacterRange sym_identifier_character_set_2[] = {
  {'$', '$'}, {'0', '9'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'}, {'a', 'z'}, {0x7f, 0x9f}, {0xa1, 0x167f},
  {0x1681, 0x1fff}, {0x200c, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2061, 0x2fff}, {0x3001, 0xfefe}, {0xff00, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '"', 1,
        '%', 31,
        '&', 20,
        '(', 16,
        ')', 18,
        '*', 29,
        '+', 27,
        ',', 17,
        '-', 28,
        '.', 13,
        '/', 30,
        ':', 34,
        '<', 23,
        '=', 21,
        '>', 25,
        '?', 33,
        '\\', 2,
        '^', 32,
        '|', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (set_contains(sym_identifier_character_set_2, 15, lookahead)) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '"', 1,
        '%', 31,
        '&', 20,
        '(', 16,
        ')', 18,
        '*', 29,
        '+', 27,
        ',', 17,
        '-', 28,
        '.', 13,
        '/', 30,
        ':', 34,
        '<', 23,
        '=', 21,
        '>', 25,
        '?', 33,
        '\\', 2,
        '^', 32,
        '|', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (set_contains(sym_identifier_character_set_2, 15, lookahead)) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (set_contains(sym_identifier_character_set_2, 15, lookahead)) ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(2);
      if (set_contains(sym_identifier_character_set_2, 15, lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__string_literal] = ACTIONS(1),
    [sym__number_literal] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_member_expression] = STATE(13),
    [sym_literal] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym__expression] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__string_literal] = ACTIONS(7),
    [sym__number_literal] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [sym__string_literal] = ACTIONS(11),
    [sym__number_literal] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(15),
    [sym__string_literal] = ACTIONS(15),
    [sym__number_literal] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_LT_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [sym__string_literal] = ACTIONS(19),
    [sym__number_literal] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(19),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [sym__string_literal] = ACTIONS(31),
    [sym__number_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(35),
    [sym__string_literal] = ACTIONS(35),
    [sym__number_literal] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(21),
    [sym__string_literal] = ACTIONS(39),
    [sym__number_literal] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_LT_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(21),
    [sym__string_literal] = ACTIONS(39),
    [sym__number_literal] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_LT_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(21),
    [sym__string_literal] = ACTIONS(39),
    [sym__number_literal] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_LT_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(21),
    [sym__string_literal] = ACTIONS(39),
    [sym__number_literal] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_LT_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(39),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(49),
    [sym__string_literal] = ACTIONS(49),
    [sym__number_literal] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_LT_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_QMARK] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [sym__string_literal] = ACTIONS(53),
    [sym__number_literal] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_LT_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(53),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(21),
    [sym__string_literal] = ACTIONS(57),
    [sym__number_literal] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_LT_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(47),
  },
  [14] = {
    [aux_sym_call_expression_repeat1] = STATE(29),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_LT_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(47),
  },
  [15] = {
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_LT_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(47),
  },
  [16] = {
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_LT_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(67),
  },
  [17] = {
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_LT_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(76), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(13), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [26] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(13), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [52] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(14), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [75] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(17), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [95] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(16), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [115] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(7), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [135] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(8), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [155] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(9), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [175] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(10), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [195] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(15), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [215] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym__string_literal,
      sym__number_literal,
    STATE(4), 7,
      sym_member_expression,
      sym_literal,
      sym_call_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym__expression,
  [235] = 3,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_call_expression_repeat1,
  [245] = 3,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_call_expression_repeat1,
  [255] = 1,
    ACTIONS(109), 1,
      sym_identifier,
  [259] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 26,
  [SMALL_STATE(20)] = 52,
  [SMALL_STATE(21)] = 75,
  [SMALL_STATE(22)] = 95,
  [SMALL_STATE(23)] = 115,
  [SMALL_STATE(24)] = 135,
  [SMALL_STATE(25)] = 155,
  [SMALL_STATE(26)] = 175,
  [SMALL_STATE(27)] = 195,
  [SMALL_STATE(28)] = 215,
  [SMALL_STATE(29)] = 235,
  [SMALL_STATE(30)] = 245,
  [SMALL_STATE(31)] = 255,
  [SMALL_STATE(32)] = 259,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 5, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_exp(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
