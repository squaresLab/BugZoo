/* Driver template for the LEMON parser generator.
** The author disclaims copyright to this source code.
*/
/* First off, code is include which follows the "include" declaration
** in the input file. */
#include <stdio.h>
#line 6 "./http_resp_parser.y"

#include <assert.h>
#include <string.h>
#include "http_resp.h"
#include "keyvalue.h"
#include "array.h"
#include "log.h"

#line 17 "http_resp_parser.c"
/* Next is all token values, in a form suitable for use by makeheaders.
** This section will be null unless lemon is run with the -m switch.
*/
/*
** These constants (all generated automatically by the parser generator)
** specify the various kinds of tokens (terminals) that the parser
** understands.
**
** Each symbol here is a terminal symbol in the grammar.
*/
/* Make sure the INTERFACE macro is defined.
*/
#ifndef INTERFACE
# define INTERFACE 1
#endif
/* The next thing included is series of defines which control
** various aspects of the generated parser.
**    YYCODETYPE         is the data type used for storing terminal
**                       and nonterminal numbers.  "unsigned char" is
**                       used if there are fewer than 250 terminals
**                       and nonterminals.  "int" is used otherwise.
**    YYNOCODE           is a number of type YYCODETYPE which corresponds
**                       to no legal terminal or nonterminal number.  This
**                       number is used to fill in empty slots of the hash
**                       table.
**    YYFALLBACK         If defined, this indicates that one or more tokens
**                       have fall-back values which should be used if the
**                       original value of the token will not parse.
**    YYACTIONTYPE       is the data type used for storing terminal
**                       and nonterminal numbers.  "unsigned char" is
**                       used if there are fewer than 250 rules and
**                       states combined.  "int" is used otherwise.
**    http_resp_parserTOKENTYPE     is the data type used for minor tokens given
**                       directly to the parser from the tokenizer.
**    YYMINORTYPE        is the data type used for all minor tokens.
**                       This is typically a union of many types, one of
**                       which is http_resp_parserTOKENTYPE.  The entry in the union
**                       for base tokens is called "yy0".
**    YYSTACKDEPTH       is the maximum depth of the parser's stack.
**    http_resp_parserARG_SDECL     A static variable declaration for the %extra_argument
**    http_resp_parserARG_PDECL     A parameter declaration for the %extra_argument
**    http_resp_parserARG_STORE     Code to store %extra_argument into yypParser
**    http_resp_parserARG_FETCH     Code to extract %extra_argument from yypParser
**    YYNSTATE           the combined number of states.
**    YYNRULE            the number of rules in the grammar
**    YYERRORSYMBOL      is the code number of the error symbol.  If not
**                       defined, then do no error processing.
*/
/*  */
#define YYCODETYPE unsigned char
#define YYNOCODE 12
#define YYACTIONTYPE unsigned char
#define http_resp_parserTOKENTYPE buffer *
typedef union {
  http_resp_parserTOKENTYPE yy0;
  http_resp * yy2;
  data_string * yy9;
  array * yy12;
  int yy20;
  int yy23;
} YYMINORTYPE;
#define YYSTACKDEPTH 100
#define http_resp_parserARG_SDECL http_resp_ctx_t *ctx;
#define http_resp_parserARG_PDECL ,http_resp_ctx_t *ctx
#define http_resp_parserARG_FETCH http_resp_ctx_t *ctx = yypParser->ctx
#define http_resp_parserARG_STORE yypParser->ctx = ctx
#define YYNSTATE 23
#define YYNRULE 11
#define YYERRORSYMBOL 4
#define YYERRSYMDT yy23
#define YY_NO_ACTION      (YYNSTATE+YYNRULE+2)
#define YY_ACCEPT_ACTION  (YYNSTATE+YYNRULE+1)
#define YY_ERROR_ACTION   (YYNSTATE+YYNRULE)

