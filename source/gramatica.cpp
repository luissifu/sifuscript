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
    { ; }
#line 670 "gramatica.cpp" // lalr1.cc:847
    break;

  case 12:
#line 118 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 676 "gramatica.cpp" // lalr1.cc:847
    break;

  case 13:
#line 119 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 682 "gramatica.cpp" // lalr1.cc:847
    break;

  case 14:
#line 120 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 688 "gramatica.cpp" // lalr1.cc:847
    break;

  case 15:
#line 121 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 694 "gramatica.cpp" // lalr1.cc:847
    break;

  case 16:
#line 122 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 700 "gramatica.cpp" // lalr1.cc:847
    break;

  case 17:
#line 123 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 706 "gramatica.cpp" // lalr1.cc:847
    break;

  case 18:
#line 124 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 712 "gramatica.cpp" // lalr1.cc:847
    break;

  case 19:
#line 125 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 718 "gramatica.cpp" // lalr1.cc:847
    break;

  case 20:
#line 126 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 724 "gramatica.cpp" // lalr1.cc:847
    break;

  case 21:
#line 129 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 730 "gramatica.cpp" // lalr1.cc:847
    break;

  case 22:
#line 132 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 736 "gramatica.cpp" // lalr1.cc:847
    break;

  case 23:
#line 133 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 742 "gramatica.cpp" // lalr1.cc:847
    break;

  case 24:
#line 136 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 748 "gramatica.cpp" // lalr1.cc:847
    break;

  case 25:
#line 139 "gramatica.yy" // lalr1.cc:847
    { cout << (yystack_[0].value.string) << endl; }
#line 754 "gramatica.cpp" // lalr1.cc:847
    break;

  case 26:
#line 140 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 760 "gramatica.cpp" // lalr1.cc:847
    break;

  case 27:
#line 141 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 766 "gramatica.cpp" // lalr1.cc:847
    break;

  case 28:
#line 144 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 772 "gramatica.cpp" // lalr1.cc:847
    break;

  case 29:
#line 147 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 778 "gramatica.cpp" // lalr1.cc:847
    break;

  case 30:
#line 148 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 784 "gramatica.cpp" // lalr1.cc:847
    break;

  case 31:
#line 151 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 790 "gramatica.cpp" // lalr1.cc:847
    break;

  case 32:
#line 154 "gramatica.yy" // lalr1.cc:847
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
#line 164 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 832 "gramatica.cpp" // lalr1.cc:847
    break;

  case 39:
#line 167 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 838 "gramatica.cpp" // lalr1.cc:847
    break;

  case 40:
#line 170 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 844 "gramatica.cpp" // lalr1.cc:847
    break;

  case 41:
#line 173 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 850 "gramatica.cpp" // lalr1.cc:847
    break;

  case 42:
#line 176 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 856 "gramatica.cpp" // lalr1.cc:847
    break;

  case 43:
#line 177 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 862 "gramatica.cpp" // lalr1.cc:847
    break;

  case 44:
#line 178 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 868 "gramatica.cpp" // lalr1.cc:847
    break;

  case 45:
#line 179 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 874 "gramatica.cpp" // lalr1.cc:847
    break;

  case 46:
#line 180 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 880 "gramatica.cpp" // lalr1.cc:847
    break;

  case 47:
#line 181 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 886 "gramatica.cpp" // lalr1.cc:847
    break;

  case 48:
#line 182 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 892 "gramatica.cpp" // lalr1.cc:847
    break;

  case 49:
#line 183 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 898 "gramatica.cpp" // lalr1.cc:847
    break;

  case 50:
#line 184 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 904 "gramatica.cpp" // lalr1.cc:847
    break;

  case 51:
#line 187 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 910 "gramatica.cpp" // lalr1.cc:847
    break;

  case 52:
#line 190 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 916 "gramatica.cpp" // lalr1.cc:847
    break;

  case 54:
#line 194 "gramatica.yy" // lalr1.cc:847
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
    { ; }
#line 964 "gramatica.cpp" // lalr1.cc:847
    break;

  case 62:
#line 208 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 970 "gramatica.cpp" // lalr1.cc:847
    break;

  case 63:
#line 211 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 976 "gramatica.cpp" // lalr1.cc:847
    break;

  case 64:
#line 212 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 982 "gramatica.cpp" // lalr1.cc:847
    break;

  case 65:
#line 215 "gramatica.yy" // lalr1.cc:847
    { ; }
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
    { ; }
#line 1024 "gramatica.cpp" // lalr1.cc:847
    break;

  case 72:
#line 230 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1030 "gramatica.cpp" // lalr1.cc:847
    break;

  case 73:
#line 231 "gramatica.yy" // lalr1.cc:847
    { ; }
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
#line 236 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1054 "gramatica.cpp" // lalr1.cc:847
    break;

  case 77:
#line 237 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1060 "gramatica.cpp" // lalr1.cc:847
    break;

  case 78:
#line 238 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1066 "gramatica.cpp" // lalr1.cc:847
    break;

  case 79:
