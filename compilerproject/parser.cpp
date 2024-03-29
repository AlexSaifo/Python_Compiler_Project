/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#line 67 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "parser.y" /* yacc.c:355  */

      #include "classes.hpp"
      #include <iostream>
      #include <string>

#line 103 "parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    LEFT_PARENTHESIS = 322,
    RIGHT_PARENTHESIS = 323,
    SQUARE_LEFT_BRACKET = 324,
    SQUARE_RIGHT_BRACKET = 325,
    CURLY_LEFT_BRACKET = 326,
    CURLY_RIGHT_BRACKET = 327,
    COLON = 328,
    COMMA = 329,
    SEMICOLON = 330,
    DOT = 331,
    SINGLE_QUOTATION = 332,
    DOUBLE_QUOTATION = 333,
    BACK_SLASH = 334,
    MATCH = 335,
    CASE = 336,
    MULTILINE_STRING = 337,
    STRING_LITERAL = 338,
    NUMBER = 339,
    REAL_NUMBER = 340,
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 6 "parser.y" /* yacc.c:355  */

	AstNode* astNode;
        IdentifierNode* idNode;
	int d;

#line 225 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 11 "parser.y" /* yacc.c:358  */

      // #include <stdio.h>
      // #include <stdlib.h>
      // #include <string.h>

      int yydebug=1;

      extern int yylex();
      extern int yyparse();
      extern FILE *yyin;
      void yyerror(const char *);
      AstNode* root = NULL;
      int n_nodes = 0;

#line 254 "parser.cpp" /* yacc.c:358  */

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYFINAL  79
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1063

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  308

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    67,    77,    81,    88,    92,    99,   103,
     108,   116,   117,   121,   125,   132,   136,   140,   144,   151,
     155,   159,   162,   165,   168,   176,   180,   184,   188,   192,
     198,   202,   206,   211,   216,   221,   226,   231,   236,   241,
     246,   250,   255,   260,   265,   270,   273,   278,   283,   288,
     293,   298,   303,   308,   317,   326,   329,   332,   335,   338,
     341,   344,   347,   350,   353,   356,   359,   362,   365,   372,
     379,   386,   393,   398,   405,   409,   414,   423,   427,   434,
     438,   446,   454,   457,   466,   470,   474,   478,   482,   486,
     490,   494,   503,   507,   511,   518,   529,   537,   538,   543,
     548,   552,   560,   568,   572,   580,   588,   598,   606,   610,
     617,   627,   631,   635,   642,   646,   653,   657,   661,   668,
     676,   684,   689,   697,   701,   705,   712,   716,   723,   727,
     731,   735,   742,   748,   755,   766,   770,   775,   779,   783,
     787,   791,   795,   799,   803,   807,   815,   824,   833,   836,
     840,   848,   852,   857,   865,   869,   877,   880,   884,   892,
     901,   906,   915,   923,   927,   931,   942,   951,   955,   962,
     966,   970,   974,   981,   985,   993,   997
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
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
  "UNARY_MINUS", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "SQUARE_LEFT_BRACKET", "SQUARE_RIGHT_BRACKET", "CURLY_LEFT_BRACKET",
  "CURLY_RIGHT_BRACKET", "COLON", "COMMA", "SEMICOLON", "DOT",
  "SINGLE_QUOTATION", "DOUBLE_QUOTATION", "BACK_SLASH", "MATCH", "CASE",
  "MULTILINE_STRING", "STRING_LITERAL", "NUMBER", "REAL_NUMBER",
  "COMMENTS", "NEW_LINE", "INDENT", "DEDENT", "NO_CHANGES",
  "UNKNOWN_SYMBOL", "WHAIT_SPACE", "IDENTIFIER", "ENDMARKER", "AT_SIGN",
  "BITWISE_AND_EQUAL", "BITWISE_OR_EQUAL", "BITWISE_XOR_EQUAL",
  "BITWISE_NEGATION_EQUAL", "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL",
  "EQUAL", "'+'", "'-'", "'*'", "'/'", "'|'", "UMINUS", "$accept", "file",
  "statements", "statement", "simple_stmts", "new_lines_plus",
  "identifiers", "constant", "atom", "simple_stmt", "expression",
  "assign_statement", "assignment_operator", "global_stmt",
  "nonlocal_stmt", "yield_stmt", "break_stmt", "continue_stmt",
  "func_call", "parameters_", "parameters", "parameter", "return_stmt",
  "compound_stmt", "block", "if_stmt", "if_header", "elif_else_",
  "elif_else", "else_stmt", "elif_stmts", "elif_stmt", "elif_header",
  "match_stmt", "cases", "case", "block_iteration", "statements_iteration",
  "statement_iteration", "while_stmt", "for_stmt", "for_header",
  "block_func", "statements_func", "statement_func", "func_def",
  "def_parameters_", "def_parameter_star", "def_parameter_star2",
  "def_parameters", "def_parameter", "fun_generic_identifire_",
  "fun_generic_identifire", "with_stmt", "try_except", "try", "except",
  "def_class_stmt", "def_class_row", "generic_identifires_",
  "generic_identifires", "generic_identifire", YY_NULL
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,    43,    45,    42,    47,   124,   358
};
# endif

