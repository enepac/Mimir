#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_def = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COLON = 5,
  anon_sym_COMMA = 6,
  sym_identifier = 7,
  sym_number = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  sym_source_file = 11,
  sym_statement = 12,
  sym_assignment = 13,
  sym_function_definition = 14,
  sym_non_empty_parameters = 15,
  sym_block = 16,
  sym_expression = 17,
  sym_string = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_non_empty_parameters_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_def] = "def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_assignment] = "assignment",
  [sym_function_definition] = "function_definition",
  [sym_non_empty_parameters] = "non_empty_parameters",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_non_empty_parameters_repeat1] = "non_empty_parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_assignment] = sym_assignment,
  [sym_function_definition] = sym_function_definition,
  [sym_non_empty_parameters] = sym_non_empty_parameters,
  [sym_block] = sym_block,
  [sym_expression] = sym_expression,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_non_empty_parameters_repeat1] = aux_sym_non_empty_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_non_empty_parameters_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == ')') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_statement] = STATE(2),
    [sym_assignment] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_assignment] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_def] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_assignment] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_def] = ACTIONS(17),
    [sym_identifier] = ACTIONS(20),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(26),
  },
  [4] = {
    [sym_statement] = STATE(5),
    [sym_assignment] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_block] = STATE(11),
    [sym_expression] = STATE(9),
    [sym_string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_def] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [5] = {
    [sym_statement] = STATE(3),
    [sym_assignment] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
  [6] = {
    [sym_statement] = STATE(5),
    [sym_assignment] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_block] = STATE(14),
    [sym_expression] = STATE(9),
    [sym_string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_def] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(35), 2,
      anon_sym_def,
      sym_identifier,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
  [13] = 2,
    ACTIONS(35), 2,
      anon_sym_def,
      sym_identifier,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
  [23] = 2,
    ACTIONS(39), 2,
      anon_sym_def,
      sym_identifier,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
  [33] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_string,
    STATE(13), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_identifier,
      sym_number,
  [47] = 2,
    ACTIONS(43), 2,
      anon_sym_def,
      sym_identifier,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
  [57] = 2,
    ACTIONS(47), 2,
      anon_sym_def,
      sym_identifier,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
  [67] = 2,
    ACTIONS(51), 2,
      anon_sym_def,
      sym_identifier,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
  [77] = 2,
    ACTIONS(55), 2,
      anon_sym_def,
      sym_identifier,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
  [87] = 3,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(28), 1,
      sym_non_empty_parameters,
  [97] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_non_empty_parameters_repeat1,
  [107] = 3,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_non_empty_parameters_repeat1,
  [117] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_non_empty_parameters_repeat1,
  [127] = 1,
    ACTIONS(65), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [132] = 1,
    ACTIONS(72), 1,
      aux_sym_string_token1,
  [136] = 1,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
  [140] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [144] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [148] = 1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
  [152] = 1,
    ACTIONS(82), 1,
      anon_sym_COLON,
  [156] = 1,
    ACTIONS(84), 1,
      anon_sym_COLON,
  [160] = 1,
    ACTIONS(86), 1,
      sym_identifier,
  [164] = 1,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 13,
  [SMALL_STATE(9)] = 23,
  [SMALL_STATE(10)] = 33,
  [SMALL_STATE(11)] = 47,
  [SMALL_STATE(12)] = 57,
  [SMALL_STATE(13)] = 67,
  [SMALL_STATE(14)] = 77,
  [SMALL_STATE(15)] = 87,
  [SMALL_STATE(16)] = 97,
  [SMALL_STATE(17)] = 107,
  [SMALL_STATE(18)] = 117,
  [SMALL_STATE(19)] = 127,
  [SMALL_STATE(20)] = 132,
  [SMALL_STATE(21)] = 136,
  [SMALL_STATE(22)] = 140,
  [SMALL_STATE(23)] = 144,
  [SMALL_STATE(24)] = 148,
  [SMALL_STATE(25)] = 152,
  [SMALL_STATE(26)] = 156,
  [SMALL_STATE(27)] = 160,
  [SMALL_STATE(28)] = 164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_parameters, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_empty_parameters_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_empty_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_parameters, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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

TS_PUBLIC const TSLanguage *tree_sitter_mimir(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
