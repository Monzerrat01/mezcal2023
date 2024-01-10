/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "compiler/grammar.y" /* yacc.c:337  */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "SyntaxTree/Includes.hpp"
#include <memory>
std::unique_ptr<compiler::SyntaxTree> root;
using namespace compiler;
std::string result;
int yylex(void);
void yyerror(char const *);
extern char *yytext;

#line 86 "grammar.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "grammar.tab.h".  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "compiler/grammar.y" /* yacc.c:352  */

	#include <string>

#line 123 "grammar.tab.c" /* yacc.c:352  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    COLON = 259,
    RIGHT_ARROW = 260,
    LEFT_CURLY_BRACE = 261,
    RIGHT_CURLY_BRACE = 262,
    SEMICOLON = 263,
    LEFT_PARENTHESIS = 264,
    RIGHT_PARENTHESIS = 265,
    SINGLECOMMENT = 266,
    MULTILINECOMMENT = 267,
    SHOW = 268,
    QUOTES = 269,
    CHARACTERS_BLOCK = 270,
    INT = 271,
    INTEGER_VALUE = 272,
    DECIMAL_VALUE = 273,
    LOAD = 274,
    STDIN = 275,
    DOLLAR_SIGN = 276,
    INC = 277,
    DEC = 278,
    DECIMAL = 279,
    BLN = 280,
    SET = 281,
    TRUE = 282,
    FALSE = 283,
    NTOL = 284,
    QUESTION_MARK = 285,
    CORCH_IZQ = 286,
    CORCH_DERECHO = 287,
    EQ = 288,
    LE = 289,
    LT = 290,
    GT = 291,
    GE = 292,
    NE = 293,
    ELSE = 294,
    COMA = 295,
    STR = 296,
    DOBLE_COLON = 297,
    WHILE = 298,
    ANSWER = 299,
    ADD = 300,
    DOB_SLASH_IN = 301,
    LES = 302,
    SLASH = 303,
    SEARCH = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef  std::string  YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   450

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  274

#define YYUNDEFTOK  2
#define YYMAXUTOK   304

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    37,    39,    43,    53,    57,    60,    64,
      66,    68,    70,    72,    74,    76,    78,    80,    82,    86,
      88,    90,    92,    96,   100,   103,   107,   111,   115,   119,
     125,   127,   129,   131,   133,   137,   139,   141,   143,   145,
     147,   151,   155,   157,   162,   164,   166,   168,   170,   172,
     174,   176,   179,   182,   185,   188,   191,   193,   195,   197,
     199,   201,   203,   205,   207,   209,   213,   216,   220,   224,
     228,   230,   232,   234,   236,   240,   242,   245,   248,   250,
     252,   254,   256,   258,   260,   262,   266,   270,   274
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "COLON", "RIGHT_ARROW",
  "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "SEMICOLON", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "SINGLECOMMENT", "MULTILINECOMMENT", "SHOW",
  "QUOTES", "CHARACTERS_BLOCK", "INT", "INTEGER_VALUE", "DECIMAL_VALUE",
  "LOAD", "STDIN", "DOLLAR_SIGN", "INC", "DEC", "DECIMAL", "BLN", "SET",
  "TRUE", "FALSE", "NTOL", "QUESTION_MARK", "CORCH_IZQ", "CORCH_DERECHO",
  "EQ", "LE", "LT", "GT", "GE", "NE", "ELSE", "COMA", "STR", "DOBLE_COLON",
  "WHILE", "ANSWER", "ADD", "DOB_SLASH_IN", "LES", "SLASH", "SEARCH",
  "$accept", "input", "function_list", "function", "statements",
  "statement", "bifurcation", "loop", "logical_eval", "comp_operator",
  "std_input", "unitaryOperations", "assignment", "integer_value",
  "decimal_value", "definition", "identifiers", "ids", "std_output",
  "expression", "characters_block", "name", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -129

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-129)))

