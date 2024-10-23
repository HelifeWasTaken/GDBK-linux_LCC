/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 24 "SDCC.y"

#include <stdio.h>
#include <stdarg.h> 
#include <string.h>
#include "SDCCglobl.h"
#include "SDCCsymt.h"
#include "SDCChasht.h"
#include "SDCCval.h"
#include "SDCCmem.h"
#include "SDCCast.h"
#include "port.h"
#include "newalloc.h"
#include "SDCCerr.h"

extern int yyerror (char *);
extern FILE	*yyin;
int NestLevel = 0 ;     /* current NestLevel       */
int stackPtr  = 1 ;     /* stack pointer           */
int xstackPtr = 0 ;     /* xstack pointer          */
int reentrant = 0 ; 
int blockNo   = 0 ;     /* sequential block number  */
int currBlockno=0 ;
extern int yylex();
int yyparse(void);
extern int noLineno ;
char lbuff[1024];      /* local buffer */

/* break & continue stacks */
STACK_DCL(continueStack  ,symbol *,MAX_NEST_LEVEL)
STACK_DCL(breakStack  ,symbol *,MAX_NEST_LEVEL)
STACK_DCL(forStack  ,symbol *,MAX_NEST_LEVEL)
STACK_DCL(swStk   ,ast   *,MAX_NEST_LEVEL)
STACK_DCL(blockNum,int,MAX_NEST_LEVEL*3)

value *cenum = NULL  ;  /* current enumeration  type chain*/


