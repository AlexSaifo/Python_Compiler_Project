%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yydebug=1;
extern FILE *yyin;
void yyerror(const char *);
extern int yylex();

%}

// tokens
// %token ID NUMBER STRING ASSIGN RETURN
%token FALSE NONE TRUE AND AS ASSERT ASYNC AWAIT BREAK CLASS CONTINUE DEF DEL ELIF ELSE EXCEPT FINALLY FOR FROM GLOBAL IF IMPORT IN IS LAMBDA NONLOCAL NOT OR PASS RAISE RETURN TRY WHILE WITH YIELD EQUALS PLUS_EQUAL MINUS_EQUAL MULTIPLY_EQUAL DIVIDE_EQUAL FLOOR_DIVIDE_EQUAL MODULO_EQUAL EXPONENTIATE_EQUAL PLUS MINUS MULTIPLY DIVIDE FLOOR_DIVIDE MODULO EXPONENTIATE EQUAL_TO NOT_EQUAL_TO LESS_THAN GREATER_THAN LESS_THAN_OR_EQUAL_TO GREATER_THAN_OR_EQUAL_TO BITWISE_AND BITWISE_OR BITWISE_XOR BITWISE_NEGATION LEFT_SHIFT RIGHT_SHIFT UNARY_PLUS UNARY_MINUS REAL_NUMBER LEFT_PARENTHESIS RIGHT_PARENTHESIS SQUARE_LEFT_BRACKET SQUARE_RIGHT_BRACKET CURLY_LEFT_BRACKET CURLY_RIGHT_BRACKET COLON COMMA SEMICOLON DOT SINGLE_QUOTATION DOUBLE_QUOTATION BACK_SLASH MATCH CASE
%token  MULTILINE_STRING STRING_LITERAL NUMBER REAL_NUMBER COMMENTS NEW_LINE INDENT DEDENT NO_CHANGES UNKNOWN_SYMBOL WHAIT_SPACE IDENTIFIER ENDMARKER AT_SIGN
%token BITWISE_AND_EQUAL BITWISE_OR_EQUAL BITWISE_XOR_EQUAL BITWISE_NEGATION_EQUAL LEFT_SHIFT_EQUAL RIGHT_SHIFT_EQUAL MATCH CASE




%nonassoc EQUAL
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%left GREATER_THAN GREATER_THAN_OR_EQUAL_TO LESS_THAN LESS_THAN_OR_EQUAL_TO EQUAL_TO NOT_EQUAL_TO
%right EXPONENTIATE
%left MULTIPLY DIVIDE FLOOR_DIVIDE MODULO
%left PLUS MINUS
%left LEFT_SHIFT RIGHT_SHIFT
%left BITWISE_AND
%left BITWISE_XOR
%left BITWISE_OR
%left BITWISE_NEGATION
%left NOT
%left AND
%left OR
%right EQUALS
%nonassoc PLUS_EQUAL  MINUS_EQUAL  DIVIDE_EQUAL MODULO_EQUAL MULTIPLY_EQUAL EXPONENTIATE_EQUAL FLOOR_DIVIDE_EQUAL RIGHT_SHIFT_EQUAL LEFT_SHIFT_EQUAL BITWISE_AND_EQUAL BITWISE_NEGATION_EQUAL BITWISE_OR_EQUAL BITWISE_XOR_EQUAL 

%%

/* Start Parser Grammar */

file: 
     | statements ENDMARKER {printf("file parsed successfully 1\n"); YYACCEPT;}
     | statements new_lines_plus ENDMARKER {printf("file parsed successfully 1\n"); YYACCEPT;}


statements: 
      statement
      |statements new_lines_plus statement 

statement: 
       simple_stmts 
      |compound_stmt 
  
simple_stmts:
       simple_stmt 
      |simple_stmt COMMENTS
      |simple_stmts SEMICOLON simple_stmt


new_lines_plus:
      NEW_LINE
      |new_lines_plus NEW_LINE

identifiers:
      IDENTIFIER
      | identifiers COMMA IDENTIFIER

constant:
       NUMBER
      | REAL_NUMBER
      | MULTILINE_STRING
      | STRING_LITERAL

atom:  constant  | IDENTIFIER |NONE | TRUE | FALSE | func_call


