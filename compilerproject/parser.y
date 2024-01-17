%code requires {
      #include "classes.hpp"
      #include <iostream>
      #include <string>
}
%union{
	AstNode* astNode;
        IdentifierNode* idNode;
	int d;
}
%{
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
%}


// tokens
%token <astNode> FALSE NONE TRUE AND AS ASSERT ASYNC AWAIT BREAK CLASS CONTINUE DEF DEL ELIF ELSE EXCEPT FINALLY FOR FROM GLOBAL IF IMPORT IN IS LAMBDA NONLOCAL NOT OR PASS RAISE RETURN TRY WHILE WITH YIELD EQUALS PLUS_EQUAL MINUS_EQUAL MULTIPLY_EQUAL DIVIDE_EQUAL FLOOR_DIVIDE_EQUAL MODULO_EQUAL EXPONENTIATE_EQUAL PLUS MINUS MULTIPLY DIVIDE FLOOR_DIVIDE MODULO EXPONENTIATE EQUAL_TO NOT_EQUAL_TO LESS_THAN GREATER_THAN LESS_THAN_OR_EQUAL_TO GREATER_THAN_OR_EQUAL_TO BITWISE_AND BITWISE_OR BITWISE_XOR BITWISE_NEGATION LEFT_SHIFT RIGHT_SHIFT UNARY_PLUS UNARY_MINUS LEFT_PARENTHESIS RIGHT_PARENTHESIS SQUARE_LEFT_BRACKET SQUARE_RIGHT_BRACKET CURLY_LEFT_BRACKET CURLY_RIGHT_BRACKET COLON COMMA SEMICOLON DOT SINGLE_QUOTATION DOUBLE_QUOTATION BACK_SLASH MATCH CASE
%token <astNode> MULTILINE_STRING STRING_LITERAL NUMBER REAL_NUMBER COMMENTS NEW_LINE INDENT DEDENT NO_CHANGES UNKNOWN_SYMBOL WHAIT_SPACE IDENTIFIER ENDMARKER AT_SIGN
%token <astNode> BITWISE_AND_EQUAL BITWISE_OR_EQUAL BITWISE_XOR_EQUAL BITWISE_NEGATION_EQUAL LEFT_SHIFT_EQUAL RIGHT_SHIFT_EQUAL 
%type  <astNode> file statements statement simple_stmts new_lines_plus identifiers constant atom simple_stmt expression assign_statement global_stmt nonlocal_stmt yield_stmt break_stmt continue_stmt func_call parameters_ parameters parameter return_stmt compound_stmt block if_stmt if_header elif_else_ elif_else else_stmt elif_stmts elif_stmt elif_header match_stmt cases case block_iteration statements_iteration statement_iteration while_stmt for_stmt for_header block_func statements_func statement_func func_def def_parameters_ def_parameter_star def_parameter_star2 def_parameters def_parameter fun_generic_identifire_ fun_generic_identifire with_stmt try_except try except def_class_stmt def_class_row generic_identifires_ generic_identifires generic_identifire assignment_operator




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
      statements ENDMARKER {
            $$ = new FileNode("Strart_file");
            $$->add($1);
            root = $$;
            YYACCEPT;
      }
     | statements new_lines_plus ENDMARKER {
            $$ = new FileNode("Strart_file");
            $$->add($1);
            root = $$;
            YYACCEPT;
      }
      ;


statements: 
      statement {
            $$ = new StatementsNode("Statements");
            $$->add($1);
      }
      |statements new_lines_plus statement {
            $1->add($3);
            $$ = $1;
      }
      ;

statement: 
       simple_stmts {
            $$ = new StatementNode("Statement");
            $$->add($1);
       }
      |compound_stmt {
        $$ = new StatementNode("Statement");
        $$->add($1);
      } 
      ;
  