/* Next are that tables used to determine what action to take based on the
** current state and lookahead token.  These tables are used to implement
** functions that take a state number and lookahead value and return an
** action integer.
**
** Suppose the action integer is N.  Then the action is determined as
** follows
**
**   0 <= N < YYNSTATE                  Shift N.  That is, push the lookahead
**                                      token onto the stack and goto state N.
**
**   YYNSTATE <= N < YYNSTATE+YYNRULE   Reduce by rule N-YYNSTATE.
**
**   N == YYNSTATE+YYNRULE              A syntax error has occurred.
**
**   N == YYNSTATE+YYNRULE+1            The parser accepts its input.
**
**   N == YYNSTATE+YYNRULE+2            No such action.  Denotes unused
**                                      slots in the yy_action[] table.
**
** The action table is constructed as a single large table named yy_action[].
** Given state S and lookahead X, the action is computed as
**
**      yy_action[ yy_shift_ofst[S] + X ]
**
** If the index value yy_shift_ofst[S]+X is out of range or if the value
** yy_lookahead[yy_shift_ofst[S]+X] is not equal to X or if yy_shift_ofst[S]
** is equal to YY_SHIFT_USE_DFLT, it means that the action is not in the table
** and that yy_default[S] should be used instead.
**
** The formula above is for computing the action when the lookahead is
** a terminal symbol.  If the lookahead is a non-terminal (as occurs after
** a reduce action) then the yy_reduce_ofst[] array is used in place of
** the yy_shift_ofst[] array and YY_REDUCE_USE_DFLT is used in place of
** YY_SHIFT_USE_DFLT.
**
** The following are the tables generated in this section:
**
**  yy_action[]        A single table containing all actions.
**  yy_lookahead[]     A table containing the lookahead for each entry in
**                     yy_action.  Used to detect hash collisions.
**  yy_shift_ofst[]    For each state, the offset into yy_action for
**                     shifting terminals.
**  yy_reduce_ofst[]   For each state, the offset into yy_action for
**                     shifting non-terminals after a reduce.
**  yy_default[]       Default action for each state.
*/
static YYACTIONTYPE yy_action[] = {
 /*     0 */     9,   35,   22,    1,   15,    2,    4,    8,    6,   17,
 /*    10 */    20,   12,   16,   13,   15,   14,    4,   18,   15,   19,
 /*    20 */     4,   26,    5,   23,    3,    5,    7,   10,   21,    4,
 /*    30 */    24,   11,   25,
};
static YYCODETYPE yy_lookahead[] = {
 /*     0 */     5,    6,    2,    8,    9,    1,    2,    1,    2,    1,
 /*    10 */     2,    1,    2,    8,    9,    1,    2,    8,    9,    1,
 /*    20 */     2,    2,    3,    0,    9,    3,    1,    7,    2,    2,
 /*    30 */     0,   10,    0,
};
#define YY_SHIFT_USE_DFLT (-1)
static signed char yy_shift_ofst[] = {
 /*     0 */     0,    4,   23,   -1,   22,    6,   25,   -1,   -1,   26,
 /*    10 */     8,   10,   27,   14,   30,   -1,   -1,   27,   18,   32,
 /*    20 */    -1,   -1,   19,
};
#define YY_REDUCE_USE_DFLT (-6)
static signed char yy_reduce_ofst[] = {
 /*     0 */    -5,   15,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   20,
 /*    10 */    21,   -6,    5,   15,   -6,   -6,   -6,    9,   15,   -6,
 /*    20 */    -6,   -6,   -6,
};
static YYACTIONTYPE yy_default[] = {
 /*     0 */    34,   34,   34,   30,   34,   34,   34,   32,   33,   34,
 /*    10 */    34,   34,   34,   34,   34,   31,   29,   34,   34,   34,
 /*    20 */    28,   27,   34,
};
#define YY_SZ_ACTTAB (sizeof(yy_action)/sizeof(yy_action[0]))

/* The next table maps tokens into fallback tokens.  If a construct
** like the following:
**
**      %fallback ID X Y Z.
**
** appears in the grammer, then ID becomes a fallback token for X, Y,
** and Z.  Whenever one of the tokens X, Y, or Z is input to the parser
** but it does not parse, the type of the token is changed to ID and
** the parse is retried before an error is thrown.
*/
#ifdef YYFALLBACK
static const YYCODETYPE yyFallback[] = {
};
#endif /* YYFALLBACK */

