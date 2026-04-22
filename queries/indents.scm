; All block types that contain a body use @indent.begin on the CONTAINER node.
; This makes end_block a child of the scope opener, which is required for
; @indent.branch on end_block to resolve the correct scope level.
;
; start_block (DO) is intentionally NOT listed — it is always on the same
; line as the container's first line, so the container already handles
; body indentation. Adding start_block would cause double-indentation.
[
  (define_division)
  (setup_division)
  (print_division)
  (sort_division)
  (select_division)
  (total_division)
  (letter_division)
  (procedure_definition)
  (header_block)
  (trailers)
  (if_statement)
  (while_statement)
  (for_statement)
  (fmperform)
  (tranperform)
] @indent.begin

; @indent.branch de-indents the current line to the scope's opener level.
; This is used instead of @indent.end because Neovim's built-in treesitter
; applies @indent.end to future lines (closing the scope), whereas
; @indent.branch de-indents the line itself — which is what END needs.
(end_block) @indent.branch

; ELSE sits at the same level as the opening IF.
(else) @indent.branch
