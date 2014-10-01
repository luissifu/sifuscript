/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "gramatica.y" /* yacc.c:339  */

#include <cstdio>
#include <iostream>
using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
 
void yyerror(const char *s);

#line 78 "gramatica.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "gramatica.tab.h".  */
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
#line 14 "gramatica.y" /* yacc.c:355  */

	int token;

#line 180 "gramatica.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "gramatica.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   346

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    34,    35,    38,    41,    42,    45,    48,
      49,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    64,    67,    68,    71,    74,    75,    76,    79,    82,
      83,    86,    87,    88,    91,    92,    93,    96,    97,    98,
     101,   102,   105,   106,   109,   110,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   124,   125,   128,   129,   132,
     133,   136,   137,   140,   141,   142,   143,   146,   147,   150,
     151,   154,   155,   158,   159,   162,   163,   166,   169,   170,
     173,   174,   175,   176,   177,   178,   181,   182,   185,   186,
     189,   190,   193,   194,   197,   198,   201,   202,   205,   206,
     209,   210,   213,   214,   217,   218,   219,   222,   223,   226,
     227,   228,   229,   230,   231,   234,   235,   236,   239,   240,
     243,   246
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONST_NULL", "CONST_FALSE",
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
  "assign", "delimiter", "return", "id", "conditional", "if", "elseif",
  "else", "loop", "for", "do", "while", "type", "class", "class_dec",
  "class_st", "accesor", "function", "args", "moreargs", "func_call",
  "call_args", "var", "print", "block", "var_const", "boolean", "list",
  "list_elem", "list_e", "expresion", "exp", "e", "term", "fact", "f",
  "rel_op", "comp_op", "mult_op", "add_op", "neg_op", "ass_op", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -133

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-133)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     205,    46,     5,   -27,    46,   186,   289,   -47,     8,   186,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,    40,
     -14,    57,   269,  -133,   269,  -133,  -133,    37,  -133,    77,
    -133,  -133,  -133,  -133,     5,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,    46,   125,    45,
     -14,  -133,  -133,  -133,  -133,   -18,    43,   144,    12,    55,
    -133,   151,    46,   224,    58,    90,   -17,    44,    59,  -133,
      50,   -12,    44,    44,    17,   102,    54,  -133,  -133,  -133,
     269,  -133,    46,    14,   100,   -36,    64,  -133,  -133,  -133,
      63,    65,    58,  -133,  -133,  -133,    46,  -133,  -133,  -133,
    -133,  -133,  -133,    46,  -133,  -133,  -133,    46,  -133,  -133,
      46,  -133,    62,  -133,    72,   106,    46,    58,  -133,  -133,
    -133,  -133,   242,    74,    70,    79,   104,  -133,    44,    78,
      83,    75,  -133,  -133,    44,    58,    77,    25,  -133,  -133,
      46,  -133,  -133,   160,  -133,  -133,  -133,  -133,  -133,    46,
    -133,    46,    44,  -133,    80,    88,   242,  -133,  -133,    91,
      70,   281,    70,  -133,  -133,  -133,    44,   186,  -133,  -133,
      77,  -133,    58,  -133,    44,  -133,    26,    44,  -133,    89,
      27,    94,  -133,  -133,  -133,  -133,    97,  -133,  -133,  -133,
    -133,  -133,    58,  -133,  -133,   242,  -133,    58,  -133,    32,
    -133,  -133,    92,  -133,    58,  -133,    89,  -133,  -133
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,    48,    49,    50,    51,    52,    53,    20,    25,
      54,     0,     3,     4,    10,    11,    18,     0,    12,    33,
      13,    37,    38,    39,     0,    14,    15,    19,    16,    17,
      87,    86,    82,    83,    84,    81,   120,     0,     0,    25,
       0,   106,   105,    80,    85,     0,    94,    96,    98,   100,
     103,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     8,
      10,   121,     0,     0,    36,     0,     0,    89,    93,    92,
       0,    90,     0,    30,   107,   108,     0,   109,   110,   112,
     111,   113,   114,     0,   115,   116,   117,     0,   118,   119,
       0,   102,     0,    79,     0,     0,     0,     0,    45,    23,
      22,    24,    68,     0,    58,     0,     7,    77,     0,     0,
      73,     0,    27,     9,     0,     0,    33,     0,    28,    75,
       0,   104,    88,     0,    29,    95,    97,    99,   101,     0,
      78,     0,     0,    44,     0,     0,    68,    61,    62,     0,
      58,     0,    58,     6,     5,    72,     0,     0,    26,    21,
      33,    32,     0,    35,     0,    91,     0,     0,    43,    70,
       0,     0,    56,    57,    60,    59,     0,    71,    74,    31,
      34,    76,     0,    41,    42,     0,    67,     0,    66,     0,
      55,    40,     0,    65,     0,    64,    70,    63,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,    20,  -133,    -7,    69,   -22,   159,   -65,  -133,
      11,  -133,  -133,  -132,  -133,  -133,  -133,  -133,  -133,    -6,
    -133,  -130,  -133,  -133,     1,    15,   -34,  -133,     3,    13,
    -133,   -52,    -4,  -133,  -133,    30,  -133,     2,    81,   -64,
      68,  -133,   118,  -133,  -133,  -133,  -133,  -133,    95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,   164,    23,    79,    24,    25,   121,    26,
      51,    28,    29,    84,   138,    30,    31,    32,    33,    34,
      35,   159,   160,   161,    36,   155,   196,    37,   129,    38,
      39,    65,    52,    53,    54,    90,    91,    55,    56,    57,
      58,    59,    60,    96,   103,   107,   110,    61,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      70,    67,    80,    93,   171,    73,    66,   126,   127,    81,
      71,    27,   115,    27,   118,    78,    72,   119,   120,    63,
     139,    40,    41,    42,    43,    44,    45,    64,    63,    63,
     183,   136,   186,    27,   124,    27,    92,   117,   189,   146,
     144,    76,   125,   147,    89,    85,   104,   105,   106,    86,
      40,    41,    42,    43,    44,    45,   114,    77,    80,    88,
      63,    49,    50,   165,   112,   153,   128,    48,   135,   169,
     130,    63,    63,    63,    27,    94,    95,    46,    63,   172,
     192,   197,    81,   170,   134,   173,   204,   178,    74,    83,
      75,    27,   108,   109,    47,    75,    48,   119,   120,   157,
     158,   187,    49,    50,    63,   116,   123,   122,   131,   191,
     132,   137,   194,   141,   142,   149,   154,   143,   152,   150,
     190,   151,   156,     8,   193,   162,   168,   166,   198,    40,
      41,    42,    43,    44,    45,   167,   179,   180,   182,    89,
     201,   195,   174,   199,   200,   203,   163,   205,   206,   133,
     154,   176,   207,   177,    88,    40,    41,    42,    43,    44,
      45,    62,   184,   130,    40,    41,    42,    43,    44,    45,
     188,   181,   208,   175,   185,    48,    87,   145,   148,   111,
     140,    49,    50,    97,    98,    99,   100,   101,   102,   202,
      40,    41,    42,    43,    44,    45,     0,     0,     0,    47,
       0,    48,     0,     0,     0,     0,     0,    49,    50,     0,
      48,     0,     0,     0,     0,     1,    49,    50,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     1,     0,    48,     2,     3,     4,
       5,     6,     7,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,    18,
       0,    19,    20,    10,    11,    12,    13,    14,    15,    16,
      17,   113,     0,     0,     0,     0,     0,     0,    18,     1,
      19,    20,     2,     3,     4,     5,     6,     7,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     6,    69,
       0,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      10,    11,    12,    13,    14,    15,    16,    17,     0,     0,
       0,     0,     0,    18,     0,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,     0,     0,    68,    69
};