#line 109 "SDCCy.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "SDCCy.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_NAME = 4,                  /* TYPE_NAME  */
  YYSYMBOL_CONSTANT = 5,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 7,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 8,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 9,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 10,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 11,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 12,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 13,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 14,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 15,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 16,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 17,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 18,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 19,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 20,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 21,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 22,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 23,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 24,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 25,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 26,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 27,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 28,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CODE = 34,                      /* CODE  */
  YYSYMBOL_EEPROM = 35,                    /* EEPROM  */
  YYSYMBOL_INTERRUPT = 36,                 /* INTERRUPT  */
  YYSYMBOL_SFR = 37,                       /* SFR  */
  YYSYMBOL_AT = 38,                        /* AT  */
  YYSYMBOL_SBIT = 39,                      /* SBIT  */
  YYSYMBOL_REENTRANT = 40,                 /* REENTRANT  */
  YYSYMBOL_USING = 41,                     /* USING  */
  YYSYMBOL_XDATA = 42,                     /* XDATA  */
  YYSYMBOL_DATA = 43,                      /* DATA  */
  YYSYMBOL_IDATA = 44,                     /* IDATA  */
  YYSYMBOL_PDATA = 45,                     /* PDATA  */
  YYSYMBOL_VAR_ARGS = 46,                  /* VAR_ARGS  */
  YYSYMBOL_CRITICAL = 47,                  /* CRITICAL  */
  YYSYMBOL_NONBANKED = 48,                 /* NONBANKED  */
  YYSYMBOL_BANKED = 49,                    /* BANKED  */
  YYSYMBOL_CHAR = 50,                      /* CHAR  */
  YYSYMBOL_SHORT = 51,                     /* SHORT  */
  YYSYMBOL_INT = 52,                       /* INT  */
  YYSYMBOL_LONG = 53,                      /* LONG  */
  YYSYMBOL_SIGNED = 54,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 55,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 56,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 57,                    /* DOUBLE  */
  YYSYMBOL_CONST = 58,                     /* CONST  */
  YYSYMBOL_VOLATILE = 59,                  /* VOLATILE  */
  YYSYMBOL_VOID = 60,                      /* VOID  */
  YYSYMBOL_BIT = 61,                       /* BIT  */
  YYSYMBOL_STRUCT = 62,                    /* STRUCT  */
  YYSYMBOL_UNION = 63,                     /* UNION  */
  YYSYMBOL_ENUM = 64,                      /* ENUM  */
  YYSYMBOL_ELIPSIS = 65,                   /* ELIPSIS  */
  YYSYMBOL_RANGE = 66,                     /* RANGE  */
  YYSYMBOL_FAR = 67,                       /* FAR  */
  YYSYMBOL_CASE = 68,                      /* CASE  */
  YYSYMBOL_DEFAULT = 69,                   /* DEFAULT  */
  YYSYMBOL_IF = 70,                        /* IF  */
  YYSYMBOL_ELSE = 71,                      /* ELSE  */
  YYSYMBOL_SWITCH = 72,                    /* SWITCH  */
  YYSYMBOL_WHILE = 73,                     /* WHILE  */
  YYSYMBOL_DO = 74,                        /* DO  */
  YYSYMBOL_FOR = 75,                       /* FOR  */
  YYSYMBOL_GOTO = 76,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 77,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 78,                     /* BREAK  */
  YYSYMBOL_RETURN = 79,                    /* RETURN  */
  YYSYMBOL_NAKED = 80,                     /* NAKED  */
  YYSYMBOL_INLINEASM = 81,                 /* INLINEASM  */
  YYSYMBOL_IFX = 82,                       /* IFX  */
  YYSYMBOL_ADDRESS_OF = 83,                /* ADDRESS_OF  */
  YYSYMBOL_GET_VALUE_AT_ADDRESS = 84,      /* GET_VALUE_AT_ADDRESS  */
  YYSYMBOL_SPIL = 85,                      /* SPIL  */
  YYSYMBOL_UNSPIL = 86,                    /* UNSPIL  */
  YYSYMBOL_GETHBIT = 87,                   /* GETHBIT  */
  YYSYMBOL_BITWISEAND = 88,                /* BITWISEAND  */
  YYSYMBOL_UNARYMINUS = 89,                /* UNARYMINUS  */
  YYSYMBOL_IPUSH = 90,                     /* IPUSH  */
  YYSYMBOL_IPOP = 91,                      /* IPOP  */
  YYSYMBOL_PCALL = 92,                     /* PCALL  */
  YYSYMBOL_ENDFUNCTION = 93,               /* ENDFUNCTION  */
  YYSYMBOL_JUMPTABLE = 94,                 /* JUMPTABLE  */
  YYSYMBOL_RRC = 95,                       /* RRC  */
  YYSYMBOL_RLC = 96,                       /* RLC  */
  YYSYMBOL_CAST = 97,                      /* CAST  */
  YYSYMBOL_CALL = 98,                      /* CALL  */
  YYSYMBOL_PARAM = 99,                     /* PARAM  */
  YYSYMBOL_NULLOP = 100,                   /* NULLOP  */
  YYSYMBOL_BLOCK = 101,                    /* BLOCK  */
  YYSYMBOL_LABEL = 102,                    /* LABEL  */
  YYSYMBOL_RECEIVE = 103,                  /* RECEIVE  */
  YYSYMBOL_SEND = 104,                     /* SEND  */
  YYSYMBOL_ARRAYINIT = 105,                /* ARRAYINIT  */
  YYSYMBOL_106_ = 106,                     /* '('  */
  YYSYMBOL_107_ = 107,                     /* ')'  */
  YYSYMBOL_108_ = 108,                     /* '['  */
  YYSYMBOL_109_ = 109,                     /* ']'  */
  YYSYMBOL_110_ = 110,                     /* '.'  */
  YYSYMBOL_111_ = 111,                     /* ','  */
  YYSYMBOL_112_ = 112,                     /* '&'  */
  YYSYMBOL_113_ = 113,                     /* '*'  */
  YYSYMBOL_114_ = 114,                     /* '+'  */
  YYSYMBOL_115_ = 115,                     /* '-'  */
  YYSYMBOL_116_ = 116,                     /* '~'  */
  YYSYMBOL_117_ = 117,                     /* '!'  */
  YYSYMBOL_118_ = 118,                     /* '/'  */
  YYSYMBOL_119_ = 119,                     /* '%'  */
  YYSYMBOL_120_ = 120,                     /* '<'  */
  YYSYMBOL_121_ = 121,                     /* '>'  */
  YYSYMBOL_122_ = 122,                     /* '^'  */
  YYSYMBOL_123_ = 123,                     /* '|'  */
  YYSYMBOL_124_ = 124,                     /* '?'  */
  YYSYMBOL_125_ = 125,                     /* ':'  */
  YYSYMBOL_126_ = 126,                     /* '='  */
  YYSYMBOL_127_ = 127,                     /* ';'  */
  YYSYMBOL_128_ = 128,                     /* '{'  */
  YYSYMBOL_129_ = 129,                     /* '}'  */
  YYSYMBOL_YYACCEPT = 130,                 /* $accept  */
  YYSYMBOL_file = 131,                     /* file  */
  YYSYMBOL_external_definition = 132,      /* external_definition  */
  YYSYMBOL_function_definition = 133,      /* function_definition  */
  YYSYMBOL_function_attribute = 134,       /* function_attribute  */
  YYSYMBOL_function_attributes = 135,      /* function_attributes  */
  YYSYMBOL_function_body = 136,            /* function_body  */
  YYSYMBOL_primary_expr = 137,             /* primary_expr  */
  YYSYMBOL_string_literal = 138,           /* string_literal  */
  YYSYMBOL_postfix_expr = 139,             /* postfix_expr  */
  YYSYMBOL_argument_expr_list = 140,       /* argument_expr_list  */
  YYSYMBOL_unary_expr = 141,               /* unary_expr  */
  YYSYMBOL_unary_operator = 142,           /* unary_operator  */
  YYSYMBOL_cast_expr = 143,                /* cast_expr  */
  YYSYMBOL_multiplicative_expr = 144,      /* multiplicative_expr  */
  YYSYMBOL_additive_expr = 145,            /* additive_expr  */
  YYSYMBOL_shift_expr = 146,               /* shift_expr  */
  YYSYMBOL_relational_expr = 147,          /* relational_expr  */
  YYSYMBOL_equality_expr = 148,            /* equality_expr  */
  YYSYMBOL_and_expr = 149,                 /* and_expr  */
  YYSYMBOL_exclusive_or_expr = 150,        /* exclusive_or_expr  */
  YYSYMBOL_inclusive_or_expr = 151,        /* inclusive_or_expr  */
  YYSYMBOL_logical_and_expr = 152,         /* logical_and_expr  */
  YYSYMBOL_logical_or_expr = 153,          /* logical_or_expr  */
  YYSYMBOL_conditional_expr = 154,         /* conditional_expr  */
  YYSYMBOL_assignment_expr = 155,          /* assignment_expr  */
  YYSYMBOL_assignment_operator = 156,      /* assignment_operator  */
  YYSYMBOL_expr = 157,                     /* expr  */
  YYSYMBOL_constant_expr = 158,            /* constant_expr  */
  YYSYMBOL_declaration = 159,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 160,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 161,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 162,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 163,  /* storage_class_specifier  */
  YYSYMBOL_Interrupt_storage = 164,        /* Interrupt_storage  */
  YYSYMBOL_type_specifier = 165,           /* type_specifier  */
  YYSYMBOL_type_specifier2 = 166,          /* type_specifier2  */
  YYSYMBOL_sfr_reg_bit = 167,              /* sfr_reg_bit  */
  YYSYMBOL_struct_or_union_specifier = 168, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 169,          /* struct_or_union  */
  YYSYMBOL_opt_stag = 170,                 /* opt_stag  */
  YYSYMBOL_stag = 171,                     /* stag  */
  YYSYMBOL_struct_declaration_list = 172,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 173,       /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 174,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 175,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 176,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 177,          /* enumerator_list  */
  YYSYMBOL_enumerator = 178,               /* enumerator  */
  YYSYMBOL_opt_assign_expr = 179,          /* opt_assign_expr  */
  YYSYMBOL_declarator = 180,               /* declarator  */
  YYSYMBOL_declarator2_function_attributes = 181, /* declarator2_function_attributes  */
  YYSYMBOL_declarator2 = 182,              /* declarator2  */
  YYSYMBOL_183_1 = 183,                    /* $@1  */
  YYSYMBOL_pointer = 184,                  /* pointer  */
  YYSYMBOL_unqualified_pointer = 185,      /* unqualified_pointer  */
  YYSYMBOL_type_specifier_list = 186,      /* type_specifier_list  */
  YYSYMBOL_parameter_identifier_list = 187, /* parameter_identifier_list  */
  YYSYMBOL_identifier_list = 188,          /* identifier_list  */
  YYSYMBOL_parameter_type_list = 189,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 190,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 191,    /* parameter_declaration  */
  YYSYMBOL_type_name = 192,                /* type_name  */
  YYSYMBOL_abstract_declarator = 193,      /* abstract_declarator  */
  YYSYMBOL_abstract_declarator2 = 194,     /* abstract_declarator2  */
  YYSYMBOL_initializer = 195,              /* initializer  */
  YYSYMBOL_initializer_list = 196,         /* initializer_list  */
  YYSYMBOL_statement = 197,                /* statement  */
  YYSYMBOL_labeled_statement = 198,        /* labeled_statement  */
  YYSYMBOL_start_block = 199,              /* start_block  */
  YYSYMBOL_end_block = 200,                /* end_block  */
  YYSYMBOL_compound_statement = 201,       /* compound_statement  */
  YYSYMBOL_202_2 = 202,                    /* $@2  */
  YYSYMBOL_203_3 = 203,                    /* $@3  */
  YYSYMBOL_declaration_list = 204,         /* declaration_list  */
  YYSYMBOL_statement_list = 205,           /* statement_list  */
  YYSYMBOL_expression_statement = 206,     /* expression_statement  */
  YYSYMBOL_else_statement = 207,           /* else_statement  */
  YYSYMBOL_selection_statement = 208,      /* selection_statement  */
  YYSYMBOL_209_4 = 209,                    /* @4  */
  YYSYMBOL_while = 210,                    /* while  */
  YYSYMBOL_do = 211,                       /* do  */
  YYSYMBOL_for = 212,                      /* for  */
  YYSYMBOL_iteration_statement = 213,      /* iteration_statement  */
  YYSYMBOL_expr_opt = 214,                 /* expr_opt  */
  YYSYMBOL_jump_statement = 215,           /* jump_statement  */
  YYSYMBOL_identifier = 216                /* identifier  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1777

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  250
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  388

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   360


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   117,     2,     2,     2,   119,   112,     2,
     106,   107,   113,   114,   111,   115,   110,   118,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   125,   127,
     120,   126,   121,   124,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   108,     2,   109,   122,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   128,   123,   129,   116,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   126,   126,   127,   131,   134,   159,   164,   173,   174,
     178,   183,   187,   191,   195,   202,   212,   222,   223,   231,
     232,   233,   234,   238,   242,   243,   244,   246,   250,   257,
     263,   265,   270,   271,   275,   276,   277,   278,   279,   280,
     284,   285,   286,   287,   288,   289,   293,   294,   298,   299,
     300,   301,   305,   306,   307,   311,   312,   313,   317,   318,
     323,   328,   333,   341,   342,   347,   355,   356,   360,   361,
     365,   366,   370,   371,   376,   377,   382,   383,   391,   392,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   451,   452,   456,   460,   461,   478,   479,   492,   493,
     509,   510,   514,   515,   520,   525,   530,   535,   540,   548,
     552,   553,   563,   568,   573,   578,   583,   588,   593,   598,
     603,   608,   613,   618,   623,   628,   633,   638,   643,   652,
     653,   657,   665,   669,   675,   685,   700,   710,   711,   715,
     716,   723,   734,   735,   747,   771,   772,   780,   781,   785,
     792,   797,   813,   830,   831,   833,   840,   852,   858,   871,
     872,   880,   881,   902,   903,   904,   913,   929,   930,   930,
     955,   966,   967,   972,   978,  1013,  1021,  1023,  1039,  1040,
    1044,  1045,  1053,  1054,  1058,  1059,  1067,  1076,  1084,  1085,
    1097,  1098,  1099,  1103,  1104,  1109,  1115,  1121,  1129,  1130,
    1131,  1137,  1150,  1151,  1152,  1156,  1157,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1177,  1178,  1179,  1182,  1185,  1189,
    1190,  1192,  1191,  1195,  1194,  1198,  1202,  1213,  1237,  1238,
    1242,  1243,  1247,  1248,  1253,  1254,  1254,  1277,  1290,  1303,
    1321,  1329,  1337,  1365,  1366,  1370,  1375,  1388,  1398,  1399,
    1403
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_NAME", "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP",
  "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CODE", "EEPROM", "INTERRUPT", "SFR", "AT", "SBIT",
  "REENTRANT", "USING", "XDATA", "DATA", "IDATA", "PDATA", "VAR_ARGS",
  "CRITICAL", "NONBANKED", "BANKED", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "BIT", "STRUCT", "UNION", "ENUM", "ELIPSIS", "RANGE", "FAR", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "NAKED", "INLINEASM", "IFX", "ADDRESS_OF",
  "GET_VALUE_AT_ADDRESS", "SPIL", "UNSPIL", "GETHBIT", "BITWISEAND",
  "UNARYMINUS", "IPUSH", "IPOP", "PCALL", "ENDFUNCTION", "JUMPTABLE",
  "RRC", "RLC", "CAST", "CALL", "PARAM", "NULLOP", "BLOCK", "LABEL",
  "RECEIVE", "SEND", "ARRAYINIT", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "file", "external_definition", "function_definition",
  "function_attribute", "function_attributes", "function_body",
  "primary_expr", "string_literal", "postfix_expr", "argument_expr_list",
  "unary_expr", "unary_operator", "cast_expr", "multiplicative_expr",
  "additive_expr", "shift_expr", "relational_expr", "equality_expr",
  "and_expr", "exclusive_or_expr", "inclusive_or_expr", "logical_and_expr",
  "logical_or_expr", "conditional_expr", "assignment_expr",
  "assignment_operator", "expr", "constant_expr", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "Interrupt_storage", "type_specifier",
  "type_specifier2", "sfr_reg_bit", "struct_or_union_specifier",
  "struct_or_union", "opt_stag", "stag", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "enumerator_list", "enumerator", "opt_assign_expr",
  "declarator", "declarator2_function_attributes", "declarator2", "$@1",
  "pointer", "unqualified_pointer", "type_specifier_list",
  "parameter_identifier_list", "identifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "type_name",
  "abstract_declarator", "abstract_declarator2", "initializer",
  "initializer_list", "statement", "labeled_statement", "start_block",
  "end_block", "compound_statement", "$@2", "$@3", "declaration_list",
  "statement_list", "expression_statement", "else_statement",
  "selection_statement", "@4", "while", "do", "for", "iteration_statement",
  "expr_opt", "jump_statement", "identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-334)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-222)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1262,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,     2,
      30,  -334,  1225,  -334,  -334,  -334,     4,  1649,  1649,     8,
    -334,  -334,    22,  -334,   575,  -334,   263,    20,  1556,  -334,
      22,   -67,   -54,  -334,  -334,  -334,   -38,  -334,   538,  -334,
    -334,  1091,   -61,   -52,  -334,   -19,  -334,  -334,  -334,     4,
     358,  -334,   575,    76,  -334,    90,  -334,  -334,  -334,  -334,
      15,   905,  -334,   278,  -334,  -334,  -334,  -334,  1556,   -85,
    -334,    -6,    22,  -334,    30,  -334,   861,  -334,  -334,  -334,
    1118,  1135,  1135,  1003,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,    69,  -334,  1091,  -334,    67,   119,   172,    44,
     220,   -24,    -9,    37,   121,    13,  -334,  -334,  -334,  1713,
    -334,    72,  1091,    16,    57,    64,  -334,  -334,  -334,    22,
      66,    75,   878,    95,  -334,  -334,   429,  -334,  -334,   -27,
    -334,  -334,  -334,  -334,   767,   437,  -334,  -334,   138,   641,
     139,  -334,  -334,   102,  -334,  -334,  -334,  -334,  -334,  1713,
     140,   135,  -334,  -334,   145,  -334,  -334,  -334,    22,  -334,
    1091,  -334,   -66,  -334,   861,  -334,  -334,  1003,  -334,  1091,
    -334,  -334,   -59,  1481,   141,    22,  -334,  -334,   976,  1091,
      22,  -334,  1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,
    1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,
    1091,   799,  -334,   890,   130,   641,  1091,  1091,   132,  -334,
    -334,  -334,   -18,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  1091,  1091,  -334,   131,   641,
    -334,  -334,  1091,   188,  1091,  -334,  1374,   157,   158,  -334,
    -334,  -334,    18,  -334,  -334,  -334,  -334,  -334,   -57,   161,
    -334,  1449,  1020,    63,  -334,    68,  1091,  -334,  -334,   163,
     160,    83,  -334,  -334,  -334,  -334,    67,    67,   119,   119,
     172,   172,   172,   172,    44,    44,   220,   -24,    -9,    37,
     121,    -4,  -334,  -334,  1091,   -13,  -334,   147,   641,  -334,
      38,    40,  -334,  -334,  -334,  -334,  -334,   437,    46,   168,
     165,   151,  1337,  -334,    34,  -334,  1681,  -334,  -334,   664,
    -334,  -334,  -334,   174,   175,  -334,   176,    68,  1588,  1065,
    -334,  -334,  1091,  -334,  1091,  -334,    10,  -334,  1091,  -334,
     641,  -334,  -334,   641,  1091,  1091,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,   177,  -334,   178,  -334,  -334,  -334,
    -334,   212,   641,  -334,    47,   159,  -334,  -334,   641,  -334,
    -334,   162,  1091,  -334,  -334,   181,   641,  -334
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   250,   131,   104,   105,   106,   107,   108,   123,   124,
     134,   133,   122,   125,   126,   127,   112,   113,   114,   115,
     116,   117,   121,   119,   120,   118,   128,   137,   138,     0,
       0,   175,     0,     2,     4,     5,     0,    96,    98,   110,
     132,   129,   140,   130,     0,   159,   161,     0,   171,   163,
       0,   152,     0,     1,     3,    94,     0,   100,     0,    97,
      99,     0,     0,   136,   141,     0,   217,     6,   226,     0,
       0,    17,     0,     0,    11,     0,    12,    14,    15,    13,
     168,     0,   162,     8,    16,   160,   176,   173,   172,     0,
     153,   158,     0,   164,     0,    95,     0,     7,    20,    23,
       0,     0,     0,     0,    40,    41,    42,    43,    44,    45,
      24,    21,    34,    46,     0,    48,    52,    55,    58,    63,
      66,    68,    70,    72,    74,    76,    93,   111,    19,     0,
     225,   102,     0,     0,     0,     0,   237,   238,   239,     0,
       0,     0,     0,     0,   230,   218,    46,    78,    91,     0,
     228,   207,   219,   208,   223,     0,   209,   210,     0,     0,
       0,   211,   212,    19,   227,    18,   109,    10,   167,     0,
       0,   178,   180,   165,     0,     9,   177,   174,   154,   150,
       0,   156,     0,   101,     0,   202,   103,     0,    38,     0,
      35,    36,     0,   188,     0,     0,    30,    31,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,     0,     0,     0,     0,   246,
     247,   248,     0,   213,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    80,     0,     0,   231,     0,     0,
     229,   220,     0,     0,   243,   214,   188,     0,   182,   184,
     187,   170,     0,   166,   155,   157,   151,   205,     0,     0,
      22,     0,     0,   190,   189,   191,     0,    29,    26,     0,
      32,     0,    28,    49,    50,    51,    53,    54,    56,    57,
      61,    62,    59,    60,    64,    65,    67,    69,    71,    73,
      75,     0,   135,   143,     0,     0,   145,   147,     0,   216,
       0,     0,   245,   249,    79,    92,   222,     0,     0,     0,
     244,     0,     0,   186,   190,   169,     0,   179,   181,     0,
     203,    39,   198,     0,     0,   194,     0,   192,     0,     0,
      47,    27,     0,    25,     0,   148,     0,   144,     0,   215,
       0,   235,   224,     0,     0,   243,   183,   185,   204,   206,
     199,   193,   195,   200,     0,   196,     0,    33,    77,   146,
     149,   233,     0,   240,     0,     0,   201,   197,     0,   234,
     236,     0,   243,   232,   241,     0,     0,   242
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -334,  -334,   259,  -334,   209,  -334,   236,  -334,  -334,  -334,
     -47,     1,  -334,   -75,    32,    33,   -21,    29,    85,    91,
      84,    88,    94,    89,   -46,   -79,  -334,  -102,   -73,    19,
      28,  -334,   221,  -334,  -334,    74,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,   100,  -334,   -30,  -334,   231,   150,  -334,
     -26,   -45,  -334,  -334,   -32,  -334,   -39,  -334,  -334,  -166,
    -334,     3,   -91,  -251,  -249,  -173,  -334,  -121,  -334,  -334,
    -149,   -17,  -334,  -334,   261,    86,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -333,  -334,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    32,    33,    34,    82,    83,    67,   110,   111,   112,
     279,   146,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   147,   148,   245,   149,   127,    68,
      69,    56,    57,    37,    84,    86,    39,    40,    41,    42,
      62,    63,   221,   222,   305,   306,    43,    89,    90,   181,
      44,    45,    46,   169,    47,    48,   256,   170,   171,   333,
     258,   259,   260,   274,   275,   186,   268,   150,   151,    70,
     152,   153,   248,   249,    72,   155,   156,   379,   157,   372,
     158,   159,   160,   161,   321,   162,   128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,   192,    85,   257,    52,     1,   251,     1,   174,    88,
      58,   267,   194,     1,   219,   126,    87,   185,     1,    35,
     334,     1,   375,     1,   337,     1,   178,    71,    36,    51,
      49,   219,    49,     1,   250,   126,    49,     1,   253,   201,
     232,    71,    64,   131,   179,   178,    61,    49,   270,   385,
      91,    35,   246,    93,   329,   165,   177,   209,   210,   224,
      36,    92,   113,   266,   193,    59,    60,   129,   131,    49,
     163,   334,   330,    94,    38,   337,  -139,   195,   196,   197,
     172,   166,   113,   327,   246,   192,   126,   192,   215,    95,
     223,   164,    91,   246,    49,   167,   269,   281,   346,   316,
     247,   188,   190,   191,   309,   185,    38,   265,   130,   313,
      30,    38,    38,   216,   347,   113,    30,    31,    38,   280,
     180,   344,   168,    31,   310,   311,    30,   283,   284,   285,
      50,    55,    38,   113,   126,   304,    30,   220,   218,   228,
     322,   225,   272,    31,    38,   350,    38,   351,   193,   246,
     318,   246,   320,   353,   381,   163,   359,   246,   246,   163,
     217,   273,   176,   226,   211,   212,   314,   315,   352,   271,
     227,   272,   364,   164,   338,   198,   339,   199,    91,   200,
     202,   113,   223,   207,   208,   203,   204,   349,   290,   291,
     292,   293,   343,   229,   246,   277,   250,   307,    96,   336,
     282,   340,   230,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   233,    49,   324,   163,   126,   255,    38,   371,
     323,   345,   373,   205,   206,   213,   214,   286,   287,   273,
     288,   289,   294,   295,   252,   254,   262,   261,   276,   163,
     185,   380,   374,   320,   263,   308,    49,   383,   126,   312,
     145,   319,   328,   280,   325,   387,   366,   176,   331,   326,
     341,   342,   348,   113,   354,   370,   246,   113,   355,    85,
     320,   360,   361,   378,   376,   362,   382,   377,   386,   384,
     324,    54,   175,   126,    97,   367,    52,   176,   368,    73,
     296,   298,   126,    74,    75,   113,   299,   297,   163,   301,
      76,    77,    78,   300,    73,   183,   369,   163,    74,    75,
     307,   303,    49,   182,    49,    76,    77,    78,   264,   357,
     176,   154,     0,     0,     0,   317,     0,     0,     0,     0,
     113,     0,     0,    79,     0,   113,    49,     0,     0,   113,
     163,     0,     0,   163,     0,     0,     0,     0,    79,    65,
       0,     1,     2,    98,    99,   100,     0,   101,   102,    80,
       0,    81,   163,     0,     0,     0,     0,     0,   163,     0,
       0,     0,     0,     0,     0,     0,   163,     3,     4,     5,
       6,     7,     8,     9,     0,    10,     0,    11,     0,     0,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,   132,   133,   134,     0,
     135,   136,   137,   138,   139,   140,   141,   142,    65,   143,
       1,     0,    98,    99,   100,     0,   101,   102,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,     0,     0,
       0,     0,     0,     0,   103,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,    66,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   133,   134,     0,   135,
     136,   137,   138,   139,   140,   141,   142,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
       0,     0,     2,   103,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,   244,     0,     0,     0,     0,
       0,     0,     0,     0,   144,    66,   145,     3,     4,     5,
       6,     7,     8,     9,     0,    10,    65,    11,     0,     2,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,     0,     3,     4,     5,     6,     7,     8,
       9,     0,    10,     0,    11,     0,     0,    12,    13,    14,
      15,     0,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,     0,    23,    24,    25,    26,    27,    28,    29,
       0,     0,    65,     0,     1,     0,    98,    99,   100,  -102,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,  -102,    66,     1,     0,    98,
      99,   100,     0,   101,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,   132,
     133,   134,     0,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,    66,
     103,     2,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,   358,     0,     0,     3,     4,     5,     6,
       7,     8,     9,     2,    10,     0,    11,     0,     0,    12,
      13,    14,    15,     0,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,     0,    23,    24,    25,    26,    27,
      28,    29,     0,     8,     9,     0,    10,     0,    11,     0,
       0,    12,    13,    14,    15,     0,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,     0,    23,    24,    25,
      26,    27,    28,    29,     1,     0,    98,    99,   100,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,    98,    99,   100,     0,   101,   102,     0,
       0,     0,     0,     1,     2,     0,  -221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
      98,    99,   100,     0,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,     0,    10,   302,    11,
       0,     0,    12,    13,    14,    15,     0,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,     0,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,     1,
       0,    98,    99,   100,   103,   101,   102,     0,     0,   184,
     104,   105,   106,   107,   108,   109,    30,     0,     0,     0,
       0,     0,     0,    31,     0,   231,     1,     2,    98,    99,
     100,   103,   101,   102,   173,   304,     0,   104,   105,   106,
     107,   108,   109,     1,     0,    98,    99,   100,     0,   101,
     102,     0,     0,     0,     0,     0,     0,     8,     9,     0,
      10,     0,    11,     0,     0,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,    18,    19,    20,    21,    22,
       0,    23,    24,    25,    26,    27,    28,    29,     1,     0,
      98,    99,   100,     0,   101,   102,     0,     0,     0,     0,
       0,     0,   103,   278,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,     1,     0,    98,    99,   100,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     1,     0,    98,    99,   100,   103,   101,   102,   335,
       0,     0,   104,   105,   106,   107,   108,   109,     1,     0,
      98,    99,   100,     0,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,     0,     0,   365,     0,     0,   104,   105,   106,
     107,   108,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   187,    53,     0,     0,     1,     2,
     104,   105,   106,   107,   108,   109,     0,     0,     0,     0,
       0,   189,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,     0,     3,     4,     5,     6,     7,     8,
       9,     0,    10,     0,    11,     1,     2,    12,    13,    14,
      15,     0,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,     0,    23,    24,    25,    26,    27,    28,    29,
       0,     3,     4,     5,     6,     7,     8,     9,     0,    10,
       0,    11,     0,     0,    12,    13,    14,    15,     0,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,     0,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,    31,     0,
       1,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     8,     9,     0,    10,    31,    11,     1,     2,    12,
      13,    14,    15,     0,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,     0,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,     0,     0,     0,     8,     9,
       0,    10,     0,    11,     0,     0,    12,    13,    14,    15,
       0,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,     0,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,     0,   322,   332,   272,     0,     0,     0,     0,
      31,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     322,     0,   272,     8,     9,     2,    10,    31,    11,     0,
       0,    12,    13,    14,    15,     0,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,     0,    23,    24,    25,
      26,    27,    28,    29,     0,     8,     9,     0,    10,     0,
      11,     0,     0,    12,    13,    14,    15,     0,     0,     0,
       0,    16,    17,    18,    19,    20,    21,    22,     0,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   271,   332,   272,     0,     0,
       2,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   271,     0,   272,
       8,     9,     2,    10,    31,    11,     0,     0,    12,    13,
      14,    15,     0,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,     0,    23,    24,    25,    26,    27,    28,
      29,     0,     8,     9,     0,    10,     0,    11,     0,     0,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,     2,    10,     0,    11,     0,
       0,    12,    13,    14,    15,   363,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,     0,    23,    24,    25,
      26,    27,    28,    29,     0,     8,     9,     2,    10,     0,
      11,     0,     0,    12,    13,    14,    15,   356,     0,     0,
       0,    16,    17,    18,    19,    20,    21,    22,     0,    23,
      24,    25,    26,    27,    28,    29,     0,     8,     9,     0,
      10,     0,    11,     0,     0,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,    18,    19,    20,    21,    22,
       0,    23,    24,    25,    26,    27,    28,    29
};

static const yytype_int16 yycheck[] =
{
       0,   103,    47,   169,    30,     3,   155,     3,    81,    48,
      36,   184,   103,     3,    18,    61,    48,    96,     3,     0,
     271,     3,   355,     3,   273,     3,   111,    44,     0,    29,
      30,    18,    32,     3,   155,    81,    36,     3,   159,   114,
     142,    58,    42,    69,   129,   111,    38,    47,   107,   382,
      50,    32,   111,   107,   111,    72,    88,    13,    14,   132,
      32,   128,    61,   129,   103,    37,    38,   128,    94,    69,
      70,   322,   129,   111,     0,   324,   128,     8,     9,    10,
      80,     5,    81,    65,   111,   187,   132,   189,   112,   127,
     129,    72,    92,   111,    94,     5,   187,   199,   111,   248,
     127,   100,   101,   102,   225,   184,    32,   180,   127,   127,
     106,    37,    38,   122,   127,   114,   106,   113,    44,   198,
     126,   125,   107,   113,   226,   227,   106,   202,   203,   204,
     128,   127,    58,   132,   180,   125,   106,   124,    17,   139,
     106,   125,   108,   113,    70,   107,    72,   107,   187,   111,
     252,   111,   254,   107,   107,   155,   329,   111,   111,   159,
     123,   193,    88,   106,   120,   121,   245,   246,   317,   106,
     106,   108,   338,   154,   106,   106,   108,   108,   178,   110,
     113,   180,   221,    11,    12,   118,   119,   308,   209,   210,
     211,   212,   109,   127,   111,   195,   317,   223,   126,   272,
     200,   276,   127,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   127,   223,   256,   225,   272,   125,   154,   350,
     256,   304,   353,   114,   115,    15,    16,   205,   206,   271,
     207,   208,   213,   214,   106,   106,   111,   107,   107,   249,
     329,   372,   354,   355,   109,   125,   256,   378,   304,   127,
     129,    73,   262,   342,   107,   386,   339,   193,   107,   111,
     107,   111,   125,   272,   106,   348,   111,   276,   127,   324,
     382,   107,   107,    71,   107,   109,   127,   109,   107,   127,
     322,    32,    83,   339,    58,   342,   322,   223,   344,    36,
     215,   217,   348,    40,    41,   304,   218,   216,   308,   220,
      47,    48,    49,   219,    36,    94,   346,   317,    40,    41,
     346,   221,   322,    92,   324,    47,    48,    49,   178,   326,
     256,    70,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
     339,    -1,    -1,    80,    -1,   344,   346,    -1,    -1,   348,
     350,    -1,    -1,   353,    -1,    -1,    -1,    -1,    80,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,   106,
      -1,   108,   372,    -1,    -1,    -1,    -1,    -1,   378,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   386,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    -1,    39,    -1,    -1,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,     1,    81,
       3,    -1,     5,     6,     7,    -1,     9,    10,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
     112,   113,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,   106,    -1,    -1,    -1,    -1,    -1,   112,
     113,   114,   115,   116,   117,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,     1,    39,    -1,     4,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    -1,    39,    -1,    -1,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,     1,    -1,     3,    -1,     5,     6,     7,   111,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,   128,     3,    -1,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
     106,     4,    -1,    -1,    -1,    -1,   112,   113,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,   129,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,     4,    37,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    -1,    34,    35,    -1,    37,    -1,    39,    -1,
      -1,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,     3,     4,    -1,   129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    37,   129,    39,
      -1,    -1,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,   117,     3,
      -1,     5,     6,     7,   106,     9,    10,    -1,    -1,   128,
     112,   113,   114,   115,   116,   117,   106,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   127,     3,     4,     5,     6,
       7,   106,     9,    10,   109,   125,    -1,   112,   113,   114,
     115,   116,   117,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      37,    -1,    39,    -1,    -1,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,   106,   107,    -1,    -1,    -1,    -1,   112,   113,
     114,   115,   116,   117,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,
     117,     3,    -1,     5,     6,     7,   106,     9,    10,   109,
      -1,    -1,   112,   113,   114,   115,   116,   117,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,   109,    -1,    -1,   112,   113,   114,
     115,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,     0,    -1,    -1,     3,     4,
     112,   113,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,
     115,   116,   117,    -1,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    -1,    39,     3,     4,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      -1,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      -1,    39,    -1,    -1,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    34,    35,    -1,    37,   113,    39,     3,     4,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    -1,    39,    -1,    -1,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    34,    35,     4,    37,   113,    39,    -1,
      -1,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    -1,    34,    35,    -1,    37,    -1,
      39,    -1,    -1,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
       4,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      34,    35,     4,    37,   113,    39,    -1,    -1,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    -1,    34,    35,    -1,    37,    -1,    39,    -1,    -1,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,     4,    37,    -1,    39,    -1,
      -1,    42,    43,    44,    45,   107,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    -1,    34,    35,     4,    37,    -1,
      39,    -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    -1,    34,    35,    -1,
      37,    -1,    39,    -1,    -1,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    29,    30,    31,    32,    33,    34,    35,
      37,    39,    42,    43,    44,    45,    50,    51,    52,    53,
      54,    55,    56,    58,    59,    60,    61,    62,    63,    64,
     106,   113,   131,   132,   133,   159,   160,   163,   165,   166,
     167,   168,   169,   176,   180,   181,   182,   184,   185,   216,
     128,   216,   180,     0,   132,   127,   161,   162,   180,   160,
     160,    38,   170,   171,   216,     1,   128,   136,   159,   160,
     199,   201,   204,    36,    40,    41,    47,    48,    49,    80,
     106,   108,   134,   135,   164,   181,   165,   184,   186,   177,
     178,   216,   128,   107,   111,   127,   126,   136,     5,     6,
       7,     9,    10,   106,   112,   113,   114,   115,   116,   117,
     137,   138,   139,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   158,   216,   128,
     127,   180,    68,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    81,   127,   129,   141,   154,   155,   157,
     197,   198,   200,   201,   204,   205,   206,   208,   210,   211,
     212,   213,   215,   216,   159,   201,     5,     5,   107,   183,
     187,   188,   216,   109,   158,   134,   165,   184,   111,   129,
     126,   179,   177,   162,   128,   155,   195,   106,   141,   106,
     141,   141,   157,   186,   192,     8,     9,    10,   106,   108,
     110,   143,   113,   118,   119,   114,   115,    11,    12,    13,
      14,   120,   121,    15,    16,   112,   122,   123,    17,    18,
     124,   172,   173,   186,   158,   125,   106,   106,   216,   127,
     127,   127,   157,   127,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,   126,   156,   111,   127,   202,   203,
     197,   200,   106,   197,   106,   125,   186,   189,   190,   191,
     192,   107,   111,   109,   178,   158,   129,   195,   196,   192,
     107,   106,   108,   184,   193,   194,   107,   216,   107,   140,
     155,   157,   216,   143,   143,   143,   144,   144,   145,   145,
     146,   146,   146,   146,   147,   147,   148,   149,   150,   151,
     152,   153,   129,   173,   125,   174,   175,   180,   125,   197,
     157,   157,   127,   127,   155,   155,   200,   205,   157,    73,
     157,   214,   106,   180,   184,   107,   111,    65,   216,   111,
     129,   107,   107,   189,   193,   109,   158,   194,   106,   108,
     143,   107,   111,   109,   125,   158,   111,   127,   125,   197,
     107,   107,   200,   107,   106,   127,    46,   191,   129,   195,
     107,   107,   109,   107,   189,   109,   158,   140,   154,   175,
     158,   197,   209,   197,   157,   214,   107,   109,    71,   207,
     197,   107,   127,   197,   127,   214,   107,   197
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   137,
     137,   137,   137,   138,   139,   139,   139,   139,   139,   139,
     139,   139,   140,   140,   141,   141,   141,   141,   141,   141,
     142,   142,   142,   142,   142,   142,   143,   143,   144,   144,
     144,   144,   145,   145,   145,   146,   146,   146,   147,   147,
     147,   147,   147,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   157,   157,   158,   159,   159,   160,   160,   160,   160,
     161,   161,   162,   162,   163,   163,   163,   163,   163,   164,
     165,   165,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   172,   172,   173,   174,   174,   175,   175,   175,
     176,   176,   176,   177,   177,   177,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   182,   182,   182,   183,   182,
     182,   184,   184,   184,   184,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   192,
     193,   193,   193,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   195,   195,   195,   196,   196,   197,   197,   197,
     197,   197,   197,   197,   198,   198,   198,   199,   200,   201,
     201,   202,   201,   203,   201,   201,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   209,   208,   210,   211,   212,
     213,   213,   213,   214,   214,   215,   215,   215,   215,   215,
     216
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     3,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     1,     1,     4,     3,     4,     3,     3,
       2,     2,     1,     3,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     3,     1,     2,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     2,     1,     1,     1,
       0,     1,     1,     2,     3,     1,     3,     1,     2,     3,
       4,     5,     2,     1,     2,     3,     2,     2,     0,     1,
       2,     1,     2,     1,     3,     3,     4,     3,     0,     5,
       4,     1,     2,     2,     3,     1,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     2,     1,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     3,     1,     1,     2,
       3,     0,     4,     0,     5,     2,     1,     2,     1,     2,
       1,     2,     2,     0,     6,     0,     6,     1,     1,     1,
       5,     7,     9,     0,     1,     3,     2,     2,     2,     3,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 4: /* external_definition: function_definition  */
