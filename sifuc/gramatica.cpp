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
    { driver.addId((yystack_[0].value.string)); }
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
    { driver.endIf(); }
#line 778 "gramatica.cpp" // lalr1.cc:847
    break;

  case 30:
#line 148 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 784 "gramatica.cpp" // lalr1.cc:847
    break;

  case 31:
#line 149 "gramatica.yy" // lalr1.cc:847
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
#line 156 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 808 "gramatica.cpp" // lalr1.cc:847
    break;

  case 35:
#line 159 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 814 "gramatica.cpp" // lalr1.cc:847
    break;

  case 36:
#line 160 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 820 "gramatica.cpp" // lalr1.cc:847
    break;

  case 37:
#line 163 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 826 "gramatica.cpp" // lalr1.cc:847
    break;

  case 38:
#line 164 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 832 "gramatica.cpp" // lalr1.cc:847
    break;

  case 39:
#line 165 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 838 "gramatica.cpp" // lalr1.cc:847
    break;

  case 40:
#line 168 "gramatica.yy" // lalr1.cc:847
    { driver.endFor(); }
#line 844 "gramatica.cpp" // lalr1.cc:847
    break;

  case 41:
#line 171 "gramatica.yy" // lalr1.cc:847
    { driver.genDo(); }
#line 850 "gramatica.cpp" // lalr1.cc:847
    break;

  case 42:
#line 174 "gramatica.yy" // lalr1.cc:847
    { driver.endWhile(); }
#line 856 "gramatica.cpp" // lalr1.cc:847
    break;

  case 43:
#line 177 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 862 "gramatica.cpp" // lalr1.cc:847
    break;

  case 44:
#line 178 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 868 "gramatica.cpp" // lalr1.cc:847
    break;

  case 45:
#line 179 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 874 "gramatica.cpp" // lalr1.cc:847
    break;

  case 46:
#line 180 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 880 "gramatica.cpp" // lalr1.cc:847
    break;

  case 47:
#line 181 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 886 "gramatica.cpp" // lalr1.cc:847
    break;

  case 48:
#line 182 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 892 "gramatica.cpp" // lalr1.cc:847
    break;

  case 49:
#line 183 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 898 "gramatica.cpp" // lalr1.cc:847
    break;

  case 50:
#line 184 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 904 "gramatica.cpp" // lalr1.cc:847
    break;

  case 51:
#line 185 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 910 "gramatica.cpp" // lalr1.cc:847
    break;

  case 52:
#line 188 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 916 "gramatica.cpp" // lalr1.cc:847
    break;

  case 53:
#line 191 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 922 "gramatica.cpp" // lalr1.cc:847
    break;

  case 55:
#line 195 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 928 "gramatica.cpp" // lalr1.cc:847
    break;

  case 56:
#line 196 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 934 "gramatica.cpp" // lalr1.cc:847
    break;

  case 57:
#line 197 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 940 "gramatica.cpp" // lalr1.cc:847
    break;

  case 58:
#line 200 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 946 "gramatica.cpp" // lalr1.cc:847
    break;

  case 59:
#line 201 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 952 "gramatica.cpp" // lalr1.cc:847
    break;

  case 60:
#line 204 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 958 "gramatica.cpp" // lalr1.cc:847
    break;

  case 61:
#line 205 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 964 "gramatica.cpp" // lalr1.cc:847
    break;

  case 62:
#line 208 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 970 "gramatica.cpp" // lalr1.cc:847
    break;

  case 63:
#line 209 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 976 "gramatica.cpp" // lalr1.cc:847
    break;

  case 64:
#line 212 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 982 "gramatica.cpp" // lalr1.cc:847
    break;

  case 65:
#line 213 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 988 "gramatica.cpp" // lalr1.cc:847
    break;

  case 66:
#line 216 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 994 "gramatica.cpp" // lalr1.cc:847
    break;

  case 67:
#line 217 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1000 "gramatica.cpp" // lalr1.cc:847
    break;

  case 68:
#line 220 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1006 "gramatica.cpp" // lalr1.cc:847
    break;

  case 69:
#line 221 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1012 "gramatica.cpp" // lalr1.cc:847
    break;

  case 70:
#line 224 "gramatica.yy" // lalr1.cc:847
    { driver.checkVar(); }
