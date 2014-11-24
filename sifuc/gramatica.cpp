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
    { driver.genReturn(); }
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
#line 230 "gramatica.yy" // lalr1.cc:847
    { driver.checkVar(); }
#line 1036 "gramatica.cpp" // lalr1.cc:847
    break;

  case 74:
#line 233 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1042 "gramatica.cpp" // lalr1.cc:847
    break;

  case 75:
#line 234 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1048 "gramatica.cpp" // lalr1.cc:847
    break;

  case 76:
#line 237 "gramatica.yy" // lalr1.cc:847
    { driver.genPrint(); }
#line 1054 "gramatica.cpp" // lalr1.cc:847
    break;

  case 77:
#line 238 "gramatica.yy" // lalr1.cc:847
    { driver.genPrintLine(); }
#line 1060 "gramatica.cpp" // lalr1.cc:847
    break;

  case 78:
#line 241 "gramatica.yy" // lalr1.cc:847
    { driver.genRead(); }
#line 1066 "gramatica.cpp" // lalr1.cc:847
    break;

  case 79:
#line 244 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1072 "gramatica.cpp" // lalr1.cc:847
    break;

  case 80:
#line 245 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1078 "gramatica.cpp" // lalr1.cc:847
    break;

  case 81:
#line 248 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1084 "gramatica.cpp" // lalr1.cc:847
    break;

  case 82:
#line 249 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'c'); }
#line 1090 "gramatica.cpp" // lalr1.cc:847
    break;

  case 83:
#line 250 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'i'); }
#line 1096 "gramatica.cpp" // lalr1.cc:847
    break;

  case 84:
#line 251 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'f'); }
#line 1102 "gramatica.cpp" // lalr1.cc:847
    break;

  case 85:
#line 252 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 's'); }
#line 1108 "gramatica.cpp" // lalr1.cc:847
    break;

  case 86:
#line 255 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'b'); }
#line 1114 "gramatica.cpp" // lalr1.cc:847
    break;

  case 87:
#line 256 "gramatica.yy" // lalr1.cc:847
    { driver.addConst((yystack_[0].value.string), 'b'); }
#line 1120 "gramatica.cpp" // lalr1.cc:847
    break;

  case 88:
#line 259 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1126 "gramatica.cpp" // lalr1.cc:847
    break;

  case 89:
#line 260 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1132 "gramatica.cpp" // lalr1.cc:847
    break;

  case 90:
#line 263 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1138 "gramatica.cpp" // lalr1.cc:847
    break;

  case 91:
#line 264 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1144 "gramatica.cpp" // lalr1.cc:847
    break;

  case 92:
#line 267 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1150 "gramatica.cpp" // lalr1.cc:847
    break;

  case 93:
#line 268 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1156 "gramatica.cpp" // lalr1.cc:847
    break;

  case 94:
#line 271 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1162 "gramatica.cpp" // lalr1.cc:847
    break;

  case 95:
#line 272 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1168 "gramatica.cpp" // lalr1.cc:847
    break;

  case 96:
#line 275 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('!'); }
#line 1174 "gramatica.cpp" // lalr1.cc:847
    break;

  case 97:
#line 276 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1180 "gramatica.cpp" // lalr1.cc:847
    break;

  case 98:
#line 279 "gramatica.yy" // lalr1.cc:847
    { driver.endExp(); }
#line 1186 "gramatica.cpp" // lalr1.cc:847
    break;

  case 99:
#line 280 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1192 "gramatica.cpp" // lalr1.cc:847
    break;

  case 100:
#line 281 "gramatica.yy" // lalr1.cc:847
    { ; }
#line 1198 "gramatica.cpp" // lalr1.cc:847
    break;

  case 101:
#line 282 "gramatica.yy" // lalr1.cc:847
    { driver.toOperand(); }
#line 1204 "gramatica.cpp" // lalr1.cc:847
    break;

  case 102:
#line 285 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('&'); }
#line 1210 "gramatica.cpp" // lalr1.cc:847
    break;

  case 103:
#line 286 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('|'); }
#line 1216 "gramatica.cpp" // lalr1.cc:847
    break;

  case 104:
#line 289 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('<'); }
#line 1222 "gramatica.cpp" // lalr1.cc:847
    break;

  case 105:
