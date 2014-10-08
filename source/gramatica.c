/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
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

// Take the name prefix into account.
#define yylex   sifuscriptlex

/* First part of user declarations.  */
/* Line 279 of lalr1.cc  */
#line 6 "..\\GitHub\\sifuscript\\source\\gramatica.y"
 
#include "Expression.h"

#include <cstdio>
#include <iostream>
using namespace std;
 

/* Line 279 of lalr1.cc  */
#line 49 "gramatica.c"


#include "gramatica.h"

/* User implementation prologue.  */
/* Line 285 of lalr1.cc  */
#line 81 "..\\GitHub\\sifuscript\\source\\gramatica.y"


#include "driver.h"
#include "tokens.h"

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lex


/* Line 285 of lalr1.cc  */
#line 70 "gramatica.c"


# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location) YYUSE(Type)
# define YY_REDUCE_PRINT(Rule)        static_cast<void>(0)
# define YY_STACK_PRINT()             static_cast<void>(0)

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace sifuscript {
/* Line 353 of lalr1.cc  */
#line 165 "gramatica.c"

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Gramatica::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  Gramatica::Gramatica (class Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {
  }

  Gramatica::~Gramatica ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  Gramatica::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  Gramatica::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  Gramatica::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  Gramatica::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Gramatica::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Gramatica::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Gramatica::debug_level_type
  Gramatica::debug_level () const
  {
    return yydebug_;
  }

  void
  Gramatica::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  Gramatica::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  Gramatica::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Gramatica::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    // State.
    int yyn;
    int yylen = 0;
    int yystate = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    static semantic_type yyval_default;
    semantic_type yylval = yyval_default;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


/* User initialization code.  */
/* Line 545 of lalr1.cc  */
#line 45 "..\\GitHub\\sifuscript\\source\\gramatica.y"
{
    // initialize the initial location object
    yylloc.begin.filename = yylloc.end.filename = &driver.streamname;
}
/* Line 545 of lalr1.cc  */
#line 366 "gramatica.c"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
        YYCDEBUG << "Reading a token: ";
        yychar = yylex (&yylval, &yylloc);
      }

    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    // Compute the default @$.
    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }

    // Perform the reduction.
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
          case 2:
/* Line 670 of lalr1.cc  */
#line 97 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "program" << endl; }
    break;

  case 3:
/* Line 670 of lalr1.cc  */
#line 98 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "program" << endl; }
    break;

  case 4:
/* Line 670 of lalr1.cc  */
#line 99 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "program" << endl; }
    break;

  case 5:
/* Line 670 of lalr1.cc  */
#line 102 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "imports" << endl; }
    break;

  case 6:
/* Line 670 of lalr1.cc  */
#line 105 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 7:
/* Line 670 of lalr1.cc  */
#line 106 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 8:
/* Line 670 of lalr1.cc  */
#line 109 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "statelist" << endl; }
    break;

  case 9:
/* Line 670 of lalr1.cc  */
#line 112 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 10:
/* Line 670 of lalr1.cc  */
#line 113 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 11:
/* Line 670 of lalr1.cc  */
#line 116 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 117 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 13:
/* Line 670 of lalr1.cc  */
#line 118 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 14:
/* Line 670 of lalr1.cc  */
#line 119 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 15:
/* Line 670 of lalr1.cc  */
#line 120 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 121 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 122 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 123 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 124 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "state" << endl; }
    break;

  case 20:
/* Line 670 of lalr1.cc  */
#line 125 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << endl; }
    break;

  case 21:
/* Line 670 of lalr1.cc  */
#line 128 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "assign" << endl; }
    break;

  case 22:
/* Line 670 of lalr1.cc  */
#line 131 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "delim" << endl; }
    break;

  case 23:
/* Line 670 of lalr1.cc  */
#line 132 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "delim" << endl; }
    break;

  case 24:
/* Line 670 of lalr1.cc  */
#line 135 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "return" << endl; }
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 138 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "id" << endl; }
    break;

  case 26:
/* Line 670 of lalr1.cc  */
#line 139 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "id" << endl; }
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 140 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "id" << endl; }
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 143 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "cond" << endl; }
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 146 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 147 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 150 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "if" << endl; }
    break;

  case 32:
/* Line 670 of lalr1.cc  */
#line 153 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "else if" << endl; }
    break;

  case 33:
