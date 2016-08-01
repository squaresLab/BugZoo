/* flex - tool to generate fast lexical analyzers */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 *
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef lint
char copyright[] =
"@(#) Copyright (c) 1990 The Regents of the University of California.\n\
 All rights reserved.\n";
#endif /* not lint */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $
*/

#include "flexdef.h"
#include "version.h"
#include <ctype.h> 
#include "parse.h"
#include "FaultSeeds.h"

static char flex_version[] = FLEX_VERSION;


/* declare functions that have forward references */

void flexinit PROTO((int, char**));
void readin PROTO((void));
void set_up_initial_allocations PROTO((void));

#ifdef NEED_ARGV_FIXUP
extern void argv_fixup PROTO((int *, char ***));
#endif


/* these globals are all defined and commented in flexdef.h */
int printstats, syntaxerror, eofseen, ddebug, trace, nowarn, spprdflt;
int interactive, caseins, lex_compat, do_yylineno, useecs, fulltbl, usemecs;
int fullspd, gen_line_dirs, performance_report, backing_up_report;
int C_plus_plus, long_align, use_read, yytext_is_array, do_yywrap, csize;
int yymore_used, reject, real_reject, continued_action, in_rule;
int yymore_really_used, reject_really_used;
int datapos, dataline, linenum, out_linenum;
FILE *skelfile = NULL;

/* ### add for testing ### */
FILE *err = NULL;
/* ####################### */

int skel_ind = 0;
char *action_array;
int action_size, defs1_offset, prolog_offset, action_offset, action_index;
char *infilename = NULL, *outfilename = NULL;
int did_outfilename;
char *prefix, *yyclass;
int do_stdinit, use_stdout;
int onestate[ONE_STACK_SIZE], onesym[ONE_STACK_SIZE];
int onenext[ONE_STACK_SIZE], onedef[ONE_STACK_SIZE], onesp;
int current_mns, current_max_rules;
int num_rules, num_eof_rules, default_rule, lastnfa;
int *firstst, *lastst, *finalst, *transchar, *trans1, *trans2;
int *accptnum, *assoc_rule, *state_type;
int *rule_type, *rule_linenum, *rule_useful;
int current_state_type;
int variable_trailing_context_rules;
int numtemps, numprots, protprev[MSP], protnext[MSP], prottbl[MSP];
int protcomst[MSP], firstprot, lastprot, protsave[PROT_SAVE_SIZE];
int numecs, nextecm[CSIZE + 1], ecgroup[CSIZE + 1], nummecs, tecfwd[CSIZE + 1];
int tecbck[CSIZE + 1];
int lastsc, *scset, *scbol, *scxclu, *sceof;
int current_max_scs;
char **scname;
int current_max_dfa_size, current_max_xpairs;
int current_max_template_xpairs, current_max_dfas;
int lastdfa, *nxt, *chk, *tnxt;
int *base, *def, *nultrans, NUL_ec, tblend, firstfree, **dss, *dfasiz;
union dfaacc_union *dfaacc;
int *accsiz, *dhash, numas;
int numsnpairs, jambase, jamstate;
int lastccl, *cclmap, *ccllen, *cclng, cclreuse;
int current_maxccls, current_max_ccl_tbl_size;
Char *ccltbl;
char nmstr[MAXLINE];
int sectnum, nummt, hshcol, dfaeql, numeps, eps2, num_reallocs;
int tmpuses, totnst, peakpairs, numuniq, numdup, hshsave;
int num_backing_up, bol_needed;
FILE *backing_up_file;
int end_of_buffer_state;
char **input_files;
int num_input_files;

/* Make sure program_name is initialized so we don't crash if writing
 * out an error message before getting the program name from argv[0].
 */
char *program_name = "flex";

#ifndef SHORT_FILE_NAMES
static char *outfile_template = "lex.%s.%s";
static char *backing_name = "lex.backup";
#else
static char *outfile_template = "lex%s.%s";
static char *backing_name = "lex.bck";
#endif

#ifdef THINK_C
#include <console.h>
#endif

#ifdef MS_DOS
extern unsigned _stklen = 16384;
#endif

static char outfile_path[MAXLINE];
static int outfile_created = 0;
static char *skelname = NULL;


int main( argc, argv )
int argc;
char **argv;
	{
	int i;

#ifdef THINK_C
	argc = ccommand( &argv );
#endif
#ifdef NEED_ARGV_FIXUP
	argv_fixup( &argc, &argv );
#endif

/* ### add for testing ### */
        if(--argc >0){
                err = fopen( *++argv, "w" );
                --argv; ++argc;
        }
/* ####################### */

	flexinit( argc, argv );

	readin();

	ntod();

	for ( i = 1; i <= num_rules; ++i )
		if ( ! rule_useful[i] && i != default_rule )
			line_warning( _( "rule cannot be matched" ),
					rule_linenum[i] );

	if ( spprdflt && ! reject && rule_useful[default_rule] )
		line_warning(
			_( "-s option given but default rule can be matched" ),
			rule_linenum[default_rule] );

	/* Generate the C state transition tables from the DFA. */
	make_tables();

	/* Note, flexend does not return.  It exits with its argument
	 * as status.
	 */
	flexend( 0 );

	return 0;	/* keep compilers/lint happy */
	}


/* check_options - check user-specified options */

void check_options()
	{
	int i;

	if ( lex_compat )
		{
		if ( C_plus_plus )
			flexerror( _( "Can't use -+ with -l option" ) );

		if ( fulltbl || fullspd )
			flexerror( _( "Can't use -f or -F with -l option" ) );

		/* Don't rely on detecting use of yymore() and REJECT,
		 * just assume they'll be used.
		 */
		yymore_really_used = reject_really_used = true;

		yytext_is_array = true;
		do_yylineno = true;
		use_read = false;
		}

	if ( do_yylineno )
		/* This should really be "maintain_backup_tables = true" */
		reject_really_used = true;

	if ( csize == unspecified )
		{
		if ( (fulltbl || fullspd) && ! useecs )
			csize = DEFAULT_CSIZE;
		else
			csize = CSIZE;
		}

	if ( interactive == unspecified )
		{
		if ( fulltbl || fullspd )
			interactive = false;
		else
			interactive = true;
		}

	if ( fulltbl || fullspd )
		{
		if ( usemecs )
			flexerror(
			_( "-Cf/-CF and -Cm don't make sense together" ) );

		if ( interactive )
			flexerror( _( "-Cf/-CF and -I are incompatible" ) );

		if ( lex_compat )
			flexerror(
		_( "-Cf/-CF are incompatible with lex-compatibility mode" ) );

		if ( do_yylineno )
			flexerror(
			_( "-Cf/-CF and %option yylineno are incompatible" ) );

		if ( fulltbl && fullspd )
			flexerror( _( "-Cf and -CF are mutually exclusive" ) );
		}

	if ( C_plus_plus && fullspd )
		flexerror( _( "Can't use -+ with -CF option" ) );

	if ( C_plus_plus && yytext_is_array )
		{
		warn( _( "%array incompatible with -+ option" ) );
		yytext_is_array = false;
		}

	if ( useecs )
		{ /* Set up doubly-linked equivalence classes. */

		/* We loop all the way up to csize, since ecgroup[csize] is
		 * the position used for NUL characters.
		 */
		ecgroup[1] = NIL;

		for ( i = 2; i <= csize; ++i )
			{
			ecgroup[i] = i - 1;
			nextecm[i - 1] = i;
			}

		nextecm[csize] = NIL;
		}

	else
		{
		/* Put everything in its own equivalence class. */
		for ( i = 1; i <= csize; ++i )
			{
			ecgroup[i] = i;
			nextecm[i] = BAD_SUBSCRIPT;	/* to catch errors */
			}
		}

	if ( ! use_stdout )
		{
		FILE *prev_stdout;

		if ( ! did_outfilename )
			{
			char *suffix;

			if ( C_plus_plus )
				suffix = "cc";
			else
				suffix = "c";

			sprintf( outfile_path, outfile_template,
				prefix, suffix );

			outfilename = outfile_path;
			}

		prev_stdout = freopen( outfilename, "w", stdout );

		if ( prev_stdout == NULL )
			lerrsf( _( "could not create %s" ), outfilename );

		outfile_created = 1;
		}

	if ( skelname && (skelfile = fopen( skelname, "r" )) == NULL )
		lerrsf( _( "can't open skeleton file %s" ), skelname );

	if ( strcmp( prefix, "yy" ) )
		{
#define GEN_PREFIX(name) out_str3( "#define yy%s %s%s\n", name, prefix, name )
		if ( C_plus_plus )
			GEN_PREFIX( "FlexLexer" );
		else
			{
			GEN_PREFIX( "_create_buffer" );
			GEN_PREFIX( "_delete_buffer" );
			GEN_PREFIX( "_scan_buffer" );
			GEN_PREFIX( "_scan_string" );
			GEN_PREFIX( "_scan_bytes" );
			GEN_PREFIX( "_flex_debug" );
			GEN_PREFIX( "_init_buffer" );
			GEN_PREFIX( "_flush_buffer" );
			GEN_PREFIX( "_load_buffer_state" );
			GEN_PREFIX( "_switch_to_buffer" );
			GEN_PREFIX( "in" );
			GEN_PREFIX( "leng" );
			GEN_PREFIX( "lex" );
			GEN_PREFIX( "out" );
			GEN_PREFIX( "restart" );
			GEN_PREFIX( "text" );

			if ( do_yylineno )
				GEN_PREFIX( "lineno" );
			}

		if ( do_yywrap )
			GEN_PREFIX( "wrap" );

		outn( "" );
		}

	if ( did_outfilename )
		line_directive_out( stdout, 0 );

	skelout();
	}


/* flexend - terminate flex
 *
 * note
 *    This routine does not return.
 */

void flexend( exit_status )
int exit_status;

	{
	int tblsiz;
	int unlink();

	if ( skelfile != NULL )
		{
		if ( ferror( skelfile ) )
			lerrsf( _( "input error reading skeleton file %s" ),
				skelname );

		else if ( fclose( skelfile ) )
			lerrsf( _( "error closing skeleton file %s" ),
				skelname );
		}

	if ( exit_status != 0 && outfile_created )
		{
		if ( ferror( stdout ) )
			lerrsf( _( "error writing output file %s" ),
				outfilename );

		else if ( fclose( stdout ) )
			lerrsf( _( "error closing output file %s" ),
				outfilename );

		else if ( unlink( outfilename ) )
			lerrsf( _( "error deleting output file %s" ),
				outfilename );
		}

	if ( backing_up_report && backing_up_file )
		{
		if ( num_backing_up == 0 )
			fprintf( backing_up_file, _( "No backing up.\n" ) );
		else if ( fullspd || fulltbl )
			fprintf( backing_up_file,
				_( "%d backing up (non-accepting) states.\n" ),
				num_backing_up );
		else
			fprintf( backing_up_file,
				_( "Compressed tables always back up.\n" ) );

		if ( ferror( backing_up_file ) )
			lerrsf( _( "error writing backup file %s" ),
				backing_name );

		else if ( fclose( backing_up_file ) )
			lerrsf( _( "error closing backup file %s" ),
				backing_name );
		}

	if ( printstats )
		{
		fprintf( err, _( "%s version %s usage statistics:\n" ),
			program_name, flex_version );

		fprintf( err, _( "  scanner options: -" ) );

		if ( C_plus_plus )
			putc( '+', err );
		if ( backing_up_report )
			putc( 'b', err );
		if ( ddebug )
			putc( 'd', err );
		if ( caseins )
			putc( 'i', err );
		if ( lex_compat )
			putc( 'l', err );
		if ( performance_report > 0 )
			putc( 'p', err );
		if ( performance_report > 1 )
			putc( 'p', err );
		if ( spprdflt )
			putc( 's', err );
		if ( use_stdout )
			putc( 't', err );
		if ( printstats )
			putc( 'v', err );	/* always true! */
		if ( nowarn )
			putc( 'w', err );
		if ( interactive == false )
			putc( 'B', err );
		if ( interactive == true )
			putc( 'I', err );
		if ( ! gen_line_dirs )
			putc( 'L', err );
		if ( trace )
			putc( 'T', err );

		if ( csize == unspecified )
			/* We encountered an error fairly early on, so csize
			 * never got specified.  Define it now, to prevent
			 * bogus table sizes being written out below.
			 */
			csize = 256;

		if ( csize == 128 )
			putc( '7', err );
		else
			putc( '8', err );

		fprintf( err, " -C" );

		if ( long_align )
			putc( 'a', err );
		if ( fulltbl )
			putc( 'f', err );
		if ( fullspd )
			putc( 'F', err );
		if ( useecs )
			putc( 'e', err );
		if ( usemecs )
			putc( 'm', err );
		if ( use_read )
			putc( 'r', err );

		if ( did_outfilename )
			fprintf( err, " -o%s", outfilename );

		if ( skelname )
			fprintf( err, " -S%s", skelname );

		if ( strcmp( prefix, "yy" ) )
			fprintf( err, " -P%s", prefix );

		putc( '\n', err );

		fprintf( err, _( "  %d/%d NFA states\n" ),
			lastnfa, current_mns );
		fprintf( err, _( "  %d/%d DFA states (%d words)\n" ),
			lastdfa, current_max_dfas, totnst );
		fprintf( err, _( "  %d rules\n" ),
		num_rules + num_eof_rules - 1 /* - 1 for def. rule */ );

		if ( num_backing_up == 0 )
			fprintf( err, _( "  No backing up\n" ) );
		else if ( fullspd || fulltbl )
			fprintf( err,
			_( "  %d backing-up (non-accepting) states\n" ),
				num_backing_up );
		else
			fprintf( err,
				_( "  Compressed tables always back-up\n" ) );

		if ( bol_needed )
			fprintf( err,
				_( "  Beginning-of-line patterns used\n" ) );

		fprintf( err, _( "  %d/%d start conditions\n" ), lastsc,
			current_max_scs );
		fprintf( err,
			_( "  %d epsilon states, %d double epsilon states\n" ),
			numeps, eps2 );

		if ( lastccl == 0 )
			fprintf( err, _( "  no character classes\n" ) );
		else
			fprintf( err,
_( "  %d/%d character classes needed %d/%d words of storage, %d reused\n" ),
				lastccl, current_maxccls,
				cclmap[lastccl] + ccllen[lastccl],
				current_max_ccl_tbl_size, cclreuse );

		fprintf( err, _( "  %d state/nextstate pairs created\n" ),
			numsnpairs );
		fprintf( err, _( "  %d/%d unique/duplicate transitions\n" ),
			numuniq, numdup );

		if ( fulltbl )
			{
			tblsiz = lastdfa * numecs;
			fprintf( err, _( "  %d table entries\n" ), tblsiz );
			}

		else
			{
			tblsiz = 2 * (lastdfa + numtemps) + 2 * tblend;

			fprintf( err,
				_( "  %d/%d base-def entries created\n" ),
				lastdfa + numtemps, current_max_dfas );
			fprintf( err,
			_( "  %d/%d (peak %d) nxt-chk entries created\n" ),
				tblend, current_max_xpairs, peakpairs );
			fprintf( err,
		_( "  %d/%d (peak %d) template nxt-chk entries created\n" ),
				numtemps * nummecs,
				current_max_template_xpairs,
				numtemps * numecs );
			fprintf( err, _( "  %d empty table entries\n" ),
				nummt );
			fprintf( err, _( "  %d protos created\n" ),
				numprots );
			fprintf( err,
				_( "  %d templates created, %d uses\n" ),
				numtemps, tmpuses );
			}

		if ( useecs )
			{
			tblsiz = tblsiz + csize;
			fprintf( err,
				_( "  %d/%d equivalence classes created\n" ),
				numecs, csize );
			}

		if ( usemecs )
			{
			tblsiz = tblsiz + numecs;
			fprintf( err,
			_( "  %d/%d meta-equivalence classes created\n" ),
				nummecs, csize );
			}

		fprintf( err,
		_( "  %d (%d saved) hash collisions, %d DFAs equal\n" ),
			hshcol, hshsave, dfaeql );
		fprintf( err, _( "  %d sets of reallocations needed\n" ),
			num_reallocs );
		fprintf( err, _( "  %d total table entries needed\n" ),
			tblsiz );
		}

	exit( exit_status );
	}


/* flexinit - initialize flex */

void flexinit( argc, argv )
int argc;
char **argv;
	{
	int i, sawcmpflag;
	char *arg;

	printstats = syntaxerror = trace = spprdflt = caseins = false;
	lex_compat = C_plus_plus = backing_up_report = ddebug = fulltbl = false;
	fullspd = long_align = nowarn = yymore_used = continued_action = false;
	do_yylineno = yytext_is_array = in_rule = reject = do_stdinit = false;
	yymore_really_used = reject_really_used = unspecified;
	interactive = csize = unspecified;
	do_yywrap = gen_line_dirs = usemecs = useecs = true;
	performance_report = 0;
	did_outfilename = 0;
	prefix = "yy";
	yyclass = 0;
	use_read = use_stdout = false;

	sawcmpflag = false;

	/* Initialize dynamic array for holding the rule actions. */
	action_size = 2048;	/* default size of action array in bytes */
	action_array = allocate_character_array( action_size );
	defs1_offset = prolog_offset = action_offset = action_index = 0;
	action_array[0] = '\0';

/* Commented by Amit Goel on 5th September 2001 to remove nomdeterminism */
/*	program_name = argv[0];  */
/* Added by Amit Goel on 5th September 2001 */
        program_name = "Executable";

	if ( program_name[0] != '\0' &&
	     program_name[strlen( program_name ) - 1] == '+' )
		C_plus_plus = true;

/* ### add for testing ### */
        ++argv;--argc;
/* ####################### */

	/* read flags */
	for ( --argc, ++argv; argc ; --argc, ++argv )
		{
		arg = argv[0];

		if ( arg[0] != '-' || arg[1] == '\0' )
			break;

		if ( arg[1] == '-' )
			{ /* --option */
			if ( ! strcmp( arg, "--help" ) )
				arg = "-h";

			else if ( ! strcmp( arg, "--version" ) )
				arg = "-V";

			else if ( ! strcmp( arg, "--" ) )
				{ /* end of options */
				--argc;
				++argv;
				break;
				}
			}

		for ( i = 1; arg[i] != '\0'; ++i )
			switch ( arg[i] )
				{
				case '+':
					C_plus_plus = true;
					break;

				case 'B':
					interactive = false;
					break;

				case 'b':
					backing_up_report = true;
					break;

				case 'c':
					break;

				case 'C':
					if ( i != 1 )
						flexerror(
				_( "-C flag must be given separately" ) );

					if ( ! sawcmpflag )
						{
						useecs = false;
						usemecs = false;
						fulltbl = false;
						sawcmpflag = true;
						}

					for ( ++i; arg[i] != '\0'; ++i )
						switch ( arg[i] )
							{
							case 'a':
								long_align =
									true;
								break;

							case 'e':
								useecs = true;
								break;

							case 'F':
								fullspd = true;
								break;

							case 'f':
								fulltbl = true;
								break;

							case 'm':
								usemecs = true;
								break;

							case 'r':
								use_read = true;
								break;

							default:
								lerrif(
						_( "unknown -C option '%c'" ),
								(int) arg[i] );
								break;
							}

					goto get_next_arg;

				case 'd':
					ddebug = true;
					break;

				case 'f':
					useecs = usemecs = false;
					use_read = fulltbl = true;
					break;

				case 'F':
					useecs = usemecs = false;
					use_read = fullspd = true;
					break;

				case '?':
				case 'h':
					usage();
					exit( 0 );

				case 'I':
					interactive = true;
					break;

				case 'i':
					caseins = true;
					break;

				case 'l':
					lex_compat = true;
					break;

				case 'L':
					gen_line_dirs = false;
					break;

				case 'n':
					/* Stupid do-nothing deprecated
					 * option.
					 */
					break;

				case 'o':
					if ( i != 1 )
						flexerror(
				_( "-o flag must be given separately" ) );

					outfilename = arg + i + 1;
					did_outfilename = 1;
					goto get_next_arg;

				case 'P':
					if ( i != 1 )
						flexerror(
				_( "-P flag must be given separately" ) );

					prefix = arg + i + 1;
					goto get_next_arg;

				case 'p':
					++performance_report;
					break;

				case 'S':
					if ( i != 1 )
						flexerror(
				_( "-S flag must be given separately" ) );

					skelname = arg + i + 1;
					goto get_next_arg;

				case 's':
					spprdflt = true;
					break;

				case 't':
					use_stdout = true;
					break;

				case 'T':
					trace = true;
					break;

				case 'v':
					printstats = true;
					break;

				case 'V':
					printf( _( "%s version %s\n" ),
						program_name, flex_version );
					exit( 0 );

				case 'w':
					nowarn = true;
					break;

				case '7':
					csize = 128;
					break;

				case '8':
					csize = CSIZE;
					break;

				default:
					fprintf( err,
		_( "%s: unknown flag '%c'.  For usage, try\n\t%s --help\n" ),
						program_name, (int) arg[i],
						program_name );
					exit( 1 );
				}

		/* Used by -C, -S, -o, and -P flags in lieu of a "continue 2"
		 * control.
		 */
		get_next_arg: ;
		}

	num_input_files = argc;
	input_files = argv;
	set_input_file( num_input_files > 0 ? input_files[0] : NULL );

	lastccl = lastsc = lastdfa = lastnfa = 0;
	num_rules = num_eof_rules = default_rule = 0;
	numas = numsnpairs = tmpuses = 0;
	numecs = numeps = eps2 = num_reallocs = hshcol = dfaeql = totnst = 0;
	numuniq = numdup = hshsave = eofseen = datapos = dataline = 0;
	num_backing_up = onesp = numprots = 0;
	variable_trailing_context_rules = bol_needed = false;

	out_linenum = linenum = sectnum = 1;
	firstprot = NIL;

	/* Used in mkprot() so that the first proto goes in slot 1
	 * of the proto queue.
	 */
	lastprot = 1;

	set_up_initial_allocations();
	}


/* readin - read in the rules section of the input file(s) */

void readin()
	{
	static char yy_stdinit[] = "FILE *yyin = stdin, *yyout = stdout;";
	static char yy_nostdinit[] =
		"FILE *yyin = (FILE *) 0, *yyout = (FILE *) 0;";

	line_directive_out( (FILE *) 0, 1 );

	if ( yyparse() )
		{
		pinpoint_message( _( "fatal parse error" ) );
		flexend( 1 );
		}

	if ( syntaxerror )
		flexend( 1 );

	if ( backing_up_report )
		{
		backing_up_file = fopen( backing_name, "w" );
		if ( backing_up_file == NULL )
			lerrsf(
			_( "could not create backing-up info file %s" ),
				backing_name );
		}

	else
		backing_up_file = NULL;

	if ( yymore_really_used == true )
		yymore_used = true;
	else if ( yymore_really_used == false )
		yymore_used = false;

	if ( reject_really_used == true )
		reject = true;
	else if ( reject_really_used == false )
		reject = false;

	if ( performance_report > 0 )
		{
		if ( lex_compat )
			{
			fprintf( err,
_( "-l AT&T lex compatibility option entails a large performance penalty\n" ) );
			fprintf( err,
_( " and may be the actual source of other reported performance penalties\n" ) );
			}

		else if ( do_yylineno )
			{
			fprintf( err,
	_( "%%option yylineno entails a large performance penalty\n" ) );
			}

		if ( performance_report > 1 )
			{
			if ( interactive )
				fprintf( err,
	_( "-I (interactive) entails a minor performance penalty\n" ) );

			if ( yymore_used )
				fprintf( err,
		_( "yymore() entails a minor performance penalty\n" ) );
			}

		if ( reject )
			fprintf( err,
			_( "REJECT entails a large performance penalty\n" ) );

		if ( variable_trailing_context_rules )
			fprintf( err,
_( "Variable trailing context rules entail a large performance penalty\n" ) );
		}

	if ( reject )
		real_reject = true;

	if ( variable_trailing_context_rules )
		reject = true;

	if ( (fulltbl || fullspd) && reject )
		{
		if ( real_reject )
			flexerror(
				_( "REJECT cannot be used with -f or -F" ) );
		else if ( do_yylineno )
			flexerror(
			_( "%option yylineno cannot be used with -f or -F" ) );
		else
			flexerror(
	_( "variable trailing context rules cannot be used with -f or -F" ) );
		}

	if ( reject )
		outn( "\n#define YY_USES_REJECT" );

	if ( ! do_yywrap )
		{
		outn( "\n#define yywrap() 1" );
		outn( "#define YY_SKIP_YYWRAP" );
		}

	if ( ddebug )
		outn( "\n#define FLEX_DEBUG" );

	if ( csize == 256 )
		outn( "typedef unsigned char YY_CHAR;" );
	else
		outn( "typedef char YY_CHAR;" );

	if ( C_plus_plus )
		{
		outn( "#define yytext_ptr yytext" );

		if ( interactive )
			outn( "#define YY_INTERACTIVE" );
		}

	else
		{
		if ( do_stdinit )
			{
			outn( "#ifdef VMS" );
			outn( "#ifndef __VMS_POSIX" );
			outn( yy_nostdinit );
			outn( "#else" );
			outn( yy_stdinit );
			outn( "#endif" );
			outn( "#else" );
			outn( yy_stdinit );
			outn( "#endif" );
			}

		else
			outn( yy_nostdinit );
		}

	if ( fullspd )
		outn( "typedef yyconst struct yy_trans_info *yy_state_type;" );
	else if ( ! C_plus_plus )
		outn( "typedef int yy_state_type;" );

	if ( ddebug )
		outn( "\n#define FLEX_DEBUG" );

	if ( lex_compat )
		outn( "#define YY_FLEX_LEX_COMPAT" );

	if ( do_yylineno && ! C_plus_plus )
		{
		outn( "extern int yylineno;" );
		outn( "int yylineno = 1;" );
		}

	if ( C_plus_plus )
		{
		outn( "\n#include <FlexLexer.h>" );

		if ( yyclass )
			{
			outn( "int yyFlexLexer::yylex()" );
			outn( "\t{" );
			outn(
"\tLexerError( \"yyFlexLexer::yylex invoked but %option yyclass used\" );" );
			outn( "\treturn 0;" );
			outn( "\t}" );
	
			out_str( "\n#define YY_DECL int %s::yylex()\n",
				yyclass );
			}
		}

	else
		{
		if ( yytext_is_array )
			outn( "extern char yytext[];\n" );

		else
			{
			outn( "extern char *yytext;" );
			outn( "#define yytext_ptr yytext" );
			}

		if ( yyclass )
			flexerror(
		_( "%option yyclass only meaningful for C++ scanners" ) );
		}

	if ( useecs )
		numecs = cre8ecs( nextecm, ecgroup, csize );
	else
		numecs = csize;

	/* Now map the equivalence class for NUL to its expected place. */
	ecgroup[0] = ecgroup[csize];
	NUL_ec = ABS( ecgroup[0] );

	if ( useecs )
		ccl2ecl();
	}


/* set_up_initial_allocations - allocate memory for internal tables */

void set_up_initial_allocations()
	{
	current_mns = INITIAL_MNS;
	firstst = allocate_integer_array( current_mns );
	lastst = allocate_integer_array( current_mns );
	finalst = allocate_integer_array( current_mns );
	transchar = allocate_integer_array( current_mns );
	trans1 = allocate_integer_array( current_mns );
	trans2 = allocate_integer_array( current_mns );
	accptnum = allocate_integer_array( current_mns );
	assoc_rule = allocate_integer_array( current_mns );
	state_type = allocate_integer_array( current_mns );

	current_max_rules = INITIAL_MAX_RULES;
	rule_type = allocate_integer_array( current_max_rules );
	rule_linenum = allocate_integer_array( current_max_rules );
	rule_useful = allocate_integer_array( current_max_rules );

	current_max_scs = INITIAL_MAX_SCS;
	scset = allocate_integer_array( current_max_scs );
	scbol = allocate_integer_array( current_max_scs );
	scxclu = allocate_integer_array( current_max_scs );
	sceof = allocate_integer_array( current_max_scs );
	scname = allocate_char_ptr_array( current_max_scs );

	current_maxccls = INITIAL_MAX_CCLS;
	cclmap = allocate_integer_array( current_maxccls );
	ccllen = allocate_integer_array( current_maxccls );
	cclng = allocate_integer_array( current_maxccls );

	current_max_ccl_tbl_size = INITIAL_MAX_CCL_TBL_SIZE;
	ccltbl = allocate_Character_array( current_max_ccl_tbl_size );

	current_max_dfa_size = INITIAL_MAX_DFA_SIZE;

	current_max_xpairs = INITIAL_MAX_XPAIRS;
	nxt = allocate_integer_array( current_max_xpairs );
	chk = allocate_integer_array( current_max_xpairs );

	current_max_template_xpairs = INITIAL_MAX_TEMPLATE_XPAIRS;
	tnxt = allocate_integer_array( current_max_template_xpairs );

	current_max_dfas = INITIAL_MAX_DFAS;
	base = allocate_integer_array( current_max_dfas );
	def = allocate_integer_array( current_max_dfas );
	dfasiz = allocate_integer_array( current_max_dfas );
	accsiz = allocate_integer_array( current_max_dfas );
	dhash = allocate_integer_array( current_max_dfas );
	dss = allocate_int_ptr_array( current_max_dfas );
	dfaacc = allocate_dfaacc_union( current_max_dfas );

	nultrans = (int *) 0;
	}


void usage()
	{
/*	FILE *f = stdout;*/ /* ### f is replaced by err for testing. #### */

	fprintf( err,
_( "%s [-bcdfhilnpstvwBFILTV78+? -C[aefFmr] -ooutput -Pprefix -Sskeleton]\n" ),
		program_name );
	fprintf( err, _( "\t[--help --version] [file ...]\n" ) );

	fprintf( err, _( "\t-b  generate backing-up information to %s\n" ),
		backing_name );
	fprintf( err, _( "\t-c  do-nothing POSIX option\n" ) );
	fprintf( err, _( "\t-d  turn on debug mode in generated scanner\n" ) );
	fprintf( err, _( "\t-f  generate fast, large scanner\n" ) );
	fprintf( err, _( "\t-h  produce this help message\n" ) );
	fprintf( err, _( "\t-i  generate case-insensitive scanner\n" ) );
	fprintf( err, _( "\t-l  maximal compatibility with original lex\n" ) );
	fprintf( err, _( "\t-n  do-nothing POSIX option\n" ) );
	fprintf( err, _( "\t-p  generate performance report to err\n" ) );
	fprintf( err,
		_( "\t-s  suppress default rule to ECHO unmatched text\n" ) );

	if ( ! did_outfilename )
		{
		sprintf( outfile_path, outfile_template,
			prefix, C_plus_plus ? "cc" : "c" );
		outfilename = outfile_path;
		}

	fprintf( err,
		_( "\t-t  write generated scanner on stdout instead of %s\n" ),
		outfilename );

	fprintf( err,
		_( "\t-v  write summary of scanner statistics to f\n" ) );
	fprintf( err, _( "\t-w  do not generate warnings\n" ) );
	fprintf( err, _( "\t-B  generate batch scanner (opposite of -I)\n" ) );
	fprintf( err,
		_( "\t-F  use alternative fast scanner representation\n" ) );
	fprintf( err,
		_( "\t-I  generate interactive scanner (opposite of -B)\n" ) );
	fprintf( err, _( "\t-L  suppress #line directives in scanner\n" ) );
	fprintf( err, _( "\t-T  %s should run in trace mode\n" ), program_name );
	fprintf( err, _( "\t-V  report %s version\n" ), program_name );
	fprintf( err, _( "\t-7  generate 7-bit scanner\n" ) );
	fprintf( err, _( "\t-8  generate 8-bit scanner\n" ) );
	fprintf( err, _( "\t-+  generate C++ scanner class\n" ) );
	fprintf( err, _( "\t-?  produce this help message\n" ) );
	fprintf( err,
_( "\t-C  specify degree of table compression (default is -Cem):\n" ) );
	fprintf( err,
_( "\t\t-Ca  trade off larger tables for better memory alignment\n" ) );
	fprintf( err, _( "\t\t-Ce  construct equivalence classes\n" ) );
	fprintf( err,
_( "\t\t-Cf  do not compress scanner tables; use -f representation\n" ) );
	fprintf( err,
_( "\t\t-CF  do not compress scanner tables; use -F representation\n" ) );
	fprintf( err, _( "\t\t-Cm  construct meta-equivalence classes\n" ) );
	fprintf( err,
	_( "\t\t-Cr  use read() instead of stdio for scanner input\n" ) );
	fprintf( err, _( "\t-o  specify output filename\n" ) );
	fprintf( err, _( "\t-P  specify scanner prefix other than \"yy\"\n" ) );
	fprintf( err, _( "\t-S  specify skeleton file\n" ) );
	fprintf( err, _( "\t--help     produce this help message\n" ) );
	fprintf( err, _( "\t--version  report %s version\n" ), program_name );
	}
/* ccl - routines for character classes */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */


/* ccladd - add a single character to a ccl */

void ccladd( cclp, ch )
int cclp;
int ch;
	{
	int ind, len, newpos, i;

	check_char( ch );

	len = ccllen[cclp];
	ind = cclmap[cclp];

	/* check to see if the character is already in the ccl */

	for ( i = 0; i < len; ++i )
		if ( ccltbl[ind + i] == ch )
			return;

	newpos = ind + len;

	if ( newpos >= current_max_ccl_tbl_size )
		{
		current_max_ccl_tbl_size += MAX_CCL_TBL_SIZE_INCREMENT;

		++num_reallocs;

		ccltbl = reallocate_Character_array( ccltbl,
						current_max_ccl_tbl_size );
		}

	ccllen[cclp] = len + 1;
	ccltbl[newpos] = ch;
	}


/* cclinit - return an empty ccl */

int cclinit()
	{
	if ( ++lastccl >= current_maxccls )
		{
		current_maxccls += MAX_CCLS_INCREMENT;

		++num_reallocs;

		cclmap = reallocate_integer_array( cclmap, current_maxccls );
		ccllen = reallocate_integer_array( ccllen, current_maxccls );
		cclng = reallocate_integer_array( cclng, current_maxccls );
		}

	if ( lastccl == 1 )
		/* we're making the first ccl */
		cclmap[lastccl] = 0;

	else
		/* The new pointer is just past the end of the last ccl.
		 * Since the cclmap points to the \first/ character of a
		 * ccl, adding the length of the ccl to the cclmap pointer
		 * will produce a cursor to the first free space.
		 */
		cclmap[lastccl] = cclmap[lastccl - 1] + ccllen[lastccl - 1];

	ccllen[lastccl] = 0;
	cclng[lastccl] = 0;	/* ccl's start out life un-negated */

	return lastccl;
	}


/* cclnegate - negate the given ccl */

void cclnegate( cclp )
int cclp;
	{
	cclng[cclp] = 1;
	}


/* list_character_set - list the members of a set of characters in CCL form
 *
 * Writes to the given file a character-class representation of those
 * characters present in the given CCL.  A character is present if it
 * has a non-zero value in the cset array.
 */

void list_character_set( file, cset )
FILE *file;
int cset[];
	{
	register int i;

	putc( '[', file );

	for ( i = 0; i < csize; ++i )
		{
		if ( cset[i] )
			{
			register int start_char = i;

			putc( ' ', file );

			fputs( readable_form( i ), file );

			while ( ++i < csize && cset[i] )
				;

			if ( i - 1 > start_char )
				/* this was a run */
				fprintf( file, "-%s", readable_form( i - 1 ) );

			putc( ' ', file );
			}
		}

	putc( ']', file );
	}
/* dfa - DFA construction routines */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */



/* declare functions that have forward references */

void dump_associated_rules PROTO((FILE*, int));
void dump_transitions PROTO((FILE*, int[]));
void sympartition PROTO((int[], int, int[], int[]));
int symfollowset PROTO((int[], int, int, int[]));


/* check_for_backing_up - check a DFA state for backing up
 *
 * synopsis
 *     void check_for_backing_up( int ds, int state[numecs] );
 *
 * ds is the number of the state to check and state[] is its out-transitions,
 * indexed by equivalence class.
 */

void check_for_backing_up( ds, state )
int ds;
int state[];
	{
	if ( (reject && ! dfaacc[ds].dfaacc_set) ||
	     (! reject && ! dfaacc[ds].dfaacc_state) )
		{ /* state is non-accepting */
		++num_backing_up;

		if ( backing_up_report )
			{
			fprintf( backing_up_file,
				_( "State #%d is non-accepting -\n" ), ds );

			/* identify the state */
			dump_associated_rules( backing_up_file, ds );

			/* Now identify it further using the out- and
			 * jam-transitions.
			 */
			dump_transitions( backing_up_file, state );

			putc( '\n', backing_up_file );
			}
		}
	}


/* check_trailing_context - check to see if NFA state set constitutes
 *                          "dangerous" trailing context
 *
 * synopsis
 *    void check_trailing_context( int nfa_states[num_states+1], int num_states,
 *				int accset[nacc+1], int nacc );
 *
 * NOTES
 *  Trailing context is "dangerous" if both the head and the trailing
 *  part are of variable size \and/ there's a DFA state which contains
 *  both an accepting state for the head part of the rule and NFA states
 *  which occur after the beginning of the trailing context.
 *
 *  When such a rule is matched, it's impossible to tell if having been
 *  in the DFA state indicates the beginning of the trailing context or
 *  further-along scanning of the pattern.  In these cases, a warning
 *  message is issued.
 *
 *    nfa_states[1 .. num_states] is the list of NFA states in the DFA.
 *    accset[1 .. nacc] is the list of accepting numbers for the DFA state.
 */

void check_trailing_context( nfa_states, num_states, accset, nacc )
int *nfa_states, num_states;
int *accset;
int nacc;
	{
	register int i, j;

	for ( i = 1; i <= num_states; ++i )
		{
		int ns = nfa_states[i];
		register int type = state_type[ns];
		register int ar = assoc_rule[ns];

		if ( type == STATE_NORMAL || rule_type[ar] != RULE_VARIABLE )
			{ /* do nothing */
			}

		else if ( type == STATE_TRAILING_CONTEXT )
			{
			/* Potential trouble.  Scan set of accepting numbers
			 * for the one marking the end of the "head".  We
			 * assume that this looping will be fairly cheap
			 * since it's rare that an accepting number set
			 * is large.
			 */
			for ( j = 1; j <= nacc; ++j )
				if ( accset[j] & YY_TRAILING_HEAD_MASK )
					{
					line_warning(
					_( "dangerous trailing context" ),
						rule_linenum[ar] );
					return;
					}
			}
		}
	}


/* dump_associated_rules - list the rules associated with a DFA state
 *
 * Goes through the set of NFA states associated with the DFA and
 * extracts the first MAX_ASSOC_RULES unique rules, sorts them,
 * and writes a report to the given file.
 */

void dump_associated_rules( file, ds )
FILE *file;
int ds;
	{
	register int i, j;
	register int num_associated_rules = 0;
	int rule_set[MAX_ASSOC_RULES + 1];
	int *dset = dss[ds];
	int size = dfasiz[ds];

	for ( i = 1; i <= size; ++i )
		{
		register int rule_num = rule_linenum[assoc_rule[dset[i]]];

		for ( j = 1; j <= num_associated_rules; ++j )
			if ( rule_num == rule_set[j] )
				break;

		if ( j > num_associated_rules )
			{ /* new rule */
			if ( num_associated_rules < MAX_ASSOC_RULES )
				rule_set[++num_associated_rules] = rule_num;
			}
		}

	bubble( rule_set, num_associated_rules );

	fprintf( file, _( " associated rule line numbers:" ) );

	for ( i = 1; i <= num_associated_rules; ++i )
		{
		if ( i % 8 == 1 )
			putc( '\n', file );

		fprintf( file, "\t%d", rule_set[i] );
		}

	putc( '\n', file );
	}


/* dump_transitions - list the transitions associated with a DFA state
 *
 * synopsis
 *     dump_transitions( FILE *file, int state[numecs] );
 *
 * Goes through the set of out-transitions and lists them in human-readable
 * form (i.e., not as equivalence classes); also lists jam transitions
 * (i.e., all those which are not out-transitions, plus EOF).  The dump
 * is done to the given file.
 */

void dump_transitions( file, state )
FILE *file;
int state[];
	{
	register int i, ec;
	int out_char_set[CSIZE];

	for ( i = 0; i < csize; ++i )
		{
		ec = ABS( ecgroup[i] );
		out_char_set[i] = state[ec];
		}

	fprintf( file, _( " out-transitions: " ) );

	list_character_set( file, out_char_set );

	/* now invert the members of the set to get the jam transitions */
	for ( i = 0; i < csize; ++i )
		out_char_set[i] = ! out_char_set[i];

	fprintf( file, _( "\n jam-transitions: EOF " ) );

	list_character_set( file, out_char_set );

	putc( '\n', file );
	}


/* epsclosure - construct the epsilon closure of a set of ndfa states
 *
 * synopsis
 *    int *epsclosure( int t[num_states], int *numstates_addr,
 *			int accset[num_rules+1], int *nacc_addr,
 *			int *hashval_addr );
 *
 * NOTES
 *  The epsilon closure is the set of all states reachable by an arbitrary
 *  number of epsilon transitions, which themselves do not have epsilon
 *  transitions going out, unioned with the set of states which have non-null
 *  accepting numbers.  t is an array of size numstates of nfa state numbers.
 *  Upon return, t holds the epsilon closure and *numstates_addr is updated.
 *  accset holds a list of the accepting numbers, and the size of accset is
 *  given by *nacc_addr.  t may be subjected to reallocation if it is not
 *  large enough to hold the epsilon closure.
 *
 *  hashval is the hash value for the dfa corresponding to the state set.
 */

int *epsclosure( t, ns_addr, accset, nacc_addr, hv_addr )
int *t, *ns_addr, accset[], *nacc_addr, *hv_addr;
	{
	register int stkpos, ns, tsp;
	int numstates = *ns_addr, nacc, hashval, transsym, nfaccnum;
	int stkend, nstate;
	static int did_stk_init = false, *stk; 

#define MARK_STATE(state) \
trans1[state] = trans1[state] - MARKER_DIFFERENCE;

#define IS_MARKED(state) (trans1[state] < 0)

#define UNMARK_STATE(state) \
trans1[state] = trans1[state] + MARKER_DIFFERENCE;

#define CHECK_ACCEPT(state) \
{ \
nfaccnum = accptnum[state]; \
if ( nfaccnum != NIL ) \
accset[++nacc] = nfaccnum; \
}

#define DO_REALLOCATION \
{ \
current_max_dfa_size += MAX_DFA_SIZE_INCREMENT; \
++num_reallocs; \
t = reallocate_integer_array( t, current_max_dfa_size ); \
stk = reallocate_integer_array( stk, current_max_dfa_size ); \
} \

#define PUT_ON_STACK(state) \
{ \
if ( ++stkend >= current_max_dfa_size ) \
DO_REALLOCATION \
stk[stkend] = state; \
MARK_STATE(state) \
}

#define ADD_STATE(state) \
{ \
if ( ++numstates >= current_max_dfa_size ) \
DO_REALLOCATION \
t[numstates] = state; \
hashval += state; \
}

#define STACK_STATE(state) \
{ \
PUT_ON_STACK(state) \
CHECK_ACCEPT(state) \
if ( nfaccnum != NIL || transchar[state] != SYM_EPSILON ) \
ADD_STATE(state) \
}


	if ( ! did_stk_init )
		{
		stk = allocate_integer_array( current_max_dfa_size );
		did_stk_init = true;
		}

	nacc = stkend = hashval = 0;

	for ( nstate = 1; nstate <= numstates; ++nstate )
		{
		ns = t[nstate];

		/* The state could be marked if we've already pushed it onto
		 * the stack.
		 */
		if ( ! IS_MARKED(ns) )
			{
			PUT_ON_STACK(ns)
			CHECK_ACCEPT(ns)
			hashval += ns;
			}
		}

	for ( stkpos = 1; stkpos <= stkend; ++stkpos )
		{
		ns = stk[stkpos];
		transsym = transchar[ns];

		if ( transsym == SYM_EPSILON )
			{
			tsp = trans1[ns] + MARKER_DIFFERENCE;

			if ( tsp != NO_TRANSITION )
				{
				if ( ! IS_MARKED(tsp) )
					STACK_STATE(tsp)

				tsp = trans2[ns];

				if ( tsp != NO_TRANSITION && ! IS_MARKED(tsp) )
					STACK_STATE(tsp)
				}
			}
		}

	/* Clear out "visit" markers. */

	for ( stkpos = 1; stkpos <= stkend; ++stkpos )
		{
		if ( IS_MARKED(stk[stkpos]) )
			UNMARK_STATE(stk[stkpos])
		else
			flexfatal(
			_( "consistency check failed in epsclosure()" ) );
		}

	*ns_addr = numstates;
	*hv_addr = hashval;
	*nacc_addr = nacc;

	return t;
	}


/* increase_max_dfas - increase the maximum number of DFAs */

void increase_max_dfas()
	{
	current_max_dfas += MAX_DFAS_INCREMENT;

	++num_reallocs;

	base = reallocate_integer_array( base, current_max_dfas );
	def = reallocate_integer_array( def, current_max_dfas );
	dfasiz = reallocate_integer_array( dfasiz, current_max_dfas );
	accsiz = reallocate_integer_array( accsiz, current_max_dfas );
	dhash = reallocate_integer_array( dhash, current_max_dfas );
	dss = reallocate_int_ptr_array( dss, current_max_dfas );
	dfaacc = reallocate_dfaacc_union( dfaacc, current_max_dfas );

	if ( nultrans )
		nultrans =
			reallocate_integer_array( nultrans, current_max_dfas );
	}


/* ntod - convert an ndfa to a dfa
 *
 * Creates the dfa corresponding to the ndfa we've constructed.  The
 * dfa starts out in state #1.
 */

void ntod()
	{
	int *accset, ds, nacc, newds;
	int sym, hashval, numstates, dsize;
	int num_full_table_rows;	/* used only for -f */
	int *nset, *dset;
	int targptr, totaltrans, i, comstate, comfreq, targ;
	int symlist[CSIZE + 1];
	int num_start_states;
	int todo_head, todo_next;

	/* Note that the following are indexed by *equivalence classes*
	 * and not by characters.  Since equivalence classes are indexed
	 * beginning with 1, even if the scanner accepts NUL's, this
	 * means that (since every character is potentially in its own
	 * equivalence class) these arrays must have room for indices
	 * from 1 to CSIZE, so their size must be CSIZE + 1.
	 */
	int duplist[CSIZE + 1], state[CSIZE + 1];
	int targfreq[CSIZE + 1], targstate[CSIZE + 1];

	accset = allocate_integer_array( num_rules + 1 );
	nset = allocate_integer_array( current_max_dfa_size );

	/* The "todo" queue is represented by the head, which is the DFA
	 * state currently being processed, and the "next", which is the
	 * next DFA state number available (not in use).  We depend on the
	 * fact that snstods() returns DFA's \in increasing order/, and thus
	 * need only know the bounds of the dfas to be processed.
	 */
	todo_head = todo_next = 0;

	for ( i = 0; i <= csize; ++i )
		{
		duplist[i] = NIL;
		symlist[i] = false;
		}

	for ( i = 0; i <= num_rules; ++i )
		accset[i] = NIL;

	if ( trace )
		{
		dumpnfa( scset[1] );
		fputs( _( "\n\nDFA Dump:\n\n" ), err );
		}

	inittbl();

	/* Check to see whether we should build a separate table for
	 * transitions on NUL characters.  We don't do this for full-speed
	 * (-F) scanners, since for them we don't have a simple state
	 * number lying around with which to index the table.  We also
	 * don't bother doing it for scanners unless (1) NUL is in its own
	 * equivalence class (indicated by a positive value of
	 * ecgroup[NUL]), (2) NUL's equivalence class is the last
	 * equivalence class, and (3) the number of equivalence classes is
	 * the same as the number of characters.  This latter case comes
	 * about when useecs is false or when it's true but every character
	 * still manages to land in its own class (unlikely, but it's
	 * cheap to check for).  If all these things are true then the
	 * character code needed to represent NUL's equivalence class for
	 * indexing the tables is going to take one more bit than the
	 * number of characters, and therefore we won't be assured of
	 * being able to fit it into a YY_CHAR variable.  This rules out
	 * storing the transitions in a compressed table, since the code
	 * for interpreting them uses a YY_CHAR variable (perhaps it
	 * should just use an integer, though; this is worth pondering ...
	 * ###).
	 *
	 * Finally, for full tables, we want the number of entries in the
	 * table to be a power of two so the array references go fast (it
	 * will just take a shift to compute the major index).  If
	 * encoding NUL's transitions in the table will spoil this, we
	 * give it its own table (note that this will be the case if we're
	 * not using equivalence classes).
	 */

	/* Note that the test for ecgroup[0] == numecs below accomplishes
	 * both (1) and (2) above
	 */
	if ( ! fullspd && ecgroup[0] == numecs )
		{
		/* NUL is alone in its equivalence class, which is the
		 * last one.
		 */
		int use_NUL_table = (numecs == csize);

		if ( fulltbl && ! use_NUL_table )
			{
			/* We still may want to use the table if numecs
			 * is a power of 2.
			 */
			int power_of_two;

			for ( power_of_two = 1; power_of_two <= csize;
			      power_of_two *= 2 )
				if ( numecs == power_of_two )
					{
					use_NUL_table = true;
					break;
					}
			}

		if ( use_NUL_table )
			nultrans = allocate_integer_array( current_max_dfas );

		/* From now on, nultrans != nil indicates that we're
		 * saving null transitions for later, separate encoding.
		 */
		}


	if ( fullspd )
		{
		for ( i = 0; i <= numecs; ++i )
			state[i] = 0;

		place_state( state, 0, 0 );
		dfaacc[0].dfaacc_state = 0;
		}

	else if ( fulltbl )
		{
		if ( nultrans )
			/* We won't be including NUL's transitions in the
			 * table, so build it for entries from 0 .. numecs - 1.
			 */
			num_full_table_rows = numecs;

		else
			/* Take into account the fact that we'll be including
			 * the NUL entries in the transition table.  Build it
			 * from 0 .. numecs.
			 */
			num_full_table_rows = numecs + 1;

		/* Unless -Ca, declare it "short" because it's a real
		 * long-shot that that won't be large enough.
		 */
		out_str_dec( "static yyconst %s yy_nxt[][%d] =\n    {\n",
			/* '}' so vi doesn't get too confused */
			long_align ? "long" : "short", num_full_table_rows );

		outn( "    {" );

		/* Generate 0 entries for state #0. */
		for ( i = 0; i < num_full_table_rows; ++i )
			mk2data( 0 );

		dataflush();
		outn( "    },\n" );
		}

	/* Create the first states. */

	num_start_states = lastsc * 2;

	for ( i = 1; i <= num_start_states; ++i )
		{
		numstates = 1;

		/* For each start condition, make one state for the case when
		 * we're at the beginning of the line (the '^' operator) and
		 * one for the case when we're not.
		 */
		if ( i % 2 == 1 )
			nset[numstates] = scset[(i / 2) + 1];
		else
			nset[numstates] =
				mkbranch( scbol[i / 2], scset[i / 2] );

		nset = epsclosure( nset, &numstates, accset, &nacc, &hashval );

		if ( snstods( nset, numstates, accset, nacc, hashval, &ds ) )
			{
			numas += nacc;
			totnst += numstates;
			++todo_next;

			if ( variable_trailing_context_rules && nacc > 0 )
				check_trailing_context( nset, numstates,
							accset, nacc );
			}
		}

	if ( ! fullspd )
		{
		if ( ! snstods( nset, 0, accset, 0, 0, &end_of_buffer_state ) )
			flexfatal(
			_( "could not create unique end-of-buffer state" ) );

		++numas;
		++num_start_states;
		++todo_next;
		}

	while ( todo_head < todo_next )
		{
		targptr = 0;
		totaltrans = 0;

		for ( i = 1; i <= numecs; ++i )
			state[i] = 0;

		ds = ++todo_head;

		dset = dss[ds];
		dsize = dfasiz[ds];

		if ( trace )
			fprintf( err, _( "state # %d:\n" ), ds );

		sympartition( dset, dsize, symlist, duplist );

		for ( sym = 1; sym <= numecs; ++sym )
			{
			if ( symlist[sym] )
				{
				symlist[sym] = 0;

				if ( duplist[sym] == NIL )
					{
					/* Symbol has unique out-transitions. */
					numstates = symfollowset( dset, dsize,
								sym, nset );
					nset = epsclosure( nset, &numstates,
						accset, &nacc, &hashval );

					if ( snstods( nset, numstates, accset,
						nacc, hashval, &newds ) )
						{
						totnst = totnst + numstates;
						++todo_next;
						numas += nacc;

						if (
					variable_trailing_context_rules &&
							nacc > 0 )
							check_trailing_context(
								nset, numstates,
								accset, nacc );
						}

					state[sym] = newds;

					if ( trace )
						fprintf( err, "\t%d\t%d\n",
							sym, newds );

					targfreq[++targptr] = 1;
					targstate[targptr] = newds;
					++numuniq;
					}

				else
					{
					/* sym's equivalence class has the same
					 * transitions as duplist(sym)'s
					 * equivalence class.
					 */
					targ = state[duplist[sym]];
					state[sym] = targ;

					if ( trace )
						fprintf( err, "\t%d\t%d\n",
							sym, targ );

					/* Update frequency count for
					 * destination state.
					 */

					i = 0;
					while ( targstate[++i] != targ )
						;

					++targfreq[i];
					++numdup;
					}

				++totaltrans;
				duplist[sym] = NIL;
				}
			}

		if ( caseins && ! useecs )
			{
			register int j;

			for ( i = 'A', j = 'a'; i <= 'Z'; ++i, ++j )
				{
				if ( state[i] == 0 && state[j] != 0 )
					/* We're adding a transition. */
					++totaltrans;

				else if ( state[i] != 0 && state[j] == 0 )
					/* We're taking away a transition. */
					--totaltrans;

				state[i] = state[j];
				}
			}

		numsnpairs += totaltrans;

		if ( ds > num_start_states )
			check_for_backing_up( ds, state );

		if ( nultrans )
			{
			nultrans[ds] = state[NUL_ec];
			state[NUL_ec] = 0;	/* remove transition */
			}

		if ( fulltbl )
			{
			outn( "    {" );

			/* Supply array's 0-element. */
			if ( ds == end_of_buffer_state )
				mk2data( -end_of_buffer_state );
			else
				mk2data( end_of_buffer_state );

			for ( i = 1; i < num_full_table_rows; ++i )
				/* Jams are marked by negative of state
				 * number.
				 */
				mk2data( state[i] ? state[i] : -ds );

			dataflush();
			outn( "    },\n" );
			}

		else if ( fullspd )
			place_state( state, ds, totaltrans );

		else if ( ds == end_of_buffer_state )
			/* Special case this state to make sure it does what
			 * it's supposed to, i.e., jam on end-of-buffer.
			 */
			stack1( ds, 0, 0, JAMSTATE );

		else /* normal, compressed state */
			{
			/* Determine which destination state is the most
			 * common, and how many transitions to it there are.
			 */

			comfreq = 0;
			comstate = 0;

			for ( i = 1; i <= targptr; ++i )
				if ( targfreq[i] > comfreq )
					{
					comfreq = targfreq[i];
					comstate = targstate[i];
					}

			bldtbl( state, ds, totaltrans, comstate, comfreq );
			}
		}

	if ( fulltbl )
		dataend();

	else if ( ! fullspd )
		{
		cmptmps();  /* create compressed template entries */

		/* Create tables for all the states with only one
		 * out-transition.
		 */
		while ( onesp > 0 )
			{
			mk1tbl( onestate[onesp], onesym[onesp], onenext[onesp],
			onedef[onesp] );
			--onesp;
			}

		mkdeftbl();
		}

	flex_free( (void *) accset );
	flex_free( (void *) nset );
	}


/* snstods - converts a set of ndfa states into a dfa state
 *
 * synopsis
 *    is_new_state = snstods( int sns[numstates], int numstates,
 *				int accset[num_rules+1], int nacc,
 *				int hashval, int *newds_addr );
 *
 * On return, the dfa state number is in newds.
 */

int snstods( sns, numstates, accset, nacc, hashval, newds_addr )
int sns[], numstates, accset[], nacc, hashval, *newds_addr;
	{
	int didsort = 0;
	register int i, j;
	int newds, *oldsns;

	for ( i = 1; i <= lastdfa; ++i )
		if ( hashval == dhash[i] )
			{
			if ( numstates == dfasiz[i] )
				{
				oldsns = dss[i];

				if ( ! didsort )
					{
					/* We sort the states in sns so we
					 * can compare it to oldsns quickly.
					 * We use bubble because there probably
					 * aren't very many states.
					 */
					bubble( sns, numstates );
					didsort = 1;
					}

				for ( j = 1; j <= numstates; ++j )
					if ( sns[j] != oldsns[j] )
						break;

				if ( j > numstates )
					{
					++dfaeql;
					*newds_addr = i;
					return 0;
					}

				++hshcol;
				}

			else
				++hshsave;
			}

	/* Make a new dfa. */

	if ( ++lastdfa >= current_max_dfas )
		increase_max_dfas();

	newds = lastdfa;

	dss[newds] = allocate_integer_array( numstates + 1 );

	/* If we haven't already sorted the states in sns, we do so now,
	 * so that future comparisons with it can be made quickly.
	 */

	if ( ! didsort )
		bubble( sns, numstates );

	for ( i = 1; i <= numstates; ++i )
		dss[newds][i] = sns[i];

	dfasiz[newds] = numstates;
	dhash[newds] = hashval;

	if ( nacc == 0 )
		{
		if ( reject )
			dfaacc[newds].dfaacc_set = (int *) 0;
		else
			dfaacc[newds].dfaacc_state = 0;

		accsiz[newds] = 0;
		}

	else if ( reject )
		{
		/* We sort the accepting set in increasing order so the
		 * disambiguating rule that the first rule listed is considered
		 * match in the event of ties will work.  We use a bubble
		 * sort since the list is probably quite small.
		 */

		bubble( accset, nacc );

		dfaacc[newds].dfaacc_set = allocate_integer_array( nacc + 1 );

		/* Save the accepting set for later */
		for ( i = 1; i <= nacc; ++i )
			{
			dfaacc[newds].dfaacc_set[i] = accset[i];

			if ( accset[i] <= num_rules )
				/* Who knows, perhaps a REJECT can yield
				 * this rule.
				 */
				rule_useful[accset[i]] = true;
			}

		accsiz[newds] = nacc;
		}

	else
		{
		/* Find lowest numbered rule so the disambiguating rule
		 * will work.
		 */
		j = num_rules + 1;

		for ( i = 1; i <= nacc; ++i )
			if ( accset[i] < j )
				j = accset[i];

		dfaacc[newds].dfaacc_state = j;

		if ( j <= num_rules )
			rule_useful[j] = true;
		}

	*newds_addr = newds;

	return 1;
	}


/* symfollowset - follow the symbol transitions one step
 *
 * synopsis
 *    numstates = symfollowset( int ds[current_max_dfa_size], int dsize,
 *				int transsym, int nset[current_max_dfa_size] );
 */

int symfollowset( ds, dsize, transsym, nset )
int ds[], dsize, transsym, nset[];
	{
	int ns, tsp, sym, i, j, lenccl, ch, numstates, ccllist;

	numstates = 0;

	for ( i = 1; i <= dsize; ++i )
		{ /* for each nfa state ns in the state set of ds */
		ns = ds[i];
		sym = transchar[ns];
		tsp = trans1[ns];

		if ( sym < 0 )
			{ /* it's a character class */
			sym = -sym;
			ccllist = cclmap[sym];
			lenccl = ccllen[sym];

			if ( cclng[sym] )
				{
				for ( j = 0; j < lenccl; ++j )
					{
					/* Loop through negated character
					 * class.
					 */
					ch = ccltbl[ccllist + j];

					if ( ch == 0 )
						ch = NUL_ec;

					if ( ch > transsym )
						/* Transsym isn't in negated
						 * ccl.
						 */
						break;

					else if ( ch == transsym )
						/* next 2 */ goto bottom;
					}

				/* Didn't find transsym in ccl. */
				nset[++numstates] = tsp;
				}

			else
				for ( j = 0; j < lenccl; ++j )
					{
					ch = ccltbl[ccllist + j];

					if ( ch == 0 )
						ch = NUL_ec;

					if ( ch > transsym )
						break;
					else if ( ch == transsym )
						{
						nset[++numstates] = tsp;
						break;
						}
					}
			}

		else if ( sym >= 'A' && sym <= 'Z' && caseins )
			flexfatal(
			_( "consistency check failed in symfollowset" ) );

		else if ( sym == SYM_EPSILON )
			{ /* do nothing */
			}

		else if ( ABS( ecgroup[sym] ) == transsym )
			nset[++numstates] = tsp;

		bottom: ;
		}

	return numstates;
	}


/* sympartition - partition characters with same out-transitions
 *
 * synopsis
 *    sympartition( int ds[current_max_dfa_size], int numstates,
 *			int symlist[numecs], int duplist[numecs] );
 */

void sympartition( ds, numstates, symlist, duplist )
int ds[], numstates;
int symlist[], duplist[];
	{
	int tch, i, j, k, ns, dupfwd[CSIZE + 1], lenccl, cclp, ich;

	/* Partitioning is done by creating equivalence classes for those
	 * characters which have out-transitions from the given state.  Thus
	 * we are really creating equivalence classes of equivalence classes.
	 */

	for ( i = 1; i <= numecs; ++i )
		{ /* initialize equivalence class list */
		duplist[i] = i - 1;
		dupfwd[i] = i + 1;
		}

	duplist[1] = NIL;
	dupfwd[numecs] = NIL;

	for ( i = 1; i <= numstates; ++i )
		{
		ns = ds[i];
		tch = transchar[ns];

		if ( tch != SYM_EPSILON )
			{
			if ( tch < -lastccl || tch >= csize )
				{
				flexfatal(
		_( "bad transition character detected in sympartition()" ) );
				}

			if ( tch >= 0 )
				{ /* character transition */
				int ec = ecgroup[tch];

				mkechar( ec, dupfwd, duplist );
				symlist[ec] = 1;
				}

			else
				{ /* character class */
				tch = -tch;

				lenccl = ccllen[tch];
				cclp = cclmap[tch];
				mkeccl( ccltbl + cclp, lenccl, dupfwd,
					duplist, numecs, NUL_ec );

				if ( cclng[tch] )
					{
					j = 0;

					for ( k = 0; k < lenccl; ++k )
						{
						ich = ccltbl[cclp + k];

						if ( ich == 0 )
							ich = NUL_ec;

						for ( ++j; j < ich; ++j )
							symlist[j] = 1;
						}

					for ( ++j; j <= numecs; ++j )
						symlist[j] = 1;
					}

				else
					for ( k = 0; k < lenccl; ++k )
						{
						ich = ccltbl[cclp + k];

						if ( ich == 0 )
							ich = NUL_ec;

						symlist[ich] = 1;
						}
				}
			}
		}
	}
/* ecs - equivalence class routines */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */


/* ccl2ecl - convert character classes to set of equivalence classes */

void ccl2ecl()
	{
	int i, ich, newlen, cclp, ccls, cclmec;

	for ( i = 1; i <= lastccl; ++i )
		{
		/* We loop through each character class, and for each character
		 * in the class, add the character's equivalence class to the
		 * new "character" class we are creating.  Thus when we are all
		 * done, character classes will really consist of collections
		 * of equivalence classes
		 */

		newlen = 0;
		cclp = cclmap[i];

		for ( ccls = 0; ccls < ccllen[i]; ++ccls )
			{
			ich = ccltbl[cclp + ccls];
			cclmec = ecgroup[ich];

			if ( cclmec > 0 )
				{
				ccltbl[cclp + newlen] = cclmec;
				++newlen;
				}
			}

		ccllen[i] = newlen;
		}
	}


/* cre8ecs - associate equivalence class numbers with class members
 *
 * fwd is the forward linked-list of equivalence class members.  bck
 * is the backward linked-list, and num is the number of class members.
 *
 * Returned is the number of classes.
 */

int cre8ecs( fwd, bck, num )
int fwd[], bck[], num;
	{
	int i, j, numcl;

	numcl = 0;

	/* Create equivalence class numbers.  From now on, ABS( bck(x) )
	 * is the equivalence class number for object x.  If bck(x)
	 * is positive, then x is the representative of its equivalence
	 * class.
	 */
	for ( i = 1; i <= num; ++i )
		if ( bck[i] == NIL )
			{
			bck[i] = ++numcl;
			for ( j = fwd[i]; j != NIL; j = fwd[j] )
				bck[j] = -numcl;
			}

	return numcl;
	}


/* mkeccl - update equivalence classes based on character class xtions
 *
 * synopsis
 *    Char ccls[];
 *    int lenccl, fwd[llsiz], bck[llsiz], llsiz, NUL_mapping;
 *    void mkeccl( Char ccls[], int lenccl, int fwd[llsiz], int bck[llsiz],
 *			int llsiz, int NUL_mapping );
 *
 * ccls contains the elements of the character class, lenccl is the
 * number of elements in the ccl, fwd is the forward link-list of equivalent
 * characters, bck is the backward link-list, and llsiz size of the link-list.
 *
 * NUL_mapping is the value which NUL (0) should be mapped to.
 */

void mkeccl( ccls, lenccl, fwd, bck, llsiz, NUL_mapping )
Char ccls[];
int lenccl, fwd[], bck[], llsiz, NUL_mapping;
	{
	int cclp, oldec, newec;
	int cclm, i, j;
	static unsigned char cclflags[CSIZE];	/* initialized to all '\0' */

	/* Note that it doesn't matter whether or not the character class is
	 * negated.  The same results will be obtained in either case.
	 */

	cclp = 0;

	while ( cclp < lenccl )
		{
		cclm = ccls[cclp];

		if ( NUL_mapping && cclm == 0 )
			cclm = NUL_mapping;

		oldec = bck[cclm];
		newec = cclm;

		j = cclp + 1;

		for ( i = fwd[cclm]; i != NIL && i <= llsiz; i = fwd[i] )
			{ /* look for the symbol in the character class */
			for ( ; j < lenccl; ++j )
				{
				register int ccl_char;

				if ( NUL_mapping && ccls[j] == 0 )
					ccl_char = NUL_mapping;
				else
					ccl_char = ccls[j];

				if ( ccl_char > i )
					break;

				if ( ccl_char == i && ! cclflags[j] )
					{
					/* We found an old companion of cclm
					 * in the ccl.  Link it into the new
					 * equivalence class and flag it as
					 * having been processed.
					 */

					bck[i] = newec;
					fwd[newec] = i;
					newec = i;
					/* Set flag so we don't reprocess. */
					cclflags[j] = 1;

					/* Get next equivalence class member. */
					/* continue 2 */
					goto next_pt;
					}
				}

			/* Symbol isn't in character class.  Put it in the old
			 * equivalence class.
			 */

			bck[i] = oldec;

			if ( oldec != NIL )
				fwd[oldec] = i;

			oldec = i;

			next_pt: ;
			}

		if ( bck[cclm] != NIL || oldec != bck[cclm] )
			{
			bck[cclm] = NIL;
			fwd[oldec] = NIL;
			}

		fwd[newec] = NIL;

		/* Find next ccl member to process. */

		for ( ++cclp; cclflags[cclp] && cclp < lenccl; ++cclp )
			{
			/* Reset "doesn't need processing" flag. */
			cclflags[cclp] = 0;
			}
		}
	}


/* mkechar - create equivalence class for single character */

void mkechar( tch, fwd, bck )
int tch, fwd[], bck[];
	{
	/* If until now the character has been a proper subset of
	 * an equivalence class, break it away to create a new ec
	 */

	if ( fwd[tch] != NIL )
		bck[fwd[tch]] = bck[tch];

	if ( bck[tch] != NIL )
		fwd[bck[tch]] = fwd[tch];

	fwd[tch] = NIL;
	bck[tch] = NIL;
	}
/* gen - actual generation (writing) of flex scanners */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */



/* declare functions that have forward references */

void gen_next_state PROTO((int));
void genecs PROTO((void));
void indent_put2s PROTO((char [], char []));
void indent_puts PROTO((char []));


static int indent_level = 0; /* each level is 8 spaces */

#define indent_up() (++indent_level)
#define indent_down() (--indent_level)
#define set_indent(indent_val) indent_level = indent_val

/* Almost everything is done in terms of arrays starting at 1, so provide
 * a null entry for the zero element of all C arrays.  (The exception
 * to this is that the fast table representation generally uses the
 * 0 elements of its arrays, too.)
 */
static char C_int_decl[] = "static yyconst int %s[%d] =\n    {   0,\n";
static char C_short_decl[] = "static yyconst short int %s[%d] =\n    {   0,\n";
static char C_long_decl[] = "static yyconst long int %s[%d] =\n    {   0,\n";
static char C_state_decl[] =
	"static yyconst yy_state_type %s[%d] =\n    {   0,\n";


/* Indent to the current level. */

void do_indent()
	{
	register int i = indent_level * 8;

	while ( i >= 8 )
		{
		outc( '\t' );
		i -= 8;
		}

	while ( i > 0 )
		{
		outc( ' ' );
		--i;
		}
	}


/* Generate the code to keep backing-up information. */

void gen_backing_up()
	{
	if ( reject || num_backing_up == 0 )
		return;

	if ( fullspd )
		indent_puts( "if ( yy_current_state[-1].yy_nxt )" );
	else
		indent_puts( "if ( yy_accept[yy_current_state] )" );

	indent_up();
	indent_puts( "{" );
	indent_puts( "yy_last_accepting_state = yy_current_state;" );
	indent_puts( "yy_last_accepting_cpos = yy_cp;" );
	indent_puts( "}" );
	indent_down();
	}


/* Generate the code to perform the backing up. */

void gen_bu_action()
	{
	if ( reject || num_backing_up == 0 )
		return;

	set_indent( 3 );

	indent_puts( "case 0: /* must back up */" );
	indent_puts( "/* undo the effects of YY_DO_BEFORE_ACTION */" );
	indent_puts( "*yy_cp = yy_hold_char;" );

	if ( fullspd || fulltbl )
		indent_puts( "yy_cp = yy_last_accepting_cpos + 1;" );
	else
		/* Backing-up info for compressed tables is taken \after/
		 * yy_cp has been incremented for the next state.
		 */
		indent_puts( "yy_cp = yy_last_accepting_cpos;" );

	indent_puts( "yy_current_state = yy_last_accepting_state;" );
	indent_puts( "goto yy_find_action;" );
	outc( '\n' );

	set_indent( 0 );
	}


/* genctbl - generates full speed compressed transition table */

void genctbl()
	{
	register int i;
	int end_of_buffer_action = num_rules + 1;

	/* Table of verify for transition and offset to next state. */
	out_dec( "static yyconst struct yy_trans_info yy_transition[%d] =\n",
		tblend + numecs + 1 );
	outn( "    {" );

	/* We want the transition to be represented as the offset to the
	 * next state, not the actual state number, which is what it currently
	 * is.  The offset is base[nxt[i]] - (base of current state)].  That's
	 * just the difference between the starting points of the two involved
	 * states (to - from).
	 *
	 * First, though, we need to find some way to put in our end-of-buffer
	 * flags and states.  We do this by making a state with absolutely no
	 * transitions.  We put it at the end of the table.
	 */

	/* We need to have room in nxt/chk for two more slots: One for the
	 * action and one for the end-of-buffer transition.  We now *assume*
	 * that we're guaranteed the only character we'll try to index this
	 * nxt/chk pair with is EOB, i.e., 0, so we don't have to make sure
	 * there's room for jam entries for other characters.
	 */

	while ( tblend + 2 >= current_max_xpairs )
		expand_nxt_chk();

	while ( lastdfa + 1 >= current_max_dfas )
		increase_max_dfas();

	base[lastdfa + 1] = tblend + 2;
	nxt[tblend + 1] = end_of_buffer_action;
	chk[tblend + 1] = numecs + 1;
	chk[tblend + 2] = 1; /* anything but EOB */

	/* So that "make test" won't show arb. differences. */
	nxt[tblend + 2] = 0;

	/* Make sure every state has an end-of-buffer transition and an
	 * action #.
	 */
	for ( i = 0; i <= lastdfa; ++i )
		{
		int anum = dfaacc[i].dfaacc_state;
		int offset = base[i];

		chk[offset] = EOB_POSITION;
		chk[offset - 1] = ACTION_POSITION;
		nxt[offset - 1] = anum;	/* action number */
		}

	for ( i = 0; i <= tblend; ++i )
		{
		if ( chk[i] == EOB_POSITION )
			transition_struct_out( 0, base[lastdfa + 1] - i );

		else if ( chk[i] == ACTION_POSITION )
			transition_struct_out( 0, nxt[i] );

		else if ( chk[i] > numecs || chk[i] == 0 )
			transition_struct_out( 0, 0 );	/* unused slot */

		else	/* verify, transition */
			transition_struct_out( chk[i],
						base[nxt[i]] - (i - chk[i]) );
		}


	/* Here's the final, end-of-buffer state. */
	transition_struct_out( chk[tblend + 1], nxt[tblend + 1] );
	transition_struct_out( chk[tblend + 2], nxt[tblend + 2] );

	outn( "    };\n" );

	/* Table of pointers to start states. */
	out_dec(
	"static yyconst struct yy_trans_info *yy_start_state_list[%d] =\n",
		lastsc * 2 + 1 );
	outn( "    {" );	/* } so vi doesn't get confused */

	for ( i = 0; i <= lastsc * 2; ++i )
		out_dec( "    &yy_transition[%d],\n", base[i] );

	dataend();

	if ( useecs )
		genecs();
	}


/* Generate equivalence-class tables. */

void genecs()
	{
	register int i, j;
	int numrows;

	out_str_dec( C_int_decl, "yy_ec", csize );

	for ( i = 1; i < csize; ++i )
		{
		if ( caseins && (i >= 'A') && (i <= 'Z') )
			ecgroup[i] = ecgroup[clower( i )];

		ecgroup[i] = ABS( ecgroup[i] );
		mkdata( ecgroup[i] );
		}

	dataend();

	if ( trace )
		{
		fputs( _( "\n\nEquivalence Classes:\n\n" ), err );

		numrows = csize / 8;

		for ( j = 0; j < numrows; ++j )
			{
			for ( i = j; i < csize; i = i + numrows )
				{
				fprintf( err, "%4s = %-2d",
					readable_form( i ), ecgroup[i] );

				putc( ' ', err );
				}

			putc( '\n', err );
			}
		}
	}


/* Generate the code to find the action number. */

void gen_find_action()
	{
	if ( fullspd )
		indent_puts( "yy_act = yy_current_state[-1].yy_nxt;" );

	else if ( fulltbl )
		indent_puts( "yy_act = yy_accept[yy_current_state];" );

	else if ( reject )
		{
		indent_puts( "yy_current_state = *--yy_state_ptr;" );
		indent_puts( "yy_lp = yy_accept[yy_current_state];" );

		outn(
		"find_rule: /* we branch to this label when backing up */" );

		indent_puts(
		"for ( ; ; ) /* until we find what rule we matched */" );

		indent_up();

		indent_puts( "{" );

		indent_puts(
		"if ( yy_lp && yy_lp < yy_accept[yy_current_state + 1] )" );
		indent_up();
		indent_puts( "{" );
		indent_puts( "yy_act = yy_acclist[yy_lp];" );

		if ( variable_trailing_context_rules )
			{
			indent_puts( "if ( yy_act & YY_TRAILING_HEAD_MASK ||" );
			indent_puts( "     yy_looking_for_trail_begin )" );
			indent_up();
			indent_puts( "{" );

			indent_puts(
				"if ( yy_act == yy_looking_for_trail_begin )" );
			indent_up();
			indent_puts( "{" );
			indent_puts( "yy_looking_for_trail_begin = 0;" );
			indent_puts( "yy_act &= ~YY_TRAILING_HEAD_MASK;" );
			indent_puts( "break;" );
			indent_puts( "}" );
			indent_down();

			indent_puts( "}" );
			indent_down();

			indent_puts( "else if ( yy_act & YY_TRAILING_MASK )" );
			indent_up();
			indent_puts( "{" );
			indent_puts(
		"yy_looking_for_trail_begin = yy_act & ~YY_TRAILING_MASK;" );
			indent_puts(
		"yy_looking_for_trail_begin |= YY_TRAILING_HEAD_MASK;" );

			if ( real_reject )
				{
				/* Remember matched text in case we back up
				 * due to REJECT.
				 */
				indent_puts( "yy_full_match = yy_cp;" );
				indent_puts( "yy_full_state = yy_state_ptr;" );
				indent_puts( "yy_full_lp = yy_lp;" );
				}

			indent_puts( "}" );
			indent_down();

			indent_puts( "else" );
			indent_up();
			indent_puts( "{" );
			indent_puts( "yy_full_match = yy_cp;" );
			indent_puts( "yy_full_state = yy_state_ptr;" );
			indent_puts( "yy_full_lp = yy_lp;" );
			indent_puts( "break;" );
			indent_puts( "}" );
			indent_down();

			indent_puts( "++yy_lp;" );
			indent_puts( "goto find_rule;" );
			}

		else
			{
			/* Remember matched text in case we back up due to
			 * trailing context plus REJECT.
			 */
			indent_up();
			indent_puts( "{" );
			indent_puts( "yy_full_match = yy_cp;" );
			indent_puts( "break;" );
			indent_puts( "}" );
			indent_down();
			}

		indent_puts( "}" );
		indent_down();

		indent_puts( "--yy_cp;" );

		/* We could consolidate the following two lines with those at
		 * the beginning, but at the cost of complaints that we're
		 * branching inside a loop.
		 */
		indent_puts( "yy_current_state = *--yy_state_ptr;" );
		indent_puts( "yy_lp = yy_accept[yy_current_state];" );

		indent_puts( "}" );

		indent_down();
		}

	else
		{ /* compressed */
		indent_puts( "yy_act = yy_accept[yy_current_state];" );

		if ( interactive && ! reject )
			{
			/* Do the guaranteed-needed backing up to figure out
			 * the match.
			 */
			indent_puts( "if ( yy_act == 0 )" );
			indent_up();
			indent_puts( "{ /* have to back up */" );
			indent_puts( "yy_cp = yy_last_accepting_cpos;" );
			indent_puts(
				"yy_current_state = yy_last_accepting_state;" );
			indent_puts( "yy_act = yy_accept[yy_current_state];" );
			indent_puts( "}" );
			indent_down();
			}
		}
	}


/* genftbl - generate full transition table */

void genftbl()
	{
	register int i;
	int end_of_buffer_action = num_rules + 1;

	out_str_dec( long_align ? C_long_decl : C_short_decl,
		"yy_accept", lastdfa + 1 );

	dfaacc[end_of_buffer_state].dfaacc_state = end_of_buffer_action;

	for ( i = 1; i <= lastdfa; ++i )
		{
		register int anum = dfaacc[i].dfaacc_state;

		mkdata( anum );

		if ( trace && anum )
			fprintf( err, _( "state # %d accepts: [%d]\n" ),
				i, anum );
		}

	dataend();

	if ( useecs )
		genecs();

	/* Don't have to dump the actual full table entries - they were
	 * created on-the-fly.
	 */
	}


/* Generate the code to find the next compressed-table state. */

void gen_next_compressed_state( char_map )
char *char_map;
	{
	indent_put2s( "register YY_CHAR yy_c = %s;", char_map );

	/* Save the backing-up info \before/ computing the next state
	 * because we always compute one more state than needed - we
	 * always proceed until we reach a jam state
	 */
	gen_backing_up();

	indent_puts(
"while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )" );
	indent_up();
	indent_puts( "{" );
	indent_puts( "yy_current_state = (int) yy_def[yy_current_state];" );

	if ( usemecs )
		{
		/* We've arrange it so that templates are never chained
		 * to one another.  This means we can afford to make a
		 * very simple test to see if we need to convert to
		 * yy_c's meta-equivalence class without worrying
		 * about erroneously looking up the meta-equivalence
		 * class twice
		 */
		do_indent();

		/* lastdfa + 2 is the beginning of the templates */
		out_dec( "if ( yy_current_state >= %d )\n", lastdfa + 2 );

		indent_up();
		indent_puts( "yy_c = yy_meta[(unsigned int) yy_c];" );
		indent_down();
		}

	indent_puts( "}" );
	indent_down();

	indent_puts(
"yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];" );
	}


/* Generate the code to find the next match. */

void gen_next_match()
	{
	/* NOTE - changes in here should be reflected in gen_next_state() and
	 * gen_NUL_trans().
	 */
	char *char_map = useecs ?
				"yy_ec[YY_SC_TO_UI(*yy_cp)]" :
				"YY_SC_TO_UI(*yy_cp)";

	char *char_map_2 = useecs ?
				"yy_ec[YY_SC_TO_UI(*++yy_cp)]" :
				"YY_SC_TO_UI(*++yy_cp)";

	if ( fulltbl )
		{
		indent_put2s(
	"while ( (yy_current_state = yy_nxt[yy_current_state][%s]) > 0 )",
				char_map );

		indent_up();

		if ( num_backing_up > 0 )
			{
			indent_puts( "{" );	/* } for vi */
			gen_backing_up();
			outc( '\n' );
			}

		indent_puts( "++yy_cp;" );

		if ( num_backing_up > 0 )
			/* { for vi */
			indent_puts( "}" );

		indent_down();

		outc( '\n' );
		indent_puts( "yy_current_state = -yy_current_state;" );
		}

	else if ( fullspd )
		{
		indent_puts( "{" );	/* } for vi */
		indent_puts(
		"register yyconst struct yy_trans_info *yy_trans_info;\n" );
		indent_puts( "register YY_CHAR yy_c;\n" );
		indent_put2s( "for ( yy_c = %s;", char_map );
		indent_puts(
	"      (yy_trans_info = &yy_current_state[(unsigned int) yy_c])->" );
		indent_puts( "yy_verify == yy_c;" );
		indent_put2s( "      yy_c = %s )", char_map_2 );

		indent_up();

		if ( num_backing_up > 0 )
			indent_puts( "{" );	/* } for vi */

		indent_puts( "yy_current_state += yy_trans_info->yy_nxt;" );

		if ( num_backing_up > 0 )
			{
			outc( '\n' );
			gen_backing_up();	/* { for vi */
			indent_puts( "}" );
			}

		indent_down();	/* { for vi */
		indent_puts( "}" );
		}

	else
		{ /* compressed */
		indent_puts( "do" );

		indent_up();
		indent_puts( "{" );	/* } for vi */

		gen_next_state( false );

		indent_puts( "++yy_cp;" );

		/* { for vi */
		indent_puts( "}" );
		indent_down();

		do_indent();

		if ( interactive )
			out_dec( "while ( yy_base[yy_current_state] != %d );\n",
				jambase );
		else
			out_dec( "while ( yy_current_state != %d );\n",
				jamstate );

		if ( ! reject && ! interactive )
			{
			/* Do the guaranteed-needed backing up to figure out
			 * the match.
			 */
			indent_puts( "yy_cp = yy_last_accepting_cpos;" );
			indent_puts(
				"yy_current_state = yy_last_accepting_state;" );
			}
		}
	}


/* Generate the code to find the next state. */

void gen_next_state( worry_about_NULs )
int worry_about_NULs;
	{ /* NOTE - changes in here should be reflected in gen_next_match() */
	char char_map[256];

	if ( worry_about_NULs && ! nultrans )
		{
		if ( useecs )
			(void) sprintf( char_map,
				"(*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : %d)",
					NUL_ec );
		else
			(void) sprintf( char_map,
				"(*yy_cp ? YY_SC_TO_UI(*yy_cp) : %d)", NUL_ec );
		}

	else
		strcpy( char_map, useecs ?
			"yy_ec[YY_SC_TO_UI(*yy_cp)]" : "YY_SC_TO_UI(*yy_cp)" );

	if ( worry_about_NULs && nultrans )
		{
		if ( ! fulltbl && ! fullspd )
			/* Compressed tables back up *before* they match. */
			gen_backing_up();

		indent_puts( "if ( *yy_cp )" );
		indent_up();
		indent_puts( "{" );	/* } for vi */
		}

	if ( fulltbl )
		indent_put2s(
			"yy_current_state = yy_nxt[yy_current_state][%s];", 
				char_map );

	else if ( fullspd )
		indent_put2s(
			"yy_current_state += yy_current_state[%s].yy_nxt;",
				char_map );

	else
		gen_next_compressed_state( char_map );

	if ( worry_about_NULs && nultrans )
		{
		/* { for vi */
		indent_puts( "}" );
		indent_down();
		indent_puts( "else" );
		indent_up();
		indent_puts(
			"yy_current_state = yy_NUL_trans[yy_current_state];" );
		indent_down();
		}

	if ( fullspd || fulltbl )
		gen_backing_up();

	if ( reject )
		indent_puts( "*yy_state_ptr++ = yy_current_state;" );
	}


/* Generate the code to make a NUL transition. */

void gen_NUL_trans()
	{ /* NOTE - changes in here should be reflected in gen_next_match() */
	/* Only generate a definition for "yy_cp" if we'll generate code
	 * that uses it.  Otherwise lint and the like complain.
	 */
	int need_backing_up = (num_backing_up > 0 && ! reject);

	if ( need_backing_up && (! nultrans || fullspd || fulltbl) )
		/* We're going to need yy_cp lying around for the call
		 * below to gen_backing_up().
		 */
		indent_puts( "register char *yy_cp = yy_c_buf_p;" );

	outc( '\n' );

	if ( nultrans )
		{
		indent_puts(
			"yy_current_state = yy_NUL_trans[yy_current_state];" );
		indent_puts( "yy_is_jam = (yy_current_state == 0);" );
		}

	else if ( fulltbl )
		{
		do_indent();
		out_dec( "yy_current_state = yy_nxt[yy_current_state][%d];\n",
			NUL_ec );
		indent_puts( "yy_is_jam = (yy_current_state <= 0);" );
		}

	else if ( fullspd )
		{
		do_indent();
		out_dec( "register int yy_c = %d;\n", NUL_ec );

		indent_puts(
		"register yyconst struct yy_trans_info *yy_trans_info;\n" );
		indent_puts(
		"yy_trans_info = &yy_current_state[(unsigned int) yy_c];" );
		indent_puts( "yy_current_state += yy_trans_info->yy_nxt;" );

		indent_puts(
			"yy_is_jam = (yy_trans_info->yy_verify != yy_c);" );
		}

	else
		{
		char NUL_ec_str[20];

		(void) sprintf( NUL_ec_str, "%d", NUL_ec );
		gen_next_compressed_state( NUL_ec_str );

#ifndef F_AA_1
		do_indent();
		out_dec( "yy_is_jam = (yy_current_state == %d);\n", jamstate );

		if ( reject )
			{
#else
		if ( reject )
			{
			do_indent();
			out_dec( "yy_is_jam = (yy_current_state == %d);\n", jamstate );
#endif
			/* Only stack this state if it's a transition we
			 * actually make.  If we stack it on a jam, then
			 * the state stack and yy_c_buf_p get out of sync.
			 */
			indent_puts( "if ( ! yy_is_jam )" );
#ifndef F_JR_2
			indent_up();
			indent_puts( "*yy_state_ptr++ = yy_current_state;" );
			indent_down();
#else
            indent_down();
            indent_puts( "*yy_state_ptr++ = yy_current_state;" );
            indent_up();
#endif
			}
		}

	/* If we've entered an accepting state, back up; note that
	 * compressed tables have *already* done such backing up, so
	 * we needn't bother with it again.
	 */
	if ( need_backing_up && (fullspd || fulltbl) )
		{
		outc( '\n' );
		indent_puts( "if ( ! yy_is_jam )" );
		indent_up();
		indent_puts( "{" );
		gen_backing_up();
		indent_puts( "}" );
		indent_down();
		}
	}


/* Generate the code to find the start state. */

void gen_start_state()
	{
	if ( fullspd )
		{
		if ( bol_needed )
			{
			indent_puts(
	"yy_current_state = yy_start_state_list[yy_start + YY_AT_BOL()];" );
			}
		else
			indent_puts(
			"yy_current_state = yy_start_state_list[yy_start];" );
		}

	else
		{
		indent_puts( "yy_current_state = yy_start;" );

		if ( bol_needed )
			indent_puts( "yy_current_state += YY_AT_BOL();" );

		if ( reject )
			{
			/* Set up for storing up states. */
			indent_puts( "yy_state_ptr = yy_state_buf;" );
			indent_puts( "*yy_state_ptr++ = yy_current_state;" );
			}
		}
	}


/* gentabs - generate data statements for the transition tables */

void gentabs()
	{
	int i, j, k, *accset, nacc, *acc_array, total_states;
	int end_of_buffer_action = num_rules + 1;

	acc_array = allocate_integer_array( current_max_dfas );
	nummt = 0;

	/* The compressed table format jams by entering the "jam state",
	 * losing information about the previous state in the process.
	 * In order to recover the previous state, we effectively need
	 * to keep backing-up information.
	 */
	++num_backing_up;

	if ( reject )
		{
		/* Write out accepting list and pointer list.
		 *
		 * First we generate the "yy_acclist" array.  In the process,
		 * we compute the indices that will go into the "yy_accept"
		 * array, and save the indices in the dfaacc array.
		 */
		int EOB_accepting_list[2];

		/* Set up accepting structures for the End Of Buffer state. */
		EOB_accepting_list[0] = 0;
		EOB_accepting_list[1] = end_of_buffer_action;
		accsiz[end_of_buffer_state] = 1;
		dfaacc[end_of_buffer_state].dfaacc_set = EOB_accepting_list;

		out_str_dec( long_align ? C_long_decl : C_short_decl,
			"yy_acclist", MAX( numas, 1 ) + 1 );

		j = 1;	/* index into "yy_acclist" array */

		for ( i = 1; i <= lastdfa; ++i )
			{
			acc_array[i] = j;

			if ( accsiz[i] != 0 )
				{
				accset = dfaacc[i].dfaacc_set;
				nacc = accsiz[i];

				if ( trace )
					fprintf( err,
						_( "state # %d accepts: " ),
						i );

				for ( k = 1; k <= nacc; ++k )
					{
					int accnum = accset[k];

					++j;

					if ( variable_trailing_context_rules &&
					  ! (accnum & YY_TRAILING_HEAD_MASK) &&
					   accnum > 0 && accnum <= num_rules &&
					  rule_type[accnum] == RULE_VARIABLE )
						{
						/* Special hack to flag
						 * accepting number as part
						 * of trailing context rule.
						 */
						accnum |= YY_TRAILING_MASK;
						}

					mkdata( accnum );

					if ( trace )
						{
						fprintf( err, "[%d]",
							accset[k] );

						if ( k < nacc )
							fputs( ", ", err );
						else
							putc( '\n', err );
						}
					}
				}
			}

		/* add accepting number for the "jam" state */
		acc_array[i] = j;

		dataend();
		}

	else
		{
		dfaacc[end_of_buffer_state].dfaacc_state = end_of_buffer_action;

		for ( i = 1; i <= lastdfa; ++i )
			acc_array[i] = dfaacc[i].dfaacc_state;

		/* add accepting number for jam state */
		acc_array[i] = 0;
		}

	/* Spit out "yy_accept" array.  If we're doing "reject", it'll be
	 * pointers into the "yy_acclist" array.  Otherwise it's actual
	 * accepting numbers.  In either case, we just dump the numbers.
	 */

	/* "lastdfa + 2" is the size of "yy_accept"; includes room for C arrays
	 * beginning at 0 and for "jam" state.
	 */
	k = lastdfa + 2;

	if ( reject )
		/* We put a "cap" on the table associating lists of accepting
		 * numbers with state numbers.  This is needed because we tell
		 * where the end of an accepting list is by looking at where
		 * the list for the next state starts.
		 */
		++k;

	out_str_dec( long_align ? C_long_decl : C_short_decl, "yy_accept", k );

	for ( i = 1; i <= lastdfa; ++i )
		{
		mkdata( acc_array[i] );

		if ( ! reject && trace && acc_array[i] )
			fprintf( err, _( "state # %d accepts: [%d]\n" ),
				i, acc_array[i] );
		}

	/* Add entry for "jam" state. */
	mkdata( acc_array[i] );

	if ( reject )
		/* Add "cap" for the list. */
		mkdata( acc_array[i] );

	dataend();

	if ( useecs )
		genecs();

	if ( usemecs )
		{
		/* Write out meta-equivalence classes (used to index
		 * templates with).
		 */

		if ( trace )
			fputs( _( "\n\nMeta-Equivalence Classes:\n" ),
			      err );

		out_str_dec( C_int_decl, "yy_meta", numecs + 1 );

		for ( i = 1; i <= numecs; ++i )
			{
			if ( trace )
				fprintf( err, "%d = %d\n",
					i, ABS( tecbck[i] ) );

			mkdata( ABS( tecbck[i] ) );
			}

		dataend();
		}

	total_states = lastdfa + numtemps;

	out_str_dec( (tblend >= MAX_SHORT || long_align) ?
			C_long_decl : C_short_decl,
		"yy_base", total_states + 1 );

	for ( i = 1; i <= lastdfa; ++i )
		{
		register int d = def[i];

		if ( base[i] == JAMSTATE )
			base[i] = jambase;

		if ( d == JAMSTATE )
			def[i] = jamstate;

		else if ( d < 0 )
			{
			/* Template reference. */
			++tmpuses;
			def[i] = lastdfa - d + 1;
			}

		mkdata( base[i] );
		}

	/* Generate jam state's base index. */
	mkdata( base[i] );

	for ( ++i /* skip jam state */; i <= total_states; ++i )
		{
		mkdata( base[i] );
		def[i] = jamstate;
		}

	dataend();

	out_str_dec( (total_states >= MAX_SHORT || long_align) ?
			C_long_decl : C_short_decl,
		"yy_def", total_states + 1 );

	for ( i = 1; i <= total_states; ++i )
		mkdata( def[i] );

	dataend();

	out_str_dec( (total_states >= MAX_SHORT || long_align) ?
			C_long_decl : C_short_decl,
		"yy_nxt", tblend + 1 );

	for ( i = 1; i <= tblend; ++i )
		{
		/* Note, the order of the following test is important.
		 * If chk[i] is 0, then nxt[i] is undefined.
		 */
		if ( chk[i] == 0 || nxt[i] == 0 )
			nxt[i] = jamstate;	/* new state is the JAM state */

		mkdata( nxt[i] );
		}

	dataend();

	out_str_dec( (total_states >= MAX_SHORT || long_align) ?
			C_long_decl : C_short_decl,
		"yy_chk", tblend + 1 );

	for ( i = 1; i <= tblend; ++i )
		{
		if ( chk[i] == 0 )
			++nummt;

		mkdata( chk[i] );
		}

	dataend();
	}


/* Write out a formatted string (with a secondary string argument) at the
 * current indentation level, adding a final newline.
 */

void indent_put2s( fmt, arg )
char fmt[], arg[];
	{
	do_indent();
	out_str( fmt, arg );
	outn( "" );
	}


/* Write out a string at the current indentation level, adding a final
 * newline.
 */

void indent_puts( str )
char str[];
	{
	do_indent();
	outn( str );
	}


/* make_tables - generate transition tables and finishes generating output file
 */

void make_tables()
	{
	register int i;
	int did_eof_rule = false;

	skelout();

	/* First, take care of YY_DO_BEFORE_ACTION depending on yymore
	 * being used.
	 */
	set_indent( 1 );
#ifndef F_JR_1
	if ( yymore_used && ! yytext_is_array )
#else
    if ( yymore_used )
#endif
		{
		indent_puts( "yytext_ptr -= yy_more_len; \\" );
		indent_puts( "yyleng = (int) (yy_cp - yytext_ptr); \\" );
		}

	else
		indent_puts( "yyleng = (int) (yy_cp - yy_bp); \\" );

	/* Now also deal with copying yytext_ptr to yytext if needed. */
	skelout();
	if ( yytext_is_array )
		{
		if ( yymore_used )
#ifndef F_AA_2
			indent_puts(
				"if ( yyleng + yy_more_offset >= YYLMAX ) \\" );
		else
			indent_puts( "if ( yyleng >= YYLMAX ) \\" );
#else
			indent_puts( "if ( yyleng >= YYLMAX ) \\" );
		else
			indent_puts(
				"if ( yyleng + yy_more_offset >= YYLMAX ) \\" );
#endif

		indent_up();
		indent_puts(
		"YY_FATAL_ERROR( \"token too large, exceeds YYLMAX\" ); \\" );
		indent_down();

		if ( yymore_used )
			{
			indent_puts(
"yy_flex_strncpy( &yytext[yy_more_offset], yytext_ptr, yyleng + 1 ); \\" );
			indent_puts( "yyleng += yy_more_offset; \\" );
			indent_puts(
				"yy_prev_more_offset = yy_more_offset; \\" );
			indent_puts( "yy_more_offset = 0; \\" );
			}
		else
			{
			indent_puts(
		"yy_flex_strncpy( yytext, yytext_ptr, yyleng + 1 ); \\" );
			}
		}

	set_indent( 0 );

	skelout();


	out_dec( "#define YY_NUM_RULES %d\n", num_rules );
	out_dec( "#define YY_END_OF_BUFFER %d\n", num_rules + 1 );

	if ( fullspd )
		{
		/* Need to define the transet type as a size large
		 * enough to hold the biggest offset.
		 */
		int total_table_size = tblend + numecs + 1;
		char *trans_offset_type =
			(total_table_size >= MAX_SHORT || long_align) ?
				"long" : "short";

		set_indent( 0 );
		indent_puts( "struct yy_trans_info" );
		indent_up();
		indent_puts( "{" ); 	/* } for vi */

		if ( long_align )
			indent_puts( "long yy_verify;" );
		else
			indent_puts( "short yy_verify;" );

		/* In cases where its sister yy_verify *is* a "yes, there is
		 * a transition", yy_nxt is the offset (in records) to the
		 * next state.  In most cases where there is no transition,
		 * the value of yy_nxt is irrelevant.  If yy_nxt is the -1th
		 * record of a state, though, then yy_nxt is the action number
		 * for that state.
		 */

		indent_put2s( "%s yy_nxt;", trans_offset_type );
		indent_puts( "};" );
		indent_down();
		}

	if ( fullspd )
		genctbl();
	else if ( fulltbl )
		genftbl();
	else
		gentabs();

	/* Definitions for backing up.  We don't need them if REJECT
	 * is being used because then we use an alternative backin-up
	 * technique instead.
	 */
	if ( num_backing_up > 0 && ! reject )
		{
		if ( ! C_plus_plus )
			{
			indent_puts(
			"static yy_state_type yy_last_accepting_state;" );
			indent_puts(
				"static char *yy_last_accepting_cpos;\n" );
			}
		}

	if ( nultrans )
		{
		out_str_dec( C_state_decl, "yy_NUL_trans", lastdfa + 1 );

		for ( i = 1; i <= lastdfa; ++i )
			{
			if ( fullspd )
				out_dec( "    &yy_transition[%d],\n", base[i] );
			else
				mkdata( nultrans[i] );
			}

		dataend();
		}

	if ( ddebug )
		{ /* Spit out table mapping rules to line numbers. */
		if ( ! C_plus_plus )
			{
			indent_puts( "extern int yy_flex_debug;" );
			indent_puts( "int yy_flex_debug = 1;\n" );
			}

		out_str_dec( long_align ? C_long_decl : C_short_decl,
			"yy_rule_linenum", num_rules );
		for ( i = 1; i < num_rules; ++i )
			mkdata( rule_linenum[i] );
		dataend();
		}

	if ( reject )
		{
		/* Declare state buffer variables. */
		if ( ! C_plus_plus )
			{
			outn(
	"static yy_state_type yy_state_buf[YY_BUF_SIZE + 2], *yy_state_ptr;" );
			outn( "static char *yy_full_match;" );
			outn( "static int yy_lp;" );
			}

		if ( variable_trailing_context_rules )
			{
			if ( ! C_plus_plus )
				{
				outn(
				"static int yy_looking_for_trail_begin = 0;" );
				outn( "static int yy_full_lp;" );
				outn( "static int *yy_full_state;" );
				}

			out_hex( "#define YY_TRAILING_MASK 0x%x\n",
				(unsigned int) YY_TRAILING_MASK );
			out_hex( "#define YY_TRAILING_HEAD_MASK 0x%x\n",
				(unsigned int) YY_TRAILING_HEAD_MASK );
			}

		outn( "#define REJECT \\" );
		outn( "{ \\" );		/* } for vi */
		outn(
	"*yy_cp = yy_hold_char; /* undo effects of setting up yytext */ \\" );
		outn(
	"yy_cp = yy_full_match; /* restore poss. backed-over text */ \\" );

		if ( variable_trailing_context_rules )
			{
			outn(
		"yy_lp = yy_full_lp; /* restore orig. accepting pos. */ \\" );
			outn(
		"yy_state_ptr = yy_full_state; /* restore orig. state */ \\" );
			outn(
	"yy_current_state = *yy_state_ptr; /* restore curr. state */ \\" );
			}

		outn( "++yy_lp; \\" );
		outn( "goto find_rule; \\" );
		/* { for vi */
		outn( "}" );
		}

	else
		{
		outn(
		"/* The intent behind this definition is that it'll catch" );
		outn( " * any uses of REJECT which flex missed." );
		outn( " */" );
		outn( "#define REJECT reject_used_but_not_detected" );
		}

	if ( yymore_used )
		{
		if ( ! C_plus_plus )
			{
#ifndef F_HD_5

#else
				indent_puts( "static int yy_more_flag = 0;" );
#endif
			if ( yytext_is_array )
				{
				indent_puts( "static int yy_more_offset = 0;" );
				indent_puts(
					"static int yy_prev_more_offset = 0;" );
				}
			else
				{
				indent_puts( "static int yy_more_flag = 0;" );
				indent_puts( "static int yy_more_len = 0;" );
				}
			}
#ifndef F_JR_3
		if ( yytext_is_array )
#else
        if ( ! yytext_is_array )
#endif
			{
			indent_puts(
	"#define yymore() (yy_more_offset = yy_flex_strlen( yytext ))" );
			indent_puts( "#define YY_NEED_STRLEN" );
			indent_puts( "#define YY_MORE_ADJ 0" );
			indent_puts( "#define YY_RESTORE_YY_MORE_OFFSET \\" );
			indent_up();
			indent_puts( "{ \\" );
			indent_puts( "yy_more_offset = yy_prev_more_offset; \\" );
			indent_puts( "yyleng -= yy_more_offset; \\" );
			indent_puts( "}" );
			indent_down();
			}
		else
			{
			indent_puts( "#define yymore() (yy_more_flag = 1)" );
			indent_puts( "#define YY_MORE_ADJ yy_more_len" );
			indent_puts( "#define YY_RESTORE_YY_MORE_OFFSET" );
			}
		}

	else
		{
		indent_puts( "#define yymore() yymore_used_but_not_detected" );
		indent_puts( "#define YY_MORE_ADJ 0" );
#ifndef F_AA_7
		indent_puts( "#define YY_RESTORE_YY_MORE_OFFSET" );
#else

#endif
		}

	if ( ! C_plus_plus )
		{
		if ( yytext_is_array )
			{
			outn( "#ifndef YYLMAX" );
			outn( "#define YYLMAX 8192" );
			outn( "#endif\n" );
			outn( "char yytext[YYLMAX];" );
			outn( "char *yytext_ptr;" );
			}

		else
			outn( "char *yytext;" );
		}

	out( &action_array[defs1_offset] );

	line_directive_out( stdout, 0 );

	skelout();

	if ( ! C_plus_plus )
		{
		if ( use_read )
			{
			outn(
"\tif ( (result = read( fileno(yyin), (char *) buf, max_size )) < 0 ) \\" );
			outn(
		"\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" );" );
			}

		else
			{
			outn(
			"\tif ( yy_current_buffer->yy_is_interactive ) \\" );
			outn( "\t\t{ \\" );
			outn( "\t\tint c = '*', n; \\" );
			outn( "\t\tfor ( n = 0; n < max_size && \\" );
	outn( "\t\t\t     (c = getc( yyin )) != EOF && c != '\\n'; ++n ) \\" );
			outn( "\t\t\tbuf[n] = (char) c; \\" );
			outn( "\t\tif ( c == '\\n' ) \\" );
#ifndef F_JR_4
            outn( "\t\t\tbuf[n++] = (char) c; \\" );
#else
			outn( "\t\t\buf[n++] = (char) c; \\" );
#endif
			outn( "\t\tif ( c == EOF && ferror( yyin ) ) \\" );
			outn(
	"\t\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" ); \\" );
			outn( "\t\tresult = n; \\" );
			outn( "\t\t} \\" );
			outn(
	"\telse if ( ((result = fread( buf, 1, max_size, yyin )) == 0) \\" );
			outn( "\t\t  && ferror( yyin ) ) \\" );
			outn(
		"\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" );" );
			}
		}

	skelout();

	indent_puts( "#define YY_RULE_SETUP \\" );
	indent_up();
	if ( bol_needed )
		{
		indent_puts( "if ( yyleng > 0 ) \\" );
		indent_up();
		indent_puts( "yy_current_buffer->yy_at_bol = \\" );
		indent_puts( "\t\t(yytext[yyleng - 1] == '\\n'); \\" );
		indent_down();
		}
	indent_puts( "YY_USER_ACTION" );
	indent_down();

	skelout();

	/* Copy prolog to output file. */
	out( &action_array[prolog_offset] );

	line_directive_out( stdout, 0 );

	skelout();

	set_indent( 2 );

#ifndef F_AA_3
	if ( yymore_used && ! yytext_is_array )
#else
	if ( yymore_used || yytext_is_array )
#endif
		{
		indent_puts( "yy_more_len = 0;" );
		indent_puts( "if ( yy_more_flag )" );
		indent_up();
		indent_puts( "{" );
		indent_puts( "yy_more_len = yy_c_buf_p - yytext_ptr;" );
		indent_puts( "yy_more_flag = 0;" );
		indent_puts( "}" );
		indent_down();
		}

	skelout();

	gen_start_state();

	/* Note, don't use any indentation. */
	outn( "yy_match:" );
	gen_next_match();

	skelout();
	set_indent( 2 );
	gen_find_action();

	skelout();
	if ( do_yylineno )
		{
		indent_puts( "if ( yy_act != YY_END_OF_BUFFER )" );
		indent_up();
		indent_puts( "{" );
		indent_puts( "int yyl;" );
		indent_puts( "for ( yyl = 0; yyl < yyleng; ++yyl )" );
		indent_up();
		indent_puts( "if ( yytext[yyl] == '\\n' )" );
		indent_up();
		indent_puts( "++yylineno;" );
		indent_down();
		indent_down();
		indent_puts( "}" );
		indent_down();
		}

	skelout();
	if ( ddebug )
		{
		indent_puts( "if ( yy_flex_debug )" );
		indent_up();

		indent_puts( "{" );
		indent_puts( "if ( yy_act == 0 )" );
		indent_up();
		indent_puts( C_plus_plus ?
			"cerr << \"--scanner backing up\\n\";" :
			"fprintf( err, \"--scanner backing up\\n\" );" );
		indent_down();

		do_indent();
		out_dec( "else if ( yy_act < %d )\n", num_rules );
		indent_up();

		if ( C_plus_plus )
			{
			indent_puts(
	"cerr << \"--accepting rule at line \" << yy_rule_linenum[yy_act] <<" );
			indent_puts(
			"         \"(\\\"\" << yytext << \"\\\")\\n\";" );
			}
		else
			{
			indent_puts(
	"fprintf( err, \"--accepting rule at line %d (\\\"%s\\\")\\n\"," );

			indent_puts(
				"         yy_rule_linenum[yy_act], yytext );" );
			}

		indent_down();

		do_indent();
		out_dec( "else if ( yy_act == %d )\n", num_rules );
		indent_up();

		if ( C_plus_plus )
			{
			indent_puts(
"cerr << \"--accepting default rule (\\\"\" << yytext << \"\\\")\\n\";" );
			}
		else
			{
			indent_puts(
	"fprintf( err, \"--accepting default rule (\\\"%s\\\")\\n\"," );
			indent_puts( "         yytext );" );
			}

		indent_down();

		do_indent();
		out_dec( "else if ( yy_act == %d )\n", num_rules + 1 );
		indent_up();

		indent_puts( C_plus_plus ?
			"cerr << \"--(end of buffer or a NUL)\\n\";" :
		"fprintf( err, \"--(end of buffer or a NUL)\\n\" );" );

		indent_down();

		do_indent();
		outn( "else" );
		indent_up();

		if ( C_plus_plus )
			{
			indent_puts(
	"cerr << \"--EOF (start condition \" << YY_START << \")\\n\";" );
			}
		else
			{
			indent_puts(
	"fprintf( err, \"--EOF (start condition %d)\\n\", YY_START );" );
			}

		indent_down();

		indent_puts( "}" );
		indent_down();
		}

	/* Copy actions to output file. */
	skelout();
	indent_up();
	gen_bu_action();
	out( &action_array[action_offset] );

	line_directive_out( stdout, 0 );

	/* generate cases for any missing EOF rules */
	for ( i = 1; i <= lastsc; ++i )
		if ( ! sceof[i] )
			{
			do_indent();
			out_str( "case YY_STATE_EOF(%s):\n", scname[i] );
			did_eof_rule = true;
			}

	if ( did_eof_rule )
		{
		indent_up();
		indent_puts( "yyterminate();" );
		indent_down();
		}


	/* Generate code for handling NUL's, if needed. */

	/* First, deal with backing up and setting up yy_cp if the scanner
	 * finds that it should JAM on the NUL.
	 */
	skelout();
	set_indent( 4 );

	if ( fullspd || fulltbl )
		indent_puts( "yy_cp = yy_c_buf_p;" );

	else
		{ /* compressed table */
		if ( ! reject && ! interactive )
			{
			/* Do the guaranteed-needed backing up to figure
			 * out the match.
			 */
			indent_puts( "yy_cp = yy_last_accepting_cpos;" );
			indent_puts(
				"yy_current_state = yy_last_accepting_state;" );
			}

		else
			/* Still need to initialize yy_cp, though
			 * yy_current_state was set up by
			 * yy_get_previous_state().
			 */
			indent_puts( "yy_cp = yy_c_buf_p;" );
		}


	/* Generate code for yy_get_previous_state(). */
	set_indent( 1 );
	skelout();

	gen_start_state();

	set_indent( 2 );
	skelout();
	gen_next_state( true );

	set_indent( 1 );
	skelout();
	gen_NUL_trans();

	skelout();
	if ( do_yylineno )
		{ /* update yylineno inside of unput() */
		indent_puts( "if ( c == '\\n' )" );
		indent_up();
		indent_puts( "--yylineno;" );
		indent_down();
		}

	skelout();
	/* Update BOL and yylineno inside of input(). */
	if ( bol_needed )
		{
		indent_puts( "yy_current_buffer->yy_at_bol = (c == '\\n');" );
		if ( do_yylineno )
			{
			indent_puts( "if ( yy_current_buffer->yy_at_bol )" );
			indent_up();
			indent_puts( "++yylineno;" );
			indent_down();
			}
		}

	else if ( do_yylineno )
		{
		indent_puts( "if ( c == '\\n' )" );
		indent_up();
		indent_puts( "++yylineno;" );
		indent_down();
		}

	skelout();

	/* Copy remainder of input to output. */

	line_directive_out( stdout, 1 );

	if ( sectnum == 3 )
		(void) flexscan(); /* copy remainder of input to output */
	}
/* misc - miscellaneous flex routines */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */



void action_define( defname, value )
char *defname;
int value;
	{
	char buf[MAXLINE];

	if ( (int) strlen( defname ) > MAXLINE / 2 )
		{
		format_pinpoint_message( _( "name \"%s\" ridiculously long" ), 
			defname );
		return;
		}

	sprintf( buf, "#define %s %d\n", defname, value );
	add_action( buf );
	}


void add_action( new_text )
char *new_text;
	{
	int len = strlen( new_text );

	while ( len + action_index >= action_size - 10 /* slop */ )
		{
		int new_size = action_size * 2;

		if ( new_size <= 0 )
			/* Increase just a little, to try to avoid overflow
			 * on 16-bit machines.
			 */
			action_size += action_size / 8;
		else
			action_size = new_size;

		action_array =
			reallocate_character_array( action_array, action_size );
		}

	strcpy( &action_array[action_index], new_text );

	action_index += len;
	}


/* allocate_array - allocate memory for an integer array of the given size */

void *allocate_array( size, element_size )
int size;
size_t element_size;
	{
	register void *mem;
	size_t num_bytes = element_size * size;

	mem = flex_alloc( num_bytes );
	if ( ! mem )
		flexfatal(
			_( "memory allocation failed in allocate_array()" ) );

	return mem;
	}


/* all_lower - true if a string is all lower-case */

int all_lower( str )
register char *str;
	{
	while ( *str )
		{
		if ( ! isascii( (Char) *str ) || ! islower( *str ) )
			return 0;
		++str;
		}

	return 1;
	}


/* all_upper - true if a string is all upper-case */

int all_upper( str )
register char *str;
	{
	while ( *str )
		{
		if ( ! isascii( (Char) *str ) || ! isupper( *str ) )
			return 0;
		++str;
		}

	return 1;
	}


/* bubble - bubble sort an integer array in increasing order
 *
 * synopsis
 *   int v[n], n;
 *   void bubble( v, n );
 *
 * description
 *   sorts the first n elements of array v and replaces them in
 *   increasing order.
 *
 * passed
 *   v - the array to be sorted
 *   n - the number of elements of 'v' to be sorted
 */

void bubble( v, n )
int v[], n;
	{
	register int i, j, k;

	for ( i = n; i > 1; --i )
		for ( j = 1; j < i; ++j )
			if ( v[j] > v[j + 1] )	/* compare */
				{
				k = v[j];	/* exchange */
				v[j] = v[j + 1];
				v[j + 1] = k;
				}
	}


/* check_char - checks a character to make sure it's within the range
 *		we're expecting.  If not, generates fatal error message
 *		and exits.
 */

void check_char( c )
int c;
	{
	if ( c >= CSIZE )
		lerrsf( _( "bad character '%s' detected in check_char()" ),
			readable_form( c ) );

	if ( c >= csize )
		lerrsf(
		_( "scanner requires -8 flag to use the character %s" ),
			readable_form( c ) );
	}



/* clower - replace upper-case letter to lower-case */

Char clower( c )
register int c;
	{
	return (Char) ((isascii( c ) && isupper( c )) ? tolower( c ) : c);
	}


/* copy_string - returns a dynamically allocated copy of a string */

char *copy_string( str )
register const char *str;
	{
	register const char *c1;
	register char *c2;
	char *copy;
	unsigned int size;

	/* find length */
	for ( c1 = str; *c1; ++c1 )
		;

	size = (c1 - str + 1) * sizeof( char );
	copy = (char *) flex_alloc( size );

	if ( copy == NULL )
		flexfatal( _( "dynamic memory failure in copy_string()" ) );

	for ( c2 = copy; (*c2++ = *str++) != 0; )
		;

	return copy;
	}


/* copy_unsigned_string -
 *    returns a dynamically allocated copy of a (potentially) unsigned string
 */

Char *copy_unsigned_string( str )
register Char *str;
	{
	register Char *c;
	Char *copy;

	/* find length */
	for ( c = str; *c; ++c )
		;

	copy = allocate_Character_array( c - str + 1 );

	for ( c = copy; (*c++ = *str++) != 0; )
		;

	return copy;
	}


/* cshell - shell sort a character array in increasing order
 *
 * synopsis
 *
 *   Char v[n];
 *   int n, special_case_0;
 *   cshell( v, n, special_case_0 );
 *
 * description
 *   Does a shell sort of the first n elements of array v.
 *   If special_case_0 is true, then any element equal to 0
 *   is instead assumed to have infinite weight.
 *
 * passed
 *   v - array to be sorted
 *   n - number of elements of v to be sorted
 */

void cshell( v, n, special_case_0 )
Char v[];
int n, special_case_0;
	{
	int gap, i, j, jg;
	Char k;

	for ( gap = n / 2; gap > 0; gap = gap / 2 )
		for ( i = gap; i < n; ++i )
			for ( j = i - gap; j >= 0; j = j - gap )
				{
				jg = j + gap;

				if ( special_case_0 )
					{
					if ( v[jg] == 0 )
						break;

					else if ( v[j] != 0 && v[j] <= v[jg] )
						break;
					}

				else if ( v[j] <= v[jg] )
					break;

				k = v[j];
				v[j] = v[jg];
				v[jg] = k;
				}
	}


/* dataend - finish up a block of data declarations */

void dataend()
	{
	if ( datapos > 0 )
		dataflush();

	/* add terminator for initialization; { for vi */
	outn( "    } ;\n" );

	dataline = 0;
	datapos = 0;
	}


/* dataflush - flush generated data statements */

void dataflush()
	{
	outc( '\n' );

	if ( ++dataline >= NUMDATALINES )
		{
		/* Put out a blank line so that the table is grouped into
		 * large blocks that enable the user to find elements easily.
		 */
		outc( '\n' );
		dataline = 0;
		}

	/* Reset the number of characters written on the current line. */
	datapos = 0;
	}


/* flexerror - report an error message and terminate */

void flexerror( msg )
const char msg[];
	{
	fprintf( err, "%s: %s\n", program_name, msg );
	flexend( 1 );
	}


/* flexfatal - report a fatal error message and terminate */

void flexfatal( msg )
const char msg[];
	{
	fprintf( err, _( "%s: fatal internal error, %s\n" ),
		program_name, msg );
	exit( 1 );
	}


/* htoi - convert a hexadecimal digit string to an integer value */

int htoi( str )
Char str[];
	{
	unsigned int result;

	(void) sscanf( (char *) str, "%x", &result );

	return result;
	}


/* lerrif - report an error message formatted with one integer argument */

void lerrif( msg, arg )
const char msg[];
int arg;
	{
	char errmsg[MAXLINE];
	(void) sprintf( errmsg, msg, arg );
	flexerror( errmsg );
	}


/* lerrsf - report an error message formatted with one string argument */

void lerrsf( msg, arg )
const char msg[], arg[];
	{
	char errmsg[MAXLINE];

	(void) sprintf( errmsg, msg, arg );
	flexerror( errmsg );
	}


/* line_directive_out - spit out a "#line" statement */

void line_directive_out( output_file, do_infile )
FILE *output_file;
int do_infile;
	{
	char directive[MAXLINE], filename[MAXLINE];
	char *s1, *s2, *s3;
	static char line_fmt[] = "#line %d \"%s\"\n";

	if ( ! gen_line_dirs )
		return;

	if ( (do_infile && ! infilename) || (! do_infile && ! outfilename) )
		/* don't know the filename to use, skip */
		return;

	s1 = do_infile ? infilename : outfilename;
	s2 = filename;
	s3 = &filename[sizeof( filename ) - 2];

	while ( s2 < s3 && *s1 )
		{
		if ( *s1 == '\\' )
			/* Escape the '\' */
			*s2++ = '\\';

		*s2++ = *s1++;
		}

	*s2 = '\0';

	if ( do_infile )
		sprintf( directive, line_fmt, linenum, filename );
	else
		{
		if ( output_file == stdout )
			/* Account for the line directive itself. */
			++out_linenum;

		sprintf( directive, line_fmt, out_linenum, filename );
		}

	/* If output_file is nil then we should put the directive in
	 * the accumulated actions.
	 */
	if ( output_file )
		{
		fputs( directive, output_file );
		}
	else
		add_action( directive );
	}


/* mark_defs1 - mark the current position in the action array as
 *               representing where the user's section 1 definitions end
 *		 and the prolog begins
 */
void mark_defs1()
	{
	defs1_offset = 0;
	action_array[action_index++] = '\0';
	action_offset = prolog_offset = action_index;
	action_array[action_index] = '\0';
	}


/* mark_prolog - mark the current position in the action array as
 *               representing the end of the action prolog
 */
void mark_prolog()
	{
	action_array[action_index++] = '\0';
	action_offset = action_index;
	action_array[action_index] = '\0';
	}


/* mk2data - generate a data statement for a two-dimensional array
 *
 * Generates a data statement initializing the current 2-D array to "value".
 */
void mk2data( value )
int value;
	{
	if ( datapos >= NUMDATAITEMS )
		{
		outc( ',' );
		dataflush();
		}

	if ( datapos == 0 )
		/* Indent. */
		out( "    " );

	else
		outc( ',' );

	++datapos;

	out_dec( "%5d", value );
	}


/* mkdata - generate a data statement
 *
 * Generates a data statement initializing the current array element to
 * "value".
 */
void mkdata( value )
int value;
	{
	if ( datapos >= NUMDATAITEMS )
		{
		outc( ',' );
		dataflush();
		}

	if ( datapos == 0 )
		/* Indent. */
		out( "    " );
	else
		outc( ',' );

	++datapos;

	out_dec( "%5d", value );
	}


/* myctoi - return the integer represented by a string of digits */

int myctoi( array )
char array[];
	{
	int val = 0;

	(void) sscanf( array, "%d", &val );

	return val;
	}


/* myesc - return character corresponding to escape sequence */

Char myesc( array )
Char array[];
	{
	Char c, esc_char;

	switch ( array[1] )
		{
		case 'b': return '\b';
		case 'f': return '\f';
		case 'n': return '\n';
		case 'r': return '\r';
		case 't': return '\t';

#if __STDC__
		case 'a': return '\a';
		case 'v': return '\v';
#else
		case 'a': return '\007';
		case 'v': return '\013';
#endif

		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
			{ /* \<octal> */
			int sptr = 1;

			while ( isascii( array[sptr] ) &&
				isdigit( array[sptr] ) )
				/* Don't increment inside loop control
				 * because if isdigit() is a macro it might
				 * expand into multiple increments ...
				 */
				++sptr;

			c = array[sptr];
			array[sptr] = '\0';

			esc_char = otoi( array + 1 );

			array[sptr] = c;

			return esc_char;
			}

		case 'x':
			{ /* \x<hex> */
			int sptr = 2;

			while ( isascii( array[sptr] ) &&
				isxdigit( (char) array[sptr] ) )
				/* Don't increment inside loop control
				 * because if isdigit() is a macro it might
				 * expand into multiple increments ...
				 */
				++sptr;

			c = array[sptr];
			array[sptr] = '\0';

			esc_char = htoi( array + 2 );

			array[sptr] = c;

			return esc_char;
			}

		default:
			return array[1];
		}
	}


/* otoi - convert an octal digit string to an integer value */

int otoi( str )
Char str[];
	{
	unsigned int result;

	(void) sscanf( (char *) str, "%o", &result );
	return result;
	}


/* out - various flavors of outputing a (possibly formatted) string for the
 *	 generated scanner, keeping track of the line count.
 */

void out( str )
const char str[];
	{
	fputs( str, stdout );
	out_line_count( str );
	}

void out_dec( fmt, n )
const char fmt[];
int n;
	{
	printf( fmt, n );
	out_line_count( fmt );
	}

void out_dec2( fmt, n1, n2 )
const char fmt[];
int n1, n2;
	{
	printf( fmt, n1, n2 );
	out_line_count( fmt );
	}

void out_hex( fmt, x )
const char fmt[];
unsigned int x;
	{
	printf( fmt, x );
	out_line_count( fmt );
	}

void out_line_count( str )
const char str[];
	{
	register int i;

	for ( i = 0; str[i]; ++i )
		if ( str[i] == '\n' )
			++out_linenum;
	}

void out_str( fmt, str )
const char fmt[], str[];
	{
	printf( fmt, str );
	out_line_count( fmt );
	out_line_count( str );
	}

void out_str3( fmt, s1, s2, s3 )
const char fmt[], s1[], s2[], s3[];
	{
	printf( fmt, s1, s2, s3 );
	out_line_count( fmt );
	out_line_count( s1 );
	out_line_count( s2 );
	out_line_count( s3 );
	}

void out_str_dec( fmt, str, n )
const char fmt[], str[];
int n;
	{
	printf( fmt, str, n );
	out_line_count( fmt );
	out_line_count( str );
	}

void outc( c )
int c;
	{
	putc( c, stdout );

	if ( c == '\n' )
		++out_linenum;
	}

void outn( str )
const char str[];
	{
	puts( str );
	out_line_count( str );
	++out_linenum;
	}


/* readable_form - return the the human-readable form of a character
 *
 * The returned string is in static storage.
 */

char *readable_form( c )
register int c;
	{
	static char rform[10];

	if ( (c >= 0 && c < 32) || c >= 127 )
		{
		switch ( c )
			{
			case '\b': return "\\b";
			case '\f': return "\\f";
			case '\n': return "\\n";
			case '\r': return "\\r";
			case '\t': return "\\t";

#if __STDC__
			case '\a': return "\\a";
			case '\v': return "\\v";
#endif

			default:
				(void) sprintf( rform, "\\%.3o",
						(unsigned int) c );
				return rform;
			}
		}

	else if ( c == ' ' )
		return "' '";

	else
		{
		rform[0] = c;
		rform[1] = '\0';

		return rform;
		}
	}


/* reallocate_array - increase the size of a dynamic array */

void *reallocate_array( array, size, element_size )
void *array;
int size;
size_t element_size;
	{
	register void *new_array;
	size_t num_bytes = element_size * size;

	new_array = flex_realloc( array, num_bytes );
	if ( ! new_array )
		flexfatal( _( "attempt to increase array size failed" ) );

	return new_array;
	}


/* skelout - write out one section of the skeleton file
 *
 * Description
 *    Copies skelfile or skel array to stdout until a line beginning with
 *    "%%" or EOF is found.
 */
void skelout()
	{
	char buf_storage[MAXLINE];
	char *buf = buf_storage;
	int do_copy = 1;

	/* Loop pulling lines either from the skelfile, if we're using
	 * one, or from the skel[] array.
	 */
	while ( skelfile ?
		(fgets( buf, MAXLINE, skelfile ) != NULL) :
		((buf = (char *) skel[skel_ind++]) != 0) )
		{ /* copy from skel array */
		if ( buf[0] == '%' )
			{ /* control line */
			switch ( buf[1] )
				{
				case '%':
					return;

				case '+':
					do_copy = C_plus_plus;
					break;

				case '-':
					do_copy = ! C_plus_plus;
					break;

				case '*':
					do_copy = 1;
					break;

				default:
					flexfatal(
					_( "bad line in skeleton file" ) );
				}
			}

		else if ( do_copy )
			{
			if ( skelfile )
				/* Skeleton file reads include final
				 * newline, skel[] array does not.
				 */
				out( buf );
			else
				outn( buf );
			}
		}
	}


/* transition_struct_out - output a yy_trans_info structure
 *
 * outputs the yy_trans_info structure with the two elements, element_v and
 * element_n.  Formats the output with spaces and carriage returns.
 */

void transition_struct_out( element_v, element_n )
int element_v, element_n;
	{
	out_dec2( " {%4d,%4d },", element_v, element_n );

	datapos += TRANS_STRUCT_PRINT_LENGTH;

	if ( datapos >= 79 - TRANS_STRUCT_PRINT_LENGTH )
		{
		outc( '\n' );

		if ( ++dataline % 10 == 0 )
			outc( '\n' );

		datapos = 0;
		}
	}


/* The following is only needed when building flex's parser using certain
 * broken versions of bison.
 */
void *yy_flex_xmalloc( size )
int size;
	{
	void *result = flex_alloc( (size_t) size );

	if ( ! result  )
		flexfatal(
			_( "memory allocation failed in yy_flex_xmalloc()" ) );

	return result;
	}


/* zero_out - set a region of memory to 0
 *
 * Sets region_ptr[0] through region_ptr[size_in_bytes - 1] to zero.
 */

void zero_out( region_ptr, size_in_bytes )
char *region_ptr;
size_t size_in_bytes;
	{
	register char *rp, *rp_end;

	rp = region_ptr;
	rp_end = region_ptr + size_in_bytes;

	while ( rp < rp_end )
		*rp++ = 0;
	}
/* nfa - NFA construction routines */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */



/* declare functions that have forward references */

int dupmachine PROTO((int));
void mkxtion PROTO((int, int));


/* add_accept - add an accepting state to a machine
 *
 * accepting_number becomes mach's accepting number.
 */

void add_accept( mach, accepting_number )
int mach, accepting_number;
	{
	/* Hang the accepting number off an epsilon state.  if it is associated
	 * with a state that has a non-epsilon out-transition, then the state
	 * will accept BEFORE it makes that transition, i.e., one character
	 * too soon.
	 */

	if ( transchar[finalst[mach]] == SYM_EPSILON )
		accptnum[finalst[mach]] = accepting_number;

	else
		{
		int astate = mkstate( SYM_EPSILON );
		accptnum[astate] = accepting_number;
		(void) link_machines( mach, astate );
		}
	}


/* copysingl - make a given number of copies of a singleton machine
 *
 * synopsis
 *
 *   newsng = copysingl( singl, num );
 *
 *     newsng - a new singleton composed of num copies of singl
 *     singl  - a singleton machine
 *     num    - the number of copies of singl to be present in newsng
 */

int copysingl( singl, num )
int singl, num;
	{
	int copy, i;

	copy = mkstate( SYM_EPSILON );

	for ( i = 1; i <= num; ++i )
		copy = link_machines( copy, dupmachine( singl ) );

	return copy;
	}


/* dumpnfa - debugging routine to write out an nfa */

void dumpnfa( state1 )
int state1;

	{
	int sym, tsp1, tsp2, anum, ns;

	fprintf( err,
	_( "\n\n********** beginning dump of nfa with start state %d\n" ),
		state1 );

	/* We probably should loop starting at firstst[state1] and going to
	 * lastst[state1], but they're not maintained properly when we "or"
	 * all of the rules together.  So we use our knowledge that the machine
	 * starts at state 1 and ends at lastnfa.
	 */

	/* for ( ns = firstst[state1]; ns <= lastst[state1]; ++ns ) */
	for ( ns = 1; ns <= lastnfa; ++ns )
		{
		fprintf( err, _( "state # %4d\t" ), ns );

		sym = transchar[ns];
		tsp1 = trans1[ns];
		tsp2 = trans2[ns];
		anum = accptnum[ns];

		fprintf( err, "%3d:  %4d, %4d", sym, tsp1, tsp2 );

		if ( anum != NIL )
			fprintf( err, "  [%d]", anum );

		fprintf( err, "\n" );
		}

	fprintf( err, _( "********** end of dump\n" ) );
	}


/* dupmachine - make a duplicate of a given machine
 *
 * synopsis
 *
 *   copy = dupmachine( mach );
 *
 *     copy - holds duplicate of mach
 *     mach - machine to be duplicated
 *
 * note that the copy of mach is NOT an exact duplicate; rather, all the
 * transition states values are adjusted so that the copy is self-contained,
 * as the original should have been.
 *
 * also note that the original MUST be contiguous, with its low and high
 * states accessible by the arrays firstst and lastst
 */

int dupmachine( mach )
int mach;
	{
	int i, init, state_offset;
	int state = 0;
	int last = lastst[mach];

	for ( i = firstst[mach]; i <= last; ++i )
		{
		state = mkstate( transchar[i] );

		if ( trans1[i] != NO_TRANSITION )
			{
			mkxtion( finalst[state], trans1[i] + state - i );

			if ( transchar[i] == SYM_EPSILON &&
			     trans2[i] != NO_TRANSITION )
				mkxtion( finalst[state],
					trans2[i] + state - i );
			}

		accptnum[state] = accptnum[i];
		}

	if ( state == 0 )
		flexfatal( _( "empty machine in dupmachine()" ) );

	state_offset = state - i + 1;

	init = mach + state_offset;
	firstst[init] = firstst[mach] + state_offset;
	finalst[init] = finalst[mach] + state_offset;
	lastst[init] = lastst[mach] + state_offset;

	return init;
	}


/* finish_rule - finish up the processing for a rule
 *
 * An accepting number is added to the given machine.  If variable_trail_rule
 * is true then the rule has trailing context and both the head and trail
 * are variable size.  Otherwise if headcnt or trailcnt is non-zero then
 * the machine recognizes a pattern with trailing context and headcnt is
 * the number of characters in the matched part of the pattern, or zero
 * if the matched part has variable length.  trailcnt is the number of
 * trailing context characters in the pattern, or zero if the trailing
 * context has variable length.
 */

void finish_rule( mach, variable_trail_rule, headcnt, trailcnt )
int mach, variable_trail_rule, headcnt, trailcnt;
	{
	char action_text[MAXLINE];

	add_accept( mach, num_rules );

	/* We did this in new_rule(), but it often gets the wrong
	 * number because we do it before we start parsing the current rule.
	 */
	rule_linenum[num_rules] = linenum;

	/* If this is a continued action, then the line-number has already
	 * been updated, giving us the wrong number.
	 */
	if ( continued_action )
		--rule_linenum[num_rules];

	sprintf( action_text, "case %d:\n", num_rules );
	add_action( action_text );

	if ( variable_trail_rule )
		{
		rule_type[num_rules] = RULE_VARIABLE;

		if ( performance_report > 0 )
			fprintf( err,
			_( "Variable trailing context rule at line %d\n" ),
				rule_linenum[num_rules] );

		variable_trailing_context_rules = true;
		}

	else
		{
		rule_type[num_rules] = RULE_NORMAL;

		if ( headcnt > 0 || trailcnt > 0 )
			{
			/* Do trailing context magic to not match the trailing
			 * characters.
			 */
			char *scanner_cp = "yy_c_buf_p = yy_cp";
			char *scanner_bp = "yy_bp";

			add_action(
	"*yy_cp = yy_hold_char; /* undo effects of setting up yytext */\n" );

			if ( headcnt > 0 )
				{
				sprintf( action_text, "%s = %s + %d;\n",
				scanner_cp, scanner_bp, headcnt );
				add_action( action_text );
				}

			else
				{
				sprintf( action_text, "%s -= %d;\n",
					scanner_cp, trailcnt );
				add_action( action_text );
				}

			add_action(
			"YY_DO_BEFORE_ACTION; /* set up yytext again */\n" );
			}
		}

	/* Okay, in the action code at this point yytext and yyleng have
	 * their proper final values for this rule, so here's the point
	 * to do any user action.  But don't do it for continued actions,
	 * as that'll result in multiple YY_RULE_SETUP's.
	 */
	if ( ! continued_action )
		add_action( "YY_RULE_SETUP\n" );

	line_directive_out( (FILE *) 0, 1 );
	}


/* link_machines - connect two machines together
 *
 * synopsis
 *
 *   new = link_machines( first, last );
 *
 *     new    - a machine constructed by connecting first to last
 *     first  - the machine whose successor is to be last
 *     last   - the machine whose predecessor is to be first
 *
 * note: this routine concatenates the machine first with the machine
 *  last to produce a machine new which will pattern-match first first
 *  and then last, and will fail if either of the sub-patterns fails.
 *  FIRST is set to new by the operation.  last is unmolested.
 */

int link_machines( first, last )
int first, last;
	{
	if ( first == NIL )
		return last;

	else if ( last == NIL )
		return first;

	else
		{
		mkxtion( finalst[first], last );
		finalst[first] = finalst[last];
		lastst[first] = MAX( lastst[first], lastst[last] );
		firstst[first] = MIN( firstst[first], firstst[last] );

		return first;
		}
	}


/* mark_beginning_as_normal - mark each "beginning" state in a machine
 *                            as being a "normal" (i.e., not trailing context-
 *                            associated) states
 *
 * The "beginning" states are the epsilon closure of the first state
 */

void mark_beginning_as_normal( mach )
register int mach;
	{
	switch ( state_type[mach] )
		{
		case STATE_NORMAL:
			/* Oh, we've already visited here. */
			return;

		case STATE_TRAILING_CONTEXT:
			state_type[mach] = STATE_NORMAL;

			if ( transchar[mach] == SYM_EPSILON )
				{
				if ( trans1[mach] != NO_TRANSITION )
					mark_beginning_as_normal(
						trans1[mach] );

				if ( trans2[mach] != NO_TRANSITION )
					mark_beginning_as_normal(
						trans2[mach] );
				}
			break;

		default:
			flexerror(
			_( "bad state type in mark_beginning_as_normal()" ) );
			break;
		}
	}


/* mkbranch - make a machine that branches to two machines
 *
 * synopsis
 *
 *   branch = mkbranch( first, second );
 *
 *     branch - a machine which matches either first's pattern or second's
 *     first, second - machines whose patterns are to be or'ed (the | operator)
 *
 * Note that first and second are NEITHER destroyed by the operation.  Also,
 * the resulting machine CANNOT be used with any other "mk" operation except
 * more mkbranch's.  Compare with mkor()
 */

int mkbranch( first, second )
int first, second;
	{
	int eps;

	if ( first == NO_TRANSITION )
		return second;

	else if ( second == NO_TRANSITION )
		return first;

	eps = mkstate( SYM_EPSILON );

	mkxtion( eps, first );
	mkxtion( eps, second );

	return eps;
	}


/* mkclos - convert a machine into a closure
 *
 * synopsis
 *   new = mkclos( state );
 *
 * new - a new state which matches the closure of "state"
 */

int mkclos( state )
int state;
	{
	return mkopt( mkposcl( state ) );
	}


/* mkopt - make a machine optional
 *
 * synopsis
 *
 *   new = mkopt( mach );
 *
 *     new  - a machine which optionally matches whatever mach matched
 *     mach - the machine to make optional
 *
 * notes:
 *     1. mach must be the last machine created
 *     2. mach is destroyed by the call
 */

int mkopt( mach )
int mach;
	{
	int eps;

	if ( ! SUPER_FREE_EPSILON(finalst[mach]) )
		{
		eps = mkstate( SYM_EPSILON );
		mach = link_machines( mach, eps );
		}

	/* Can't skimp on the following if FREE_EPSILON(mach) is true because
	 * some state interior to "mach" might point back to the beginning
	 * for a closure.
	 */
	eps = mkstate( SYM_EPSILON );
	mach = link_machines( eps, mach );

	mkxtion( mach, finalst[mach] );

	return mach;
	}


/* mkor - make a machine that matches either one of two machines
 *
 * synopsis
 *
 *   new = mkor( first, second );
 *
 *     new - a machine which matches either first's pattern or second's
 *     first, second - machines whose patterns are to be or'ed (the | operator)
 *
 * note that first and second are both destroyed by the operation
 * the code is rather convoluted because an attempt is made to minimize
 * the number of epsilon states needed
 */

int mkor( first, second )
int first, second;
	{
	int eps, orend;

	if ( first == NIL )
		return second;

	else if ( second == NIL )
		return first;

	else
		{
		/* See comment in mkopt() about why we can't use the first
		 * state of "first" or "second" if they satisfy "FREE_EPSILON".
		 */
		eps = mkstate( SYM_EPSILON );

		first = link_machines( eps, first );

		mkxtion( first, second );

		if ( SUPER_FREE_EPSILON(finalst[first]) &&
		     accptnum[finalst[first]] == NIL )
			{
			orend = finalst[first];
			mkxtion( finalst[second], orend );
			}

		else if ( SUPER_FREE_EPSILON(finalst[second]) &&
			  accptnum[finalst[second]] == NIL )
			{
			orend = finalst[second];
			mkxtion( finalst[first], orend );
			}

		else
			{
			eps = mkstate( SYM_EPSILON );

			first = link_machines( first, eps );
			orend = finalst[first];

			mkxtion( finalst[second], orend );
			}
		}

	finalst[first] = orend;
	return first;
	}


/* mkposcl - convert a machine into a positive closure
 *
 * synopsis
 *   new = mkposcl( state );
 *
 *    new - a machine matching the positive closure of "state"
 */

int mkposcl( state )
int state;
	{
	int eps;

	if ( SUPER_FREE_EPSILON(finalst[state]) )
		{
		mkxtion( finalst[state], state );
		return state;
		}

	else
		{
		eps = mkstate( SYM_EPSILON );
		mkxtion( eps, state );
		return link_machines( state, eps );
		}
	}


/* mkrep - make a replicated machine
 *
 * synopsis
 *   new = mkrep( mach, lb, ub );
 *
 *    new - a machine that matches whatever "mach" matched from "lb"
 *          number of times to "ub" number of times
 *
 * note
 *   if "ub" is INFINITY then "new" matches "lb" or more occurrences of "mach"
 */

int mkrep( mach, lb, ub )
int mach, lb, ub;
	{
	int base_mach, tail, copy, i;

	base_mach = copysingl( mach, lb - 1 );

	if ( ub == INFINITY )
		{
		copy = dupmachine( mach );
		mach = link_machines( mach,
		link_machines( base_mach, mkclos( copy ) ) );
		}

	else
		{
		tail = mkstate( SYM_EPSILON );

		for ( i = lb; i < ub; ++i )
			{
			copy = dupmachine( mach );
			tail = mkopt( link_machines( copy, tail ) );
			}

		mach = link_machines( mach, link_machines( base_mach, tail ) );
		}

	return mach;
	}


/* mkstate - create a state with a transition on a given symbol
 *
 * synopsis
 *
 *   state = mkstate( sym );
 *
 *     state - a new state matching sym
 *     sym   - the symbol the new state is to have an out-transition on
 *
 * note that this routine makes new states in ascending order through the
 * state array (and increments LASTNFA accordingly).  The routine DUPMACHINE
 * relies on machines being made in ascending order and that they are
 * CONTIGUOUS.  Change it and you will have to rewrite DUPMACHINE (kludge
 * that it admittedly is)
 */

int mkstate( sym )
int sym;
	{
	if ( ++lastnfa >= current_mns )
		{
		if ( (current_mns += MNS_INCREMENT) >= MAXIMUM_MNS )
			lerrif(
		_( "input rules are too complicated (>= %d NFA states)" ),
				current_mns );

		++num_reallocs;

		firstst = reallocate_integer_array( firstst, current_mns );
		lastst = reallocate_integer_array( lastst, current_mns );
		finalst = reallocate_integer_array( finalst, current_mns );
		transchar = reallocate_integer_array( transchar, current_mns );
		trans1 = reallocate_integer_array( trans1, current_mns );
		trans2 = reallocate_integer_array( trans2, current_mns );
		accptnum = reallocate_integer_array( accptnum, current_mns );
		assoc_rule =
			reallocate_integer_array( assoc_rule, current_mns );
		state_type =
			reallocate_integer_array( state_type, current_mns );
		}

	firstst[lastnfa] = lastnfa;
	finalst[lastnfa] = lastnfa;
	lastst[lastnfa] = lastnfa;
	transchar[lastnfa] = sym;
	trans1[lastnfa] = NO_TRANSITION;
	trans2[lastnfa] = NO_TRANSITION;
	accptnum[lastnfa] = NIL;
	assoc_rule[lastnfa] = num_rules;
	state_type[lastnfa] = current_state_type;

	/* Fix up equivalence classes base on this transition.  Note that any
	 * character which has its own transition gets its own equivalence
	 * class.  Thus only characters which are only in character classes
	 * have a chance at being in the same equivalence class.  E.g. "a|b"
	 * puts 'a' and 'b' into two different equivalence classes.  "[ab]"
	 * puts them in the same equivalence class (barring other differences
	 * elsewhere in the input).
	 */

	if ( sym < 0 )
		{
		/* We don't have to update the equivalence classes since
		 * that was already done when the ccl was created for the
		 * first time.
		 */
		}

	else if ( sym == SYM_EPSILON )
		++numeps;

	else
		{
		check_char( sym );

		if ( useecs )
			/* Map NUL's to csize. */
			mkechar( sym ? sym : csize, nextecm, ecgroup );
		}

	return lastnfa;
	}


/* mkxtion - make a transition from one state to another
 *
 * synopsis
 *
 *   mkxtion( statefrom, stateto );
 *
 *     statefrom - the state from which the transition is to be made
 *     stateto   - the state to which the transition is to be made
 */

void mkxtion( statefrom, stateto )
int statefrom, stateto;
	{
	if ( trans1[statefrom] == NO_TRANSITION )
		trans1[statefrom] = stateto;

	else if ( (transchar[statefrom] != SYM_EPSILON) ||
		  (trans2[statefrom] != NO_TRANSITION) )
		flexfatal( _( "found too many transitions in mkxtion()" ) );

	else
		{ /* second out-transition for an epsilon state */
		++eps2;
		trans2[statefrom] = stateto;
		}
	}

/* new_rule - initialize for a new rule */

void new_rule()
	{
	if ( ++num_rules >= current_max_rules )
		{
		++num_reallocs;
		current_max_rules += MAX_RULES_INCREMENT;
		rule_type = reallocate_integer_array( rule_type,
							current_max_rules );
		rule_linenum = reallocate_integer_array( rule_linenum,
							current_max_rules );
		rule_useful = reallocate_integer_array( rule_useful,
							current_max_rules );
		}

	if ( num_rules > MAX_RULE )
		lerrif( _( "too many rules (> %d)!" ), MAX_RULE );

	rule_linenum[num_rules] = linenum;
	rule_useful[num_rules] = false;
	}
/* File created from flex.skl via mkskel.sh */


const char *skel[] = {
  "/* A lexical scanner generated by flex */",
  "",
  "/* Scanner skeleton version:",
  " * $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $",
  " */",
  "",
  "#define FLEX_SCANNER",
  "#define YY_FLEX_MAJOR_VERSION 2",
  "#define YY_FLEX_MINOR_VERSION 5",
  "",
  "%-",
  "#include <stdio.h>",
  "%*",
  "",
  "",
  "/* cfront 1.2 defines \"c_plusplus\" instead of \"__cplusplus\" */",
  "#ifdef c_plusplus",
  "#ifndef __cplusplus",
  "#define __cplusplus",
  "#endif",
  "#endif",
  "",
  "",
  "#ifdef __cplusplus",
  "",
  "#include <stdlib.h>",
  "%+",
  "class istream;",
  "%*",
  "#include <unistd.h>",
  "",
  "/* Use prototypes in function declarations. */",
  "#define YY_USE_PROTOS",
  "",
  "/* The \"const\" storage-class-modifier is valid. */",
  "#define YY_USE_CONST",
  "",
  "#else	/* ! __cplusplus */",
  "",
  "#if __STDC__",
  "",
  "#define YY_USE_PROTOS",
  "#define YY_USE_CONST",
  "",
  "#endif	/* __STDC__ */",
  "#endif	/* ! __cplusplus */",
  "",
  "#ifdef __TURBOC__",
  " #pragma warn -rch",
  " #pragma warn -use",
  "#include <io.h>",
  "#include <stdlib.h>",
  "#define YY_USE_CONST",
  "#define YY_USE_PROTOS",
  "#endif",
  "",
  "#ifdef YY_USE_CONST",
  "#define yyconst const",
  "#else",
  "#define yyconst",
  "#endif",
  "",
  "",
  "#ifdef YY_USE_PROTOS",
  "#define YY_PROTO(proto) proto",
  "#else",
  "#define YY_PROTO(proto) ()",
  "#endif",
  "",
  "/* Returned upon end-of-file. */",
  "#define YY_NULL 0",
  "",
  "/* Promotes a possibly negative, possibly signed char to an unsigned",
  " * integer for use as an array index.  If the signed char is negative,",
  " * we want to instead treat it as an 8-bit unsigned char, hence the",
  " * double cast.",
  " */",
  "#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)",
  "",
  "/* Enter a start condition.  This macro really ought to take a parameter,",
  " * but we do it the disgusting crufty way forced on us by the ()-less",
  " * definition of BEGIN.",
  " */",
  "#define BEGIN yy_start = 1 + 2 *",
  "",
  "/* Translate the current start state into a value that can be later handed",
  " * to BEGIN to return to the state.  The YYSTATE alias is for lex",
  " * compatibility.",
  " */",
  "#define YY_START ((yy_start - 1) / 2)",
  "#define YYSTATE YY_START",
  "",
  "/* Action number for EOF rule of a given start state. */",
  "#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)",
  "",
  "/* Special action meaning \"start processing a new file\". */",
  "#define YY_NEW_FILE yyrestart( yyin )",
  "",
  "#define YY_END_OF_BUFFER_CHAR 0",
  "",
  "/* Size of default input buffer. */",
  "#define YY_BUF_SIZE 16384",
  "",
  "typedef struct yy_buffer_state *YY_BUFFER_STATE;",
  "",
  "extern int yyleng;",
  "%-",
  "extern FILE *yyin, *yyout;",
  "%*",
  "",
  "#define EOB_ACT_CONTINUE_SCAN 0",
  "#define EOB_ACT_END_OF_FILE 1",
  "#define EOB_ACT_LAST_MATCH 2",
  "",
  "/* The funky do-while in the following #define is used to turn the definition",
  " * int a single C statement (which needs a semi-colon terminator).  This",
  " * avoids problems with code like:",
  " *",
  " * 	if ( condition_holds )",
  " *		yyless( 5 );",
  " *	else",
  " *		do_something_else();",
  " *",
  " * Prior to using the do-while the compiler would get upset at the",
  " * \"else\" because it interpreted the \"if\" statement as being all",
  " * done when it reached the ';' after the yyless() call.",
  " */",
  "",
  "/* Return all but the first 'n' matched characters back to the input stream. */",
  "",
  "#define yyless(n) \\",
  "	do \\",
  "		{ \\",
  "		/* Undo effects of setting up yytext. */ \\",
  "		*yy_cp = yy_hold_char; \\",
  "		YY_RESTORE_YY_MORE_OFFSET \\",
  "		yy_c_buf_p = yy_cp = yy_bp + n - YY_MORE_ADJ; \\",
  "		YY_DO_BEFORE_ACTION; /* set up yytext again */ \\",
  "		} \\",
  "	while ( 0 )",
  "",
  "#define unput(c) yyunput( c, yytext_ptr )",
  "",
  "/* The following is because we cannot portably get our hands on size_t",
  " * (without autoconf's help, which isn't available because we want",
  " * flex-generated scanners to compile on their own).",
  " */",
  "typedef unsigned int yy_size_t;",
  "",
  "",
  "struct yy_buffer_state",
  "	{",
  "%-",
  "	FILE *yy_input_file;",
  "%+",
  "	istream* yy_input_file;",
  "%*",
  "",
  "	char *yy_ch_buf;		/* input buffer */",
  "	char *yy_buf_pos;		/* current position in input buffer */",
  "",
  "	/* Size of input buffer in bytes, not including room for EOB",
  "	 * characters.",
  "	 */",
  "	yy_size_t yy_buf_size;",
  "",
  "	/* Number of characters read into yy_ch_buf, not including EOB",
  "	 * characters.",
  "	 */",
  "	int yy_n_chars;",
  "",
  "	/* Whether we \"own\" the buffer - i.e., we know we created it,",
  "	 * and can realloc() it to grow it, and should free() it to",
  "	 * delete it.",
  "	 */",
  "	int yy_is_our_buffer;",
  "",
  "	/* Whether this is an \"interactive\" input source; if so, and",
  "	 * if we're using stdio for input, then we want to use getc()",
  "	 * instead of fread(), to make sure we stop fetching input after",
  "	 * each newline.",
  "	 */",
  "	int yy_is_interactive;",
  "",
  "	/* Whether we're considered to be at the beginning of a line.",
  "	 * If so, '^' rules will be active on the next match, otherwise",
  "	 * not.",
  "	 */",
  "	int yy_at_bol;",
  "",
  "	/* Whether to try to fill the input buffer when we reach the",
  "	 * end of it.",
  "	 */",
  "	int yy_fill_buffer;",
  "",
  "	int yy_buffer_status;",
  "#define YY_BUFFER_NEW 0",
  "#define YY_BUFFER_NORMAL 1",
  "	/* When an EOF's been seen but there's still some text to process",
  "	 * then we mark the buffer as YY_EOF_PENDING, to indicate that we",
  "	 * shouldn't try reading from the input source any more.  We might",
  "	 * still have a bunch of tokens to match, though, because of",
  "	 * possible backing-up.",
  "	 *",
  "	 * When we actually see the EOF, we change the status to \"new\"",
  "	 * (via yyrestart()), so that the user can continue scanning by",
  "	 * just pointing yyin at a new input file.",
  "	 */",
  "#define YY_BUFFER_EOF_PENDING 2",
  "	};",
  "",
  "%- Standard (non-C++) definition",
  "static YY_BUFFER_STATE yy_current_buffer = 0;",
  "%*",
  "",
  "/* We provide macros for accessing buffer states in case in the",
  " * future we want to put the buffer states in a more general",
  " * \"scanner state\".",
  " */",
  "#define YY_CURRENT_BUFFER yy_current_buffer",
  "",
  "",
  "%- Standard (non-C++) definition",
  "/* yy_hold_char holds the character lost when yytext is formed. */",
  "static char yy_hold_char;",
  "",
  "static int yy_n_chars;		/* number of characters read into yy_ch_buf */",
  "",
  "",
  "int yyleng;",
  "",
  "/* Points to current character in buffer. */",
  "static char *yy_c_buf_p = (char *) 0;",
  "static int yy_init = 1;		/* whether we need to initialize */",
  "static int yy_start = 0;	/* start state number */",
  "",
  "/* Flag which is used to allow yywrap()'s to do buffer switches",
  " * instead of setting up a fresh yyin.  A bit of a hack ...",
  " */",
  "static int yy_did_buffer_switch_on_eof;",
  "",
  "void yyrestart YY_PROTO(( FILE *input_file ));",
  "",
  "void yy_switch_to_buffer YY_PROTO(( YY_BUFFER_STATE new_buffer ));",
  "void yy_load_buffer_state YY_PROTO(( void ));",
  "YY_BUFFER_STATE yy_create_buffer YY_PROTO(( FILE *file, int size ));",
  "void yy_delete_buffer YY_PROTO(( YY_BUFFER_STATE b ));",
  "void yy_init_buffer YY_PROTO(( YY_BUFFER_STATE b, FILE *file ));",
  "void yy_flush_buffer YY_PROTO(( YY_BUFFER_STATE b ));",
  "#define YY_FLUSH_BUFFER yy_flush_buffer( yy_current_buffer )",
  "",
  "YY_BUFFER_STATE yy_scan_buffer YY_PROTO(( char *base, yy_size_t size ));",
  "YY_BUFFER_STATE yy_scan_string YY_PROTO(( yyconst char *str ));",
  "YY_BUFFER_STATE yy_scan_bytes YY_PROTO(( yyconst char *bytes, int len ));",
  "%*",
  "",
  "static void *yy_flex_alloc YY_PROTO(( yy_size_t ));",
  "static void *yy_flex_realloc YY_PROTO(( void *, yy_size_t ));",
  "static void yy_flex_free YY_PROTO(( void * ));",
  "",
  "#define yy_new_buffer yy_create_buffer",
  "",
  "#define yy_set_interactive(is_interactive) \\",
  "	{ \\",
  "	if ( ! yy_current_buffer ) \\",
  "		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \\",
  "	yy_current_buffer->yy_is_interactive = is_interactive; \\",
  "	}",
  "",
  "#define yy_set_bol(at_bol) \\",
  "	{ \\",
  "	if ( ! yy_current_buffer ) \\",
  "		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \\",
  "	yy_current_buffer->yy_at_bol = at_bol; \\",
  "	}",
  "",
  "#define YY_AT_BOL() (yy_current_buffer->yy_at_bol)",
  "",
  "%% yytext/yyin/yyout/yy_state_type/yylineno etc. def's & init go here",
  "",
  "%- Standard (non-C++) definition",
  "static yy_state_type yy_get_previous_state YY_PROTO(( void ));",
  "static yy_state_type yy_try_NUL_trans YY_PROTO(( yy_state_type current_state ));",
  "static int yy_get_next_buffer YY_PROTO(( void ));",
  "static void yy_fatal_error YY_PROTO(( yyconst char msg[] ));",
  "%*",
  "",
  "/* Done after the current pattern has been matched and before the",
  " * corresponding action - sets up yytext.",
  " */",
  "#define YY_DO_BEFORE_ACTION \\",
  "	yytext_ptr = yy_bp; \\",
  "%% code to fiddle yytext and yyleng for yymore() goes here",
  "	yy_hold_char = *yy_cp; \\",
  "	*yy_cp = '\\0'; \\",
  "%% code to copy yytext_ptr to yytext[] goes here, if %array",
  "	yy_c_buf_p = yy_cp;",
  "",
  "%% data tables for the DFA and the user's section 1 definitions go here",
  "",
  "/* Macros after this point can all be overridden by user definitions in",
  " * section 1.",
  " */",
  "",
  "#ifndef YY_SKIP_YYWRAP",
  "#ifdef __cplusplus",
  "extern \"C\" int yywrap YY_PROTO(( void ));",
  "#else",
  "extern int yywrap YY_PROTO(( void ));",
  "#endif",
  "#endif",
  "",
  "%-",
  "#ifndef YY_NO_UNPUT",
  "static void yyunput YY_PROTO(( int c, char *buf_ptr ));",
  "#endif",
  "%*",
  "",
  "#ifndef yytext_ptr",
  "static void yy_flex_strncpy YY_PROTO(( char *, yyconst char *, int ));",
  "#endif",
  "",
#ifndef F_HD_1
  "#ifdef YY_NEED_STRLEN",
#else

#endif
  "static int yy_flex_strlen YY_PROTO(( yyconst char * ));",
  "#endif",
  "",
  "#ifndef YY_NO_INPUT",
  "%- Standard (non-C++) definition",
  "#ifdef __cplusplus",
  "static int yyinput YY_PROTO(( void ));",
  "#else",
  "static int input YY_PROTO(( void ));",
  "#endif",
  "%*",
  "#endif",
  "",
  "#if YY_STACK_USED",
  "static int yy_start_stack_ptr = 0;",
  "static int yy_start_stack_depth = 0;",
  "static int *yy_start_stack = 0;",
  "#ifndef YY_NO_PUSH_STATE",
  "static void yy_push_state YY_PROTO(( int new_state ));",
  "#endif",
  "#ifndef YY_NO_POP_STATE",
  "static void yy_pop_state YY_PROTO(( void ));",
  "#endif",
  "#ifndef YY_NO_TOP_STATE",
  "static int yy_top_state YY_PROTO(( void ));",
  "#endif",
  "",
  "#else",
  "#define YY_NO_PUSH_STATE 1",
  "#define YY_NO_POP_STATE 1",
  "#define YY_NO_TOP_STATE 1",
  "#endif",
  "",
  "#ifdef YY_MALLOC_DECL",
  "YY_MALLOC_DECL",
  "#else",
  "#if __STDC__",
  "#ifndef __cplusplus",
  "#include <stdlib.h>",
  "#endif",
  "#else",
  "/* Just try to get by without declaring the routines.  This will fail",
  " * miserably on non-ANSI systems for which sizeof(size_t) != sizeof(int)",
  " * or sizeof(void*) != sizeof(int).",
  " */",
  "#endif",
  "#endif",
  "",
  "/* Amount of stuff to slurp up with each read. */",
  "#ifndef YY_READ_BUF_SIZE",
  "#define YY_READ_BUF_SIZE 8192",
  "#endif",
  "",
  "/* Copy whatever the last rule matched to the standard output. */",
  "",
  "#ifndef ECHO",
  "%- Standard (non-C++) definition",
  "/* This used to be an fputs(), but since the string might contain NUL's,",
  " * we now use fwrite().",
  " */",
  "#define ECHO (void) fwrite( yytext, yyleng, 1, yyout )",
  "%+ C++ definition",
  "#define ECHO LexerOutput( yytext, yyleng )",
  "%*",
  "#endif",
  "",
  "/* Gets input and stuffs it into \"buf\".  number of characters read, or YY_NULL,",
  " * is returned in \"result\".",
  " */",
  "#ifndef YY_INPUT",
  "#define YY_INPUT(buf,result,max_size) \\",
  "%% fread()/read() definition of YY_INPUT goes here unless we're doing C++",
  "%+ C++ definition",
  "	if ( (result = LexerInput( (char *) buf, max_size )) < 0 ) \\",
  "		YY_FATAL_ERROR( \"input in flex scanner failed\" );",
  "%*",
  "#endif",
  "",
  "/* No semi-colon after return; correct usage is to write \"yyterminate();\" -",
  " * we don't want an extra ';' after the \"return\" because that will cause",
  " * some compilers to complain about unreachable statements.",
  " */",
  "#ifndef yyterminate",
  "#define yyterminate() return YY_NULL",
  "#endif",
  "",
  "/* Number of entries by which start-condition stack grows. */",
  "#ifndef YY_START_STACK_INCR",
  "#define YY_START_STACK_INCR 25",
  "#endif",
  "",
  "/* Report a fatal error. */",
  "#ifndef YY_FATAL_ERROR",
  "%-",
  "#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )",
  "%+",
  "#define YY_FATAL_ERROR(msg) LexerError( msg )",
  "%*",
  "#endif",
  "",
  "/* Default declaration of generated scanner - a define so the user can",
  " * easily add parameters.",
  " */",
  "#ifndef YY_DECL",
  "%- Standard (non-C++) definition",
  "#define YY_DECL int yylex YY_PROTO(( void ))",
  "%+ C++ definition",
  "#define YY_DECL int yyFlexLexer::yylex()",
  "%*",
  "#endif",
  "",
  "/* Code executed at the beginning of each rule, after yytext and yyleng",
  " * have been set up.",
  " */",
  "#ifndef YY_USER_ACTION",
  "#define YY_USER_ACTION",
  "#endif",
  "",
  "/* Code executed at the end of each rule. */",
  "#ifndef YY_BREAK",
  "#define YY_BREAK break;",
  "#endif",
  "",
  "%% YY_RULE_SETUP definition goes here",
  "",
  "YY_DECL",
  "	{",
  "	register yy_state_type yy_current_state;",
  "	register char *yy_cp, *yy_bp;",
  "	register int yy_act;",
  "",
  "%% user's declarations go here",
  "",
  "	if ( yy_init )",
  "		{",
  "		yy_init = 0;",
  "",
  "#ifdef YY_USER_INIT",
  "		YY_USER_INIT;",
  "#endif",
  "",
  "		if ( ! yy_start )",
  "			yy_start = 1;	/* first start state */",
  "",
  "		if ( ! yyin )",
  "%-",
  "			yyin = stdin;",
  "%+",
  "			yyin = &cin;",
  "%*",
  "",
  "		if ( ! yyout )",
  "%-",
  "			yyout = stdout;",
  "%+",
  "			yyout = &cout;",
  "%*",
  "",
  "		if ( ! yy_current_buffer )",
  "			yy_current_buffer =",
  "				yy_create_buffer( yyin, YY_BUF_SIZE );",
  "",
  "		yy_load_buffer_state();",
  "		}",
  "",
  "	while ( 1 )		/* loops until end-of-file is reached */",
  "		{",
  "%% yymore()-related code goes here",
  "		yy_cp = yy_c_buf_p;",
  "",
  "		/* Support of yytext. */",
  "		*yy_cp = yy_hold_char;",
  "",
  "		/* yy_bp points to the position in yy_ch_buf of the start of",
  "		 * the current run.",
  "		 */",
  "		yy_bp = yy_cp;",
  "",
  "%% code to set up and find next match goes here",
  "",
  "yy_find_action:",
  "%% code to find the action number goes here",
  "",
  "		YY_DO_BEFORE_ACTION;",
  "",
  "%% code for yylineno update goes here",
  "",
  "do_action:	/* This label is used only to access EOF actions. */",
  "",
  "%% debug code goes here",
  "",
  "		switch ( yy_act )",
  "	{ /* beginning of action switch */",
  "%% actions go here",
  "",
  "	case YY_END_OF_BUFFER:",
  "		{",
  "		/* Amount of text matched not including the EOB char. */",
  "		int yy_amount_of_matched_text = (int) (yy_cp - yytext_ptr) - 1;",
  "",
  "		/* Undo the effects of YY_DO_BEFORE_ACTION. */",
  "		*yy_cp = yy_hold_char;",
  "		YY_RESTORE_YY_MORE_OFFSET",
  "",
  "		if ( yy_current_buffer->yy_buffer_status == YY_BUFFER_NEW )",
  "			{",
  "			/* We're scanning a new file or input source.  It's",
  "			 * possible that this happened because the user",
  "			 * just pointed yyin at a new source and called",
  "			 * yylex().  If so, then we have to assure",
  "			 * consistency between yy_current_buffer and our",
  "			 * globals.  Here is the right place to do so, because",
  "			 * this is the first action (other than possibly a",
  "			 * back-up) that will match for the new input source.",
  "			 */",
  "			yy_n_chars = yy_current_buffer->yy_n_chars;",
  "			yy_current_buffer->yy_input_file = yyin;",
  "			yy_current_buffer->yy_buffer_status = YY_BUFFER_NORMAL;",
  "			}",
  "",
  "		/* Note that here we test for yy_c_buf_p \"<=\" to the position",
  "		 * of the first EOB in the buffer, since yy_c_buf_p will",
  "		 * already have been incremented past the NUL character",
  "		 * (since all states make transitions on EOB to the",
  "		 * end-of-buffer state).  Contrast this with the test",
  "		 * in input().",
  "		 */",
  "		if ( yy_c_buf_p <= &yy_current_buffer->yy_ch_buf[yy_n_chars] )",
  "			{ /* This was really a NUL. */",
  "			yy_state_type yy_next_state;",
  "",
  "			yy_c_buf_p = yytext_ptr + yy_amount_of_matched_text;",
  "",
  "			yy_current_state = yy_get_previous_state();",
  "",
  "			/* Okay, we're now positioned to make the NUL",
  "			 * transition.  We couldn't have",
  "			 * yy_get_previous_state() go ahead and do it",
  "			 * for us because it doesn't know how to deal",
  "			 * with the possibility of jamming (and we don't",
  "			 * want to build jamming into it because then it",
  "			 * will run more slowly).",
  "			 */",
  "",
  "			yy_next_state = yy_try_NUL_trans( yy_current_state );",
  "",
  "			yy_bp = yytext_ptr + YY_MORE_ADJ;",
  "",
  "			if ( yy_next_state )",
  "				{",
  "				/* Consume the NUL. */",
  "				yy_cp = ++yy_c_buf_p;",
  "				yy_current_state = yy_next_state;",
  "				goto yy_match;",
  "				}",
  "",
  "			else",
  "				{",
  "%% code to do back-up for compressed tables and set up yy_cp goes here",
  "				goto yy_find_action;",
  "				}",
  "			}",
  "",
  "		else switch ( yy_get_next_buffer() )",
  "			{",
  "			case EOB_ACT_END_OF_FILE:",
  "				{",
  "				yy_did_buffer_switch_on_eof = 0;",
  "",
  "				if ( yywrap() )",
  "					{",
  "					/* Note: because we've taken care in",
  "					 * yy_get_next_buffer() to have set up",
  "					 * yytext, we can now set up",
  "					 * yy_c_buf_p so that if some total",
  "					 * hoser (like flex itself) wants to",
  "					 * call the scanner after we return the",
  "					 * YY_NULL, it'll still work - another",
  "					 * YY_NULL will get returned.",
  "					 */",
  "					yy_c_buf_p = yytext_ptr + YY_MORE_ADJ;",
  "",
  "					yy_act = YY_STATE_EOF(YY_START);",
  "					goto do_action;",
  "					}",
  "",
  "				else",
  "					{",
  "					if ( ! yy_did_buffer_switch_on_eof )",
  "						YY_NEW_FILE;",
  "					}",
  "				break;",
  "				}",
  "",
  "			case EOB_ACT_CONTINUE_SCAN:",
  "				yy_c_buf_p =",
  "					yytext_ptr + yy_amount_of_matched_text;",
  "",
  "				yy_current_state = yy_get_previous_state();",
  "",
  "				yy_cp = yy_c_buf_p;",
  "				yy_bp = yytext_ptr + YY_MORE_ADJ;",
  "				goto yy_match;",
  "",
  "			case EOB_ACT_LAST_MATCH:",
  "				yy_c_buf_p =",
  "				&yy_current_buffer->yy_ch_buf[yy_n_chars];",
  "",
  "				yy_current_state = yy_get_previous_state();",
  "",
  "				yy_cp = yy_c_buf_p;",
  "				yy_bp = yytext_ptr + YY_MORE_ADJ;",
  "				goto yy_find_action;",
  "			}",
  "		break;",
  "		}",
  "",
  "	default:",
  "		YY_FATAL_ERROR(",
  "			\"fatal flex scanner internal error--no action found\" );",
  "	} /* end of action switch */",
  "		} /* end of scanning one token */",
  "	} /* end of yylex */",
  "",
  "%+",
  "yyFlexLexer::yyFlexLexer( istream* arg_yyin, ostream* arg_yyout )",
  "	{",
  "	yyin = arg_yyin;",
  "	yyout = arg_yyout;",
  "	yy_c_buf_p = 0;",
  "	yy_init = 1;",
  "	yy_start = 0;",
  "	yy_flex_debug = 0;",
  "	yylineno = 1;	// this will only get updated if %option yylineno",
  "",
  "	yy_did_buffer_switch_on_eof = 0;",
  "",
  "	yy_looking_for_trail_begin = 0;",
  "	yy_more_flag = 0;",
  "	yy_more_len = 0;",
  "	yy_more_offset = yy_prev_more_offset = 0;",
  "",
  "	yy_start_stack_ptr = yy_start_stack_depth = 0;",
  "	yy_start_stack = 0;",
  "",
  "	yy_current_buffer = 0;",
  "",
  "#ifdef YY_USES_REJECT",
  "	yy_state_buf = new yy_state_type[YY_BUF_SIZE + 2];",
  "#else",
  "	yy_state_buf = 0;",
  "#endif",
  "	}",
  "",
  "yyFlexLexer::~yyFlexLexer()",
  "	{",
  "	delete yy_state_buf;",
  "	yy_delete_buffer( yy_current_buffer );",
  "	}",
  "",
  "void yyFlexLexer::switch_streams( istream* new_in, ostream* new_out )",
  "	{",
  "	if ( new_in )",
  "		{",
  "		yy_delete_buffer( yy_current_buffer );",
  "		yy_switch_to_buffer( yy_create_buffer( new_in, YY_BUF_SIZE ) );",
  "		}",
  "",
  "	if ( new_out )",
  "		yyout = new_out;",
  "	}",
  "",
  "#ifdef YY_INTERACTIVE",
  "int yyFlexLexer::LexerInput( char* buf, int /* max_size */ )",
  "#else",
  "int yyFlexLexer::LexerInput( char* buf, int max_size )",
  "#endif",
  "	{",
  "	if ( yyin->eof() || yyin->fail() )",
  "		return 0;",
  "",
  "#ifdef YY_INTERACTIVE",
  "	yyin->get( buf[0] );",
  "",
  "	if ( yyin->eof() )",
  "		return 0;",
  "",
  "	if ( yyin->bad() )",
  "		return -1;",
  "",
  "	return 1;",
  "",
  "#else",
  "	(void) yyin->read( buf, max_size );",
  "",
  "	if ( yyin->bad() )",
  "		return -1;",
  "	else",
  "		return yyin->gcount();",
  "#endif",
  "	}",
  "",
  "void yyFlexLexer::LexerOutput( const char* buf, int size )",
  "	{",
  "	(void) yyout->write( buf, size );",
  "	}",
  "%*",
  "",
  "/* yy_get_next_buffer - try to read in a new buffer",
  " *",
  " * Returns a code representing an action:",
  " *	EOB_ACT_LAST_MATCH -",
  " *	EOB_ACT_CONTINUE_SCAN - continue scanning from current position",
  " *	EOB_ACT_END_OF_FILE - end of file",
  " */",
  "",
  "%-",
  "static int yy_get_next_buffer()",
  "%+",
  "int yyFlexLexer::yy_get_next_buffer()",
  "%*",
  "	{",
  "	register char *dest = yy_current_buffer->yy_ch_buf;",
  "	register char *source = yytext_ptr;",
  "	register int number_to_move, i;",
  "	int ret_val;",
  "",
  "	if ( yy_c_buf_p > &yy_current_buffer->yy_ch_buf[yy_n_chars + 1] )",
  "		YY_FATAL_ERROR(",
  "		\"fatal flex scanner internal error--end of buffer missed\" );",
  "",
  "	if ( yy_current_buffer->yy_fill_buffer == 0 )",
  "		{ /* Don't try to fill the buffer, so this is an EOF. */",
  "		if ( yy_c_buf_p - yytext_ptr - YY_MORE_ADJ == 1 )",
  "			{",
  "			/* We matched a single character, the EOB, so",
  "			 * treat this as a final EOF.",
  "			 */",
  "			return EOB_ACT_END_OF_FILE;",
  "			}",
  "",
  "		else",
  "			{",
  "			/* We matched some text prior to the EOB, first",
  "			 * process it.",
  "			 */",
  "			return EOB_ACT_LAST_MATCH;",
  "			}",
  "		}",
  "",
  "	/* Try to read more data. */",
  "",
  "	/* First move last chars to start of buffer. */",
  "	number_to_move = (int) (yy_c_buf_p - yytext_ptr) - 1;",
  "",
  "	for ( i = 0; i < number_to_move; ++i )",
  "		*(dest++) = *(source++);",
  "",
  "	if ( yy_current_buffer->yy_buffer_status == YY_BUFFER_EOF_PENDING )",
  "		/* don't do the read, it's not guaranteed to return an EOF,",
  "		 * just force an EOF",
  "		 */",
  "		yy_n_chars = 0;",
  "",
  "	else",
  "		{",
  "		int num_to_read =",
  "			yy_current_buffer->yy_buf_size - number_to_move - 1;",
  "",
  "		while ( num_to_read <= 0 )",
  "			{ /* Not enough room in the buffer - grow it. */",
  "#ifdef YY_USES_REJECT",
  "			YY_FATAL_ERROR(",
  "\"input buffer overflow, can't enlarge buffer because scanner uses REJECT\" );",
  "#else",
  "",
  "			/* just a shorter name for the current buffer */",
  "			YY_BUFFER_STATE b = yy_current_buffer;",
  "",
  "			int yy_c_buf_p_offset =",
  "				(int) (yy_c_buf_p - b->yy_ch_buf);",
  "",
  "			if ( b->yy_is_our_buffer )",
  "				{",
  "				int new_size = b->yy_buf_size * 2;",
  "",
  "				if ( new_size <= 0 )",
  "					b->yy_buf_size += b->yy_buf_size / 8;",
  "				else",
  "					b->yy_buf_size *= 2;",
  "",
  "				b->yy_ch_buf = (char *)",
  "					/* Include room in for 2 EOB chars. */",
  "					yy_flex_realloc( (void *) b->yy_ch_buf,",
  "							 b->yy_buf_size + 2 );",
  "				}",
  "			else",
  "				/* Can't grow it, we don't own it. */",
  "				b->yy_ch_buf = 0;",
  "",
  "			if ( ! b->yy_ch_buf )",
  "				YY_FATAL_ERROR(",
  "				\"fatal error - scanner input buffer overflow\" );",
  "",
  "			yy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];",
  "",
  "			num_to_read = yy_current_buffer->yy_buf_size -",
  "						number_to_move - 1;",
  "#endif",
  "			}",
  "",
  "		if ( num_to_read > YY_READ_BUF_SIZE )",
  "			num_to_read = YY_READ_BUF_SIZE;",
  "",
  "		/* Read in more data. */",
  "		YY_INPUT( (&yy_current_buffer->yy_ch_buf[number_to_move]),",
  "			yy_n_chars, num_to_read );",
  "		}",
  "",
  "	if ( yy_n_chars == 0 )",
  "		{",
  "		if ( number_to_move == YY_MORE_ADJ )",
  "			{",
  "			ret_val = EOB_ACT_END_OF_FILE;",
  "			yyrestart( yyin );",
  "			}",
  "",
  "		else",
  "			{",
  "			ret_val = EOB_ACT_LAST_MATCH;",
  "			yy_current_buffer->yy_buffer_status =",
  "				YY_BUFFER_EOF_PENDING;",
  "			}",
  "		}",
  "",
  "	else",
  "		ret_val = EOB_ACT_CONTINUE_SCAN;",
  "",
  "	yy_n_chars += number_to_move;",
  "	yy_current_buffer->yy_ch_buf[yy_n_chars] = YY_END_OF_BUFFER_CHAR;",
  "	yy_current_buffer->yy_ch_buf[yy_n_chars + 1] = YY_END_OF_BUFFER_CHAR;",
  "",
  "	yytext_ptr = &yy_current_buffer->yy_ch_buf[0];",
  "",
  "	return ret_val;",
  "	}",
  "",
  "",
  "/* yy_get_previous_state - get the state just before the EOB char was reached */",
  "",
  "%-",
  "static yy_state_type yy_get_previous_state()",
  "%+",
  "yy_state_type yyFlexLexer::yy_get_previous_state()",
  "%*",
  "	{",
  "	register yy_state_type yy_current_state;",
  "	register char *yy_cp;",
  "",
  "%% code to get the start state into yy_current_state goes here",
  "",
  "	for ( yy_cp = yytext_ptr + YY_MORE_ADJ; yy_cp < yy_c_buf_p; ++yy_cp )",
  "		{",
  "%% code to find the next state goes here",
  "		}",
  "",
  "	return yy_current_state;",
  "	}",
  "",
  "",
  "/* yy_try_NUL_trans - try to make a transition on the NUL character",
  " *",
  " * synopsis",
  " *	next_state = yy_try_NUL_trans( current_state );",
  " */",
  "",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "static yy_state_type yy_try_NUL_trans( yy_state_type yy_current_state )",
  "#else",
  "static yy_state_type yy_try_NUL_trans( yy_current_state )",
  "yy_state_type yy_current_state;",
  "#endif",
  "%+",
  "yy_state_type yyFlexLexer::yy_try_NUL_trans( yy_state_type yy_current_state )",
  "%*",
  "	{",
  "	register int yy_is_jam;",
  "%% code to find the next state, and perhaps do backing up, goes here",
  "",
  "	return yy_is_jam ? 0 : yy_current_state;",
  "	}",
  "",
  "",
  "%-",
  "#ifndef YY_NO_UNPUT",
  "#ifdef YY_USE_PROTOS",
  "static void yyunput( int c, register char *yy_bp )",
  "#else",
  "static void yyunput( c, yy_bp )",
  "int c;",
  "register char *yy_bp;",
  "#endif",
  "%+",
  "void yyFlexLexer::yyunput( int c, register char* yy_bp )",
  "%*",
  "	{",
  "	register char *yy_cp = yy_c_buf_p;",
  "",
  "	/* undo effects of setting up yytext */",
  "	*yy_cp = yy_hold_char;",
  "",
  "	if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )",
  "		{ /* need to shift things up to make room */",
  "		/* +2 for EOB chars. */",
  "		register int number_to_move = yy_n_chars + 2;",
  "		register char *dest = &yy_current_buffer->yy_ch_buf[",
  "					yy_current_buffer->yy_buf_size + 2];",
  "		register char *source =",
  "				&yy_current_buffer->yy_ch_buf[number_to_move];",
  "",
  "		while ( source > yy_current_buffer->yy_ch_buf )",
  "			*--dest = *--source;",
  "",
  "		yy_cp += (int) (dest - source);",
  "		yy_bp += (int) (dest - source);",
  "		yy_n_chars = yy_current_buffer->yy_buf_size;",
  "",
  "		if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )",
  "			YY_FATAL_ERROR( \"flex scanner push-back overflow\" );",
  "		}",
  "",
  "	*--yy_cp = (char) c;",
  "",
  "%% update yylineno here",
  "",
  "	yytext_ptr = yy_bp;",
  "	yy_hold_char = *yy_cp;",
  "	yy_c_buf_p = yy_cp;",
  "	}",
  "%-",
  "#endif	/* ifndef YY_NO_UNPUT */",
  "%*",
  "",
  "",
  "%-",
  "#ifdef __cplusplus",
  "static int yyinput()",
  "#else",
  "static int input()",
  "#endif",
  "%+",
  "int yyFlexLexer::yyinput()",
  "%*",
  "	{",
  "	int c;",
  "",
  "	*yy_c_buf_p = yy_hold_char;",
  "",
  "	if ( *yy_c_buf_p == YY_END_OF_BUFFER_CHAR )",
  "		{",
  "		/* yy_c_buf_p now points to the character we want to return.",
  "		 * If this occurs *before* the EOB characters, then it's a",
  "		 * valid NUL; if not, then we've hit the end of the buffer.",
  "		 */",
  "		if ( yy_c_buf_p < &yy_current_buffer->yy_ch_buf[yy_n_chars] )",
  "			/* This was really a NUL. */",
  "			*yy_c_buf_p = '\\0';",
  "",
  "		else",
  "			{ /* need more input */",
  "			int offset = yy_c_buf_p - yytext_ptr;",
  "			++yy_c_buf_p;",
  "",
  "			switch ( yy_get_next_buffer() )",
  "				{",
  "				case EOB_ACT_END_OF_FILE:",
  "					{",
  "					if ( yywrap() )",
  "						{",
  "						yy_c_buf_p = yytext_ptr + offset;",
  "						return EOF;",
  "						}",
  "",
  "					if ( ! yy_did_buffer_switch_on_eof )",
  "						YY_NEW_FILE;",
  "#ifdef __cplusplus",
  "					return yyinput();",
  "#else",
  "					return input();",
  "#endif",
  "					}",
  "",
  "				case EOB_ACT_CONTINUE_SCAN:",
  "					yy_c_buf_p = yytext_ptr + offset;",
  "					break;",
  "",
  "				case EOB_ACT_LAST_MATCH:",
  "#ifdef __cplusplus",
  "					YY_FATAL_ERROR(",
  "					\"unexpected last match in yyinput()\" );",
  "#else",
  "					YY_FATAL_ERROR(",
  "					\"unexpected last match in input()\" );",
  "#endif",
  "				}",
  "			}",
  "		}",
  "",
  "	c = *(unsigned char *) yy_c_buf_p;	/* cast for 8-bit char's */",
  "	*yy_c_buf_p = '\\0';	/* preserve yytext */",
  "	yy_hold_char = *++yy_c_buf_p;",
  "",
  "%% update BOL and yylineno",
  "",
  "	return c;",
  "	}",
  "",
  "",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "void yyrestart( FILE *input_file )",
  "#else",
  "void yyrestart( input_file )",
  "FILE *input_file;",
  "#endif",
  "%+",
  "void yyFlexLexer::yyrestart( istream* input_file )",
  "%*",
  "	{",
  "	if ( ! yy_current_buffer )",
  "		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE );",
  "",
  "	yy_init_buffer( yy_current_buffer, input_file );",
  "	yy_load_buffer_state();",
  "	}",
  "",
  "",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "void yy_switch_to_buffer( YY_BUFFER_STATE new_buffer )",
  "#else",
  "void yy_switch_to_buffer( new_buffer )",
  "YY_BUFFER_STATE new_buffer;",
  "#endif",
  "%+",
  "void yyFlexLexer::yy_switch_to_buffer( YY_BUFFER_STATE new_buffer )",
  "%*",
  "	{",
  "	if ( yy_current_buffer == new_buffer )",
  "		return;",
  "",
  "	if ( yy_current_buffer )",
  "		{",
  "		/* Flush out information for old buffer. */",
  "		*yy_c_buf_p = yy_hold_char;",
  "		yy_current_buffer->yy_buf_pos = yy_c_buf_p;",
  "		yy_current_buffer->yy_n_chars = yy_n_chars;",
  "		}",
  "",
  "	yy_current_buffer = new_buffer;",
  "	yy_load_buffer_state();",
  "",
  "	/* We don't actually know whether we did this switch during",
  "	 * EOF (yywrap()) processing, but the only time this flag",
  "	 * is looked at is after yywrap() is called, so it's safe",
  "	 * to go ahead and always set it.",
  "	 */",
  "	yy_did_buffer_switch_on_eof = 1;",
  "	}",
  "",
  "",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "void yy_load_buffer_state( void )",
  "#else",
  "void yy_load_buffer_state()",
  "#endif",
  "%+",
  "void yyFlexLexer::yy_load_buffer_state()",
  "%*",
  "	{",
  "	yy_n_chars = yy_current_buffer->yy_n_chars;",
  "	yytext_ptr = yy_c_buf_p = yy_current_buffer->yy_buf_pos;",
  "	yyin = yy_current_buffer->yy_input_file;",
  "	yy_hold_char = *yy_c_buf_p;",
  "	}",
  "",
  "",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "YY_BUFFER_STATE yy_create_buffer( FILE *file, int size )",
  "#else",
  "YY_BUFFER_STATE yy_create_buffer( file, size )",
  "FILE *file;",
  "int size;",
  "#endif",
  "%+",
  "YY_BUFFER_STATE yyFlexLexer::yy_create_buffer( istream* file, int size )",
  "%*",
  "	{",
  "	YY_BUFFER_STATE b;",
  "",
  "	b = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );",
  "	if ( ! b )",
  "		YY_FATAL_ERROR( \"out of dynamic memory in yy_create_buffer()\" );",
  "",
  "	b->yy_buf_size = size;",
  "",
  "	/* yy_ch_buf has to be 2 characters longer than the size given because",
  "	 * we need to put in 2 end-of-buffer characters.",
  "	 */",
  "	b->yy_ch_buf = (char *) yy_flex_alloc( b->yy_buf_size + 2 );",
  "	if ( ! b->yy_ch_buf )",
  "		YY_FATAL_ERROR( \"out of dynamic memory in yy_create_buffer()\" );",
  "",
  "	b->yy_is_our_buffer = 1;",
  "",
  "	yy_init_buffer( b, file );",
  "",
  "	return b;",
  "	}",
  "",
  "",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "void yy_delete_buffer( YY_BUFFER_STATE b )",
  "#else",
  "void yy_delete_buffer( b )",
  "YY_BUFFER_STATE b;",
  "#endif",
  "%+",
  "void yyFlexLexer::yy_delete_buffer( YY_BUFFER_STATE b )",
  "%*",
  "	{",
  "	if ( ! b )",
  "		return;",
  "",
  "	if ( b == yy_current_buffer )",
  "		yy_current_buffer = (YY_BUFFER_STATE) 0;",
  "",
  "	if ( b->yy_is_our_buffer )",
  "		yy_flex_free( (void *) b->yy_ch_buf );",
  "",
  "	yy_flex_free( (void *) b );",
  "	}",
  "",
  "",
  "%-",
  "#ifndef YY_ALWAYS_INTERACTIVE",
  "#ifndef YY_NEVER_INTERACTIVE",
  "extern int isatty YY_PROTO(( int ));",
  "#endif",
  "#endif",
  "",
  "#ifdef YY_USE_PROTOS",
  "void yy_init_buffer( YY_BUFFER_STATE b, FILE *file )",
  "#else",
  "void yy_init_buffer( b, file )",
  "YY_BUFFER_STATE b;",
  "FILE *file;",
  "#endif",
  "",
  "%+",
  "extern \"C\" int isatty YY_PROTO(( int ));",
  "void yyFlexLexer::yy_init_buffer( YY_BUFFER_STATE b, istream* file )",
  "%*",
  "",
  "	{",
  "	yy_flush_buffer( b );",
  "",
  "	b->yy_input_file = file;",
  "	b->yy_fill_buffer = 1;",
  "",
  "%-",
  "#if YY_ALWAYS_INTERACTIVE",
  "	b->yy_is_interactive = 1;",
  "#else",
  "#if YY_NEVER_INTERACTIVE",
  "	b->yy_is_interactive = 0;",
  "#else",
  "	b->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;",
  "#endif",
  "#endif",
  "%+",
  "	b->yy_is_interactive = 0;",
  "%*",
  "	}",
  "",
  "",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "void yy_flush_buffer( YY_BUFFER_STATE b )",
  "#else",
  "void yy_flush_buffer( b )",
  "YY_BUFFER_STATE b;",
  "#endif",
  "",
  "%+",
  "void yyFlexLexer::yy_flush_buffer( YY_BUFFER_STATE b )",
  "%*",
  "	{",
  "	b->yy_n_chars = 0;",
  "",
  "	/* We always need two end-of-buffer characters.  The first causes",
  "	 * a transition to the end-of-buffer state.  The second causes",
  "	 * a jam in that state.",
  "	 */",
  "	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;",
  "	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;",
  "",
  "	b->yy_buf_pos = &b->yy_ch_buf[0];",
  "",
  "	b->yy_at_bol = 1;",
  "	b->yy_buffer_status = YY_BUFFER_NEW;",
  "",
  "	if ( b == yy_current_buffer )",
  "		yy_load_buffer_state();",
  "	}",
  "%*",
  "",
  "",
  "#ifndef YY_NO_SCAN_BUFFER",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "YY_BUFFER_STATE yy_scan_buffer( char *base, yy_size_t size )",
  "#else",
  "YY_BUFFER_STATE yy_scan_buffer( base, size )",
  "char *base;",
  "yy_size_t size;",
  "#endif",
  "	{",
  "	YY_BUFFER_STATE b;",
  "",
  "	if ( size < 2 ||",
  "	     base[size-2] != YY_END_OF_BUFFER_CHAR ||",
  "	     base[size-1] != YY_END_OF_BUFFER_CHAR )",
  "		/* They forgot to leave room for the EOB's. */",
  "		return 0;",
  "",
  "	b = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );",
  "	if ( ! b )",
  "		YY_FATAL_ERROR( \"out of dynamic memory in yy_scan_buffer()\" );",
  "",
  "	b->yy_buf_size = size - 2;	/* \"- 2\" to take care of EOB's */",
  "	b->yy_buf_pos = b->yy_ch_buf = base;",
  "	b->yy_is_our_buffer = 0;",
  "	b->yy_input_file = 0;",
  "	b->yy_n_chars = b->yy_buf_size;",
  "	b->yy_is_interactive = 0;",
  "	b->yy_at_bol = 1;",
  "	b->yy_fill_buffer = 0;",
  "	b->yy_buffer_status = YY_BUFFER_NEW;",
  "",
  "	yy_switch_to_buffer( b );",
  "",
  "	return b;",
  "	}",
  "%*",
  "#endif",
  "",
  "",
  "#ifndef YY_NO_SCAN_STRING",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "YY_BUFFER_STATE yy_scan_string( yyconst char *str )",
  "#else",
  "YY_BUFFER_STATE yy_scan_string( str )",
  "yyconst char *str;",
  "#endif",
  "	{",
  "	int len;",
  "	for ( len = 0; str[len]; ++len )",
  "		;",
  "",
  "	return yy_scan_bytes( str, len );",
  "	}",
  "%*",
  "#endif",
  "",
  "",
  "#ifndef YY_NO_SCAN_BYTES",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "YY_BUFFER_STATE yy_scan_bytes( yyconst char *bytes, int len )",
  "#else",
  "YY_BUFFER_STATE yy_scan_bytes( bytes, len )",
  "yyconst char *bytes;",
  "int len;",
  "#endif",
  "	{",
  "	YY_BUFFER_STATE b;",
  "	char *buf;",
  "	yy_size_t n;",
  "	int i;",
  "",
  "	/* Get memory for full buffer, including space for trailing EOB's. */",
  "	n = len + 2;",
  "	buf = (char *) yy_flex_alloc( n );",
  "	if ( ! buf )",
  "		YY_FATAL_ERROR( \"out of dynamic memory in yy_scan_bytes()\" );",
  "",
  "	for ( i = 0; i < len; ++i )",
  "		buf[i] = bytes[i];",
  "",
  "	buf[len] = buf[len+1] = YY_END_OF_BUFFER_CHAR;",
  "",
  "	b = yy_scan_buffer( buf, n );",
  "	if ( ! b )",
  "		YY_FATAL_ERROR( \"bad buffer in yy_scan_bytes()\" );",
  "",
  "	/* It's okay to grow etc. this buffer, and we should throw it",
  "	 * away when we're done.",
  "	 */",
  "	b->yy_is_our_buffer = 1;",
  "",
  "	return b;",
  "	}",
  "%*",
  "#endif",
  "",
  "",
  "#ifndef YY_NO_PUSH_STATE",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "static void yy_push_state( int new_state )",
  "#else",
  "static void yy_push_state( new_state )",
  "int new_state;",
  "#endif",
  "%+",
  "void yyFlexLexer::yy_push_state( int new_state )",
  "%*",
  "	{",
  "	if ( yy_start_stack_ptr >= yy_start_stack_depth )",
  "		{",
  "		yy_size_t new_size;",
  "",
  "		yy_start_stack_depth += YY_START_STACK_INCR;",
  "		new_size = yy_start_stack_depth * sizeof( int );",
  "",
  "		if ( ! yy_start_stack )",
  "			yy_start_stack = (int *) yy_flex_alloc( new_size );",
  "",
  "		else",
  "			yy_start_stack = (int *) yy_flex_realloc(",
  "					(void *) yy_start_stack, new_size );",
  "",
  "		if ( ! yy_start_stack )",
  "			YY_FATAL_ERROR(",
  "			\"out of memory expanding start-condition stack\" );",
  "		}",
  "",
  "	yy_start_stack[yy_start_stack_ptr++] = YY_START;",
  "",
  "	BEGIN(new_state);",
  "	}",
  "#endif",
  "",
  "",
  "#ifndef YY_NO_POP_STATE",
  "%-",
  "static void yy_pop_state()",
  "%+",
  "void yyFlexLexer::yy_pop_state()",
  "%*",
  "	{",
  "	if ( --yy_start_stack_ptr < 0 )",
  "		YY_FATAL_ERROR( \"start-condition stack underflow\" );",
  "",
  "	BEGIN(yy_start_stack[yy_start_stack_ptr]);",
  "	}",
  "#endif",
  "",
  "",
  "#ifndef YY_NO_TOP_STATE",
  "%-",
  "static int yy_top_state()",
  "%+",
  "int yyFlexLexer::yy_top_state()",
  "%*",
  "	{",
  "	return yy_start_stack[yy_start_stack_ptr - 1];",
  "	}",
  "#endif",
  "",
  "#ifndef YY_EXIT_FAILURE",
  "#define YY_EXIT_FAILURE 2",
  "#endif",
  "",
  "%-",
  "#ifdef YY_USE_PROTOS",
  "static void yy_fatal_error( yyconst char msg[] )",
  "#else",
  "static void yy_fatal_error( msg )",
  "char msg[];",
  "#endif",
  "	{",
  "FILE *err;",  /* ### modified(Jan.24.2001) ### */
  "	(void) fprintf( err, \"%s\\n\", msg );",
  "	exit( YY_EXIT_FAILURE );",
  "	}",
  "",
  "%+",
  "",
  "void yyFlexLexer::LexerError( yyconst char msg[] )",
  "	{",
  "	cerr << msg << '\\n';",
  "	exit( YY_EXIT_FAILURE );",
  "	}",
  "%*",
  "",
  "",
  "/* Redefine yyless() so it works in section 3 code. */",
  "",
  "#undef yyless",
  "#define yyless(n) \\",
  "	do \\",
  "		{ \\",
  "		/* Undo effects of setting up yytext. */ \\",
  "		yytext[yyleng] = yy_hold_char; \\",
#ifndef F_HD_2
  "		yy_c_buf_p = yytext + n; \\",
#else
  "		yy_c_buf_p = yytext + n - YY_MORE_ADJ; \\",
#endif
  "		yy_hold_char = *yy_c_buf_p; \\",
  "		*yy_c_buf_p = '\\0'; \\",
  "		yyleng = n; \\",
  "		} \\",
  "	while ( 0 )",
  "",
  "",
  "/* Internal utility routines. */",
  "",
  "#ifndef yytext_ptr",
  "#ifdef YY_USE_PROTOS",
  "static void yy_flex_strncpy( char *s1, yyconst char *s2, int n )",
  "#else",
  "static void yy_flex_strncpy( s1, s2, n )",
  "char *s1;",
  "yyconst char *s2;",
  "int n;",
  "#endif",
  "	{",
  "	register int i;",
  "	for ( i = 0; i < n; ++i )",
  "		s1[i] = s2[i];",
  "	}",
  "#endif",
  "",
  "#ifdef YY_NEED_STRLEN",
  "#ifdef YY_USE_PROTOS",
  "static int yy_flex_strlen( yyconst char *s )",
  "#else",
  "static int yy_flex_strlen( s )",
  "yyconst char *s;",
  "#endif",
  "	{",
  "	register int n;",
  "	for ( n = 0; s[n]; ++n )",
  "		;",
  "",
  "	return n;",
  "	}",
  "#endif",
  "",
  "",
  "#ifdef YY_USE_PROTOS",
  "static void *yy_flex_alloc( yy_size_t size )",
  "#else",
  "static void *yy_flex_alloc( size )",
  "yy_size_t size;",
  "#endif",
  "	{",
  "	return (void *) malloc( size );",
  "	}",
  "",
  "#ifdef YY_USE_PROTOS",
  "static void *yy_flex_realloc( void *ptr, yy_size_t size )",
  "#else",
  "static void *yy_flex_realloc( ptr, size )",
  "void *ptr;",
  "yy_size_t size;",
  "#endif",
  "	{",
  "	/* The cast to (char *) in the following accommodates both",
  "	 * implementations that use char* generic pointers, and those",
  "	 * that use void* generic pointers.  It works with the latter",
  "	 * because both ANSI C and C++ allow castless assignment from",
  "	 * any pointer type to void*, and deal with argument conversions",
  "	 * as though doing an assignment.",
  "	 */",
  "	return (void *) realloc( (char *) ptr, size );",
  "	}",
  "",
  "#ifdef YY_USE_PROTOS",
  "static void yy_flex_free( void *ptr )",
  "#else",
  "static void yy_flex_free( ptr )",
  "void *ptr;",
  "#endif",
  "	{",
  "	free( ptr );",
  "	}",
  "",
  "#if YY_MAIN",
  "int main()",
  "	{",
  "	yylex();",
  "	return 0;",
  "	}",
  "#endif",
  0
};
/* sym - symbol table routines */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */



/* declare functions that have forward references */

int hashfunct PROTO((register char[], int));


struct hash_entry *ndtbl[NAME_TABLE_HASH_SIZE];
struct hash_entry *sctbl[START_COND_HASH_SIZE];
struct hash_entry *ccltab[CCL_HASH_SIZE];

struct hash_entry *findsym();


/* addsym - add symbol and definitions to symbol table
 *
 * -1 is returned if the symbol already exists, and the change not made.
 */

int addsym( sym, str_def, int_def, table, table_size )
register char sym[];
char *str_def;
int int_def;
hash_table table;
int table_size;
	{
	int hash_val = hashfunct( sym, table_size );
	register struct hash_entry *sym_entry = table[hash_val];
	register struct hash_entry *new_entry;
	register struct hash_entry *successor;

	while ( sym_entry )
		{
		if ( ! strcmp( sym, sym_entry->name ) )
			{ /* entry already exists */
			return -1;
			}

		sym_entry = sym_entry->next;
		}

	/* create new entry */
	new_entry = (struct hash_entry *)
		flex_alloc( sizeof( struct hash_entry ) );

	if ( new_entry == NULL )
		flexfatal( _( "symbol table memory allocation failed" ) );

	if ( (successor = table[hash_val]) != 0 )
		{
		new_entry->next = successor;
		successor->prev = new_entry;
		}
	else
		new_entry->next = NULL;

	new_entry->prev = NULL;
	new_entry->name = sym;
	new_entry->str_val = str_def;
	new_entry->int_val = int_def;

	table[hash_val] = new_entry;

	return 0;
	}


/* cclinstal - save the text of a character class */

void cclinstal( ccltxt, cclnum )
Char ccltxt[];
int cclnum;
	{
	/* We don't bother checking the return status because we are not
	 * called unless the symbol is new.
	 */
	Char *copy_unsigned_string();

	(void) addsym( (char *) copy_unsigned_string( ccltxt ),
			(char *) 0, cclnum,
			ccltab, CCL_HASH_SIZE );
	}


/* ccllookup - lookup the number associated with character class text
 *
 * Returns 0 if there's no CCL associated with the text.
 */

int ccllookup( ccltxt )
Char ccltxt[];
	{
	return findsym( (char *) ccltxt, ccltab, CCL_HASH_SIZE )->int_val;
	}


/* findsym - find symbol in symbol table */

struct hash_entry *findsym( sym, table, table_size )
register char sym[];
hash_table table;
int table_size;
	{
	static struct hash_entry empty_entry =
		{
		(struct hash_entry *) 0, (struct hash_entry *) 0,
		(char *) 0, (char *) 0, 0,
		} ;
	register struct hash_entry *sym_entry =
		table[hashfunct( sym, table_size )];

	while ( sym_entry )
		{
		if ( ! strcmp( sym, sym_entry->name ) )
			return sym_entry;
		sym_entry = sym_entry->next;
		}

	return &empty_entry;
	}


/* hashfunct - compute the hash value for "str" and hash size "hash_size" */

int hashfunct( str, hash_size )
register char str[];
int hash_size;
	{
	register int hashval;
	register int locstr;

	hashval = 0;
	locstr = 0;

	while ( str[locstr] )
		{
		hashval = (hashval << 1) + (unsigned char) str[locstr++];
		hashval %= hash_size;
		}

	return hashval;
	}


/* ndinstal - install a name definition */

void ndinstal( name, definition )
char name[];
Char definition[];
	{
	char *copy_string();
	Char *copy_unsigned_string();

	if ( addsym( copy_string( name ),
			(char *) copy_unsigned_string( definition ), 0,
			ndtbl, NAME_TABLE_HASH_SIZE ) )
		synerr( _( "name defined twice" ) );
	}


/* ndlookup - lookup a name definition
 *
 * Returns a nil pointer if the name definition does not exist.
 */

Char *ndlookup( nd )
char nd[];
	{
	return (Char *) findsym( nd, ndtbl, NAME_TABLE_HASH_SIZE )->str_val;
	}


/* scextend - increase the maximum number of start conditions */

void scextend()
	{
	current_max_scs += MAX_SCS_INCREMENT;

	++num_reallocs;

	scset = reallocate_integer_array( scset, current_max_scs );
	scbol = reallocate_integer_array( scbol, current_max_scs );
	scxclu = reallocate_integer_array( scxclu, current_max_scs );
	sceof = reallocate_integer_array( sceof, current_max_scs );
	scname = reallocate_char_ptr_array( scname, current_max_scs );
	}


/* scinstal - make a start condition
 *
 * NOTE
 *    The start condition is "exclusive" if xcluflg is true.
 */

void scinstal( str, xcluflg )
char str[];
int xcluflg;
	{
	char *copy_string();

	/* Generate start condition definition, for use in BEGIN et al. */
	action_define( str, lastsc );

	if ( ++lastsc >= current_max_scs )
		scextend();

	scname[lastsc] = copy_string( str );

	if ( addsym( scname[lastsc], (char *) 0, lastsc,
			sctbl, START_COND_HASH_SIZE ) )
		format_pinpoint_message(
				_( "start condition %s declared twice" ),
					str );

	scset[lastsc] = mkstate( SYM_EPSILON );
	scbol[lastsc] = mkstate( SYM_EPSILON );
	scxclu[lastsc] = xcluflg;
	sceof[lastsc] = false;
	}


/* sclookup - lookup the number associated with a start condition
 *
 * Returns 0 if no such start condition.
 */

int sclookup( str )
char str[];
	{
	return findsym( str, sctbl, START_COND_HASH_SIZE )->int_val;
	}
/* tblcmp - table compression routines */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */



/* declarations for functions that have forward references */

void mkentry PROTO((register int*, int, int, int, int));
void mkprot PROTO((int[], int, int));
void mktemplate PROTO((int[], int, int));
void mv2front PROTO((int));
int tbldiff PROTO((int[], int, int[]));


/* bldtbl - build table entries for dfa state
 *
 * synopsis
 *   int state[numecs], statenum, totaltrans, comstate, comfreq;
 *   bldtbl( state, statenum, totaltrans, comstate, comfreq );
 *
 * State is the statenum'th dfa state.  It is indexed by equivalence class and
 * gives the number of the state to enter for a given equivalence class.
 * totaltrans is the total number of transitions out of the state.  Comstate
 * is that state which is the destination of the most transitions out of State.
 * Comfreq is how many transitions there are out of State to Comstate.
 *
 * A note on terminology:
 *    "protos" are transition tables which have a high probability of
 * either being redundant (a state processed later will have an identical
 * transition table) or nearly redundant (a state processed later will have
 * many of the same out-transitions).  A "most recently used" queue of
 * protos is kept around with the hope that most states will find a proto
 * which is similar enough to be usable, and therefore compacting the
 * output tables.
 *    "templates" are a special type of proto.  If a transition table is
 * homogeneous or nearly homogeneous (all transitions go to the same
 * destination) then the odds are good that future states will also go
 * to the same destination state on basically the same character set.
 * These homogeneous states are so common when dealing with large rule
 * sets that they merit special attention.  If the transition table were
 * simply made into a proto, then (typically) each subsequent, similar
 * state will differ from the proto for two out-transitions.  One of these
 * out-transitions will be that character on which the proto does not go
 * to the common destination, and one will be that character on which the
 * state does not go to the common destination.  Templates, on the other
 * hand, go to the common state on EVERY transition character, and therefore
 * cost only one difference.
 */

void bldtbl( state, statenum, totaltrans, comstate, comfreq )
int state[], statenum, totaltrans, comstate, comfreq;
	{
	int extptr, extrct[2][CSIZE + 1];
	int mindiff, minprot, i, d;

	/* If extptr is 0 then the first array of extrct holds the result
	 * of the "best difference" to date, which is those transitions
	 * which occur in "state" but not in the proto which, to date,
	 * has the fewest differences between itself and "state".  If
	 * extptr is 1 then the second array of extrct hold the best
	 * difference.  The two arrays are toggled between so that the
	 * best difference to date can be kept around and also a difference
	 * just created by checking against a candidate "best" proto.
	 */

	extptr = 0;

	/* If the state has too few out-transitions, don't bother trying to
	 * compact its tables.
	 */

	if ( (totaltrans * 100) < (numecs * PROTO_SIZE_PERCENTAGE) )
		mkentry( state, numecs, statenum, JAMSTATE, totaltrans );

	else
		{
		/* "checkcom" is true if we should only check "state" against
		 * protos which have the same "comstate" value.
		 */
		int checkcom =
			comfreq * 100 > totaltrans * CHECK_COM_PERCENTAGE;

		minprot = firstprot;
		mindiff = totaltrans;

		if ( checkcom )
			{
			/* Find first proto which has the same "comstate". */
			for ( i = firstprot; i != NIL; i = protnext[i] )
				if ( protcomst[i] == comstate )
					{
					minprot = i;
					mindiff = tbldiff( state, minprot,
							extrct[extptr] );
					break;
					}
			}

		else
			{
			/* Since we've decided that the most common destination
			 * out of "state" does not occur with a high enough
			 * frequency, we set the "comstate" to zero, assuring
			 * that if this state is entered into the proto list,
			 * it will not be considered a template.
			 */
			comstate = 0;

			if ( firstprot != NIL )
				{
				minprot = firstprot;
				mindiff = tbldiff( state, minprot,
						extrct[extptr] );
				}
			}

		/* We now have the first interesting proto in "minprot".  If
		 * it matches within the tolerances set for the first proto,
		 * we don't want to bother scanning the rest of the proto list
		 * to see if we have any other reasonable matches.
		 */

		if ( mindiff * 100 > totaltrans * FIRST_MATCH_DIFF_PERCENTAGE )
			{
			/* Not a good enough match.  Scan the rest of the
			 * protos.
			 */
			for ( i = minprot; i != NIL; i = protnext[i] )
				{
				d = tbldiff( state, i, extrct[1 - extptr] );
				if ( d < mindiff )
					{
					extptr = 1 - extptr;
					mindiff = d;
					minprot = i;
					}
				}
			}

		/* Check if the proto we've decided on as our best bet is close
		 * enough to the state we want to match to be usable.
		 */

		if ( mindiff * 100 > totaltrans * ACCEPTABLE_DIFF_PERCENTAGE )
			{
			/* No good.  If the state is homogeneous enough,
			 * we make a template out of it.  Otherwise, we
			 * make a proto.
			 */

			if ( comfreq * 100 >=
			     totaltrans * TEMPLATE_SAME_PERCENTAGE )
				mktemplate( state, statenum, comstate );

			else
				{
				mkprot( state, statenum, comstate );
				mkentry( state, numecs, statenum,
					JAMSTATE, totaltrans );
				}
			}

		else
			{ /* use the proto */
			mkentry( extrct[extptr], numecs, statenum,
				prottbl[minprot], mindiff );

			/* If this state was sufficiently different from the
			 * proto we built it from, make it, too, a proto.
			 */

			if ( mindiff * 100 >=
			     totaltrans * NEW_PROTO_DIFF_PERCENTAGE )
				mkprot( state, statenum, comstate );

			/* Since mkprot added a new proto to the proto queue,
			 * it's possible that "minprot" is no longer on the
			 * proto queue (if it happened to have been the last
			 * entry, it would have been bumped off).  If it's
			 * not there, then the new proto took its physical
			 * place (though logically the new proto is at the
			 * beginning of the queue), so in that case the
			 * following call will do nothing.
			 */

			mv2front( minprot );
			}
		}
	}


/* cmptmps - compress template table entries
 *
 * Template tables are compressed by using the 'template equivalence
 * classes', which are collections of transition character equivalence
 * classes which always appear together in templates - really meta-equivalence
 * classes.
 */

void cmptmps()
	{
	int tmpstorage[CSIZE + 1];
	register int *tmp = tmpstorage, i, j;
	int totaltrans, trans;

	peakpairs = numtemps * numecs + tblend;

	if ( usemecs )
		{
		/* Create equivalence classes based on data gathered on
		 * template transitions.
		 */
		nummecs = cre8ecs( tecfwd, tecbck, numecs );
		}

	else
		nummecs = numecs;

	while ( lastdfa + numtemps + 1 >= current_max_dfas )
		increase_max_dfas();

	/* Loop through each template. */

	for ( i = 1; i <= numtemps; ++i )
		{
		/* Number of non-jam transitions out of this template. */
		totaltrans = 0;

		for ( j = 1; j <= numecs; ++j )
			{
			trans = tnxt[numecs * i + j];

			if ( usemecs )
				{
				/* The absolute value of tecbck is the
				 * meta-equivalence class of a given
				 * equivalence class, as set up by cre8ecs().
				 */
				if ( tecbck[j] > 0 )
					{
					tmp[tecbck[j]] = trans;

					if ( trans > 0 )
						++totaltrans;
					}
				}

			else
				{
				tmp[j] = trans;

				if ( trans > 0 )
					++totaltrans;
				}
			}

		/* It is assumed (in a rather subtle way) in the skeleton
		 * that if we're using meta-equivalence classes, the def[]
		 * entry for all templates is the jam template, i.e.,
		 * templates never default to other non-jam table entries
		 * (e.g., another template)
		 */

		/* Leave room for the jam-state after the last real state. */
		mkentry( tmp, nummecs, lastdfa + i + 1, JAMSTATE, totaltrans );
		}
	}



/* expand_nxt_chk - expand the next check arrays */

void expand_nxt_chk()
	{
	register int old_max = current_max_xpairs;

	current_max_xpairs += MAX_XPAIRS_INCREMENT;

	++num_reallocs;

	nxt = reallocate_integer_array( nxt, current_max_xpairs );
	chk = reallocate_integer_array( chk, current_max_xpairs );

	zero_out( (char *) (chk + old_max),
		(size_t) (MAX_XPAIRS_INCREMENT * sizeof( int )) );
	}


/* find_table_space - finds a space in the table for a state to be placed
 *
 * synopsis
 *     int *state, numtrans, block_start;
 *     int find_table_space();
 *
 *     block_start = find_table_space( state, numtrans );
 *
 * State is the state to be added to the full speed transition table.
 * Numtrans is the number of out-transitions for the state.
 *
 * find_table_space() returns the position of the start of the first block (in
 * chk) able to accommodate the state
 *
 * In determining if a state will or will not fit, find_table_space() must take
 * into account the fact that an end-of-buffer state will be added at [0],
 * and an action number will be added in [-1].
 */

int find_table_space( state, numtrans )
int *state, numtrans;
	{
	/* Firstfree is the position of the first possible occurrence of two
	 * consecutive unused records in the chk and nxt arrays.
	 */
	register int i;
	register int *state_ptr, *chk_ptr;
	register int *ptr_to_last_entry_in_state;

	/* If there are too many out-transitions, put the state at the end of
	 * nxt and chk.
	 */
	if ( numtrans > MAX_XTIONS_FULL_INTERIOR_FIT )
		{
		/* If table is empty, return the first available spot in
		 * chk/nxt, which should be 1.
		 */
		if ( tblend < 2 )
			return 1;

		/* Start searching for table space near the end of
		 * chk/nxt arrays.
		 */
		i = tblend - numecs;
		}

	else
		/* Start searching for table space from the beginning
		 * (skipping only the elements which will definitely not
		 * hold the new state).
		 */
		i = firstfree;

	while ( 1 )	/* loops until a space is found */
		{
		while ( i + numecs >= current_max_xpairs )
			expand_nxt_chk();

		/* Loops until space for end-of-buffer and action number
		 * are found.
		 */
		while ( 1 )
			{
			/* Check for action number space. */
			if ( chk[i - 1] == 0 )
				{
				/* Check for end-of-buffer space. */
				if ( chk[i] == 0 )
					break;

				else
					/* Since i != 0, there is no use
					 * checking to see if (++i) - 1 == 0,
					 * because that's the same as i == 0,
					 * so we skip a space.
					 */
					i += 2;
				}

			else
				++i;

			while ( i + numecs >= current_max_xpairs )
				expand_nxt_chk();
			}

		/* If we started search from the beginning, store the new
		 * firstfree for the next call of find_table_space().
		 */
		if ( numtrans <= MAX_XTIONS_FULL_INTERIOR_FIT )
			firstfree = i + 1;

		/* Check to see if all elements in chk (and therefore nxt)
		 * that are needed for the new state have not yet been taken.
		 */

		state_ptr = &state[1];
		ptr_to_last_entry_in_state = &chk[i + numecs + 1];

		for ( chk_ptr = &chk[i + 1];
		      chk_ptr != ptr_to_last_entry_in_state; ++chk_ptr )
			if ( *(state_ptr++) != 0 && *chk_ptr != 0 )
				break;

		if ( chk_ptr == ptr_to_last_entry_in_state )
			return i;

		else
		++i;
		}
	}


/* inittbl - initialize transition tables
 *
 * Initializes "firstfree" to be one beyond the end of the table.  Initializes
 * all "chk" entries to be zero.
 */
void inittbl()
	{
	register int i;

	zero_out( (char *) chk, (size_t) (current_max_xpairs * sizeof( int )) );

	tblend = 0;
	firstfree = tblend + 1;
	numtemps = 0;

	if ( usemecs )
		{
		/* Set up doubly-linked meta-equivalence classes; these
		 * are sets of equivalence classes which all have identical
		 * transitions out of TEMPLATES.
		 */

		tecbck[1] = NIL;

		for ( i = 2; i <= numecs; ++i )
			{
			tecbck[i] = i - 1;
			tecfwd[i - 1] = i;
			}

		tecfwd[numecs] = NIL;
		}
	}


/* mkdeftbl - make the default, "jam" table entries */

void mkdeftbl()
	{
	int i;

	jamstate = lastdfa + 1;

	++tblend; /* room for transition on end-of-buffer character */

	while ( tblend + numecs >= current_max_xpairs )
		expand_nxt_chk();

	/* Add in default end-of-buffer transition. */
	nxt[tblend] = end_of_buffer_state;
	chk[tblend] = jamstate;

	for ( i = 1; i <= numecs; ++i )
		{
		nxt[tblend + i] = 0;
		chk[tblend + i] = jamstate;
		}

	jambase = tblend;

	base[jamstate] = jambase;
	def[jamstate] = 0;

	tblend += numecs;
	++numtemps;
	}


/* mkentry - create base/def and nxt/chk entries for transition array
 *
 * synopsis
 *   int state[numchars + 1], numchars, statenum, deflink, totaltrans;
 *   mkentry( state, numchars, statenum, deflink, totaltrans );
 *
 * "state" is a transition array "numchars" characters in size, "statenum"
 * is the offset to be used into the base/def tables, and "deflink" is the
 * entry to put in the "def" table entry.  If "deflink" is equal to
 * "JAMSTATE", then no attempt will be made to fit zero entries of "state"
 * (i.e., jam entries) into the table.  It is assumed that by linking to
 * "JAMSTATE" they will be taken care of.  In any case, entries in "state"
 * marking transitions to "SAME_TRANS" are treated as though they will be
 * taken care of by whereever "deflink" points.  "totaltrans" is the total
 * number of transitions out of the state.  If it is below a certain threshold,
 * the tables are searched for an interior spot that will accommodate the
 * state array.
 */

void mkentry( state, numchars, statenum, deflink, totaltrans )
register int *state;
int numchars, statenum, deflink, totaltrans;
	{
	register int minec, maxec, i, baseaddr;
	int tblbase, tbllast;

	if ( totaltrans == 0 )
		{ /* there are no out-transitions */
		if ( deflink == JAMSTATE )
			base[statenum] = JAMSTATE;
		else
			base[statenum] = 0;

		def[statenum] = deflink;
		return;
		}

	for ( minec = 1; minec <= numchars; ++minec )
		{
		if ( state[minec] != SAME_TRANS )
			if ( state[minec] != 0 || deflink != JAMSTATE )
				break;
		}

	if ( totaltrans == 1 )
		{
		/* There's only one out-transition.  Save it for later to fill
		 * in holes in the tables.
		 */
		stack1( statenum, minec, state[minec], deflink );
		return;
		}

	for ( maxec = numchars; maxec > 0; --maxec )
		{
		if ( state[maxec] != SAME_TRANS )
			if ( state[maxec] != 0 || deflink != JAMSTATE )
				break;
		}

	/* Whether we try to fit the state table in the middle of the table
	 * entries we have already generated, or if we just take the state
	 * table at the end of the nxt/chk tables, we must make sure that we
	 * have a valid base address (i.e., non-negative).  Note that
	 * negative base addresses dangerous at run-time (because indexing
	 * the nxt array with one and a low-valued character will access
	 * memory before the start of the array.
	 */

	/* Find the first transition of state that we need to worry about. */
	if ( totaltrans * 100 <= numchars * INTERIOR_FIT_PERCENTAGE )
		{
		/* Attempt to squeeze it into the middle of the tables. */
		baseaddr = firstfree;

		while ( baseaddr < minec )
			{
			/* Using baseaddr would result in a negative base
			 * address below; find the next free slot.
			 */
			for ( ++baseaddr; chk[baseaddr] != 0; ++baseaddr )
				;
			}

		while ( baseaddr + maxec - minec + 1 >= current_max_xpairs )
			expand_nxt_chk();

		for ( i = minec; i <= maxec; ++i )
			if ( state[i] != SAME_TRANS &&
			     (state[i] != 0 || deflink != JAMSTATE) &&
			     chk[baseaddr + i - minec] != 0 )
				{ /* baseaddr unsuitable - find another */
				for ( ++baseaddr;
				      baseaddr < current_max_xpairs &&
				      chk[baseaddr] != 0; ++baseaddr )
					;

				while ( baseaddr + maxec - minec + 1 >=
					current_max_xpairs )
					expand_nxt_chk();

				/* Reset the loop counter so we'll start all
				 * over again next time it's incremented.
				 */

				i = minec - 1;
				}
		}

	else
		{
		/* Ensure that the base address we eventually generate is
		 * non-negative.
		 */
		baseaddr = MAX( tblend + 1, minec );
		}

	tblbase = baseaddr - minec;
	tbllast = tblbase + maxec;

	while ( tbllast + 1 >= current_max_xpairs )
		expand_nxt_chk();

	base[statenum] = tblbase;
	def[statenum] = deflink;

	for ( i = minec; i <= maxec; ++i )
		if ( state[i] != SAME_TRANS )
			if ( state[i] != 0 || deflink != JAMSTATE )
				{
				nxt[tblbase + i] = state[i];
				chk[tblbase + i] = statenum;
				}

	if ( baseaddr == firstfree )
		/* Find next free slot in tables. */
		for ( ++firstfree; chk[firstfree] != 0; ++firstfree )
			;

	tblend = MAX( tblend, tbllast );
	}


/* mk1tbl - create table entries for a state (or state fragment) which
 *            has only one out-transition
 */

void mk1tbl( state, sym, onenxt, onedef )
int state, sym, onenxt, onedef;
	{
	if ( firstfree < sym )
		firstfree = sym;

	while ( chk[firstfree] != 0 )
		if ( ++firstfree >= current_max_xpairs )
			expand_nxt_chk();

	base[state] = firstfree - sym;
	def[state] = onedef;
	chk[firstfree] = state;
	nxt[firstfree] = onenxt;

	if ( firstfree > tblend )
		{
		tblend = firstfree++;

		if ( firstfree >= current_max_xpairs )
			expand_nxt_chk();
		}
	}


/* mkprot - create new proto entry */

void mkprot( state, statenum, comstate )
int state[], statenum, comstate;
	{
	int i, slot, tblbase;

	if ( ++numprots >= MSP || numecs * numprots >= PROT_SAVE_SIZE )
		{
		/* Gotta make room for the new proto by dropping last entry in
		 * the queue.
		 */
		slot = lastprot;
		lastprot = protprev[lastprot];
		protnext[lastprot] = NIL;
		}

	else
		slot = numprots;

	protnext[slot] = firstprot;

	if ( firstprot != NIL )
		protprev[firstprot] = slot;

	firstprot = slot;
	prottbl[slot] = statenum;
	protcomst[slot] = comstate;

	/* Copy state into save area so it can be compared with rapidly. */
	tblbase = numecs * (slot - 1);

	for ( i = 1; i <= numecs; ++i )
		protsave[tblbase + i] = state[i];
	}


/* mktemplate - create a template entry based on a state, and connect the state
 *              to it
 */

void mktemplate( state, statenum, comstate )
int state[], statenum, comstate;
	{
	int i, numdiff, tmpbase, tmp[CSIZE + 1];
	Char transset[CSIZE + 1];
	int tsptr;

	++numtemps;

	tsptr = 0;

	/* Calculate where we will temporarily store the transition table
	 * of the template in the tnxt[] array.  The final transition table
	 * gets created by cmptmps().
	 */

	tmpbase = numtemps * numecs;

	if ( tmpbase + numecs >= current_max_template_xpairs )
		{
		current_max_template_xpairs += MAX_TEMPLATE_XPAIRS_INCREMENT;

		++num_reallocs;

		tnxt = reallocate_integer_array( tnxt,
			current_max_template_xpairs );
		}

	for ( i = 1; i <= numecs; ++i )
		if ( state[i] == 0 )
			tnxt[tmpbase + i] = 0;
		else
			{
			transset[tsptr++] = i;
			tnxt[tmpbase + i] = comstate;
			}

	if ( usemecs )
		mkeccl( transset, tsptr, tecfwd, tecbck, numecs, 0 );

	mkprot( tnxt + tmpbase, -numtemps, comstate );

	/* We rely on the fact that mkprot adds things to the beginning
	 * of the proto queue.
	 */

	numdiff = tbldiff( state, firstprot, tmp );
	mkentry( tmp, numecs, statenum, -numtemps, numdiff );
	}


/* mv2front - move proto queue element to front of queue */

void mv2front( qelm )
int qelm;
	{
	if ( firstprot != qelm )
		{
		if ( qelm == lastprot )
			lastprot = protprev[lastprot];

		protnext[protprev[qelm]] = protnext[qelm];

		if ( protnext[qelm] != NIL )
			protprev[protnext[qelm]] = protprev[qelm];

		protprev[qelm] = NIL;
		protnext[qelm] = firstprot;
		protprev[firstprot] = qelm;
		firstprot = qelm;
		}
	}


/* place_state - place a state into full speed transition table
 *
 * State is the statenum'th state.  It is indexed by equivalence class and
 * gives the number of the state to enter for a given equivalence class.
 * Transnum is the number of out-transitions for the state.
 */

void place_state( state, statenum, transnum )
int *state, statenum, transnum;
	{
	register int i;
	register int *state_ptr;
	int position = find_table_space( state, transnum );

	/* "base" is the table of start positions. */
	base[statenum] = position;

	/* Put in action number marker; this non-zero number makes sure that
	 * find_table_space() knows that this position in chk/nxt is taken
	 * and should not be used for another accepting number in another
	 * state.
	 */
	chk[position - 1] = 1;

	/* Put in end-of-buffer marker; this is for the same purposes as
	 * above.
	 */
	chk[position] = 1;

	/* Place the state into chk and nxt. */
	state_ptr = &state[1];

	for ( i = 1; i <= numecs; ++i, ++state_ptr )
		if ( *state_ptr != 0 )
			{
			chk[position + i] = i;
			nxt[position + i] = *state_ptr;
			}

	if ( position + numecs > tblend )
		tblend = position + numecs;
	}


/* stack1 - save states with only one out-transition to be processed later
 *
 * If there's room for another state on the "one-transition" stack, the
 * state is pushed onto it, to be processed later by mk1tbl.  If there's
 * no room, we process the sucker right now.
 */

void stack1( statenum, sym, nextstate, deflink )
int statenum, sym, nextstate, deflink;
	{
	if ( onesp >= ONE_STACK_SIZE - 1 )
		mk1tbl( statenum, sym, nextstate, deflink );

	else
		{
		++onesp;
		onestate[onesp] = statenum;
		onesym[onesp] = sym;
		onenext[onesp] = nextstate;
		onedef[onesp] = deflink;
		}
	}


/* tbldiff - compute differences between two state tables
 *
 * "state" is the state array which is to be extracted from the pr'th
 * proto.  "pr" is both the number of the proto we are extracting from
 * and an index into the save area where we can find the proto's complete
 * state table.  Each entry in "state" which differs from the corresponding
 * entry of "pr" will appear in "ext".
 *
 * Entries which are the same in both "state" and "pr" will be marked
 * as transitions to "SAME_TRANS" in "ext".  The total number of differences
 * between "state" and "pr" is returned as function value.  Note that this
 * number is "numecs" minus the number of "SAME_TRANS" entries in "ext".
 */

int tbldiff( state, pr, ext )
int state[], pr, ext[];
	{
	register int i, *sp = state, *ep = ext, *protp;
	register int numdiff = 0;

	protp = &protsave[numecs * (pr - 1)];

	for ( i = numecs; i > 0; --i )
		{
		if ( *++protp == *++sp )
			*++ep = SAME_TRANS;
		else
			{
			*++ep = *sp;
			++numdiff;
			}
		}

	return numdiff;
	}
/* yylex - scanner front-end for flex */

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */


/* yylex - scan for a regular expression token */

int yylex()
	{
	int toktype;
	static int beglin = false;
	extern char *yytext;

	if ( eofseen )
		toktype = EOF;
	else
		toktype = flexscan();

	if ( toktype == EOF || toktype == 0 )
		{
		eofseen = 1;

		if ( sectnum == 1 )
			{
			synerr( _( "premature EOF" ) );
			sectnum = 2;
			toktype = SECTEND;
			}

		else
			toktype = 0;
		}

	if ( trace )
		{
		if ( beglin )
			{
			fprintf( err, "%d\t", num_rules + 1 );
			beglin = 0;
			}

		switch ( toktype )
			{
			case '<':
			case '>':
			case '^':
			case '$':
			case '"':
			case '[':
			case ']':
			case '{':
			case '}':
			case '|':
			case '(':
			case ')':
			case '-':
			case '/':
			case '\\':
			case '?':
			case '.':
			case '*':
			case '+':
			case ',':
				(void) putc( toktype, err );
				break;

			case '\n':
				(void) putc( '\n', err );

				if ( sectnum == 2 )
				beglin = 1;

				break;

			case SCDECL:
				fputs( "%s", err );
				break;

			case XSCDECL:
				fputs( "%x", err );
				break;

			case SECTEND:
				fputs( "%%\n", err );

				/* We set beglin to be true so we'll start
				 * writing out numbers as we echo rules.
				 * flexscan() has already assigned sectnum.
				 */
				if ( sectnum == 2 )
					beglin = 1;

				break;

			case NAME:
				fprintf( err, "'%s'", nmstr );
				break;

			case CHAR:
				switch ( yylval )
					{
					case '<':
					case '>':
					case '^':
					case '$':
					case '"':
					case '[':
					case ']':
					case '{':
					case '}':
					case '|':
					case '(':
					case ')':
					case '-':
					case '/':
					case '\\':
					case '?':
					case '.':
					case '*':
					case '+':
					case ',':
						fprintf( err, "\\%c",
							yylval );
						break;

					default:
						if ( ! isascii( yylval ) ||
						     ! isprint( yylval ) )
							fprintf( err,
								"\\%.3o",
							(unsigned int) yylval );
						else
							(void) putc( yylval,
								err );
					break;
					}

				break;

			case NUMBER:
				fprintf( err, "%d", yylval );
				break;

			case PREVCCL:
				fprintf( err, "[%d]", yylval );
				break;

			case EOF_OP:
				fprintf( err, "<<EOF>>" );
				break;

			case OPTION_OP:
				fprintf( err, "%s ", yytext );
				break;

			case OPT_OUTFILE:
			case OPT_PREFIX:
			case CCE_ALNUM:
			case CCE_ALPHA:
			case CCE_BLANK:
			case CCE_CNTRL:
			case CCE_DIGIT:
			case CCE_GRAPH:
			case CCE_LOWER:
			case CCE_PRINT:
			case CCE_PUNCT:
			case CCE_SPACE:
			case CCE_UPPER:
			case CCE_XDIGIT:
				fprintf( err, "%s", yytext );
				break;

			case 0:
				fprintf( err, _( "End Marker\n" ) );
				break;

			default:
				fprintf( err,
				_( "*Something Weird* - tok: %d val: %d\n" ),
					toktype, yylval );
				break;
			}
		}

	return toktype;
	}

/*  A Bison parser, made from ./parse.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	CHAR	257
#define	NUMBER	258
#define	SECTEND	259
#define	SCDECL	260
#define	XSCDECL	261
#define	NAME	262
#define	PREVCCL	263
#define	EOF_OP	264
#define	OPTION_OP	265
#define	OPT_OUTFILE	266
#define	OPT_PREFIX	267
#define	OPT_YYCLASS	268
#define	CCE_ALNUM	269
#define	CCE_ALPHA	270
#define	CCE_BLANK	271
#define	CCE_CNTRL	272
#define	CCE_DIGIT	273
#define	CCE_GRAPH	274
#define	CCE_LOWER	275
#define	CCE_PRINT	276
#define	CCE_PUNCT	277
#define	CCE_SPACE	278
#define	CCE_UPPER	279
#define	CCE_XDIGIT	280


/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */


/* Some versions of bison are broken in that they use alloca() but don't
 * declare it properly.  The following is the patented (just kidding!)
 * #ifdef chud to fix the problem, courtesy of Francois Pinard.
 */
#ifdef YYBISON
/* AIX requires this to be the first thing in the file.  What a piece.  */
# ifdef _AIX
 #pragma alloca
# endif
#endif


/* The remainder of the alloca() cruft has to come after including flexdef.h,
 * so HAVE_ALLOCA_H is (possibly) defined.
 */
#ifdef YYBISON
# ifdef __GNUC__
#  ifndef alloca
#   define alloca __builtin_alloca
#  endif
# else
#  if HAVE_ALLOCA_H
#   include <alloca.h>
#  else
#   ifdef __hpux
void *alloca ();
#   else
#    ifdef __TURBOC__
#     include <malloc.h>
#    else
char *alloca ();
#    endif
#   endif
#  endif
# endif
#endif

/* Bletch, ^^^^ that was ugly! */


int pat, scnum, eps, headcnt, trailcnt, anyccl, lastchar, i, rulelen;
int trlcontxt, xcluflg, currccl, cclsorted, varlength, variable_trail_rule;

int *scon_stk;
int scon_stk_ptr;

static int madeany = false;  /* whether we've made the '.' character class */
int previous_continued_action;	/* whether the previous rule's action was '|' */

/* Expand a POSIX character class expression. */
#define CCL_EXPR(func) \
	{ \
	int c; \
	for ( c = 0; c < csize; ++c ) \
		if ( isascii(c) && func(c) ) \
			ccladd( currccl, c ); \
	}

/* While POSIX defines isblank(), it's not ANSI C. */
#define IS_BLANK(c) ((c) == ' ' || (c) == '\t')

/* On some over-ambitious machines, such as DEC Alpha's, the default
 * token type is "long" instead of "int"; this leads to problems with
 * declaring yylval in flexdef.h.  But so far, all the yacc's I've seen
 * wrap their definitions of YYSTYPE with "#ifndef YYSTYPE"'s, so the
 * following should ensure that the default token type is "int".
 */
#define YYSTYPE int

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		107
#define	YYFLAG		-32768
#define	YYNTBASE	48

#define YYTRANSLATE(x) ((unsigned)(x) <= 280 ? yytranslate[x] : 73)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    42,     2,    36,     2,     2,     2,    43,
    44,    34,    39,    35,    47,    41,    38,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
    27,    33,    40,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    45,     2,    46,    31,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    29,    37,    30,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     6,     7,    11,    14,    15,    17,    19,    21,    23,
    26,    28,    30,    33,    36,    37,    41,    45,    49,    55,
    61,    62,    63,    66,    68,    70,    72,    73,    78,    82,
    83,    87,    89,    91,    93,    96,   100,   103,   105,   109,
   111,   114,   117,   119,   122,   125,   128,   135,   141,   146,
   148,   150,   152,   156,   160,   162,   166,   171,   176,   179,
   182,   183,   185,   187,   189,   191,   193,   195,   197,   199,
   201,   203,   205,   207,   210
};

static const short yyrhs[] = {    49,
    50,    51,    57,    58,     0,     0,    50,    52,    53,     0,
    50,    54,     0,     0,     1,     0,     5,     0,     6,     0,
     7,     0,    53,     8,     0,     8,     0,     1,     0,    11,
    55,     0,    55,    56,     0,     0,    12,    27,     8,     0,
    13,    27,     8,     0,    14,    27,     8,     0,    57,    61,
    58,    59,    28,     0,    57,    61,    29,    57,    30,     0,
     0,     0,    31,    64,     0,    64,     0,    10,     0,     1,
     0,     0,    32,    60,    62,    33,     0,    32,    34,    33,
     0,     0,    62,    35,    63,     0,    63,     0,     1,     0,
     8,     0,    66,    65,     0,    66,    65,    36,     0,    65,
    36,     0,    65,     0,    65,    37,    67,     0,    67,     0,
    65,    38,     0,    67,    68,     0,    68,     0,    68,    34,
     0,    68,    39,     0,    68,    40,     0,    68,    29,     4,
    35,     4,    30,     0,    68,    29,     4,    35,    30,     0,
    68,    29,     4,    30,     0,    41,     0,    69,     0,     9,
     0,    42,    72,    42,     0,    43,    65,    44,     0,     3,
     0,    45,    70,    46,     0,    45,    31,    70,    46,     0,
    70,     3,    47,     3,     0,    70,     3,     0,    70,    71,
     0,     0,    15,     0,    16,     0,    17,     0,    18,     0,
    19,     0,    20,     0,    21,     0,    22,     0,    23,     0,
    24,     0,    25,     0,    26,     0,    72,     3,     0,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   112,   141,   149,   150,   151,   152,   156,   164,   167,   171,
   174,   177,   181,   184,   185,   188,   193,   195,   199,   201,
   203,   206,   219,   255,   279,   302,   306,   310,   313,   330,
   334,   336,   338,   342,   365,   420,   423,   466,   484,   490,
   495,   522,   530,   534,   541,   547,   553,   581,   595,   614,
   636,   654,   661,   664,   667,   678,   681,   688,   716,   727,
   734,   742,   743,   744,   745,   746,   747,   748,   749,   750,
   751,   752,   758,   761,   771
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","CHAR","NUMBER",
"SECTEND","SCDECL","XSCDECL","NAME","PREVCCL","EOF_OP","OPTION_OP","OPT_OUTFILE",
"OPT_PREFIX","OPT_YYCLASS","CCE_ALNUM","CCE_ALPHA","CCE_BLANK","CCE_CNTRL","CCE_DIGIT",
"CCE_GRAPH","CCE_LOWER","CCE_PRINT","CCE_PUNCT","CCE_SPACE","CCE_UPPER","CCE_XDIGIT",
"'='","'\\n'","'{'","'}'","'^'","'<'","'>'","'*'","','","'$'","'|'","'/'","'+'",
"'?'","'.'","'\\\"'","'('","')'","'['","']'","'-'","goal","initlex","sect1",
"sect1end","startconddecl","namelist1","options","optionlist","option","sect2",
"initforrule","flexrule","scon_stk_ptr","scon","namelist2","sconname","rule",
"re","re2","series","singleton","fullccl","ccl","ccl_expr","string", NULL
};
#endif

static const short yyr1[] = {     0,
    48,    49,    50,    50,    50,    50,    51,    52,    52,    53,
    53,    53,    54,    55,    55,    56,    56,    56,    57,    57,
    57,    58,    59,    59,    59,    59,    60,    61,    61,    61,
    62,    62,    62,    63,    64,    64,    64,    64,    65,    65,
    66,    67,    67,    68,    68,    68,    68,    68,    68,    68,
    68,    68,    68,    68,    68,    69,    69,    70,    70,    70,
    70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
    71,    71,    71,    72,    72
};

static const short yyr2[] = {     0,
     5,     0,     3,     2,     0,     1,     1,     1,     1,     2,
     1,     1,     2,     2,     0,     3,     3,     3,     5,     5,
     0,     0,     2,     1,     1,     1,     0,     4,     3,     0,
     3,     1,     1,     1,     2,     3,     2,     1,     3,     1,
     2,     2,     1,     2,     2,     2,     6,     5,     4,     1,
     1,     1,     3,     3,     1,     3,     4,     4,     2,     2,
     0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     2,     0
};

static const short yydefact[] = {     2,
     0,     6,     0,     7,     8,     9,    15,    21,     0,     4,
    13,    30,    12,    11,     3,     0,     0,     0,    14,    27,
     1,    22,    10,     0,     0,     0,     0,     0,    21,     0,
    16,    17,    18,    29,    33,    34,     0,    32,    30,    26,
    55,    52,    25,     0,    50,    75,     0,    61,     0,    24,
    38,     0,    40,    43,    51,    28,     0,    20,    23,     0,
     0,    61,     0,    19,    37,     0,    41,    35,    42,     0,
    44,    45,    46,    31,    74,    53,    54,     0,    59,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    56,    60,    39,    36,     0,    57,     0,    49,     0,
    58,     0,    48,    47,     0,     0,     0
};

static const short yydefgoto[] = {   105,
     1,     3,     8,     9,    15,    10,    11,    19,    12,    21,
    49,    28,    22,    37,    38,    50,    51,    52,    53,    54,
    55,    63,    93,    60
};

static const short yypact[] = {-32768,
    78,-32768,    81,-32768,-32768,-32768,-32768,-32768,     6,-32768,
    -2,     5,-32768,-32768,    -7,   -14,     1,     9,-32768,    28,
-32768,    14,-32768,    55,    65,    74,    57,    30,-32768,    -1,
-32768,-32768,-32768,-32768,-32768,-32768,    58,-32768,    44,-32768,
-32768,-32768,-32768,    24,-32768,-32768,    24,    63,    69,-32768,
    23,    24,    24,    41,-32768,-32768,    90,-32768,-32768,    26,
    27,-32768,     0,-32768,-32768,    24,-32768,    59,    41,    95,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    32,    53,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    24,-32768,     4,-32768,    98,-32768,     2,
-32768,    72,-32768,-32768,   103,   104,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    76,    84,
-32768,-32768,-32768,-32768,    50,    64,    25,-32768,    43,   -49,
-32768,    48,-32768,-32768
};


#define	YYLAST		110


static const short yytable[] = {    40,
    23,    41,    79,    69,   -22,   102,    13,    42,    43,    16,
    17,    18,    24,    14,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    41,    25,    75,    44,
    35,   103,    42,    99,    79,    26,    20,    36,   100,    45,
    46,    47,    29,    48,    69,    92,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    65,    66,
    67,    27,    31,    66,    45,    46,    47,    76,    48,    70,
    77,    61,    32,    58,    71,    20,    68,    97,     2,    72,
    73,    33,    -5,    -5,    -5,     4,     5,     6,    -5,    34,
    56,     7,    57,    62,    95,    66,    64,    36,    96,    98,
   101,   104,   106,   107,    39,    30,    74,    59,    94,    78
};

static const short yycheck[] = {     1,
     8,     3,     3,    53,     0,     4,     1,     9,    10,    12,
    13,    14,    27,     8,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,     3,    27,     3,    31,
     1,    30,     9,    30,     3,    27,    32,     8,    35,    41,
    42,    43,    29,    45,    94,    46,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    36,    37,
    38,    34,     8,    37,    41,    42,    43,    42,    45,    29,
    44,    47,     8,    30,    34,    32,    52,    46,     1,    39,
    40,     8,     5,     6,     7,     5,     6,     7,    11,    33,
    33,    11,    35,    31,    36,    37,    28,     8,     4,    47,
     3,    30,     0,     0,    29,    22,    57,    44,    66,    62
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif
/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(err, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(err, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(err, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(err, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(err, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (err, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (err, yychar, yylval);
#endif
	  fprintf (err, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(err, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (err, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (err, "%s ", yytname[yyrhs[i]]);
      fprintf (err, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
{ /* add default rule */
			int def_rule;

			pat = cclinit();
			cclnegate( pat );

			def_rule = mkstate( -pat );

			/* Remember the number of the default rule so we
			 * don't generate "can't match" warnings for it.
			 */
			default_rule = num_rules;

			finish_rule( def_rule, false, 0, 0 );

			for ( i = 1; i <= lastsc; ++i )
				scset[i] = mkbranch( scset[i], def_rule );

			if ( spprdflt )
				add_action(
				"YY_FATAL_ERROR( \"flex scanner jammed\" )" );
			else
				add_action( "ECHO" );

			add_action( ";\n\tYY_BREAK\n" );
			;
    break;}
case 2:
{ /* initialize for processing rules */

			/* Create default DFA start condition. */
			scinstal( "INITIAL", false );
			;
    break;}
case 6:
{ synerr( "unknown error processing section 1" ); ;
    break;}
case 7:
{
			check_options();
			scon_stk = allocate_integer_array( lastsc + 1 );
			scon_stk_ptr = 0;
			;
    break;}
case 8:
{ xcluflg = false; ;
    break;}
case 9:
{ xcluflg = true; ;
    break;}
case 10:
{ scinstal( nmstr, xcluflg ); ;
    break;}
case 11:
{ scinstal( nmstr, xcluflg ); ;
    break;}
case 12:
{ synerr( "bad start condition list" ); ;
    break;}
case 16:
{
			outfilename = copy_string( nmstr );
			did_outfilename = 1;
			;
    break;}
case 17:
{ prefix = copy_string( nmstr ); ;
    break;}
case 18:
{ yyclass = copy_string( nmstr ); ;
    break;}
case 19:
{ scon_stk_ptr = yyvsp[-3]; ;
    break;}
case 20:
{ scon_stk_ptr = yyvsp[-3]; ;
    break;}
case 22:
{
			/* Initialize for a parse of one rule. */
			trlcontxt = variable_trail_rule = varlength = false;
			trailcnt = headcnt = rulelen = 0;
			current_state_type = STATE_NORMAL;
			previous_continued_action = continued_action;
			in_rule = true;

			new_rule();
			;
    break;}
case 23:
{
			pat = yyvsp[0];
			finish_rule( pat, variable_trail_rule,
				headcnt, trailcnt );

			if ( scon_stk_ptr > 0 )
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					scbol[scon_stk[i]] =
						mkbranch( scbol[scon_stk[i]],
								pat );
				}

			else
				{
				/* Add to all non-exclusive start conditions,
				 * including the default (0) start condition.
				 */

				for ( i = 1; i <= lastsc; ++i )
					if ( ! scxclu[i] )
						scbol[i] = mkbranch( scbol[i],
									pat );
				}

			if ( ! bol_needed )
				{
				bol_needed = true;

				if ( performance_report > 1 )
					pinpoint_message(
			"'^' operator results in sub-optimal performance" );
				}
			;
    break;}
case 24:
{
			pat = yyvsp[0];
			finish_rule( pat, variable_trail_rule,
				headcnt, trailcnt );

			if ( scon_stk_ptr > 0 )
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					scset[scon_stk[i]] =
						mkbranch( scset[scon_stk[i]],
								pat );
				}

			else
				{
				for ( i = 1; i <= lastsc; ++i )
					if ( ! scxclu[i] )
						scset[i] =
							mkbranch( scset[i],
								pat );
				}
			;
    break;}
case 25:
{
			if ( scon_stk_ptr > 0 )
				build_eof_action();
	
			else
				{
				/* This EOF applies to all start conditions
				 * which don't already have EOF actions.
				 */
				for ( i = 1; i <= lastsc; ++i )
					if ( ! sceof[i] )
						scon_stk[++scon_stk_ptr] = i;

				if ( scon_stk_ptr == 0 )
					warn(
			"all start conditions already have <<EOF>> rules" );

				else
					build_eof_action();
				}
			;
    break;}
case 26:
{ synerr( "unrecognized rule" ); ;
    break;}
case 27:
{ yyval = scon_stk_ptr; ;
    break;}
case 28:
{ yyval = yyvsp[-2]; ;
    break;}
case 29:
{
			yyval = scon_stk_ptr;

			for ( i = 1; i <= lastsc; ++i )
				{
				int j;

				for ( j = 1; j <= scon_stk_ptr; ++j )
					if ( scon_stk[j] == i )
						break;

				if ( j > scon_stk_ptr )
					scon_stk[++scon_stk_ptr] = i;
				}
			;
    break;}
case 30:
{ yyval = scon_stk_ptr; ;
    break;}
case 33:
{ synerr( "bad start condition list" ); ;
    break;}
case 34:
{
			if ( (scnum = sclookup( nmstr )) == 0 )
				format_pinpoint_message(
					"undeclared start condition %s",
					nmstr );
			else
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					if ( scon_stk[i] == scnum )
						{
						format_warn(
							"<%s> specified twice",
							scname[scnum] );
						break;
						}

				if ( i > scon_stk_ptr )
					scon_stk[++scon_stk_ptr] = scnum;
				}
			;
    break;}
case 35:
{
			if ( transchar[lastst[yyvsp[0]]] != SYM_EPSILON )
				/* Provide final transition \now/ so it
				 * will be marked as a trailing context
				 * state.
				 */
				yyvsp[0] = link_machines( yyvsp[0],
						mkstate( SYM_EPSILON ) );

			mark_beginning_as_normal( yyvsp[0] );
			current_state_type = STATE_NORMAL;

			if ( previous_continued_action )
				{
				/* We need to treat this as variable trailing
				 * context so that the backup does not happen
				 * in the action but before the action switch
				 * statement.  If the backup happens in the
				 * action, then the rules "falling into" this
				 * one's action will *also* do the backup,
				 * erroneously.
				 */
				if ( ! varlength || headcnt != 0 )
					warn(
		"trailing context made variable due to preceding '|' action" );

				/* Mark as variable. */
				varlength = true;
				headcnt = 0;
				}

			if ( lex_compat || (varlength && headcnt == 0) )
				{ /* variable trailing context rule */
				/* Mark the first part of the rule as the
				 * accepting "head" part of a trailing
				 * context rule.
				 *
				 * By the way, we didn't do this at the
				 * beginning of this production because back
				 * then current_state_type was set up for a
				 * trail rule, and add_accept() can create
				 * a new state ...
				 */
				add_accept( yyvsp[-1],
					num_rules | YY_TRAILING_HEAD_MASK );
				variable_trail_rule = true;
				}
			
			else
				trailcnt = rulelen;

			yyval = link_machines( yyvsp[-1], yyvsp[0] );
			;
    break;}
case 36:
{ synerr( "trailing context used twice" ); ;
    break;}
case 37:
{
			headcnt = 0;
			trailcnt = 1;
			rulelen = 1;
			varlength = false;

			current_state_type = STATE_TRAILING_CONTEXT;

			if ( trlcontxt )
				{
				synerr( "trailing context used twice" );
				yyval = mkstate( SYM_EPSILON );
				}

			else if ( previous_continued_action )
				{
				/* See the comment in the rule for "re2 re"
				 * above.
				 */
				warn(
		"trailing context made variable due to preceding '|' action" );

				varlength = true;
				}

			if ( lex_compat || varlength )
				{
				/* Again, see the comment in the rule for
				 * "re2 re" above.
				 */
				add_accept( yyvsp[-1],
					num_rules | YY_TRAILING_HEAD_MASK );
				variable_trail_rule = true;
				}

			trlcontxt = true;

			eps = mkstate( SYM_EPSILON );
			yyval = link_machines( yyvsp[-1],
				link_machines( eps, mkstate( '\n' ) ) );
			;
    break;}
case 38:
{
			yyval = yyvsp[0];

			if ( trlcontxt )
				{
				if ( lex_compat || (varlength && headcnt == 0) )
					/* Both head and trail are
					 * variable-length.
					 */
					variable_trail_rule = true;
				else
					trailcnt = rulelen;
				}
			;
    break;}
case 39:
{
			varlength = true;
			yyval = mkor( yyvsp[-2], yyvsp[0] );
			;
    break;}
case 40:
{ yyval = yyvsp[0]; ;
    break;}
case 41:
{
			/* This rule is written separately so the
			 * reduction will occur before the trailing
			 * series is parsed.
			 */

			if ( trlcontxt )
				synerr( "trailing context used twice" );
			else
				trlcontxt = true;

			if ( varlength )
				/* We hope the trailing context is
				 * fixed-length.
				 */
				varlength = false;
			else
				headcnt = rulelen;

			rulelen = 0;

			current_state_type = STATE_TRAILING_CONTEXT;
			yyval = yyvsp[-1];
			;
    break;}
case 42:
{
			/* This is where concatenation of adjacent patterns
			 * gets done.
			 */
			yyval = link_machines( yyvsp[-1], yyvsp[0] );
			;
    break;}
case 43:
{ yyval = yyvsp[0]; ;
    break;}
case 44:
{
			varlength = true;

			yyval = mkclos( yyvsp[-1] );
			;
    break;}
case 45:
{
			varlength = true;
			yyval = mkposcl( yyvsp[-1] );
			;
    break;}
case 46:
{
			varlength = true;
			yyval = mkopt( yyvsp[-1] );
			;
    break;}
case 47:
{
			varlength = true;

			if ( yyvsp[-3] > yyvsp[-1] || yyvsp[-3] < 0 )
				{
				synerr( "bad iteration values" );
				yyval = yyvsp[-5];
				}
			else
				{
				if ( yyvsp[-3] == 0 )
					{
					if ( yyvsp[-1] <= 0 )
						{
						synerr(
						"bad iteration values" );
						yyval = yyvsp[-5];
						}
					else
						yyval = mkopt(
							mkrep( yyvsp[-5], 1, yyvsp[-1] ) );
					}
				else
					yyval = mkrep( yyvsp[-5], yyvsp[-3], yyvsp[-1] );
				}
			;
    break;}
case 48:
{
			varlength = true;

			if ( yyvsp[-2] <= 0 )
				{
				synerr( "iteration value must be positive" );
				yyval = yyvsp[-4];
				}

			else
				yyval = mkrep( yyvsp[-4], yyvsp[-2], INFINITY );
			;
    break;}
case 49:
{
			/* The singleton could be something like "(foo)",
			 * in which case we have no idea what its length
			 * is, so we punt here.
			 */
			varlength = true;

			if ( yyvsp[-1] <= 0 )
				{
				synerr( "iteration value must be positive" );
				yyval = yyvsp[-3];
				}

			else
				yyval = link_machines( yyvsp[-3],
						copysingl( yyvsp[-3], yyvsp[-1] - 1 ) );
			;
    break;}
case 50:
{
			if ( ! madeany )
				{
				/* Create the '.' character class. */
				anyccl = cclinit();
				ccladd( anyccl, '\n' );
				cclnegate( anyccl );

				if ( useecs )
					mkeccl( ccltbl + cclmap[anyccl],
						ccllen[anyccl], nextecm,
						ecgroup, csize, csize );

				madeany = true;
				}

			++rulelen;

			yyval = mkstate( -anyccl );
			;
    break;}
case 51:
{
			if ( ! cclsorted )
				/* Sort characters for fast searching.  We
				 * use a shell sort since this list could
				 * be large.
				 */
				cshell( ccltbl + cclmap[yyvsp[0]], ccllen[yyvsp[0]], true );

			if ( useecs )
				mkeccl( ccltbl + cclmap[yyvsp[0]], ccllen[yyvsp[0]],
					nextecm, ecgroup, csize, csize );

			++rulelen;

			yyval = mkstate( -yyvsp[0] );
			;
    break;}
case 52:
{
			++rulelen;

			yyval = mkstate( -yyvsp[0] );
			;
    break;}
case 53:
{ yyval = yyvsp[-1]; ;
    break;}
case 54:
{ yyval = yyvsp[-1]; ;
    break;}
case 55:
{
			++rulelen;

			if ( caseins && yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				yyvsp[0] = clower( yyvsp[0] );

			yyval = mkstate( yyvsp[0] );
			;
    break;}
case 56:
{ yyval = yyvsp[-1]; ;
    break;}
case 57:
{
			cclnegate( yyvsp[-1] );
			yyval = yyvsp[-1];
			;
    break;}
case 58:
{
			if ( caseins )
				{
				if ( yyvsp[-2] >= 'A' && yyvsp[-2] <= 'Z' )
					yyvsp[-2] = clower( yyvsp[-2] );
				if ( yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
					yyvsp[0] = clower( yyvsp[0] );
				}

			if ( yyvsp[-2] > yyvsp[0] )
				synerr( "negative range in character class" );

			else
				{
				for ( i = yyvsp[-2]; i <= yyvsp[0]; ++i )
					ccladd( yyvsp[-3], i );

				/* Keep track if this ccl is staying in
				 * alphabetical order.
				 */
				cclsorted = cclsorted && (yyvsp[-2] > lastchar);
				lastchar = yyvsp[0];
				}

			yyval = yyvsp[-3];
			;
    break;}
case 59:
{
			if ( caseins && yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				yyvsp[0] = clower( yyvsp[0] );

			ccladd( yyvsp[-1], yyvsp[0] );
			cclsorted = cclsorted && (yyvsp[0] > lastchar);
			lastchar = yyvsp[0];
			yyval = yyvsp[-1];
			;
    break;}
case 60:
{
			/* Too hard to properly maintain cclsorted. */
			cclsorted = false;
			yyval = yyvsp[-1];
			;
    break;}
case 61:
{
			cclsorted = true;
			lastchar = 0;
			currccl = yyval = cclinit();
			;
    break;}
case 62:
{ CCL_EXPR(isalnum) ;
    break;}
case 63:
{ CCL_EXPR(isalpha) ;
    break;}
case 64:
{ CCL_EXPR(IS_BLANK) ;
    break;}
case 65:
{ CCL_EXPR(iscntrl) ;
    break;}
case 66:
{ CCL_EXPR(isdigit) ;
    break;}
case 67:
{ CCL_EXPR(isgraph) ;
    break;}
case 68:
{ CCL_EXPR(islower) ;
    break;}
case 69:
{ CCL_EXPR(isprint) ;
    break;}
case 70:
{ CCL_EXPR(ispunct) ;
    break;}
case 71:
{ CCL_EXPR(isspace) ;
    break;}
case 72:
{
				if ( caseins )
					CCL_EXPR(islower)
				else
					CCL_EXPR(isupper)
				;
    break;}
case 73:
{ CCL_EXPR(isxdigit) ;
    break;}
case 74:
{
			if ( caseins && yyvsp[0] >= 'A' && yyvsp[0] <= 'Z' )
				yyvsp[0] = clower( yyvsp[0] );

			++rulelen;

			yyval = link_machines( yyvsp[-1], mkstate( yyvsp[0] ) );
			;
    break;}
case 75:
{ yyval = mkstate( SYM_EPSILON ); ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (err, "state stack now");
      while (ssp1 != yyssp)
	fprintf (err, " %d", *++ssp1);
      fprintf (err, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(err, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (err, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (err, " %d", *++ssp1);
      fprintf (err, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(err, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}



/* build_eof_action - build the "<<EOF>>" action for the active start
 *                    conditions
 */

void build_eof_action()
	{
	register int i;
	char action_text[MAXLINE];

	for ( i = 1; i <= scon_stk_ptr; ++i )
		{
		if ( sceof[scon_stk[i]] )
			format_pinpoint_message(
				"multiple <<EOF>> rules for start condition %s",
				scname[scon_stk[i]] );

		else
			{
			sceof[scon_stk[i]] = true;
			sprintf( action_text, "case YY_STATE_EOF(%s):\n",
				scname[scon_stk[i]] );
			add_action( action_text );
			}
		}

	line_directive_out( (FILE *) 0, 1 );

	/* This isn't a normal rule after all - don't count it as
	 * such, so we don't have any holes in the rule numbering
	 * (which make generating "rule can never match" warnings
	 * more difficult.
	 */
	--num_rules;
	++num_eof_rules;
	}


/* format_synerr - write out formatted syntax error */

void format_synerr( msg, arg )
char msg[], arg[];
	{
	char errmsg[MAXLINE];

	(void) sprintf( errmsg, msg, arg );
	synerr( errmsg );
	}


/* synerr - report a syntax error */

void synerr( str )
char str[];
	{
	syntaxerror = true;
	pinpoint_message( str );
	}


/* format_warn - write out formatted warning */

void format_warn( msg, arg )
char msg[], arg[];
	{
	char warn_msg[MAXLINE];

	(void) sprintf( warn_msg, msg, arg );
	warn( warn_msg );
	}


/* warn - report a warning, unless -w was given */

void warn( str )
char str[];
	{
	line_warning( str, linenum );
	}

/* format_pinpoint_message - write out a message formatted with one string,
 *			     pinpointing its location
 */

void format_pinpoint_message( msg, arg )
char msg[], arg[];
	{
	char errmsg[MAXLINE];

	(void) sprintf( errmsg, msg, arg );
	pinpoint_message( errmsg );
	}


/* pinpoint_message - write out a message, pinpointing its location */

void pinpoint_message( str )
char str[];
	{
	line_pinpoint( str, linenum );
	}


/* line_warning - report a warning at a given line, unless -w was given */

void line_warning( str, line )
char str[];
int line;
	{
	char warning[MAXLINE];

	if ( ! nowarn )
		{
		sprintf( warning, "warning, %s", str );
		line_pinpoint( warning, line );
		}
	}


/* line_pinpoint - write out a message, pinpointing it at the given line */

void line_pinpoint( str, line )
char str[];
int line;
	{
	fprintf( err, "\"%s\", line %d: %s\n", infilename, line, str );
	}


/* yyerror - eat up an error message from the parser;
 *	     currently, messages are ignore
 */

void yyerror( msg )
char msg[];
	{
	}
/* A lexical scanner generated by flex */

/* Scanner skeleton version:
 * $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $
 */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5

#include <stdio.h>


/* cfront 1.2 defines "c_plusplus" instead of "__cplusplus" */
#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif


#ifdef __cplusplus

#include <stdlib.h>
#include <unistd.h>

/* Use prototypes in function declarations. */
#define YY_USE_PROTOS

/* The "const" storage-class-modifier is valid. */
#define YY_USE_CONST

#else	/* ! __cplusplus */

#if __STDC__

#define YY_USE_PROTOS
#define YY_USE_CONST

#endif	/* __STDC__ */
#endif	/* ! __cplusplus */

#ifdef __TURBOC__
 #pragma warn -rch
 #pragma warn -use
#include <io.h>
#include <stdlib.h>
#define YY_USE_CONST
#define YY_USE_PROTOS
#endif

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif


#ifdef YY_USE_PROTOS
#define YY_PROTO(proto) proto
#else
#define YY_PROTO(proto) ()
#endif

/* Returned upon end-of-file. */
#define YY_NULL 0

/* Promotes a possibly negative, possibly signed char to an unsigned
 * integer for use as an array index.  If the signed char is negative,
 * we want to instead treat it as an 8-bit unsigned char, hence the
 * double cast.
 */
#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)

/* Enter a start condition.  This macro really ought to take a parameter,
 * but we do it the disgusting crufty way forced on us by the ()-less
 * definition of BEGIN.
 */
#define BEGIN yy_start = 1 + 2 *

/* Translate the current start state into a value that can be later handed
 * to BEGIN to return to the state.  The YYSTATE alias is for lex
 * compatibility.
 */
#define YY_START ((yy_start - 1) / 2)
#define YYSTATE YY_START

/* Action number for EOF rule of a given start state. */
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)

/* Special action meaning "start processing a new file". */
#define YY_NEW_FILE yyrestart( yyin )

#define YY_END_OF_BUFFER_CHAR 0

/* Size of default input buffer. */
#define YY_BUF_SIZE 16384

typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern int yyleng;
extern FILE *yyin, *yyout;

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2

/* The funky do-while in the following #define is used to turn the definition
 * int a single C statement (which needs a semi-colon terminator).  This
 * avoids problems with code like:
 *
 * 	if ( condition_holds )
 *		yyless( 5 );
 *	else
 *		do_something_else();
 *
 * Prior to using the do-while the compiler would get upset at the
 * "else" because it interpreted the "if" statement as being all
 * done when it reached the ';' after the yyless() call.
 */

/* Return all but the first 'n' matched characters back to the input stream. */

#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
		*yy_cp = yy_hold_char; \
		YY_RESTORE_YY_MORE_OFFSET \
		yy_c_buf_p = yy_cp = yy_bp + n - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION; /* set up yytext again */ \
		} \
	while ( 0 )

#define unput(c) yyunput( c, yytext_ptr )

/* The following is because we cannot portably get our hands on size_t
 * (without autoconf's help, which isn't available because we want
 * flex-generated scanners to compile on their own).
 */
typedef unsigned int yy_size_t;


struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	yy_size_t yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;
#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1
	/* When an EOF's been seen but there's still some text to process
	 * then we mark the buffer as YY_EOF_PENDING, to indicate that we
	 * shouldn't try reading from the input source any more.  We might
	 * still have a bunch of tokens to match, though, because of
	 * possible backing-up.
	 *
	 * When we actually see the EOF, we change the status to "new"
	 * (via yyrestart()), so that the user can continue scanning by
	 * just pointing yyin at a new input file.
	 */
#define YY_BUFFER_EOF_PENDING 2
	};

static YY_BUFFER_STATE yy_current_buffer = 0;

/* We provide macros for accessing buffer states in case in the
 * future we want to put the buffer states in a more general
 * "scanner state".
 */
#define YY_CURRENT_BUFFER yy_current_buffer


/* yy_hold_char holds the character lost when yytext is formed. */
static char yy_hold_char;

static int yy_n_chars;		/* number of characters read into yy_ch_buf */


int yyleng;

/* Points to current character in buffer. */
static char *yy_c_buf_p = (char *) 0;
static int yy_init = 1;		/* whether we need to initialize */
static int yy_start = 0;	/* start state number */

/* Flag which is used to allow yywrap()'s to do buffer switches
 * instead of setting up a fresh yyin.  A bit of a hack ...
 */
static int yy_did_buffer_switch_on_eof;

void yyrestart YY_PROTO(( FILE *input_file ));

void yy_switch_to_buffer YY_PROTO(( YY_BUFFER_STATE new_buffer ));
void yy_load_buffer_state YY_PROTO(( void ));
YY_BUFFER_STATE yy_create_buffer YY_PROTO(( FILE *file, int size ));
void yy_delete_buffer YY_PROTO(( YY_BUFFER_STATE b ));
void yy_init_buffer YY_PROTO(( YY_BUFFER_STATE b, FILE *file ));
void yy_flush_buffer YY_PROTO(( YY_BUFFER_STATE b ));
#define YY_FLUSH_BUFFER yy_flush_buffer( yy_current_buffer )

YY_BUFFER_STATE yy_scan_buffer YY_PROTO(( char *base, yy_size_t size ));
YY_BUFFER_STATE yy_scan_string YY_PROTO(( yyconst char *str ));
YY_BUFFER_STATE yy_scan_bytes YY_PROTO(( yyconst char *bytes, int len ));

static void *yy_flex_alloc YY_PROTO(( yy_size_t ));
static void *yy_flex_realloc YY_PROTO(( void *, yy_size_t ));
static void yy_flex_free YY_PROTO(( void * ));

#define yy_new_buffer yy_create_buffer

#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! yy_current_buffer ) \
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \
	yy_current_buffer->yy_is_interactive = is_interactive; \
	}

#define yy_set_bol(at_bol) \
	{ \
	if ( ! yy_current_buffer ) \
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \
	yy_current_buffer->yy_at_bol = at_bol; \
	}

#define YY_AT_BOL() (yy_current_buffer->yy_at_bol)

typedef unsigned char YY_CHAR;
FILE *yyin = (FILE *) 0, *yyout = (FILE *) 0;
typedef int yy_state_type;
extern char *yytext;
#define yytext_ptr yytext

static yy_state_type yy_get_previous_state YY_PROTO(( void ));
static yy_state_type yy_try_NUL_trans YY_PROTO(( yy_state_type current_state ));
static int yy_get_next_buffer YY_PROTO(( void ));
static void yy_fatal_error YY_PROTO(( yyconst char msg[] ));

/* Done after the current pattern has been matched and before the
 * corresponding action - sets up yytext.
 */
#define YY_DO_BEFORE_ACTION \
	yytext_ptr = yy_bp; \
	yyleng = (int) (yy_cp - yy_bp); \
	yy_hold_char = *yy_cp; \
	*yy_cp = '\0'; \
	yy_c_buf_p = yy_cp;

#define YY_NUM_RULES 165
#define YY_END_OF_BUFFER 166
static yyconst short int yy_accept[769] =
    {   0,
        0,    0,    0,    0,   87,   87,  163,  163,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,  166,  164,
        7,   18,  164,   16,    1,   17,  164,  164,  164,  164,
       15,  108,  100,  101,  108,   93,  108,  107,  108,  108,
      108,  107,   99,   89,  108,  108,   91,   92,   87,   88,
       87,   86,   85,   86,   86,  163,  163,   28,   29,   28,
       28,   28,   28,   28,   28,   31,   30,   32,   31,  113,
      109,  110,  112,  114,  141,  142,  141,  139,  138,  140,

      115,  117,  115,  116,  115,  120,  120,  120,  120,  122,
      124,  122,  122,  122,  122,  123,  151,  155,  151,  154,
      156,  156,  152,  152,  152,  149,  150,  164,   82,  164,
       21,   22,   21,   20,  157,  159,  157,  160,  161,  147,
      147,  148,  147,  147,  147,  147,  147,  147,  147,   81,
       34,   33,   81,   81,   81,   81,   35,   81,   81,   81,
       81,   81,   81,   81,   81,   81,   81,   81,   81,   81,
       81,   81,   81,   81,   81,   81,   26,   23,   26,   24,
        7,   18,    0,   16,    1,   17,    0,    0,    0,   14,
        8,    0,    0,    0,    0,    4,    5,    0,    2,   15,

      100,  101,    0,    0,    0,   95,    0,    0,  105,  105,
        0,  162,  162,  162,   94,    0,   99,   89,    0,    0,
        0,   91,   92,  104,   90,    0,   87,   88,   86,   85,
       85,   83,   84,  163,  163,   28,   29,   28,   28,   28,
       28,   31,   30,   32,  111,  112,  142,  138,  117,    0,
      118,  119,  124,  121,  151,  155,    0,  153,    0,  144,
      152,  152,  152,    0,   82,    0,   21,   22,   21,   19,
      157,  159,  158,  147,  147,  147,  148,  143,  147,  147,
      147,   34,   33,    0,   80,    0,    0,   81,   81,   81,
       81,   81,   81,   81,   81,   81,   81,   81,   81,   81,

       81,   81,   81,   36,   81,   81,   81,   81,   81,   81,
       81,   81,   81,   81,    0,   25,   24,    0,   14,    8,
        0,   12,    0,    0,    0,    0,    0,    4,    5,    0,
        6,    0,   96,    0,   97,    0,    0,  105,  105,    0,
      105,  105,  105,  162,  162,    0,  106,   90,   98,    0,
      104,    0,   83,   84,   28,   28,   28,   27,   28,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,  152,  152,  143,  143,  147,  147,    0,    0,   81,
       81,   81,   81,   81,   44,   81,   81,   81,   49,   81,
       81,   81,   81,   81,   81,   81,   81,   81,   81,   81,

       81,   81,   81,   81,   81,   81,   81,   81,    0,   81,
       81,   81,   81,    0,    0,    0,   12,    0,    0,    0,
        0,    0,    0,    4,    5,    0,  105,  105,  105,  105,
      105,  105,  162,    0,    0,   28,   28,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
      152,  152,  147,  147,   37,   38,   81,   81,   81,   81,
       81,   81,   81,   81,   50,   51,   81,   81,   81,   55,
       81,   81,   81,   81,   81,   81,   60,   81,   81,   81,
       81,   81,   81,   67,    0,    0,    0,   81,   81,   81,
       81,    0,   13,    0,    0,    0,    0,    0,    0,  105,

      105,  105,  105,  105,  105,    0,    0,   28,   28,  137,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,  152,  152,  147,  147,   39,   81,   41,   81,
       43,   81,   81,   81,   47,   81,   52,   81,   81,   81,
       81,   81,   81,   81,   81,   81,   62,   81,   81,   65,
       81,    0,    0,    0,    0,   81,   81,   81,   81,    3,
        0,    0,    0,    0,  105,  105,  105,    0,    0,   28,
       28,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,  145,  146,  145,  146,   81,   42,   81,
       81,   81,   81,   81,   81,   81,   81,   81,   81,   81,

       81,   78,   61,   81,   64,   81,    0,    0,    0,    0,
       81,   81,   69,   70,    0,   10,    0,   11,    0,  103,
        0,  102,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,   81,   81,   81,   45,   81,   48,
       81,   81,   81,   81,   77,   81,   59,   63,   66,    0,
        0,    0,    0,   79,   81,    0,  102,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,   81,
       81,   81,   46,   81,   81,   56,   81,   81,    0,    0,
        0,    0,   68,    0,    9,    0,  125,  126,  127,  128,
      129,  130,  131,  132,  133,  134,  135,    0,   81,   81,

       81,   81,   81,   81,   81,    0,    0,    0,    0,    0,
      136,   81,   81,   81,   81,   54,   81,   81,    0,    0,
        0,    0,    0,    0,   81,   81,   81,   53,   81,   58,
        0,    0,    0,    0,    0,    0,   81,   81,   81,   81,
       72,    0,    0,    0,    0,   73,   81,   81,   81,   81,
       71,    0,   75,    0,   81,   81,   81,   74,   76,   81,
       81,   81,   81,   81,   81,   57,   40,    0
    } ;

static yyconst int yy_ec[256] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        1,    1,    4,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    1,    5,    6,    7,    8,    1,    9,   10,
       10,   11,   12,   13,   14,   10,   15,   16,   16,   16,
       16,   16,   16,   16,   17,   18,   19,   20,    1,   21,
       22,   23,   10,    1,   31,   32,   33,   34,   35,   36,
       37,   38,   39,   40,   41,   42,   43,   44,   45,   46,
       47,   48,   49,   50,   51,   52,   53,   54,   55,   47,
       26,   27,   28,   29,   30,    1,   31,   32,   33,   34,

       35,   36,   37,   38,   39,   40,   41,   42,   43,   44,
       45,   46,   47,   48,   49,   50,   51,   52,   53,   54,
       55,   47,   56,   57,   58,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1
    } ;

static yyconst int yy_meta[59] =
    {   0,
        1,    1,    2,    1,    3,    1,    1,    1,    4,    1,
        5,    6,    1,    7,    4,    8,    8,    8,    8,    1,
        1,    1,    1,    9,   10,    1,   11,   12,    1,   13,
       14,   14,   14,   14,   14,   14,   15,   15,   15,   15,
       15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
       15,   15,   15,   15,   15,    4,    1,   16
    } ;

static yyconst short int yy_base[858] =
    {   0,
        0,   58,  115,  172,  120,  129, 2712, 2711,  230, 2705,
      136,  141,  288,    0, 2683, 2682,  144,  151,  185,  191,
      178,  188,  344,  347,  375,    0,  125,  131,  147,  216,
      431,  434,  461,    0,  519,    0,  205,  349, 2710, 2716,
      353, 2716, 2706,    0,  360, 2716, 2705,  144,  570, 2696,
        0, 2716,  577, 2716, 2703, 2716,  438, 2716, 2684,  126,
      149,  427,  591, 2716, 2701,  141, 2682, 2716,    0, 2716,
     2699,    0, 2699, 2697,  155, 2696, 2716,    0, 2716, 2695,
     2716,    0, 2662, 2641, 2637,    0, 2692, 2716, 2690, 2716,
     2716, 2663,    0, 2716, 2716, 2716, 2688, 2716,  431, 2716,

     2716, 2716, 2687, 2716,  567, 2716, 2669,  571,  164, 2716,
     2716, 2685,    0, 2667,  573, 2716,    0, 2716, 2683, 2716,
      573, 2674,    0, 2649, 2628, 2716, 2716,  222, 2716,  356,
      448, 2716,  450, 2667,    0, 2716, 2678, 2716,    0,    0,
      198, 2716, 2677, 2621, 2716, 2667,    0, 2642, 2621, 2716,
     2673, 2716, 2671, 2668, 2640, 2639, 2716,  544, 2639,  579,
     2634, 2635,  318,    0, 2623, 2631,  424,  562, 2614,  587,
     2629, 2613, 2618, 2626, 2629, 2604, 2716, 2716, 2653,  612,
      634, 2716, 2654,    0,  637, 2716, 2653,  600, 2616,    0,
        0,  641,  647,  651,  669,    0,    0,  453, 2716,    0,

      672, 2716, 2651, 2597,  605, 2716, 2649, 2616,  620,  657,
      645, 2716,  662,    0, 2716, 2592,  688, 2716, 2646, 2592,
     2636, 2625, 2716,    0, 2716, 2610,    0, 2716,    0,    0,
     2642,    0,    0, 2640, 2716,    0, 2716,    0, 2602, 2598,
      745,    0, 2638, 2716, 2716,    0, 2716,  688, 2716,  773,
     2716, 2716, 2716, 2716,    0, 2716,  673, 2716,    0, 2716,
        0, 2599, 2595,  690, 2716,  698,  707, 2716,  709, 2716,
        0, 2716, 2716,    0,  596, 2579, 2716,  827,    0, 2596,
     2592, 2632, 2716, 2628, 2716, 2593, 2592,    0,  642, 2582,
      563, 2617, 2579,  620, 2578, 2577, 2583,  669, 2570, 2584,

     2572,    0, 2569, 2716, 2570, 2571, 2579, 2582,  685,  125,
     2570, 2567, 2566,  688, 2608, 2716,  716, 2568,    0,    0,
      720, 2716, 2608,  884, 2562, 2559, 2569,    0,    0,  723,
     2716,  739, 2716,  805, 2716,  808, 2562,  787,  869,  876,
      930,  881,  973,  800,    0, 2548, 2716, 2716, 2716, 2570,
        0, 2559,    0,    0, 2568, 2557,    0, 2716,    0, 1009,
     2581,  678,  870,  871,  874,  879,  913,  992,  974, 1013,
      885, 2565, 2554,    0, 1067, 2563, 2552, 2546, 2545, 2557,
     2562, 2561, 2550, 2557,    0, 2554, 2537, 2556,    0, 2536,
     2543, 2533, 2548, 2568, 2537, 2549, 2544, 2542, 2541, 2532,

     2539, 2540, 2538, 2539,  578, 2520, 2538, 2525,  860, 2526,
     2528, 2521, 2517, 2529,  817, 1044, 2716,  822, 1095,  914,
     2532, 2523, 2517,    0,    0, 2524, 1102, 1025, 1142, 2539,
     1028, 1163, 2716, 2513, 2521, 2523, 2507,    0, 2526, 1058,
      891, 1014, 1019,  894, 1038, 1080, 1072, 1086, 1083, 1081,
     2520, 2504, 2518, 2502, 2716, 2716, 2505, 2493, 2492, 2495,
     2507, 1148, 2507, 2492,    0,    0, 2492, 2493, 2507,    0,
     2525, 2490, 2498, 2522, 2485, 2495,    0, 2500, 2491, 2487,
     2479, 2479, 2483,    0,  875, 2494, 2481, 2494, 2480, 2475,
     2491, 2519, 2716,  920,  999, 2465, 2474, 2468, 2494, 2496,

     1105, 1184, 1081,  902,  969, 2479, 2491, 2463, 2477, 2716,
      165, 1090, 1144, 1143, 1147, 1163, 1095, 1145, 1037, 1085,
     1150, 1173, 2461, 2475, 2459, 2473,    0, 2458,    0, 2460,
        0, 1165, 2454, 2469,    0, 2461,    0, 2471, 2410, 2414,
     2434, 2400, 2393, 2405, 2385, 2382,    0, 2383, 2335,    0,
     2335, 2330, 2326, 2309, 2278, 2259, 2269, 2268, 2256, 2297,
     1046, 2238, 2242, 2253, 1179, 1142, 1145, 2247, 2246,    0,
        0, 1191, 1192, 1172, 1201, 1202, 1204, 1205, 1206, 1207,
     1209, 1210, 1208,    0,    0,    0,    0, 2254,    0, 2221,
     2229, 2218, 2208, 2200, 2209, 2198, 2195, 2165, 2168, 2149,

     2132,    0,    0, 2129,    0, 2139, 2143, 2134, 2124, 2137,
     2117, 2116,    0,    0, 1228, 2716, 1232, 2716, 2111, 2716,
     2117, 2716, 2115, 2114, 2108, 2107, 2106, 2103, 2102, 2098,
     2095, 2063, 2047, 1213, 2012, 1986, 1975,    0, 1954,    0,
     1947, 1950, 1941, 1945,    0, 1942,    0,    0,    0, 1938,
     1940, 1934, 1905,    0, 1872, 1234, 2716, 1888, 1882, 1881,
     1864, 1848, 1832, 1828, 1827, 1826, 1823, 1806, 1809, 1784,
     1787, 1772,    0, 1781, 1786,    0, 1766, 1767, 1759, 1744,
     1213, 1736,    0, 1236, 2716, 1245, 2716, 2716, 2716, 2716,
     2716, 2716, 2716, 2716, 2716, 2716, 2716, 1750, 1727, 1720,

     1701, 1687, 1670, 1681, 1667, 1679, 1659,  689, 1658, 1671,
     2716, 1657, 1627, 1621, 1635,    0, 1603, 1596, 1595, 1608,
     1602, 1587, 1586, 1583, 1581, 1587, 1555,    0, 1547,    0,
     1527, 1507, 1520, 1503, 1483, 1482, 1485, 1443, 1440, 1228,
     2716, 1225, 1224, 1206, 1210, 2716, 1213, 1202, 1018,  948,
     2716,  945, 2716,  884,  780,  771,  779, 2716, 2716,  689,
      673,  581,  408,  318,   86,    0,    0, 2716, 1263, 1279,
     1295, 1311, 1327, 1343, 1359, 1375, 1391, 1407, 1423, 1439,
     1455, 1471, 1481, 1496, 1505, 1520, 1536, 1545, 1560, 1576,
     1592, 1608, 1624, 1634, 1649, 1659, 1674, 1690, 1706, 1718,

     1728, 1743, 1759, 1775, 1791, 1807, 1817, 1832, 1843, 1236,
     1858, 1874, 1890, 1898, 1905, 1920, 1936, 1952, 1968, 1977,
     1985, 2001, 2017, 2033, 2049, 2065, 2081, 2097, 2113, 2123,
     2138, 2148, 2155, 2170, 2182, 2192, 2207, 2223, 2239, 2255,
     2265, 2280, 2291, 2306, 2322, 2338, 2354, 2364, 2373, 2388,
     2404, 2420, 2429, 2437, 2453, 2469, 2485
    } ;

static yyconst short int yy_def[858] =
    {   0,
      768,  768,  769,  769,  770,  771,  772,  772,  768,    9,
      773,  773,  768,   13,  774,  774,  775,  775,  776,  776,
      777,  777,  778,  778,  768,   25,  779,  779,  780,  780,
      781,  781,  768,   33,  768,   35,  782,  782,  768,  768,
      768,  768,  768,  783,  768,  768,  768,  768,  784,  768,
      785,  768,  768,  768,  768,  768,  768,  768,  768,  786,
      787,  788,  768,  768,  768,  768,  768,  768,  789,  768,
      789,  790,  791,  790,  790,  792,  768,  793,  768,  793,
      768,  794,  794,  794,  793,  795,  768,  768,  795,  768,
      768,  768,  796,  768,  768,  768,  768,  768,  768,  768,

      768,  768,  768,  768,  787,  768,  768,  787,  797,  768,
      768,  768,  798,  768,  787,  768,  799,  768,  799,  768,
      800,  768,  801,  801,  801,  768,  768,  802,  768,  802,
      803,  768,  803,  768,  804,  768,  804,  768,  805,  806,
      806,  768,  806,  806,  768,  806,  807,  807,  807,  768,
      768,  768,  768,  808,  768,  768,  768,  809,  809,  809,
      809,  809,  809,  809,  809,  809,  809,  810,  809,  809,
      809,  809,  809,  809,  809,  809,  768,  768,  811,  768,
      768,  768,  768,  783,  768,  768,  768,  768,  768,  812,
      813,  768,  768,  768,  768,  814,  815,  816,  768,  785,

      768,  768,  768,  768,  817,  768,  768,  768,  818,  818,
      819,  768,  768,  820,  768,  821,  768,  768,  768,  768,
      768,  768,  768,  822,  768,  768,  823,  768,  824,  825,
      825,  826,  827,  828,  768,  829,  768,  830,  830,  830,
      768,  831,  768,  768,  768,  832,  768,  768,  768,  833,
      768,  768,  768,  768,  834,  768,  835,  768,  835,  768,
      836,  836,  836,  837,  768,  837,  838,  768,  838,  768,
      839,  768,  768,  840,  840,  840,  768,  768,  841,  841,
      841,  768,  768,  842,  768,  768,  768,  843,  843,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  843,

      843,  843,  843,  768,  843,  843,  843,  843,  843,  843,
      843,  843,  843,  843,  844,  768,  768,  768,  845,  846,
      847,  768,  768,  768,  768,  768,  768,  848,  849,  850,
      768,  850,  768,  851,  768,  851,  768,  852,  852,  852,
      768,  852,  852,  768,  853,  854,  768,  768,  768,  768,
      855,  768,  826,  827,  830,  830,  241,  768,  241,  241,
      833,  833,  833,  833,  833,  833,  833,  833,  833,  833,
      833,  836,  836,  278,  278,  841,  841,  768,  768,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  843,

      843,  843,  843,  843,  843,  843,  843,  843,  768,  843,
      843,  843,  843,  768,  847,  847,  768,  847,  847,  768,
      768,  768,  768,  848,  849,  768,  341,  852,  343,  341,
      852,  343,  768,  768,  768,  830,  830,  360,  768,  833,
      833,  833,  833,  833,  833,  833,  833,  833,  833,  833,
      836,  836,  841,  841,  768,  768,  843,  843,  843,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  843,
      843,  843,  843,  843,  768,  768,  768,  843,  843,  843,
      843,  768,  768,  847,  847,  768,  768,  768,  768,  427,

      852,  343,  852,  852,  852,  768,  768,  830,  830,  768,
      833,  833,  833,  833,  833,  833,  833,  833,  833,  833,
      833,  833,  836,  836,  841,  841,  843,  843,  843,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  843,
      843,  768,  768,  768,  768,  843,  843,  843,  843,  768,
      856,  768,  768,  768,  852,  852,  852,  768,  768,  830,
      830,  833,  833,  833,  833,  833,  833,  833,  833,  833,
      833,  833,  833,  836,  836,  841,  841,  843,  843,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  843,

      843,  843,  843,  843,  843,  843,  768,  768,  768,  768,
      843,  843,  843,  843,  856,  768,  856,  768,  768,  768,
      768,  768,  833,  833,  833,  833,  833,  833,  833,  833,
      833,  833,  833,  833,  843,  843,  843,  843,  843,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  843,  768,
      768,  768,  768,  843,  843,  857,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  833,  843,
      843,  843,  843,  843,  843,  843,  843,  843,  768,  768,
      768,  768,  843,  857,  768,  857,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  843,  843,

      843,  843,  843,  843,  843,  768,  768,  768,  768,  768,
      768,  843,  843,  843,  843,  843,  843,  843,  768,  768,
      768,  768,  768,  768,  843,  843,  843,  843,  843,  843,
      768,  768,  768,  768,  768,  768,  843,  843,  843,  843,
      768,  768,  768,  768,  768,  768,  843,  843,  843,  843,
      768,  768,  768,  768,  843,  843,  843,  768,  768,  843,
      843,  843,  843,  843,  843,  843,  843,    0,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,

      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768
    } ;

static yyconst short int yy_nxt[2775] =
    {   0,
       40,   41,   42,   43,   40,   40,   40,   40,   40,   40,
       40,   40,   40,   40,   40,   40,   40,   40,   40,   40,
       40,   40,   40,   44,   44,   40,   40,   40,   40,   44,
       44,   44,   44,   44,   44,   44,   44,   44,   44,   44,
       44,   44,   44,   44,   44,   44,   44,   44,   44,   44,
       44,   44,   44,   44,   44,   40,   40,   40,   40,   45,
       46,   47,   40,   48,   40,   49,   40,   40,   40,   40,
       40,   40,   50,   40,   40,   40,   40,   40,   40,   40,
       40,   51,   51,   40,   40,   40,   40,   51,   51,   51,
       51,   51,   51,   51,   51,   51,   51,   51,   51,   51,

       51,   51,   51,   51,   51,   51,   51,   51,   51,   51,
       51,   51,   51,   40,   40,   40,   53,   54,   55,   56,
      767,   57,   70,   71,   58,   58,   58,  129,  130,   58,
       73,   70,   74,  129,  130,   59,   75,   87,   88,   89,
       60,   61,   87,   88,   89,  188,   96,   97,  224,  132,
      133,  210,  211,   96,   97,  404,   98,  134,  405,   99,
       99,   99,   99,   98,  213,  213,   99,   99,   99,   99,
       62,   58,   58,   63,   64,   65,   56,  252,   57,   66,
       40,   58,   58,   58,  439,  189,   58,  102,  103,  104,
       40,  252,   67,  102,  103,  104,  225,   60,   61,  275,

       68,  100,  214,  107,  108,  276,  109,  178,  100,  179,
      232,  105,  233,  107,  108,  572,  109,  105,  132,  133,
      180,  180,  180,  180,  265,  266,  134,   62,   58,   58,
       78,   78,   79,   80,   78,   78,   78,   78,   78,   78,
       81,   78,   78,   78,   78,   78,   78,   78,   78,   78,
       78,   78,   78,   82,   82,   78,   78,   78,   78,   82,
       82,   82,   82,   82,   82,   82,   82,   82,   82,   82,
       82,   82,   82,   82,   82,   82,   82,   83,   82,   82,
       82,   82,   82,   82,   84,   78,   78,   78,   90,   90,
       40,   90,   90,   90,   90,   90,   90,   90,   91,   90,

       91,   90,   90,   90,   90,   90,   90,   90,   90,   90,
       92,   93,   93,   90,   90,   90,   90,   93,   93,   93,
       93,   93,   93,   93,   93,   93,   93,   93,   93,   93,
       93,   93,   93,   93,   93,   93,   93,   93,   93,   93,
       93,   93,   93,   90,   90,   90,  111,  112,  296,  111,
      112,  178,  766,  179,  181,  182,  183,  113,  265,  266,
      113,  185,  186,  187,  180,  180,  180,  180,  297,  114,
      115,  116,  114,  115,  116,  117,  117,  118,  119,  120,
      117,  117,  117,  121,  117,  117,  117,  117,  117,  122,
      117,  117,  117,  117,  117,  117,  117,  117,  123,  123,

      117,  117,  117,  117,  123,  123,  123,  123,  123,  123,
      123,  123,  123,  123,  123,  123,  123,  123,  123,  123,
      123,  123,  124,  123,  123,  123,  123,  123,  123,  125,
      126,  117,  127,  136,  137,  138,  136,  137,  138,  206,
      206,  207,  215,  215,  215,  215,  248,  248,  248,  248,
      268,  269,  268,  269,  300,  331,  332,  139,  301,  765,
      139,  140,  141,  142,  143,  140,  140,  140,  144,  140,
      140,  145,  140,  140,  140,  146,  140,  140,  140,  140,
      140,  140,  140,  140,  147,  147,  140,  140,  140,  140,
      147,  147,  147,  147,  147,  147,  147,  147,  147,  147,

      147,  147,  147,  147,  147,  147,  147,  147,  148,  147,
      147,  147,  147,  147,  147,  149,  140,  140,  140,  150,
      151,  152,  153,  154,  150,  150,  150,  150,  150,  150,
      150,  150,  150,  150,  150,  155,  156,  150,  150,  150,
      157,  150,  150,  150,  150,  150,  150,  150,  150,  158,
      159,  160,  161,  162,  163,  164,  164,  165,  164,  164,
      166,  167,  168,  169,  170,  164,  171,  172,  164,  173,
      174,  175,  164,  176,  150,  150,  150,  191,  201,  202,
      203,  258,  213,  213,  204,  289,  213,  213,  213,  213,
      292,  290,  217,  218,  219,  383,  303,  275,  220,  259,

      192,  188,  193,  276,  193,  221,  304,  335,  336,  293,
      193,  222,  384,  193,  194,  195,  480,  193,  196,  223,
      214,  306,  481,  197,  214,  198,  214,  317,  317,  317,
      317,  307,  764,  205,  308,  181,  182,  183,  185,  186,
      187,  189,  321,  322,  323,  339,  340,  205,  321,  322,
      323,  387,  321,  322,  323,  388,  324,  324,  324,  324,
      342,  342,  324,  324,  324,  324,  324,  324,  324,  324,
      321,  322,  323,  201,  202,  203,  341,  344,  344,  204,
      380,  258,  339,  340,  324,  324,  324,  324,  325,  217,
      218,  219,  265,  266,  381,  220,  326,  439,  343,  259,

      265,  266,  221,  248,  248,  248,  248,  673,  222,  268,
      269,  268,  269,  327,  392,  402,  223,  409,  393,  440,
      410,  416,  417,  418,  403,  331,  332,  763,  205,  411,
      412,  317,  317,  317,  317,  419,  419,  419,  419,  721,
      413,  331,  332,  722,  205,  357,  357,  358,  359,  357,
      357,  357,  357,  357,  357,  360,  357,  357,  357,  357,
      357,  357,  357,  357,  357,  357,  357,  357,  360,  360,
      357,  357,  357,  357,  360,  360,  360,  360,  360,  360,
      360,  360,  360,  360,  360,  360,  360,  360,  360,  360,
      360,  360,  360,  360,  360,  360,  360,  360,  360,  360,

      357,  357,  357,  362,  363,  364,  365,  335,  336,  366,
      335,  336,  339,  340,  367,  212,  212,  762,  368,  493,
      494,  369,  761,  370,  417,  494,  371,  374,  374,  760,
      374,  374,  374,  374,  374,  374,  374,  375,  374,  374,
      374,  374,  374,  374,  374,  374,  374,  374,  374,  374,
      375,  375,  374,  374,  374,  374,  375,  375,  375,  375,
      375,  375,  375,  375,  375,  375,  375,  375,  375,  375,
      375,  375,  375,  375,  375,  375,  375,  375,  375,  375,
      375,  375,  374,  374,  374,  420,  322,  323,  427,  439,
      439,  428,  428,  439,  339,  340,  431,  431,  439,  324,

      324,  324,  324,  338,  439,  485,  339,  340,  486,  487,
      439,  441,  443,  439,  442,  420,  322,  323,  450,  552,
      759,  513,  493,  494,  516,  553,  444,  339,  340,  429,
      338,  338,  439,  338,  338,  338,  338,  338,  338,  338,
      338,  338,  338,  338,  338,  338,  338,  338,  338,  338,
      338,  338,  338,  430,  430,  339,  340,  445,  338,  338,
      430,  430,  430,  430,  430,  430,  430,  430,  430,  430,
      430,  430,  430,  430,  430,  430,  430,  430,  430,  430,
      430,  430,  430,  430,  430,  338,  338,  338,  432,  432,
      432,  432,  758,  439,  339,  340,  432,  757,  339,  340,

      495,  417,  418,  432,  432,  432,  432,  432,  432,  360,
      360,  439,  438,  360,  360,  360,  360,  360,  360,  448,
      360,  360,  360,  360,  360,  360,  360,  360,  360,  360,
      360,  360,  439,  439,  360,  360,  360,  360,  439,  446,
      501,  501,  447,  504,  504,  416,  417,  418,  616,  617,
      339,  340,  638,  339,  340,  515,  439,  439,  449,  419,
      419,  419,  419,  514,  360,  360,  360,  375,  375,  580,
      375,  375,  375,  375,  375,  375,  375,  439,  375,  375,
      375,  375,  375,  375,  375,  375,  375,  375,  375,  375,
      517,  439,  375,  375,  375,  375,  495,  417,  418,  439,

      439,  511,  439,  512,  439,  439,  339,  340,  209,  439,
      419,  419,  419,  419,  439,  519,  520,  581,  518,  522,
      566,  566,  375,  375,  375,  500,  500,  573,  521,  578,
      339,  340,  500,  500,  500,  500,  500,  500,  500,  500,
      500,  500,  500,  500,  500,  500,  500,  500,  500,  500,
      500,  500,  500,  500,  500,  500,  500,  502,  502,  502,
      502,  532,  439,  439,  439,  502,  439,  339,  340,  439,
      339,  340,  502,  502,  502,  502,  502,  502,  505,  505,
      505,  505,  439,  533,  582,  576,  505,  574,  579,  534,
      575,  439,  439,  505,  505,  505,  505,  505,  505,  567,

      567,  567,  567,  590,  339,  340,  338,  567,  577,  583,
      439,  439,  625,  591,  567,  567,  567,  567,  567,  567,
      439,  439,  624,  439,  439,  439,  439,  439,  439,  439,
      616,  617,  439,  623,  616,  617,  685,  686,  685,  686,
      756,  628,  626,  632,  708,  755,  634,  685,  686,  302,
      302,  627,  629,  754,  753,  630,  631,  633,  752,  751,
      750,  709,  669,   52,   52,   52,   52,   52,   52,   52,
       52,   52,   52,   52,   52,   52,   52,   52,   52,   69,
       69,   69,   69,   69,   69,   69,   69,   69,   69,   69,
       69,   69,   69,   69,   69,   72,   72,   72,   72,   72,

       72,   72,   72,   72,   72,   72,   72,   72,   72,   72,
       72,   76,   76,   76,   76,   76,   76,   76,   76,   76,
       76,   76,   76,   76,   76,   76,   76,   86,   86,   86,
       86,   86,   86,   86,   86,   86,   86,   86,   86,   86,
       86,   86,   86,   40,   40,   40,   40,   40,   40,   40,
       40,   40,   40,   40,   40,   40,   40,   40,   40,   95,
       95,   95,   95,   95,   95,   95,   95,   95,   95,   95,
       95,   95,   95,   95,   95,  101,  101,  101,  101,  101,
      101,  101,  101,  101,  101,  101,  101,  101,  101,  101,
      101,  106,  106,  106,  106,  106,  106,  106,  106,  106,

      106,  106,  106,  106,  106,  106,  106,  110,  110,  110,
      110,  110,  110,  110,  110,  110,  110,  110,  110,  110,
      110,  110,  110,  128,  128,  128,  128,  128,  128,  128,
      128,  128,  128,  128,  128,  128,  128,  128,  128,  131,
      131,  131,  131,  131,  131,  131,  131,  131,  131,  131,
      131,  131,  131,  131,  131,  135,  135,  135,  135,  135,
      135,  135,  135,  135,  135,  135,  135,  135,  135,  135,
      135,  177,  177,  177,  177,  177,  177,  177,  177,  177,
      177,  177,  177,  177,  177,  177,  177,  184,  184,  184,
      184,  749,  748,  184,  184,  184,  190,  190,  190,  190,

      190,  190,  190,  190,  190,  190,  190,  190,  190,  190,
      190,  200,  200,  200,  200,  747,  746,  200,  200,  200,
      209,  745,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  212,  744,  212,  212,
      212,  212,  212,  212,  212,  212,  212,  212,  212,  212,
      212,  212,  216,  216,  216,  743,  742,  216,  216,  216,
      227,  741,  227,  227,  227,  227,  227,  227,  227,  227,
      227,  227,  227,  227,  227,  227,  229,  740,  229,  229,
      229,  229,  229,  229,  229,  229,  229,  229,  229,  229,
      229,  229,  230,  739,  230,  230,  230,  230,  230,  230,

      230,  230,  230,  230,  230,  230,  230,  230,  234,  234,
      234,  234,  234,  234,  234,  234,  234,  234,  234,  234,
      234,  234,  234,  234,  236,  738,  236,  236,  737,  236,
      236,  236,  736,  735,  236,  236,  734,  733,  732,  236,
      238,  238,  238,  238,  731,  730,  238,  238,  238,  242,
      729,  242,  242,  242,  242,  242,  242,  242,  242,  242,
      242,  242,  242,  242,  242,  246,  246,  246,  246,  728,
      727,  246,  246,  246,  251,  726,  251,  251,  251,  251,
      251,  251,  251,  251,  251,  251,  251,  251,  251,  251,
      254,  725,  254,  254,  254,  254,  254,  254,  254,  254,

      254,  724,  254,  254,  254,  254,  255,  723,  720,  719,
      255,  255,  255,  255,  718,  717,  255,  255,  257,  716,
      257,  257,  257,  257,  257,  257,  257,  257,  257,  257,
      257,  257,  257,  257,  261,  261,  261,  261,  715,  714,
      261,  261,  261,  264,  264,  264,  264,  264,  264,  264,
      264,  264,  264,  264,  264,  264,  264,  264,  264,  267,
      267,  267,  267,  713,  267,  267,  267,  267,  267,  267,
      267,  267,  267,  267,  267,  271,  712,  711,  271,  271,
      271,  271,  271,  271,  271,  710,  271,  271,  271,  271,
      271,  273,  707,  273,  273,  273,  273,  273,  273,  273,

      273,  273,  273,  273,  273,  273,  273,  274,  706,  274,
      274,  705,  274,  274,  274,  704,  703,  274,  274,  702,
      701,  700,  274,  279,  279,  279,  279,  699,  698,  279,
      279,  279,  284,  697,  284,  284,  284,  284,  284,  284,
      284,  284,  284,  284,  284,  284,  284,  284,  288,  288,
      696,  288,  288,  695,  694,  693,  288,  288,  315,  692,
      315,  315,  315,  315,  315,  315,  315,  315,  315,  315,
      315,  315,  315,  315,  319,  691,  319,  319,  319,  319,
      319,  319,  319,  319,  319,  319,  319,  319,  319,  319,
      320,  690,  320,  320,  320,  320,  320,  320,  320,  320,

      320,  320,  320,  320,  320,  320,  328,  328,  689,  688,
      328,  328,  328,  329,  329,  687,  683,  329,  329,  329,
      330,  330,  330,  330,  330,  330,  330,  330,  330,  330,
      330,  330,  330,  330,  330,  330,  334,  334,  334,  334,
      334,  334,  334,  334,  334,  334,  334,  334,  334,  334,
      334,  334,  338,  682,  338,  338,  338,  338,  338,  338,
      338,  338,  338,  681,  338,  338,  338,  338,  209,  680,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  345,  345,  679,  678,  677,  676,
      345,  346,  346,  346,  346,  675,  674,  346,  346,  346,

      346,  351,  673,  351,  351,  351,  351,  351,  351,  351,
      351,  351,  351,  351,  351,  351,  351,  227,  672,  227,
      227,  227,  227,  227,  227,  227,  227,  227,  227,  227,
      227,  227,  227,  229,  671,  229,  229,  229,  229,  229,
      229,  229,  229,  229,  229,  229,  229,  229,  229,  230,
      670,  230,  230,  230,  230,  230,  230,  230,  230,  230,
      230,  230,  230,  230,  230,  353,  668,  353,  353,  353,
      353,  353,  353,  353,  353,  353,  353,  353,  353,  353,
      353,  354,  667,  354,  354,  354,  354,  354,  354,  354,
      354,  354,  354,  354,  354,  354,  354,  234,  234,  234,

      234,  234,  234,  234,  234,  234,  234,  234,  234,  234,
      234,  234,  234,  236,  666,  236,  236,  665,  236,  236,
      236,  664,  663,  236,  236,  662,  661,  660,  236,  238,
      238,  238,  238,  659,  658,  238,  238,  238,  242,  657,
      242,  242,  242,  242,  242,  242,  242,  242,  242,  242,
      242,  242,  242,  242,  246,  246,  246,  246,  656,  655,
      246,  246,  246,  361,  361,  654,  653,  652,  361,  361,
      255,  651,  650,  649,  255,  255,  255,  255,  648,  647,
      255,  255,  257,  646,  257,  257,  257,  257,  257,  257,
      257,  257,  257,  257,  257,  257,  257,  257,  261,  261,

      261,  261,  645,  644,  261,  261,  261,  264,  264,  264,
      264,  264,  264,  264,  264,  264,  264,  264,  264,  264,
      264,  264,  264,  267,  267,  267,  267,  643,  267,  267,
      267,  267,  267,  267,  267,  267,  267,  267,  267,  271,
      642,  641,  271,  271,  271,  271,  271,  271,  271,  640,
      271,  271,  271,  271,  271,  274,  639,  274,  274,  638,
      274,  274,  274,  637,  636,  274,  274,  635,  622,  621,
      274,  279,  279,  279,  279,  620,  619,  279,  279,  279,
      284,  618,  284,  284,  284,  284,  284,  284,  284,  284,
      284,  284,  284,  284,  284,  284,  288,  288,  560,  288,

      288,  614,  613,  612,  288,  288,  315,  611,  315,  315,
      315,  315,  315,  315,  315,  315,  315,  315,  315,  315,
      315,  315,  319,  610,  319,  319,  319,  319,  319,  319,
      319,  319,  319,  319,  319,  319,  319,  319,  320,  609,
      320,  320,  320,  320,  320,  320,  320,  320,  320,  320,
      320,  320,  320,  320,  415,  415,  415,  415,  415,  415,
      415,  415,  415,  415,  415,  415,  415,  415,  415,  415,
      424,  424,  424,  424,  608,  607,  424,  424,  424,  425,
      425,  425,  425,  606,  605,  425,  425,  425,  330,  330,
      330,  330,  330,  330,  330,  330,  330,  330,  330,  330,

      330,  330,  330,  330,  334,  334,  334,  334,  334,  334,
      334,  334,  334,  334,  334,  334,  334,  334,  334,  334,
      338,  604,  338,  338,  338,  338,  338,  338,  338,  338,
      338,  603,  338,  338,  338,  338,  433,  433,  602,  601,
      600,  599,  433,  346,  346,  346,  346,  598,  597,  346,
      346,  346,  346,  351,  596,  351,  351,  351,  351,  351,
      351,  351,  351,  351,  351,  351,  351,  351,  351,  615,
      615,  615,  615,  615,  615,  615,  615,  615,  615,  615,
      615,  615,  615,  615,  615,  684,  684,  684,  684,  684,
      684,  684,  684,  684,  684,  684,  684,  684,  684,  684,

      684,  595,  594,  593,  592,  589,  588,  587,  586,  585,
      584,  571,  570,  569,  568,  565,  564,  563,  562,  561,
      560,  559,  558,  557,  556,  555,  554,  551,  550,  549,
      548,  547,  546,  545,  544,  543,  542,  541,  540,  539,
      538,  537,  536,  535,  531,  530,  529,  528,  527,  526,
      525,  524,  523,  510,  509,  508,  507,  506,  503,  499,
      498,  497,  496,  492,  491,  490,  489,  488,  484,  483,
      482,  479,  478,  477,  476,  475,  474,  473,  472,  471,
      470,  469,  468,  467,  466,  465,  464,  463,  462,  461,
      460,  459,  458,  457,  456,  455,  454,  453,  452,  451,

      439,  437,  436,  435,  434,  347,  426,  423,  422,  421,
      322,  414,  316,  408,  407,  406,  401,  400,  399,  398,
      397,  396,  395,  394,  391,  390,  389,  386,  385,  382,
      379,  378,  285,  282,  377,  376,  278,  373,  372,  243,
      356,  355,  235,  231,  352,  350,  349,  348,  218,  347,
      337,  206,  333,  202,  318,  186,  182,  316,  314,  313,
      312,  311,  310,  309,  305,  299,  298,  295,  294,  291,
      287,  286,  285,  283,  282,  281,  280,  260,  278,  277,
      272,  270,  263,  262,  260,  256,  250,  253,  250,  249,
      247,  245,  244,  243,  241,  240,  239,  237,  235,  228,

      231,  228,  226,  218,  208,  202,  199,  186,  182,  768,
       94,   94,   85,   77,   77,   39,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768
    } ;

static yyconst short int yy_chk[2775] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    2,
        2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
        2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
        2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
        2,    2,    2,    2,    2,    2,    2,    2,    2,    2,

        2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
        2,    2,    2,    2,    2,    2,    3,    3,    3,    3,
      765,    3,    5,    5,    3,    3,    3,   27,   27,    3,
        6,    6,    6,   28,   28,    3,    6,   11,   11,   11,
        3,    3,   12,   12,   12,   48,   17,   17,   66,   29,
       29,   60,   60,   18,   18,  310,   17,   29,  310,   17,
       17,   17,   17,   18,   61,   61,   18,   18,   18,   18,
        3,    3,    3,    4,    4,    4,    4,  109,    4,    4,
       21,    4,    4,    4,  511,   48,    4,   19,   19,   19,
       22,  109,    4,   20,   20,   20,   66,    4,    4,  141,

        4,   17,   61,   21,   21,  141,   21,   37,   18,   37,
       75,   19,   75,   22,   22,  511,   22,   20,   30,   30,
       37,   37,   37,   37,  128,  128,   30,    4,    4,    4,
        9,    9,    9,    9,    9,    9,    9,    9,    9,    9,
        9,    9,    9,    9,    9,    9,    9,    9,    9,    9,
        9,    9,    9,    9,    9,    9,    9,    9,    9,    9,
        9,    9,    9,    9,    9,    9,    9,    9,    9,    9,
        9,    9,    9,    9,    9,    9,    9,    9,    9,    9,
        9,    9,    9,    9,    9,    9,    9,    9,   13,   13,
       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,

       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
       13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
       13,   13,   13,   13,   13,   13,   23,   23,  163,   24,
       24,   38,  764,   38,   41,   41,   41,   23,  130,  130,
       24,   45,   45,   45,   38,   38,   38,   38,  163,   23,
       23,   23,   24,   24,   24,   25,   25,   25,   25,   25,
       25,   25,   25,   25,   25,   25,   25,   25,   25,   25,
       25,   25,   25,   25,   25,   25,   25,   25,   25,   25,

       25,   25,   25,   25,   25,   25,   25,   25,   25,   25,
       25,   25,   25,   25,   25,   25,   25,   25,   25,   25,
       25,   25,   25,   25,   25,   25,   25,   25,   25,   25,
       25,   25,   25,   31,   31,   31,   32,   32,   32,   57,
       57,   57,   62,   62,   62,   62,   99,   99,   99,   99,
      131,  131,  133,  133,  167,  198,  198,   31,  167,  763,
       32,   33,   33,   33,   33,   33,   33,   33,   33,   33,
       33,   33,   33,   33,   33,   33,   33,   33,   33,   33,
       33,   33,   33,   33,   33,   33,   33,   33,   33,   33,
       33,   33,   33,   33,   33,   33,   33,   33,   33,   33,

       33,   33,   33,   33,   33,   33,   33,   33,   33,   33,
       33,   33,   33,   33,   33,   33,   33,   33,   33,   35,
       35,   35,   35,   35,   35,   35,   35,   35,   35,   35,
       35,   35,   35,   35,   35,   35,   35,   35,   35,   35,
       35,   35,   35,   35,   35,   35,   35,   35,   35,   35,
       35,   35,   35,   35,   35,   35,   35,   35,   35,   35,
       35,   35,   35,   35,   35,   35,   35,   35,   35,   35,
       35,   35,   35,   35,   35,   35,   35,   49,   53,   53,
       53,  121,  105,  105,   53,  158,  108,  108,  115,  115,
      160,  158,   63,   63,   63,  291,  168,  275,   63,  121,

       49,  188,   49,  275,   49,   63,  168,  205,  205,  160,
       49,   63,  291,   49,   49,   49,  405,   49,   49,   63,
      105,  170,  405,   49,  108,   49,  115,  180,  180,  180,
      180,  170,  762,   53,  170,  181,  181,  181,  185,  185,
      185,  188,  192,  192,  192,  209,  209,   63,  193,  193,
      193,  294,  194,  194,  194,  294,  192,  192,  192,  192,
      211,  211,  193,  193,  193,  193,  194,  194,  194,  194,
      195,  195,  195,  201,  201,  201,  210,  213,  213,  201,
      289,  257,  210,  210,  195,  195,  195,  195,  192,  217,
      217,  217,  264,  264,  289,  217,  194,  362,  211,  257,

      266,  266,  217,  248,  248,  248,  248,  761,  217,  267,
      267,  269,  269,  195,  298,  309,  217,  314,  298,  362,
      314,  321,  321,  321,  309,  330,  330,  760,  201,  314,
      314,  317,  317,  317,  317,  321,  321,  321,  321,  708,
      314,  332,  332,  708,  217,  241,  241,  241,  241,  241,
      241,  241,  241,  241,  241,  241,  241,  241,  241,  241,
      241,  241,  241,  241,  241,  241,  241,  241,  241,  241,
      241,  241,  241,  241,  241,  241,  241,  241,  241,  241,
      241,  241,  241,  241,  241,  241,  241,  241,  241,  241,
      241,  241,  241,  241,  241,  241,  241,  241,  241,  241,

      241,  241,  241,  250,  250,  250,  250,  334,  334,  250,
      336,  336,  338,  338,  250,  344,  344,  757,  250,  415,
      415,  250,  756,  250,  418,  418,  250,  278,  278,  755,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  324,  324,  324,  339,  363,
      364,  340,  340,  365,  339,  339,  342,  342,  366,  324,

      324,  324,  324,  340,  371,  409,  342,  342,  409,  409,
      441,  363,  365,  444,  364,  420,  420,  420,  371,  485,
      754,  441,  494,  494,  444,  485,  366,  504,  504,  340,
      341,  341,  367,  341,  341,  341,  341,  341,  341,  341,
      341,  341,  341,  341,  341,  341,  341,  341,  341,  341,
      341,  341,  341,  341,  341,  341,  341,  367,  341,  341,
      341,  341,  341,  341,  341,  341,  341,  341,  341,  341,
      341,  341,  341,  341,  341,  341,  341,  341,  341,  341,
      341,  341,  341,  341,  341,  341,  341,  341,  343,  343,
      343,  343,  752,  369,  505,  505,  343,  750,  343,  343,

      495,  495,  495,  343,  343,  343,  343,  343,  343,  360,
      360,  368,  360,  360,  360,  360,  360,  360,  360,  369,
      360,  360,  360,  360,  360,  360,  360,  360,  360,  360,
      360,  360,  370,  442,  360,  360,  360,  360,  443,  368,
      428,  428,  368,  431,  431,  416,  416,  416,  561,  561,
      428,  428,  749,  431,  431,  443,  519,  445,  370,  416,
      416,  416,  416,  442,  360,  360,  360,  375,  375,  519,
      375,  375,  375,  375,  375,  375,  375,  440,  375,  375,
      375,  375,  375,  375,  375,  375,  375,  375,  375,  375,
      445,  447,  375,  375,  375,  375,  419,  419,  419,  446,

      450,  440,  449,  440,  520,  448,  503,  503,  503,  512,
      419,  419,  419,  419,  517,  447,  448,  520,  446,  450,
      501,  501,  375,  375,  375,  427,  427,  512,  449,  517,
      501,  501,  427,  427,  427,  427,  427,  427,  427,  427,
      427,  427,  427,  427,  427,  427,  427,  427,  427,  427,
      427,  427,  427,  427,  427,  427,  427,  429,  429,  429,
      429,  462,  514,  513,  518,  429,  515,  566,  566,  521,
      567,  567,  429,  429,  429,  429,  429,  429,  432,  432,
      432,  432,  516,  462,  521,  515,  432,  513,  518,  462,
      514,  574,  522,  432,  432,  432,  432,  432,  432,  502,

      502,  502,  502,  532,  565,  565,  565,  502,  516,  522,
      572,  573,  574,  532,  502,  502,  502,  502,  502,  502,
      575,  576,  573,  577,  578,  579,  580,  583,  581,  582,
      615,  615,  634,  572,  617,  617,  656,  656,  684,  684,
      748,  577,  575,  581,  681,  747,  583,  686,  686,  810,
      810,  576,  578,  745,  744,  579,  580,  582,  743,  742,
      740,  681,  634,  769,  769,  769,  769,  769,  769,  769,
      769,  769,  769,  769,  769,  769,  769,  769,  769,  770,
      770,  770,  770,  770,  770,  770,  770,  770,  770,  770,
      770,  770,  770,  770,  770,  771,  771,  771,  771,  771,

      771,  771,  771,  771,  771,  771,  771,  771,  771,  771,
      771,  772,  772,  772,  772,  772,  772,  772,  772,  772,
      772,  772,  772,  772,  772,  772,  772,  773,  773,  773,
      773,  773,  773,  773,  773,  773,  773,  773,  773,  773,
      773,  773,  773,  774,  774,  774,  774,  774,  774,  774,
      774,  774,  774,  774,  774,  774,  774,  774,  774,  775,
      775,  775,  775,  775,  775,  775,  775,  775,  775,  775,
      775,  775,  775,  775,  775,  776,  776,  776,  776,  776,
      776,  776,  776,  776,  776,  776,  776,  776,  776,  776,
      776,  777,  777,  777,  777,  777,  777,  777,  777,  777,

      777,  777,  777,  777,  777,  777,  777,  778,  778,  778,
      778,  778,  778,  778,  778,  778,  778,  778,  778,  778,
      778,  778,  778,  779,  779,  779,  779,  779,  779,  779,
      779,  779,  779,  779,  779,  779,  779,  779,  779,  780,
      780,  780,  780,  780,  780,  780,  780,  780,  780,  780,
      780,  780,  780,  780,  780,  781,  781,  781,  781,  781,
      781,  781,  781,  781,  781,  781,  781,  781,  781,  781,
      781,  782,  782,  782,  782,  782,  782,  782,  782,  782,
      782,  782,  782,  782,  782,  782,  782,  783,  783,  783,
      783,  739,  738,  783,  783,  783,  784,  784,  784,  784,

      784,  784,  784,  784,  784,  784,  784,  784,  784,  784,
      784,  785,  785,  785,  785,  737,  736,  785,  785,  785,
      786,  735,  786,  786,  786,  786,  786,  786,  786,  786,
      786,  786,  786,  786,  786,  786,  787,  734,  787,  787,
      787,  787,  787,  787,  787,  787,  787,  787,  787,  787,
      787,  787,  788,  788,  788,  733,  732,  788,  788,  788,
      789,  731,  789,  789,  789,  789,  789,  789,  789,  789,
      789,  789,  789,  789,  789,  789,  790,  729,  790,  790,
      790,  790,  790,  790,  790,  790,  790,  790,  790,  790,
      790,  790,  791,  727,  791,  791,  791,  791,  791,  791,

      791,  791,  791,  791,  791,  791,  791,  791,  792,  792,
      792,  792,  792,  792,  792,  792,  792,  792,  792,  792,
      792,  792,  792,  792,  793,  726,  793,  793,  725,  793,
      793,  793,  724,  723,  793,  793,  722,  721,  720,  793,
      794,  794,  794,  794,  719,  718,  794,  794,  794,  795,
      717,  795,  795,  795,  795,  795,  795,  795,  795,  795,
      795,  795,  795,  795,  795,  796,  796,  796,  796,  715,
      714,  796,  796,  796,  797,  713,  797,  797,  797,  797,
      797,  797,  797,  797,  797,  797,  797,  797,  797,  797,
      798,  712,  798,  798,  798,  798,  798,  798,  798,  798,

      798,  710,  798,  798,  798,  798,  799,  709,  707,  706,
      799,  799,  799,  799,  705,  704,  799,  799,  800,  703,
      800,  800,  800,  800,  800,  800,  800,  800,  800,  800,
      800,  800,  800,  800,  801,  801,  801,  801,  702,  701,
      801,  801,  801,  802,  802,  802,  802,  802,  802,  802,
      802,  802,  802,  802,  802,  802,  802,  802,  802,  803,
      803,  803,  803,  700,  803,  803,  803,  803,  803,  803,
      803,  803,  803,  803,  803,  804,  699,  698,  804,  804,
      804,  804,  804,  804,  804,  682,  804,  804,  804,  804,
      804,  805,  680,  805,  805,  805,  805,  805,  805,  805,

      805,  805,  805,  805,  805,  805,  805,  806,  679,  806,
      806,  678,  806,  806,  806,  677,  675,  806,  806,  674,
      672,  671,  806,  807,  807,  807,  807,  670,  669,  807,
      807,  807,  808,  668,  808,  808,  808,  808,  808,  808,
      808,  808,  808,  808,  808,  808,  808,  808,  809,  809,
      667,  809,  809,  666,  665,  664,  809,  809,  811,  663,
      811,  811,  811,  811,  811,  811,  811,  811,  811,  811,
      811,  811,  811,  811,  812,  662,  812,  812,  812,  812,
      812,  812,  812,  812,  812,  812,  812,  812,  812,  812,
      813,  661,  813,  813,  813,  813,  813,  813,  813,  813,

      813,  813,  813,  813,  813,  813,  814,  814,  660,  659,
      814,  814,  814,  815,  815,  658,  655,  815,  815,  815,
      816,  816,  816,  816,  816,  816,  816,  816,  816,  816,
      816,  816,  816,  816,  816,  816,  817,  817,  817,  817,
      817,  817,  817,  817,  817,  817,  817,  817,  817,  817,
      817,  817,  818,  653,  818,  818,  818,  818,  818,  818,
      818,  818,  818,  652,  818,  818,  818,  818,  819,  651,
      819,  819,  819,  819,  819,  819,  819,  819,  819,  819,
      819,  819,  819,  819,  820,  820,  650,  646,  644,  643,
      820,  821,  821,  821,  821,  642,  641,  821,  821,  821,

      821,  822,  639,  822,  822,  822,  822,  822,  822,  822,
      822,  822,  822,  822,  822,  822,  822,  823,  637,  823,
      823,  823,  823,  823,  823,  823,  823,  823,  823,  823,
      823,  823,  823,  824,  636,  824,  824,  824,  824,  824,
      824,  824,  824,  824,  824,  824,  824,  824,  824,  825,
      635,  825,  825,  825,  825,  825,  825,  825,  825,  825,
      825,  825,  825,  825,  825,  826,  633,  826,  826,  826,
      826,  826,  826,  826,  826,  826,  826,  826,  826,  826,
      826,  827,  632,  827,  827,  827,  827,  827,  827,  827,
      827,  827,  827,  827,  827,  827,  827,  828,  828,  828,

      828,  828,  828,  828,  828,  828,  828,  828,  828,  828,
      828,  828,  828,  829,  631,  829,  829,  630,  829,  829,
      829,  629,  628,  829,  829,  627,  626,  625,  829,  830,
      830,  830,  830,  624,  623,  830,  830,  830,  831,  621,
      831,  831,  831,  831,  831,  831,  831,  831,  831,  831,
      831,  831,  831,  831,  832,  832,  832,  832,  619,  612,
      832,  832,  832,  833,  833,  611,  610,  609,  833,  833,
      834,  608,  607,  606,  834,  834,  834,  834,  604,  601,
      834,  834,  835,  600,  835,  835,  835,  835,  835,  835,
      835,  835,  835,  835,  835,  835,  835,  835,  836,  836,

      836,  836,  599,  598,  836,  836,  836,  837,  837,  837,
      837,  837,  837,  837,  837,  837,  837,  837,  837,  837,
      837,  837,  837,  838,  838,  838,  838,  597,  838,  838,
      838,  838,  838,  838,  838,  838,  838,  838,  838,  839,
      596,  595,  839,  839,  839,  839,  839,  839,  839,  594,
      839,  839,  839,  839,  839,  840,  593,  840,  840,  592,
      840,  840,  840,  591,  590,  840,  840,  588,  569,  568,
      840,  841,  841,  841,  841,  564,  563,  841,  841,  841,
      842,  562,  842,  842,  842,  842,  842,  842,  842,  842,
      842,  842,  842,  842,  842,  842,  843,  843,  560,  843,

      843,  559,  558,  557,  843,  843,  844,  556,  844,  844,
      844,  844,  844,  844,  844,  844,  844,  844,  844,  844,
      844,  844,  845,  555,  845,  845,  845,  845,  845,  845,
      845,  845,  845,  845,  845,  845,  845,  845,  846,  554,
      846,  846,  846,  846,  846,  846,  846,  846,  846,  846,
      846,  846,  846,  846,  847,  847,  847,  847,  847,  847,
      847,  847,  847,  847,  847,  847,  847,  847,  847,  847,
      848,  848,  848,  848,  553,  552,  848,  848,  848,  849,
      849,  849,  849,  551,  549,  849,  849,  849,  850,  850,
      850,  850,  850,  850,  850,  850,  850,  850,  850,  850,

      850,  850,  850,  850,  851,  851,  851,  851,  851,  851,
      851,  851,  851,  851,  851,  851,  851,  851,  851,  851,
      852,  548,  852,  852,  852,  852,  852,  852,  852,  852,
      852,  546,  852,  852,  852,  852,  853,  853,  545,  544,
      543,  542,  853,  854,  854,  854,  854,  541,  540,  854,
      854,  854,  854,  855,  539,  855,  855,  855,  855,  855,
      855,  855,  855,  855,  855,  855,  855,  855,  855,  856,
      856,  856,  856,  856,  856,  856,  856,  856,  856,  856,
      856,  856,  856,  856,  856,  857,  857,  857,  857,  857,
      857,  857,  857,  857,  857,  857,  857,  857,  857,  857,

      857,  538,  536,  534,  533,  530,  528,  526,  525,  524,
      523,  509,  508,  507,  506,  500,  499,  498,  497,  496,
      492,  491,  490,  489,  488,  487,  486,  483,  482,  481,
      480,  479,  478,  476,  475,  474,  473,  472,  471,  469,
      468,  467,  464,  463,  461,  460,  459,  458,  457,  454,
      453,  452,  451,  439,  437,  436,  435,  434,  430,  426,
      423,  422,  421,  414,  413,  412,  411,  410,  408,  407,
      406,  404,  403,  402,  401,  400,  399,  398,  397,  396,
      395,  394,  393,  392,  391,  390,  388,  387,  386,  384,
      383,  382,  381,  380,  379,  378,  377,  376,  373,  372,

      361,  356,  355,  352,  350,  346,  337,  327,  326,  325,
      323,  318,  315,  313,  312,  311,  308,  307,  306,  305,
      303,  301,  300,  299,  297,  296,  295,  293,  292,  290,
      287,  286,  284,  282,  281,  280,  276,  263,  262,  243,
      240,  239,  234,  231,  226,  222,  221,  220,  219,  216,
      208,  207,  204,  203,  189,  187,  183,  179,  176,  175,
      174,  173,  172,  171,  169,  166,  165,  162,  161,  159,
      156,  155,  154,  153,  151,  149,  148,  146,  144,  143,
      137,  134,  125,  124,  122,  119,  114,  112,  107,  103,
       97,   92,   89,   87,   85,   84,   83,   80,   76,   74,

       73,   71,   67,   65,   59,   55,   50,   47,   43,   39,
       16,   15,   10,    8,    7,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768,  768,  768,  768,  768,  768,  768,
      768,  768,  768,  768
    } ;

static yy_state_type yy_last_accepting_state;
static char *yy_last_accepting_cpos;

/* The intent behind this definition is that it'll catch
 * any uses of REJECT which flex missed.
 */
#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
char *yytext;
#define INITIAL 0
/* scan.l - scanner for flex input */
/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Vern Paxson.
 * 
 * The United States Government has rights in this work pursuant
 * to contract no. DE-AC03-76SF00098 between the United States
 * Department of Energy and the University of California.
 *
 * Redistribution and use in source and binary forms are permitted provided
 * that: (1) source distributions retain this entire copyright notice and
 * comment, and (2) distributions including binaries display the following
 * acknowledgement:  ``This product includes software developed by the
 * University of California, Berkeley and its contributors'' in the
 * documentation or other materials provided with the distribution and in
 * all advertising materials mentioning features or use of this software.
 * Neither the name of the University nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* $Header: /a1/cvsadm/cvsroot/expsir/csubjects/flex/versions.alt/versions.seeded/v4/flex.c,v 1.1.1.2 2003/09/02 20:21:59 expsir Exp $ */

#define ACTION_ECHO add_action( yytext )
#define ACTION_IFDEF(def, should_define) \
	{ \
	if ( should_define ) \
		action_define( def, 1 ); \
	}

#define MARK_END_OF_PROLOG mark_prolog();

#define YY_DECL \
	int flexscan()

#define RETURNCHAR \
	yylval = (unsigned char) yytext[0]; \
	return CHAR;

#define RETURNNAME \
	strcpy( nmstr, yytext ); \
	return NAME;

#define PUT_BACK_STRING(str, start) \
	for ( i = strlen( str ) - 1; i >= start; --i ) \
		unput((str)[i])

#define CHECK_REJECT(str) \
	if ( all_upper( str ) ) \
		reject = true;

#define CHECK_YYMORE(str) \
	if ( all_lower( str ) ) \
		yymore_used = true;
#define YY_STACK_USED 1
#define YY_NO_TOP_STATE 1
#define SECT2 1
#define SECT2PROLOG 2
#define SECT3 3
#define CODEBLOCK 4
#define PICKUPDEF 5
#define SC 6
#define CARETISBOL 7
#define NUM 8
#define QUOTE 9

#define FIRSTCCL 10
#define CCL 11
#define ACTION 12
#define RECOVER 13
#define COMMENT 14
#define ACTION_STRING 15
#define PERCENT_BRACE_ACTION 16

#define OPTION 17
#define LINEDIR 18


/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap YY_PROTO(( void ));
#else
extern int yywrap YY_PROTO(( void ));
#endif
#endif

#ifndef YY_NO_UNPUT
static void yyunput YY_PROTO(( int c, char *buf_ptr ));
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy YY_PROTO(( char *, yyconst char *, int ));
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen YY_PROTO(( yyconst char * ));
#endif

#ifndef YY_NO_INPUT
#ifdef __cplusplus
static int yyinput YY_PROTO(( void ));
#else
static int input YY_PROTO(( void ));
#endif
#endif

#if YY_STACK_USED
static int yy_start_stack_ptr = 0;
static int yy_start_stack_depth = 0;
static int *yy_start_stack = 0;
#ifndef YY_NO_PUSH_STATE
static void yy_push_state YY_PROTO(( int new_state ));
#endif
#ifndef YY_NO_POP_STATE
static void yy_pop_state YY_PROTO(( void ));
#endif
#ifndef YY_NO_TOP_STATE
static int yy_top_state YY_PROTO(( void ));
#endif

#else
#define YY_NO_PUSH_STATE 1
#define YY_NO_POP_STATE 1
#define YY_NO_TOP_STATE 1
#endif

#ifdef YY_MALLOC_DECL
YY_MALLOC_DECL
#else
#if __STDC__
#ifndef __cplusplus
#include <stdlib.h>
#endif
#else
/* Just try to get by without declaring the routines.  This will fail
 * miserably on non-ANSI systems for which sizeof(size_t) != sizeof(int)
 * or sizeof(void*) != sizeof(int).
 */
#endif
#endif

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#define YY_READ_BUF_SIZE 8192
#endif

/* Copy whatever the last rule matched to the standard output. */

#ifndef ECHO
/* This used to be an fputs(), but since the string might contain NUL's,
 * we now use fwrite().
 */
#define ECHO (void) fwrite( yytext, yyleng, 1, yyout )
#endif

/* Gets input and stuffs it into "buf".  number of characters read, or YY_NULL,
 * is returned in "result".
 */
#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( yy_current_buffer->yy_is_interactive ) \
		{ \
		int c = '*', n; \
		for ( n = 0; n < max_size && \
			     (c = getc( yyin )) != EOF && c != '\n'; ++n ) \
			buf[n] = (char) c; \
		if ( c == '\n' ) \
			buf[n++] = (char) c; \
		if ( c == EOF && ferror( yyin ) ) \
			YY_FATAL_ERROR( "input in flex scanner failed" ); \
		result = n; \
		} \
	else if ( ((result = fread( buf, 1, max_size, yyin )) == 0) \
		  && ferror( yyin ) ) \
		YY_FATAL_ERROR( "input in flex scanner failed" );
#endif

/* No semi-colon after return; correct usage is to write "yyterminate();" -
 * we don't want an extra ';' after the "return" because that will cause
 * some compilers to complain about unreachable statements.
 */
#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Report a fatal error. */
#ifndef YY_FATAL_ERROR
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )
#endif

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL int yylex YY_PROTO(( void ))
#endif

/* Code executed at the beginning of each rule, after yytext and yyleng
 * have been set up.
 */
#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

/* Code executed at the end of each rule. */
#ifndef YY_BREAK
#define YY_BREAK break;
#endif

#define YY_RULE_SETUP \
	if ( yyleng > 0 ) \
		yy_current_buffer->yy_at_bol = \
				(yytext[yyleng - 1] == '\n'); \
	YY_USER_ACTION

YY_DECL
	{
	register yy_state_type yy_current_state;
	register char *yy_cp, *yy_bp;
	register int yy_act;


	static int bracelevel, didadef, indented_code;
	static int doing_rule_action = false;
	static int option_sense;

	int doing_codeblock = false;
	int i;
	Char nmdef[MAXLINE], myesc();



	if ( yy_init )
		{
		yy_init = 0;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif

		if ( ! yy_start )
			yy_start = 1;	/* first start state */

		if ( ! yyin )
			yyin = stdin;

		if ( ! yyout )
			yyout = stdout;

		if ( ! yy_current_buffer )
			yy_current_buffer =
				yy_create_buffer( yyin, YY_BUF_SIZE );

		yy_load_buffer_state();
		}

	while ( 1 )		/* loops until end-of-file is reached */
		{
		yy_cp = yy_c_buf_p;

		/* Support of yytext. */
		*yy_cp = yy_hold_char;

		/* yy_bp points to the position in yy_ch_buf of the start of
		 * the current run.
		 */
		yy_bp = yy_cp;

		yy_current_state = yy_start;
		yy_current_state += YY_AT_BOL();
yy_match:
		do
			{
			register YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
			if ( yy_accept[yy_current_state] )
				{
				yy_last_accepting_state = yy_current_state;
				yy_last_accepting_cpos = yy_cp;
				}
			while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
				{
				yy_current_state = (int) yy_def[yy_current_state];
				if ( yy_current_state >= 769 )
					yy_c = yy_meta[(unsigned int) yy_c];
				}
			yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
			++yy_cp;
			}
		while ( yy_base[yy_current_state] != 2716 );

yy_find_action:
		yy_act = yy_accept[yy_current_state];
		if ( yy_act == 0 )
			{ /* have to back up */
			yy_cp = yy_last_accepting_cpos;
			yy_current_state = yy_last_accepting_state;
			yy_act = yy_accept[yy_current_state];
			}

		YY_DO_BEFORE_ACTION;


do_action:	/* This label is used only to access EOF actions. */


		switch ( yy_act )
	{ /* beginning of action switch */
			case 0: /* must back up */
			/* undo the effects of YY_DO_BEFORE_ACTION */
			*yy_cp = yy_hold_char;
			yy_cp = yy_last_accepting_cpos;
			yy_current_state = yy_last_accepting_state;
			goto yy_find_action;


case 1:
YY_RULE_SETUP
indented_code = true; BEGIN(CODEBLOCK);
	YY_BREAK
case 2:
YY_RULE_SETUP
ACTION_ECHO; yy_push_state( COMMENT );
	YY_BREAK
case 3:
YY_RULE_SETUP
yy_push_state( LINEDIR );
	YY_BREAK
case 4:
YY_RULE_SETUP
return SCDECL;
	YY_BREAK
case 5:
YY_RULE_SETUP
return XSCDECL;
	YY_BREAK
case 6:
YY_RULE_SETUP
{
			++linenum;
			line_directive_out( (FILE *) 0, 1 );
			indented_code = false;
			BEGIN(CODEBLOCK);
			}
	YY_BREAK
case 7:
YY_RULE_SETUP
/* discard */
	YY_BREAK
case 8:
YY_RULE_SETUP
{
			sectnum = 2;
			bracelevel = 0;
			mark_defs1();
			line_directive_out( (FILE *) 0, 1 );
			BEGIN(SECT2PROLOG);
			return SECTEND;
			}
	YY_BREAK
case 9:
YY_RULE_SETUP
yytext_is_array = false; ++linenum;
	YY_BREAK
case 10:
YY_RULE_SETUP
yytext_is_array = true; ++linenum;
	YY_BREAK
case 11:
YY_RULE_SETUP
BEGIN(OPTION); return OPTION_OP;
	YY_BREAK
case 12:
YY_RULE_SETUP
++linenum; /* ignore */
	YY_BREAK
case 13:
YY_RULE_SETUP
++linenum;	/* ignore */
	YY_BREAK
case 14:
YY_RULE_SETUP
synerr( _( "unrecognized '%' directive" ) );
	YY_BREAK
case 15:
YY_RULE_SETUP
{
			strcpy( nmstr, yytext );
			didadef = false;
			BEGIN(PICKUPDEF);
			}
	YY_BREAK
case 16:
YY_RULE_SETUP
RETURNNAME;
	YY_BREAK
case 17:
YY_RULE_SETUP
++linenum; /* allows blank lines in section 1 */
	YY_BREAK
case 18:
YY_RULE_SETUP
ACTION_ECHO; ++linenum; /* maybe end of comment line */
	YY_BREAK


case 19:
YY_RULE_SETUP
ACTION_ECHO; yy_pop_state();
	YY_BREAK
case 20:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 21:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 22:
YY_RULE_SETUP
++linenum; ACTION_ECHO;
	YY_BREAK


case 23:
YY_RULE_SETUP
yy_pop_state();
	YY_BREAK
case 24:
YY_RULE_SETUP
linenum = myctoi( yytext );
	YY_BREAK
case 25:
YY_RULE_SETUP
{
			flex_free( (void *) infilename );
			infilename = copy_string( yytext + 1 );
			infilename[strlen( infilename ) - 1] = '\0';
			}
	YY_BREAK
case 26:
YY_RULE_SETUP
/* ignore spurious characters */
	YY_BREAK


case 27:
YY_RULE_SETUP
++linenum; BEGIN(INITIAL);
	YY_BREAK
case 28:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 29:
YY_RULE_SETUP
{
			++linenum;
			ACTION_ECHO;
			if ( indented_code )
				BEGIN(INITIAL);
			}
	YY_BREAK


case 30:
YY_RULE_SETUP
/* separates name and definition */
	YY_BREAK
case 31:
YY_RULE_SETUP
{
			strcpy( (char *) nmdef, yytext );

			/* Skip trailing whitespace. */
			for ( i = strlen( (char *) nmdef ) - 1;
			      i >= 0 && (nmdef[i] == ' ' || nmdef[i] == '\t');
			      --i )
				;

			nmdef[i + 1] = '\0';

			ndinstal( nmstr, nmdef );
			didadef = true;
			}
	YY_BREAK
case 32:
YY_RULE_SETUP
{
			if ( ! didadef )
				synerr( _( "incomplete name definition" ) );
			BEGIN(INITIAL);
			++linenum;
			}
	YY_BREAK


case 33:
YY_RULE_SETUP
++linenum; BEGIN(INITIAL);
	YY_BREAK
case 34:
YY_RULE_SETUP
option_sense = true;
	YY_BREAK
case 35:
YY_RULE_SETUP
return '=';
	YY_BREAK
case 36:
YY_RULE_SETUP
option_sense = ! option_sense;
	YY_BREAK
case 37:
YY_RULE_SETUP
csize = option_sense ? 128 : 256;
	YY_BREAK
case 38:
YY_RULE_SETUP
csize = option_sense ? 256 : 128;
	YY_BREAK
case 39:
YY_RULE_SETUP
long_align = option_sense;
	YY_BREAK
case 40:
YY_RULE_SETUP
{
			action_define( "YY_ALWAYS_INTERACTIVE", option_sense );
			}
	YY_BREAK
case 41:
YY_RULE_SETUP
yytext_is_array = option_sense;
	YY_BREAK
case 42:
YY_RULE_SETUP
backing_up_report = option_sense;
	YY_BREAK
case 43:
YY_RULE_SETUP
interactive = ! option_sense;
	YY_BREAK
case 44:
YY_RULE_SETUP
C_plus_plus = option_sense;
	YY_BREAK
case 45:
YY_RULE_SETUP
caseins = ! option_sense;
	YY_BREAK
case 46:
YY_RULE_SETUP
caseins = option_sense;
	YY_BREAK
case 47:
YY_RULE_SETUP
ddebug = option_sense;
	YY_BREAK
case 48:
YY_RULE_SETUP
spprdflt = ! option_sense;
	YY_BREAK
case 49:
YY_RULE_SETUP
useecs = option_sense;
	YY_BREAK
case 50:
YY_RULE_SETUP
{
			useecs = usemecs = false;
			use_read = fullspd = true;
			}
	YY_BREAK
case 51:
YY_RULE_SETUP
{
			useecs = usemecs = false;
			use_read = fulltbl = true;
			}
	YY_BREAK
case 52:
YY_RULE_SETUP
ACTION_IFDEF("YY_NO_INPUT", ! option_sense);
	YY_BREAK
case 53:
YY_RULE_SETUP
interactive = option_sense;
	YY_BREAK
case 54:
YY_RULE_SETUP
lex_compat = option_sense;
	YY_BREAK
case 55:
YY_RULE_SETUP
{
			action_define( "YY_MAIN", option_sense );
			do_yywrap = ! option_sense;
			}
	YY_BREAK
case 56:
YY_RULE_SETUP
usemecs = option_sense;
	YY_BREAK
case 57:
YY_RULE_SETUP
{
			action_define( "YY_NEVER_INTERACTIVE", option_sense );
			}
	YY_BREAK
case 58:
YY_RULE_SETUP
performance_report += option_sense ? 1 : -1;
	YY_BREAK
case 59:
YY_RULE_SETUP
yytext_is_array = ! option_sense;
	YY_BREAK
case 60:
YY_RULE_SETUP
use_read = option_sense;
	YY_BREAK
case 61:
YY_RULE_SETUP
reject_really_used = option_sense;
	YY_BREAK
case 62:
YY_RULE_SETUP
action_define( "YY_STACK_USED", option_sense );
	YY_BREAK
case 63:
YY_RULE_SETUP
do_stdinit = option_sense;
	YY_BREAK
case 64:
YY_RULE_SETUP
use_stdout = option_sense;
	YY_BREAK
case 65:
YY_RULE_SETUP
ACTION_IFDEF("YY_NO_UNPUT", ! option_sense);
	YY_BREAK
case 66:
YY_RULE_SETUP
printstats = option_sense;
	YY_BREAK
case 67:
YY_RULE_SETUP
nowarn = ! option_sense;
	YY_BREAK
case 68:
YY_RULE_SETUP
do_yylineno = option_sense;
	YY_BREAK
case 69:
YY_RULE_SETUP
yymore_really_used = option_sense;
	YY_BREAK
case 70:
YY_RULE_SETUP
do_yywrap = option_sense;
	YY_BREAK
case 71:
YY_RULE_SETUP
ACTION_IFDEF("YY_NO_PUSH_STATE", ! option_sense);
	YY_BREAK
case 72:
YY_RULE_SETUP
ACTION_IFDEF("YY_NO_POP_STATE", ! option_sense);
	YY_BREAK
case 73:
YY_RULE_SETUP
ACTION_IFDEF("YY_NO_TOP_STATE", ! option_sense);
	YY_BREAK
case 74:
YY_RULE_SETUP
ACTION_IFDEF("YY_NO_SCAN_BUFFER", ! option_sense);
	YY_BREAK
case 75:
YY_RULE_SETUP
ACTION_IFDEF("YY_NO_SCAN_BYTES", ! option_sense);
	YY_BREAK
case 76:
YY_RULE_SETUP
ACTION_IFDEF("YY_NO_SCAN_STRING", ! option_sense);
	YY_BREAK
case 77:
YY_RULE_SETUP
return OPT_OUTFILE;
	YY_BREAK
case 78:
YY_RULE_SETUP
return OPT_PREFIX;
	YY_BREAK
case 79:
YY_RULE_SETUP
return OPT_YYCLASS;
	YY_BREAK
case 80:
YY_RULE_SETUP
{
			strcpy( nmstr, yytext + 1 );
			nmstr[strlen( nmstr ) - 1] = '\0';
			return NAME;
			}
	YY_BREAK
case 81:
YY_RULE_SETUP
{
			format_synerr( _( "unrecognized %%option: %s" ),
				yytext );
			BEGIN(RECOVER);
			}
	YY_BREAK

case 82:
YY_RULE_SETUP
++linenum; BEGIN(INITIAL);
	YY_BREAK

case 83:
YY_RULE_SETUP
++bracelevel; yyless( 2 );	/* eat only %{ */
	YY_BREAK
case 84:
YY_RULE_SETUP
--bracelevel; yyless( 2 );	/* eat only %} */
	YY_BREAK
case 85:
YY_RULE_SETUP
ACTION_ECHO;	/* indented code in prolog */
	YY_BREAK
case 86:
YY_RULE_SETUP
{	/* non-indented code */
			if ( bracelevel <= 0 )
				{ /* not in %{ ... %} */
				yyless( 0 );	/* put it all back */
				yy_set_bol( 1 );
				mark_prolog();
				BEGIN(SECT2);
				}
			else
				ACTION_ECHO;
			}
	YY_BREAK
case 87:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 88:
YY_RULE_SETUP
++linenum; ACTION_ECHO;
	YY_BREAK
case YY_STATE_EOF(SECT2PROLOG):
{
			mark_prolog();
			sectnum = 0;
			yyterminate(); /* to stop the parser */
			}
	YY_BREAK


case 89:
YY_RULE_SETUP
++linenum; /* allow blank lines in section 2 */
	YY_BREAK
case 90:
YY_RULE_SETUP
{
			indented_code = false;
			doing_codeblock = true;
			bracelevel = 1;
			BEGIN(PERCENT_BRACE_ACTION);
			}
	YY_BREAK
case 91:
YY_RULE_SETUP
BEGIN(SC); return '<';
	YY_BREAK
case 92:
YY_RULE_SETUP
return '^';
	YY_BREAK
case 93:
YY_RULE_SETUP
BEGIN(QUOTE); return '"';
	YY_BREAK
case 94:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp = yy_bp + 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
BEGIN(NUM); return '{';
	YY_BREAK
case 95:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp = yy_bp + 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
return '$';
	YY_BREAK
case 96:
YY_RULE_SETUP
{
			bracelevel = 1;
			BEGIN(PERCENT_BRACE_ACTION);

			if ( in_rule )
				{
				doing_rule_action = true;
				in_rule = false;
				return '\n';
				}
			}
	YY_BREAK
case 97:
YY_RULE_SETUP
continued_action = true; ++linenum; return '\n';
	YY_BREAK
case 98:
YY_RULE_SETUP
{
			yyless( yyleng - 2 );	/* put back '/', '*' */
			bracelevel = 0;
			continued_action = false;
			BEGIN(ACTION);
			}
	YY_BREAK
case 99:
YY_RULE_SETUP
/* allow indented rules */
	YY_BREAK
case 100:
YY_RULE_SETUP
{
			/* This rule is separate from the one below because
			 * otherwise we get variable trailing context, so
			 * we can't build the scanner using -{f,F}.
			 */
			bracelevel = 0;
			continued_action = false;
			BEGIN(ACTION);

			if ( in_rule )
				{
				doing_rule_action = true;
				in_rule = false;
				return '\n';
				}
			}
	YY_BREAK
case 101:
YY_RULE_SETUP
{
			bracelevel = 0;
			continued_action = false;
			BEGIN(ACTION);
			unput( '\n' );	/* so <ACTION> sees it */

			if ( in_rule )
				{
				doing_rule_action = true;
				in_rule = false;
				return '\n';
				}
			}
	YY_BREAK
case 102:
case 103:
YY_RULE_SETUP
return EOF_OP;
	YY_BREAK
case 104:
YY_RULE_SETUP
{
			sectnum = 3;
			BEGIN(SECT3);
			yyterminate(); /* to stop the parser */
			}
	YY_BREAK
case 105:
YY_RULE_SETUP
{
			int cclval;

			strcpy( nmstr, yytext );

			/* Check to see if we've already encountered this
			 * ccl.
			 */
			if ( (cclval = ccllookup( (Char *) nmstr )) != 0 )
				{
				if ( input() != ']' )
					synerr( _( "bad character class" ) );

				yylval = cclval;
				++cclreuse;
				return PREVCCL;
				}
			else
				{
				/* We fudge a bit.  We know that this ccl will
				 * soon be numbered as lastccl + 1 by cclinit.
				 */
				cclinstal( (Char *) nmstr, lastccl + 1 );

				/* Push back everything but the leading bracket
				 * so the ccl can be rescanned.
				 */
				yyless( 1 );

				BEGIN(FIRSTCCL);
				return '[';
				}
			}
	YY_BREAK
case 106:
YY_RULE_SETUP
{
			register Char *nmdefptr;
			Char *ndlookup();

			strcpy( nmstr, yytext + 1 );
			nmstr[yyleng - 2] = '\0';  /* chop trailing brace */

			if ( (nmdefptr = ndlookup( nmstr )) == 0 )
				format_synerr(
					_( "undefined definition {%s}" ),
						nmstr );

			else
				{ /* push back name surrounded by ()'s */
				int len = strlen( (char *) nmdefptr );

				if ( lex_compat || nmdefptr[0] == '^' ||
				     (len > 0 && nmdefptr[len - 1] == '$') )
					{ /* don't use ()'s after all */
					PUT_BACK_STRING((char *) nmdefptr, 0);

					if ( nmdefptr[0] == '^' )
						BEGIN(CARETISBOL);
					}

				else
					{
					unput(')');
					PUT_BACK_STRING((char *) nmdefptr, 0);
					unput('(');
					}
				}
			}
	YY_BREAK
case 107:
YY_RULE_SETUP
return (unsigned char) yytext[0];
	YY_BREAK
case 108:
YY_RULE_SETUP
RETURNCHAR;
	YY_BREAK


case 109:
YY_RULE_SETUP
return (unsigned char) yytext[0];
	YY_BREAK
case 110:
YY_RULE_SETUP
BEGIN(SECT2); return '>';
	YY_BREAK
case 111:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp = yy_bp + 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
BEGIN(CARETISBOL); return '>';
	YY_BREAK
case 112:
YY_RULE_SETUP
RETURNNAME;
	YY_BREAK
case 113:
YY_RULE_SETUP
{
			format_synerr( _( "bad <start condition>: %s" ),
				yytext );
			}
	YY_BREAK

case 114:
YY_RULE_SETUP
BEGIN(SECT2); return '^';
	YY_BREAK

case 115:
YY_RULE_SETUP
RETURNCHAR;
	YY_BREAK
case 116:
YY_RULE_SETUP
BEGIN(SECT2); return '"';
	YY_BREAK
case 117:
YY_RULE_SETUP
{
			synerr( _( "missing quote" ) );
			BEGIN(SECT2);
			++linenum;
			return '"';
			}
	YY_BREAK


case 118:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp = yy_bp + 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
BEGIN(CCL); return '^';
	YY_BREAK
case 119:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp = yy_bp + 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
return '^';
	YY_BREAK
case 120:
YY_RULE_SETUP
BEGIN(CCL); RETURNCHAR;
	YY_BREAK


case 121:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp = yy_bp + 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
return '-';
	YY_BREAK
case 122:
YY_RULE_SETUP
RETURNCHAR;
	YY_BREAK
case 123:
YY_RULE_SETUP
BEGIN(SECT2); return ']';
	YY_BREAK
case 124:
YY_RULE_SETUP
{
			synerr( _( "bad character class" ) );
			BEGIN(SECT2);
			return ']';
			}
	YY_BREAK


case 125:
YY_RULE_SETUP
BEGIN(CCL); return CCE_ALNUM;
	YY_BREAK
case 126:
YY_RULE_SETUP
BEGIN(CCL); return CCE_ALPHA;
	YY_BREAK
case 127:
YY_RULE_SETUP
BEGIN(CCL); return CCE_BLANK;
	YY_BREAK
case 128:
YY_RULE_SETUP
BEGIN(CCL); return CCE_CNTRL;
	YY_BREAK
case 129:
YY_RULE_SETUP
BEGIN(CCL); return CCE_DIGIT;
	YY_BREAK
case 130:
YY_RULE_SETUP
BEGIN(CCL); return CCE_GRAPH;
	YY_BREAK
case 131:
YY_RULE_SETUP
BEGIN(CCL); return CCE_LOWER;
	YY_BREAK
case 132:
YY_RULE_SETUP
BEGIN(CCL); return CCE_PRINT;
	YY_BREAK
case 133:
YY_RULE_SETUP
BEGIN(CCL); return CCE_PUNCT;
	YY_BREAK
case 134:
YY_RULE_SETUP
BEGIN(CCL); return CCE_SPACE;
	YY_BREAK
case 135:
YY_RULE_SETUP
BEGIN(CCL); return CCE_UPPER;
	YY_BREAK
case 136:
YY_RULE_SETUP
BEGIN(CCL); return CCE_XDIGIT;
	YY_BREAK
case 137:
YY_RULE_SETUP
{
			format_synerr(
				_( "bad character class expression: %s" ),
					yytext );
			BEGIN(CCL); return CCE_ALNUM;
			}
	YY_BREAK


case 138:
YY_RULE_SETUP
{
			yylval = myctoi( yytext );
			return NUMBER;
			}
	YY_BREAK
case 139:
YY_RULE_SETUP
return ',';
	YY_BREAK
case 140:
YY_RULE_SETUP
BEGIN(SECT2); return '}';
	YY_BREAK
case 141:
YY_RULE_SETUP
{
			synerr( _( "bad character inside {}'s" ) );
			BEGIN(SECT2);
			return '}';
			}
	YY_BREAK
case 142:
YY_RULE_SETUP
{
			synerr( _( "missing }" ) );
			BEGIN(SECT2);
			++linenum;
			return '}';
			}
	YY_BREAK


case 143:
YY_RULE_SETUP
bracelevel = 0;
	YY_BREAK
case 144:
YY_RULE_SETUP
ACTION_ECHO; yy_push_state( COMMENT );
	YY_BREAK

case 145:
YY_RULE_SETUP
{
			ACTION_ECHO;
			CHECK_REJECT(yytext);
			}
	YY_BREAK
case 146:
YY_RULE_SETUP
{
			ACTION_ECHO;
			CHECK_YYMORE(yytext);
			}
	YY_BREAK

case 147:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 148:
YY_RULE_SETUP
{
			++linenum;
			ACTION_ECHO;
			if ( bracelevel == 0 ||
			     (doing_codeblock && indented_code) )
				{
				if ( doing_rule_action )
					add_action( "\tYY_BREAK\n" );

				doing_rule_action = doing_codeblock = false;
				BEGIN(SECT2);
				}
			}
	YY_BREAK

/* Reject and YYmore() are checked for above, in PERCENT_BRACE_ACTION */

case 149:
YY_RULE_SETUP
ACTION_ECHO; ++bracelevel;
	YY_BREAK
case 150:
YY_RULE_SETUP
ACTION_ECHO; --bracelevel;
	YY_BREAK
case 151:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 152:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 153:
YY_RULE_SETUP
ACTION_ECHO; /* character constant */
	YY_BREAK
case 154:
YY_RULE_SETUP
ACTION_ECHO; BEGIN(ACTION_STRING);
	YY_BREAK
case 155:
YY_RULE_SETUP
{
			++linenum;
			ACTION_ECHO;
			if ( bracelevel == 0 )
				{
				if ( doing_rule_action )
					add_action( "\tYY_BREAK\n" );

				doing_rule_action = false;
				BEGIN(SECT2);
				}
			}
	YY_BREAK
case 156:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK


case 157:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 158:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK
case 159:
YY_RULE_SETUP
++linenum; ACTION_ECHO;
	YY_BREAK
case 160:
YY_RULE_SETUP
ACTION_ECHO; BEGIN(ACTION);
	YY_BREAK
case 161:
YY_RULE_SETUP
ACTION_ECHO;
	YY_BREAK

case YY_STATE_EOF(COMMENT):
case YY_STATE_EOF(ACTION):
case YY_STATE_EOF(ACTION_STRING):
{
			synerr( _( "EOF encountered inside an action" ) );
			yyterminate();
			}
	YY_BREAK
case 162:
YY_RULE_SETUP
{
			yylval = myesc( (Char *) yytext );

			if ( YY_START == FIRSTCCL )
				BEGIN(CCL);

			return CHAR;
			}
	YY_BREAK

case 163:
YY_RULE_SETUP
ECHO;
	YY_BREAK
case YY_STATE_EOF(SECT3):
sectnum = 0; yyterminate();
	YY_BREAK

case 164:
YY_RULE_SETUP
format_synerr( _( "bad character: %s" ), yytext );
	YY_BREAK
case 165:
YY_RULE_SETUP
YY_FATAL_ERROR( "flex scanner jammed" );
	YY_BREAK
case YY_STATE_EOF(INITIAL):
case YY_STATE_EOF(SECT2):
case YY_STATE_EOF(CODEBLOCK):
case YY_STATE_EOF(PICKUPDEF):
case YY_STATE_EOF(SC):
case YY_STATE_EOF(CARETISBOL):
case YY_STATE_EOF(NUM):
case YY_STATE_EOF(QUOTE):
case YY_STATE_EOF(FIRSTCCL):
case YY_STATE_EOF(CCL):
case YY_STATE_EOF(RECOVER):
case YY_STATE_EOF(PERCENT_BRACE_ACTION):
case YY_STATE_EOF(OPTION):
case YY_STATE_EOF(LINEDIR):
	yyterminate();

	case YY_END_OF_BUFFER:
		{
		/* Amount of text matched not including the EOB char. */
		int yy_amount_of_matched_text = (int) (yy_cp - yytext_ptr) - 1;

		/* Undo the effects of YY_DO_BEFORE_ACTION. */
		*yy_cp = yy_hold_char;
		YY_RESTORE_YY_MORE_OFFSET

		if ( yy_current_buffer->yy_buffer_status == YY_BUFFER_NEW )
			{
			/* We're scanning a new file or input source.  It's
			 * possible that this happened because the user
			 * just pointed yyin at a new source and called
			 * yylex().  If so, then we have to assure
			 * consistency between yy_current_buffer and our
			 * globals.  Here is the right place to do so, because
			 * this is the first action (other than possibly a
			 * back-up) that will match for the new input source.
			 */
			yy_n_chars = yy_current_buffer->yy_n_chars;
			yy_current_buffer->yy_input_file = yyin;
			yy_current_buffer->yy_buffer_status = YY_BUFFER_NORMAL;
			}

		/* Note that here we test for yy_c_buf_p "<=" to the position
		 * of the first EOB in the buffer, since yy_c_buf_p will
		 * already have been incremented past the NUL character
		 * (since all states make transitions on EOB to the
		 * end-of-buffer state).  Contrast this with the test
		 * in input().
		 */
		if ( yy_c_buf_p <= &yy_current_buffer->yy_ch_buf[yy_n_chars] )
			{ /* This was really a NUL. */
			yy_state_type yy_next_state;

			yy_c_buf_p = yytext_ptr + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state();

			/* Okay, we're now positioned to make the NUL
			 * transition.  We couldn't have
			 * yy_get_previous_state() go ahead and do it
			 * for us because it doesn't know how to deal
			 * with the possibility of jamming (and we don't
			 * want to build jamming into it because then it
			 * will run more slowly).
			 */

			yy_next_state = yy_try_NUL_trans( yy_current_state );

			yy_bp = yytext_ptr + YY_MORE_ADJ;

			if ( yy_next_state )
				{
				/* Consume the NUL. */
				yy_cp = ++yy_c_buf_p;
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = yy_c_buf_p;
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer() )
			{
			case EOB_ACT_END_OF_FILE:
				{
				yy_did_buffer_switch_on_eof = 0;

				if ( yywrap() )
					{
					/* Note: because we've taken care in
					 * yy_get_next_buffer() to have set up
					 * yytext, we can now set up
					 * yy_c_buf_p so that if some total
					 * hoser (like flex itself) wants to
					 * call the scanner after we return the
					 * YY_NULL, it'll still work - another
					 * YY_NULL will get returned.
					 */
					yy_c_buf_p = yytext_ptr + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				yy_c_buf_p =
					yytext_ptr + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state();

				yy_cp = yy_c_buf_p;
				yy_bp = yytext_ptr + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				yy_c_buf_p =
				&yy_current_buffer->yy_ch_buf[yy_n_chars];

				yy_current_state = yy_get_previous_state();

				yy_cp = yy_c_buf_p;
				yy_bp = yytext_ptr + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR(
			"fatal flex scanner internal error--no action found" );
	} /* end of action switch */
		} /* end of scanning one token */
	} /* end of yylex */


/* yy_get_next_buffer - try to read in a new buffer
 *
 * Returns a code representing an action:
 *	EOB_ACT_LAST_MATCH -
 *	EOB_ACT_CONTINUE_SCAN - continue scanning from current position
 *	EOB_ACT_END_OF_FILE - end of file
 */

static int yy_get_next_buffer()
	{
	register char *dest = yy_current_buffer->yy_ch_buf;
	register char *source = yytext_ptr;
	register int number_to_move, i;
	int ret_val;

	if ( yy_c_buf_p > &yy_current_buffer->yy_ch_buf[yy_n_chars + 1] )
		YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

	if ( yy_current_buffer->yy_fill_buffer == 0 )
		{ /* Don't try to fill the buffer, so this is an EOF. */
		if ( yy_c_buf_p - yytext_ptr - YY_MORE_ADJ == 1 )
			{
			/* We matched a single character, the EOB, so
			 * treat this as a final EOF.
			 */
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
			/* We matched some text prior to the EOB, first
			 * process it.
			 */
			return EOB_ACT_LAST_MATCH;
			}
		}

	/* Try to read more data. */

	/* First move last chars to start of buffer. */
	number_to_move = (int) (yy_c_buf_p - yytext_ptr) - 1;

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( yy_current_buffer->yy_buffer_status == YY_BUFFER_EOF_PENDING )
		/* don't do the read, it's not guaranteed to return an EOF,
		 * just force an EOF
		 */
		yy_n_chars = 0;

	else
		{
		int num_to_read =
			yy_current_buffer->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{ /* Not enough room in the buffer - grow it. */
#ifdef YY_USES_REJECT
			YY_FATAL_ERROR(
"input buffer overflow, can't enlarge buffer because scanner uses REJECT" );
#else

			/* just a shorter name for the current buffer */
			YY_BUFFER_STATE b = yy_current_buffer;

			int yy_c_buf_p_offset =
				(int) (yy_c_buf_p - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					/* Include room in for 2 EOB chars. */
					yy_flex_realloc( (void *) b->yy_ch_buf,
							 b->yy_buf_size + 2 );
				}
			else
				/* Can't grow it, we don't own it. */
				b->yy_ch_buf = 0;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(
				"fatal error - scanner input buffer overflow" );

			yy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = yy_current_buffer->yy_buf_size -
						number_to_move - 1;
#endif
			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;

		/* Read in more data. */
		YY_INPUT( (&yy_current_buffer->yy_ch_buf[number_to_move]),
			yy_n_chars, num_to_read );
		}

	if ( yy_n_chars == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			yyrestart( yyin );
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			yy_current_buffer->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	yy_n_chars += number_to_move;
	yy_current_buffer->yy_ch_buf[yy_n_chars] = YY_END_OF_BUFFER_CHAR;
	yy_current_buffer->yy_ch_buf[yy_n_chars + 1] = YY_END_OF_BUFFER_CHAR;

	yytext_ptr = &yy_current_buffer->yy_ch_buf[0];

	return ret_val;
	}


/* yy_get_previous_state - get the state just before the EOB char was reached */

static yy_state_type yy_get_previous_state()
	{
	register yy_state_type yy_current_state;
	register char *yy_cp;

	yy_current_state = yy_start;
	yy_current_state += YY_AT_BOL();

	for ( yy_cp = yytext_ptr + YY_MORE_ADJ; yy_cp < yy_c_buf_p; ++yy_cp )
		{
		register YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
		if ( yy_accept[yy_current_state] )
			{
			yy_last_accepting_state = yy_current_state;
			yy_last_accepting_cpos = yy_cp;
			}
		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
			{
			yy_current_state = (int) yy_def[yy_current_state];
			if ( yy_current_state >= 769 )
				yy_c = yy_meta[(unsigned int) yy_c];
			}
		yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
		}

	return yy_current_state;
	}


/* yy_try_NUL_trans - try to make a transition on the NUL character
 *
 * synopsis
 *	next_state = yy_try_NUL_trans( current_state );
 */

#ifdef YY_USE_PROTOS
static yy_state_type yy_try_NUL_trans( yy_state_type yy_current_state )
#else
static yy_state_type yy_try_NUL_trans( yy_current_state )
yy_state_type yy_current_state;
#endif
	{
	register int yy_is_jam;
	register char *yy_cp = yy_c_buf_p;

	register YY_CHAR yy_c = 1;
	if ( yy_accept[yy_current_state] )
		{
		yy_last_accepting_state = yy_current_state;
		yy_last_accepting_cpos = yy_cp;
		}
	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = (int) yy_def[yy_current_state];
		if ( yy_current_state >= 769 )
			yy_c = yy_meta[(unsigned int) yy_c];
		}
	yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
	yy_is_jam = (yy_current_state == 768);

	return yy_is_jam ? 0 : yy_current_state;
	}


#ifndef YY_NO_UNPUT
#ifdef YY_USE_PROTOS
static void yyunput( int c, register char *yy_bp )
#else
static void yyunput( c, yy_bp )
int c;
register char *yy_bp;
#endif
	{
	register char *yy_cp = yy_c_buf_p;

	/* undo effects of setting up yytext */
	*yy_cp = yy_hold_char;

	if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )
		{ /* need to shift things up to make room */
		/* +2 for EOB chars. */
		register int number_to_move = yy_n_chars + 2;
		register char *dest = &yy_current_buffer->yy_ch_buf[
					yy_current_buffer->yy_buf_size + 2];
		register char *source =
				&yy_current_buffer->yy_ch_buf[number_to_move];

		while ( source > yy_current_buffer->yy_ch_buf )
			*--dest = *--source;

		yy_cp += (int) (dest - source);
		yy_bp += (int) (dest - source);
		yy_n_chars = yy_current_buffer->yy_buf_size;

		if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )
			YY_FATAL_ERROR( "flex scanner push-back overflow" );
		}

	*--yy_cp = (char) c;


	yytext_ptr = yy_bp;
	yy_hold_char = *yy_cp;
	yy_c_buf_p = yy_cp;
	}
#endif	/* ifndef YY_NO_UNPUT */


#ifdef __cplusplus
static int yyinput()
#else
static int input()
#endif
	{
	int c;

	*yy_c_buf_p = yy_hold_char;

	if ( *yy_c_buf_p == YY_END_OF_BUFFER_CHAR )
		{
		/* yy_c_buf_p now points to the character we want to return.
		 * If this occurs *before* the EOB characters, then it's a
		 * valid NUL; if not, then we've hit the end of the buffer.
		 */
		if ( yy_c_buf_p < &yy_current_buffer->yy_ch_buf[yy_n_chars] )
			/* This was really a NUL. */
			*yy_c_buf_p = '\0';

		else
			{ /* need more input */
#ifndef F_AA_4
			int offset = yy_c_buf_p - yytext_ptr;
#else
			int offset = yy_c_buf_p;
#endif
			++yy_c_buf_p;

			switch ( yy_get_next_buffer() )
				{
				case EOB_ACT_END_OF_FILE:
					{
					if ( yywrap() )
						{
						yy_c_buf_p = yytext_ptr + offset;
#ifndef F_HD_3
                                                return EOF;
#else

#endif
						}

					if ( ! yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput();
#else
					return input();
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
#ifndef F_AA_6
					yy_c_buf_p = yytext_ptr + offset;
#else
					yy_c_buf_p = yytext_ptr;
#endif
					break;

				case EOB_ACT_LAST_MATCH:
#ifdef __cplusplus
					YY_FATAL_ERROR(
					"unexpected last match in yyinput()" );
#else
					YY_FATAL_ERROR(
					"unexpected last match in input()" );
#endif
				}
			}
		}

	c = *(unsigned char *) yy_c_buf_p;	/* cast for 8-bit char's */
	*yy_c_buf_p = '\0';	/* preserve yytext */
	yy_hold_char = *++yy_c_buf_p;

	yy_current_buffer->yy_at_bol = (c == '\n');

	return c;
	}


#ifdef YY_USE_PROTOS
void yyrestart( FILE *input_file )
#else
void yyrestart( input_file )
FILE *input_file;
#endif
	{
	if ( ! yy_current_buffer )
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE );

	yy_init_buffer( yy_current_buffer, input_file );
	yy_load_buffer_state();
	}


#ifdef YY_USE_PROTOS
void yy_switch_to_buffer( YY_BUFFER_STATE new_buffer )
#else
void yy_switch_to_buffer( new_buffer )
YY_BUFFER_STATE new_buffer;
#endif
	{
	if ( yy_current_buffer == new_buffer )
		return;

	if ( yy_current_buffer )
		{
		/* Flush out information for old buffer. */
		*yy_c_buf_p = yy_hold_char;
		yy_current_buffer->yy_buf_pos = yy_c_buf_p;
		yy_current_buffer->yy_n_chars = yy_n_chars;
		}

	yy_current_buffer = new_buffer;
	yy_load_buffer_state();

	/* We don't actually know whether we did this switch during
	 * EOF (yywrap()) processing, but the only time this flag
	 * is looked at is after yywrap() is called, so it's safe
	 * to go ahead and always set it.
	 */
	yy_did_buffer_switch_on_eof = 1;
	}


#ifdef YY_USE_PROTOS
void yy_load_buffer_state( void )
#else
void yy_load_buffer_state()
#endif
	{
	yy_n_chars = yy_current_buffer->yy_n_chars;
	yytext_ptr = yy_c_buf_p = yy_current_buffer->yy_buf_pos;
	yyin = yy_current_buffer->yy_input_file;
	yy_hold_char = *yy_c_buf_p;
	}


#ifdef YY_USE_PROTOS
YY_BUFFER_STATE yy_create_buffer( FILE *file, int size )
#else
YY_BUFFER_STATE yy_create_buffer( file, size )
FILE *file;
int size;
#endif
	{
	YY_BUFFER_STATE b;

	b = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_buf_size = size;

	/* yy_ch_buf has to be 2 characters longer than the size given because
	 * we need to put in 2 end-of-buffer characters.
	 */
	b->yy_ch_buf = (char *) yy_flex_alloc( b->yy_buf_size + 2 );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_is_our_buffer = 1;

	yy_init_buffer( b, file );

	return b;
	}


#ifdef YY_USE_PROTOS
void yy_delete_buffer( YY_BUFFER_STATE b )
#else
void yy_delete_buffer( b )
YY_BUFFER_STATE b;
#endif
	{
	if ( ! b )
		return;

	if ( b == yy_current_buffer )
		yy_current_buffer = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		yy_flex_free( (void *) b->yy_ch_buf );

	yy_flex_free( (void *) b );
	}


#ifndef YY_ALWAYS_INTERACTIVE
#ifndef YY_NEVER_INTERACTIVE
extern int isatty YY_PROTO(( int ));
#endif
#endif

#ifdef YY_USE_PROTOS
void yy_init_buffer( YY_BUFFER_STATE b, FILE *file )
#else
void yy_init_buffer( b, file )
YY_BUFFER_STATE b;
FILE *file;
#endif


	{
	yy_flush_buffer( b );

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;

#if YY_ALWAYS_INTERACTIVE
	b->yy_is_interactive = 1;
#else
#if YY_NEVER_INTERACTIVE
	b->yy_is_interactive = 0;
#else
	b->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;
#endif
#endif
	}


#ifdef YY_USE_PROTOS
void yy_flush_buffer( YY_BUFFER_STATE b )
#else
void yy_flush_buffer( b )
YY_BUFFER_STATE b;
#endif

	{
	b->yy_n_chars = 0;

	/* We always need two end-of-buffer characters.  The first causes
	 * a transition to the end-of-buffer state.  The second causes
	 * a jam in that state.
	 */
	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == yy_current_buffer )
		yy_load_buffer_state();
	}


#ifndef YY_NO_SCAN_BUFFER
#ifdef YY_USE_PROTOS
YY_BUFFER_STATE yy_scan_buffer( char *base, yy_size_t size )
#else
YY_BUFFER_STATE yy_scan_buffer( base, size )
char *base;
yy_size_t size;
#endif
	{
	YY_BUFFER_STATE b;

	if ( size < 2 ||
	     base[size-2] != YY_END_OF_BUFFER_CHAR ||
	     base[size-1] != YY_END_OF_BUFFER_CHAR )
		/* They forgot to leave room for the EOB's. */
		return 0;

	b = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_buffer()" );

	b->yy_buf_size = size - 2;	/* "- 2" to take care of EOB's */
	b->yy_buf_pos = b->yy_ch_buf = base;
	b->yy_is_our_buffer = 0;
	b->yy_input_file = 0;
	b->yy_n_chars = b->yy_buf_size;
	b->yy_is_interactive = 0;
	b->yy_at_bol = 1;
	b->yy_fill_buffer = 0;
	b->yy_buffer_status = YY_BUFFER_NEW;

	yy_switch_to_buffer( b );

	return b;
	}
#endif


#ifndef YY_NO_SCAN_STRING
#ifdef YY_USE_PROTOS
YY_BUFFER_STATE yy_scan_string( yyconst char *str )
#else
YY_BUFFER_STATE yy_scan_string( str )
yyconst char *str;
#endif
	{
	int len;
	for ( len = 0; str[len]; ++len )
		;

	return yy_scan_bytes( str, len );
	}
#endif


#ifndef YY_NO_SCAN_BYTES
#ifdef YY_USE_PROTOS
YY_BUFFER_STATE yy_scan_bytes( yyconst char *bytes, int len )
#else
YY_BUFFER_STATE yy_scan_bytes( bytes, len )
yyconst char *bytes;
int len;
#endif
	{
	YY_BUFFER_STATE b;
	char *buf;
	yy_size_t n;
	int i;

	/* Get memory for full buffer, including space for trailing EOB's. */
	n = len + 2;
	buf = (char *) yy_flex_alloc( n );
	if ( ! buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_bytes()" );

	for ( i = 0; i < len; ++i )
		buf[i] = bytes[i];

	buf[len] = buf[len+1] = YY_END_OF_BUFFER_CHAR;

	b = yy_scan_buffer( buf, n );
	if ( ! b )
		YY_FATAL_ERROR( "bad buffer in yy_scan_bytes()" );

	/* It's okay to grow etc. this buffer, and we should throw it
	 * away when we're done.
	 */
	b->yy_is_our_buffer = 1;

	return b;
	}
#endif


#ifndef YY_NO_PUSH_STATE
#ifdef YY_USE_PROTOS
static void yy_push_state( int new_state )
#else
static void yy_push_state( new_state )
int new_state;
#endif
	{
	if ( yy_start_stack_ptr >= yy_start_stack_depth )
		{
		yy_size_t new_size;

		yy_start_stack_depth += YY_START_STACK_INCR;
		new_size = yy_start_stack_depth * sizeof( int );

		if ( ! yy_start_stack )
			yy_start_stack = (int *) yy_flex_alloc( new_size );

		else
			yy_start_stack = (int *) yy_flex_realloc(
					(void *) yy_start_stack, new_size );

		if ( ! yy_start_stack )
			YY_FATAL_ERROR(
			"out of memory expanding start-condition stack" );
		}

	yy_start_stack[yy_start_stack_ptr++] = YY_START;

	BEGIN(new_state);
	}
#endif


#ifndef YY_NO_POP_STATE
static void yy_pop_state()
	{
	if ( --yy_start_stack_ptr < 0 )
		YY_FATAL_ERROR( "start-condition stack underflow" );

	BEGIN(yy_start_stack[yy_start_stack_ptr]);
	}
#endif


#ifndef YY_NO_TOP_STATE
static int yy_top_state()
	{
	return yy_start_stack[yy_start_stack_ptr - 1];
	}
#endif

#ifndef YY_EXIT_FAILURE
#define YY_EXIT_FAILURE 2
#endif

#ifdef YY_USE_PROTOS
static void yy_fatal_error( yyconst char msg[] )
#else
static void yy_fatal_error( msg )
char msg[];
#endif
	{
	(void) fprintf( err, "%s\n", msg );
	exit( YY_EXIT_FAILURE );
	}



/* Redefine yyless() so it works in section 3 code. */

#undef yyless
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
		yytext[yyleng] = yy_hold_char; \
		yy_c_buf_p = yytext + n; \
		yy_hold_char = *yy_c_buf_p; \
		*yy_c_buf_p = '\0'; \
		yyleng = n; \
		} \
	while ( 0 )


/* Internal utility routines. */

#ifndef yytext_ptr
#ifdef YY_USE_PROTOS
static void yy_flex_strncpy( char *s1, yyconst char *s2, int n )
#else
static void yy_flex_strncpy( s1, s2, n )
char *s1;
yyconst char *s2;
int n;
#endif
	{
	register int i;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
	}
#endif

#ifdef YY_NEED_STRLEN
#ifdef YY_USE_PROTOS
static int yy_flex_strlen( yyconst char *s )
#else
static int yy_flex_strlen( s )
yyconst char *s;
#endif
	{
	register int n;
#ifndef F_AA_5
	for ( n = 0; s[n]; ++n )
#else
	for ( n = 1; s[n]; ++n )
#endif
		;

#ifndef F_HD_4
	return n;
#else

#endif
	}
#endif


#ifdef YY_USE_PROTOS
static void *yy_flex_alloc( yy_size_t size )
#else
static void *yy_flex_alloc( size )
yy_size_t size;
#endif
	{
	return (void *) malloc( size );
	}

#ifdef YY_USE_PROTOS
static void *yy_flex_realloc( void *ptr, yy_size_t size )
#else
static void *yy_flex_realloc( ptr, size )
void *ptr;
yy_size_t size;
#endif
	{
	/* The cast to (char *) in the following accommodates both
	 * implementations that use char* generic pointers, and those
	 * that use void* generic pointers.  It works with the latter
	 * because both ANSI C and C++ allow castless assignment from
	 * any pointer type to void*, and deal with argument conversions
	 * as though doing an assignment.
	 */
	return (void *) realloc( (char *) ptr, size );
	}

#ifdef YY_USE_PROTOS
static void yy_flex_free( void *ptr )
#else
static void yy_flex_free( ptr )
void *ptr;
#endif
	{
	free( ptr );
	}

#if YY_MAIN
int main()
	{
	yylex();
	return 0;
	}
#endif



int yywrap()
	{
	if ( --num_input_files > 0 )
		{
		set_input_file( *++input_files );
		return 0;
		}

	else
		return 1;
	}


/* set_input_file - open the given file (if NULL, stdin) for scanning */

void set_input_file( file )
char *file;
	{
	if ( file && strcmp( file, "-" ) )
		{
		infilename = copy_string( file );
		yyin = fopen( infilename, "r" );

		if ( yyin == NULL )
			lerrsf( _( "can't open %s" ), file );
		}

	else
		{
		yyin = stdin;
		infilename = copy_string( "<stdin>" );
		}

	linenum = 1;
	}


/* Wrapper routines for accessing the scanner's malloc routines. */

void *flex_alloc( size )
size_t size;
	{
	return (void *) malloc( size );
	}

void *flex_realloc( ptr, size )
void *ptr;
size_t size;
	{
	return (void *) realloc( ptr, size );
	}

void flex_free( ptr )
void *ptr;
	{
	if ( ptr )
		free( ptr );
	}
