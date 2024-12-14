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
    | assignmentStatement ';'
    | incrementStatement ';'
    | decrementStatement ';'
    | printStatement
    | ifStatement
    | forStatement
    ;

variableDeclaration
    : DHORI ID ('=' expression)? ';'
    ;

initialization
    : assignmentStatement ';'
    ;
 
assignmentStatement
    : ID '=' expression
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
    : (ID | STRING | NATUN_LINE) (',' (ID | STRING | NATUN_LINE))* (',' NATUN_LINE)?
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
FOR: 'যতক্ষণ';

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