/* Line 670 of lalr1.cc  */
#line 154 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 34:
/* Line 670 of lalr1.cc  */
#line 157 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "else" << endl; }
    break;

  case 35:
/* Line 670 of lalr1.cc  */
#line 158 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 36:
/* Line 670 of lalr1.cc  */
#line 161 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "loop" << endl; }
    break;

  case 37:
/* Line 670 of lalr1.cc  */
#line 162 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "loop" << endl; }
    break;

  case 38:
/* Line 670 of lalr1.cc  */
#line 163 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "loop" << endl; }
    break;

  case 39:
/* Line 670 of lalr1.cc  */
#line 166 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "for" << endl; }
    break;

  case 40:
/* Line 670 of lalr1.cc  */
#line 169 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "do" << endl; }
    break;

  case 41:
/* Line 670 of lalr1.cc  */
#line 172 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "while" << endl; }
    break;

  case 42:
/* Line 670 of lalr1.cc  */
#line 175 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "type" << endl; }
    break;

  case 43:
/* Line 670 of lalr1.cc  */
#line 176 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "type" << endl; }
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 177 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "type" << endl; }
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 178 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "type" << endl; }
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 179 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "type" << endl; }
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 180 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "type" << endl; }
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 181 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "type" << endl; }
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 182 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "type" << endl; }
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 183 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "class type" << endl; }
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 186 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "class" << endl; }
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 189 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 193 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "class var" << endl; }
    break;

  case 55:
/* Line 670 of lalr1.cc  */
#line 194 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "class func" << endl; }
    break;

  case 56:
/* Line 670 of lalr1.cc  */
#line 195 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 57:
/* Line 670 of lalr1.cc  */
#line 198 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "acc priv" << endl; }
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 199 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "acc pub" << endl; }
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 202 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "func" << endl; }
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 203 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "func" << endl; }
    break;

  case 61:
/* Line 670 of lalr1.cc  */
#line 206 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "args" << endl; }
    break;

  case 62:
/* Line 670 of lalr1.cc  */
#line 207 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 63:
/* Line 670 of lalr1.cc  */
#line 210 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 64:
/* Line 670 of lalr1.cc  */
#line 211 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 65:
/* Line 670 of lalr1.cc  */
#line 214 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "func call" << endl; }
    break;

  case 66:
/* Line 670 of lalr1.cc  */
#line 215 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "func call" << endl; }
    break;

  case 67:
/* Line 670 of lalr1.cc  */
#line 218 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "args" << endl; }
    break;

  case 68:
/* Line 670 of lalr1.cc  */
#line 219 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "args" << endl; }
    break;

  case 69:
/* Line 670 of lalr1.cc  */
#line 222 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "var" << endl; }
    break;

  case 70:
/* Line 670 of lalr1.cc  */
#line 223 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "var" << endl; }
    break;

  case 71:
/* Line 670 of lalr1.cc  */
#line 226 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "print" << endl; }
    break;

  case 72:
/* Line 670 of lalr1.cc  */
#line 229 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "block" << endl; }
    break;

  case 73:
/* Line 670 of lalr1.cc  */
#line 230 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "block" << endl; }
    break;

  case 74:
/* Line 670 of lalr1.cc  */
#line 233 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 75:
/* Line 670 of lalr1.cc  */
#line 234 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "const" << endl; }
    break;

  case 76:
/* Line 670 of lalr1.cc  */
#line 235 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "const" << endl; }
    break;

  case 77:
/* Line 670 of lalr1.cc  */
#line 236 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "const" << endl; }
    break;

  case 78:
/* Line 670 of lalr1.cc  */
#line 237 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "const" << endl; }
    break;

  case 79:
/* Line 670 of lalr1.cc  */
#line 238 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 80:
/* Line 670 of lalr1.cc  */
#line 241 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "true" << endl; }
    break;

  case 81:
/* Line 670 of lalr1.cc  */
#line 242 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "false" << endl; }
    break;

  case 82:
/* Line 670 of lalr1.cc  */
#line 245 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "list" << endl; }
    break;

  case 83:
/* Line 670 of lalr1.cc  */
#line 246 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "list" << endl; }
    break;

  case 84:
/* Line 670 of lalr1.cc  */
#line 249 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "list elem" << endl; }
    break;

  case 85:
/* Line 670 of lalr1.cc  */
#line 250 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "list elem" << endl; }
    break;

  case 86:
