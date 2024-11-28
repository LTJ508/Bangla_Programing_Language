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
    | assignment
    | ifStatement
    | forStatement
    | ioStatement
    | fileOperation
    | DEKHAO '(' expression (',' expression)* ')' ';'
    ;

variableDeclaration
    : DHORI ID ('=' expression)? ';'
    ;

assignment
    : ID ('[' expression ']')* '=' expression ';'
    ;

ifStatement
    : JODI '(' expression ')' statement (TANAHOLE statement)?
    ;

forStatement
    : JOTOKKHON '(' assignment ';' expression ';' assignment ')' block
    ;

ioStatement
    : DEKHAO '(' (expression (',' expression)*)? ')' ';'
    ;

fileOperation
    : FILE ID ';'
    | ID '=' KHULO '(' STRING ')' ';'
    | LEKHO '(' ID (',' expression)* ')' ';'
    | BONDHO '(' ID ')' ';'
    ;

expression
    : '(' expression ')'
    | expression ('*' | '/' | '+' | '-') expression
    | NUMBER
    | STRING
    | ID
    ;


// Lexer Rules
SHURU: 'শুরু';
SHESH: 'শেষ';
DHORI: 'ধরি';
JODI: 'যদি';
TANAHOLE: 'তানাহলে';
JOTOKKHON: 'যতক্ষণ';
DEKHAO: 'দেখাও';
FILE: 'ফাইল';
KHULO: 'খুলো';
LEKHO: 'লেখো';
BONDHO: 'বন্ধ';
NATUN_LINE: 'নতুন_লাইন';
OKARJOKOR: 'অকার্যকর';

ID: [অ-য়][অ-য়০-৯_]*; // Identifier
NUMBER: [০-৯]+('.'[০-৯]+)?; // Number (integer and float)
STRING: '"' .*? '"'; // String literal

WS: [ \t\r\n]+ -> skip; // Whitespace