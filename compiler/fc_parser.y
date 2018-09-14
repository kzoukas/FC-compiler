%{
#include <string.h>
#include <stdio.h>	
#include <stdlib.h>
#include "cgen.h"

extern int yylex(void);
extern int line_num;

%}

%union
{
	char* crepr;
}

%token TK_EOF 0

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
%token <crepr> KW_CHARACTER
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


%token <crepr> IDENTIFIER
%token <crepr> CONSTANT_STRING
%token <crepr> POSITIVEINT
%token <crepr> REAL

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

%type <crepr> variable_declaration data_types function_declaration main_decl header func_body
%type <crepr> body_code func_data_types parameters matrix_decl comp static_comp multi_bracket 
%type <crepr> basic_data_type sinplin const command comm2 simple_command complex_command command_if 
%type <crepr> command_for command_while readString_command readInteger_command readReal_command
%type <crepr> writeString_command writeInteger_command writeReal_command function_variables expression 
%type <crepr> multi_exp_bracket constant
 


%%

program :  variable_declaration function_declaration  main_decl	{ 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("%s \n\n", $1);
		printf("%s \n", $2);
		printf("\n\nint main()\n%s\n", $3);
	}
};

variable_declaration : /*empty */											   {$$="";}
						|variable_declaration data_types OP_SEMICOLON          {$$ = template("%s \n %s;", $1, $2); }



data_types: basic_data_type IDENTIFIER 									 {$$ = template("%s %s", $1, $2); }
			|data_types OP_COMMA IDENTIFIER 							 {$$ = template("%s, %s", $1, $3); }
			|matrix_decl												 {$$ = template("%s", $1); }		
			|comp 														 {$$ = template("%s", $1); }		
			|static_comp												 {$$ = template("%s", $1); }		
			
function_declaration: /*empty*/																{$$="";}
						|header func_body function_declaration							    {$$ = template("%s%s\n %s ", $1, $2,$3); }
					  

main_decl: KW_MAIN OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS func_body 							{$$ = template("%s", $4); }


header :  basic_data_type IDENTIFIER OP_LEFT_PARENTHESIS parameters OP_RIGHT_PARENTHESIS     {$$ = template("%s %s(%s)\n ", $1, $2 , $4); }
		 |KW_VOID IDENTIFIER OP_LEFT_PARENTHESIS parameters OP_RIGHT_PARENTHESIS             {$$ = template("void %s(%s)\n ", $2, $4); }
 
func_body: KW_BEGIN body_code comm2 KW_END              {$$ = template("{\n\t%s\t%s\n} ", $2, $3); }

body_code: 	/*   empty   */											{$$="";}
			|func_data_types OP_SEMICOLON body_code 				{ $$ = template("%s;\n\t%s \n",$1, $3);}

func_data_types: basic_data_type IDENTIFIER										{ $$ = template("%s %s",$1,$2);}
			|func_data_types OP_COMMA IDENTIFIER 								{ $$ = template("%s,%s",$1,$3);}
			|basic_data_type IDENTIFIER OP_ASSIGNMENT sinplin const 		 	{ $$ = template("%s %s= %s%s",$1,$2,$4,$5);}
			|func_data_types OP_COMMA IDENTIFIER OP_ASSIGNMENT sinplin const  	{ $$ = template("%s,%s=%s%s",$1,$3,$5,$6);}



parameters: basic_data_type IDENTIFIER											{ $$ = template("%s %s",$1,$2);}
			| parameters OP_COMMA basic_data_type IDENTIFIER            		{ $$ = template("%s,%s %s",$1,$3,$4);}


matrix_decl: basic_data_type IDENTIFIER multi_bracket					{ $$ = template("%s %s%s",$1,$2,$3);}
			|data_types OP_COMMA IDENTIFIER multi_bracket               { $$ = template("%s, %s%s",$1,$3,$4);}

comp:	 basic_data_type IDENTIFIER OP_ASSIGNMENT sinplin const 		{ $$ = template("%s %s=%s%s",$1,$2,$4,$5);}
		|data_types OP_COMMA IDENTIFIER OP_ASSIGNMENT sinplin const   	{ $$ = template("%s, %s=%s%s",$1,$3,$5,$6);}

