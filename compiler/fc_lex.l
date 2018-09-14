%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "fc_parser.tab.h"
#include "cgen.h"

int line_num = 1;



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


static 					{ return KW_STATIC; }
true					{ return KW_TRUE; }
false					{ return KW_FALSE; }
do 						{ return KW_DO; }
if 						{ return KW_IF; }
not						{ return KW_NOT; }
boolean					{ return KW_BOOLEAN; }
break					{ return KW_BREAK; }
then					{ return KW_THEN; }
else					{ return KW_ELSE; }
and						{ return KW_AND; }
integer 				{ return KW_INTEGER; }
string 					{ return KW_STRING; }
continue 				{ return KW_CONTINUE; }
for						{ return KW_FOR; }
mod						{ return KW_MOD; }
character				{ return KW_CHARACTER; }
void					{ return KW_VOID; }
return 					{ return KW_RETURN; }
end						{ return KW_END; }
begin 					{ return KW_BEGIN; }
real					{ return KW_REAL; }
while					{ return KW_WHILE; }
or						{ return KW_OR; }
"integer main"			{ return KW_MAIN; }

readString 				{ return KW_READSTRING;}
readInteger				{ return KW_READINTEGER;}
readReal				{ return KW_READREAL;}
writeString 			{ return KW_WRITESTRING;}
writeInteger			{ return KW_WRITEINTEGER;}
writeReal				{ return KW_WRITEREAL;}

{identifier}  			{ yylval.crepr = strdup(yytext); return IDENTIFIER;}
						  				



{constant_string}		{ yylval.crepr = strdup(yytext); return CONSTANT_STRING; }
{positive_int}			{ yylval.crepr = strdup(yytext); return POSITIVEINT; }
{real}					{ yylval.crepr = strdup(yytext); return REAL; }


"+"         			{ return OP_PLUS; }
"-"        				{ return OP_MINUS; }
"*"         			{ return OP_MULT; }
"/"         			{ return OP_DIV; }
"="         			{ return OP_EQUAL; }
">="        			{ return OP_GREATEROREQUAL; }
"<="        			{ return OP_LESSOREQUAL; }
"<"						{ return OP_LESS; }
">"         			{ return OP_GREATER; }
"!="					{ return OP_NOTEQUAL; }
":="					{ return OP_ASSIGNMENT; }
";"         			{ return OP_SEMICOLON; }
"("         			{ return OP_LEFT_PARENTHESIS; }
")"         			{ return OP_RIGHT_PARENTHESIS; }
","         			{ return OP_COMMA; }
"["         			{ return OP_LEFT_BRACKET; }
"]"         			{ return OP_RIGHT_BRACKET; }
"&&" 					{ return OP_AND; }
"||" 					{ return OP_OR; }
"!" 					{ return OP_NOT; }



"/*"					BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+"/"        BEGIN(INITIAL);

"//"					BEGIN(line_comment);
<line_comment>[^\n]*        /* eat anything in that row */
<line_comment>\n           ++line_num;  BEGIN(INITIAL);
   


{WHITESPACE}*			{	/* skip whitespace */}
\n 						++line_num;
<<EOF>> 				return TK_EOF;

.        				 { yyerror("lexical error: unrecognized literal '%s'\n", yytext); }





%%
	