#line 1018 "gramatica.cpp" // lalr1.cc:847
    break;

  case 71:
#line 225 "gramatica.yy" // lalr1.cc:847
    { driver.genAssign(); }
#line 1024 "gramatica.cpp" // lalr1.cc:847
    break;

  case 72:
#line 228 "gramatica.yy" // lalr1.cc:847
    { driver.genPrint(); }
#line 1030 "gramatica.cpp" // lalr1.cc:847
    break;

  case 73:
#line 231 "gramatica.yy" // lalr1.cc:847
    { driver.genRead(); }
#line 1036 "gramatica.cpp" // lalr1.cc:847
    break;

  case 74:
#line 234 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1042 "gramatica.cpp" // lalr1.cc:847
    break;

  case 75:
#line 235 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1048 "gramatica.cpp" // lalr1.cc:847
    break;

  case 76:
#line 238 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1054 "gramatica.cpp" // lalr1.cc:847
    break;

  case 77:
#line 239 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'c'); }
#line 1060 "gramatica.cpp" // lalr1.cc:847
    break;

  case 78:
#line 240 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'i'); }
#line 1066 "gramatica.cpp" // lalr1.cc:847
    break;

  case 79:
#line 241 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'f'); }
#line 1072 "gramatica.cpp" // lalr1.cc:847
    break;

  case 80:
#line 242 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 's'); }
#line 1078 "gramatica.cpp" // lalr1.cc:847
    break;

  case 81:
#line 243 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1084 "gramatica.cpp" // lalr1.cc:847
    break;

  case 82:
#line 246 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'b'); }
#line 1090 "gramatica.cpp" // lalr1.cc:847
    break;

  case 83:
#line 247 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'b'); }
#line 1096 "gramatica.cpp" // lalr1.cc:847
    break;

  case 84:
#line 250 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1102 "gramatica.cpp" // lalr1.cc:847
    break;

  case 85:
#line 251 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1108 "gramatica.cpp" // lalr1.cc:847
    break;

  case 86:
#line 254 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1114 "gramatica.cpp" // lalr1.cc:847
    break;

  case 87:
#line 255 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1120 "gramatica.cpp" // lalr1.cc:847
    break;

  case 88:
#line 258 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1126 "gramatica.cpp" // lalr1.cc:847
    break;

  case 89:
#line 259 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1132 "gramatica.cpp" // lalr1.cc:847
    break;

  case 90:
#line 262 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1138 "gramatica.cpp" // lalr1.cc:847
    break;

  case 91:
#line 263 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1144 "gramatica.cpp" // lalr1.cc:847
    break;

  case 92:
#line 266 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1150 "gramatica.cpp" // lalr1.cc:847
    break;

  case 93:
#line 267 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1156 "gramatica.cpp" // lalr1.cc:847
    break;

  case 94:
#line 270 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1162 "gramatica.cpp" // lalr1.cc:847
    break;

  case 95:
#line 271 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1168 "gramatica.cpp" // lalr1.cc:847
    break;

  case 96:
#line 274 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1174 "gramatica.cpp" // lalr1.cc:847
    break;

  case 97:
#line 275 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1180 "gramatica.cpp" // lalr1.cc:847
    break;

  case 98:
#line 278 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('!');; }
#line 1186 "gramatica.cpp" // lalr1.cc:847
    break;

  case 99:
#line 279 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1192 "gramatica.cpp" // lalr1.cc:847
    break;

  case 100:
#line 282 "gramatica.yy" // lalr1.cc:847
    { driver.endExp(); }
#line 1198 "gramatica.cpp" // lalr1.cc:847
    break;

  case 101:
#line 283 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1204 "gramatica.cpp" // lalr1.cc:847
    break;

  case 102:
#line 284 "gramatica.yy" // lalr1.cc:847
    { driver.toOperand(); }
#line 1210 "gramatica.cpp" // lalr1.cc:847
    break;

  case 103:
#line 287 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('&'); }
#line 1216 "gramatica.cpp" // lalr1.cc:847
    break;

  case 104:
#line 288 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('|'); }
#line 1222 "gramatica.cpp" // lalr1.cc:847
    break;

  case 105:
#line 291 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('<'); }
#line 1228 "gramatica.cpp" // lalr1.cc:847
    break;

  case 106:
#line 292 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('>'); }
#line 1234 "gramatica.cpp" // lalr1.cc:847
    break;

  case 107:
#line 293 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('l'); }
#line 1240 "gramatica.cpp" // lalr1.cc:847
    break;

  case 108:
#line 294 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('m'); }
#line 1246 "gramatica.cpp" // lalr1.cc:847
    break;

  case 109:
#line 295 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('e'); }
#line 1252 "gramatica.cpp" // lalr1.cc:847
    break;

  case 110:
#line 296 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('n'); }
#line 1258 "gramatica.cpp" // lalr1.cc:847
    break;

  case 111:
#line 299 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('*'); }
#line 1264 "gramatica.cpp" // lalr1.cc:847
    break;

  case 112:
#line 300 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('/'); }
#line 1270 "gramatica.cpp" // lalr1.cc:847
    break;

  case 113:
#line 301 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('%'); }
#line 1276 "gramatica.cpp" // lalr1.cc:847
    break;

  case 114:
#line 304 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('+'); }
#line 1282 "gramatica.cpp" // lalr1.cc:847
    break;

  case 115:
#line 305 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('-'); }
#line 1288 "gramatica.cpp" // lalr1.cc:847
    break;

  case 116:
#line 308 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('!'); }
#line 1294 "gramatica.cpp" // lalr1.cc:847
    break;

  case 117:
#line 311 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('='); }
#line 1300 "gramatica.cpp" // lalr1.cc:847
    break;

  case 118:
#line 314 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('('); }
#line 1306 "gramatica.cpp" // lalr1.cc:847
    break;

  case 119:
#line 317 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('+'); }
#line 1312 "gramatica.cpp" // lalr1.cc:847
    break;

  case 120:
#line 320 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('*'); }
#line 1318 "gramatica.cpp" // lalr1.cc:847
    break;

  case 121:
#line 323 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('&'); }
#line 1324 "gramatica.cpp" // lalr1.cc:847
    break;

  case 122:
#line 326 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('>'); }
#line 1330 "gramatica.cpp" // lalr1.cc:847
    break;

  case 123:
#line 329 "gramatica.yy" // lalr1.cc:847
    { driver.toOperand(); }
#line 1336 "gramatica.cpp" // lalr1.cc:847
    break;

  case 124:
#line 332 "gramatica.yy" // lalr1.cc:847
    { driver.copyId(); driver.checkVar(); }
#line 1342 "gramatica.cpp" // lalr1.cc:847
    break;

  case 125:
#line 335 "gramatica.yy" // lalr1.cc:847
    { driver.genIf(); }
#line 1348 "gramatica.cpp" // lalr1.cc:847
    break;

  case 126:
#line 338 "gramatica.yy" // lalr1.cc:847
    { driver.genElse(); }
#line 1354 "gramatica.cpp" // lalr1.cc:847
    break;

  case 127:
#line 341 "gramatica.yy" // lalr1.cc:847
    { driver.genElseIf(); }
#line 1360 "gramatica.cpp" // lalr1.cc:847
    break;

  case 128:
#line 344 "gramatica.yy" // lalr1.cc:847
    { driver.startWhile(); }
#line 1366 "gramatica.cpp" // lalr1.cc:847
    break;

  case 129:
#line 347 "gramatica.yy" // lalr1.cc:847
    { driver.genWhile(); }
#line 1372 "gramatica.cpp" // lalr1.cc:847
    break;

  case 130:
#line 350 "gramatica.yy" // lalr1.cc:847
    { driver.startDo(); }
#line 1378 "gramatica.cpp" // lalr1.cc:847
    break;

  case 131:
#line 353 "gramatica.yy" // lalr1.cc:847
    { driver.startFor(); }
#line 1384 "gramatica.cpp" // lalr1.cc:847
    break;

  case 132:
#line 356 "gramatica.yy" // lalr1.cc:847
    { driver.genFor(); }
#line 1390 "gramatica.cpp" // lalr1.cc:847
    break;

  case 133:
#line 359 "gramatica.yy" // lalr1.cc:847
    { driver.saveFor(); }