simple_stmt: 
       expression
      |assign_statement
      |global_stmt {printf("\nglobal_stmt\n");}
      |COMMENTS
      |PASS

      expression:
            atom
            | NOT atom    
            | expression PLUS expression
            | expression MINUS expression
            | expression MULTIPLY expression
            | expression DIVIDE expression
            | expression MODULO expression
            | expression FLOOR_DIVIDE expression
            | expression EXPONENTIATE expression
            | expression BITWISE_AND expression
            | expression BITWISE_NEGATION expression
            | expression BITWISE_OR expression
            | expression BITWISE_XOR expression
            | expression LEFT_SHIFT expression
            | expression RIGHT_SHIFT expression
            | LEFT_PARENTHESIS expression RIGHT_PARENTHESIS
            | expression EQUAL_TO expression
            | expression NOT_EQUAL_TO expression
            | expression LESS_THAN expression
            | expression LESS_THAN_OR_EQUAL_TO expression
            | expression GREATER_THAN expression
            | expression GREATER_THAN_OR_EQUAL_TO expression
            | expression AND expression
            | expression OR expression


      assign_statement:
            IDENTIFIER assignment_operator expression{printf("assign statement\n");}
      
      assignment_operator:
              PLUS_EQUAL   {printf("assign op\n");}
            | MINUS_EQUAL   {printf("assign op\n");}
            | DIVIDE_EQUAL   {printf("assign op\n");}
            | MODULO_EQUAL   {printf("assign op\n");}
            | MULTIPLY_EQUAL   {printf("assign op\n");}
            | EXPONENTIATE_EQUAL   {printf("assign op\n");}
            | FLOOR_DIVIDE_EQUAL   {printf("assign op\n");}
            | RIGHT_SHIFT_EQUAL   {printf("assign op\n");}
            | LEFT_SHIFT_EQUAL   {printf("assign op\n");}
            | BITWISE_AND_EQUAL   {printf("assign op\n");}
            | BITWISE_NEGATION_EQUAL   {printf("assign op\n");}
            | BITWISE_OR_EQUAL   {printf("assign op\n");}
            | BITWISE_XOR_EQUAL   {printf("assign op\n");}
            | EQUALS   {printf("assign op\n");}


      global_stmt:
            GLOBAL identifiers {printf("global statement \n");}

      nonlocal_stmt:
            NONLOCAL identifiers {printf("nonlocal statement \n");}

      yield_stmt:
            YIELD identifiers {printf("yield statement \n");}


      break_stmt:
            BREAK
      continue_stmt:
            CONTINUE


      func_call:
            IDENTIFIER LEFT_PARENTHESIS  RIGHT_PARENTHESIS
            |IDENTIFIER LEFT_PARENTHESIS parameters_ RIGHT_PARENTHESIS
            |IDENTIFIER DOT func_call

            parameters_:
                  parameters
                  |parameters COMMA

            parameters:
                  parameter
                  |parameters COMMA parameter
                  
            parameter:
                  expression


      return_stmt:
            RETURN
            | RETURN parameters_