#define YYPACT_NINF -259

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-259)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     779,  -259,  -259,  -259,   -63,   -60,   -55,   -55,   188,   102,
    -259,   -24,   188,   -29,   188,   188,   -12,  -259,  -259,  -259,
    -259,  -259,   727,   109,   -17,  -259,    37,  -259,  -259,    36,
     967,  -259,  -259,  -259,  -259,  -259,   694,  -259,  -259,  -259,
     473,  -259,  -259,  -259,   -13,  -259,   694,    73,    74,  -259,
     -11,    87,   -41,   827,  -259,   694,   862,   -41,   163,    17,
     932,    98,  -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,
     115,   -29,  -259,  -259,  -259,  -259,  -259,  -259,   188,  -259,
    -259,  -259,   231,    49,  -259,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,    84,  -259,    88,  -259,  -259,
      90,  -259,  -259,  -259,  -259,  -259,   -57,    21,  -259,  -259,
      54,  -259,   -31,    83,    96,  -259,  -259,   473,   101,  -259,
     117,  -259,   967,   128,   131,  -259,  -259,   967,  -259,  -259,
    -259,  -259,   172,  -259,   219,   219,   329,   329,   329,   329,
     999,   999,   999,   999,   999,   999,   999,   120,    17,    13,
     246,   246,   779,   113,   593,   694,     2,  -259,    54,   -35,
    -259,   138,   133,  -259,   116,   118,   139,   145,   140,  -259,
     141,  -259,   -41,    93,   143,  -259,  -259,   146,    81,  -259,
     188,    56,   188,   147,  -259,  -259,  -259,   113,  -259,   694,
      69,  -259,  -259,   125,   694,   152,    54,   150,   148,  -259,
    -259,   -42,   -27,   -37,   -31,  -259,  -259,   694,   156,  -259,
    -259,   660,   897,   694,  -259,  -259,   137,  -259,   351,   153,
    -259,   155,   157,  -259,  -259,   -38,  -259,   183,   438,  -259,
     168,   170,  -259,  -259,  -259,   102,   -52,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,   694,  -259,  -259,   -38,  -259,    40,
    -259,   -43,   -55,   188,   -55,   159,  -259,  -259,  -259,  -259,
    -259,  -259,   -37,   -37,   175,  -259,  -259,  -259,   187,  -259,
     -38,   -55,   186,    87,  -259,    87,   558,  -259,  -259,   189,
     694,  -259,  -259,    80,   438,    70,  -259,   -37,  -259,   191,
    -259,  -259,   316,  -259,   438,  -259,  -259,  -259
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    23,    21,    22,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,    17,    18,    15,
      16,    28,    20,     0,     0,     4,     6,    19,    30,     8,
      25,    26,    27,    24,     7,    84,     0,    89,    86,    87,
       0,    85,    88,    90,     0,    91,     0,     0,     0,    13,
       0,    69,    20,     0,    31,     0,     0,     0,     0,    40,
       0,     0,    68,    55,    56,    59,    57,    61,    58,    60,
       0,     0,    64,    66,    67,    65,    63,    62,     0,     1,
      11,     2,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,    72,    73,
       0,   116,   117,   118,   120,   113,     0,     0,   160,   166,
       0,   168,   148,     0,     0,    96,   162,     0,     0,    45,
       0,    74,    81,     0,    77,    79,    76,    54,    12,     3,
       5,    10,    52,    53,    32,    33,    34,    35,    37,    36,
      38,    46,    47,    48,    50,    49,    51,    39,    41,    42,
      43,    44,     0,    97,     0,     0,     0,   161,     0,    20,
     175,     0,   169,   173,     0,     0,   151,     0,   141,   145,
     135,   149,    13,     0,     0,    14,   119,     0,     0,    75,
      78,     0,     0,     0,    95,    98,   101,   100,   103,     0,
       0,   114,   163,     0,     0,     0,     0,     0,   170,   146,
     147,     0,     0,   148,     0,   121,   122,     0,     0,    80,
      92,     0,     0,     0,    99,   104,     0,   111,     0,     0,
     164,   171,     0,   167,   174,   156,   153,     0,     0,   144,
     142,   136,   140,   150,   159,     0,     0,   108,    93,   106,
     102,   105,   112,   115,     0,   172,   176,   156,   157,     0,
     154,     0,     0,    82,     0,     0,   128,   129,   130,   131,
     132,   125,     0,   148,     0,   107,   109,   165,     0,   152,
     156,     0,     0,    70,    83,    71,     0,   143,   138,   137,
       0,   158,   155,     0,     0,     0,   126,     0,   110,     0,
     133,   123,     0,   139,     0,   124,   127,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -259,  -259,   106,     0,  -259,   -26,    -6,  -259,    -5,   194,
      -2,  -259,  -259,  -259,  -259,  -259,  -259,  -259,   -10,    11,
    -259,    94,  -259,  -259,   -44,  -259,  -259,  -259,  -259,    91,
    -259,    92,  -259,  -259,  -259,    39,   160,  -259,  -156,  -259,
    -259,  -259,  -225,  -259,  -258,  -259,  -259,    76,  -148,  -206,
    -169,  -259,  -232,  -259,  -259,  -259,   174,  -259,  -259,  -146,
    -259,    89
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,   106,    26,    82,    50,    27,    28,    29,
      30,    31,    78,    32,   267,   268,   112,   113,    33,   133,
     134,   135,   269,    34,   107,    35,    36,   194,   195,   196,
     197,   198,   199,    37,   246,   247,   114,   200,   115,    38,
      39,    40,   270,   295,   271,    41,   177,   178,   179,   180,
     181,   259,   260,    42,    43,    44,   118,    45,    46,   171,
     172,   173
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,    51,   119,    58,    54,   116,    53,   240,   201,   203,
      56,   126,    59,    60,   123,   175,   165,   174,   117,    85,
     237,   175,   205,    85,   281,   278,    70,   235,   296,   245,
      47,   257,    70,    48,   206,    71,   166,   275,    49,   116,
     111,    71,   236,    86,   306,   243,   238,    86,   292,    55,
     282,   176,     1,     2,     3,   258,   176,     1,     2,     3,
     232,   136,   176,   124,    57,   239,   242,   289,   132,   300,
      80,     7,   253,   101,    80,   204,   137,    81,     9,   307,
      10,    61,   140,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   243,   188,     1,     2,     3,   138,    79,
     279,    14,    83,   184,   280,   170,    15,   183,     1,     2,
       3,   202,    84,   168,   287,   288,    85,   111,   243,   192,
     193,    17,    18,    19,    20,    21,    17,    18,    19,    20,
     120,   122,    22,    80,     9,   220,   121,   169,   299,   303,
      86,     1,     2,     3,   124,   226,    80,    80,   227,   301,
     230,   124,    25,   170,   111,   221,   215,   124,   138,   218,
     128,   130,   162,   244,   228,   163,   182,    14,   164,   250,
     101,   102,    15,   131,    17,    18,    19,    20,   132,   185,
     222,     1,     2,     3,   187,    52,   189,    17,    18,    19,
      20,   170,    86,   170,    80,   190,   207,   208,    52,   209,
     277,   210,   211,   212,   213,   214,   216,     9,   229,   217,
     223,   140,   231,   233,   251,    85,   254,   256,   111,   255,
      17,    18,    19,    20,     1,     2,     3,   245,   266,   261,
     274,   169,   272,     4,   273,     5,   298,   286,   290,    86,
      14,     6,    85,     7,     8,    15,   283,   291,   285,   294,
       9,   132,    10,   297,   304,    11,    12,    13,   191,   302,
      17,    18,    19,    20,   284,   293,    86,   141,   100,   101,
     102,    52,   103,   104,   219,   276,   266,   186,   224,   225,
     241,   167,     0,    14,   266,     0,     0,   234,    15,     0,
       0,     0,   266,     0,   266,   100,   101,   102,     0,     0,
       0,    16,     0,    17,    18,    19,    20,    21,   138,     1,
       2,     3,     0,     0,    22,   139,     0,     0,     4,     0,
       5,     0,     0,     0,     0,    85,     6,     0,     7,     8,
       0,     0,     0,     0,   262,     9,     0,    10,     0,   263,
      11,    12,    13,   264,     1,     2,     3,     0,     0,    86,
       0,     0,   108,     4,   109,     5,     0,     0,     0,     0,
       0,     6,     0,     7,     8,    87,    88,     0,    14,     0,
       9,     0,    10,    15,     0,    11,    12,    13,   100,   101,
     102,     0,   103,   104,     0,     0,    16,     0,    17,    18,
      19,    20,    21,   138,     0,   305,     0,     0,     0,    22,
       0,     0,     0,    14,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,    17,    18,    19,    20,    21,   138,     0,
     252,     1,     2,     3,    22,     0,     0,     0,     0,     0,
       4,     0,     5,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     0,     0,     0,     0,   262,     9,     0,    10,
       0,   263,    11,    12,    13,   264,     1,     2,     3,     0,
       0,     0,     0,     0,   108,     4,   109,     5,     0,     0,
       0,     0,     0,     6,     0,     7,     8,     0,     0,     0,
      14,     0,     9,     0,    10,    15,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,   265,     0,     0,     0,     0,
       0,    22,     0,     0,     0,    14,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,    17,    18,    19,    20,    21,
     110,     1,     2,     3,     0,     0,    22,     0,     0,     0,
       4,     0,     5,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     0,     0,     0,     0,   262,     9,     0,    10,
       0,   263,    11,    12,    13,   264,     1,     2,     3,     0,
       0,     0,     0,     0,   108,     4,   109,     5,     0,     0,
       0,     0,     0,     6,     0,     7,     8,     0,     0,     0,
      14,     0,     9,     0,    10,    15,     0,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,    14,     0,     0,     0,     0,
      15,     0,     0,     1,     2,     3,     0,     0,     0,     0,
       0,     0,     4,    16,     5,    17,    18,    19,    20,    21,
       6,     0,     7,     8,     0,     0,    22,     0,     0,     9,
       0,    10,     0,     0,    11,    12,    13,     1,     2,     3,
       0,     0,     0,     0,     0,     0,     4,     0,     5,     0,
       0,     0,     0,     0,     6,     0,     7,     8,     0,     0,
       0,     0,    14,     9,     0,    10,     0,    15,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,   138,     0,   248,
       0,     0,     0,    22,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,     0,    16,     0,    17,    18,    19,    20,
      21,   105,     1,     2,     3,     0,     0,    22,     0,     0,
       0,     4,     0,     5,    70,     0,     0,     0,     0,     6,
       0,     7,     8,    71,     0,     0,     0,     0,     9,     0,
      10,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,    14,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,     0,    16,
       0,    17,    18,    19,    20,    21,     0,     0,    85,     0,
       0,     0,    22,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,     0,
     103,   104,    86,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,    85,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     0,   103,   104,    86,     0,     0,
       0,     0,     0,     0,     0,   127,     0,     0,    85,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,     0,
     103,   104,    86,     0,     0,     0,     0,     0,     0,     0,
     249,     0,     0,    85,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     0,   103,   104,    86,     0,     0,
     129,     0,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    86,
     103,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,     0,     0,     0,     0,     0,     0,   100,   101,
     102,     0,   103,   104
};

