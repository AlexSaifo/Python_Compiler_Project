/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FALSE = 258,
     NONE = 259,
     TRUE = 260,
     AND = 261,
     AS = 262,
     ASSERT = 263,
     ASYNC = 264,
     AWAIT = 265,
     BREAK = 266,
     CLASS = 267,
     CONTINUE = 268,
     DEF = 269,
     DEL = 270,
     ELIF = 271,
     ELSE = 272,
     EXCEPT = 273,
     FINALLY = 274,
     FOR = 275,
     FROM = 276,
     GLOBAL = 277,
     IF = 278,
     IMPORT = 279,
     IN = 280,
     IS = 281,
     LAMBDA = 282,
     NONLOCAL = 283,
     NOT = 284,
     OR = 285,
     PASS = 286,
     RAISE = 287,
     RETURN = 288,
     TRY = 289,
     WHILE = 290,
     WITH = 291,
     YIELD = 292,
     EQUALS = 293,
     PLUS_EQUAL = 294,
     MINUS_EQUAL = 295,
     MULTIPLY_EQUAL = 296,
     DIVIDE_EQUAL = 297,
     FLOOR_DIVIDE_EQUAL = 298,
     MODULO_EQUAL = 299,
     EXPONENTIATE_EQUAL = 300,
     PLUS = 301,
     MINUS = 302,
     MULTIPLY = 303,
     DIVIDE = 304,
     FLOOR_DIVIDE = 305,
     MODULO = 306,
     EXPONENTIATE = 307,
     EQUAL_TO = 308,
     NOT_EQUAL_TO = 309,
     LESS_THAN = 310,
     GREATER_THAN = 311,
     LESS_THAN_OR_EQUAL_TO = 312,
     GREATER_THAN_OR_EQUAL_TO = 313,
     BITWISE_AND = 314,
     BITWISE_OR = 315,
     BITWISE_XOR = 316,
     BITWISE_NEGATION = 317,
     LEFT_SHIFT = 318,
     RIGHT_SHIFT = 319,
     UNARY_PLUS = 320,
     UNARY_MINUS = 321,
     REAL_NUMBER = 322,
     LEFT_PARENTHESIS = 323,
     RIGHT_PARENTHESIS = 324,
     SQUARE_LEFT_BRACKET = 325,
     SQUARE_RIGHT_BRACKET = 326,
     CURLY_LEFT_BRACKET = 327,
     CURLY_RIGHT_BRACKET = 328,
     COLON = 329,
     COMMA = 330,
     SEMICOLON = 331,
     DOT = 332,
     SINGLE_QUOTATION = 333,
     DOUBLE_QUOTATION = 334,
     BACK_SLASH = 335,
     MATCH = 336,
     CASE = 337,
     MULTILINE_STRING = 338,
     STRING_LITERAL = 339,
     NUMBER = 340,
     COMMENTS = 341,
     NEW_LINE = 342,
     INDENT = 343,
     DEDENT = 344,
     NO_CHANGES = 345,
     UNKNOWN_SYMBOL = 346,
     WHAIT_SPACE = 347,
     IDENTIFIER = 348,
     ENDMARKER = 349,
     AT_SIGN = 350,
     BITWISE_AND_EQUAL = 351,
     BITWISE_OR_EQUAL = 352,
     BITWISE_XOR_EQUAL = 353,
     BITWISE_NEGATION_EQUAL = 354,
     LEFT_SHIFT_EQUAL = 355,
     RIGHT_SHIFT_EQUAL = 356,
     EQUAL = 357,
     UMINUS = 358
   };
