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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



