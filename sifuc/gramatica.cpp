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
#define yylex   sslex

/* First part of user declarations.  */
/* Line 279 of lalr1.cc  */
#line 6 "..\\..\\..\\gramatica.yy"

#include "expr/Expression.h"

#include <cstdio>
#include <iostream>
using namespace std;


/* Line 279 of lalr1.cc  */
#line 49 "gramatica.cpp"


#include "gramatica.h"

/* User implementation prologue.  */
/* Line 285 of lalr1.cc  */
#line 84 "..\\..\\..\\gramatica.yy"


#include "driver/Driver.h"

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lex


/* Line 285 of lalr1.cc  */
#line 69 "gramatica.cpp"


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


namespace ss {
/* Line 353 of lalr1.cc  */
#line 164 "gramatica.cpp"

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
#line 46 "..\\..\\..\\gramatica.yy"
{
	// initialize the initial location object
	yylloc.begin.filename = yylloc.end.filename = &driver.streamname;
}
/* Line 545 of lalr1.cc  */
#line 365 "gramatica.cpp"

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
#line 99 "..\\..\\..\\gramatica.yy"
    { driver.endProg(); }
    break;

  case 3:
/* Line 670 of lalr1.cc  */
#line 100 "..\\..\\..\\gramatica.yy"
    { driver.endProg(); }
    break;

  case 4:
/* Line 670 of lalr1.cc  */
#line 101 "..\\..\\..\\gramatica.yy"
    { driver.endProg(); }
    break;

  case 5:
/* Line 670 of lalr1.cc  */
#line 104 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 6:
/* Line 670 of lalr1.cc  */
#line 107 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 7:
/* Line 670 of lalr1.cc  */
#line 108 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 8:
/* Line 670 of lalr1.cc  */
#line 111 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 9:
/* Line 670 of lalr1.cc  */
#line 114 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 10:
/* Line 670 of lalr1.cc  */
#line 115 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 11:
/* Line 670 of lalr1.cc  */
#line 118 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 119 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 13:
/* Line 670 of lalr1.cc  */
#line 120 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 14:
/* Line 670 of lalr1.cc  */
#line 121 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 15:
/* Line 670 of lalr1.cc  */
#line 122 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 123 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 124 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 125 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 126 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 20:
/* Line 670 of lalr1.cc  */
#line 127 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 21:
/* Line 670 of lalr1.cc  */
#line 128 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 22:
/* Line 670 of lalr1.cc  */
#line 131 "..\\..\\..\\gramatica.yy"
    { driver.genAssign(); }
    break;

  case 23:
/* Line 670 of lalr1.cc  */
#line 134 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 24:
/* Line 670 of lalr1.cc  */
#line 135 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 138 "..\\..\\..\\gramatica.yy"
    { driver.genReturn(); }
    break;

