module.exports = grammar({
    name: 'poweron',

    extras: $ => [
        $.comment,
        /[\s\p{Zs}\ufeff\u2060\u200b]/,
    ],

    supertypes: $ => [
        $.expression,
        $.primary_expression,
        $.statement,
        $.define_statement,
    ],

    conflicts: $ => [
        //[$.primary_expression, $._lhs_expression],
        //        [$.keyword, $.procedure_definition],
        //        [$.keyword, $.while_statement],
        //       [$.keyword, $.for_statement],
    ],

    precedences: $ => [
        [
            'special',
            'member',
            'keyword',
            'binary_times',
            'binary_plus',
            'binary_relation',
            'binary_equality',
            'logical_and',
            'logical_or',
        ],
        ['assign', $.primary_expression],
    ],


    rules: {
        source_file: $ => seq(
            optional(
                repeat($.special_keywords),
            ),
            optional($.target_division),
            optional(
                repeat($._optional_divisions)
            ),
            optional(choice(
                $.print_division,
                $.letter_division,
            )),
            repeat($.statement),
        ),


        word: $ => $.keyword,

        keyword: $ => prec(-1, choice(
            caseInsensitive('for'),
            caseInsensitive('while'),
            caseInsensitive('if'),
            caseInsensitive('do'),
            caseInsensitive('end'),
            caseInsensitive('else'),
            caseInsensitive('then'),
            caseInsensitive('call'),
            caseInsensitive('filereadline'),
            caseInsensitive('fileopen'),
            caseInsensitive('format'),
            caseInsensitive('call'),
            caseInsensitive('suppressnewline'),
            caseInsensitive('newline'),
            caseInsensitive('segment'),
            caseInsensitive('charactersearch'),
            caseInsensitive('length'),
            caseInsensitive('value'),
            caseInsensitive('money'),
            caseInsensitive('rate'),
            caseInsensitive('datevalue'),
        )),


        _optional_divisions: $ => choice(
            $.define_division,
            $.setup_division,
            $.select_division,
            $.sort_division,
            $.total_division,
        ),

        target_division: $ => seq(
            caseInsensitive('target'),
            "=",
            $.record_type,
            optional($.record_type),
            optional($.record_type),
        ),

        define_division: $ => seq(
            caseInsensitive('define'),
            repeat($.define_statement),
            caseInsensitive('end')
        ),

        define_statement: $ => choice(
            $.include_statement,
            $.variable_declaration,
        ),

        setup_division: $ => seq(
            caseInsensitive('setup'),
            repeat($.statement),
            caseInsensitive('end')
        ),

        select_division: $ => seq(
            caseInsensitive('select'),
            //TODO: add select statemnts
            caseInsensitive('end')
        ),

        sort_division: $ => seq(
            caseInsensitive('sort'),
            //TODO: add sort statements
            caseInsensitive('end')
        ),

        letter_division: $ => seq(
            caseInsensitive('letter title'),
            '=',
            choice(
                $.string_literal,
                $.identifier,
            ),
            caseInsensitive('end')
        ),

        print_division: $ => seq(
            caseInsensitive('print'),
            caseInsensitive('title'),
            '=',
            choice(
                $.identifier,
                $.string_literal,
            ),
            repeat1($.statement),
            caseInsensitive('end')
        ),

        total_division: $ => seq(
            caseInsensitive('total'),
            //TODO: add total statements
            caseInsensitive('end')
        ),


        record_type: $ => choice(
            caseInsensitive('access'),
            caseInsensitive('account'),
            caseInsensitive('achaddenda'),
            caseInsensitive('achaddinfo'),
            caseInsensitive('achedit'),
            caseInsensitive('achitem'),
            caseInsensitive('activity'),
            caseInsensitive('agreement'),
            caseInsensitive('agreement transaction'),
            caseInsensitive('atmdialog'),
            caseInsensitive('batchachorig'),
            caseInsensitive('card'),
            caseInsensitive('cashlettor'),
            caseInsensitive('cashorder'),
            caseInsensitive('cdmdialog'),
            caseInsensitive('check'),
            caseInsensitive('checkorder'),
            caseInsensitive('collateral'),
            caseInsensitive('collateral collhold'),
            caseInsensitive('collateral document'),
            caseInsensitive('comment'),
            caseInsensitive('corptransfer'),
            caseInsensitive('cpworkcard'),
            caseInsensitive('credrep'),
            caseInsensitive('credrep item'),
            caseInsensitive('ctr'),
            caseInsensitive('ctraccount'),
            caseInsensitive('ctrbranch'),
            caseInsensitive('ctrforeign'),
            caseInsensitive('ctrperson'),
            caseInsensitive('ctrperson ctrtraninfo'),
            caseInsensitive('dealer'),
            caseInsensitive('eft'),
            caseInsensitive('bill'),
            caseInsensitive('payroll'),
            caseInsensitive('eft addendainfo'),
            caseInsensitive('escrow'),
            caseInsensitive('escrowanalysis'),
            caseInsensitive('excpaddenda'),
            caseInsensitive('excpaddinfo'),
            caseInsensitive('excpitem'),
            caseInsensitive('externalaccount'),
            caseInsensitive('externalloan'),
            caseInsensitive('fmhistory'),
            caseInsensitive('glaccount'),
            caseInsensitive('glsubaccount'),
            caseInsensitive('gltran'),
            caseInsensitive('hold'),
            caseInsensitive('household'),
            caseInsensitive('inventory'),
            caseInsensitive('invoice'),
            caseInsensitive('irs'),
            caseInsensitive('ira'),
            caseInsensitive('irs distribution'),
            caseInsensitive('loan bankruptcy pre-petitionbal'),
            caseInsensitive('lnsegment'),
            caseInsensitive('loan bankruptcy'),
            caseInsensitive('loan'),
            caseInsensitive('loanapp'),
            caseInsensitive('loanapp finance'),
            caseInsensitive('loanapp person'),
            caseInsensitive('lookup'),
            caseInsensitive('mbraddress'),
            caseInsensitive('memberrec'),
            caseInsensitive('name'),
            caseInsensitive('nonacctname'),
            caseInsensitive('note'),
            caseInsensitive('ofacdetails'),
            caseInsensitive('participant'),
            caseInsensitive('participant transaction'),
            caseInsensitive('participation'),
            caseInsensitive('pool'),
            caseInsensitive('participationloan'),
            caseInsensitive('poolloan'),
            caseInsensitive('payee'),
            caseInsensitive('pledge'),
            caseInsensitive('portfolio'),
            caseInsensitive('preference'),
            caseInsensitive('receiveditem'),
            caseInsensitive('remittance'),
            caseInsensitive('reservedplan'),
            caseInsensitive('reservedplan loan'),
            caseInsensitive('reservedplan transaction'),
            caseInsensitive('schedule'),
            caseInsensitive('share analysis'),
            caseInsensitive('share analysisgroup'),
            caseInsensitive('share analysisplan'),
            caseInsensitive('share'),
            caseInsensitive('savings'),
            caseInsensitive('site'),
            caseInsensitive('site cashordertype'),
            caseInsensitive('tracking'),
            caseInsensitive('transaction'),
            caseInsensitive('transfer'),
            caseInsensitive('user'),
            caseInsensitive('vendor'),
            caseInsensitive('westernunion'),
            caseInsensitive('wire'),
            caseInsensitive('wire beneficiaryadv'),
            caseInsensitive('wire beneficiaryfiadv'),
            caseInsensitive('wire beneficiaryfiinfo'),
            caseInsensitive('wire beneficiaryinfo'),
            caseInsensitive('wire drawdowndebitacctadv'),
            caseInsensitive('wire fitofiinfo'),
            caseInsensitive('wire intermedfiadv'),
            caseInsensitive('wire intermedfiinfo'),
            caseInsensitive('wire receiverfiinfo'),
            caseInsensitive('wire servicemessage'),
            caseInsensitive('wire uscauditinfo'),
            caseInsensitive('worklistedit'),
            caseInsensitive('worklistedit worklistfield'),
        ),

        data_type: $ => choice(
            caseInsensitive('character'),
            caseInsensitive('code'),
            caseInsensitive('date'),
            caseInsensitive('float'),
            caseInsensitive('money'),
            caseInsensitive('number'),
            caseInsensitive('rate'),
        ),

        array_type: $ => seq(
            caseInsensitive('array'),
            '(',
            $.number,
            optional(
                repeat(
                    seq(
                        ',',
                        $.number
                    )
                )
            ),
            ')'
        ),

        string_literal: $ => (seq(
            '"',
            token.immediate(repeat(prec(1, /[^"\[\]]+/))),
            '"'
        )),


        _identifier: $ => {
            const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@=#.),|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
            const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@=#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
            return prec(-1, token(seq(alpha, repeat(alphanumeric))))
        },

        identifier: $ => choice(
            $._identifier,
            $._array_identifier,
        ),

        _array_identifier: $ => prec(10, seq(
            $._identifier,
            '(',
            choice($.number, $._identifier),
            repeat(seq(
                ',',
                choice($.number, $._identifier),
            )),
            ')'
        )),

        number: $ => {
            const hex_literal = seq(
                choice('0x', '0X'),
                /[\da-fA-F](_?[\da-fA-F])*/
            )

            const decimal_digits = /\d(_?\d)*/
            const signed_integer = seq(optional(choice('-', '+')), decimal_digits)
            const exponent_part = seq(choice('e', 'E'), signed_integer)

            const binary_literal = seq(choice('0b', '0B'), /[0-1](_?[0-1])*/)

            const octal_literal = seq(choice('0o', '0O'), /[0-7](_?[0-7])*/)

            const bigint_literal = seq(choice(hex_literal, binary_literal, octal_literal, decimal_digits), 'n')

            const decimal_integer_literal = choice(
                '0',
                seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimal_digits)))
            )

            const decimal_literal = choice(
                seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
                seq('.', decimal_digits, optional(exponent_part)),
                seq(decimal_integer_literal, exponent_part),
                seq(decimal_digits),
            )

            return token(choice(
                hex_literal,
                decimal_literal,
                signed_integer,
                binary_literal,
                octal_literal,
                bigint_literal,
            ))
        },

        money: $ => {
            return token(seq(
                /[+-]?/,
                '$',
                /[0-9]+\.[0-9]{2}/
            ))
        },

        date: $ => token(choice(
            "'--/--/----'",
            "'--/--/--'",
            seq(
                "'",
                /[0-9]{2}/,
                "/",
                /[0-9]{2}/,
                "/",
                /(?:\d{4}|\d{2})/,
                "'"
            )
        )),

        rate: $ => token(seq(
            /(?:\d{3}|\d{2}|\d{1})/,
            '.',
            /(?:\d{3}|\d{2}|\d{1})/,
            '%'
        )),


        variable_declaration: $ => seq(
            $.identifier,
            '=',
            choice(
                seq($.data_type, optional($.array_type)),
                $.string_literal
            ),
        ),

        include_statement: $ => seq(
            '#',
            caseInsensitive("include"),
            $.string_literal
        ),

        database_field: $ => seq(
            $.record_type,
            ':',
            $.identifier
        ),


        special_keywords: $ => choice(
            caseInsensitive('accountchange'),
            caseInsensitive('acs'),
            caseInsensitive('atmdialog'),
            caseInsensitive('audio'),
            caseInsensitive('cardcreationwizard'),
            caseInsensitive('certificate'),
            caseInsensitive('checkdisbursedwizard'),
            caseInsensitive('collection'),
            caseInsensitive('customforms'),
            caseInsensitive('customformswindows'),
            caseInsensitive('demand'),
            caseInsensitive('excpitem'),
            caseInsensitive('homebanking'),
            caseInsensitive('mcw'),
            caseInsensitive('mcwinteractive'),
            caseInsensitive('stateless'),
            caseInsensitive('subroutine'),
            caseInsensitive('symconnect'),
            caseInsensitive('validation'),
            caseInsensitive('windows'),
            caseInsensitive('windowsprint'),
        ),

        special_function: $ => choice(
            $._fileopen,
            $._filereadline,
            $._segment,
            $._charactersearch,
            $._length,
            $._format,
            $._value,
            $._money,
            $._rate,
            $._datevalue,
        ),

        _datevalue: $ => seq(
            caseInsensitive('datevalue'),
            '(',
            $.expression,
            ')',
        ),

        _rate: $ => seq(
            caseInsensitive('rate'),
            '(',
            $.expression,
            ')',
        ),

        _money: $ => seq(
            caseInsensitive('money'),
            '(',
            $.expression,
            ')',
        ),

        _value: $ => seq(
            caseInsensitive('value'),
            '(',
            $.expression,
            //   choice($.identifier, $.string_literal),
            ')',
        ),

        _format: $ => seq(
            caseInsensitive('format'),
            '(',
            choice($.identifier, $.string_literal),
            ',',
            choice(
                $.identifier,
                $.number,
                $.money,
                $.rate,
                $.database_field,
            ),
            ')',
        ),

        _segment: $ => seq(
            caseInsensitive('segment'),
            '(',
            choice($.string_literal, $.identifier),
            ',',
            $.expression,
            ',',
            $.expression,
            ')'
        ),

        _charactersearch: $ => seq(
            caseInsensitive('charactersearch'),
            '(',
            choice($.string_literal, $.identifier),
            ',',
            choice($.string_literal, $.identifier),
            ')'
        ),

        _length: $ => seq(
            caseInsensitive('length'),
            '(',
            choice($.string_literal, $.identifier),
            ')'
        ),

        _fileopen: $ => seq(
            caseInsensitive('fileopen'),
            '(',
            choice($.identifier, $.string_literal),
            ',',
            choice($.identifier, $.string_literal),
            ',',
            choice($.identifier, $.string_literal),
            ',',
            choice($.identifier, $.string_literal),
            ',',
            choice($.identifier, $.string_literal),
            ')',
        ),

        _filereadline: $ => seq(
            caseInsensitive('filereadline'),
            '(',
            choice($.identifier, $.string_literal),
            ',',
            choice($.identifier, $.string_literal),
            ',',
            choice($.identifier, $.string_literal),
            ')'
        ),

        comment: $ => token(choice(
            seq('[', /.*/, ']'),
        )),

        expression: $ => choice(
            $.primary_expression,
            $.assignment_expression,
            $.binary_expression,
            $.include_statement,
        ),

        assignment_expression: $ => prec.left('assign', seq(
            // field('left', choice(
            //     $._lhs_expression
            // )),
            choice(
                $._lhs_expression
            ),
            '=',
            //field('right', $.expression)
            $.expression
        )),

        _lhs_expression: $ => prec.left(5, choice(
            $.identifier
        )),

        parenthesized_expression: $ => seq(
            '(',
            $.expression,
            ')'
        ),

        binary_expression: $ => choice(
            ...[
                ['AND', 'logical_and'],
                ['OR', 'logical_or'],
                ['+', 'binary_plus'],
                ['-', 'binary_plus'],
                ['*', 'binary_times'],
                ['/', 'binary_times'],
                ['=', 'binary_equality'],
                ['<>', 'binary_equality'],
                ['>', 'binary_relation'],
                ['<', 'binary_relation'],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('left', $.expression),
                    field('operator', operator),
                    field('right', $.expression)
                ))
            )
        ),

        primary_expression: $ => choice(
            $.parenthesized_expression,
            $.keyword,
            $.identifier,
            $.number,
            $.money,
            $.date,
            $.rate,
            $.string_literal,
            $.special_function
        ),

        for_statement: $ => seq(
            caseInsensitive('for'),
            //field('initializer', $.identifier),
            $.identifier,
            '=',
            choice($.number, $.identifier),
            caseInsensitive('to'),
            choice($.number, $.identifier),
            seq(
                caseInsensitive('do'),
                repeat($.statement),
                caseInsensitive('end')
            )
        ),

        while_statement: $ => seq(
            caseInsensitive('while'),
            field('condition', $.expression),
            caseInsensitive('do'),
            repeat($.statement),
            caseInsensitive('end'),
        ),

        if_statement: $ => choice(
            $._if_statement_no_block,
            $._if_statement_block,
            $._if_else_no_block,
            $._if_else_block,
        ),

        _if_statement_no_block: $ => seq(
            caseInsensitive('if'),
            $.expression,
            caseInsensitive('then'),
            $.expression
        ),

        _if_else_block: $ => prec(10, seq(
            $.if_statement,
            caseInsensitive('else'),
            caseInsensitive('do'),
            repeat($.statement),
            caseInsensitive('end')
        )),

        _if_else_no_block: $ => seq(
            $.if_statement,
            caseInsensitive('else'),
            $.statement,
        ),

        _else_if: $ => seq(
            $.if_statement,
            caseInsensitive('else'),
            $.if_statement
        ),


        _if_statement_block: $ => seq(
            caseInsensitive('if'),
            $.expression,
            caseInsensitive('then'),
            caseInsensitive('do'),
            repeat($.statement),
            caseInsensitive('end')
        ),

        statement: $ => choice(
            $.for_statement,
            $.if_statement,
            $.while_statement,
            $.expression,
            $.procedure_definition,
            $.procedure_call,
        ),

        procedure_definition: $ => seq(
            caseInsensitive('procedure '),
            $.identifier,
            seq(
                repeat($.statement),
                caseInsensitive('end')
            )

        ),

        procedure_call: $ => seq(
            caseInsensitive('call'),
            $.identifier
        ),


    }
});

function caseInsensitive(keyword) {
    return new RegExp(keyword
        .split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
    )
}
