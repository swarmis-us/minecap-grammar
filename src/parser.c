#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_DOT = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACK = 4,
  sym_section_identifier = 5,
  sym_section_target = 6,
  anon_sym_EQ = 7,
  anon_sym_SQUOTE = 8,
  anon_sym_PIPE = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_PERCENT = 23,
  anon_sym_CARET = 24,
  anon_sym_DASH_GT = 25,
  anon_sym_AND = 26,
  anon_sym_OR = 27,
  anon_sym_NOT = 28,
  sym_identifier = 29,
  sym_boolean = 30,
  sym_number = 31,
  sym_duration = 32,
  sym_string = 33,
  sym_comment = 34,
  sym_source_file = 35,
  sym__section_or_stmt = 36,
  sym_section_header = 37,
  sym_section_segment = 38,
  sym_assignment = 39,
  sym_expression_line = 40,
  sym__expr = 41,
  sym_derivative_expr = 42,
  sym_magnitude_expr = 43,
  sym_call = 44,
  sym_tuple = 45,
  sym_binary_expr = 46,
  sym_operator = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_section_header_repeat1 = 49,
  aux_sym_call_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
  [sym_section_identifier] = "section_identifier",
  [sym_section_target] = "section_target",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_NOT] = "NOT",
  [sym_identifier] = "identifier",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_duration] = "duration",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__section_or_stmt] = "_section_or_stmt",
  [sym_section_header] = "section_header",
  [sym_section_segment] = "section_segment",
  [sym_assignment] = "assignment",
  [sym_expression_line] = "expression_line",
  [sym__expr] = "_expr",
  [sym_derivative_expr] = "derivative_expr",
  [sym_magnitude_expr] = "magnitude_expr",
  [sym_call] = "call",
  [sym_tuple] = "tuple",
  [sym_binary_expr] = "binary_expr",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_header_repeat1] = "section_header_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_section_identifier] = sym_section_identifier,
  [sym_section_target] = sym_section_target,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_NOT] = anon_sym_NOT,
  [sym_identifier] = sym_identifier,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_duration] = sym_duration,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__section_or_stmt] = sym__section_or_stmt,
  [sym_section_header] = sym_section_header,
  [sym_section_segment] = sym_section_segment,
  [sym_assignment] = sym_assignment,
  [sym_expression_line] = sym_expression_line,
  [sym__expr] = sym__expr,
  [sym_derivative_expr] = sym_derivative_expr,
  [sym_magnitude_expr] = sym_magnitude_expr,
  [sym_call] = sym_call,
  [sym_tuple] = sym_tuple,
  [sym_binary_expr] = sym_binary_expr,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_header_repeat1] = aux_sym_section_header_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_section_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_section_target] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__section_or_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_section_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_line] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_derivative_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_magnitude_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_func = 1,
  field_kind = 2,
  field_modifier = 3,
  field_name = 4,
  field_op = 5,
  field_target = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_func] = "func",
  [field_kind] = "kind",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_op] = "op",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 1},
  [1] =
    {field_name, 0},
    {field_value, 2},
  [3] =
    {field_func, 0},
  [4] =
    {field_op, 1},
  [5] =
    {field_modifier, 1},
  [6] =
    {field_kind, 1},
    {field_modifier, 2, .inherited = true},
  [8] =
    {field_modifier, 0, .inherited = true},
    {field_modifier, 1, .inherited = true},
  [10] =
    {field_kind, 1},
    {field_target, 3},
  [12] =
    {field_kind, 1},
    {field_modifier, 2, .inherited = true},
    {field_target, 4},
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
  [16] = 2,
  [17] = 17,
  [18] = 6,
  [19] = 15,
  [20] = 17,
  [21] = 10,
  [22] = 13,
  [23] = 9,
  [24] = 11,
  [25] = 8,
  [26] = 26,
  [27] = 7,
  [28] = 14,
  [29] = 29,
  [30] = 12,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 35,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 55,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '!', 6,
        '"', 2,
        '#', 75,
        '%', 48,
        '\'', 31,
        '(', 33,
        ')', 35,
        '*', 46,
        '+', 43,
        ',', 34,
        '-', 45,
        '.', 25,
        '/', 47,
        ':', 26,
        '<', 40,
        '=', 30,
        '>', 41,
        'A', 58,
        'N', 59,
        'O', 60,
        '[', 24,
        ']', 27,
        '^', 49,
        'f', 62,
        't', 65,
        '|', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 6,
        '#', 75,
        '%', 48,
        '\'', 31,
        '(', 33,
        ')', 35,
        '*', 46,
        '+', 42,
        ',', 34,
        '-', 44,
        '/', 47,
        '<', 40,
        '=', 7,
        '>', 41,
        'A', 9,
        'N', 10,
        'O', 11,
        '^', 49,
        '|', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '"', 2,
        '#', 75,
        '(', 33,
        ')', 35,
        '[', 24,
        'f', 62,
        't', 65,
        '|', 32,
        '+', 16,
        '-', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_section_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_section_target);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 17,
        'm', 73,
        'n', 14,
        'u', 14,
        'E', 15,
        'e', 15,
        'd', 72,
        'h', 72,
        's', 72,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        'm', 73,
        'n', 14,
        'u', 14,
        'E', 15,
        'e', 15,
        'd', 72,
        'h', 72,
        's', 72,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_duration);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_duration);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_duration] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__section_or_stmt] = STATE(31),
    [sym_section_header] = STATE(31),
    [sym_assignment] = STATE(31),
    [sym_expression_line] = STATE(31),
    [sym__expr] = STATE(4),
    [sym_derivative_expr] = STATE(4),
    [sym_magnitude_expr] = STATE(4),
    [sym_call] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_binary_expr] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_boolean] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym_operator] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_AND] = ACTIONS(25),
    [anon_sym_OR] = ACTIONS(25),
    [anon_sym_NOT] = ACTIONS(25),
    [sym_identifier] = ACTIONS(25),
    [sym_boolean] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [sym_duration] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_comment] = ACTIONS(21),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_AND] = ACTIONS(33),
    [anon_sym_OR] = ACTIONS(33),
    [anon_sym_NOT] = ACTIONS(33),
    [sym_identifier] = ACTIONS(33),
    [sym_boolean] = ACTIONS(33),
    [sym_number] = ACTIONS(33),
    [sym_duration] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_comment] = ACTIONS(27),
  },
  [4] = {
    [sym_operator] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_AND] = ACTIONS(39),
    [anon_sym_OR] = ACTIONS(39),
    [anon_sym_NOT] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [sym_boolean] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_duration] = ACTIONS(35),
    [sym_string] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
  },
  [5] = {
    [sym_operator] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_AND] = ACTIONS(39),
    [anon_sym_OR] = ACTIONS(39),
    [anon_sym_NOT] = ACTIONS(39),
    [sym_identifier] = ACTIONS(45),
    [sym_boolean] = ACTIONS(45),
    [sym_number] = ACTIONS(45),
    [sym_duration] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym_comment] = ACTIONS(43),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_AND] = ACTIONS(33),
    [anon_sym_OR] = ACTIONS(33),
    [anon_sym_NOT] = ACTIONS(33),
    [sym_identifier] = ACTIONS(33),
    [sym_boolean] = ACTIONS(33),
    [sym_number] = ACTIONS(33),
    [sym_duration] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_comment] = ACTIONS(27),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_DASH_GT] = ACTIONS(47),
    [anon_sym_AND] = ACTIONS(49),
    [anon_sym_OR] = ACTIONS(49),
    [anon_sym_NOT] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [sym_boolean] = ACTIONS(49),
    [sym_number] = ACTIONS(49),
    [sym_duration] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_DASH_GT] = ACTIONS(51),
    [anon_sym_AND] = ACTIONS(53),
    [anon_sym_OR] = ACTIONS(53),
    [anon_sym_NOT] = ACTIONS(53),
    [sym_identifier] = ACTIONS(53),
    [sym_boolean] = ACTIONS(53),
    [sym_number] = ACTIONS(53),
    [sym_duration] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(51),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_DASH_GT] = ACTIONS(55),
    [anon_sym_AND] = ACTIONS(57),
    [anon_sym_OR] = ACTIONS(57),
    [anon_sym_NOT] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [sym_boolean] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_duration] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [sym_comment] = ACTIONS(55),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_AND] = ACTIONS(61),
    [anon_sym_OR] = ACTIONS(61),
    [anon_sym_NOT] = ACTIONS(61),
    [sym_identifier] = ACTIONS(61),
    [sym_boolean] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [sym_duration] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [sym_comment] = ACTIONS(59),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_AND] = ACTIONS(65),
    [anon_sym_OR] = ACTIONS(65),
    [anon_sym_NOT] = ACTIONS(65),
    [sym_identifier] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [sym_duration] = ACTIONS(63),
    [sym_string] = ACTIONS(63),
    [sym_comment] = ACTIONS(63),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(67),
    [anon_sym_AND] = ACTIONS(69),
    [anon_sym_OR] = ACTIONS(69),
    [anon_sym_NOT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [sym_boolean] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [sym_duration] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_AND] = ACTIONS(73),
    [anon_sym_OR] = ACTIONS(73),
    [anon_sym_NOT] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [sym_boolean] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_duration] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [sym_comment] = ACTIONS(71),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_AND] = ACTIONS(77),
    [anon_sym_OR] = ACTIONS(77),
    [anon_sym_NOT] = ACTIONS(77),
    [sym_identifier] = ACTIONS(77),
    [sym_boolean] = ACTIONS(77),
    [sym_number] = ACTIONS(77),
    [sym_duration] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_operator,
    STATE(58), 1,
      aux_sym_call_repeat1,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(37), 13,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [39] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_operator,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(21), 16,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [72] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_operator,
    STATE(60), 1,
      aux_sym_call_repeat1,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(37), 13,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(27), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [142] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_operator,
    STATE(59), 1,
      aux_sym_call_repeat1,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(37), 13,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [181] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_operator,
    STATE(55), 1,
      aux_sym_call_repeat1,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(37), 13,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(59), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(71), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(55), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(63), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(51), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [360] = 10,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym_boolean,
      sym_number,
    ACTIONS(110), 2,
      sym_duration,
      sym_string,
    STATE(26), 5,
      sym__section_or_stmt,
      sym_section_header,
      sym_assignment,
      sym_expression_line,
      aux_sym_source_file_repeat1,
    STATE(4), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(47), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(75), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_operator,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(37), 13,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(67), 17,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [520] = 10,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(15), 2,
      sym_boolean,
      sym_number,
    ACTIONS(17), 2,
      sym_duration,
      sym_string,
    STATE(26), 5,
      sym__section_or_stmt,
      sym_section_header,
      sym_assignment,
      sym_expression_line,
      aux_sym_source_file_repeat1,
    STATE(4), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      sym_operator,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(37), 13,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [595] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      sym_operator,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(37), 13,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
  [628] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(134), 2,
      sym_boolean,
      sym_number,
    ACTIONS(136), 2,
      sym_duration,
      sym_string,
    STATE(17), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [660] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      sym_boolean,
      sym_number,
    ACTIONS(142), 2,
      sym_duration,
      sym_string,
    STATE(19), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [692] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 2,
      sym_boolean,
      sym_number,
    ACTIONS(148), 2,
      sym_duration,
      sym_string,
    STATE(20), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [724] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(152), 2,
      sym_boolean,
      sym_number,
    ACTIONS(154), 2,
      sym_duration,
      sym_string,
    STATE(15), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [756] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 2,
      sym_boolean,
      sym_number,
    ACTIONS(160), 2,
      sym_duration,
      sym_string,
    STATE(5), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [785] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(162), 2,
      sym_boolean,
      sym_number,
    ACTIONS(164), 2,
      sym_duration,
      sym_string,
    STATE(29), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [814] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(166), 2,
      sym_boolean,
      sym_number,
    ACTIONS(168), 2,
      sym_duration,
      sym_string,
    STATE(16), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [843] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(170), 2,
      sym_boolean,
      sym_number,
    ACTIONS(172), 2,
      sym_duration,
      sym_string,
    STATE(32), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [872] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(174), 2,
      sym_boolean,
      sym_number,
    ACTIONS(176), 2,
      sym_duration,
      sym_string,
    STATE(33), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(178), 2,
      sym_boolean,
      sym_number,
    ACTIONS(180), 2,
      sym_duration,
      sym_string,
    STATE(2), 6,
      sym__expr,
      sym_derivative_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [930] = 2,
    ACTIONS(184), 2,
      sym_boolean,
      sym_number,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_identifier,
      sym_duration,
      sym_string,
      sym_comment,
  [945] = 2,
    ACTIONS(188), 2,
      sym_boolean,
      sym_number,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_identifier,
      sym_duration,
      sym_string,
      sym_comment,
  [960] = 2,
    ACTIONS(192), 2,
      sym_boolean,
      sym_number,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_identifier,
      sym_duration,
      sym_string,
      sym_comment,
  [975] = 2,
    ACTIONS(196), 2,
      sym_boolean,
      sym_number,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_identifier,
      sym_duration,
      sym_string,
      sym_comment,
  [990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_boolean,
      sym_number,
    ACTIONS(198), 5,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_identifier,
      sym_duration,
      sym_string,
  [1005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOT,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_section_header_repeat1,
  [1021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_section_header_repeat1,
    ACTIONS(211), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1035] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOT,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_section_header_repeat1,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      sym_section_segment,
    ACTIONS(221), 2,
      sym_section_identifier,
      sym_duration,
  [1080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_call_repeat1,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_call_repeat1,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      sym_section_segment,
    ACTIONS(221), 2,
      sym_section_identifier,
      sym_duration,
  [1117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_call_repeat1,
  [1130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_call_repeat1,
  [1143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_call_repeat1,
  [1156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
  [1170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_section_target,
  [1177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
  [1184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_section_target,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 39,
  [SMALL_STATE(17)] = 72,
  [SMALL_STATE(18)] = 111,
  [SMALL_STATE(19)] = 142,
  [SMALL_STATE(20)] = 181,
  [SMALL_STATE(21)] = 220,
  [SMALL_STATE(22)] = 248,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 304,
  [SMALL_STATE(25)] = 332,
  [SMALL_STATE(26)] = 360,
  [SMALL_STATE(27)] = 402,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 458,
  [SMALL_STATE(30)] = 492,
  [SMALL_STATE(31)] = 520,
  [SMALL_STATE(32)] = 562,
  [SMALL_STATE(33)] = 595,
  [SMALL_STATE(34)] = 628,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 692,
  [SMALL_STATE(37)] = 724,
  [SMALL_STATE(38)] = 756,
  [SMALL_STATE(39)] = 785,
  [SMALL_STATE(40)] = 814,
  [SMALL_STATE(41)] = 843,
  [SMALL_STATE(42)] = 872,
  [SMALL_STATE(43)] = 901,
  [SMALL_STATE(44)] = 930,
  [SMALL_STATE(45)] = 945,
  [SMALL_STATE(46)] = 960,
  [SMALL_STATE(47)] = 975,
  [SMALL_STATE(48)] = 990,
  [SMALL_STATE(49)] = 1005,
  [SMALL_STATE(50)] = 1021,
  [SMALL_STATE(51)] = 1035,
  [SMALL_STATE(52)] = 1051,
  [SMALL_STATE(53)] = 1060,
  [SMALL_STATE(54)] = 1069,
  [SMALL_STATE(55)] = 1080,
  [SMALL_STATE(56)] = 1093,
  [SMALL_STATE(57)] = 1106,
  [SMALL_STATE(58)] = 1117,
  [SMALL_STATE(59)] = 1130,
  [SMALL_STATE(60)] = 1143,
  [SMALL_STATE(61)] = 1156,
  [SMALL_STATE(62)] = 1163,
  [SMALL_STATE(63)] = 1170,
  [SMALL_STATE(64)] = 1177,
  [SMALL_STATE(65)] = 1184,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, 0, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_line, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_line, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, 0, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, 0, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derivative_expr, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derivative_expr, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_magnitude_expr, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_magnitude_expr, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, 0, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, 0, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 6, 0, 9),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 6, 0, 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 5, 0, 8),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 5, 0, 8),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_header_repeat1, 2, 0, 7), SHIFT_REPEAT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_header_repeat1, 2, 0, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_header_repeat1, 2, 0, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_segment, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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

TS_PUBLIC const TSLanguage *tree_sitter_minecap(void) {
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
