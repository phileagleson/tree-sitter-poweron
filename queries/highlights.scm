; highlights.scm

(comment) @comment
(keyword) @keyword
(target_division) @preproc
(define_division) @preproc
(setup_division) @preproc
(print_division) @preproc
(select_division) @preproc
(sort_division) @preproc
(letter_division) @preproc
(total_division) @preproc
(record_type) @constant
(include_statement)  @include
(string_literal) @string
(data_type) @type.builtin
(array_type) @type.builtin
(number) @number
(procedure_call) @method
(procedure_definition) @keyword.function
(for_statement) @repeat
(while_statement) @repeat
(if_statement) @conditional
(date) @string
(rate) @number
(money) @string
(identifier) @variable
(procedure_definition (for_statement (identifier) @variable))
  
