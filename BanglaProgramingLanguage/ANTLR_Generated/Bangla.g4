grammar Bangla;

// Parser Rules
program
    : SHURU block SHESH
    ;

block
    : '{' statement* '}'
    ;

statement: variableDeclaration
         | printStatement;

variableDeclaration: DHORI ID '=' NUMBER ';';

printStatement: DEKHAO '(' ID ')' ';';


// Lexer Rules
SHURU: 'শুরু';
SHESH: 'শেষ';
DHORI: 'ধরি';
DEKHAO: 'দেখাও';
NATUN_LINE: 'নতুন_লাইন';

ID: [অ-য়][অ-য়০-৯_]*; // Identifier
NUMBER: [০-৯]+('.'[০-৯]+)?; // Number (integer and float)
STRING: '"' .*? '"'; // String literal

WS: [ \t\r\n]+ -> skip; // Whitespace