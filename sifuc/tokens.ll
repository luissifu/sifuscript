/*
 * Tokens.l file
 * in order to specify the work of the Lexer
 */

%{
	
#ifdef WIN32				//usage of _strdup instead stread in winduws usage
#define strdup _strdup		//Windows:		_strdup
#endif						//Linux:		strdup
#include "tokens.h"
#include <iostream>
using namespace std;

/* import the parser's token type into a local typedef */
typedef ss::Gramatica::token token;
typedef ss::Gramatica::token_type token_type;

/* By default yylex returns int, we use token_type. Unfortunately yyterminate
 * by default returns 0, which is not of token_type. */
#define yyterminate() return token::END

/* This disables inclusion of unistd.h, which is not available under Visual C++
 * on Win32. The C++ scanner uses STL streams instead. */
#ifdef _WIN32
#define YY_NO_UNISTD_H
#endif
%}


/*** Flex Declarations and Options ***/
/* enable c++ scanner class generation */
%option c++

/* change the name of the scanner class. results in "SifuFlexLexer" */
%option prefix="Sifu"

/* the manual says "somewhat more optimized" */
%option batch

%option outfile="tokens.cpp"

/* enable scanner to generate debug output. disable this for release
 * versions. */
%option debug

/* no support for include files is planned */
%option yywrap nounput

/* enables the use of start condition stacks */
%option stack

/* The following paragraph suffices to track locations accurately. Each time
 * yylex is invoked, the begin position is moved onto the end position. */
%{
	#define YY_USER_ACTION  yylloc->columns(yyleng);//not necessary, nowhere else found:-(
%}

dig		[0-9]
let		[a-zA-Z]
mayu	[A-Z]
minu	[a-z]
str		[^\"]
chr		[^\']
comm    #.*\n

%x COMMENT

%%


 /* code to place at the beginning of yylex() */
%{
	// reset location
	yylloc->step();
%}

[ \t\r]						{ ; }
"null"						{ yylval->string = strdup(yytext); return token::CONST_NULL; }
"true"						{ yylval->string = strdup(yytext); return token::CONST_FALSE; }
"false"						{ yylval->string = strdup(yytext); return token::CONST_TRUE; }
"and"						{ return token::OP_AND; }
"or"						{ return token::OP_OR; }
"not"						{ return token::OP_NOT; }
"if"						{ return token::TK_IF; }
"else"						{ return token::TK_ELSE; }
"elif"						{ return token::TK_ELIF; }
"for"						{ return token::TK_FOR; }
"do"						{ return token::TK_DO; }
"while"						{ return token::TK_WHILE; }
"function"					{ return token::TK_FUNC; }
"class"						{ return token::TK_CLASS; }
"import"					{ return token::TK_IMPORT; }
"println"					{ return token::TK_PRINTLN; }
"print"						{ return token::TK_PRINT; }
"read"						{ return token::TK_READ; }
"return"					{ return token::TK_RETURN; }
"boolean"					{ yylval->string = strdup(yytext); return token::TPNM_BOOL; }
"char"						{ yylval->string = strdup(yytext); return token::TPNM_CHAR; }
"short"						{ yylval->string = strdup(yytext); return token::TPNM_SHORT; }
"int"						{ yylval->string = strdup(yytext); return token::TPNM_INT; }
"long"						{ yylval->string = strdup(yytext); return token::TPNM_LONG; }
"float"						{ yylval->string = strdup(yytext); return token::TPNM_FLOAT; }
"double"					{ yylval->string = strdup(yytext); return token::TPNM_DOUBLE; }
"string"					{ yylval->string = strdup(yytext); return token::TPNM_STR; }
"private"					{ return token::ACC_PRIVATE; }
"public"					{ return token::ACC_PUBLIC; }
"!"							{ return token::OP_NOT; }
"&&"						{ return token::OP_AND; }
"\|\|"						{ return token::OP_OR; }
"*"							{ return token::OP_MULT; }
"/"							{ return token::OP_DIV; }
"%"							{ return token::OP_MOD; }
"+"							{ return token::OP_ADD; }
"-"							{ return token::OP_SUB; }
"<"							{ return token::OP_LESS; }
">"							{ return token::OP_MORE; }
">="						{ return token::OP_MOREEQ; }
"<="						{ return token::OP_LESSEQ; }
"=="						{ return token::OP_EQ; }
"!="						{ return token::OP_NOTEQ; }
"="							{ return token::OP_ASSIGN; }
"{"							{ return token::TK_LEFTBRACKET; }
"}"							{ return token::TK_RIGHTBRACKET; }
"("							{ return token::TK_LEFTPAREN; }
")"							{ return token::TK_RIGHTPAREN; }
"\["						{ return token::TK_LEFTSQBRACKET; }
"\]"						{ return token::TK_RIGHTSQBRACKET; }
";"							{ return token::TK_SEMICOLON; }
","							{ return token::TK_COMMA; }
"\."						{ return token::TK_DOT; }
\n 							{ return token::TK_NEWLINE; }

{minu}("_"|{let}|{dig})*	{ yylval->string = strdup(yytext); return token::T_ID; }
{mayu}("_"|{let}|{dig})*	{ yylval->string = strdup(yytext); return token::T_CLASSNAME; }
{dig}+						{ yylval->string = strdup(yytext); return token::CONST_INT; }
{dig}+\.{dig}+				{ yylval->string = strdup(yytext); return token::CONST_FLOAT; }
\"{str}*\"					{ yylval->string = strdup(yytext); return token::CONST_STR; }
\'{chr}\'					{ yylval->string = strdup(yytext); return token::CONST_CHAR; }

"/*" 						{ BEGIN(COMMENT); }
<COMMENT>"*/" 				{ BEGIN(INITIAL); }
<COMMENT>[^*\n]+			{ ; }
<COMMENT>"*" 				{ ; }
<COMMENT>\n 				{ ; }

{comm} 						{ ; }

.							{ ; }


%% /*** Additional Code ***/

namespace ss
{

	Token::Token(std::istream* in, std::ostream* out) : SifuFlexLexer(in, out) {}

	Token::~Token() {}

	void Token::set_debug(bool b)
	{
		yy_flex_debug = b;
	}

}

/* This implementation of SifuFlexLexer::yylex() is required to fill the
 * vtable of the class SifuFlexLexer. We define the scanner's main yylex
 * function via YY_DECL to reside in the Scanner class instead. */

#ifdef yylex
#undef yylex
#endif

int SifuFlexLexer::yylex()
{
	std::cerr << "in SifuFlexLexer::yylex() !" << std::endl;
	return 0;
}

/* When the scanner receives an end-of-file indication from YY_INPUT, it then
 * checks the yywrap() function. If yywrap() returns false (zero), then it is
 * assumed that the function has gone ahead and set up `yyin' to point to
 * another input file, and scanning continues. If it returns true (non-zero),
 * then the scanner terminates, returning 0 to its caller. */

int SifuFlexLexer::yywrap()
{
	return 1;
}