#define YYTABLE_NINF -82

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -129,    18,     9,    19,  -129,  -129,     9,    20,  -129,
      -1,    64,    29,    62,    39,    79,    80,  -129,    36,  -129,
    -129,    92,    97,  -129,  -129,    76,   103,    99,   108,  -129,
    -129,  -129,   107,   127,   137,   149,   123,   158,   164,     4,
      -6,     9,     9,     9,  -129,     9,   145,   106,   175,   401,
    -129,   165,  -129,  -129,  -129,  -129,     9,  -129,  -129,   133,
     171,   -11,   166,   163,    12,  -129,     9,   174,   156,  -129,
    -129,  -129,   155,    38,  -129,  -129,  -129,  -129,  -129,  -129,
     166,    55,   178,  -129,   160,   173,  -129,     9,  -129,  -129,
      67,  -129,  -129,  -129,  -129,     9,  -129,  -129,     9,  -129,
    -129,  -129,  -129,   162,   189,     9,   184,   185,    82,    51,
     177,   202,  -129,     9,   169,  -129,     9,    87,   -15,     9,
     172,   187,   188,   100,  -129,     9,     9,     9,  -129,  -129,
    -129,   203,  -129,   170,   198,   217,     9,   190,   101,   166,
     166,   205,   186,   135,   208,     7,     9,  -129,   191,   204,
    -129,   230,  -129,   265,   209,     9,   218,   206,  -129,     9,
     207,  -129,  -129,  -129,   141,     9,   212,     9,   154,   166,
    -129,   165,   106,  -129,   278,  -129,     9,   106,  -129,  -129,
     213,  -129,     9,   214,   215,  -129,   216,     9,  -129,  -129,
    -129,   219,  -129,   106,   157,  -129,   222,  -129,  -129,  -129,
     220,     9,   166,     9,   210,  -129,   229,   224,   211,   225,
       9,     9,   237,     9,     9,   231,   227,     9,   256,   266,
     252,  -129,   242,   254,   259,     9,  -129,     9,     9,   -28,
      -7,     5,   166,   166,   166,   166,   166,   166,   250,   251,
     260,   261,   262,   263,   243,   255,   264,   270,   273,   277,
     293,   297,   302,   320,   322,   323,  -129,  -129,  -129,  -129,
    -129,  -129,   299,   312,   333,   346,   367,   380,  -129,  -129,
    -129,  -129,  -129,  -129
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,    88,     0,     4,     0,     1,     2,     4,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     8,     0,    17,
      16,     0,     0,    76,    76,     0,     0,     0,     0,     7,
       9,    10,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,    42,    43,    66,     0,     0,     0,     0,     0,
       5,     0,    11,    12,    13,    14,     0,    15,    18,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    80,    41,
      75,    77,     0,     0,    35,    36,    37,    38,    39,    40,
       0,     0,     0,    78,     0,     0,    67,     0,    57,    56,
       0,    58,    59,    60,    86,     0,    61,    62,     0,    71,
      74,    70,    73,     0,    77,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,    21,     0,     0,    63,     0,
       0,     0,     0,     0,    79,     0,     0,     0,    32,     8,
      19,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    82,     0,
      34,     0,     8,     0,     0,     0,     0,     0,    68,     0,
       0,    64,    65,    44,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    20,     0,    24,     0,     0,    72,    69,
       0,    49,     0,     0,     0,    45,     0,     0,    53,    54,
      83,     0,    22,     0,     0,    50,     0,    48,    47,    55,
      52,     0,     0,     0,     0,    46,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     8,     8,     8,
       8,     8,     0,     0,     0,     0,     0,     0,    25,    26,
      29,    23,    27,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,   298,   332,  -128,   -44,  -129,  -129,  -129,   -70,
    -129,  -129,  -129,    30,   192,  -129,   313,   -22,  -129,  -129,
     -37,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     6,     7,    18,    29,    30,    31,    46,    80,
      32,    33,    34,    47,    92,    35,    42,    36,    37,    38,
      68,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       4,   151,   108,     4,   153,    82,    44,     4,    59,    65,
      95,   168,     1,    60,    83,    66,   138,   232,     5,   233,
      70,    70,    93,    67,   174,    48,    61,    62,    99,   169,
     139,    11,   140,   141,    84,    63,   100,   101,   234,     1,
     235,    69,    71,    71,   103,    72,    64,    19,    20,    21,
     236,    10,   237,   102,     1,    22,    71,   129,    23,    24,
      13,     8,    19,    20,    21,   130,   104,    25,   109,    12,
      22,    15,    44,    23,    24,    26,   113,   110,    14,     1,
      27,   111,    25,    16,    44,    28,    17,   118,   119,    91,
      26,    96,    97,    44,   135,   121,    40,    45,   122,    44,
      28,    41,   191,   127,    44,   124,    50,   194,   136,    49,
     112,   114,    51,   133,   157,    52,    71,    44,    44,   142,
     120,   146,   159,   202,   170,   148,   149,   150,   262,   263,
     264,   265,   266,   267,   190,    53,    71,   180,   128,    74,
      75,    76,    77,    78,    79,    54,    71,   137,    65,    85,
      44,    86,    44,   147,    87,   177,   165,    55,    44,    71,
      88,    89,   182,    56,    90,   184,    57,   186,   160,   161,
     162,    44,    58,   166,    44,   187,   193,    73,   203,    81,
      65,    94,   196,    44,    98,   115,   107,   200,    74,    75,
      76,    77,    78,    79,   183,   105,   106,   -81,   188,   189,
     116,   207,   123,   209,   117,   125,   126,   131,   132,   152,
     215,   216,   143,   218,   219,   134,   154,   222,   144,   155,
     145,   156,   158,    86,   204,   229,   164,   230,   231,   167,
     176,   171,   208,     1,   178,   220,   172,   173,   179,   181,
     201,    19,    20,    21,   185,   195,   197,   198,   199,    22,
     211,   206,    23,    24,   205,   212,   210,   213,   217,   221,
     223,    25,   238,   239,   240,   241,   242,   243,     1,    26,
     224,   214,   175,   225,   226,   227,    19,    20,    21,    28,
     228,     1,   244,   245,    22,   192,   250,    23,    24,    19,
      20,    21,   246,   247,   248,   249,    25,    22,   251,   256,
      23,    24,     1,   257,    26,     9,   268,   252,   258,    25,
      19,    20,    21,   253,    28,     1,   254,    26,    22,   269,
     255,    23,    24,    19,    20,    21,   259,    28,   260,   261,
      25,    22,     3,   163,    23,    24,     1,    43,    26,     0,
     270,     0,     0,    25,    19,    20,    21,     0,    28,     1,
       0,    26,    22,   271,     0,    23,    24,    19,    20,    21,
       0,    28,     0,     0,    25,    22,     0,     0,    23,    24,
       1,     0,    26,     0,   272,     0,     0,    25,    19,    20,
      21,     0,    28,     1,     0,    26,    22,   273,     0,    23,
      24,    19,    20,    21,     0,    28,     0,     0,    25,    22,
       0,     0,    23,    24,     1,     0,    26,     0,     0,     0,
       0,    25,    19,    20,    21,     0,    28,     0,     0,    26,
      22,     0,     0,    23,    24,     0,     0,     0,     0,    28,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28
};