#line 1396 "gramatica.cpp" // lalr1.cc:847
    break;


#line 1400 "gramatica.cpp" // lalr1.cc:847
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

  const signed char  Gramatica ::yytable_ninf_ = -1;

  const short int
   Gramatica ::yypact_[] =
  {
     190,    52,   -42,   -23,  -120,    52,   277,   -28,    25,    52,
      52,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     -25,  -120,    34,   256,  -120,   256,  -120,  -120,     6,  -120,
      53,  -120,  -120,  -120,  -120,   -42,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     108,   -40,  -120,  -120,  -120,  -120,   -23,  -120,   126,  -120,
    -120,  -120,    91,  -120,  -120,  -120,    52,   -33,    24,    19,
     -23,   -33,   -33,   -33,    32,    71,    21,  -120,  -120,  -120,
     256,  -120,  -120,    52,    68,   -33,    52,  -120,  -120,  -120,
      29,    33,  -120,     9,  -120,  -120,  -120,  -120,  -120,  -120,
      52,   -11,    27,  -120,    52,    55,   -23,  -120,  -120,  -120,
     293,    56,    57,    87,  -120,  -120,   -33,    61,    65,    67,
    -120,  -120,    52,   -23,   -23,  -120,  -120,     6,    70,  -120,
     145,    55,  -120,  -120,    52,  -120,  -120,  -120,    52,  -120,
    -120,  -120,    52,    69,   210,   106,  -120,    72,    74,   293,
      38,  -120,  -120,  -120,   -33,    40,  -120,   -33,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
      79,    52,    55,    75,   -23,    82,  -120,  -120,  -120,    85,
      38,   269,  -120,  -120,  -120,    55,    55,    52,   -42,  -120,
     -33,  -120,   293,  -120,    55,   -23,  -120,  -120,  -120,  -120,
      53,  -120,   -33,  -120,  -120,    77,  -120,    55,  -120,  -120,
     -23,    75,  -120,    55,  -120,  -120
  };

  const unsigned char
   Gramatica ::yydefact_[] =
  {
       0,     0,     0,    31,   128,     0,     0,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    21,
      26,    51,     0,     3,     4,    10,    11,    19,     0,    12,
      34,    13,    37,    38,    39,     0,    14,    15,    20,    16,
      17,    18,    83,    82,    78,    79,    80,    77,   116,   118,
       0,    26,   102,   101,    76,    81,    31,   121,    92,   119,
     120,    99,     0,   131,    30,   130,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     1,     2,     8,
      10,   117,   123,     0,    36,   124,     0,    85,    89,    88,
       0,    86,   125,    90,   105,   106,   108,   107,   109,   110,
       0,    94,    96,    98,     0,     0,    31,    24,    23,    25,
      63,     0,     0,     7,    72,    73,     0,     0,    68,     0,
      28,     9,     0,    31,    31,    29,    70,     0,     0,    84,
       0,     0,   103,   104,     0,   122,   114,   115,     0,   111,
     112,   113,     0,     0,     0,     0,   129,     0,     0,    63,
      54,     6,     5,    67,     0,     0,    27,     0,   127,   126,
     123,   100,    87,    32,    91,    93,    95,    97,   132,    75,
       0,     0,     0,    65,    31,     0,    58,    59,    57,     0,
      54,     0,    66,    69,    22,     0,     0,     0,     0,    74,
       0,    42,     0,    62,     0,    31,    52,    53,    56,    55,
      34,    35,     0,   133,    41,     0,    61,     0,    33,    71,
      31,    65,    60,     0,    64,    40
  };

  const signed char
   Gramatica ::yypgoto_[] =
  {
    -120,  -120,    22,  -120,   -13,    59,    -6,    -1,   -65,  -120,
       0,  -120,   -52,  -120,   -64,  -120,  -120,  -120,  -120,  -120,
      -3,  -120,   -39,  -120,  -120,   -36,    -2,   -56,  -120,     1,
     -24,  -120,  -120,  -119,   -45,  -120,  -120,    31,  -120,     4,
    -120,   -83,    20,  -120,   101,  -120,  -120,  -120,  -120,  -120,
      37,  -120,  -120,  -120,  -120,  -120,    12,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120
  };

  const short int
   Gramatica ::yydefgoto_[] =
  {
      -1,    22,    23,   152,    24,    79,    25,    26,   109,    27,
      52,    29,    65,    30,    84,   125,    31,    32,    33,    34,
      35,    36,   179,   180,   181,    37,   148,   193,    38,   117,
      39,    40,    41,   145,    53,    54,    55,    90,    91,    56,
      57,    58,    59,    60,    61,   134,   100,   142,   138,    62,
      82,    86,   101,   102,    93,   165,   122,   127,   131,   186,
     185,    66,   172,   105,   104,   188,   210
  };

  const unsigned char
   Gramatica ::yytable_[] =
  {
      28,    63,    28,    69,    92,    89,   113,   114,   115,    67,
      78,    75,   163,    72,    73,    51,    76,   135,   112,    80,
     126,   107,   108,    28,    74,    28,    75,   136,   137,   118,
      70,    76,    64,    71,    77,    85,    42,    43,    44,    45,
      46,    47,   132,   133,    42,    43,    44,    45,    46,    47,
      88,   153,    81,   191,   146,   166,    42,    43,    44,    45,
      46,    47,   139,   140,   141,    83,   200,   201,   176,   177,
     106,   158,   159,   110,    80,   206,   111,   119,   120,   124,
      28,   129,   116,    50,    48,    89,   130,   123,   212,   182,
     128,    50,   184,   178,   215,    42,    43,    44,    45,    46,
      47,    49,   144,    50,   150,   149,     8,   147,   143,    51,
     118,   154,    42,    43,    44,    45,    46,    47,   155,   156,
     161,   171,   194,   168,   174,   204,   157,   189,   192,   173,
      88,   170,   195,   196,   211,   151,   208,   209,   164,   121,
      49,   197,    50,   207,    28,   198,   147,   175,    51,    42,
      43,    44,    45,    46,    47,   214,   183,   199,   213,    50,
      87,   162,   167,   103,   160,    51,    94,    95,    96,    97,
      98,    99,   187,     0,     0,   190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,    28,   205,
       0,   202,     0,     0,     0,     0,    50,     0,     0,     0,
       1,     0,    51,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       1,     0,     0,     2,     3,     4,     5,     6,     7,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,     0,
       0,     0,     0,     0,     0,    19,     1,    20,    21,     2,
       3,     4,     5,     6,     7,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     6,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
       0,    19,     0,    20,    21,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,    68,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21
  };

  const short int
   Gramatica ::yycheck_[] =
  {
       0,     2,     2,     6,    56,    50,    71,    72,    73,     5,
      23,    51,   131,     9,    10,    57,    56,   100,    70,    25,
      85,    54,    55,    23,    49,    25,    51,    38,    39,    74,
      58,    56,    55,     8,     0,    35,     4,     5,     6,     7,
       8,     9,    33,    34,     4,     5,     6,     7,     8,     9,
      50,   116,    46,   172,   106,   138,     4,     5,     6,     7,
       8,     9,    35,    36,    37,    12,   185,   186,    30,    31,
      66,   123,   124,    49,    80,   194,    57,     6,    57,    11,
      80,    52,    50,    51,    32,   130,    53,    83,   207,   154,
      86,    51,   157,    55,   213,     4,     5,     6,     7,     8,
       9,    49,    47,    51,    47,    49,    19,   110,   104,    57,
     155,    50,     4,     5,     6,     7,     8,     9,    53,    52,
      50,    15,   174,    54,    50,   190,   122,    48,    53,    57,
     130,   144,    50,    48,    57,   113,   200,   202,   134,    80,
      49,   180,    51,   195,   144,   181,   149,   149,    57,     4,
       5,     6,     7,     8,     9,   211,   155,   181,   210,    51,
      52,   130,   142,    62,   127,    57,    40,    41,    42,    43,
      44,    45,   160,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,   188,   192,
      -1,   187,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      10,    -1,    57,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    10,    57,    58,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    55,    -1,    57,    58,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58
  };

  const unsigned char
   Gramatica ::yystos_[] =
  {
       0,    10,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    55,
      57,    58,    60,    61,    63,    65,    66,    68,    69,    70,
      72,    75,    76,    77,    78,    79,    80,    84,    87,    89,
      90,    91,     4,     5,     6,     7,     8,     9,    32,    49,
      51,    57,    69,    93,    94,    95,    98,    99,   100,   101,
     102,   103,   108,    66,    55,    71,   120,    98,    57,    79,
      58,     8,    98,    98,    49,    51,    56,     0,    63,    64,
      65,    46,   109,    12,    73,    69,   110,    52,    69,    93,
      96,    97,    71,   113,    40,    41,    42,    43,    44,    45,
     105,   111,   112,   103,   123,   122,    98,    54,    55,    67,
      49,    57,    71,    67,    67,    67,    50,    88,    93,     6,
      57,    64,   115,    98,    11,    74,    67,   116,    98,    52,
      53,   117,    33,    34,   104,   100,    38,    39,   107,    35,
      36,    37,   106,    98,    47,    92,    71,    79,    85,    49,
      47,    61,    62,    67,    50,    53,    52,    98,    71,    71,
     109,    50,    96,    92,    98,   114,   100,   101,    54,    48,
      63,    15,   121,    57,    50,    85,    30,    31,    55,    81,
      82,    83,    67,    88,    67,   119,   118,   115,   124,    48,
      98,    92,    53,    86,    71,    50,    48,    81,    84,    89,
      92,    92,    98,    66,    67,    79,    92,    71,    73,    67,
     125,    57,    92,    71,    86,    92
  };

  const unsigned char
   Gramatica ::yyr1_[] =
  {
       0,    59,    60,    60,    60,    61,    62,    62,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    67,    67,    68,    69,    69,    69,    70,
      71,    71,    72,    73,    73,    74,    74,    75,    75,    75,
      76,    77,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    81,    81,    82,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125
  };

  const unsigned char
   Gramatica ::yyr2_[] =
  {
       0,     2,     2,     1,     1,     4,     1,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     1,     3,     1,     4,     3,     3,
       1,     0,     5,     6,     0,     4,     0,     1,     1,     1,
      10,     7,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     2,     0,     2,     2,     1,     1,     1,
       8,     7,     3,     0,     4,     0,     5,     4,     1,     3,
       3,     7,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     3,     1,     1,
       2,     4,     1,     4,     2,     4,     2,     4,     2,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
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
  "conditional", "maybenl", "if", "elseif", "else", "loop", "for", "do",
  "while", "type", "class", "class_dec", "class_st", "accesor", "function",
  "args", "moreargs", "func_call", "call_args", "var", "print", "read",
  "block", "var_const", "boolean", "list", "list_elem", "list_e",
  "expresion", "exp", "e", "term", "fact", "f", "rel_op", "comp_op",
  "mult_op", "add_op", "neg_op", "ass_op", "stat_exp_aux1",
  "stat_exp_aux2", "stat_exp_aux3", "stat_exp_aux4", "stat_exp_aux5",
  "stat_assign_aux", "stat_var_aux", "stat_if_aux1", "stat_if_aux2",
  "stat_if_aux3", "stat_while_aux1", "stat_while_aux2", "stat_do_aux",
  "stat_for_aux1", "stat_for_aux2", "stat_for_aux3", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
   Gramatica ::yyrline_[] =
  {
       0,    98,    98,    99,   100,   103,   106,   107,   110,   113,
     114,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   130,   133,   134,   137,   140,   141,   142,   145,
     148,   149,   152,   155,   156,   159,   160,   163,   164,   165,
     168,   171,   174,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   188,   191,   192,   195,   196,   197,   200,   201,
     204,   205,   208,   209,   212,   213,   216,   217,   220,   221,
     224,   225,   228,   231,   234,   235,   238,   239,   240,   241,
     242,   243,   246,   247,   250,   251,   254,   255,   258,   259,
     262,   263,   266,   267,   270,   271,   274,   275,   278,   279,
     282,   283,   284,   287,   288,   291,   292,   293,   294,   295,
     296,   299,   300,   301,   304,   305,   308,   311,   314,   317,
     320,   323,   326,   329,   332,   335,   338,   341,   344,   347,
     350,   353,   356,   359
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
#line 2020 "gramatica.cpp" // lalr1.cc:1155
#line 362 "gramatica.yy" // lalr1.cc:1156


void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
	driver.error(l, m);
}
