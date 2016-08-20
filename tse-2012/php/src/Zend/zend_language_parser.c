/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse zendparse
#define yylex   zendlex
#define yyerror zenderror
#define yylval  zendlval
#define yychar  zendchar
#define yydebug zenddebug
#define yynerrs zendnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_FUNCTION = 333,
     T_CONST = 334,
     T_RETURN = 335,
     T_TRY = 336,
     T_CATCH = 337,
     T_THROW = 338,
     T_USE = 339,
     T_GLOBAL = 340,
     T_PUBLIC = 341,
     T_PROTECTED = 342,
     T_PRIVATE = 343,
     T_FINAL = 344,
     T_ABSTRACT = 345,
     T_STATIC = 346,
     T_VAR = 347,
     T_UNSET = 348,
     T_ISSET = 349,
     T_EMPTY = 350,
     T_HALT_COMPILER = 351,
     T_CLASS = 352,
     T_INTERFACE = 353,
     T_EXTENDS = 354,
     T_IMPLEMENTS = 355,
     T_OBJECT_OPERATOR = 356,
     T_DOUBLE_ARROW = 357,
     T_LIST = 358,
     T_ARRAY = 359,
     T_CLASS_C = 360,
     T_METHOD_C = 361,
     T_FUNC_C = 362,
     T_LINE = 363,
     T_FILE = 364,
     T_COMMENT = 365,
     T_DOC_COMMENT = 366,
     T_OPEN_TAG = 367,
     T_OPEN_TAG_WITH_ECHO = 368,
     T_CLOSE_TAG = 369,
     T_WHITESPACE = 370,
     T_START_HEREDOC = 371,
     T_END_HEREDOC = 372,
     T_DOLLAR_OPEN_CURLY_BRACES = 373,
     T_CURLY_OPEN = 374,
     T_PAAMAYIM_NEKUDOTAYIM = 375
   };
#endif
/* Tokens.  */
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_CLONE 298
#define T_NEW 299
#define T_EXIT 300
#define T_IF 301
#define T_ELSEIF 302
#define T_ELSE 303
#define T_ENDIF 304
#define T_LNUMBER 305
#define T_DNUMBER 306
#define T_STRING 307
#define T_STRING_VARNAME 308
#define T_VARIABLE 309
#define T_NUM_STRING 310
#define T_INLINE_HTML 311
#define T_CHARACTER 312
#define T_BAD_CHARACTER 313
#define T_ENCAPSED_AND_WHITESPACE 314
#define T_CONSTANT_ENCAPSED_STRING 315
#define T_ECHO 316
#define T_DO 317
#define T_WHILE 318
#define T_ENDWHILE 319
#define T_FOR 320
#define T_ENDFOR 321
#define T_FOREACH 322
#define T_ENDFOREACH 323
#define T_DECLARE 324
#define T_ENDDECLARE 325
#define T_AS 326
#define T_SWITCH 327
#define T_ENDSWITCH 328
#define T_CASE 329
#define T_DEFAULT 330
#define T_BREAK 331
#define T_CONTINUE 332
#define T_FUNCTION 333
#define T_CONST 334
#define T_RETURN 335
#define T_TRY 336
#define T_CATCH 337
#define T_THROW 338
#define T_USE 339
#define T_GLOBAL 340
#define T_PUBLIC 341
#define T_PROTECTED 342
#define T_PRIVATE 343
#define T_FINAL 344
#define T_ABSTRACT 345
#define T_STATIC 346
#define T_VAR 347
#define T_UNSET 348
#define T_ISSET 349
#define T_EMPTY 350
#define T_HALT_COMPILER 351
#define T_CLASS 352
#define T_INTERFACE 353
#define T_EXTENDS 354
#define T_IMPLEMENTS 355
#define T_OBJECT_OPERATOR 356
#define T_DOUBLE_ARROW 357
#define T_LIST 358
#define T_ARRAY 359
#define T_CLASS_C 360
#define T_METHOD_C 361
#define T_FUNC_C 362
#define T_LINE 363
#define T_FILE 364
#define T_COMMENT 365
#define T_DOC_COMMENT 366
#define T_OPEN_TAG 367
#define T_OPEN_TAG_WITH_ECHO 368
#define T_CLOSE_TAG 369
#define T_WHITESPACE 370
#define T_START_HEREDOC 371
#define T_END_HEREDOC 372
#define T_DOLLAR_OPEN_CURLY_BRACES 373
#define T_CURLY_OPEN 374
#define T_PAAMAYIM_NEKUDOTAYIM 375




/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2006 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_language_parser.y,v 1.160.2.4.2.3 2007/01/10 15:58:07 dmitry Exp $ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangeling elseif/else ambiguity.  Solved by shift.
 * - 1 shift/reduce conflict due to arrays within encapsulated strings. Solved by shift.
 * - 1 shift/reduce conflict due to objects within encapsulated strings.  Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"


