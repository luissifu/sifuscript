/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_GRAMATICA_TAB_H_INCLUDED
# define YY_YY_GRAMATICA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CONST_NULL = 258,
    CONST_FALSE = 259,
    CONST_TRUE = 260,
    CONST_INT = 261,
    CONST_FLOAT = 262,
    CONST_STR = 263,
    CONST_CHAR = 264,
    TK_IF = 265,
    TK_ELSE = 266,
    TK_ELIF = 267,
    TK_FOR = 268,
    TK_DO = 269,
    TK_WHILE = 270,
    TK_FUNC = 271,
    TK_CLASS = 272,
    TK_IMPORT = 273,
    TK_PRINT = 274,
    TPNM_BOOL = 275,
    TPNM_CHAR = 276,
    TPNM_SHORT = 277,
    TPNM_INT = 278,
    TPNM_LONG = 279,
    TPNM_FLOAT = 280,
    TPNM_DOUBLE = 281,
    TPNM_STR = 282,
    ACC_PRIVATE = 283,
    ACC_PUBLIC = 284,
    OP_NOT = 285,
    OP_AND = 286,
    OP_OR = 287,
    OP_MULT = 288,
    OP_DIV = 289,
    OP_MOD = 290,
    OP_ADD = 291,
    OP_SUB = 292,
    OP_LESS = 293,
    OP_MORE = 294,
    OP_MOREEQ = 295,
    OP_LESSEQ = 296,
    OP_EQ = 297,
    OP_NOTEQ = 298,
    OP_ASSIGN = 299,
    TK_LEFTBRACKET = 300,
    TK_RIGHTBRACKET = 301,
    TK_LEFTPAREN = 302,
    TK_RIGHTPAREN = 303,
    TK_LEFTSQBRACKET = 304,
    TK_RIGHTSQBRACKET = 305,
    TK_COMMA = 306,
    TK_SEMICOLON = 307,
    TK_NEWLINE = 308,
    TK_DOT = 309,
    T_ID = 310,
    T_CLASSNAME = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "gramatica.y" /* yacc.c:1909  */

	int token;

#line 115 "gramatica.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */
