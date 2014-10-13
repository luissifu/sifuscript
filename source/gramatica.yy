/*
 * gramatica.y file
 in order to specify the grammar
 */

%{ 
#include "expr/Expression.h"

#include <cstdio>
#include <iostream>
using namespace std;
 
%}
 

 
/*** yacc/bison Declarations ***/
%output  "gramatica.cpp"

/* write out a header file containing the token defines */
%defines "gramatica.h"

/* Require bison 2.3 or later */
%require "2.3"

/* add debug output code to generated parser. disable this for release
 * versions. */
%debug

/* start symbol is named "start" */
%start program

/* use newer C++ skeleton file */
%skeleton "lalr1.cc"

/* namespace to enclose parser in */
%name-prefix="ss"

/* set the parser's class identifier */
%define "parser_class_name" "Gramatica"

/* keep track of the current position within the input */
%locations
%initial-action
{
    // initialize the initial location object
    @$.begin.filename = @$.end.filename = &driver.streamname;
};

/* The driver is passed by reference to the parser and to the scanner. This
 * provides a simple but effective pure interface, not relying on global
 * variables. */
%parse-param { class Driver& driver }

/* verbose error messages */
%error-verbose

/*** THE GRAMMAR ***/

%union 
{
	int token;
}

%token END 0 "end of file"

%token <token> CONST_NULL CONST_FALSE CONST_TRUE CONST_INT CONST_FLOAT CONST_STR CONST_CHAR
%token <token> TK_IF TK_ELSE TK_ELIF TK_FOR TK_DO TK_WHILE TK_RETURN
%token <token> TK_FUNC TK_CLASS TK_IMPORT TK_PRINT
%token <token> TPNM_BOOL TPNM_CHAR TPNM_SHORT TPNM_INT TPNM_LONG TPNM_FLOAT TPNM_DOUBLE TPNM_STR
%token <token> ACC_PRIVATE ACC_PUBLIC
%token <token> OP_NOT OP_AND OP_OR
%token <token> OP_MULT OP_DIV OP_MOD OP_ADD OP_SUB
%token <token> OP_LESS OP_MORE OP_MOREEQ OP_LESSEQ OP_EQ OP_NOTEQ
%token <token> OP_ASSIGN
%token <token> TK_LEFTBRACKET TK_RIGHTBRACKET TK_LEFTPAREN TK_RIGHTPAREN TK_LEFTSQBRACKET TK_RIGHTSQBRACKET
%token <token> TK_COMMA TK_SEMICOLON TK_NEWLINE TK_DOT
%token <token> T_ID T_CLASSNAME


%{

#include "driver/Driver.h"

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lex

%}


%%

program : imports statelist 														{ cout << "program" << endl; }
		| imports 																	{ cout << "program" << endl; }
		| statelist																	{ cout << "program" << endl; }
		;

imports : TK_IMPORT CONST_STR delimiter moreimps 									{ cout << "imports" << endl; }
		;

moreimps : imports																	{ ; }
		 | /*E*/																	{ ; }
		 ;

statelist : state morestates														{ cout << "statelist" << endl; }
		  ;

morestates : state morestates 														{ ; }
		   | /*E*/																	{ ; }
		   ;

state : assign 																		{ cout << "state" << endl; }
	  |	conditional																	{ cout << "state" << endl; }
	  |	loop 																		{ cout << "state" << endl; }
	  |	class 																		{ cout << "state" << endl; }
	  |	function																	{ cout << "state" << endl; }
	  |	var 																		{ cout << "state" << endl; }
	  |	print 																		{ cout << "state" << endl; }
	  |	return 																		{ cout << "state" << endl; }
	  |	func_call																	{ cout << "state" << endl; }
	  |	TK_NEWLINE																	{ cout << endl; }
	  ;

assign : id ass_op expresion delimiter 												{ cout << "assign" << endl; }
	   ;

delimiter : TK_NEWLINE 																{ cout << "delim" << endl; }
		  | TK_SEMICOLON 															{ cout << "delim" << endl; }
		  ;

return : TK_RETURN expresion delimiter 												{ cout << "return" << endl; }
	   ;

id : T_ID																			{ cout << "id" << endl; }
   | T_ID TK_LEFTSQBRACKET CONST_INT TK_RIGHTSQBRACKET 								{ cout << "id" << endl; }
   | T_ID TK_DOT T_ID 																{ cout << "id" << endl; }
   ;

conditional : if elseif else 														{ cout << "cond" << endl; }
			;

maybenl : TK_NEWLINE 																{ ; }
		| /*E*/ 																	{ ; }
		; 

if : TK_IF expresion maybenl block 			 		 								{ cout << "if" << endl; }
   ;

elseif : TK_ELIF expresion maybenl block elseif										{ cout << "else if" << endl; }
	   | /*E*/ 																		{ ; }
	   ;

else : TK_ELSE maybenl block 														{ cout << "else" << endl; }
	 | /*E*/  																		{ ; }
	 ;

loop : for 																			{ cout << "loop" << endl; }
	 | do 																			{ cout << "loop" << endl; }
	 | while 																		{ cout << "loop" << endl; }
	 ;

for : TK_FOR assign expresion TK_SEMICOLON expresion maybenl block					{ cout << "for" << endl; }
	;

do : TK_DO maybenl block TK_WHILE expresion delimiter	 							{ cout << "do" << endl; }
   ;

while : TK_WHILE expresion maybenl block											{ cout << "while" << endl; }
	  ;

