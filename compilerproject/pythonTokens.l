%option noyywrap
%x S11
%x S12
%x S13
%x S21
%x S22
%x S23
%x tab
%x EOF2
%x DEDENT1
%x LINE


%{
#pragma warning (disable: 4005)
#include "parser.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include "classes.hpp"
#include "stack.cpp"
using namespace std;
%}


/* Define token types as constants */
%{
int numberOfTabs = 0;
int lastNumberOfTabs = 0;
std::string multilineString = "";
%}

/* Regular expressions to match tokens */
DIGIT [0-9]
LETTER [_a-zA-Z]
ALPHANUM {LETTER}|{DIGIT}
IDENTIFIER {LETTER}{ALPHANUM}*
LITERALSTRING \"([^\"\\]|(\\.)|(\\\n))*\" 
LITERALCHAR \'([^\'\\]|(\\.)|(\\\n))*\'


FALSE "False"
NONE "None"
TRUE "True"
AND "and"
AS "as"
ASSERT "assert"
ASYNC "async"
AWAIT "await"
BREAK "break"
CLASS "class"
CONTINUE "continue"
DEF "def"
DEL "del"
ELIF "elif"
ELSE "else"
EXCEPT "except"
FINALLY "finally"
FOR "for"
FROM "from"
GLOBAL "global"
IF "if"
IMPORT "import"
IN "in"
IS "is"
LAMBDA "lambda"
NONLOCAL "nonlocal"
NOT "not"
OR "or"
PASS "pass"
RAISE "raise"
RETURN "return"
TRY "try"
WHILE "while"
WITH "with"
YIELD "yield"
MATCH "match"
CASE "case"


EQUALS "="
PLUS_EQUAL "+="
MINUS_EQUAL "-="
MULTIPLY_EQUAL "*="
DIVIDE_EQUAL "/="
FLOOR_DIVIDE_EQUAL "//="
MODULO_EQUAL "%="
EXPONENTIATE_EQUAL "**="

PLUS "+"
MINUS "-"
MULTIPLY "*"
DIVIDE "/"
FLOOR_DIVIDE "//"
MODULO "%"
EXPONENTIATE "**"

EQUAL_TO "=="
NOT_EQUAL_TO "!="
LESS_THAN "<"
GREATER_THAN ">"
LESS_THAN_OR_EQUAL_TO "<="
GREATER_THAN_OR_EQUAL_TO ">="

BITWISE_AND "&"
BITWISE_OR "|"
BITWISE_XOR "^"
BITWISE_NEGATION "~"
LEFT_SHIFT "<<"
RIGHT_SHIFT ">>"

BITWISE_AND_EQUAL "&="
BITWISE_OR_EQUAL "|="
BITWISE_XOR_EQUAL "^="
BITWISE_NEGATION_EQUAL "~="
LEFT_SHIFT_EQUAL "<<="
RIGHT_SHIFT_EQUAL ">>="

UNARY_PLUS "+"
UNARY_MINUS "-"
REAL_NUMBER ([+-]?((({DIGIT}+(\.{DIGIT}*))?)|(\.{DIGIT}+))([eE][+-]?{DIGIT}+)?)

LEFT_PARENTHESIS "("
RIGHT_PARENTHESIS ")"
SQUARE_LEFT_BRACKET "["
SQUARE_RIGHT_BRACKET "]"
CURLY_LEFT_BRACKET "{"
CURLY_RIGHT_BRACKET "}"

COLON ":"
COMMA ","
SEMICOLON ";"
DOT "."

SINGLE_QUOTATION \'
DOUBLE_QUOTATION \"
BACK_SLASH \\

AT_SIGN "@"

%%

<INITIAL>\'\'\'  {
            BEGIN(S11);
            multilineString = "";
}   

<tab>\'\'\'  {
            BEGIN(S11);
            multilineString = "";
}  

<S11>[^"'"] {
            multilineString += yytext;
}

<S11>"'" {
            BEGIN(S12);
}

