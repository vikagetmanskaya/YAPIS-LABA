grammar Tdl;

tdl : global_scope* function_definition* global_scope* program global_scope* EOF;
//	| global_scope* function_definition* global_scope* program global_scope* function_definition+ global_scope* EOF
//	{notifyErrorListeners("Functions may only be defined before main");};

global_scope: type NAME (ASSIGN expr)?;

program             : 'main' block;

COLUMN              : 'column';
FLOAT               : 'float';
INT                 : 'int';
ROW                 : 'row';
STRING              : 'string';
TABLE               : 'table';
BOOL                : 'bool';

TRUE                : 'true';
FALSE               : 'false';

type: COLUMN | FLOAT | INT | ROW | STRING | TABLE | BOOL;

PRINT               : 'print';
SCAN                : 'scan';
IF                  : 'if';
ELSE                : 'else';
FOR                 : 'for';
WHILE               : 'while';
UNTIL               : 'until';
RETURN              : 'return';
CAST                : 'cast';
TO                  : 'to';
IN					: 'in';
FUNCTION            : 'fn';
RETURNS             : 'returns';
BEGIN               : 'begin';
END                 : 'end';


NAME                : [a-zA-Z_][a-zA-Z_0-9]* {setText(getText().append("_"));};
INTEGER_CONSTANT    : '-'?[0-9]+ ;
FLOAT_CONSTANT      : '-'?[0-9]+('.'[0-9]*) ;
STRING_LITERAL      : ('"' ( '\\"' | ~( '\r' | '\n' ))*? '"');
WS                  : [ \n\t\r]+ -> skip;
COMMENT             : '//' ~( '\r' | '\n' )* -> skip;
COMMENT_MULTILINE   : '/*' .*? '*/' -> skip;

OPEN_PARENTHESIS    : '(';
CLOSE_PARENTHESIS   : ')';
OPEN_BRACKET        : '[';
CLOSE_BRACKET       : ']';
OPEN_BRACE          : '{';
CLOSE_BRACE         : '}';


COMMA               : ',';
PLUS                : '+';
MINUS               : '-';
MULTIPLY            : '*';
DIVISION            : '/';
PIPE                : '|';

NEGATION            : '!';
EQUAL               : '==';
NOT_EQUAL           : '!=';
LESS                : '<';
GREAT               : '>';
ASSIGN              : '=';

GREAT_EQ            : '>=';
LESS_EQ             : '<=';

SEMI                : ';';

math_operator:
	  PLUS
	| MINUS
	| MULTIPLY
	| DIVISION
	| ASSIGN
	;

comparison_operator:
	  EQUAL
	| GREAT
	| GREAT_EQ
	| LESS
	| LESS_EQ
	| NOT_EQUAL
	;

op
	: comparison_operator
	| math_operator
	;

//literal_or_var: INTEGER_CONSTANT | FLOAT_CONSTANT | NAME | function_call | STRING_LITERAL;

//column_expr: literal_or_var;

row_expr: OPEN_BRACKET expr* CLOSE_BRACKET;

table_expr: OPEN_BRACE expr* CLOSE_BRACE;

if_body: IF expr block else_body?;

else_body: ELSE (if_body|block);

while_body: WHILE expr block;

until_body: UNTIL expr block;

for_body:
	  (FOR OPEN_PARENTHESIS statement? SEMI expr? SEMI expr? CLOSE_PARENTHESIS block
	| FOR statement? SEMI expr? SEMI expr? block)
	#for_body_three
	| FOR type NAME IN (NAME|function_call) block
	#for_body_in
	;

expr:
	  (CAST TO type expr|CAST expr TO type)
	#expr_cast
	
	| expr op expr
	#expr_operator
//single	
	| NEGATION expr
	#expr_negation

	| NAME
	#expr_name
	
	| function_call
	#expr_function_call
	
	| builtin_scan
	#expr_scan_call

	| expr OPEN_BRACKET expr CLOSE_BRACKET
	#expr_element_access

	| OPEN_PARENTHESIS expr CLOSE_PARENTHESIS
	#expr_parenthesis

	| table_expr
	#expr_table_expr

	| row_expr
	#expr_row_expr

	| FLOAT_CONSTANT
	#expr_float_constant
	| INTEGER_CONSTANT
	#expr_integer_constant
	| STRING_LITERAL
	#expr_string_constant
	| TRUE
	#expr_true_constant
	| FALSE
	#expr_false_constant
////////
	;

block_statement:
	  statement
	| for_body
	| while_body
	| until_body
	| if_body
	;

statement:
	  NAME ASSIGN expr
	| type NAME (ASSIGN expr)?
	| function_call
	| builtin_print
	;

print_expr: (expr | STRING_LITERAL);

print_signature: OPEN_PARENTHESIS (print_expr (COMMA print_expr)*) CLOSE_PARENTHESIS;

builtin_print: PRINT print_signature;

builtin_scan: SCAN OPEN_PARENTHESIS type CLOSE_PARENTHESIS;

ret: RETURN expr?;

block : BEGIN block_statement* ret? END;

signature_arguments  : type NAME?
	| type NAME? COMMA signature_arguments;

function_signature   : OPEN_PARENTHESIS signature_arguments? CLOSE_PARENTHESIS;

//function_declaration : type NAME function_signature;

function_definition  : FUNCTION NAME function_signature (RETURNS type)? block;

call_signature: OPEN_PARENTHESIS (expr (COMMA expr)*)? CLOSE_PARENTHESIS;

function_call : NAME call_signature;

