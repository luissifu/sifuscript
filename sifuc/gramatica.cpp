// A Bison parser, made by GNU Bison 3.0.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2013 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Take the name prefix into account.
#define yylex   sslex

// First part of user declarations.
#line 6 "gramatica.yy" // lalr1.cc:399

#include "expr/Expression.h"

#include <cstdio>
#include <iostream>
using namespace std;


#line 47 "gramatica.cpp" // lalr1.cc:399

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "gramatica.h"

// User implementation prologue.
#line 83 "gramatica.yy" // lalr1.cc:407


#include "driver/Driver.h"

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lex


#line 72 "gramatica.cpp" // lalr1.cc:407


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
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


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyempty = true)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace ss {
#line 158 "gramatica.cpp" // lalr1.cc:474

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   Gramatica ::yytnamerr_ (const char *yystr)
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
              // Fall through.
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
   Gramatica :: Gramatica  (class Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

   Gramatica ::~ Gramatica  ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
   Gramatica ::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
   Gramatica ::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
   Gramatica ::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
   Gramatica ::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
   Gramatica ::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
   Gramatica ::basic_symbol<Base>::~basic_symbol ()
  {
  }

  template <typename Base>
  inline
  void
   Gramatica ::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
   Gramatica ::by_type::by_type ()
     : type (empty)
  {}

  inline
   Gramatica ::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
   Gramatica ::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
   Gramatica ::by_type::move (by_type& that)
  {
    type = that.type;
    that.type = empty;
  }

  inline
  int
   Gramatica ::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
   Gramatica ::by_state::by_state ()
    : state (empty)
  {}

  inline
   Gramatica ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
   Gramatica ::by_state::move (by_state& that)
  {
    state = that.state;
    that.state = empty;
  }

  inline
   Gramatica ::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
   Gramatica ::symbol_number_type
   Gramatica ::by_state::type_get () const
  {
    return state == empty ? 0 : yystos_[state];
  }

  inline
   Gramatica ::stack_symbol_type::stack_symbol_type ()
  {}


  inline
   Gramatica ::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty;
  }

  inline
   Gramatica ::stack_symbol_type&
   Gramatica ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
   Gramatica ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
   Gramatica ::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
   Gramatica ::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
   Gramatica ::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
   Gramatica ::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   Gramatica ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   Gramatica ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   Gramatica ::debug_level_type
   Gramatica ::debug_level () const
  {
    return yydebug_;
  }

  void
   Gramatica ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline  Gramatica ::state_type
   Gramatica ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
   Gramatica ::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
   Gramatica ::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
   Gramatica ::parse ()
  {
    /// Whether yyla contains a lookahead.
    bool yyempty = true;

    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 45 "gramatica.yy" // lalr1.cc:725
{
	// initialize the initial location object
	yyla.location.begin.filename = yyla.location.end.filename = &driver.streamname;
}

#line 502 "gramatica.cpp" // lalr1.cc:725

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyempty)
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
        yyempty = false;
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Discard the token being shifted.
    yyempty = true;

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 98 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 616 "gramatica.cpp" // lalr1.cc:847
    break;

  case 3:
#line 99 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 622 "gramatica.cpp" // lalr1.cc:847
    break;

  case 4:
#line 100 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 628 "gramatica.cpp" // lalr1.cc:847
    break;

  case 5:
#line 103 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 634 "gramatica.cpp" // lalr1.cc:847
    break;

  case 6:
#line 106 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 640 "gramatica.cpp" // lalr1.cc:847
    break;

  case 7:
#line 107 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 646 "gramatica.cpp" // lalr1.cc:847
    break;

  case 8:
#line 110 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 652 "gramatica.cpp" // lalr1.cc:847
    break;

  case 9:
#line 113 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 658 "gramatica.cpp" // lalr1.cc:847
    break;

  case 10:
#line 114 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 664 "gramatica.cpp" // lalr1.cc:847
    break;

  case 11:
#line 117 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 670 "gramatica.cpp" // lalr1.cc:847
    break;

  case 12:
#line 118 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 676 "gramatica.cpp" // lalr1.cc:847
    break;

  case 13:
#line 119 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 682 "gramatica.cpp" // lalr1.cc:847
    break;

  case 14:
#line 120 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 688 "gramatica.cpp" // lalr1.cc:847
    break;

  case 15:
#line 121 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 694 "gramatica.cpp" // lalr1.cc:847
    break;

  case 16:
#line 122 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 700 "gramatica.cpp" // lalr1.cc:847
    break;

  case 17:
#line 123 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 706 "gramatica.cpp" // lalr1.cc:847
    break;

  case 18:
#line 124 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 712 "gramatica.cpp" // lalr1.cc:847
    break;

  case 19:
#line 125 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 718 "gramatica.cpp" // lalr1.cc:847
    break;

  case 20:
#line 126 "gramatica.yy" // lalr1.cc:847
    { driver.clearExp(); }
#line 724 "gramatica.cpp" // lalr1.cc:847
    break;

  case 21:
#line 127 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 730 "gramatica.cpp" // lalr1.cc:847
    break;

  case 22:
#line 130 "gramatica.yy" // lalr1.cc:847
    { driver.genAssign(); }
#line 736 "gramatica.cpp" // lalr1.cc:847
    break;

  case 23:
#line 133 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 742 "gramatica.cpp" // lalr1.cc:847
    break;

  case 24:
#line 134 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 748 "gramatica.cpp" // lalr1.cc:847
    break;

  case 25:
#line 137 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 754 "gramatica.cpp" // lalr1.cc:847
    break;

  case 26:
#line 140 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 760 "gramatica.cpp" // lalr1.cc:847
    break;

  case 27:
#line 141 "gramatica.yy" // lalr1.cc:847
    { driver.addId((yystack_[3].value.string)); }
#line 766 "gramatica.cpp" // lalr1.cc:847
    break;

  case 28:
#line 142 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 772 "gramatica.cpp" // lalr1.cc:847
    break;

  case 29:
#line 145 "gramatica.yy" // lalr1.cc:847
    { driver.addId((yystack_[0].value.string)); }
#line 778 "gramatica.cpp" // lalr1.cc:847
    break;

  case 30:
#line 148 "gramatica.yy" // lalr1.cc:847
    { driver.endIf(); }
#line 784 "gramatica.cpp" // lalr1.cc:847
    break;

  case 31:
#line 151 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 790 "gramatica.cpp" // lalr1.cc:847
    break;

  case 32:
#line 152 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 796 "gramatica.cpp" // lalr1.cc:847
    break;

  case 33:
#line 155 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 802 "gramatica.cpp" // lalr1.cc:847
    break;

  case 34:
#line 158 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 808 "gramatica.cpp" // lalr1.cc:847
    break;

  case 35:
#line 159 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 814 "gramatica.cpp" // lalr1.cc:847
    break;

  case 36:
#line 162 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 820 "gramatica.cpp" // lalr1.cc:847
    break;

  case 37:
#line 163 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 826 "gramatica.cpp" // lalr1.cc:847
    break;

  case 38:
#line 166 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 832 "gramatica.cpp" // lalr1.cc:847
    break;

  case 39:
#line 167 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 838 "gramatica.cpp" // lalr1.cc:847
    break;

  case 40:
#line 168 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 844 "gramatica.cpp" // lalr1.cc:847
    break;

  case 41:
#line 171 "gramatica.yy" // lalr1.cc:847
    { driver.endFor(); }
#line 850 "gramatica.cpp" // lalr1.cc:847
    break;

  case 42:
#line 174 "gramatica.yy" // lalr1.cc:847
    { driver.genDo(); }
#line 856 "gramatica.cpp" // lalr1.cc:847
    break;

  case 43:
#line 177 "gramatica.yy" // lalr1.cc:847
    { driver.endWhile(); }
#line 862 "gramatica.cpp" // lalr1.cc:847
    break;

  case 44:
#line 180 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 868 "gramatica.cpp" // lalr1.cc:847
    break;

  case 45:
#line 181 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 874 "gramatica.cpp" // lalr1.cc:847
    break;

  case 46:
#line 182 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 880 "gramatica.cpp" // lalr1.cc:847
    break;

  case 47:
#line 183 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 886 "gramatica.cpp" // lalr1.cc:847
    break;

  case 48:
#line 184 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 892 "gramatica.cpp" // lalr1.cc:847
    break;

  case 49:
#line 185 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 898 "gramatica.cpp" // lalr1.cc:847
    break;

  case 50:
#line 186 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 904 "gramatica.cpp" // lalr1.cc:847
    break;

  case 51:
#line 187 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 910 "gramatica.cpp" // lalr1.cc:847
    break;

  case 52:
#line 188 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 916 "gramatica.cpp" // lalr1.cc:847
    break;

  case 53:
#line 191 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 922 "gramatica.cpp" // lalr1.cc:847
    break;

  case 54:
#line 194 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 928 "gramatica.cpp" // lalr1.cc:847
    break;

  case 56:
#line 198 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 934 "gramatica.cpp" // lalr1.cc:847
    break;

  case 57:
#line 199 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 940 "gramatica.cpp" // lalr1.cc:847
    break;

  case 58:
#line 200 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 946 "gramatica.cpp" // lalr1.cc:847
    break;

  case 59:
#line 203 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 952 "gramatica.cpp" // lalr1.cc:847
    break;

  case 60:
#line 204 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 958 "gramatica.cpp" // lalr1.cc:847
    break;

  case 61:
#line 207 "gramatica.yy" // lalr1.cc:847
    { driver.endFunc(); }
#line 964 "gramatica.cpp" // lalr1.cc:847
    break;

  case 62:
#line 208 "gramatica.yy" // lalr1.cc:847
    { driver.endFunc(); }
#line 970 "gramatica.cpp" // lalr1.cc:847
    break;

  case 63:
#line 211 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 976 "gramatica.cpp" // lalr1.cc:847
    break;

  case 64:
#line 212 "gramatica.yy" // lalr1.cc:847
    { driver.addParam(); }
#line 982 "gramatica.cpp" // lalr1.cc:847
    break;

  case 65:
#line 215 "gramatica.yy" // lalr1.cc:847
    { driver.addParam(); }
#line 988 "gramatica.cpp" // lalr1.cc:847
    break;

  case 66:
#line 216 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 994 "gramatica.cpp" // lalr1.cc:847
    break;

  case 67:
#line 219 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1000 "gramatica.cpp" // lalr1.cc:847
    break;

  case 68:
#line 220 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1006 "gramatica.cpp" // lalr1.cc:847
    break;

  case 69:
#line 223 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1012 "gramatica.cpp" // lalr1.cc:847
    break;

  case 70:
#line 224 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1018 "gramatica.cpp" // lalr1.cc:847
    break;

  case 71:
#line 227 "gramatica.yy" // lalr1.cc:847
    { driver.checkVar(); }
#line 1024 "gramatica.cpp" // lalr1.cc:847
    break;

  case 72:
#line 228 "gramatica.yy" // lalr1.cc:847
    { driver.genAssign(); }
#line 1030 "gramatica.cpp" // lalr1.cc:847
    break;

  case 73:
#line 231 "gramatica.yy" // lalr1.cc:847
    { driver.genPrint(); }
#line 1036 "gramatica.cpp" // lalr1.cc:847
    break;

  case 74:
#line 234 "gramatica.yy" // lalr1.cc:847
    { driver.genRead(); }
#line 1042 "gramatica.cpp" // lalr1.cc:847
    break;

  case 75:
#line 237 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1048 "gramatica.cpp" // lalr1.cc:847
    break;

  case 76:
#line 238 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1054 "gramatica.cpp" // lalr1.cc:847
    break;

  case 77:
#line 241 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1060 "gramatica.cpp" // lalr1.cc:847
    break;

  case 78:
#line 242 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'c'); }
#line 1066 "gramatica.cpp" // lalr1.cc:847
    break;

  case 79:
#line 243 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'i'); }
#line 1072 "gramatica.cpp" // lalr1.cc:847
    break;

  case 80:
#line 244 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'f'); }
#line 1078 "gramatica.cpp" // lalr1.cc:847
    break;

  case 81:
#line 245 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 's'); }
#line 1084 "gramatica.cpp" // lalr1.cc:847
    break;

  case 82:
#line 246 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1090 "gramatica.cpp" // lalr1.cc:847
    break;

  case 83:
#line 249 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'b'); }
#line 1096 "gramatica.cpp" // lalr1.cc:847
    break;

  case 84:
#line 250 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'b'); }
#line 1102 "gramatica.cpp" // lalr1.cc:847
    break;

  case 85:
#line 253 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1108 "gramatica.cpp" // lalr1.cc:847
    break;

  case 86:
#line 254 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1114 "gramatica.cpp" // lalr1.cc:847
    break;

  case 87:
#line 257 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1120 "gramatica.cpp" // lalr1.cc:847
    break;

  case 88:
#line 258 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1126 "gramatica.cpp" // lalr1.cc:847
    break;

  case 89:
#line 261 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1132 "gramatica.cpp" // lalr1.cc:847
    break;

  case 90:
#line 262 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1138 "gramatica.cpp" // lalr1.cc:847
    break;

  case 91:
#line 265 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1144 "gramatica.cpp" // lalr1.cc:847
    break;

  case 92:
#line 266 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1150 "gramatica.cpp" // lalr1.cc:847
    break;

  case 93:
#line 269 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1156 "gramatica.cpp" // lalr1.cc:847
    break;

  case 94:
#line 270 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1162 "gramatica.cpp" // lalr1.cc:847
    break;

  case 95:
#line 273 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1168 "gramatica.cpp" // lalr1.cc:847
    break;

  case 96:
#line 274 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1174 "gramatica.cpp" // lalr1.cc:847
    break;

  case 97:
#line 277 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1180 "gramatica.cpp" // lalr1.cc:847
    break;

  case 98:
#line 278 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1186 "gramatica.cpp" // lalr1.cc:847
    break;

  case 99:
#line 281 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('!');; }
#line 1192 "gramatica.cpp" // lalr1.cc:847
    break;

  case 100:
#line 282 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1198 "gramatica.cpp" // lalr1.cc:847
    break;

  case 101:
#line 285 "gramatica.yy" // lalr1.cc:847
    { driver.endExp(); }
#line 1204 "gramatica.cpp" // lalr1.cc:847
    break;

  case 102:
#line 286 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1210 "gramatica.cpp" // lalr1.cc:847
    break;

  case 103:
#line 287 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1216 "gramatica.cpp" // lalr1.cc:847
    break;

  case 104:
#line 288 "gramatica.yy" // lalr1.cc:847
    { driver.toOperand(); }
#line 1222 "gramatica.cpp" // lalr1.cc:847
    break;

  case 105:
#line 291 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('&'); }
#line 1228 "gramatica.cpp" // lalr1.cc:847
    break;

  case 106:
#line 292 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('|'); }
#line 1234 "gramatica.cpp" // lalr1.cc:847
    break;

  case 107:
#line 295 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('<'); }
#line 1240 "gramatica.cpp" // lalr1.cc:847
    break;

  case 108:
#line 296 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('>'); }
#line 1246 "gramatica.cpp" // lalr1.cc:847
    break;

  case 109:
#line 297 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('l'); }
#line 1252 "gramatica.cpp" // lalr1.cc:847
    break;

  case 110:
#line 298 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('m'); }
#line 1258 "gramatica.cpp" // lalr1.cc:847
    break;

  case 111:
#line 299 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('e'); }
#line 1264 "gramatica.cpp" // lalr1.cc:847
    break;

  case 112:
#line 300 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('n'); }
#line 1270 "gramatica.cpp" // lalr1.cc:847
    break;

  case 113:
#line 303 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('*'); }
#line 1276 "gramatica.cpp" // lalr1.cc:847
    break;

  case 114:
#line 304 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('/'); }
#line 1282 "gramatica.cpp" // lalr1.cc:847
    break;

  case 115:
#line 305 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('%'); }
#line 1288 "gramatica.cpp" // lalr1.cc:847
    break;

  case 116:
#line 308 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('+'); }
#line 1294 "gramatica.cpp" // lalr1.cc:847
    break;

  case 117:
#line 309 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('-'); }
#line 1300 "gramatica.cpp" // lalr1.cc:847
    break;

  case 118:
#line 312 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('!'); }
#line 1306 "gramatica.cpp" // lalr1.cc:847
    break;

  case 119:
#line 315 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('='); }
#line 1312 "gramatica.cpp" // lalr1.cc:847
    break;

  case 120:
#line 318 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('('); }
#line 1318 "gramatica.cpp" // lalr1.cc:847
    break;

  case 121:
#line 321 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('+'); }
#line 1324 "gramatica.cpp" // lalr1.cc:847
    break;

  case 122:
#line 324 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('*'); }
#line 1330 "gramatica.cpp" // lalr1.cc:847
    break;

  case 123:
#line 327 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('&'); }
#line 1336 "gramatica.cpp" // lalr1.cc:847
    break;

  case 124:
#line 330 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('>'); }
#line 1342 "gramatica.cpp" // lalr1.cc:847
    break;

  case 125:
#line 333 "gramatica.yy" // lalr1.cc:847
    { driver.toOperand(); }
#line 1348 "gramatica.cpp" // lalr1.cc:847
    break;

  case 126:
#line 336 "gramatica.yy" // lalr1.cc:847
    { driver.copyId(); driver.checkVar(); }
#line 1354 "gramatica.cpp" // lalr1.cc:847
    break;

  case 127:
#line 339 "gramatica.yy" // lalr1.cc:847
    { driver.genIf(); }
#line 1360 "gramatica.cpp" // lalr1.cc:847
    break;

  case 128:
#line 342 "gramatica.yy" // lalr1.cc:847
    { driver.genElse(); }
#line 1366 "gramatica.cpp" // lalr1.cc:847
    break;

  case 129:
#line 345 "gramatica.yy" // lalr1.cc:847
    { driver.genElseIf(); }
#line 1372 "gramatica.cpp" // lalr1.cc:847
    break;

  case 130:
#line 348 "gramatica.yy" // lalr1.cc:847
    { driver.startWhile(); }
#line 1378 "gramatica.cpp" // lalr1.cc:847
    break;

  case 131:
#line 351 "gramatica.yy" // lalr1.cc:847
    { driver.genWhile(); }
#line 1384 "gramatica.cpp" // lalr1.cc:847
    break;

  case 132:
#line 354 "gramatica.yy" // lalr1.cc:847
    { driver.startDo(); }
#line 1390 "gramatica.cpp" // lalr1.cc:847
    break;

  case 133:
#line 357 "gramatica.yy" // lalr1.cc:847
    { driver.startFor(); }
#line 1396 "gramatica.cpp" // lalr1.cc:847
    break;

  case 134:
#line 360 "gramatica.yy" // lalr1.cc:847
    { driver.genFor(); }
#line 1402 "gramatica.cpp" // lalr1.cc:847
    break;

  case 135:
#line 363 "gramatica.yy" // lalr1.cc:847
    { driver.saveFor(); }
#line 1408 "gramatica.cpp" // lalr1.cc:847
    break;

  case 136:
#line 366 "gramatica.yy" // lalr1.cc:847
    { driver.checkFunc(); }
#line 1414 "gramatica.cpp" // lalr1.cc:847
    break;

  case 137:
#line 369 "gramatica.yy" // lalr1.cc:847
    { driver.saveFunc(); }
#line 1420 "gramatica.cpp" // lalr1.cc:847
    break;

  case 138:
#line 372 "gramatica.yy" // lalr1.cc:847
    { driver.verifyFunc(); }
#line 1426 "gramatica.cpp" // lalr1.cc:847
    break;


#line 1430 "gramatica.cpp" // lalr1.cc:847
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state,
                                           yyempty ? yyempty_ : yyla.type_get ()));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyempty)
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyempty = true;
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
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
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
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

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyempty)
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
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
        if (!yyempty)
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
   Gramatica ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
   Gramatica ::yysyntax_error_ (state_type yystate, symbol_number_type yytoken) const
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
         yyla.  (However, yyla is currently not documented for users.)
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
            // Stay within bounds of both yycheck and yytname.
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

    char const* yyformat = YY_NULLPTR;
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


  const signed char  Gramatica ::yypact_ninf_ = -120;

  const short int  Gramatica ::yytable_ninf_ = -139;

  const short int
   Gramatica ::yypact_[] =
  {
     205,   149,   -27,   -20,  -120,   149,   292,   -13,    38,   149,
     149,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     -29,  -120,    48,   271,  -120,   271,  -120,  -120,     4,     9,
    -120,    43,  -120,  -120,  -120,  -120,   -27,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,    12,  -120,  -120,  -120,  -120,  -120,   -20,  -120,   224,
    -120,  -120,  -120,   160,  -120,  -120,  -120,  -120,   149,   -30,
    -120,  -120,     8,   -20,   -30,   -30,   -30,    54,    14,  -120,
    -120,  -120,   271,  -120,  -120,    23,   149,    50,   -30,   149,
    -120,  -120,  -120,    10,    24,  -120,     7,  -120,  -120,  -120,
    -120,  -120,  -120,   149,    13,     1,  -120,   149,    29,   -20,
    -120,  -120,  -120,    37,  -120,    40,    70,  -120,  -120,    41,
    -120,  -120,   149,    99,   -20,   -20,  -120,  -120,     4,    45,
    -120,    74,    29,  -120,  -120,   149,  -120,  -120,  -120,   149,
    -120,  -120,  -120,   149,    36,   225,    82,  -120,   308,    51,
       2,  -120,  -120,  -120,   -30,   -30,    49,    56,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
      62,   149,    29,     8,    52,   308,  -120,  -120,  -120,    63,
       2,   284,  -120,  -120,   -30,   110,    29,    29,   149,   -27,
    -120,   -30,  -120,    60,   -20,    71,  -120,  -120,  -120,  -120,
    -120,  -120,    43,  -120,   -30,  -120,  -120,   308,  -120,  -120,
     -20,  -120,  -120,   -20,     8,    29,  -120,    29,    60,  -120,
      29,  -120,  -120,  -120
  };

  const unsigned char
   Gramatica ::yydefact_[] =
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
      28,     9,     0,     0,    32,    32,    30,    71,     0,     0,
      85,     0,     0,   105,   106,     0,   124,   116,   117,     0,
     113,   114,   115,     0,     0,     0,     0,   131,    63,     0,
      55,     6,     5,    27,     0,     0,     0,    69,   129,   128,
     125,   101,    88,    33,    92,    94,    96,    98,   134,    76,
       0,     0,     0,     0,     0,    63,    59,    60,    58,     0,
      55,     0,    22,    68,     0,     0,     0,     0,     0,     0,
      75,     0,    43,    66,    32,     0,    53,    54,    57,    56,
      67,    70,    35,    36,     0,   135,    42,     0,    64,   137,
      32,    34,    72,    32,     0,     0,   137,     0,    66,    62,
       0,    41,    65,    61
  };

  const signed char
   Gramatica ::yypgoto_[] =
  {
    -120,  -120,    16,  -120,   -15,    42,   -16,     0,   -32,  -120,
       3,    -2,  -120,   -50,  -120,   -82,  -120,  -120,  -120,  -120,
    -120,    -5,  -120,   -54,  -120,  -120,   -53,   -42,   -83,     6,
     -49,   -44,  -120,  -120,  -119,   -39,  -120,  -120,    11,  -120,
       5,  -120,   -92,    -4,  -120,    75,  -120,  -120,  -120,  -120,
    -120,    17,  -120,  -120,  -120,  -120,  -120,   -19,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,    33,   -43,
    -120
  };

  const short int
   Gramatica ::yydefgoto_[] =
  {
      -1,    22,    23,   152,    24,    81,    25,    26,   112,    27,
      52,    29,    30,    67,    31,    87,   126,    32,    33,    34,
      35,    36,    37,   179,   180,   181,    38,   174,   208,    53,
     156,    40,    41,    42,   146,    54,    55,    56,    93,    94,
      57,    58,    59,    60,    61,    62,   135,   103,   143,   139,
      63,    84,    89,   104,   105,    96,   165,   122,   128,   132,
     187,   186,    68,   172,   108,   107,   189,   213,   113,   215,
      85
  };

  const short int
   Gramatica ::yytable_[] =
  {
      65,    72,    64,    28,    71,    28,    39,    95,    80,    82,
      69,   136,    92,   163,    75,    76,    43,    44,    45,    46,
      47,    48,    77,   115,   110,   111,    28,    78,    28,    39,
      20,    39,   176,   177,    65,    66,   140,   141,   142,    88,
     133,   134,   116,   117,   118,    73,    74,   166,    79,    65,
      83,   137,   138,   192,    91,    86,   127,   178,  -138,   147,
     119,   125,   130,    51,    90,    70,    82,   202,   203,    20,
     114,   120,   123,   109,   158,   159,   145,   131,    43,    44,
      45,    46,    47,    48,   157,    28,   148,   150,    39,     8,
     168,   124,    92,   153,   129,   161,   219,   171,   221,   184,
     175,   223,   194,    43,    44,    45,    46,    47,    48,   185,
     190,   196,   144,   207,    43,    44,    45,    46,    47,    48,
     211,   210,   182,   183,   121,    51,   197,   154,   198,    65,
     170,    20,   151,   195,    91,   222,   201,   199,   106,   167,
     164,   188,   162,   173,   209,   160,   157,   149,    28,   155,
      51,    39,   200,    43,    44,    45,    46,    47,    48,   206,
     216,    51,     0,   217,    43,    44,    45,    46,    47,    48,
     173,   193,   212,   220,     0,     0,   191,     0,     0,     0,
       0,    49,     0,     0,     0,     0,     0,    65,     0,   205,
       0,     0,    28,   204,     0,     0,     0,     0,    50,     0,
      51,     0,   214,     0,     0,     0,    20,     0,     0,    50,
       0,    51,   218,     0,     0,     1,     0,    20,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     1,     0,     0,     2,     3,
       4,     5,     6,     7,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
      19,     0,    20,    21,    97,    98,    99,   100,   101,   102,
       0,     0,     0,   169,     0,     0,     0,     0,     0,     0,
      19,     1,    20,    21,     2,     3,     4,     5,     6,     7,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     6,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    11,    12,    13,    14,    15,    16,
      17,    18,     0,     0,     0,     0,    19,     0,    20,    21,
      11,    12,    13,    14,    15,    16,    17,    18,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,    70,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21
  };

  const short int
   Gramatica ::yycheck_[] =
  {
       2,     6,     2,     0,     6,     2,     0,    57,    23,    25,
       5,   103,    51,   132,     9,    10,     4,     5,     6,     7,
       8,     9,    51,    73,    54,    55,    23,    56,    25,    23,
      57,    25,    30,    31,    36,    55,    35,    36,    37,    36,
      33,    34,    74,    75,    76,    58,     8,   139,     0,    51,
      46,    38,    39,   172,    51,    12,    88,    55,    49,   109,
       6,    11,    52,    51,    52,    57,    82,   186,   187,    57,
      72,    57,    49,    68,   124,   125,    47,    53,     4,     5,
       6,     7,     8,     9,   123,    82,    49,    47,    82,    19,
      54,    86,   131,    52,    89,    50,   215,    15,   217,    50,
      49,   220,    50,     4,     5,     6,     7,     8,     9,    53,
      48,    48,   107,    53,     4,     5,     6,     7,     8,     9,
     202,    50,   154,   155,    82,    51,   180,   122,   181,   131,
     145,    57,   116,   175,   131,   218,   185,   181,    63,   143,
     135,   160,   131,   148,   194,   128,   185,   114,   145,    50,
      51,   145,   184,     4,     5,     6,     7,     8,     9,   191,
     210,    51,    -1,   213,     4,     5,     6,     7,     8,     9,
     175,   173,   204,   216,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,   189,    -1,   189,
      -1,    -1,   189,   188,    -1,    -1,    -1,    -1,    49,    -1,
      51,    -1,   207,    -1,    -1,    -1,    57,    -1,    -1,    49,
      -1,    51,   214,    -1,    -1,    10,    -1,    57,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    10,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    58,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    10,    57,    58,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58
  };

  const unsigned char
   Gramatica ::yystos_[] =
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
      47,    61,    62,    52,    99,    50,    89,    94,    72,    72,
     110,    50,    97,    93,    99,   115,   101,   102,    54,    48,
      63,    15,   122,    80,    86,    49,    30,    31,    55,    82,
      83,    84,    67,    67,    50,    53,   120,   119,   116,   125,
      48,    99,    93,    70,    50,    86,    48,    82,    85,    90,
      67,    89,    93,    93,    99,    66,    67,    53,    87,    72,
      50,    74,    67,   126,    80,   128,    72,    72,    70,    93,
     128,    93,    87,    93
  };

  const unsigned char
   Gramatica ::yyr1_[] =
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
     121,   122,   123,   124,   125,   126,   127,   128,   129
  };

  const unsigned char
   Gramatica ::yyr2_[] =
  {
       0,     2,     2,     1,     1,     4,     1,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     1,     3,     1,     4,     3,     1,
       3,     1,     0,     5,     6,     0,     4,     0,     1,     1,
       1,    10,     7,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     2,     0,     2,     2,     1,     1,
       1,    10,     9,     0,     3,     4,     0,     6,     5,     1,
       3,     3,     7,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     3,     1,
       1,     2,     4,     1,     4,     2,     4,     2,     4,     2,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  Gramatica ::yytname_[] =
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
  "stat_func_aux1", "stat_func_aux2", "stat_funcall_aux1", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
   Gramatica ::yyrline_[] =
  {
       0,    98,    98,    99,   100,   103,   106,   107,   110,   113,
     114,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   130,   133,   134,   137,   140,   141,   142,   145,
     148,   151,   152,   155,   158,   159,   162,   163,   166,   167,
     168,   171,   174,   177,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   191,   194,   195,   198,   199,   200,   203,
     204,   207,   208,   211,   212,   215,   216,   219,   220,   223,
     224,   227,   228,   231,   234,   237,   238,   241,   242,   243,
     244,   245,   246,   249,   250,   253,   254,   257,   258,   261,
     262,   265,   266,   269,   270,   273,   274,   277,   278,   281,
     282,   285,   286,   287,   288,   291,   292,   295,   296,   297,
     298,   299,   300,   303,   304,   305,   308,   309,   312,   315,
     318,   321,   324,   327,   330,   333,   336,   339,   342,   345,
     348,   351,   354,   357,   360,   363,   366,   369,   372
  };

  // Print the state stack on the debug stream.
  void
   Gramatica ::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
   Gramatica ::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
   Gramatica ::token_number_type
   Gramatica ::yytranslate_ (int t)
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
    const unsigned int user_token_number_max_ = 313;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // ss
#line 2058 "gramatica.cpp" // lalr1.cc:1155
#line 375 "gramatica.yy" // lalr1.cc:1156


void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
	driver.error(l, m);
}