static_comp: KW_STATIC basic_data_type IDENTIFIER OP_ASSIGNMENT sinplin const  { $$ = template("static %s %s=%s%s",$2,$3,$5,$6);}
			



multi_bracket: OP_LEFT_BRACKET POSITIVEINT OP_RIGHT_BRACKET						{$$ = template("[%s]", $2 ); }
			  | multi_bracket OP_LEFT_BRACKET POSITIVEINT OP_RIGHT_BRACKET   	{$$ = template("%s[%s]", $1 ,$3); }

basic_data_type: KW_INTEGER						{ $$ = template("int"); };
		|KW_BOOLEAN								{ $$ = template("int"); };
		|KW_CHARACTER 							{ $$ = template("char"); };
		|KW_REAL 		 						{ $$ = template("double"); };
		|KW_STRING								{ $$ = template("char"); };



sinplin: 										{$$="";}
		|OP_PLUS								{ $$ = template("+"); };
		|OP_MINUS								{ $$ = template("-"); };

const: REAL 											{ $$ = template("%s",$1);}									
		|POSITIVEINT									{ $$ = template("%s",$1);}
		|KW_TRUE										{ $$ = template("1");}
		|KW_FALSE										{ $$ = template("0");}


command:simple_command												{ $$ = template("%s",$1);}
		|complex_command											{ $$ = template("%s",$1);}

comm2: /*empty*/													{$$="";}
		|simple_command comm2                                      { $$ = template("\t%s\t%s",$1,$2);}

simple_command:OP_SEMICOLON 										{ $$ = template(";");}
		|IDENTIFIER OP_ASSIGNMENT expression OP_SEMICOLON 			{ $$ = template("%s = %s;\n",$1,$3 );}
		|command_if													{ $$ = template("%s",$1);}
		|command_for												{ $$ = template("%s",$1);}
		|command_while												{ $$ = template("%s",$1);}
		|readString_command											{ $$ = template("%s",$1);}
		|readInteger_command 										{ $$ = template("%s",$1);}
		|readReal_command 											{ $$ = template("%s",$1);}
		|writeString_command 										{ $$ = template("%s",$1);}
		|writeInteger_command 										{ $$ = template("%s",$1);}
		|writeReal_command											{ $$ = template("%s",$1);}
		|KW_BREAK OP_SEMICOLON 										{ $$ = template("break;");}
		|KW_CONTINUE OP_SEMICOLON 									{ $$ = template("continue;");}
		|KW_RETURN expression OP_SEMICOLON 							{ $$ = template("return %s;",$2);}
		|IDENTIFIER OP_LEFT_PARENTHESIS  function_variables OP_RIGHT_PARENTHESIS OP_SEMICOLON 			{ $$ = template("%s(%s);",$1,$3);}
		
		
		
		
complex_command: KW_BEGIN comm2 KW_END  						{  $$ = template("\t%s", $2 ); }

command_if:   KW_IF OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS command             					{  $$ = template("if (%s){ \n\t %s \t} \n", $3 ,$5); }              
			| KW_IF OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS command KW_ELSE command 	    {  $$ = template("if (%s){ \n\t %s }else{\n\t %s \t }\n ", $3 ,$5,$7); } 
		

command_for: KW_FOR OP_LEFT_PARENTHESIS IDENTIFIER OP_ASSIGNMENT expression OP_SEMICOLON expression OP_SEMICOLON IDENTIFIER OP_ASSIGNMENT expression OP_RIGHT_PARENTHESIS command {  $$ = template("for (%s=%s; %s; %s=%s){\n\t %s\t}\n", $3 ,$5,$7,$9,$11,$13); }
			|KW_FOR OP_LEFT_PARENTHESIS IDENTIFIER OP_ASSIGNMENT expression OP_SEMICOLON  IDENTIFIER OP_ASSIGNMENT expression OP_RIGHT_PARENTHESIS command           			{  $$ = template("for (%s=%s;%s=%s){\n\t %s\t}\n", $3 ,$5,$7,$9,$11); }


command_while: KW_WHILE OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS command	  {  $$ = template("while (%s){\n\t %s\t}\n", $3,$5); } 


function_variables: /*empty*/                           {$$="";}
		   | constant									{ $$ = template("%s",$1);}
		   | constant OP_COMMA function_variables		{ $$ = template("%s,%s",$1,$3);}