/* Line 670 of lalr1.cc  */
#line 253 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 87:
/* Line 670 of lalr1.cc  */
#line 254 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 88:
/* Line 670 of lalr1.cc  */
#line 257 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "expresion" << endl; }
    break;

  case 89:
/* Line 670 of lalr1.cc  */
#line 258 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "expresion" << endl; }
    break;

  case 90:
/* Line 670 of lalr1.cc  */
#line 261 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "exp" << endl; }
    break;

  case 91:
/* Line 670 of lalr1.cc  */
#line 262 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "exp" << endl; }
    break;

  case 92:
/* Line 670 of lalr1.cc  */
#line 265 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "e" << endl; }
    break;

  case 93:
/* Line 670 of lalr1.cc  */
#line 266 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "e" << endl; }
    break;

  case 94:
/* Line 670 of lalr1.cc  */
#line 269 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "term" << endl; }
    break;

  case 95:
/* Line 670 of lalr1.cc  */
#line 270 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "term" << endl; }
    break;

  case 96:
/* Line 670 of lalr1.cc  */
#line 273 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "fact" << endl; }
    break;

  case 97:
/* Line 670 of lalr1.cc  */
#line 274 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "fact" << endl; }
    break;

  case 98:
/* Line 670 of lalr1.cc  */
#line 277 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 99:
/* Line 670 of lalr1.cc  */
#line 278 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 100:
/* Line 670 of lalr1.cc  */
#line 279 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { ; }
    break;

  case 101:
/* Line 670 of lalr1.cc  */
#line 282 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "rel op" << endl; }
    break;

  case 102:
/* Line 670 of lalr1.cc  */
#line 283 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "rel op" << endl; }
    break;

  case 103:
/* Line 670 of lalr1.cc  */
#line 286 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "comp op" << endl; }
    break;

  case 104:
/* Line 670 of lalr1.cc  */
#line 287 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "comp op" << endl; }
    break;

  case 105:
/* Line 670 of lalr1.cc  */
#line 288 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "comp op" << endl; }
    break;

  case 106:
/* Line 670 of lalr1.cc  */
#line 289 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "comp op" << endl; }
    break;

  case 107:
/* Line 670 of lalr1.cc  */
#line 290 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "comp op" << endl; }
    break;

  case 108:
/* Line 670 of lalr1.cc  */
#line 291 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "comp op" << endl; }
    break;

  case 109:
/* Line 670 of lalr1.cc  */
#line 294 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "mult op" << endl; }
    break;

  case 110:
/* Line 670 of lalr1.cc  */
#line 295 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "mult op" << endl; }
    break;

  case 111:
/* Line 670 of lalr1.cc  */
#line 296 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "mult op" << endl; }
    break;

  case 112:
/* Line 670 of lalr1.cc  */
#line 299 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "add op" << endl; }
    break;

  case 113:
/* Line 670 of lalr1.cc  */
#line 300 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "add op" << endl; }
    break;

  case 114:
/* Line 670 of lalr1.cc  */
#line 303 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "neg op" << endl; }
    break;

  case 115:
/* Line 670 of lalr1.cc  */
#line 306 "..\\GitHub\\sifuscript\\source\\gramatica.y"
    { cout << "ass op" << endl; }
    break;


