(comment) @comment
(keyword) @keyword
(special_keywords) @keyword.directive

(target_division) @function.builtin
(define_division) @function.builtin
(setup_division) @function.builtin
(print_division) @function.builtin
(select_division) @function.builtin
(sort_division) @function.builtin
(letter_division) @function.builtin
(total_division) @function.builtin

(field_name) @variable.member
(record_type) @type
(include_statement) @keyword.import
(string_literal) @string
(data_type) @type
(array_type) @type
(number) @number

(procedure_call

procedure_name: (identifier)) @function

(procedure_definition) @keyword
(while_statement) @keyword.repeat
(for_loop) @keyword.repeat
(forrecord) @keyword.repeat
(forrecordwith) @keyword.repeat
(foreachdoend) @keyword.repeat

(if_statement) @keyword.conditional

(date) @string.special
(rate) @number
(money) @constant.numeric
(poweron_function) @function.builtin
(setexp) @function

; Keep general identifier fallback last so more specific captures win
(identifier) @variable
