#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 1
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 12

enum {
  sym__newline = 1,
  anon_sym_PLUS_PLUS_PLUS = 2,
  anon_sym_ = 3,
  anon_sym_TAB = 4,
  aux_sym_file_token1 = 5,
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
  sym_line = 20,
  sym_addition = 21,
  sym_deletion = 22,
  aux_sym_diff_repeat1 = 23,
  aux_sym_file_repeat1 = 24,
  aux_sym_hunk_repeat1 = 25,
  alias_sym_context = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [aux_sym_file_token1] = "file_token1",
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
  [sym_line] = "line",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [aux_sym_diff_repeat1] = "diff_repeat1",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_hunk_repeat1] = "hunk_repeat1",
  [alias_sym_context] = "context",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [aux_sym_file_token1] = aux_sym_file_token1,
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
  [sym_line] = sym_line,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [aux_sym_diff_repeat1] = aux_sym_diff_repeat1,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_hunk_repeat1] = aux_sym_hunk_repeat1,
  [alias_sym_context] = alias_sym_context,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [aux_sym_file_token1] = {
    .visible = false,
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
  [sym_line] = {
    .visible = true,
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

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_addition, 3},
    {field_deletion, 1},
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_context,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '@') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(4)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '@') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(4)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '@') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == '@') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_AT_AT_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__text);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '@') ADVANCE(9);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_filename);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '@') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
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
    [sym_filename] = ACTIONS(1),
  },
  [1] = {
    [sym_diff] = STATE(40),
    [sym_file] = STATE(9),
    [aux_sym_diff_repeat1] = STATE(9),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_PLUS2,
    ACTIONS(14), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      sym__text,
    STATE(2), 2,
      sym_line,
      aux_sym_hunk_repeat1,
    STATE(35), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(9), 3,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT_DASH,
  [26] = 7,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_PLUS2,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__text,
    STATE(2), 2,
      sym_line,
      aux_sym_hunk_repeat1,
    STATE(35), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(22), 3,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT_DASH,
  [52] = 2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 6,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT_DASH,
      anon_sym_PLUS2,
      anon_sym_DASH,
      sym__text,
  [64] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 6,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT_DASH,
      anon_sym_PLUS2,
      anon_sym_DASH,
      sym__text,
  [76] = 5,
    ACTIONS(24), 1,
      anon_sym_PLUS2,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__text,
    STATE(3), 2,
      sym_line,
      aux_sym_hunk_repeat1,
    STATE(35), 2,
      sym_addition,
      sym_deletion,
  [94] = 3,
    ACTIONS(40), 1,
      anon_sym_AT_AT_DASH,
    STATE(7), 2,
      sym_hunk,
      aux_sym_file_repeat1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
  [107] = 3,
    ACTIONS(45), 1,
      anon_sym_AT_AT_DASH,
    STATE(7), 2,
      sym_hunk,
      aux_sym_file_repeat1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
  [120] = 4,
    ACTIONS(3), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_file,
      aux_sym_diff_repeat1,
  [134] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(10), 2,
      sym_file,
      aux_sym_diff_repeat1,
  [148] = 2,
    ACTIONS(45), 1,
      anon_sym_AT_AT_DASH,
    STATE(8), 2,
      sym_hunk,
      aux_sym_file_repeat1,
  [156] = 2,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_AT_AT,
  [164] = 1,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_AT_AT,
  [169] = 2,
    ACTIONS(63), 1,
      sym__number,
    STATE(17), 1,
      sym_range,
  [176] = 2,
    ACTIONS(63), 1,
      sym__number,
    STATE(24), 1,
      sym_range,
  [183] = 1,
    ACTIONS(65), 1,
      anon_sym_TAB,
  [187] = 1,
    ACTIONS(67), 1,
      anon_sym_AT_AT,
  [191] = 1,
    ACTIONS(69), 1,
      sym_filename,
  [195] = 1,
    ACTIONS(71), 1,
      anon_sym_TAB,
  [199] = 1,
    ACTIONS(73), 1,
      aux_sym_file_token1,
  [203] = 1,
    ACTIONS(75), 1,
      sym__newline,
  [207] = 1,
    ACTIONS(77), 1,
      anon_sym_,
  [211] = 1,
    ACTIONS(79), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [215] = 1,
    ACTIONS(81), 1,
      anon_sym_PLUS,
  [219] = 1,
    ACTIONS(79), 1,
      anon_sym_DASH_DASH_DASH,
  [223] = 1,
    ACTIONS(83), 1,
      sym__number,
  [227] = 1,
    ACTIONS(85), 1,
      aux_sym_file_token1,
  [231] = 1,
    ACTIONS(87), 1,
      aux_sym_file_token1,
  [235] = 1,
    ACTIONS(89), 1,
      anon_sym_,
  [239] = 1,
    ACTIONS(91), 1,
      sym__newline,
  [243] = 1,
    ACTIONS(93), 1,
      anon_sym_TAB,
  [247] = 1,
    ACTIONS(95), 1,
      sym__text,
  [251] = 1,
    ACTIONS(97), 1,
      sym__text,
  [255] = 1,
    ACTIONS(99), 1,
      sym__newline,
  [259] = 1,
    ACTIONS(101), 1,
      sym__newline,
  [263] = 1,
    ACTIONS(103), 1,
      sym_filename,
  [267] = 1,
    ACTIONS(105), 1,
      sym__newline,
  [271] = 1,
    ACTIONS(107), 1,
      sym__newline,
  [275] = 1,
    ACTIONS(109), 1,
      sym_filename,
  [279] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [283] = 1,
    ACTIONS(113), 1,
      anon_sym_,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 164,
  [SMALL_STATE(14)] = 169,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 187,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 195,
  [SMALL_STATE(20)] = 199,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 211,
  [SMALL_STATE(24)] = 215,
  [SMALL_STATE(25)] = 219,
  [SMALL_STATE(26)] = 223,
  [SMALL_STATE(27)] = 227,
  [SMALL_STATE(28)] = 231,
  [SMALL_STATE(29)] = 235,
  [SMALL_STATE(30)] = 239,
  [SMALL_STATE(31)] = 243,
  [SMALL_STATE(32)] = 247,
  [SMALL_STATE(33)] = 251,
  [SMALL_STATE(34)] = 255,
  [SMALL_STATE(35)] = 259,
  [SMALL_STATE(36)] = 263,
  [SMALL_STATE(37)] = 267,
  [SMALL_STATE(38)] = 271,
  [SMALL_STATE(39)] = 275,
  [SMALL_STATE(40)] = 279,
  [SMALL_STATE(41)] = 283,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(32),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(33),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(34),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 7, .production_id = 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 7, .production_id = 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, .production_id = 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, .production_id = 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diff, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diff_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diff_repeat1, 2), SHIFT_REPEAT(22),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diff_repeat1, 2), SHIFT_REPEAT(41),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