#line 239 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1072 "gramatica.cpp" // lalr1.cc:847
    break;

  case 80:
#line 242 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1078 "gramatica.cpp" // lalr1.cc:847
    break;

  case 81:
#line 243 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1084 "gramatica.cpp" // lalr1.cc:847
    break;

  case 82:
#line 246 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1090 "gramatica.cpp" // lalr1.cc:847
    break;

  case 83:
#line 247 "gramatica.yy" // lalr1.cc:847
    { ; }
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
    { ; }
#line 1186 "gramatica.cpp" // lalr1.cc:847
    break;

  case 99:
#line 279 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1192 "gramatica.cpp" // lalr1.cc:847
    break;

  case 100:
#line 280 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1198 "gramatica.cpp" // lalr1.cc:847
    break;

  case 101:
#line 283 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1204 "gramatica.cpp" // lalr1.cc:847
    break;

  case 102:
#line 284 "gramatica.yy" // lalr1.cc:847
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
    { ; }
#line 1222 "gramatica.cpp" // lalr1.cc:847
    break;

  case 105:
#line 289 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1228 "gramatica.cpp" // lalr1.cc:847
    break;

  case 106:
#line 290 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1234 "gramatica.cpp" // lalr1.cc:847
    break;

  case 107:
#line 291 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1240 "gramatica.cpp" // lalr1.cc:847
    break;

  case 108:
#line 292 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1246 "gramatica.cpp" // lalr1.cc:847
    break;

  case 109:
#line 295 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1252 "gramatica.cpp" // lalr1.cc:847
    break;

  case 110:
#line 296 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1258 "gramatica.cpp" // lalr1.cc:847
    break;

  case 111:
#line 297 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1264 "gramatica.cpp" // lalr1.cc:847
    break;

  case 112:
#line 300 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1270 "gramatica.cpp" // lalr1.cc:847
    break;

  case 113:
#line 301 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1276 "gramatica.cpp" // lalr1.cc:847
    break;

  case 114:
#line 304 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1282 "gramatica.cpp" // lalr1.cc:847
    break;

  case 115:
#line 307 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1288 "gramatica.cpp" // lalr1.cc:847
    break;


#line 1292 "gramatica.cpp" // lalr1.cc:847
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


  const signed char  Gramatica ::yypact_ninf_ = -79;

  const signed char  Gramatica ::yytable_ninf_ = -1;

  const short int
   Gramatica ::yypact_[] =
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

  const unsigned char
   Gramatica ::yydefact_[] =
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

  const short int
   Gramatica ::yypgoto_[] =
  {
     -79,   -79,    26,   -79,    -9,    85,   -20,   159,   -61,   -79,
       5,   -79,   -44,   -79,   -11,   -79,   -79,   -79,   -79,   -79,
      -6,   -79,    -5,   -79,   -79,    -7,    20,   -23,   -79,    17,
       0,   -79,   -78,   -45,   -79,   -79,    43,   -79,    -3,    80,
     -47,    70,   -79,   119,   -79,   -79,   -79,   -79,   -79,    96
  };

  const short int
   Gramatica ::yydefgoto_[] =
  {
      -1,    21,    22,   150,    23,    76,    24,    25,   114,    26,
      50,    28,    63,    29,    81,   129,    30,    31,    32,    33,
      34,    35,   169,   170,   171,    36,   146,   180,    37,   121,
      38,    39,   110,    51,    52,    53,    87,    88,    54,    55,
      56,    57,    58,    59,    92,    99,   103,   106,    60,    79
  };

  const unsigned char
   Gramatica ::yytable_[] =
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

  const short int
   Gramatica ::yycheck_[] =
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

  const unsigned char
   Gramatica ::yystos_[] =
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

  const unsigned char
   Gramatica ::yyr1_[] =
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

  const unsigned char
   Gramatica ::yyr2_[] =
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



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  Gramatica ::yytname_[] =
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
  "ass_op", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
   Gramatica ::yyrline_[] =
  {
       0,    98,    98,    99,   100,   103,   106,   107,   110,   113,
     114,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   129,   132,   133,   136,   139,   140,   141,   144,   147,
     148,   151,   154,   155,   158,   159,   162,   163,   164,   167,
     170,   173,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   187,   190,   191,   194,   195,   196,   199,   200,   203,
     204,   207,   208,   211,   212,   215,   216,   219,   220,   223,
     224,   227,   230,   231,   234,   235,   236,   237,   238,   239,
     242,   243,   246,   247,   250,   251,   254,   255,   258,   259,
     262,   263,   266,   267,   270,   271,   274,   275,   278,   279,
     280,   283,   284,   287,   288,   289,   290,   291,   292,   295,
     296,   297,   300,   301,   304,   307
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
      55,    56,    57
    };
    const unsigned int user_token_number_max_ = 312;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // ss
#line 1884 "gramatica.cpp" // lalr1.cc:1155
#line 311 "gramatica.yy" // lalr1.cc:1156


void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
    driver.error(l, m);
}