#endif
/* Tokens.  */
#define FALSE 258
#define NONE 259
#define TRUE 260
#define AND 261
#define AS 262
#define ASSERT 263
#define ASYNC 264
#define AWAIT 265
#define BREAK 266
#define CLASS 267
#define CONTINUE 268
#define DEF 269
#define DEL 270
#define ELIF 271
#define ELSE 272
#define EXCEPT 273
#define FINALLY 274
#define FOR 275
#define FROM 276
#define GLOBAL 277
#define IF 278
#define IMPORT 279
#define IN 280
#define IS 281
#define LAMBDA 282
#define NONLOCAL 283
#define NOT 284
#define OR 285
#define PASS 286
#define RAISE 287
#define RETURN 288
#define TRY 289
#define WHILE 290
#define WITH 291
#define YIELD 292
#define EQUALS 293
#define PLUS_EQUAL 294
#define MINUS_EQUAL 295
#define MULTIPLY_EQUAL 296
#define DIVIDE_EQUAL 297
#define FLOOR_DIVIDE_EQUAL 298
#define MODULO_EQUAL 299
#define EXPONENTIATE_EQUAL 300
#define PLUS 301
#define MINUS 302
#define MULTIPLY 303
#define DIVIDE 304
#define FLOOR_DIVIDE 305
#define MODULO 306
#define EXPONENTIATE 307
#define EQUAL_TO 308
#define NOT_EQUAL_TO 309
#define LESS_THAN 310
#define GREATER_THAN 311
#define LESS_THAN_OR_EQUAL_TO 312
#define GREATER_THAN_OR_EQUAL_TO 313
#define BITWISE_AND 314
#define BITWISE_OR 315
#define BITWISE_XOR 316
#define BITWISE_NEGATION 317
#define LEFT_SHIFT 318
#define RIGHT_SHIFT 319
#define UNARY_PLUS 320
#define UNARY_MINUS 321
#define REAL_NUMBER 322
#define LEFT_PARENTHESIS 323
#define RIGHT_PARENTHESIS 324
#define SQUARE_LEFT_BRACKET 325
#define SQUARE_RIGHT_BRACKET 326
#define CURLY_LEFT_BRACKET 327
#define CURLY_RIGHT_BRACKET 328
#define COLON 329
#define COMMA 330
#define SEMICOLON 331
#define DOT 332
#define SINGLE_QUOTATION 333
#define DOUBLE_QUOTATION 334
#define BACK_SLASH 335
#define MATCH 336
#define CASE 337
#define MULTILINE_STRING 338
#define STRING_LITERAL 339
#define NUMBER 340
#define COMMENTS 341
#define NEW_LINE 342
#define INDENT 343
#define DEDENT 344
#define NO_CHANGES 345
#define UNKNOWN_SYMBOL 346
#define WHAIT_SPACE 347
#define IDENTIFIER 348
#define ENDMARKER 349
#define AT_SIGN 350
#define BITWISE_AND_EQUAL 351
#define BITWISE_OR_EQUAL 352
#define BITWISE_XOR_EQUAL 353
#define BITWISE_NEGATION_EQUAL 354
#define LEFT_SHIFT_EQUAL 355
#define RIGHT_SHIFT_EQUAL 356
#define EQUAL 357
#define UMINUS 358