#line 290 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('>'); }
#line 1228 "gramatica.cpp" // lalr1.cc:847
    break;

  case 106:
#line 291 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('l'); }
#line 1234 "gramatica.cpp" // lalr1.cc:847
    break;

  case 107:
#line 292 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('m'); }
#line 1240 "gramatica.cpp" // lalr1.cc:847
    break;

  case 108:
#line 293 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('e'); }
#line 1246 "gramatica.cpp" // lalr1.cc:847
    break;

  case 109:
#line 294 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('n'); }
#line 1252 "gramatica.cpp" // lalr1.cc:847
    break;

  case 110:
#line 297 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('*'); }
#line 1258 "gramatica.cpp" // lalr1.cc:847
    break;

  case 111:
#line 298 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('/'); }
#line 1264 "gramatica.cpp" // lalr1.cc:847
    break;

  case 112:
#line 299 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('%'); }
#line 1270 "gramatica.cpp" // lalr1.cc:847
    break;

  case 113:
#line 302 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('+'); }
#line 1276 "gramatica.cpp" // lalr1.cc:847
    break;

  case 114:
#line 303 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('-'); }
#line 1282 "gramatica.cpp" // lalr1.cc:847
    break;

  case 115:
#line 306 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('!'); }
#line 1288 "gramatica.cpp" // lalr1.cc:847
    break;

  case 116:
#line 309 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('='); }
#line 1294 "gramatica.cpp" // lalr1.cc:847
    break;

  case 117:
#line 312 "gramatica.yy" // lalr1.cc:847
    { driver.toOperator('('); }
#line 1300 "gramatica.cpp" // lalr1.cc:847
    break;

  case 118:
#line 315 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('+'); }
#line 1306 "gramatica.cpp" // lalr1.cc:847
    break;

  case 119:
#line 318 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('*'); }
#line 1312 "gramatica.cpp" // lalr1.cc:847
    break;

  case 120:
#line 321 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('&'); }
#line 1318 "gramatica.cpp" // lalr1.cc:847
    break;

  case 121:
#line 324 "gramatica.yy" // lalr1.cc:847
    { driver.genExp('>'); }
#line 1324 "gramatica.cpp" // lalr1.cc:847
    break;

  case 122:
#line 327 "gramatica.yy" // lalr1.cc:847
    { driver.toOperand(); }
#line 1330 "gramatica.cpp" // lalr1.cc:847
    break;

  case 123:
#line 330 "gramatica.yy" // lalr1.cc:847
    { driver.copyId(); driver.checkVar(); }
#line 1336 "gramatica.cpp" // lalr1.cc:847
    break;

  case 124:
#line 333 "gramatica.yy" // lalr1.cc:847
    { driver.genIf(); }
#line 1342 "gramatica.cpp" // lalr1.cc:847
    break;

  case 125:
#line 336 "gramatica.yy" // lalr1.cc:847
    { driver.genElse(); }
#line 1348 "gramatica.cpp" // lalr1.cc:847
    break;

  case 126:
#line 339 "gramatica.yy" // lalr1.cc:847
    { driver.genElseIf(); }
#line 1354 "gramatica.cpp" // lalr1.cc:847
    break;

  case 127:
#line 342 "gramatica.yy" // lalr1.cc:847
    { driver.startWhile(); }
#line 1360 "gramatica.cpp" // lalr1.cc:847
    break;

  case 128:
#line 345 "gramatica.yy" // lalr1.cc:847
    { driver.genWhile(); }
#line 1366 "gramatica.cpp" // lalr1.cc:847
    break;

  case 129:
#line 348 "gramatica.yy" // lalr1.cc:847
    { driver.startDo(); }
#line 1372 "gramatica.cpp" // lalr1.cc:847
    break;

  case 130:
#line 351 "gramatica.yy" // lalr1.cc:847
    { driver.startFor(); }
#line 1378 "gramatica.cpp" // lalr1.cc:847
    break;

  case 131:
#line 354 "gramatica.yy" // lalr1.cc:847
    { driver.genFor(); }
#line 1384 "gramatica.cpp" // lalr1.cc:847
    break;

  case 132:
#line 357 "gramatica.yy" // lalr1.cc:847
    { driver.saveFor(); }
#line 1390 "gramatica.cpp" // lalr1.cc:847
    break;

  case 133:
