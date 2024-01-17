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
#include<stdio.h>
#include<ctype.h>
#include <string.h>
#include "stack.c"
#include "old_parser.tab.h"
char* multilineString = NULL;
%}

%option noyywrap

/* Define token types as constants */
%{
int numberOfTabs = 0;
int lastNumberOfTabs = 0;

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
            multilineString = strdup("");
}   

<tab>\'\'\'  {
            BEGIN(S11);
            multilineString = strdup("");
}  

<S11>[^"'"] {
            multilineString = realloc(multilineString, strlen(multilineString) + yyleng + 1);
    		strcat(multilineString, yytext);
}

<S11>"'" {
            BEGIN(S12);
}

<S12>"'" {
            BEGIN(S13);
}

<S12>[^"'"] {
            BEGIN(S11);
            multilineString = realloc(multilineString, strlen(multilineString) + yyleng + 2);
    		strcat(multilineString, "\'");
            strcat(multilineString,yytext);
}

<S13>"'" {
            // printf("multible line string: %s",multilineString);
            BEGIN(INITIAL);
            multilineString=NULL;
            return MULTILINE_STRING;
}

<S13>[^"'"] {
            multilineString = realloc(multilineString, strlen(multilineString) + yyleng + 3);
    		strcat(multilineString, "\'");
            strcat(multilineString, "\'");
            strcat(multilineString,yytext);
            BEGIN(S11);
}


<INITIAL>\"\"\"  {
            BEGIN(S21);
            multilineString = strdup("");
}
<tab>\"\"\"  {
            BEGIN(S21);
            multilineString = strdup("");
}

<S21>[^\"] {
            multilineString = realloc(multilineString, strlen(multilineString) + yyleng + 1);
    		strcat(multilineString, yytext);
}

<S21>\" {
            BEGIN(S22);
}

<S22>\" {
            BEGIN(S23);
}

<S22>[^\"] {
            BEGIN(S21);
            multilineString = realloc(multilineString, strlen(multilineString) + yyleng + 2);
    		strcat(multilineString, "\"");
            strcat(multilineString,yytext);
}

<S23>\" {
            // printf("multible line string: %s",multilineString);
            BEGIN(INITIAL);
            multilineString=NULL;
            return MULTILINE_STRING;
}

<S23>[^\"] {
            multilineString = realloc(multilineString, strlen(multilineString) + yyleng + 3);
    		strcat(multilineString, "\"");
            strcat(multilineString, "\"");
            strcat(multilineString,yytext);
            BEGIN(S21);
}


{LITERALSTRING} {

            int curr_len = 0;
            char* res = strdup("");
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
                                res = realloc(res, curr_len*sizeof(char)+1);
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
                        res = realloc(res, curr_len*sizeof(char)+1);
                        res[curr_len - 1] = yytext[i];
                    }
                }
                else{
                    i++;
                }
            }
            res[curr_len] = 0;
            // printf("STRING_LITERAL: %s\n", res);
            return STRING_LITERAL;
}

{LITERALCHAR} {

            int curr_len = 0;
            char* res = strdup("");
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
                                res = realloc(res, curr_len*sizeof(char)+1);
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
                        res = realloc(res, curr_len*sizeof(char)+1);
                        res[curr_len - 1] = yytext[i];
                    }
                }
                else{
                    i++;
                }
            }
            res[curr_len] = 0;
            // printf("STRING_LITERAL: %s\n", res);
            return STRING_LITERAL;
}

{LEFT_PARENTHESIS} {
    // printf("LEFT ROUND BRACKET: %s\n", yytext);
    return LEFT_PARENTHESIS;
}

{RIGHT_PARENTHESIS} {
    // printf("RIGHT ROUND BRACKET: %s\n", yytext);
    return RIGHT_PARENTHESIS;
}

{CURLY_LEFT_BRACKET} {
    // printf("CURLY LEFT BRACKET: %s\n", yytext);
    return CURLY_LEFT_BRACKET;
}

