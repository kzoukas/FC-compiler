/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "fc_parser.y" /* yacc.c:339  */

#include <string.h>
#include <stdarg.h>
#include <stdio.h>	
#include <stdlib.h>
#include "cgen.h"
#define YYSTYPE float
extern int yylex(void);
extern int line_num;

#line 77 "fc_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "fc_parser.tab.h".  */
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
    ERROR_MESSAGE = 258,
    KW_STATIC = 259,
    KW_TRUE = 260,
    KW_FALSE = 261,
    KW_DO = 262,
    KW_IF = 263,
    KW_NOT = 264,
    KW_BOOLEAN = 265,
    KW_BREAK = 266,
    KW_ELSE = 267,
    KW_AND = 268,
    KW_INTEGER = 269,
    KW_STRING = 270,
    KW_CONTINUE = 271,
    KW_FOR = 272,
    KW_MOD = 273,
    KW_CHARACTER = 274,
    KW_VOID = 275,
    KW_RETURN = 276,
    KW_END = 277,
    KW_BEGIN = 278,
    KW_REAL = 279,
    KW_WHILE = 280,
    KW_OR = 281,
    KW_MAIN = 282,
    KW_READSTRING = 283,
    KW_READINTEGER = 284,
    KW_READREAL = 285,
    KW_WRITESTRING = 286,
    KW_WRITEINTEGER = 287,
    KW_WRITEREAL = 288,
    IDENTIFIER = 289,
    CONSTANT_STRING = 290,
    POSITIVEINT = 291,
    REAL = 292,
    OP_PLUS = 293,
    OP_MINUS = 294,
    OP_MULT = 295,
    OP_DIV = 296,
    OP_EQUAL = 297,
    OP_NOTEQUAL = 298,
    OP_LESS = 299,
    OP_LESSOREQUAL = 300,
    OP_GREATER = 301,
    OP_GREATEROREQUAL = 302,
    OP_ASSIGNMENT = 303,
    OP_SEMICOLON = 304,
    OP_LEFT_PARENTHESIS = 305,
    OP_RIGHT_PARENTHESIS = 306,
    OP_COMMA = 307,
    OP_LEFT_BRACKET = 308,
    OP_RIGHT_BRACKET = 309,
    OP_AND = 310,
    OP_OR = 311,
    OP_NOT = 312,
    KW_DIV = 313,
    KW_THEN = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_FC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 189 "fc_parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   687

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    92,    92,    94,    95,    99,   100,   101,   102,   103,
     105,   106,   109,   112,   113,   115,   117,   118,   120,   121,
     122,   123,   127,   128,   131,   132,   134,   135,   137,   142,
     143,   145,   146,   147,   148,   149,   153,   154,   155,   157,
     158,   159,   160,   163,   164,   166,   167,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   188,   190,   191,   192,   195,   196,   199,   202,
     203,   204,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   232,   233,   235,   236,   237,
     240,   242,   244,   246,   247,   249,   251
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TK_EOF", "error", "$undefined", "ERROR_MESSAGE", "KW_STATIC",
  "KW_TRUE", "KW_FALSE", "KW_DO", "KW_IF", "KW_NOT", "KW_BOOLEAN",
  "KW_BREAK", "KW_ELSE", "KW_AND", "KW_INTEGER", "KW_STRING",
  "KW_CONTINUE", "KW_FOR", "KW_MOD", "KW_CHARACTER", "KW_VOID",
  "KW_RETURN", "KW_END", "KW_BEGIN", "KW_REAL", "KW_WHILE", "KW_OR",
  "KW_MAIN", "KW_READSTRING", "KW_READINTEGER", "KW_READREAL",
  "KW_WRITESTRING", "KW_WRITEINTEGER", "KW_WRITEREAL", "IDENTIFIER",
  "CONSTANT_STRING", "POSITIVEINT", "REAL", "OP_PLUS", "OP_MINUS",
  "OP_MULT", "OP_DIV", "OP_EQUAL", "OP_NOTEQUAL", "OP_LESS",
  "OP_LESSOREQUAL", "OP_GREATER", "OP_GREATEROREQUAL", "OP_ASSIGNMENT",
  "OP_SEMICOLON", "OP_LEFT_PARENTHESIS", "OP_RIGHT_PARENTHESIS",
  "OP_COMMA", "OP_LEFT_BRACKET", "OP_RIGHT_BRACKET", "OP_AND", "OP_OR",
  "OP_NOT", "KW_DIV", "KW_THEN", "$accept", "program",
  "variable_declaration", "data_types", "function_declaration",
  "main_decl", "header", "func_body", "body_code", "func_data_types",
  "parameters", "matrix_decl", "comp", "static_comp", "multi_bracket",
  "basic_data_type", "sinplin", "const", "command", "comm2",
  "simple_command", "complex_command", "command_if", "command_for",
  "command_while", "function_variables", "expression", "multi_exp_bracket",
  "constant", "readString_command", "readInteger_command",
  "readReal_command", "writeString_command", "writeInteger_command",
  "writeReal_command", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -160

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -160,    22,   188,  -160,   219,  -160,  -160,  -160,  -160,    -8,
    -160,   -11,    10,    55,  -160,  -160,  -160,     9,    49,    42,
    -160,    52,    53,  -160,   219,   150,   -32,    69,   219,   -24,
      46,   638,     8,    75,  -160,    87,    36,   219,    89,    76,
      36,   -38,    92,    36,    76,    55,    77,    79,    84,    85,
      30,    90,    91,    94,   100,    45,  -160,   112,   638,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,   219,   117,
     114,   113,  -160,  -160,    26,    68,   119,   131,    26,  -160,
     219,  -160,    26,  -160,    30,  -160,  -160,   137,  -160,  -160,
      20,  -160,  -160,    30,    30,    30,   140,  -160,    30,    78,
      30,   138,   109,    74,  -160,  -160,  -160,   127,    36,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,   122,  -160,   143,  -160,
     175,   142,    30,    30,    47,    47,   210,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
    -160,    30,    30,   245,   146,   148,   280,   149,   141,   144,
     154,   315,  -160,   155,   153,    36,    26,  -160,  -160,    73,
      30,   350,   385,  -160,   639,  -160,   579,    47,    47,  -160,
    -160,    61,    61,    61,    61,    61,    61,   639,   579,   619,
     160,   161,   162,   176,   173,   181,   184,  -160,   178,    74,
      26,  -160,   638,   619,  -160,  -160,  -160,   420,  -160,   186,
    -160,  -160,  -160,  -160,  -160,   191,   192,   193,  -160,  -160,
    -160,   215,   232,   118,    30,  -160,  -160,  -160,  -160,  -160,
     619,   -25,   455,   490,  -160,    30,   211,   186,   525,   198,
    -160,   619,    30,  -160,   560,   619,  -160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    10,     1,     0,    32,    31,    35,    33,     0,
      34,     0,     0,     0,     7,     8,     9,     0,     0,     0,
       4,     0,     0,     2,    16,    10,     5,     0,     0,     6,
       0,    45,     0,     0,    11,     0,    36,     0,     0,    24,
      36,     0,     0,    36,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    45,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    16,     0,
      18,     0,    37,    38,     0,     0,     0,     0,     0,    14,
       0,    22,     0,    12,     0,    58,    59,     0,    93,    94,
      99,    97,    98,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,    69,    15,    46,    17,    19,    36,    41,
      42,    40,    39,    26,    13,    29,     0,    28,     0,    27,
       0,     0,     0,     0,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,    70,    36,     0,    30,    23,     0,
       0,     0,     0,    73,    82,    78,    80,    74,    75,    76,
      77,    83,    84,    85,    87,    86,    88,    81,    79,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    69,
       0,    20,    45,     0,    63,    43,    44,     0,    91,    95,
      68,   103,   104,   105,   106,     0,     0,     0,    61,    71,
      21,     0,    64,     0,     0,    92,   100,   101,   102,    62,
       0,    99,     0,     0,    65,     0,     0,    95,     0,     0,
      96,     0,     0,    67,     0,     0,    66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,  -160,   222,  -160,  -160,   214,   194,  -160,
     223,  -160,  -160,  -160,   235,     5,   -37,   -74,  -159,   -56,
     -31,  -160,  -160,  -160,  -160,    80,   -83,    40,   -98,  -160,
    -160,  -160,  -160,  -160,  -160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,    12,    23,    13,    25,    31,    32,
      41,    14,    15,    16,    39,    33,    74,   113,   194,    57,
     195,   196,    59,    60,    61,   153,    96,   215,    97,    62,
      63,    64,    65,    66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      58,   120,   105,    78,   117,   154,    82,    17,   119,    18,
     124,   125,   126,    79,    80,   143,    36,   146,    37,   151,
     200,    38,     3,   225,    43,   122,    19,    58,   123,    38,
      35,   109,   110,    42,   212,    88,    89,    22,    20,   161,
     162,    21,    42,    26,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    68,   177,   178,
      69,   224,   111,   112,    90,   128,    91,    92,    93,    94,
     122,   156,   233,   123,    72,    73,   236,   197,    24,   128,
      95,    46,   191,    27,    47,   118,    29,   132,   133,    48,
      49,   154,    28,   102,    50,   103,   192,    45,    51,   130,
     131,   132,   133,    30,    52,    53,    54,    55,   152,    70,
      91,    92,   144,   145,    88,    89,   210,    40,   190,   114,
      80,    71,    56,    88,    89,    76,    81,    84,    85,    77,
     222,   223,   193,    86,   104,    87,   211,   148,   149,   150,
      98,    99,   228,    90,   100,    91,    92,    93,    94,   234,
     101,   107,   221,   127,    91,    92,    93,    94,   128,    95,
       5,    58,   108,    37,     6,     7,   129,   116,    95,     8,
       9,   121,   147,   115,    10,   155,   157,   158,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   127,   140,
     160,   184,     4,   128,   185,   141,   142,   180,     5,   181,
     183,   129,     6,     7,   186,   189,   188,     8,     9,   201,
     202,   203,    10,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   127,   205,   204,   159,   208,   128,     5,
     141,   142,   206,     6,     7,   207,   129,   219,     8,   214,
     216,   217,   218,    10,   220,   229,   232,    34,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   127,    83,
      75,   163,   106,   128,    44,   141,   142,   230,     0,   209,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   127,     0,     0,   179,     0,   128,     0,
     141,   142,     0,     0,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   127,     0,
       0,   182,     0,   128,     0,   141,   142,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   127,   187,     0,     0,     0,   128,     0,
     141,   142,     0,     0,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   127,     0,
       0,   198,     0,   128,     0,   141,   142,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   127,     0,     0,     0,     0,   128,   199,
     141,   142,     0,     0,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   127,   213,
       0,     0,     0,   128,     0,   141,   142,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   127,   226,     0,     0,     0,   128,     0,
     141,   142,     0,     0,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   127,     0,
       0,     0,     0,   128,   227,   141,   142,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   127,     0,     0,   231,     0,   128,     0,
     141,   142,     0,     0,     0,     0,   129,     0,     0,     0,
       0,     0,   127,     0,     0,     0,     0,   128,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,     0,
       0,   235,     0,     0,     0,   141,   142,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    46,     0,     0,
      47,     0,     0,     0,   141,    48,    49,     0,     0,     0,
      50,     0,   192,     0,    51,     0,    46,     0,     0,    47,
      52,    53,    54,    55,    48,    49,     0,   128,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,    56,    52,
      53,    54,    55,     0,     0,     0,     0,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    56
};