<S12>"'" {
            BEGIN(S13);
}

<S12>[^"'"] {
            BEGIN(S11);
            multilineString += "\'";
            multilineString += yytext;
}

<S13>"'" {
            BEGIN(INITIAL);
            yylval.astNode = new Multiline_stringNode("multiline_string","multiline_string",multilineString);
            multilineString="";
            return MULTILINE_STRING;
}

<S13>[^"'"] {
            
    		multilineString += "\'";
            multilineString += "\'";
            multilineString += yytext;
            BEGIN(S11);
}


<INITIAL>\"\"\"  {
            BEGIN(S21);
            multilineString = "";
}
<tab>\"\"\"  {
            BEGIN(S21);
            multilineString = "";
}

<S21>[^\"] {
            multilineString += yytext;
    		
}

<S21>\" {
            BEGIN(S22);
}

<S22>\" {
            BEGIN(S23);
}

<S22>[^\"] {
            BEGIN(S21);
            multilineString += "\"";
            multilineString += yytext;
}

<S23>\" {
            BEGIN(INITIAL);
            yylval.astNode = new Multiline_stringNode("multiline_string","multiline_string",multilineString);
            multilineString="";
            return MULTILINE_STRING;
}

<S23>[^\"] {
            
            multilineString += "\"";
            multilineString += "\"";
            multilineString += yytext;
            BEGIN(S21);
}


{LITERALSTRING} {

            int curr_len = 0;
            std::string res = "";
            char chars[] = {'t','n','\\','b','f','r','\''};
            int chars_sz = 7;
            char replacement[] = {'\t','\n','\\','\b','\f','\r','\''};
            for (int i=0; i< yyleng; i++)
            {
                if (!(i<yyleng-1 && (yytext[i] == '\\') && (yytext[i+1] == '\n')) )
                {   
                    if(i < yyleng - 1 && yytext[i] == '\\' && (yytext[i + 1] != '\n')){
                        i++;
                        curr_len++;
                        int is_error = 1;
                        for(int j = 0; j < chars_sz; j++){
                            if(yytext[i] == chars[j]){
                                res += " ";
                                res[curr_len - 1] = replacement[j];
                                is_error = 0;
                                break;
                            }
                        }
                        if(is_error){
                            printf("ERROR IN STRING DECLARATION: \\%c\n",yytext[i]);
                        }                        
                    }
                    else{
                        curr_len++;
                        res += " ";
                        res[curr_len - 1] = yytext[i];
                    }
                }
                else{
                    i++;
                }
            }
            yylval.astNode = new String_literalNode("String_literal", "String_literal",res);
            return STRING_LITERAL;
}

{LITERALCHAR} {

            int curr_len = 0;
            std::string res = "";
            char chars[] = {'t','n','\\','b','f','r','\''};
            int chars_sz = 7;
            char replacement[] = {'\t','\n','\\','\b','\f','\r','\''};
            for (int i=0; i< yyleng; i++)
            {
                if (!(i<yyleng-1 && (yytext[i] == '\\') && (yytext[i+1] == '\n')) )
                {   
                    if(i < yyleng - 1 && yytext[i] == '\\' && (yytext[i + 1] != '\n')){
                        i++;
                        curr_len++;
                        int is_error = 1;
                        for(int j = 0; j < chars_sz; j++){
                            if(yytext[i] == chars[j]){
                                res += " ";
                                res[curr_len - 1] = replacement[j];
                                is_error = 0;
                                break;
                            }
                        }
                        if(is_error){
                            printf("ERROR IN STRING DECLARATION: \\%c\n",yytext[i]);
                        }                        
                    }
                    else{
                        curr_len++;
                        res += " ";
                        res[curr_len - 1] = yytext[i];
                    }
                }
                else{
                    i++;
                }
            }
            yylval.astNode = new String_literalNode("String_literal", "String_literal",res);
            return STRING_LITERAL;
}

{LEFT_PARENTHESIS} {
    return LEFT_PARENTHESIS;
}

