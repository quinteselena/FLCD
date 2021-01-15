/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LET = 258,
     FUNC = 259,
     RETURNS = 260,
     IS = 261,
     OR = 262,
     WHILE = 263,
     RETURN = 264,
     IF = 265,
     ELSE = 266,
     THEN = 267,
     INTEGER = 268,
     BOOLEAN = 269,
     TRUE = 270,
     STRING = 271,
     CHAR = 272,
     FALSE = 273,
     SCAN = 274,
     PRINT = 275,
     IDENTIFIER = 276,
     CONSTANT = 277,
     RELATION = 278,
     COMMA = 279,
     SEMI_COLON = 280,
     OPEN_SQUARE_BRACKET = 281,
     CLOSED_SQUARE_BRACKET = 282,
     OPEN_CURLY_BRACKET = 283,
     CLOSED_CURLY_BRACKET = 284,
     OPEN_ROUND_BRACKET = 285,
     CLOSED_ROUND_BRACKET = 286,
     PLUS = 287,
     MINUS = 288,
     DIV = 289,
     MUL = 290,
     PERCENT = 291,
     EQ = 292,
     NOT_EQ = 293,
     AND = 294
   };
#endif
/* Tokens.  */
#define LET 258
#define FUNC 259
#define RETURNS 260
#define IS 261
#define OR 262
#define WHILE 263
#define RETURN 264
#define IF 265
#define ELSE 266
#define THEN 267
#define INTEGER 268
#define BOOLEAN 269
#define TRUE 270
#define STRING 271
#define CHAR 272
#define FALSE 273
#define SCAN 274
#define PRINT 275
#define IDENTIFIER 276
#define CONSTANT 277
#define RELATION 278
#define COMMA 279
#define SEMI_COLON 280
#define OPEN_SQUARE_BRACKET 281
#define CLOSED_SQUARE_BRACKET 282
#define OPEN_CURLY_BRACKET 283
#define CLOSED_CURLY_BRACKET 284
#define OPEN_ROUND_BRACKET 285
#define CLOSED_ROUND_BRACKET 286
#define PLUS 287
#define MINUS 288
#define DIV 289
#define MUL 290
#define PERCENT 291
#define EQ 292
#define NOT_EQ 293
#define AND 294



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