simple_stmts:
       simple_stmt {
        $$ = new Simple_stmtsNode("simple_statements");
        $$->add($1);
       }
      |simple_stmt COMMENTS {
        $$ = new Simple_stmtsNode("simple_statements");
        $$->add($1);
        $$->add($2);
      }
      |simple_stmts SEMICOLON simple_stmt {
        $1->add($3);
        $$ = $1;
      }
      ;


new_lines_plus:
      NEW_LINE
      |new_lines_plus NEW_LINE
      ;

identifiers:
      IDENTIFIER{
            $$ = new IdentifiersNode("Identifires");
            $$->add($1);
      }
      | identifiers COMMA IDENTIFIER{
            $1->add($3);
            $$ = $1;
      }
      ;

constant:
       NUMBER{
            $$ = new ConstantNode("constant");
            $$->add($1);
       }
      | REAL_NUMBER{
            $$ = new ConstantNode("constant");
            $$->add($1);
      }
      | MULTILINE_STRING{
            $$ = new ConstantNode("constant");
            $$->add($1);
      }
      | STRING_LITERAL{
            $$ = new ConstantNode("constant");
            $$->add($1);
      }
      ;

atom: 
      constant {
            $$ = new AtomNode("Atom");
            $$->add($1);
      }  
      | IDENTIFIER {
            $$ = new AtomNode("Atom");
            $$->add($1);
      } 
      |NONE {
            $$ = new AtomNode("Atom_None");
      } 
      | TRUE {
            $$ = new AtomNode("Atom_True");
      } 
      | FALSE {
            $$ = new AtomNode("Atom_False");
      } 
      | func_call{
            $$ = new AtomNode("Atom");
            $$->add($1);
      }
      ;


simple_stmt: 
       expression {
            $$= new Simple_stmtNode("Simple_Statement");
            $$->add($1);
      }
      |assign_statement {
            $$= new Simple_stmtNode("Simple_Statement");
            $$->add($1);
       }
      |global_stmt {
            $$= new Simple_stmtNode("Simple_Statement");
            $$->add($1);
       }
      |COMMENTS{
            $$= new Simple_stmtNode("Simple_Statement");
            $$->add($1);
       }
      |PASS {
            $$= new Simple_stmtNode("Simple_Statement_PASS");
       }
       ;

      expression:
            atom{
                  $$ = new ExpressionNode("expression");
                  $$->add($1);
            }
            | NOT atom {
                  $$ = new ExpressionNode("expression_not");
                  $$->add($2);
            }      
            | expression PLUS expression{
                  $$ = new PlusExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression MINUS expression{
                  $$ = new MinusExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression MULTIPLY expression{
                  $$ = new MultiplyExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression DIVIDE expression{
                  $$ = new DivideExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression MODULO expression{
                  $$ = new ModuloExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression FLOOR_DIVIDE expression{
                  $$ = new Floor_divideExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression EXPONENTIATE expression {
                  $$ = new ExponentiateExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression BITWISE_AND expression{
                  $$ = new Bitwise_andExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | BITWISE_NEGATION expression {
                  $$ = new Bitwise_negationExpressionNode();
                  $$->add($2);
            }
            | expression BITWISE_OR expression{
                  $$ = new Bitwise_orExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression BITWISE_XOR expression{
                  $$ = new Bitwise_xorExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression LEFT_SHIFT expression{
                  $$ = new Left_shiftExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression RIGHT_SHIFT expression{
                  $$ = new Right_shiftExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | LEFT_PARENTHESIS expression RIGHT_PARENTHESIS{
                  $$ = $2;
            }
            | expression EQUAL_TO expression {
                  $$ = new Equal_toExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression NOT_EQUAL_TO expression {
                  $$ = new Not_equal_toExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression LESS_THAN expression {
                  $$ = new Less_thanExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression LESS_THAN_OR_EQUAL_TO expression {
                  $$ = new Less_than_or_equal_toExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression GREATER_THAN expression {
                  $$ = new Greater_thanExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression GREATER_THAN_OR_EQUAL_TO expression {
                  $$ = new Greater_than_or_equal_toExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression AND expression {
                  $$ = new AndExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            | expression OR expression {
                  $$ = new OrExpressionNode();
                  $$->add($1);
                  $$->add($3);
            }
            ;


      assign_statement:
            IDENTIFIER assignment_operator expression {
                  $2->add($1);
                  $2->add($3);
                  $$ = $2;
            }
            ;


            assignment_operator:
                  PLUS_EQUAL   {
                        $$ = new Plus_equalNode("plus_equal");
                  }
                  | MINUS_EQUAL   {
                        $$ = new Minus_equalNode("minus_equal");
                  }
                  | DIVIDE_EQUAL   {
                        $$ = new Divide_equalNode("divide_equal");
                  }
                  | MODULO_EQUAL   {
                        $$ = new Modulo_equalNode("modulo_equal");
                  }
                  | MULTIPLY_EQUAL   {
                        $$ = new Multiply_equalNode("multiply_equal");
                  }
                  | EXPONENTIATE_EQUAL   {
                        $$ = new Exponentiate_equalNode("exponentiate_equal");
                  }
                  | FLOOR_DIVIDE_EQUAL   {
                        $$ = new Floor_divide_equalNode("floor_divide_equal");
                  }
                  | RIGHT_SHIFT_EQUAL   {
                        $$ = new Right_shift_equalNode("right_shift_equal");
                  }
                  | LEFT_SHIFT_EQUAL   {
                        $$ = new Left_shift_equalNode("left_shift_equal");
                  }
                  | BITWISE_AND_EQUAL   {
                        $$ = new Bitwise_and_equalNode("bitwise_and_equal");
                  }
                  | BITWISE_NEGATION_EQUAL   {
                        $$ = new Bitwise_negation_equalNode("bitwise_negation_equal");
                  }
                  | BITWISE_OR_EQUAL   {
                        $$ = new Bitwise_or_equalNode("bitwise_or_equal");
                  }
                  | BITWISE_XOR_EQUAL   {
                        $$ = new Bitwise_xor_equalNode("bitwise_xor_equal");
                  }
                  | EQUALS   {
                        $$ = new EqualsNode("equal");
                  }
                  ;


      global_stmt:
            GLOBAL identifiers {
                  $$ = new Global_stmtNode("global_statement");
                  $$->add($2);
            }
            ;

      nonlocal_stmt:
            NONLOCAL identifiers {
                  $$ = new Nonlocal_stmtNode("Non_local_statement");
                  $$->add($2);
            }
            ;

      yield_stmt:
            YIELD identifiers {
                  $$ = new Yield_stmtNode("yield_statement");
                  $$->add($2);
            }
            ;

      break_stmt:
            BREAK{
                  $$ = new Break_stmtNode("Break_statement");
            }
            ;
      continue_stmt:
            CONTINUE{
                  $$ = new Continue_stmtNode("Continue_statement");
            }
            ;


      func_call:
            IDENTIFIER LEFT_PARENTHESIS  RIGHT_PARENTHESIS{
                  $$ = new Func_callNode("Function_call");
                  $$->add($1);
            }
            |IDENTIFIER LEFT_PARENTHESIS parameters_ RIGHT_PARENTHESIS{
                  $$ = new Func_callNode("Function_call");
                  $$->add($1);
                  $$->add($3);
            }
            |IDENTIFIER DOT func_call{
                  $$ = new Func_callNode("Function_call");
                  $$->add($1);
                  $$->add($3);
            }
            ;


            parameters_:
                  parameters {
                        $$ = new Parameters_Node("parameters_");
                        $$->add($1);
                  }
                  |parameters COMMA{
                        $$ = new Parameters_Node("parameters_");
                        $$->add($1);
                  }
                  ;

            parameters:
                  parameter{
                        $$ = new ParametersNode("parameters");
                        $$->add($1);
                  }
                  |parameters COMMA parameter {
                        $$ = new ParametersNode("parameters");
                        $1->add($3);
                        $$=$1;
                  }
                  ;
                  
            parameter:
                  expression{
                        $$ = new ParameterNode("parameter");
                        $$->add($1);
                  }
                  ;


      return_stmt:
            RETURN{
                  $$ = new Return_stmtNode("return_statement");
            }
            | RETURN parameters_{
                  $$ = new Return_stmtNode("return_statement");
                  $$->add($2);
            }
            ;



compound_stmt: 
      if_stmt {
            $$ = new Compound_stmtNode("Compound_stmt"); 
            $$->add($1); 
      }
      |func_def {  
            $$ = new Compound_stmtNode("Compound_stmt");
            $$->add($1);
      }
      |while_stmt {
            $$ = new Compound_stmtNode("Compound_stmt");
            $$->add($1);
      }
      |for_stmt{        
            $$ = new Compound_stmtNode("Compound_stmt");
            $$->add($1); 
      }
      |with_stmt { 
            $$ = new Compound_stmtNode("Compound_stmt"); 
            $$->add($1); 
      }
      |match_stmt{ 
            $$ = new Compound_stmtNode("Compound_stmt"); 
            $$->add($1); 
      }
      |try_except{ 
            $$ = new Compound_stmtNode("Compound_stmt"); 
            $$->add($1); 
      }
      |def_class_stmt{ 
            $$ = new Compound_stmtNode("Compound_stmt"); 
            $$->add($1); 
      }
      ;



      block:
            NEW_LINE INDENT statements DEDENT { 
                  $$ = new BlockNode("block"); 
                  $$->add($3); 
            }
            | NEW_LINE INDENT statements new_lines_plus DEDENT { 
                  $$ = new BlockNode("block_plus"); 
                  $$->add($3); 
            }
            |statement { 
                  $$ = new BlockNode("single_statement"); 
                  $$->add($1); 
            }
            ;

      if_stmt: 
            if_header block NEW_LINE elif_else_  { 
                  $$ = new If_stmtNode("if_stmt"); 
                  $$->add($1); 
                  $$->add($2); 
                  $$->add($4); 
            }
            ;



            if_header : 
                  IF expression COLON { 
                        $$ = new If_headerNode("if_header"); 
                        $$->add($2); 
                  }
                  ;
      
      
            elif_else_:
                  /*empty*/ { $$ = new Elif_else_Node("empty"); }
                  | elif_else { $$ = $1; }
                  ;
                  

            elif_else : 
                  elif_stmts else_stmt{ 
                        $$ = new Elif_else_Node("elif_else"); 
                        $$->add($1); 
                        $$->add($2); 
                  }
                  | elif_stmts {
                        $$ = new Elif_else_Node("elif_else"); 
                        $$->add($1); 
                  }
                  | else_stmt { 
                        $$ = new Elif_else_Node("elif_else"); 
                        $$->add($1); 
                  }
                  ;
                        

            else_stmt   : 
                  ELSE COLON block { 
                        $$ = new Else_stmtNode("else");
                        $$->add($3); 
                  }
                  ;
                        

            elif_stmts  : 
                  elif_stmt  { 
                        $$ = new Elif_stmtsNode("elif_stmts"); 
                        $$->add($1); 
                  }
                  | elif_stmts elif_stmt { 
                        $1->add($2); 
                        $$ = $1; 
                  }
                  ;
                  

            elif_stmt   : 
                  elif_header block NEW_LINE {
                         $$ = new Elif_stmtNode("elif_stmt");
                        $$->add($1); 
                        $$->add($2); 
                  }
                  ;

            elif_header : 
                  ELIF expression COLON  { 
                        $$ = new Elif_headerNode("elif_header"); 
                        $$->add($2); 
                  }
                  ;
      
                        


      match_stmt:
            MATCH IDENTIFIER COLON new_lines_plus INDENT cases DEDENT{
                  $$ = new Match_stmtNode("match_stmt");
                  $$->add($2);
                  $$->add($6);
            }
            ;

            cases: 
                  case { 
                        $$ = new CasesNode("cases"); 
                        $$->add($1); 
                  }
                  |cases case { 
                        $1->add($2); 
                        $$ = $1; 
                  }
                  ;
                  
            case: 
                  CASE atom COLON block { 
                        $$ = new CaseNode("case");
                        $$->add($2);
                        $$->add($4); 
                  }
                  ;



      block_iteration:
            NEW_LINE INDENT statements_iteration DEDENT {
                  $$ = new Block_iterationNode("block_iteration");
                  $$->add($3);
            }
            |NEW_LINE INDENT statements_iteration new_lines_plus DEDENT {
                  $$ = new Block_iterationNode("block_iteration");
                  $$->add($3);
            }
            |statement_iteration {
                  $$ = new Block_iterationNode("block_iteration");
                  $$->add($1);
            }
            ;
      
            statements_iteration:
                  statement_iteration {
                        $$ = new Statements_iterationNode("statements_iteration"); 
                        $$->add($1); 
                  }
                  |statements_iteration new_lines_plus statement_iteration{
                        $1->add($3); 
                        $$ = $1;
                  }
                  ;
                        
            statement_iteration:
                  statement {
                        $$ = new Statement_iterationNode("Statement_Iteration");
                        $$->add($1);
                  }
                  |break_stmt {
                        $$ = new Statement_iterationNode("Statement_Iteration");
                        $$->add($1);
                  }
                  |continue_stmt  {
                        $$ = new Statement_iterationNode("Statement_Iteration");
                        $$->add($1);
                  }
                  ;
                        
      while_stmt: 
            WHILE expression COLON block_iteration {
                  $$ = new While_stmtNode("while");
                  $$->add($2);
                  $$->add($4);
            }
            ;

      for_stmt:
            for_header block_iteration {
                  $$ = new For_stmtNode("for_statement");
                  $$->add($1);
                  $$->add($2);
            }
            ;

            for_header:
                  FOR identifiers IN identifiers COLON{
                        $$ = new For_headerNode("for_header");
                        $$->add($2);
                        $$->add($4);
                  }
                  |FOR identifiers IN func_call COLON{
                        $$ = new For_headerNode("for_header");
                        $$->add($2);
                        $$->add($4);
                  }
                  ;

      block_func:
            NEW_LINE INDENT statements_func DEDENT {
                  $$ = new Block_funcNode("block_func");
                  $$->add($3);
            }
            |NEW_LINE INDENT statements_func new_lines_plus DEDENT {
                  $$ = new Block_funcNode("block_func");
                  $$->add($3);
            }
            |statement_func {
                  $$ = new Block_funcNode("block_func");
                  $$->add($1);
            }
            ;
      
            statements_func:
                  statement_func{
                        $$ = new Statements_funcNode("statements_func");
                        $$->add($1);
                  }
                  |statements_func new_lines_plus statement_func {
                        $1->add($3);
                        $$ = $1;
                  }
                  ;
                  
            statement_func:
                  statement {
                        $$ = new Statement_funcNode("statement_func"); 
                        $$->add($1);
                  } 
                  |nonlocal_stmt {
                        $$ = new Statement_funcNode("statement_func"); 
                        $$->add($1);
                  }
                  |yield_stmt {
                        $$ = new Statement_funcNode("statement_func");
                        $$->add($1);
                  }
                  |return_stmt {
                        $$ = new Statement_funcNode("statement_func"); 
                        $$->add($1);
                  }
                  ;
            
      func_def:
            DEF IDENTIFIER LEFT_PARENTHESIS def_parameters_ RIGHT_PARENTHESIS COLON block_func{ 
                  $$ = new Func_defNode("func_def");
                  $$->add($2);
                  $$->add($4);
                  $$->add($7);
            }
            |DEF IDENTIFIER LEFT_PARENTHESIS def_parameters_ RIGHT_PARENTHESIS MINUS GREATER_THAN IDENTIFIER COLON block_func{ 
                  $$ = new Func_defNode("func_def");
                  $$->add($2);
                  $$->add($4);
                  $$->add($8);
                  $$->add($10);
            }
            |DEF IDENTIFIER LEFT_PARENTHESIS def_parameters_ RIGHT_PARENTHESIS MINUS GREATER_THAN LEFT_PARENTHESIS identifiers RIGHT_PARENTHESIS COLON block_func{
                  $$ = new Func_defNode("func_def");
                  $$->add($2);
                  $$->add($4);
                  $$->add($9);
                  $$->add($12);
            }
            ;


            def_parameters_:
                  def_parameters{
                        $$ = new Def_parameters_Node("def_parameters_");
                         $$->add($1);
                  } 
                  |def_parameters COMMA def_parameter_star { 
                        $$ = new Def_parameters_Node("def_parameters_");  
                        $$->add($1);  
                        $$->add($3);
                  }
                  |def_parameters COMMA def_parameter_star COMMA def_parameters { 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);  $$->add($3);   $$->add($5);
                  }
                  |def_parameters COMMA def_parameter_star COMMA def_parameter_star2{ 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);  $$->add($3);   $$->add($5);
                  }
                  |def_parameters COMMA def_parameter_star COMMA def_parameters COMMA def_parameter_star2{ 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);  $$->add($3);   $$->add($5);    $$->add($7);
                  }
                  |def_parameters COMMA def_parameter_star2{ 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);  $$->add($3); 
                  }
                  |def_parameter_star { 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);
                  }
                  |def_parameter_star COMMA def_parameters { 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);  $$->add($3);   
                  }
                  |def_parameter_star COMMA def_parameters COMMA def_parameter_star2 { 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);  $$->add($3);   $$->add($5);
                  }
                  |def_parameter_star COMMA def_parameter_star2 { 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);  $$->add($3); 
                  }
                  |def_parameter_star2 { 
                        $$ = new Def_parameters_Node("def_parameters_"); 
                        $$->add($1);
                  }
                  ;
            

            def_parameter_star:
                  MULTIPLY IDENTIFIER{ 
                        $$ = new Def_parameter_starNode("def_parameter_star"); 
                        $$->add($2); 
                  }
                  ;
                  


            def_parameter_star2:
                  EXPONENTIATE IDENTIFIER { 
                        $$ = new Def_parameter_star2Node("def_parameter_star2");
                        $$->add($2);
                  }
                  ;



            def_parameters:
                  /*empty*/{
                        $$ = new Def_parametersNode("def_parameters_empty");
                  }
                  | def_parameter { 
                        $$ = new Def_parametersNode("def_parameters");
                        $$->add($1);
                  }          
                  | def_parameters COMMA def_parameter{  
                        $1->add($3);   
                        $$ = $1; 
                  }
                  ;


            def_parameter:
                  IDENTIFIER {
                        $$ = new Def_parameterNode("def_parameter"); 
                        $$->add($1);
                  }
                  |IDENTIFIER COLON SQUARE_LEFT_BRACKET fun_generic_identifire_ SQUARE_RIGHT_BRACKET {
                        $$ = new Def_parameterNode("def_parameter"); 
                        $$->add($1);
                        $$->add($4);
                  }
                  |IDENTIFIER COLON def_parameter {
                        $$ = new Def_parameterNode("def_parameter"); 
                        $$->add($1);
                        $$->add($3);
                  }
                  ;

            fun_generic_identifire_:
                  fun_generic_identifire {  
                        $$ = new Fun_generic_identifire_Node("fun_generic_identifire"); 
                        $$->add($1);   
                  }
                  |fun_generic_identifire_ COMMA fun_generic_identifire { 
                        $1->add($3); 
                        $$=$1; 
                  }
                  ;


            fun_generic_identifire:
                  /*empty*/{
                        $$ = new Fun_generic_identifireNode("fun_generic_identifire_empty");  
                  }
                  |IDENTIFIER{   
                        $$ = new Fun_generic_identifireNode("fun_generic_identifire");  
                        $$->add($1); 
                  }   
                  |SQUARE_LEFT_BRACKET fun_generic_identifire SQUARE_RIGHT_BRACKET{
                        $$ = new Fun_generic_identifireNode("fun_generic_identifire");
                        $$->add($2);  
                  }
                  ;


      with_stmt:
            WITH func_call AS IDENTIFIER COLON block{   
                  $$=new With_stmtNode("with_stmt");  
                  $$->add($2); $$->add($4); $$->add($6);   
            }
            ;



      try_except:
            try except {   
                  $$=new Try_exceptNode("try_except");    
                  $$->add($1); 
                  $$->add($2);    
            }
            |try new_lines_plus except {  
                  $$=new Try_exceptNode("try_except");    
                  $$->add($1); $$->add($3);  
            }
            ;



            try:
                  TRY COLON block {   
                        $$ = new TryNode("try"); 
                        $$->add($3);   
                  }
                  ;


            except:
                  EXCEPT COLON block {   
                        $$ = new ExceptNode("except"); 
                        $$->add($3);   
                  }      
                  |EXCEPT IDENTIFIER COLON block {   
                        $$ = new ExceptNode("except"); 
                        $$->add($2); $$->add($4);   
                  }
                  |EXCEPT IDENTIFIER AS IDENTIFIER COLON block {   
                        $$ = new ExceptNode("except"); 
                        $$->add($2); $$->add($4);   $$->add($6); 
                  }
                  ;





      def_class_stmt:
            def_class_row block {   
                  $$=new Def_class_stmtNode("def_class_stmt");    
                  $$->add($1);    
                  $$->add($2);    
            }
            ;


            def_class_row:
                  CLASS IDENTIFIER LEFT_PARENTHESIS generic_identifires_ RIGHT_PARENTHESIS COLON {
                        $$=new Def_class_rowNode("def_class_row"); 
                        $$->add($2); $$->add($4);
                  }
                  |CLASS IDENTIFIER COLON {
                        $$=new Def_class_rowNode("def_class_row"); 
                        $$->add($2); 
                  }
                  ;

            generic_identifires_:
                  generic_identifires{   
                        $$ = new Generic_identifires_Node("generic_identifires_"); 
                        $$->add($1); 
                  }
                  |generic_identifires COMMA { 
                        $$ = new Generic_identifires_Node("generic_identifires_");  
                        $$->add($1); 
                  }
                  |SQUARE_LEFT_BRACKET generic_identifires_ SQUARE_RIGHT_BRACKET{   
                        $$ = new Generic_identifires_Node("generic_identifires_");  
                        $$->add($2);  
                  }            
                  |SQUARE_LEFT_BRACKET generic_identifires_ SQUARE_RIGHT_BRACKET COMMA {   
                        $$ = new Generic_identifires_Node("generic_identifires_");  
                        $$->add($2);  
                  }
                  ;

            generic_identifires:
                  generic_identifire {  
                        $$ = new Generic_identifiresNode("generic_identifires"); 
                        $$->add($1);   
                  }
                  |generic_identifires COMMA generic_identifire {   
                        $1->add($3); 
                        $$=$1; 
                  }
                  ;


            generic_identifire:
                  atom{   
                        $$ = new Generic_identifireNode("generic_identifire"); 
                        $$->add($1); 
                  }
                  |IDENTIFIER SQUARE_LEFT_BRACKET generic_identifires_ SQUARE_RIGHT_BRACKET{
                        $$ = new Generic_identifireNode("generic_identifire");
                        $$->add($1);    $$->add($3);   
                  }
                  ;



/*start symbol*/

/* End Parser Grammar */
%%

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