#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4077

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  150
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  168
/* YYNRULES -- Number of rules.  */
#define YYNRULES  422
/* YYNRULES -- Number of states.  */
#define YYNSTATES  785

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   375

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   147,     2,   145,    47,    31,   148,
     140,   141,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   142,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   149,    30,     2,   146,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,    29,   144,    50,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    15,    17,
      22,    23,    27,    28,    30,    32,    34,    39,    41,    45,
      46,    47,    57,    58,    59,    72,    73,    74,    82,    83,
      84,    94,    95,    96,    97,   110,   111,   118,   121,   125,
     128,   132,   135,   139,   143,   147,   151,   155,   157,   160,
     164,   170,   171,   172,   183,   184,   185,   196,   197,   204,
     206,   207,   208,   209,   210,   211,   230,   234,   236,   237,
     239,   242,   243,   244,   255,   257,   261,   263,   265,   269,
     271,   273,   274,   276,   277,   278,   290,   291,   300,   301,
     309,   311,   314,   317,   318,   321,   323,   324,   327,   328,
     331,   333,   337,   338,   341,   343,   346,   348,   353,   355,
     360,   362,   367,   371,   377,   381,   386,   391,   397,   398,
     399,   406,   407,   413,   415,   417,   419,   424,   425,   426,
     434,   435,   436,   445,   446,   449,   450,   454,   456,   457,
     460,   464,   470,   475,   480,   486,   494,   501,   502,   504,
     506,   508,   509,   511,   513,   516,   520,   524,   529,   533,
     535,   537,   540,   545,   549,   555,   557,   561,   564,   565,
     566,   571,   574,   575,   576,   587,   589,   593,   595,   597,
     598,   600,   602,   605,   607,   609,   611,   613,   615,   617,
     621,   627,   629,   633,   639,   644,   648,   650,   651,   653,
     654,   659,   661,   662,   670,   674,   679,   680,   688,   689,
     694,   697,   701,   705,   709,   713,   717,   721,   725,   729,
     733,   737,   741,   744,   747,   750,   753,   754,   759,   760,
     765,   766,   771,   772,   777,   781,   785,   789,   793,   797,
     801,   805,   809,   813,   817,   821,   825,   828,   831,   834,
     837,   841,   845,   849,   853,   857,   861,   865,   869,   873,
     877,   878,   879,   887,   889,   892,   895,   898,   901,   904,
     907,   910,   913,   914,   918,   920,   925,   929,   932,   933,
     939,   940,   948,   949,   957,   958,   964,   966,   968,   970,
     971,   972,   979,   981,   984,   985,   988,   989,   992,   996,
     997,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,  1017,
    1019,  1021,  1024,  1027,  1032,  1034,  1038,  1040,  1042,  1044,
    1046,  1050,  1054,  1058,  1059,  1062,  1063,  1065,  1071,  1075,
    1079,  1081,  1083,  1085,  1087,  1088,  1091,  1092,  1095,  1096,
    1097,  1105,  1107,  1110,  1111,  1112,  1117,  1118,  1123,  1124,
    1126,  1129,  1133,  1135,  1137,  1139,  1142,  1144,  1149,  1154,
    1156,  1158,  1163,  1164,  1166,  1168,  1169,  1172,  1177,  1182,
    1184,  1186,  1190,  1192,  1195,  1199,  1201,  1203,  1204,  1210,
    1211,  1212,  1215,  1221,  1225,  1229,  1231,  1238,  1243,  1248,
    1251,  1254,  1257,  1260,  1263,  1266,  1269,  1272,  1275,  1278,
    1281,  1284,  1285,  1287,  1288,  1294,  1298,  1302,  1309,  1313,
    1315,  1317,  1319,  1324,  1329,  1332,  1335,  1340,  1343,  1346,
    1348,  1349,  1354
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     151,     0,    -1,   152,    -1,    -1,   152,   153,   154,    -1,
      -1,   158,    -1,   190,    -1,   191,    -1,   115,   140,   141,
     142,    -1,    -1,   155,   156,   157,    -1,    -1,   158,    -1,
     190,    -1,   191,    -1,   115,   140,   141,   142,    -1,   159,
      -1,   143,   155,   144,    -1,    -1,    -1,    65,   140,   279,
     141,   160,   158,   161,   217,   221,    -1,    -1,    -1,    65,
     140,   279,   141,    26,   162,   155,   163,   219,   222,    68,
     142,    -1,    -1,    -1,    82,   140,   164,   279,   141,   165,
     216,    -1,    -1,    -1,    81,   166,   158,    82,   140,   167,
     279,   141,   142,    -1,    -1,    -1,    -1,    84,   140,   244,
     142,   168,   244,   142,   169,   244,   141,   170,   207,    -1,
      -1,    91,   140,   279,   141,   171,   211,    -1,    95,   142,
      -1,    95,   279,   142,    -1,    96,   142,    -1,    96,   279,
     142,    -1,    99,   142,    -1,    99,   247,   142,    -1,    99,
     285,   142,    -1,   104,   228,   142,    -1,   110,   230,   142,
      -1,    80,   243,   142,    -1,    75,    -1,   279,   142,    -1,
     103,   189,   142,    -1,   112,   140,   187,   141,   142,    -1,
      -1,    -1,    86,   140,   285,    90,   172,   206,   205,   141,
     173,   208,    -1,    -1,    -1,    86,   140,   247,    90,   174,
     285,   205,   141,   175,   208,    -1,    -1,    88,   176,   140,
     210,   141,   209,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   177,   143,   155,   144,   101,   140,   178,   263,
     179,    73,   141,   180,   143,   155,   144,   181,   182,    -1,
     102,   279,   142,    -1,   183,    -1,    -1,   184,    -1,   183,
     184,    -1,    -1,    -1,   101,   140,   263,   185,    73,   141,
     186,   143,   155,   144,    -1,   188,    -1,   187,     8,   188,
      -1,   285,    -1,    79,    -1,   140,    79,   141,    -1,   193,
      -1,   196,    -1,    -1,    31,    -1,    -1,    -1,    97,   194,
     192,    71,   195,   140,   223,   141,   143,   155,   144,    -1,
      -1,   199,    71,   200,   197,   203,   143,   231,   144,    -1,
      -1,   201,    71,   198,   202,   143,   231,   144,    -1,   116,
      -1,   109,   116,    -1,   108,   116,    -1,    -1,   118,   263,
      -1,   117,    -1,    -1,   118,   204,    -1,    -1,   119,   204,
      -1,   263,    -1,   204,     8,   263,    -1,    -1,   121,   206,
      -1,   285,    -1,    31,   285,    -1,   158,    -1,    26,   155,
      85,   142,    -1,   158,    -1,    26,   155,    87,   142,    -1,
     158,    -1,    26,   155,    89,   142,    -1,    71,    13,   273,
      -1,   210,     8,    71,    13,   273,    -1,   143,   212,   144,
      -1,   143,   142,   212,   144,    -1,    26,   212,    92,   142,
      -1,    26,   142,   212,    92,   142,    -1,    -1,    -1,   212,
      93,   279,   215,   213,   155,    -1,    -1,   212,    94,   215,
     214,   155,    -1,    26,    -1,   142,    -1,   158,    -1,    26,
     155,    83,   142,    -1,    -1,    -1,   217,    66,   140,   279,
     141,   218,   158,    -1,    -1,    -1,   219,    66,   140,   279,
     141,    26,   220,   155,    -1,    -1,    67,   158,    -1,    -1,
      67,    26,   155,    -1,   224,    -1,    -1,   225,    73,    -1,
     225,    31,    73,    -1,   225,    31,    73,    13,   273,    -1,
     225,    73,    13,   273,    -1,   224,     8,   225,    73,    -1,
     224,     8,   225,    31,    73,    -1,   224,     8,   225,    31,
      73,    13,   273,    -1,   224,     8,   225,    73,    13,   273,
      -1,    -1,    71,    -1,   123,    -1,   227,    -1,    -1,   247,
      -1,   285,    -1,    31,   281,    -1,   227,     8,   247,    -1,
     227,     8,   285,    -1,   227,     8,    31,   281,    -1,   228,
       8,   229,    -1,   229,    -1,    73,    -1,   145,   280,    -1,
     145,   143,   279,   144,    -1,   230,     8,    73,    -1,   230,
       8,    73,    13,   273,    -1,    73,    -1,    73,    13,   273,
      -1,   231,   232,    -1,    -1,    -1,   237,   233,   241,   142,
      -1,   242,   142,    -1,    -1,    -1,   238,    97,   234,   192,
      71,   235,   140,   223,   141,   236,    -1,   142,    -1,   143,
     155,   144,    -1,   239,    -1,   111,    -1,    -1,   239,    -1,
     240,    -1,   239,   240,    -1,   105,    -1,   106,    -1,   107,
      -1,   110,    -1,   109,    -1,   108,    -1,   241,     8,    73,
      -1,   241,     8,    73,    13,   273,    -1,    73,    -1,    73,
      13,   273,    -1,   242,     8,    71,    13,   273,    -1,    98,
      71,    13,   273,    -1,   243,     8,   279,    -1,   279,    -1,
      -1,   245,    -1,    -1,   245,     8,   246,   279,    -1,   279,
      -1,    -1,   122,   140,   248,   305,   141,    13,   279,    -1,
     285,    13,   279,    -1,   285,    13,    31,   285,    -1,    -1,
     285,    13,    31,    63,   264,   249,   271,    -1,    -1,    63,
     264,   250,   271,    -1,    62,   279,    -1,   285,    24,   279,
      -1,   285,    23,   279,    -1,   285,    22,   279,    -1,   285,
      21,   279,    -1,   285,    20,   279,    -1,   285,    19,   279,
      -1,   285,    18,   279,    -1,   285,    17,   279,    -1,   285,
      16,   279,    -1,   285,    15,   279,    -1,   285,    14,   279,
      -1,   283,    60,    -1,    60,   283,    -1,   283,    59,    -1,
      59,   283,    -1,    -1,   279,    27,   251,   279,    -1,    -1,
     279,    28,   252,   279,    -1,    -1,   279,     9,   253,   279,
      -1,    -1,   279,    11,   254,   279,    -1,   279,    10,   279,
      -1,   279,    29,   279,    -1,   279,    31,   279,    -1,   279,
      30,   279,    -1,   279,    44,   279,    -1,   279,    42,   279,
      -1,   279,    43,   279,    -1,   279,    45,   279,    -1,   279,
      46,   279,    -1,   279,    47,   279,    -1,   279,    41,   279,
      -1,   279,    40,   279,    -1,    42,   279,    -1,    43,   279,
      -1,    48,   279,    -1,    50,   279,    -1,   279,    33,   279,
      -1,   279,    32,   279,    -1,   279,    35,   279,    -1,   279,
      34,   279,    -1,   279,    36,   279,    -1,   279,    39,   279,
      -1,   279,    37,   279,    -1,   279,    38,   279,    -1,   279,
      49,   264,    -1,   140,   279,   141,    -1,    -1,    -1,   279,
      25,   255,   279,    26,   256,   279,    -1,   314,    -1,    58,
     279,    -1,    57,   279,    -1,    56,   279,    -1,    55,   279,
      -1,    54,   279,    -1,    53,   279,    -1,    52,   279,    -1,
      64,   270,    -1,    -1,    51,   257,   279,    -1,   275,    -1,
     123,   140,   308,   141,    -1,   146,   310,   146,    -1,    12,
     279,    -1,    -1,    71,   140,   259,   226,   141,    -1,    -1,
     263,   139,    71,   140,   260,   226,   141,    -1,    -1,   263,
     139,   293,   140,   261,   226,   141,    -1,    -1,   293,   140,
     262,   226,   141,    -1,    71,    -1,    71,    -1,   265,    -1,
      -1,    -1,   296,   120,   266,   300,   267,   268,    -1,   296,
      -1,   268,   269,    -1,    -1,   120,   300,    -1,    -1,   140,
     141,    -1,   140,   279,   141,    -1,    -1,   140,   226,   141,
      -1,    69,    -1,    70,    -1,    79,    -1,   127,    -1,   128,
      -1,   124,    -1,   125,    -1,   126,    -1,   272,    -1,    71,
      -1,    42,   273,    -1,    43,   273,    -1,   123,   140,   276,
     141,    -1,   274,    -1,    71,   139,    71,    -1,    71,    -1,
      72,    -1,   317,    -1,   272,    -1,   147,   310,   147,    -1,
     148,   310,   148,    -1,   135,   310,   136,    -1,    -1,   278,
     277,    -1,    -1,     8,    -1,   278,     8,   273,   121,   273,
      -1,   278,     8,   273,    -1,   273,   121,   273,    -1,   273,
      -1,   280,    -1,   247,    -1,   285,    -1,    -1,   285,   282,
      -1,    -1,   285,   284,    -1,    -1,    -1,   295,   120,   286,
     300,   287,   291,   288,    -1,   295,    -1,   288,   289,    -1,
      -1,    -1,   120,   300,   290,   291,    -1,    -1,   140,   292,
     226,   141,    -1,    -1,   297,    -1,   304,   297,    -1,   263,
     139,   293,    -1,   296,    -1,   258,    -1,   297,    -1,   304,
     297,    -1,   294,    -1,   297,    61,   299,   149,    -1,   297,
     143,   279,   144,    -1,   298,    -1,    73,    -1,   145,   143,
     279,   144,    -1,    -1,   279,    -1,   302,    -1,    -1,   293,
     301,    -1,   302,    61,   299,   149,    -1,   302,   143,   279,
     144,    -1,   303,    -1,    71,    -1,   143,   279,   144,    -1,
     145,    -1,   304,   145,    -1,   305,     8,   306,    -1,   306,
      -1,   285,    -1,    -1,   122,   140,   307,   305,   141,    -1,
      -1,    -1,   309,   277,    -1,   309,     8,   279,   121,   279,
      -1,   309,     8,   279,    -1,   279,   121,   279,    -1,   279,
      -1,   309,     8,   279,   121,    31,   281,    -1,   309,     8,
      31,   281,    -1,   279,   121,    31,   281,    -1,    31,   281,
      -1,   310,   311,    -1,   310,    71,    -1,   310,    74,    -1,
     310,    78,    -1,   310,    76,    -1,   310,    77,    -1,   310,
      61,    -1,   310,   149,    -1,   310,   143,    -1,   310,   144,
      -1,   310,   120,    -1,    -1,    73,    -1,    -1,    73,    61,
     312,   313,   149,    -1,    73,   120,    71,    -1,   137,   279,
     144,    -1,   137,    72,    61,   279,   149,   144,    -1,   138,
     285,   144,    -1,    71,    -1,    74,    -1,    73,    -1,   113,
     140,   315,   141,    -1,   114,   140,   285,   141,    -1,     7,
     279,    -1,     6,   279,    -1,     5,   140,   279,   141,    -1,
       4,   279,    -1,     3,   279,    -1,   285,    -1,    -1,   315,
       8,   316,   285,    -1,   263,   139,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   152,   152,   156,   156,   157,   162,   163,   164,   165,
     170,   170,   171,   176,   177,   178,   179,   184,   188,   189,
     189,   189,   190,   190,   190,   191,   191,   191,   192,   192,
     192,   196,   198,   200,   193,   202,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   218,   219,   217,   222,   223,   221,   225,   225,   226,
     227,   228,   229,   230,   231,   227,   233,   238,   239,   243,
     244,   249,   249,   249,   254,   255,   259,   263,   264,   269,
     273,   278,   279,   284,   284,   284,   290,   289,   296,   295,
     305,   306,   307,   311,   312,   316,   319,   321,   324,   326,
     330,   331,   335,   336,   341,   342,   346,   347,   352,   353,
     358,   359,   364,   365,   370,   371,   372,   373,   378,   379,
     379,   380,   380,   385,   386,   391,   392,   397,   399,   399,
     403,   405,   405,   409,   411,   415,   417,   422,   423,   428,
     429,   430,   431,   432,   433,   434,   435,   440,   441,   442,
     447,   448,   453,   454,   455,   456,   457,   458,   462,   463,
     468,   469,   470,   475,   476,   477,   478,   484,   485,   490,
     490,   491,   492,   492,   492,   498,   499,   503,   504,   508,
     509,   513,   514,   518,   519,   520,   521,   522,   523,   527,
     528,   529,   530,   534,   535,   539,   540,   545,   546,   550,
     550,   551,   555,   555,   556,   557,   558,   558,   559,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   576,   577,   577,
     578,   578,   579,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   606,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   618,   619,   620,   621,   622,   626,   626,
     629,   629,   632,   632,   635,   635,   641,   645,   646,   651,
     652,   651,   654,   659,   660,   665,   669,   670,   671,   676,
     677,   682,   683,   684,   685,   686,   687,   688,   689,   694,
     695,   696,   697,   698,   699,   703,   707,   708,   709,   710,
     711,   712,   713,   718,   719,   722,   724,   728,   729,   730,
     731,   735,   736,   741,   746,   746,   751,   751,   756,   757,
     756,   759,   763,   764,   769,   769,   773,   773,   777,   781,
     782,   786,   791,   792,   797,   798,   799,   803,   804,   805,
     810,   811,   815,   816,   821,   822,   822,   826,   827,   828,
     832,   833,   837,   838,   842,   843,   848,   849,   849,   850,
     855,   856,   860,   861,   862,   863,   864,   865,   866,   867,
     871,   872,   873,   874,   875,   876,   877,   878,   879,   880,
     881,   882,   889,   890,   890,   891,   892,   893,   894,   899,
     900,   901,   906,   907,   908,   909,   910,   911,   912,   916,
     917,   917,   921
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_CONTINUE",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "'('", "')'", "';'", "'{'", "'}'", "'$'", "'`'", "'\"'", "'''", "']'",
  "$accept", "start", "top_statement_list", "@1", "top_statement",
  "inner_statement_list", "@2", "inner_statement", "statement",
  "unticked_statement", "@3", "@4", "@5", "@6", "@7", "@8", "@9", "@10",
  "@11", "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20",
  "@21", "@22", "@23", "@24", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "@25", "@26",
  "unset_variables", "unset_variable", "use_filename",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "@27", "@28",
  "unticked_class_declaration_statement", "@29", "@30", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "@31", "@32", "case_separator", "while_statement", "elseif_list", "@33",
  "new_elseif_list", "@34", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "@35", "@36", "@37",
  "method_body", "variable_modifiers", "method_modifiers",
  "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "@38",
  "expr_without_variable", "@39", "@40", "@41", "@42", "@43", "@44", "@45",
  "@46", "@47", "@48", "function_call", "@49", "@50", "@51", "@52",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "@53", "@54",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "ctor_arguments",
  "common_scalar", "static_scalar", "static_class_constant", "scalar",
  "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "r_variable", "w_variable",
  "@55", "rw_variable", "@56", "variable", "@57", "@58",
  "variable_properties", "variable_property", "@59", "method_or_not",
  "@60", "variable_without_objects", "static_member",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "@61", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "@62", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "@63",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "@64", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
      40,    41,    59,   123,   125,    36,    96,    34,    39,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   150,   151,   153,   152,   152,   154,   154,   154,   154,
     156,   155,   155,   157,   157,   157,   157,   158,   159,   160,
     161,   159,   162,   163,   159,   164,   165,   159,   166,   167,
     159,   168,   169,   170,   159,   171,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   172,   173,   159,   174,   175,   159,   176,   159,   159,
     177,   178,   179,   180,   181,   159,   159,   182,   182,   183,
     183,   185,   186,   184,   187,   187,   188,   189,   189,   190,
     191,   192,   192,   194,   195,   193,   197,   196,   198,   196,
     199,   199,   199,   200,   200,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   210,   211,   211,   211,   211,   212,   213,
     212,   214,   212,   215,   215,   216,   216,   217,   218,   217,
     219,   220,   219,   221,   221,   222,   222,   223,   223,   224,
     224,   224,   224,   224,   224,   224,   224,   225,   225,   225,
     226,   226,   227,   227,   227,   227,   227,   227,   228,   228,
     229,   229,   229,   230,   230,   230,   230,   231,   231,   233,
     232,   232,   234,   235,   232,   236,   236,   237,   237,   238,
     238,   239,   239,   240,   240,   240,   240,   240,   240,   241,
     241,   241,   241,   242,   242,   243,   243,   244,   244,   246,
     245,   245,   248,   247,   247,   247,   249,   247,   250,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   251,   247,   252,   247,
     253,   247,   254,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     255,   256,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   257,   247,   247,   247,   247,   247,   259,   258,
     260,   258,   261,   258,   262,   258,   263,   264,   264,   266,
     267,   265,   265,   268,   268,   269,   270,   270,   270,   271,
     271,   272,   272,   272,   272,   272,   272,   272,   272,   273,
     273,   273,   273,   273,   273,   274,   275,   275,   275,   275,
     275,   275,   275,   276,   276,   277,   277,   278,   278,   278,
     278,   279,   279,   280,   282,   281,   284,   283,   286,   287,
     285,   285,   288,   288,   290,   289,   292,   291,   291,   293,
     293,   294,   295,   295,   296,   296,   296,   297,   297,   297,
     298,   298,   299,   299,   300,   301,   300,   302,   302,   302,
     303,   303,   304,   304,   305,   305,   306,   307,   306,   306,
     308,   308,   309,   309,   309,   309,   309,   309,   309,   309,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   311,   312,   311,   311,   311,   311,   311,   313,
     313,   313,   314,   314,   314,   314,   314,   314,   314,   315,
     316,   315,   317
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     1,     1,     4,
       0,     3,     0,     1,     1,     1,     4,     1,     3,     0,
       0,     9,     0,     0,    12,     0,     0,     7,     0,     0,
       9,     0,     0,     0,    12,     0,     6,     2,     3,     2,
       3,     2,     3,     3,     3,     3,     3,     1,     2,     3,
       5,     0,     0,    10,     0,     0,    10,     0,     6,     1,
       0,     0,     0,     0,     0,    18,     3,     1,     0,     1,
       2,     0,     0,    10,     1,     3,     1,     1,     3,     1,
       1,     0,     1,     0,     0,    11,     0,     8,     0,     7,
       1,     2,     2,     0,     2,     1,     0,     2,     0,     2,
       1,     3,     0,     2,     1,     2,     1,     4,     1,     4,
       1,     4,     3,     5,     3,     4,     4,     5,     0,     0,
       6,     0,     5,     1,     1,     1,     4,     0,     0,     7,
       0,     0,     8,     0,     2,     0,     3,     1,     0,     2,
       3,     5,     4,     4,     5,     7,     6,     0,     1,     1,
       1,     0,     1,     1,     2,     3,     3,     4,     3,     1,
       1,     2,     4,     3,     5,     1,     3,     2,     0,     0,
       4,     2,     0,     0,    10,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     0,
       4,     1,     0,     7,     3,     4,     0,     7,     0,     4,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     0,     4,     0,     4,
       0,     4,     0,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     0,     7,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     0,     3,     1,     4,     3,     2,     0,     5,
       0,     7,     0,     7,     0,     5,     1,     1,     1,     0,
       0,     6,     1,     2,     0,     2,     0,     2,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     1,     3,     1,     1,     1,     1,
       3,     3,     3,     0,     2,     0,     1,     5,     3,     3,
       1,     1,     1,     1,     0,     2,     0,     2,     0,     0,
       7,     1,     2,     0,     0,     4,     0,     4,     0,     1,
       2,     3,     1,     1,     1,     2,     1,     4,     4,     1,
       1,     4,     0,     1,     1,     0,     2,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     0,     5,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     1,     0,     5,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     2,     2,     4,     2,     2,     1,
       0,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,   301,
     302,   316,   317,   360,    47,   303,     0,    28,     0,     0,
       0,    57,     0,     0,     0,    83,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    95,
       0,     0,   306,   307,   308,   304,   305,   401,     0,    59,
      12,   372,   401,   401,   401,     4,     6,    17,     7,     8,
      79,    80,     0,     0,   332,   353,     0,   319,   274,     0,
     331,     0,   333,     0,   356,   341,   352,   354,   359,     0,
     263,   318,   418,   417,     0,   415,   414,   277,   246,   247,
     248,   249,     0,   270,   269,   268,   267,   266,   265,   264,
     286,     0,   225,   336,   223,   210,   287,     0,   208,   288,
     292,   354,     0,     0,   271,     0,   278,     0,   196,     0,
      25,   197,     0,     0,     0,    37,     0,    39,     0,    81,
      41,   332,     0,   333,     0,     0,    77,     0,     0,   160,
       0,     0,   159,    92,    91,   165,     0,     0,     0,     0,
       0,   202,   380,     0,     0,    10,     0,     0,     0,     0,
      93,    88,     0,   230,     0,   232,   260,   226,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
     224,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,   284,   338,   362,     0,   373,
     355,     0,   273,     0,     0,   299,   289,   355,   297,     0,
       0,   151,     0,    46,     0,     0,     0,   198,   201,   332,
     333,     0,     0,    38,    40,    82,     0,    42,    43,    12,
      66,     0,    49,     0,   161,   333,     0,    44,     0,     0,
      45,     0,    74,    76,   419,     0,     0,     0,   379,     0,
     385,     0,   325,   396,   391,   402,   392,   394,   395,   393,
     400,   322,     0,     0,   398,   399,   397,   390,   259,    18,
       0,     0,   276,   320,   321,     0,    86,    96,   422,   351,
     349,     0,     0,   234,     0,     0,     0,     0,   235,   237,
     236,   251,   250,   253,   252,   254,   256,   257,   255,   245,
     244,   239,   240,   238,   241,   242,   243,   258,     0,   204,
     221,   220,   219,   218,   217,   216,   215,   214,   213,   212,
     211,   151,     0,   363,     0,     0,   416,     0,   351,   151,
     209,     0,   298,    19,     0,     0,   150,   332,   333,   195,
       0,     0,    31,   199,    54,    51,     0,     0,    35,    84,
      10,    78,     0,   158,     0,     0,   310,     0,   309,   166,
     314,   163,     0,     0,   420,   412,   413,     9,     0,   376,
       0,   375,   389,   334,     0,   275,   326,   381,   403,     0,
     317,     0,     0,     0,    11,    13,    14,    15,   361,   286,
      94,    98,     0,     0,   280,   282,   350,   231,   233,     0,
     227,   229,     0,   205,     0,   370,     0,   365,   339,   364,
     369,   357,   358,     0,   290,    22,     0,   154,   279,     0,
      29,    26,   197,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   162,   311,   312,     0,   323,     0,    75,    50,
       0,   377,   379,     0,   335,     0,   384,     0,   383,     0,
     405,     0,   406,   408,     0,     0,     0,    97,   100,   168,
     151,   151,   261,   206,   285,     0,   366,   348,   362,     0,
     300,   294,    12,    20,     0,   332,   333,     0,     0,     0,
     200,   102,     0,   102,   104,   112,     0,    12,   110,    58,
     118,   118,    36,   147,     0,   315,   330,     0,   325,   164,
     421,   379,   374,     0,   388,   387,     0,   409,   411,   410,
       0,     0,     0,    99,   168,     0,   179,     0,     0,     0,
     299,   371,   346,   343,     0,     0,   291,    10,   127,   157,
       0,    12,   125,    27,    32,     0,     0,   105,     0,     0,
      10,   118,     0,   118,     0,   148,   149,     0,   137,     0,
      61,     0,   313,   326,   324,     0,   203,     0,   382,   404,
       0,    16,   179,   101,     0,   183,   184,   185,   188,   187,
     186,   178,    89,   167,   169,     0,   177,   181,     0,   281,
     283,   262,   207,   151,   340,   367,   368,     0,   293,   130,
     133,     0,    10,   197,   103,    55,    52,   113,     0,     0,
       0,     0,     0,     0,   114,     0,   147,     0,   139,     0,
     329,   328,   378,   386,   407,    87,     0,     0,   172,   182,
       0,   171,     0,     0,   342,   295,   135,     0,     0,    21,
      30,     0,     0,     0,     0,   111,     0,   116,     0,   123,
     124,   121,   115,    12,     0,   140,     0,    62,     0,     0,
     191,     0,    81,     0,   347,   344,     0,     0,     0,     0,
     134,   126,    33,    12,   108,    56,    53,   117,   119,    12,
      10,     0,   143,     0,   142,     0,   327,   194,     0,     0,
     170,     0,     0,   348,     0,    12,     0,     0,     0,    10,
      12,    10,    85,   144,     0,   141,     0,   192,   189,   173,
     193,   345,     0,    10,    24,   128,    12,   106,    34,     0,
      10,     0,   146,    63,     0,     0,     0,     0,    10,   109,
     145,     0,   190,   147,   131,   129,     0,    12,     0,    12,
     107,    10,     0,    10,    64,   175,    12,   174,    68,    10,
       0,    65,    67,    69,   176,     0,    70,    71,     0,     0,
      72,     0,    12,    10,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    75,   175,   300,   414,   694,    77,
     446,   558,   502,   619,   245,   508,   139,   507,   452,   623,
     718,   459,   455,   664,   454,   663,   143,   154,   639,   705,
     751,   768,   771,   772,   773,   778,   781,   271,   272,   158,
      78,    79,   256,    80,   149,   460,    81,   421,   307,    82,
     306,    83,   423,   486,   487,   566,   513,   738,   695,   519,
     377,   522,   572,   720,   699,   671,   563,   620,   747,   656,
     759,   659,   688,   577,   578,   579,   365,   366,   161,   162,
     166,   546,   603,   647,   682,   745,   767,   604,   605,   606,
     607,   681,   608,   137,   246,   247,   453,    84,   278,   550,
     235,   316,   317,   312,   314,   315,   549,   112,    85,   241,
     490,   491,   351,    86,   128,   129,   361,   501,   556,   618,
     134,   360,    87,   389,   390,    88,   527,   407,   528,    89,
      90,   402,   474,    91,   224,    92,   352,   497,   614,   654,
     713,   553,   613,    93,    94,    95,    96,    97,    98,   354,
     438,   496,   439,   440,    99,   400,   401,   531,   281,   282,
     173,   297,   479,   540,   100,   275,   470,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -445
static const yytype_int16 yypact[] =
{
    -445,    51,    83,  -445,   814,  3082,  3082,  -115,  3082,  3082,
    3082,  3082,  3082,  3082,  3082,  -445,  3082,  3082,  3082,  3082,
    3082,  3082,  3082,    15,    15,  3082,    28,   -40,   -20,  -445,
    -445,   159,  -445,  -445,  -445,  -445,  3082,  -445,   -11,    -8,
       3,  -445,    26,  1696,  1822,  -445,  1948,  -445,  3082,    24,
     -37,    22,    56,    53,    52,    54,    63,   120,  -445,  -445,
     124,   127,  -445,  -445,  -445,  -445,  -445,  -445,  3082,  -445,
    -445,    -7,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,   119,   125,  -445,  -445,   130,  -445,  -445,  3335,
    -445,   246,  1209,   139,  -445,   163,  -445,   -50,  -445,   -26,
    -445,  -445,  2760,  2760,  3082,  2760,  2760,  3135,    64,    64,
     254,  -445,  3082,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
     168,   171,  -445,  -445,  -445,  -445,   173,   175,  -445,  -445,
     206,   -46,   -26,  2074,  -445,  3082,  -445,     5,  2760,  1570,
    -445,  3082,  3082,   194,  3082,  -445,  3380,  -445,  3421,   318,
    -445,   212,  2760,   579,   213,  3462,  -445,   279,   226,  -445,
     -21,     8,  -445,  -445,  -445,   360,    10,    15,    15,    15,
     233,  -445,  2200,   547,  3503,   232,  3082,   830,   654,   956,
     259,  -445,    43,  -445,  3082,  -445,  -445,  -445,  -445,  3082,
    3082,  3082,  3082,  3082,  3082,  3082,  3082,  3082,  3082,  3082,
    3082,  3082,  3082,  3082,  3082,  3082,  3082,  3082,    28,  -445,
    -445,  -445,  2326,  3082,  3082,  3082,  3082,  3082,  3082,  3082,
    3082,  3082,  3082,  3082,  -445,  -445,  -445,  3082,  3082,    -7,
     -49,  3544,  -445,    50,   -14,   238,  -445,   -46,  -445,  3585,
    3626,  2452,  3082,  -445,   297,  3082,   239,   375,  2760,   295,
     723,   316,  3667,  -445,  -445,  -445,   317,  -445,  -445,  -445,
    -445,   265,  -445,  3082,  -445,  -445,   -37,  -445,  1734,   325,
    -445,    -1,  -445,  -445,  -445,    20,   269,   270,   -10,    15,
    3872,   274,   403,  -445,  -445,    31,  -445,  -445,  -445,  -445,
    -445,  -445,  3208,    15,  -445,  -445,  -445,  -445,  -445,  -445,
     940,  1878,  -445,  -445,  -445,   343,  -445,   298,   277,   278,
     -46,   -26,  3082,  3011,  3082,  3082,  3082,  3082,  3943,  1562,
    1687,  1939,  1939,  1939,  1939,   718,   718,   718,   718,   358,
     358,    64,    64,    64,   254,   254,   254,  -445,    -3,  3135,
    3135,  3135,  3135,  3135,  3135,  3135,  3135,  3135,  3135,  3135,
    3135,  2452,    25,  2760,   271,  2004,  -445,   277,  -445,  2452,
    -445,    25,  -445,   393,    15,   281,   413,    36,    58,  2760,
     283,  3708,  -445,  -445,  -445,  -445,   411,    40,  -445,  -445,
     282,  -445,  2130,  -445,  1734,  1734,   290,   293,  -445,  -445,
    -445,   421,    15,   294,  -445,  -445,  -445,  -445,   300,  -445,
      41,  -445,  -445,  -445,  2578,  -445,  2704,  -445,  -445,   364,
     376,  2256,   299,   301,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,   319,   343,   302,  -445,  -445,   -46,  2885,  3135,  2634,
    4007,  4028,    28,  -445,   303,  -445,  3082,  -445,  -445,   -41,
    -445,  -445,  -445,   305,  -445,  -445,  1570,  -445,  -445,  2830,
    -445,  -445,  3082,  3082,    15,    14,  1734,   371,  1066,   -16,
     310,   350,  -445,  -445,  -445,   382,  1734,  1734,  -445,  -445,
      15,  -445,   -10,   442,  -445,    15,  2760,    15,  3913,    33,
    -445,  3082,  -445,  -445,   315,   343,   321,   450,  -445,  -445,
    2452,  2452,  -445,  -445,  -445,  2382,  -445,   326,  3082,  3082,
    -445,  -445,  -445,  -445,    15,    45,   272,  3082,  1192,   327,
    2760,   338,    15,   338,  -445,  -445,   448,  -445,  -445,  -445,
     329,   330,  -445,    34,   328,  -445,   346,   337,   471,  -445,
    -445,   -10,  -445,  3082,  -445,  -445,  2956,  -445,  -445,  -445,
     331,  1753,   340,   450,  -445,   343,   167,   344,   345,  3082,
     238,  -445,  -445,  -445,   339,  2508,   367,   257,  -445,  -445,
    3749,  -445,  -445,  -445,  -445,    14,   349,  -445,   351,  1734,
     402,  -445,   236,  -445,   157,  -445,  -445,   352,   486,   103,
    -445,  1734,  -445,  1734,  -445,    46,  3135,    15,  2760,  -445,
     353,  -445,   211,  -445,   424,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,  -445,   399,   287,  -445,    11,  -445,
    -445,  3967,  -445,  2452,   379,  -445,  -445,    25,  -445,  -445,
     273,   361,   422,  3082,  -445,  -445,  -445,  -445,   362,   251,
     372,  3082,   -12,   160,  -445,   366,    44,   440,   503,   343,
    -445,   396,  -445,  -445,  -445,  -445,   508,   452,  -445,  -445,
     455,  -445,   386,    25,  -445,  -445,   280,   383,  1570,  -445,
    -445,   387,   389,  1318,  1318,  -445,   390,  -445,  3264,  -445,
    -445,  -445,  -445,  -445,   227,   518,  1734,  -445,  1734,  1734,
     520,    13,   318,   521,  -445,  -445,   395,   510,   469,  3082,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
     394,   466,   528,  1734,  -445,   470,  -445,  -445,  1734,   473,
    -445,   476,  1734,   326,  3082,  -445,   407,  3790,  1444,   457,
    -445,   108,  -445,   537,  1734,  -445,   410,  -445,   539,  -445,
    -445,  -445,  3831,   485,  -445,  -445,  -445,  -445,  -445,   414,
     115,  1734,  -445,  -445,  1734,   423,   536,  1570,   482,  -445,
    -445,   425,  -445,    34,  -445,  -445,   427,  -445,   430,  -445,
    -445,   428,   223,   285,  -445,  -445,  -445,  -445,   474,   432,
     434,  -445,   474,  -445,  -445,   343,  -445,  -445,   504,   437,
    -445,   436,  -445,   439,  -445
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -445,  -445,  -445,  -445,  -445,  -175,  -445,  -445,     2,  -445,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,  -192,  -445,  -445,  -445,   193,  -445,
     288,   304,   -95,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -445,   104,    77,    47,  -445,   -59,  -445,
    -445,  -445,  -382,  -445,  -445,   -62,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,  -144,  -445,   -25,  -342,  -445,  -445,   356,
    -445,    66,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
      27,  -445,  -445,  -445,  -444,  -445,  -445,    16,  -445,  -445,
    -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,  -445,
    -445,  -445,  -445,   -23,  -185,  -445,  -445,  -445,  -445,  -445,
    -445,    67,    92,    99,  -445,  -445,  -445,    91,  -445,    21,
     467,  -306,  -445,   347,  -445,   222,  -445,  -445,  -445,  -445,
    -445,   -87,  -445,  -178,  -445,  -445,   -24,    -4,  -445,   132,
    -356,  -445,  -445,  -445,    -2,    97,   164,  -445,  -445,  -445,
     289,  -445,  -445,  -445,  -445,  -445,  -445,  -445
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -351
static const yytype_int16 yytable[] =
{
     121,   121,   130,   127,   309,   444,    76,   392,   509,   434,
     520,   227,   227,   242,   669,   227,   266,   443,   269,   650,
     498,   709,   131,   337,   132,   104,   102,   103,   394,   105,
     106,   107,   108,   109,   110,   111,   159,   113,   114,   115,
     116,   117,   118,   119,  -152,   512,   125,    33,   457,   472,
     120,     3,    33,  -155,   472,   309,   358,   138,   447,    33,
     432,   120,   151,    33,   146,   148,  -153,   152,   120,   155,
      33,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -2,   380,   120,   120,    33,    33,   174,
    -349,  -350,   408,   228,   228,   230,   435,   228,    33,   126,
     133,    33,   499,   156,   537,   575,   538,   539,   160,   205,
     206,   207,   398,   208,   308,   575,    33,  -336,  -336,   229,
     135,   357,   263,    33,    71,   231,   165,   521,   237,   140,
     670,    71,   141,   232,   637,    71,   176,   121,   163,   574,
     393,   244,    71,   142,   121,   121,   121,   243,   547,   548,
     267,   409,   270,   651,   239,   710,   240,   576,   249,    71,
      71,   395,   248,   152,   157,   252,   144,   576,   436,   534,
      71,   535,   164,    71,   437,  -138,   638,  -152,   310,   662,
     311,   458,   473,   437,   130,   127,  -155,   642,    71,   629,
     180,   633,   167,   280,   168,    71,   181,   301,   559,  -153,
    -122,  -122,  -122,   169,   131,   313,   132,  -120,  -120,  -120,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   310,
     310,   311,   311,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   123,   123,   493,   353,   355,
     631,   632,  -122,   631,   632,   121,   121,   367,   701,  -120,
     170,   655,   152,   369,   171,   594,   371,   172,   153,   182,
     121,   652,   595,   596,   597,   598,   599,   600,   601,   225,
    -156,   643,   420,   226,   382,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   685,  -286,   136,
     702,   634,   415,   208,   672,   210,   211,   426,   136,   594,
     233,   602,  -286,   411,   234,   121,   595,   596,   597,   598,
     599,   600,   601,   -23,   -23,   -23,   236,   557,   630,   631,
     632,  -336,  -336,   427,   251,   428,   429,   430,   431,   657,
     658,   121,   570,   666,   631,   632,   686,   687,   310,   255,
     311,  -132,  -132,  -132,   257,   645,   259,   310,   261,   311,
     388,   177,   178,   179,   250,   765,   766,   367,   262,   121,
     122,   124,   152,   268,   277,   367,   299,   305,   359,   370,
     152,   372,   265,   373,  -180,   374,   622,   376,   379,   273,
     274,   276,   595,   596,   597,   598,   599,   600,   391,   488,
     202,   203,   204,   205,   206,   207,   381,   208,   130,   127,
     396,   406,   397,  -156,   419,   405,   422,   424,   425,   445,
     441,   449,   448,   450,   456,   476,   461,   478,   131,   465,
     132,   121,   121,   466,   467,   480,   469,   481,   485,   437,
     471,   484,   516,   483,   494,   489,   500,   121,   503,   121,
     523,   524,   121,   525,   121,   533,   542,   495,   545,   565,
     518,   569,   488,   368,   544,   505,   552,   581,   580,   564,
     152,   571,   573,   248,   510,   437,   388,   388,   582,   583,
     589,   121,   591,   463,   464,   609,   610,   617,   615,   121,
     625,   628,   626,   635,   636,   646,   648,   644,   700,   653,
     399,   403,   541,   660,   665,   661,   367,   367,   121,   673,
     562,   152,   152,   675,   667,   412,   676,   678,   719,   353,
     555,   679,   593,   689,   721,   680,   683,   684,   560,   691,
     692,   703,   697,   708,   712,   714,   715,   716,   722,   723,
     733,   724,   121,   726,   739,   740,   728,   729,   388,   734,
     741,   743,   744,  -136,   586,   515,   749,   588,   388,   388,
     433,   748,   754,   753,   121,   526,   529,   756,   757,   760,
     611,   762,   764,   368,   775,   770,   774,   779,   780,   782,
     776,   368,   761,   784,   763,   468,   403,   711,   416,   543,
     568,   769,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   417,   696,   698,   783,   283,   758,
     592,   674,   624,   310,   273,   311,   677,   612,   284,   584,
     285,   286,   383,   287,   288,   289,   731,   264,   585,   367,
     554,     0,     0,   649,   152,     0,   532,     0,  -336,  -336,
       0,     0,     0,     0,   248,     0,     0,     0,     0,   310,
       0,   311,   668,     0,     0,     0,     0,     0,     0,     0,
     690,   388,     0,     0,     0,     0,     0,   290,   627,     0,
       0,   506,     0,   388,     0,   388,   511,   514,     0,     0,
     640,     0,   641,   291,   292,   293,     0,     0,     0,     0,
     294,   295,   530,     0,   399,     0,   296,   403,     0,   403,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     717,     0,   368,   368,     0,   283,     0,     0,     0,     0,
     737,   258,     0,     0,     0,   284,   403,   285,   286,     0,
     287,   288,   289,     0,   567,   732,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,     0,   755,
       0,     0,   777,   399,  -351,  -351,  -351,  -351,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,   388,     0,
     388,   388,     0,     0,   290,   704,     0,   706,   707,     0,
       0,     0,  -336,  -336,     0,     0,     0,   514,     0,     0,
       0,   292,   293,     0,     0,   388,     0,   294,   295,     0,
     388,   303,   725,   296,   388,     0,     0,   727,     0,   403,
       0,   730,     0,   375,     0,     0,   388,     5,     6,     7,
       8,     9,     0,   742,     0,     0,    10,     0,     0,     0,
       0,     0,     0,   388,     0,   368,   388,     0,     0,     0,
     750,     0,     0,   752,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,     0,     0,    29,    30,    31,    32,    33,     0,    34,
       0,   283,     0,    35,    36,    37,    38,     0,    39,     0,
      40,   284,    41,   285,   286,    42,   287,   288,   289,    43,
      44,    45,     0,    46,    47,     0,    48,    49,    50,     0,
       0,     0,    51,    52,    53,     0,    54,    55,    56,    57,
      58,    59,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,     0,    67,
     290,     0,    10,     0,    68,     0,    69,    70,     0,    71,
      72,    73,    74,     0,     0,     0,     0,   292,   293,     0,
       0,     0,     0,   294,   295,     0,   302,     0,     0,   296,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,     0,     0,    29,
      30,    31,    32,    33,     0,    34,     0,   283,     0,    35,
      36,    37,    38,     0,    39,     0,    40,   284,    41,   285,
     286,    42,   287,   288,   289,    43,    44,    45,     0,    46,
      47,     0,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,    54,    55,    56,   413,    58,    59,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     5,
       6,     7,     8,     9,     0,    67,   290,     0,    10,     0,
      68,     0,    69,    70,     0,    71,    72,    73,    74,     0,
       0,     0,   517,   292,   293,     0,     0,     0,     0,   294,
     295,     0,     0,     0,   304,   296,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,    29,    30,    31,    32,    33,
       0,    34,     0,     0,     0,    35,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
      50,     0,     0,     0,     0,     0,    53,     0,    54,    55,
      56,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     5,     6,     7,     8,     9,
       0,    67,     0,     0,    10,     0,    68,     0,    69,    70,
       0,    71,    72,    73,    74,     0,     0,     0,   561,     0,
       0,     0,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,  -336,  -336,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,    50,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,    69,    70,     0,    71,    72,    73,
      74,     0,     0,     0,   693,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,     0,    29,    30,    31,
      32,    33,     0,    34,     0,     0,     0,    35,    36,    37,
      38,     0,    39,     0,    40,     0,    41,     0,     0,    42,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,    50,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     5,     6,     7,
       8,     9,     0,    67,     0,     0,    10,     0,    68,     0,
      69,    70,     0,    71,    72,    73,    74,     0,     0,     0,
     736,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,     0,     0,    29,    30,    31,    32,    33,     0,    34,
       0,     0,     0,    35,    36,    37,    38,     0,    39,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,    43,
      44,     0,     0,    46,    47,     0,    48,    49,    50,     0,
       0,     0,     0,     0,    53,     0,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,     0,    67,
       0,     0,    10,     0,    68,     0,    69,    70,     0,    71,
      72,    73,    74,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,     0,     0,    29,
      30,    31,    32,    33,     0,    34,     0,     0,     0,    35,
      36,    37,    38,     0,    39,     0,    40,     0,    41,     0,
       0,    42,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,    50,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     5,
       6,     7,     8,     9,     0,    67,     0,     0,    10,     0,
      68,     0,    69,    70,     0,    71,    72,    73,    74,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,     0,   183,   184,   185,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,    35,   384,   385,   186,     0,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,    29,    30,   386,     0,     0,     0,    55,
      56,     0,     0,    35,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     5,     6,     7,     8,     9,
       0,    67,     0,     0,    10,     0,    68,     0,   145,     0,
       0,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   387,    62,    63,
      64,    65,    66,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,   183,   184,   185,
       0,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,    35,   590,   186,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,     0,     0,
       0,     0,     0,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,   147,     0,     0,    71,    72,    73,
      74,  -351,  -351,  -351,  -351,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,   183,   184,   185,     0,    29,    30,    31,
      32,    33,   418,     0,     0,     0,     0,    35,     0,   186,
       0,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,     0,     0,     0,     0,     0,     0,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     5,     6,     7,
       8,     9,     0,    67,     0,     0,    10,     0,    68,     0,
     150,     0,     0,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,   183,
     184,   185,     0,    29,    30,    31,    32,    33,   442,     0,
       0,     0,     0,    35,     0,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
       0,     0,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,     0,    67,
       0,     0,    10,     0,    68,   238,     0,     0,     0,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,   183,   184,   185,     0,    29,
      30,    31,    32,    33,   462,     0,     0,     0,     0,    35,
       0,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,     0,     0,     0,     0,
       0,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     5,
       6,     7,     8,     9,     0,    67,     0,     0,    10,     0,
      68,     0,     0,     0,     0,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,   338,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,   183,   184,   185,     0,    29,    30,    31,    32,    33,
     482,     0,     0,     0,     0,    35,     0,   186,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,     0,     0,     0,     0,     0,     0,     0,    55,
      56,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     5,     6,     7,     8,     9,
       0,    67,     0,     0,    10,     0,    68,     0,     0,     0,
       0,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,   364,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,   183,   184,   185,
       0,    29,    30,    31,    32,    33,   551,     0,     0,     0,
       0,    35,     0,   186,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,     0,     0,
       0,     0,     0,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,     0,     0,     0,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,   183,   184,   185,     0,    29,    30,    31,
      32,    33,   616,     0,     0,     0,     0,    35,     0,   186,
     492,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,     0,     0,     0,     0,     0,     0,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     5,     6,     7,
       8,     9,     0,    67,     0,     0,    10,     0,    68,     0,
       0,     0,     0,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,   477,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,   183,
     184,   185,     0,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,    35,     0,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
       0,     0,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,     0,    67,
       0,     0,    10,     0,    68,     0,     0,     0,     0,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,   504,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,   184,   185,     0,     0,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,    35,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     5,
       6,     7,     8,     9,     0,    67,     0,     0,    10,     0,
      68,     0,     0,     0,     0,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,   587,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,     0,   185,     0,     0,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,    35,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     5,     6,     7,     8,     9,
       0,    67,     0,     0,    10,     0,    68,     0,     0,     0,
       0,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,     0,     0,     0,
       0,    29,    30,    31,    32,    33,     0,     0,     0,     0,
     186,    35,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,     0,     0,     0,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,   183,   184,   185,     0,    29,    30,    31,
     410,    33,     0,     0,     0,     0,     0,    35,     0,   186,
     669,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,     0,     0,     0,     0,     0,     0,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,    67,   183,   184,   185,     0,    68,     0,
       0,     0,     0,    71,    72,    73,    74,     0,     0,     0,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,     0,     0,     0,   183,
     184,   185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   186,   670,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
     183,   184,   185,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,   183,   184,   185,     0,     0,     0,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   186,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   183,   184,   185,     0,     0,     0,     0,     0,
       0,     0,   253,     0,     0,     0,     0,     0,   186,     0,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   183,   184,   185,     0,     0,     0,     0,
       0,     0,     0,   254,     0,     0,     0,     0,     0,   186,
       0,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,   183,   184,   185,     0,     0,     0,
       0,     0,     0,     0,   260,     0,     0,     0,     0,     0,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,   183,   184,   185,     0,     0,
       0,     0,     0,     0,   298,     0,     0,     0,     0,     0,
       0,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   183,   184,   185,     0,
       0,     0,     0,     0,     0,   356,     0,     0,     0,     0,
       0,     0,   186,     0,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,   183,   184,   185,
       0,     0,     0,     0,     0,     0,   362,     0,     0,     0,
       0,     0,     0,   186,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,   183,   184,
     185,     0,     0,     0,     0,     0,     0,   363,     0,     0,
       0,     0,     0,     0,   186,     0,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,   183,
     184,   185,     0,     0,     0,     0,     0,     0,   378,     0,
       0,     0,     0,     0,     0,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
     183,   184,   185,     0,     0,     0,     0,     0,     0,   451,
       0,     0,     0,     0,     0,     0,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,   183,   184,   185,     0,     0,     0,     0,     0,     0,
     621,     0,     0,     0,     0,     0,     0,   186,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   183,   184,   185,     0,     0,     0,     0,     0,
       0,   735,     0,     0,     0,     0,     0,     0,   186,     0,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   746,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   404,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   536,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208
};

static const yytype_int16 yycheck[] =
{
      23,    24,    26,    26,   182,   361,     4,     8,   452,   351,
      26,    61,    61,     8,    26,    61,     8,   359,     8,     8,
      61,     8,    26,   208,    26,   140,     5,     6,     8,     8,
       9,    10,    11,    12,    13,    14,    73,    16,    17,    18,
      19,    20,    21,    22,     8,    31,    25,    73,     8,     8,
      71,     0,    73,     8,     8,   233,   234,    36,   364,    73,
      63,    71,    46,    73,    43,    44,     8,    46,    71,    48,
      73,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,   259,    71,    71,    73,    73,    68,
     140,   140,    61,   143,   143,    99,    71,   143,    73,    71,
     140,    73,   143,    79,    71,    71,    73,    74,   145,    45,
      46,    47,   122,    49,    71,    71,    73,    59,    60,   145,
     140,    71,   143,    73,   145,   104,    73,   143,   132,   140,
     142,   145,   140,   112,    31,   145,   143,   160,   116,   521,
     141,   139,   145,   140,   167,   168,   169,   142,   490,   491,
     142,   120,   142,   142,   133,   142,   135,   123,   142,   145,
     145,   141,   141,   142,   140,   144,   140,   123,   143,   475,
     145,   477,   116,   145,   352,   141,    73,   141,   182,   623,
     182,   141,   141,   361,   208,   208,   141,   141,   145,   571,
      71,   573,   140,   172,   140,   145,    71,   176,   504,   141,
      92,    93,    94,   140,   208,   184,   208,    92,    93,    94,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   233,
     234,   233,   234,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    23,    24,   432,   227,   228,
      93,    94,   144,    93,    94,   278,   279,   241,    31,   144,
     140,   617,   241,   242,   140,    98,   245,   140,    46,   139,
     293,   613,   105,   106,   107,   108,   109,   110,   111,   140,
       8,   587,   305,   120,   263,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   653,   139,   140,
      73,   144,   300,    49,   144,    59,    60,   311,   140,    98,
     139,   144,   139,   292,   139,   338,   105,   106,   107,   108,
     109,   110,   111,    66,    67,    68,   120,   502,    92,    93,
      94,    59,    60,   312,   140,   314,   315,   316,   317,    66,
      67,   364,   517,    92,    93,    94,    66,    67,   352,    31,
     352,    66,    67,    68,   142,   144,   143,   361,    79,   361,
     268,    72,    73,    74,   142,   142,   143,   351,   142,   392,
      23,    24,   351,    13,   141,   359,   144,   118,   140,    82,
     359,   142,   160,     8,    97,    90,   561,    71,    71,   167,
     168,   169,   105,   106,   107,   108,   109,   110,    73,   422,
      42,    43,    44,    45,    46,    47,   141,    49,   432,   432,
     141,     8,   142,   141,    71,   141,   118,   140,   140,    26,
     149,     8,   141,   140,    13,   404,   144,   406,   432,   139,
     432,   454,   455,   140,    13,    71,   142,    61,   119,   617,
     140,   140,    71,   144,   141,   143,   141,   470,   446,   472,
     140,   101,   475,    71,   477,    13,   141,   436,     8,   121,
     458,    13,   485,   241,   143,   449,   140,   121,   140,   142,
     449,   142,   142,   452,   453,   653,   384,   385,   141,     8,
     149,   504,   142,   384,   385,   141,   141,   120,   149,   512,
     141,    89,   141,   141,     8,    71,    97,   144,   673,   120,
     278,   279,   481,   142,   142,    83,   490,   491,   531,   143,
     508,   490,   491,    73,   142,   293,    13,   121,   693,   498,
     499,    13,   545,   140,   699,    73,    71,   141,   507,   142,
     141,    13,   142,    13,    13,   140,    26,    68,   144,    73,
     715,    13,   565,    73,    87,   720,    73,    71,   456,   142,
      13,   141,    13,    68,   533,   456,   142,   536,   466,   467,
     338,   736,    26,   140,   587,   466,   467,    85,   143,   142,
     549,   141,   144,   351,   140,   101,   144,    73,   141,   143,
     772,   359,   757,   144,   759,   392,   364,   682,   300,   485,
     513,   766,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   300,   664,   668,   782,    61,   753,
     544,   636,   565,   617,   392,   617,   639,   550,    71,   528,
      73,    74,   266,    76,    77,    78,   713,   160,   531,   613,
     498,    -1,    -1,   606,   613,    -1,   472,    -1,    59,    60,
      -1,    -1,    -1,    -1,   623,    -1,    -1,    -1,    -1,   653,
      -1,   653,   631,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     658,   569,    -1,    -1,    -1,    -1,    -1,   120,   569,    -1,
      -1,   449,    -1,   581,    -1,   583,   454,   455,    -1,    -1,
     581,    -1,   583,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,   144,   470,    -1,   472,    -1,   149,   475,    -1,   477,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     689,    -1,   490,   491,    -1,    61,    -1,    -1,    -1,    -1,
     718,   142,    -1,    -1,    -1,    71,   504,    73,    74,    -1,
      76,    77,    78,    -1,   512,   714,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,   747,
      -1,    -1,   775,   531,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,   676,    -1,
     678,   679,    -1,    -1,   120,   676,    -1,   678,   679,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,   565,    -1,    -1,
      -1,   137,   138,    -1,    -1,   703,    -1,   143,   144,    -1,
     708,   147,   703,   149,   712,    -1,    -1,   708,    -1,   587,
      -1,   712,    -1,    90,    -1,    -1,   724,     3,     4,     5,
       6,     7,    -1,   724,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,   741,    -1,   613,   744,    -1,    -1,    -1,
     741,    -1,    -1,   744,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    61,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    71,    88,    73,    74,    91,    76,    77,    78,    95,
      96,    97,    -1,    99,   100,    -1,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     120,    -1,    12,    -1,   140,    -1,   142,   143,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,   137,   138,    -1,
      -1,    -1,    -1,   143,   144,    -1,   146,    -1,    -1,   149,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    61,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    71,    88,    73,
      74,    91,    76,    77,    78,    95,    96,    97,    -1,    99,
     100,    -1,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,    -1,   112,   113,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,   120,    -1,    12,    -1,
     140,    -1,   142,   143,    -1,   145,   146,   147,   148,    -1,
      -1,    -1,    26,   137,   138,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,    -1,   148,   149,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    -1,    -1,    99,   100,    -1,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,    -1,    -1,    12,    -1,   140,    -1,   142,   143,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    59,    60,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    -1,
      -1,    99,   100,    -1,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,   110,    -1,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,    -1,    -1,
      12,    -1,   140,    -1,   142,   143,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    -1,    -1,    99,   100,    -1,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,   110,    -1,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,
     142,   143,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    -1,    -1,    99,   100,    -1,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,   110,    -1,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
      -1,    -1,    12,    -1,   140,    -1,   142,   143,    -1,   145,
     146,   147,   148,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    -1,    -1,    99,
     100,    -1,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
     110,    -1,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,    -1,    -1,    12,    -1,
     140,    -1,   142,   143,    -1,   145,   146,   147,   148,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    -1,     9,    10,    11,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    42,    43,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    69,    70,    71,    -1,    -1,    -1,   113,
     114,    -1,    -1,    79,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,    -1,    -1,    12,    -1,   140,    -1,   142,    -1,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,     9,    10,    11,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,   149,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,    -1,    -1,
      12,    -1,   140,    -1,   142,    -1,    -1,   145,   146,   147,
     148,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,     9,    10,    11,    -1,    69,    70,    71,
      72,    73,   144,    -1,    -1,    -1,    -1,    79,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,
     142,    -1,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,     9,
      10,    11,    -1,    69,    70,    71,    72,    73,   144,    -1,
      -1,    -1,    -1,    79,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
      -1,    -1,    12,    -1,   140,   141,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,     9,    10,    11,    -1,    69,
      70,    71,    72,    73,   144,    -1,    -1,    -1,    -1,    79,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,    -1,    -1,    12,    -1,
     140,    -1,    -1,    -1,    -1,   145,   146,   147,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,     9,    10,    11,    -1,    69,    70,    71,    72,    73,
     144,    -1,    -1,    -1,    -1,    79,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,    -1,    -1,    12,    -1,   140,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,     9,    10,    11,
      -1,    69,    70,    71,    72,    73,   144,    -1,    -1,    -1,
      -1,    79,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,    -1,    -1,
      12,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,     9,    10,    11,    -1,    69,    70,    71,
      72,    73,   144,    -1,    -1,    -1,    -1,    79,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,     9,
      10,    11,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
      -1,    -1,    12,    -1,   140,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    10,    11,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,    -1,    -1,    12,    -1,
     140,    -1,    -1,    -1,    -1,   145,   146,   147,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    -1,    11,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,    -1,    -1,    12,    -1,   140,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      25,    79,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,    -1,    -1,
      12,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,     9,    10,    11,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,   135,     9,    10,    11,    -1,   140,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   142,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   121,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   151,   152,     0,   153,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    75,    79,    80,    81,    82,    84,
      86,    88,    91,    95,    96,    97,    99,   100,   102,   103,
     104,   108,   109,   110,   112,   113,   114,   115,   116,   117,
     122,   123,   124,   125,   126,   127,   128,   135,   140,   142,
     143,   145,   146,   147,   148,   154,   158,   159,   190,   191,
     193,   196,   199,   201,   247,   258,   263,   272,   275,   279,
     280,   283,   285,   293,   294,   295,   296,   297,   298,   304,
     314,   317,   279,   279,   140,   279,   279,   279,   279,   279,
     279,   279,   257,   279,   279,   279,   279,   279,   279,   279,
      71,   263,   283,   285,   283,   279,    71,   263,   264,   265,
     296,   297,   304,   140,   270,   140,   140,   243,   279,   166,
     140,   140,   140,   176,   140,   142,   279,   142,   279,   194,
     142,   247,   279,   285,   177,   279,    79,   140,   189,    73,
     145,   228,   229,   116,   116,    73,   230,   140,   140,   140,
     140,   140,   140,   310,   279,   155,   143,   310,   310,   310,
      71,    71,   139,     9,    10,    11,    25,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    49,   142,
      59,    60,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   284,   140,   120,    61,   143,   145,
     297,   279,   279,   139,   139,   250,   120,   297,   141,   279,
     279,   259,     8,   142,   158,   164,   244,   245,   279,   247,
     285,   140,   279,   142,   142,    31,   192,   142,   142,   143,
     142,    79,   142,   143,   280,   285,     8,   142,    13,     8,
     142,   187,   188,   285,   285,   315,   285,   141,   248,    31,
     279,   308,   309,    61,    71,    73,    74,    76,    77,    78,
     120,   136,   137,   138,   143,   144,   149,   311,   141,   144,
     156,   279,   146,   147,   148,   118,   200,   198,    71,   293,
     297,   304,   253,   279,   254,   255,   251,   252,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   264,    31,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   262,   286,   279,   299,   279,   141,    71,   293,   140,
     271,   266,   141,   141,    31,   226,   227,   247,   285,   279,
      82,   279,   142,     8,    90,    90,    71,   210,   141,    71,
     155,   141,   279,   229,    42,    43,    71,   123,   272,   273,
     274,    73,     8,   141,     8,   141,   141,   142,   122,   285,
     305,   306,   281,   285,   121,   141,     8,   277,    61,   120,
      72,   279,   285,   115,   157,   158,   190,   191,   144,    71,
     263,   197,   118,   202,   140,   140,   297,   279,   279,   279,
     279,   279,    63,   285,   226,    71,   143,   293,   300,   302,
     303,   149,   144,   226,   300,    26,   160,   281,   141,     8,
     140,   141,   168,   246,   174,   172,    13,     8,   141,   171,
     195,   144,   144,   273,   273,   139,   140,    13,   188,   142,
     316,   140,     8,   141,   282,    31,   279,    31,   279,   312,
      71,    61,   144,   144,   140,   119,   203,   204,   263,   143,
     260,   261,    26,   264,   141,   279,   301,   287,    61,   143,
     141,   267,   162,   158,    31,   247,   285,   167,   165,   244,
     279,   285,    31,   206,   285,   273,    71,    26,   158,   209,
      26,   143,   211,   140,   101,    71,   273,   276,   278,   273,
     285,   307,   306,    13,   281,   281,   121,    71,    73,    74,
     313,   279,   141,   204,   143,     8,   231,   226,   226,   256,
     249,   144,   140,   291,   299,   279,   268,   155,   161,   281,
     279,    26,   158,   216,   142,   121,   205,   285,   205,    13,
     155,   142,   212,   142,   212,    71,   123,   223,   224,   225,
     140,   121,   141,     8,   277,   305,   279,    31,   279,   149,
     149,   142,   231,   263,    98,   105,   106,   107,   108,   109,
     110,   111,   144,   232,   237,   238,   239,   240,   242,   141,
     141,   279,   271,   292,   288,   149,   144,   120,   269,   163,
     217,   141,   155,   169,   206,   141,   141,   273,    89,   212,
      92,    93,    94,   212,   144,   141,     8,    31,    73,   178,
     273,   273,   141,   281,   144,   144,    71,   233,    97,   240,
       8,   142,   226,   120,   289,   300,   219,    66,    67,   221,
     142,    83,   244,   175,   173,   142,    92,   142,   279,    26,
     142,   215,   144,   143,   225,    73,    13,   263,   121,    13,
      73,   241,   234,    71,   141,   300,    66,    67,   222,   140,
     158,   142,   141,    26,   158,   208,   208,   142,   215,   214,
     155,    31,    73,    13,   273,   179,   273,   273,    13,     8,
     142,   192,    13,   290,   140,    26,    68,   279,   170,   155,
     213,   155,   144,    73,    13,   273,    73,   273,    73,    71,
     273,   291,   279,   155,   142,   141,    26,   158,   207,    87,
     155,    13,   273,   141,    13,   235,   141,   218,   155,   142,
     273,   180,   273,   140,    26,   158,    85,   143,   223,   220,
     142,   155,   141,   155,   144,   142,   143,   236,   181,   155,
     101,   182,   183,   184,   144,   140,   184,   263,   185,    73,
     141,   186,   143,   155,   144
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 7:

    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 8:

    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 9:

    { zval c; if (zend_get_constant("__COMPILER_HALT_OFFSET__", sizeof("__COMPILER_HALT_OFFSET__") - 1, &c TSRMLS_CC)) { zval_dtor(&c); zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used once per request"); } else { REGISTER_MAIN_LONG_CONSTANT("__COMPILER_HALT_OFFSET__", zend_get_scanned_file_offset(TSRMLS_C), CONST_CS); } YYACCEPT; }
    break;

  case 10:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 11:

    { HANDLE_INTERACTIVE(); }
    break;

  case 16:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 17:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 19:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 20:

    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 21:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 22:

    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 23:

    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 25:

    { (yyvsp[(1) - (2)]).u.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 26:

    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:

    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 28:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 29:

    { (yyvsp[(5) - (5)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 30:

    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 31:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 32:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 33:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 34:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 35:

    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 36:

    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 37:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 38:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 39:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 40:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 42:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 43:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 47:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 48:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 49:

    { zend_error(E_COMPILE_ERROR,"use: Not yet supported. Please use include_once() or require_once()");  zval_dtor(&(yyvsp[(2) - (3)]).u.constant); }
    break;

  case 51:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 52:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 55:

    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 56:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 57:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 58:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 60:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 61:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 62:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 63:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), 1 TSRMLS_CC); }
    break;

  case 64:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 65:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 66:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 67:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 68:

    { (yyval).u.opline_num = -1; }
    break;

  case 69:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 70:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 71:

    { (yyval).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 72:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), 0 TSRMLS_CC); }
    break;

  case 73:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 76:

    { zend_do_end_variable_parse(BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 77:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 78:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 79:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 80:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 81:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 82:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 83:

    { (yyvsp[(1) - (1)]).u.opline_num = CG(zend_lineno); }
    break;

  case 84:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).op_type, NULL TSRMLS_CC); }
    break;

  case 85:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 86:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 87:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 88:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 89:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 90:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 91:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 92:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 93:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 94:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 95:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 100:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 101:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 102:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 103:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 104:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 105:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 112:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 113:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 114:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 115:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 116:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 117:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 118:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 119:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 120:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 121:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 122:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 128:

    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 129:

    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 131:

    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 132:

    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 139:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 140:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 141:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 142:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 143:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 144:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 145:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 146:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 147:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 148:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 149:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL;}
    break;

  case 150:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 151:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 152:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 153:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 154:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 155:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 156:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 157:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 158:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 159:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 160:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 161:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 162:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 163:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 164:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 165:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 166:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 169:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 172:

    { (yyvsp[(2) - (2)]).u.opline_num = CG(zend_lineno); }
    break;

  case 173:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]), 1, (yyvsp[(4) - (5)]).op_type, &(yyvsp[(1) - (5)]) TSRMLS_CC); }
    break;

  case 174:

    { zend_do_abstract_method(&(yyvsp[(5) - (10)]), &(yyvsp[(1) - (10)]), &(yyvsp[(10) - (10)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (10)]) TSRMLS_CC); }
    break;

  case 175:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 176:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 177:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 178:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 179:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 180:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 181:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 182:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 183:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 184:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 185:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 186:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 187:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 188:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 189:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 190:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 191:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 192:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 193:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 194:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 195:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 196:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 197:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 198:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 199:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 200:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 201:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 202:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 203:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 204:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 205:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 206:

    { zend_error(E_STRICT, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 207:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 208:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 209:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 210:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 211:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 212:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 213:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 214:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 215:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 216:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 217:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 218:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 219:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 220:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 221:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 222:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 223:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 224:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 225:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 226:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 227:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 228:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 229:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 231:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 235:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 236:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 237:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 238:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 239:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 240:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 241:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 242:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 245:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 246:

    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 247:

    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 248:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 249:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 250:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 251:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 252:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 253:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 254:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 259:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 260:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 261:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 262:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 263:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 264:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 265:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 266:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 267:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 268:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 269:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 270:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 271:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 272:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 273:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 274:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 275:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 276:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 277:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 278:

    { (yyvsp[(2) - (2)]).u.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 280:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 282:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 283:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 284:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 285:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 286:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 291:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 292:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 295:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 296:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 297:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 298:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 299:

    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 300:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 301:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 302:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 303:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 304:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 305:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 306:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 307:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 308:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 309:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 310:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT TSRMLS_CC); }
    break;

  case 311:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 312:

    { zval minus_one;  Z_TYPE(minus_one) = IS_LONG; Z_LVAL(minus_one) = -1;  mul_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant, &minus_one TSRMLS_CC);  (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 313:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 314:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 315:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT TSRMLS_CC); }
    break;

  case 316:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT TSRMLS_CC); }
    break;

  case 317:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 318:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 319:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 320:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 321:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 322:

    { (yyval) = (yyvsp[(2) - (3)]); zend_do_end_heredoc(TSRMLS_C); }
    break;

  case 323:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 324:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 327:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 328:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 329:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 330:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 331:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 332:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 333:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 334:

    { zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 335:

    { zend_check_writable_variable(&(yyvsp[(1) - (2)])); }
    break;

  case 336:

    { zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 337:

    { zend_check_writable_variable(&(yyvsp[(1) - (2)])); }
    break;

  case 338:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 339:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 340:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 341:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 342:

    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 343:

    { (yyval).u.EA.type = 0; }
    break;

  case 344:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 345:

    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 346:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 347:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 348:

    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 349:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 350:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 351:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 352:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 353:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 354:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 355:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 356:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 357:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 358:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 359:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 360:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 361:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 362:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 363:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 364:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 365:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 366:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 367:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 368:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 369:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 370:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 371:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 372:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 373:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 376:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 377:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 378:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 379:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 380:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 381:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 382:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 383:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 384:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 385:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 386:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 387:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 388:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 389:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 390:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 391:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 392:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 393:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 394:

    { zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 395:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 396:

    { Z_LVAL((yyvsp[(2) - (2)]).u.constant) = (long) '['; zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 397:

    { Z_LVAL((yyvsp[(2) - (2)]).u.constant) = (long) ']'; zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 398:

    { Z_LVAL((yyvsp[(2) - (2)]).u.constant) = (long) '{'; zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 399:

    { Z_LVAL((yyvsp[(2) - (2)]).u.constant) = (long) '}'; zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 400:

    { znode tmp;  Z_LVAL((yyvsp[(2) - (2)]).u.constant) = (long) '-';  zend_do_add_char(&tmp, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC);  Z_LVAL((yyvsp[(2) - (2)]).u.constant) = (long) '>'; zend_do_add_char(&(yyval), &tmp, &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 401:

    { zend_do_init_string(&(yyval) TSRMLS_CC); }
    break;

  case 402:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 403:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 404:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 405:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 406:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 407:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 408:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 409:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 412:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 413:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 414:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 415:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 416:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 417:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 418:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 419:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 420:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 421:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 422:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT TSRMLS_CC); }
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