static const yytype_int16 yycheck[] =
{
       6,     5,    24,    55,   136,     9,     4,    72,    73,    45,
      57,     0,    64,     2,    66,    22,     8,    53,    54,    46,
      85,     4,     5,     6,     7,     8,     9,    54,    46,    46,
     160,    83,   162,    22,    46,    24,    54,    54,   170,   103,
      92,    55,    54,   107,    48,    34,    34,    35,    36,    47,
       4,     5,     6,     7,     8,     9,    63,     0,    80,    48,
      46,    56,    57,   128,    62,   117,    49,    50,    54,   134,
      74,    46,    46,    46,    63,    32,    33,    31,    46,    54,
      54,    54,    45,   135,    82,   137,    54,   152,    48,    12,
      50,    80,    37,    38,    48,    50,    50,    53,    54,    29,
      30,   166,    56,    57,    46,    15,    56,    48,     6,   174,
      56,    11,   177,    49,    51,    53,   122,    52,   116,    47,
     172,    15,    48,    19,   176,    46,    51,    49,   180,     4,
       5,     6,     7,     8,     9,    52,    56,    49,    47,   143,
     192,    52,   140,    49,    47,   197,   126,   199,    56,    80,
     156,   149,   204,   151,   143,     4,     5,     6,     7,     8,
       9,     2,   161,   167,     4,     5,     6,     7,     8,     9,
     167,   156,   206,   143,   161,    50,    51,    96,   110,    61,
      85,    56,    57,    39,    40,    41,    42,    43,    44,   195,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      50,    -1,    -1,    -1,    -1,    10,    56,    57,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    10,    -1,    50,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    21,    22,    23,    24,    25,    26,    27,
      28,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    10,
      56,    57,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    17,    57,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    54,    56,
      57,    59,    60,    62,    64,    65,    67,    68,    69,    70,
      73,    74,    75,    76,    77,    78,    82,    85,    87,    88,
       4,     5,     6,     7,     8,     9,    31,    48,    50,    56,
      57,    68,    90,    91,    92,    95,    96,    97,    98,    99,
     100,   105,    65,    46,    54,    89,    95,    90,    56,    57,
      77,    57,     8,    90,    48,    50,    55,     0,    62,    63,
      64,    45,   106,    12,    71,    68,    95,    51,    68,    90,
      93,    94,    54,    89,    32,    33,   101,    39,    40,    41,
      42,    43,    44,   102,    34,    35,    36,   103,    37,    38,
     104,   100,    95,    47,    62,    89,    15,    54,    89,    53,
      54,    66,    48,    56,    46,    54,    66,    66,    49,    86,
      90,     6,    56,    63,    95,    54,    89,    11,    72,    66,
     106,    49,    51,    52,    89,    96,    97,    97,    98,    53,
      47,    15,    95,    89,    77,    83,    48,    29,    30,    79,
      80,    81,    46,    60,    61,    66,    49,    52,    51,    66,
      89,    71,    54,    89,    95,    93,    95,    95,    66,    56,
      49,    83,    47,    79,    82,    87,    79,    66,    86,    71,
      89,    66,    54,    89,    66,    52,    84,    54,    89,    49,
      47,    89,    77,    89,    54,    89,    56,    89,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    60,    61,    61,    62,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    66,    66,    67,    68,    68,    68,    69,    70,
      70,    71,    71,    71,    72,    72,    72,    73,    73,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    89,    89,
      90,    90,    90,    90,    90,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   101,   101,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     105,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     4,     1,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     3,     1,     4,     3,     3,     4,
       3,     4,     3,     0,     3,     2,     0,     1,     1,     1,
       7,     6,     6,     5,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     5,     2,     0,     2,
       2,     1,     1,     8,     7,     7,     6,     3,     0,     4,
       0,     5,     4,     1,     3,     3,     5,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     3,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 33 "gramatica.y" /* yacc.c:1646  */
    { cout << "program" << endl; }
#line 1459 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 34 "gramatica.y" /* yacc.c:1646  */
    { cout << "program" << endl; }
#line 1465 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "gramatica.y" /* yacc.c:1646  */
    { cout << "program" << endl; }
#line 1471 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 38 "gramatica.y" /* yacc.c:1646  */
    { cout << "imports" << endl; }
#line 1477 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1483 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1489 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "gramatica.y" /* yacc.c:1646  */
    { cout << "statelist" << endl; }
#line 1495 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 48 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1501 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 49 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1507 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1513 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1519 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1525 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1531 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 56 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1537 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 57 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1543 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 58 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1549 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 59 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1555 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 60 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1561 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 61 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1567 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 64 "gramatica.y" /* yacc.c:1646  */
    { cout << "assign" << endl; }
#line 1573 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 67 "gramatica.y" /* yacc.c:1646  */
    { cout << "delim" << endl; }
#line 1579 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 68 "gramatica.y" /* yacc.c:1646  */
    { cout << "delim" << endl; }
#line 1585 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 71 "gramatica.y" /* yacc.c:1646  */
    { cout << "return" << endl; }
#line 1591 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 74 "gramatica.y" /* yacc.c:1646  */
    { cout << "id" << endl; }
#line 1597 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 75 "gramatica.y" /* yacc.c:1646  */
    { cout << "id" << endl; }
#line 1603 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 76 "gramatica.y" /* yacc.c:1646  */
    { cout << "id" << endl; }
#line 1609 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 79 "gramatica.y" /* yacc.c:1646  */
    { cout << "cond" << endl; }
#line 1615 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 82 "gramatica.y" /* yacc.c:1646  */
    { cout << "if" << endl; }
#line 1621 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 83 "gramatica.y" /* yacc.c:1646  */
    { cout << "if" << endl; }
#line 1627 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 86 "gramatica.y" /* yacc.c:1646  */
    { cout << "else if" << endl; }
#line 1633 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 87 "gramatica.y" /* yacc.c:1646  */
    { cout << "else if" << endl; }
#line 1639 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 88 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1645 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 91 "gramatica.y" /* yacc.c:1646  */
    { cout << "else" << endl; }
#line 1651 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 92 "gramatica.y" /* yacc.c:1646  */
    { cout << "else" << endl; }
#line 1657 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 93 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1663 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 96 "gramatica.y" /* yacc.c:1646  */
    { cout << "loop" << endl; }
#line 1669 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 97 "gramatica.y" /* yacc.c:1646  */
    { cout << "loop" << endl; }
#line 1675 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 98 "gramatica.y" /* yacc.c:1646  */
    { cout << "loop" << endl; }
#line 1681 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 101 "gramatica.y" /* yacc.c:1646  */
    { cout << "for" << endl; }
#line 1687 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 102 "gramatica.y" /* yacc.c:1646  */
    { cout << "for" << endl; }
#line 1693 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 105 "gramatica.y" /* yacc.c:1646  */
    { cout << "do" << endl; }
#line 1699 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 106 "gramatica.y" /* yacc.c:1646  */
    { cout << "do" << endl; }
#line 1705 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 109 "gramatica.y" /* yacc.c:1646  */
    { cout << "while" << endl; }
#line 1711 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 110 "gramatica.y" /* yacc.c:1646  */
    { cout << "while" << endl; }
#line 1717 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 113 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1723 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 114 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1729 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 115 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1735 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 116 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1741 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 117 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1747 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 118 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1753 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 119 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1759 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 120 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1765 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 121 "gramatica.y" /* yacc.c:1646  */
    { cout << "class type" << endl; }
#line 1771 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 124 "gramatica.y" /* yacc.c:1646  */
    { cout << "class" << endl; }
#line 1777 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 125 "gramatica.y" /* yacc.c:1646  */
    { cout << "class" << endl; }
#line 1783 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 128 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1789 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 132 "gramatica.y" /* yacc.c:1646  */
    { cout << "class var" << endl; }
#line 1795 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 133 "gramatica.y" /* yacc.c:1646  */
    { cout << "class func" << endl; }
#line 1801 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 136 "gramatica.y" /* yacc.c:1646  */
    { cout << "acc priv" << endl; }
#line 1807 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 137 "gramatica.y" /* yacc.c:1646  */
    { cout << "acc pub" << endl; }
#line 1813 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 140 "gramatica.y" /* yacc.c:1646  */
    { cout << "func" << endl; }
#line 1819 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 141 "gramatica.y" /* yacc.c:1646  */
    { cout << "func" << endl; }
#line 1825 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 142 "gramatica.y" /* yacc.c:1646  */
    { cout << "func" << endl; }
#line 1831 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 143 "gramatica.y" /* yacc.c:1646  */
    { cout << "func" << endl; }
#line 1837 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 146 "gramatica.y" /* yacc.c:1646  */
    { cout << "args" << endl; }
#line 1843 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 147 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1849 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 150 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1855 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 151 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1861 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 154 "gramatica.y" /* yacc.c:1646  */
    { cout << "func call" << endl; }
#line 1867 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "gramatica.y" /* yacc.c:1646  */
    { cout << "func call" << endl; }
#line 1873 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "gramatica.y" /* yacc.c:1646  */
    { cout << "args" << endl; }
#line 1879 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 159 "gramatica.y" /* yacc.c:1646  */
    { cout << "args" << endl; }
#line 1885 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 162 "gramatica.y" /* yacc.c:1646  */
    { cout << "var" << endl; }
#line 1891 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 163 "gramatica.y" /* yacc.c:1646  */
    { cout << "var" << endl; }
#line 1897 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 166 "gramatica.y" /* yacc.c:1646  */
    { cout << "print" << endl; }
#line 1903 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 169 "gramatica.y" /* yacc.c:1646  */
    { cout << "block" << endl; }
#line 1909 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 170 "gramatica.y" /* yacc.c:1646  */
    { cout << "block" << endl; }
#line 1915 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 173 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1921 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 174 "gramatica.y" /* yacc.c:1646  */
    { cout << "const" << endl; }
#line 1927 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 175 "gramatica.y" /* yacc.c:1646  */
    { cout << "const" << endl; }
#line 1933 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 176 "gramatica.y" /* yacc.c:1646  */
    { cout << "const" << endl; }
#line 1939 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 177 "gramatica.y" /* yacc.c:1646  */
    { cout << "const" << endl; }
#line 1945 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 178 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1951 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 181 "gramatica.y" /* yacc.c:1646  */
    { cout << "true" << endl; }
#line 1957 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 182 "gramatica.y" /* yacc.c:1646  */
    { cout << "false" << endl; }
#line 1963 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 185 "gramatica.y" /* yacc.c:1646  */
    { cout << "list" << endl; }
#line 1969 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "gramatica.y" /* yacc.c:1646  */
    { cout << "list" << endl; }
#line 1975 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 189 "gramatica.y" /* yacc.c:1646  */
    { cout << "list elem" << endl; }
#line 1981 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 190 "gramatica.y" /* yacc.c:1646  */
    { cout << "list elem" << endl; }
#line 1987 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 193 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1993 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1999 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 197 "gramatica.y" /* yacc.c:1646  */
    { cout << "expresion" << endl; }
#line 2005 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 198 "gramatica.y" /* yacc.c:1646  */
    { cout << "expresion" << endl; }
#line 2011 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 201 "gramatica.y" /* yacc.c:1646  */
    { cout << "exp" << endl; }
#line 2017 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 202 "gramatica.y" /* yacc.c:1646  */
    { cout << "exp" << endl; }
#line 2023 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 205 "gramatica.y" /* yacc.c:1646  */
    { cout << "e" << endl; }
#line 2029 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 206 "gramatica.y" /* yacc.c:1646  */
    { cout << "e" << endl; }
#line 2035 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 209 "gramatica.y" /* yacc.c:1646  */
    { cout << "term" << endl; }
#line 2041 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 210 "gramatica.y" /* yacc.c:1646  */
    { cout << "term" << endl; }
#line 2047 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 213 "gramatica.y" /* yacc.c:1646  */
    { cout << "fact" << endl; }
#line 2053 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 214 "gramatica.y" /* yacc.c:1646  */
    { cout << "fact" << endl; }
#line 2059 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 217 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 2065 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 218 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 2071 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 219 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 2077 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 222 "gramatica.y" /* yacc.c:1646  */
    { cout << "rel op" << endl; }
#line 2083 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 223 "gramatica.y" /* yacc.c:1646  */
    { cout << "rel op" << endl; }
#line 2089 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 226 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2095 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 227 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2101 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 228 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2107 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 229 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2113 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 230 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2119 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 231 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2125 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 234 "gramatica.y" /* yacc.c:1646  */
    { cout << "mult op" << endl; }
#line 2131 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 235 "gramatica.y" /* yacc.c:1646  */
    { cout << "mult op" << endl; }
#line 2137 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 236 "gramatica.y" /* yacc.c:1646  */
    { cout << "mult op" << endl; }
#line 2143 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 239 "gramatica.y" /* yacc.c:1646  */
    { cout << "add op" << endl; }
#line 2149 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 240 "gramatica.y" /* yacc.c:1646  */
    { cout << "add op" << endl; }
#line 2155 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 243 "gramatica.y" /* yacc.c:1646  */
    { cout << "neg op" << endl; }
#line 2161 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 246 "gramatica.y" /* yacc.c:1646  */
    { cout << "ass op" << endl; }
#line 2167 "gramatica.tab.c" /* yacc.c:1646  */
    break;


#line 2171 "gramatica.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
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
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 249 "gramatica.y" /* yacc.c:1906  */

int main() {
	do {
		yyparse();
	} while (!feof(yyin));
}

void yyerror(const char *s) {
	cout << "Error: " << s << endl;
	exit(-1);
}