{RIGHT_PARENTHESIS} {
    return RIGHT_PARENTHESIS;
}

{CURLY_LEFT_BRACKET} {
    return CURLY_LEFT_BRACKET;
}

{CURLY_RIGHT_BRACKET} {
    return CURLY_RIGHT_BRACKET;
}

{SQUARE_LEFT_BRACKET} {
    return SQUARE_LEFT_BRACKET;
}

{SQUARE_RIGHT_BRACKET} {
    return SQUARE_RIGHT_BRACKET;
}

{FALSE} {
    return FALSE;
}

{NONE} {
    return NONE;
}

{TRUE} {
    return TRUE;
}

{AND} {
    return AND;
}

{AS} {
    return AS;
}

{ASSERT} {
    return ASSERT;
}

{ASYNC} {
    return ASYNC;
}

{AWAIT} {
    return AWAIT;
}

{BREAK} {
    return BREAK;
}

{CLASS} {
    return CLASS;
}

{CONTINUE} {
    return CONTINUE;
}

{DEF} {
    return DEF;
}

{DEL} {
    return DEL;
}

{ELIF} {
    return ELIF;
}

{ELSE} {
    return ELSE;
}

{EXCEPT} {
    return EXCEPT;
}

{FINALLY} {
    return FINALLY;
}

{FOR} {
    return FOR;
}

{FROM} {
    return FROM;
}

{GLOBAL} {
    return GLOBAL;
}

{IF} {
    return IF;
}

{IMPORT} {
    return IMPORT;
}

{IN} {
    return IN;
}

{IS} {
    return IS;
}

{LAMBDA} {
    return LAMBDA;
}

{NONLOCAL} {
    return NONLOCAL;
}

{NOT} {
    return NOT;
}

{OR} {
    return OR;
}

{PASS} {
    return PASS;
}

{RAISE} {

    return RAISE;
}

{RETURN} {
    return RETURN;
}

{TRY} {
    return TRY;
}

{WHILE} {
    return WHILE;
}

{WITH} {
    return WITH;
}

{YIELD} {
    return YIELD;
}

{MATCH} {
    return MATCH;
}

{CASE} {
    return CASE;
}

{EQUALS} {
    return EQUALS;
}

{PLUS_EQUAL} {
    return PLUS_EQUAL;
}

{MINUS_EQUAL} {
    return MINUS_EQUAL;
}

{MULTIPLY_EQUAL} {
    return MULTIPLY_EQUAL;
}

{DIVIDE_EQUAL} {
    return DIVIDE_EQUAL;
}

{FLOOR_DIVIDE_EQUAL} {
    return FLOOR_DIVIDE_EQUAL;
}

{MODULO_EQUAL} {
    return MODULO_EQUAL;
}

{EXPONENTIATE_EQUAL} {
    return EXPONENTIATE_EQUAL;
}

{RIGHT_SHIFT_EQUAL} {
    return RIGHT_SHIFT_EQUAL;
}

{LEFT_SHIFT_EQUAL} {
    return LEFT_SHIFT_EQUAL;
}

{BITWISE_AND_EQUAL} {
    return BITWISE_AND_EQUAL;
}

{BITWISE_OR_EQUAL} {
    return BITWISE_OR_EQUAL;
}

{BITWISE_XOR_EQUAL} {
    return BITWISE_XOR_EQUAL;
}

{BITWISE_NEGATION_EQUAL} {
    return BITWISE_NEGATION_EQUAL;
}

{PLUS} {
    return PLUS;
}

{MINUS} {
    return MINUS;
}

{MULTIPLY} {
    return MULTIPLY;
}

{DIVIDE} {
    return DIVIDE;
}

{FLOOR_DIVIDE} {
    return FLOOR_DIVIDE;
}

{MODULO} {
    return MODULO;
}

{EXPONENTIATE} {
    return EXPONENTIATE;
}

{EQUAL_TO} {
    return EQUAL_TO;
}

{NOT_EQUAL_TO} {
    return NOT_EQUAL_TO;
}