static const yytype_int16 yycheck[] =
{
       0,     7,    46,    13,     9,    18,     8,   213,   164,     7,
      12,    55,    14,    15,    25,    52,    73,    48,    44,     6,
      47,    52,   168,     6,    67,   257,    67,    69,   286,    81,
      93,    69,    67,    93,    69,    76,    93,    89,    93,    18,
      40,    76,   211,    30,   302,   214,    73,    30,   280,    73,
      93,    93,     3,     4,     5,    93,    93,     3,     4,     5,
     206,    71,    93,    74,    93,   213,   214,   273,    70,   294,
      87,    22,   228,    60,    87,    73,    78,    94,    29,   304,
      31,    93,    82,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   272,   130,     3,     4,     5,    87,     0,
      70,    62,    75,   123,    74,   120,    67,   123,     3,     4,
       5,   165,    86,    69,   272,   273,     6,   127,   297,    16,
      17,    82,    83,    84,    85,    86,    82,    83,    84,    85,
      67,    67,    93,    87,    29,    89,    73,    93,    68,   297,
      30,     3,     4,     5,    74,   199,    87,    87,    89,    89,
     204,    74,   162,   168,   164,   191,    73,    74,    87,    88,
       7,    73,    88,   217,   200,    87,    93,    62,    88,   223,
      60,    61,    67,    68,    82,    83,    84,    85,   190,    93,
     192,     3,     4,     5,    93,    93,    68,    82,    83,    84,
      85,   206,    30,   208,    87,    74,    68,    74,    93,    93,
     254,    93,    73,    68,    74,    74,    73,    29,    93,    73,
      73,   221,    70,    73,    87,     6,    73,    70,   228,    74,
      82,    83,    84,    85,     3,     4,     5,    81,   238,    56,
     245,    93,    74,    12,    74,    14,   290,    88,    73,    30,
      62,    20,     6,    22,    23,    67,   262,    70,   264,    73,
      29,   263,    31,    74,    73,    34,    35,    36,   162,   295,
      82,    83,    84,    85,   263,   281,    30,    83,    59,    60,
      61,    93,    63,    64,   190,   246,   286,   127,   197,   197,
     214,   117,    -1,    62,   294,    -1,    -1,   208,    67,    -1,
      -1,    -1,   302,    -1,   304,    59,    60,    61,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,     3,
       4,     5,    -1,    -1,    93,    94,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    -1,     6,    20,    -1,    22,    23,
      -1,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,     3,     4,     5,    -1,    -1,    30,
      -1,    -1,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    46,    47,    -1,    62,    -1,
      29,    -1,    31,    67,    -1,    34,    35,    36,    59,    60,
      61,    -1,    63,    64,    -1,    -1,    80,    -1,    82,    83,
      84,    85,    86,    87,    -1,    89,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,    -1,
      89,     3,     4,     5,    93,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      62,    -1,    29,    -1,    31,    67,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    86,
      87,     3,     4,     5,    -1,    -1,    93,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      62,    -1,    29,    -1,    31,    67,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    80,    14,    82,    83,    84,    85,    86,
      20,    -1,    22,    23,    -1,    -1,    93,    -1,    -1,    29,
      -1,    31,    -1,    -1,    34,    35,    36,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,    62,    29,    -1,    31,    -1,    67,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    86,    87,    -1,    89,
      -1,    -1,    -1,    93,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    80,    -1,    82,    83,    84,    85,
      86,    87,     3,     4,     5,    -1,    -1,    93,    -1,    -1,
      -1,    12,    -1,    14,    67,    -1,    -1,    -1,    -1,    20,
      -1,    22,    23,    76,    -1,    -1,    -1,    -1,    29,    -1,
      31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    80,
      -1,    82,    83,    84,    85,    86,    -1,    -1,     6,    -1,
      -1,    -1,    93,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,     6,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,     6,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,     6,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    30,    -1,    -1,
      68,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    30,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    12,    14,    20,    22,    23,    29,
      31,    34,    35,    36,    62,    67,    80,    82,    83,    84,
      85,    86,    93,   110,   111,   112,   113,   116,   117,   118,
     119,   120,   122,   127,   132,   134,   135,   142,   148,   149,
     150,   154,   162,   163,   164,   166,   167,    93,    93,    93,
     115,   115,    93,   119,   117,    73,   119,    93,   127,   119,
     119,    93,    38,    39,    40,    41,    42,    43,    44,    45,
      67,    76,    96,    97,    98,    99,   100,   101,   121,     0,
      87,    94,   114,    75,    86,     6,    30,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    63,    64,    87,   112,   133,    11,    13,
      87,   112,   125,   126,   145,   147,    18,   114,   165,   133,
      67,    73,    67,    25,    74,    73,   133,    73,     7,    68,
      73,    68,   119,   128,   129,   130,   127,   119,    87,    94,
     112,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,    88,    87,    88,    73,    93,   165,    69,    93,
     117,   168,   169,   170,    48,    52,    93,   155,   156,   157,
     158,   159,    93,   115,   127,    93,   145,    93,   114,    68,
      74,   111,    16,    17,   136,   137,   138,   139,   140,   141,
     146,   147,   133,     7,    73,   168,    69,    68,    74,    93,
      93,    73,    68,    74,    74,    73,    73,    73,    88,   130,
      89,   114,   119,    73,   138,   140,   133,    89,   114,    93,
     133,    70,   168,    73,   170,    69,   159,    47,    73,   157,
     158,   156,   157,   159,   133,    81,   143,   144,    89,    73,
     133,    87,    89,   147,    73,    74,    70,    69,    93,   160,
     161,    56,    28,    33,    37,    87,   112,   123,   124,   131,
     151,   153,    74,    74,   117,    89,   144,   133,   161,    70,
      74,    67,    93,   115,   128,   115,    88,   157,   157,   158,
      73,    70,   161,   115,    73,   152,   153,    74,   133,    68,
     151,    89,   114,   157,    73,    89,   153,   151
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   116,   117,
     117,   117,   117,   117,   117,   118,   118,   118,   118,   118,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     123,   124,   125,   126,   127,   127,   127,   128,   128,   129,
     129,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   133,   134,   135,   136,   136,   137,
     137,   137,   138,   139,   139,   140,   141,   142,   143,   143,
     144,   145,   145,   145,   146,   146,   147,   147,   147,   148,
     149,   150,   150,   151,   151,   151,   152,   152,   153,   153,
     153,   153,   154,   154,   154,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   156,   157,   158,   158,
     158,   159,   159,   159,   160,   160,   161,   161,   161,   162,
     163,   163,   164,   165,   165,   165,   166,   167,   167,   168,
     168,   168,   168,   169,   169,   170,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     2,
       3,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     3,     4,     3,     1,     2,     1,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     1,     4,     3,     0,     1,     2,
       1,     1,     3,     1,     2,     3,     3,     7,     1,     2,
       4,     4,     5,     1,     1,     3,     1,     1,     1,     4,
       2,     5,     5,     4,     5,     1,     1,     3,     1,     1,
       1,     1,     7,    10,    12,     1,     3,     5,     5,     7,
       3,     1,     3,     5,     3,     1,     2,     2,     0,     1,
       3,     1,     5,     3,     1,     3,     0,     1,     3,     6,
       2,     3,     3,     3,     4,     6,     2,     6,     3,     1,
       2,     3,     4,     1,     3,     1,     4
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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
#line 61 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new FileNode("Strart_file");
            (yyval.astNode)->add((yyvsp[-1].astNode));
            root = (yyval.astNode);
            YYACCEPT;
      }
