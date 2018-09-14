%{
#include <string.h>
#include <stdarg.h>
#include <stdio.h>	
#include <stdlib.h>
#include "cgen.h"
#define YYSTYPE float
extern int yylex(void);
extern int line_num;
%}


%token TK_EOF 0
%token ERROR_MESSAGE
/* keywords */
%token KW_STATIC
%token KW_TRUE
%token KW_FALSE
%token KW_DO
%token KW_IF
%token KW_NOT
%token KW_BOOLEAN
%token KW_BREAK
%token KW_ELSE
%token KW_AND
%token KW_INTEGER
%token KW_STRING
%token KW_CONTINUE
%token KW_FOR
%token KW_MOD
%token KW_CHARACTER
%token KW_VOID
%token KW_RETURN
%token KW_END
%token KW_BEGIN
%token KW_REAL
%token KW_WHILE
%token KW_OR
%token KW_MAIN
%token KW_READSTRING
%token KW_READINTEGER
%token KW_READREAL
%token KW_WRITESTRING
%token KW_WRITEINTEGER
%token KW_WRITEREAL


%token IDENTIFIER
%token CONSTANT_STRING
%token POSITIVEINT
%token REAL

%token OP_PLUS
%token OP_MINUS
%token OP_MULT
%token OP_DIV
%token OP_EQUAL
%token OP_NOTEQUAL
%token OP_LESS
%token OP_LESSOREQUAL
%token OP_GREATER
%token OP_GREATEROREQUAL
%token OP_ASSIGNMENT
%token OP_SEMICOLON
%token OP_LEFT_PARENTHESIS
%token OP_RIGHT_PARENTHESIS
%token OP_COMMA
%token OP_LEFT_BRACKET
%token OP_RIGHT_BRACKET
%token OP_AND
%token OP_OR
%token OP_NOT



%left OP_OR KW_OR
%left OP_AND KW_AND
%left OP_EQUAL OP_NOTEQUAL OP_GREATER OP_GREATEROREQUAL OP_LESSOREQUAL OP_LESS
%left OP_PLUS OP_MINUS
%left OP_MULT OP_DIV KW_MOD KW_DIV

%right OP_NOT
%right KW_NOT
%right KW_WHILE
%right KW_THEN KW_ELSE

%start program


%%

program :  variable_declaration function_declaration  main_decl					{ printf("RULE: program -> arxh \n");  };

variable_declaration : /*empty */
						|variable_declaration data_types OP_SEMICOLON          {printf("RULE: variable_decl -> telos variable \n");}



data_types: basic_data_type IDENTIFIER
			|data_types OP_COMMA IDENTIFIER 							{ printf("dhlwsh type me comma \n");}
			|matrix_decl
			|comp
			|static_comp
			
function_declaration: /*empty*/
						|header func_body function_declaration									 { printf("function \n");}
					  

main_decl: KW_MAIN OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS func_body 							 { printf("main \n");}


header :  basic_data_type IDENTIFIER OP_LEFT_PARENTHESIS parameters OP_RIGHT_PARENTHESIS     { printf("header \n");}
		 |KW_VOID IDENTIFIER OP_LEFT_PARENTHESIS parameters OP_RIGHT_PARENTHESIS             { printf("void header \n");}
 
func_body: KW_BEGIN body_code comm2 KW_END              { printf("func_body \n");}

body_code: 	/*   empty   */
			|func_data_types OP_SEMICOLON body_code 

func_data_types: basic_data_type IDENTIFIER
			|func_data_types OP_COMMA IDENTIFIER 							{ printf("dhlwsh type me comma \n");}
			|basic_data_type IDENTIFIER OP_ASSIGNMENT sinplin const
			|func_data_types OP_COMMA IDENTIFIER OP_ASSIGNMENT sinplin const



parameters: basic_data_type IDENTIFIER
			| parameters OP_COMMA basic_data_type IDENTIFIER 


