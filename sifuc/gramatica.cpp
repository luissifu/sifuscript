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
#line 84 "gramatica.yy" // lalr1.cc:407


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
  Gramatica::Gramatica (class Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  Gramatica::~Gramatica ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  Gramatica::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  Gramatica::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  Gramatica::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  Gramatica::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  Gramatica::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  Gramatica::basic_symbol<Base>::~basic_symbol ()
  {
  }

  template <typename Base>
  inline
  void
  Gramatica::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  Gramatica::by_type::by_type ()
     : type (empty)
  {}

  inline
  Gramatica::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  Gramatica::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  Gramatica::by_type::move (by_type& that)
  {
    type = that.type;
    that.type = empty;
  }

  inline
  int
  Gramatica::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  Gramatica::by_state::by_state ()
    : state (empty)
  {}

  inline
  Gramatica::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  Gramatica::by_state::move (by_state& that)
  {
    state = that.state;
    that.state = empty;
  }

  inline
  Gramatica::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  Gramatica::symbol_number_type
  Gramatica::by_state::type_get () const
  {
    return state == empty ? 0 : yystos_[state];
  }

  inline
  Gramatica::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  Gramatica::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty;
  }

  inline
  Gramatica::stack_symbol_type&
  Gramatica::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  Gramatica::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  Gramatica::yy_print_ (std::ostream& yyo,
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
  Gramatica::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  Gramatica::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  Gramatica::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
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
#endif // YYDEBUG

  inline Gramatica::state_type
  Gramatica::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

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
    #line 46 "gramatica.yy" // lalr1.cc:725
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
#line 99 "gramatica.yy" // lalr1.cc:847
    { driver.endProg(); }
#line 616 "gramatica.cpp" // lalr1.cc:847
    break;

  case 3:
#line 100 "gramatica.yy" // lalr1.cc:847
    { driver.endProg(); }
#line 622 "gramatica.cpp" // lalr1.cc:847
    break;

  case 4:
#line 101 "gramatica.yy" // lalr1.cc:847
    { driver.endProg(); }
#line 628 "gramatica.cpp" // lalr1.cc:847
    break;

  case 5:
#line 104 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 634 "gramatica.cpp" // lalr1.cc:847
    break;

  case 6:
#line 107 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 640 "gramatica.cpp" // lalr1.cc:847
    break;

  case 7:
#line 108 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 646 "gramatica.cpp" // lalr1.cc:847
    break;

  case 8:
#line 111 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 652 "gramatica.cpp" // lalr1.cc:847
    break;

  case 9:
#line 114 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 658 "gramatica.cpp" // lalr1.cc:847
    break;

  case 10:
#line 115 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 664 "gramatica.cpp" // lalr1.cc:847
    break;

  case 11:
#line 118 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 670 "gramatica.cpp" // lalr1.cc:847
    break;

  case 12:
#line 119 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 676 "gramatica.cpp" // lalr1.cc:847
    break;

  case 13:
#line 120 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 682 "gramatica.cpp" // lalr1.cc:847
    break;

  case 14:
#line 121 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 688 "gramatica.cpp" // lalr1.cc:847
    break;

  case 15:
#line 122 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 694 "gramatica.cpp" // lalr1.cc:847
    break;

  case 16:
#line 123 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 700 "gramatica.cpp" // lalr1.cc:847
    break;

  case 17:
#line 124 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 706 "gramatica.cpp" // lalr1.cc:847
    break;

  case 18:
#line 125 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 712 "gramatica.cpp" // lalr1.cc:847
    break;

  case 19:
#line 126 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 718 "gramatica.cpp" // lalr1.cc:847
    break;

  case 20:
#line 127 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 724 "gramatica.cpp" // lalr1.cc:847
    break;

  case 21:
#line 128 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 730 "gramatica.cpp" // lalr1.cc:847
    break;

  case 22:
#line 131 "gramatica.yy" // lalr1.cc:847
    { driver.genAssign(); }
#line 736 "gramatica.cpp" // lalr1.cc:847
    break;

  case 23:
#line 134 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 742 "gramatica.cpp" // lalr1.cc:847
    break;

  case 24:
#line 135 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 748 "gramatica.cpp" // lalr1.cc:847
    break;

  case 25:
#line 138 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 754 "gramatica.cpp" // lalr1.cc:847
    break;

  case 26:
#line 141 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 760 "gramatica.cpp" // lalr1.cc:847
    break;

  case 27:
#line 142 "gramatica.yy" // lalr1.cc:847
    { driver.addId((yystack_[3].value.string)); }
#line 766 "gramatica.cpp" // lalr1.cc:847
    break;

  case 28:
#line 143 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 772 "gramatica.cpp" // lalr1.cc:847
    break;

  case 29:
#line 146 "gramatica.yy" // lalr1.cc:847
    { driver.addId((yystack_[0].value.string)); }
#line 778 "gramatica.cpp" // lalr1.cc:847
    break;

  case 30:
#line 149 "gramatica.yy" // lalr1.cc:847
    { driver.endIf(); }
#line 784 "gramatica.cpp" // lalr1.cc:847
    break;

  case 31:
#line 152 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 790 "gramatica.cpp" // lalr1.cc:847
    break;

  case 32:
#line 153 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 796 "gramatica.cpp" // lalr1.cc:847
    break;

  case 33:
#line 156 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 802 "gramatica.cpp" // lalr1.cc:847
    break;

  case 34:
#line 159 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 808 "gramatica.cpp" // lalr1.cc:847
    break;

  case 35:
#line 160 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 814 "gramatica.cpp" // lalr1.cc:847
    break;

  case 36:
#line 163 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 820 "gramatica.cpp" // lalr1.cc:847
    break;

  case 37:
#line 164 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 826 "gramatica.cpp" // lalr1.cc:847
    break;

  case 38:
#line 167 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 832 "gramatica.cpp" // lalr1.cc:847
    break;

  case 39:
#line 168 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 838 "gramatica.cpp" // lalr1.cc:847
    break;

  case 40:
#line 169 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 844 "gramatica.cpp" // lalr1.cc:847
    break;

  case 41:
#line 172 "gramatica.yy" // lalr1.cc:847
    { driver.endFor(); }
#line 850 "gramatica.cpp" // lalr1.cc:847
    break;

  case 42:
#line 175 "gramatica.yy" // lalr1.cc:847
    { driver.genDo(); }
#line 856 "gramatica.cpp" // lalr1.cc:847
    break;

  case 43:
#line 178 "gramatica.yy" // lalr1.cc:847
    { driver.endWhile(); }
#line 862 "gramatica.cpp" // lalr1.cc:847
    break;

  case 44:
#line 181 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 868 "gramatica.cpp" // lalr1.cc:847
    break;

  case 45:
#line 182 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 874 "gramatica.cpp" // lalr1.cc:847
    break;

  case 46:
#line 183 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 880 "gramatica.cpp" // lalr1.cc:847
    break;

  case 47:
#line 184 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 886 "gramatica.cpp" // lalr1.cc:847
    break;

  case 48:
#line 185 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 892 "gramatica.cpp" // lalr1.cc:847
    break;

  case 49:
#line 186 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 898 "gramatica.cpp" // lalr1.cc:847
    break;

  case 50:
#line 187 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 904 "gramatica.cpp" // lalr1.cc:847
    break;

  case 51:
#line 188 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 910 "gramatica.cpp" // lalr1.cc:847
    break;

  case 52:
#line 189 "gramatica.yy" // lalr1.cc:847
    { driver.addType((yystack_[0].value.string)); }
#line 916 "gramatica.cpp" // lalr1.cc:847
    break;

  case 53:
#line 192 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 922 "gramatica.cpp" // lalr1.cc:847
    break;

  case 54:
#line 195 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 928 "gramatica.cpp" // lalr1.cc:847
    break;

  case 56:
#line 199 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 934 "gramatica.cpp" // lalr1.cc:847
    break;

  case 57:
#line 200 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 940 "gramatica.cpp" // lalr1.cc:847
    break;

  case 58:
#line 201 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 946 "gramatica.cpp" // lalr1.cc:847
    break;

  case 59:
#line 204 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 952 "gramatica.cpp" // lalr1.cc:847
    break;

  case 60:
#line 205 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 958 "gramatica.cpp" // lalr1.cc:847
    break;

  case 61:
#line 208 "gramatica.yy" // lalr1.cc:847
    { driver.endFunc(); }
#line 964 "gramatica.cpp" // lalr1.cc:847
    break;

  case 62:
#line 209 "gramatica.yy" // lalr1.cc:847
    { driver.endFunc(); }
#line 970 "gramatica.cpp" // lalr1.cc:847
    break;

  case 63:
#line 212 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 976 "gramatica.cpp" // lalr1.cc:847
    break;

  case 64:
#line 213 "gramatica.yy" // lalr1.cc:847
    { driver.addParam(); }
#line 982 "gramatica.cpp" // lalr1.cc:847
    break;

  case 65:
#line 216 "gramatica.yy" // lalr1.cc:847
    { driver.addParam(); }
#line 988 "gramatica.cpp" // lalr1.cc:847
    break;

  case 66:
#line 217 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 994 "gramatica.cpp" // lalr1.cc:847
    break;

  case 67:
#line 220 "gramatica.yy" // lalr1.cc:847
    { driver.genSub(); }
#line 1000 "gramatica.cpp" // lalr1.cc:847
    break;

  case 68:
#line 221 "gramatica.yy" // lalr1.cc:847
    { driver.genSub(); }
#line 1006 "gramatica.cpp" // lalr1.cc:847
    break;

  case 69:
#line 224 "gramatica.yy" // lalr1.cc:847
    { driver.genParam(); }
#line 1012 "gramatica.cpp" // lalr1.cc:847
    break;

  case 70:
#line 225 "gramatica.yy" // lalr1.cc:847
    { driver.genParam(); }
#line 1018 "gramatica.cpp" // lalr1.cc:847
    break;

  case 71:
#line 228 "gramatica.yy" // lalr1.cc:847
    { driver.checkVar(); }
#line 1024 "gramatica.cpp" // lalr1.cc:847
    break;

  case 72:
#line 229 "gramatica.yy" // lalr1.cc:847
    { driver.genAssign(); }
#line 1030 "gramatica.cpp" // lalr1.cc:847
    break;

  case 73:
#line 232 "gramatica.yy" // lalr1.cc:847
    { driver.genPrint(); }
#line 1036 "gramatica.cpp" // lalr1.cc:847
    break;

  case 74:
#line 235 "gramatica.yy" // lalr1.cc:847
    { driver.genRead(); }
#line 1042 "gramatica.cpp" // lalr1.cc:847
    break;

  case 75:
#line 238 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1048 "gramatica.cpp" // lalr1.cc:847
    break;

  case 76:
#line 239 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1054 "gramatica.cpp" // lalr1.cc:847
    break;

  case 77:
#line 242 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1060 "gramatica.cpp" // lalr1.cc:847
    break;

  case 78:
#line 243 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'c'); }
#line 1066 "gramatica.cpp" // lalr1.cc:847
    break;

  case 79:
#line 244 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'i'); }
#line 1072 "gramatica.cpp" // lalr1.cc:847
    break;

  case 80:
#line 245 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'f'); }
#line 1078 "gramatica.cpp" // lalr1.cc:847
    break;

  case 81:
#line 246 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 's'); }
#line 1084 "gramatica.cpp" // lalr1.cc:847
    break;

  case 82:
#line 247 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1090 "gramatica.cpp" // lalr1.cc:847
    break;

  case 83:
#line 250 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'b'); }
#line 1096 "gramatica.cpp" // lalr1.cc:847
    break;

  case 84:
#line 251 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'b'); }
#line 1102 "gramatica.cpp" // lalr1.cc:847
    break;

  case 85:
#line 254 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1108 "gramatica.cpp" // lalr1.cc:847
    break;

  case 86:
#line 255 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1114 "gramatica.cpp" // lalr1.cc:847
    break;

  case 87:
#line 258 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1120 "gramatica.cpp" // lalr1.cc:847
    break;

  case 88:
#line 259 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1126 "gramatica.cpp" // lalr1.cc:847
    break;

  case 89:
#line 262 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1132 "gramatica.cpp" // lalr1.cc:847
    break;

  case 90:
#line 263 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1138 "gramatica.cpp" // lalr1.cc:847
    break;

  case 91:
#line 266 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1144 "gramatica.cpp" // lalr1.cc:847
    break;

  case 92:
#line 267 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1150 "gramatica.cpp" // lalr1.cc:847
    break;

  case 93:
#line 270 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1156 "gramatica.cpp" // lalr1.cc:847
    break;

  case 94:
#line 271 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1162 "gramatica.cpp" // lalr1.cc:847
    break;

  case 95:
#line 274 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1168 "gramatica.cpp" // lalr1.cc:847
    break;

  case 96:
#line 275 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1174 "gramatica.cpp" // lalr1.cc:847
    break;

  case 97:
#line 278 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1180 "gramatica.cpp" // lalr1.cc:847
    break;

  case 98:
#line 279 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1186 "gramatica.cpp" // lalr1.cc:847
    break;

  case 99:
#line 282 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('!');; }
#line 1192 "gramatica.cpp" // lalr1.cc:847
    break;

  case 100:
#line 283 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1198 "gramatica.cpp" // lalr1.cc:847
    break;

  case 101:
#line 286 "gramatica.yy" // lalr1.cc:847
    { driver.endExp(); }
#line 1204 "gramatica.cpp" // lalr1.cc:847
    break;

  case 102:
#line 287 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1210 "gramatica.cpp" // lalr1.cc:847
    break;

  case 103:
#line 288 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1216 "gramatica.cpp" // lalr1.cc:847
    break;

  case 104:
#line 289 "gramatica.yy" // lalr1.cc:847
    { driver.toOperand(); }
#line 1222 "gramatica.cpp" // lalr1.cc:847
    break;

  case 105:
#line 292 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('&'); }
#line 1228 "gramatica.cpp" // lalr1.cc:847
    break;

  case 106:
#line 293 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('|'); }
#line 1234 "gramatica.cpp" // lalr1.cc:847
    break;

  case 107:
#line 296 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('<'); }
#line 1240 "gramatica.cpp" // lalr1.cc:847
    break;

  case 108:
#line 297 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('>'); }
#line 1246 "gramatica.cpp" // lalr1.cc:847
    break;

  case 109:
#line 298 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('l'); }
#line 1252 "gramatica.cpp" // lalr1.cc:847
    break;

  case 110:
#line 299 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('m'); }
#line 1258 "gramatica.cpp" // lalr1.cc:847
    break;

  case 111:
#line 300 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('e'); }
#line 1264 "gramatica.cpp" // lalr1.cc:847
    break;

  case 112:
#line 301 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('n'); }
#line 1270 "gramatica.cpp" // lalr1.cc:847
    break;

  case 113:
#line 304 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('*'); }
#line 1276 "gramatica.cpp" // lalr1.cc:847
    break;

  case 114:
#line 305 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('/'); }
#line 1282 "gramatica.cpp" // lalr1.cc:847
    break;

  case 115:
#line 306 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('%'); }
#line 1288 "gramatica.cpp" // lalr1.cc:847
    break;

  case 116:
#line 309 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('+'); }
#line 1294 "gramatica.cpp" // lalr1.cc:847
    break;

  case 117:
#line 310 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('-'); }
#line 1300 "gramatica.cpp" // lalr1.cc:847
    break;

  case 118:
#line 313 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('!'); }
#line 1306 "gramatica.cpp" // lalr1.cc:847
    break;

  case 119:
#line 316 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('='); }
#line 1312 "gramatica.cpp" // lalr1.cc:847
    break;

  case 120:
#line 319 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('('); }
#line 1318 "gramatica.cpp" // lalr1.cc:847
    break;

  case 121:
#line 322 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('+'); }
#line 1324 "gramatica.cpp" // lalr1.cc:847
    break;

  case 122:
#line 325 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('*'); }
#line 1330 "gramatica.cpp" // lalr1.cc:847
    break;

  case 123:
#line 328 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('&'); }
#line 1336 "gramatica.cpp" // lalr1.cc:847
    break;

  case 124:
#line 331 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('>'); }
#line 1342 "gramatica.cpp" // lalr1.cc:847
    break;

  case 125:
#line 334 "gramatica.yy" // lalr1.cc:847
    { driver.toOperand(); }
#line 1348 "gramatica.cpp" // lalr1.cc:847
    break;

  case 126:
#line 337 "gramatica.yy" // lalr1.cc:847
    { driver.copyId(); driver.checkVar(); }
#line 1354 "gramatica.cpp" // lalr1.cc:847
    break;

  case 127:
#line 340 "gramatica.yy" // lalr1.cc:847
    { driver.genIf(); }
#line 1360 "gramatica.cpp" // lalr1.cc:847
    break;

  case 128:
#line 343 "gramatica.yy" // lalr1.cc:847
    { driver.genElse(); }
#line 1366 "gramatica.cpp" // lalr1.cc:847
    break;

  case 129:
#line 346 "gramatica.yy" // lalr1.cc:847
    { driver.genElseIf(); }
#line 1372 "gramatica.cpp" // lalr1.cc:847
    break;

  case 130:
#line 349 "gramatica.yy" // lalr1.cc:847
    { driver.startWhile(); }
#line 1378 "gramatica.cpp" // lalr1.cc:847
    break;

  case 131:
#line 352 "gramatica.yy" // lalr1.cc:847
    { driver.genWhile(); }
#line 1384 "gramatica.cpp" // lalr1.cc:847
    break;

  case 132:
#line 355 "gramatica.yy" // lalr1.cc:847
    { driver.startDo(); }
#line 1390 "gramatica.cpp" // lalr1.cc:847
    break;

  case 133:
#line 358 "gramatica.yy" // lalr1.cc:847
    { driver.startFor(); }
#line 1396 "gramatica.cpp" // lalr1.cc:847
    break;

  case 134:
#line 361 "gramatica.yy" // lalr1.cc:847
    { driver.genFor(); }
#line 1402 "gramatica.cpp" // lalr1.cc:847
    break;

  case 135:
#line 364 "gramatica.yy" // lalr1.cc:847
    { driver.saveFor(); }
#line 1408 "gramatica.cpp" // lalr1.cc:847
    break;

  case 136:
#line 367 "gramatica.yy" // lalr1.cc:847
    { driver.checkFunc(); }
#line 1414 "gramatica.cpp" // lalr1.cc:847
    break;

  case 137:
#line 370 "gramatica.yy" // lalr1.cc:847
    { driver.saveFunc(); }
#line 1420 "gramatica.cpp" // lalr1.cc:847
    break;

  case 138:
#line 373 "gramatica.yy" // lalr1.cc:847
    { driver.verifyFunc(); }
#line 1426 "gramatica.cpp" // lalr1.cc:847
    break;

  case 139:
#line 376 "gramatica.yy" // lalr1.cc:847
    { driver.genEra(); }
#line 1432 "gramatica.cpp" // lalr1.cc:847
    break;


#line 1436 "gramatica.cpp" // lalr1.cc:847
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
  Gramatica::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  Gramatica::yysyntax_error_ (state_type yystate, symbol_number_type yytoken) const
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


  const signed char Gramatica::yypact_ninf_ = -119;

  const short int Gramatica::yytable_ninf_ = -139;

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



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
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
  "stat_funcall_aux2", YY_NULLPTR
  };

#if YYDEBUG
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
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  Gramatica::yy_reduce_print_ (int yyrule)
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
#line 2061 "gramatica.cpp" // lalr1.cc:1155
#line 379 "gramatica.yy" // lalr1.cc:1156


void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
	driver.error(l, m);
}