#line 131 "SDCC.y"
                             { 
                               blockNo=0;
                             }
#line 1911 "SDCCy.c"
    break;

  case 5: /* external_definition: declaration  */
#line 134 "SDCC.y"
                             { 
			       if ((yyvsp[0].sym) && (yyvsp[0].sym)->type
				&& IS_FUNC((yyvsp[0].sym)->type))
			       {
 				   /* The only legal storage classes for 
				    * a function prototype (declaration)
				    * are extern and static. extern is the
				    * default. Thus, if this function isn't
				    * explicitly marked static, mark it
				    * extern.
				    */
				   if ((yyvsp[0].sym)->etype 
				    && IS_SPEC((yyvsp[0].sym)->etype)
				    && !SPEC_STAT((yyvsp[0].sym)->etype))
				   {
				   	SPEC_EXTR((yyvsp[0].sym)->etype) = 1;
				   }
			       }
                               addSymChain ((yyvsp[0].sym));
                               allocVariables ((yyvsp[0].sym)) ;
			       cleanUpLevel (SymbolTab,1);
                             }
#line 1938 "SDCCy.c"
    break;

  case 6: /* function_definition: declarator function_body  */
#line 159 "SDCC.y"
                               {   /* function type not specified */
                                   /* assume it to be 'int'       */
                                   addDecl((yyvsp[-1].sym),0,newIntLink());
				   (yyval.asts) = createFunction((yyvsp[-1].sym),(yyvsp[0].asts)); 
                               }