/* Line 670 of lalr1.cc  */
#line 1164 "gramatica.c"
      default:
        break;
      }

    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */
        if (yychar <= yyeof_)
          {
            /* Return failure if at end of input.  */
            if (yychar == yyeof_)
              YYABORT;
          }
        else
          {
            yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
            yychar = yyempty_;
          }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	  YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystate_stack_.height ())
      {
        yydestruct_ ("Cleanup: popping",
                     yystos_[yystate_stack_[0]],
                     &yysemantic_stack_[0],
                     &yylocation_stack_[0]);
        yypop_ ();
      }

    return yyresult;
    }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (yychar != yyempty_)
          {
            /* Make sure we have latest lookahead translation.  See
               comments at user semantic actions for why this is
               necessary.  */
            yytoken = yytranslate_ (yychar);
            yydestruct_ (YY_NULL, yytoken, &yylval, &yylloc);
          }

        while (1 < yystate_stack_.height ())
          {
            yydestruct_ (YY_NULL,
                         yystos_[yystate_stack_[0]],
                         &yysemantic_stack_[0],
                         &yylocation_stack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  // Generate an error message.
  std::string
  Gramatica::yysyntax_error_ (int yystate, int yytoken)
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            /* Stay within bounds of both yycheck and yytname.  */
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULL;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char Gramatica::yypact_ninf_ = -79;
  const short int
  Gramatica::yypact_[] =
  {
       132,    42,   -31,   -42,    42,    42,   246,   -25,    46,    42,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -10,
     -79,    64,   222,   -79,   222,   -79,   -79,    29,   -79,    69,
     -79,   -79,   -79,   -79,   -31,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,    42,    10,    25,
     -79,   -79,   -79,   -79,   -42,     2,    28,     7,   -15,   -79,
     118,    42,   -79,    39,   -42,     9,    38,    31,   -42,     9,
       9,   202,    82,    37,   -79,   -79,   -79,   222,   -79,    42,
      42,    83,   -17,    47,   -79,   -79,   -79,    44,    50,    39,
     -79,   -79,    42,   -79,   -79,   -79,   -79,   -79,   -79,    42,
     -79,   -79,   -79,    42,   -79,   -79,    42,   -79,    51,   177,
      90,    39,   -79,   -79,   -79,   259,    58,    61,    91,   -79,
       9,    62,    60,    66,   -79,   -79,     9,   -42,   -42,   -79,
     -79,    42,   -79,   -79,   125,   -79,   -79,   -79,   -79,   -79,
      42,   -79,    68,    42,   -79,    63,    72,   259,     1,   -79,
     -79,   -79,     9,   208,   -79,   -79,    39,    39,     9,   -79,
     -42,   -79,     9,    84,   -42,    86,   -79,   -79,   -79,    71,
       1,   238,   -79,   -79,    69,   -79,   -79,    39,   -79,   259,
     -79,    39,   -42,   -79,   -79,   -79,   -79,   -79,   -79,    87,
     -79,    39,    84,   -79,   -79
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  Gramatica::yydefact_[] =
  {
         0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    20,    25,
      50,     0,     3,     4,    10,    11,    18,     0,    12,    33,
      13,    36,    37,    38,     0,    14,    15,    19,    16,    17,
      81,    80,    76,    77,    78,    75,   114,     0,     0,    25,
     100,    99,    74,    79,    30,    88,    90,    92,    94,    97,
       0,     0,    29,     0,    30,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     1,     2,     8,    10,   115,     0,
       0,    35,     0,     0,    83,    87,    86,     0,    84,     0,
     101,   102,     0,   103,   104,   106,   105,   107,   108,     0,
     109,   110,   111,     0,   112,   113,     0,    96,     0,     0,
       0,     0,    23,    22,    24,    62,     0,     0,     7,    71,
       0,     0,    67,     0,    27,     9,     0,    30,    30,    28,
      69,     0,    98,    82,     0,    31,    89,    91,    93,    95,
       0,    73,     0,     0,    41,     0,     0,    62,    53,     6,
       5,    66,     0,     0,    26,    21,     0,     0,     0,    85,
      30,    72,     0,    64,    30,     0,    57,    58,    56,     0,
      53,     0,    65,    68,    33,    34,    70,     0,    40,     0,
      61,     0,    30,    51,    52,    55,    54,    32,    39,     0,
      60,     0,    64,    59,    63
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  Gramatica::yypgoto_[] =
  {
       -79,   -79,    26,   -79,    -9,    85,   -20,   159,   -61,   -79,
       5,   -79,   -44,   -79,   -11,   -79,   -79,   -79,   -79,   -79,
      -6,   -79,    -5,   -79,   -79,    -7,    20,   -23,   -79,    17,
       0,   -79,   -78,   -45,   -79,   -79,    43,   -79,    -3,    80,
     -47,    70,   -79,   119,   -79,   -79,   -79,   -79,   -79,    96
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  Gramatica::yydefgoto_[] =
  {
        -1,    21,    22,   150,    23,    76,    24,    25,   114,    26,
      50,    28,    63,    29,    81,   129,    30,    31,    32,    33,
      34,    35,   169,   170,   171,    36,   146,   180,    37,   121,
      38,    39,   110,    51,    52,    53,    87,    88,    54,    55,
      56,    57,    58,    59,    92,    99,   103,   106,    60,    79
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char Gramatica::yytable_ninf_ = -1;
  const unsigned char
  Gramatica::yytable_[] =
  {
        67,    64,    65,    86,    77,    27,    70,    27,   118,   119,
      89,   135,    62,    75,    40,    41,    42,    43,    44,    45,
     111,   130,   104,   105,   117,    49,   122,    27,    78,    27,
     166,   167,    68,   144,    90,    91,   112,   113,    71,    82,
      72,   100,   101,   102,    83,    73,    40,    41,    42,    43,
      44,    45,   137,    85,    69,   168,   138,    77,   108,   151,
      48,    84,   112,   113,    74,   155,    49,    93,    94,    95,
      96,    97,    98,    46,    78,    72,   126,   127,   174,   175,
      73,    80,    27,   156,   157,   109,   115,   116,   123,    86,
      47,   172,    48,   124,   128,   133,   132,   176,    49,   188,
     142,   178,   134,   190,   140,   143,   147,   148,   122,   145,
       8,   152,   153,   193,    27,   161,   177,   154,   183,   163,
     181,   164,    40,    41,    42,    43,    44,    45,   158,    40,
      41,    42,    43,    44,    45,   182,   179,   160,   191,    85,
     162,   145,     1,   192,   149,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    61,   125,   187,   185,   184,    47,   165,    48,   194,
     173,   186,   136,   189,    49,    48,   139,   159,   131,   107,
       0,    49,     0,     0,     0,     0,    18,     1,    19,    20,
       2,     3,     4,     5,     6,     7,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    40,    41,    42,    43,
      44,    45,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,     0,     0,   141,     0,     0,     0,     0,     0,
       0,    18,     1,    19,    20,     2,     3,     4,     5,     6,
       7,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   120,    48,     0,     0,     6,     0,     0,    48,    10,
      11,    12,    13,    14,    15,    16,    17,    10,    11,    12,
      13,    14,    15,    16,    17,     0,    18,     0,    19,    20,
      10,    11,    12,    13,    14,    15,    16,    17,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,    66,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20
  };

  /* YYCHECK.  */
  const short int
  Gramatica::yycheck_[] =
  {
         6,     4,     5,    48,    24,     0,     9,     2,    69,    70,
      54,    89,    54,    22,     4,     5,     6,     7,     8,     9,
      64,    82,    37,    38,    68,    56,    71,    22,    45,    24,
      29,    30,    57,   111,    32,    33,    53,    54,    48,    34,
      50,    34,    35,    36,    47,    55,     4,     5,     6,     7,
       8,     9,    99,    48,     8,    54,   103,    77,    61,   120,
      50,    51,    53,    54,     0,   126,    56,    39,    40,    41,
      42,    43,    44,    31,    45,    50,    79,    80,   156,   157,
      55,    12,    77,   127,   128,    46,    48,    56,     6,   134,
      48,   152,    50,    56,    11,    51,    49,   158,    56,   177,
     109,   162,    52,   181,    53,    15,    48,    46,   153,   115,
      19,    49,    52,   191,   109,    47,   160,    51,    47,    56,
     164,    49,     4,     5,     6,     7,     8,     9,   131,     4,
       5,     6,     7,     8,     9,    49,    52,   140,   182,   134,
     143,   147,    10,    56,   118,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     2,    77,   174,   171,   170,    48,   147,    50,   192,
     153,   171,    92,   179,    56,    50,   106,   134,    82,    60,
      -1,    56,    -1,    -1,    -1,    -1,    54,    10,    56,    57,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     4,     5,     6,     7,
       8,     9,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    10,    56,    57,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    49,    50,    -1,    -1,    17,    -1,    -1,    50,    21,
      22,    23,    24,    25,    26,    27,    28,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    54,    -1,    56,    57,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  Gramatica::yystos_[] =
  {
         0,    10,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    54,    56,
      57,    59,    60,    62,    64,    65,    67,    68,    69,    71,
      74,    75,    76,    77,    78,    79,    83,    86,    88,    89,
       4,     5,     6,     7,     8,     9,    31,    48,    50,    56,
      68,    91,    92,    93,    96,    97,    98,    99,   100,   101,
     106,    65,    54,    70,    96,    96,    56,    78,    57,     8,
      96,    48,    50,    55,     0,    62,    63,    64,    45,   107,
      12,    72,    68,    96,    51,    68,    91,    94,    95,    70,
      32,    33,   102,    39,    40,    41,    42,    43,    44,   103,
      34,    35,    36,   104,    37,    38,   105,   101,    96,    46,
      90,    70,    53,    54,    66,    48,    56,    70,    66,    66,
      49,    87,    91,     6,    56,    63,    96,    96,    11,    73,
      66,   107,    49,    51,    52,    90,    97,    98,    98,    99,
      53,    47,    62,    15,    90,    78,    84,    48,    46,    60,
      61,    66,    49,    52,    51,    66,    70,    70,    96,    94,
      96,    47,    96,    56,    49,    84,    29,    30,    54,    80,
      81,    82,    66,    87,    90,    90,    66,    70,    66,    52,
      85,    70,    49,    47,    80,    83,    88,    72,    90,    78,
      90,    70,    56,    90,    85
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  Gramatica::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  Gramatica::yyr1_[] =
  {
         0,    58,    59,    59,    59,    60,    61,    61,    62,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    66,    66,    67,    68,    68,    68,    69,    70,
      70,    71,    72,    72,    73,    73,    74,    74,    74,    75,
      76,    77,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    80,    80,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   106,   107
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  Gramatica::yyr2_[] =
  {
         0,     2,     2,     1,     1,     4,     1,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     3,     1,     4,     3,     3,     1,
       0,     4,     5,     0,     3,     0,     1,     1,     1,     7,
       6,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     2,     0,     2,     2,     1,     1,     1,     8,
       7,     3,     0,     4,     0,     5,     4,     1,     3,     3,
       5,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     3,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
  };


  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const Gramatica::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "CONST_NULL", "CONST_FALSE",
  "CONST_TRUE", "CONST_INT", "CONST_FLOAT", "CONST_STR", "CONST_CHAR",
  "TK_IF", "TK_ELSE", "TK_ELIF", "TK_FOR", "TK_DO", "TK_WHILE",
  "TK_RETURN", "TK_FUNC", "TK_CLASS", "TK_IMPORT", "TK_PRINT", "TPNM_BOOL",
  "TPNM_CHAR", "TPNM_SHORT", "TPNM_INT", "TPNM_LONG", "TPNM_FLOAT",
  "TPNM_DOUBLE", "TPNM_STR", "ACC_PRIVATE", "ACC_PUBLIC", "OP_NOT",
  "OP_AND", "OP_OR", "OP_MULT", "OP_DIV", "OP_MOD", "OP_ADD", "OP_SUB",
  "OP_LESS", "OP_MORE", "OP_MOREEQ", "OP_LESSEQ", "OP_EQ", "OP_NOTEQ",
  "OP_ASSIGN", "TK_LEFTBRACKET", "TK_RIGHTBRACKET", "TK_LEFTPAREN",
  "TK_RIGHTPAREN", "TK_LEFTSQBRACKET", "TK_RIGHTSQBRACKET", "TK_COMMA",
  "TK_SEMICOLON", "TK_NEWLINE", "TK_DOT", "T_ID", "T_CLASSNAME", "$accept",
  "program", "imports", "moreimps", "statelist", "morestates", "state",
  "assign", "delimiter", "return", "id", "conditional", "maybenl", "if",
  "elseif", "else", "loop", "for", "do", "while", "type", "class",
  "class_dec", "class_st", "accesor", "function", "args", "moreargs",
  "func_call", "call_args", "var", "print", "block", "var_const",
  "boolean", "list", "list_elem", "list_e", "expresion", "exp", "e",
  "term", "fact", "f", "rel_op", "comp_op", "mult_op", "add_op", "neg_op",
  "ass_op", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const Gramatica::rhs_number_type
  Gramatica::yyrhs_[] =
  {
        59,     0,    -1,    60,    62,    -1,    60,    -1,    62,    -1,
      19,     8,    66,    61,    -1,    60,    -1,    -1,    64,    63,
      -1,    64,    63,    -1,    -1,    65,    -1,    69,    -1,    74,
      -1,    79,    -1,    83,    -1,    88,    -1,    89,    -1,    67,
      -1,    86,    -1,    54,    -1,    68,   107,    96,    66,    -1,
      54,    -1,    53,    -1,    16,    96,    66,    -1,    56,    -1,
      56,    50,     6,    51,    -1,    56,    55,    56,    -1,    71,
      72,    73,    -1,    54,    -1,    -1,    10,    96,    70,    90,
      -1,    12,    96,    70,    90,    72,    -1,    -1,    11,    70,
      90,    -1,    -1,    75,    -1,    76,    -1,    77,    -1,    13,
      65,    96,    53,    96,    70,    90,    -1,    14,    70,    90,
      15,    96,    66,    -1,    15,    96,    70,    90,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    57,    -1,    18,    57,    70,
      46,    80,    47,    -1,    81,    80,    -1,    -1,    82,    88,
      -1,    82,    83,    -1,    54,    -1,    29,    -1,    30,    -1,
      17,    78,    56,    48,    84,    49,    70,    90,    -1,    17,
      56,    48,    84,    49,    70,    90,    -1,    78,    56,    85,
      -1,    -1,    52,    78,    56,    85,    -1,    -1,    56,    48,
      87,    49,    66,    -1,    56,    48,    49,    66,    -1,    91,
      -1,    91,    52,    87,    -1,    78,    68,    66,    -1,    78,
      68,   107,    96,    66,    -1,    20,    96,    66,    -1,    46,
      62,    47,    -1,    46,    47,    -1,    92,    -1,     9,    -1,
       6,    -1,     7,    -1,     8,    -1,    93,    -1,     5,    -1,
       4,    -1,    50,    94,    51,    -1,    50,    51,    -1,    95,
      -1,    95,    52,    94,    -1,    91,    -1,    68,    -1,    97,
      -1,    97,   102,    97,    -1,    98,    -1,    98,   103,    98,
      -1,    99,    -1,    99,   104,    98,    -1,   100,    -1,   100,
     105,    99,    -1,   106,   101,    -1,   101,    -1,    48,    96,
      49,    -1,    91,    -1,    68,    -1,    32,    -1,    33,    -1,
      39,    -1,    40,    -1,    42,    -1,    41,    -1,    43,    -1,
      44,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    31,    -1,    45,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  Gramatica::yyprhs_[] =
  {
         0,     0,     3,     6,     8,    10,    15,    17,    18,    21,
      24,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    50,    52,    54,    58,    60,    65,    69,    73,
      75,    76,    81,    87,    88,    92,    93,    95,    97,    99,
     107,   114,   119,   121,   123,   125,   127,   129,   131,   133,
     135,   137,   144,   147,   148,   151,   154,   156,   158,   160,
     169,   177,   181,   182,   187,   188,   194,   199,   201,   205,
     209,   215,   219,   223,   226,   228,   230,   232,   234,   236,
     238,   240,   242,   246,   249,   251,   255,   257,   259,   261,
     265,   267,   271,   273,   277,   279,   283,   286,   288,   292,
     294,   296,   298,   300,   302,   304,   306,   308,   310,   312,
     314,   316,   318,   320,   322,   324
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  Gramatica::yyrline_[] =
  {
         0,    97,    97,    98,    99,   102,   105,   106,   109,   112,
     113,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   128,   131,   132,   135,   138,   139,   140,   143,   146,
     147,   150,   153,   154,   157,   158,   161,   162,   163,   166,
     169,   172,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   186,   189,   190,   193,   194,   195,   198,   199,   202,
     203,   206,   207,   210,   211,   214,   215,   218,   219,   222,
     223,   226,   229,   230,   233,   234,   235,   236,   237,   238,
     241,   242,   245,   246,   249,   250,   253,   254,   257,   258,
     261,   262,   265,   266,   269,   270,   273,   274,   277,   278,
     279,   282,   283,   286,   287,   288,   289,   290,   291,   294,
     295,   296,   299,   300,   303,   306
  };

  // Print the state stack on the debug stream.
  void
  Gramatica::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  Gramatica::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  Gramatica::token_number_type
  Gramatica::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int Gramatica::yyeof_ = 0;
  const int Gramatica::yylast_ = 316;
  const int Gramatica::yynnts_ = 50;
  const int Gramatica::yyempty_ = -2;
  const int Gramatica::yyfinal_ = 74;
  const int Gramatica::yyterror_ = 1;
  const int Gramatica::yyerrcode_ = 256;
  const int Gramatica::yyntokens_ = 58;

  const unsigned int Gramatica::yyuser_token_number_max_ = 312;
  const Gramatica::token_number_type Gramatica::yyundef_token_ = 2;


} // sifuscript
/* Line 1141 of lalr1.cc  */
#line 1892 "gramatica.c"
/* Line 1142 of lalr1.cc  */
#line 310 "..\\GitHub\\sifuscript\\source\\gramatica.y"


void sifuscript::Gramatica::error(const Gramatica::location_type& l,
			    const std::string& m)
{
    driver.error(l, m);
}