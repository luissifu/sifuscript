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
    { ; }
    break;

  case 3:
/* Line 670 of lalr1.cc  */
#line 100 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 4:
/* Line 670 of lalr1.cc  */
#line 101 "..\\..\\..\\gramatica.yy"
    { ; }
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
    { ; }
    break;

  case 26:
/* Line 670 of lalr1.cc  */
#line 141 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 142 "..\\..\\..\\gramatica.yy"
    { driver.addId((yysemantic_stack_[(4) - (1)].string)); }
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 143 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 146 "..\\..\\..\\gramatica.yy"
    { driver.addId((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 149 "..\\..\\..\\gramatica.yy"
    { driver.endIf(); }
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 152 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 32:
/* Line 670 of lalr1.cc  */
#line 153 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 33:
/* Line 670 of lalr1.cc  */
#line 156 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 34:
/* Line 670 of lalr1.cc  */
#line 159 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 35:
/* Line 670 of lalr1.cc  */
#line 160 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 36:
/* Line 670 of lalr1.cc  */
#line 163 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 37:
/* Line 670 of lalr1.cc  */
#line 164 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 38:
/* Line 670 of lalr1.cc  */
#line 167 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 39:
/* Line 670 of lalr1.cc  */
#line 168 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 40:
/* Line 670 of lalr1.cc  */
#line 169 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 41:
/* Line 670 of lalr1.cc  */
#line 172 "..\\..\\..\\gramatica.yy"
    { driver.endFor(); }
    break;

  case 42:
/* Line 670 of lalr1.cc  */
#line 175 "..\\..\\..\\gramatica.yy"
    { driver.genDo(); }
    break;

  case 43:
/* Line 670 of lalr1.cc  */
#line 178 "..\\..\\..\\gramatica.yy"
    { driver.endWhile(); }
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 181 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 182 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 183 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 184 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 185 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 186 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 187 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 188 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 189 "..\\..\\..\\gramatica.yy"
    { driver.addType((yysemantic_stack_[(1) - (1)].string)); }
    break;

  case 53:
/* Line 670 of lalr1.cc  */
#line 192 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 195 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 56:
/* Line 670 of lalr1.cc  */
#line 199 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 57:
/* Line 670 of lalr1.cc  */
#line 200 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 201 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 204 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 205 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 61:
/* Line 670 of lalr1.cc  */
#line 208 "..\\..\\..\\gramatica.yy"
    { driver.endFunc(); }
    break;

  case 62:
/* Line 670 of lalr1.cc  */
#line 209 "..\\..\\..\\gramatica.yy"
    { driver.endFunc(); }
    break;

  case 63:
/* Line 670 of lalr1.cc  */
#line 212 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 64:
/* Line 670 of lalr1.cc  */
#line 213 "..\\..\\..\\gramatica.yy"
    { driver.addParam(); }
    break;

  case 65:
/* Line 670 of lalr1.cc  */
#line 216 "..\\..\\..\\gramatica.yy"
    { driver.addParam(); }
    break;

  case 66:
/* Line 670 of lalr1.cc  */
#line 217 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 67:
/* Line 670 of lalr1.cc  */
#line 220 "..\\..\\..\\gramatica.yy"
    { driver.genSub(); }
    break;

  case 68:
/* Line 670 of lalr1.cc  */
#line 221 "..\\..\\..\\gramatica.yy"
    { driver.genSub(); }
    break;

  case 69:
/* Line 670 of lalr1.cc  */
#line 224 "..\\..\\..\\gramatica.yy"
    { driver.genParam(); }
    break;

  case 70:
/* Line 670 of lalr1.cc  */
#line 225 "..\\..\\..\\gramatica.yy"
    { driver.genParam(); }
    break;

  case 71:
/* Line 670 of lalr1.cc  */
#line 228 "..\\..\\..\\gramatica.yy"
    { driver.checkVar(); }
    break;

  case 72:
/* Line 670 of lalr1.cc  */
#line 229 "..\\..\\..\\gramatica.yy"
    { driver.genAssign(); }
    break;

  case 73:
/* Line 670 of lalr1.cc  */
#line 232 "..\\..\\..\\gramatica.yy"
    { driver.genPrint(); }
    break;

  case 74:
/* Line 670 of lalr1.cc  */
#line 235 "..\\..\\..\\gramatica.yy"
    { driver.genRead(); }
    break;

  case 75:
/* Line 670 of lalr1.cc  */
#line 238 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 76:
/* Line 670 of lalr1.cc  */
#line 239 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 77:
/* Line 670 of lalr1.cc  */
#line 242 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 78:
/* Line 670 of lalr1.cc  */
#line 243 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'c'); }
    break;

  case 79:
/* Line 670 of lalr1.cc  */
#line 244 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'i'); }
    break;

  case 80:
/* Line 670 of lalr1.cc  */
#line 245 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'f'); }
    break;

  case 81:
/* Line 670 of lalr1.cc  */
#line 246 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 's'); }
    break;

  case 82:
/* Line 670 of lalr1.cc  */
#line 247 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 83:
/* Line 670 of lalr1.cc  */
#line 250 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'b'); }
    break;

  case 84:
/* Line 670 of lalr1.cc  */
#line 251 "..\\..\\..\\gramatica.yy"
    { driver.addConst((yysemantic_stack_[(1) - (1)].string), 'b'); }
    break;

  case 85:
/* Line 670 of lalr1.cc  */
#line 254 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 86:
/* Line 670 of lalr1.cc  */
#line 255 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 87:
/* Line 670 of lalr1.cc  */
#line 258 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 88:
/* Line 670 of lalr1.cc  */
#line 259 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 89:
/* Line 670 of lalr1.cc  */
#line 262 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 90:
/* Line 670 of lalr1.cc  */
#line 263 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 91:
/* Line 670 of lalr1.cc  */
#line 266 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 92:
/* Line 670 of lalr1.cc  */
#line 267 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 93:
/* Line 670 of lalr1.cc  */
#line 270 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 94:
/* Line 670 of lalr1.cc  */
#line 271 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 95:
/* Line 670 of lalr1.cc  */
#line 274 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 96:
/* Line 670 of lalr1.cc  */
#line 275 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 97:
/* Line 670 of lalr1.cc  */
#line 278 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 98:
/* Line 670 of lalr1.cc  */
#line 279 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 99:
/* Line 670 of lalr1.cc  */
#line 282 "..\\..\\..\\gramatica.yy"
    { driver.genExp('!');; }
    break;

  case 100:
/* Line 670 of lalr1.cc  */
#line 283 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 101:
/* Line 670 of lalr1.cc  */
#line 286 "..\\..\\..\\gramatica.yy"
    { driver.endExp(); }
    break;

  case 102:
/* Line 670 of lalr1.cc  */
#line 287 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 103:
/* Line 670 of lalr1.cc  */
#line 288 "..\\..\\..\\gramatica.yy"
    { ; }
    break;

  case 104:
/* Line 670 of lalr1.cc  */
#line 289 "..\\..\\..\\gramatica.yy"
    { driver.toOperand(); }
    break;

  case 105:
/* Line 670 of lalr1.cc  */
#line 292 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('&'); }
    break;

  case 106:
/* Line 670 of lalr1.cc  */
#line 293 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('|'); }
    break;

  case 107:
/* Line 670 of lalr1.cc  */
#line 296 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('<'); }
    break;

  case 108:
/* Line 670 of lalr1.cc  */
#line 297 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('>'); }
    break;

  case 109:
/* Line 670 of lalr1.cc  */
#line 298 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('l'); }
    break;

  case 110:
/* Line 670 of lalr1.cc  */
#line 299 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('m'); }
    break;

  case 111:
/* Line 670 of lalr1.cc  */
#line 300 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('e'); }
    break;

  case 112:
/* Line 670 of lalr1.cc  */
#line 301 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('n'); }
    break;

  case 113:
/* Line 670 of lalr1.cc  */
#line 304 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('*'); }
    break;

  case 114:
/* Line 670 of lalr1.cc  */
#line 305 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('/'); }
    break;

  case 115:
/* Line 670 of lalr1.cc  */
#line 306 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('%'); }
    break;

  case 116:
/* Line 670 of lalr1.cc  */
#line 309 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('+'); }
    break;

  case 117:
/* Line 670 of lalr1.cc  */
#line 310 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('-'); }
    break;

  case 118:
/* Line 670 of lalr1.cc  */
#line 313 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('!'); }
    break;

  case 119:
/* Line 670 of lalr1.cc  */
#line 316 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('='); }
    break;

  case 120:
/* Line 670 of lalr1.cc  */
#line 319 "..\\..\\..\\gramatica.yy"
    { driver.toOperator('('); }
    break;

  case 121:
/* Line 670 of lalr1.cc  */
#line 322 "..\\..\\..\\gramatica.yy"
    { driver.genExp('+'); }
    break;

  case 122:
/* Line 670 of lalr1.cc  */
#line 325 "..\\..\\..\\gramatica.yy"
    { driver.genExp('*'); }
    break;

  case 123:
/* Line 670 of lalr1.cc  */
#line 328 "..\\..\\..\\gramatica.yy"
    { driver.genExp('&'); }
    break;

  case 124:
/* Line 670 of lalr1.cc  */
#line 331 "..\\..\\..\\gramatica.yy"
    { driver.genExp('>'); }
    break;

  case 125:
/* Line 670 of lalr1.cc  */
#line 334 "..\\..\\..\\gramatica.yy"
    { driver.toOperand(); }
    break;

  case 126:
/* Line 670 of lalr1.cc  */
#line 337 "..\\..\\..\\gramatica.yy"
    { driver.copyId(); driver.checkVar(); }
    break;

  case 127:
/* Line 670 of lalr1.cc  */
#line 340 "..\\..\\..\\gramatica.yy"
    { driver.genIf(); }
    break;

  case 128:
/* Line 670 of lalr1.cc  */
#line 343 "..\\..\\..\\gramatica.yy"
    { driver.genElse(); }
    break;

  case 129:
/* Line 670 of lalr1.cc  */
#line 346 "..\\..\\..\\gramatica.yy"
    { driver.genElseIf(); }
    break;

  case 130:
/* Line 670 of lalr1.cc  */
#line 349 "..\\..\\..\\gramatica.yy"
    { driver.startWhile(); }
    break;

  case 131:
/* Line 670 of lalr1.cc  */
#line 352 "..\\..\\..\\gramatica.yy"
    { driver.genWhile(); }
    break;

  case 132:
/* Line 670 of lalr1.cc  */
#line 355 "..\\..\\..\\gramatica.yy"
    { driver.startDo(); }
    break;

  case 133:
/* Line 670 of lalr1.cc  */
#line 358 "..\\..\\..\\gramatica.yy"
    { driver.startFor(); }
    break;

  case 134:
/* Line 670 of lalr1.cc  */
#line 361 "..\\..\\..\\gramatica.yy"
    { driver.genFor(); }
    break;

  case 135:
/* Line 670 of lalr1.cc  */
#line 364 "..\\..\\..\\gramatica.yy"
    { driver.saveFor(); }
    break;

  case 136:
/* Line 670 of lalr1.cc  */
#line 367 "..\\..\\..\\gramatica.yy"
    { driver.checkFunc(); }
    break;

  case 137:
/* Line 670 of lalr1.cc  */
#line 370 "..\\..\\..\\gramatica.yy"
    { driver.saveFunc(); }
    break;

  case 138:
/* Line 670 of lalr1.cc  */
#line 373 "..\\..\\..\\gramatica.yy"
    { driver.verifyFunc(); }
    break;

  case 139:
/* Line 670 of lalr1.cc  */
#line 376 "..\\..\\..\\gramatica.yy"
    { driver.genEra(); }
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
  const signed char Gramatica::yypact_ninf_ = -119;
  const short int
  Gramatica::yypact_[] =
  {
       201,    73,   -34,   -28,  -119,    73,   275,   -29,    23,    73,
      73,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
     -31,  -119,    36,   267,  -119,   267,  -119,  -119,    -8,    -1,
    -119,    44,  -119,  -119,  -119,  -119,   -34,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,   107,  -119,  -119,  -119,  -119,  -119,   -28,  -119,    21,
    -119,  -119,  -119,   145,  -119,  -119,  -119,  -119,    73,   -33,
    -119,  -119,    14,   -28,   -33,   -33,   -33,    67,    17,  -119,
    -119,  -119,   267,  -119,  -119,    34,    73,    75,   -33,    73,
    -119,  -119,  -119,    32,    35,  -119,     7,  -119,  -119,  -119,
    -119,  -119,  -119,    73,    20,    15,  -119,    73,    45,   -28,
    -119,  -119,  -119,    42,  -119,    52,    82,  -119,  -119,    50,
    -119,  -119,    73,    54,   -28,   -28,  -119,  -119,    -8,    56,
    -119,    38,    45,  -119,  -119,    73,  -119,  -119,  -119,    73,
    -119,  -119,  -119,    73,    53,   221,    94,  -119,   283,    61,
       2,  -119,  -119,  -119,   -33,   -33,    73,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    69,
      73,    45,    14,    68,   283,  -119,  -119,  -119,    71,     2,
     150,  -119,  -119,    70,    72,    45,    45,    73,   -34,  -119,
     -33,  -119,    74,   -28,    76,  -119,  -119,  -119,  -119,   -33,
      73,    44,  -119,   -33,  -119,  -119,   283,  -119,  -119,   -28,
    -119,  -119,  -119,  -119,   -28,    14,    45,  -119,    45,    74,
    -119,    45,  -119,  -119,  -119
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  Gramatica::yydefact_[] =
  {
         0,     0,     0,    32,   130,     0,     0,     0,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    21,
      29,    52,     0,     3,     4,    10,    11,    19,     0,    26,
      12,    35,    13,    38,    39,    40,     0,    14,    15,    20,
      16,    17,    18,    84,    83,    79,    80,    81,    78,   118,
     120,     0,   104,   103,   102,    77,    82,    32,   123,    93,
     121,   122,   100,     0,   133,    26,    31,   132,     0,     0,
      29,   136,     0,    32,     0,     0,     0,     0,     0,     1,
       2,     8,    10,   119,   125,     0,     0,    37,   126,     0,
      86,    90,    89,     0,    87,   127,    91,   107,   108,   110,
     109,   111,   112,     0,    95,    97,    99,     0,     0,    32,
      24,    23,    25,     0,   136,     0,     7,    73,    74,     0,
      28,     9,     0,   139,    32,    32,    30,    71,     0,     0,
      85,     0,     0,   105,   106,     0,   124,   116,   117,     0,
     113,   114,   115,     0,     0,     0,     0,   131,    63,     0,
      55,     6,     5,    27,     0,     0,     0,   129,   128,   125,
     101,    88,    33,    92,    94,    96,    98,   134,    76,     0,
       0,     0,     0,     0,    63,    59,    60,    58,     0,    55,
       0,    22,    68,     0,    69,     0,     0,     0,     0,    75,
       0,    43,    66,    32,     0,    53,    54,    57,    56,     0,
       0,    35,    36,     0,   135,    42,     0,    64,   137,    32,
      67,    70,    34,    72,    32,     0,     0,   137,     0,    66,
      62,     0,    41,    65,    61
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  Gramatica::yypgoto_[] =
  {
      -119,  -119,    19,  -119,   -14,    39,   -10,     5,   -58,  -119,
       3,    -2,  -119,   -49,  -119,   -73,  -119,  -119,  -119,  -119,
    -119,    -5,  -119,   -46,  -119,  -119,   -43,   -36,   -80,    12,
     -60,   -25,  -119,  -119,  -118,   -38,  -119,  -119,    11,  -119,
       1,  -119,   -84,     4,  -119,    83,  -119,  -119,  -119,  -119,
    -119,    28,  -119,  -119,  -119,  -119,  -119,     9,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    47,   -55,
    -119,  -119
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  Gramatica::yydefgoto_[] =
  {
        -1,    22,    23,   152,    24,    81,    25,    26,   112,    27,
      52,    29,    30,    67,    31,    87,   126,    32,    33,    34,
      35,    36,    37,   178,   179,   180,    38,   173,   207,    53,
     183,    40,    41,    42,   146,    54,    55,    56,    93,    94,
     184,    58,    59,    60,    61,    62,   135,   103,   143,   139,
      63,    84,    89,   104,   105,    96,   164,   122,   128,   132,
     186,   185,    68,   171,   108,   107,   188,   214,   113,   216,
      85,   156
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const short int Gramatica::yytable_ninf_ = -139;
  const short int
  Gramatica::yytable_[] =
  {
        65,    72,    57,    28,    71,    28,    69,    64,    95,    80,
      75,    76,    39,    92,   162,    82,   116,   117,   118,   136,
      77,   110,   111,    20,   115,    78,    28,    66,    28,    73,
     127,    74,   175,   176,    65,    39,    79,    39,    83,    88,
     133,   134,    43,    44,    45,    46,    47,    48,  -138,    65,
     140,   141,   142,   191,    91,   165,    86,   177,   137,   138,
     147,    97,    98,    99,   100,   101,   102,   201,   202,   109,
     114,    70,    82,   119,   120,   157,   158,    43,    44,    45,
      46,    47,    48,   123,   130,    28,   125,   124,   131,    51,
     129,   148,   145,    92,    39,    20,   181,   182,   220,   150,
     222,     8,   153,   224,   155,    49,   160,   167,   144,   170,
     174,    43,    44,    45,    46,    47,    48,   189,   193,   195,
     199,   121,    50,   154,    51,   200,   209,   206,   212,    65,
      20,   169,   205,   196,    91,   151,   163,   197,   194,   223,
     211,   210,   161,   172,   208,   213,   106,   166,    28,    43,
      44,    45,    46,    47,    48,   198,   159,    39,    51,    90,
     217,   149,   221,     0,    20,   218,     0,     6,   187,   172,
     192,   190,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,     0,     0,     0,    65,     0,   203,     0,
       0,    28,     0,   204,    50,     0,    51,     0,     0,     0,
       0,   215,    20,     0,     0,     0,     0,     0,    21,     0,
       0,     1,     0,   219,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     1,     0,     0,     2,     3,     4,     5,     6,     7,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,    19,     0,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
       0,     0,     0,     0,     0,     0,    19,     1,    20,    21,
       2,     3,     4,     5,     6,     7,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    11,    12,    13,
      14,    15,    16,    17,    18,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    20,    21,     0,     0,     0,     0,
       0,     0,    70,    21,     0,     0,     0,     0,     0,     0,
       0,    21
  };

  /* YYCHECK.  */
  const short int
  Gramatica::yycheck_[] =
  {
         2,     6,     1,     0,     6,     2,     5,     2,    57,    23,
       9,    10,     0,    51,   132,    25,    74,    75,    76,   103,
      51,    54,    55,    57,    73,    56,    23,    55,    25,    58,
      88,     8,    30,    31,    36,    23,     0,    25,    46,    36,
      33,    34,     4,     5,     6,     7,     8,     9,    49,    51,
      35,    36,    37,   171,    51,   139,    12,    55,    38,    39,
     109,    40,    41,    42,    43,    44,    45,   185,   186,    68,
      72,    57,    82,     6,    57,   124,   125,     4,     5,     6,
       7,     8,     9,    49,    52,    82,    11,    86,    53,    51,
      89,    49,    47,   131,    82,    57,   154,   155,   216,    47,
     218,    19,    52,   221,    50,    32,    50,    54,   107,    15,
      49,     4,     5,     6,     7,     8,     9,    48,    50,    48,
      50,    82,    49,   122,    51,    53,    50,    53,   201,   131,
      57,   145,   190,   179,   131,   116,   135,   180,   174,   219,
     200,   199,   131,   148,   193,   203,    63,   143,   145,     4,
       5,     6,     7,     8,     9,   180,   128,   145,    51,    52,
     209,   114,   217,    -1,    57,   214,    -1,    17,   159,   174,
     172,   170,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,   187,    -1,
      -1,   188,    -1,   188,    49,    -1,    51,    -1,    -1,    -1,
      -1,   206,    57,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    10,    -1,   215,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    10,    57,    58,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    22,    23,    24,
      25,    26,    27,    28,    29,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  Gramatica::yystos_[] =
  {
         0,    10,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    55,
      57,    58,    60,    61,    63,    65,    66,    68,    69,    70,
      71,    73,    76,    77,    78,    79,    80,    81,    85,    88,
      90,    91,    92,     4,     5,     6,     7,     8,     9,    32,
      49,    51,    69,    88,    94,    95,    96,    99,   100,   101,
     102,   103,   104,   109,    66,    70,    55,    72,   121,    99,
      57,    70,    80,    58,     8,    99,    99,    51,    56,     0,
      63,    64,    65,    46,   110,   129,    12,    74,    69,   111,
      52,    69,    94,    97,    98,    72,   114,    40,    41,    42,
      43,    44,    45,   106,   112,   113,   104,   124,   123,    99,
      54,    55,    67,   127,    70,    72,    67,    67,    67,     6,
      57,    64,   116,    49,    99,    11,    75,    67,   117,    99,
      52,    53,   118,    33,    34,   105,   101,    38,    39,   108,
      35,    36,    37,   107,    99,    47,    93,    72,    49,   127,
      47,    61,    62,    52,    99,    50,   130,    72,    72,   110,
      50,    97,    93,    99,   115,   101,   102,    54,    48,    63,
      15,   122,    80,    86,    49,    30,    31,    55,    82,    83,
      84,    67,    67,    89,    99,   120,   119,   116,   125,    48,
      99,    93,    70,    50,    86,    48,    82,    85,    90,    50,
      53,    93,    93,    99,    66,    67,    53,    87,    72,    50,
      67,    89,    74,    67,   126,    80,   128,    72,    72,    70,
      93,   128,    93,    87,    93
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  Gramatica::yyr1_[] =
  {
         0,    59,    60,    60,    60,    61,    62,    62,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    67,    67,    68,    69,    69,    69,    70,
      71,    72,    72,    73,    74,    74,    75,    75,    76,    76,
      76,    77,    78,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    82,    82,    83,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   107,   107,   107,   108,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  Gramatica::yyr2_[] =
  {
         0,     2,     2,     1,     1,     4,     1,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     1,     3,     1,     4,     3,     1,
       3,     1,     0,     5,     6,     0,     4,     0,     1,     1,
       1,    10,     7,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     2,     0,     2,     2,     1,     1,
       1,    10,     9,     0,     3,     4,     0,     7,     5,     1,
       3,     3,     7,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     3,     1,
       1,     2,     4,     1,     4,     2,     4,     2,     4,     2,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
  "TK_RETURN", "TK_FUNC", "TK_CLASS", "TK_IMPORT", "TK_PRINT", "TK_READ",
  "TPNM_BOOL", "TPNM_CHAR", "TPNM_SHORT", "TPNM_INT", "TPNM_LONG",
  "TPNM_FLOAT", "TPNM_DOUBLE", "TPNM_STR", "ACC_PRIVATE", "ACC_PUBLIC",
  "OP_NOT", "OP_AND", "OP_OR", "OP_MULT", "OP_DIV", "OP_MOD", "OP_ADD",
  "OP_SUB", "OP_LESS", "OP_MORE", "OP_MOREEQ", "OP_LESSEQ", "OP_EQ",
  "OP_NOTEQ", "OP_ASSIGN", "TK_LEFTBRACKET", "TK_RIGHTBRACKET",
  "TK_LEFTPAREN", "TK_RIGHTPAREN", "TK_LEFTSQBRACKET", "TK_RIGHTSQBRACKET",
  "TK_COMMA", "TK_SEMICOLON", "TK_NEWLINE", "TK_DOT", "T_ID",
  "T_CLASSNAME", "$accept", "program", "imports", "moreimps", "statelist",
  "morestates", "state", "assign", "delimiter", "return", "id",
  "simple_id", "conditional", "maybenl", "if", "elseif", "else", "loop",
  "for", "do", "while", "type", "class", "class_dec", "class_st",
  "accesor", "function", "args", "moreargs", "func_call", "call_args",
  "var", "print", "read", "block", "var_const", "boolean", "list",
  "list_elem", "list_e", "expresion", "exp", "e", "term", "fact", "f",
  "rel_op", "comp_op", "mult_op", "add_op", "neg_op", "ass_op",
  "stat_exp_aux1", "stat_exp_aux2", "stat_exp_aux3", "stat_exp_aux4",
  "stat_exp_aux5", "stat_assign_aux", "stat_var_aux", "stat_if_aux1",
  "stat_if_aux2", "stat_if_aux3", "stat_while_aux1", "stat_while_aux2",
  "stat_do_aux", "stat_for_aux1", "stat_for_aux2", "stat_for_aux3",
  "stat_func_aux1", "stat_func_aux2", "stat_funcall_aux1",
  "stat_funcall_aux2", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const Gramatica::rhs_number_type
  Gramatica::yyrhs_[] =
  {
        60,     0,    -1,    61,    63,    -1,    61,    -1,    63,    -1,
      19,     8,    67,    62,    -1,    61,    -1,    -1,    65,    64,
      -1,    65,    64,    -1,    -1,    66,    -1,    71,    -1,    76,
      -1,    81,    -1,    85,    -1,    90,    -1,    91,    -1,    92,
      -1,    68,    -1,    88,    -1,    55,    -1,    69,   110,   116,
      99,    67,    -1,    55,    -1,    54,    -1,    16,    99,    67,
      -1,    70,    -1,    57,    51,     6,    52,    -1,    57,    56,
      57,    -1,    57,    -1,    73,    74,    75,    -1,    55,    -1,
      -1,    10,    99,    72,   118,    93,    -1,    12,    99,    72,
     120,    93,    74,    -1,    -1,    11,    72,   119,    93,    -1,
      -1,    77,    -1,    78,    -1,    79,    -1,    13,    66,   124,
      99,    54,   125,    66,   126,    72,    93,    -1,    14,    72,
     123,    93,    15,    99,    67,    -1,    15,   121,    99,    72,
     122,    93,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,    58,
      -1,    18,    58,    72,    47,    82,    48,    -1,    83,    82,
      -1,    -1,    84,    90,    -1,    84,    85,    -1,    55,    -1,
      30,    -1,    31,    -1,    17,    80,    70,   127,    49,    86,
      50,    72,   128,    93,    -1,    17,    70,   127,    49,    86,
      50,    72,   128,    93,    -1,    -1,    80,    70,    87,    -1,
      53,    80,    70,    87,    -1,    -1,    70,   129,    49,   130,
      89,    50,    67,    -1,    70,   129,    49,    50,    67,    -1,
      99,    -1,    99,    53,    89,    -1,    80,    69,    67,    -1,
      80,    69,   117,   110,   116,    99,    67,    -1,    20,    99,
      67,    -1,    21,    99,    67,    -1,    47,    63,    48,    -1,
      47,    48,    -1,    95,    -1,     9,    -1,     6,    -1,     7,
      -1,     8,    -1,    96,    -1,     5,    -1,     4,    -1,    51,
      97,    52,    -1,    51,    52,    -1,    98,    -1,    98,    53,
      97,    -1,    94,    -1,    69,    -1,   100,   114,    -1,   100,
     114,   105,    99,    -1,   101,    -1,   101,   106,   101,   115,
      -1,   102,   112,    -1,   102,   112,   108,   101,    -1,   103,
     113,    -1,   103,   113,   107,   102,    -1,   109,   104,    -1,
     104,    -1,    49,   111,    99,    50,    -1,    94,    -1,    88,
      -1,    69,    -1,    33,    -1,    34,    -1,    40,    -1,    41,
      -1,    43,    -1,    42,    -1,    44,    -1,    45,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    32,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  Gramatica::yyprhs_[] =
  {
         0,     0,     3,     6,     8,    10,    15,    17,    18,    21,
      24,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    53,    55,    57,    61,    63,    68,    72,
      74,    78,    80,    81,    87,    94,    95,   100,   101,   103,
     105,   107,   118,   126,   133,   135,   137,   139,   141,   143,
     145,   147,   149,   151,   158,   161,   162,   165,   168,   170,
     172,   174,   185,   195,   196,   200,   205,   206,   214,   220,
     222,   226,   230,   238,   242,   246,   250,   253,   255,   257,
     259,   261,   263,   265,   267,   269,   273,   276,   278,   282,
     284,   286,   289,   294,   296,   301,   304,   309,   312,   317,
     320,   322,   327,   329,   331,   333,   335,   337,   339,   341,
     343,   345,   347,   349,   351,   353,   355,   357,   359,   361,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  Gramatica::yyrline_[] =
  {
         0,    99,    99,   100,   101,   104,   107,   108,   111,   114,
     115,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   131,   134,   135,   138,   141,   142,   143,   146,
     149,   152,   153,   156,   159,   160,   163,   164,   167,   168,
     169,   172,   175,   178,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   192,   195,   196,   199,   200,   201,   204,
     205,   208,   209,   212,   213,   216,   217,   220,   221,   224,
     225,   228,   229,   232,   235,   238,   239,   242,   243,   244,
     245,   246,   247,   250,   251,   254,   255,   258,   259,   262,
     263,   266,   267,   270,   271,   274,   275,   278,   279,   282,
     283,   286,   287,   288,   289,   292,   293,   296,   297,   298,
     299,   300,   301,   304,   305,   306,   309,   310,   313,   316,
     319,   322,   325,   328,   331,   334,   337,   340,   343,   346,
     349,   352,   355,   358,   361,   364,   367,   370,   373,   376
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
      55,    56,    57,    58
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int Gramatica::yyeof_ = 0;
  const int Gramatica::yylast_ = 341;
  const int Gramatica::yynnts_ = 72;
  const int Gramatica::yyempty_ = -2;
  const int Gramatica::yyfinal_ = 79;
  const int Gramatica::yyterror_ = 1;
  const int Gramatica::yyerrcode_ = 256;
  const int Gramatica::yyntokens_ = 59;

  const unsigned int Gramatica::yyuser_token_number_max_ = 313;
  const Gramatica::token_number_type Gramatica::yyundef_token_ = 2;


} // ss
/* Line 1141 of lalr1.cc  */
#line 2076 "gramatica.cpp"
/* Line 1142 of lalr1.cc  */
#line 379 "..\\..\\..\\gramatica.yy"


void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
	driver.error(l, m);
}