/* Copy the first part of user declarations.  */
#line 1 ".\\old_parser.y"
#line 1 ".\\old_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yydebug=1;
extern FILE *yyin;
void yyerror(const char *);
extern int yylex();



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 314 "old_parser.tab.c"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   950

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  62
/* YYNRULES -- Number of rules. */
#define YYNRULES  177
/* YYNRULES -- Number of states. */
#define YYNSTATES  308

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   105,   103,     2,   104,     2,   106,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   107,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   108
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    13,    17,    19,    21,
      23,    26,    30,    32,    35,    37,    41,    43,    45,    47,
      49,    51,    53,    55,    57,    59,    61,    63,    65,    67,
      69,    71,    73,    76,    80,    84,    88,    92,    96,   100,
     104,   108,   112,   116,   120,   124,   128,   132,   136,   140,
     144,   148,   152,   156,   160,   164,   168,   170,   172,   174,
     176,   178,   180,   182,   184,   186,   188,   190,   192,   194,
     196,   199,   202,   205,   207,   209,   213,   218,   222,   224,
     227,   229,   233,   235,   237,   240,   242,   244,   246,   248,
     250,   252,   254,   256,   261,   267,   269,   274,   278,   279,
     281,   284,   286,   288,   292,   294,   297,   301,   305,   313,
     315,   318,   323,   328,   334,   336,   338,   342,   344,   346,
     348,   353,   356,   362,   368,   373,   379,   381,   383,   387,
     389,   391,   393,   395,   403,   414,   427,   429,   433,   439,
     445,   453,   457,   459,   463,   469,   473,   475,   478,   481,
     482,   484,   488,   490,   496,   500,   502,   506,   507,   509,
     513,   520,   523,   527,   531,   535,   540,   547,   550,   557,
     561,   563,   566,   570,   575,   577,   581,   583
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     110,     0,    -1,    -1,   111,    94,    -1,   111,   114,    94,
      -1,   112,    -1,   111,   114,   112,    -1,   113,    -1,   132,
      -1,   118,    -1,   118,    86,    -1,   113,    76,   118,    -1,
      87,    -1,   114,    87,    -1,    93,    -1,   115,    75,    93,
      -1,    85,    -1,    67,    -1,    83,    -1,    84,    -1,   116,
      -1,    93,    -1,     4,    -1,     5,    -1,     3,    -1,   127,
      -1,   119,    -1,   120,    -1,   122,    -1,    86,    -1,    31,
      -1,   117,    -1,    29,   117,    -1,   119,    46,   119,    -1,
     119,    47,   119,    -1,   119,    48,   119,    -1,   119,    49,
     119,    -1,   119,    51,   119,    -1,   119,    50,   119,    -1,
     119,    52,   119,    -1,   119,    59,   119,    -1,   119,    62,
     119,    -1,   119,    60,   119,    -1,   119,    61,   119,    -1,
     119,    63,   119,    -1,   119,    64,   119,    -1,    68,   119,
      69,    -1,   119,    53,   119,    -1,   119,    54,   119,    -1,
     119,    55,   119,    -1,   119,    57,   119,    -1,   119,    56,
     119,    -1,   119,    58,   119,    -1,   119,     6,   119,    -1,
     119,    30,   119,    -1,    93,   121,   119,    -1,    39,    -1,
      40,    -1,    42,    -1,    44,    -1,    41,    -1,    45,    -1,
      43,    -1,   101,    -1,   100,    -1,    96,    -1,    99,    -1,
      97,    -1,    98,    -1,    38,    -1,    22,   115,    -1,    28,
     115,    -1,    37,   115,    -1,    11,    -1,    13,    -1,    93,
      68,    69,    -1,    93,    68,   128,    69,    -1,    93,    77,
     127,    -1,   129,    -1,   129,    75,    -1,   130,    -1,   129,
      75,   130,    -1,   119,    -1,    33,    -1,    33,   128,    -1,
     134,    -1,   154,    -1,   148,    -1,   149,    -1,   162,    -1,
     142,    -1,   163,    -1,   166,    -1,    87,    88,   111,    89,
      -1,    87,    88,   111,   114,    89,    -1,   112,    -1,   135,
     133,    87,   136,    -1,    23,   119,    74,    -1,    -1,   137,
      -1,   139,   138,    -1,   139,    -1,   138,    -1,    17,    74,
     133,    -1,   140,    -1,   139,   140,    -1,   141,   133,    87,
      -1,    16,   119,    74,    -1,    81,    93,    74,   114,    88,
     143,    89,    -1,   144,    -1,   143,   144,    -1,    82,   117,
      74,   133,    -1,    87,    88,   146,    89,    -1,    87,    88,
     146,   114,    89,    -1,   147,    -1,   147,    -1,   146,   114,
     147,    -1,   112,    -1,   125,    -1,   126,    -1,    35,   119,
      74,   145,    -1,   150,   145,    -1,    20,   115,    25,   115,
      74,    -1,    20,   115,    25,   127,    74,    -1,    87,    88,
     152,    89,    -1,    87,    88,   152,   114,    89,    -1,   153,
      -1,   153,    -1,   152,   114,   153,    -1,   112,    -1,   123,
      -1,   124,    -1,   131,    -1,    14,    93,    68,   155,    69,
      74,   151,    -1,    14,    93,    68,   155,    69,    47,    56,
      93,    74,   151,    -1,    14,    93,    68,   155,    69,    47,
      56,    68,   115,    69,    74,   151,    -1,   158,    -1,   158,
      75,   156,    -1,   158,    75,   156,    75,   158,    -1,   158,
      75,   156,    75,   157,    -1,   158,    75,   156,    75,   158,
      75,   157,    -1,   158,    75,   157,    -1,   156,    -1,   156,
      75,   158,    -1,   156,    75,   158,    75,   157,    -1,   156,
      75,   157,    -1,   157,    -1,    48,    93,    -1,    52,    93,
      -1,    -1,   159,    -1,   158,    75,   159,    -1,    93,    -1,
      93,    74,    70,   160,    71,    -1,    93,    74,   159,    -1,
     161,    -1,   160,    75,   161,    -1,    -1,    93,    -1,    70,
     161,    71,    -1,    36,   127,     7,    93,    74,   133,    -1,
     164,   165,    -1,   164,   114,   165,    -1,    34,    74,   133,
      -1,    18,    74,   133,    -1,    18,    93,    74,   133,    -1,
      18,    93,     7,    93,    74,   133,    -1,   167,   133,    -1,
      12,    93,    68,   168,    69,    74,    -1,    12,    93,    74,
      -1,   169,    -1,   169,    75,    -1,    70,   168,    71,    -1,
      70,   168,    71,    75,    -1,   170,    -1,   169,    75,   170,
      -1,   117,    -1,    93,    70,   168,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    46,    46,    47,    48,    52,    53,    56,    57,    60,
      61,    62,    66,    67,    70,    71,    74,    75,    76,    77,
      79,    79,    79,    79,    79,    79,    83,    84,    85,    86,
      87,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   117,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     137,   140,   143,   147,   149,   153,   154,   155,   158,   159,
     162,   163,   166,   170,   171,   176,   177,   178,   179,   180,
     181,   182,   183,   188,   189,   190,   192,   195,   198,   199,
     202,   203,   204,   207,   210,   211,   214,   217,   222,   225,
     226,   229,   233,   234,   235,   238,   239,   242,   243,   244,
     247,   250,   253,   254,   258,   259,   260,   263,   264,   267,
     268,   269,   270,   274,   275,   276,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   294,   298,   301,
     302,   303,   306,   307,   308,   311,   312,   314,   315,   316,
     320,   324,   325,   329,   332,   333,   334,   340,   343,   344,
     347,   348,   349,   350,   352,   353,   356,   357
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FALSE", "NONE", "TRUE", "AND", "AS",
  "ASSERT", "ASYNC", "AWAIT", "BREAK", "CLASS", "CONTINUE", "DEF", "DEL",
  "ELIF", "ELSE", "EXCEPT", "FINALLY", "FOR", "FROM", "GLOBAL", "IF",
  "IMPORT", "IN", "IS", "LAMBDA", "NONLOCAL", "NOT", "OR", "PASS", "RAISE",
  "RETURN", "TRY", "WHILE", "WITH", "YIELD", "EQUALS", "PLUS_EQUAL",
  "MINUS_EQUAL", "MULTIPLY_EQUAL", "DIVIDE_EQUAL", "FLOOR_DIVIDE_EQUAL",
  "MODULO_EQUAL", "EXPONENTIATE_EQUAL", "PLUS", "MINUS", "MULTIPLY",
  "DIVIDE", "FLOOR_DIVIDE", "MODULO", "EXPONENTIATE", "EQUAL_TO",
  "NOT_EQUAL_TO", "LESS_THAN", "GREATER_THAN", "LESS_THAN_OR_EQUAL_TO",
  "GREATER_THAN_OR_EQUAL_TO", "BITWISE_AND", "BITWISE_OR", "BITWISE_XOR",
  "BITWISE_NEGATION", "LEFT_SHIFT", "RIGHT_SHIFT", "UNARY_PLUS",
  "UNARY_MINUS", "REAL_NUMBER", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "SQUARE_LEFT_BRACKET", "SQUARE_RIGHT_BRACKET", "CURLY_LEFT_BRACKET",
  "CURLY_RIGHT_BRACKET", "COLON", "COMMA", "SEMICOLON", "DOT",
  "SINGLE_QUOTATION", "DOUBLE_QUOTATION", "BACK_SLASH", "MATCH", "CASE",
  "MULTILINE_STRING", "STRING_LITERAL", "NUMBER", "COMMENTS", "NEW_LINE",
  "INDENT", "DEDENT", "NO_CHANGES", "UNKNOWN_SYMBOL", "WHAIT_SPACE",
  "IDENTIFIER", "ENDMARKER", "AT_SIGN", "BITWISE_AND_EQUAL",
  "BITWISE_OR_EQUAL", "BITWISE_XOR_EQUAL", "BITWISE_NEGATION_EQUAL",
  "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL", "EQUAL", "'+'", "'-'", "'*'",
  "'/'", "'|'", "UMINUS", "$accept", "file", "statements", "statement",
  "simple_stmts", "new_lines_plus", "identifiers", "constant", "atom",
  "simple_stmt", "expression", "assign_statement", "assignment_operator",
  "global_stmt", "nonlocal_stmt", "yield_stmt", "break_stmt",
  "continue_stmt", "func_call", "parameters_", "parameters", "parameter",
  "return_stmt", "compound_stmt", "block", "if_stmt", "if_header",
  "elif_else_", "elif_else", "else_stmt", "elif_stmts", "elif_stmt",
  "elif_header", "match_stmt", "cases", "case", "block_iteration",
  "statements_iteration", "statement_iteration", "while_stmt", "for_stmt",
  "for_header", "block_func", "statements_func", "statement_func",
  "func_def", "def_parameters_", "def_parameter_star",
  "def_parameter_star2", "def_parameters", "def_parameter",
  "fun_generic_identifire_", "fun_generic_identifire", "with_stmt",
  "try_except", "try", "except", "def_class_stmt", "def_class_row",
  "generic_identifires_", "generic_identifires", "generic_identifire", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,    43,    45,    42,    47,   124,   358
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   109,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   114,   114,   115,   115,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     122,   123,   124,   125,   126,   127,   127,   127,   128,   128,
     129,   129,   130,   131,   131,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   133,   134,   135,   136,   136,
     137,   137,   137,   138,   139,   139,   140,   141,   142,   143,
     143,   144,   145,   145,   145,   146,   146,   147,   147,   147,
     148,   149,   150,   150,   151,   151,   151,   152,   152,   153,
     153,   153,   153,   154,   154,   154,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   157,   158,
     158,   158,   159,   159,   159,   160,   160,   161,   161,   161,
     162,   163,   163,   164,   165,   165,   165,   166,   167,   167,
     168,   168,   168,   168,   169,   169,   170,   170
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     3,     1,     3,     1,     1,     1,
       2,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     3,     4,     3,     1,     2,
       1,     3,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     1,     4,     3,     0,     1,
       2,     1,     1,     3,     1,     2,     3,     3,     7,     1,
       2,     4,     4,     5,     1,     1,     3,     1,     1,     1,
       4,     2,     5,     5,     4,     5,     1,     1,     3,     1,
       1,     1,     1,     7,    10,    12,     1,     3,     5,     5,
       7,     3,     1,     3,     5,     3,     1,     2,     2,     0,
       1,     3,     1,     5,     3,     1,     3,     0,     1,     3,
       6,     2,     3,     3,     3,     4,     6,     2,     6,     3,
       1,     2,     3,     4,     1,     3,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,    24,    22,    23,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,    17,     0,     0,    18,    19,    16,
      29,    21,     0,     0,     5,     7,    20,    31,     9,    26,
      27,    28,    25,     8,    85,     0,    90,    87,    88,     0,
      86,    89,    91,     0,    92,     0,     0,     0,    14,     0,
      70,    21,     0,    32,     0,     0,     0,     0,     0,     0,
      69,    56,    57,    60,    58,    62,    59,    61,     0,     0,
      65,    67,    68,    66,    64,    63,     0,     1,    12,     3,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,    73,    74,     0,
     117,   118,   119,   121,   114,     0,     0,   161,   167,     0,
     169,   149,     0,     0,    97,   163,     0,     0,    46,     0,
      75,    82,     0,    78,    80,    77,    55,    13,     4,     6,
      11,    53,    54,    33,    34,    35,    36,    38,    37,    39,
      47,    48,    49,    51,    50,    52,    40,    42,    43,    41,
      44,    45,     0,    98,     0,     0,     0,   162,     0,    21,
     176,     0,   170,   174,     0,     0,   152,     0,   142,   146,
     136,   150,    14,     0,     0,    15,   120,     0,     0,    76,
      79,     0,     0,     0,    96,    99,   102,   101,   104,     0,
       0,   115,   164,     0,     0,     0,     0,     0,   171,   147,
     148,     0,     0,   149,     0,   122,   123,     0,     0,    81,
      93,     0,     0,     0,   100,   105,     0,   112,     0,     0,
     165,   172,     0,   168,   175,   157,   154,     0,     0,   145,
     143,   137,   141,   151,   160,     0,     0,   109,    94,   107,
     103,   106,   113,   116,     0,   173,   177,   157,   158,     0,
     155,     0,     0,    83,     0,     0,   129,   130,   131,   132,
     133,   126,     0,   149,     0,   108,   110,   166,     0,   153,
     157,     0,     0,    71,    84,    72,     0,   144,   139,   138,
       0,   159,   156,     0,     0,     0,   127,     0,   111,     0,
     134,   124,     0,   140,     0,   125,   128,   135
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,    22,    23,   105,    25,    80,    49,    26,    27,    28,
      29,    30,    76,    31,   267,   268,   111,   112,    32,   132,
     133,   134,   269,    33,   106,    34,    35,   194,   195,   196,
     197,   198,   199,    36,   246,   247,   113,   200,   114,    37,
      38,    39,   270,   295,   271,    40,   177,   178,   179,   180,
     181,   259,   260,    41,    42,    43,   117,    44,    45,   171,
     172,   173
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -273
static const short int yypact[] =
{
     671,  -273,  -273,  -273,   -57,   -29,    51,    51,   152,   166,
    -273,    86,   152,    79,  -273,   152,    82,  -273,  -273,  -273,
    -273,   823,   154,   -54,  -273,    97,  -273,  -273,    90,   826,
    -273,  -273,  -273,  -273,  -273,   603,  -273,  -273,  -273,   425,
    -273,  -273,  -273,   -15,  -273,   603,    39,   109,  -273,   -14,
     103,    64,   662,  -273,   603,   721,    64,   173,   791,   108,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,    50,    79,
    -273,  -273,  -273,  -273,  -273,  -273,   152,  -273,  -273,  -273,
     195,    38,  -273,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,    95,  -273,    99,  -273,  -273,    96,
    -273,  -273,  -273,  -273,  -273,   -46,    17,  -273,  -273,    45,
    -273,   -22,    94,    98,  -273,  -273,   425,   100,  -273,   102,
    -273,   826,   123,   119,  -273,  -273,   826,  -273,  -273,  -273,
    -273,   165,  -273,   337,   337,   300,   300,   300,   300,   886,
     886,   886,   886,   886,   886,   886,   278,    14,     8,    15,
     236,   236,   671,   136,   528,   603,     1,  -273,    45,    69,
    -273,   127,   122,  -273,   111,   112,   128,   137,   133,  -273,
     135,  -273,    64,    84,   138,  -273,  -273,   139,    80,  -273,
     152,    21,   152,   140,  -273,  -273,  -273,   136,  -273,   603,
      61,  -273,  -273,   118,   603,   151,    45,   149,   379,  -273,
    -273,   -47,   -23,   -37,   -22,  -273,  -273,   603,   143,  -273,
    -273,   568,   756,   603,  -273,  -273,   145,  -273,   322,   153,
    -273,   159,   168,  -273,  -273,   -41,  -273,   185,   390,  -273,
     169,   171,  -273,  -273,  -273,   166,    58,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,   603,  -273,  -273,   -41,  -273,   -44,
    -273,   -56,    51,   152,    51,   155,  -273,  -273,  -273,  -273,
    -273,  -273,   -37,   -37,   174,  -273,  -273,  -273,   176,  -273,
     -41,    51,   179,   103,  -273,   103,   493,  -273,  -273,   180,
     603,  -273,  -273,    67,   390,    62,  -273,   -37,  -273,   183,
    -273,  -273,   287,  -273,   390,  -273,  -273,  -273
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -273,  -273,    92,     0,  -273,   -26,    -6,  -273,    -5,   184,
      -2,  -273,  -273,  -273,  -273,  -273,  -273,  -273,   -11,    -3,
    -273,    74,  -273,  -273,   -38,  -273,  -273,  -273,  -273,    70,
    -273,    71,  -273,  -273,  -273,    24,   146,  -273,  -155,  -273,
    -273,  -273,  -272,  -273,  -177,  -273,  -273,    57,  -195,  -208,
    -152,  -273,  -223,  -273,  -273,  -273,   157,  -273,  -273,  -143,
    -273,    66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
      24,    50,    57,   115,    53,   240,    52,   118,   203,   201,
      55,   122,   281,    58,    83,   175,   125,   116,   239,   242,
      83,    83,   300,   235,   237,   205,   174,   279,   165,   257,
     175,   280,   307,    78,   278,   115,    46,   282,    84,   110,
      79,     1,     2,     3,    84,    84,   176,   166,     1,     2,
       3,   238,   258,     1,     2,     3,   176,   292,   135,   236,
       7,   123,   243,   232,    47,   289,   131,     9,    99,    10,
     101,   176,    78,   253,   136,   204,   101,   287,   288,     9,
     139,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   303,   188,   137,    14,    15,   119,    78,   296,
     220,   184,    14,   120,   170,   168,   183,    14,    15,   130,
     243,    17,    18,    19,    20,   306,   110,   202,    17,    18,
      19,    21,    68,    17,    18,    19,   299,    68,   169,   206,
     245,    69,   123,    51,    48,   243,    69,   275,    78,    78,
     227,   301,   192,   193,    77,     1,     2,     3,   215,   123,
      54,   226,    24,   170,   110,   221,   230,   137,   218,     1,
       2,     3,    56,    81,   228,    59,    82,   121,   123,   244,
     127,     9,   129,   162,   164,   250,   163,   182,   131,    78,
     222,   185,   189,   187,   190,    84,   207,   208,     1,     2,
       3,   170,   211,   170,   209,   210,   212,     4,   213,     5,
     214,   229,   216,   217,   223,     6,   277,     7,     8,    14,
      15,   139,   231,   233,     9,   245,    10,   254,   110,    11,
      12,    13,   251,    14,   255,    17,    18,    19,   266,   256,
     274,   261,    83,   286,   272,    51,   273,   291,   290,    17,
      18,    19,   298,   294,   191,   297,   283,   304,   285,    51,
     284,   131,    14,    15,   219,   140,    84,   224,   225,   302,
     276,   241,   186,   167,   234,   293,    16,     0,    17,    18,
      19,    20,   137,     0,    83,     0,   266,     0,    21,   138,
       1,     2,     3,     0,   266,    98,    99,   100,   101,     4,
       0,     5,   266,     0,   266,     0,    83,     6,    84,     7,
       8,     0,     0,     0,     0,   262,     9,     0,    10,     0,
     263,    11,    12,    13,   264,     1,     2,     3,     0,     0,
      84,     0,     0,   107,     4,   108,     5,     0,    99,   100,
     101,     0,     6,    83,     7,     8,    85,    86,     0,     0,
       0,     9,     0,    10,    14,    15,    11,    12,    13,    98,
      99,   100,   101,   102,   103,     0,     0,    84,    16,     0,
      17,    18,    19,    20,   137,     0,   305,     0,     0,     0,
      21,     0,     1,     2,     3,     0,     0,     0,     0,    14,
      15,     0,     0,     1,     2,     3,    98,    99,   100,   101,
     102,   103,     4,    16,     5,    17,    18,    19,    20,   137,
       6,   252,     7,     8,     0,    21,     0,     0,   262,     9,
       0,    10,     0,   263,    11,    12,    13,   264,     1,     2,
       3,     0,     0,     0,     0,     0,   107,     4,   108,     5,
       0,     0,     0,     0,     0,     6,    14,     7,     8,     0,
       0,     0,     0,     0,     9,     0,    10,    14,    15,    11,
      12,    13,    17,    18,    19,     0,     0,     0,     0,     0,
       0,    16,   169,    17,    18,    19,    20,   265,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     1,     2,     3,     0,
       0,     0,     0,     0,     0,     4,    16,     5,    17,    18,
      19,    20,   109,     6,     0,     7,     8,     0,    21,     0,
       0,   262,     9,     0,    10,     0,   263,    11,    12,    13,
     264,     1,     2,     3,     0,     0,     0,     0,     0,   107,
       4,   108,     5,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     0,     0,     0,     0,     0,     9,     0,    10,
      14,    15,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     1,     2,     3,    16,     0,    17,    18,    19,    20,
       4,     0,     5,     0,     0,     0,    21,     0,     6,     0,
       7,     8,     0,     0,     0,    14,    15,     9,     0,    10,
       0,     0,    11,    12,    13,     0,     1,     2,     3,    16,
       0,    17,    18,    19,    20,     4,     0,     5,     0,     0,
       0,    21,     0,     6,     0,     7,     8,     0,     0,     0,
       0,     0,     9,     0,    10,    14,    15,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,    17,    18,    19,    20,   137,     0,   248,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,    83,     0,
      14,    15,     0,     0,     1,     2,     3,     0,     0,     0,
       0,     0,     0,     4,    16,     5,    17,    18,    19,    20,
     104,     6,    84,     7,     8,     0,    21,     0,     0,     0,
       9,     0,    10,     0,     0,    11,    12,    13,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    83,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    16,     0,    17,    18,    19,    20,     0,     0,
       0,     0,    83,     0,    21,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    84,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,    83,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    84,     0,     0,     0,     0,     0,     0,     0,     0,
     249,     0,    83,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    84,     0,     0,     0,
     128,    60,    61,    62,    63,    64,    65,    66,    67,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    68,    83,     0,     0,     0,     0,     0,     0,     0,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103
};

