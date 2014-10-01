%{
#include <cstdio>
#include <iostream>
using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
 
void yyerror(const char *s);
%}

%union 
{
	int token;
}

%token <token> CONST_NULL CONST_FALSE CONST_TRUE CONST_INT CONST_FLOAT CONST_STR CONST_CHAR
%token <token> TK_IF TK_ELSE TK_FOR TK_DO TK_WHILE
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

%%

program : imports statelist 														{ cout << "program" << endl; }
		;

imports : TK_IMPORT CONST_STR delimiter imports 									{ cout << "imports" << endl; }
		| /*E*/																		{ ; }
		;

statelist : state statelist															{ ; }
		  | /*E*/																	{ ; }

state : assign 																		{ ; }
	  |	conditional																	{ ; }
	  |	loop 																		{ ; }
	  |	class 																		{ ; }
	  |	function																	{ ; }
	  |	var 																		{ ; }
	  |	print 																		{ ; }
	  |	func_call																	{ ; }
	  |	/*E*/ 																		{ ; }
	  ;

assign : id OP_ASSIGN expresion delimiter 											{ ; }
	   ;

delimiter : TK_NEWLINE 																{ ; }
		  | TK_SEMICOLON 															{ ; }
		  ;

id : T_ID																			{ ; }
   | T_ID TK_LEFTSQBRACKET CONST_INT TK_RIGHTSQBRACKET 								{ ; }
   | T_CLASSNAME TK_DOT T_ID 														{ ; }
   ;

conditional : TK_IF expresion TK_NEWLINE block elseif else 							{ ; }
			| TK_IF expresion block elseif else 									{ ; }
			;

elseif : TK_ELSE TK_IF TK_NEWLINE block elseif										{ ; }
	   | TK_ELSE TK_IF block elseif													{ ; }
	   | /*E*/ 																		{ ; }
	   ;

else : TK_ELSE TK_NEWLINE block 													{ ; }
	 | TK_ELSE block 																{ ; }
	 | /*E*/ 																		{ ; }
	 ;

loop : for 																			{ ; }
	 | do 																			{ ; }
	 | while 																		{ ; }
	 ;

for : assign TK_SEMICOLON expresion TK_SEMICOLON expresion TK_NEWLINE block 		{ ; }
	| assign TK_SEMICOLON expresion TK_SEMICOLON expresion block 					{ ; }
	;

do : TK_DO TK_NEWLINE block TK_WHILE expresion delimiter 							{ ; }
   | TK_DO block TK_WHILE expresion delimiter			 							{ ; }
   ;

while : TK_WHILE expresion TK_NEWLINE block											{ ; }
	  | TK_WHILE expresion block													{ ; }
	  ;

type : TPNM_BOOL																	{ ; }
	 | TPNM_CHAR																	{ ; }
	 | TPNM_SHORT																	{ ; }
	 | TPNM_INT																		{ ; }
	 | TPNM_LONG																	{ ; }
	 | TPNM_FLOAT																	{ ; }
	 | TPNM_DOUBLE																	{ ; }
	 | TPNM_SHORT																	{ ; }
	 | T_CLASSNAME																	{ ; }
	 ;

class : TK_CLASS T_CLASSNAME TK_NEWLINE TK_LEFTBRACKET class_dec TK_RIGHTBRACKET 	{ ; }
	  | TK_CLASS T_CLASSNAME TK_LEFTBRACKET class_dec TK_RIGHTBRACKET 				{ ; }
	  ;

class_dec : class_st class_dec 														{ ; }
		  | /*E*/
		  ;

class_st : accesor var 																{ ; }
		 | accesor function 														{ ; }
		 ;

accesor : ACC_PRIVATE 																{ ; }
		| ACC_PUBLIC 																{ ; }
		;

function : TK_FUNCTION type T_ID args TK_NEWLINE block 								{ ; }
		 | TK_FUNCTION T_ID args TK_NEWLINE block 									{ ; }
		 | TK_FUNCTION type T_ID args block 										{ ; }
		 | TK_FUNCTION T_ID args block 												{ ; }
		 ;

args : type T_ID moreargs 															{ ; }
	 | /*E*/ 																		{ ; }
	 ;

moreargs : type T_ID moreargs 														{ ; }
		 | /*E*/																	{ ; }
		 ;

func_call : T_ID TK_LEFTPAREN call_args TK_RIGHTPAREN delimiter 					{ ; }
		  | T_ID TK_LEFTPAREN TK_RIGHTPAREN delimiter 								{ ; }
		  ;

call_args : var_const 																{ ; }
		  | var_const TK_COMMA call_args 											{ ; }
		  ;

var : type id delimiter 															{ ; }
	| type id OP_ASSIGN expresion delimiter 										{ ; }
	;

print : TK_PRINT var_const delimiter 												{ ; }
	  ;

block : TK_LEFTBRACKET statelist TK_RIGHTBRACKET 									{ ; }
	  | state 																		{ ; }
	  ;

var_const : boolean 																{ ; }
		  | CONST_CHAR 																{ ; }
		  | CONST_INT 																{ ; }
		  | CONST_FLOAT 															{ ; }
		  | CONST_STR 																{ ; }
		  | list 																	{ ; }
		  ;

boolean : CONST_TRUE 																{ ; }
		| CONST_FALSE 																{ ; }
		;

list : TK_LEFTSQBRACKET list_elem TK_RIGHTBRACKET delimiter 						{ ; }
	 | TK_LEFTSQBRACKET TK_RIGHTBRACKET delimiter 									{ ; }
	 ;

list_elem : list_e 																	{ ; }
		  | list_e TK_COMMA list_elem 												{ ; }
		  ;

list_e : var_const 																	{ ; }
	   | id 																		{ ; }
	   ;

expresion : exp 																	{ ; }
		  | exp rel_op exp 															{ ; }
		  ;

exp : e 																			{ ; }
	| e comp_op e 																	{ ; }
	;

e : term 																			{ ; }
  | term mult_op e 																	{ ; }
  ;

term : fact																			{ ; }
	 | fact add_op term																{ ; }
	 ;

fact : neg_op f 																	{ ; }
	 | f 																			{ ; }
	 ;

f : TK_LEFTPAREN expresion TK_RIGHTPAREN 											{ ; }
  | var_const 																		{ ; }
  ;

rel_op : OP_AND 																	{ ; }
	   | OP_OR 																		{ ; }
	   ;

comp_op : OP_LESS 																	{ ; }
		| OP_MORE 																	{ ; }
		| OP_LESSEQ																	{ ; }
		| OP_MOREEQ																	{ ; }
		| OP_EQ 																	{ ; }
		| OP_NOTEQ 																	{ ; }
		;

mult_op : OP_MULT 																	{ ; }
		| OP_DIV 																	{ ; }
		| OP_MOD 																	{ ; }
		;

add_op : OP_ADD 																	{ ; }
	   | OP_SUB 																	{ ; }
	   ;

neg_op : OP_NEG																		{ ; }
	   ;