matrix_decl: basic_data_type IDENTIFIER multi_bracket					{ printf("dhlwsh pinaka \n");}
			|data_types OP_COMMA IDENTIFIER multi_bracket               { printf("dhlwsh pinaka \n");}

comp:	 basic_data_type IDENTIFIER OP_ASSIGNMENT sinplin const
		|data_types OP_COMMA IDENTIFIER OP_ASSIGNMENT sinplin const

static_comp: KW_STATIC basic_data_type IDENTIFIER OP_ASSIGNMENT sinplin const
			



multi_bracket: OP_LEFT_BRACKET POSITIVEINT OP_RIGHT_BRACKET
			  | multi_bracket OP_LEFT_BRACKET POSITIVEINT OP_RIGHT_BRACKET   { printf("dhlwsh multi pinaka \n");}

basic_data_type: KW_INTEGER						{ printf("RULE: DATA_TYPE -> INTEGER \n");}
		|KW_BOOLEAN								{ printf("RULE: DATA_TYPE -> BOOLEAN \n");}
		|KW_CHARACTER 							{ printf("RULE: DATA_TYPE -> CHARACTER \n");}
		|KW_REAL 		 						{ printf("RULE: DATA_TYPE -> REAL \n");}
		|KW_STRING								{ printf("RULE: DATA_TYPE -> STRING \n");}



sinplin:
		|OP_PLUS
		|OP_MINUS

const: REAL
		|POSITIVEINT
		|KW_TRUE
		|KW_FALSE


command:simple_command												{printf("RULE: simple_command \n");}
		|complex_command											{printf("RULE: complex_command  \n");}

comm2: /*empty*/
		|simple_command comm2                                        

simple_command:OP_SEMICOLON 
		|IDENTIFIER OP_ASSIGNMENT expression OP_SEMICOLON 			{printf("RULE: v:=e \n");}
		|command_if													{printf("RULE: if_command \n");}
		|command_for												{printf("RULE: for_command \n");}
		|command_while												{printf("RULE: while_command \n");}
		|readString_command											{printf("RULE: readString_command \n");}
		|readInteger_command 										{printf("RULE: readInteger_command \n");}
		|readReal_command 											{printf("RULE: readReal_command \n");}
		|writeString_command 										{printf("RULE: writeString_command \n");}
		|writeInteger_command 										{printf("RULE: writeInteger_command \n");}
		|writeReal_command											{printf("RULE: writeReal_command \n");}
		|KW_BREAK OP_SEMICOLON 
		|KW_CONTINUE OP_SEMICOLON 
		|KW_RETURN expression OP_SEMICOLON 							{printf("RULE: return command \n");}
		|IDENTIFIER OP_LEFT_PARENTHESIS  function_variables OP_RIGHT_PARENTHESIS OP_SEMICOLON 			{printf("RULE: function command \n");}
		
		
		
		
complex_command: KW_BEGIN comm2 KW_END  

command_if:   KW_IF OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS command                            
			| KW_IF OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS KW_THEN  command       			 	         
			| KW_IF OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS KW_THEN  command KW_ELSE command
		

command_for: KW_FOR OP_LEFT_PARENTHESIS IDENTIFIER OP_ASSIGNMENT expression OP_SEMICOLON expression OP_SEMICOLON IDENTIFIER OP_ASSIGNMENT expression OP_RIGHT_PARENTHESIS command 
			|KW_FOR OP_LEFT_PARENTHESIS IDENTIFIER OP_ASSIGNMENT expression OP_SEMICOLON  IDENTIFIER OP_ASSIGNMENT expression OP_RIGHT_PARENTHESIS command 


command_while: KW_WHILE OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS command	   


function_variables: /*empty*/                           {}
		   | constant								{   }
		   | constant OP_COMMA function_variables			{   };

