%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "fc_parser.tab.h"
#include "cgen.h"

int line_num = 1;

/* 
	A primitive macro facility:
	just one macro is allowed to be defined! 
*/

char* mactable[32][2];


/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

%}

identifier 		[a-zA-Z][0-9a-zA-Z_]*
digit  			[0-9]
positive_int 	[0]|[1-9][0-9]*
number  		{digit}{digit}*
real 			{positive_int}"."{number}+[Ee]?[+-]?[1-9]*?

common_chars			[^'"\\]
escape_chars			"\\n"|"\\t"|"\\r"|"\\\'"|"\\\""|"\\\\"
constant_string "\""(({common_chars}|{escape_chars})*)"\""|"'"(({common_chars}|{escape_chars})*)"'"	


WHITESPACE 		[ \t\r]

%x comment
%x line_comment


%%


static 					{ printf("Line: %d token KW_STATIC: %s\n", line_num, yytext); return KW_STATIC; }
true					{ printf("Line: %d token KW_TRUE: %s\n", line_num, yytext); return KW_TRUE; }
false					{ printf("Line: %d token KW_FALSE: %s\n", line_num, yytext); return KW_FALSE; }
do 						{ printf("Line: %d token KW_DO: %s\n", line_num, yytext); return KW_DO; }
if 						{ printf("Line: %d token KW_IF: %s\n", line_num, yytext); return KW_IF; }
not						{ printf("Line: %d token KW_NOT: %s\n", line_num, yytext); return KW_NOT; }
boolean					{ printf("Line: %d token KW_BOOLEAN: %s\n", line_num, yytext); return KW_BOOLEAN; }
break					{ printf("Line: %d token KW_BREAK: %s\n", line_num, yytext); return KW_BREAK; }
then					{ printf("Line: %d token KW_ELSE: %s\n", line_num, yytext); return KW_THEN; }
else					{ printf("Line: %d token KW_ELSE: %s\n", line_num, yytext); return KW_ELSE; }
and						{ printf("Line: %d token KW_AND: %s\n", line_num, yytext); return KW_AND; }
integer 				{ printf("Line: %d token KW_INTEGER: %s\n", line_num, yytext); return KW_INTEGER; }
string 					{ printf("Line: %d token KW_STRING: %s\n", line_num, yytext); return KW_STRING; }
continue 				{ printf("Line: %d token KW_CONTINUE: %s\n", line_num, yytext); return KW_CONTINUE; }
for						{ printf("Line: %d token KW_FOR: %s\n", line_num, yytext); return KW_FOR; }
mod						{ printf("Line: %d token KW_MOD: %s\n", line_num, yytext); return KW_MOD; }
character				{ printf("Line: %d token KW_CHARACTER: %s\n", line_num, yytext); return KW_CHARACTER; }
void					{ printf("Line: %d token KW_VOID: %s\n", line_num, yytext); return KW_VOID; }
return 					{ printf("Line: %d token KW_RETURN: %s\n", line_num, yytext); return KW_RETURN; }
end						{ printf("Line: %d token KW_END: %s\n", line_num, yytext); return KW_END; }
begin 					{ printf("Line: %d token KW_BEGIN: %s\n", line_num, yytext); return KW_BEGIN; }
real					{ printf("Line: %d token KW_REAL: %s\n", line_num, yytext); return KW_REAL; }
while					{ printf("Line: %d token KW_WHILE: %s\n", line_num, yytext); return KW_WHILE; }
or						{ printf("Line: %d token KW_OR: %s\n", line_num, yytext); return KW_OR; }
main					{ printf("Line: %d token KW_MAIN: %s\n", line_num, yytext); return KW_MAIN; }

readString 				{ printf("Line: %d token KW_READSTRING: %s\n", line_num, yytext); return KW_READSTRING;}
readInteger				{ printf("Line: %d token KW_READINTEGER: %s\n", line_num, yytext); return KW_READINTEGER;}
readReal				{ printf("Line: %d token KW_READREAL: %s\n", line_num, yytext); return KW_READREAL;}
writeString 			{ printf("Line: %d token KW_WRITESTRING: %s\n", line_num, yytext); return KW_WRITESTRING;}
writeInteger			{ printf("Line: %d token KW_WRITEINTEGER: %s\n", line_num, yytext);return KW_WRITEINTEGER;}
writeReal				{ printf("Line: %d token KW_WRITEREAL: %s\n", line_num, yytext);return KW_WRITEREAL;}

{identifier}  			{printf("Line: %d token IDENTIFIER: %s\n", line_num, yytext); return IDENTIFIER;}
						  				



{constant_string}		{printf("Line: %d token CONSTANT_STRING: %s\n", line_num, yytext); return CONSTANT_STRING; }
{positive_int}			{printf("Line: %d token POSITIVE_INT: %s\n", line_num, yytext); return POSITIVEINT; }
{real}					{printf("Line: %d token REAL: %s\n", line_num, yytext); return REAL; }


"+"         			{printf("Line: %d token OP_PLUS: %s\n", line_num, yytext); return OP_PLUS; }
"-"        				{printf("Line: %d token OP_MINUS: %s\n", line_num, yytext); return OP_MINUS; }
"*"         			{printf("Line: %d token OP_MULT: %s\n", line_num, yytext); return OP_MULT; }
"/"         			{printf("Line: %d token OP_DIV: %s\n", line_num, yytext); return OP_DIV; }
"="         			{printf("Line: %d token OP_EQUAL: %s\n", line_num, yytext); return OP_EQUAL; }
">="        			{printf("Line: %d token OP_GREATEROREQUAL: %s\n", line_num, yytext); return OP_GREATEROREQUAL; }
"<="        			{printf("Line: %d token OP_LESSOREQUAL: %s\n", line_num, yytext); return OP_LESSOREQUAL; }
"<"						{printf("Line: %d token OP_LESS: %s\n", line_num, yytext); return OP_LESS; }
">"         			{printf("Line: %d token OP_GREATER: %s\n", line_num, yytext); return OP_GREATER; }
"!="					{printf("Line: %d token OP_NOTEQUAL: %s\n", line_num, yytext); return OP_NOTEQUAL; }
":="					{printf("Line: %d token OP_ASSIGNMENT: %s\n", line_num, yytext); return OP_ASSIGNMENT; }
";"         			{printf("Line: %d token OP_SEMICOLON: %s\n", line_num, yytext); return OP_SEMICOLON; }
"("         			{printf("Line: %d token OP_LEFT_PARENTHESIS: %s\n", line_num, yytext); return OP_LEFT_PARENTHESIS; }
")"         			{printf("Line: %d token OP_RIGHT_PARENTHESIS: %s\n", line_num, yytext); return OP_RIGHT_PARENTHESIS; }
","         			{printf("Line: %d token OP_COMMA: %s\n", line_num, yytext); return OP_COMMA; }
"["         			{printf("Line: %d token OP_LEFT_BRACKET %s\n:", line_num, yytext); return OP_LEFT_BRACKET; }
"]"         			{printf("Line: %d token OP_RIGHT_BRACKET: %s\n", line_num, yytext); return OP_RIGHT_BRACKET; }
"&&" 					{printf("Line: %d token OP_AND: %s\n", line_num, yytext); return OP_AND; }
"||" 					{printf("Line: %d token OP_OR: %s\n", line_num, yytext); return OP_OR; }
"!" 					{printf("Line: %d token OP_NOT: %s\n", line_num, yytext); return OP_NOT; }



"/*"					BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++line_num;
<comment>"*"+"/"        BEGIN(INITIAL);

"//"					BEGIN(line_comment);
<line_comment>[^\n]*        /* eat anything in that row */
<line_comment>\n           ++line_num;  BEGIN(INITIAL);
   


{WHITESPACE}*			{	/* skip whitespace */}
\n 						++line_num;
<<EOF>> 				return TK_EOF;

.        				return ERROR_MESSAGE;






%%
	