#line 1948 "SDCCy.c"
    break;

  case 7: /* function_definition: declaration_specifiers declarator function_body  */
#line 165 "SDCC.y"
                                {   
				    pointerTypes((yyvsp[-1].sym)->type,copyLinkChain((yyvsp[-2].lnk)));
				    addDecl((yyvsp[-1].sym),0,(yyvsp[-2].lnk)); 
				    (yyval.asts) = createFunction((yyvsp[-1].sym),(yyvsp[0].asts));   
				}
#line 1958 "SDCCy.c"
    break;

  case 9: /* function_attribute: function_attributes function_attribute  */
#line 174 "SDCC.y"
                                            { (yyval.lnk) = mergeSpec((yyvsp[-1].lnk),(yyvsp[0].lnk),"function_attribute"); }
#line 1964 "SDCCy.c"
    break;

  case 10: /* function_attributes: USING CONSTANT  */
#line 178 "SDCC.y"
                     {
                        (yyval.lnk) = newLink() ;
                        (yyval.lnk)->class = SPECIFIER   ;
			FUNC_REGBANK((yyval.lnk)) = (int) floatFromVal((yyvsp[0].val));
                     }
#line 1974 "SDCCy.c"
    break;

  case 11: /* function_attributes: REENTRANT  */
#line 183 "SDCC.y"
                     {  (yyval.lnk) = newLink ();
                        (yyval.lnk)->class = SPECIFIER   ;
			FUNC_ISREENT((yyval.lnk))=1;
                     }
#line 1983 "SDCCy.c"
    break;

  case 12: /* function_attributes: CRITICAL  */
#line 187 "SDCC.y"
                     {  (yyval.lnk) = newLink ();
                        (yyval.lnk)->class = SPECIFIER   ;
			FUNC_ISCRITICAL((yyval.lnk)) = 1;
                     }
#line 1992 "SDCCy.c"
    break;

  case 13: /* function_attributes: NAKED  */
#line 191 "SDCC.y"
                     {  (yyval.lnk) = newLink ();
                        (yyval.lnk)->class = SPECIFIER   ;
			FUNC_ISNAKED((yyval.lnk))=1;
                     }
#line 2001 "SDCCy.c"
    break;

  case 14: /* function_attributes: NONBANKED  */
#line 195 "SDCC.y"
                     {(yyval.lnk) = newLink ();
                        (yyval.lnk)->class = SPECIFIER   ;
                        FUNC_NONBANKED((yyval.lnk)) = 1;
			if (FUNC_BANKED((yyval.lnk))) {
			    werror(W_BANKED_WITH_NONBANKED);
			}
                     }
#line 2013 "SDCCy.c"
    break;

  case 15: /* function_attributes: BANKED  */
#line 202 "SDCC.y"
                     {(yyval.lnk) = newLink ();
                        (yyval.lnk)->class = SPECIFIER   ;
                        FUNC_BANKED((yyval.lnk)) = 1;
			if (FUNC_NONBANKED((yyval.lnk))) {
			    werror(W_BANKED_WITH_NONBANKED);
			}
			if (SPEC_STAT((yyval.lnk))) {
			    werror(W_BANKED_WITH_STATIC);
			}
                     }
#line 2028 "SDCCy.c"
    break;

  case 16: /* function_attributes: Interrupt_storage  */
#line 213 "SDCC.y"
                     {
                        (yyval.lnk) = newLink () ;
                        (yyval.lnk)->class = SPECIFIER ;
                        FUNC_INTNO((yyval.lnk)) = (yyvsp[0].yyint) ;
                        FUNC_ISISR((yyval.lnk)) = 1;
                     }
#line 2039 "SDCCy.c"
    break;

  case 18: /* function_body: declaration_list compound_statement  */
#line 224 "SDCC.y"
         {
            werror(E_OLD_STYLE,((yyvsp[-1].sym) ? (yyvsp[-1].sym)->name: "")) ;
	    exit(1);
         }
#line 2048 "SDCCy.c"
    break;

  case 19: /* primary_expr: identifier  */
#line 231 "SDCC.y"
                     {  (yyval.asts) = newAst_VALUE(symbolVal((yyvsp[0].sym)));  }
#line 2054 "SDCCy.c"
    break;

  case 20: /* primary_expr: CONSTANT  */
#line 232 "SDCC.y"
                     {  (yyval.asts) = newAst_VALUE((yyvsp[0].val));  }
#line 2060 "SDCCy.c"
    break;

  case 22: /* primary_expr: '(' expr ')'  */
#line 234 "SDCC.y"
                     {  (yyval.asts) = (yyvsp[-1].asts) ;                   }
#line 2066 "SDCCy.c"
    break;

  case 23: /* string_literal: STRING_LITERAL  */
#line 238 "SDCC.y"
                                        { (yyval.asts) = newAst_VALUE((yyvsp[0].val)); }
#line 2072 "SDCCy.c"
    break;

  case 25: /* postfix_expr: postfix_expr '[' expr ']'  */
#line 243 "SDCC.y"
                                        { (yyval.asts) = newNode	('[', (yyvsp[-3].asts), (yyvsp[-1].asts)) ; }
#line 2078 "SDCCy.c"
    break;

  case 26: /* postfix_expr: postfix_expr '(' ')'  */
#line 244 "SDCC.y"
                                        { (yyval.asts) = newNode  (CALL,(yyvsp[-2].asts),NULL); 
                                          (yyval.asts)->left->funcName = 1;}
#line 2085 "SDCCy.c"
    break;

  case 27: /* postfix_expr: postfix_expr '(' argument_expr_list ')'  */
#line 247 "SDCC.y"
          { 	   
	    (yyval.asts) = newNode  (CALL,(yyvsp[-3].asts),(yyvsp[-1].asts)) ; (yyval.asts)->left->funcName = 1;
	  }
#line 2093 "SDCCy.c"
    break;

  case 28: /* postfix_expr: postfix_expr '.' identifier  */
#line 251 "SDCC.y"
                      {    
			(yyvsp[0].sym) = newSymbol((yyvsp[0].sym)->name,NestLevel);
			(yyvsp[0].sym)->implicit = 1;
			(yyval.asts) = newNode(PTR_OP,newNode('&',(yyvsp[-2].asts),NULL),newAst_VALUE(symbolVal((yyvsp[0].sym))));
/* 			$$ = newNode('.',$1,newAst(EX_VALUE,symbolVal($3))) ;		        */
		      }
#line 2104 "SDCCy.c"
    break;

  case 29: /* postfix_expr: postfix_expr PTR_OP identifier  */
#line 258 "SDCC.y"
                      { 
			(yyvsp[0].sym) = newSymbol((yyvsp[0].sym)->name,NestLevel);
			(yyvsp[0].sym)->implicit = 1;			
			(yyval.asts) = newNode(PTR_OP,(yyvsp[-2].asts),newAst_VALUE(symbolVal((yyvsp[0].sym))));
		      }
#line 2114 "SDCCy.c"
    break;

  case 30: /* postfix_expr: postfix_expr INC_OP  */
#line 264 "SDCC.y"
                      {	(yyval.asts) = newNode(INC_OP,(yyvsp[-1].asts),NULL);}
#line 2120 "SDCCy.c"
    break;

  case 31: /* postfix_expr: postfix_expr DEC_OP  */
#line 266 "SDCC.y"
                      {	(yyval.asts) = newNode(DEC_OP,(yyvsp[-1].asts),NULL); }
#line 2126 "SDCCy.c"
    break;

  case 33: /* argument_expr_list: assignment_expr ',' argument_expr_list  */
#line 271 "SDCC.y"
                                            { (yyval.asts) = newNode(PARAM,(yyvsp[-2].asts),(yyvsp[0].asts)); }
#line 2132 "SDCCy.c"
    break;

  case 35: /* unary_expr: INC_OP unary_expr  */
#line 276 "SDCC.y"
                              { (yyval.asts) = newNode(INC_OP,NULL,(yyvsp[0].asts));  }
#line 2138 "SDCCy.c"
    break;

  case 36: /* unary_expr: DEC_OP unary_expr  */
#line 277 "SDCC.y"
                              { (yyval.asts) = newNode(DEC_OP,NULL,(yyvsp[0].asts));  }
#line 2144 "SDCCy.c"
    break;

  case 37: /* unary_expr: unary_operator cast_expr  */
#line 278 "SDCC.y"
                              { (yyval.asts) = newNode((yyvsp[-1].yyint),(yyvsp[0].asts),NULL)    ;  }
#line 2150 "SDCCy.c"
    break;

  case 38: /* unary_expr: SIZEOF unary_expr  */
#line 279 "SDCC.y"
                              { (yyval.asts) = newNode(SIZEOF,NULL,(yyvsp[0].asts));  }
#line 2156 "SDCCy.c"
    break;

  case 39: /* unary_expr: SIZEOF '(' type_name ')'  */
#line 280 "SDCC.y"
                              { (yyval.asts) = newAst_VALUE(sizeofOp((yyvsp[-1].lnk))); }
#line 2162 "SDCCy.c"
    break;

  case 40: /* unary_operator: '&'  */
#line 284 "SDCC.y"
            { (yyval.yyint) = '&' ;}
#line 2168 "SDCCy.c"
    break;

  case 41: /* unary_operator: '*'  */
#line 285 "SDCC.y"
            { (yyval.yyint) = '*' ;}
#line 2174 "SDCCy.c"
    break;

  case 42: /* unary_operator: '+'  */
#line 286 "SDCC.y"
            { (yyval.yyint) = '+' ;}
#line 2180 "SDCCy.c"
    break;

  case 43: /* unary_operator: '-'  */
#line 287 "SDCC.y"
            { (yyval.yyint) = '-' ;}
#line 2186 "SDCCy.c"
    break;

  case 44: /* unary_operator: '~'  */
#line 288 "SDCC.y"
            { (yyval.yyint) = '~' ;}
#line 2192 "SDCCy.c"
    break;

  case 45: /* unary_operator: '!'  */
#line 289 "SDCC.y"
            { (yyval.yyint) = '!' ;}
#line 2198 "SDCCy.c"
    break;

  case 47: /* cast_expr: '(' type_name ')' cast_expr  */
#line 294 "SDCC.y"
                                 { (yyval.asts) = newNode(CAST,newAst_LINK((yyvsp[-2].lnk)),(yyvsp[0].asts)); }
#line 2204 "SDCCy.c"
    break;

  case 49: /* multiplicative_expr: multiplicative_expr '*' cast_expr  */
