#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20111219

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "y.y"
	#include "stdio.h"
	#include "block.h"
	#include "string.h"

	extern void* getsym(char* name);
	extern void* putsym(char* name, void* data, int type);
	extern int closesym();
	extern int funcgen();
	extern FILE* out_fptr;

	int type_selector;
	void* sym_return;
#line 22 "y.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int num;
	char* word;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 44 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#define YYERROR_DECL() yyerror(const char *s)
#define YYERROR_CALL(msg) yyerror(msg)

extern int YYPARSE_DECL();

#define INT 257
#define WORD 258
#define NUMBER 259
#define SENTENCE 260
#define NVAL 261
#define LOCALVAR 262
#define SUB 263
#define END 264
#define CHAIN 265
#define ROUTINE 266
#define NEXT 267
#define OP_ADD 268
#define OP_SUB 269
#define OP_MUL 270
#define OP_DIV 271
#define OPENP 272
#define CLOSEP 273
#define ENTER 274
#define EXIT 275
#define SETAT 276
#define GETAT 277
#define ARRAY 278
#define ASSIGN 279
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    2,    0,    4,    3,    1,    1,    1,    7,   10,
    5,    6,    6,    8,    8,   11,   11,   11,   12,   12,
   12,   12,   13,   13,   13,   14,   14,   14,    9,    9,
   15,    9,
};
static const short yylen[] = {                            2,
    0,    0,    4,    0,    6,    0,    2,    2,    2,    0,
    4,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    0,    2,
    0,    5,
};
static const short yydefred[] = {                         0,
    2,    0,    6,    0,   14,   15,    0,   10,    3,   13,
    7,    8,   12,    0,    4,   29,    9,    0,    0,    6,
   16,   17,   18,   19,   20,   21,   22,   31,   11,   23,
   24,   25,   27,   26,   28,   30,    0,   29,    5,    0,
   32,
};
static const short yydgoto[] = {                          2,
    4,    3,   10,   18,   11,   12,   13,   14,   19,   16,
   33,   34,   35,   36,   38,
};
static const short yysindex[] = {                      -272,
    0,    0,    0, -225,    0,    0, -255,    0,    0,    0,
    0,    0,    0, -254,    0,    0,    0, -268, -257,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -220,    0,    0, -240,
    0,
};
static const short yyrindex[] = {                         7,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
static const short yygindex[] = {                         0,
  -12,    0,    0,    0,    0,    0,    0,    0,  -29,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 55
static const short yytable[] = {                         21,
   22,    1,   15,   17,   23,   20,    1,   37,   40,    0,
   24,   25,   26,   27,   28,   29,   21,   22,   30,   31,
   32,   23,    0,    0,    0,    0,    0,   24,   25,   26,
   27,   28,   41,    5,    6,   30,   31,   32,    5,    6,
    7,    0,    0,    0,    0,    7,    8,    0,    0,    9,
    0,    8,    0,    0,   39,
};
static const short yycheck[] = {                        257,
  258,  274,  258,  258,  262,  274,    0,   20,   38,   -1,
  268,  269,  270,  271,  272,  273,  257,  258,  276,  277,
  278,  262,   -1,   -1,   -1,   -1,   -1,  268,  269,  270,
  271,  272,  273,  259,  260,  276,  277,  278,  259,  260,
  266,   -1,   -1,   -1,   -1,  266,  272,   -1,   -1,  275,
   -1,  272,   -1,   -1,  275,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 279
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INT","WORD","NUMBER","SENTENCE",
"NVAL","LOCALVAR","SUB","END","CHAIN","ROUTINE","NEXT","OP_ADD","OP_SUB",
"OP_MUL","OP_DIV","OPENP","CLOSEP","ENTER","EXIT","SETAT","GETAT","ARRAY",
"ASSIGN",
};
static const char *yyrule[] = {
"$accept : program",
"program :",
"$$1 :",
"program : ENTER $$1 possiblestmt EXIT",
"$$2 :",
"varfunc : ROUTINE WORD $$2 ENTER possiblestmt EXIT",
"possiblestmt :",
"possiblestmt : possiblestmt codestmt",
"possiblestmt : possiblestmt declare",
"varstmt : vartype WORD",
"$$3 :",
"codestmt : OPENP $$3 opstmt CLOSEP",
"declare : varstmt",
"declare : varfunc",
"vartype : NUMBER",
"vartype : SENTENCE",
"varval : INT",
"varval : WORD",
"varval : LOCALVAR",
"binop : OP_ADD",
"binop : OP_SUB",
"binop : OP_MUL",
"binop : OP_DIV",
"datop : SETAT",
"datop : GETAT",
"datop : ARRAY",
"possiblearg : binop",
"possiblearg : varval",
"possiblearg : datop",
"opstmt :",
"opstmt : opstmt possiblearg",
"$$4 :",
"opstmt : opstmt OPENP $$4 opstmt CLOSEP",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 2:
#line 33 "y.y"
	{printf("ENTER\n");out_fptr = fopen("out.S", "w+b");}
break;
case 3:
#line 33 "y.y"
	{printf("EXIT\n");fclose(out_fptr);}
break;
case 4:
#line 35 "y.y"
	{printf("ROUTINE %s\n", yystack.l_mark[0].word);makesym(yystack.l_mark[0].word);makeblock(yystack.l_mark[0].word);}
break;
case 5:
#line 35 "y.y"
	{printsym();funcgen();closesym();closeblock();}
break;
case 9:
#line 42 "y.y"
	{printf("%s\n", yystack.l_mark[0].word);if(!getsym(yystack.l_mark[0].word))putsym(yystack.l_mark[0].word, 0, type_selector);else printf("symbol %s already registered\n", yystack.l_mark[0].word);}
break;
case 10:
#line 45 "y.y"
	{printf("OPENP\n");addline(TYPE_OP, (void*)'[');}
break;
case 11:
#line 45 "y.y"
	{printf("CLOSEP\n");addline(TYPE_OP, (void*)']');}
break;
case 14:
#line 50 "y.y"
	{printf("NUMBER\n");type_selector=TYPE_INT;}
break;
case 15:
#line 51 "y.y"
	{printf("SENTENCE\n");type_selector=TYPE_STR;}
break;
case 16:
#line 53 "y.y"
	{printf("INT %i\n", yystack.l_mark[0].num); addline(TYPE_INT, (void*)yystack.l_mark[0].num);}
break;
case 17:
#line 54 "y.y"
	{printf("WORD %s\n", yystack.l_mark[0].word); if(getsym(yystack.l_mark[0].word))addline(TYPE_STR, (void*)yystack.l_mark[0].word);else printf("%s undefined\n", yystack.l_mark[0].word);}
break;
case 18:
#line 55 "y.y"
	{printf("LOCAL %c\n", (char)yystack.l_mark[0].num); addline(TYPE_LOC, (void*)yystack.l_mark[0].num);}
break;
case 19:
#line 57 "y.y"
	{printf("OP_ADD\n"); addline(TYPE_OP, (void*)'+');}
break;
case 20:
#line 58 "y.y"
	{printf("OP_SUB\n"); addline(TYPE_OP, (void*)'-');}
break;
case 21:
#line 59 "y.y"
	{printf("OP_MUL\n"); addline(TYPE_OP, (void*)'*');}
break;
case 22:
#line 60 "y.y"
	{printf("OP_DIV\n"); addline(TYPE_OP, (void*)'/');}
break;
case 23:
#line 62 "y.y"
	{printf("SETAT\n"); addline(TYPE_OP, (void*)'=');}
break;
case 24:
#line 63 "y.y"
	{printf("GETAT\n"); addline(TYPE_OP, (void*)'$');}
break;
case 25:
#line 64 "y.y"
	{printf("ARRAY\n"); addline(TYPE_OP, (void*)'#');}
break;
case 31:
#line 72 "y.y"
	{printf("OPENP\n");chlevel(TYPE_EMB);addline(TYPE_OP, (void*)'[');}
break;
case 32:
#line 72 "y.y"
	{printf("CLOSEP\n");chlevel(TYPE_LV);addline(TYPE_OP, (void*)']');}
break;
#line 534 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}