#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 2
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 13

enum {
  aux_sym_diff_token1 = 1,
  sym__newline = 2,
  anon_sym_PLUS_PLUS_PLUS = 3,
  anon_sym_ = 4,
  anon_sym_TAB = 5,
  anon_sym_DASH_DASH_DASH = 6,
  anon_sym_AT_AT_DASH = 7,
  anon_sym_PLUS = 8,
  anon_sym_AT_AT = 9,
  anon_sym_COMMA = 10,
  sym__number = 11,
  anon_sym_PLUS2 = 12,
  anon_sym_DASH = 13,
  sym__text = 14,
  sym_filename = 15,
  sym_diff = 16,
  sym_file = 17,
  sym_hunk = 18,
  sym_range = 19,
  sym__line = 20,
  sym_addition = 21,
  sym_deletion = 22,
  aux_sym_diff_repeat1 = 23,
  aux_sym_file_repeat1 = 24,
  aux_sym_hunk_repeat1 = 25,
  alias_sym_context = 26,
  alias_sym_header = 27,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_diff_token1] = "diff_token1",
  [sym__newline] = "_newline",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_AT_AT_DASH] = "@@ -",
  [anon_sym_PLUS] = " +",
  [anon_sym_AT_AT] = " @@",
  [anon_sym_COMMA] = ",",
  [sym__number] = "_number",
  [anon_sym_PLUS2] = "+",
  [anon_sym_DASH] = "-",
  [sym__text] = "_text",
  [sym_filename] = "filename",
  [sym_diff] = "diff",
  [sym_file] = "file",
  [sym_hunk] = "hunk",
  [sym_range] = "range",
  [sym__line] = "_line",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [aux_sym_diff_repeat1] = "diff_repeat1",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_hunk_repeat1] = "hunk_repeat1",
  [alias_sym_context] = "context",
  [alias_sym_header] = "header",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_diff_token1] = aux_sym_diff_token1,
  [sym__newline] = sym__newline,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_AT_AT_DASH] = anon_sym_AT_AT_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__number] = sym__number,
  [anon_sym_PLUS2] = anon_sym_PLUS2,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__text] = sym__text,
  [sym_filename] = sym_filename,
  [sym_diff] = sym_diff,
  [sym_file] = sym_file,
  [sym_hunk] = sym_hunk,
  [sym_range] = sym_range,
  [sym__line] = sym__line,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [aux_sym_diff_repeat1] = aux_sym_diff_repeat1,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_hunk_repeat1] = aux_sym_hunk_repeat1,
  [alias_sym_context] = alias_sym_context,
  [alias_sym_header] = alias_sym_header,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_diff_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_diff] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diff_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hunk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_context] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_header] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_addition = 1,
  field_deletion = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_addition] = "addition",
  [field_deletion] = "deletion",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [2] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_addition, 3},
    {field_deletion, 1},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_header,
  },
  [3] = {
    [0] = alias_sym_context,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_diff_repeat1, 2,
    aux_sym_diff_repeat1,
    alias_sym_header,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '@') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(4)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '@') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(4)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(31);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == '@') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '@') ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(54);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT_AT_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT_AT_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_PLUS2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_diff] = STATE(56),
    [sym_file] = STATE(55),
    [aux_sym_diff_repeat1] = STATE(5),
    [aux_sym_diff_token1] = ACTIONS(3),
    [sym__newline] = ACTIONS(3),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_AT_AT_DASH,
    ACTIONS(13), 1,
      anon_sym_PLUS2,
    ACTIONS(16), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__text,
    STATE(2), 2,
      sym__line,
      aux_sym_hunk_repeat1,
    STATE(51), 2,
      sym_addition,
      sym_deletion,
  [24] = 7,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_AT_AT_DASH,
    ACTIONS(26), 1,
      anon_sym_PLUS2,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__text,
    STATE(2), 2,
      sym__line,
      aux_sym_hunk_repeat1,
    STATE(51), 2,
      sym_addition,
      sym_deletion,
  [48] = 5,
    ACTIONS(26), 1,
      anon_sym_PLUS2,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__text,
    STATE(3), 2,
      sym__line,
      aux_sym_hunk_repeat1,
    STATE(51), 2,
      sym_addition,
      sym_deletion,
  [66] = 5,
    ACTIONS(5), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(6), 1,
      aux_sym_diff_repeat1,
    STATE(46), 1,
      sym_file,
    ACTIONS(3), 2,
      aux_sym_diff_token1,
      sym__newline,
  [83] = 3,
    STATE(6), 1,
      aux_sym_diff_repeat1,
    ACTIONS(32), 2,
      aux_sym_diff_token1,
      sym__newline,
    ACTIONS(35), 2,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
  [95] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 4,
      anon_sym_AT_AT_DASH,
      anon_sym_PLUS2,
      anon_sym_DASH,
      sym__text,
  [105] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 4,
      anon_sym_AT_AT_DASH,
      anon_sym_PLUS2,
      anon_sym_DASH,
      sym__text,
  [115] = 3,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_AT_AT_DASH,
    STATE(9), 2,
      sym_hunk,
      aux_sym_file_repeat1,
  [126] = 3,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_AT_AT_DASH,
    STATE(9), 2,
      sym_hunk,
      aux_sym_file_repeat1,
  [137] = 3,
    ACTIONS(52), 1,
      anon_sym_AT_AT_DASH,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_hunk,
      aux_sym_file_repeat1,
  [148] = 3,
    ACTIONS(52), 1,
      anon_sym_AT_AT_DASH,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_hunk,
      aux_sym_file_repeat1,
  [159] = 1,
    ACTIONS(58), 4,
      aux_sym_diff_token1,
      sym__newline,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
  [166] = 2,
    ACTIONS(52), 1,
      anon_sym_AT_AT_DASH,
    STATE(10), 2,
      sym_hunk,
      aux_sym_file_repeat1,
  [174] = 2,
    ACTIONS(52), 1,
      anon_sym_AT_AT_DASH,
    STATE(11), 2,
      sym_hunk,
      aux_sym_file_repeat1,
  [182] = 2,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(60), 2,
      anon_sym_PLUS,
      anon_sym_AT_AT,
  [190] = 2,
    ACTIONS(52), 1,
      anon_sym_AT_AT_DASH,
    STATE(12), 2,
      sym_hunk,
      aux_sym_file_repeat1,
  [198] = 2,
    ACTIONS(64), 1,
      sym__newline,
    ACTIONS(66), 1,
      anon_sym_TAB,
  [205] = 2,
    ACTIONS(68), 1,
      sym__newline,
    ACTIONS(70), 1,
      anon_sym_TAB,
  [212] = 1,
    ACTIONS(72), 2,
      anon_sym_PLUS,
      anon_sym_AT_AT,
  [217] = 2,
    ACTIONS(74), 1,
      sym__number,
    STATE(43), 1,
      sym_range,
  [224] = 2,
    ACTIONS(74), 1,
      sym__number,
    STATE(34), 1,
      sym_range,
  [231] = 2,
    ACTIONS(76), 1,
      sym__newline,
    ACTIONS(78), 1,
      anon_sym_TAB,
  [238] = 2,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(82), 1,
      anon_sym_TAB,
  [245] = 1,
    ACTIONS(84), 1,
      sym__text,
  [249] = 1,
    ACTIONS(86), 1,
      sym__text,
  [253] = 1,
    ACTIONS(88), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [257] = 1,
    ACTIONS(90), 1,
      anon_sym_,
  [261] = 1,
    ACTIONS(92), 1,
      sym_filename,
  [265] = 1,
    ACTIONS(94), 1,
      anon_sym_,
  [269] = 1,
    ACTIONS(96), 1,
      sym__newline,
  [273] = 1,
    ACTIONS(98), 1,
      sym_filename,
  [277] = 1,
    ACTIONS(100), 1,
      sym__newline,
  [281] = 1,
    ACTIONS(102), 1,
      anon_sym_PLUS,
  [285] = 1,
    ACTIONS(104), 1,
      sym__newline,
  [289] = 1,
    ACTIONS(106), 1,
      anon_sym_,
  [293] = 1,
    ACTIONS(108), 1,
      sym__text,
  [297] = 1,
    ACTIONS(110), 1,
      sym__number,
  [301] = 1,
    ACTIONS(112), 1,
      sym__text,
  [305] = 1,
    ACTIONS(114), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [309] = 1,
    ACTIONS(116), 1,
      sym__newline,
  [313] = 1,
    ACTIONS(88), 1,
      anon_sym_DASH_DASH_DASH,
  [317] = 1,
    ACTIONS(118), 1,
      anon_sym_AT_AT,
  [321] = 1,
    ACTIONS(114), 1,
      anon_sym_DASH_DASH_DASH,
  [325] = 1,
    ACTIONS(120), 1,
      sym__newline,
  [329] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [333] = 1,
    ACTIONS(124), 1,
      sym_filename,
  [337] = 1,
    ACTIONS(126), 1,
      sym__text,
  [341] = 1,
    ACTIONS(128), 1,
      sym__text,
  [345] = 1,
    ACTIONS(130), 1,
      sym__newline,
  [349] = 1,
    ACTIONS(132), 1,
      sym__newline,
  [353] = 1,
    ACTIONS(134), 1,
      sym_filename,
  [357] = 1,
    ACTIONS(136), 1,
      sym__newline,
  [361] = 1,
    ACTIONS(138), 1,
      sym__newline,
  [365] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [369] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [373] = 1,
    ACTIONS(144), 1,
      anon_sym_,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 137,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 205,
  [SMALL_STATE(20)] = 212,
  [SMALL_STATE(21)] = 217,
  [SMALL_STATE(22)] = 224,
  [SMALL_STATE(23)] = 231,
  [SMALL_STATE(24)] = 238,
  [SMALL_STATE(25)] = 245,
  [SMALL_STATE(26)] = 249,
  [SMALL_STATE(27)] = 253,
  [SMALL_STATE(28)] = 257,
  [SMALL_STATE(29)] = 261,
  [SMALL_STATE(30)] = 265,
  [SMALL_STATE(31)] = 269,
  [SMALL_STATE(32)] = 273,
  [SMALL_STATE(33)] = 277,
  [SMALL_STATE(34)] = 281,
  [SMALL_STATE(35)] = 285,
  [SMALL_STATE(36)] = 289,
  [SMALL_STATE(37)] = 293,
  [SMALL_STATE(38)] = 297,
  [SMALL_STATE(39)] = 301,
  [SMALL_STATE(40)] = 305,
  [SMALL_STATE(41)] = 309,
  [SMALL_STATE(42)] = 313,
  [SMALL_STATE(43)] = 317,
  [SMALL_STATE(44)] = 321,
  [SMALL_STATE(45)] = 325,
  [SMALL_STATE(46)] = 329,
  [SMALL_STATE(47)] = 333,
  [SMALL_STATE(48)] = 337,
  [SMALL_STATE(49)] = 341,
  [SMALL_STATE(50)] = 345,
  [SMALL_STATE(51)] = 349,
  [SMALL_STATE(52)] = 353,
  [SMALL_STATE(53)] = 357,
  [SMALL_STATE(54)] = 361,
  [SMALL_STATE(55)] = 365,
  [SMALL_STATE(56)] = 369,
  [SMALL_STATE(57)] = 373,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(48),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(49),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(50),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 7, .production_id = 2),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 7, .production_id = 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 13),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 11),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 9),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diff, 2, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diff, 1),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_diff(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
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