/* The following structure represents a single element of the
** parser's stack.  Information stored includes:
**
**   +  The state number for the parser at this level of the stack.
**
**   +  The value of the token stored at this level of the stack.
**      (In other words, the "major" token.)
**
**   +  The semantic value stored at this level of the stack.  This is
**      the information used by the action routines in the grammar.
**      It is sometimes called the "minor" token.
*/
struct yyStackEntry {
  int stateno;       /* The state-number */
  int major;         /* The major token value.  This is the code
                     ** number for the token at this stack level */
  YYMINORTYPE minor; /* The user-supplied minor token value.  This
                     ** is the value of the token  */
};
typedef struct yyStackEntry yyStackEntry;

/* The state of the parser is completely contained in an instance of
** the following structure */
struct yyParser {
  int yyidx;                    /* Index of top element in stack */
  int yyerrcnt;                 /* Shifts left before out of the error */
  http_resp_parserARG_SDECL                /* A place to hold %extra_argument */
  yyStackEntry yystack[YYSTACKDEPTH];  /* The parser's stack */
};
typedef struct yyParser yyParser;

#ifndef NDEBUG
#include <stdio.h>
static FILE *yyTraceFILE = 0;
static char *yyTracePrompt = 0;
#endif /* NDEBUG */

#ifndef NDEBUG
/*
** Turn parser tracing on by giving a stream to which to write the trace
** and a prompt to preface each trace message.  Tracing is turned off
** by making either argument NULL
**
** Inputs:
** <ul>
** <li> A FILE* to which trace output should be written.
**      If NULL, then tracing is turned off.
** <li> A prefix string written at the beginning of every
**      line of trace output.  If NULL, then tracing is
**      turned off.
** </ul>
**
** Outputs:
** None.
*/
void http_resp_parserTrace(FILE *TraceFILE, char *zTracePrompt){
  yyTraceFILE = TraceFILE;
  yyTracePrompt = zTracePrompt;
  if( yyTraceFILE==0 ) yyTracePrompt = 0;
  else if( yyTracePrompt==0 ) yyTraceFILE = 0;
}
#endif /* NDEBUG */

#ifndef NDEBUG
/* For tracing shifts, the names of all terminals and nonterminals
** are required.  The following table supplies these names */
static const char *yyTokenName[] = {
  "$",             "CRLF",          "STRING",        "COLON",       
  "error",         "protocol",      "response_hdr",  "number",      
  "headers",       "header",        "reason",      
};
#endif /* NDEBUG */

#ifndef NDEBUG
/* For tracing reduce actions, the names of all rules are required.
*/
static const char *yyRuleName[] = {
 /*   0 */ "response_hdr ::= headers CRLF",
 /*   1 */ "response_hdr ::= protocol number reason CRLF headers CRLF",
 /*   2 */ "response_hdr ::= protocol number CRLF headers CRLF",
 /*   3 */ "protocol ::= STRING",
 /*   4 */ "number ::= STRING",
 /*   5 */ "reason ::= STRING",
 /*   6 */ "reason ::= reason STRING",
 /*   7 */ "headers ::= headers header",
 /*   8 */ "headers ::= header",
 /*   9 */ "header ::= STRING COLON STRING CRLF",
 /*  10 */ "header ::= STRING COLON CRLF",
};
#endif /* NDEBUG */

/*
** This function returns the symbolic name associated with a token
** value.
*/
const char *http_resp_parserTokenName(int tokenType){
#ifndef NDEBUG
  if( tokenType>0 && tokenType<(sizeof(yyTokenName)/sizeof(yyTokenName[0])) ){
    return yyTokenName[tokenType];
  }else{
    return "Unknown";
  }
#else
  return "";
#endif
}

/*
** This function allocates a new parser.
** The only argument is a pointer to a function which works like
** malloc.
**
** Inputs:
** A pointer to the function used to allocate memory.
**
** Outputs:
** A pointer to a parser.  This pointer is used in subsequent calls
** to http_resp_parser and http_resp_parserFree.
*/
void *http_resp_parserAlloc(void *(*mallocProc)(size_t)){
  yyParser *pParser;
  pParser = (yyParser*)(*mallocProc)( (size_t)sizeof(yyParser) );
  if( pParser ){
    pParser->yyidx = -1;
  }
  return pParser;
}

