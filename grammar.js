module.exports = grammar({
  name: 'poweron',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    program: $ => repeat(choice(
      $.procedure_block,
      $.define_block,
      $.target_package,
      $.setup_block,
      $.total_block
    )),

    comment: $ => token(choice(
      seq('#', /.*/),
      seq(
        '[',
        /[^\]]*/s,
        ']'
      )
    )),

    _notend: $ => /[^\]]*/,

    identifier: $ => /[A-Za-z]+/,
    _number: $ => /[0-9]+/,

    data_type: $ => choice(
      'NUMBER',
      'CHARACTER'
    ),

    string_literal: $ => token(seq(
      '"',
      repeat(/[^"]/),
      '"'
    )),

    argument_list: $ => seq(
      '(',
      optional(seq(
        choice($.identifier),
        repeat(seq(',', $.identifier))
      )),
      ')'
    ),

    function_call: $ => seq(
      $.identifier,
      $.argument_list
    ),



    assignment: $ => seq($.identifier, '=', $.data_type),

    call_statement: $ => seq('CALL ', field('name', $.identifier)),

    target_package: $ => seq(
      'TARGET',
      '=',
      $.identifier
    ),

    define_block: $ => seq(
      'DEFINE',
      repeat(choice($.assignment)),
      'END'
    ),

    procedure_block: $ => seq(
      'PROCEDURE',
      repeat(choice($.assignment, $.call_statement, $.function_call)),
      'END'
    ),

    setup_block: $ => seq(
      'SETUP',
      repeat(choice($.assignment, $.call_statement)),
      'END'
    ),

    total_block: $ => seq(
      'TOTAL',
      repeat(choice($.call_statement)),
      'END'
    )
  }
})