#line 1724 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new FileNode("Strart_file");
            (yyval.astNode)->add((yyvsp[-2].astNode));
            root = (yyval.astNode);
            YYACCEPT;
      }
#line 1735 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 77 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new StatementsNode("Statements");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
      }
#line 1753 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 88 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new StatementNode("Statement");
            (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 1762 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 92 "parser.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new StatementNode("Statement");
        (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1771 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 99 "parser.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new Simple_stmtsNode("simple_statements");
        (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 1780 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "parser.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new Simple_stmtsNode("simple_statements");
        (yyval.astNode)->add((yyvsp[-1].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1790 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 108 "parser.y" /* yacc.c:1646  */
    {
        (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
        (yyval.astNode) = (yyvsp[-2].astNode);
      }
#line 1799 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new IdentifiersNode("Identifires");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1808 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 125 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
      }
#line 1817 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 132 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new ConstantNode("constant");
            (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 1826 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new ConstantNode("constant");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1835 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 140 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new ConstantNode("constant");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1844 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 144 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new ConstantNode("constant");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1853 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 151 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new AtomNode("Atom");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1862 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 155 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new AtomNode("Atom");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1871 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 159 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new AtomNode("Atom_None");
      }
#line 1879 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 162 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new AtomNode("Atom_True");
      }
#line 1887 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 165 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new AtomNode("Atom_False");
      }
#line 1895 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 168 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new AtomNode("Atom");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1904 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 176 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode)= new Simple_stmtNode("Simple_Statement");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 1913 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode)= new Simple_stmtNode("Simple_Statement");
            (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 1922 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 184 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode)= new Simple_stmtNode("Simple_Statement");
            (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 1931 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 188 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode)= new Simple_stmtNode("Simple_Statement");
            (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 1940 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 192 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode)= new Simple_stmtNode("Simple_Statement_PASS");
       }
#line 1948 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 198 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new ExpressionNode("expression");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1957 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 202 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new ExpressionNode("expression_not");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1966 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 206 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new PlusExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1976 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 211 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new MinusExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1986 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 216 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new MultiplyExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1996 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 221 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new DivideExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2006 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 226 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new ModuloExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2016 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 231 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Floor_divideExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2026 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 236 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new ExponentiateExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 241 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Bitwise_andExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2046 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 246 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Bitwise_negationExpressionNode();
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2055 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 250 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Bitwise_orExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2065 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 255 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Bitwise_xorExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2075 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 260 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Left_shiftExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2085 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 265 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Right_shiftExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2095 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 270 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2103 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 273 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Equal_toExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2113 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 278 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Not_equal_toExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2123 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 283 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Less_thanExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2133 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 288 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Less_than_or_equal_toExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2143 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 293 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Greater_thanExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2153 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 298 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Greater_than_or_equal_toExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2163 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 303 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new AndExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2173 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 308 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new OrExpressionNode();
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2183 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 317 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[-2].astNode));
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2193 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 326 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Plus_equalNode("plus_equal");
                  }