/* The following function deletes the value associated with a
** symbol.  The symbol can be either a terminal or nonterminal.
** "yymajor" is the symbol code, and "yypminor" is a pointer to
** the value.
*/
static void yy_destructor(YYCODETYPE yymajor, YYMINORTYPE *yypminor){
  switch( yymajor ){
    /* Here is inserted the actions which take place when a
    ** terminal or non-terminal is destroyed.  This can happen
    ** when the symbol is popped from the stack during a
    ** reduce or during error processing or when a parser is
    ** being destroyed before it is finished parsing.
    **
    ** Note: during a reduce, the only symbols destroyed are those
    ** which appear on the RHS of the rule, but which are not used
    ** inside the C code.
    */
    case 1:
    case 2:
    case 3:
#line 25 "./http_resp_parser.y"
{ buffer_free((yypminor->yy0)); }
#line 334 "http_resp_parser.c"
      break;
    case 10:
#line 24 "./http_resp_parser.y"
{ buffer_free((yypminor->yy0)); }
#line 339 "http_resp_parser.c"
      break;
    default:  break;   /* If no destructor action specified: do nothing */
  }
}

/*
** Pop the parser's stack once.
**
** If there is a destructor routine associated with the token which
** is popped from the stack, then call it.
**
** Return the major token number for the symbol popped.
*/
static int yy_pop_parser_stack(yyParser *pParser){
  YYCODETYPE yymajor;
  yyStackEntry *yytos = &pParser->yystack[pParser->yyidx];

  if( pParser->yyidx<0 ) return 0;
#ifndef NDEBUG
  if( yyTraceFILE && pParser->yyidx>=0 ){
    fprintf(yyTraceFILE,"%sPopping %s\n",
      yyTracePrompt,
      yyTokenName[yytos->major]);
  }
#endif
  yymajor = yytos->major;
  yy_destructor( yymajor, &yytos->minor);
  pParser->yyidx--;
  return yymajor;
}

/*
** Deallocate and destroy a parser.  Destructors are all called for
** all stack elements before shutting the parser down.
**
** Inputs:
** <ul>
** <li>  A pointer to the parser.  This should be a pointer
**       obtained from http_resp_parserAlloc.
** <li>  A pointer to a function used to reclaim memory obtained
**       from malloc.
** </ul>
*/
void http_resp_parserFree(
  void *p,                    /* The parser to be deleted */
  void (*freeProc)(void*)     /* Function used to reclaim memory */
){
  yyParser *pParser = (yyParser*)p;
  if( pParser==0 ) return;
  while( pParser->yyidx>=0 ) yy_pop_parser_stack(pParser);
  (*freeProc)((void*)pParser);
}

/*
** Find the appropriate action for a parser given the terminal
** look-ahead token iLookAhead.
**
** If the look-ahead token is YYNOCODE, then check to see if the action is
** independent of the look-ahead.  If it is, return the action, otherwise
** return YY_NO_ACTION.
*/
static int yy_find_shift_action(
  yyParser *pParser,        /* The parser */
  int iLookAhead            /* The look-ahead token */
){
  int i;
  int stateno = pParser->yystack[pParser->yyidx].stateno;

  /* if( pParser->yyidx<0 ) return YY_NO_ACTION;  */
  i = yy_shift_ofst[stateno];
  if( i==YY_SHIFT_USE_DFLT ){
    return yy_default[stateno];
  }
  if( iLookAhead==YYNOCODE ){
    return YY_NO_ACTION;
  }
  i += iLookAhead;
  if( i<0 || i>=YY_SZ_ACTTAB || yy_lookahead[i]!=iLookAhead ){
#ifdef YYFALLBACK
    int iFallback;            /* Fallback token */
    if( iLookAhead<sizeof(yyFallback)/sizeof(yyFallback[0])
           && (iFallback = yyFallback[iLookAhead])!=0 ){
#ifndef NDEBUG
      if( yyTraceFILE ){
        fprintf(yyTraceFILE, "%sFALLBACK %s => %s\n",
           yyTracePrompt, yyTokenName[iLookAhead], yyTokenName[iFallback]);
      }
#endif
      return yy_find_shift_action(pParser, iFallback);
    }
#endif
    return yy_default[stateno];
  }else{
    return yy_action[i];
  }
}

