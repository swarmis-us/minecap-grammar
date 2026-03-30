; Sections
(section_header "[" @punctuation.bracket)
(section_header "]" @punctuation.bracket)
(section_header kind: (section_identifier) @keyword)
(section_header modifier: (section_identifier) @type)
(section_header modifier: (duration) @number)
(section_header ":" @punctuation.delimiter)
(section_header target: (section_target) @namespace)

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
(boolean) @boolean

; Operators
(operator) @operator

; Comments
(comment) @comment