static const short int yycheck[] =
{
       0,     7,    13,    18,     9,   213,     8,    45,     7,   164,
      12,    25,    68,    15,     6,    52,    54,    43,   213,   214,
       6,     6,   294,    70,    47,   168,    48,    71,    74,    70,
      52,    75,   304,    87,   257,    18,    93,    93,    30,    39,
      94,     3,     4,     5,    30,    30,    93,    93,     3,     4,
       5,    74,    93,     3,     4,     5,    93,   280,    69,   211,
      22,    75,   214,   206,    93,   273,    68,    29,    60,    31,
      62,    93,    87,   228,    76,    74,    62,   272,   273,    29,
      80,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   297,   129,    87,    67,    68,    68,    87,   286,
      89,   122,    67,    74,   119,    70,   122,    67,    68,    69,
     272,    83,    84,    85,    86,   302,   126,   165,    83,    84,
      85,    93,    68,    83,    84,    85,    69,    68,    93,    70,
      82,    77,    75,    93,    93,   297,    77,    89,    87,    87,
      89,    89,    16,    17,     0,     3,     4,     5,    74,    75,
      74,   199,   162,   168,   164,   191,   204,    87,    88,     3,
       4,     5,    93,    76,   200,    93,    86,    68,    75,   217,
       7,    29,    74,    88,    88,   223,    87,    93,   190,    87,
     192,    93,    69,    93,    75,    30,    69,    75,     3,     4,
       5,   206,    74,   208,    93,    93,    69,    12,    75,    14,
      75,    93,    74,    74,    74,    20,   254,    22,    23,    67,
      68,   221,    71,    74,    29,    82,    31,    74,   228,    34,
      35,    36,    87,    67,    75,    83,    84,    85,   238,    71,
     245,    56,     6,    88,    75,    93,    75,    71,    74,    83,
      84,    85,   290,    74,   162,    75,   262,    74,   264,    93,
     263,   263,    67,    68,   190,    81,    30,   197,   197,   295,
     246,   214,   126,   116,   208,   281,    81,    -1,    83,    84,
      85,    86,    87,    -1,     6,    -1,   286,    -1,    93,    94,
       3,     4,     5,    -1,   294,    59,    60,    61,    62,    12,
      -1,    14,   302,    -1,   304,    -1,     6,    20,    30,    22,
      23,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,     3,     4,     5,    -1,    -1,
      30,    -1,    -1,    11,    12,    13,    14,    -1,    60,    61,
      62,    -1,    20,     6,    22,    23,    46,    47,    -1,    -1,
      -1,    29,    -1,    31,    67,    68,    34,    35,    36,    59,
      60,    61,    62,    63,    64,    -1,    -1,    30,    81,    -1,
      83,    84,    85,    86,    87,    -1,    89,    -1,    -1,    -1,
      93,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,     3,     4,     5,    59,    60,    61,    62,
      63,    64,    12,    81,    14,    83,    84,    85,    86,    87,
      20,    89,    22,    23,    -1,    93,    -1,    -1,    28,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    67,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    67,    68,    34,
      35,    36,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    93,    83,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    81,    14,    83,    84,
      85,    86,    87,    20,    -1,    22,    23,    -1,    93,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      67,    68,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    81,    -1,    83,    84,    85,    86,
      12,    -1,    14,    -1,    -1,    -1,    93,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    67,    68,    29,    -1,    31,
      -1,    -1,    34,    35,    36,    -1,     3,     4,     5,    81,
      -1,    83,    84,    85,    86,    12,    -1,    14,    -1,    -1,
      -1,    93,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    67,    68,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    87,    -1,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      67,    68,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    81,    14,    83,    84,    85,    86,
      87,    20,    30,    22,    23,    -1,    93,    -1,    -1,    -1,
      29,    -1,    31,    -1,    -1,    34,    35,    36,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    22,    -1,     3,     4,     5,    -1,
      -1,    29,    -1,    31,    -1,    12,    81,    14,    83,    84,
      85,    86,    87,    20,    -1,    22,    23,    -1,    93,    -1,
      -1,    -1,    29,    -1,    31,    -1,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,
      67,    68,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,     6,    -1,    -1,    -1,    93,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,     6,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,     6,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,     6,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    68,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,    12,    14,    20,    22,    23,    29,
      31,    34,    35,    36,    67,    68,    81,    83,    84,    85,
      86,    93,   110,   111,   112,   113,   116,   117,   118,   119,
     120,   122,   127,   132,   134,   135,   142,   148,   149,   150,
     154,   162,   163,   164,   166,   167,    93,    93,    93,   115,
     115,    93,   119,   117,    74,   119,    93,   127,   119,    93,
      38,    39,    40,    41,    42,    43,    44,    45,    68,    77,
      96,    97,    98,    99,   100,   101,   121,     0,    87,    94,
     114,    76,    86,     6,    30,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    87,   112,   133,    11,    13,    87,
     112,   125,   126,   145,   147,    18,   114,   165,   133,    68,
      74,    68,    25,    75,    74,   133,    74,     7,    69,    74,
      69,   119,   128,   129,   130,   127,   119,    87,    94,   112,
     118,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,    88,    87,    88,    74,    93,   165,    70,    93,
     117,   168,   169,   170,    48,    52,    93,   155,   156,   157,
     158,   159,    93,   115,   127,    93,   145,    93,   114,    69,
      75,   111,    16,    17,   136,   137,   138,   139,   140,   141,
     146,   147,   133,     7,    74,   168,    70,    69,    75,    93,
      93,    74,    69,    75,    75,    74,    74,    74,    88,   130,
      89,   114,   119,    74,   138,   140,   133,    89,   114,    93,
     133,    71,   168,    74,   170,    70,   159,    47,    74,   157,
     158,   156,   157,   159,   133,    82,   143,   144,    89,    74,
     133,    87,    89,   147,    74,    75,    71,    70,    93,   160,
     161,    56,    28,    33,    37,    87,   112,   123,   124,   131,
     151,   153,    75,    75,   117,    89,   144,   133,   161,    71,
      75,    68,    93,   115,   128,   115,    88,   157,   157,   158,
      74,    71,   161,   115,    74,   152,   153,    75,   133,    69,
     151,    89,   114,   157,    74,    89,   153,   151
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#ifndef	YYINITDEPTH
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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 47 ".\\old_parser.y"
#line 47 ".\\old_parser.y"
    {printf("file parsed successfully 1\n"); YYACCEPT;;}
    break;

  case 4:
#line 48 ".\\old_parser.y"
#line 48 ".\\old_parser.y"
    {printf("file parsed successfully 1\n"); YYACCEPT;;}
    break;

  case 28:
#line 85 ".\\old_parser.y"
#line 85 ".\\old_parser.y"
    {printf("\nglobal_stmt\n");;}
    break;

  case 55:
#line 117 ".\\old_parser.y"
#line 117 ".\\old_parser.y"
    {printf("assign statement\n");;}
    break;

  case 56:
#line 120 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 57:
#line 121 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 58:
#line 122 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 59:
#line 123 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 60:
#line 124 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 61:
#line 125 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 62:
#line 126 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 63:
#line 127 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 64:
#line 128 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 65:
#line 129 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 66:
#line 130 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 67:
#line 131 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 68:
#line 132 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 69:
#line 133 ".\\old_parser.y"
    {printf("assign op\n");;}
    break;

  case 70:
#line 137 ".\\old_parser.y"
    {printf("global statement \n");;}
    break;

  case 71:
#line 140 ".\\old_parser.y"
    {printf("nonlocal statement \n");;}
    break;

  case 72:
#line 143 ".\\old_parser.y"
    {printf("yield statement \n");;}
    break;

  case 98:
#line 198 ".\\old_parser.y"
    {/* empty no next elif or else*/;}
    break;

  case 99:
#line 199 ".\\old_parser.y"
    { ;}
    break;

  case 118:
#line 243 ".\\old_parser.y"
    {printf("\nbreak_stmt\n");;}
    break;

  case 119:
#line 244 ".\\old_parser.y"
    {printf("\ncontinue_stmt\n");;}
    break;

  case 130:
#line 268 ".\\old_parser.y"
    {printf("\nonlocal_stmt\n");;}
    break;

  case 131:
#line 269 ".\\old_parser.y"
    {printf("\nyield_stmt\n");;}
    break;

  case 132:
#line 270 ".\\old_parser.y"
    {printf("\nreturn_stmt\n");;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 1898 "old_parser.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 363 ".\\old_parser.y"



void main(int argc, char **argv)
{
 /*success("This is a valid python expression");*/
     if (argc > 1){
        for(int i=0;i<argc;i++)
            printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
    }
        else
        yyin=stdin;
     yyparse();
}

/* int yyerror(const char* s) {
//     fprintf(stderr, "Error: %s\n", s);
//     return 1;
// }*/

void yyerror(const char *msg)
    {
          printf(" %s \n", msg);
    }
