(procedure_definition) @function.outer
((procedure_definition) @function.inner
 (#offset! @function.inner 1 0 -1 0))

[
 (while_statement)
 (for_statement)
] @loop.outer

[
 (if_statement)
] @conditional.outer

[
 (fmperform)
 (tranperform)
] @block.outer
