/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_FC_PARSER_TAB_H_INCLUDED
# define YY_YY_FC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_EOF = 0,
    KW_STATIC = 258,
    KW_TRUE = 259,
    KW_FALSE = 260,
    KW_DO = 261,
    KW_IF = 262,
    KW_NOT = 263,
    KW_BOOLEAN = 264,
    KW_BREAK = 265,
    KW_ELSE = 266,
    KW_AND = 267,
    KW_INTEGER = 268,
    KW_STRING = 269,
    KW_CONTINUE = 270,
    KW_FOR = 271,
    KW_MOD = 272,
    KW_CHARACTER = 273,
    KW_VOID = 274,
    KW_RETURN = 275,
    KW_END = 276,
    KW_BEGIN = 277,
    KW_REAL = 278,
    KW_WHILE = 279,
    KW_OR = 280,
    KW_MAIN = 281,
    KW_READSTRING = 282,
    KW_READINTEGER = 283,
    KW_READREAL = 284,
    KW_WRITESTRING = 285,
    KW_WRITEINTEGER = 286,
    KW_WRITEREAL = 287,
    IDENTIFIER = 288,
    CONSTANT_STRING = 289,
    POSITIVEINT = 290,
    REAL = 291,
    OP_PLUS = 292,
    OP_MINUS = 293,
    OP_MULT = 294,
    OP_DIV = 295,
    OP_EQUAL = 296,
    OP_NOTEQUAL = 297,
    OP_LESS = 298,
    OP_LESSOREQUAL = 299,
    OP_GREATER = 300,
    OP_GREATEROREQUAL = 301,
    OP_ASSIGNMENT = 302,
    OP_SEMICOLON = 303,
    OP_LEFT_PARENTHESIS = 304,
    OP_RIGHT_PARENTHESIS = 305,
    OP_COMMA = 306,
    OP_LEFT_BRACKET = 307,
    OP_RIGHT_BRACKET = 308,
    OP_AND = 309,
    OP_OR = 310,
    OP_NOT = 311,
    KW_DIV = 312,
    KW_THEN = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "fc_parser.y" /* yacc.c:1909  */

	char* crepr;

#line 118 "fc_parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_FC_PARSER_TAB_H_INCLUDED  */
