/**
 * @file AI assistant application
 * @author coco <enrico.acha@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'mimir',

  rules: {
    source_file: $ => repeat($.statement),

    statement: $ => choice(
      $.assignment,
      $.function_definition,
      $.expression
    ),

    assignment: $ => seq($.identifier, '=', $.expression),

    function_definition: $ => seq(
      'def', $.identifier, '(', optional($.non_empty_parameters), ')', ':', $.block
    ),

    // Ensure parameters cannot be empty
    non_empty_parameters: $ => seq($.identifier, repeat(seq(',', $.identifier))),

    // Explicitly define block to avoid ambiguity
    block: $ => prec.right(repeat1($.statement)),

    expression: $ => choice($.identifier, $.number, $.string),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: $ => /\d+/,
    string: $ => seq('"', /[^"]*/, '"')
  }
});