expression:

	constant								{ printf("RULE: expression -> constant \n"); $$ = $1; }
	|	OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS		{ printf("RULE: expression -> (expression) \n"); $$ = $2; }
	|	expression OP_PLUS expression			{ printf("RULE: expression -> expression + expression \n"); $$ = $1 + $3; }
	|	expression OP_MINUS expression			{ printf("RULE: expression -> expression - expression \n"); $$ = $1 - $3; }
	|	expression OP_MULT expression			{ printf("RULE: expression -> expression * expression \n"); $$ = $1 * $3; }
	|	expression OP_DIV expression			{ printf("RULE: expression -> expression / expression \n"); $$ = $1 / $3; }
	|	expression KW_MOD expression			{ printf("RULE: expression -> expression mod expression \n");  }
	|	expression OP_OR expression				{ printf("RULE: expression -> expression || expression \n"); $$ = $1 || $3; }
	|   expression KW_OR expression 			{ printf("RULE: expression -> expression || expression \n"); $$ = $1 || $3; }
	|	expression OP_AND expression 			{ printf("RULE: expression -> expression && expression \n"); $$ = $1 && $3; }
	|	expression KW_AND expression 			{ printf("RULE: expression -> expression && expression \n"); $$ = $1 && $3; }
	|	expression OP_EQUAL expression 			{ printf("RULE: expression -> expression == expression \n"); $$ = $1 == $3; }
	|	expression OP_NOTEQUAL expression 		{ printf("RULE: expression -> expression != expression \n"); $$ = $1 != $3; }
	|	expression OP_LESS expression 			{ printf("RULE: expression -> expression < expression \n"); $$ = $1 < $3; }
	|	expression OP_GREATER expression 		{ printf("RULE: expression -> expression > expression \n"); $$ = $1 > $3; }
	|	expression OP_LESSOREQUAL expression 	{ printf("RULE: expression -> expression <= expression \n"); $$ = $1 <= $3; }
 	|	expression OP_GREATEROREQUAL expression { printf("RULE: expression -> expression >= expression \n"); $$ = $1 >= $3; }
 	|	OP_PLUS expression 					    { printf("RULE: expression -> - expression  \n"); $$ = -$2; }
	|	OP_MINUS expression 					{ printf("RULE: expression -> + expression  \n"); $$ =  +$2; }
	|   IDENTIFIER OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS { printf("RULE: expression -> function(expression)  \n"); }
	| 	IDENTIFIER OP_LEFT_BRACKET expression OP_RIGHT_BRACKET multi_exp_bracket { printf("RULE: expression -> bracket[expression]  \n"); }
	|KW_TRUE
	|KW_FALSE

multi_exp_bracket:/*  empty   */
			  |  OP_LEFT_BRACKET expression OP_RIGHT_BRACKET multi_exp_bracket

constant: POSITIVEINT                   { printf("RULE: constant -> positiveint \n"); }
		 |REAL							{ printf("RULE: constant -> real \n"); }
		 |IDENTIFIER					{ printf("RULE: constant -> identifier \n"); }


readString_command: IDENTIFIER OP_ASSIGNMENT KW_READSTRING  OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_SEMICOLON    {printf("RULE: readString command\n");};	

readInteger_command: IDENTIFIER OP_ASSIGNMENT KW_READINTEGER  OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_SEMICOLON    {};	

readReal_command: IDENTIFIER OP_ASSIGNMENT KW_READREAL  OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_SEMICOLON    {};			

writeString_command: KW_WRITESTRING  OP_LEFT_PARENTHESIS IDENTIFIER OP_RIGHT_PARENTHESIS OP_SEMICOLON    {}
					|KW_WRITESTRING  OP_LEFT_PARENTHESIS CONSTANT_STRING OP_RIGHT_PARENTHESIS OP_SEMICOLON    {};

writeInteger_command: KW_WRITEINTEGER  OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS OP_SEMICOLON    {};

writeReal_command: KW_WRITEREAL  OP_LEFT_PARENTHESIS IDENTIFIER OP_RIGHT_PARENTHESIS OP_SEMICOLON    {};




%%

main ()
{
  if ( yyparse() == 0)
     printf("Accepted!\n");
  else
     printf("Rejected!\n");
} 

yyerror (s)
   char *s;
{
   printf("Line %d: %s\n", line_num, s);
}