#line 360 "gramatica.yy" // lalr1.cc:847
    { driver.checkFunc(); }
#line 1396 "gramatica.cpp" // lalr1.cc:847
    break;

  case 134:
#line 363 "gramatica.yy" // lalr1.cc:847
    { driver.saveFunc(); }
#line 1402 "gramatica.cpp" // lalr1.cc:847
    break;

  case 135:
#line 366 "gramatica.yy" // lalr1.cc:847
    { driver.verifyFunc(); }
#line 1408 "gramatica.cpp" // lalr1.cc:847
    break;

  case 136:
#line 369 "gramatica.yy" // lalr1.cc:847
    { driver.genEra(); }
#line 1414 "gramatica.cpp" // lalr1.cc:847
    break;


#line 1418 "gramatica.cpp" // lalr1.cc:847
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


  const signed char Gramatica::yypact_ninf_ = -108;

  const short int Gramatica::yytable_ninf_ = -136;

  const short int
  Gramatica::yypact_[] =
  {
     199,    58,   -38,   -34,  -108,    58,   145,   -29,    24,    58,
      58,    58,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,   -24,  -108,    34,   267,  -108,   267,  -108,  -108,   -11,
      -9,  -108,    26,  -108,  -108,  -108,  -108,   -38,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,   -34,  -108,    56,  -108,
    -108,  -108,    75,  -108,  -108,  -108,  -108,    58,    22,  -108,
    -108,    14,   -34,    22,    22,    22,    22,    43,    28,  -108,
    -108,  -108,   267,  -108,  -108,    11,    58,    42,    -1,    58,
    -108,    70,  -108,  -108,  -108,  -108,  -108,  -108,    58,    53,
      21,  -108,    58,    62,   -34,  -108,  -108,  -108,    61,  -108,
      65,    87,  -108,  -108,  -108,    60,    64,  -108,  -108,    58,
    -108,   -34,   -34,  -108,    43,  -108,   -11,    67,    62,  -108,
    -108,    58,  -108,  -108,  -108,    58,  -108,  -108,  -108,    58,
      66,   220,   100,  -108,   275,    69,    -6,  -108,  -108,    43,
    -108,    22,    38,  -108,  -108,    71,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,    73,    58,    62,    14,    72,
     275,  -108,  -108,  -108,    79,    -6,   123,  -108,  -108,  -108,
      78,    76,    62,    62,    22,    58,   -38,  -108,    22,  -108,
      80,   -34,    84,  -108,  -108,  -108,  -108,  -108,    58,    26,
    -108,  -108,    22,  -108,  -108,   275,  -108,  -108,   -34,  -108,
    -108,  -108,   -34,    14,    62,  -108,    62,    80,  -108,    62,
    -108,  -108,  -108
  };

  const unsigned char
  Gramatica::yydefact_[] =
  {
       0,     0,     0,    32,   127,     0,     0,     0,     0,     0,
       0,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      21,    29,    52,     0,     3,     4,    10,    11,    19,     0,
      26,    12,    35,    13,    38,    39,    40,     0,    14,    15,
      20,    16,    17,    18,    87,    86,    83,    84,    85,    82,
     115,   117,   101,   100,    99,    81,    32,   120,    90,   118,
     119,    97,     0,   130,    26,    31,   129,     0,     0,    29,
     133,     0,    32,     0,     0,     0,     0,     0,     0,     1,
       2,     8,    10,   116,   122,     0,     0,    37,   123,     0,
     124,    88,   104,   105,   107,   106,   108,   109,     0,    92,
      94,    96,     0,     0,    32,    24,    23,    25,     0,   133,
       0,     7,    76,    77,    78,    74,     0,    28,     9,     0,
     136,    32,    32,    30,     0,    71,     0,     0,     0,   102,
     103,     0,   121,   113,   114,     0,   110,   111,   112,     0,
       0,     0,     0,   128,    63,     0,    55,     6,     5,     0,
      27,     0,     0,   126,   125,     0,   122,    98,    33,    89,
      91,    93,    95,   131,    80,     0,     0,     0,     0,     0,
      63,    59,    60,    58,     0,    55,     0,    75,    22,    68,
       0,    69,     0,     0,     0,     0,     0,    79,     0,    43,
      66,    32,     0,    53,    54,    57,    56,    67,     0,    35,
      36,    73,     0,   132,    42,     0,    64,   134,    32,    70,
      34,    72,    32,     0,     0,   134,     0,    66,    62,     0,
      41,    65,    61
  };

  const signed char
  Gramatica::yypgoto_[] =
  {
    -108,  -108,    25,  -108,   -15,    55,   -12,     5,   -57,  -108,
       3,    -2,  -108,   -48,  -108,   -61,  -108,  -108,  -108,  -108,
    -108,    -5,  -108,   -33,  -108,  -108,   -35,   -14,   -62,    13,
     -41,   -18,  -101,  -108,  -108,  -107,  -108,  -108,     1,  -108,
     -83,    20,  -108,    99,  -108,  -108,  -108,  -108,  -108,    36,
    -108,  -108,  -108,  -108,  -108,     7,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,    68,   -39,  -108,  -108
  };

  const short int
  Gramatica::yydefgoto_[] =
  {
      -1,    23,    24,   148,    25,    81,    26,    27,   107,    28,
      52,    30,    31,    66,    32,    87,   123,    33,    34,    35,
      36,    37,    38,   174,   175,   176,    39,   169,   206,    53,
     180,    41,   116,    42,    43,   142,    54,    55,   181,    57,
      58,    59,    60,    61,   131,    98,   139,   135,    62,    84,
      89,    99,   100,    91,   160,   119,   126,   128,   183,   182,
      67,   167,   103,   102,   186,   212,   108,   214,    85,   152
  };

  const short int
  Gramatica::yytable_[] =
  {
      64,    71,    56,    29,    70,    29,    68,    63,    90,    80,
      74,    75,    76,    40,    82,   132,   111,   112,   113,   114,
      21,   158,    65,   155,   110,   171,   172,    29,    77,    29,
      72,   125,    73,    78,    79,    64,    83,    40,    86,    40,
      88,  -135,    44,    45,    46,    47,    48,    49,   177,   115,
     173,   124,   161,   122,   105,   106,   143,   136,   137,   138,
     189,   120,    44,    45,    46,    47,    48,    49,   104,   109,
      82,    50,    69,   153,   154,   199,   200,   105,   106,    44,
      45,    46,    47,    48,    49,    29,   117,   121,    51,   179,
     127,    50,   133,   134,   178,    40,    21,    92,    93,    94,
      95,    96,    97,   140,   129,   130,     8,   218,    51,   220,
     141,   144,   222,   146,   149,   166,    21,   150,   157,   170,
     151,   163,   187,   191,   184,    51,   165,   201,   193,   197,
     198,   204,   159,    21,   205,   208,   147,   118,   210,   168,
       6,   195,   194,   207,    29,   211,    12,    13,    14,    15,
      16,    17,    18,    19,    40,   221,   192,   209,   196,   162,
     215,   101,   156,   185,   216,   168,   190,   188,    12,    13,
      14,    15,    16,    17,    18,    19,   219,   145,     0,     0,
       0,     0,    22,     0,    64,     0,   202,     0,     0,    29,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,    69,    22,     0,     0,     0,     0,     1,
       0,   217,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       1,     0,     0,     2,     3,     4,     5,     6,     7,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,    20,     0,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
       0,     0,     0,     0,     0,     0,    20,     1,    21,    22,
       2,     3,     4,     5,     6,     7,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,    21,    22,     0,     0,     0,
       0,     0,     0,     0,    22
  };

  const short int
  Gramatica::yycheck_[] =
  {
       2,     6,     1,     0,     6,     2,     5,     2,    56,    24,
       9,    10,    11,     0,    26,    98,    73,    74,    75,    76,
      58,   128,    56,   124,    72,    31,    32,    24,    52,    26,
      59,    88,     8,    57,     0,    37,    47,    24,    12,    26,
      37,    50,     4,     5,     6,     7,     8,     9,   149,     6,
      56,    52,   135,    11,    55,    56,   104,    36,    37,    38,
     167,    50,     4,     5,     6,     7,     8,     9,    67,    71,
      82,    33,    58,   121,   122,   182,   183,    55,    56,     4,
       5,     6,     7,     8,     9,    82,    58,    86,    50,    51,
      89,    33,    39,    40,   151,    82,    58,    41,    42,    43,
      44,    45,    46,   102,    34,    35,    19,   214,    50,   216,
      48,    50,   219,    48,    54,    15,    58,    53,    51,    50,
     119,    55,    49,    51,    53,    50,   141,   184,    49,    51,
      54,   188,   131,    58,    54,    51,   111,    82,   199,   144,
      17,   176,   175,   191,   141,   202,    23,    24,    25,    26,
      27,    28,    29,    30,   141,   217,   170,   198,   176,   139,
     208,    62,   126,   156,   212,   170,   168,   166,    23,    24,
      25,    26,    27,    28,    29,    30,   215,   109,    -1,    -1,
      -1,    -1,    59,    -1,   186,    -1,   185,    -1,    -1,   186,
      -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    10,
      -1,   213,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    10,    58,    59,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59
  };

  const unsigned char
  Gramatica::yystos_[] =
  {
       0,    10,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      56,    58,    59,    61,    62,    64,    66,    67,    69,    70,
      71,    72,    74,    77,    78,    79,    80,    81,    82,    86,
      89,    91,    93,    94,     4,     5,     6,     7,     8,     9,
      33,    50,    70,    89,    96,    97,    98,    99,   100,   101,
     102,   103,   108,    67,    71,    56,    73,   120,    98,    58,
      71,    81,    59,     8,    98,    98,    98,    52,    57,     0,
      64,    65,    66,    47,   109,   128,    12,    75,    70,   110,
      73,   113,    41,    42,    43,    44,    45,    46,   105,   111,
     112,   103,   123,   122,    98,    55,    56,    68,   126,    71,
      73,    68,    68,    68,    68,     6,    92,    58,    65,   115,
      50,    98,    11,    76,    52,    68,   116,    98,   117,    34,
      35,   104,   100,    39,    40,   107,    36,    37,    38,   106,
      98,    48,    95,    73,    50,   126,    48,    62,    63,    54,
      53,    98,   129,    73,    73,    92,   109,    51,    95,    98,
     114,   100,   101,    55,    49,    64,    15,   121,    81,    87,
      50,    31,    32,    56,    83,    84,    85,    92,    68,    51,
      90,    98,   119,   118,    53,   115,   124,    49,    98,    95,
      71,    51,    87,    49,    83,    86,    91,    51,    54,    95,
      95,    68,    98,    67,    68,    54,    88,    73,    51,    90,
      75,    68,   125,    81,   127,    73,    73,    71,    95,   127,
      95,    88,    95
  };

  const unsigned char
  Gramatica::yyr1_[] =
  {
       0,    60,    61,    61,    61,    62,    63,    63,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    68,    68,    69,    70,    70,    70,    71,
      72,    73,    73,    74,    75,    75,    76,    76,    77,    77,
      77,    78,    79,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    83,    83,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    92,    92,    93,    93,    94,    95,
      95,    96,    96,    96,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129
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
       1,    10,     9,     0,     3,     4,     0,     6,     5,     1,
       3,     3,     7,     6,     1,     3,     3,     3,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     4,     2,     4,     2,     4,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
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
  "delimiter", "return", "id", "simple_id", "conditional", "maybenl", "if",
  "elseif", "else", "loop", "for", "do", "while", "type", "class",
  "class_dec", "class_st", "accesor", "function", "args", "moreargs",
  "func_call", "call_args", "var", "array_dim", "print", "read", "block",
  "var_const", "boolean", "expresion", "exp", "e", "term", "fact", "f",
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
     225,   228,   229,   230,   233,   234,   237,   238,   241,   244,
     245,   248,   249,   250,   251,   252,   255,   256,   259,   260,
     263,   264,   267,   268,   271,   272,   275,   276,   279,   280,
     281,   282,   285,   286,   289,   290,   291,   292,   293,   294,
     297,   298,   299,   302,   303,   306,   309,   312,   315,   318,
     321,   324,   327,   330,   333,   336,   339,   342,   345,   348,
     351,   354,   357,   360,   363,   366,   369
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
      55,    56,    57,    58,    59
    };
    const unsigned int user_token_number_max_ = 314;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // ss
#line 2039 "gramatica.cpp" // lalr1.cc:1155
#line 372 "gramatica.yy" // lalr1.cc:1156


void ss::Gramatica::error(const Gramatica::location_type& l, const std::string& m)
{
	driver.error(l, m);
}