type : TPNM_BOOL																	{ cout << "type" << endl; }
	 | TPNM_CHAR																	{ cout << "type" << endl; }
	 | TPNM_SHORT																	{ cout << "type" << endl; }
	 | TPNM_INT																		{ cout << "type" << endl; }
	 | TPNM_LONG																	{ cout << "type" << endl; }
	 | TPNM_FLOAT																	{ cout << "type" << endl; }
	 | TPNM_DOUBLE																	{ cout << "type" << endl; }
	 | TPNM_STR																		{ cout << "type" << endl; }
	 | T_CLASSNAME																	{ cout << "class type" << endl; }
	 ;

class : TK_CLASS T_CLASSNAME maybenl TK_LEFTBRACKET class_dec TK_RIGHTBRACKET 		{ cout << "class" << endl; }
	  ;

class_dec : class_st class_dec 														{ ; }
		  | /*E*/
		  ;

class_st : accesor var 																{ cout << "class var" << endl; }
		 | accesor function 														{ cout << "class func" << endl; }
		 | TK_NEWLINE 		 														{ ; }
		 ;

accesor : ACC_PRIVATE 																{ cout << "acc priv" << endl; }
		| ACC_PUBLIC 																{ cout << "acc pub" << endl; }
		;

function : TK_FUNC type T_ID TK_LEFTPAREN args TK_RIGHTPAREN maybenl block			{ cout << "func" << endl; }
		 | TK_FUNC T_ID TK_LEFTPAREN args TK_RIGHTPAREN maybenl block				{ cout << "func" << endl; }
		 ;

args : type T_ID moreargs 															{ cout << "args" << endl; }
	 | /*E*/ 																		{ ; }
	 ;

moreargs : TK_COMMA type T_ID moreargs 												{ ; }
		 | /*E*/																	{ ; }
		 ;

func_call : T_ID TK_LEFTPAREN call_args TK_RIGHTPAREN delimiter 					{ cout << "func call" << endl; }
		  | T_ID TK_LEFTPAREN TK_RIGHTPAREN delimiter 								{ cout << "func call" << endl; }
		  ;

call_args : var_const 																{ cout << "args" << endl; }
		  | var_const TK_COMMA call_args 											{ cout << "args" << endl; }
		  ;

var : type id delimiter 															{ cout << "var" << endl; }
	| type id ass_op expresion delimiter 											{ cout << "var" << endl; }
	;

print : TK_PRINT expresion delimiter 												{ cout << "print" << endl; }
	  ;

block : TK_LEFTBRACKET statelist TK_RIGHTBRACKET 									{ cout << "block" << endl; }
	  | TK_LEFTBRACKET TK_RIGHTBRACKET 												{ cout << "block" << endl; }
	  ;

var_const : boolean 																{ ; }
		  | CONST_CHAR 																{ cout << "const" << endl; }
		  | CONST_INT 																{ cout << "const" << endl; }
		  | CONST_FLOAT 															{ cout << "const" << endl; }
		  | CONST_STR 																{ cout << "const" << endl; }
		  | list 																	{ ; }
		  ;

boolean : CONST_TRUE 																{ cout << "true" << endl; }
		| CONST_FALSE 																{ cout << "false" << endl; }
		;

list : TK_LEFTSQBRACKET list_elem TK_RIGHTSQBRACKET			 						{ cout << "list" << endl; }
	 | TK_LEFTSQBRACKET TK_RIGHTSQBRACKET 		 									{ cout << "list" << endl; }
	 ;

list_elem : list_e 																	{ cout << "list elem" << endl; }
		  | list_e TK_COMMA list_elem 												{ cout << "list elem" << endl; }
		  ;

list_e : var_const 																	{ ; }
	   | id 																		{ ; }
	   ;

expresion : exp 																	{ cout << "expresion" << endl; }
		  | exp rel_op exp 															{ cout << "expresion" << endl; }
		  ;

exp : e 																			{ cout << "exp" << endl; }
	| e comp_op e 																	{ cout << "exp" << endl; }
	;

e : term 																			{ cout << "e" << endl; }
  | term mult_op e 																	{ cout << "e" << endl; }
  ;

term : fact																			{ cout << "term" << endl; }
	 | fact add_op term																{ cout << "term" << endl; }
	 ;

fact : neg_op f 																	{ cout << "fact" << endl; }
	 | f 																			{ cout << "fact" << endl; }
	 ;

f : TK_LEFTPAREN expresion TK_RIGHTPAREN 											{ ; }
  | var_const 																		{ ; }
  | id 																				{ ; }
  ;

rel_op : OP_AND 																	{ cout << "rel op" << endl; }
	   | OP_OR 																		{ cout << "rel op" << endl; }
	   ;

comp_op : OP_LESS 																	{ cout << "comp op" << endl; }
		| OP_MORE 																	{ cout << "comp op" << endl; }
		| OP_LESSEQ																	{ cout << "comp op" << endl; }
		| OP_MOREEQ																	{ cout << "comp op" << endl; }
		| OP_EQ 																	{ cout << "comp op" << endl; }
		| OP_NOTEQ 																	{ cout << "comp op" << endl; }
		;

mult_op : OP_MULT 																	{ cout << "mult op" << endl; }
		| OP_DIV 																	{ cout << "mult op" << endl; }
		| OP_MOD 																	{ cout << "mult op" << endl; }
		;

add_op : OP_ADD 																	{ cout << "add op" << endl; }
	   | OP_SUB 																	{ cout << "add op" << endl; }
	   ;

neg_op : OP_NOT																		{ cout << "neg op" << endl; }
	   ;
	   
ass_op : OP_ASSIGN																	{ cout << "ass op" << endl; }
	   ;

 
%%

void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
    driver.error(l, m);
}