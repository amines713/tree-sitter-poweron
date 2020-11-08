#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_comment = 1,
  sym_identifier = 2,
  sym__number = 3,
  anon_sym_NUMBER = 4,
  anon_sym_CHARACTER = 5,
  sym_string_literal = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_EQ = 10,
  anon_sym_CALL = 11,
  anon_sym_TARGET = 12,
  anon_sym_DEFINE = 13,
  anon_sym_END = 14,
  anon_sym_PROCEDURE = 15,
  anon_sym_SETUP = 16,
  anon_sym_TOTAL = 17,
  sym_program = 18,
  sym_data_type = 19,
  sym_argument_list = 20,
  sym_function_call = 21,
  sym_assignment = 22,
  sym_call_statement = 23,
  sym_target_package = 24,
  sym_define_block = 25,
  sym_procedure_block = 26,
  sym_setup_block = 27,
  sym_total_block = 28,
  aux_sym_program_repeat1 = 29,
  aux_sym_argument_list_repeat1 = 30,
  aux_sym_define_block_repeat1 = 31,
  aux_sym_procedure_block_repeat1 = 32,
  aux_sym_setup_block_repeat1 = 33,
  aux_sym_total_block_repeat1 = 34,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym__number] = "_number",
  [anon_sym_NUMBER] = "NUMBER",
  [anon_sym_CHARACTER] = "CHARACTER",
  [sym_string_literal] = "string_literal",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_CALL] = "CALL ",
  [anon_sym_TARGET] = "TARGET",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_END] = "END",
  [anon_sym_PROCEDURE] = "PROCEDURE",
  [anon_sym_SETUP] = "SETUP",
  [anon_sym_TOTAL] = "TOTAL",
  [sym_program] = "program",
  [sym_data_type] = "data_type",
  [sym_argument_list] = "argument_list",
  [sym_function_call] = "function_call",
  [sym_assignment] = "assignment",
  [sym_call_statement] = "call_statement",
  [sym_target_package] = "target_package",
  [sym_define_block] = "define_block",
  [sym_procedure_block] = "procedure_block",
  [sym_setup_block] = "setup_block",
  [sym_total_block] = "total_block",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_define_block_repeat1] = "define_block_repeat1",
  [aux_sym_procedure_block_repeat1] = "procedure_block_repeat1",
  [aux_sym_setup_block_repeat1] = "setup_block_repeat1",
  [aux_sym_total_block_repeat1] = "total_block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym__number] = sym__number,
  [anon_sym_NUMBER] = anon_sym_NUMBER,
  [anon_sym_CHARACTER] = anon_sym_CHARACTER,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_CALL] = anon_sym_CALL,
  [anon_sym_TARGET] = anon_sym_TARGET,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_PROCEDURE] = anon_sym_PROCEDURE,
  [anon_sym_SETUP] = anon_sym_SETUP,
  [anon_sym_TOTAL] = anon_sym_TOTAL,
  [sym_program] = sym_program,
  [sym_data_type] = sym_data_type,
  [sym_argument_list] = sym_argument_list,
  [sym_function_call] = sym_function_call,
  [sym_assignment] = sym_assignment,
  [sym_call_statement] = sym_call_statement,
  [sym_target_package] = sym_target_package,
  [sym_define_block] = sym_define_block,
  [sym_procedure_block] = sym_procedure_block,
  [sym_setup_block] = sym_setup_block,
  [sym_total_block] = sym_total_block,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_define_block_repeat1] = aux_sym_define_block_repeat1,
  [aux_sym_procedure_block_repeat1] = aux_sym_procedure_block_repeat1,
  [aux_sym_setup_block_repeat1] = aux_sym_setup_block_repeat1,
  [aux_sym_total_block_repeat1] = aux_sym_total_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_NUMBER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHARACTER] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TARGET] = {
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
  [anon_sym_PROCEDURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SETUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TOTAL] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_target_package] = {
    .visible = true,
    .named = true,
  },
  [sym_define_block] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_block] = {
    .visible = true,
    .named = true,
  },
  [sym_setup_block] = {
    .visible = true,
    .named = true,
  },
  [sym_total_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setup_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_total_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(6);
      if (lookahead == 'D') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'F') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'G') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(1);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(50);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(56);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_NUMBER);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CHARACTER);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_CALL);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_TARGET);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_END);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PROCEDURE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SETUP);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_TOTAL);
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
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__number] = ACTIONS(1),
    [anon_sym_NUMBER] = ACTIONS(1),
    [anon_sym_CHARACTER] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_CALL] = ACTIONS(1),
    [anon_sym_TARGET] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_PROCEDURE] = ACTIONS(1),
    [anon_sym_SETUP] = ACTIONS(1),
    [anon_sym_TOTAL] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(46),
    [sym_target_package] = STATE(2),
    [sym_define_block] = STATE(2),
    [sym_procedure_block] = STATE(2),
    [sym_setup_block] = STATE(2),
    [sym_total_block] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TARGET] = ACTIONS(7),
    [anon_sym_DEFINE] = ACTIONS(9),
    [anon_sym_PROCEDURE] = ACTIONS(11),
    [anon_sym_SETUP] = ACTIONS(13),
    [anon_sym_TOTAL] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_TARGET,
    ACTIONS(9), 1,
      anon_sym_DEFINE,
    ACTIONS(11), 1,
      anon_sym_PROCEDURE,
    ACTIONS(13), 1,
      anon_sym_SETUP,
    ACTIONS(15), 1,
      anon_sym_TOTAL,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(3), 6,
      sym_target_package,
      sym_define_block,
      sym_procedure_block,
      sym_setup_block,
      sym_total_block,
      aux_sym_program_repeat1,
  [30] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_TARGET,
    ACTIONS(24), 1,
      anon_sym_DEFINE,
    ACTIONS(27), 1,
      anon_sym_PROCEDURE,
    ACTIONS(30), 1,
      anon_sym_SETUP,
    ACTIONS(33), 1,
      anon_sym_TOTAL,
    STATE(3), 6,
      sym_target_package,
      sym_define_block,
      sym_procedure_block,
      sym_setup_block,
      sym_total_block,
      aux_sym_program_repeat1,
  [60] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_CALL,
    ACTIONS(40), 1,
      anon_sym_END,
    STATE(6), 4,
      sym_function_call,
      sym_assignment,
      sym_call_statement,
      aux_sym_procedure_block_repeat1,
  [79] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_CALL,
    ACTIONS(48), 1,
      anon_sym_END,
    STATE(5), 4,
      sym_function_call,
      sym_assignment,
      sym_call_statement,
      aux_sym_procedure_block_repeat1,
  [98] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_CALL,
    ACTIONS(50), 1,
      anon_sym_END,
    STATE(5), 4,
      sym_function_call,
      sym_assignment,
      sym_call_statement,
      aux_sym_procedure_block_repeat1,
  [117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_CALL,
    ACTIONS(62), 1,
      anon_sym_END,
    STATE(9), 3,
      sym_assignment,
      sym_call_statement,
      aux_sym_setup_block_repeat1,
  [159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_END,
    STATE(18), 3,
      sym_assignment,
      sym_call_statement,
      aux_sym_setup_block_repeat1,
  [177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_TARGET,
      anon_sym_DEFINE,
      anon_sym_PROCEDURE,
      anon_sym_SETUP,
      anon_sym_TOTAL,
  [261] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_END,
    STATE(9), 3,
      sym_assignment,
      sym_call_statement,
      aux_sym_setup_block_repeat1,
  [279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_END,
    STATE(19), 2,
      sym_assignment,
      aux_sym_define_block_repeat1,
  [293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_END,
    STATE(19), 2,
      sym_assignment,
      aux_sym_define_block_repeat1,
  [307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_CALL,
    ACTIONS(96), 1,
      anon_sym_END,
    STATE(21), 2,
      sym_call_statement,
      aux_sym_total_block_repeat1,
  [321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_END,
    STATE(20), 2,
      sym_assignment,
      aux_sym_define_block_repeat1,
  [335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_CALL,
    ACTIONS(102), 1,
      anon_sym_END,
    STATE(24), 2,
      sym_call_statement,
      aux_sym_total_block_repeat1,
  [349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_CALL,
    ACTIONS(104), 1,
      anon_sym_END,
    STATE(21), 2,
      sym_call_statement,
      aux_sym_total_block_repeat1,
  [363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_CALL,
    ACTIONS(106), 2,
      sym_identifier,
      anon_sym_END,
  [374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      sym_data_type,
    ACTIONS(115), 2,
      anon_sym_NUMBER,
      anon_sym_CHARACTER,
  [398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_CALL,
    ACTIONS(117), 2,
      sym_identifier,
      anon_sym_END,
  [409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_CALL,
    ACTIONS(121), 2,
      sym_identifier,
      anon_sym_END,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_CALL,
    ACTIONS(125), 2,
      sym_identifier,
      anon_sym_END,
  [431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_EQ,
    STATE(25), 1,
      sym_argument_list,
  [444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_CALL,
    ACTIONS(133), 2,
      sym_identifier,
      anon_sym_END,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym_data_type,
    ACTIONS(137), 2,
      anon_sym_NUMBER,
      anon_sym_CHARACTER,
  [466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
  [479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_CALL,
    ACTIONS(143), 2,
      sym_identifier,
      anon_sym_END,
  [490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_CALL,
    ACTIONS(147), 2,
      sym_identifier,
      anon_sym_END,
  [501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_argument_list_repeat1,
  [514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      sym_identifier,
      anon_sym_END,
  [522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_identifier,
      anon_sym_END,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_CALL,
      anon_sym_END,
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
  [556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_identifier,
  [563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
  [570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_EQ,
  [577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_identifier,
  [591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
  [598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_identifier,
  [605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 293,
  [SMALL_STATE(21)] = 307,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 335,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 363,
  [SMALL_STATE(26)] = 374,
  [SMALL_STATE(27)] = 387,
  [SMALL_STATE(28)] = 398,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 420,
  [SMALL_STATE(31)] = 431,
  [SMALL_STATE(32)] = 444,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 466,
  [SMALL_STATE(35)] = 479,
  [SMALL_STATE(36)] = 490,
  [SMALL_STATE(37)] = 501,
  [SMALL_STATE(38)] = 514,
  [SMALL_STATE(39)] = 522,
  [SMALL_STATE(40)] = 530,
  [SMALL_STATE(41)] = 538,
  [SMALL_STATE(42)] = 546,
  [SMALL_STATE(43)] = 556,
  [SMALL_STATE(44)] = 563,
  [SMALL_STATE(45)] = 570,
  [SMALL_STATE(46)] = 577,
  [SMALL_STATE(47)] = 584,
  [SMALL_STATE(48)] = 591,
  [SMALL_STATE(49)] = 598,
  [SMALL_STATE(50)] = 605,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_block_repeat1, 2), SHIFT_REPEAT(31),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_block_repeat1, 2), SHIFT_REPEAT(44),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_procedure_block_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_block, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_block, 3),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_block_repeat1, 2), SHIFT_REPEAT(50),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_block_repeat1, 2), SHIFT_REPEAT(44),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setup_block_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_block, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_block, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_block, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_block, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_package, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_block, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_block, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_block_repeat1, 2), SHIFT_REPEAT(48),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_block_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_total_block_repeat1, 2), SHIFT_REPEAT(49),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_total_block_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(43),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 2, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
