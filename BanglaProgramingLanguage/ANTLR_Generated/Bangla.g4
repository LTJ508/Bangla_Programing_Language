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
    | printStatement
    | ifStatement
    ;

variableDeclaration
    : DHORI ID '=' expression ';'
    ;

printStatement
    : DEKHAO '(' printArguments ')' ';'
    ;

printArguments
    : (ID | STRING) (',' (ID | STRING))* (',' NATUN_LINE)?
    ;

ifStatement
    : IF '(' condition ')' block (ELSE_IF '(' condition ')' block)* (ELSE block)?
    ;

condition
    : operand comparisonOperator operand
    ;

expression
    : expression ('*' | '/') expression
    | expression ('+' | '-') expression
    | INT
    | FLOAT
    | ID
    | '(' expression ')'
    ;

operand
    : INT
    | FLOAT
    | ID
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

ID: ID_START ID_PART*; // Identifier

fragment ID_START: [অ-য়]; // First character of identifier (excluding 'ং')
fragment ID_PART: [অ-য়০-৯_ং]; // Subsequent characters of identifier

FLOAT: [০-৯]+'.'[০-৯]+; // Floating-point number
INT: [০-৯]+; // Integer number
STRING: '"' .*? '"'; // String literal

WS: [ \t\r\n]+ -> skip; // Whitespace