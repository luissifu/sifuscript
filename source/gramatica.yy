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
%name-prefix "ss"

/* set the parser's class identifier */
%define "parser_class_name" { Gramatica }

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
	char* string;
}

%token END 0 "end of file"

%token <string> CONST_NULL CONST_FALSE CONST_TRUE CONST_INT CONST_FLOAT
%token <string> CONST_STR CONST_CHAR
%token <token> TK_IF TK_ELSE TK_ELIF TK_FOR TK_DO TK_WHILE TK_RETURN
%token <token> TK_FUNC TK_CLASS TK_IMPORT TK_PRINT
%token <string> TPNM_BOOL TPNM_CHAR TPNM_SHORT TPNM_INT TPNM_LONG TPNM_FLOAT TPNM_DOUBLE TPNM_STR
%token <token> ACC_PRIVATE ACC_PUBLIC
%token <token> OP_NOT OP_AND OP_OR
%token <token> OP_MULT OP_DIV OP_MOD OP_ADD OP_SUB
%token <token> OP_LESS OP_MORE OP_MOREEQ OP_LESSEQ OP_EQ OP_NOTEQ
%token <token> OP_ASSIGN
%token <token> TK_LEFTBRACKET TK_RIGHTBRACKET TK_LEFTPAREN TK_RIGHTPAREN TK_LEFTSQBRACKET TK_RIGHTSQBRACKET
%token <token> TK_COMMA TK_SEMICOLON TK_NEWLINE TK_DOT
%token <string> T_ID T_CLASSNAME


%{

#include "driver/Driver.h"

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lex

%}


%%

program : imports statelist 														{ ; }
		| imports 																	{ ; }
		| statelist																	{ ; }
		;

imports : TK_IMPORT CONST_STR delimiter moreimps 									{ ; }
		;

moreimps : imports																	{ ; }
		 | /*E*/																	{ ; }
		 ;

statelist : state morestates														{ ; }
		  ;

morestates : state morestates 														{ ; }
		   | /*E*/																	{ ; }
		   ;

state : assign 																		{ ; }
	  |	conditional																	{ ; }
	  |	loop 																		{ ; }
	  |	class 																		{ ; }
	  |	function																	{ ; }
	  |	var 																		{ ; }
	  |	print 																		{ ; }
	  |	return 																		{ ; }
	  |	func_call																	{ ; }
	  |	TK_NEWLINE																	{ ; }
	  ;

assign : id ass_op stat_assign_aux expresion delimiter 								{ driver.genAssign(); }
	   ;

delimiter : TK_NEWLINE 																{ ; }
		  | TK_SEMICOLON 															{ ; }
		  ;

return : TK_RETURN expresion delimiter 												{ ; }
	   ;

id : T_ID																			{ driver.addId($1); }
   | T_ID TK_LEFTSQBRACKET CONST_INT TK_RIGHTSQBRACKET 								{ driver.addId($1); }
   | T_ID TK_DOT T_ID 																{ ; }
   ;

conditional : if elseif else 														{ ; }
			;

maybenl : TK_NEWLINE 																{ ; }
		| /*E*/ 																	{ ; }
		;

if : TK_IF expresion maybenl block 			 		 								{ ; }
   ;

elseif : TK_ELIF expresion maybenl block elseif										{ ; }
	   | /*E*/ 																		{ ; }
	   ;

else : TK_ELSE maybenl block 														{ ; }
	 | /*E*/  																		{ ; }
	 ;

loop : for 																			{ ; }
	 | do 																			{ ; }
	 | while 																		{ ; }
	 ;

for : TK_FOR assign expresion TK_SEMICOLON expresion maybenl block					{ ; }
	;

do : TK_DO maybenl block TK_WHILE expresion delimiter	 							{ ; }
   ;

while : TK_WHILE expresion maybenl block											{ ; }
	  ;

type : TPNM_BOOL																	{ driver.addType($1); }
	 | TPNM_CHAR																	{ driver.addType($1); }
	 | TPNM_SHORT																	{ driver.addType($1); }
	 | TPNM_INT																		{ driver.addType($1); }
	 | TPNM_LONG																	{ driver.addType($1); }
	 | TPNM_FLOAT																	{ driver.addType($1); }
	 | TPNM_DOUBLE																	{ driver.addType($1); }
	 | TPNM_STR																		{ driver.addType($1); }
	 | T_CLASSNAME																	{ driver.addType($1); }
	 ;

class : TK_CLASS T_CLASSNAME maybenl TK_LEFTBRACKET class_dec TK_RIGHTBRACKET 		{ ; }
	  ;

class_dec : class_st class_dec 														{ ; }
		  | /*E*/
		  ;

class_st : accesor var 																{ ; }
		 | accesor function 														{ ; }
		 | TK_NEWLINE 		 														{ ; }
		 ;

