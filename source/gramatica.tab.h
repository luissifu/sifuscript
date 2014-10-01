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
# define YYDEBUG 1
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
    TK_RETURN = 271,
    TK_FUNC = 272,
    TK_CLASS = 273,
    TK_IMPORT = 274,
    TK_PRINT = 275,
    TPNM_BOOL = 276,
    TPNM_CHAR = 277,
    TPNM_SHORT = 278,
    TPNM_INT = 279,
    TPNM_LONG = 280,
    TPNM_FLOAT = 281,
    TPNM_DOUBLE = 282,
    TPNM_STR = 283,
    ACC_PRIVATE = 284,
    ACC_PUBLIC = 285,
    OP_NOT = 286,
    OP_AND = 287,
    OP_OR = 288,
    OP_MULT = 289,
    OP_DIV = 290,
    OP_MOD = 291,
    OP_ADD = 292,
    OP_SUB = 293,
    OP_LESS = 294,
    OP_MORE = 295,
    OP_MOREEQ = 296,
    OP_LESSEQ = 297,
    OP_EQ = 298,
    OP_NOTEQ = 299,
    OP_ASSIGN = 300,
    TK_LEFTBRACKET = 301,
    TK_RIGHTBRACKET = 302,
    TK_LEFTPAREN = 303,
    TK_RIGHTPAREN = 304,
    TK_LEFTSQBRACKET = 305,
    TK_RIGHTSQBRACKET = 306,
    TK_COMMA = 307,
    TK_SEMICOLON = 308,
    TK_NEWLINE = 309,
    TK_DOT = 310,
    T_ID = 311,
    T_CLASSNAME = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "gramatica.y" /* yacc.c:1909  */

	int token;

#line 116 "gramatica.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */
