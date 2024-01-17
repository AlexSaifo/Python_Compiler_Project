/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 1 "parser.y" /* yacc.c:1909  */

      #include "classes.hpp"
      #include <iostream>
      #include <string>

#line 50 "parser.hpp" /* yacc.c:1909  */

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
#line 6 "parser.y" /* yacc.c:1909  */

	AstNode* astNode;
        IdentifierNode* idNode;
	int d;

#line 172 "parser.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
