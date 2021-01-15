%{
	#include<stdio.h>
	#include <string.h>
	#include "y.tab.h"
	int current = 1;
%}

%option noyywrap
%option caseless

LETTER [a-ZA-Z]
DIGIT [0-9]
NON_ZERO_DIGIT [1-9]
INTEGER [+-]?{NON_ZERO_DIGIT}{DIGIT}*
CHAR \'{LETTER}\'
STRING ["][a-zA-Z]*["]
CONSTANT {INTEGER}|{CHAR}|{STRING}
IDENTIFIER [a-zA-Z][a-ZA-Z0-9_]*

%%

let {return LET;}
func {return FUNC;}
returns {return RETURNS;}
is {return IS;}
and {return AND;}
or {return OR;}
print {return PRINT;}
while {return WHILE;}
if {return IF;}
else {return ELSE;}
then {return THEN;}
print {return PRINT;}
scan {return SCAN;}
integer {return INTEGER;}
string {return STRING;}
char {return CHAR;}
boolean {return BOOLEAN;}
true {return TRUE;}
false {return FALSE;}
; {return SEMI_COLON;}
"," {return COMMA;}

"{" {return OPEN_CURLY_BRACKET;}
"}" {return CLOSED_CURLY_BRACKET;}
\( {return OPEN_ROUND_BRACKET;}
\) {return CLOSED_ROUND_BRACKET;}
\[ {return OPEN_SQUARE_BRACKET;}
\] {return CLOSED_SQUARE_BRACKET;}

\+ {return PLUS;}
\- {return MINUS;}
\* {return MUL;}
\/ {return DIV;}
\% {return PERCENT;}


{IDENTIFIER} {printf("%s id \n", yytext); return IDENTIFIER;}
{CONSTANT} {printf("%s ct \n", yytext); return CONSTANT;}

[\n\r] {current++;}
[ \t]{}

[\"]{CHAR}* {printf("%s - ERROR at line %d\n", yytext, current);}
\'[a-zA-Z]*\' {printf("%s - ERROR at line %d\n", yytext, current);}
%%