// Tree-sitter grammar for Minecap (.minecap)
// Minimal grammar for highlighting and basic structure.

const PREC = {
  derivative: 4,
  magnitude: 3,
  call: 3,
  binary: 1,
};

module.exports = grammar({
  name: "minecap",

  extras: ($) => [/\s/, $.comment],

  conflicts: ($) => [[$._expr, $.call]],

  rules: {
    source_file: ($) => repeat($._section_or_stmt),

    _section_or_stmt: ($) =>
      choice($.section_header, $.assignment, $.expression_line, $.comment),

    section_header: ($) => seq("[", $.section_name, "]"),

    section_name: ($) => /[A-Za-z0-9_.-]+/,

    assignment: ($) =>
      seq(field("name", $.identifier), "=", field("value", $._expr)),

    expression_line: ($) => $._expr,

    _expr: ($) =>
      choice(
        $.binary_expr,
        $.derivative_expr,
        $.magnitude_expr,
        $.call,
        $.tuple,
        $.number,
        $.duration,
        $.string,
        $.identifier,
      ),

    derivative_expr: ($) => prec(PREC.derivative, seq($._expr, "'")),

    magnitude_expr: ($) => prec(PREC.magnitude, seq("|", $._expr, "|")),

    call: ($) =>
      prec(
        PREC.call,
        seq(
          field("func", $.identifier),
          "(",
          optional(sep1($._expr, ",")),
          ")",
        ),
      ),

    tuple: ($) => seq("(", optional(sep1($._expr, ",")), ")"),

    binary_expr: ($) =>
      prec.left(PREC.binary, seq($._expr, field("op", $.operator), $._expr)),

    operator: ($) =>
      choice(
        "==",
        "!=",
        "<=",
        ">=",
        "<",
        ">",
        "+",
        "-",
        "*",
        "/",
        "%",
        "^",
        "->",
        "AND",
        "OR",
        "NOT",
      ),

    identifier: ($) => /[A-Za-z_][A-Za-z0-9_\.\-]*/,

    number: ($) => /[-+]?(?:\d+\.\d+|\d+)(?:[eE][-+]?\d+)?/,

    duration: ($) => /[-+]?(?:\d+\.\d+|\d+)(?:ns|us|ms|s|m|h|d)/,

    string: ($) => /"([^"\\]|\\.)*"/,

    comment: ($) => /#.*/,
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
