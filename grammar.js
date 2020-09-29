module.exports = grammar({
  name: 'diff',

  extras: $ => [ /[\t ]+/ ],

  rules: {
    // TODO(vigoux): there is some unused junk before the first header....

    diff: $ => repeat1($.file),

    _newline: $ => '\n',

    file: $ => seq(
      // TODO(vigoux): header
      swapable(file_header("+++", $), file_header("---", $)),
      $._newline,
      repeat1($.hunk)),

    hunk: $ => seq(
      // TODO(vigoux): hunk header
      "@@ -",
      field("deletion", $.range),
      " +",
      field("addition", $.range),
      " @@",
      $._newline,
      repeat1($.line)
    ),

    range: $ => choice($._number, seq($._number, ',', $._number)),

    _number: $ => /\d+/,

    line: $ => seq(choice($.addition, $.deletion, alias($._text, $.context)), $._newline),

    addition: $ => seq("+", $._text),
    deletion: $=> seq("-", $._text),

    _text: $ => /[^\n]/,

    // TODO(vigoux): that's obviously wrong...
    filename: $ => /\S/,
  }
});

function swapable(left, right) {
  return choice(seq(left, right), seq(right, left));
}

function file_header(indicator, $) {
  // TODO(vigoux): parse timestamp too
  return seq(indicator, ' ', $.filename, '\t', /.*\n/);
}