{CURLY_RIGHT_BRACKET} {
    // printf("CURLY RIGHT BRACKET: %s\n", yytext);
    return CURLY_RIGHT_BRACKET;
}

{SQUARE_LEFT_BRACKET} {
    // printf("SQUARE LEFT BRACKET: %s\n", yytext);
    return SQUARE_LEFT_BRACKET;
}

{SQUARE_RIGHT_BRACKET} {
    // printf("SQUARE RIGHT BRACKET: %s\n", yytext);
    return SQUARE_RIGHT_BRACKET;
}

{FALSE} {
    // printf("FALSE: %s\n", yytext);
    return FALSE;
}

{NONE} {
    // printf("NONE: %s\n", yytext);
    return NONE;
}

{TRUE} {
    // printf("TRUE: %s\n", yytext);
    return TRUE;
}

{AND} {
    // printf("AND: %s\n", yytext);
    return AND;
}

{AS} {
    // printf("AS: %s\n", yytext);
    return AS;
}

{ASSERT} {
    // printf("ASSERT: %s\n", yytext);
    return ASSERT;
}

{ASYNC} {
    // printf("ASYNC: %s\n", yytext);
    return ASYNC;
}

{AWAIT} {
    // printf("AWAIT: %s\n", yytext);
    return AWAIT;
}

{BREAK} {
    // printf("BREAK: %s\n", yytext);
    return BREAK;
}

{CLASS} {
    // printf("CLASS: %s\n", yytext);
    return CLASS;
}

{CONTINUE} {
    // printf("CONTINUE: %s\n", yytext);
    return CONTINUE;
}

{DEF} {
    // printf("DEF: %s\n", yytext);
    return DEF;
}

{DEL} {
    // printf("DEL: %s\n", yytext);
    return DEL;
}

{ELIF} {
    // printf("ELIF: %s\n", yytext);
    return ELIF;
}

{ELSE} {
    // printf("ELSE: %s\n", yytext);
    return ELSE;
}

{EXCEPT} {
    // printf("EXCEPT: %s\n", yytext);
    return EXCEPT;
}

{FINALLY} {
    // printf("FINALLY: %s\n", yytext);
    return FINALLY;
}

{FOR} {
    // printf("FOR: %s\n", yytext);
    return FOR;
}

{FROM} {
    // printf("FROM: %s\n", yytext);
    return FROM;
}

{GLOBAL} {
    // printf("GLOBAL: %s\n", yytext);
    return GLOBAL;
}

{IF} {
    // printf("IF: %s\n", yytext);
    return IF;
}

{IMPORT} {
    // printf("IMPORT: %s\n", yytext);
    return IMPORT;
}

{IN} {
    // printf("IN: %s\n", yytext);
    return IN;
}

{IS} {
    // printf("IS: %s\n", yytext);
    return IS;
}

{LAMBDA} {
    // printf("LAMBDA: %s\n", yytext);
    return LAMBDA;
}

{NONLOCAL} {
    // printf("NONLOCAL: %s\n", yytext);
    return NONLOCAL;
}

{NOT} {
    // printf("NOT: %s\n", yytext);
    return NOT;
}

{OR} {
    // printf("OR: %s\n", yytext);
    return OR;
}

{PASS} {
    // printf("PASS: %s\n", yytext);
    return PASS;
}

{RAISE} {

    // printf("RAISE: %s\n", yytext);
    return RAISE;
}

{RETURN} {
    // printf("RETURN: %s\n", yytext);
    return RETURN;
}

{TRY} {
    // printf("TRY: %s\n", yytext);
    return TRY;
}

{WHILE} {
    // printf("WHILE: %s\n", yytext);
    return WHILE;
}

{WITH} {
    // printf("WITH: %s\n", yytext);
    return WITH;
}