accesor : ACC_PRIVATE 																{ ; }
		| ACC_PUBLIC 																{ ; }
		;

function : TK_FUNC type T_ID TK_LEFTPAREN args TK_RIGHTPAREN maybenl block			{ ; }
		 | TK_FUNC T_ID TK_LEFTPAREN args TK_RIGHTPAREN maybenl block				{ ; }
		 ;

args : type T_ID moreargs 															{ ; }
	 | /*E*/ 																		{ ; }
	 ;

moreargs : TK_COMMA type T_ID moreargs 												{ ; }
		 | /*E*/																	{ ; }
		 ;

func_call : T_ID TK_LEFTPAREN call_args TK_RIGHTPAREN delimiter 					{ ; }
		  | T_ID TK_LEFTPAREN TK_RIGHTPAREN delimiter 								{ ; }
		  ;

call_args : var_const 																{ ; }
		  | var_const TK_COMMA call_args 											{ ; }
		  ;

var : type id delimiter 															{ driver.checkVar(); }
	| type id ass_op expresion delimiter 											{ ; }
	;

print : TK_PRINT expresion delimiter 												{ ; }
	  ;

block : TK_LEFTBRACKET statelist TK_RIGHTBRACKET 									{ ; }
	  | TK_LEFTBRACKET TK_RIGHTBRACKET 												{ ; }
	  ;

var_const : boolean 																{ ; }
		  | CONST_CHAR 																{ driver.addConst($1, 'c'); }
		  | CONST_INT 																{ driver.addConst($1, 'i'); }
		  | CONST_FLOAT 															{ driver.addConst($1, 'f'); }
		  | CONST_STR 																{ driver.addConst($1, 's'); }
		  | list 																	{ ; }
		  ;

boolean : CONST_TRUE 																{ driver.addConst($1, 'b'); }
		| CONST_FALSE 																{ driver.addConst($1, 'b'); }
		;

list : TK_LEFTSQBRACKET list_elem TK_RIGHTSQBRACKET			 						{ ; }
	 | TK_LEFTSQBRACKET TK_RIGHTSQBRACKET 		 									{ ; }
	 ;

list_elem : list_e 																	{ ; }
		  | list_e TK_COMMA list_elem 												{ ; }
		  ;

list_e : var_const 																	{ ; }
	   | id 																		{ ; }
	   ;

expresion : exp stat_exp_aux4														{ driver.clearExp(); }
		  | exp stat_exp_aux4 rel_op expresion										{ ; }
		  ;

exp : e 																			{ ; }
	| e comp_op e stat_exp_aux5														{ ; }
	;

e : term stat_exp_aux2																{ ; }
  | term stat_exp_aux2 add_op e 													{ ; }
  ;

term : fact	stat_exp_aux3															{ ; }
	 | fact stat_exp_aux3 mult_op term												{ ; }
	 ;

fact : neg_op f 																	{ driver.genExp('!');; }
	 | f 																			{ ; }
	 ;

f : TK_LEFTPAREN stat_exp_aux1 expresion TK_RIGHTPAREN 								{ driver.endExp(); }
  | var_const 																		{ ; }
  | id                                                                              { driver.toOperand(); }
  ;

rel_op : OP_AND 																	{ driver.toOperator('&'); }
	   | OP_OR 																		{ driver.toOperator('|'); }
	   ;

comp_op : OP_LESS 																	{ driver.toOperator('<'); }
		| OP_MORE 																	{ driver.toOperator('>'); }
		| OP_LESSEQ																	{ driver.toOperator('l'); }
		| OP_MOREEQ																	{ driver.toOperator('m'); }
		| OP_EQ 																	{ driver.toOperator('e'); }
		| OP_NOTEQ 																	{ driver.toOperator('n'); }
		;

mult_op : OP_MULT 																	{ driver.toOperator('*'); }
		| OP_DIV 																	{ driver.toOperator('/'); }
		| OP_MOD 																	{ driver.toOperator('%'); }
		;

add_op : OP_ADD 																	{ driver.toOperator('+'); }
	   | OP_SUB 																	{ driver.toOperator('-'); }
	   ;

neg_op : OP_NOT																		{ driver.toOperator('!'); }
	   ;

ass_op : OP_ASSIGN																	{ driver.toOperator('='); }
	   ;

stat_exp_aux1 : /*E*/                                                               { driver.toOperator('('); }
			  ;

stat_exp_aux2 : /*E*/                                                               { driver.genExp('+'); }
			  ;

stat_exp_aux3 : /*E*/                                                               { driver.genExp('*'); }
			 ;

stat_exp_aux4 : /*E*/                                                               { driver.genExp('&'); }
			  ;

stat_exp_aux5 : /*E*/                                                               { driver.genExp('>'); }
			  ;

stat_assign_aux : /*E*/                                                             { driver.toOperand(); }
				;
%%

void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
	driver.error(l, m);
}
