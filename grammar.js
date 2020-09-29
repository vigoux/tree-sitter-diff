const PREC_CHANGE = 10;
module.exports = grammar({
  name: 'diff',

  extras: $ => [ /[\t ]+/ ],

  rules: {
    // TODO(vigoux): there is some unused junk before the first header....
    diff: $ => repeat($.file),

    _newline: $ => '\n',

    file: $ => seq(
      swapable(file_header("+++", $), file_header("---", $)),
      repeat1($.hunk)),

    hunk: $ => seq(
      "@@ -",
      field("deletion", $.range),
      " +",
      field("addition", $.range),
      " @@",
      $._newline,
      repeat1($._line)
    ),

    range: $ => choice($._number, seq($._number, ',', $._number)),

    _number: $ => /\d+/,

    _line: $ => seq(choice($.addition, $.deletion, alias($._text, $.context)), $._newline),

    addition: $ => seq("+", $._text),
    deletion: $=> seq("-", $._text),

    _text: $ => /[^+-][^\n]*/,

    // TODO(vigoux): that's obviously wrong...
    filename: $ => /\S+/,
  }
});

function swapable(left, right) {
  return choice(seq(left, right), seq(right, left));
}

function file_header(indicator, $) {
  // TODO(vigoux): parse timestamp too
  return seq(indicator, ' ', $.filename, optional(seq('\t', $._text)), $._newline);
}