#line 299 "SDCC.y"
                                       { (yyval.asts) = newNode('*',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2210 "SDCCy.c"
    break;

  case 50: /* multiplicative_expr: multiplicative_expr '/' cast_expr  */
#line 300 "SDCC.y"
                                       { (yyval.asts) = newNode('/',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2216 "SDCCy.c"
    break;

  case 51: /* multiplicative_expr: multiplicative_expr '%' cast_expr  */
#line 301 "SDCC.y"
                                       { (yyval.asts) = newNode('%',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2222 "SDCCy.c"
    break;

  case 53: /* additive_expr: additive_expr '+' multiplicative_expr  */
#line 306 "SDCC.y"
                                           { (yyval.asts)=newNode('+',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2228 "SDCCy.c"
    break;

  case 54: /* additive_expr: additive_expr '-' multiplicative_expr  */
#line 307 "SDCC.y"
                                           { (yyval.asts)=newNode('-',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2234 "SDCCy.c"
    break;

  case 56: /* shift_expr: shift_expr LEFT_OP additive_expr  */
#line 312 "SDCC.y"
                                       { (yyval.asts) = newNode(LEFT_OP,(yyvsp[-2].asts),(yyvsp[0].asts)); }
#line 2240 "SDCCy.c"
    break;

  case 57: /* shift_expr: shift_expr RIGHT_OP additive_expr  */
#line 313 "SDCC.y"
                                       { (yyval.asts) = newNode(RIGHT_OP,(yyvsp[-2].asts),(yyvsp[0].asts)); }
#line 2246 "SDCCy.c"
    break;

  case 59: /* relational_expr: relational_expr '<' shift_expr  */
#line 318 "SDCC.y"
                                       { 
	(yyval.asts) = (port->lt_nge ? 
	      newNode('!',newNode(GE_OP,(yyvsp[-2].asts),(yyvsp[0].asts)),NULL) :
	      newNode('<', (yyvsp[-2].asts),(yyvsp[0].asts)));
   }
#line 2256 "SDCCy.c"
    break;

  case 60: /* relational_expr: relational_expr '>' shift_expr  */
#line 323 "SDCC.y"
                                       { 
	   (yyval.asts) = (port->gt_nle ? 
		 newNode('!',newNode(LE_OP,(yyvsp[-2].asts),(yyvsp[0].asts)),NULL) :
		 newNode('>',(yyvsp[-2].asts),(yyvsp[0].asts)));
   }
#line 2266 "SDCCy.c"
    break;

  case 61: /* relational_expr: relational_expr LE_OP shift_expr  */
#line 328 "SDCC.y"
                                       { 
	   (yyval.asts) = (port->le_ngt ? 
		 newNode('!', newNode('>', (yyvsp[-2].asts) , (yyvsp[0].asts) ), NULL) :
		 newNode(LE_OP,(yyvsp[-2].asts),(yyvsp[0].asts)));
   }
#line 2276 "SDCCy.c"
    break;

  case 62: /* relational_expr: relational_expr GE_OP shift_expr  */
#line 333 "SDCC.y"
                                       { 
	   (yyval.asts) = (port->ge_nlt ? 
		 newNode('!', newNode('<', (yyvsp[-2].asts) , (yyvsp[0].asts) ), NULL) :
		 newNode(GE_OP,(yyvsp[-2].asts),(yyvsp[0].asts)));
   }
#line 2286 "SDCCy.c"
    break;

  case 64: /* equality_expr: equality_expr EQ_OP relational_expr  */
#line 342 "SDCC.y"
                                          { 
    (yyval.asts) = (port->eq_nne ? 
	  newNode('!',newNode(NE_OP,(yyvsp[-2].asts),(yyvsp[0].asts)),NULL) : 
	  newNode(EQ_OP,(yyvsp[-2].asts),(yyvsp[0].asts)));
   }
#line 2296 "SDCCy.c"
    break;

  case 65: /* equality_expr: equality_expr NE_OP relational_expr  */
#line 347 "SDCC.y"
                                         { 
       (yyval.asts) = (port->ne_neq ? 
	     newNode('!', newNode(EQ_OP,(yyvsp[-2].asts),(yyvsp[0].asts)), NULL) : 
	     newNode(NE_OP,(yyvsp[-2].asts),(yyvsp[0].asts)));
   }
#line 2306 "SDCCy.c"
    break;

  case 67: /* and_expr: and_expr '&' equality_expr  */
#line 356 "SDCC.y"
                                 { (yyval.asts) = newNode('&',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2312 "SDCCy.c"
    break;

  case 69: /* exclusive_or_expr: exclusive_or_expr '^' and_expr  */
#line 361 "SDCC.y"
                                    { (yyval.asts) = newNode('^',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2318 "SDCCy.c"
    break;

  case 71: /* inclusive_or_expr: inclusive_or_expr '|' exclusive_or_expr  */
#line 366 "SDCC.y"
                                             { (yyval.asts) = newNode('|',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2324 "SDCCy.c"
    break;

  case 73: /* logical_and_expr: logical_and_expr AND_OP inclusive_or_expr  */
#line 372 "SDCC.y"
                                 { (yyval.asts) = newNode(AND_OP,(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2330 "SDCCy.c"
    break;

  case 75: /* logical_or_expr: logical_or_expr OR_OP logical_and_expr  */
#line 378 "SDCC.y"
                                 { (yyval.asts) = newNode(OR_OP,(yyvsp[-2].asts),(yyvsp[0].asts)); }
#line 2336 "SDCCy.c"
    break;

  case 77: /* conditional_expr: logical_or_expr '?' logical_or_expr ':' conditional_expr  */
#line 384 "SDCC.y"
                     {
                        (yyval.asts) = newNode(':',(yyvsp[-2].asts),(yyvsp[0].asts)) ;
                        (yyval.asts) = newNode('?',(yyvsp[-4].asts),(yyval.asts)) ;
                     }
#line 2345 "SDCCy.c"
    break;

  case 79: /* assignment_expr: unary_expr assignment_operator assignment_expr  */
#line 393 "SDCC.y"
                     { 
				 
			     switch ((yyvsp[-1].yyint)) {
			     case '=':
				     (yyval.asts) = newNode((yyvsp[-1].yyint),(yyvsp[-2].asts),(yyvsp[0].asts));
				     break;
			     case MUL_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode('*',copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case DIV_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode('/',copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case MOD_ASSIGN:
			     	     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode('%',copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case ADD_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode('+',copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case SUB_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode('-',copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case LEFT_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode(LEFT_OP,copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case RIGHT_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode(RIGHT_OP,copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case AND_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode('&',copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case XOR_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode('^',copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     case OR_ASSIGN:
				     (yyval.asts) = newNode('=',(yyvsp[-2].asts),newNode('|',copyAst((yyvsp[-2].asts)),(yyvsp[0].asts)));
				     break;
			     default :
				     (yyval.asts) = NULL;
			     }
				     
                     }
#line 2391 "SDCCy.c"
    break;

  case 80: /* assignment_operator: '='  */
#line 437 "SDCC.y"
                     { (yyval.yyint) = '=' ;}
#line 2397 "SDCCy.c"
    break;

  case 92: /* expr: expr ',' assignment_expr  */
#line 452 "SDCC.y"
                              { (yyval.asts) = newNode(',',(yyvsp[-2].asts),(yyvsp[0].asts));}
#line 2403 "SDCCy.c"
    break;

  case 94: /* declaration: declaration_specifiers ';'  */
#line 460 "SDCC.y"
                                 { (yyval.sym) = NULL ; }
#line 2409 "SDCCy.c"
    break;

  case 95: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 462 "SDCC.y"
      {
         /* add the specifier list to the id */
         symbol *sym , *sym1;

         for (sym1 = sym = reverseSyms((yyvsp[-1].sym));sym != NULL;sym = sym->next) {
	     sym_link *lnk = copyLinkChain((yyvsp[-2].lnk));
	     /* do the pointer stuff */
	     pointerTypes(sym->type,lnk);
	     addDecl (sym,0,lnk) ;
	 }
        
	 (yyval.sym) = sym1 ;
      }
#line 2427 "SDCCy.c"
    break;

  case 96: /* declaration_specifiers: storage_class_specifier  */
#line 478 "SDCC.y"
                                                                        { (yyval.lnk) = (yyvsp[0].lnk); }
#line 2433 "SDCCy.c"
    break;

  case 97: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 479 "SDCC.y"
                                                    { 
     /* if the decl $2 is not a specifier */
     /* find the spec and replace it      */
     if ( !IS_SPEC((yyvsp[0].lnk))) {
       sym_link *lnk = (yyvsp[0].lnk) ;
       while (lnk && !IS_SPEC(lnk->next))
	 lnk = lnk->next;
       lnk->next = mergeSpec((yyvsp[-1].lnk),lnk->next, yytext);
       (yyval.lnk) = (yyvsp[0].lnk) ;
     }
     else
       (yyval.lnk) = mergeSpec((yyvsp[-1].lnk),(yyvsp[0].lnk), yytext);
   }
#line 2451 "SDCCy.c"
    break;

  case 98: /* declaration_specifiers: type_specifier  */
#line 492 "SDCC.y"
                                                    { (yyval.lnk) = (yyvsp[0].lnk); }
#line 2457 "SDCCy.c"
    break;

  case 99: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 493 "SDCC.y"
                                                    { 
     /* if the decl $2 is not a specifier */
     /* find the spec and replace it      */
     if ( !IS_SPEC((yyvsp[0].lnk))) {
       sym_link *lnk = (yyvsp[0].lnk) ;
       while (lnk && !IS_SPEC(lnk->next))
	 lnk = lnk->next;
       lnk->next = mergeSpec((yyvsp[-1].lnk),lnk->next, yytext);
       (yyval.lnk) = (yyvsp[0].lnk) ;
     }
     else
       (yyval.lnk) = mergeSpec((yyvsp[-1].lnk),(yyvsp[0].lnk), yytext);
   }
#line 2475 "SDCCy.c"
    break;

  case 101: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 510 "SDCC.y"
                                                   { (yyvsp[0].sym)->next = (yyvsp[-2].sym) ; (yyval.sym) = (yyvsp[0].sym);}
#line 2481 "SDCCy.c"
    break;

  case 102: /* init_declarator: declarator  */
#line 514 "SDCC.y"
                                 { (yyvsp[0].sym)->ival = NULL ; }
#line 2487 "SDCCy.c"
    break;

  case 103: /* init_declarator: declarator '=' initializer  */
#line 515 "SDCC.y"
                                 { (yyvsp[-2].sym)->ival = (yyvsp[0].ilist)   ; }
#line 2493 "SDCCy.c"
    break;

  case 104: /* storage_class_specifier: TYPEDEF  */
#line 520 "SDCC.y"
               {
                  (yyval.lnk) = newLink () ;
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_TYPEDEF((yyval.lnk)) = 1 ;
               }
#line 2503 "SDCCy.c"
    break;

  case 105: /* storage_class_specifier: EXTERN  */
#line 525 "SDCC.y"
               {
                  (yyval.lnk) = newLink();
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_EXTR((yyval.lnk)) = 1 ;
               }
#line 2513 "SDCCy.c"
    break;

  case 106: /* storage_class_specifier: STATIC  */
#line 530 "SDCC.y"
               {
                  (yyval.lnk) = newLink ();
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_STAT((yyval.lnk)) = 1 ;
               }
#line 2523 "SDCCy.c"
    break;

  case 107: /* storage_class_specifier: AUTO  */
#line 535 "SDCC.y"
               {
                  (yyval.lnk) = newLink () ;
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_SCLS((yyval.lnk)) = S_AUTO  ;
               }
#line 2533 "SDCCy.c"
    break;

  case 108: /* storage_class_specifier: REGISTER  */
#line 540 "SDCC.y"
               {
                  (yyval.lnk) = newLink ();
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_SCLS((yyval.lnk)) = S_REGISTER ;
               }
#line 2543 "SDCCy.c"
    break;

  case 109: /* Interrupt_storage: INTERRUPT CONSTANT  */
#line 548 "SDCC.y"
                         { (yyval.yyint) = (int) floatFromVal((yyvsp[0].val)) ;  }
#line 2549 "SDCCy.c"
    break;

  case 111: /* type_specifier: type_specifier2 AT constant_expr  */
#line 554 "SDCC.y"
        {
           /* add this to the storage class specifier  */
           SPEC_ABSA((yyvsp[-2].lnk)) = 1;   /* set the absolute addr flag */
           /* now get the abs addr from value */
           SPEC_ADDR((yyvsp[-2].lnk)) = (int) floatFromVal(constExprValue((yyvsp[0].asts),TRUE)) ;
        }
#line 2560 "SDCCy.c"
    break;

  case 112: /* type_specifier2: CHAR  */
#line 563 "SDCC.y"
            {
               (yyval.lnk)=newLink();
               (yyval.lnk)->class = SPECIFIER   ;
               SPEC_NOUN((yyval.lnk)) = V_CHAR  ;
            }
#line 2570 "SDCCy.c"
    break;

  case 113: /* type_specifier2: SHORT  */
#line 568 "SDCC.y"
            {
               (yyval.lnk)=newLink();
               (yyval.lnk)->class = SPECIFIER   ;
	       (yyval.lnk)->select.s._short = 1 ;
            }
#line 2580 "SDCCy.c"
    break;

  case 114: /* type_specifier2: INT  */
#line 573 "SDCC.y"
            {
               (yyval.lnk)=newLink();
               (yyval.lnk)->class = SPECIFIER   ;
               SPEC_NOUN((yyval.lnk)) = V_INT   ;
            }
#line 2590 "SDCCy.c"
    break;

  case 115: /* type_specifier2: LONG  */
#line 578 "SDCC.y"
            {
               (yyval.lnk)=newLink();
               (yyval.lnk)->class = SPECIFIER   ;
	       SPEC_LONG((yyval.lnk)) = 1       ;
            }
#line 2600 "SDCCy.c"
    break;

  case 116: /* type_specifier2: SIGNED  */
#line 583 "SDCC.y"
            {
               (yyval.lnk)=newLink();
               (yyval.lnk)->class = SPECIFIER   ;
               (yyval.lnk)->select.s._signed = 1;
            }
#line 2610 "SDCCy.c"
    break;

  case 117: /* type_specifier2: UNSIGNED  */
#line 588 "SDCC.y"
               {
               (yyval.lnk)=newLink();
               (yyval.lnk)->class = SPECIFIER   ;
               SPEC_USIGN((yyval.lnk)) = 1      ;
            }
#line 2620 "SDCCy.c"
    break;

  case 118: /* type_specifier2: VOID  */
#line 593 "SDCC.y"
            {
               (yyval.lnk)=newLink();
               (yyval.lnk)->class = SPECIFIER   ;
               SPEC_NOUN((yyval.lnk)) = V_VOID  ;
            }
#line 2630 "SDCCy.c"
    break;

  case 119: /* type_specifier2: CONST  */
#line 598 "SDCC.y"
            {
               (yyval.lnk)=newLink();
	       (yyval.lnk)->class = SPECIFIER ;
	       SPEC_CONST((yyval.lnk)) = 1;
            }
#line 2640 "SDCCy.c"
    break;

  case 120: /* type_specifier2: VOLATILE  */
#line 603 "SDCC.y"
               {
               (yyval.lnk)=newLink();
	       (yyval.lnk)->class = SPECIFIER ;
	       SPEC_VOLATILE((yyval.lnk)) = 1 ;
            }
#line 2650 "SDCCy.c"
    break;

  case 121: /* type_specifier2: FLOAT  */
#line 608 "SDCC.y"
            {
               (yyval.lnk)=newLink();
	       SPEC_NOUN((yyval.lnk)) = V_FLOAT;
	       (yyval.lnk)->class = SPECIFIER ;
            }
#line 2660 "SDCCy.c"
    break;

  case 122: /* type_specifier2: XDATA  */
#line 613 "SDCC.y"
               {
                  (yyval.lnk) = newLink ();
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_SCLS((yyval.lnk)) = S_XDATA  ;
               }
#line 2670 "SDCCy.c"
    break;

  case 123: /* type_specifier2: CODE  */
#line 618 "SDCC.y"
               {
                  (yyval.lnk) = newLink () ;
                  (yyval.lnk)->class = SPECIFIER  ;
                  SPEC_SCLS((yyval.lnk)) = S_CODE ;                 
               }
#line 2680 "SDCCy.c"
    break;

  case 124: /* type_specifier2: EEPROM  */
#line 623 "SDCC.y"
                 {
                  (yyval.lnk) = newLink () ;
                  (yyval.lnk)->class = SPECIFIER  ;
                  SPEC_SCLS((yyval.lnk)) = S_EEPROM ;
               }
#line 2690 "SDCCy.c"
    break;

  case 125: /* type_specifier2: DATA  */
#line 628 "SDCC.y"
               {
                  (yyval.lnk) = newLink ();
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_SCLS((yyval.lnk)) = S_DATA   ;
               }
#line 2700 "SDCCy.c"
    break;

  case 126: /* type_specifier2: IDATA  */
#line 633 "SDCC.y"
               {
                  (yyval.lnk) = newLink ();
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_SCLS((yyval.lnk)) = S_IDATA  ;
               }
#line 2710 "SDCCy.c"
    break;

  case 127: /* type_specifier2: PDATA  */
#line 638 "SDCC.y"
               { 
                  (yyval.lnk) = newLink ();
                  (yyval.lnk)->class = SPECIFIER ;
                  SPEC_SCLS((yyval.lnk)) = S_PDATA  ;
               }
#line 2720 "SDCCy.c"
    break;

  case 128: /* type_specifier2: BIT  */
#line 643 "SDCC.y"
            {
               (yyval.lnk)=newLink();
               (yyval.lnk)->class = SPECIFIER   ;
               SPEC_NOUN((yyval.lnk)) = V_BIT   ;
	       SPEC_SCLS((yyval.lnk)) = S_BIT   ;
	       SPEC_BLEN((yyval.lnk)) = 1;
	       SPEC_BSTR((yyval.lnk)) = 0;
            }
#line 2733 "SDCCy.c"
    break;

  case 130: /* type_specifier2: enum_specifier  */
#line 653 "SDCC.y"
                        {                           
                           cenum = NULL ;
                           (yyval.lnk) = (yyvsp[0].lnk) ;                              
                        }
#line 2742 "SDCCy.c"
    break;

  case 131: /* type_specifier2: TYPE_NAME  */
#line 658 "SDCC.y"
         {
            symbol *sym;
            sym_link   *p  ;
            sym = findSym(TypedefTab,NULL,(yyvsp[0].yychar)) ;
            (yyval.lnk) = p = copyLinkChain(sym->type);
	    SPEC_TYPEDEF(getSpec(p)) = 0;
         }
#line 2754 "SDCCy.c"
    break;

  case 133: /* sfr_reg_bit: SBIT  */
#line 669 "SDCC.y"
            {
               (yyval.lnk) = newLink() ;
               (yyval.lnk)->class = SPECIFIER ;
               SPEC_NOUN((yyval.lnk)) = V_SBIT;
               SPEC_SCLS((yyval.lnk)) = S_SBIT;
            }
#line 2765 "SDCCy.c"
    break;

  case 134: /* sfr_reg_bit: SFR  */
#line 675 "SDCC.y"
            {
               (yyval.lnk) = newLink() ;
               (yyval.lnk)->class = SPECIFIER ;
               SPEC_NOUN((yyval.lnk)) = V_CHAR;
               SPEC_SCLS((yyval.lnk)) = S_SFR ;
	       SPEC_USIGN((yyval.lnk)) = 1 ;
            }
#line 2777 "SDCCy.c"
    break;

  case 135: /* struct_or_union_specifier: struct_or_union opt_stag '{' struct_declaration_list '}'  */
#line 686 "SDCC.y"
        {
           structdef *sdef ;

           /* Create a structdef   */
           sdef = (yyvsp[-3].sdef) ;
           sdef->fields   = reverseSyms((yyvsp[-1].sym)) ;   /* link the fields */
           sdef->size  = compStructSize((yyvsp[-4].yyint),sdef);   /* update size of  */

           /* Create the specifier */
           (yyval.lnk) = newLink () ;
           (yyval.lnk)->class = SPECIFIER   ;
           SPEC_NOUN((yyval.lnk)) = V_STRUCT;
           SPEC_STRUCT((yyval.lnk))= sdef ;
        }
#line 2796 "SDCCy.c"
    break;

  case 136: /* struct_or_union_specifier: struct_or_union stag  */
#line 701 "SDCC.y"
         {
            (yyval.lnk) = newLink() ;
            (yyval.lnk)->class = SPECIFIER   ;
            SPEC_NOUN((yyval.lnk)) = V_STRUCT;
            SPEC_STRUCT((yyval.lnk)) = (yyvsp[0].sdef) ;
         }
#line 2807 "SDCCy.c"
    break;

  case 137: /* struct_or_union: STRUCT  */
#line 710 "SDCC.y"
                     { (yyval.yyint) = STRUCT ; }
#line 2813 "SDCCy.c"
    break;

  case 138: /* struct_or_union: UNION  */
#line 711 "SDCC.y"
                     { (yyval.yyint) = UNION  ; }
#line 2819 "SDCCy.c"
    break;

  case 140: /* opt_stag: %empty  */
#line 716 "SDCC.y"
   {  /* synthesize a name add to structtable */
     (yyval.sdef) = newStruct(genSymName(NestLevel)) ;
     (yyval.sdef)->level = NestLevel ;
     addSym (StructTab, (yyval.sdef), (yyval.sdef)->tag,(yyval.sdef)->level,currBlockno, 0);
}
#line 2829 "SDCCy.c"
    break;

  case 141: /* stag: identifier  */
#line 723 "SDCC.y"
               {  /* add name to structure table */
     (yyval.sdef) = findSymWithBlock (StructTab,(yyvsp[0].sym),currBlockno);
     if (! (yyval.sdef) ) {
       (yyval.sdef) = newStruct((yyvsp[0].sym)->name) ;
       (yyval.sdef)->level = NestLevel ;
       addSym (StructTab, (yyval.sdef), (yyval.sdef)->tag,(yyval.sdef)->level,currBlockno,0);
     }
}
#line 2842 "SDCCy.c"
    break;

  case 143: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 736 "SDCC.y"
       {
	   symbol *sym = (yyvsp[0].sym);
	   /* go to the end of the chain */
	   while (sym->next) sym = sym->next;

           sym->next = (yyvsp[-1].sym) ;
           (yyval.sym) = (yyvsp[0].sym);
       }
#line 2855 "SDCCy.c"
    break;

  case 144: /* struct_declaration: type_specifier_list struct_declarator_list ';'  */
#line 748 "SDCC.y"
       {
           /* add this type to all the symbols */
           symbol *sym ;
           for ( sym = (yyvsp[-1].sym) ; sym != NULL ; sym = sym->next ) {
	       
	       /* make the symbol one level up */
	       sym->level-- ;

	       pointerTypes(sym->type,copyLinkChain((yyvsp[-2].lnk)));
	       if (!sym->type) {
		   sym->type = copyLinkChain((yyvsp[-2].lnk));
		   sym->etype = getSpec(sym->type);
	       }
	       else
		   addDecl (sym,0,cloneSpec((yyvsp[-2].lnk)));   	       
	       /* make sure the type is complete and sane */
	       checkTypeSanity(sym->etype, sym->name);
	   }
           (yyval.sym) = (yyvsp[-1].sym);
       }
#line 2880 "SDCCy.c"
    break;

  case 146: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 773 "SDCC.y"
       {
           (yyvsp[0].sym)->next  = (yyvsp[-2].sym) ;
           (yyval.sym) = (yyvsp[0].sym) ;
       }
#line 2889 "SDCCy.c"
    break;

  case 148: /* struct_declarator: ':' constant_expr  */
#line 781 "SDCC.y"
                        {  
                           (yyval.sym) = newSymbol (genSymName(NestLevel),NestLevel) ; 
                           (yyval.sym)->bitVar = (int) floatFromVal(constExprValue((yyvsp[0].asts),TRUE));
                        }
#line 2898 "SDCCy.c"
    break;

  case 149: /* struct_declarator: declarator ':' constant_expr  */
#line 786 "SDCC.y"
                        { 
			  (yyvsp[-2].sym)->bitVar = (int) floatFromVal(constExprValue((yyvsp[0].asts),TRUE));			
                        }
#line 2906 "SDCCy.c"
    break;

  case 150: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 792 "SDCC.y"
                                             {
                                                addSymChain ((yyvsp[-1].sym));
                                                allocVariables(reverseSyms((yyvsp[-1].sym))) ;
                                                (yyval.lnk) = copyLinkChain(cenum->type);
                                             }
#line 2916 "SDCCy.c"
    break;

  case 151: /* enum_specifier: ENUM identifier '{' enumerator_list '}'  */
#line 797 "SDCC.y"
                                             {
                                                symbol *csym ;

                                                (yyvsp[-3].sym)->type = copyLinkChain(cenum->type);
                                                (yyvsp[-3].sym)->etype = getSpec((yyvsp[-3].sym)->type);
                                                /* add this to the enumerator table */
                                                if (!(csym=findSym(enumTab,(yyvsp[-3].sym),(yyvsp[-3].sym)->name)) && 
						    (csym && csym->level == (yyvsp[-3].sym)->level))
                                                   werror(E_DUPLICATE_TYPEDEF,csym->name);

                                                addSym ( enumTab,(yyvsp[-3].sym),(yyvsp[-3].sym)->name,(yyvsp[-3].sym)->level,(yyvsp[-3].sym)->block, 0);
						addSymChain ((yyvsp[-1].sym));
                                                allocVariables (reverseSyms((yyvsp[-1].sym)));
                                                (yyval.lnk) = copyLinkChain(cenum->type);
                                                SPEC_SCLS(getSpec((yyval.lnk))) = 0 ;
                                             }
#line 2937 "SDCCy.c"
    break;

  case 152: /* enum_specifier: ENUM identifier  */
#line 813 "SDCC.y"
                                             {
                                                symbol *csym ;

                                                /* check the enumerator table */
                                                if ((csym = findSym(enumTab,(yyvsp[0].sym),(yyvsp[0].sym)->name)))
                                                   (yyval.lnk) = copyLinkChain(csym->type);
                                                else  {
                                                   (yyval.lnk) = newLink() ;
                                                   (yyval.lnk)->class = SPECIFIER   ;
                                                   SPEC_NOUN((yyval.lnk)) = V_INT   ;
                                                }

                                                SPEC_SCLS(getSpec((yyval.lnk))) = 0 ;
                                             }
#line 2956 "SDCCy.c"
    break;

  case 154: /* enumerator_list: enumerator_list ','  */
#line 831 "SDCC.y"
                         {
                         }
#line 2963 "SDCCy.c"
    break;

  case 155: /* enumerator_list: enumerator_list ',' enumerator  */
#line 833 "SDCC.y"
                                    {
                                       (yyvsp[0].sym)->next = (yyvsp[-2].sym) ;
                                       (yyval.sym) = (yyvsp[0].sym)  ;
                                    }
#line 2972 "SDCCy.c"
    break;

  case 156: /* enumerator: identifier opt_assign_expr  */
#line 840 "SDCC.y"
                                 {
                                    /* make the symbol one level up */
                                    (yyvsp[-1].sym)->level-- ;
                                    (yyvsp[-1].sym)->type = copyLinkChain((yyvsp[0].val)->type); 
                                    (yyvsp[-1].sym)->etype= getSpec((yyvsp[-1].sym)->type);
				    SPEC_ENUM((yyvsp[-1].sym)->etype) = 1;
                                    (yyval.sym) = (yyvsp[-1].sym) ;

                                 }
#line 2986 "SDCCy.c"
    break;

  case 157: /* opt_assign_expr: '=' constant_expr  */
#line 852 "SDCC.y"
                           {
                              value *val ;
							
                              val = constExprValue((yyvsp[0].asts),TRUE);                         
                              (yyval.val) = cenum = val ;
                           }
#line 2997 "SDCCy.c"
    break;

  case 158: /* opt_assign_expr: %empty  */
#line 858 "SDCC.y"
                           {                              
                              if (cenum)  {
                                 sprintf(lbuff,"%d",(int) floatFromVal(cenum)+1);
                                 (yyval.val) = cenum = constVal(lbuff);
                              }
                              else {
                                 sprintf(lbuff,"%d",0);
                                 (yyval.val) = cenum = constVal(lbuff);
                              }   
                           }
#line 3012 "SDCCy.c"
    break;

  case 159: /* declarator: declarator2_function_attributes  */
#line 871 "SDCC.y"
                                        { (yyval.sym) = (yyvsp[0].sym); }
#line 3018 "SDCCy.c"
    break;

  case 160: /* declarator: pointer declarator2_function_attributes  */
#line 873 "SDCC.y"
         {
	     addDecl ((yyvsp[0].sym),0,reverseLink((yyvsp[-1].lnk)));
	     (yyval.sym) = (yyvsp[0].sym) ;
         }
#line 3027 "SDCCy.c"
    break;

  case 161: /* declarator2_function_attributes: declarator2  */
#line 880 "SDCC.y"
                                  { (yyval.sym) = (yyvsp[0].sym) ; }
#line 3033 "SDCCy.c"
    break;

  case 162: /* declarator2_function_attributes: declarator2 function_attribute  */
#line 881 "SDCC.y"
                                     { 
       // copy the functionAttributes (not the args and hasVargs !!)
       sym_link *funcType=(yyvsp[-1].sym)->etype;
       struct value *args=FUNC_ARGS(funcType);
       unsigned hasVargs=FUNC_HASVARARGS(funcType);

       memcpy (&funcType->funcAttrs, &(yyvsp[0].lnk)->funcAttrs, 
	       sizeof((yyvsp[0].lnk)->funcAttrs));

       FUNC_ARGS(funcType)=args;
       FUNC_HASVARARGS(funcType)=hasVargs;

       // just to be sure
       memset (&(yyvsp[0].lnk)->funcAttrs, 0,
	       sizeof((yyvsp[0].lnk)->funcAttrs));
       
       addDecl ((yyvsp[-1].sym),0,(yyvsp[0].lnk)); 
   }
#line 3056 "SDCCy.c"
    break;

  case 164: /* declarator2: '(' declarator ')'  */
#line 903 "SDCC.y"
                            { (yyval.sym) = (yyvsp[-1].sym); }
#line 3062 "SDCCy.c"
    break;

  case 165: /* declarator2: declarator2 '[' ']'  */
#line 905 "SDCC.y"
         {
            sym_link   *p;

            p = newLink ();
            DCL_TYPE(p) = ARRAY ;
            DCL_ELEM(p) = 0     ;
            addDecl((yyvsp[-2].sym),0,p);
         }
#line 3075 "SDCCy.c"
    break;

  case 166: /* declarator2: declarator2 '[' constant_expr ']'  */
#line 914 "SDCC.y"
         {
            sym_link   *p ;
			value *tval;
			
            p = (tval = constExprValue((yyvsp[-1].asts),TRUE))->etype;
            /* if it is not a constant then Error  */
            if ( SPEC_SCLS(p) != S_LITERAL)
               werror(E_CONST_EXPECTED) ;
            else {
               p = newLink ();
               DCL_TYPE(p) = ARRAY ;
               DCL_ELEM(p) = (int) floatFromVal(tval) ;
               addDecl((yyvsp[-3].sym),0,p);
            }		                
         }
#line 3095 "SDCCy.c"
    break;

  case 167: /* declarator2: declarator2 '(' ')'  */
#line 929 "SDCC.y"
                                {  addDecl ((yyvsp[-2].sym),FUNCTION,NULL) ;   }
#line 3101 "SDCCy.c"
    break;

  case 168: /* $@1: %empty  */
#line 930 "SDCC.y"
                     { NestLevel++ ; currBlockno++; }
#line 3107 "SDCCy.c"
    break;

  case 169: /* declarator2: declarator2 '(' $@1 parameter_type_list ')'  */
#line 931 "SDCC.y"
         {
	   
	     addDecl ((yyvsp[-4].sym),FUNCTION,NULL) ;
	   
	     FUNC_HASVARARGS((yyvsp[-4].sym)->type) = IS_VARG((yyvsp[-1].val));
	     FUNC_ARGS((yyvsp[-4].sym)->type) = reverseVal((yyvsp[-1].val));
	     
	     /* nest level was incremented to take care of the parms  */
	     NestLevel-- ;
	     currBlockno--;

	     // if this was a pointer (to a function)
	     if (IS_PTR((yyvsp[-4].sym)->type)) {
	       // move the args and hasVargs to the function
	       FUNC_ARGS((yyvsp[-4].sym)->etype)=FUNC_ARGS((yyvsp[-4].sym)->type);
	       FUNC_HASVARARGS((yyvsp[-4].sym)->etype)=FUNC_HASVARARGS((yyvsp[-4].sym)->type);
	       memset (&(yyvsp[-4].sym)->type->funcAttrs, 0,
		       sizeof((yyvsp[-4].sym)->type->funcAttrs));
	       // remove the symbol args (if any)
	       cleanUpLevel(SymbolTab,NestLevel+1);
	     }
	     
	     (yyval.sym) = (yyvsp[-4].sym);
         }
#line 3136 "SDCCy.c"
    break;

  case 170: /* declarator2: declarator2 '(' parameter_identifier_list ')'  */
#line 956 "SDCC.y"
         {	   
	   werror(E_OLD_STYLE,(yyvsp[-3].sym)->name) ;	  
	   
	   /* assume it returns an int */
	   (yyvsp[-3].sym)->type = (yyvsp[-3].sym)->etype = newIntLink();
	   (yyval.sym) = (yyvsp[-3].sym) ;
         }
#line 3148 "SDCCy.c"
    break;

  case 171: /* pointer: unqualified_pointer  */
#line 966 "SDCC.y"
                         { (yyval.lnk) = (yyvsp[0].lnk) ;}
#line 3154 "SDCCy.c"
    break;

  case 172: /* pointer: unqualified_pointer type_specifier_list  */
#line 968 "SDCC.y"
         {
	     (yyval.lnk) = (yyvsp[-1].lnk)  ;		
	     DCL_TSPEC((yyvsp[-1].lnk)) = (yyvsp[0].lnk);
	 }
#line 3163 "SDCCy.c"
    break;

  case 173: /* pointer: unqualified_pointer pointer  */
#line 973 "SDCC.y"
         {
	     (yyval.lnk) = (yyvsp[-1].lnk) ;		
	     (yyval.lnk)->next = (yyvsp[0].lnk) ;
	     DCL_TYPE((yyvsp[0].lnk))=GPOINTER;
	 }
#line 3173 "SDCCy.c"
    break;

  case 174: /* pointer: unqualified_pointer type_specifier_list pointer  */
#line 979 "SDCC.y"
         {
	     (yyval.lnk) = (yyvsp[-2].lnk) ;  	     
	     if (IS_SPEC((yyvsp[-1].lnk)) && DCL_TYPE((yyvsp[0].lnk)) == UPOINTER) {
		 DCL_PTR_CONST((yyvsp[-2].lnk)) = SPEC_CONST((yyvsp[-1].lnk));
		 DCL_PTR_VOLATILE((yyvsp[-2].lnk)) = SPEC_VOLATILE((yyvsp[-1].lnk));
		 switch (SPEC_SCLS((yyvsp[-1].lnk))) {
		 case S_XDATA:
		     DCL_TYPE((yyvsp[0].lnk)) = FPOINTER;
		     break;
		 case S_IDATA:
		     DCL_TYPE((yyvsp[0].lnk)) = IPOINTER ;
		     break;
		 case S_PDATA:
		     DCL_TYPE((yyvsp[0].lnk)) = PPOINTER ;
		     break;
		 case S_DATA:
		     DCL_TYPE((yyvsp[0].lnk)) = POINTER ;
		     break;
		 case S_CODE:
		     DCL_PTR_CONST((yyvsp[0].lnk)) = 1;
		     DCL_TYPE((yyvsp[0].lnk)) = CPOINTER ;
		     break;
		 case S_EEPROM:
		     DCL_TYPE((yyvsp[0].lnk)) = EEPPOINTER;
		     break;
		 }
	     }
	     else 
		 werror (W_PTR_TYPE_INVALID);
	     (yyval.lnk)->next = (yyvsp[0].lnk) ;
	 }
#line 3209 "SDCCy.c"
    break;

  case 175: /* unqualified_pointer: '*'  */
#line 1014 "SDCC.y"
      {
	(yyval.lnk) = newLink();
	DCL_TYPE((yyval.lnk))=UPOINTER;
      }
#line 3218 "SDCCy.c"
    break;

  case 177: /* type_specifier_list: type_specifier_list type_specifier  */
#line 1023 "SDCC.y"
                                        {
     /* if the decl $2 is not a specifier */
     /* find the spec and replace it      */
     if ( !IS_SPEC((yyvsp[0].lnk))) {
       sym_link *lnk = (yyvsp[0].lnk) ;
       while (lnk && !IS_SPEC(lnk->next))
	 lnk = lnk->next;
       lnk->next = mergeSpec((yyvsp[-1].lnk),lnk->next, "type_specifier_list");
       (yyval.lnk) = (yyvsp[0].lnk) ;
     }
     else
       (yyval.lnk) = mergeSpec((yyvsp[-1].lnk),(yyvsp[0].lnk), "type_specifier_list");
   }
#line 3236 "SDCCy.c"
    break;

  case 181: /* identifier_list: identifier_list ',' identifier  */
#line 1046 "SDCC.y"
         {            
	   (yyvsp[0].sym)->next = (yyvsp[-2].sym);
	   (yyval.sym) = (yyvsp[0].sym) ;
         }
#line 3245 "SDCCy.c"
    break;

  case 183: /* parameter_type_list: parameter_list ',' VAR_ARGS  */
#line 1054 "SDCC.y"
                                      { (yyvsp[-2].val)->vArgs = 1;}
#line 3251 "SDCCy.c"
    break;

  case 185: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 1060 "SDCC.y"
         {
            (yyvsp[0].val)->next = (yyvsp[-2].val) ;
            (yyval.val) = (yyvsp[0].val) ;	    
         }
#line 3260 "SDCCy.c"
    break;

  case 186: /* parameter_declaration: type_specifier_list declarator  */
#line 1068 "SDCC.y"
               {	
		  symbol *loop ;
		  pointerTypes((yyvsp[0].sym)->type,(yyvsp[-1].lnk));
                  addDecl ((yyvsp[0].sym),0,(yyvsp[-1].lnk));		  
		  for (loop=(yyvsp[0].sym);loop;loop->_isparm=1,loop=loop->next);
		  addSymChain ((yyvsp[0].sym));
		  (yyval.val) = symbolVal((yyvsp[0].sym));
               }
#line 3273 "SDCCy.c"
    break;

  case 187: /* parameter_declaration: type_name  */
#line 1076 "SDCC.y"
               { 
                  (yyval.val) = newValue() ; 
                  (yyval.val)->type = (yyvsp[0].lnk);
                  (yyval.val)->etype = getSpec((yyval.val)->type);
               }
#line 3283 "SDCCy.c"
    break;

  case 188: /* type_name: type_specifier_list  */
#line 1084 "SDCC.y"
                          { (yyval.lnk) = (yyvsp[0].lnk) ;}
#line 3289 "SDCCy.c"
    break;

  case 189: /* type_name: type_specifier_list abstract_declarator  */
#line 1086 "SDCC.y"
               {
		 /* go to the end of the list */
		 sym_link *p;
		 pointerTypes((yyvsp[0].lnk),(yyvsp[-1].lnk));
		 for ( p = (yyvsp[0].lnk) ; p->next ; p=p->next);
                  p->next = (yyvsp[-1].lnk) ;
                  (yyval.lnk) = (yyvsp[0].lnk) ;
               }
#line 3302 "SDCCy.c"
    break;

  case 190: /* abstract_declarator: pointer  */
#line 1097 "SDCC.y"
             { (yyval.lnk) = reverseLink((yyvsp[0].lnk)); }
#line 3308 "SDCCy.c"
    break;

  case 192: /* abstract_declarator: pointer abstract_declarator2  */
#line 1099 "SDCC.y"
                                    { (yyvsp[-1].lnk) = reverseLink((yyvsp[-1].lnk)); (yyvsp[-1].lnk)->next = (yyvsp[0].lnk) ; (yyval.lnk) = (yyvsp[-1].lnk);}
#line 3314 "SDCCy.c"
    break;

  case 193: /* abstract_declarator2: '(' abstract_declarator ')'  */
#line 1103 "SDCC.y"
                                    { (yyval.lnk) = (yyvsp[-1].lnk) ; }
#line 3320 "SDCCy.c"
    break;

  case 194: /* abstract_declarator2: '[' ']'  */
#line 1104 "SDCC.y"
                                    {             
                                       (yyval.lnk) = newLink ();
                                       DCL_TYPE((yyval.lnk)) = ARRAY ;
                                       DCL_ELEM((yyval.lnk)) = 0     ;
                                    }
#line 3330 "SDCCy.c"
    break;

  case 195: /* abstract_declarator2: '[' constant_expr ']'  */
#line 1109 "SDCC.y"
                                    { 
                                       value *val ;
                                       (yyval.lnk) = newLink ();
                                       DCL_TYPE((yyval.lnk)) = ARRAY ;
                                       DCL_ELEM((yyval.lnk)) = (int) floatFromVal(val = constExprValue((yyvsp[-1].asts),TRUE));
                                    }
#line 3341 "SDCCy.c"
    break;

  case 196: /* abstract_declarator2: abstract_declarator2 '[' ']'  */
#line 1115 "SDCC.y"
                                    {
                                       (yyval.lnk) = newLink ();
                                       DCL_TYPE((yyval.lnk)) = ARRAY ;
                                       DCL_ELEM((yyval.lnk)) = 0     ;
                                       (yyval.lnk)->next = (yyvsp[-2].lnk) ;
                                    }
#line 3352 "SDCCy.c"
    break;

  case 197: /* abstract_declarator2: abstract_declarator2 '[' constant_expr ']'  */
#line 1122 "SDCC.y"
                                    {
                                       value *val ;
                                       (yyval.lnk) = newLink ();
                                       DCL_TYPE((yyval.lnk)) = ARRAY ;
                                       DCL_ELEM((yyval.lnk)) = (int) floatFromVal(val = constExprValue((yyvsp[-1].asts),TRUE));
                                       (yyval.lnk)->next = (yyvsp[-3].lnk) ;
                                    }
#line 3364 "SDCCy.c"
    break;

  case 198: /* abstract_declarator2: '(' ')'  */
#line 1129 "SDCC.y"
                                    { (yyval.lnk) = NULL;}
#line 3370 "SDCCy.c"
    break;

  case 199: /* abstract_declarator2: '(' parameter_type_list ')'  */
#line 1130 "SDCC.y"
                                    { (yyval.lnk) = NULL;}
#line 3376 "SDCCy.c"
    break;

  case 200: /* abstract_declarator2: abstract_declarator2 '(' ')'  */
#line 1131 "SDCC.y"
                                  {
     // $1 must be a pointer to a function
     sym_link *p=newLink();
     DCL_TYPE(p) = FUNCTION;
     (yyvsp[-2].lnk)->next=p;
   }
#line 3387 "SDCCy.c"
    break;

  case 201: /* abstract_declarator2: abstract_declarator2 '(' parameter_type_list ')'  */
#line 1137 "SDCC.y"
                                                      {
     if (!IS_VOID((yyvsp[-1].val)->type)) {
       // this is nonsense, so let's just burp something
       werror(E_TOO_FEW_PARMS);
     } else {
       // $1 must be a pointer to a function
       sym_link *p=newLink();
       DCL_TYPE(p) = FUNCTION;
       (yyvsp[-3].lnk)->next=p;
     }
   }
#line 3403 "SDCCy.c"
    break;

  case 202: /* initializer: assignment_expr  */
#line 1150 "SDCC.y"
                                    { (yyval.ilist) = newiList(INIT_NODE,(yyvsp[0].asts)); }
#line 3409 "SDCCy.c"
    break;

  case 203: /* initializer: '{' initializer_list '}'  */
#line 1151 "SDCC.y"
                                    { (yyval.ilist) = newiList(INIT_DEEP,revinit((yyvsp[-1].ilist))); }
#line 3415 "SDCCy.c"
    break;

  case 204: /* initializer: '{' initializer_list ',' '}'  */
#line 1152 "SDCC.y"
                                    { (yyval.ilist) = newiList(INIT_DEEP,revinit((yyvsp[-2].ilist))); }
#line 3421 "SDCCy.c"
    break;

  case 206: /* initializer_list: initializer_list ',' initializer  */
#line 1157 "SDCC.y"
                                       {  (yyvsp[0].ilist)->next = (yyvsp[-2].ilist); (yyval.ilist) = (yyvsp[0].ilist); }
#line 3427 "SDCCy.c"
    break;

  case 213: /* statement: INLINEASM ';'  */
#line 1167 "SDCC.y"
                         {
                            ast *ex = newNode(INLINEASM,NULL,NULL);
			    ex->values.inlineasm = malloc(strlen((yyvsp[-1].yyinline))+1);
			    strcpy(ex->values.inlineasm,(yyvsp[-1].yyinline));			    
			    (yyval.asts) = ex;
                         }
#line 3438 "SDCCy.c"
    break;

  case 214: /* labeled_statement: identifier ':'  */
#line 1177 "SDCC.y"
                                       {  (yyval.asts) = createLabel((yyvsp[-1].sym),NULL);  }
#line 3444 "SDCCy.c"
    break;

  case 215: /* labeled_statement: CASE constant_expr ':' statement  */
#line 1178 "SDCC.y"
                                       {  (yyval.asts) = createCase(STACK_PEEK(swStk),(yyvsp[-2].asts),(yyvsp[0].asts)); }
#line 3450 "SDCCy.c"
    break;

  case 216: /* labeled_statement: DEFAULT ':' statement  */
#line 1179 "SDCC.y"
                                       {  (yyval.asts) = createDefault(STACK_PEEK(swStk),(yyvsp[0].asts)); }
#line 3456 "SDCCy.c"
    break;

  case 217: /* start_block: '{'  */
#line 1182 "SDCC.y"
                  { STACK_PUSH(blockNum,currBlockno); currBlockno = ++blockNo ;  }
#line 3462 "SDCCy.c"
    break;

  case 218: /* end_block: '}'  */
#line 1185 "SDCC.y"
                      { currBlockno = STACK_POP(blockNum); }
#line 3468 "SDCCy.c"
    break;

  case 219: /* compound_statement: start_block end_block  */
#line 1189 "SDCC.y"
                                              { (yyval.asts) = createBlock(NULL,NULL); }
#line 3474 "SDCCy.c"
    break;

  case 220: /* compound_statement: start_block statement_list end_block  */
#line 1190 "SDCC.y"
                                              { (yyval.asts) = createBlock(NULL,(yyvsp[-1].asts)) ;  }
#line 3480 "SDCCy.c"
    break;

  case 221: /* $@2: %empty  */
#line 1192 "SDCC.y"
                                              { addSymChain((yyvsp[0].sym)); }
#line 3486 "SDCCy.c"
    break;

  case 222: /* compound_statement: start_block declaration_list $@2 end_block  */
#line 1193 "SDCC.y"
                                              { (yyval.asts) = createBlock((yyvsp[-2].sym),NULL) ;  }
#line 3492 "SDCCy.c"
    break;

  case 223: /* $@3: %empty  */
#line 1195 "SDCC.y"
                                              {  addSymChain ((yyvsp[0].sym)); }
#line 3498 "SDCCy.c"
    break;

  case 224: /* compound_statement: start_block declaration_list $@3 statement_list end_block  */
#line 1197 "SDCC.y"
                                              {(yyval.asts) = createBlock((yyvsp[-3].sym),(yyvsp[-1].asts))   ;  }
#line 3504 "SDCCy.c"
    break;

  case 225: /* compound_statement: error ';'  */
#line 1198 "SDCC.y"
                                              { (yyval.asts) = NULL ; }
#line 3510 "SDCCy.c"
    break;

  case 226: /* declaration_list: declaration  */
#line 1203 "SDCC.y"
     {
       /* if this is typedef declare it immediately */
       if ( (yyvsp[0].sym) && IS_TYPEDEF((yyvsp[0].sym)->etype)) {
	 allocVariables ((yyvsp[0].sym));
	 (yyval.sym) = NULL ;
       }
       else
	 (yyval.sym) = (yyvsp[0].sym) ;
     }
#line 3524 "SDCCy.c"
    break;

  case 227: /* declaration_list: declaration_list declaration  */
#line 1214 "SDCC.y"
     {
       symbol   *sym;
       
       /* if this is a typedef */
       if ((yyvsp[0].sym) && IS_TYPEDEF((yyvsp[0].sym)->etype)) {
	 allocVariables ((yyvsp[0].sym));
	 (yyval.sym) = (yyvsp[-1].sym) ;
       }
       else {
				/* get to the end of the previous decl */
	 if ( (yyvsp[-1].sym) ) {
	   (yyval.sym) = sym = (yyvsp[-1].sym) ;
	   while (sym->next)
	     sym = sym->next ;
	   sym->next = (yyvsp[0].sym);
	 } 
	 else
	   (yyval.sym) = (yyvsp[0].sym) ;
       }
     }
#line 3549 "SDCCy.c"
    break;

  case 229: /* statement_list: statement_list statement  */
#line 1238 "SDCC.y"
                                       {  (yyval.asts) = newNode(NULLOP,(yyvsp[-1].asts),(yyvsp[0].asts)) ;}
#line 3555 "SDCCy.c"
    break;

  case 230: /* expression_statement: ';'  */
#line 1242 "SDCC.y"
                        { (yyval.asts) = NULL;}
#line 3561 "SDCCy.c"
    break;

  case 232: /* else_statement: ELSE statement  */
#line 1247 "SDCC.y"
                        { (yyval.asts) = (yyvsp[0].asts)  ; }
#line 3567 "SDCCy.c"
    break;

  case 233: /* else_statement: %empty  */
#line 1248 "SDCC.y"
                        { (yyval.asts) = NULL;}
#line 3573 "SDCCy.c"
    break;

  case 234: /* selection_statement: IF '(' expr ')' statement else_statement  */
#line 1253 "SDCC.y"
                                               { noLineno++ ; (yyval.asts) = createIf ((yyvsp[-3].asts), (yyvsp[-1].asts), (yyvsp[0].asts) ); noLineno--;}
#line 3579 "SDCCy.c"
    break;

  case 235: /* @4: %empty  */
#line 1254 "SDCC.y"
                           { 
                              ast *ex ;                              
                              static   int swLabel = 0 ;

                              /* create a node for expression  */
                              ex = newNode(SWITCH,(yyvsp[-1].asts),NULL);
                              STACK_PUSH(swStk,ex);   /* save it in the stack */
                              ex->values.switchVals.swNum = swLabel ;
                                 
                              /* now create the label */
                              sprintf(lbuff,"_swBrk_%d",swLabel++);
                              (yyval.sym)  =  newSymbol(lbuff,NestLevel);
                              /* put label in the break stack  */
                              STACK_PUSH(breakStack,(yyval.sym));   
                           }
#line 3599 "SDCCy.c"
    break;

  case 236: /* selection_statement: SWITCH '(' expr ')' @4 statement  */
#line 1269 "SDCC.y"
                           {  
                              /* get back the switch form the stack  */
                              (yyval.asts) = STACK_POP(swStk)  ;
                              (yyval.asts)->right = newNode (NULLOP,(yyvsp[0].asts),createLabel((yyvsp[-1].sym),NULL));
                              STACK_POP(breakStack);   
                           }
#line 3610 "SDCCy.c"
    break;

  case 237: /* while: WHILE  */
#line 1277 "SDCC.y"
               {  /* create and push the continue , break & body labels */
                  static int Lblnum = 0 ;
		  /* continue */
                  sprintf (lbuff,"_whilecontinue_%d",Lblnum);
		  STACK_PUSH(continueStack,newSymbol(lbuff,NestLevel));
		  /* break */
		  sprintf (lbuff,"_whilebreak_%d",Lblnum);
		  STACK_PUSH(breakStack,newSymbol(lbuff,NestLevel));
		  /* body */
		  sprintf (lbuff,"_whilebody_%d",Lblnum++);
		  (yyval.sym) = newSymbol(lbuff,NestLevel);
               }
#line 3627 "SDCCy.c"
    break;

  case 238: /* do: DO  */
#line 1290 "SDCC.y"
        {  /* create and push the continue , break & body Labels */
           static int Lblnum = 0 ;

	   /* continue */
	   sprintf(lbuff,"_docontinue_%d",Lblnum);
	   STACK_PUSH(continueStack,newSymbol(lbuff,NestLevel));
	   /* break */
	   sprintf (lbuff,"_dobreak_%d",Lblnum);
	   STACK_PUSH(breakStack,newSymbol(lbuff,NestLevel));
	   /* do body */
	   sprintf (lbuff,"_dobody_%d",Lblnum++);
	   (yyval.sym) = newSymbol (lbuff,NestLevel);	   
        }
#line 3645 "SDCCy.c"
    break;

  case 239: /* for: FOR  */
#line 1303 "SDCC.y"
          { /* create & push continue, break & body labels */
            static int Lblnum = 0 ;
         
            /* continue */
	    sprintf (lbuff,"_forcontinue_%d",Lblnum);
	    STACK_PUSH(continueStack,newSymbol(lbuff,NestLevel));
	    /* break    */
	    sprintf (lbuff,"_forbreak_%d",Lblnum);
	    STACK_PUSH(breakStack,newSymbol(lbuff,NestLevel));
	    /* body */
	    sprintf (lbuff,"_forbody_%d",Lblnum);
	    (yyval.sym) = newSymbol(lbuff,NestLevel);
	    /* condition */
	    sprintf (lbuff,"_forcond_%d",Lblnum++);
	    STACK_PUSH(forStack,newSymbol(lbuff,NestLevel));
          }
#line 3666 "SDCCy.c"
    break;

  case 240: /* iteration_statement: while '(' expr ')' statement  */
#line 1322 "SDCC.y"
                         { 
			   noLineno++ ;
			   (yyval.asts) = createWhile ( (yyvsp[-4].sym), STACK_POP(continueStack),
					      STACK_POP(breakStack), (yyvsp[-2].asts), (yyvsp[0].asts) ); 
			   (yyval.asts)->lineno = (yyvsp[-4].sym)->lineDef ;
			   noLineno-- ;
			 }
#line 3678 "SDCCy.c"
    break;

  case 241: /* iteration_statement: do statement WHILE '(' expr ')' ';'  */
#line 1330 "SDCC.y"
                        { 
			  noLineno++ ; 
			  (yyval.asts) = createDo ( (yyvsp[-6].sym) , STACK_POP(continueStack), 
					  STACK_POP(breakStack), (yyvsp[-2].asts), (yyvsp[-5].asts));
			  (yyval.asts)->lineno = (yyvsp[-6].sym)->lineDef ;
			  noLineno-- ;
			}
#line 3690 "SDCCy.c"
    break;

  case 242: /* iteration_statement: for '(' expr_opt ';' expr_opt ';' expr_opt ')' statement  */
#line 1338 "SDCC.y"
                        {
			  noLineno++ ;	
			  
			  /* if break or continue statement present
			     then create a general case loop */
			  if (STACK_PEEK(continueStack)->isref ||
			      STACK_PEEK(breakStack)->isref) {
			      (yyval.asts) = createFor ((yyvsp[-8].sym), STACK_POP(continueStack),
					      STACK_POP(breakStack) ,
					      STACK_POP(forStack)   ,
					      (yyvsp[-6].asts) , (yyvsp[-4].asts) , (yyvsp[-2].asts), (yyvsp[0].asts) );
			  } else {
			      (yyval.asts) = newNode(FOR,(yyvsp[0].asts),NULL);
			      AST_FOR((yyval.asts),trueLabel) = (yyvsp[-8].sym);
			      AST_FOR((yyval.asts),continueLabel) =  STACK_POP(continueStack);
			      AST_FOR((yyval.asts),falseLabel) = STACK_POP(breakStack);
			      AST_FOR((yyval.asts),condLabel)  = STACK_POP(forStack)  ;
			      AST_FOR((yyval.asts),initExpr)   = (yyvsp[-6].asts);
			      AST_FOR((yyval.asts),condExpr)   = (yyvsp[-4].asts);
			      AST_FOR((yyval.asts),loopExpr)   = (yyvsp[-2].asts);
			  }
			  
			  noLineno-- ;
			}
#line 3719 "SDCCy.c"
    break;

  case 243: /* expr_opt: %empty  */
#line 1365 "SDCC.y"
                                { (yyval.asts) = NULL ; }
#line 3725 "SDCCy.c"
    break;

  case 245: /* jump_statement: GOTO identifier ';'  */
#line 1370 "SDCC.y"
                           { 
                              (yyvsp[-1].sym)->islbl = 1;
                              (yyval.asts) = newAst_VALUE(symbolVal((yyvsp[-1].sym))); 
                              (yyval.asts) = newNode(GOTO,(yyval.asts),NULL);
                           }
#line 3735 "SDCCy.c"
    break;

  case 246: /* jump_statement: CONTINUE ';'  */
#line 1375 "SDCC.y"
                           {  
       /* make sure continue is in context */
       if (STACK_PEEK(continueStack) == NULL) {
	   werror(E_BREAK_CONTEXT);
	   (yyval.asts) = NULL;
       }
       else {
	   (yyval.asts) = newAst_VALUE(symbolVal(STACK_PEEK(continueStack)));      
	   (yyval.asts) = newNode(GOTO,(yyval.asts),NULL);
	   /* mark the continue label as referenced */
	   STACK_PEEK(continueStack)->isref = 1;
       }
   }
#line 3753 "SDCCy.c"
    break;

  case 247: /* jump_statement: BREAK ';'  */
#line 1388 "SDCC.y"
                           { 
       if (STACK_PEEK(breakStack) == NULL) {
	   werror(E_BREAK_CONTEXT);
	   (yyval.asts) = NULL;
       } else {
	   (yyval.asts) = newAst_VALUE(symbolVal(STACK_PEEK(breakStack)));
	   (yyval.asts) = newNode(GOTO,(yyval.asts),NULL);
	   STACK_PEEK(breakStack)->isref = 1;
       }
   }
#line 3768 "SDCCy.c"
    break;

  case 248: /* jump_statement: RETURN ';'  */
#line 1398 "SDCC.y"
                           { (yyval.asts) = newNode(RETURN,NULL,NULL)    ; }
#line 3774 "SDCCy.c"
    break;

  case 249: /* jump_statement: RETURN expr ';'  */
#line 1399 "SDCC.y"
                           { (yyval.asts) = newNode(RETURN,NULL,(yyvsp[-1].asts)) ; }
#line 3780 "SDCCy.c"
    break;

  case 250: /* identifier: IDENTIFIER  */
#line 1403 "SDCC.y"
                  { (yyval.sym) = newSymbol ((yyvsp[0].yychar),NestLevel) ; }
#line 3786 "SDCCy.c"
    break;


#line 3790 "SDCCy.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1405 "SDCC.y"