/*
** Find the appropriate action for a parser given the non-terminal
** look-ahead token iLookAhead.
**
** If the look-ahead token is YYNOCODE, then check to see if the action is
** independent of the look-ahead.  If it is, return the action, otherwise
** return YY_NO_ACTION.
*/
static int yy_find_reduce_action(
  yyParser *pParser,        /* The parser */
  int iLookAhead            /* The look-ahead token */
){
  int i;
  int stateno = pParser->yystack[pParser->yyidx].stateno;

  i = yy_reduce_ofst[stateno];
  if( i==YY_REDUCE_USE_DFLT ){
    return yy_default[stateno];
  }
  if( iLookAhead==YYNOCODE ){
    return YY_NO_ACTION;
  }
  i += iLookAhead;
  if( i<0 || i>=YY_SZ_ACTTAB || yy_lookahead[i]!=iLookAhead ){
    return yy_default[stateno];
  }else{
    return yy_action[i];
  }
}

/*
** Perform a shift action.
*/
static void yy_shift(
  yyParser *yypParser,          /* The parser to be shifted */
  int yyNewState,               /* The new state to shift in */
  int yyMajor,                  /* The major token to shift in */
  YYMINORTYPE *yypMinor         /* Pointer ot the minor token to shift in */
){
  yyStackEntry *yytos;
  yypParser->yyidx++;
  if( yypParser->yyidx>=YYSTACKDEPTH ){
     http_resp_parserARG_FETCH;
     yypParser->yyidx--;
#ifndef NDEBUG
     if( yyTraceFILE ){
       fprintf(yyTraceFILE,"%sStack Overflow!\n",yyTracePrompt);
     }
#endif
     while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
     /* Here code is inserted which will execute if the parser
     ** stack every overflows */
     http_resp_parserARG_STORE; /* Suppress warning about unused %extra_argument var */
     return;
  }
  yytos = &yypParser->yystack[yypParser->yyidx];
  yytos->stateno = yyNewState;
  yytos->major = yyMajor;
  yytos->minor = *yypMinor;
#ifndef NDEBUG
  if( yyTraceFILE && yypParser->yyidx>0 ){
    int i;
    fprintf(yyTraceFILE,"%sShift %d\n",yyTracePrompt,yyNewState);
    fprintf(yyTraceFILE,"%sStack:",yyTracePrompt);
    for(i=1; i<=yypParser->yyidx; i++)
      fprintf(yyTraceFILE," %s",yyTokenName[yypParser->yystack[i].major]);
    fprintf(yyTraceFILE,"\n");
  }
#endif
}

/* The following table contains information about every rule that
** is used during the reduce.
*/
static struct {
  YYCODETYPE lhs;         /* Symbol on the left-hand side of the rule */
  unsigned char nrhs;     /* Number of right-hand side symbols in the rule */
} yyRuleInfo[] = {
  { 6, 2 },
  { 6, 6 },
  { 6, 5 },
  { 5, 1 },
  { 7, 1 },
  { 10, 1 },
  { 10, 2 },
  { 8, 2 },
  { 8, 1 },
  { 9, 4 },
  { 9, 3 },
};

static void yy_accept(yyParser*);  /* Forward Declaration */