static const yytype_int16 yycheck[] =
{
      31,    84,    58,    40,    78,   103,    43,     2,    82,     4,
      93,    94,    95,    51,    52,    98,    48,   100,    50,   102,
     179,    53,     0,    48,    48,    50,    34,    58,    53,    53,
      25,     5,     6,    28,   193,     5,     6,    27,    49,   122,
     123,    52,    37,    34,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    49,   141,   142,
      52,   220,    36,    37,    34,    18,    36,    37,    38,    39,
      50,   108,   231,    53,    38,    39,   235,   160,    23,    18,
      50,     8,   156,    34,    11,    80,    34,    40,    41,    16,
      17,   189,    50,    48,    21,    50,    23,    51,    25,    38,
      39,    40,    41,    50,    31,    32,    33,    34,    34,    34,
      36,    37,    34,    35,     5,     6,   190,    48,   155,    51,
      52,    34,    49,     5,     6,    36,    34,    50,    49,    53,
     213,   214,    59,    49,    22,    50,   192,    28,    29,    30,
      50,    50,   225,    34,    50,    36,    37,    38,    39,   232,
      50,    34,    34,    13,    36,    37,    38,    39,    18,    50,
      10,   192,    48,    50,    14,    15,    26,    36,    50,    19,
      20,    34,    34,    54,    24,    48,    54,    34,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    13,    49,
      48,    50,     4,    18,    50,    55,    56,    51,    10,    51,
      51,    26,    14,    15,    50,    52,    51,    19,    20,    49,
      49,    49,    24,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    13,    51,    49,    51,    49,    18,    10,
      55,    56,    51,    14,    15,    51,    26,    22,    19,    53,
      49,    49,    49,    24,    12,    34,    48,    25,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    13,    45,
      37,    51,    68,    18,    29,    55,    56,   227,    -1,   189,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    13,    -1,    -1,    51,    -1,    18,    -1,
      55,    56,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    13,    -1,
      -1,    51,    -1,    18,    -1,    55,    56,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    13,    49,    -1,    -1,    -1,    18,    -1,
      55,    56,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    13,    -1,
      -1,    51,    -1,    18,    -1,    55,    56,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    13,    -1,    -1,    -1,    -1,    18,    54,
      55,    56,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    13,    49,
      -1,    -1,    -1,    18,    -1,    55,    56,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    13,    49,    -1,    -1,    -1,    18,    -1,
      55,    56,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    13,    -1,
      -1,    -1,    -1,    18,    54,    55,    56,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    13,    -1,    -1,    51,    -1,    18,    -1,
      55,    56,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    18,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     8,    -1,    -1,
      11,    -1,    -1,    -1,    55,    16,    17,    -1,    -1,    -1,
      21,    -1,    23,    -1,    25,    -1,     8,    -1,    -1,    11,
      31,    32,    33,    34,    16,    17,    -1,    18,    -1,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    49,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    62,     0,     4,    10,    14,    15,    19,    20,
      24,    63,    64,    66,    71,    72,    73,    75,    75,    34,
      49,    52,    27,    65,    23,    67,    34,    34,    50,    34,
      50,    68,    69,    75,    64,    75,    48,    50,    53,    74,
      48,    70,    75,    48,    74,    51,     8,    11,    16,    17,
      21,    25,    31,    32,    33,    34,    49,    79,    80,    82,
      83,    84,    89,    90,    91,    92,    93,    94,    49,    52,
      34,    34,    38,    39,    76,    70,    36,    53,    76,    51,
      52,    34,    76,    67,    50,    49,    49,    50,     5,     6,
      34,    36,    37,    38,    39,    50,    86,    88,    50,    50,
      50,    50,    48,    50,    22,    79,    68,    34,    48,     5,
       6,    36,    37,    77,    51,    54,    36,    77,    75,    77,
      86,    34,    50,    53,    86,    86,    86,    13,    18,    26,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      49,    55,    56,    86,    34,    35,    86,    34,    28,    29,
      30,    86,    34,    85,    88,    48,    76,    54,    34,    51,
      48,    86,    86,    51,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    51,
      51,    51,    51,    51,    50,    50,    50,    49,    51,    52,
      76,    77,    23,    59,    78,    80,    81,    86,    51,    54,
      78,    49,    49,    49,    49,    51,    51,    51,    49,    85,
      77,    79,    78,    49,    53,    87,    49,    49,    49,    22,
      12,    34,    86,    86,    78,    48,    49,    54,    86,    34,
      87,    51,    48,    78,    86,    51,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    63,    63,
      64,    64,    65,    66,    66,    67,    68,    68,    69,    69,
      69,    69,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    75,    75,    75,    75,    75,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    83,    83,    84,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    88,    88,
      89,    90,    91,    92,    92,    93,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     2,     3,     1,     1,     1,
       0,     3,     4,     5,     5,     4,     0,     3,     2,     3,
       5,     6,     2,     4,     3,     4,     5,     6,     6,     3,
       4,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     5,     3,     5,     6,     8,    13,    11,     5,     0,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     5,     1,     1,     0,     4,     1,     1,     1,
       6,     6,     6,     5,     5,     5,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 92 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: program -> arxh \n");  }
#line 1526 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 95 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: variable_decl -> telos variable \n");}
#line 1532 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 100 "fc_parser.y" /* yacc.c:1646  */
    { printf("dhlwsh type me comma \n");}
#line 1538 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 106 "fc_parser.y" /* yacc.c:1646  */
    { printf("function \n");}
#line 1544 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 109 "fc_parser.y" /* yacc.c:1646  */
    { printf("main \n");}
#line 1550 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 112 "fc_parser.y" /* yacc.c:1646  */
    { printf("header \n");}
#line 1556 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 113 "fc_parser.y" /* yacc.c:1646  */
    { printf("void header \n");}
#line 1562 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 115 "fc_parser.y" /* yacc.c:1646  */
    { printf("func_body \n");}
#line 1568 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 121 "fc_parser.y" /* yacc.c:1646  */
    { printf("dhlwsh type me comma \n");}
#line 1574 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 131 "fc_parser.y" /* yacc.c:1646  */
    { printf("dhlwsh pinaka \n");}
#line 1580 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 132 "fc_parser.y" /* yacc.c:1646  */
    { printf("dhlwsh pinaka \n");}
#line 1586 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 143 "fc_parser.y" /* yacc.c:1646  */
    { printf("dhlwsh multi pinaka \n");}
#line 1592 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 145 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: DATA_TYPE -> INTEGER \n");}
#line 1598 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 146 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: DATA_TYPE -> BOOLEAN \n");}
#line 1604 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 147 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: DATA_TYPE -> CHARACTER \n");}
#line 1610 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 148 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: DATA_TYPE -> REAL \n");}
#line 1616 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 149 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: DATA_TYPE -> STRING \n");}
#line 1622 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 163 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: simple_command \n");}
#line 1628 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 164 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: complex_command  \n");}
#line 1634 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 170 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: v:=e \n");}
#line 1640 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 171 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: if_command \n");}
#line 1646 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 172 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: for_command \n");}
#line 1652 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 173 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: while_command \n");}
#line 1658 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 174 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: readString_command \n");}
#line 1664 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 175 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: readInteger_command \n");}
#line 1670 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 176 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: readReal_command \n");}
#line 1676 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 177 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: writeString_command \n");}
#line 1682 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 178 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: writeInteger_command \n");}
#line 1688 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 179 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: writeReal_command \n");}
#line 1694 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 182 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: return command \n");}
#line 1700 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 183 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: function command \n");}
#line 1706 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 202 "fc_parser.y" /* yacc.c:1646  */
    {}
#line 1712 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 203 "fc_parser.y" /* yacc.c:1646  */
    {   }
#line 1718 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 204 "fc_parser.y" /* yacc.c:1646  */
    {   }
#line 1724 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 208 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> constant \n"); (yyval) = (yyvsp[0]); }
#line 1730 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 209 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> (expression) \n"); (yyval) = (yyvsp[-1]); }
#line 1736 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 210 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression + expression \n"); (yyval) = (yyvsp[-2]) + (yyvsp[0]); }
#line 1742 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 211 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression - expression \n"); (yyval) = (yyvsp[-2]) - (yyvsp[0]); }
#line 1748 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 212 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression * expression \n"); (yyval) = (yyvsp[-2]) * (yyvsp[0]); }
#line 1754 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 213 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression / expression \n"); (yyval) = (yyvsp[-2]) / (yyvsp[0]); }
#line 1760 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 214 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression mod expression \n");  }
#line 1766 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 215 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression || expression \n"); (yyval) = (yyvsp[-2]) || (yyvsp[0]); }
#line 1772 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 216 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression || expression \n"); (yyval) = (yyvsp[-2]) || (yyvsp[0]); }
#line 1778 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 217 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression && expression \n"); (yyval) = (yyvsp[-2]) && (yyvsp[0]); }
#line 1784 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 218 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression && expression \n"); (yyval) = (yyvsp[-2]) && (yyvsp[0]); }
#line 1790 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 219 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression == expression \n"); (yyval) = (yyvsp[-2]) == (yyvsp[0]); }
#line 1796 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 220 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression != expression \n"); (yyval) = (yyvsp[-2]) != (yyvsp[0]); }
#line 1802 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 221 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression < expression \n"); (yyval) = (yyvsp[-2]) < (yyvsp[0]); }
#line 1808 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 222 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression > expression \n"); (yyval) = (yyvsp[-2]) > (yyvsp[0]); }
#line 1814 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 223 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression <= expression \n"); (yyval) = (yyvsp[-2]) <= (yyvsp[0]); }
#line 1820 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 224 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> expression >= expression \n"); (yyval) = (yyvsp[-2]) >= (yyvsp[0]); }
#line 1826 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 225 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> - expression  \n"); (yyval) = -(yyvsp[0]); }
#line 1832 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 226 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> + expression  \n"); (yyval) =  +(yyvsp[0]); }
#line 1838 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 227 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> function(expression)  \n"); }
#line 1844 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 228 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: expression -> bracket[expression]  \n"); }
#line 1850 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 235 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: constant -> positiveint \n"); }
#line 1856 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 236 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: constant -> real \n"); }
#line 1862 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 237 "fc_parser.y" /* yacc.c:1646  */
    { printf("RULE: constant -> identifier \n"); }
#line 1868 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 240 "fc_parser.y" /* yacc.c:1646  */
    {printf("RULE: readString command\n");}
#line 1874 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 242 "fc_parser.y" /* yacc.c:1646  */
    {}
#line 1880 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 244 "fc_parser.y" /* yacc.c:1646  */
    {}
#line 1886 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 246 "fc_parser.y" /* yacc.c:1646  */
    {}
#line 1892 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 247 "fc_parser.y" /* yacc.c:1646  */
    {}
#line 1898 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 249 "fc_parser.y" /* yacc.c:1646  */
    {}
#line 1904 "fc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 251 "fc_parser.y" /* yacc.c:1646  */
    {}
#line 1910 "fc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 1914 "fc_parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 256 "fc_parser.y" /* yacc.c:1906  */


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
