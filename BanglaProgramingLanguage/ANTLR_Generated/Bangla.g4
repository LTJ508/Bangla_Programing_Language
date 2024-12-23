grammar Bangla;

// Parser Rules
program
    : SHURU block SHESH
    ;

block
    : '{' statement* '}'
    ;

statement
    : variableDeclaration
    | arrayDeclaration
    | arrayElementAssignment
    | assignmentStatement ';'
    | incrementStatement ';'
    | decrementStatement ';'
    | printStatement
    | fileOperations
    | ifStatement
    | forStatement
    ;

variableDeclaration
    : DHORI ID ('=' expression)? ';'
    ;

arrayDeclaration
    : DHORI ID '[' arrayIndex ']' ';'
    | DHORI ID '[' arrayIndex ']' '=' '[' (expression (',' expression)*)? ']' ';'
    | DHORI ID '=' '[' (expression (',' expression)*)? ']' ';'
    ;

arrayElementAssignment
    : ID '[' arrayIndex ']' '=' expression ';'
    ;

arrayIndex
    : INT
    | ID
    ;

arrayElementAccess
    : ID '[' arrayIndex ']'
    ;

arraySizeAccess
    : ID '.সংখ্যা()'
    ;

assignmentStatement
    : ID '=' expression
    ;

initialization
    : assignmentStatement ';'
    ;

incrementStatement
    : ID '++'
    ;

decrementStatement
    : ID '--'
    ;

printStatement
    : DEKHAO '(' printArguments ')' ';'
    ;

printArguments
    : (ID | STRING | NATUN_LINE | arrayElementAccess | arraySizeAccess) (',' (ID | STRING | NATUN_LINE | arrayElementAccess | arraySizeAccess))* (',' NATUN_LINE)?
    ;

fileOperations
    : fileDeclaration
    | fileAssignment
    | fileRead
    | fileWrite
    | fileClose
    ;

fileDeclaration
    : FILE ID ('=' FILE_OPEN '(' STRING ',' (FILE_READ | FILE_WRITE) ')')? ';'
    ;

fileAssignment
    : ID '=' FILE_OPEN '(' STRING ',' (FILE_READ | FILE_WRITE) ')' ';'
    ;

fileRead
    : ID '=' FILE_READ '(' ID ')' ';'
    ;

fileWrite
    : FILE_WRITE '(' ID ',' printArguments ')' ';'
    ;

fileClose
    : FILE_CLOSE '(' ID (',' ID)* ')' ';'
    ;

ifStatement
    : IF '(' condition ')' block (ELSE_IF '(' condition ')' block)* (ELSE block)?
    ;

forStatement
    : FOR '(' (variableDeclaration | initialization | ';')? condition ';' (assignmentStatement | incrementStatement | decrementStatement)? ')' block
    ;

condition
    : operand comparisonOperator operand
    ;

expression
    : expression ('*' | '/') expression
    | expression ('+' | '-') expression
    | INT
    | FLOAT
    | STRING
    | ID
    | arrayElementAccess
    | arraySizeAccess
    | '(' expression ')'
    ;

operand
    : INT
    | FLOAT
    | ID
    | arrayElementAccess
    | arraySizeAccess
    ;

comparisonOperator
    : '>='
    | '<='
    | '>'
    | '<'
    | '=='
    | '!='
    ;

// Lexer Rules
SHURU: 'শুরু';
SHESH: 'শেষ';
DHORI: 'ধরি';
DEKHAO: 'দেখাও';
NATUN_LINE: 'নতুন_লাইন';
IF: 'যদি';
ELSE_IF: 'তানাহলে যদি';
ELSE: 'তানাহলে';
FOR: 'যতক্ষণ';
FILE: 'ফাইল';
FILE_OPEN: 'খুলো';
FILE_CLOSE: 'বন্ধ';
FILE_READ: 'পড়ো';
FILE_WRITE: 'লেখো';

ID: ID_START ID_PART*; // Identifier

fragment ID_START: [অ-য়]; // First character of identifier (excluding 'ং')
fragment ID_PART: [অ-য়০-৯_ং]; // Subsequent characters of identifier

FLOAT: [০-৯]+'.'[০-৯]+; // Floating-point number
INT: [০-৯]+; // Integer number
STRING: '"' .*? '"'; // String literal

// Comment rules
LINE_COMMENT: '//' ~[\r\n]* -> skip; // Single-line comment
BLOCK_COMMENT: '/*' .*? '*/' -> skip; // Multi-line comment

WS: [ \t\r\n]+ -> skip; // Whitespace