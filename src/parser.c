#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

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
  anon_sym_AMP_AMP = 17,
  anon_sym_PIPE_PIPE = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_PERCENT = 25,
  anon_sym_CARET = 26,
  anon_sym_DASH_GT = 27,
  anon_sym_AND = 28,
  anon_sym_and = 29,
  anon_sym_OR = 30,
  anon_sym_or = 31,
  anon_sym_BANG = 32,
  anon_sym_NOT = 33,
  anon_sym_not = 34,
  sym_identifier = 35,
  sym_boolean = 36,
  sym_number = 37,
  sym_duration = 38,
  sym_string = 39,
  sym_comment = 40,
  sym_source_file = 41,
  sym__section_or_stmt = 42,
  sym_section_header = 43,
  sym_section_segment = 44,
  sym_assignment = 45,
  sym_expression_line = 46,
  sym__expr = 47,
  sym_derivative_expr = 48,
  sym_unary_expr = 49,
  sym_magnitude_expr = 50,
  sym_call = 51,
  sym_tuple = 52,
  sym_binary_expr = 53,
  sym_operator = 54,
  sym_unary_operator = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_section_header_repeat1 = 57,
  aux_sym_call_repeat1 = 58,
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
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
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
  [anon_sym_and] = "and",
  [anon_sym_OR] = "OR",
  [anon_sym_or] = "or",
  [anon_sym_BANG] = "!",
  [anon_sym_NOT] = "NOT",
  [anon_sym_not] = "not",
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
  [sym_unary_expr] = "unary_expr",
  [sym_magnitude_expr] = "magnitude_expr",
  [sym_call] = "call",
  [sym_tuple] = "tuple",
  [sym_binary_expr] = "binary_expr",
  [sym_operator] = "operator",
  [sym_unary_operator] = "unary_operator",
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
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
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
  [anon_sym_and] = anon_sym_and,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_not] = anon_sym_not,
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
  [sym_unary_expr] = sym_unary_expr,
  [sym_magnitude_expr] = sym_magnitude_expr,
  [sym_call] = sym_call,
  [sym_tuple] = sym_tuple,
  [sym_binary_expr] = sym_binary_expr,
  [sym_operator] = sym_operator,
  [sym_unary_operator] = sym_unary_operator,
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
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
  [sym_unary_expr] = {
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
  [sym_unary_operator] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_op, 0},
  [1] =
    {field_kind, 1},
  [2] =
    {field_name, 0},
    {field_value, 2},
  [4] =
    {field_func, 0},
  [5] =
    {field_op, 1},
  [6] =
    {field_modifier, 1},
  [7] =
    {field_kind, 1},
    {field_modifier, 2, .inherited = true},
  [9] =
    {field_modifier, 0, .inherited = true},
    {field_modifier, 1, .inherited = true},
  [11] =
    {field_kind, 1},
    {field_target, 3},
  [13] =
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
  [16] = 16,
  [17] = 17,
  [18] = 2,
  [19] = 8,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 4,
  [24] = 20,
  [25] = 12,
  [26] = 10,
  [27] = 13,
  [28] = 14,
  [29] = 15,
  [30] = 30,
  [31] = 11,
  [32] = 7,
  [33] = 9,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 44,
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 59,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '!', 65,
        '"', 2,
        '#', 91,
        '%', 53,
        '&', 5,
        '\'', 33,
        '(', 36,
        ')', 38,
        '*', 51,
        '+', 48,
        ',', 37,
        '-', 50,
        '.', 27,
        '/', 52,
        ':', 28,
        '<', 45,
        '=', 32,
        '>', 46,
        'A', 69,
        'N', 70,
        'O', 71,
        '[', 26,
        ']', 29,
        '^', 54,
        'a', 77,
        'f', 73,
        'n', 78,
        'o', 79,
        't', 80,
        '|', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 7,
        '#', 91,
        '%', 53,
        '&', 5,
        '\'', 33,
        '(', 36,
        ')', 38,
        '*', 51,
        '+', 47,
        ',', 37,
        '-', 49,
        '/', 52,
        '<', 45,
        '=', 8,
        '>', 46,
        'A', 10,
        'O', 11,
        '^', 54,
        'a', 14,
        'o', 15,
        '|', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '!', 64,
        '"', 2,
        '#', 91,
        '(', 36,
        ')', 38,
        'N', 70,
        '[', 26,
        'f', 73,
        'n', 78,
        't', 80,
        '|', 34,
        '+', 18,
        '-', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_section_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_section_target);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 19,
        'm', 89,
        'n', 16,
        'u', 16,
        'E', 17,
        'e', 17,
        'd', 88,
        'h', 88,
        's', 88,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        'm', 89,
        'n', 16,
        'u', 16,
        'E', 17,
        'e', 17,
        'd', 88,
        'h', 88,
        's', 88,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_duration);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_duration);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
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
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
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
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_duration] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__section_or_stmt] = STATE(16),
    [sym_section_header] = STATE(16),
    [sym_assignment] = STATE(16),
    [sym_expression_line] = STATE(16),
    [sym__expr] = STATE(5),
    [sym_derivative_expr] = STATE(5),
    [sym_unary_expr] = STATE(5),
    [sym_magnitude_expr] = STATE(5),
    [sym_call] = STATE(5),
    [sym_tuple] = STATE(5),
    [sym_binary_expr] = STATE(5),
    [sym_unary_operator] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_NOT] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_boolean] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_duration] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [2] = {
    [sym_operator] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_AND] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_OR] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_NOT] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [sym_identifier] = ACTIONS(29),
    [sym_boolean] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_duration] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym_comment] = ACTIONS(25),
  },
  [3] = {
    [sym_operator] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_AND] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_OR] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_NOT] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(33),
    [sym_identifier] = ACTIONS(33),
    [sym_boolean] = ACTIONS(33),
    [sym_number] = ACTIONS(33),
    [sym_duration] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_comment] = ACTIONS(31),
  },
  [4] = {
    [sym_operator] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_AND] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_OR] = ACTIONS(41),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_NOT] = ACTIONS(41),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(41),
    [sym_boolean] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_duration] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_comment] = ACTIONS(39),
  },
  [5] = {
    [sym_operator] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_AND] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_OR] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_NOT] = ACTIONS(45),
    [anon_sym_not] = ACTIONS(45),
    [sym_identifier] = ACTIONS(45),
    [sym_boolean] = ACTIONS(45),
    [sym_number] = ACTIONS(45),
    [sym_duration] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym_comment] = ACTIONS(43),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_DASH_GT] = ACTIONS(47),
    [anon_sym_AND] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_OR] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_NOT] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [sym_boolean] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [sym_duration] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(47),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
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
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_OR] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_NOT] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [sym_boolean] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_duration] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [sym_comment] = ACTIONS(55),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_DASH_GT] = ACTIONS(47),
    [anon_sym_AND] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_OR] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_NOT] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [sym_boolean] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [sym_duration] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(47),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
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
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_OR] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_NOT] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(61),
    [sym_identifier] = ACTIONS(61),
    [sym_boolean] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [sym_duration] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [sym_comment] = ACTIONS(59),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(63),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
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
    [anon_sym_and] = ACTIONS(65),
    [anon_sym_OR] = ACTIONS(65),
    [anon_sym_or] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_NOT] = ACTIONS(65),
    [anon_sym_not] = ACTIONS(65),
    [sym_identifier] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [sym_duration] = ACTIONS(63),
    [sym_string] = ACTIONS(63),
    [sym_comment] = ACTIONS(63),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
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
    [anon_sym_and] = ACTIONS(69),
    [anon_sym_OR] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_NOT] = ACTIONS(69),
    [anon_sym_not] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [sym_boolean] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [sym_duration] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
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
    [anon_sym_and] = ACTIONS(73),
    [anon_sym_OR] = ACTIONS(73),
    [anon_sym_or] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(73),
    [anon_sym_NOT] = ACTIONS(73),
    [anon_sym_not] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [sym_boolean] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_duration] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [sym_comment] = ACTIONS(71),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
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
    [anon_sym_and] = ACTIONS(77),
    [anon_sym_OR] = ACTIONS(77),
    [anon_sym_or] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_NOT] = ACTIONS(77),
    [anon_sym_not] = ACTIONS(77),
    [sym_identifier] = ACTIONS(77),
    [sym_boolean] = ACTIONS(77),
    [sym_number] = ACTIONS(77),
    [sym_duration] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_and] = ACTIONS(81),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_or] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_NOT] = ACTIONS(81),
    [anon_sym_not] = ACTIONS(81),
    [sym_identifier] = ACTIONS(81),
    [sym_boolean] = ACTIONS(81),
    [sym_number] = ACTIONS(81),
    [sym_duration] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_comment] = ACTIONS(79),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_PERCENT] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [anon_sym_AND] = ACTIONS(85),
    [anon_sym_and] = ACTIONS(85),
    [anon_sym_OR] = ACTIONS(85),
    [anon_sym_or] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_NOT] = ACTIONS(85),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(85),
    [sym_boolean] = ACTIONS(85),
    [sym_number] = ACTIONS(85),
    [sym_duration] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym_comment,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(19), 2,
      sym_boolean,
      sym_number,
    ACTIONS(21), 2,
      sym_duration,
      sym_string,
    STATE(17), 5,
      sym__section_or_stmt,
      sym_section_header,
      sym_assignment,
      sym_expression_line,
      aux_sym_source_file_repeat1,
    STATE(5), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [53] = 13,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(117), 1,
      sym_comment,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(105), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(111), 2,
      sym_boolean,
      sym_number,
    ACTIONS(114), 2,
      sym_duration,
      sym_string,
    STATE(17), 5,
      sym__section_or_stmt,
      sym_section_header,
      sym_assignment,
      sym_expression_line,
      aux_sym_source_file_repeat1,
    STATE(5), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym_operator,
    ACTIONS(29), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(25), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(47), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [176] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_operator,
    STATE(63), 1,
      aux_sym_call_repeat1,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(35), 16,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [218] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_operator,
    STATE(65), 1,
      aux_sym_call_repeat1,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(35), 16,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [260] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_operator,
    STATE(59), 1,
      aux_sym_call_repeat1,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(35), 16,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym_operator,
    ACTIONS(41), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(39), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [338] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_operator,
    STATE(64), 1,
      aux_sym_call_repeat1,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(35), 16,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(71), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(63), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(75), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(79), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(83), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym_operator,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(35), 16,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(67), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(55), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(59), 19,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [665] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      sym_operator,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(35), 16,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [701] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      sym_operator,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(35), 16,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_DASH_GT,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [737] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(148), 2,
      sym_boolean,
      sym_number,
    ACTIONS(150), 2,
      sym_duration,
      sym_string,
    STATE(20), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [780] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(154), 2,
      sym_boolean,
      sym_number,
    ACTIONS(156), 2,
      sym_duration,
      sym_string,
    STATE(24), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [823] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(160), 2,
      sym_boolean,
      sym_number,
    ACTIONS(162), 2,
      sym_duration,
      sym_string,
    STATE(21), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [866] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(166), 2,
      sym_boolean,
      sym_number,
    ACTIONS(168), 2,
      sym_duration,
      sym_string,
    STATE(22), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [909] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(170), 2,
      sym_boolean,
      sym_number,
    ACTIONS(172), 2,
      sym_duration,
      sym_string,
    STATE(30), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [949] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(174), 2,
      sym_boolean,
      sym_number,
    ACTIONS(176), 2,
      sym_duration,
      sym_string,
    STATE(35), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [989] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(180), 2,
      sym_boolean,
      sym_number,
    ACTIONS(182), 2,
      sym_duration,
      sym_string,
    STATE(3), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [1029] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(184), 2,
      sym_boolean,
      sym_number,
    ACTIONS(186), 2,
      sym_duration,
      sym_string,
    STATE(34), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [1069] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(188), 2,
      sym_boolean,
      sym_number,
    ACTIONS(190), 2,
      sym_duration,
      sym_string,
    STATE(4), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [1109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(192), 2,
      sym_boolean,
      sym_number,
    ACTIONS(194), 2,
      sym_duration,
      sym_string,
    STATE(18), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [1149] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(196), 2,
      sym_boolean,
      sym_number,
    ACTIONS(198), 2,
      sym_duration,
      sym_string,
    STATE(2), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [1189] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(45), 1,
      sym_unary_operator,
    ACTIONS(15), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(200), 2,
      sym_boolean,
      sym_number,
    ACTIONS(202), 2,
      sym_duration,
      sym_string,
    STATE(23), 7,
      sym__expr,
      sym_derivative_expr,
      sym_unary_expr,
      sym_magnitude_expr,
      sym_call,
      sym_tuple,
      sym_binary_expr,
  [1229] = 2,
    ACTIONS(206), 5,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      sym_boolean,
      sym_number,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_duration,
      sym_string,
      sym_comment,
  [1247] = 2,
    ACTIONS(210), 5,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      sym_boolean,
      sym_number,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_duration,
      sym_string,
      sym_comment,
  [1265] = 2,
    ACTIONS(214), 5,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      sym_boolean,
      sym_number,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_duration,
      sym_string,
      sym_comment,
  [1283] = 2,
    ACTIONS(218), 5,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      sym_boolean,
      sym_number,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_duration,
      sym_string,
      sym_comment,
  [1301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 5,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_duration,
      sym_string,
    ACTIONS(222), 5,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      sym_boolean,
      sym_number,
  [1319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_duration,
      sym_string,
    ACTIONS(226), 5,
      anon_sym_NOT,
      anon_sym_not,
      sym_identifier,
      sym_boolean,
      sym_number,
  [1337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_COLON,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_section_header_repeat1,
  [1353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_section_header_repeat1,
    ACTIONS(237), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1367] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_section_header_repeat1,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym_section_segment,
    ACTIONS(245), 2,
      sym_section_identifier,
      sym_duration,
  [1403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_call_repeat1,
  [1416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_call_repeat1,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      sym_section_segment,
    ACTIONS(245), 2,
      sym_section_identifier,
      sym_duration,
  [1449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_call_repeat1,
  [1462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_call_repeat1,
  [1475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_call_repeat1,
  [1488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
  [1502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_section_target,
  [1509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
  [1516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_section_target,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 53,
  [SMALL_STATE(18)] = 106,
  [SMALL_STATE(19)] = 142,
  [SMALL_STATE(20)] = 176,
  [SMALL_STATE(21)] = 218,
  [SMALL_STATE(22)] = 260,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 338,
  [SMALL_STATE(25)] = 380,
  [SMALL_STATE(26)] = 411,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 473,
  [SMALL_STATE(29)] = 504,
  [SMALL_STATE(30)] = 535,
  [SMALL_STATE(31)] = 572,
  [SMALL_STATE(32)] = 603,
  [SMALL_STATE(33)] = 634,
  [SMALL_STATE(34)] = 665,
  [SMALL_STATE(35)] = 701,
  [SMALL_STATE(36)] = 737,
  [SMALL_STATE(37)] = 780,
  [SMALL_STATE(38)] = 823,
  [SMALL_STATE(39)] = 866,
  [SMALL_STATE(40)] = 909,
  [SMALL_STATE(41)] = 949,
  [SMALL_STATE(42)] = 989,
  [SMALL_STATE(43)] = 1029,
  [SMALL_STATE(44)] = 1069,
  [SMALL_STATE(45)] = 1109,
  [SMALL_STATE(46)] = 1149,
  [SMALL_STATE(47)] = 1189,
  [SMALL_STATE(48)] = 1229,
  [SMALL_STATE(49)] = 1247,
  [SMALL_STATE(50)] = 1265,
  [SMALL_STATE(51)] = 1283,
  [SMALL_STATE(52)] = 1301,
  [SMALL_STATE(53)] = 1319,
  [SMALL_STATE(54)] = 1337,
  [SMALL_STATE(55)] = 1353,
  [SMALL_STATE(56)] = 1367,
  [SMALL_STATE(57)] = 1383,
  [SMALL_STATE(58)] = 1392,
  [SMALL_STATE(59)] = 1403,
  [SMALL_STATE(60)] = 1416,
  [SMALL_STATE(61)] = 1429,
  [SMALL_STATE(62)] = 1438,
  [SMALL_STATE(63)] = 1449,
  [SMALL_STATE(64)] = 1462,
  [SMALL_STATE(65)] = 1475,
  [SMALL_STATE(66)] = 1488,
  [SMALL_STATE(67)] = 1495,
  [SMALL_STATE(68)] = 1502,
  [SMALL_STATE(69)] = 1509,
  [SMALL_STATE(70)] = 1516,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, 0, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, 0, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, 0, 5),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, 0, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_line, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_line, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, 0, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, 0, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derivative_expr, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derivative_expr, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_magnitude_expr, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_magnitude_expr, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, 0, 7),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, 0, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 5, 0, 9),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 5, 0, 9),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 6, 0, 10),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 6, 0, 10),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_header_repeat1, 2, 0, 8), SHIFT_REPEAT(58),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_header_repeat1, 2, 0, 8),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_segment, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_header_repeat1, 2, 0, 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
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