  case 26:
/* Line 670 of lalr1.cc  */
#line 141 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 142 "..\\..\\..\\gramatica.yy"
    { driver.checkDim((yysemantic_stack_[(5) - (1)].string)); }
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 143 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 146 "..\\..\\..\\gramatica.yy"
    { driver.addExpDim(); }
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 147 "..\\..\\..\\gramatica.yy"
    { driver.addExpDim(); }
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 151 "..\\..\\..\\gramatica.yy"
    { driver.addId((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 32:
/* Line 670 of lalr1.cc  */
#line 154 "..\\..\\..\\gramatica.yy"
    { driver.endIf(); }
    break;

  case 33:
/* Line 670 of lalr1.cc  */
#line 157 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 34:
/* Line 670 of lalr1.cc  */
#line 158 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 35:
/* Line 670 of lalr1.cc  */
#line 161 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 36:
/* Line 670 of lalr1.cc  */
#line 164 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 37:
/* Line 670 of lalr1.cc  */
#line 165 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 38:
/* Line 670 of lalr1.cc  */
#line 168 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 39:
/* Line 670 of lalr1.cc  */
#line 169 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 40:
/* Line 670 of lalr1.cc  */
#line 172 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 41:
/* Line 670 of lalr1.cc  */
#line 173 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 42:
/* Line 670 of lalr1.cc  */
#line 174 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 43:
/* Line 670 of lalr1.cc  */
#line 177 "..\\..\\..\\gramatica.yy"
    { driver.endFor(); }
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 180 "..\\..\\..\\gramatica.yy"
    { driver.genDo(); }
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 183 "..\\..\\..\\gramatica.yy"
    { driver.endWhile(); }
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 186 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 187 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 188 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 189 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 190 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 191 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 192 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 53:
/* Line 670 of lalr1.cc  */
#line 193 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 194 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 55:
/* Line 670 of lalr1.cc  */
#line 197 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 56:
/* Line 670 of lalr1.cc  */
#line 200 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 204 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 205 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 206 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 61:
/* Line 670 of lalr1.cc  */
#line 209 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 62:
/* Line 670 of lalr1.cc  */
#line 210 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 63:
/* Line 670 of lalr1.cc  */
#line 213 "..\\..\\..\\gramatica.yy"
    { driver.endFunc(); }
    break;

  case 64:
/* Line 670 of lalr1.cc  */
#line 214 "..\\..\\..\\gramatica.yy"
    { driver.endFunc(); }
    break;

  case 65:
/* Line 670 of lalr1.cc  */
#line 217 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 66:
/* Line 670 of lalr1.cc  */
#line 218 "..\\..\\..\\gramatica.yy"
    { driver.addParam(); }
    break;

  case 67:
/* Line 670 of lalr1.cc  */
#line 221 "..\\..\\..\\gramatica.yy"
    { driver.addParam(); }
    break;

  case 68:
/* Line 670 of lalr1.cc  */
#line 222 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 69:
/* Line 670 of lalr1.cc  */
#line 225 "..\\..\\..\\gramatica.yy"
    { driver.genSub(); }
    break;

  case 70:
/* Line 670 of lalr1.cc  */
#line 226 "..\\..\\..\\gramatica.yy"
    { driver.genSub(); }
    break;

  case 71:
/* Line 670 of lalr1.cc  */
#line 229 "..\\..\\..\\gramatica.yy"
    { driver.genParam(); }
    break;

  case 72:
/* Line 670 of lalr1.cc  */
#line 230 "..\\..\\..\\gramatica.yy"
    { driver.genParam(); }
    break;

  case 73:
/* Line 670 of lalr1.cc  */
#line 233 "..\\..\\..\\gramatica.yy"
    { driver.checkVar(); }
    break;

  case 74:
/* Line 670 of lalr1.cc  */
#line 234 "..\\..\\..\\gramatica.yy"
    { driver.genAssign(); }
    break;

  case 75:
/* Line 670 of lalr1.cc  */
#line 235 "..\\..\\..\\gramatica.yy"
    { driver.checkVar(); }
    break;

  case 76:
/* Line 670 of lalr1.cc  */
#line 238 "..\\..\\..\\gramatica.yy"
    { driver.addDimension((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 77:
/* Line 670 of lalr1.cc  */
#line 239 "..\\..\\..\\gramatica.yy"
    { driver.addDimension((yysemantic_stack_[(3) - (1)].string)); }
    break;

  case 78:
/* Line 670 of lalr1.cc  */
#line 242 "..\\..\\..\\gramatica.yy"
    { driver.genPrint(); }
    break;

  case 79:
/* Line 670 of lalr1.cc  */
#line 243 "..\\..\\..\\gramatica.yy"
    { driver.genPrintLine(); }
    break;

  case 80:
/* Line 670 of lalr1.cc  */
#line 246 "..\\..\\..\\gramatica.yy"
    { driver.genRead(); }
    break;

  case 81:
/* Line 670 of lalr1.cc  */
#line 249 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 82:
/* Line 670 of lalr1.cc  */
#line 250 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 83:
/* Line 670 of lalr1.cc  */
#line 253 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 84:
/* Line 670 of lalr1.cc  */
#line 254 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'c'); }
    break;

  case 85:
/* Line 670 of lalr1.cc  */
#line 255 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'i'); }
    break;

  case 86:
/* Line 670 of lalr1.cc  */
#line 256 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'f'); }
    break;

  case 87:
/* Line 670 of lalr1.cc  */
#line 257 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 's'); }
    break;

  case 88:
/* Line 670 of lalr1.cc  */
#line 260 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'b'); }
    break;

  case 89:
/* Line 670 of lalr1.cc  */
#line 261 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'b'); }
    break;

  case 90:
/* Line 670 of lalr1.cc  */
#line 264 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 91:
/* Line 670 of lalr1.cc  */
#line 265 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 92:
/* Line 670 of lalr1.cc  */
#line 268 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 93:
/* Line 670 of lalr1.cc  */
#line 269 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 94:
/* Line 670 of lalr1.cc  */
#line 272 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 95:
/* Line 670 of lalr1.cc  */
#line 273 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 96:
/* Line 670 of lalr1.cc  */
#line 276 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 97:
/* Line 670 of lalr1.cc  */
#line 277 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 98:
/* Line 670 of lalr1.cc  */
#line 280 "..\\..\\..\\gramatica.yy"
    { driver.genExp('!'); }
    break;

  case 99:
/* Line 670 of lalr1.cc  */
#line 281 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 100:
/* Line 670 of lalr1.cc  */
#line 284 "..\\..\\..\\gramatica.yy"
    { driver.endExp(); }
    break;

  case 101:
/* Line 670 of lalr1.cc  */
#line 285 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 102:
/* Line 670 of lalr1.cc  */
#line 286 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 103:
/* Line 670 of lalr1.cc  */
#line 287 "..\\..\\..\\gramatica.yy"
    { driver.toOperand(); }
    break;

  case 104:
/* Line 670 of lalr1.cc  */
#line 290 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('&'); }
    break;

  case 105:
/* Line 670 of lalr1.cc  */
#line 291 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('|'); }
    break;

  case 106:
/* Line 670 of lalr1.cc  */
#line 294 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('<'); }
    break;

  case 107:
/* Line 670 of lalr1.cc  */
#line 295 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('>'); }
    break;

  case 108:
/* Line 670 of lalr1.cc  */
#line 296 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('l'); }
    break;

  case 109:
/* Line 670 of lalr1.cc  */
#line 297 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('m'); }
    break;

  case 110:
/* Line 670 of lalr1.cc  */
#line 298 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('e'); }
    break;

  case 111:
/* Line 670 of lalr1.cc  */
#line 299 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('n'); }
    break;

  case 112:
/* Line 670 of lalr1.cc  */
#line 302 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('*'); }
    break;

  case 113:
/* Line 670 of lalr1.cc  */
#line 303 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('/'); }
    break;

  case 114:
/* Line 670 of lalr1.cc  */
#line 304 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('%'); }
    break;

  case 115:
/* Line 670 of lalr1.cc  */
#line 307 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('+'); }
    break;

  case 116:
/* Line 670 of lalr1.cc  */
#line 308 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('-'); }
    break;

  case 117:
/* Line 670 of lalr1.cc  */
#line 311 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('!'); }
    break;

  case 118:
/* Line 670 of lalr1.cc  */
#line 314 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('='); }
    break;

  case 119:
/* Line 670 of lalr1.cc  */
#line 317 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('('); }
    break;

  case 120:
/* Line 670 of lalr1.cc  */
#line 320 "..\\..\\..\\gramatica.yy"
    { driver.genExp('+'); }
    break;

  case 121:
/* Line 670 of lalr1.cc  */
#line 323 "..\\..\\..\\gramatica.yy"
    { driver.genExp('*'); }
    break;

  case 122:
/* Line 670 of lalr1.cc  */
#line 326 "..\\..\\..\\gramatica.yy"
    { driver.genExp('&'); }
    break;

  case 123:
/* Line 670 of lalr1.cc  */
#line 329 "..\\..\\..\\gramatica.yy"
    { driver.genExp('>'); }
    break;

  case 124:
/* Line 670 of lalr1.cc  */
#line 332 "..\\..\\..\\gramatica.yy"
    { driver.toOperand(); }
    break;

  case 125:
/* Line 670 of lalr1.cc  */
#line 335 "..\\..\\..\\gramatica.yy"
    { driver.copyId(); driver.checkVar(); }
    break;

  case 126:
/* Line 670 of lalr1.cc  */
#line 338 "..\\..\\..\\gramatica.yy"
    { driver.genIf(); }
    break;

  case 127:
/* Line 670 of lalr1.cc  */
#line 341 "..\\..\\..\\gramatica.yy"
    { driver.genElse(); }
    break;

  case 128:
/* Line 670 of lalr1.cc  */
#line 344 "..\\..\\..\\gramatica.yy"
    { driver.genElseIf(); }
    break;

  case 129:
/* Line 670 of lalr1.cc  */
#line 347 "..\\..\\..\\gramatica.yy"
    { driver.startWhile(); }
    break;

  case 130:
/* Line 670 of lalr1.cc  */
#line 350 "..\\..\\..\\gramatica.yy"
    { driver.genWhile(); }
    break;

  case 131:
/* Line 670 of lalr1.cc  */
#line 353 "..\\..\\..\\gramatica.yy"
    { driver.startDo(); }
    break;

  case 132:
/* Line 670 of lalr1.cc  */
#line 356 "..\\..\\..\\gramatica.yy"
    { driver.startFor(); }
    break;

  case 133:
/* Line 670 of lalr1.cc  */
#line 359 "..\\..\\..\\gramatica.yy"
    { driver.genFor(); }
    break;

  case 134:
/* Line 670 of lalr1.cc  */
#line 362 "..\\..\\..\\gramatica.yy"
    { driver.saveFor(); }
    break;

  case 135:
/* Line 670 of lalr1.cc  */
#line 365 "..\\..\\..\\gramatica.yy"
    { driver.checkFunc(); }
    break;

  case 136:
/* Line 670 of lalr1.cc  */
#line 368 "..\\..\\..\\gramatica.yy"
    { driver.saveFunc(); }
    break;

  case 137:
/* Line 670 of lalr1.cc  */
#line 371 "..\\..\\..\\gramatica.yy"
    { driver.verifyFunc(); }
    break;

  case 138:
/* Line 670 of lalr1.cc  */
#line 374 "..\\..\\..\\gramatica.yy"
    { driver.genEra(); }
    break;

  case 139:
/* Line 670 of lalr1.cc  */
#line 377 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('['); }
    break;


/* Line 670 of lalr1.cc  */
#line 1307 "gramatica.cpp"
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
  const signed char Gramatica::yypact_ninf_ = -114;
  const short int
  Gramatica::yypact_[] =
  {
       202,    55,   -34,   -30,  -114,    55,   146,   -28,    28,    55,
      55,    55,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,   -29,  -114,    53,   270,  -114,   270,  -114,  -114,    -9,
       8,  -114,    60,  -114,  -114,  -114,  -114,    -3,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,   -30,  -114,    -1,  -114,
    -114,  -114,    75,  -114,  -114,  -114,  -114,    55,    10,  -114,
    -114,    -3,   -30,    10,    10,    10,    10,  -114,     9,  -114,
    -114,  -114,   270,  -114,  -114,    36,    55,    78,    44,    55,
    -114,    63,  -114,  -114,  -114,  -114,  -114,  -114,    55,    38,
      -4,  -114,    55,    54,   -30,  -114,  -114,  -114,    41,  -114,
      59,    89,  -114,  -114,  -114,    55,  -114,  -114,    55,  -114,
     -30,   -30,  -114,   104,  -114,    -9,    61,    54,  -114,  -114,
      55,  -114,  -114,  -114,    55,  -114,  -114,  -114,    55,    56,
     223,    99,  -114,   154,    65,   -10,  -114,  -114,    64,    62,
      10,    43,  -114,  -114,    66,    68,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,    69,    55,    54,    -3,    71,
     154,  -114,  -114,  -114,    74,   -10,   131,  -114,    55,  -114,
    -114,    76,    72,    54,    54,   104,  -114,    55,   -34,  -114,
      10,  -114,    80,   -30,    77,  -114,  -114,  -114,  -114,  -114,
    -114,    55,    60,  -114,  -114,    10,  -114,  -114,   154,  -114,
    -114,   -30,  -114,  -114,  -114,   -30,    -3,    54,  -114,    54,
      80,  -114,    54,  -114,  -114,  -114
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  Gramatica::yydefact_[] =
  {
         0,     0,     0,    34,   129,     0,     0,     0,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      21,    31,    54,     0,     3,     4,    10,    11,    19,     0,
      26,    12,    37,    13,    40,    41,    42,     0,    14,    15,
      20,    16,    17,    18,    89,    88,    85,    86,    87,    84,
     117,   119,   103,   102,   101,    83,    34,   122,    92,   120,
     121,    99,     0,   132,    26,    33,   131,     0,     0,    31,
     135,     0,    34,     0,     0,     0,     0,   139,     0,     1,
       2,     8,    10,   118,   124,     0,     0,    39,   125,     0,
     126,    90,   106,   107,   109,   108,   110,   111,     0,    94,
      96,    98,     0,     0,    34,    24,    23,    25,     0,   135,
       0,     7,    78,    79,    80,     0,    28,     9,     0,   138,
      34,    34,    32,     0,    73,     0,     0,     0,   104,   105,
       0,   123,   115,   116,     0,   112,   113,   114,     0,     0,
       0,     0,   130,    65,     0,    57,     6,     5,     0,    29,
       0,     0,   128,   127,    76,     0,   124,   100,    35,    91,
      93,    95,    97,   133,    82,     0,     0,     0,     0,     0,
      65,    61,    62,    60,     0,    57,     0,    27,     0,    22,
      70,     0,    71,     0,     0,     0,    75,     0,     0,    81,
       0,    45,    68,    34,     0,    55,    56,    59,    58,    30,
      69,     0,    37,    38,    77,     0,   134,    44,     0,    66,
     136,    34,    72,    36,    74,    34,     0,     0,   136,     0,
      68,    64,     0,    43,    67,    63
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  Gramatica::yypgoto_[] =
  {
      -114,  -114,    18,  -114,   -16,    48,    -7,     5,   -58,  -114,
       3,   -43,    -2,  -114,   -47,  -114,   -66,  -114,  -114,  -114,
    -114,  -114,    -5,  -114,   -38,  -114,  -114,   -37,   -26,   -80,
      13,   -60,   -31,   -36,  -114,  -114,  -113,  -114,  -114,     1,
    -114,   -78,     4,  -114,    88,  -114,  -114,  -114,  -114,  -114,
      26,  -114,  -114,  -114,  -114,  -114,     6,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,    83,   -55,  -114,
    -114,  -114
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  Gramatica::yydefgoto_[] =
  {
        -1,    23,    24,   147,    25,    81,    26,    27,   107,    28,
      52,   148,    30,    31,    66,    32,    87,   122,    33,    34,
      35,    36,    37,    38,   174,   175,   176,    39,   169,   209,
      53,   181,    41,   155,    42,    43,   141,    54,    55,   149,
      57,    58,    59,    60,    61,   130,    98,   138,   134,    62,
      84,    89,    99,   100,    91,   160,   118,   125,   127,   184,
     183,    67,   167,   103,   102,   188,   215,   108,   217,    85,
     151,   115
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const short int Gramatica::yytable_ninf_ = -138;
  const short int
  Gramatica::yytable_[] =
  {
        64,    71,    56,    29,    70,    29,    68,    63,    80,    90,
      74,    75,    76,    40,   158,   111,   112,   113,   114,    82,
     131,   171,   172,    77,    21,   110,    65,    29,    78,    29,
     124,    72,   135,   136,   137,    88,    73,    40,    83,    40,
      92,    93,    94,    95,    96,    97,   173,    44,    45,    46,
      47,    48,    49,    79,   191,    69,   161,   142,  -137,    44,
      45,    46,    47,    48,    49,   105,   106,   116,   104,   109,
     202,   203,    86,   152,   153,    82,    50,   132,   133,    44,
      45,    46,    47,    48,    49,    29,   119,   120,    50,   121,
     126,   143,   179,    51,   180,    40,   123,   128,   129,   105,
     106,    21,   140,   139,   221,    51,   223,   145,     8,   225,
     154,   163,   157,    21,   166,   170,   178,   177,   189,   150,
     185,   186,   193,   195,   165,    51,   201,   200,   211,   146,
     117,   159,   207,    21,   208,   199,   213,   196,   168,   197,
     224,   212,   162,    29,   194,   198,   210,   214,     6,   204,
     101,   156,   182,    40,    12,    13,    14,    15,    16,    17,
      18,    19,   187,   222,   218,   168,   192,   190,   219,    12,
      13,    14,    15,    16,    17,    18,    19,    12,    13,    14,
      15,    16,    17,    18,    19,     0,    64,     0,   205,     0,
      22,    29,   144,   206,     0,     0,     0,     0,     0,     0,
       0,     0,   182,   216,    69,    22,     0,     0,     0,     0,
       0,     0,     1,    22,   220,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     1,     0,     0,     2,     3,     4,     5,
       6,     7,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,    20,     0,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,     0,     0,     0,     0,     0,     0,    20,
       1,    21,    22,     2,     3,     4,     5,     6,     7,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    21,    22
  };

  /* YYCHECK.  */
  const short int
  Gramatica::yycheck_[] =
  {
         2,     6,     1,     0,     6,     2,     5,     2,    24,    56,
       9,    10,    11,     0,   127,    73,    74,    75,    76,    26,
      98,    31,    32,    52,    58,    72,    56,    24,    57,    26,
      88,    59,    36,    37,    38,    37,     8,    24,    47,    26,
      41,    42,    43,    44,    45,    46,    56,     4,     5,     6,
       7,     8,     9,     0,   167,    58,   134,   104,    50,     4,
       5,     6,     7,     8,     9,    55,    56,    58,    67,    71,
     183,   184,    12,   120,   121,    82,    33,    39,    40,     4,
       5,     6,     7,     8,     9,    82,    50,    86,    33,    11,
      89,    50,   150,    50,    51,    82,    52,    34,    35,    55,
      56,    58,    48,   102,   217,    50,   219,    48,    19,   222,
       6,    55,    51,    58,    15,    50,    54,    53,    49,   118,
      54,    53,    51,    49,   140,    50,    54,    51,    51,   111,
      82,   130,   190,    58,    54,   178,   202,   175,   143,   176,
     220,   201,   138,   140,   170,   176,   193,   205,    17,   185,
      62,   125,   151,   140,    23,    24,    25,    26,    27,    28,
      29,    30,   156,   218,   211,   170,   168,   166,   215,    23,
      24,    25,    26,    27,    28,    29,    30,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   188,    -1,   187,    -1,
      59,   188,   109,   188,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   208,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    59,   216,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      10,    58,    59,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    59
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  Gramatica::yystos_[] =
  {
         0,    10,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      56,    58,    59,    61,    62,    64,    66,    67,    69,    70,
      72,    73,    75,    78,    79,    80,    81,    82,    83,    87,
      90,    92,    94,    95,     4,     5,     6,     7,     8,     9,
      33,    50,    70,    90,    97,    98,    99,   100,   101,   102,
     103,   104,   109,    67,    72,    56,    74,   121,    99,    58,
      72,    82,    59,     8,    99,    99,    99,    52,    57,     0,
      64,    65,    66,    47,   110,   129,    12,    76,    72,   111,
      74,   114,    41,    42,    43,    44,    45,    46,   106,   112,
     113,   104,   124,   123,    99,    55,    56,    68,   127,    72,
      74,    68,    68,    68,    68,   131,    58,    65,   116,    50,
      99,    11,    77,    52,    68,   117,    99,   118,    34,    35,
     105,   101,    39,    40,   108,    36,    37,    38,   107,    99,
      48,    96,    74,    50,   127,    48,    62,    63,    71,    99,
      99,   130,    74,    74,     6,    93,   110,    51,    96,    99,
     115,   101,   102,    55,    49,    64,    15,   122,    82,    88,
      50,    31,    32,    56,    84,    85,    86,    53,    54,    68,
      51,    91,    99,   120,   119,    54,    53,   116,   125,    49,
      99,    96,    72,    51,    88,    49,    84,    87,    92,    71,
      51,    54,    96,    96,    93,    99,    67,    68,    54,    89,
      74,    51,    91,    76,    68,   126,    82,   128,    74,    74,
      72,    96,   128,    96,    89,    96
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  Gramatica::yyr1_[] =
  {
         0,    60,    61,    61,    61,    62,    63,    63,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    68,    68,    69,    70,    70,    70,    71,
      71,    72,    73,    74,    74,    75,    76,    76,    77,    77,
      78,    78,    78,    79,    80,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    84,    84,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    93,    93,    94,    94,
      95,    96,    96,    97,    97,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  Gramatica::yyr2_[] =
  {
         0,     2,     2,     1,     1,     4,     1,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     1,     3,     1,     5,     3,     1,
       3,     1,     3,     1,     0,     5,     6,     0,     4,     0,
       1,     1,     1,    10,     7,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     2,     0,     2,     2,
       1,     1,     1,    10,     9,     0,     3,     4,     0,     6,
       5,     1,     3,     3,     7,     5,     1,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     1,     4,     2,     4,     2,     4,     2,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
  };


  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const Gramatica::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "CONST_NULL", "CONST_FALSE",
  "CONST_TRUE", "CONST_INT", "CONST_FLOAT", "CONST_STR", "CONST_CHAR",
  "TK_IF", "TK_ELSE", "TK_ELIF", "TK_FOR", "TK_DO", "TK_WHILE",
  "TK_RETURN", "TK_FUNC", "TK_CLASS", "TK_IMPORT", "TK_PRINT",
  "TK_PRINTLN", "TK_READ", "TPNM_BOOL", "TPNM_CHAR", "TPNM_SHORT",
  "TPNM_INT", "TPNM_LONG", "TPNM_FLOAT", "TPNM_DOUBLE", "TPNM_STR",
  "ACC_PRIVATE", "ACC_PUBLIC", "OP_NOT", "OP_AND", "OP_OR", "OP_MULT",
  "OP_DIV", "OP_MOD", "OP_ADD", "OP_SUB", "OP_LESS", "OP_MORE",
  "OP_MOREEQ", "OP_LESSEQ", "OP_EQ", "OP_NOTEQ", "OP_ASSIGN",
  "TK_LEFTBRACKET", "TK_RIGHTBRACKET", "TK_LEFTPAREN", "TK_RIGHTPAREN",
  "TK_LEFTSQBRACKET", "TK_RIGHTSQBRACKET", "TK_COMMA", "TK_SEMICOLON",
  "TK_NEWLINE", "TK_DOT", "T_ID", "T_CLASSNAME", "$accept", "program",
  "imports", "moreimps", "statelist", "morestates", "state", "assign",
  "delimiter", "return", "id", "array_acc", "simple_id", "conditional",
  "maybenl", "if", "elseif", "else", "loop", "for", "do", "while", "type",
  "class", "class_dec", "class_st", "accesor", "function", "args",
  "moreargs", "func_call", "call_args", "var", "array_dim", "print",
  "read", "block", "var_const", "boolean", "expresion", "exp", "e", "term",
  "fact", "f", "rel_op", "comp_op", "mult_op", "add_op", "neg_op",
  "ass_op", "stat_exp_aux1", "stat_exp_aux2", "stat_exp_aux3",
  "stat_exp_aux4", "stat_exp_aux5", "stat_assign_aux", "stat_var_aux",
  "stat_if_aux1", "stat_if_aux2", "stat_if_aux3", "stat_while_aux1",
  "stat_while_aux2", "stat_do_aux", "stat_for_aux1", "stat_for_aux2",
  "stat_for_aux3", "stat_func_aux1", "stat_func_aux2", "stat_funcall_aux1",
  "stat_funcall_aux2", "stat_array_aux", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const Gramatica::rhs_number_type
  Gramatica::yyrhs_[] =
  {
        61,     0,    -1,    62,    64,    -1,    62,    -1,    64,    -1,
      19,     8,    68,    63,    -1,    62,    -1,    -1,    66,    65,
      -1,    66,    65,    -1,    -1,    67,    -1,    73,    -1,    78,
      -1,    83,    -1,    87,    -1,    92,    -1,    94,    -1,    95,
      -1,    69,    -1,    90,    -1,    56,    -1,    70,   110,   116,
      99,    68,    -1,    56,    -1,    55,    -1,    16,    99,    68,
      -1,    72,    -1,    58,    52,   131,    71,    53,    -1,    58,
      57,    58,    -1,    99,    -1,    99,    54,    71,    -1,    58,
      -1,    75,    76,    77,    -1,    56,    -1,    -1,    10,    99,
      74,   118,    96,    -1,    12,    99,    74,   120,    96,    76,
      -1,    -1,    11,    74,   119,    96,    -1,    -1,    79,    -1,
      80,    -1,    81,    -1,    13,    67,   124,    99,    55,   125,
      67,   126,    74,    96,    -1,    14,    74,   123,    96,    15,
      99,    68,    -1,    15,   121,    99,    74,   122,    96,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    59,    -1,    18,    59,
      74,    48,    84,    49,    -1,    85,    84,    -1,    -1,    86,
      92,    -1,    86,    87,    -1,    56,    -1,    31,    -1,    32,
      -1,    17,    82,    72,   127,    50,    88,    51,    74,   128,
      96,    -1,    17,    72,   127,    50,    88,    51,    74,   128,
      96,    -1,    -1,    82,    72,    89,    -1,    54,    82,    72,
      89,    -1,    -1,    72,   129,    50,   130,    91,    51,    -1,
      72,   129,    50,   130,    51,    -1,    99,    -1,    99,    54,
      91,    -1,    82,    72,    68,    -1,    82,    72,   117,   110,
     116,    99,    68,    -1,    82,    72,    52,    93,    53,    -1,
       6,    -1,     6,    54,    93,    -1,    20,    99,    68,    -1,
      21,    99,    68,    -1,    22,    99,    68,    -1,    48,    64,
      49,    -1,    48,    49,    -1,    98,    -1,     9,    -1,     6,
      -1,     7,    -1,     8,    -1,     5,    -1,     4,    -1,   100,
     114,    -1,   100,   114,   105,    99,    -1,   101,    -1,   101,
     106,   101,   115,    -1,   102,   112,    -1,   102,   112,   108,
     101,    -1,   103,   113,    -1,   103,   113,   107,   102,    -1,
     109,   104,    -1,   104,    -1,    50,   111,    99,    51,    -1,
      97,    -1,    90,    -1,    70,    -1,    34,    -1,    35,    -1,
      41,    -1,    42,    -1,    44,    -1,    43,    -1,    45,    -1,
      46,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,    33,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  Gramatica::yyprhs_[] =
  {
         0,     0,     3,     6,     8,    10,    15,    17,    18,    21,
      24,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    53,    55,    57,    61,    63,    69,    73,
      75,    79,    81,    85,    87,    88,    94,   101,   102,   107,
     108,   110,   112,   114,   125,   133,   140,   142,   144,   146,
     148,   150,   152,   154,   156,   158,   165,   168,   169,   172,
     175,   177,   179,   181,   192,   202,   203,   207,   212,   213,
     220,   226,   228,   232,   236,   244,   250,   252,   256,   260,
     264,   268,   272,   275,   277,   279,   281,   283,   285,   287,
     289,   292,   297,   299,   304,   307,   312,   315,   320,   323,
     325,   330,   332,   334,   336,   338,   340,   342,   344,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  Gramatica::yyrline_[] =
  {
         0,    99,    99,   100,   101,   104,   107,   108,   111,   114,
     115,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   131,   134,   135,   138,   141,   142,   143,   146,
     147,   151,   154,   157,   158,   161,   164,   165,   168,   169,
     172,   173,   174,   177,   180,   183,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   197,   200,   201,   204,   205,
     206,   209,   210,   213,   214,   217,   218,   221,   222,   225,
     226,   229,   230,   233,   234,   235,   238,   239,   242,   243,
     246,   249,   250,   253,   254,   255,   256,   257,   260,   261,
     264,   265,   268,   269,   272,   273,   276,   277,   280,   281,
     284,   285,   286,   287,   290,   291,   294,   295,   296,   297,
     298,   299,   302,   303,   304,   307,   308,   311,   314,   317,
     320,   323,   326,   329,   332,   335,   338,   341,   344,   347,
     350,   353,   356,   359,   362,   365,   368,   371,   374,   377
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
      55,    56,    57,    58,    59
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int Gramatica::yyeof_ = 0;
  const int Gramatica::yylast_ = 329;
  const int Gramatica::yynnts_ = 72;
  const int Gramatica::yyempty_ = -2;
  const int Gramatica::yyfinal_ = 79;
  const int Gramatica::yyterror_ = 1;
  const int Gramatica::yyerrcode_ = 256;
  const int Gramatica::yyntokens_ = 60;

  const unsigned int Gramatica::yyuser_token_number_max_ = 314;
  const Gramatica::token_number_type Gramatica::yyundef_token_ = 2;


} // ss
/* Line 1141 of lalr1.cc  */
#line 2072 "gramatica.cpp"
/* Line 1142 of lalr1.cc  */
#line 380 "..\\..\\..\\gramatica.yy"


void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
	driver.error(l, m);
}