compound_stmt: 
      if_stmt
      |func_def
      |while_stmt
      |for_stmt
      |with_stmt
      |match_stmt
      |try_except
      |def_class_stmt



      block:
            NEW_LINE INDENT statements DEDENT 
            |statement

      if_stmt: if_header block NEW_LINE elif_else_                           
                  ;

            if_header   : IF expression COLON 
                        ;

            elif_else_  : /*empty*/ {/* empty no next elif or else*/}
                        | elif_else { }
                        ;

            elif_else   : elif_stmts else_stmt
                        | elif_stmts
                        | else_stmt
                        ;

            else_stmt   : ELSE COLON block 
                        ;

            elif_stmts  : elif_stmt
                        | elif_stmts elif_stmt 
                        ;

            elif_stmt   : elif_header block NEW_LINE
                        ;

            elif_header : ELIF expression COLON 
                        ;


      match_stmt:
            MATCH IDENTIFIER COLON new_lines_plus INDENT cases DEDENT

            cases: 
                  case
                  |cases case
                  
            case: 
                  CASE atom COLON block


      block_iteration:
            NEW_LINE INDENT statements_iteration DEDENT 
            |NEW_LINE INDENT statements_iteration new_lines_plus DEDENT 
            |statement_iteration
      
            statements_iteration:
                  statement_iteration
                  |statements_iteration new_lines_plus statement_iteration
                  
            statement_iteration:
                  statement
                  |break_stmt {printf("\nbreak_stmt\n");}
                  |continue_stmt {printf("\ncontinue_stmt\n");}
            
      while_stmt: 
            WHILE expression COLON block_iteration

      for_stmt:
            for_header block_iteration

            for_header:
                  FOR identifiers IN identifiers COLON
                  |FOR identifiers IN func_call COLON


      block_func:
            NEW_LINE INDENT statements_func DEDENT 
            |NEW_LINE INDENT statements_func new_lines_plus DEDENT 
            |statement_func
      
            statements_func:
                  statement_func
                  |statements_func new_lines_plus statement_func
                  
            statement_func:
                  statement
                  |nonlocal_stmt {printf("\nonlocal_stmt\n");}
                  |yield_stmt {printf("\nyield_stmt\n");}
                  |return_stmt {printf("\nreturn_stmt\n");}
                  
            
      func_def:
            DEF IDENTIFIER LEFT_PARENTHESIS def_parameters_ RIGHT_PARENTHESIS COLON block_func
            |DEF IDENTIFIER LEFT_PARENTHESIS def_parameters_ RIGHT_PARENTHESIS MINUS GREATER_THAN IDENTIFIER COLON block_func
            |DEF IDENTIFIER LEFT_PARENTHESIS def_parameters_ RIGHT_PARENTHESIS MINUS GREATER_THAN LEFT_PARENTHESIS identifiers RIGHT_PARENTHESIS COLON block_func


            def_parameters_:
                  def_parameters 
                  |def_parameters COMMA def_parameter_star 
                  |def_parameters COMMA def_parameter_star COMMA def_parameters 
                  |def_parameters COMMA def_parameter_star COMMA def_parameter_star2
                  |def_parameters COMMA def_parameter_star COMMA def_parameters COMMA def_parameter_star2
                  |def_parameters COMMA def_parameter_star2
                  |def_parameter_star 
                  |def_parameter_star COMMA def_parameters 
                  |def_parameter_star COMMA def_parameters COMMA def_parameter_star2 
                  |def_parameter_star COMMA def_parameter_star2 
                  |def_parameter_star2 
            

            def_parameter_star:
                  MULTIPLY IDENTIFIER


            def_parameter_star2:
                  EXPONENTIATE IDENTIFIER


            def_parameters:
                  | def_parameter
                  | def_parameters COMMA def_parameter

            def_parameter:
                  IDENTIFIER
                  |IDENTIFIER COLON SQUARE_LEFT_BRACKET fun_generic_identifire_ SQUARE_RIGHT_BRACKET
                  |IDENTIFIER COLON def_parameter

            fun_generic_identifire_:
                  fun_generic_identifire
                  |fun_generic_identifire_ COMMA fun_generic_identifire

            fun_generic_identifire:
                  |IDENTIFIER
                  |SQUARE_LEFT_BRACKET fun_generic_identifire SQUARE_RIGHT_BRACKET
                  

      with_stmt:
            WITH func_call AS IDENTIFIER COLON block


      try_except:
            try except
            |try new_lines_plus except


            try:
                  TRY COLON block

            except:
                  EXCEPT COLON block
                  |EXCEPT IDENTIFIER COLON block
                  |EXCEPT IDENTIFIER AS IDENTIFIER COLON block




      def_class_stmt:
            def_class_row block

            def_class_row:
                  CLASS IDENTIFIER LEFT_PARENTHESIS generic_identifires_ RIGHT_PARENTHESIS COLON
                  |CLASS IDENTIFIER COLON

            generic_identifires_:
                  generic_identifires
                  |generic_identifires COMMA
                  |SQUARE_LEFT_BRACKET generic_identifires_ SQUARE_RIGHT_BRACKET
                  |SQUARE_LEFT_BRACKET generic_identifires_ SQUARE_RIGHT_BRACKET COMMA
            generic_identifires:
                  generic_identifire 
                  |generic_identifires COMMA generic_identifire 

            generic_identifire:
                  atom
                  |IDENTIFIER SQUARE_LEFT_BRACKET generic_identifires_ SQUARE_RIGHT_BRACKET


/*start symbol*/

/* End Parser Grammar */
%%


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