/*
** Perform a reduce action and the shift that must immediately
** follow the reduce.
*/
static void yy_reduce(
  yyParser *yypParser,         /* The parser */
  int yyruleno                 /* Number of the rule by which to reduce */
){
  int yygoto;                     /* The next state */
  int yyact;                      /* The next action */
  YYMINORTYPE yygotominor;        /* The LHS of the rule reduced */
  yyStackEntry *yymsp;            /* The top of the parser's stack */
  int yysize;                     /* Amount to pop the stack */
  http_resp_parserARG_FETCH;
  yymsp = &yypParser->yystack[yypParser->yyidx];
#ifndef NDEBUG
  if( yyTraceFILE && yyruleno>=0
        && yyruleno<sizeof(yyRuleName)/sizeof(yyRuleName[0]) ){
    fprintf(yyTraceFILE, "%sReduce [%s].\n", yyTracePrompt,
      yyRuleName[yyruleno]);
  }
#endif /* NDEBUG */

  switch( yyruleno ){
  /* Beginning here are the reduction cases.  A typical example
  ** follows:
  **   case 0:
  **  #line <lineno> <grammarfile>
  **     { ... }           // User supplied code
  **  #line <lineno> <thisfile>
  **     break;
  */
      case 0:
#line 28 "./http_resp_parser.y"
{
    http_resp *resp = ctx->resp;
    data_string *ds;
 
    resp->protocol = HTTP_VERSION_UNSET;

    buffer_copy_string(resp->reason, ""); /* no reason */

    if (NULL == (ds = (data_string *)array_get_element(resp->headers, CONST_STR_LEN("Status")))) { 
        resp->status = 0;
    } else {
        char *err;
        resp->status = strtol(ds->value->ptr, &err, 10);
   
        if (*err != '\0' && *err != ' ' && *err != '\r') {
            buffer_copy_string(ctx->errmsg, "expected a number: ");
            buffer_append_string_buffer(ctx->errmsg, ds->value);
            buffer_append_string(ctx->errmsg, err);
        
            ctx->ok = 0;
        }
    }
}
#line 587 "http_resp_parser.c"
        /* No destructor defined for headers */
  yy_destructor(1,&yymsp[0].minor);
        break;
      case 1:
#line 53 "./http_resp_parser.y"
{
    http_resp *resp = ctx->resp;
    
    resp->status = yymsp[-4].minor.yy20;
    resp->protocol = yymsp[-5].minor.yy20;
    buffer_copy_string_buffer(resp->reason, yymsp[-3].minor.yy0);
    buffer_pool_append(ctx->unused_buffers, yymsp[-3].minor.yy0); 
}
#line 601 "http_resp_parser.c"
  yy_destructor(1,&yymsp[-2].minor);
        /* No destructor defined for headers */
  yy_destructor(1,&yymsp[0].minor);
        break;
      case 2:
#line 63 "./http_resp_parser.y"
{
    http_resp *resp = ctx->resp;
    
    resp->status = yymsp[-3].minor.yy20;
    resp->protocol = yymsp[-4].minor.yy20;
    buffer_reset(resp->reason);
}
#line 615 "http_resp_parser.c"
  yy_destructor(1,&yymsp[-2].minor);
        /* No destructor defined for headers */
  yy_destructor(1,&yymsp[0].minor);
        break;
      case 3:
#line 71 "./http_resp_parser.y"
{
    if (buffer_is_equal_string(yymsp[0].minor.yy0, CONST_STR_LEN("HTTP/1.0"))) {
        yygotominor.yy20 = HTTP_VERSION_1_0;
    } else if (buffer_is_equal_string(yymsp[0].minor.yy0, CONST_STR_LEN("HTTP/1.1"))) {
        yygotominor.yy20 = HTTP_VERSION_1_1;
    } else {
        buffer_copy_string(ctx->errmsg, "unknown protocol: ");
        buffer_append_string_buffer(ctx->errmsg, yymsp[0].minor.yy0);
        
        ctx->ok = 0;
    }
    buffer_pool_append(ctx->unused_buffers, yymsp[0].minor.yy0); 
}
#line 635 "http_resp_parser.c"
        break;
      case 4:
#line 85 "./http_resp_parser.y"
{
    char *err;
    yygotominor.yy20 = strtol(yymsp[0].minor.yy0->ptr, &err, 10);
    
    if (*err != '\0') {
        buffer_copy_string(ctx->errmsg, "expected a number, got: ");
        buffer_append_string_buffer(ctx->errmsg, yymsp[0].minor.yy0);
        
        ctx->ok = 0;
    }
    buffer_pool_append(ctx->unused_buffers, yymsp[0].minor.yy0); 
}
#line 651 "http_resp_parser.c"
        break;
      case 5:
#line 98 "./http_resp_parser.y"
{
    yygotominor.yy0 = yymsp[0].minor.yy0;
}
#line 658 "http_resp_parser.c"
        break;
      case 6:
#line 102 "./http_resp_parser.y"
{
    yygotominor.yy0 = yymsp[-1].minor.yy0;
    
    buffer_append_string(yygotominor.yy0, " ");
    buffer_append_string_buffer(yygotominor.yy0, yymsp[0].minor.yy0);

    buffer_pool_append(ctx->unused_buffers, yymsp[0].minor.yy0); 
}
#line 670 "http_resp_parser.c"
        break;
      case 7:
        /* No destructor defined for headers */
        /* No destructor defined for header */
        break;
      case 8:
        /* No destructor defined for header */
        break;
      case 9:
#line 114 "./http_resp_parser.y"
{
    http_resp *resp = ctx->resp;

    if (NULL == (yygotominor.yy9 = (data_string *)array_get_unused_element(resp->headers, TYPE_STRING))) {
        yygotominor.yy9 = data_response_init();
    }
    
    buffer_copy_string_buffer(yygotominor.yy9->key, yymsp[-3].minor.yy0);
    buffer_copy_string_buffer(yygotominor.yy9->value, yymsp[-1].minor.yy0);    
    buffer_pool_append(ctx->unused_buffers, yymsp[-3].minor.yy0); 
    buffer_pool_append(ctx->unused_buffers, yymsp[-1].minor.yy0); 

    array_insert_unique(resp->headers, (data_unset *)yygotominor.yy9);
}
#line 695 "http_resp_parser.c"
  yy_destructor(3,&yymsp[-2].minor);
  yy_destructor(1,&yymsp[0].minor);
        break;
      case 10:
#line 130 "./http_resp_parser.y"
{
    http_resp *resp = ctx->resp;

    if (NULL == (yygotominor.yy9 = (data_string *)array_get_unused_element(resp->headers, TYPE_STRING))) {
        yygotominor.yy9 = data_response_init();
    }
    
    buffer_copy_string_buffer(yygotominor.yy9->key, yymsp[-2].minor.yy0);
    buffer_copy_string(yygotominor.yy9->value, ""); 
    buffer_pool_append(ctx->unused_buffers, yymsp[-2].minor.yy0); 

    array_insert_unique(resp->headers, (data_unset *)yygotominor.yy9);
}
#line 714 "http_resp_parser.c"
  yy_destructor(3,&yymsp[-1].minor);
  yy_destructor(1,&yymsp[0].minor);
        break;
  };
  yygoto = yyRuleInfo[yyruleno].lhs;
  yysize = yyRuleInfo[yyruleno].nrhs;
  yypParser->yyidx -= yysize;
  yyact = yy_find_reduce_action(yypParser,yygoto);
  if( yyact < YYNSTATE ){
    yy_shift(yypParser,yyact,yygoto,&yygotominor);
  }else if( yyact == YYNSTATE + YYNRULE + 1 ){
    yy_accept(yypParser);
  }
}

