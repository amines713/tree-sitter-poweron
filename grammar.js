module.exports = grammar({
  name: 'poweron',

  rules: {
    program: $ => repeat(choice(
      $.comment,
      $.multiline_comment,
			$.define_block,
			$.target_block
    )),

		multiline_comment: $ => token(seq('[', /[^\]]*/s, ']')),
    comment: $ => token(seq('#', /.*/)),

		identifier: $ => /[A-Z|a-z]+/,
		number: $ => /\d+/,
		data_type: $ => /NUMBER|CHARACTER|[0-9]+/i,

		endvar: $ => choice($.identifier, $.number),
		varset: $ => seq($.identifier, '=', choice($.number, $.identifier)),

		define_var: $ => seq($.identifier, '=', $.data_type),
		define_block: $ => seq(
			'DEFINE',
			repeat(choice($.define_var, $.comment, $.multiline_comment)),
			'END'
		),

		target_block: $ => seq(
			'TARGET',
			'=',
			$.identifier
		)
  }
})