{YIELD} {
    // printf("YIELD: %s\n", yytext);
    return YIELD;
}

{MATCH} {
    // printf("MATCH: %s\n", yytext);
    return MATCH;
}

{CASE} {
    //printf("CASE: %s\n", yytext);
    return CASE;
}

{EQUALS} {
    // printf("EQUALS: %s\n", yytext);
    return EQUALS;
}

{PLUS_EQUAL} {
    //printf("PLUS EQUAL: %s\n", yytext);
    return PLUS_EQUAL;
}

{MINUS_EQUAL} {
    //printf("MINUS EQUAL: %s\n", yytext);
    return MINUS_EQUAL;
}

{MULTIPLY_EQUAL} {
    //printf("MULTIPLY EQUAL: %s\n", yytext);
    return MULTIPLY_EQUAL;
}

{DIVIDE_EQUAL} {
    //printf("DIVIDE EQUAL: %s\n", yytext);
    return DIVIDE_EQUAL;
}

{FLOOR_DIVIDE_EQUAL} {
    //printf("FLOOR DIVIDE EQUAL: %s\n", yytext);
    return FLOOR_DIVIDE_EQUAL;
}

{MODULO_EQUAL} {
    //printf("MODULO EQUAL: %s\n", yytext);
    return MODULO_EQUAL;
}

{EXPONENTIATE_EQUAL} {
    //printf("EXPONENTIATE EQUAL: %s\n", yytext);
    return EXPONENTIATE_EQUAL;
}

{RIGHT_SHIFT_EQUAL} {
    //printf("RIGHT SHIFT EQUAL: %s\n", yytext);
    return RIGHT_SHIFT_EQUAL;
}

{LEFT_SHIFT_EQUAL} {
    //printf("LEFT SHIFT EQUAL: %s\n", yytext);
    return LEFT_SHIFT_EQUAL;
}

{BITWISE_AND_EQUAL} {
    //printf("BITWISE AND EQUAL: %s\n", yytext);
    return BITWISE_AND_EQUAL;
}

{BITWISE_OR_EQUAL} {
    //printf("BITWISE OR EQUAL: %s\n", yytext);
    return BITWISE_OR_EQUAL;
}

{BITWISE_XOR_EQUAL} {
    //printf("BITWISE XOR EQUAL: %s\n", yytext);
    return BITWISE_XOR_EQUAL;
}

{BITWISE_NEGATION_EQUAL} {
    //printf("BITWISE NEGATION EQUAL: %s\n", yytext);
    return BITWISE_NEGATION_EQUAL;
}

{PLUS} {
    //printf("PLUS: %s\n", yytext);
    return PLUS;
}

{MINUS} {
    //printf("MINUS: %s\n", yytext);
    return MINUS;
}

{MULTIPLY} {
    //printf("MULTIPLY: %s\n", yytext);
    return MULTIPLY;
}

{DIVIDE} {
    //printf("DIVIDE: %s\n", yytext);
    return DIVIDE;
}

{FLOOR_DIVIDE} {
    //printf("FLOOR DIVIDE: %s\n", yytext);
    return FLOOR_DIVIDE;
}

{MODULO} {
    //printf("MODULO: %s\n", yytext);
    return MODULO;
}

{EXPONENTIATE} {
    //printf("EXPONENTIATE: %s\n", yytext);
    return EXPONENTIATE;
}

{EQUAL_TO} {
    //printf("EQUAL TO: %s\n", yytext);
    return EQUAL_TO;
}

{NOT_EQUAL_TO} {
    //printf("NOT EQUAL TO: %s\n", yytext);
    return NOT_EQUAL_TO;
}

{LESS_THAN} {
    //printf("LESS THAN: %s\n", yytext);
    return LESS_THAN;
}

{GREATER_THAN} {
    //printf("GREATER THAN: %s\n", yytext);
    return GREATER_THAN;
}