#line 2201 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 329 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Minus_equalNode("minus_equal");
                  }
#line 2209 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 332 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Divide_equalNode("divide_equal");
                  }
#line 2217 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 335 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Modulo_equalNode("modulo_equal");
                  }
#line 2225 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 338 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Multiply_equalNode("multiply_equal");
                  }
#line 2233 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Exponentiate_equalNode("exponentiate_equal");
                  }
#line 2241 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 344 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Floor_divide_equalNode("floor_divide_equal");
                  }
#line 2249 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 347 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Right_shift_equalNode("right_shift_equal");
                  }
#line 2257 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 350 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Left_shift_equalNode("left_shift_equal");
                  }
#line 2265 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 353 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Bitwise_and_equalNode("bitwise_and_equal");
                  }
#line 2273 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 356 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Bitwise_negation_equalNode("bitwise_negation_equal");
                  }
#line 2281 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 359 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Bitwise_or_equalNode("bitwise_or_equal");
                  }
#line 2289 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 362 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Bitwise_xor_equalNode("bitwise_xor_equal");
                  }
#line 2297 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 365 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new EqualsNode("equal");
                  }
#line 2305 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 372 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Global_stmtNode("global_statement");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2314 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 379 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Nonlocal_stmtNode("Non_local_statement");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2323 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 386 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Yield_stmtNode("yield_statement");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2332 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 393 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Break_stmtNode("Break_statement");
            }