static const yytype_int16 yycheck[] =
{
       0,   129,    72,     3,   132,    49,    17,     7,     4,    15,
      21,     4,     3,     9,    51,    21,    31,    45,     0,    47,
      42,    43,    59,    29,   152,    25,    22,    23,    16,    22,
      45,    32,    47,    48,    56,    31,    24,    25,    45,     3,
      47,    41,    42,    43,    66,    45,    42,    11,    12,    13,
      45,    31,    47,    41,     3,    19,    56,     6,    22,    23,
      31,    42,    11,    12,    13,   109,    66,    31,    30,     5,
      19,    32,    17,    22,    23,    39,    21,    39,    16,     3,
      44,    43,    31,     4,    17,    49,     6,    87,    21,    59,
      39,    61,    62,    17,   116,    95,     4,    21,    98,    17,
      49,     4,   172,    21,    17,   105,     7,   177,    21,     6,
      80,    81,     4,   113,   136,     8,   116,    17,    17,   119,
      90,    21,    21,   193,   146,   125,   126,   127,   256,   257,
     258,   259,   260,   261,   171,     8,   136,   159,   108,    33,
      34,    35,    36,    37,    38,     8,   146,   117,    15,    16,
      17,    18,    17,   123,    21,   155,    21,     8,    17,   159,
      27,    28,    21,    40,    31,   165,     8,   167,   138,   139,
     140,    17,     8,   143,    17,    21,   176,    32,    21,     4,
      15,    10,   182,    17,    21,     7,    31,   187,    33,    34,
      35,    36,    37,    38,   164,    21,    40,     8,   168,   169,
      40,   201,    40,   203,    31,    21,    21,    30,     6,     6,
     210,   211,    40,   213,   214,    46,    46,   217,    31,    21,
      32,     4,    32,    18,   194,   225,    40,   227,   228,    21,
      21,    40,   202,     3,    16,     4,    32,     7,    32,    32,
      21,    11,    12,    13,    32,    32,    32,    32,    32,    19,
      21,    31,    22,    23,    32,    31,    46,    46,    21,    32,
       4,    31,   232,   233,   234,   235,   236,   237,     3,    39,
       4,    46,     7,    21,    32,    21,    11,    12,    13,    49,
      21,     3,    32,    32,    19,     7,    43,    22,    23,    11,
      12,    13,    32,    32,    32,    32,    31,    19,    43,     6,
      22,    23,     3,     6,    39,     7,     7,    43,     6,    31,
      11,    12,    13,    43,    49,     3,    43,    39,    19,     7,
      43,    22,    23,    11,    12,    13,     6,    49,     6,     6,
      31,    19,     0,   141,    22,    23,     3,    24,    39,    -1,
       7,    -1,    -1,    31,    11,    12,    13,    -1,    49,     3,
      -1,    39,    19,     7,    -1,    22,    23,    11,    12,    13,
      -1,    49,    -1,    -1,    31,    19,    -1,    -1,    22,    23,
       3,    -1,    39,    -1,     7,    -1,    -1,    31,    11,    12,
      13,    -1,    49,     3,    -1,    39,    19,     7,    -1,    22,
      23,    11,    12,    13,    -1,    49,    -1,    -1,    31,    19,
      -1,    -1,    22,    23,     3,    -1,    39,    -1,    -1,    -1,
      -1,    31,    11,    12,    13,    -1,    49,    -1,    -1,    39,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    51,    53,    71,     0,    52,    53,    42,    52,
      31,    32,     5,    31,    16,    32,     4,     6,    54,    11,
      12,    13,    19,    22,    23,    31,    39,    44,    49,    55,
      56,    57,    60,    61,    62,    65,    67,    68,    69,    71,
       4,     4,    66,    66,    17,    21,    58,    63,    71,     6,
       7,     4,     8,     8,     8,     8,    40,     8,     8,     4,
       9,    22,    23,    31,    42,    15,    21,    29,    70,    71,
      67,    71,    71,    32,    33,    34,    35,    36,    37,    38,
      59,     4,    55,    70,    67,    16,    18,    21,    27,    28,
      31,    63,    64,    70,    10,    21,    63,    63,    21,    16,
      24,    25,    41,    67,    71,    21,    40,    31,    59,    30,
      39,    43,    63,    21,    63,     7,    40,    31,    71,    21,
      63,    71,    71,    40,    71,    21,    21,    21,    63,     6,
      55,    30,     6,    71,    46,    67,    21,    63,    31,    45,
      47,    48,    71,    40,    31,    32,    21,    63,    71,    71,
      71,    54,     6,    54,    46,    21,     4,    67,    32,    21,
      63,    63,    63,    64,    40,    21,    63,    21,     4,    22,
      67,    40,    32,     7,    54,     7,    21,    71,    16,    32,
      67,    32,    21,    63,    71,    32,    71,    21,    63,    63,
      70,    59,     7,    71,    59,    32,    71,    32,    32,    32,
      71,    21,    59,    21,    63,    32,    31,    71,    63,    71,
      46,    21,    31,    46,    46,    71,    71,    21,    71,    71,
       4,    32,    71,     4,     4,    21,    32,    21,    21,    71,
      71,    71,    45,    47,    45,    47,    45,    47,    63,    63,
      63,    63,    63,    63,    32,    32,    32,    32,    32,    32,
      43,    43,    43,    43,    43,    43,     6,     6,     6,     6,
       6,     6,    54,    54,    54,    54,    54,    54,     7,     7,
       7,     7,     7,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    64,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    70,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,    13,     0,     2,     0,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     2,     5,
       7,     4,     8,    22,     7,    21,    21,    22,    22,    22,
       9,    13,     4,     3,     5,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     6,     7,     9,     8,     8,     7,
       8,    12,     8,     7,     7,     8,     3,     3,     3,     3,
       3,     3,     3,     4,     6,     6,     1,     1,     6,     7,
       3,     3,     7,     3,     3,     2,     0,     1,     3,     5,
       3,     4,     6,     8,     6,     7,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 32 "compiler/grammar.y" /* yacc.c:1652  */
    { 
	result = std::string("#include <stdio.h>  \n #include <iostream>\n using namespace std;\n") + yyvsp[-1] + yyvsp[0]; }
#line 1479 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 37 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1] + yyvsp[0];}
#line 1485 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 39 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "";}
#line 1491 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 44 "compiler/grammar.y" /* yacc.c:1652  */
    { 
	if(yyvsp[-12] == "main")
    {
	yyval = "int main(int argc, char *argv[]){ \n" + yyvsp[-2] + "\n}\n";
	}else {
		yyval = std::string("\n void ") + "_" + yyvsp[-12] + "()" + "{\n" + yyvsp[-2] + "\n}\n";
	}
}
#line 1504 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 53 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1510 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 57 "compiler/grammar.y" /* yacc.c:1652  */
    { 
				yyval = yyvsp[-1] + yyvsp[0];
			     }
#line 1518 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 60 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1524 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 64 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1530 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 66 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1536 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 68 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1542 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 70 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1548 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 72 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1554 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 74 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1560 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 76 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1];}
#line 1566 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 78 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1572 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 80 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1578 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 82 "compiler/grammar.y" /* yacc.c:1652  */
    {  yyval = yyvsp[-1]; }
#line 1584 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 86 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval ="if(" + yyvsp[-3] + "){\n" + yyvsp[0] +  "}\n";}
#line 1590 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 88 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "if(" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1596 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 90 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "else{\n" + yyvsp[-1] + "\n}\n";}
#line 1602 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 92 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "else if(" + yyvsp[-6] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1608 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 98 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] + ";" + yyvsp[-10] + "=" + yyvsp[-7] + "-" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1614 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 101 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "while(" + yyvsp[-5] + "){\n" + yyvsp[-1] +"}\n"; }
#line 1620 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 105 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = "for(int " +  yyvsp[-19] + "=" + yyvsp[-17] +  ";"  + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1626 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 109 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = "for(int " + yyvsp[-19] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "-" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1632 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 113 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-18] +  ";" + yyvsp[-15] + yyvsp[-14] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1638 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 117 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = "for (int " + yyvsp[-20] + "=" + yyvsp[-18] +  ";" + yyvsp[-15] + yyvsp[-14] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "-" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1644 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 121 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] + ";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" +  yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1650 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 125 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + yyvsp[-2] + yyvsp[0]; }
#line 1656 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 127 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-11] + "[" + yyvsp[-8] + "]" + yyvsp[-6] + yyvsp[-4] + "[" + yyvsp[-1] + "]"; }
#line 1662 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 129 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0]; }
#line 1668 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 131 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0]; }
#line 1674 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 133 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + yyvsp[-2] + yyvsp[0]; }
#line 1680 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 137 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "=="; }
#line 1686 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 139 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "<="; }
#line 1692 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 141 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "<"; }
#line 1698 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 143 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ">"; }
#line 1704 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 145 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ">="; }
#line 1710 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 147 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "!="; }
#line 1716 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 151 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t std::cin >> " + yyvsp[0] + ";\n"; }
#line 1722 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 155 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0] + "++; \n"; }
#line 1728 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 157 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0] + "--; \n"; }
#line 1734 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 162 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + "(float)" + yyvsp[-2] + "/" + yyvsp[0] + ";\n"; }
#line 1740 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 164 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1746 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 166 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-8] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1752 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 168 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1758 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 170 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1764 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 172 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "=" + yyvsp[-3] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1770 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 174 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1776 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 177 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-11] + "[" + yyvsp[-8] + "]" + "=" + yyvsp[-4] +  "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1782 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 180 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[0] + ";\n"; }
#line 1788 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 183 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[0] + ";\n"; }
#line 1794 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 186 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "+=" + yyvsp[0] + ";\n"; }
#line 1800 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 189 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "+=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1806 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 191 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=false; \n"; }
#line 1812 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 193 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=true; \n"; }
#line 1818 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 195 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1824 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 197 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1830 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 199 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1836 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 201 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "+=" + yyvsp[0] + ";\n";}
#line 1842 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 203 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "-=" + yyvsp[0] + ";\n";}
#line 1848 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 205 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + "=" + yyvsp[0] + ";\n";}
#line 1854 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 207 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "+" + yyvsp[0] + ";\n";}
#line 1860 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 209 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "-" + yyvsp[0] + ";\n";}
#line 1866 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 213 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 1872 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 216 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 1878 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 220 "compiler/grammar.y" /* yacc.c:1652  */
    {
		yyval = "int " + yyvsp[-5] + "[" + yyvsp[-1] + "];\n";
	}
#line 1886 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 224 "compiler/grammar.y" /* yacc.c:1652  */
    {
	
		yyval = "int " + yyvsp[-6] + "[" + yyvsp[-1] + "];\n"; }
#line 1894 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 228 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t bool " + yyvsp[-2] + ";\n"; }
#line 1900 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 230 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t int " + yyvsp[-2] + ";\n"; }
#line 1906 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 232 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t int " + yyvsp[-6] + "," + yyvsp[-4] + "," + yyvsp[-2] + ";\n"; }
#line 1912 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 234 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t string " + yyvsp[-2] + ";\n";}
#line 1918 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 236 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t float " + yyvsp[-2] + ";\n";}
#line 1924 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 240 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1930 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 242 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1936 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 245 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1942 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 248 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "std::cout << " + yyvsp[0] + ";"; }
#line 1948 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 250 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "std::cout << ((" + yyvsp[0] + "==1) ? \"true\" : \"false\") << std::endl;";}
#line 1954 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 252 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "std::cout << " + yyvsp[0] + " << std::endl;\n"; }
#line 1960 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 254 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "std::cout << " + yyvsp[0] + " << std::endl;"; }
#line 1966 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 256 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "std::cout << " + yyvsp[-3] + " << " + yyvsp[0] + " << std::endl;"; }
#line 1972 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 258 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "std::cout << " + yyvsp[-5] + " << " + yyvsp[-2] + " << " + yyvsp[0] + " << std::endl;"; }
#line 1978 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 260 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "std::cout << " + yyvsp[-2] + "[" + yyvsp[0] + "] << std::endl;\n"; }
#line 1984 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 262 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "std::cout << " + yyvsp[-3] + "[" + yyvsp[0] + "] << std::endl;\n"; }
#line 1990 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 266 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string("\t_") + yyvsp[-2] + "();\n"; }
#line 1996 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 270 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 2002 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 274 "compiler/grammar.y" /* yacc.c:1652  */
    { 
		yyval = std::string(yytext);  
		}
#line 2010 "grammar.tab.c" /* yacc.c:1652  */
    break;


#line 2014 "grammar.tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 278 "compiler/grammar.y" /* yacc.c:1918  */


//std::unique_ptr<compiler::SyntaxTree> root;

void yyerror(char const *x){
	printf("Error %s\n", x);
	exit(1);

}