expression:

	constant													{$$ = template("%s",$1);}
	|	OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS		{$$ = template("(%s)",$2);}
	|	expression OP_PLUS expression			{  $$ = template("%s + %s", $1 ,$3); }
	|	expression OP_MINUS expression			{  $$ = template("%s - %s", $1 ,$3); }
	|	expression OP_MULT expression			{  $$ = template("%s * %s", $1 ,$3); }
	|	expression OP_DIV expression			{  $$ = template("%s / %s", $1 ,$3); }
	|	expression KW_MOD expression			{  $$ = template("%s %% %s", $1 ,$3); }
	|	expression OP_OR expression				{  $$ = template("%s || %s", $1 ,$3); }
	|   expression KW_OR expression 			{  $$ = template("%s || %s", $1 ,$3); }
	|	expression OP_AND expression 			{  $$ = template("%s && %s", $1 ,$3); }
	|	expression KW_AND expression 			{  $$ = template("%s && %s", $1 ,$3); }
	|	expression OP_EQUAL expression 			{  $$ = template("%s == %s", $1 ,$3); }
	|	expression OP_NOTEQUAL expression 		{  $$ = template("%s != %s", $1 ,$3); }
	|	expression OP_LESS expression 			{  $$ = template("%s < %s", $1 ,$3); }
	|	expression OP_GREATER expression 		{  $$ = template("%s > %s", $1 ,$3); }
	|	expression OP_LESSOREQUAL expression 	{  $$ = template("%s <= %s", $1 ,$3); }
 	|	expression OP_GREATEROREQUAL expression {  $$ = template("%s >= %s", $1 ,$3); }
 	|	OP_PLUS expression 					    {  $$ = template("+%s", $2 ); }
	|	OP_MINUS expression 					{  $$ = template("-%s", $2 ); }
	|   IDENTIFIER OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS { $$= template("%s ( %s )",$1,$3); }
	| 	IDENTIFIER OP_LEFT_BRACKET expression OP_RIGHT_BRACKET multi_exp_bracket {$$ = template("%s[%s]%s", $1 ,$3,$5); }
	|	KW_TRUE									{ $$= template("1"); }
	|	KW_FALSE								{ $$= template("0"); }

multi_exp_bracket:/*  empty   */																		{$$="";}
			  |  OP_LEFT_BRACKET expression OP_RIGHT_BRACKET multi_exp_bracket							{$$ = template("[%s] %s", $2 ,$4); }

constant: POSITIVEINT                   { $$ = template("%s",$1);}
		 |REAL							{ $$ = template("%s",$1);}
		 |IDENTIFIER					{ $$ = template("%s",$1);}


readString_command: IDENTIFIER OP_ASSIGNMENT KW_READSTRING  OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_SEMICOLON     { $$ = template("scanf(\"%%s\",%s);\n",$1); };

readInteger_command: IDENTIFIER OP_ASSIGNMENT KW_READINTEGER  OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_SEMICOLON   { $$ = template("scanf(\"%%d\",&%s);\n",$1); };

readReal_command: IDENTIFIER OP_ASSIGNMENT KW_READREAL  OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_SEMICOLON    { $$ = template("scanf(\"%%la\",&%s);\n",$1); };			

writeString_command: KW_WRITESTRING  OP_LEFT_PARENTHESIS IDENTIFIER OP_RIGHT_PARENTHESIS OP_SEMICOLON    { $$= template("printf(\"%%s\",%s);\n\n",$3 ); }
					|KW_WRITESTRING  OP_LEFT_PARENTHESIS CONSTANT_STRING OP_RIGHT_PARENTHESIS OP_SEMICOLON    { $$= template("printf(\"%%s\",%s);\n\n",$3 ); };

writeInteger_command: KW_WRITEINTEGER  OP_LEFT_PARENTHESIS expression OP_RIGHT_PARENTHESIS OP_SEMICOLON    { $$= template("printf(\"%%d\\n\", %s);\n\n",$3 ); }

writeReal_command: KW_WRITEREAL  OP_LEFT_PARENTHESIS IDENTIFIER OP_RIGHT_PARENTHESIS OP_SEMICOLON    { $$= template("printf(\"%%f\", %s);\n\n",$3 ); }




%%