#line 2340 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 398 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Continue_stmtNode("Continue_statement");
            }
#line 2348 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 405 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Func_callNode("Function_call");
                  (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 2357 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 409 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Func_callNode("Function_call");
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2367 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 414 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Func_callNode("Function_call");
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2377 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 423 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Parameters_Node("parameters_");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2386 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 427 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Parameters_Node("parameters_");
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
#line 2395 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 434 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new ParametersNode("parameters");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2404 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 438 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new ParametersNode("parameters");
                        (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                        (yyval.astNode)=(yyvsp[-2].astNode);
                  }
#line 2414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 446 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new ParameterNode("parameter");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2423 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 454 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Return_stmtNode("return_statement");
            }
#line 2431 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 457 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Return_stmtNode("return_statement");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2440 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 466 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new Compound_stmtNode("Compound_stmt"); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
      }
#line 2449 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 470 "parser.y" /* yacc.c:1646  */
    {  
            (yyval.astNode) = new Compound_stmtNode("Compound_stmt");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 2458 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 474 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new Compound_stmtNode("Compound_stmt");
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 2467 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 478 "parser.y" /* yacc.c:1646  */
    {        
            (yyval.astNode) = new Compound_stmtNode("Compound_stmt");
            (yyval.astNode)->add((yyvsp[0].astNode)); 
      }
#line 2476 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 482 "parser.y" /* yacc.c:1646  */
    { 
            (yyval.astNode) = new Compound_stmtNode("Compound_stmt"); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
      }
#line 2485 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 486 "parser.y" /* yacc.c:1646  */
    { 
            (yyval.astNode) = new Compound_stmtNode("Compound_stmt"); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
      }
#line 2494 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 490 "parser.y" /* yacc.c:1646  */
    { 
            (yyval.astNode) = new Compound_stmtNode("Compound_stmt"); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
      }
#line 2503 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 494 "parser.y" /* yacc.c:1646  */
    { 
            (yyval.astNode) = new Compound_stmtNode("Compound_stmt"); 
            (yyval.astNode)->add((yyvsp[0].astNode)); 
      }
#line 2512 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 503 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BlockNode("block"); 
                  (yyval.astNode)->add((yyvsp[-1].astNode)); 
            }
#line 2521 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 507 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BlockNode("block_plus"); 
                  (yyval.astNode)->add((yyvsp[-2].astNode)); 
            }
#line 2530 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 511 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BlockNode("single_statement"); 
                  (yyval.astNode)->add((yyvsp[0].astNode)); 
            }