{LESS_THAN_OR_EQUAL_TO} {
    //printf("LESS THAN OR EQUAL TO: %s\n", yytext);
    return LESS_THAN_OR_EQUAL_TO;
}

{GREATER_THAN_OR_EQUAL_TO} {
    //printf("GREATER THAN OR EQUAL TO: %s\n", yytext);
    return GREATER_THAN_OR_EQUAL_TO;
}

{BITWISE_AND} {
    //printf("BITWISE AND: %s\n", yytext);
    return BITWISE_AND;
}

{BITWISE_OR} {
    //printf("BITWISE OR: %s\n", yytext);
    return BITWISE_OR;
}

{BITWISE_XOR} {
    //printf("BITWISE XOR: %s\n", yytext);
    return BITWISE_XOR;
}

{BITWISE_NEGATION} {
    //printf("BITWISE NEGATION: %s\n", yytext);
    return BITWISE_NEGATION;
}

{LEFT_SHIFT} {
    //printf("LEFT SHIFT: %s\n", yytext);
    return LEFT_SHIFT;
}

{RIGHT_SHIFT} {
    //printf("RIGHT SHIFT: %s\n", yytext);
    return RIGHT_SHIFT;
}

{REAL_NUMBER} {
            //printf("REAL NUMBER: %s\n", yytext);
            return REAL_NUMBER;
}

{DIGIT}+ {
            //printf("Number = %s \n",yytext);
            return NUMBER;
}

{IDENTIFIER} {
            //printf("IDENTIFIER = %s \n",yytext);
            return IDENTIFIER;
}

{COLON} {
    //printf("COLON = %s \n",yytext);
    return COLON;
}

{COMMA} {
    //printf("COMMA = %s \n",yytext);
    return COMMA;
}

{SEMICOLON} {
    //printf("SEMICOLON = %s \n",yytext);
    return SEMICOLON;
}

{DOT} {
    //printf("DOT = %s \n",yytext);
    return DOT;
}

{DOUBLE_QUOTATION} {
    //printf("DOUBLE QUOTATION = %s \n",yytext);
    return DOUBLE_QUOTATION;
}

{SINGLE_QUOTATION} {
    //printf("SINGLE QUOTATION = %s \n",yytext);
    return SINGLE_QUOTATION;
}

{BACK_SLASH} {
    //printf("BACK SLASH = %s \n",yytext);
    return BACK_SLASH;
}

{AT_SIGN} {
    return AT_SIGN;
}

\#.* {
            //printf("COMMENTS: %s\n", yytext);
            return COMMENTS;
}


<INITIAL>\n {
            numberOfTabs = 0;
            BEGIN(tab);
            printf("NEW LINE\n");
            return NEW_LINE;
}

<tab>[(\t|"    ")] {
            numberOfTabs += yyleng;
}


<tab>[\n] {
    numberOfTabs = 0;
    BEGIN(tab);
    printf("NEW LINE\n");
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
        //printf("INDENT, # TABS: %d\n",numberOfTabs);
    } else if (numberOfTabs < lastNumberOfTabs) {
        BEGIN(DEDENT1);
        unput(' ');
        pop();
        lastNumberOfTabs = peek();
        return DEDENT;
    } else {
        unput(' ');
        BEGIN(LINE);
    }
}

<LINE>" " {
    BEGIN(INITIAL);
    return NEW_LINE;
}
<DEDENT1>" " {
    if (numberOfTabs < lastNumberOfTabs )
    {  
        unput(' ');
        pop();
        lastNumberOfTabs = peek();
        return DEDENT;
    }
    else if(numberOfTabs > lastNumberOfTabs)
    {
        printf("DEDENT ERROR, # TABS: %d\n",numberOfTabs);
        unput(' ');
        BEGIN(LINE);
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
            //printf("UNKNOWN SYMBOL: %s\n",yytext);
            return UNKNOWN_SYMBOL;
    }


%%