{LESS_THAN} {
    return LESS_THAN;
}

{GREATER_THAN} {
    return GREATER_THAN;
}

{LESS_THAN_OR_EQUAL_TO} {
    return LESS_THAN_OR_EQUAL_TO;
}

{GREATER_THAN_OR_EQUAL_TO} {
    return GREATER_THAN_OR_EQUAL_TO;
}

{BITWISE_AND} {
    return BITWISE_AND;
}

{BITWISE_OR} {
    return BITWISE_OR;
}

{BITWISE_XOR} {
    return BITWISE_XOR;
}

{BITWISE_NEGATION} {
    return BITWISE_NEGATION;
}

{LEFT_SHIFT} {
    return LEFT_SHIFT;
}

{RIGHT_SHIFT} {
    return RIGHT_SHIFT;
}

{REAL_NUMBER} {
            yylval.astNode = new Real_numberNode("Real_Number", "Real_Number",std::stof(yytext));
            return REAL_NUMBER;
}

{DIGIT}+ {
            yylval.astNode = new NumberNode("NUMBER", "Integer", atoi(yytext));
            return NUMBER;
}

{IDENTIFIER} {
            yylval.astNode = new IdentifierNode("IDENTIFIER", "Identifier", yytext);
            return IDENTIFIER;
}

{COLON} {
    return COLON;
}

{COMMA} {
    return COMMA;
}

{SEMICOLON} {
    return SEMICOLON;
}

{DOT} {
    return DOT;
}

{DOUBLE_QUOTATION} {
    return DOUBLE_QUOTATION;
}

{SINGLE_QUOTATION} {
    return SINGLE_QUOTATION;
}

{BACK_SLASH} {
    return BACK_SLASH;
}

{AT_SIGN} {
    return AT_SIGN;
}

\#.* {
            yylval.astNode = new CommentNode("Comment", "Comment",yytext);
            return COMMENTS;
}


<INITIAL>\n {
            numberOfTabs = 0;
            BEGIN(tab);
            return NEW_LINE;
}

<tab>[(\t|"    ")] {
            numberOfTabs += yyleng;
}


<tab>[\n] {
    numberOfTabs = 0;
    BEGIN(tab);
    return NEW_LINE;

}

<tab>[^\t"    "\n] {
    if(isEmpty()){
        push(0);
    }
    unput(yytext[yyleng-1]);
    int states[] = {INDENT,DEDENT,NO_CHANGES};
    int state = -1;
    if (numberOfTabs > lastNumberOfTabs) {
        push(numberOfTabs);
        lastNumberOfTabs = numberOfTabs;
        BEGIN(INITIAL);
        return INDENT;
    } else if (numberOfTabs < lastNumberOfTabs) {
        BEGIN(DEDENT1);
        unput(' ');
        pop();
        lastNumberOfTabs = peek();

        return DEDENT;
    } else {
        BEGIN(INITIAL);
    }
}

<LINE>" " {
    BEGIN(INITIAL);
    return NEW_LINE;
}
<DEDENT1>" " {
     if(isEmpty()){
        push(0);
    }
    if (numberOfTabs < lastNumberOfTabs )
    {  
        unput(' ');
        pop();
        lastNumberOfTabs = peek();
        return DEDENT;
    }
    else if(numberOfTabs > lastNumberOfTabs)
    {
        std::cerr << "lex error: " << "Dedent error" << std::endl;

    }
    else
    {
        lastNumberOfTabs = numberOfTabs;
        unput(' ');
        BEGIN(LINE);
        }
}

" " {
            //printf("WHAIT SPACE\n");
            //return WHAIT_SPACE;
            
}
 <<EOF>> {
    BEGIN(EOF2);
    unput(' ');
}
<EOF2>" " {
    if(isEmpty()){
        push(0);
    }
    pop();
    if(!isEmpty())
    {
        unput(' ');
        return DEDENT;
    }
    else
        return ENDMARKER;
}
.   {
            return UNKNOWN_SYMBOL;
    }


%%