#line 2539 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 518 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new If_stmtNode("if_stmt"); 
                  (yyval.astNode)->add((yyvsp[-3].astNode)); 
                  (yyval.astNode)->add((yyvsp[-2].astNode)); 
                  (yyval.astNode)->add((yyvsp[0].astNode)); 
            }
#line 2550 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 529 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new If_headerNode("if_header"); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                  }
#line 2559 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 537 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = new Elif_else_Node("empty"); }
#line 2565 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 538 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2571 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 543 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Elif_else_Node("elif_else"); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2581 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 548 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Elif_else_Node("elif_else"); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2590 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 552 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Elif_else_Node("elif_else"); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2599 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 560 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Else_stmtNode("else");
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2608 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 568 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Elif_stmtsNode("elif_stmts"); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2617 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 572 "parser.y" /* yacc.c:1646  */
    { 
                        (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); 
                        (yyval.astNode) = (yyvsp[-1].astNode); 
                  }
#line 2626 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 580 "parser.y" /* yacc.c:1646  */
    {
                         (yyval.astNode) = new Elif_stmtNode("elif_stmt");
                        (yyval.astNode)->add((yyvsp[-2].astNode)); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                  }
#line 2636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 588 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Elif_headerNode("elif_header"); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                  }
#line 2645 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 598 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Match_stmtNode("match_stmt");
                  (yyval.astNode)->add((yyvsp[-5].astNode));
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2655 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 606 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new CasesNode("cases"); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 610 "parser.y" /* yacc.c:1646  */
    { 
                        (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); 
                        (yyval.astNode) = (yyvsp[-1].astNode); 
                  }
#line 2673 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 617 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new CaseNode("case");
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2683 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 627 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Block_iterationNode("block_iteration");
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2692 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 631 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Block_iterationNode("block_iteration");
                  (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 2701 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 635 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Block_iterationNode("block_iteration");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 642 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statements_iterationNode("statements_iteration"); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2719 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 646 "parser.y" /* yacc.c:1646  */
    {
                        (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); 
                        (yyval.astNode) = (yyvsp[-2].astNode);
                  }
#line 2728 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 653 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statement_iterationNode("Statement_Iteration");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2737 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 657 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statement_iterationNode("Statement_Iteration");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2746 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 661 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statement_iterationNode("Statement_Iteration");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2755 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 668 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new While_stmtNode("while");
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2765 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 676 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new For_stmtNode("for_statement");
                  (yyval.astNode)->add((yyvsp[-1].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2775 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 684 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new For_headerNode("for_header");
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
#line 2785 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 689 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new For_headerNode("for_header");
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
#line 2795 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 697 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Block_funcNode("block_func");
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2804 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 701 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Block_funcNode("block_func");
                  (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 2813 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 705 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Block_funcNode("block_func");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2822 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 712 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statements_funcNode("statements_func");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2831 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 716 "parser.y" /* yacc.c:1646  */
    {
                        (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                        (yyval.astNode) = (yyvsp[-2].astNode);
                  }
#line 2840 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 723 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statement_funcNode("statement_func"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2849 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 727 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statement_funcNode("statement_func"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2858 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 731 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statement_funcNode("statement_func");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2867 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 735 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Statement_funcNode("statement_func"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2876 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 742 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new Func_defNode("func_def");
                  (yyval.astNode)->add((yyvsp[-5].astNode));
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2887 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 748 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new Func_defNode("func_def");
                  (yyval.astNode)->add((yyvsp[-8].astNode));
                  (yyval.astNode)->add((yyvsp[-6].astNode));
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2899 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 755 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new Func_defNode("func_def");
                  (yyval.astNode)->add((yyvsp[-10].astNode));
                  (yyval.astNode)->add((yyvsp[-8].astNode));
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2911 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 766 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_");
                         (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 770 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_");  
                        (yyval.astNode)->add((yyvsp[-2].astNode));  
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2930 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 775 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[-4].astNode));  (yyval.astNode)->add((yyvsp[-2].astNode));   (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2939 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 779 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[-4].astNode));  (yyval.astNode)->add((yyvsp[-2].astNode));   (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2948 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 783 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[-6].astNode));  (yyval.astNode)->add((yyvsp[-4].astNode));   (yyval.astNode)->add((yyvsp[-2].astNode));    (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2957 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 787 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[-2].astNode));  (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2966 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 791 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2975 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 795 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[-2].astNode));  (yyval.astNode)->add((yyvsp[0].astNode));   
                  }
#line 2984 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 799 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[-4].astNode));  (yyval.astNode)->add((yyvsp[-2].astNode));   (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2993 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 803 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[-2].astNode));  (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 3002 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 807 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameters_Node("def_parameters_"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 3011 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 815 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameter_starNode("def_parameter_star"); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 3020 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 824 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parameter_star2Node("def_parameter_star2");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 3029 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 833 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Def_parametersNode("def_parameters_empty");
                  }
#line 3037 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 836 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Def_parametersNode("def_parameters");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 3046 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 840 "parser.y" /* yacc.c:1646  */
    {  
                        (yyvsp[-2].astNode)->add((yyvsp[0].astNode));   
                        (yyval.astNode) = (yyvsp[-2].astNode); 
                  }
