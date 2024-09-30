#ifndef _yy_defines_h_
#define _yy_defines_h_

#define PARAMETER 257
#define COMMAND 258
#define NAME 259
#define LIST 260
#define SOURCE 261
#define EOL 262
#define ENDFILE 263
#define QUIT 264
#define BACK 265
#define REDIRECT 266
#define BANG 267
#define HELP 268
#define BG_GRP 269
#define END_GRP 270
#define DELIMIT 271
#define DEFINE 272
#define COMMENT 273
#define UNDEF 274
#define SET 275
#define UNSET 276
#define FOR 277
#define END 278
#define CHDIR 279
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE  {
    int ival;
    char *sval;
    } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
