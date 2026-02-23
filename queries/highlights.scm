; Sections
(section_header) @keyword
(section_name) @type

; Assignment
(assignment name: (identifier) @variable)

; Identifiers and functions
(call func: (identifier) @function)
(identifier) @variable

; Vector/tuple punctuation
(tuple "(" @operator)
(tuple ")" @operator)
(tuple "," @operator)

; Derivative and magnitude symbols
(derivative_expr "'" @operator)
(magnitude_expr "|" @operator "|" @operator)

; Literals
(number) @number
(duration) @number
(string) @string

; Operators
(operator) @operator

; Comments
(comment) @comment