#line 3055 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 848 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Def_parameterNode("def_parameter"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 3064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 852 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Def_parameterNode("def_parameter"); 
                        (yyval.astNode)->add((yyvsp[-4].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
#line 3074 "parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 857 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Def_parameterNode("def_parameter"); 
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 3084 "parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 865 "parser.y" /* yacc.c:1646  */
    {  
                        (yyval.astNode) = new Fun_generic_identifire_Node("fun_generic_identifire"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));   
                  }
#line 3093 "parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 869 "parser.y" /* yacc.c:1646  */
    { 
                        (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); 
                        (yyval.astNode)=(yyvsp[-2].astNode); 
                  }
#line 3102 "parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 877 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Fun_generic_identifireNode("fun_generic_identifire_empty");  
                  }
#line 3110 "parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 880 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new Fun_generic_identifireNode("fun_generic_identifire");  
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 3119 "parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 884 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Fun_generic_identifireNode("fun_generic_identifire");
                        (yyval.astNode)->add((yyvsp[-1].astNode));  
                  }
#line 3128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 892 "parser.y" /* yacc.c:1646  */
    {   
                  (yyval.astNode)=new With_stmtNode("with_stmt");  
                  (yyval.astNode)->add((yyvsp[-4].astNode)); (yyval.astNode)->add((yyvsp[-2].astNode)); (yyval.astNode)->add((yyvsp[0].astNode));   
            }
#line 3137 "parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 901 "parser.y" /* yacc.c:1646  */
    {   
                  (yyval.astNode)=new Try_exceptNode("try_except");    
                  (yyval.astNode)->add((yyvsp[-1].astNode)); 
                  (yyval.astNode)->add((yyvsp[0].astNode));    
            }
#line 3147 "parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 906 "parser.y" /* yacc.c:1646  */
    {  
                  (yyval.astNode)=new Try_exceptNode("try_except");    
                  (yyval.astNode)->add((yyvsp[-2].astNode)); (yyval.astNode)->add((yyvsp[0].astNode));  
            }
#line 3156 "parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 915 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new TryNode("try"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));   
                  }
#line 3165 "parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 923 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new ExceptNode("except"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));   
                  }
#line 3174 "parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 927 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new ExceptNode("except"); 
                        (yyval.astNode)->add((yyvsp[-2].astNode)); (yyval.astNode)->add((yyvsp[0].astNode));   
                  }
#line 3183 "parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 931 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new ExceptNode("except"); 
                        (yyval.astNode)->add((yyvsp[-4].astNode)); (yyval.astNode)->add((yyvsp[-2].astNode));   (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 3192 "parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 942 "parser.y" /* yacc.c:1646  */
    {   
                  (yyval.astNode)=new Def_class_stmtNode("def_class_stmt");    
                  (yyval.astNode)->add((yyvsp[-1].astNode));    
                  (yyval.astNode)->add((yyvsp[0].astNode));    
            }
#line 3202 "parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 951 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode)=new Def_class_rowNode("def_class_row"); 
                        (yyval.astNode)->add((yyvsp[-4].astNode)); (yyval.astNode)->add((yyvsp[-2].astNode));
                  }
#line 3211 "parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 955 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode)=new Def_class_rowNode("def_class_row"); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                  }
#line 3220 "parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 962 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new Generic_identifires_Node("generic_identifires_"); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 3229 "parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 966 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new Generic_identifires_Node("generic_identifires_");  
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                  }
#line 3238 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 970 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new Generic_identifires_Node("generic_identifires_");  
                        (yyval.astNode)->add((yyvsp[-1].astNode));  
                  }
#line 3247 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 974 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new Generic_identifires_Node("generic_identifires_");  
                        (yyval.astNode)->add((yyvsp[-2].astNode));  
                  }
#line 3256 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 981 "parser.y" /* yacc.c:1646  */
    {  
                        (yyval.astNode) = new Generic_identifiresNode("generic_identifires"); 
                        (yyval.astNode)->add((yyvsp[0].astNode));   
                  }
#line 3265 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 985 "parser.y" /* yacc.c:1646  */
    {   
                        (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); 
                        (yyval.astNode)=(yyvsp[-2].astNode); 
                  }
#line 3274 "parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 993 "parser.y" /* yacc.c:1646  */
    {   
                        (yyval.astNode) = new Generic_identifireNode("generic_identifire"); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 3283 "parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 997 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new Generic_identifireNode("generic_identifire");
                        (yyval.astNode)->add((yyvsp[-3].astNode));    (yyval.astNode)->add((yyvsp[-1].astNode));   
                  }
#line 3292 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3296 "parser.cpp" /* yacc.c:1646  */
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
#line 1008 "parser.y" /* yacc.c:1906  */


int main(int argc, char **argv)
{

     if (argc > 1){
        for(int i=0;i<argc;i++)
            yyin=fopen(argv[1],"r");
      }
      else
        yyin=stdin;
      
      yyparse();

      // AST is constructed, you can print it now
      if (root != NULL) {
            AST ast(root);
            ast.Print();
      }
      return 0;
}


void yyerror(const char* s) {
    std::cerr << "Parser error: " << s << std::endl;
}
