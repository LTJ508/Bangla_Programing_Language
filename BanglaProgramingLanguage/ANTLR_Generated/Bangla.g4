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
    ;

variableDeclaration
    : DHORI ID '=' (INT | FLOAT) ';'
    ;

printStatement
    : DEKHAO '(' printArguments ')' ';'
    ;

printArguments
    : (ID | STRING) (',' (ID | STRING))* (',' NATUN_LINE)?
    ;

// Lexer Rules
SHURU: 'শুরু';
SHESH: 'শেষ';
DHORI: 'ধরি';
DEKHAO: 'দেখাও';
NATUN_LINE: 'নতুন_লাইন';

ID: ID_START ID_PART*; // Identifier

fragment ID_START: [অ-য়]; // First character of identifier (excluding 'ং')
fragment ID_PART: [অ-য়০-৯_ং]; // Subsequent characters of identifier

FLOAT: [০-৯]+'.'[০-৯]+; // Floating-point number
INT: [০-৯]+; // Integer number
STRING: '"' .*? '"'; // String literal

WS: [ \t\r\n]+ -> skip; // Whitespace