#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_comment = 1,
  sym__number = 2,
  sym_identifier = 3,
  sym_end = 4,
  anon_sym_NUMBER = 5,
  anon_sym_CHARACTER = 6,
  sym_string_literal = 7,
  anon_sym_PLUS = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_EQ = 12,
  sym_call = 13,
  anon_sym_IF = 14,
  anon_sym_THENDO = 15,
  anon_sym_FOR = 16,
  anon_sym_TO = 17,
  anon_sym_DO = 18,
  sym_target = 19,
  sym_define = 20,
  sym_procedure = 21,
  sym_print = 22,
  sym_setup = 23,
  sym_total = 24,
  sym_program = 25,
  sym_data_type = 26,
  sym_add_concat = 27,
  sym_argument_list = 28,
  sym_function_call = 29,
  sym_assignment = 30,
  sym_call_statement = 31,
  sym_if_statement = 32,
  sym_for_loop = 33,
  sym_target_package = 34,
  sym_define_block = 35,
  sym_procedure_block = 36,
  sym_print_block = 37,
  sym_setup_block = 38,
  sym_total_block = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_add_concat_repeat1 = 41,
  aux_sym_argument_list_repeat1 = 42,
  aux_sym_if_statement_repeat1 = 43,
  aux_sym_for_loop_repeat1 = 44,
  aux_sym_procedure_block_repeat1 = 45,
  aux_sym_print_block_repeat1 = 46,
  aux_sym_setup_block_repeat1 = 47,
  aux_sym_total_block_repeat1 = 48,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__number] = "_number",
  [sym_identifier] = "identifier",
  [sym_end] = "end",
  [anon_sym_NUMBER] = "NUMBER",
  [anon_sym_CHARACTER] = "CHARACTER",
  [sym_string_literal] = "string_literal",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_call] = "call",
  [anon_sym_IF] = "IF",
  [anon_sym_THENDO] = "THEN DO",
  [anon_sym_FOR] = "FOR",
  [anon_sym_TO] = "TO",
  [anon_sym_DO] = "DO",
  [sym_target] = "target",
  [sym_define] = "define",
  [sym_procedure] = "procedure",
  [sym_print] = "print",
  [sym_setup] = "setup",
  [sym_total] = "total",
  [sym_program] = "program",
  [sym_data_type] = "data_type",
  [sym_add_concat] = "add_concat",
  [sym_argument_list] = "argument_list",
  [sym_function_call] = "function_call",
  [sym_assignment] = "assignment",
  [sym_call_statement] = "call_statement",
  [sym_if_statement] = "if_statement",
  [sym_for_loop] = "for_loop",
  [sym_target_package] = "target_package",
  [sym_define_block] = "define_block",
  [sym_procedure_block] = "procedure_block",
  [sym_print_block] = "print_block",
  [sym_setup_block] = "setup_block",
  [sym_total_block] = "total_block",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_add_concat_repeat1] = "add_concat_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_for_loop_repeat1] = "for_loop_repeat1",
  [aux_sym_procedure_block_repeat1] = "procedure_block_repeat1",
  [aux_sym_print_block_repeat1] = "print_block_repeat1",
  [aux_sym_setup_block_repeat1] = "setup_block_repeat1",
  [aux_sym_total_block_repeat1] = "total_block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__number] = sym__number,
  [sym_identifier] = sym_identifier,
  [sym_end] = sym_end,
  [anon_sym_NUMBER] = anon_sym_NUMBER,
  [anon_sym_CHARACTER] = anon_sym_CHARACTER,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_call] = sym_call,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THENDO] = anon_sym_THENDO,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_DO] = anon_sym_DO,
  [sym_target] = sym_target,
  [sym_define] = sym_define,
  [sym_procedure] = sym_procedure,
  [sym_print] = sym_print,
  [sym_setup] = sym_setup,
  [sym_total] = sym_total,
  [sym_program] = sym_program,
  [sym_data_type] = sym_data_type,
  [sym_add_concat] = sym_add_concat,
  [sym_argument_list] = sym_argument_list,
  [sym_function_call] = sym_function_call,
  [sym_assignment] = sym_assignment,
  [sym_call_statement] = sym_call_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_for_loop] = sym_for_loop,
  [sym_target_package] = sym_target_package,
  [sym_define_block] = sym_define_block,
  [sym_procedure_block] = sym_procedure_block,
  [sym_print_block] = sym_print_block,
  [sym_setup_block] = sym_setup_block,
  [sym_total_block] = sym_total_block,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_add_concat_repeat1] = aux_sym_add_concat_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_for_loop_repeat1] = aux_sym_for_loop_repeat1,
  [aux_sym_procedure_block_repeat1] = aux_sym_procedure_block_repeat1,
  [aux_sym_print_block_repeat1] = aux_sym_print_block_repeat1,
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
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
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
  [anon_sym_PLUS] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THENDO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
    .visible = true,
    .named = false,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure] = {
    .visible = true,
    .named = true,
  },
  [sym_print] = {
    .visible = true,
    .named = true,
  },
  [sym_setup] = {
    .visible = true,
    .named = true,
  },
  [sym_total] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_add_concat] = {
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
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_loop] = {
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
  [sym_print_block] = {
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
  [aux_sym_add_concat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_loop_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_block_repeat1] = {
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

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(64);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(45);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(88);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'H') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == 'F') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(1);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'P') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 59:
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 60:
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'U') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      if (eof) ADVANCE(64);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(79);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(72);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(86);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_NUMBER);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_NUMBER);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_CHARACTER);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_CHARACTER);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_call);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_THENDO);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_define);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_procedure);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_print);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_setup);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_total);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 63},
  [2] = {.lex_state = 63},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 63},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 63},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 63},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 63},
  [33] = {.lex_state = 63},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__number] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [anon_sym_NUMBER] = ACTIONS(1),
    [anon_sym_CHARACTER] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_call] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THENDO] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [sym_target] = ACTIONS(1),
    [sym_define] = ACTIONS(1),
    [sym_procedure] = ACTIONS(1),
    [sym_print] = ACTIONS(1),
    [sym_setup] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(155),
    [sym_target_package] = STATE(2),
    [sym_define_block] = STATE(2),
    [sym_procedure_block] = STATE(2),
    [sym_print_block] = STATE(2),
    [sym_setup_block] = STATE(2),
    [sym_total_block] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_target] = ACTIONS(7),
    [sym_define] = ACTIONS(9),
    [sym_procedure] = ACTIONS(11),
    [sym_print] = ACTIONS(13),
    [sym_setup] = ACTIONS(15),
    [sym_total] = ACTIONS(17),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_target,
    ACTIONS(9), 1,
      sym_define,
    ACTIONS(11), 1,
      sym_procedure,
    ACTIONS(13), 1,
      sym_print,
    ACTIONS(15), 1,
      sym_setup,
    ACTIONS(17), 1,
      sym_total,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(3), 7,
      sym_target_package,
      sym_define_block,
      sym_procedure_block,
      sym_print_block,
      sym_setup_block,
      sym_total_block,
      aux_sym_program_repeat1,
  [34] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_target,
    ACTIONS(26), 1,
      sym_define,
    ACTIONS(29), 1,
      sym_procedure,
    ACTIONS(32), 1,
      sym_print,
    ACTIONS(35), 1,
      sym_setup,
    ACTIONS(38), 1,
      sym_total,
    STATE(3), 7,
      sym_target_package,
      sym_define_block,
      sym_procedure_block,
      sym_print_block,
      sym_setup_block,
      sym_total_block,
      aux_sym_program_repeat1,
  [68] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_add_concat_repeat1,
    STATE(66), 1,
      sym_argument_list,
    ACTIONS(41), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [90] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_end,
    ACTIONS(52), 1,
      sym_call,
    ACTIONS(55), 1,
      anon_sym_FOR,
    STATE(5), 4,
      sym_assignment,
      sym_call_statement,
      sym_for_loop,
      aux_sym_setup_block_repeat1,
  [112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym__number,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(64), 1,
      sym_string_literal,
    STATE(43), 1,
      sym_function_call,
    ACTIONS(62), 2,
      anon_sym_NUMBER,
      anon_sym_CHARACTER,
    STATE(96), 2,
      sym_data_type,
      sym_add_concat,
  [136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      sym_end,
    ACTIONS(70), 1,
      sym_call,
    ACTIONS(72), 1,
      anon_sym_FOR,
    STATE(14), 4,
      sym_assignment,
      sym_call_statement,
      sym_for_loop,
      aux_sym_setup_block_repeat1,
  [158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym__number,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym_string_literal,
    STATE(62), 1,
      sym_function_call,
    ACTIONS(78), 2,
      anon_sym_NUMBER,
      anon_sym_CHARACTER,
    STATE(126), 2,
      sym_data_type,
      sym_add_concat,
  [182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(84), 1,
      sym_end,
    ACTIONS(86), 1,
      sym_call,
    ACTIONS(88), 1,
      anon_sym_IF,
    STATE(16), 4,
      sym_assignment,
      sym_call_statement,
      sym_if_statement,
      aux_sym_for_loop_repeat1,
  [204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(86), 1,
      sym_call,
    ACTIONS(88), 1,
      anon_sym_IF,
    ACTIONS(90), 1,
      sym_end,
    STATE(9), 4,
      sym_assignment,
      sym_call_statement,
      sym_if_statement,
      aux_sym_for_loop_repeat1,
  [226] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym__number,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      sym_string_literal,
    STATE(91), 1,
      sym_function_call,
    ACTIONS(96), 2,
      anon_sym_NUMBER,
      anon_sym_CHARACTER,
    STATE(150), 2,
      sym_data_type,
      sym_add_concat,
  [250] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__number,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym_string_literal,
    STATE(101), 1,
      sym_function_call,
    ACTIONS(104), 2,
      anon_sym_NUMBER,
      anon_sym_CHARACTER,
    STATE(141), 2,
      sym_data_type,
      sym_add_concat,
  [274] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__number,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(114), 1,
      sym_string_literal,
    STATE(45), 1,
      sym_function_call,
    ACTIONS(112), 2,
      anon_sym_NUMBER,
      anon_sym_CHARACTER,
    STATE(84), 2,
      sym_data_type,
      sym_add_concat,
  [298] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_call,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(116), 1,
      sym_end,
    STATE(5), 4,
      sym_assignment,
      sym_call_statement,
      sym_for_loop,
      aux_sym_setup_block_repeat1,
  [320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_PLUS,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      aux_sym_add_concat_repeat1,
    STATE(50), 1,
      sym_argument_list,
    ACTIONS(41), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_end,
    ACTIONS(127), 1,
      sym_call,
    ACTIONS(130), 1,
      anon_sym_IF,
    STATE(16), 4,
      sym_assignment,
      sym_call_statement,
      sym_if_statement,
      aux_sym_for_loop_repeat1,
  [364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    STATE(66), 1,
      sym_argument_list,
    ACTIONS(135), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [396] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      sym_end,
    ACTIONS(143), 1,
      sym_call,
    STATE(23), 4,
      sym_function_call,
      sym_assignment,
      sym_call_statement,
      aux_sym_procedure_block_repeat1,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      aux_sym_add_concat_repeat1,
    STATE(87), 1,
      sym_argument_list,
    ACTIONS(41), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [462] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(143), 1,
      sym_call,
    ACTIONS(153), 1,
      sym_end,
    STATE(34), 4,
      sym_function_call,
      sym_assignment,
      sym_call_statement,
      aux_sym_procedure_block_repeat1,
  [481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    STATE(50), 1,
      sym_argument_list,
    ACTIONS(135), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      sym_target,
      sym_define,
      sym_procedure,
      sym_print,
      sym_setup,
      sym_total,
  [617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_end,
    ACTIONS(178), 1,
      sym_call,
    STATE(34), 4,
      sym_function_call,
      sym_assignment,
      sym_call_statement,
      aux_sym_procedure_block_repeat1,
  [636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_argument_list,
    ACTIONS(181), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    STATE(40), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(183), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    STATE(37), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(135), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_argument_list,
    ACTIONS(181), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_argument_list,
    ACTIONS(135), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_PLUS,
    STATE(40), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(135), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_PLUS,
    STATE(37), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(183), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_argument_list,
    STATE(70), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(195), 2,
      anon_sym_THENDO,
      anon_sym_TO,
  [770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(41), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(41), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(41), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(41), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [834] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      aux_sym_add_concat_repeat1,
    STATE(108), 1,
      sym_argument_list,
    ACTIONS(41), 2,
      sym_identifier,
      sym_end,
  [854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(201), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_argument_list,
    ACTIONS(137), 3,
      anon_sym_PLUS,
      anon_sym_THENDO,
      anon_sym_TO,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(205), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      sym_end,
      anon_sym_PLUS,
      sym_call,
      anon_sym_THENDO,
      anon_sym_TO,
  [906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 5,
      sym_end,
      anon_sym_PLUS,
      sym_call,
      anon_sym_THENDO,
      anon_sym_TO,
  [917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_argument_list,
    ACTIONS(181), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 5,
      sym_end,
      anon_sym_PLUS,
      sym_call,
      anon_sym_THENDO,
      anon_sym_TO,
  [943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    ACTIONS(211), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_PLUS,
    STATE(56), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(135), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    ACTIONS(135), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    ACTIONS(218), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    STATE(56), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(183), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(201), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [1025] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_argument_list,
    ACTIONS(135), 2,
      sym_identifier,
      sym_end,
  [1042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    STATE(59), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(41), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    STATE(59), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(41), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    ACTIONS(218), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      sym_end,
      anon_sym_PLUS,
      sym_call,
      anon_sym_THENDO,
      anon_sym_TO,
  [1096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(205), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    ACTIONS(135), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    ACTIONS(211), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [1135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(137), 2,
      anon_sym_THENDO,
      anon_sym_TO,
  [1149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(223), 2,
      anon_sym_THENDO,
      anon_sym_TO,
  [1163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      sym_end,
    STATE(79), 2,
      sym_assignment,
      aux_sym_if_statement_repeat1,
  [1177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_end,
    STATE(128), 1,
      aux_sym_print_block_repeat1,
    STATE(129), 1,
      sym_assignment,
  [1193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [1203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_end,
    STATE(76), 2,
      sym_assignment,
      aux_sym_if_statement_repeat1,
  [1217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [1227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(239), 1,
      sym_end,
    STATE(86), 2,
      sym_assignment,
      aux_sym_if_statement_repeat1,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [1251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_end,
    ACTIONS(245), 1,
      sym_call,
    STATE(83), 2,
      sym_call_statement,
      aux_sym_total_block_repeat1,
  [1265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(247), 1,
      sym_end,
    STATE(86), 2,
      sym_assignment,
      aux_sym_if_statement_repeat1,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [1289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [1299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    ACTIONS(211), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_call,
    ACTIONS(251), 1,
      sym_end,
    STATE(97), 2,
      sym_call_statement,
      aux_sym_total_block_repeat1,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [1335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_PLUS,
    STATE(85), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(135), 2,
      sym_identifier,
      sym_end,
  [1349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_end,
    STATE(86), 2,
      sym_assignment,
      aux_sym_if_statement_repeat1,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(205), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [1385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    ACTIONS(218), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    ACTIONS(135), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    STATE(70), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(195), 2,
      anon_sym_THENDO,
      anon_sym_TO,
  [1423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    STATE(85), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(183), 2,
      sym_identifier,
      sym_end,
  [1437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    STATE(70), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(195), 2,
      anon_sym_THENDO,
      anon_sym_TO,
  [1451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_argument_list,
    ACTIONS(265), 2,
      sym_end,
      sym_call,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_IF,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [1485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_end,
    ACTIONS(269), 1,
      sym_call,
    STATE(97), 2,
      sym_call_statement,
      aux_sym_total_block_repeat1,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 4,
      sym_identifier,
      sym_end,
      sym_call,
      anon_sym_FOR,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(201), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(41), 2,
      sym_identifier,
      sym_end,
  [1535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      aux_sym_add_concat_repeat1,
    ACTIONS(41), 2,
      sym_identifier,
      sym_end,
  [1549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_argument_list_repeat1,
  [1562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_argument_list_repeat1,
  [1575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_argument_list_repeat1,
  [1588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      sym_string_literal,
    STATE(67), 1,
      sym_function_call,
  [1601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_EQ,
    ACTIONS(287), 2,
      sym_identifier,
      sym_end,
  [1612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(294), 1,
      sym_end,
    STATE(107), 1,
      aux_sym_print_block_repeat1,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(205), 2,
      sym_identifier,
      sym_end,
  [1636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_end,
    STATE(107), 1,
      aux_sym_print_block_repeat1,
  [1649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_argument_list_repeat1,
  [1662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 2,
      sym_identifier,
      sym_string_literal,
  [1673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_argument_list_repeat1,
  [1695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_string_literal,
    STATE(123), 1,
      sym_function_call,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      sym_string_literal,
    STATE(120), 1,
      sym_function_call,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(201), 2,
      sym_identifier,
      sym_end,
  [1732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_argument_list_repeat1,
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    ACTIONS(218), 2,
      sym_identifier,
      sym_end,
  [1756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_argument_list_repeat1,
  [1769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_PLUS,
      anon_sym_THENDO,
      anon_sym_TO,
  [1778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 2,
      sym_identifier,
      sym_string_literal,
  [1789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    ACTIONS(211), 2,
      sym_identifier,
      sym_end,
  [1800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    ACTIONS(135), 2,
      sym_identifier,
      sym_end,
  [1811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 2,
      sym_identifier,
      sym_string_literal,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      sym_identifier,
      sym_end,
      sym_call,
  [1840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_argument_list_repeat1,
  [1853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(330), 1,
      sym_end,
    STATE(107), 1,
      aux_sym_print_block_repeat1,
  [1866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_end,
    ACTIONS(332), 1,
      sym_identifier,
    STATE(109), 1,
      aux_sym_print_block_repeat1,
  [1879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      sym_string_literal,
    STATE(57), 1,
      sym_function_call,
  [1892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 2,
      sym_identifier,
      sym_string_literal,
  [1903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_argument_list_repeat1,
  [1916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_argument_list_repeat1,
  [1929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym_string_literal,
    STATE(90), 1,
      sym_function_call,
  [1942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_argument_list_repeat1,
  [1955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 2,
      sym_identifier,
      sym_string_literal,
  [1966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      anon_sym_EQ,
    STATE(87), 1,
      sym_argument_list,
  [1979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(80), 1,
      sym_function_call,
  [1989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(151), 1,
      sym_assignment,
  [1999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(95), 1,
      sym_function_call,
  [2009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym_identifier,
      sym_end,
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(146), 1,
      sym_function_call,
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      sym__number,
      sym_identifier,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      sym_identifier,
      sym_end,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym_end,
      sym_call,
  [2059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(112), 1,
      sym_function_call,
  [2069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(158), 1,
      sym_assignment,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_THENDO,
      anon_sym_TO,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_THENDO,
      anon_sym_TO,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_TO,
  [2102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_identifier,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_identifier,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_EQ,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DO,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_EQ,
  [2144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_THENDO,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_EQ,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_EQ,
  [2165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 182,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 226,
  [SMALL_STATE(12)] = 250,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 298,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 342,
  [SMALL_STATE(17)] = 364,
  [SMALL_STATE(18)] = 377,
  [SMALL_STATE(19)] = 396,
  [SMALL_STATE(20)] = 415,
  [SMALL_STATE(21)] = 428,
  [SMALL_STATE(22)] = 449,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 481,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 507,
  [SMALL_STATE(27)] = 520,
  [SMALL_STATE(28)] = 533,
  [SMALL_STATE(29)] = 546,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 578,
  [SMALL_STATE(32)] = 591,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 617,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 652,
  [SMALL_STATE(37)] = 668,
  [SMALL_STATE(38)] = 684,
  [SMALL_STATE(39)] = 700,
  [SMALL_STATE(40)] = 718,
  [SMALL_STATE(41)] = 734,
  [SMALL_STATE(42)] = 750,
  [SMALL_STATE(43)] = 770,
  [SMALL_STATE(44)] = 786,
  [SMALL_STATE(45)] = 802,
  [SMALL_STATE(46)] = 818,
  [SMALL_STATE(47)] = 834,
  [SMALL_STATE(48)] = 854,
  [SMALL_STATE(49)] = 867,
  [SMALL_STATE(50)] = 882,
  [SMALL_STATE(51)] = 895,
  [SMALL_STATE(52)] = 906,
  [SMALL_STATE(53)] = 917,
  [SMALL_STATE(54)] = 932,
  [SMALL_STATE(55)] = 943,
  [SMALL_STATE(56)] = 956,
  [SMALL_STATE(57)] = 971,
  [SMALL_STATE(58)] = 984,
  [SMALL_STATE(59)] = 997,
  [SMALL_STATE(60)] = 1012,
  [SMALL_STATE(61)] = 1025,
  [SMALL_STATE(62)] = 1042,
  [SMALL_STATE(63)] = 1057,
  [SMALL_STATE(64)] = 1072,
  [SMALL_STATE(65)] = 1085,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1109,
  [SMALL_STATE(68)] = 1122,
  [SMALL_STATE(69)] = 1135,
  [SMALL_STATE(70)] = 1149,
  [SMALL_STATE(71)] = 1163,
  [SMALL_STATE(72)] = 1177,
  [SMALL_STATE(73)] = 1193,
  [SMALL_STATE(74)] = 1203,
  [SMALL_STATE(75)] = 1217,
  [SMALL_STATE(76)] = 1227,
  [SMALL_STATE(77)] = 1241,
  [SMALL_STATE(78)] = 1251,
  [SMALL_STATE(79)] = 1265,
  [SMALL_STATE(80)] = 1279,
  [SMALL_STATE(81)] = 1289,
  [SMALL_STATE(82)] = 1299,
  [SMALL_STATE(83)] = 1311,
  [SMALL_STATE(84)] = 1325,
  [SMALL_STATE(85)] = 1335,
  [SMALL_STATE(86)] = 1349,
  [SMALL_STATE(87)] = 1363,
  [SMALL_STATE(88)] = 1375,
  [SMALL_STATE(89)] = 1385,
  [SMALL_STATE(90)] = 1397,
  [SMALL_STATE(91)] = 1409,
  [SMALL_STATE(92)] = 1423,
  [SMALL_STATE(93)] = 1437,
  [SMALL_STATE(94)] = 1451,
  [SMALL_STATE(95)] = 1465,
  [SMALL_STATE(96)] = 1475,
  [SMALL_STATE(97)] = 1485,
  [SMALL_STATE(98)] = 1499,
  [SMALL_STATE(99)] = 1509,
  [SMALL_STATE(100)] = 1521,
  [SMALL_STATE(101)] = 1535,
  [SMALL_STATE(102)] = 1549,
  [SMALL_STATE(103)] = 1562,
  [SMALL_STATE(104)] = 1575,
  [SMALL_STATE(105)] = 1588,
  [SMALL_STATE(106)] = 1601,
  [SMALL_STATE(107)] = 1612,
  [SMALL_STATE(108)] = 1625,
  [SMALL_STATE(109)] = 1636,
  [SMALL_STATE(110)] = 1649,
  [SMALL_STATE(111)] = 1662,
  [SMALL_STATE(112)] = 1673,
  [SMALL_STATE(113)] = 1682,
  [SMALL_STATE(114)] = 1695,
  [SMALL_STATE(115)] = 1708,
  [SMALL_STATE(116)] = 1721,
  [SMALL_STATE(117)] = 1732,
  [SMALL_STATE(118)] = 1745,
  [SMALL_STATE(119)] = 1756,
  [SMALL_STATE(120)] = 1769,
  [SMALL_STATE(121)] = 1778,
  [SMALL_STATE(122)] = 1789,
  [SMALL_STATE(123)] = 1800,
  [SMALL_STATE(124)] = 1811,
  [SMALL_STATE(125)] = 1822,
  [SMALL_STATE(126)] = 1831,
  [SMALL_STATE(127)] = 1840,
  [SMALL_STATE(128)] = 1853,
  [SMALL_STATE(129)] = 1866,
  [SMALL_STATE(130)] = 1879,
  [SMALL_STATE(131)] = 1892,
  [SMALL_STATE(132)] = 1903,
  [SMALL_STATE(133)] = 1916,
  [SMALL_STATE(134)] = 1929,
  [SMALL_STATE(135)] = 1942,
  [SMALL_STATE(136)] = 1955,
  [SMALL_STATE(137)] = 1966,
  [SMALL_STATE(138)] = 1979,
  [SMALL_STATE(139)] = 1989,
  [SMALL_STATE(140)] = 1999,
  [SMALL_STATE(141)] = 2009,
  [SMALL_STATE(142)] = 2017,
  [SMALL_STATE(143)] = 2027,
  [SMALL_STATE(144)] = 2035,
  [SMALL_STATE(145)] = 2043,
  [SMALL_STATE(146)] = 2051,
  [SMALL_STATE(147)] = 2059,
  [SMALL_STATE(148)] = 2069,
  [SMALL_STATE(149)] = 2079,
  [SMALL_STATE(150)] = 2087,
  [SMALL_STATE(151)] = 2095,
  [SMALL_STATE(152)] = 2102,
  [SMALL_STATE(153)] = 2109,
  [SMALL_STATE(154)] = 2116,
  [SMALL_STATE(155)] = 2123,
  [SMALL_STATE(156)] = 2130,
  [SMALL_STATE(157)] = 2137,
  [SMALL_STATE(158)] = 2144,
  [SMALL_STATE(159)] = 2151,
  [SMALL_STATE(160)] = 2158,
  [SMALL_STATE(161)] = 2165,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(157),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_concat, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_block_repeat1, 2), SHIFT_REPEAT(154),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setup_block_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_block_repeat1, 2), SHIFT_REPEAT(138),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setup_block_repeat1, 2), SHIFT_REPEAT(139),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_loop_repeat1, 2), SHIFT_REPEAT(161),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_loop_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_loop_repeat1, 2), SHIFT_REPEAT(140),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_loop_repeat1, 2), SHIFT_REPEAT(148),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_block, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_concat_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_concat_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_block, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_block, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_block, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_block, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_block, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_block, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_package, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_block, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_block, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_block, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_block, 3),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_block_repeat1, 2), SHIFT_REPEAT(137),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_procedure_block_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_block_repeat1, 2), SHIFT_REPEAT(147),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_concat, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_concat_repeat1, 2), SHIFT_REPEAT(105),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_concat_repeat1, 2), SHIFT_REPEAT(130),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_concat, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_concat_repeat1, 2), SHIFT_REPEAT(134),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_concat_repeat1, 2), SHIFT_REPEAT(115),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_concat, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop, 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_concat_repeat1, 2), SHIFT_REPEAT(114),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(159),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_total_block_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_total_block_repeat1, 2), SHIFT_REPEAT(142),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(152),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_block_repeat1, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_print_block_repeat1, 2), SHIFT_REPEAT(107),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_block_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [382] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
