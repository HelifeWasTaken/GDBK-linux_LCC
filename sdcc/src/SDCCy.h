/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SDCCY_H_INCLUDED
# define YY_YY_SDCCY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_NAME = 259,               /* TYPE_NAME  */
    CONSTANT = 260,                /* CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    SIZEOF = 262,                  /* SIZEOF  */
    PTR_OP = 263,                  /* PTR_OP  */
    INC_OP = 264,                  /* INC_OP  */
    DEC_OP = 265,                  /* DEC_OP  */
    LEFT_OP = 266,                 /* LEFT_OP  */
    RIGHT_OP = 267,                /* RIGHT_OP  */
    LE_OP = 268,                   /* LE_OP  */
    GE_OP = 269,                   /* GE_OP  */
    EQ_OP = 270,                   /* EQ_OP  */
    NE_OP = 271,                   /* NE_OP  */
    AND_OP = 272,                  /* AND_OP  */
    OR_OP = 273,                   /* OR_OP  */
    MUL_ASSIGN = 274,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 275,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 276,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 277,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 278,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 279,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 280,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 281,              /* AND_ASSIGN  */
    XOR_ASSIGN = 282,              /* XOR_ASSIGN  */
    OR_ASSIGN = 283,               /* OR_ASSIGN  */
    TYPEDEF = 284,                 /* TYPEDEF  */
    EXTERN = 285,                  /* EXTERN  */
    STATIC = 286,                  /* STATIC  */
    AUTO = 287,                    /* AUTO  */
    REGISTER = 288,                /* REGISTER  */
    CODE = 289,                    /* CODE  */
    EEPROM = 290,                  /* EEPROM  */
    INTERRUPT = 291,               /* INTERRUPT  */
    SFR = 292,                     /* SFR  */
    AT = 293,                      /* AT  */
    SBIT = 294,                    /* SBIT  */
    REENTRANT = 295,               /* REENTRANT  */
    USING = 296,                   /* USING  */
    XDATA = 297,                   /* XDATA  */
    DATA = 298,                    /* DATA  */
    IDATA = 299,                   /* IDATA  */
    PDATA = 300,                   /* PDATA  */
    VAR_ARGS = 301,                /* VAR_ARGS  */
    CRITICAL = 302,                /* CRITICAL  */
    NONBANKED = 303,               /* NONBANKED  */
    BANKED = 304,                  /* BANKED  */
    CHAR = 305,                    /* CHAR  */
    SHORT = 306,                   /* SHORT  */
    INT = 307,                     /* INT  */
    LONG = 308,                    /* LONG  */
    SIGNED = 309,                  /* SIGNED  */
    UNSIGNED = 310,                /* UNSIGNED  */
    FLOAT = 311,                   /* FLOAT  */
    DOUBLE = 312,                  /* DOUBLE  */
    CONST = 313,                   /* CONST  */
    VOLATILE = 314,                /* VOLATILE  */
    VOID = 315,                    /* VOID  */
    BIT = 316,                     /* BIT  */
    STRUCT = 317,                  /* STRUCT  */
    UNION = 318,                   /* UNION  */
    ENUM = 319,                    /* ENUM  */
    ELIPSIS = 320,                 /* ELIPSIS  */
    RANGE = 321,                   /* RANGE  */
    FAR = 322,                     /* FAR  */
    CASE = 323,                    /* CASE  */
    DEFAULT = 324,                 /* DEFAULT  */
    IF = 325,                      /* IF  */
    ELSE = 326,                    /* ELSE  */
    SWITCH = 327,                  /* SWITCH  */
    WHILE = 328,                   /* WHILE  */
    DO = 329,                      /* DO  */
    FOR = 330,                     /* FOR  */
    GOTO = 331,                    /* GOTO  */
    CONTINUE = 332,                /* CONTINUE  */
    BREAK = 333,                   /* BREAK  */
    RETURN = 334,                  /* RETURN  */
    NAKED = 335,                   /* NAKED  */
    INLINEASM = 336,               /* INLINEASM  */
    IFX = 337,                     /* IFX  */
    ADDRESS_OF = 338,              /* ADDRESS_OF  */
    GET_VALUE_AT_ADDRESS = 339,    /* GET_VALUE_AT_ADDRESS  */
    SPIL = 340,                    /* SPIL  */
    UNSPIL = 341,                  /* UNSPIL  */
    GETHBIT = 342,                 /* GETHBIT  */
    BITWISEAND = 343,              /* BITWISEAND  */
    UNARYMINUS = 344,              /* UNARYMINUS  */
    IPUSH = 345,                   /* IPUSH  */
    IPOP = 346,                    /* IPOP  */
    PCALL = 347,                   /* PCALL  */
    ENDFUNCTION = 348,             /* ENDFUNCTION  */
    JUMPTABLE = 349,               /* JUMPTABLE  */
    RRC = 350,                     /* RRC  */
    RLC = 351,                     /* RLC  */
    CAST = 352,                    /* CAST  */
    CALL = 353,                    /* CALL  */
    PARAM = 354,                   /* PARAM  */
    NULLOP = 355,                  /* NULLOP  */
    BLOCK = 356,                   /* BLOCK  */
    LABEL = 357,                   /* LABEL  */
    RECEIVE = 358,                 /* RECEIVE  */
    SEND = 359,                    /* SEND  */
    ARRAYINIT = 360                /* ARRAYINIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_NAME 259
#define CONSTANT 260
#define STRING_LITERAL 261
#define SIZEOF 262
#define PTR_OP 263
#define INC_OP 264
#define DEC_OP 265
#define LEFT_OP 266
#define RIGHT_OP 267
#define LE_OP 268
#define GE_OP 269
#define EQ_OP 270
#define NE_OP 271
#define AND_OP 272
#define OR_OP 273
#define MUL_ASSIGN 274
#define DIV_ASSIGN 275
#define MOD_ASSIGN 276
#define ADD_ASSIGN 277
#define SUB_ASSIGN 278
#define LEFT_ASSIGN 279
#define RIGHT_ASSIGN 280
#define AND_ASSIGN 281
#define XOR_ASSIGN 282
#define OR_ASSIGN 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CODE 289
#define EEPROM 290
#define INTERRUPT 291
#define SFR 292
#define AT 293
#define SBIT 294
#define REENTRANT 295
#define USING 296
#define XDATA 297
#define DATA 298
#define IDATA 299
#define PDATA 300
#define VAR_ARGS 301
#define CRITICAL 302
#define NONBANKED 303
#define BANKED 304
#define CHAR 305
#define SHORT 306
#define INT 307
#define LONG 308
#define SIGNED 309
#define UNSIGNED 310
#define FLOAT 311
#define DOUBLE 312
#define CONST 313
#define VOLATILE 314
#define VOID 315
#define BIT 316
#define STRUCT 317
#define UNION 318
#define ENUM 319
#define ELIPSIS 320
#define RANGE 321
#define FAR 322
#define CASE 323
#define DEFAULT 324
#define IF 325
#define ELSE 326
#define SWITCH 327
#define WHILE 328
#define DO 329
#define FOR 330
#define GOTO 331
#define CONTINUE 332
#define BREAK 333
#define RETURN 334
#define NAKED 335
#define INLINEASM 336
#define IFX 337
#define ADDRESS_OF 338
#define GET_VALUE_AT_ADDRESS 339
#define SPIL 340
#define UNSPIL 341
#define GETHBIT 342
#define BITWISEAND 343
#define UNARYMINUS 344
#define IPUSH 345
#define IPOP 346
#define PCALL 347
#define ENDFUNCTION 348
#define JUMPTABLE 349
#define RRC 350
#define RLC 351
#define CAST 352
#define CALL 353
#define PARAM 354
#define NULLOP 355
#define BLOCK 356
#define LABEL 357
#define RECEIVE 358
#define SEND 359
#define ARRAYINIT 360

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 63 "SDCC.y"

    symbol     *sym ;      /* symbol table pointer       */
    structdef  *sdef;      /* structure definition       */
    char       yychar[SDCC_NAME_MAX+1];
    sym_link       *lnk ;      /* declarator  or specifier   */
    int        yyint;      /* integer value returned     */
    value      *val ;      /* for integer constant       */
    initList   *ilist;     /* initial list               */
    char       *yyinline; /* inlined assembler code */
    ast       *asts;     /* expression tree            */

#line 289 "SDCCy.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SDCCY_H_INCLUDED  */