/*
** The following code executes when the parse fails
*/
static void yy_parse_failed(
  yyParser *yypParser           /* The parser */
){
  http_resp_parserARG_FETCH;
#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sFail!\n",yyTracePrompt);
  }
#endif
  while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
  /* Here code is inserted which will be executed whenever the
  ** parser fails */
#line 15 "./http_resp_parser.y"

  ctx->ok = 0;

#line 749 "http_resp_parser.c"
  http_resp_parserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/*
** The following code executes when a syntax error first occurs.
*/
static void yy_syntax_error(
  yyParser *yypParser,           /* The parser */
  int yymajor,                   /* The major type of the error token */
  YYMINORTYPE yyminor            /* The minor type of the error token */
){
  http_resp_parserARG_FETCH;
#define TOKEN (yyminor.yy0)
  http_resp_parserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/*
** The following is executed when the parser accepts
*/
static void yy_accept(
  yyParser *yypParser           /* The parser */
){
  http_resp_parserARG_FETCH;
#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sAccept!\n",yyTracePrompt);
  }
#endif
  while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
  /* Here code is inserted which will be executed whenever the
  ** parser accepts */
  http_resp_parserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/* The main parser program.
** The first argument is a pointer to a structure obtained from
** "http_resp_parserAlloc" which describes the current state of the parser.
** The second argument is the major token number.  The third is
** the minor token.  The fourth optional argument is whatever the
** user wants (and specified in the grammar) and is available for
** use by the action routines.
**
** Inputs:
** <ul>
** <li> A pointer to the parser (an opaque structure.)
** <li> The major token number.
** <li> The minor token number.
** <li> An option argument of a grammar-specified type.
** </ul>
**
** Outputs:
** None.
*/
void http_resp_parser(
  void *yyp,                   /* The parser */
  int yymajor,                 /* The major token code number */
  http_resp_parserTOKENTYPE yyminor       /* The value for the token */
  http_resp_parserARG_PDECL               /* Optional %extra_argument parameter */
){
  YYMINORTYPE yyminorunion;
  int yyact;            /* The parser action. */
  int yyendofinput;     /* True if we are at the end of input */
  int yyerrorhit = 0;   /* True if yymajor has invoked an error */
  yyParser *yypParser;  /* The parser */

  /* (re)initialize the parser, if necessary */
  yypParser = (yyParser*)yyp;
  if( yypParser->yyidx<0 ){
    if( yymajor==0 ) return;
    yypParser->yyidx = 0;
    yypParser->yyerrcnt = -1;
    yypParser->yystack[0].stateno = 0;
    yypParser->yystack[0].major = 0;
  }
  yyminorunion.yy0 = yyminor;
  yyendofinput = (yymajor==0);
  http_resp_parserARG_STORE;

#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sInput %s\n",yyTracePrompt,yyTokenName[yymajor]);
  }
#endif

  do{
    yyact = yy_find_shift_action(yypParser,yymajor);
    if( yyact<YYNSTATE ){
      yy_shift(yypParser,yyact,yymajor,&yyminorunion);
      yypParser->yyerrcnt--;
      if( yyendofinput && yypParser->yyidx>=0 ){
        yymajor = 0;
      }else{
        yymajor = YYNOCODE;
      }
    }else if( yyact < YYNSTATE + YYNRULE ){
      yy_reduce(yypParser,yyact-YYNSTATE);
    }else if( yyact == YY_ERROR_ACTION ){
      int yymx;
#ifndef NDEBUG
      if( yyTraceFILE ){
        fprintf(yyTraceFILE,"%sSyntax Error!\n",yyTracePrompt);
      }
#endif
#ifdef YYERRORSYMBOL
      /* A syntax error has occurred.
      ** The response to an error depends upon whether or not the
      ** grammar defines an error token "ERROR".
      **
      ** This is what we do if the grammar does define ERROR:
      **
      **  * Call the %syntax_error function.
      **
      **  * Begin popping the stack until we enter a state where
      **    it is legal to shift the error symbol, then shift
      **    the error symbol.
      **
      **  * Set the error count to three.
      **
      **  * Begin accepting and shifting new tokens.  No new error
      **    processing will occur until three tokens have been
      **    shifted successfully.
      **
      */
      if( yypParser->yyerrcnt<0 ){
        yy_syntax_error(yypParser,yymajor,yyminorunion);
      }
      yymx = yypParser->yystack[yypParser->yyidx].major;
      if( yymx==YYERRORSYMBOL || yyerrorhit ){
#ifndef NDEBUG
        if( yyTraceFILE ){
          fprintf(yyTraceFILE,"%sDiscard input token %s\n",
             yyTracePrompt,yyTokenName[yymajor]);
        }
#endif
        yy_destructor(yymajor,&yyminorunion);
        yymajor = YYNOCODE;
      }else{
         while(
          yypParser->yyidx >= 0 &&
          yymx != YYERRORSYMBOL &&
          (yyact = yy_find_shift_action(yypParser,YYERRORSYMBOL)) >= YYNSTATE
        ){
          yy_pop_parser_stack(yypParser);
        }
        if( yypParser->yyidx < 0 || yymajor==0 ){
          yy_destructor(yymajor,&yyminorunion);
          yy_parse_failed(yypParser);
          yymajor = YYNOCODE;
        }else if( yymx!=YYERRORSYMBOL ){
          YYMINORTYPE u2;
          u2.YYERRSYMDT = 0;
          yy_shift(yypParser,yyact,YYERRORSYMBOL,&u2);
        }
      }
      yypParser->yyerrcnt = 3;
      yyerrorhit = 1;
#else  /* YYERRORSYMBOL is not defined */
      /* This is what we do if the grammar does not define ERROR:
      **
      **  * Report an error message, and throw away the input token.
      **
      **  * If the input token is $, then fail the parse.
      **
      ** As before, subsequent error messages are suppressed until
      ** three input tokens have been successfully shifted.
      */
      if( yypParser->yyerrcnt<=0 ){
        yy_syntax_error(yypParser,yymajor,yyminorunion);
      }
      yypParser->yyerrcnt = 3;
      yy_destructor(yymajor,&yyminorunion);
      if( yyendofinput ){
        yy_parse_failed(yypParser);
      }
      yymajor = YYNOCODE;
#endif
    }else{
      yy_accept(yypParser);
      yymajor = YYNOCODE;
    }
  }while( yymajor!=YYNOCODE && yypParser->yyidx>=0 );
  return;
}
