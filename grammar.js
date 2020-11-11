module.exports = grammar({
	name: 'poweron',

	extras: $ => [
		$.comment,
		/\s/
	],

	rules: {
		program: $ => repeat(choice(
			$.print_block,
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
		_notendword: $ => /[^END]*/,
		_newline: $ => '\n',
		_number: $ => /[0-9]+/,

		identifier: $ => /[A-Za-z]+/,
		end: $ => 'END',

		data_type: $ => choice(
			'NUMBER',
			'CHARACTER'
		),

		string_literal: $ => token(seq(
			'"',
			repeat(/[^"]/),
			'"'
		)),

		add_concat: $ => prec(2, seq(
			choice(
				$.string_literal,
				$.function_call,
				$.identifier
			),
			repeat(
				seq(
					'+',
					choice(
						$.string_literal,
						$.function_call,
						$.identifier
					)
				)
			)
		)),

		argument_list: $ => seq(
			'(',
			optional(
				seq(
					choice(
						$.identifier,
						$.string_literal
					),
					repeat(seq(',', $.identifier))
				)
			),
			')'
		),

		function_call: $ => seq(
			$.identifier,
			$.argument_list
		),

		assignment: $ => prec(1, seq(
			$.identifier,
			'=',
			choice(
				$._number,
				$.data_type,
				$.identifier,
				$.add_concat,
				$.function_call
			)
		)),

		call: $ => 'CALL',

		call_statement: $ => seq(
			$.call,
			choice(
				$.identifier,
				$.function_call
			)
		),

		if_statement: $ => seq(
			'IF',
			choice(
				$.assignment
			),
			'THEN DO',
			repeat(
				choice(
					$.assignment
				)
			),
			$.end
		),

		for_loop: $ => seq(
			'FOR',
			$.assignment,
			'TO',
			choice(
				$.identifier,
				$._number
			),
			'DO',
			repeat(
				choice(
					$.call_statement,
					$.assignment,
					$.if_statement
				)
			),
			$.end
		),

		target: $ => 'TARGET',
		target_package: $ => seq(
			$.target,
			'=',
			$.identifier
		),

		define: $ => 'DEFINE',
		define_block: $ => seq(
			$.define,
			repeat(choice($.assignment)),
			$.end
		),

		procedure: $ => 'PROCEDURE',
		procedure_block: $ => seq(
			$.procedure,
			repeat(
				choice(
					$.assignment,
					$.call_statement,
					$.function_call
				)
			),
			$.end
		),

		print: $ => 'PRINT',
		print_block: $ => seq(
			$.print,
			optional($.assignment),
			repeat(
				choice(
					$.identifier
				)
			),
			$.end
		),

		setup: $ => 'SETUP',
		setup_block: $ => seq(
			$.setup,
			repeat(
				choice(
					$.assignment,
					$.call_statement,
					$.for_loop
				)
			),
			$.end
		),

		total: $ => 'TOTAL',
		total_block: $ => seq(
			$.total,
			repeat(
				choice(
					$.call_statement
				)
			),
			$.end
		),

	}
})
