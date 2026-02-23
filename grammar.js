// Tree-sitter grammar for Minecap (.minecap)
// Minimal grammar for highlighting and basic structure.

module.exports = grammar({
  name: 'minecap',

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($._section_or_stmt),

    _section_or_stmt: $ => choice(
      $.section_header,
      $.assignment,
      $.expression_line,
      $.comment
    ),

    section_header: $ => seq(
      '[',
      $.section_name,
      ']'
    ),

    section_name: $ => /[A-Za-z0-9_.-]+/,

    assignment: $ => seq(
      field('name', $.identifier),
      '=',
      field('value', $._expr)
    ),

    expression_line: $ => $._expr,

    _expr: $ => choice(
      $.number,
      $.duration,
      $.identifier,
      $.string,
      $.call,
      $.tuple,
      $.binary_expr
    ),

    call: $ => seq(
      field('func', $.identifier),
      '(',
      optional(sep1($._expr, ',')),
      ')'
    ),

    tuple: $ => seq(
      '(',
      optional(sep1($._expr, ',')),
      ')'
    ),

    binary_expr: $ => prec.left(seq(
      $._expr,
      field('op', $.operator),
      $._expr
    )),

    operator: $ => choice(
      '==', '!=', '<=', '>=', '<', '>', '+', '-', '*', '/', '%', '^', '->', 'AND', 'OR', 'NOT'
    ),

    identifier: $ => /[A-Za-z_][A-Za-z0-9_\.\-]*/,

    number: $ => /[-+]?(?:\d+\.\d+|\d+)(?:[eE][-+]?\d+)?/,

    duration: $ => /[-+]?(?:\d+\.\d+|\d+)(?:ns|us|ms|s|m|h|d)/,

    string: $ => /"([^"\\]|\\.)*"/,

    comment: $ => /#.*/
  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
