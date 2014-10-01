%{
#include <iostream>
using namespace std;
#define YY_DECL extern "C" int yylex()
#include "gramatica.tab.h"
%}

dig		[0-9]
let		[a-zA-Z]
mayu	[A-Z]
minu	[a-z]
str		[^\"]
chr		[^\']

%%

[ \t\r]						;
"null"						return CONST_NULL;
"true"						return CONST_FALSE;
"false"						return CONST_TRUE;
"and"						return OP_AND;
"or"						return OP_OR;
"not"						return OP_NOT;
"if"						return TK_IF;
"else"						return TK_ELSE;
"for"						return TK_FOR;
"do"						return TK_DO;
"while"						return TK_WHILE;
"function"					return TK_FUNC;
"class"						return TK_CLASS;
"import"					return TK_IMPORT;
"print"						return TK_PRINT;
"boolean"					return TPNM_BOOL;
"char"						return TPNM_CHAR;
"short"						return TPNM_SHORT;
"int"						return TPNM_INT;
"long"						return TPNM_LONG;
"float"						return TPNM_FLOAT;
"double"					return TPNM_DOUBLE;
"string"					return TPNM_STR;
"private"					return ACC_PRIVATE;
"public"					return ACC_PUBLIC;
"!"							return OP_NOT;
"&&"						return OP_AND;
"\|\|"						return OP_OR;
"*"							return OP_MULT;
"/"							return OP_DIV;
"%"							return OP_MOD;
"+"							return OP_ADD;
"-"							return OP_SUB;
"<"							return OP_LESS;
">"							return OP_MORE;
">="						return OP_MOREEQ;
"<="						return OP_LESSEQ;
"=="						return OP_EQ;
"!="						return OP_NOTEQ;
"="							return OP_ASSIGN;
"{"							return TK_LEFTBRACKET;
"}"							return TK_RIGHTBRACKET;
"("							return TK_LEFTPAREN;
")"							return TK_RIGHTPAREN;
"\["						return TK_LEFTSQBRACKET;
"\]"						return TK_RIGHTSQBRACKET;
";"							return TK_SEMICOLON;
","							return TK_COMMA;
"."							return TK_DOT;
\n 							return TK_NEWLINE;

{minu}("_"|{let}{dig})*		return T_ID;
{mayu}("_"|{let}{dig})*		return T_CLASSNAME;
{dig}+						return CONST_INT;
{dig}+\.{dig}+				return CONST_FLOAT;
\"{str}*\"					return CONST_STR;
\'{chr}\'					return CONST_CHAR;

.							;

%%