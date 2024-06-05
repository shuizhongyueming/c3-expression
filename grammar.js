/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'exp',
  word: $ => $._identifier,
  rules: {
    source_file: $ => repeat($._expression),
    _identifier: $ => token(/[a-z_]+/),
    identifier: _ => {
      // eslint-disable-next-line max-len
      const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u2028\u2029]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
      // eslint-disable-next-line max-len
      const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u2028\u2029]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
      return token(seq(alpha, repeat(alphanumeric)));
    },
    member_expression: $ => prec(6, seq($._expression, '.', $.identifier)),
    _string_literal: $ => token(seq('"', repeat(/[^"]*/), '"')),
    _number_literal: $ => token(/\d+/),
    literal: $ => choice(
      $._string_literal,
      $._number_literal,
    ),
    call_expression: $ => prec(5, seq(
      $._expression,
      '(',
      optional(seq($._expression, repeat(seq(',', $._expression)))),
      ')'
    )),
    binary_expression: $ => prec(3, choice(
      prec.left(1, seq($._expression, '|', $._expression)),
      prec.left(1, seq($._expression, '&', $._expression)),
      prec.left(2, seq($._expression, '=', $._expression)),
      prec.left(2, seq($._expression, '<>', $._expression)),
      prec.left(2, seq($._expression, '<', $._expression)),
      prec.left(2, seq($._expression, '<=', $._expression)),
      prec.left(2, seq($._expression, '>', $._expression)),
      prec.left(2, seq($._expression, '>=', $._expression)),
      prec.left(3, seq($._expression, '+', $._expression)),
      prec.left(3, seq($._expression, '-', $._expression)),
      prec.left(4, seq($._expression, '*', $._expression)),
      prec.left(4, seq($._expression, '/', $._expression)),
      prec.left(4, seq($._expression, '%', $._expression)),
      prec.left(4, seq($._expression, '^', $._expression)),
    )),
    ternary_expression: $ => prec.left(2, seq($._expression, '?', $._expression, ':', $._expression)),
    parenthesized_expression: $ => seq('(', $._expression, ')'),
    _expression: $ => choice(
      $.identifier,
      $.member_expression,
      $.call_expression,
      $.literal,
      $.binary_expression,
      $.ternary_expression,
      $.parenthesized_expression,
    )
  }
})
