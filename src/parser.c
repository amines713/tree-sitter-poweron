#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_multiline_comment = 1,
  sym_comment = 2,
  sym_identifier = 3,
  sym_number = 4,
  sym_data_type = 5,
  anon_sym_EQ = 6,
  anon_sym_DEFINE = 7,
  anon_sym_END = 8,
  anon_sym_TARGET = 9,
  sym_program = 10,
  sym_define_var = 11,
  sym_define_block = 12,
  sym_target_block = 13,
  aux_sym_program_repeat1 = 14,
  aux_sym_define_block_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_multiline_comment] = "multiline_comment",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_data_type] = "data_type",
  [anon_sym_EQ] = "=",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_END] = "END",
  [anon_sym_TARGET] = "TARGET",
  [sym_program] = "program",
  [sym_define_var] = "define_var",
  [sym_define_block] = "define_block",
  [sym_target_block] = "target_block",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_define_block_repeat1] = "define_block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_data_type] = sym_data_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_TARGET] = anon_sym_TARGET,
  [sym_program] = sym_program,
  [sym_define_var] = sym_define_var,
  [sym_define_block] = sym_define_block,
  [sym_target_block] = sym_target_block,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_define_block_repeat1] = aux_sym_define_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TARGET] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_define_var] = {
    .visible = true,
    .named = true,
  },
  [sym_define_block] = {
    .visible = true,
    .named = true,
  },
  [sym_target_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead == 'D') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(32);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(4);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(29);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_multiline_comment);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_data_type);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_data_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_END);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(33);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_TARGET);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 6},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_multiline_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_data_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_TARGET] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym_define_block] = STATE(2),
    [sym_target_block] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DEFINE] = ACTIONS(7),
    [anon_sym_TARGET] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_DEFINE,
    ACTIONS(9), 1,
      anon_sym_TARGET,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(3), 3,
      sym_define_block,
      sym_target_block,
      aux_sym_program_repeat1,
  [19] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      anon_sym_DEFINE,
    ACTIONS(23), 1,
      anon_sym_TARGET,
    ACTIONS(17), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(3), 3,
      sym_define_block,
      sym_target_block,
      aux_sym_program_repeat1,
  [38] = 4,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_END,
    ACTIONS(26), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(5), 2,
      sym_define_var,
      aux_sym_define_block_repeat1,
  [53] = 4,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_END,
    ACTIONS(32), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(6), 2,
      sym_define_var,
      aux_sym_define_block_repeat1,
  [68] = 4,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_END,
    ACTIONS(36), 2,
      sym_multiline_comment,
      sym_comment,
    STATE(6), 2,
      sym_define_var,
      aux_sym_define_block_repeat1,
  [83] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      sym_multiline_comment,
      sym_comment,
      anon_sym_DEFINE,
      anon_sym_TARGET,
  [91] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      sym_multiline_comment,
      sym_comment,
      anon_sym_DEFINE,
      anon_sym_TARGET,
  [99] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      sym_multiline_comment,
      sym_comment,
      anon_sym_DEFINE,
      anon_sym_TARGET,
  [107] = 2,
    ACTIONS(50), 2,
      sym_multiline_comment,
      sym_comment,
    ACTIONS(52), 2,
      sym_identifier,
      anon_sym_END,
  [116] = 1,
    ACTIONS(54), 1,
      anon_sym_EQ,
  [120] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [124] = 1,
    ACTIONS(58), 1,
      anon_sym_EQ,
  [128] = 1,
    ACTIONS(60), 1,
      sym_identifier,
  [132] = 1,
    ACTIONS(62), 1,
      sym_data_type,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 107,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 128,
  [SMALL_STATE(15)] = 132,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_block_repeat1, 2), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_block_repeat1, 2), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_block_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_block, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_block, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_block, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_var, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_var, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_poweron(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
