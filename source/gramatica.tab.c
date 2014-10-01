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
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

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
      83,    86,    89,    90,    93,    94,    97,    98,    99,   102,
     105,   108,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   122,   125,   126,   129,   130,   131,   134,   135,   138,
     139,   142,   143,   146,   147,   150,   151,   154,   155,   158,
     159,   162,   165,   166,   169,   170,   171,   172,   173,   174,
     177,   178,   181,   182,   185,   186,   189,   190,   193,   194,
     197,   198,   201,   202,   205,   206,   209,   210,   213,   214,
     215,   218,   219,   222,   223,   224,   225,   226,   227,   230,
     231,   232,   235,   236,   239,   242
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
  "assign", "delimiter", "return", "id", "conditional", "maybenl", "if",
  "elseif", "else", "loop", "for", "do", "while", "type", "class",
  "class_dec", "class_st", "accesor", "function", "args", "moreargs",
  "func_call", "call_args", "var", "print", "block", "var_const",
  "boolean", "list", "list_elem", "list_e", "expresion", "exp", "e",
  "term", "fact", "f", "rel_op", "comp_op", "mult_op", "add_op", "neg_op",
  "ass_op", YY_NULLPTR
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

#define YYPACT_NINF -79

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-79)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
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
static const yytype_int16 yypgoto[] =
{
     -79,   -79,    26,   -79,    -9,    85,   -20,   159,   -61,   -79,
       5,   -79,   -44,   -79,   -11,   -79,   -79,   -79,   -79,   -79,
      -6,   -79,    -5,   -79,   -79,    -7,    20,   -23,   -79,    17,
       0,   -79,   -78,   -45,   -79,   -79,    43,   -79,    -3,    80,
     -47,    70,   -79,   119,   -79,   -79,   -79,   -79,   -79,    96
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,   150,    23,    76,    24,    25,   114,    26,
      50,    28,    63,    29,    81,   129,    30,    31,    32,    33,
      34,    35,   169,   170,   171,    36,   146,   180,    37,   121,
      38,    39,   110,    51,    52,    53,    87,    88,    54,    55,
      56,    57,    58,    59,    92,    99,   103,   106,    60,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
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

static const yytype_int16 yycheck[] =
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

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
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

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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
#line 1448 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 34 "gramatica.y" /* yacc.c:1646  */
    { cout << "program" << endl; }
#line 1454 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "gramatica.y" /* yacc.c:1646  */
    { cout << "program" << endl; }
#line 1460 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 38 "gramatica.y" /* yacc.c:1646  */
    { cout << "imports" << endl; }
#line 1466 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1472 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1478 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "gramatica.y" /* yacc.c:1646  */
    { cout << "statelist" << endl; }
#line 1484 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 48 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1490 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 49 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1496 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1502 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1508 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1514 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1520 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 56 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1526 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 57 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1532 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 58 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1538 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 59 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1544 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 60 "gramatica.y" /* yacc.c:1646  */
    { cout << "state" << endl; }
#line 1550 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 61 "gramatica.y" /* yacc.c:1646  */
    { cout << endl; }
#line 1556 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 64 "gramatica.y" /* yacc.c:1646  */
    { cout << "assign" << endl; }
#line 1562 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 67 "gramatica.y" /* yacc.c:1646  */
    { cout << "delim" << endl; }
#line 1568 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 68 "gramatica.y" /* yacc.c:1646  */
    { cout << "delim" << endl; }
#line 1574 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 71 "gramatica.y" /* yacc.c:1646  */
    { cout << "return" << endl; }
#line 1580 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 74 "gramatica.y" /* yacc.c:1646  */
    { cout << "id" << endl; }
#line 1586 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 75 "gramatica.y" /* yacc.c:1646  */
    { cout << "id" << endl; }
#line 1592 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 76 "gramatica.y" /* yacc.c:1646  */
    { cout << "id" << endl; }
#line 1598 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 79 "gramatica.y" /* yacc.c:1646  */
    { cout << "cond" << endl; }
#line 1604 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 82 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1610 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 83 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1616 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 86 "gramatica.y" /* yacc.c:1646  */
    { cout << "if" << endl; }
#line 1622 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 89 "gramatica.y" /* yacc.c:1646  */
    { cout << "else if" << endl; }
#line 1628 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 90 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1634 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 93 "gramatica.y" /* yacc.c:1646  */
    { cout << "else" << endl; }
#line 1640 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 94 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1646 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 97 "gramatica.y" /* yacc.c:1646  */
    { cout << "loop" << endl; }
#line 1652 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 98 "gramatica.y" /* yacc.c:1646  */
    { cout << "loop" << endl; }
#line 1658 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 99 "gramatica.y" /* yacc.c:1646  */
    { cout << "loop" << endl; }
#line 1664 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 102 "gramatica.y" /* yacc.c:1646  */
    { cout << "for" << endl; }
#line 1670 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "gramatica.y" /* yacc.c:1646  */
    { cout << "do" << endl; }
#line 1676 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "gramatica.y" /* yacc.c:1646  */
    { cout << "while" << endl; }
#line 1682 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 111 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1688 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 112 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1694 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 113 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1700 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 114 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1706 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 115 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1712 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 116 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1718 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 117 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1724 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 118 "gramatica.y" /* yacc.c:1646  */
    { cout << "type" << endl; }
#line 1730 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 119 "gramatica.y" /* yacc.c:1646  */
    { cout << "class type" << endl; }
#line 1736 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 122 "gramatica.y" /* yacc.c:1646  */
    { cout << "class" << endl; }
#line 1742 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 125 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1748 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 129 "gramatica.y" /* yacc.c:1646  */
    { cout << "class var" << endl; }
#line 1754 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 130 "gramatica.y" /* yacc.c:1646  */
    { cout << "class func" << endl; }
#line 1760 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 131 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1766 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 134 "gramatica.y" /* yacc.c:1646  */
    { cout << "acc priv" << endl; }
#line 1772 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "gramatica.y" /* yacc.c:1646  */
    { cout << "acc pub" << endl; }
#line 1778 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 138 "gramatica.y" /* yacc.c:1646  */
    { cout << "func" << endl; }
#line 1784 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "gramatica.y" /* yacc.c:1646  */
    { cout << "func" << endl; }
#line 1790 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "gramatica.y" /* yacc.c:1646  */
    { cout << "args" << endl; }
#line 1796 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1802 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 146 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1808 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 147 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1814 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 150 "gramatica.y" /* yacc.c:1646  */
    { cout << "func call" << endl; }
#line 1820 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 151 "gramatica.y" /* yacc.c:1646  */
    { cout << "func call" << endl; }
#line 1826 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 154 "gramatica.y" /* yacc.c:1646  */
    { cout << "args" << endl; }
#line 1832 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 155 "gramatica.y" /* yacc.c:1646  */
    { cout << "args" << endl; }
#line 1838 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 158 "gramatica.y" /* yacc.c:1646  */
    { cout << "var" << endl; }
#line 1844 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 159 "gramatica.y" /* yacc.c:1646  */
    { cout << "var" << endl; }
#line 1850 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 162 "gramatica.y" /* yacc.c:1646  */
    { cout << "print" << endl; }
#line 1856 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 165 "gramatica.y" /* yacc.c:1646  */
    { cout << "block" << endl; }
#line 1862 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 166 "gramatica.y" /* yacc.c:1646  */
    { cout << "block" << endl; }
#line 1868 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 169 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1874 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 170 "gramatica.y" /* yacc.c:1646  */
    { cout << "const" << endl; }
#line 1880 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 171 "gramatica.y" /* yacc.c:1646  */
    { cout << "const" << endl; }
#line 1886 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 172 "gramatica.y" /* yacc.c:1646  */
    { cout << "const" << endl; }
#line 1892 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 173 "gramatica.y" /* yacc.c:1646  */
    { cout << "const" << endl; }
#line 1898 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 174 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1904 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 177 "gramatica.y" /* yacc.c:1646  */
    { cout << "true" << endl; }
#line 1910 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 178 "gramatica.y" /* yacc.c:1646  */
    { cout << "false" << endl; }
#line 1916 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 181 "gramatica.y" /* yacc.c:1646  */
    { cout << "list" << endl; }
#line 1922 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 182 "gramatica.y" /* yacc.c:1646  */
    { cout << "list" << endl; }
#line 1928 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 185 "gramatica.y" /* yacc.c:1646  */
    { cout << "list elem" << endl; }
#line 1934 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 186 "gramatica.y" /* yacc.c:1646  */
    { cout << "list elem" << endl; }
#line 1940 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 189 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1946 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 190 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 1952 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 193 "gramatica.y" /* yacc.c:1646  */
    { cout << "expresion" << endl; }
#line 1958 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 194 "gramatica.y" /* yacc.c:1646  */
    { cout << "expresion" << endl; }
#line 1964 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 197 "gramatica.y" /* yacc.c:1646  */
    { cout << "exp" << endl; }
#line 1970 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 198 "gramatica.y" /* yacc.c:1646  */
    { cout << "exp" << endl; }
#line 1976 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 201 "gramatica.y" /* yacc.c:1646  */
    { cout << "e" << endl; }
#line 1982 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 202 "gramatica.y" /* yacc.c:1646  */
    { cout << "e" << endl; }
#line 1988 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 205 "gramatica.y" /* yacc.c:1646  */
    { cout << "term" << endl; }
#line 1994 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 206 "gramatica.y" /* yacc.c:1646  */
    { cout << "term" << endl; }
#line 2000 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 209 "gramatica.y" /* yacc.c:1646  */
    { cout << "fact" << endl; }
#line 2006 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 210 "gramatica.y" /* yacc.c:1646  */
    { cout << "fact" << endl; }
#line 2012 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 213 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 2018 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 214 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 2024 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 215 "gramatica.y" /* yacc.c:1646  */
    { ; }
#line 2030 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 218 "gramatica.y" /* yacc.c:1646  */
    { cout << "rel op" << endl; }
#line 2036 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 219 "gramatica.y" /* yacc.c:1646  */
    { cout << "rel op" << endl; }
#line 2042 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 222 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2048 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 223 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2054 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 224 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2060 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 225 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2066 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 226 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2072 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 227 "gramatica.y" /* yacc.c:1646  */
    { cout << "comp op" << endl; }
#line 2078 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 230 "gramatica.y" /* yacc.c:1646  */
    { cout << "mult op" << endl; }
#line 2084 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 231 "gramatica.y" /* yacc.c:1646  */
    { cout << "mult op" << endl; }
#line 2090 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 232 "gramatica.y" /* yacc.c:1646  */
    { cout << "mult op" << endl; }
#line 2096 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 235 "gramatica.y" /* yacc.c:1646  */
    { cout << "add op" << endl; }
#line 2102 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 236 "gramatica.y" /* yacc.c:1646  */
    { cout << "add op" << endl; }
#line 2108 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 239 "gramatica.y" /* yacc.c:1646  */
    { cout << "neg op" << endl; }
#line 2114 "gramatica.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 242 "gramatica.y" /* yacc.c:1646  */
    { cout << "ass op" << endl; }
#line 2120 "gramatica.tab.c" /* yacc.c:1646  */
    break;


#line 2124 "gramatica.tab.c" /* yacc.c:1646  */
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
#line 245 "gramatica.y" /* yacc.c:1906  */

int main() {
	//yydebug = 1;
	do {
		yyparse();
	} while (!feof(yyin));
}

void yyerror(const char *s) {
	cout << "Error: " << s << endl;
	exit(-1);
}
