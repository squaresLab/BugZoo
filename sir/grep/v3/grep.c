/* grep.c - main driver file for grep.
   Copyright (C) 1992, 1997, 1998, 1999 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA.  */

/* Written July 1992 by Mike Haertel.  */
/********* I added follow from makefile in order to run cfe*********/
#define HAVE_CONFIG_H 1
#define LOCALEDIR "/nfs/spectre/u4/jin/research/experiments/grep/docs/grep_2.4/lib/locale"
/*#define _FILE_OFFSET_BITS 32 */  /** I change this line in config.h from 64 to 32 **/

/*** end of added for cfe ****/ 
#ifdef HAVE_CONFIG_H
# include <config.h>
#define flag_config 1
#endif
#include <sys/types.h>
#define flag_systypes 1
#include <sys/stat.h>
#if defined(HAVE_MMAP)
# include <sys/mman.h>
#endif
#if defined(HAVE_SETRLIMIT)
# include <sys/time.h>
# include <sys/resource.h>
#endif
#include <stdio.h>

/*******IMPORTANT CHANGE for let stderr redirect to a file *******/
#undef stderr
#define stderr stdout
/******* FINISH IMPORTANT CHANGE *********/

#include "system.h"
#include "getopt.h"
#include "getpagesize.h"
#include "grep.h"
#include "savedir.h"

#undef MAX
#define MAX(A,B) ((A) > (B) ? (A) : (B))

struct stats
{
  struct stats *parent;
  struct stat stat;
};

/* base of chain of stat buffers, used to detect directory loops */
static struct stats stats_base;

/* if non-zero, display usage information and exit */
static int show_help;

/* If non-zero, print the version on standard output and exit.  */
static int show_version;

/* If nonzero, use mmap if possible.  */
static int mmap_option;

/* Short options.  */
static char const short_options[] =
"0123456789A:B:C::EFGHUVX:abcd:e:f:hiLlnqrsuvwxyZz";

/* Long options equivalences. */
static struct option long_options[] =
{
  {"after-context", required_argument, NULL, 'A'},
  {"basic-regexp", no_argument, NULL, 'G'},
  {"before-context", required_argument, NULL, 'B'},
  {"byte-offset", no_argument, NULL, 'b'},
  {"context", optional_argument, NULL, 'C'},
  {"count", no_argument, NULL, 'c'},
  {"directories", required_argument, NULL, 'd'},
  {"extended-regexp", no_argument, NULL, 'E'},
  {"file", required_argument, NULL, 'f'},
  {"files-with-matches", no_argument, NULL, 'l'},
  {"files-without-match", no_argument, NULL, 'L'},
  {"fixed-regexp", no_argument, NULL, 'F'},
  {"fixed-strings", no_argument, NULL, 'F'},
  {"help", no_argument, &show_help, 1},
  {"ignore-case", no_argument, NULL, 'i'},
  {"line-number", no_argument, NULL, 'n'},
  {"line-regexp", no_argument, NULL, 'x'},
  {"mmap", no_argument, &mmap_option, 1},
  {"no-filename", no_argument, NULL, 'h'},
  {"no-messages", no_argument, NULL, 's'},
  {"null", no_argument, NULL, 'Z'},
  {"null-data", no_argument, NULL, 'z'},
  {"quiet", no_argument, NULL, 'q'},
  {"recursive", no_argument, NULL, 'r'},
  {"regexp", required_argument, NULL, 'e'},
  {"invert-match", no_argument, NULL, 'v'},
  {"silent", no_argument, NULL, 'q'},
  {"text", no_argument, NULL, 'a'},
  {"binary", no_argument, NULL, 'U'},
  {"unix-byte-offsets", no_argument, NULL, 'u'},
  {"version", no_argument, NULL, 'V'},
  {"with-filename", no_argument, NULL, 'H'},
  {"word-regexp", no_argument, NULL, 'w'},
  {0, 0, 0, 0}
};

/* Define flags declared in grep.h. */
int match_icase;
int match_words;
int match_lines;
unsigned char eolbyte;

/* For error messages. */
static char *prog;
static char const *filename;
static int errseen;

/* How to handle directories.  */
static enum
  {
    READ_DIRECTORIES,
    RECURSE_DIRECTORIES,
    SKIP_DIRECTORIES
  } directories;

static int  ck_atoi PARAMS ((char const *, int *));
static void usage PARAMS ((int)) __attribute__((noreturn));
static void error PARAMS ((const char *, int));
static void setmatcher PARAMS ((char const *));
static int  install_matcher PARAMS ((char const *));
static int  prepend_args PARAMS ((char const *, char *, char **));
static void prepend_default_options PARAMS ((char const *, int *, char ***));
static char *page_alloc PARAMS ((size_t, char **));
static int  reset PARAMS ((int, char const *, struct stats *));
static int  fillbuf PARAMS ((size_t, struct stats *));
static int  grepbuf PARAMS ((char *, char *));
static void prtext PARAMS ((char *, char *, int *));
static void prpending PARAMS ((char *));
static void prline PARAMS ((char *, char *, int));
static void print_offset_sep PARAMS ((off_t, int));
static void nlscan PARAMS ((char *));
static int  grep PARAMS ((int, char const *, struct stats *));
static int  grepdir PARAMS ((char const *, struct stats *));
static int  grepfile PARAMS ((char const *, struct stats *));
#if O_BINARY
static inline int undossify_input PARAMS ((register char *, size_t));
#endif

/* Functions we'll use to search. */
static void (*compile) PARAMS ((char *, size_t));
static char *(*execute) PARAMS ((char *, size_t, char **));

/* Print a message and possibly an error string.  Remember
   that something awful happened. */
static void
error (mesg, errnum)
     const char *mesg;
     int errnum;
{
  if (errnum)
    fprintf (stderr, "%s: %s: %s\n", prog, mesg, strerror (errnum));
  else
    fprintf (stderr, "%s: %s\n", prog, mesg);
  errseen = 1;
}

/* Like error (), but die horribly after printing. */
void
fatal (mesg, errnum)
     const char *mesg;
     int errnum;
{
  error (mesg, errnum);
  exit (2);
}

/* Interface to handle errors and fix library lossage. */
char *
xmalloc (size)
     size_t size;
{
  char *result;

  result = malloc (size);
  if (size && !result)
    fatal (_("memory exhausted"), 0);
  return result;
}

/* Interface to handle errors and fix some library lossage. */
char *
xrealloc (ptr, size)
     char *ptr;
     size_t size;
{
  char *result;

  if (ptr)
    result = realloc (ptr, size);
  else
    result = malloc (size);
  if (size && !result)
    fatal (_("memory exhausted"), 0);
  return result;
}

/* Convert STR to a positive integer, storing the result in *OUT.
   If STR is not a valid integer, return -1 (otherwise 0). */
static int
ck_atoi (str, out)
     char const *str;
     int *out;
{
  char const *p;
  for (p = str; *p; p++)
    if (*p < '0' || *p > '9')
      return -1;

  *out = atoi (optarg);
  return 0;
}


/* Hairy buffering mechanism for grep.  The intent is to keep
   all reads aligned on a page boundary and multiples of the
   page size. */

static char *ubuffer;		/* Unaligned base of buffer. */
static char *buffer;		/* Base of buffer. */
static size_t bufsalloc;	/* Allocated size of buffer save region. */
static size_t bufalloc;		/* Total buffer size. */
#define PREFERRED_SAVE_FACTOR 5	/* Preferred value of bufalloc / bufsalloc.  */
static int bufdesc;		/* File descriptor. */
static char *bufbeg;		/* Beginning of user-visible stuff. */
static char *buflim;		/* Limit of user-visible stuff. */
static size_t pagesize;		/* alignment of memory pages */
static off_t bufoffset;		/* Read offset; defined on regular files.  */

#if defined(HAVE_MMAP)
static int bufmapped;		/* True if buffer is memory-mapped.  */
static off_t initial_bufoffset;	/* Initial value of bufoffset. */
#endif

/* Return VAL aligned to the next multiple of ALIGNMENT.  VAL can be
   an integer or a pointer.  Both args must be free of side effects.  */
#define ALIGN_TO(val, alignment) \
  ((size_t) (val) % (alignment) == 0 \
   ? (val) \
   : (val) + ((alignment) - (size_t) (val) % (alignment)))

/* Return the address of a page-aligned buffer of size SIZE,
   reallocating it from *UP.  Set *UP to the newly allocated (but
   possibly unaligned) buffer used to build the aligned buffer.  To
   free the buffer, free (*UP).  */
static char *
page_alloc (size, up)
     size_t size;
     char **up;
{
  size_t asize = size + pagesize - 1;
  if (size <= asize)
    {
      #ifndef FAULTY_F_DG_9
      char *p = *up ? realloc (*up, asize) : malloc (asize);
      #else
      char *p = *up ? malloc (asize) : realloc (*up, asize);
      #endif
      if (p)
	{
	#ifndef FAULTY_F_KP_8
	  *up = p;
	#else	
	  /* nothing to put here */
	#endif
	  return ALIGN_TO (p, pagesize);
	}
    }
  return NULL;
}

/* Reset the buffer for a new file, returning zero if we should skip it.
   Initialize on the first time through. */
static int
reset (fd, file, stats)
     int fd;
     char const *file;
     struct stats *stats;
{
  if (pagesize)
    bufsalloc = ALIGN_TO (bufalloc / PREFERRED_SAVE_FACTOR, pagesize);
  else
    {
      size_t ubufsalloc;
      pagesize = getpagesize ();
      if (pagesize == 0)
	abort ();
#ifndef BUFSALLOC
      ubufsalloc = MAX (8192, pagesize);
#else
      ubufsalloc = BUFSALLOC;
#endif
      bufsalloc = ALIGN_TO (ubufsalloc, pagesize);
      bufalloc = PREFERRED_SAVE_FACTOR * bufsalloc;
      /* The 1 byte of overflow is a kludge for dfaexec(), which
	 inserts a sentinel newline at the end of the buffer
	 being searched.  There's gotta be a better way... */
      if (bufsalloc < ubufsalloc
#ifndef FAULTY_F_KP_1
	  || bufalloc / PREFERRED_SAVE_FACTOR != bufsalloc
#else
		/* nothing here */
#endif
	  || bufalloc + 1 < bufalloc
	  || ! (buffer = page_alloc (bufalloc + 1, &ubuffer)))
	fatal (_("memory exhausted"), 0);
    }

  buflim = buffer;
  bufdesc = fd;

  if (fstat (fd, &stats->stat) != 0)
    {
      error ("fstat", errno);
      return 0;
    }
  if (directories == SKIP_DIRECTORIES && S_ISDIR (stats->stat.st_mode))
    return 0;
  if (S_ISREG (stats->stat.st_mode))
    {
      if (file)
	bufoffset = 0;
      else
	{
	  bufoffset = lseek (fd, 0, SEEK_CUR);
	  if (bufoffset < 0)
	    {
	      error ("lseek", errno);
	      return 0;
	    }
	}
#ifdef HAVE_MMAP
      initial_bufoffset = bufoffset;
      #ifndef FAULTY_F_DG_6
      bufmapped = mmap_option && bufoffset % pagesize == 0;
      #else
      bufmapped = mmap_option || bufoffset % pagesize == 0;
      #endif
#endif
    }
  else
    {
#ifdef HAVE_MMAP
      bufmapped = 0;
#endif
    }
  return 1;
}

/* Read new stuff into the buffer, saving the specified
   amount of old stuff.  When we're done, 'bufbeg' points
   to the beginning of the buffer contents, and 'buflim'
   points just after the end.  Return zero if there's an error.  */
static int
fillbuf (save, stats)
     size_t save;
     struct stats *stats;
{
  size_t fillsize = 0;
  int cc = 1;
  size_t readsize;

  /* Offset from start of unaligned buffer to start of old stuff
     that we want to save.  */
  size_t saved_offset = buflim - ubuffer - save;

#ifndef FAULTY_F_KP_6
  if (bufsalloc < save)
#else
  if (bufsalloc > save)
#endif
    {
      size_t aligned_save = ALIGN_TO (save, pagesize);
      size_t maxalloc = (size_t) -1;
      size_t newalloc;

      if (S_ISREG (stats->stat.st_mode))
	{
	  /* Calculate an upper bound on how much memory we should allocate.
	     We can't use ALIGN_TO here, since off_t might be longer than
	     size_t.  Watch out for arithmetic overflow.  */
	  off_t to_be_read = stats->stat.st_size - bufoffset;
	  size_t slop = to_be_read % pagesize;
	  off_t aligned_to_be_read = to_be_read + (slop ? pagesize - slop : 0);
	  off_t maxalloc_off = aligned_save + aligned_to_be_read;
	  if (0 <= maxalloc_off && maxalloc_off == (size_t) maxalloc_off)
	    maxalloc = maxalloc_off;
	}

      /* Grow bufsalloc until it is at least as great as `save'; but
	 if there is an overflow, just grow it to the next page boundary.  */
      while (bufsalloc < save)
	if (bufsalloc < bufsalloc * 2)
	  bufsalloc *= 2;
	else
	  {
	    bufsalloc = aligned_save;
	    break;
	  }

      /* Grow the buffer size to be PREFERRED_SAVE_FACTOR times
	 bufsalloc....  */
      newalloc = PREFERRED_SAVE_FACTOR * bufsalloc;
      if (maxalloc < newalloc)
	{
	  /* ... except don't grow it more than a pagesize past the
	     file size, as that might cause unnecessary memory
	     exhaustion if the file is large.  */
	  newalloc = maxalloc;
	  bufsalloc = aligned_save;
	}

      /* Check that the above calculations made progress, which might
         not occur if there is arithmetic overflow.  If there's no
	 progress, or if the new buffer size is larger than the old
	 and buffer reallocation fails, report memory exhaustion.  */
      if (bufsalloc < save || newalloc < save
	  || (newalloc == save && newalloc != maxalloc)
	  || (bufalloc < newalloc
	      && ! (buffer
		    = page_alloc ((bufalloc = newalloc) + 1, &ubuffer))))
	fatal (_("memory exhausted"), 0);
    }

  #ifndef FAULTY_F_DG_2
  bufbeg = buffer + bufsalloc - save;
  memmove (bufbeg, ubuffer + saved_offset, save);
  readsize = bufalloc - bufsalloc;

  #else
  bufbeg = buffer + bufsalloc - save;
  memmove (bufbeg, ubuffer + saved_offset, save);
  readsize = bufsalloc - bufalloc;

  #endif
#if defined(HAVE_MMAP)
  if (bufmapped)
    {
      size_t mmapsize = readsize;

      /* Don't mmap past the end of the file; some hosts don't allow this.
	 Use `read' on the last page.  */
      if (stats->stat.st_size - bufoffset < mmapsize)
	{
	  mmapsize = stats->stat.st_size - bufoffset;
	  mmapsize -= mmapsize % pagesize;
	}

      if (mmapsize
	  && (mmap ((caddr_t) (buffer + bufsalloc), mmapsize,
		    PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_FIXED,
		    bufdesc, bufoffset)
	      != (caddr_t) -1))
	{
	  /* Do not bother to use madvise with MADV_SEQUENTIAL or
	     MADV_WILLNEED on the mmapped memory.  One might think it
	     would help, but it slows us down about 30% on SunOS 4.1.  */
	  fillsize = mmapsize;
	}
      else
	{
	  /* Stop using mmap on this file.  Synchronize the file
	     offset.  Do not warn about mmap failures.  On some hosts
	     (e.g. Solaris 2.5) mmap can fail merely because some
	     other process has an advisory read lock on the file.
	     There's no point alarming the user about this misfeature.  */
	  bufmapped = 0;
	  if (bufoffset != initial_bufoffset
	      && lseek (bufdesc, bufoffset, SEEK_SET) < 0)
	    {
	      error ("lseek", errno);
	      cc = 0;
	    }
	}
    }
#endif /*HAVE_MMAP*/
  #ifndef FAULTY_F_DG_3

  if (! fillsize)
    {
      ssize_t bytesread;
      while ((bytesread = read (bufdesc, buffer + bufsalloc, readsize)) < 0
	     && errno == EINTR)
	continue;
      if (bytesread < 0)
	cc = 0;
      else
	fillsize = bytesread;
    }

  bufoffset += fillsize;
  #else

  if (! fillsize)
    {
      ssize_t bytesread;
      while ((bytesread = read (bufdesc, buffer, readsize)) < 0
	     && errno == EINTR)
	continue;
      if (bytesread < 0)
	cc = 0;
      else
	fillsize = bytesread;
    }

  bufoffset += fillsize;
  #endif
#if O_BINARY
  if (fillsize)
    fillsize = undossify_input (buffer + bufsalloc, fillsize);
#endif
  buflim = buffer + bufsalloc + fillsize;
  return cc;
}

/* Flags controlling the style of output. */
static int always_text;		/* Assume the input is always text. */
static int filename_mask;	/* If zero, output nulls after filenames.  */
static int out_quiet;		/* Suppress all normal output. */
static int out_invert;		/* Print nonmatching stuff. */
static int out_file;		/* Print filenames. */
static int out_line;		/* Print line numbers. */
static int out_byte;		/* Print byte offsets. */
static int out_before;		/* Lines of leading context. */
static int out_after;		/* Lines of trailing context. */
static int count_matches;	/* Count matching lines.  */
static int list_files;		/* List matching files.  */
static int no_filenames;	/* Suppress file names.  */
static int suppress_errors;	/* Suppress diagnostics.  */

/* Internal variables to keep track of byte count, context, etc. */
static off_t totalcc;		/* Total character count before bufbeg. */
static char *lastnl;		/* Pointer after last newline counted. */
static char *lastout;		/* Pointer after last character output;
				   NULL if no character has been output
				   or if it's conceptually before bufbeg. */
static off_t totalnl;		/* Total newline count before lastnl. */
static int pending;		/* Pending lines of output. */
static int done_on_match;		/* Stop scanning file on first match */

#if O_BINARY
# include "dosbuf.c"
#endif

static void
nlscan (lim)
     char *lim;
{
  char *beg;
  for (beg = lastnl;  (beg = memchr (beg, eolbyte, lim - beg));  beg++)
    totalnl++;
  #ifndef FAULTY_F_DG_4
  lastnl = lim;
  #else
  lastnl = beg;
  #endif
}

static void
print_offset_sep (pos, sep)
     off_t pos;
     int sep;
{
  /* Do not rely on printf to print pos, since off_t may be longer than long,
     and long long is not portable.  */

  char buf[sizeof pos * CHAR_BIT];
  char *p = buf + sizeof buf - 1;
  *p = sep;

  do
    *--p = '0' + pos % 10;
  while ((pos /= 10) != 0);

  fwrite (p, 1, buf + sizeof buf - p, stdout);
}

static void
prline (beg, lim, sep)
     char *beg;
     char *lim;
     int sep;
{
  if (out_file)
  #ifndef FAULTY_F_KP_7
    printf ("%s%c", filename, sep & filename_mask);
  #else
    printf ("%s%c", filename, sep | filename_mask);
  #endif
  if (out_line)
    {
      nlscan (beg);
      print_offset_sep (++totalnl, sep);
      lastnl = lim;
    }
  if (out_byte)
    {
      off_t pos = totalcc + (beg - bufbeg);
#if O_BINARY
      pos = dossified_pos (pos);
#endif
      print_offset_sep (pos, sep);
    }
  fwrite (beg, 1, lim - beg, stdout);
  if (ferror (stdout))
    error (_("writing output"), errno);
  lastout = lim;
}

/* Print pending lines of trailing context prior to LIM. */
static void
prpending (lim)
     char *lim;
{
  char *nl;

  if (!lastout)
    lastout = bufbeg;
  while (pending > 0 && lastout < lim)
    {
      --pending;
      if ((nl = memchr (lastout, eolbyte, lim - lastout)) != 0)
	++nl;
      else
	nl = lim;
      prline (lastout, nl, '-');
    }
}

/* Print the lines between BEG and LIM.  Deal with context crap.
   If NLINESP is non-null, store a count of lines between BEG and LIM. */
static void
prtext (beg, lim, nlinesp)
     char *beg;
     char *lim;
     int *nlinesp;
{
  static int used;		/* avoid printing "--" before any output */
  char *bp, *p, *nl;
  char eol = eolbyte;
  int i, n;

  if (!out_quiet && pending > 0)
    prpending (beg);

  p = beg;

  if (!out_quiet)
    {
      /* Deal with leading context crap. */

      bp = lastout ? lastout : bufbeg;
      for (i = 0; i < out_before; ++i)
	if (p > bp)
	  do
	    --p;
	  while (p > bp && p[-1] != eol);

      /* We only print the "--" separator if our output is
	 discontiguous from the last output in the file. */
      if ((out_before || out_after) && used && p != lastout)
	puts ("--");

      while (p < beg)
	{
	  nl = memchr (p, eol, beg - p);
	  prline (p, nl + 1, '-');
	  p = nl + 1;
	}
    }

  if (nlinesp)
    {
      /* Caller wants a line count. */
      for (n = 0; p < lim; ++n)
	{
	  if ((nl = memchr (p, eol, lim - p)) != 0)
	    ++nl;
	  else
	    nl = lim;
	  if (!out_quiet)
	    prline (p, nl, ':');
	  p = nl;
	}
      *nlinesp = n;
    }
  else
    if (!out_quiet)
      prline (beg, lim, ':');

  #ifndef FAULTY_F_DG_5
  pending = out_quiet ? 0 : out_after;
  #else
  pending = out_invert ? 0 : out_after;
  #endif
  used = 1;
}

/* Scan the specified portion of the buffer, matching lines (or
   between matching lines if OUT_INVERT is true).  Return a count of
   lines printed. */
static int
grepbuf (beg, lim)
     char *beg;
     char *lim;
{
  int nlines, n;
  register char *p, *b;
  char *endp;
  char eol = eolbyte;

  nlines = 0;
  p = beg;
  while ((b = (*execute)(p, lim - p, &endp)) != 0)
    {
      /* Avoid matching the empty line at the end of the buffer. */
      if (b == lim && ((b > beg && b[-1] == eol) || b == beg))
	break;
      if (!out_invert)
	{
	  prtext (b, endp, (int *) 0);
	  nlines += 1;
	  if (done_on_match)
	    return nlines;
	}
      else if (p < b)
	{
	  prtext (p, b, &n);
	  nlines += n;
	}
      p = endp;
    }
  if (out_invert && p < lim)
    {
      prtext (p, lim, &n);
      nlines += n;
    }
  return nlines;
}

/* Search a given file.  Normally, return a count of lines printed;
   but if the file is a directory and we search it recursively, then
   return -2 if there was a match, and -1 otherwise.  */
static int
grep (fd, file, stats)
     int fd;
     char const *file;
     struct stats *stats;
{
  int nlines, i;
  int not_text;
  size_t residue, save;
  char *beg, *lim;
  char eol = eolbyte;

  if (!reset (fd, file, stats))
    return 0;

  if (file && directories == RECURSE_DIRECTORIES
      && S_ISDIR (stats->stat.st_mode))
    {
      /* Close fd now, so that we don't open a lot of file descriptors
	 when we recurse deeply.  */
      if (close (fd) != 0)
	error (file, errno);
      return grepdir (file, stats) - 2;
    }

  totalcc = 0;
  lastout = 0;
  totalnl = 0;
  pending = 0;

  nlines = 0;
  residue = 0;
  save = 0;

  if (! fillbuf (save, stats))
    {
      if (! (is_EISDIR (errno, file) && suppress_errors))
	error (filename, errno);
      return nlines;
    }

  not_text = (! (always_text | out_quiet)
	      && memchr (bufbeg, eol ? '\0' : '\200', buflim - bufbeg));
  done_on_match += not_text;
  out_quiet += not_text;

  for (;;)
    {
      lastnl = bufbeg;
      if (lastout)
	lastout = bufbeg;
      if (buflim - bufbeg == save)
	break;
      beg = bufbeg + save - residue;
      for (lim = buflim; lim > beg && lim[-1] != eol; --lim)
	;
      residue = buflim - lim;
      if (beg < lim)
	{
	  nlines += grepbuf (beg, lim);
	  if (pending)
	    prpending (lim);
	  if (nlines && done_on_match && !out_invert)
	    goto finish_grep;
	}
      i = 0;
      beg = lim;
      while (i < out_before && beg > bufbeg && beg != lastout)
	{
	  ++i;
	  do
	    --beg;
	  while (beg > bufbeg && beg[-1] != eol);
	}
      if (beg != lastout)
	lastout = 0;
      save = residue + lim - beg;
      totalcc += buflim - bufbeg - save;
      if (out_line)
	nlscan (beg);
      if (! fillbuf (save, stats))
	{
	  if (! (is_EISDIR (errno, file) && suppress_errors))
	    error (filename, errno);
	  goto finish_grep;
	}
    }
  if (residue)
    {
      nlines += grepbuf (bufbeg + save - residue, buflim);
      if (pending)
	prpending (buflim);
    }

 finish_grep:
  done_on_match -= not_text;
  out_quiet -= not_text;
  if ((not_text & ~out_quiet) && nlines != 0)
    printf (_("Binary file %s matches\n"), filename);
  return nlines;
}

static int
grepfile (file, stats)
     char const *file;
     struct stats *stats;
{
  int desc;
  int count;
  int status;

  if (! file)
    {
      desc = 0;
      filename = _("(standard input)");
    }
  else
    {
	#ifndef FAULTY_F_KP_4
      while ((desc = open (file, O_RDONLY)) < 0 && errno == EINTR)
	#else
      while ((desc = open (file, O_RDONLY)) < 0 || errno == EINTR)
	#endif

	continue;

      if (desc < 0)
	{
	  int e = errno;
	    
	  if (is_EISDIR (e, file) && directories == RECURSE_DIRECTORIES)
	    {
	      if (stat (file, &stats->stat) != 0)
		{
		  error (file, errno);
		  return 1;
		}

	      return grepdir (file, stats);
	    }
	      
	  if (!suppress_errors)
	    {
	      if (directories == SKIP_DIRECTORIES)
		switch (e)
		  {
#ifdef EISDIR
		  case EISDIR:
		    return 1;
#endif
		  case EACCES:
		    /* When skipping directories, don't worry about
		       directories that can't be opened.  */
		    if (stat (file, &stats->stat) == 0
			&& S_ISDIR (stats->stat.st_mode))
		      return 1;
		    break;
		  }

	      error (file, e);
	    }

	  return 1;
	}

      filename = file;
    }

#if O_BINARY
  /* Set input to binary mode.  Pipes are simulated with files
     on DOS, so this includes the case of "foo | grep bar".  */
  if (!isatty (desc))
    SET_BINARY (desc);
#endif

  count = grep (desc, file, stats);
  if (count < 0)
    status = count + 2;
  else
    {
      if (count_matches)
	{
	  if (out_file)
	    printf ("%s%c", filename, ':' & filename_mask);
	  printf ("%d\n", count);
	}

      #ifndef FAULTY_F_DG_8
      status = !count;
      if (list_files == 1 - 2 * status)
	printf ("%s%c", filename, '\n' & filename_mask);
      #else
      status = count;
      if (list_files == 1 - 2 * status)
	printf ("%s%c", filename, '\n' & filename_mask);
      #endif

      if (file)
	while (close (desc) != 0)
	  if (errno != EINTR)
	    {
	      error (file, errno);
	      break;
	    }
    }

  return status;
}

static int
grepdir (dir, stats)
     char const *dir;
     struct stats *stats;
{
  int status = 1;
  struct stats *ancestor;
  char *name_space;

  for (ancestor = stats;  (ancestor = ancestor->parent) != 0;  )
  #ifndef FAULTY_F_KP_5
    if (ancestor->stat.st_ino == stats->stat.st_ino
	&& ancestor->stat.st_dev == stats->stat.st_dev)
  #else
    if (! (ancestor->stat.st_ino == stats->stat.st_ino
	&& ancestor->stat.st_dev == stats->stat.st_dev))
  #endif
      {
	if (!suppress_errors)
	  fprintf (stderr, _("%s: warning: %s: %s\n"), prog, dir,
		   _("recursive directory loop"));
	return 1;
      }

  name_space = savedir (dir, (unsigned) stats->stat.st_size);

  if (! name_space)
    {
      if (errno)
	{
	  if (!suppress_errors)
	    error (dir, errno);
	}
      else
	fatal (_("Memory exhausted"), 0);
    }
  else
    {
      size_t dirlen = strlen (dir);
      int needs_slash = ! (dirlen == FILESYSTEM_PREFIX_LEN (dir)
			   || IS_SLASH (dir[dirlen - 1]));
      char *file = NULL;
      char *namep = name_space;
      struct stats child;
      child.parent = stats;
      out_file += !no_filenames;
      while (*namep)
	{
	  size_t namelen = strlen (namep);
	  file = xrealloc (file, dirlen + 1 + namelen + 1);
	  strcpy (file, dir);
	  file[dirlen] = '/';
	  strcpy (file + dirlen + needs_slash, namep);
	  namep += namelen + 1;
	  status &= grepfile (file, &child);
	}
      out_file -= !no_filenames;
      if (file)
        free (file);
      free (name_space);
    }

  return status;
}

static void
usage(status)
int status;
{
  if (status != 0)
    {
      fprintf (stderr, _("Usage: %s [OPTION]... PATTERN [FILE]...\n"), prog);
      fprintf (stderr, _("Try `%s --help' for more information.\n"), prog);
    }
  else
    {
      printf (_("Usage: %s [OPTION]... PATTERN [FILE] ...\n"), prog);
      printf (_("\
Search for PATTERN in each FILE or standard input.\n\
Example: %s -i 'hello.*world' menu.h main.c\n\
\n\
Regexp selection and interpretation:\n"), prog);
      printf (_("\
  -E, --extended-regexp     PATTERN is an extended regular expression\n\
  -F, --fixed-strings       PATTERN is a set of newline-separated strings\n\
  -G, --basic-regexp        PATTERN is a basic regular expression\n"));
      printf (_("\
  -e, --regexp=PATTERN      use PATTERN as a regular expression\n\
  -f, --file=FILE           obtain PATTERN from FILE\n\
  -i, --ignore-case         ignore case distinctions\n\
  -w, --word-regexp         force PATTERN to match only whole words\n\
  -x, --line-regexp         force PATTERN to match only whole lines\n\
  -z, --null-data           a data line ends in 0 byte, not newline\n"));
      printf (_("\
\n\
Miscellaneous:\n\
  -s, --no-messages         suppress error messages\n\
  -v, --invert-match        select non-matching lines\n\
  -V, --version             print version information and exit\n\
      --help                display this help and exit\n\
      --mmap                use memory-mapped input if possible\n"));
      printf (_("\
\n\
Output control:\n\
  -b, --byte-offset         print the byte offset with output lines\n\
  -n, --line-number         print line number with output lines\n\
  -H, --with-filename       print the filename for each match\n\
  -h, --no-filename         suppress the prefixing filename on output\n\
  -q, --quiet, --silent     suppress all normal output\n\
  -a, --text                do not suppress binary output\n\
  -d, --directories=ACTION  how to handle directories\n\
                            ACTION is 'read', 'recurse', or 'skip'.\n\
  -r, --recursive           equivalent to --directories=recurse.\n\
  -L, --files-without-match only print FILE names containing no match\n\
  -l, --files-with-matches  only print FILE names containing matches\n\
  -c, --count               only print a count of matching lines per FILE\n\
  -Z, --null                print 0 byte after FILE name\n"));
      printf (_("\
\n\
Context control:\n\
  -B, --before-context=NUM  print NUM lines of leading context\n\
  -A, --after-context=NUM   print NUM lines of trailing context\n\
  -C, --context[=NUM]       print NUM (default 2) lines of output context\n\
                            unless overridden by -A or -B\n\
  -NUM                      same as --context=NUM\n\
  -U, --binary              do not strip CR characters at EOL (MSDOS)\n\
  -u, --unix-byte-offsets   report offsets as if CRs were not there (MSDOS)\n\
\n\
`egrep' means `grep -E'.  `fgrep' means `grep -F'.\n\
With no FILE, or when FILE is -, read standard input.  If less than\n\
two FILEs given, assume -h.  Exit status is 0 if match, 1 if no match,\n\
and 2 if trouble.\n"));
      printf (_("\nReport bugs to <bug-gnu-utils@gnu.org>.\n"));
    }
  exit (status);
}

/* Set the matcher to M, reporting any conflicts.  */
static void
setmatcher (m)
     char const *m;
{
  if (matcher && strcmp (matcher, m) != 0)
    fatal (_("conflicting matchers specified"), 0);
  matcher = m;
}

/* Go through the matchers vector and look for the specified matcher.
   If we find it, install it in compile and execute, and return 1.  */
static int
install_matcher (name)
     char const *name;
{
  int i;
#ifdef HAVE_SETRLIMIT
  struct rlimit rlim;
#endif

  for (i = 0; matchers[i].name; ++i)
    if (strcmp (name, matchers[i].name) == 0)
      {
	compile = matchers[i].compile;
	execute = matchers[i].execute;
#if HAVE_SETRLIMIT && defined(RLIMIT_STACK)
	/* I think every platform needs to do this, so that regex.c
	   doesn't oveflow the stack.  The default value of
	   `re_max_failures' is too large for some platforms: it needs
	   more than 3MB-large stack.

	   The test for HAVE_SETRLIMIT should go into `configure'.  */
	if (!getrlimit (RLIMIT_STACK, &rlim))
	  {
	    long newlim;
	    extern long int re_max_failures; /* from regex.c */

	    /* Approximate the amount regex.c needs, plus some more.  */
	    newlim = re_max_failures * 2 * 20 * sizeof (char *);
	    if (newlim > rlim.rlim_max)
	      {
		newlim = rlim.rlim_max;
		re_max_failures = newlim / (2 * 20 * sizeof (char *));
	      }
	    if (rlim.rlim_cur < newlim)
	      rlim.rlim_cur = newlim;

	    setrlimit (RLIMIT_STACK, &rlim);
	  }
#endif
	return 1;
      }
  return 0;
}

/* Find the white-space-separated options specified by OPTIONS, and
   using BUF to store copies of these options, set ARGV[0], ARGV[1],
   etc. to the option copies.  Return the number N of options found.
   Do not set ARGV[N] to NULL.  If ARGV is NULL, do not store ARGV[0]
   etc.  Backslash can be used to escape whitespace (and backslashes).  */
static int
prepend_args (options, buf, argv)
     char const *options;
     char *buf;
     char **argv;
{
  char const *o = options;
  char *b = buf;
  int n = 0;

  for (;;)
    {
      while (ISSPACE ((unsigned char) *o))
	o++;
      if (!*o)
	return n;
      if (argv)
	argv[n] = b;
      n++;

      do
	if ((*b++ = *o++) == '\\' && *o)
	  b[-1] = *o++;
      while (*o && ! ISSPACE ((unsigned char) *o));

      *b++ = '\0';
    }
}

/* Prepend the whitespace-separated options in OPTIONS to the argument
   vector of a main program with argument count *PARGC and argument
   vector *PARGV.  */
static void
prepend_default_options (options, pargc, pargv)
     char const *options;
     int *pargc;
     char ***pargv;
{
  if (options)
    {
      char *buf = xmalloc (strlen (options) + 1);
      int prepended = prepend_args (options, buf, (char **) NULL);
      int argc = *pargc;
      char * const *argv = *pargv;
      char **pp = (char **) xmalloc ((prepended + argc + 1) * sizeof *pp);
      *pargc = prepended + argc;
      *pargv = pp;
      *pp++ = *argv++;
      pp += prepend_args (options, buf, pp);
      while ((*pp++ = *argv++))
	continue;
    }
}

int
main (argc, argv)
     int argc;
     char *argv[];
{
  char *keys;
  size_t keycc, oldcc, keyalloc;
  int with_filenames;
  int opt, cc, status;
  unsigned digit_args_val, default_context;
  FILE *fp;
  extern char *optarg;
  extern int optind;

  initialize_main (&argc, &argv);
  /* add this line for diff between *.c and *.int.c */
  argv[0] = "target3";
  
  prog = argv[0];
  if (prog && strrchr (prog, '/'))
    prog = strrchr (prog, '/') + 1;

#if defined(__MSDOS__) || defined(_WIN32)
  /* DOS and MS-Windows use backslashes as directory separators, and usually
     have an .exe suffix.  They also have case-insensitive filesystems.  */
  if (prog)
    {
      char *p = prog;
      char *bslash = strrchr (argv[0], '\\');

      if (bslash && bslash >= prog) /* for mixed forward/backslash case */
	prog = bslash + 1;
      else if (prog == argv[0]
	       && argv[0][0] && argv[0][1] == ':') /* "c:progname" */
	prog = argv[0] + 2;

      /* Collapse the letter-case, so `strcmp' could be used hence.  */
      for ( ; *p; p++)
	if (*p >= 'A' && *p <= 'Z')
	  *p += 'a' - 'A';

      /* Remove the .exe extension, if any.  */
      if ((p = strrchr (prog, '.')) && strcmp (p, ".exe") == 0)
	*p = '\0';
    }
#endif

  keys = NULL;
  keycc = 0;
  with_filenames = 0;
  eolbyte = '\n';
  filename_mask = ~0;

  /* The value -1 means to use DEFAULT_CONTEXT. */
  out_after = out_before = -1;
  /* Default before/after context: chaged by -C/-NUM options */
  default_context = 0;
  /* Accumulated value of individual digits in a -NUM option */
  digit_args_val = 0;


/* Internationalization. */
#if HAVE_SETLOCALE
  setlocale (LC_ALL, "");
#endif
#if ENABLE_NLS
  bindtextdomain (PACKAGE, LOCALEDIR);
  textdomain (PACKAGE);
#endif

  prepend_default_options (getenv ("GREP_OPTIONS"), &argc, &argv);

  while ((opt = getopt_long (argc, argv, short_options, long_options, NULL))
	 != -1)
    switch (opt)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	digit_args_val = 10 * digit_args_val + opt - '0';
	default_context = digit_args_val;
	break;
      case 'A':
	if (optarg)
	  {
	    if (ck_atoi (optarg, &out_after))
	      fatal (_("invalid context length argument"), 0);
	  }
	break;
      case 'B':
	if (optarg)
	  {
	    if (ck_atoi (optarg, &out_before))
	      fatal (_("invalid context length argument"), 0);
	  }
	break;
      case 'C':
	/* Set output match context, but let any explicit leading or
	   trailing amount specified with -A or -B stand. */
	if (optarg)
	  {
	    if (ck_atoi (optarg, &default_context))
	      fatal (_("invalid context length argument"), 0);
	  }
	else
	  default_context = 2;
	break;
      case 'E':
	setmatcher ("egrep");
	break;
      case 'F':
	setmatcher ("fgrep");
	break;
      case 'G':
	setmatcher ("grep");
	break;
      case 'H':
	with_filenames = 1;
	break;
      case 'U':
#if O_BINARY
	dos_use_file_type = DOS_BINARY;
#endif
	break;
      case 'u':
#if O_BINARY
	dos_report_unix_offset = 1;
#endif
	break;
      case 'V':
	show_version = 1;
	break;
      case 'X':
	setmatcher (optarg);
	break;
      case 'a':
	always_text = 1;
	break;
      case 'b':
	out_byte = 1;
	break;
      case 'c':
	out_quiet = 1;
	count_matches = 1;
	break;
      case 'd':
	if (strcmp (optarg, "read") == 0)
	  directories = READ_DIRECTORIES;
	else if (strcmp (optarg, "skip") == 0)
	  directories = SKIP_DIRECTORIES;
	else if (strcmp (optarg, "recurse") == 0)
	  directories = RECURSE_DIRECTORIES;
	else
	  fatal (_("unknown directories method"), 0);
	break;
      case 'e':
	cc = strlen (optarg);
	keys = xrealloc (keys, keycc + cc + 1);
	strcpy (&keys[keycc], optarg);
	keycc += cc;
	keys[keycc++] = '\n';
	break;
      case 'f':
	fp = strcmp (optarg, "-") != 0 ? fopen (optarg, "r") : stdin;
	if (!fp)
	  fatal (optarg, errno);
	for (keyalloc = 1; keyalloc <= keycc + 1; keyalloc *= 2)
	  ;
	keys = xrealloc (keys, keyalloc);
	oldcc = keycc;
	while (!feof (fp)
	       && (cc = fread (keys + keycc, 1, keyalloc - 1 - keycc, fp)) > 0)
	  {
	    keycc += cc;
	    if (keycc == keyalloc - 1)
	      keys = xrealloc (keys, keyalloc *= 2);
	  }
	if (fp != stdin)
	  fclose(fp);
	/* Append final newline if file ended in non-newline. */
	if (oldcc != keycc && keys[keycc - 1] != '\n')
	  keys[keycc++] = '\n';
	break;
      case 'h':
	no_filenames = 1;
	break;
      case 'i':
      case 'y':			/* For old-timers . . . */
	match_icase = 1;
	break;
      case 'L':
	/* Like -l, except list files that don't contain matches.
	   Inspired by the same option in Hume's gre. */
	out_quiet = 1;
	list_files = -1;
	done_on_match = 1;
	break;
      case 'l':
	out_quiet = 1;
	list_files = 1;
	done_on_match = 1;
	break;
      case 'n':
	out_line = 1;
	break;
      case 'q':
	done_on_match = 1;
	out_quiet = 1;
	break;
      case 'r':
	directories = RECURSE_DIRECTORIES;
	break;
      case 's':
	suppress_errors = 1;
	break;
      case 'v':
	out_invert = 1;
	break;
      case 'w':
	match_words = 1;
	break;
      case 'x':
	match_lines = 1;
	break;
      case 'Z':
	filename_mask = 0;
	break;
      case 'z':
	eolbyte = '\0';
	break;
      case 0:
	/* long options */
	break;
      default:
	usage (2);
	break;
      }

  if (out_after < 0)
    out_after = default_context;
  if (out_before < 0)
    out_before = default_context;

  if (! matcher)
    matcher = "grep";

  if (show_version)
    {
      printf (_("%s (GNU grep) %s\n"), matcher, VERSION);
      printf ("\n");
      printf (_("\
Copyright (C) 1988, 1992-1998, 1999 Free Software Foundation, Inc.\n"));
      printf (_("\
This is free software; see the source for copying conditions. There is NO\n\
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n"));
      printf ("\n");
      exit (0);
    }

  if (show_help)
    usage (0);

  if (keys)
    {
      if (keycc == 0)
	/* No keys were specified (e.g. -f /dev/null).  Match nothing.  */
        out_invert ^= 1;
      else
	/* Strip trailing newline. */
        --keycc;
    }
  else
    if (optind < argc)
      {
	keys = argv[optind++];
	keycc = strlen (keys);
      }
    else
      usage (2);

  if (!install_matcher (matcher) && !install_matcher ("default"))
    abort ();

  (*compile)(keys, keycc);

  if ((argc - optind > 1 && !no_filenames) || with_filenames)
    out_file = 1;

#if O_BINARY
  /* Output is set to binary mode because we shouldn't convert
     NL to CR-LF pairs, especially when grepping binary files.  */
  if (!isatty (1))
    SET_BINARY (1);
#endif


  if (optind < argc)
    {
	status = 1;
	do
	{
	  char *file = argv[optind];
	  status &= grepfile (strcmp (file, "-") == 0 ? (char *) NULL : file,
			      &stats_base);
	}
	while ( ++optind < argc);
    }
  else
    status = grepfile ((char *) NULL, &stats_base);

  if (fclose (stdout) == EOF)
    error (_("writing output"), errno);

  exit (errseen ? 2 : status);
}
/* dfa.c - deterministic extended regexp routines for GNU
   Copyright (C) 1988, 1998 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA */

/* Written June, 1988 by Mike Haertel
   Modified July, 1988 by Arthur David Olson to assist BMG speedups  */

#ifdef HAVE_CONFIG_H
#if flag_config==0
#include <config.h>
#define flag_config 1
#endif
#endif

#include <assert.h>
#include <ctype.h>
/*#include <stdio.h>*/

/*#include <sys/types.h>*/
#ifdef STDC_HEADERS
#include <stdlib.h>
#define flag_stdlib 1
#else
extern char *calloc(), *malloc(), *realloc();
extern void free();
#endif

#if defined(HAVE_STRING_H) || defined(STDC_HEADERS)
#include <string.h>
#define flag_string 1
#undef index
#define index strchr
#else
#include <strings.h>
#define flag_strings 1
#endif

#ifndef DEBUG	/* use the same approach as regex.c */
#undef assert
#define assert(e)
#endif /* DEBUG */

#ifndef isgraph
#define isgraph(C) (isprint(C) && !isspace(C))
#endif
#undef ISALPHA
#undef ISUPPER
#undef ISLOWER
#undef ISDIGIT
#undef ISXDIGIT
#undef ISSPACE
#undef ISPUNCT
#undef ISALNUM
#undef ISPRINT
#undef ISGRAPH
#undef ISCNTRL

#if defined (STDC_HEADERS) || (!defined (isascii) && !defined (HAVE_ISASCII))
#define ISALPHA(C) isalpha(C)
#define ISUPPER(C) isupper(C)
#define ISLOWER(C) islower(C)
#define ISDIGIT(C) isdigit(C)
#define ISXDIGIT(C) isxdigit(C)
#define ISSPACE(C) isspace(C)
#define ISPUNCT(C) ispunct(C)
#define ISALNUM(C) isalnum(C)
#define ISPRINT(C) isprint(C)
#define ISGRAPH(C) isgraph(C)
#define ISCNTRL(C) iscntrl(C)
#else
#define ISALPHA(C) (isascii(C) && isalpha(C))
#define ISUPPER(C) (isascii(C) && isupper(C))
#define ISLOWER(C) (isascii(C) && islower(C))
#define ISDIGIT(C) (isascii(C) && isdigit(C))
#define ISXDIGIT(C) (isascii(C) && isxdigit(C))
#define ISSPACE(C) (isascii(C) && isspace(C))
#define ISPUNCT(C) (isascii(C) && ispunct(C))
#define ISALNUM(C) (isascii(C) && isalnum(C))
#define ISPRINT(C) (isascii(C) && isprint(C))
#define ISGRAPH(C) (isascii(C) && isgraph(C))
#define ISCNTRL(C) (isascii(C) && iscntrl(C))
#endif

/* If we (don't) have I18N.  */
/* glibc defines _ */
#ifndef _
# ifdef HAVE_LIBINTL_H
#  include <libintl.h>
#define flag_libintl 1
#  ifndef _
#   define _(Str) gettext (Str)
#  endif
# else
#  define _(Str) (Str)
# endif
#endif

#include "regex.h"
#include "dfa.h"

/* HPUX, define those as macros in sys/param.h */
#ifdef setbit
# undef setbit
#endif
#ifdef clrbit
# undef clrbit
#endif

static void dfamust PARAMS ((struct dfa *dfa));

static ptr_t xcalloc PARAMS ((size_t n, size_t s));
static ptr_t xmalloc_1 PARAMS ((size_t n));
static ptr_t xrealloc_1 PARAMS ((ptr_t p, size_t n));
#ifdef DEBUG
static void prtok PARAMS ((token t));
#endif
static int tstbit PARAMS ((int b, charclass c));
static void setbit PARAMS ((int b, charclass c));
static void clrbit PARAMS ((int b, charclass c));
static void copyset PARAMS ((charclass src, charclass dst));
static void zeroset PARAMS ((charclass s));
static void notset PARAMS ((charclass s));
static int equal PARAMS ((charclass s1, charclass s2));
static int charclass_index PARAMS ((charclass s));
static int looking_at PARAMS ((const char *s));
static token lex PARAMS ((void));
static void addtok PARAMS ((token t));
static void atom PARAMS ((void));
static int nsubtoks PARAMS ((int tindex));
static void copytoks PARAMS ((int tindex, int ntokens));
static void closure PARAMS ((void));
static void branch PARAMS ((void));
static void regexp PARAMS ((int toplevel));
static void copy PARAMS ((position_set *src, position_set *dst));
static void insert PARAMS ((position p, position_set *s));
static void merge PARAMS ((position_set *s1, position_set *s2, position_set *m));
static void delete PARAMS ((position p, position_set *s));
static int state_index PARAMS ((struct dfa *d, position_set *s,
			  int newline, int letter));
static void build_state PARAMS ((int s, struct dfa *d));
static void build_state_zero PARAMS ((struct dfa *d));
static char *icatalloc PARAMS ((char *old, char *new));
static char *icpyalloc PARAMS ((char *string));
static char *istrstr PARAMS ((char *lookin, char *lookfor));
static void ifree PARAMS ((char *cp));
static void freelist PARAMS ((char **cpp));
static char **enlist PARAMS ((char **cpp, char *new, size_t len));
static char **comsubs PARAMS ((char *left, char *right));
static char **addlists PARAMS ((char **old, char **new));
static char **inboth PARAMS ((char **left, char **right));

static ptr_t
xcalloc(n, s)
     size_t n;
     size_t s;
{
  ptr_t r = calloc(n, s);

  if (!r)
    dfaerror(_("Memory exhausted"));
  return r;
}

static ptr_t
xmalloc_1(n)
     size_t n;
{
  ptr_t r = malloc(n);

  assert(n != 0);
  if (!r)
    dfaerror(_("Memory exhausted"));
  return r;
}

static ptr_t
xrealloc_1(p, n)
     ptr_t p;
     size_t n;
{
  ptr_t r = realloc(p, n);

  assert(n != 0);
  if (!r)
    dfaerror(_("Memory exhausted"));
  return r;
}

#define CALLOC(p, t, n) ((p) = (t *) xcalloc((size_t)(n), sizeof (t)))
#define MALLOC(p, t, n) ((p) = (t *) xmalloc_1((n) * sizeof (t)))
#define REALLOC(p, t, n) ((p) = (t *) xrealloc_1((ptr_t) (p), (n) * sizeof (t)))

/* Reallocate an array of type t if nalloc is too small for index. */
#define REALLOC_IF_NECESSARY(p, t, nalloc, index) \
  if ((index) >= (nalloc))			  \
    {						  \
      while ((index) >= (nalloc))		  \
	(nalloc) *= 2;				  \
      REALLOC(p, t, nalloc);			  \
    }

#ifdef DEBUG

static void
prtok(t)
     token t;
{
  char *s;

  if (t < 0)
    fprintf(stderr, "END");
  else if (t < NOTCHAR)
    fprintf(stderr, "%c", t);
  else
    {
      switch (t)
	{
	case EMPTY: s = "EMPTY"; break;
	case BACKREF: s = "BACKREF"; break;
	case BEGLINE: s = "BEGLINE"; break;
	case ENDLINE: s = "ENDLINE"; break;
	case BEGWORD: s = "BEGWORD"; break;
	case ENDWORD: s = "ENDWORD"; break;
	case LIMWORD: s = "LIMWORD"; break;
	case NOTLIMWORD: s = "NOTLIMWORD"; break;
	case QMARK: s = "QMARK"; break;
	case STAR: s = "STAR"; break;
	case PLUS: s = "PLUS"; break;
	case CAT: s = "CAT"; break;
	case OR: s = "OR"; break;
	case ORTOP: s = "ORTOP"; break;
	case LPAREN: s = "LPAREN"; break;
	case RPAREN: s = "RPAREN"; break;
	default: s = "CSET"; break;
	}
      fprintf(stderr, "%s", s);
    }
}
#endif /* DEBUG */

/* Stuff pertaining to charclasses. */

static int
tstbit(b, c)
     int b;
     charclass c;
{
  return c[b / INTBITS] & 1 << b % INTBITS;
}

static void
setbit(b, c)
     int b;
     charclass c;
{
  c[b / INTBITS] |= 1 << b % INTBITS;
}

static void
clrbit(b, c)
     int b;
     charclass c;
{
  c[b / INTBITS] &= ~(1 << b % INTBITS);
}

static void
copyset(src, dst)
     charclass src;
     charclass dst;
{
  int i;

  for (i = 0; i < CHARCLASS_INTS; ++i)
    dst[i] = src[i];
}

static void
zeroset(s)
     charclass s;
{
  int i;

  for (i = 0; i < CHARCLASS_INTS; ++i)
    s[i] = 0;
}

static void
notset(s)
     charclass s;
{
  int i;

  for (i = 0; i < CHARCLASS_INTS; ++i)
    s[i] = ~s[i];
}

static int
equal(s1, s2)
     charclass s1;
     charclass s2;
{
  int i;

  for (i = 0; i < CHARCLASS_INTS; ++i)
    if (s1[i] != s2[i])
      return 0;
  return 1;
}

/* A pointer to the current dfa is kept here during parsing. */
static struct dfa *dfa;

/* Find the index of charclass s in dfa->charclasses, or allocate a new charclass. */
static int
charclass_index(s)
     charclass s;
{
  int i;

  for (i = 0; i < dfa->cindex; ++i)
    if (equal(s, dfa->charclasses[i]))
      return i;
  REALLOC_IF_NECESSARY(dfa->charclasses, charclass, dfa->calloc, dfa->cindex);
  ++dfa->cindex;
  copyset(s, dfa->charclasses[i]);
  return i;
}

/* Syntax bits controlling the behavior of the lexical analyzer. */
static reg_syntax_t syntax_bits, syntax_bits_set;

/* Flag for case-folding letters into sets. */
static int case_fold;

/* End-of-line byte in data.  */
static unsigned char eolbyte_1;

/* Entry point to set syntax options. */
void
dfasyntax(bits, fold, eol)
     reg_syntax_t bits;
     int fold;
     int eol;
{
  syntax_bits_set = 1;
  syntax_bits = bits;
  case_fold = fold;
  eolbyte_1 = eol;
}

/* Lexical analyzer.  All the dross that deals with the obnoxious
   GNU Regex syntax bits is located here.  The poor, suffering
   reader is referred to the GNU Regex documentation for the
   meaning of the @#%!@#%^!@ syntax bits. */

static char *lexstart;		/* Pointer to beginning of input string. */
static char *lexptr;		/* Pointer to next input character. */
static int lexleft;		/* Number of characters remaining. */
static token lasttok;		/* Previous token returned; initially END. */
static int laststart;		/* True if we're separated from beginning or (, |
				   only by zero-width characters. */
static int parens;		/* Count of outstanding left parens. */
static int minrep, maxrep;	/* Repeat counts for {m,n}. */

/* Note that characters become unsigned here. */
#define FETCH(c, eoferr)   	      \
  {			   	      \
    if (! lexleft)	   	      \
      if (eoferr != 0)	   	      \
	dfaerror(eoferr);  	      \
      else		   	      \
	return lasttok = END;	      \
    (c) = (unsigned char) *lexptr++;  \
    --lexleft;		   	      \
  }

#ifdef __STDC__
#define FUNC(F, P) static int F(int c) { return P(c); }
#else
#define FUNC(F, P) static int F(c) int c; { return P(c); }
#endif

FUNC(is_alpha, ISALPHA)
FUNC(is_upper, ISUPPER)
FUNC(is_lower, ISLOWER)
FUNC(is_digit, ISDIGIT)
FUNC(is_xdigit, ISXDIGIT)
FUNC(is_space, ISSPACE)
FUNC(is_punct, ISPUNCT)
FUNC(is_alnum, ISALNUM)
FUNC(is_print, ISPRINT)
FUNC(is_graph, ISGRAPH)
FUNC(is_cntrl, ISCNTRL)

static int is_blank(c)
int c;
{
   return (c == ' ' || c == '\t');
}

/* The following list maps the names of the Posix named character classes
   to predicate functions that determine whether a given character is in
   the class.  The leading [ has already been eaten by the lexical analyzer. */
static struct {
  const char *name;
  int (*pred) PARAMS ((int));
} prednames[] = {
  { ":alpha:]", is_alpha },
  { ":upper:]", is_upper },
  { ":lower:]", is_lower },
  { ":digit:]", is_digit },
  { ":xdigit:]", is_xdigit },
  { ":space:]", is_space },
  { ":punct:]", is_punct },
  { ":alnum:]", is_alnum },
  { ":print:]", is_print },
  { ":graph:]", is_graph },
  { ":cntrl:]", is_cntrl },
  { ":blank:]", is_blank },
  { 0 }
};

/* Return non-zero if C is a `word-constituent' byte; zero otherwise.  */
#define IS_WORD_CONSTITUENT(C) (ISALNUM(C) || (C) == '_')

static int
looking_at(s)
     const char *s;
{
  size_t len;

  len = strlen(s);
  if (lexleft < len)
    return 0;
  return strncmp(s, lexptr, len) == 0;
}

static token
lex()
{
  token c, c1, c2;
  int backslash = 0, invert;
  charclass ccl;
  int i;

  /* Basic plan: We fetch a character.  If it's a backslash,
     we set the backslash flag and go through the loop again.
     On the plus side, this avoids having a duplicate of the
     main switch inside the backslash case.  On the minus side,
     it means that just about every case begins with
     "if (backslash) ...".  */
  for (i = 0; i < 2; ++i)
    {
      FETCH(c, 0);
      switch (c)
	{
	case '\\':
	  if (backslash)
	    goto normal_char;
	  if (lexleft == 0)
	    dfaerror(_("Unfinished \\ escape"));
	  backslash = 1;
	  break;

	case '^':
	  if (backslash)
	    goto normal_char;
	  if (syntax_bits & RE_CONTEXT_INDEP_ANCHORS
	      || lasttok == END
	      || lasttok == LPAREN
	      || lasttok == OR)
	    return lasttok = BEGLINE;
	  goto normal_char;

	case '$':
	  if (backslash)
	    goto normal_char;
	  if (syntax_bits & RE_CONTEXT_INDEP_ANCHORS
	      || lexleft == 0
	      || (syntax_bits & RE_NO_BK_PARENS
		  ? lexleft > 0 && *lexptr == ')'
		  : lexleft > 1 && lexptr[0] == '\\' && lexptr[1] == ')')
	      || (syntax_bits & RE_NO_BK_VBAR
		  ? lexleft > 0 && *lexptr == '|'
		  : lexleft > 1 && lexptr[0] == '\\' && lexptr[1] == '|')
	      || ((syntax_bits & RE_NEWLINE_ALT)
	          && lexleft > 0 && *lexptr == '\n'))
	    return lasttok = ENDLINE;
	  goto normal_char;

	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	  if (backslash && !(syntax_bits & RE_NO_BK_REFS))
	    {
	      laststart = 0;
	      return lasttok = BACKREF;
	    }
	  goto normal_char;

	case '`':
	  if (backslash && !(syntax_bits & RE_NO_GNU_OPS))
	    return lasttok = BEGLINE;	/* FIXME: should be beginning of string */
	  goto normal_char;

	case '\'':
	  if (backslash && !(syntax_bits & RE_NO_GNU_OPS))
	    return lasttok = ENDLINE;	/* FIXME: should be end of string */
	  goto normal_char;

	case '<':
	  if (backslash && !(syntax_bits & RE_NO_GNU_OPS))
	    return lasttok = BEGWORD;
	  goto normal_char;

	case '>':
	  if (backslash && !(syntax_bits & RE_NO_GNU_OPS))
	    return lasttok = ENDWORD;
	  goto normal_char;

	case 'b':
	  if (backslash && !(syntax_bits & RE_NO_GNU_OPS))
	    return lasttok = LIMWORD;
	  goto normal_char;

	case 'B':
	  if (backslash && !(syntax_bits & RE_NO_GNU_OPS))
	    return lasttok = NOTLIMWORD;
	  goto normal_char;

	case '?':
	  if (syntax_bits & RE_LIMITED_OPS)
	    goto normal_char;
	  if (backslash != ((syntax_bits & RE_BK_PLUS_QM) != 0))
	    goto normal_char;
	  if (!(syntax_bits & RE_CONTEXT_INDEP_OPS) && laststart)
	    goto normal_char;
	  return lasttok = QMARK;

	case '*':
	  if (backslash)
	    goto normal_char;
	  if (!(syntax_bits & RE_CONTEXT_INDEP_OPS) && laststart)
	    goto normal_char;
	  return lasttok = STAR;

	case '+':
	  if (syntax_bits & RE_LIMITED_OPS)
	    goto normal_char;
	  if (backslash != ((syntax_bits & RE_BK_PLUS_QM) != 0))
	    goto normal_char;
	  if (!(syntax_bits & RE_CONTEXT_INDEP_OPS) && laststart)
	    goto normal_char;
	  return lasttok = PLUS;

	case '{':
	  if (!(syntax_bits & RE_INTERVALS))
	    goto normal_char;
	  if (backslash != ((syntax_bits & RE_NO_BK_BRACES) == 0))
	    goto normal_char;
	  if (!(syntax_bits & RE_CONTEXT_INDEP_OPS) && laststart)
	    goto normal_char;

	  if (syntax_bits & RE_NO_BK_BRACES)
	    {
	      /* Scan ahead for a valid interval; if it's not valid,
		 treat it as a literal '{'.  */
	      int lo = -1, hi = -1;
	      char const *p = lexptr;
	      char const *lim = p + lexleft;
	      for (;  p != lim && ISDIGIT (*p);  p++)
		lo = (lo < 0 ? 0 : lo * 10) + *p - '0';
	      if (p != lim && *p == ',')
		#ifndef FAULTY_F_DG_7
		while (++p != lim && ISDIGIT (*p))
		  hi = (hi < 0 ? 0 : hi * 10) + *p - '0';
		#else
		while (++p <= lim && ISDIGIT (*p))
		  hi = (hi < 0 ? 0 : hi * 10) + *p - '0';
		#endif
	      else
		hi = lo;
              #ifndef FAULTY_F_DG_10
	      if (p == lim || *p != '}'
		  || lo < 0 || RE_DUP_MAX < hi || (0 <= hi && hi < lo))
		goto normal_char;
              #else
	      if (p == lim || *p != '}'
		  || lo < 0 || RE_DUP_MAX < hi || (0 <= hi && hi <= lo))
		goto normal_char;
              #endif
	    }

	  minrep = 0;
	  /* Cases:
	     {M} - exact count
	     {M,} - minimum count, maximum is infinity
	     {M,N} - M through N */
	  FETCH(c, _("unfinished repeat count"));
	  if (ISDIGIT(c))
	    {
	      minrep = c - '0';
	      for (;;)
		{
		  FETCH(c, _("unfinished repeat count"));
		  if (!ISDIGIT(c))
		    break;
		  minrep = 10 * minrep + c - '0';
		}
	    }
#ifndef FAULTY_F_KP_2
	  else
#else
	/* nothing here */
#endif
	    dfaerror(_("malformed repeat count"));
	  if (c == ',')
	    {
	      FETCH (c, _("unfinished repeat count"));
	      if (! ISDIGIT (c))
		maxrep = -1;
	      else
		{
		  maxrep = c - '0';
		  for (;;)
		    {
		      FETCH (c, _("unfinished repeat count"));
		      if (! ISDIGIT (c))
			break;
		      maxrep = 10 * maxrep + c - '0';
		    }
		  if (0 <= maxrep && maxrep < minrep)
		    dfaerror (_("malformed repeat count"));
		}
	    }
	  else
	    maxrep = minrep;
	  if (!(syntax_bits & RE_NO_BK_BRACES))
	    {
	      if (c != '\\')
		dfaerror(_("malformed repeat count"));
	      FETCH(c, _("unfinished repeat count"));
	    }
	  if (c != '}')
	    dfaerror(_("malformed repeat count"));
	  laststart = 0;
	  return lasttok = REPMN;

	case '|':
	  if (syntax_bits & RE_LIMITED_OPS)
	    goto normal_char;
	  if (backslash != ((syntax_bits & RE_NO_BK_VBAR) == 0))
	    goto normal_char;
	  laststart = 1;
	  return lasttok = OR;

	case '\n':
	  if (syntax_bits & RE_LIMITED_OPS
	      || backslash
	      || !(syntax_bits & RE_NEWLINE_ALT))
	    goto normal_char;
	  laststart = 1;
	  return lasttok = OR;

	case '(':
	  if (backslash != ((syntax_bits & RE_NO_BK_PARENS) == 0))
	    goto normal_char;
	  ++parens;
	  laststart = 1;
	  return lasttok = LPAREN;

	case ')':
	  if (backslash != ((syntax_bits & RE_NO_BK_PARENS) == 0))
	    goto normal_char;
	  if (parens == 0 && syntax_bits & RE_UNMATCHED_RIGHT_PAREN_ORD)
	    goto normal_char;
	  --parens;
	  laststart = 0;
	  return lasttok = RPAREN;

	case '.':
	  if (backslash)
	    goto normal_char;
	  zeroset(ccl);
	  notset(ccl);
	  if (!(syntax_bits & RE_DOT_NEWLINE))
	    clrbit(eolbyte_1, ccl);
	  if (syntax_bits & RE_DOT_NOT_NULL)
	    clrbit('\0', ccl);
	  laststart = 0;
	  return lasttok = CSET + charclass_index(ccl);

	case 'w':
	case 'W':
	  if (!backslash || (syntax_bits & RE_NO_GNU_OPS))
	    goto normal_char;
	  zeroset(ccl);
	  for (c2 = 0; c2 < NOTCHAR; ++c2)
	    if (IS_WORD_CONSTITUENT(c2))
	      setbit(c2, ccl);
	  if (c == 'W')
	    notset(ccl);
	  laststart = 0;
	  return lasttok = CSET + charclass_index(ccl);

	case '[':
	  if (backslash)
	    goto normal_char;
	  zeroset(ccl);
	  FETCH(c, _("Unbalanced ["));
	  if (c == '^')
	    {
	      FETCH(c, _("Unbalanced ["));
	      invert = 1;
	    }
	  else
	    invert = 0;
	  do
	    {
	      /* Nobody ever said this had to be fast. :-)
		 Note that if we're looking at some other [:...:]
		 construct, we just treat it as a bunch of ordinary
		 characters.  We can do this because we assume
		 regex has checked for syntax errors before
		 dfa is ever called. */
	      if (c == '[' && (syntax_bits & RE_CHAR_CLASSES))
		for (c1 = 0; prednames[c1].name; ++c1)
		  if (looking_at(prednames[c1].name))
		    {
			int (*pred)() = prednames[c1].pred;
			if (case_fold
			    && (pred == is_upper || pred == is_lower))
				pred = is_alpha;

		      for (c2 = 0; c2 < NOTCHAR; ++c2)
			if ((*pred)(c2))
			  setbit(c2, ccl);
		      lexptr += strlen(prednames[c1].name);
		      lexleft -= strlen(prednames[c1].name);
		      FETCH(c1, _("Unbalanced ["));
		      goto skip;
		    }
	      if (c == '\\' && (syntax_bits & RE_BACKSLASH_ESCAPE_IN_LISTS))
		FETCH(c, _("Unbalanced ["));
	      FETCH(c1, _("Unbalanced ["));
	      if (c1 == '-')
		{
		  FETCH(c2, _("Unbalanced ["));
		  if (c2 == ']')
		    {
		      /* In the case [x-], the - is an ordinary hyphen,
			 which is left in c1, the lookahead character. */
		      --lexptr;
		      ++lexleft;
		      c2 = c;
		    }
		  else
		    {
		      if (c2 == '\\'
			  && (syntax_bits & RE_BACKSLASH_ESCAPE_IN_LISTS))
			FETCH(c2, _("Unbalanced ["));
		      FETCH(c1, _("Unbalanced ["));
		    }
		}
	      else
		c2 = c;
	      while (c <= c2)
		{
		  setbit(c, ccl);
		  if (case_fold)
		    if (ISUPPER(c))
		      setbit(tolower(c), ccl);
		    else if (ISLOWER(c))
		      setbit(toupper(c), ccl);
		  ++c;
		}
	    skip:
	      ;
	    }
	  while ((c = c1) != ']');
	  if (invert)
	    {
	      notset(ccl);
	      if (syntax_bits & RE_HAT_LISTS_NOT_NEWLINE)
		clrbit(eolbyte_1, ccl);
	    }
	  laststart = 0;
	  return lasttok = CSET + charclass_index(ccl);

	default:
	normal_char:
	  laststart = 0;
	  if (case_fold && ISALPHA(c))
	    {
	      zeroset(ccl);
	      setbit(c, ccl);
	      if (isupper(c))
		setbit(tolower(c), ccl);
	      else
		setbit(toupper(c), ccl);
	      return lasttok = CSET + charclass_index(ccl);
	    }
	  return c;
	}
    }

  /* The above loop should consume at most a backslash
     and some other character. */
  abort();
  return END;	/* keeps pedantic compilers happy. */
}

/* Recursive descent parser for regular expressions. */

static token tok;		/* Lookahead token. */
static int depth;		/* Current depth of a hypothetical stack
				   holding deferred productions.  This is
				   used to determine the depth that will be
				   required of the real stack later on in
				   dfaanalyze(). */

/* Add the given token to the parse tree, maintaining the depth count and
   updating the maximum depth if necessary. */
static void
addtok(t)
     token t;
{
  REALLOC_IF_NECESSARY(dfa->tokens, token, dfa->talloc, dfa->tindex);
  dfa->tokens[dfa->tindex++] = t;

  switch (t)
    {
    case QMARK:
    case STAR:
    case PLUS:
      break;

    case CAT:
    case OR:
    case ORTOP:
      --depth;
      break;

    default:
      ++dfa->nleaves;
    case EMPTY:
      ++depth;
      break;
    }
  if (depth > dfa->depth)
    dfa->depth = depth;
}

/* The grammar understood by the parser is as follows.

   regexp:
     regexp OR branch
     branch

   branch:
     branch closure
     closure

   closure:
     closure QMARK
     closure STAR
     closure PLUS
     atom

   atom:
     <normal character>
     CSET
     BACKREF
     BEGLINE
     ENDLINE
     BEGWORD
     ENDWORD
     LIMWORD
     NOTLIMWORD
     <empty>

   The parser builds a parse tree in postfix form in an array of tokens. */

static void
atom()
{
  if ((tok >= 0 && tok < NOTCHAR) || tok >= CSET || tok == BACKREF
      || tok == BEGLINE || tok == ENDLINE || tok == BEGWORD
      || tok == ENDWORD || tok == LIMWORD || tok == NOTLIMWORD)
    {
      addtok(tok);
      tok = lex();
    }
  else if (tok == LPAREN)
    {
      tok = lex();
      regexp(0);
      if (tok != RPAREN)
	dfaerror(_("Unbalanced ("));
      tok = lex();
    }
  else
    addtok(EMPTY);
}

/* Return the number of tokens in the given subexpression. */
static int
nsubtoks(tindex)
int tindex;
{
  int ntoks1;

  switch (dfa->tokens[tindex - 1])
    {
    default:
      return 1;
    case QMARK:
    case STAR:
    case PLUS:
      return 1 + nsubtoks(tindex - 1);
    case CAT:
    case OR:
    case ORTOP:
      ntoks1 = nsubtoks(tindex - 1);
      return 1 + ntoks1 + nsubtoks(tindex - 1 - ntoks1);
    }
}

/* Copy the given subexpression to the top of the tree. */
static void
copytoks(tindex, ntokens)
     int tindex, ntokens;
{
  int i;

  for (i = 0; i < ntokens; ++i)
    addtok(dfa->tokens[tindex + i]);
}

static void
closure()
{
  int tindex, ntokens, i;

  atom();
  while (tok == QMARK || tok == STAR || tok == PLUS || tok == REPMN)
    if (tok == REPMN)
      {
	ntokens = nsubtoks(dfa->tindex);
	tindex = dfa->tindex - ntokens;
	#ifndef FAULTY_F_KP_9
	if (maxrep < 0)
	#else
	if (maxrep > 0)
	#endif
	  addtok(PLUS);
	if (minrep == 0)
	  addtok(QMARK);
	for (i = 1; i < minrep; ++i)
	  {
	    copytoks(tindex, ntokens);
	    addtok(CAT);
	  }
	for (; i < maxrep; ++i)
	  {
	    copytoks(tindex, ntokens);
	    addtok(QMARK);
	    addtok(CAT);
	  }
	tok = lex();
      }
    else
      {
	addtok(tok);
	tok = lex();
      }
}

static void
branch()
{
  closure();
  while (tok != RPAREN && tok != OR && tok >= 0)
    {
      closure();
      addtok(CAT);
    }
}

static void
regexp(toplevel)
     int toplevel;
{
  branch();
  while (tok == OR)
    {
      tok = lex();
      branch();
      if (toplevel)
	addtok(ORTOP);
      else
	addtok(OR);
    }
}

/* Main entry point for the parser.  S is a string to be parsed, len is the
   length of the string, so s can include NUL characters.  D is a pointer to
   the struct dfa to parse into. */
void
dfaparse(s, len, d)
     char *s;
     size_t len;
     struct dfa *d;

{
  dfa = d;
  lexstart = lexptr = s;
  lexleft = len;
  lasttok = END;
  laststart = 1;
  parens = 0;

  if (! syntax_bits_set)
    dfaerror(_("No syntax specified"));

  tok = lex();
  depth = d->depth;

  regexp(1);

  if (tok != END)
    dfaerror(_("Unbalanced )"));

  addtok(END - d->nregexps);
  addtok(CAT);

  if (d->nregexps)
    addtok(ORTOP);

  ++d->nregexps;
}

/* Some primitives for operating on sets of positions. */

/* Copy one set to another; the destination must be large enough. */
static void
copy(src, dst)
     position_set *src;
     position_set *dst;
{
  int i;

  for (i = 0; i < src->nelem; ++i)
    dst->elems[i] = src->elems[i];
  dst->nelem = src->nelem;
}

/* Insert a position in a set.  Position sets are maintained in sorted
   order according to index.  If position already exists in the set with
   the same index then their constraints are logically or'd together.
   S->elems must point to an array large enough to hold the resulting set. */
static void
insert(p, s)
     position p;
     position_set *s;
{
  int i;
  position t1, t2;

  for (i = 0; i < s->nelem && p.index < s->elems[i].index; ++i)
    continue;
  if (i < s->nelem && p.index == s->elems[i].index)
    s->elems[i].constraint |= p.constraint;
  else
    {
      t1 = p;
      ++s->nelem;
      while (i < s->nelem)
	{
	  t2 = s->elems[i];
	  s->elems[i++] = t1;
	  t1 = t2;
	}
    }
}

/* Merge two sets of positions into a third.  The result is exactly as if
   the positions of both sets were inserted into an initially empty set. */
static void
merge(s1, s2, m)
     position_set *s1;
     position_set *s2;
     position_set *m;
{
  int i = 0, j = 0;

  m->nelem = 0;
  while (i < s1->nelem && j < s2->nelem)
    if (s1->elems[i].index > s2->elems[j].index)
      m->elems[m->nelem++] = s1->elems[i++];
    else if (s1->elems[i].index < s2->elems[j].index)
      m->elems[m->nelem++] = s2->elems[j++];
    else
      {
	m->elems[m->nelem] = s1->elems[i++];
	m->elems[m->nelem++].constraint |= s2->elems[j++].constraint;
      }
  while (i < s1->nelem)
    m->elems[m->nelem++] = s1->elems[i++];
  while (j < s2->nelem)
    m->elems[m->nelem++] = s2->elems[j++];
}

/* Delete a position from a set. */
static void
delete(p, s)
     position p;
     position_set *s;
{
  int i;

  for (i = 0; i < s->nelem; ++i)
    if (p.index == s->elems[i].index)
      break;
  if (i < s->nelem)
    for (--s->nelem; i < s->nelem; ++i)
      s->elems[i] = s->elems[i + 1];
}

/* Find the index of the state corresponding to the given position set with
   the given preceding context, or create a new state if there is no such
   state.  Newline and letter tell whether we got here on a newline or
   letter, respectively. */
static int
state_index(d, s, newline, letter)
     struct dfa *d;
     position_set *s;
     int newline;
     int letter;
{
  int hash = 0;
  int constraint;
  int i, j;

  newline = newline ? 1 : 0;
  letter = letter ? 1 : 0;

  for (i = 0; i < s->nelem; ++i)
    hash ^= s->elems[i].index + s->elems[i].constraint;

  /* Try to find a state that exactly matches the proposed one. */
  for (i = 0; i < d->sindex; ++i)
    {
      if (hash != d->states[i].hash || s->nelem != d->states[i].elems.nelem
	  || newline != d->states[i].newline || letter != d->states[i].letter)
	continue;
      for (j = 0; j < s->nelem; ++j)
	if (s->elems[j].constraint
	    != d->states[i].elems.elems[j].constraint
	    || s->elems[j].index != d->states[i].elems.elems[j].index)
	  break;
      if (j == s->nelem)
	return i;
    }

  /* We'll have to create a new state. */
  REALLOC_IF_NECESSARY(d->states, dfa_state, d->salloc, d->sindex);
  d->states[i].hash = hash;
  MALLOC(d->states[i].elems.elems, position, s->nelem);
  copy(s, &d->states[i].elems);
  d->states[i].newline = newline;
  d->states[i].letter = letter;
  d->states[i].backref = 0;
  d->states[i].constraint = 0;
  d->states[i].first_end = 0;
  for (j = 0; j < s->nelem; ++j)
    if (d->tokens[s->elems[j].index] < 0)
      {
	constraint = s->elems[j].constraint;
	if (SUCCEEDS_IN_CONTEXT(constraint, newline, 0, letter, 0)
	    || SUCCEEDS_IN_CONTEXT(constraint, newline, 0, letter, 1)
	    || SUCCEEDS_IN_CONTEXT(constraint, newline, 1, letter, 0)
	    || SUCCEEDS_IN_CONTEXT(constraint, newline, 1, letter, 1))
	  d->states[i].constraint |= constraint;
	if (! d->states[i].first_end)
	  d->states[i].first_end = d->tokens[s->elems[j].index];
      }
    else if (d->tokens[s->elems[j].index] == BACKREF)
      {
	d->states[i].constraint = NO_CONSTRAINT;
	d->states[i].backref = 1;
      }

  ++d->sindex;

  return i;
}

/* Find the epsilon closure of a set of positions.  If any position of the set
   contains a symbol that matches the empty string in some context, replace
   that position with the elements of its follow labeled with an appropriate
   constraint.  Repeat exhaustively until no funny positions are left.
   S->elems must be large enough to hold the result. */
static void epsclosure PARAMS ((position_set *s, struct dfa *d));

static void
epsclosure(s, d)
     position_set *s;
     struct dfa *d;
{
  int i, j;
  int *visited;
  position p, old;

  MALLOC(visited, int, d->tindex);
  for (i = 0; i < d->tindex; ++i)
    visited[i] = 0;

  for (i = 0; i < s->nelem; ++i)
    if (d->tokens[s->elems[i].index] >= NOTCHAR
	&& d->tokens[s->elems[i].index] != BACKREF
	&& d->tokens[s->elems[i].index] < CSET)
      {
	old = s->elems[i];
	p.constraint = old.constraint;
	delete(s->elems[i], s);
	if (visited[old.index])
	  {
	    --i;
	    continue;
	  }
	visited[old.index] = 1;
	switch (d->tokens[old.index])
	  {
	  case BEGLINE:
	    p.constraint &= BEGLINE_CONSTRAINT;
	    break;
	  case ENDLINE:
	    p.constraint &= ENDLINE_CONSTRAINT;
	    break;
	  case BEGWORD:
	    p.constraint &= BEGWORD_CONSTRAINT;
	    break;
	  case ENDWORD:
	    p.constraint &= ENDWORD_CONSTRAINT;
	    break;
	  case LIMWORD:
	    p.constraint &= LIMWORD_CONSTRAINT;
	    break;
	  case NOTLIMWORD:
	    p.constraint &= NOTLIMWORD_CONSTRAINT;
	    break;
	  default:
	    break;
	  }
	for (j = 0; j < d->follows[old.index].nelem; ++j)
	  {
	    p.index = d->follows[old.index].elems[j].index;
	    insert(p, s);
	  }
	/* Force rescan to start at the beginning. */
	i = -1;
      }

  free(visited);
}

/* Perform bottom-up analysis on the parse tree, computing various functions.
   Note that at this point, we're pretending constructs like \< are real
   characters rather than constraints on what can follow them.

   Nullable:  A node is nullable if it is at the root of a regexp that can
   match the empty string.
   *  EMPTY leaves are nullable.
   * No other leaf is nullable.
   * A QMARK or STAR node is nullable.
   * A PLUS node is nullable if its argument is nullable.
   * A CAT node is nullable if both its arguments are nullable.
   * An OR node is nullable if either argument is nullable.

   Firstpos:  The firstpos of a node is the set of positions (nonempty leaves)
   that could correspond to the first character of a string matching the
   regexp rooted at the given node.
   * EMPTY leaves have empty firstpos.
   * The firstpos of a nonempty leaf is that leaf itself.
   * The firstpos of a QMARK, STAR, or PLUS node is the firstpos of its
     argument.
   * The firstpos of a CAT node is the firstpos of the left argument, union
     the firstpos of the right if the left argument is nullable.
   * The firstpos of an OR node is the union of firstpos of each argument.

   Lastpos:  The lastpos of a node is the set of positions that could
   correspond to the last character of a string matching the regexp at
   the given node.
   * EMPTY leaves have empty lastpos.
   * The lastpos of a nonempty leaf is that leaf itself.
   * The lastpos of a QMARK, STAR, or PLUS node is the lastpos of its
     argument.
   * The lastpos of a CAT node is the lastpos of its right argument, union
     the lastpos of the left if the right argument is nullable.
   * The lastpos of an OR node is the union of the lastpos of each argument.

   Follow:  The follow of a position is the set of positions that could
   correspond to the character following a character matching the node in
   a string matching the regexp.  At this point we consider special symbols
   that match the empty string in some context to be just normal characters.
   Later, if we find that a special symbol is in a follow set, we will
   replace it with the elements of its follow, labeled with an appropriate
   constraint.
   * Every node in the firstpos of the argument of a STAR or PLUS node is in
     the follow of every node in the lastpos.
   * Every node in the firstpos of the second argument of a CAT node is in
     the follow of every node in the lastpos of the first argument.

   Because of the postfix representation of the parse tree, the depth-first
   analysis is conveniently done by a linear scan with the aid of a stack.
   Sets are stored as arrays of the elements, obeying a stack-like allocation
   scheme; the number of elements in each set deeper in the stack can be
   used to determine the address of a particular set's array. */
void
dfaanalyze(d, searchflag)
     struct dfa *d;
     int searchflag;
{
  int *nullable;		/* Nullable stack. */
  int *nfirstpos;		/* Element count stack for firstpos sets. */
  position *firstpos;		/* Array where firstpos elements are stored. */
  int *nlastpos;		/* Element count stack for lastpos sets. */
  position *lastpos;		/* Array where lastpos elements are stored. */
  int *nalloc;			/* Sizes of arrays allocated to follow sets. */
  position_set tmp;		/* Temporary set for merging sets. */
  position_set merged;		/* Result of merging sets. */
  int wants_newline;		/* True if some position wants newline info. */
  int *o_nullable;
  int *o_nfirst, *o_nlast;
  position *o_firstpos, *o_lastpos;
  int i, j;
  position *pos;

#ifdef DEBUG
  fprintf(stderr, "dfaanalyze:\n");
  for (i = 0; i < d->tindex; ++i)
    {
      fprintf(stderr, " %d:", i);
      prtok(d->tokens[i]);
    }
  putc('\n', stderr);
#endif

  d->searchflag = searchflag;

  MALLOC(nullable, int, d->depth);
  o_nullable = nullable;
  MALLOC(nfirstpos, int, d->depth);
  o_nfirst = nfirstpos;
  MALLOC(firstpos, position, d->nleaves);
  o_firstpos = firstpos, firstpos += d->nleaves;
  MALLOC(nlastpos, int, d->depth);
  o_nlast = nlastpos;
  MALLOC(lastpos, position, d->nleaves);
  o_lastpos = lastpos, lastpos += d->nleaves;
  MALLOC(nalloc, int, d->tindex);
  for (i = 0; i < d->tindex; ++i)
    nalloc[i] = 0;
  MALLOC(merged.elems, position, d->nleaves);

  CALLOC(d->follows, position_set, d->tindex);

  for (i = 0; i < d->tindex; ++i)
#ifdef DEBUG
    {				/* Nonsyntactic #ifdef goo... */
#endif
    switch (d->tokens[i])
      {
      case EMPTY:
	/* The empty set is nullable. */
	*nullable++ = 1;

	/* The firstpos and lastpos of the empty leaf are both empty. */
	*nfirstpos++ = *nlastpos++ = 0;
	break;

      case STAR:
      case PLUS:
	/* Every element in the firstpos of the argument is in the follow
	   of every element in the lastpos. */
	tmp.nelem = nfirstpos[-1];
	tmp.elems = firstpos;
	pos = lastpos;
	for (j = 0; j < nlastpos[-1]; ++j)
	  {
	    merge(&tmp, &d->follows[pos[j].index], &merged);
	    REALLOC_IF_NECESSARY(d->follows[pos[j].index].elems, position,
				 nalloc[pos[j].index], merged.nelem - 1);
	    copy(&merged, &d->follows[pos[j].index]);
	  }

      case QMARK:
	/* A QMARK or STAR node is automatically nullable. */
	if (d->tokens[i] != PLUS)
	  nullable[-1] = 1;
	break;

      case CAT:
	/* Every element in the firstpos of the second argument is in the
	   follow of every element in the lastpos of the first argument. */
	tmp.nelem = nfirstpos[-1];
	tmp.elems = firstpos;
	pos = lastpos + nlastpos[-1];
	for (j = 0; j < nlastpos[-2]; ++j)
	  {
	    merge(&tmp, &d->follows[pos[j].index], &merged);
	    REALLOC_IF_NECESSARY(d->follows[pos[j].index].elems, position,
				 nalloc[pos[j].index], merged.nelem - 1);
	    copy(&merged, &d->follows[pos[j].index]);
	  }

	/* The firstpos of a CAT node is the firstpos of the first argument,
	   union that of the second argument if the first is nullable. */
	if (nullable[-2])
	  nfirstpos[-2] += nfirstpos[-1];
	else
	  firstpos += nfirstpos[-1];
	--nfirstpos;

	/* The lastpos of a CAT node is the lastpos of the second argument,
	   union that of the first argument if the second is nullable. */
	if (nullable[-1])
	  nlastpos[-2] += nlastpos[-1];
	else
	  {
	    pos = lastpos + nlastpos[-2];
	    for (j = nlastpos[-1] - 1; j >= 0; --j)
	      pos[j] = lastpos[j];
	    lastpos += nlastpos[-2];
	    nlastpos[-2] = nlastpos[-1];
	  }
	--nlastpos;

	/* A CAT node is nullable if both arguments are nullable. */
	nullable[-2] = nullable[-1] && nullable[-2];
	--nullable;
	break;

      case OR:
      case ORTOP:
	/* The firstpos is the union of the firstpos of each argument. */
	nfirstpos[-2] += nfirstpos[-1];
	--nfirstpos;

	/* The lastpos is the union of the lastpos of each argument. */
	nlastpos[-2] += nlastpos[-1];
	--nlastpos;

	/* An OR node is nullable if either argument is nullable. */
	nullable[-2] = nullable[-1] || nullable[-2];
	--nullable;
	break;

      default:
	/* Anything else is a nonempty position.  (Note that special
	   constructs like \< are treated as nonempty strings here;
	   an "epsilon closure" effectively makes them nullable later.
	   Backreferences have to get a real position so we can detect
	   transitions on them later.  But they are nullable. */
	*nullable++ = d->tokens[i] == BACKREF;

	/* This position is in its own firstpos and lastpos. */
	*nfirstpos++ = *nlastpos++ = 1;
	--firstpos, --lastpos;
	firstpos->index = lastpos->index = i;
	firstpos->constraint = lastpos->constraint = NO_CONSTRAINT;

	/* Allocate the follow set for this position. */
	nalloc[i] = 1;
	MALLOC(d->follows[i].elems, position, nalloc[i]);
	break;
      }
#ifdef DEBUG
    /* ... balance the above nonsyntactic #ifdef goo... */
      fprintf(stderr, "node %d:", i);
      prtok(d->tokens[i]);
      putc('\n', stderr);
      fprintf(stderr, nullable[-1] ? " nullable: yes\n" : " nullable: no\n");
      fprintf(stderr, " firstpos:");
      for (j = nfirstpos[-1] - 1; j >= 0; --j)
	{
	  fprintf(stderr, " %d:", firstpos[j].index);
	  prtok(d->tokens[firstpos[j].index]);
	}
      fprintf(stderr, "\n lastpos:");
      for (j = nlastpos[-1] - 1; j >= 0; --j)
	{
	  fprintf(stderr, " %d:", lastpos[j].index);
	  prtok(d->tokens[lastpos[j].index]);
	}
      putc('\n', stderr);
    }
#endif

  /* For each follow set that is the follow set of a real position, replace
     it with its epsilon closure. */
  for (i = 0; i < d->tindex; ++i)
    if (d->tokens[i] < NOTCHAR || d->tokens[i] == BACKREF
	|| d->tokens[i] >= CSET)
      {
#ifdef DEBUG
	fprintf(stderr, "follows(%d:", i);
	prtok(d->tokens[i]);
	fprintf(stderr, "):");
	for (j = d->follows[i].nelem - 1; j >= 0; --j)
	  {
	    fprintf(stderr, " %d:", d->follows[i].elems[j].index);
	    prtok(d->tokens[d->follows[i].elems[j].index]);
	  }
	putc('\n', stderr);
#endif
	copy(&d->follows[i], &merged);
	epsclosure(&merged, d);
	if (d->follows[i].nelem < merged.nelem)
	  REALLOC(d->follows[i].elems, position, merged.nelem);
	copy(&merged, &d->follows[i]);
      }

  /* Get the epsilon closure of the firstpos of the regexp.  The result will
     be the set of positions of state 0. */
  merged.nelem = 0;
  for (i = 0; i < nfirstpos[-1]; ++i)
    insert(firstpos[i], &merged);
  epsclosure(&merged, d);

  /* Check if any of the positions of state 0 will want newline context. */
  wants_newline = 0;
  for (i = 0; i < merged.nelem; ++i)
    if (PREV_NEWLINE_DEPENDENT(merged.elems[i].constraint))
      wants_newline = 1;

  /* Build the initial state. */
  d->salloc = 1;
  d->sindex = 0;
  MALLOC(d->states, dfa_state, d->salloc);
  state_index(d, &merged, wants_newline, 0);

  free(o_nullable);
  free(o_nfirst);
  free(o_firstpos);
  free(o_nlast);
  free(o_lastpos);
  free(nalloc);
  free(merged.elems);
}

/* Find, for each character, the transition out of state s of d, and store
   it in the appropriate slot of trans.

   We divide the positions of s into groups (positions can appear in more
   than one group).  Each group is labeled with a set of characters that
   every position in the group matches (taking into account, if necessary,
   preceding context information of s).  For each group, find the union
   of the its elements' follows.  This set is the set of positions of the
   new state.  For each character in the group's label, set the transition
   on this character to be to a state corresponding to the set's positions,
   and its associated backward context information, if necessary.

   If we are building a searching matcher, we include the positions of state
   0 in every state.

   The collection of groups is constructed by building an equivalence-class
   partition of the positions of s.

   For each position, find the set of characters C that it matches.  Eliminate
   any characters from C that fail on grounds of backward context.

   Search through the groups, looking for a group whose label L has nonempty
   intersection with C.  If L - C is nonempty, create a new group labeled
   L - C and having the same positions as the current group, and set L to
   the intersection of L and C.  Insert the position in this group, set
   C = C - L, and resume scanning.

   If after comparing with every group there are characters remaining in C,
   create a new group labeled with the characters of C and insert this
   position in that group. */
void
dfastate(s, d, trans)
     int s;
     struct dfa *d;
     int trans[];
{
  position_set grps[NOTCHAR];	/* As many as will ever be needed. */
  charclass labels[NOTCHAR];	/* Labels corresponding to the groups. */
  int ngrps = 0;		/* Number of groups actually used. */
  position pos;			/* Current position being considered. */
  charclass matches;		/* Set of matching characters. */
  int matchesf;			/* True if matches is nonempty. */
  charclass intersect;		/* Intersection with some label set. */
  int intersectf;		/* True if intersect is nonempty. */
  charclass leftovers;		/* Stuff in the label that didn't match. */
  int leftoversf;		/* True if leftovers is nonempty. */
  static charclass letters;	/* Set of characters considered letters. */
  static charclass newline;	/* Set of characters that aren't newline. */
  position_set follows;		/* Union of the follows of some group. */
  position_set tmp;		/* Temporary space for merging sets. */
  int state;			/* New state. */
  int wants_newline;		/* New state wants to know newline context. */
  int state_newline;		/* New state on a newline transition. */
  int wants_letter;		/* New state wants to know letter context. */
  int state_letter;		/* New state on a letter transition. */
  static int initialized;	/* Flag for static initialization. */
  int i, j, k;

  /* Initialize the set of letters, if necessary. */
  if (! initialized)
    {
      initialized = 1;
      for (i = 0; i < NOTCHAR; ++i)
	if (IS_WORD_CONSTITUENT(i))
	  setbit(i, letters);
      setbit(eolbyte_1, newline);
    }

  zeroset(matches);

  for (i = 0; i < d->states[s].elems.nelem; ++i)
    {
      pos = d->states[s].elems.elems[i];
      if (d->tokens[pos.index] >= 0 && d->tokens[pos.index] < NOTCHAR)
	setbit(d->tokens[pos.index], matches);
      else if (d->tokens[pos.index] >= CSET)
	copyset(d->charclasses[d->tokens[pos.index] - CSET], matches);
      else
	continue;

      /* Some characters may need to be eliminated from matches because
	 they fail in the current context. */
      if (pos.constraint != 0xFF)
	{
	  if (! MATCHES_NEWLINE_CONTEXT(pos.constraint,
					 d->states[s].newline, 1))
	    clrbit(eolbyte_1, matches);
	  if (! MATCHES_NEWLINE_CONTEXT(pos.constraint,
					 d->states[s].newline, 0))
	    for (j = 0; j < CHARCLASS_INTS; ++j)
	      matches[j] &= newline[j];
	  if (! MATCHES_LETTER_CONTEXT(pos.constraint,
					d->states[s].letter, 1))
	    for (j = 0; j < CHARCLASS_INTS; ++j)
	      matches[j] &= ~letters[j];
	  if (! MATCHES_LETTER_CONTEXT(pos.constraint,
					d->states[s].letter, 0))
	    for (j = 0; j < CHARCLASS_INTS; ++j)
	      matches[j] &= letters[j];

	  /* If there are no characters left, there's no point in going on. */
	  for (j = 0; j < CHARCLASS_INTS && !matches[j]; ++j)
	    continue;
	  if (j == CHARCLASS_INTS)
	    continue;
	}

      for (j = 0; j < ngrps; ++j)
	{
	  /* If matches contains a single character only, and the current
	     group's label doesn't contain that character, go on to the
	     next group. */
	  if (d->tokens[pos.index] >= 0 && d->tokens[pos.index] < NOTCHAR
	      && !tstbit(d->tokens[pos.index], labels[j]))
	    continue;

	  /* Check if this group's label has a nonempty intersection with
	     matches. */
	  intersectf = 0;
	  for (k = 0; k < CHARCLASS_INTS; ++k)
	    (intersect[k] = matches[k] & labels[j][k]) ? (intersectf = 1) : 0;
	  if (! intersectf)
	    continue;

	  /* It does; now find the set differences both ways. */
	  leftoversf = matchesf = 0;
	  for (k = 0; k < CHARCLASS_INTS; ++k)
	    {
	      /* Even an optimizing compiler can't know this for sure. */
	      int match = matches[k], label = labels[j][k];

	      (leftovers[k] = ~match & label) ? (leftoversf = 1) : 0;
	      (matches[k] = match & ~label) ? (matchesf = 1) : 0;
	    }

	  /* If there were leftovers, create a new group labeled with them. */
	  if (leftoversf)
	    {
	      copyset(leftovers, labels[ngrps]);
	      copyset(intersect, labels[j]);
	      MALLOC(grps[ngrps].elems, position, d->nleaves);
	      copy(&grps[j], &grps[ngrps]);
	      ++ngrps;
	    }

	  /* Put the position in the current group.  Note that there is no
	     reason to call insert() here. */
	  grps[j].elems[grps[j].nelem++] = pos;

	  /* If every character matching the current position has been
	     accounted for, we're done. */
	  if (! matchesf)
	    break;
	}

      /* If we've passed the last group, and there are still characters
	 unaccounted for, then we'll have to create a new group. */
      if (j == ngrps)
	{
	  copyset(matches, labels[ngrps]);
	  zeroset(matches);
	  MALLOC(grps[ngrps].elems, position, d->nleaves);
	  grps[ngrps].nelem = 1;
	  grps[ngrps].elems[0] = pos;
	  ++ngrps;
	}
    }

  MALLOC(follows.elems, position, d->nleaves);
  MALLOC(tmp.elems, position, d->nleaves);

  /* If we are a searching matcher, the default transition is to a state
     containing the positions of state 0, otherwise the default transition
     is to fail miserably. */
  if (d->searchflag)
    {
      wants_newline = 0;
      wants_letter = 0;
      for (i = 0; i < d->states[0].elems.nelem; ++i)
	{
	  if (PREV_NEWLINE_DEPENDENT(d->states[0].elems.elems[i].constraint))
	    wants_newline = 1;
	  if (PREV_LETTER_DEPENDENT(d->states[0].elems.elems[i].constraint))
	    wants_letter = 1;
	}
      copy(&d->states[0].elems, &follows);
      state = state_index(d, &follows, 0, 0);
      if (wants_newline)
	state_newline = state_index(d, &follows, 1, 0);
      else
	state_newline = state;
      if (wants_letter)
	state_letter = state_index(d, &follows, 0, 1);
      else
	state_letter = state;
      for (i = 0; i < NOTCHAR; ++i)
	trans[i] = (IS_WORD_CONSTITUENT(i)) ? state_letter : state;
      trans[eolbyte_1] = state_newline;
    }
  else
    for (i = 0; i < NOTCHAR; ++i)
      trans[i] = -1;

  for (i = 0; i < ngrps; ++i)
    {
      follows.nelem = 0;

      /* Find the union of the follows of the positions of the group.
	 This is a hideously inefficient loop.  Fix it someday. */
      for (j = 0; j < grps[i].nelem; ++j)
	for (k = 0; k < d->follows[grps[i].elems[j].index].nelem; ++k)
	  insert(d->follows[grps[i].elems[j].index].elems[k], &follows);

      /* If we are building a searching matcher, throw in the positions
	 of state 0 as well. */
      if (d->searchflag)
	for (j = 0; j < d->states[0].elems.nelem; ++j)
	  insert(d->states[0].elems.elems[j], &follows);

      /* Find out if the new state will want any context information. */
      wants_newline = 0;
      if (tstbit(eolbyte_1, labels[i]))
	for (j = 0; j < follows.nelem; ++j)
	  if (PREV_NEWLINE_DEPENDENT(follows.elems[j].constraint))
	    wants_newline = 1;

      wants_letter = 0;
      for (j = 0; j < CHARCLASS_INTS; ++j)
	if (labels[i][j] & letters[j])
	  break;
      if (j < CHARCLASS_INTS)
	for (j = 0; j < follows.nelem; ++j)
	  if (PREV_LETTER_DEPENDENT(follows.elems[j].constraint))
	    wants_letter = 1;

      /* Find the state(s) corresponding to the union of the follows. */
      state = state_index(d, &follows, 0, 0);
      if (wants_newline)
	state_newline = state_index(d, &follows, 1, 0);
      else
	state_newline = state;
      if (wants_letter)
	state_letter = state_index(d, &follows, 0, 1);
      else
	state_letter = state;

      /* Set the transitions for each character in the current label. */
      for (j = 0; j < CHARCLASS_INTS; ++j)
	for (k = 0; k < INTBITS; ++k)
	  if (labels[i][j] & 1 << k)
	    {
	      int c = j * INTBITS + k;

	      if (c == eolbyte_1)
		trans[c] = state_newline;
	      else if (IS_WORD_CONSTITUENT(c))
		trans[c] = state_letter;
	      else if (c < NOTCHAR)
		trans[c] = state;
	    }
    }

  for (i = 0; i < ngrps; ++i)
    free(grps[i].elems);
  free(follows.elems);
  free(tmp.elems);
}

/* Some routines for manipulating a compiled dfa's transition tables.
   Each state may or may not have a transition table; if it does, and it
   is a non-accepting state, then d->trans[state] points to its table.
   If it is an accepting state then d->fails[state] points to its table.
   If it has no table at all, then d->trans[state] is NULL.
   TODO: Improve this comment, get rid of the unnecessary redundancy. */

static void
build_state(s, d)
     int s;
     struct dfa *d;
{
  int *trans;			/* The new transition table. */
  int i;

  /* Set an upper limit on the number of transition tables that will ever
     exist at once.  1024 is arbitrary.  The idea is that the frequently
     used transition tables will be quickly rebuilt, whereas the ones that
     were only needed once or twice will be cleared away. */
  if (d->trcount >= 1024)
    {
      for (i = 0; i < d->tralloc; ++i)
	if (d->trans[i])
	  {
	    free((ptr_t) d->trans[i]);
	    d->trans[i] = NULL;
	  }
	else if (d->fails[i])
	  {
	    free((ptr_t) d->fails[i]);
	    d->fails[i] = NULL;
	  }
      d->trcount = 0;
    }

  ++d->trcount;

  /* Set up the success bits for this state. */
  d->success[s] = 0;
  if (ACCEPTS_IN_CONTEXT(d->states[s].newline, 1, d->states[s].letter, 0,
      s, *d))
    d->success[s] |= 4;
  if (ACCEPTS_IN_CONTEXT(d->states[s].newline, 0, d->states[s].letter, 1,
      s, *d))
    d->success[s] |= 2;
  if (ACCEPTS_IN_CONTEXT(d->states[s].newline, 0, d->states[s].letter, 0,
      s, *d))
    d->success[s] |= 1;

  MALLOC(trans, int, NOTCHAR);
  dfastate(s, d, trans);

  /* Now go through the new transition table, and make sure that the trans
     and fail arrays are allocated large enough to hold a pointer for the
     largest state mentioned in the table. */
  for (i = 0; i < NOTCHAR; ++i)
    if (trans[i] >= d->tralloc)
      {
	int oldalloc = d->tralloc;

	while (trans[i] >= d->tralloc)
	  d->tralloc *= 2;
	REALLOC(d->realtrans, int *, d->tralloc + 1);
	d->trans = d->realtrans + 1;
	REALLOC(d->fails, int *, d->tralloc);
	REALLOC(d->success, int, d->tralloc);
	REALLOC(d->newlines, int, d->tralloc);
	while (oldalloc < d->tralloc)
	  {
	    d->trans[oldalloc] = NULL;
	    d->fails[oldalloc++] = NULL;
	  }
      }

  /* Keep the newline transition in a special place so we can use it as
     a sentinel. */
  d->newlines[s] = trans[eolbyte_1];
  trans[eolbyte_1] = -1;

  if (ACCEPTING(s, *d))
    d->fails[s] = trans;
  else
    d->trans[s] = trans;
}

static void
build_state_zero(d)
     struct dfa *d;
{
  d->tralloc = 1;
  d->trcount = 0;
  CALLOC(d->realtrans, int *, d->tralloc + 1);
  d->trans = d->realtrans + 1;
  CALLOC(d->fails, int *, d->tralloc);
  MALLOC(d->success, int, d->tralloc);
  MALLOC(d->newlines, int, d->tralloc);
  build_state(0, d);
}

/* Search through a buffer looking for a match to the given struct dfa.
   Find the first occurrence of a string matching the regexp in the buffer,
   and the shortest possible version thereof.  Return a pointer to the first
   character after the match, or NULL if none is found.  Begin points to
   the beginning of the buffer, and end points to the first character after
   its end.  We store a newline in *end to act as a sentinel, so end had
   better point somewhere valid.  Newline is a flag indicating whether to
   allow newlines to be in the matching string.  If count is non-
   NULL it points to a place we're supposed to increment every time we
   see a newline.  Finally, if backref is non-NULL it points to a place
   where we're supposed to store a 1 if backreferencing happened and the
   match needs to be verified by a backtracking matcher.  Otherwise
   we store a 0 in *backref. */
char *
dfaexec(d, begin, end, newline, count, backref)
     struct dfa *d;
     char *begin;
     char *end;
     int newline;
     int *count;
     int *backref;
{
  register int s, s1, tmp;	/* Current state. */
  register unsigned char *p;	/* Current input character. */
  register int **trans, *t;	/* Copy of d->trans so it can be optimized
				   into a register. */
  register unsigned char eol = eolbyte_1;	/* Likewise for eolbyte.  */
  static int sbit[NOTCHAR];	/* Table for anding with d->success. */
  static int sbit_init;

  if (! sbit_init)
    {
      int i;

      sbit_init = 1;
      for (i = 0; i < NOTCHAR; ++i)
	sbit[i] = (IS_WORD_CONSTITUENT(i)) ? 2 : 1;
      sbit[eol] = 4;
    }

  if (! d->tralloc)
    build_state_zero(d);

  s = s1 = 0;
  p = (unsigned char *) begin;
  trans = d->trans;
  *end = eol;

  for (;;)
    {
      while ((t = trans[s]) != 0) { /* hand-optimized loop */
	s1 = t[*p++];
        if ((t = trans[s1]) == 0) {
           tmp = s ; s = s1 ; s1 = tmp ; /* swap */
           break;
        }
	s = t[*p++];
      }

      if (s >= 0 && p <= (unsigned char *) end && d->fails[s])
	{
	  if (d->success[s] & sbit[*p])
	    {
	      if (backref)
		*backref = (d->states[s].backref != 0);
	      return (char *) p;
	    }

	  s1 = s;
	  s = d->fails[s][*p++];
	  continue;
	}

      /* If the previous character was a newline, count it. */
      if (count && (char *) p <= end && p[-1] == eol)
	++*count;

      /* Check if we've run off the end of the buffer. */
      if ((char *) p > end)
	return NULL;

      if (s >= 0)
	{
	  build_state(s, d);
	  trans = d->trans;
	  continue;
	}

      if (p[-1] == eol && newline)
	{
	  s = d->newlines[s1];
	  continue;
	}

      s = 0;
    }
}

/* Initialize the components of a dfa that the other routines don't
   initialize for themselves. */
void
dfainit(d)
     struct dfa *d;
{
  d->calloc = 1;
  MALLOC(d->charclasses, charclass, d->calloc);
  d->cindex = 0;

  d->talloc = 1;
  MALLOC(d->tokens, token, d->talloc);
  d->tindex = d->depth = d->nleaves = d->nregexps = 0;

  d->searchflag = 0;
  d->tralloc = 0;

  d->musts = 0;
}

/* Parse and analyze a single string of the given length. */
void
dfacomp(s, len, d, searchflag)
     char *s;
     size_t len;
     struct dfa *d;
     int searchflag;
{
  if (case_fold)	/* dummy folding in service of dfamust() */
    {
      char *lcopy;
      int i;

      lcopy = malloc(len);
      if (!lcopy)
	dfaerror(_("out of memory"));

      /* This is a kludge. */
      case_fold = 0;
      for (i = 0; i < len; ++i)
	if (ISUPPER ((unsigned char) s[i]))
	  lcopy[i] = tolower ((unsigned char) s[i]);
	else
	  lcopy[i] = s[i];

      dfainit(d);
      dfaparse(lcopy, len, d);
      free(lcopy);
      dfamust(d);
      d->cindex = d->tindex = d->depth = d->nleaves = d->nregexps = 0;
      case_fold = 1;
      dfaparse(s, len, d);
      dfaanalyze(d, searchflag);
    }
  else
    {
        dfainit(d);
        dfaparse(s, len, d);
	dfamust(d);
        dfaanalyze(d, searchflag);
    }
}

/* Free the storage held by the components of a dfa. */
void
dfafree(d)
     struct dfa *d;
{
  int i;
  struct dfamust *dm, *ndm;

  free((ptr_t) d->charclasses);
  free((ptr_t) d->tokens);
  for (i = 0; i < d->sindex; ++i)
    free((ptr_t) d->states[i].elems.elems);
  free((ptr_t) d->states);
  for (i = 0; i < d->tindex; ++i)
    if (d->follows[i].elems)
      free((ptr_t) d->follows[i].elems);
  free((ptr_t) d->follows);
  for (i = 0; i < d->tralloc; ++i)
    if (d->trans[i])
      free((ptr_t) d->trans[i]);
    else if (d->fails[i])
      free((ptr_t) d->fails[i]);
  if (d->realtrans) free((ptr_t) d->realtrans);
  if (d->fails) free((ptr_t) d->fails);
  if (d->newlines) free((ptr_t) d->newlines);
  if (d->success) free((ptr_t) d->success);
  for (dm = d->musts; dm; dm = ndm)
    {
      ndm = dm->next;
      free(dm->must);
      free((ptr_t) dm);
    }
}

/* Having found the postfix representation of the regular expression,
   try to find a long sequence of characters that must appear in any line
   containing the r.e.
   Finding a "longest" sequence is beyond the scope here;
   we take an easy way out and hope for the best.
   (Take "(ab|a)b"--please.)

   We do a bottom-up calculation of sequences of characters that must appear
   in matches of r.e.'s represented by trees rooted at the nodes of the postfix
   representation:
	sequences that must appear at the left of the match ("left")
	sequences that must appear at the right of the match ("right")
	lists of sequences that must appear somewhere in the match ("in")
	sequences that must constitute the match ("is")

   When we get to the root of the tree, we use one of the longest of its
   calculated "in" sequences as our answer.  The sequence we find is returned in
   d->must (where "d" is the single argument passed to "dfamust");
   the length of the sequence is returned in d->mustn.

   The sequences calculated for the various types of node (in pseudo ANSI c)
   are shown below.  "p" is the operand of unary operators (and the left-hand
   operand of binary operators); "q" is the right-hand operand of binary
   operators.

   "ZERO" means "a zero-length sequence" below.

	Type	left		right		is		in
	----	----		-----		--		--
	char c	# c		# c		# c		# c

	CSET	ZERO		ZERO		ZERO		ZERO

	STAR	ZERO		ZERO		ZERO		ZERO

	QMARK	ZERO		ZERO		ZERO		ZERO

	PLUS	p->left		p->right	ZERO		p->in

	CAT	(p->is==ZERO)?	(q->is==ZERO)?	(p->is!=ZERO &&	p->in plus
		p->left :	q->right :	q->is!=ZERO) ?	q->in plus
		p->is##q->left	p->right##q->is	p->is##q->is :	p->right##q->left
						ZERO

	OR	longest common	longest common	(do p->is and	substrings common to
		leading		trailing	q->is have same	p->in and q->in
		(sub)sequence	(sub)sequence	length and
		of p->left	of p->right	content) ?
		and q->left	and q->right	p->is : NULL

   If there's anything else we recognize in the tree, all four sequences get set
   to zero-length sequences.  If there's something we don't recognize in the tree,
   we just return a zero-length sequence.

   Break ties in favor of infrequent letters (choosing 'zzz' in preference to
   'aaa')?

   And. . .is it here or someplace that we might ponder "optimizations" such as
	egrep 'psi|epsilon'	->	egrep 'psi'
	egrep 'pepsi|epsilon'	->	egrep 'epsi'
					(Yes, we now find "epsi" as a "string
					that must occur", but we might also
					simplify the *entire* r.e. being sought)
	grep '[c]'		->	grep 'c'
	grep '(ab|a)b'		->	grep 'ab'
	grep 'ab*'		->	grep 'a'
	grep 'a*b'		->	grep 'b'

   There are several issues:

   Is optimization easy (enough)?

   Does optimization actually accomplish anything,
   or is the automaton you get from "psi|epsilon" (for example)
   the same as the one you get from "psi" (for example)?

   Are optimizable r.e.'s likely to be used in real-life situations
   (something like 'ab*' is probably unlikely; something like is
   'psi|epsilon' is likelier)? */

static char *
icatalloc(old, new)
     char *old;
     char *new;
{
  char *result;
  size_t oldsize, newsize;

  newsize = (new == NULL) ? 0 : strlen(new);
  if (old == NULL)
    oldsize = 0;
  else if (newsize == 0)
    return old;
  else	oldsize = strlen(old);
  if (old == NULL)
    result = (char *) malloc(newsize + 1);
  else
    result = (char *) realloc((void *) old, oldsize + newsize + 1);
  if (result != NULL && new != NULL)
    (void) strcpy(result + oldsize, new);
  return result;
}

static char *
icpyalloc(string)
     char *string;
{
  return icatalloc((char *) NULL, string);
}

static char *
istrstr(lookin, lookfor)
     char *lookin;
     char *lookfor;
{
  char *cp;
  size_t len;

  len = strlen(lookfor);
  for (cp = lookin; *cp != '\0'; ++cp)
    if (strncmp(cp, lookfor, len) == 0)
      return cp;
  return NULL;
}

static void
ifree(cp)
     char *cp;
{
  if (cp != NULL)
    free(cp);
}

static void
freelist(cpp)
     char **cpp;
{
  int i;

  if (cpp == NULL)
    return;
  for (i = 0; cpp[i] != NULL; ++i)
    {
      free(cpp[i]);
      cpp[i] = NULL;
    }
}

static char **
enlist(cpp, new, len)
     char **cpp;
     char *new;
     size_t len;
{
  int i, j;

  if (cpp == NULL)
    return NULL;
  if ((new = icpyalloc(new)) == NULL)
    {
      freelist(cpp);
      return NULL;
    }
  new[len] = '\0';
  /* Is there already something in the list that's new (or longer)? */
  for (i = 0; cpp[i] != NULL; ++i)
    if (istrstr(cpp[i], new) != NULL)
      {
	free(new);
	return cpp;
      }
  /* Eliminate any obsoleted strings. */
  j = 0;
  while (cpp[j] != NULL)
    if (istrstr(new, cpp[j]) == NULL)
      ++j;
    else
      {
	free(cpp[j]);
	if (--i == j)
	  break;
	cpp[j] = cpp[i];
	cpp[i] = NULL;
      }
  /* Add the new string. */
  cpp = (char **) realloc((char *) cpp, (i + 2) * sizeof *cpp);
  if (cpp == NULL)
    return NULL;
  cpp[i] = new;
  cpp[i + 1] = NULL;
  return cpp;
}

/* Given pointers to two strings, return a pointer to an allocated
   list of their distinct common substrings. Return NULL if something
   seems wild. */
static char **
comsubs(left, right)
     char *left;
     char *right;
{
  char **cpp;
  char *lcp;
  char *rcp;
  size_t i, len;

  if (left == NULL || right == NULL)
    return NULL;
  cpp = (char **) malloc(sizeof *cpp);
  if (cpp == NULL)
    return NULL;
  cpp[0] = NULL;
  for (lcp = left; *lcp != '\0'; ++lcp)
    {
      len = 0;
      rcp = index(right, *lcp);
      while (rcp != NULL)
	{
	  for (i = 1; lcp[i] != '\0' && lcp[i] == rcp[i]; ++i)
	    continue;
	  if (i > len)
	    len = i;
	  rcp = index(rcp + 1, *lcp);
	}
      if (len == 0)
	continue;
      if ((cpp = enlist(cpp, lcp, len)) == NULL)
	break;
    }
  return cpp;
}

static char **
addlists(old, new)
char **old;
char **new;
{
  int i;

  if (old == NULL || new == NULL)
    return NULL;
  for (i = 0; new[i] != NULL; ++i)
    {
      old = enlist(old, new[i], strlen(new[i]));
      if (old == NULL)
	break;
    }
  return old;
}

/* Given two lists of substrings, return a new list giving substrings
   common to both. */
static char **
inboth(left, right)
     char **left;
     char **right;
{
  char **both;
  char **temp;
  int lnum, rnum;

  if (left == NULL || right == NULL)
    return NULL;
  both = (char **) malloc(sizeof *both);
  if (both == NULL)
    return NULL;
  both[0] = NULL;
  for (lnum = 0; left[lnum] != NULL; ++lnum)
    {
      for (rnum = 0; right[rnum] != NULL; ++rnum)
	{
	  temp = comsubs(left[lnum], right[rnum]);
	  if (temp == NULL)
	    {
	      freelist(both);
	      return NULL;
	    }
	  both = addlists(both, temp);
	  freelist(temp);
	  free(temp);
	  if (both == NULL)
	    return NULL;
	}
    }
  return both;
}

typedef struct
{
  char **in;
  char *left;
  char *right;
  char *is;
} must;

static void
resetmust(mp)
must *mp;
{
  mp->left[0] = mp->right[0] = mp->is[0] = '\0';
  freelist(mp->in);
}

static void
dfamust(dfa)
struct dfa *dfa;
{
  must *musts;
  must *mp;
  char *result;
  int ri;
  int i;
  int exact;
  token t;
  static must must0;
  struct dfamust *dm;
  static char empty_string[] = "";

  result = empty_string;
  exact = 0;
  musts = (must *) malloc((dfa->tindex + 1) * sizeof *musts);
  if (musts == NULL)
    return;
  mp = musts;
  for (i = 0; i <= dfa->tindex; ++i)
    mp[i] = must0;
  for (i = 0; i <= dfa->tindex; ++i)
    {
      mp[i].in = (char **) malloc(sizeof *mp[i].in);
      mp[i].left = malloc(2);
      mp[i].right = malloc(2);
      mp[i].is = malloc(2);
      if (mp[i].in == NULL || mp[i].left == NULL ||
	  mp[i].right == NULL || mp[i].is == NULL)
	goto done;
      mp[i].left[0] = mp[i].right[0] = mp[i].is[0] = '\0';
      mp[i].in[0] = NULL;
    }
#ifdef DEBUG
  fprintf(stderr, "dfamust:\n");
  for (i = 0; i < dfa->tindex; ++i)
    {
      fprintf(stderr, " %d:", i);
      prtok(dfa->tokens[i]);
    }
  putc('\n', stderr);
#endif
  for (ri = 0; ri < dfa->tindex; ++ri)
    {
      switch (t = dfa->tokens[ri])
	{
	case LPAREN:
	case RPAREN:
	  goto done;		/* "cannot happen" */
	case EMPTY:
	case BEGLINE:
	case ENDLINE:
	case BEGWORD:
	case ENDWORD:
	case LIMWORD:
	case NOTLIMWORD:
	case BACKREF:
	  resetmust(mp);
	  break;
	case STAR:
	case QMARK:
	  if (mp <= musts)
	    goto done;		/* "cannot happen" */
	  --mp;
	  resetmust(mp);
	  break;
	case OR:
	case ORTOP:
	  if (mp < &musts[2])
	    goto done;		/* "cannot happen" */
	  {
	    char **new;
	    must *lmp;
	    must *rmp;
	    int j, ln, rn, n;

	    rmp = --mp;
	    lmp = --mp;
	    /* Guaranteed to be.  Unlikely, but. . . */
	    if (strcmp(lmp->is, rmp->is) != 0)
	      lmp->is[0] = '\0';
	    /* Left side--easy */
	    i = 0;
	    while (lmp->left[i] != '\0' && lmp->left[i] == rmp->left[i])
	      ++i;
	    lmp->left[i] = '\0';
	    /* Right side */
	    ln = strlen(lmp->right);
	    rn = strlen(rmp->right);
	    n = ln;
	    if (n > rn)
	      n = rn;
	    for (i = 0; i < n; ++i)
	      if (lmp->right[ln - i - 1] != rmp->right[rn - i - 1])
		break;
	    for (j = 0; j < i; ++j)
	      lmp->right[j] = lmp->right[(ln - i) + j];
	    lmp->right[j] = '\0';
	    new = inboth(lmp->in, rmp->in);
	    if (new == NULL)
	      goto done;
	    freelist(lmp->in);
	    free((char *) lmp->in);
	    lmp->in = new;
	  }
	  break;
	case PLUS:
	  if (mp <= musts)
	    goto done;		/* "cannot happen" */
	  --mp;
	  mp->is[0] = '\0';
	  break;
	case END:
	  if (mp != &musts[1])
	    goto done;		/* "cannot happen" */
	  for (i = 0; musts[0].in[i] != NULL; ++i)
	    if (strlen(musts[0].in[i]) > strlen(result))
	      result = musts[0].in[i];
	  if (strcmp(result, musts[0].is) == 0)
	    exact = 1;
	  goto done;
	case CAT:
	  if (mp < &musts[2])
	    goto done;		/* "cannot happen" */
	  {
	    must *lmp;
	    must *rmp;

	    rmp = --mp;
	    lmp = --mp;
	    /* In.  Everything in left, plus everything in
	       right, plus catenation of
	       left's right and right's left. */
	    lmp->in = addlists(lmp->in, rmp->in);
	    if (lmp->in == NULL)
	      goto done;
	    if (lmp->right[0] != '\0' &&
		rmp->left[0] != '\0')
	      {
		char *tp;

		tp = icpyalloc(lmp->right);
		if (tp == NULL)
		  goto done;
		tp = icatalloc(tp, rmp->left);
		if (tp == NULL)
		  goto done;
		lmp->in = enlist(lmp->in, tp,
				 strlen(tp));
		free(tp);
		if (lmp->in == NULL)
		  goto done;
	      }
	    /* Left-hand */
	    if (lmp->is[0] != '\0')
	      {
		lmp->left = icatalloc(lmp->left,
				      rmp->left);
		if (lmp->left == NULL)
		  goto done;
	      }
	    /* Right-hand */
	    if (rmp->is[0] == '\0')
	      lmp->right[0] = '\0';
	    lmp->right = icatalloc(lmp->right, rmp->right);
	    if (lmp->right == NULL)
	      goto done;
	    /* Guaranteed to be */
	    if (lmp->is[0] != '\0' && rmp->is[0] != '\0')
	      {
		lmp->is = icatalloc(lmp->is, rmp->is);
		if (lmp->is == NULL)
		  goto done;
	      }
	    else
	      lmp->is[0] = '\0';
	  }
	  break;
	default:
	  if (t < END)
	    {
	      /* "cannot happen" */
	      goto done;
	    }
	  else if (t == '\0')
	    {
	      /* not on *my* shift */
	      goto done;
	    }
	  else if (t >= CSET)
	    {
	      /* easy enough */
	      resetmust(mp);
	    }
	  else
	    {
	      /* plain character */
	      resetmust(mp);
	      mp->is[0] = mp->left[0] = mp->right[0] = t;
	      mp->is[1] = mp->left[1] = mp->right[1] = '\0';
	      mp->in = enlist(mp->in, mp->is, (size_t)1);
	      if (mp->in == NULL)
		goto done;
	    }
	  break;
	}
#ifdef DEBUG
      fprintf(stderr, " node: %d:", ri);
      prtok(dfa->tokens[ri]);
      fprintf(stderr, "\n  in:");
      for (i = 0; mp->in[i]; ++i)
	fprintf(stderr, " \"%s\"", mp->in[i]);
      fprintf(stderr, "\n  is: \"%s\"\n", mp->is);
      fprintf(stderr, "  left: \"%s\"\n", mp->left);
      fprintf(stderr, "  right: \"%s\"\n", mp->right);
#endif
      ++mp;
    }
 done:
  if (strlen(result))
    {
      dm = (struct dfamust *) malloc(sizeof (struct dfamust));
      dm->exact = exact;
      dm->must = malloc(strlen(result) + 1);
      strcpy(dm->must, result);
      dm->next = dfa->musts;
      dfa->musts = dm;
    }
  mp = musts;
  for (i = 0; i <= dfa->tindex; ++i)
    {
      freelist(mp[i].in);
      ifree((char *) mp[i].in);
      ifree(mp[i].left);
      ifree(mp[i].right);
      ifree(mp[i].is);
    }
  free((char *) mp);
}
/* kwset.c - search for any of a set of keywords.
   Copyright (C) 1989, 1998 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA.  */

/* Written August 1989 by Mike Haertel.
   The author may be reached (Email) at the address mike@ai.mit.edu,
   or (US mail) as Mike Haertel c/o Free Software Foundation. */

/* The algorithm implemented by these routines bears a startling resemblence
   to one discovered by Beate Commentz-Walter, although it is not identical.
   See "A String Matching Algorithm Fast on the Average," Technical Report,
   IBM-Germany, Scientific Center Heidelberg, Tiergartenstrasse 15, D-6900
   Heidelberg, Germany.  See also Aho, A.V., and M. Corasick, "Efficient
   String Matching:  An Aid to Bibliographic Search," CACM June 1975,
   Vol. 18, No. 6, which describes the failure function used below. */

#ifdef HAVE_CONFIG_H
#if flag_config==0
# include <config.h>
#define flag_config 1
#endif 
#endif
/*#include <sys/types.h>*/
/*#include "system.h"*/
#include "kwset.h"
#include "obstack.h"

#ifdef GREP
extern char *xmalloc();
# undef malloc
# define malloc xmalloc
#endif

#define NCHAR (UCHAR_MAX + 1)
#define obstack_chunk_alloc malloc
#define obstack_chunk_free free

/* Balanced tree of edges and labels leaving a given trie node. */
struct tree
{
  struct tree *llink;		/* Left link; MUST be first field. */
  struct tree *rlink;		/* Right link (to larger labels). */
  struct trie *trie;		/* Trie node pointed to by this edge. */
  unsigned char label;		/* Label on this edge. */
  char balance;			/* Difference in depths of subtrees. */
};

/* Node of a trie representing a set of reversed keywords. */
struct trie
{
  unsigned int accepting;	/* Word index of accepted word, or zero. */
  struct tree *links;		/* Tree of edges leaving this node. */
  struct trie *parent;		/* Parent of this node. */
  struct trie *next;		/* List of all trie nodes in level order. */
  struct trie *fail;		/* Aho-Corasick failure function. */
  int depth;			/* Depth of this node from the root. */
  int shift;			/* Shift function for search failures. */
  int maxshift;			/* Max shift of self and descendents. */
};

/* Structure returned opaquely to the caller, containing everything. */
struct kwset
{
  struct obstack obstack;	/* Obstack for node allocation. */
  int words;			/* Number of words in the trie. */
  struct trie *trie;		/* The trie itself. */
  int mind;			/* Minimum depth of an accepting node. */
  int maxd;			/* Maximum depth of any node. */
  unsigned char delta[NCHAR];	/* Delta table for rapid search. */
  struct trie *next[NCHAR];	/* Table of children of the root. */
  char *target;			/* Target string if there's only one. */
  int mind2;			/* Used in Boyer-Moore search for one string. */
  char *trans;			/* Character translation table. */
};

/* prototypes */
static void enqueue PARAMS((struct tree *, struct trie **));
static void treefails PARAMS((register struct tree *, struct trie *, struct trie *));
static void treedelta PARAMS((register struct tree *,register unsigned int, unsigned char *));
static int  hasevery PARAMS((register struct tree *, register struct tree *));
static void treenext PARAMS((struct tree *, struct trie **));
static char * bmexec PARAMS((kwset_t, char *, size_t));
static char * cwexec PARAMS((kwset_t, char *, size_t, struct kwsmatch *));

/* Allocate and initialize a keyword set object, returning an opaque
   pointer to it.  Return NULL if memory is not available. */
kwset_t
kwsalloc(trans)
     char *trans;
{
  struct kwset *kwset;

  kwset = (struct kwset *) malloc(sizeof (struct kwset));
  if (!kwset)
    return 0;

  obstack_init(&kwset->obstack);
  kwset->words = 0;
  kwset->trie
    = (struct trie *) obstack_alloc(&kwset->obstack, sizeof (struct trie));
  if (!kwset->trie)
    {
      kwsfree((kwset_t) kwset);
      return 0;
    }
  kwset->trie->accepting = 0;
  kwset->trie->links = 0;
  kwset->trie->parent = 0;
  kwset->trie->next = 0;
  kwset->trie->fail = 0;
  kwset->trie->depth = 0;
  kwset->trie->shift = 0;
  kwset->mind = INT_MAX;
  kwset->maxd = -1;
  kwset->target = 0;
  kwset->trans = trans;

  return (kwset_t) kwset;
}

/* Add the given string to the contents of the keyword set.  Return NULL
   for success, an error message otherwise. */
char *
kwsincr(kws, text, len)
     kwset_t kws;
     char *text;
     size_t len;
{
  struct kwset *kwset;
  register struct trie *trie;
  register unsigned char label;
  register struct tree *link;
  register int depth;
  struct tree *links[12];
  enum { L, R } dirs[12];
  struct tree *t, *r, *l, *rl, *lr;

  kwset = (struct kwset *) kws;
  trie = kwset->trie;
  text += len;

  /* Descend the trie (built of reversed keywords) character-by-character,
     installing new nodes when necessary. */
  while (len--)
    {
      label = kwset->trans ? kwset->trans[(unsigned char) *--text] : *--text;

      /* Descend the tree of outgoing links for this trie node,
	 looking for the current character and keeping track
	 of the path followed. */
      link = trie->links;
      links[0] = (struct tree *) &trie->links;
      dirs[0] = L;
      depth = 1;

      while (link && label != link->label)
	{
	  links[depth] = link;
	  if (label < link->label)
	    dirs[depth++] = L, link = link->llink;
	  else
	    dirs[depth++] = R, link = link->rlink;
	}

      /* The current character doesn't have an outgoing link at
	 this trie node, so build a new trie node and install
	 a link in the current trie node's tree. */
      if (!link)
	{
	  link = (struct tree *) obstack_alloc(&kwset->obstack,
					       sizeof (struct tree));
	  if (!link)
	    return _("memory exhausted");
	  link->llink = 0;
	  link->rlink = 0;
	  link->trie = (struct trie *) obstack_alloc(&kwset->obstack,
						     sizeof (struct trie));
	  if (!link->trie)
	    return _("memory exhausted");
	  link->trie->accepting = 0;
	  link->trie->links = 0;
	  link->trie->parent = trie;
	  link->trie->next = 0;
	  link->trie->fail = 0;
	  link->trie->depth = trie->depth + 1;
	  link->trie->shift = 0;
	  link->label = label;
	  link->balance = 0;

	  /* Install the new tree node in its parent. */
	  if (dirs[--depth] == L)
	    links[depth]->llink = link;
	  else
	    links[depth]->rlink = link;

	  /* Back up the tree fixing the balance flags. */
	  while (depth && !links[depth]->balance)
	    {
	      if (dirs[depth] == L)
		--links[depth]->balance;
	      else
		++links[depth]->balance;
	      --depth;
	    }

	  /* Rebalance the tree by pointer rotations if necessary. */
	  if (depth && ((dirs[depth] == L && --links[depth]->balance)
			|| (dirs[depth] == R && ++links[depth]->balance)))
	    {
	      switch (links[depth]->balance)
		{
		case (char) -2:
		  switch (dirs[depth + 1])
		    {
		    case L:
		      r = links[depth], t = r->llink, rl = t->rlink;
		      t->rlink = r, r->llink = rl;
		      t->balance = r->balance = 0;
		      break;
		    case R:
		      r = links[depth], l = r->llink, t = l->rlink;
		      rl = t->rlink, lr = t->llink;
		      t->llink = l, l->rlink = lr, t->rlink = r, r->llink = rl;
		      l->balance = t->balance != 1 ? 0 : -1;
		      r->balance = t->balance != (char) -1 ? 0 : 1;
		      t->balance = 0;
		      break;
		    default:
		      abort ();
		    }
		  break;
		case 2:
		  switch (dirs[depth + 1])
		    {
		    case R:
		      l = links[depth], t = l->rlink, lr = t->llink;
		      t->llink = l, l->rlink = lr;
		      t->balance = l->balance = 0;
		      break;
		    case L:
		      l = links[depth], r = l->rlink, t = r->llink;
		      lr = t->llink, rl = t->rlink;
		      t->llink = l, l->rlink = lr, t->rlink = r, r->llink = rl;
		      l->balance = t->balance != 1 ? 0 : -1;
		      r->balance = t->balance != (char) -1 ? 0 : 1;
		      t->balance = 0;
		      break;
		    default:
		      abort ();
		    }
		  break;
		default:
		  abort ();
		}

	      if (dirs[depth - 1] == L)
		links[depth - 1]->llink = t;
	      else
		links[depth - 1]->rlink = t;
	    }
	}

      trie = link->trie;
    }

  /* Mark the node we finally reached as accepting, encoding the
     index number of this word in the keyword set so far. */
  if (!trie->accepting)
    trie->accepting = 1 + 2 * kwset->words;
  ++kwset->words;

  /* Keep track of the longest and shortest string of the keyword set. */
  if (trie->depth < kwset->mind)
    kwset->mind = trie->depth;
  if (trie->depth > kwset->maxd)
    kwset->maxd = trie->depth;

  return 0;
}

/* Enqueue the trie nodes referenced from the given tree in the
   given queue. */
static void
enqueue(tree, last)
     struct tree *tree;
     struct trie **last;
{
  if (!tree)
    return;
  enqueue(tree->llink, last);
  enqueue(tree->rlink, last);
  (*last) = (*last)->next = tree->trie;
}

/* Compute the Aho-Corasick failure function for the trie nodes referenced
   from the given tree, given the failure function for their parent as
   well as a last resort failure node. */
static void
treefails(tree, fail, recourse)
     register struct tree *tree;
     struct trie *fail;
     struct trie *recourse;
{
  register struct tree *link;

  if (!tree)
    return;

  treefails(tree->llink, fail, recourse);
  treefails(tree->rlink, fail, recourse);

  /* Find, in the chain of fails going back to the root, the first
     node that has a descendent on the current label. */
  while (fail)
    {
      link = fail->links;
      while (link && tree->label != link->label)
	if (tree->label < link->label)
	  link = link->llink;
	else
	  link = link->rlink;
      if (link)
	{
	  tree->trie->fail = link->trie;
	  return;
	}
      fail = fail->fail;
    }

  tree->trie->fail = recourse;
}

/* Set delta entries for the links of the given tree such that
   the preexisting delta value is larger than the current depth. */
static void
treedelta(tree, depth, delta)
     register struct tree *tree;
     register unsigned int depth;
     unsigned char delta[];
{
  if (!tree)
    return;
  treedelta(tree->llink, depth, delta);
  treedelta(tree->rlink, depth, delta);
  if (depth < delta[tree->label])
    delta[tree->label] = depth;
}

/* Return true if A has every label in B. */
static int
hasevery(a, b)
     register struct tree *a;
     register struct tree *b;
{
  if (!b)
    return 1;
  if (!hasevery(a, b->llink))
    return 0;
  if (!hasevery(a, b->rlink))
    return 0;
  while (a && b->label != a->label)
    if (b->label < a->label)
      a = a->llink;
    else
      a = a->rlink;
  return !!a;
}

/* Compute a vector, indexed by character code, of the trie nodes
   referenced from the given tree. */
static void
treenext(tree, next)
     struct tree *tree;
     struct trie *next[];
{
  if (!tree)
    return;
  treenext(tree->llink, next);
  treenext(tree->rlink, next);
  next[tree->label] = tree->trie;
}

/* Compute the shift for each trie node, as well as the delta
   table and next cache for the given keyword set. */
char *
kwsprep(kws)
     kwset_t kws;
{
  register struct kwset *kwset;
  register int i;
  register struct trie *curr, *fail;
  register char *trans;
  unsigned char delta[NCHAR];
  struct trie *last, *next[NCHAR];

  kwset = (struct kwset *) kws;

  /* Initial values for the delta table; will be changed later.  The
     delta entry for a given character is the smallest depth of any
     node at which an outgoing edge is labeled by that character. */
  if (kwset->mind < 256)
    for (i = 0; i < NCHAR; ++i)
      delta[i] = kwset->mind;
  else
    for (i = 0; i < NCHAR; ++i)
      delta[i] = 255;

  /* Check if we can use the simple boyer-moore algorithm, instead
     of the hairy commentz-walter algorithm. */
  if (kwset->words == 1 && kwset->trans == 0)
    {
      /* Looking for just one string.  Extract it from the trie. */
      kwset->target = obstack_alloc(&kwset->obstack, kwset->mind);
      for (i = kwset->mind - 1, curr = kwset->trie; i >= 0; --i)
	{
	  kwset->target[i] = curr->links->label;
	  curr = curr->links->trie;
	}
      /* Build the Boyer Moore delta.  Boy that's easy compared to CW. */
      for (i = 0; i < kwset->mind; ++i)
	delta[(unsigned char) kwset->target[i]] = kwset->mind - (i + 1);
      kwset->mind2 = kwset->mind;
      /* Find the minimal delta2 shift that we might make after
	 a backwards match has failed. */
      for (i = 0; i < kwset->mind - 1; ++i)
	if (kwset->target[i] == kwset->target[kwset->mind - 1])
	  kwset->mind2 = kwset->mind - (i + 1);
    }
  else
    {
      /* Traverse the nodes of the trie in level order, simultaneously
	 computing the delta table, failure function, and shift function. */
      for (curr = last = kwset->trie; curr; curr = curr->next)
	{
	  /* Enqueue the immediate descendents in the level order queue. */
	  enqueue(curr->links, &last);

	  curr->shift = kwset->mind;
	  curr->maxshift = kwset->mind;

	  /* Update the delta table for the descendents of this node. */
	  treedelta(curr->links, curr->depth, delta);

	  /* Compute the failure function for the decendents of this node. */
	  treefails(curr->links, curr->fail, kwset->trie);

	  /* Update the shifts at each node in the current node's chain
	     of fails back to the root. */
	  for (fail = curr->fail; fail; fail = fail->fail)
	    {
	      /* If the current node has some outgoing edge that the fail
		 doesn't, then the shift at the fail should be no larger
		 than the difference of their depths. */
	      if (!hasevery(fail->links, curr->links))
		if (curr->depth - fail->depth < fail->shift)
		  fail->shift = curr->depth - fail->depth;

	      /* If the current node is accepting then the shift at the
		 fail and its descendents should be no larger than the
		 difference of their depths. */
	      if (curr->accepting && fail->maxshift > curr->depth - fail->depth)
		fail->maxshift = curr->depth - fail->depth;
	    }
	}

      /* Traverse the trie in level order again, fixing up all nodes whose
	 shift exceeds their inherited maxshift. */
      for (curr = kwset->trie->next; curr; curr = curr->next)
	{
	  if (curr->maxshift > curr->parent->maxshift)
	    curr->maxshift = curr->parent->maxshift;
	  if (curr->shift > curr->maxshift)
	    curr->shift = curr->maxshift;
	}

      /* Create a vector, indexed by character code, of the outgoing links
	 from the root node. */
      for (i = 0; i < NCHAR; ++i)
	next[i] = 0;
      treenext(kwset->trie->links, next);

      if ((trans = kwset->trans) != 0)
	for (i = 0; i < NCHAR; ++i)
	  kwset->next[i] = next[(unsigned char) trans[i]];
      else
	for (i = 0; i < NCHAR; ++i)
	  kwset->next[i] = next[i];
    }

  /* Fix things up for any translation table. */
  if ((trans = kwset->trans) != 0)
    for (i = 0; i < NCHAR; ++i)
      kwset->delta[i] = delta[(unsigned char) trans[i]];
  else
    for (i = 0; i < NCHAR; ++i)
      kwset->delta[i] = delta[i];

  return 0;
}

#define U(C) ((unsigned char) (C))

/* Fast boyer-moore search. */
static char *
bmexec(kws, text, size)
     kwset_t kws;
     char *text;
     size_t size;
{
  struct kwset *kwset;
  register unsigned char *d1;
  register char *ep, *sp, *tp;
  register int d, gc, i, len, md2;

  kwset = (struct kwset *) kws;
  len = kwset->mind;

  if (len == 0)
    return text;
  if (len > size)
    return 0;
  if (len == 1)
    return memchr(text, kwset->target[0], size);

  d1 = kwset->delta;
  sp = kwset->target + len;
  gc = U(sp[-2]);
  md2 = kwset->mind2;
  tp = text + len;

  /* Significance of 12: 1 (initial offset) + 10 (skip loop) + 1 (md2). */
  if (size > 12 * len)
    /* 11 is not a bug, the initial offset happens only once. */
    for (ep = text + size - 11 * len;;)
      {
	while (tp <= ep)
	  {
	    d = d1[U(tp[-1])], tp += d;
	    d = d1[U(tp[-1])], tp += d;
	    if (d == 0)
	      goto found;
	    d = d1[U(tp[-1])], tp += d;
	    d = d1[U(tp[-1])], tp += d;
	    d = d1[U(tp[-1])], tp += d;
	    if (d == 0)
	      goto found;
	    d = d1[U(tp[-1])], tp += d;
	    d = d1[U(tp[-1])], tp += d;
	    d = d1[U(tp[-1])], tp += d;
	    if (d == 0)
	      goto found;
	    d = d1[U(tp[-1])], tp += d;
	    d = d1[U(tp[-1])], tp += d;
	  }
	break;
      found:
	if (U(tp[-2]) == gc)
	  {
	    for (i = 3; i <= len && U(tp[-i]) == U(sp[-i]); ++i)
	      ;
	    if (i > len)
	      return tp - len;
	  }
	tp += md2;
      }

  /* Now we have only a few characters left to search.  We
     carefully avoid ever producing an out-of-bounds pointer. */
  ep = text + size;
  d = d1[U(tp[-1])];
  while (d <= ep - tp)
    {
      d = d1[U((tp += d)[-1])];
      if (d != 0)
	continue;
      if (U(tp[-2]) == gc)
	{
	  for (i = 3; i <= len && U(tp[-i]) == U(sp[-i]); ++i)
	    ;
	  if (i > len)
	    return tp - len;
	}
      d = md2;
    }

  return 0;
}

/* Hairy multiple string search. */
static char *
cwexec(kws, text, len, kwsmatch)
     kwset_t kws;
     char *text;
     size_t len;
     struct kwsmatch *kwsmatch;
{
  struct kwset *kwset;
  struct trie **next, *trie, *accept;
  char *beg, *lim, *mch, *lmch;
  register unsigned char c, *delta;
  register int d;
  register char *end, *qlim;
  register struct tree *tree;
  register char *trans;

#ifdef lint
  accept = NULL;
#endif

  /* Initialize register copies and look for easy ways out. */
  kwset = (struct kwset *) kws;
  if (len < kwset->mind)
    return 0;
  next = kwset->next;
  delta = kwset->delta;
  trans = kwset->trans;
  lim = text + len;
  end = text;
  if ((d = kwset->mind) != 0)
    mch = 0;
  else
    {
      mch = text, accept = kwset->trie;
      goto match;
    }

  if (len >= 4 * kwset->mind)
    qlim = lim - 4 * kwset->mind;
  else
    qlim = 0;

  while (lim - end >= d)
    {
      if (qlim && end <= qlim)
	{
	  end += d - 1;
	  while ((d = delta[c = *end]) && end < qlim)
	    {
	      end += d;
	      end += delta[(unsigned char) *end];
	      end += delta[(unsigned char) *end];
	    }
	  ++end;
	}
      else
	d = delta[c = (end += d)[-1]];
      if (d)
	continue;
      beg = end - 1;
      trie = next[c];
      if (trie->accepting)
	{
	  mch = beg;
	  accept = trie;
	}
      d = trie->shift;
      while (beg > text)
	{
	  c = trans ? trans[(unsigned char) *--beg] : *--beg;
	  tree = trie->links;
	  while (tree && c != tree->label)
	    if (c < tree->label)
	      tree = tree->llink;
	    else
	      tree = tree->rlink;
	  if (tree)
	    {
	      trie = tree->trie;
	      if (trie->accepting)
		{
		  mch = beg;
		  accept = trie;
		}
	    }
	  else
	    break;
	  d = trie->shift;
	}
      if (mch)
	goto match;
    }
  return 0;

 match:
  /* Given a known match, find the longest possible match anchored
     at or before its starting point.  This is nearly a verbatim
     copy of the preceding main search loops. */
  if (lim - mch > kwset->maxd)
    lim = mch + kwset->maxd;
  lmch = 0;
  d = 1;
  while (lim - end >= d)
    {
      if ((d = delta[c = (end += d)[-1]]) != 0)
	continue;
      beg = end - 1;
      if (!(trie = next[c]))
	{
	  d = 1;
	  continue;
	}
      if (trie->accepting && beg <= mch)
	{
	  lmch = beg;
	  accept = trie;
	}
      d = trie->shift;
      while (beg > text)
	{
	  c = trans ? trans[(unsigned char) *--beg] : *--beg;
	  tree = trie->links;
	  while (tree && c != tree->label)
	    if (c < tree->label)
	      tree = tree->llink;
	    else
	      tree = tree->rlink;
	  if (tree)
	    {
	      trie = tree->trie;
	      if (trie->accepting && beg <= mch)
		{
		  lmch = beg;
		  accept = trie;
		}
	    }
	  else
	    break;
	  d = trie->shift;
	}
      if (lmch)
	{
	  mch = lmch;
	  goto match;
	}
      if (!d)
	d = 1;
    }

  if (kwsmatch)
    {
      kwsmatch->index = accept->accepting / 2;
      kwsmatch->beg[0] = mch;
      kwsmatch->size[0] = accept->depth;
    }
  return mch;
}

/* Search through the given text for a match of any member of the
   given keyword set.  Return a pointer to the first character of
   the matching substring, or NULL if no match is found.  If FOUNDLEN
   is non-NULL store in the referenced location the length of the
   matching substring.  Similarly, if FOUNDIDX is non-NULL, store
   in the referenced location the index number of the particular
   keyword matched. */
char *
kwsexec(kws, text, size, kwsmatch)
     kwset_t kws;
     char *text;
     size_t size;
     struct kwsmatch *kwsmatch;
{
  struct kwset *kwset;
  char *ret;

  kwset = (struct kwset *) kws;
  if (kwset->words == 1 && kwset->trans == 0)
    {
      ret = bmexec(kws, text, size);
      if (kwsmatch != 0 && ret != 0)
	{
	  kwsmatch->index = 0;
	  kwsmatch->beg[0] = ret;
	  kwsmatch->size[0] = kwset->mind;
	}
      return ret;
    }
  else
    return cwexec(kws, text, size, kwsmatch);
}

/* Free the components of the given keyword set. */
void
kwsfree(kws)
     kwset_t kws;
{
  struct kwset *kwset;

  kwset = (struct kwset *) kws;
  obstack_free(&kwset->obstack, 0);
  free(kws);
}
/* obstack.h - object stack macros
   Copyright (C) 1988,89,90,91,92,93,94,96,97, 98 Free Software Foundation, Inc.

   the C library, however.  The master source lives in /gd/gnu/lib.

NOTE: The canonical source of this file is maintained with the
GNU C Library.  Bugs can be reported to bug-glibc@prep.ai.mit.edu.

This program is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software Foundation,
Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

#ifdef HAVE_CONFIG_H
#if flag_config==0
#include <config.h>
#define flag_config 1
#endif
#endif

/*#include "obstack.h"*/

/* NOTE BEFORE MODIFYING THIS FILE: This version number must be
   incremented whenever callers compiled using an old obstack.h can no
   longer properly call the functions in this obstack.c.  */
#define OBSTACK_INTERFACE_VERSION 1

/* Comment out all this code if we are using the GNU C Library, and are not
   actually compiling the library itself, and the installed library
   supports the same library interface we do.  This code is part of the GNU
   C Library, but also included in many other GNU distributions.  Compiling
   and linking in this code is a waste when using the GNU C library
   (especially if it is a shared library).  Rather than having every GNU
   program understand `configure --with-gnu-libc' and omit the object
   files, it is simpler to just do this in the source for each such file.  */

/*#include <stdio.h>*/		/* Random thing to get __GNU_LIBRARY__.  */
#if !defined (_LIBC) && defined (__GNU_LIBRARY__) && __GNU_LIBRARY__ > 1
#include <gnu-versions.h>
#define flag_gnuversions 1
#if _GNU_OBSTACK_INTERFACE_VERSION == OBSTACK_INTERFACE_VERSION
#define ELIDE_CODE
#endif
#endif


#ifndef ELIDE_CODE


#if defined (__STDC__) && __STDC__
#define POINTER void *
#else
#define POINTER char *
#endif

/* Determine default alignment.  */
struct fooalign {char x; double d;};
#define DEFAULT_ALIGNMENT  \
  ((PTR_INT_TYPE) ((char *) &((struct fooalign *) 0)->d - (char *) 0))
/* If malloc were really smart, it would round addresses to DEFAULT_ALIGNMENT.
   But in fact it might be less smart and round addresses to as much as
   DEFAULT_ROUNDING.  So we prepare for it to do that.  */
union fooround {long x; double d;};
#define DEFAULT_ROUNDING (sizeof (union fooround))

/* When we copy a long block of data, this is the unit to do it with.
   On some machines, copying successive ints does not work;
   in such a case, redefine COPYING_UNIT to `long' (if that works)
   or `char' as a last resort.  */
#ifndef COPYING_UNIT
#define COPYING_UNIT int
#endif


/* The functions allocating more room by calling `obstack_chunk_alloc'
   jump to the handler pointed to by `obstack_alloc_failed_handler'.
   This variable by default points to the internal function
   `print_and_abort'.  */
#if defined (__STDC__) && __STDC__
static void print_and_abort (void);
void (*obstack_alloc_failed_handler) (void) = print_and_abort;
#else
static void print_and_abort ();
void (*obstack_alloc_failed_handler) () = print_and_abort;
#endif

/* Exit value used when `print_and_abort' is used.  */
#if defined __GNU_LIBRARY__ || defined HAVE_STDLIB_H
#if flag_stdlib==0
#include <stdlib.h>
#define flag_stdlib 1
#endif
#endif
#ifndef EXIT_FAILURE
#define EXIT_FAILURE 1
#endif
int obstack_exit_failure = EXIT_FAILURE;

/* The non-GNU-C macros copy the obstack into this global variable
   to avoid multiple evaluation.  */

struct obstack *_obstack;

/* Define a macro that either calls functions with the traditional malloc/free
   calling interface, or calls functions with the mmalloc/mfree interface
   (that adds an extra first argument), based on the state of use_extra_arg.
   For free, do not use ?:, since some compilers, like the MIPS compilers,
   do not allow (expr) ? void : void.  */

#if defined (__STDC__) && __STDC__
#define CALL_CHUNKFUN(h, size) \
  (((h) -> use_extra_arg) \
   ? (*(h)->chunkfun) ((h)->extra_arg, (size)) \
   : (*(struct _obstack_chunk *(*) (long)) (h)->chunkfun) ((size)))

#define CALL_FREEFUN(h, old_chunk) \
  do { \
    if ((h) -> use_extra_arg) \
      obstack_chunk_free((h)->extra_arg/*, (old_chunk)*/); \
    else \
     obstack_chunk_free((old_chunk)); \
  } while (0)

#define CALL_FREEFUN(h, old_chunk) \
  do { \
      free ((old_chunk)); \
  } while (0)

/*
#define CALL_FREEFUN(h, old_chunk) \
  do { \
    if ((h) -> use_extra_arg) \
      (*(h)->freefun) ((h)->extra_arg, (old_chunk)); \
    else \
      (*(void (*) (void *)) (h)->freefun) ((old_chunk)); \
  } while (0)
*/
#else
#define CALL_CHUNKFUN(h, size) \
  (((h) -> use_extra_arg) \
   ? (*(h)->chunkfun) ((h)->extra_arg, (size)) \
   : (*(struct _obstack_chunk *(*) ()) (h)->chunkfun) ((size)))

#define CALL_FREEFUN(h, old_chunk) \
  do { \
    if ((h) -> use_extra_arg) \
      (*(h)->freefun) ((h)->extra_arg, (old_chunk)); \
    else \
      (*(void (*) ()) (h)->freefun) ((old_chunk)); \
  } while (0)
#endif


/* Initialize an obstack H for use.  Specify chunk size SIZE (0 means default).
   Objects start on multiples of ALIGNMENT (0 means use default).
   CHUNKFUN is the function to use to allocate chunks,
   and FREEFUN the function to free them.

   Return nonzero if successful, zero if out of memory.
   To recover from an out of memory error,
   free up some memory, then call this again.  */

int
_obstack_begin (h, size, alignment, chunkfun, freefun)
     struct obstack *h;
     int size;
     int alignment;
#if defined (__STDC__) && __STDC__
     POINTER (*chunkfun) (long);
     void (*freefun) (void *);
#else
     POINTER (*chunkfun) ();
     void (*freefun) ();
#endif
{
  register struct _obstack_chunk *chunk; /* points to new chunk */

  if (alignment == 0)
    alignment = (int) DEFAULT_ALIGNMENT;
  if (size == 0)
    /* Default size is what GNU malloc can fit in a 4096-byte block.  */
    {
      /* 12 is sizeof (mhead) and 4 is EXTRA from GNU malloc.
	 Use the values for range checking, because if range checking is off,
	 the extra bytes won't be missed terribly, but if range checking is on
	 and we used a larger request, a whole extra 4096 bytes would be
	 allocated.

	 These number are irrelevant to the new GNU malloc.  I suspect it is
	 less sensitive to the size of the request.  */
      int extra = ((((12 + DEFAULT_ROUNDING - 1) & ~(DEFAULT_ROUNDING - 1))
		    + 4 + DEFAULT_ROUNDING - 1)
		   & ~(DEFAULT_ROUNDING - 1));
      size = 4096 - extra;
    }

#if defined (__STDC__) && __STDC__
  h->chunkfun = (struct _obstack_chunk * (*)(void *, long)) chunkfun;
  h->freefun = (void (*) (void *, struct _obstack_chunk *)) freefun;
#else
  h->chunkfun = (struct _obstack_chunk * (*)()) chunkfun;
  h->freefun = freefun;
#endif
  h->chunk_size = size;
  h->alignment_mask = alignment - 1;
  h->use_extra_arg = 0;

  chunk = h->chunk = CALL_CHUNKFUN (h, h -> chunk_size);
  if (!chunk)
    (*obstack_alloc_failed_handler) ();
  h->next_free = h->object_base = chunk->contents;
  h->chunk_limit = chunk->limit
    = (char *) chunk + h->chunk_size;
  chunk->prev = 0;
  /* The initial chunk now contains no empty object.  */
  h->maybe_empty_object = 0;
  h->alloc_failed = 0;
  return 1;
}

int
_obstack_begin_1 (h, size, alignment, chunkfun, freefun, arg)
     struct obstack *h;
     int size;
     int alignment;
#if defined (__STDC__) && __STDC__
     POINTER (*chunkfun) (POINTER, long);
     void (*freefun) (POINTER, POINTER);
#else
     POINTER (*chunkfun) ();
     void (*freefun) ();
#endif
     POINTER arg;
{
  register struct _obstack_chunk *chunk; /* points to new chunk */

  if (alignment == 0)
    alignment = (int) DEFAULT_ALIGNMENT;
  if (size == 0)
    /* Default size is what GNU malloc can fit in a 4096-byte block.  */
    {
      /* 12 is sizeof (mhead) and 4 is EXTRA from GNU malloc.
	 Use the values for range checking, because if range checking is off,
	 the extra bytes won't be missed terribly, but if range checking is on
	 and we used a larger request, a whole extra 4096 bytes would be
	 allocated.

	 These number are irrelevant to the new GNU malloc.  I suspect it is
	 less sensitive to the size of the request.  */
      int extra = ((((12 + DEFAULT_ROUNDING - 1) & ~(DEFAULT_ROUNDING - 1))
		    + 4 + DEFAULT_ROUNDING - 1)
		   & ~(DEFAULT_ROUNDING - 1));
      size = 4096 - extra;
    }

#if defined(__STDC__) && __STDC__
  h->chunkfun = (struct _obstack_chunk * (*)(void *,long)) chunkfun;
  h->freefun = (void (*) (void *, struct _obstack_chunk *)) freefun;
#else
  h->chunkfun = (struct _obstack_chunk * (*)()) chunkfun;
  h->freefun = freefun;
#endif
  h->chunk_size = size;
  h->alignment_mask = alignment - 1;
  h->extra_arg = arg;
  h->use_extra_arg = 1;

  chunk = h->chunk = CALL_CHUNKFUN (h, h -> chunk_size);
  if (!chunk)
    (*obstack_alloc_failed_handler) ();
  h->next_free = h->object_base = chunk->contents;
  h->chunk_limit = chunk->limit
    = (char *) chunk + h->chunk_size;
  chunk->prev = 0;
  /* The initial chunk now contains no empty object.  */
  h->maybe_empty_object = 0;
  h->alloc_failed = 0;
  return 1;
}

/* Allocate a new current chunk for the obstack *H
   on the assumption that LENGTH bytes need to be added
   to the current object, or a new object of length LENGTH allocated.
   Copies any partial object from the end of the old chunk
   to the beginning of the new one.  */

void
_obstack_newchunk (h, length)
     struct obstack *h;
     int length;
{
  register struct _obstack_chunk *old_chunk = h->chunk;
  register struct _obstack_chunk *new_chunk;
  register long	new_size;
  register long obj_size = h->next_free - h->object_base;
  register long i;
  long already;

  /* Compute size for new chunk.  */
  new_size = (obj_size + length) + (obj_size >> 3) + 100;
  if (new_size < h->chunk_size)
    new_size = h->chunk_size;

  /* Allocate and initialize the new chunk.  */
  new_chunk = CALL_CHUNKFUN (h, new_size);
  if (!new_chunk)
    (*obstack_alloc_failed_handler) ();
  h->chunk = new_chunk;
  new_chunk->prev = old_chunk;
  new_chunk->limit = h->chunk_limit = (char *) new_chunk + new_size;

  /* Move the existing object to the new chunk.
     Word at a time is fast and is safe if the object
     is sufficiently aligned.  */
  if (h->alignment_mask + 1 >= DEFAULT_ALIGNMENT)
    {
      for (i = obj_size / sizeof (COPYING_UNIT) - 1;
	   i >= 0; i--)
	((COPYING_UNIT *)new_chunk->contents)[i]
	  = ((COPYING_UNIT *)h->object_base)[i];
      /* We used to copy the odd few remaining bytes as one extra COPYING_UNIT,
	 but that can cross a page boundary on a machine
	 which does not do strict alignment for COPYING_UNITS.  */
      already = obj_size / sizeof (COPYING_UNIT) * sizeof (COPYING_UNIT);
    }
  else
    already = 0;
  /* Copy remaining bytes one by one.  */
  for (i = already; i < obj_size; i++)
    new_chunk->contents[i] = h->object_base[i];

  /* If the object just copied was the only data in OLD_CHUNK,
     free that chunk and remove it from the chain.
     But not if that chunk might contain an empty object.  */
  if (h->object_base == old_chunk->contents && ! h->maybe_empty_object)
    {
      new_chunk->prev = old_chunk->prev;
      CALL_FREEFUN (h, old_chunk);
    }

  h->object_base = new_chunk->contents;
  h->next_free = h->object_base + obj_size;
  /* The new chunk certainly contains no empty object yet.  */
  h->maybe_empty_object = 0;
}

/* Return nonzero if object OBJ has been allocated from obstack H.
   This is here for debugging.
   If you use it in a program, you are probably losing.  */

#if defined (__STDC__) && __STDC__
/* Suppress -Wmissing-prototypes warning.  We don't want to declare this in
   obstack.h because it is just for debugging.  */
int _obstack_allocated_p (struct obstack *h, POINTER obj);
#endif

int
_obstack_allocated_p (h, obj)
     struct obstack *h;
     POINTER obj;
{
  register struct _obstack_chunk *lp;	/* below addr of any objects in this chunk */
  register struct _obstack_chunk *plp;	/* point to previous chunk if any */

  lp = (h)->chunk;
  /* We use >= rather than > since the object cannot be exactly at
     the beginning of the chunk but might be an empty object exactly
     at the end of an adjacent chunk.  */
  while (lp != 0 && ((POINTER) lp >= obj || (POINTER) (lp)->limit < obj))
    {
      plp = lp->prev;
      lp = plp;
    }
  return lp != 0;
}

/* Free objects in obstack H, including OBJ and everything allocate
   more recently than OBJ.  If OBJ is zero, free everything in H.  */

#undef obstack_free

/* This function has two names with identical definitions.
   This is the first one, called from non-ANSI code.  */

void
_obstack_free (h, obj)
     struct obstack *h;
     POINTER obj;
{
  register struct _obstack_chunk *lp;	/* below addr of any objects in this chunk */
  register struct _obstack_chunk *plp;	/* point to previous chunk if any */

  lp = h->chunk;
  /* We use >= because there cannot be an object at the beginning of a chunk.
     But there can be an empty object at that address
     at the end of another chunk.  */
  while (lp != 0 && ((POINTER) lp >= obj || (POINTER) (lp)->limit < obj))
    {
      plp = lp->prev;
      CALL_FREEFUN (h, lp);
      lp = plp;
      /* If we switch chunks, we can't tell whether the new current
	 chunk contains an empty object, so assume that it may.  */
      h->maybe_empty_object = 1;
    }
  if (lp)
    {
      h->object_base = h->next_free = (char *) (obj);
      h->chunk_limit = lp->limit;
      h->chunk = lp;
    }
  else if (obj != 0)
    /* obj is not in any of the chunks! */
    abort ();
}

/* This function is used from ANSI code.  */

void
obstack_free (h, obj)
     struct obstack *h;
     POINTER obj;
{
  register struct _obstack_chunk *lp;	/* below addr of any objects in this chunk */
  register struct _obstack_chunk *plp;	/* point to previous chunk if any */

  lp = h->chunk;
  /* We use >= because there cannot be an object at the beginning of a chunk.
     But there can be an empty object at that address
     at the end of another chunk.  */
  while (lp != 0 && ((POINTER) lp >= obj || (POINTER) (lp)->limit < obj))
    {
      plp = lp->prev;
      CALL_FREEFUN (h, lp);
      lp = plp;
      /* If we switch chunks, we can't tell whether the new current
	 chunk contains an empty object, so assume that it may.  */
      h->maybe_empty_object = 1;
    }
  if (lp)
    {
      h->object_base = h->next_free = (char *) (obj);
      h->chunk_limit = lp->limit;
      h->chunk = lp;
    }
  else if (obj != 0)
    /* obj is not in any of the chunks! */
    abort ();
}

int
_obstack_memory_used (h)
     struct obstack *h;
{
  register struct _obstack_chunk* lp;
  register int nbytes = 0;

  for (lp = h->chunk; lp != 0; lp = lp->prev)
    {
      nbytes += lp->limit - (char *) lp;
    }
  return nbytes;
}

/* Define the error handler.  */
#ifndef _
# ifdef HAVE_LIBINTL_H
#if flag_libintl==0
#  include <libintl.h>
#define flag_libintl 1
#endif
#  ifndef _
#   define _(Str) gettext (Str)
#  endif
# else
#  define _(Str) (Str)
# endif
#endif

static void
print_and_abort ()
{
  fputs (_("memory exhausted\n"), stderr);
  exit (obstack_exit_failure);
}

#if 0
/* These are now turned off because the applications do not use it
   and it uses bcopy via obstack_grow, which causes trouble on sysV.  */

/* Now define the functional versions of the obstack macros.
   Define them to simply use the corresponding macros to do the job.  */

#if defined (__STDC__) && __STDC__
/* These function definitions do not work with non-ANSI preprocessors;
   they won't pass through the macro names in parentheses.  */

/* The function names appear in parentheses in order to prevent
   the macro-definitions of the names from being expanded there.  */

POINTER (obstack_base) (obstack)
     struct obstack *obstack;
{
  return obstack_base (obstack);
}

POINTER (obstack_next_free) (obstack)
     struct obstack *obstack;
{
  return obstack_next_free (obstack);
}

int (obstack_object_size) (obstack)
     struct obstack *obstack;
{
  return obstack_object_size (obstack);
}

int (obstack_room) (obstack)
     struct obstack *obstack;
{
  return obstack_room (obstack);
}

int (obstack_make_room) (obstack, length)
     struct obstack *obstack;
     int length;
{
  return obstack_make_room (obstack, length);
}

void (obstack_grow) (obstack, pointer, length)
     struct obstack *obstack;
     POINTER pointer;
     int length;
{
  obstack_grow (obstack, pointer, length);
}

void (obstack_grow0) (obstack, pointer, length)
     struct obstack *obstack;
     POINTER pointer;
     int length;
{
  obstack_grow0 (obstack, pointer, length);
}

void (obstack_1grow) (obstack, character)
     struct obstack *obstack;
     int character;
{
  obstack_1grow (obstack, character);
}

void (obstack_blank) (obstack, length)
     struct obstack *obstack;
     int length;
{
  obstack_blank (obstack, length);
}

void (obstack_1grow_fast) (obstack, character)
     struct obstack *obstack;
     int character;
{
  obstack_1grow_fast (obstack, character);
}

void (obstack_blank_fast) (obstack, length)
     struct obstack *obstack;
     int length;
{
  obstack_blank_fast (obstack, length);
}

POINTER (obstack_finish) (obstack)
     struct obstack *obstack;
{
  return obstack_finish (obstack);
}

POINTER (obstack_alloc) (obstack, length)
     struct obstack *obstack;
     int length;
{
  return obstack_alloc (obstack, length);
}

POINTER (obstack_copy) (obstack, pointer, length)
     struct obstack *obstack;
     POINTER pointer;
     int length;
{
  return obstack_copy (obstack, pointer, length);
}

POINTER (obstack_copy0) (obstack, pointer, length)
     struct obstack *obstack;
     POINTER pointer;
     int length;
{
  return obstack_copy0 (obstack, pointer, length);
}

#endif /* __STDC__ */

#endif /* 0 */

#endif	/* !ELIDE_CODE */
/* Extended regular expression matching and search library,
   version 0.12.
   (Implements POSIX draft P1003.2/D11.2, except for some of the
   internationalization features.)
   Copyright (C) 1993, 94, 95, 96, 97, 98, 99 Free Software Foundation, Inc.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* AIX requires this to be the first thing in the file. */
#if defined _AIX && !defined REGEX_MALLOC
  #pragma alloca
#endif

#undef	_GNU_SOURCE
#define _GNU_SOURCE

#ifdef HAVE_CONFIG_H
#if flag_config==0
# include <config.h>
#define flag_config 1
#endif
#endif

#ifndef PARAMS
# if defined __GNUC__ || (defined __STDC__ && __STDC__)
#  define PARAMS(args) args
# else
#  define PARAMS(args) ()
# endif  /* GCC.  */
#endif  /* Not PARAMS.  */

#if defined STDC_HEADERS && !defined emacs
# include <stddef.h>
#else
/* We need this for `regex.h', and perhaps for the Emacs include files.  */
#if flag_systypes==0
# include <sys/types.h>
#define flag_systypes 1
#endif
#endif

#define WIDE_CHAR_SUPPORT (HAVE_WCTYPE_H && HAVE_WCHAR_H && HAVE_BTOWC)

/* For platform which support the ISO C amendement 1 functionality we
   support user defined character classes.  */
#if defined _LIBC || WIDE_CHAR_SUPPORT
/* Solaris 2.5 has a bug: <wchar.h> must be included before <wctype.h>.  */
# include <wchar.h>
# include <wctype.h>
#endif

#ifdef _LIBC
/* We have to keep the namespace clean.  */
# define regfree(preg) __regfree (preg)
# define regexec(pr, st, nm, pm, ef) __regexec (pr, st, nm, pm, ef)
# define regcomp(preg, pattern, cflags) __regcomp (preg, pattern, cflags)
# define regerror(errcode, preg, errbuf, errbuf_size) \
	__regerror(errcode, preg, errbuf, errbuf_size)
# define re_set_registers(bu, re, nu, st, en) \
	__re_set_registers (bu, re, nu, st, en)
# define re_match_2(bufp, string1, size1, string2, size2, pos, regs, stop) \
	__re_match_2 (bufp, string1, size1, string2, size2, pos, regs, stop)
# define re_match(bufp, string, size, pos, regs) \
	__re_match (bufp, string, size, pos, regs)
# define re_search(bufp, string, size, startpos, range, regs) \
	__re_search (bufp, string, size, startpos, range, regs)
# define re_compile_pattern(pattern, length, bufp) \
	__re_compile_pattern (pattern, length, bufp)
# define re_set_syntax(syntax) __re_set_syntax (syntax)
# define re_search_2(bufp, st1, s1, st2, s2, startpos, range, regs, stop) \
	__re_search_2 (bufp, st1, s1, st2, s2, startpos, range, regs, stop)
# define re_compile_fastmap(bufp) __re_compile_fastmap (bufp)

#define btowc __btowc
#endif

/* This is for other GNU distributions with internationalized messages.  */
#if HAVE_LIBINTL_H || defined _LIBC
#if flag_libintl==0
# include <libintl.h>
#define flag_libintl 1
#endif
#else
# define gettext(msgid) (msgid)
#endif

#ifndef gettext_noop
/* This define is so xgettext can find the internationalizable
   strings.  */
# define gettext_noop(String) String
#endif

/* The `emacs' switch turns on certain matching commands
   that make sense only in Emacs. */
#ifdef emacs

# include "lisp.h"
# include "buffer.h"
# include "syntax.h"

#else  /* not emacs */

/* If we are not linking with Emacs proper,
   we can't use the relocating allocator
   even if config.h says that we can.  */
# undef REL_ALLOC

# if defined STDC_HEADERS || defined _LIBC
#if flag_stdlib==0
#  include <stdlib.h>
#define flag_stdlib 1
#endif
# else
char *malloc ();
char *realloc ();
# endif

/* When used in Emacs's lib-src, we need to get bzero and bcopy somehow.
   If nothing else has been done, use the method below.  */
# ifdef INHIBIT_STRING_HEADER
#  if !(defined HAVE_BZERO && defined HAVE_BCOPY)
#   if !defined bzero && !defined bcopy
#    undef INHIBIT_STRING_HEADER
#   endif
#  endif
# endif

/* This is the normal way of making sure we have a bcopy and a bzero.
   This is used in most programs--a few other programs avoid this
   by defining INHIBIT_STRING_HEADER.  */
# ifndef INHIBIT_STRING_HEADER
#  if defined HAVE_STRING_H || defined STDC_HEADERS || defined _LIBC
#if flag_string==0
#   include <string.h>
#define flag_string 1
#endif
#   ifndef bzero
#    ifndef _LIBC
#     define bzero(s, n)	(memset (s, '\0', n), (s))
#    else
#     define bzero(s, n)	__bzero (s, n)
#    endif
#   endif
#  else
#if flag_strings==0
#   include <strings.h>
#define flag_strings 1
#endif
#   ifndef memcmp
#    define memcmp(s1, s2, n)	bcmp (s1, s2, n)
#   endif
#   ifndef memcpy
#    define memcpy(d, s, n)	(bcopy (s, d, n), (d))
#   endif
#  endif
# endif

/* Define the syntax stuff for \<, \>, etc.  */

/* This must be nonzero for the wordchar and notwordchar pattern
   commands in re_match_2.  */
# ifndef Sword
#  define Sword 1
# endif

# ifdef SWITCH_ENUM_BUG
#  define SWITCH_ENUM_CAST(x) ((int)(x))
# else
#  define SWITCH_ENUM_CAST(x) (x)
# endif

#endif /* not emacs */

/* Get the interface, including the syntax bits.  */
/*#include "regex.h"*/

/* isalpha etc. are used for the character classes.  */
/*#include <ctype.h>*/

/* Jim Meyering writes:

   "... Some ctype macros are valid only for character codes that
   isascii says are ASCII (SGI's IRIX-4.0.5 is one such system --when
   using /bin/cc or gcc but without giving an ansi option).  So, all
   ctype uses should be through macros like ISPRINT...  If
   STDC_HEADERS is defined, then autoconf has verified that the ctype
   macros don't need to be guarded with references to isascii. ...
   Defining isascii to 1 should let any compiler worth its salt
   eliminate the && through constant folding."
   Solaris defines some of these symbols so we must undefine them first.  */

#undef ISASCII
#if defined STDC_HEADERS || (!defined isascii && !defined HAVE_ISASCII)
# define ISASCII(c) 1
#else
# define ISASCII(c) isascii(c)
#endif

#ifdef isblank
# define ISBLANK(c) (ISASCII (c) && isblank (c))
#else
# define ISBLANK(c) ((c) == ' ' || (c) == '\t')
#endif

#undef ISGRAPH
#undef ISDIGIT
#undef  ISALNUM
#undef ISALPHA
#undef ISCNTRL
#undef ISLOWER
#undef ISPUNCT
#undef  ISSPACE
#undef  ISUPPER
#undef ISXDIGIT



#ifdef isgraph
# define ISGRAPH(c) (ISASCII (c) && isgraph (c))
#else
# define ISGRAPH(c) (ISASCII (c) && isprint (c) && !isspace (c))
#endif

#undef ISPRINT
#define ISPRINT(c) (ISASCII (c) && isprint (c))
#define ISDIGIT(c) (ISASCII (c) && isdigit (c))
#define ISALNUM(c) (ISASCII (c) && isalnum (c))
#define ISALPHA(c) (ISASCII (c) && isalpha (c))
#define ISCNTRL(c) (ISASCII (c) && iscntrl (c))
#define ISLOWER(c) (ISASCII (c) && islower (c))
#define ISPUNCT(c) (ISASCII (c) && ispunct (c))
#define ISSPACE(c) (ISASCII (c) && isspace (c))
#define ISUPPER(c) (ISASCII (c) && isupper (c))
#define ISXDIGIT(c) (ISASCII (c) && isxdigit (c))

#ifndef NULL
# define NULL (void *)0
#endif

/* We remove any previous definition of `SIGN_EXTEND_CHAR',
   since ours (we hope) works properly with all combinations of
   machines, compilers, `char' and `unsigned char' argument types.
   (Per Bothner suggested the basic approach.)  */
#undef SIGN_EXTEND_CHAR
#if __STDC__
# define SIGN_EXTEND_CHAR(c) ((signed char) (c))
#else  /* not __STDC__ */
/* As in Harbison and Steele.  */
# define SIGN_EXTEND_CHAR(c) ((((unsigned char) (c)) ^ 128) - 128)
#endif

#ifndef emacs
/* How many characters in the character set.  */
#define CHAR_SET_SIZE 256

#ifdef SYNTAX_TABLE

extern char *re_syntax_table;

#else /* not SYNTAX_TABLE */

static char re_syntax_table[CHAR_SET_SIZE];

static void
init_syntax_once ()
{
    register int c;
    static int done = 0;

    if (done)
	return;
    bzero (re_syntax_table, sizeof re_syntax_table);

#ifndef FAULTY_F_KP_3
    for (c = 0; c < CHAR_SET_SIZE; c++)

	if (ISALNUM (c))
#else
	if (ISALNUM (c++))
#endif

	    re_syntax_table[c] = Sword;

    re_syntax_table['_'] = Sword;

    done = 1;
}

#endif /* not SYNTAX_TABLE */

#define SYNTAX(c) re_syntax_table[((c) & 0xFF)]

#endif /* emacs */

/* Should we use malloc or alloca?  If REGEX_MALLOC is not defined, we
   use `alloca' instead of `malloc'.  This is because using malloc in
   re_search* or re_match* could cause memory leaks when C-g is used in
   Emacs; also, malloc is slower and causes storage fragmentation.  On
   the other hand, malloc is more portable, and easier to debug.

   Because we sometimes use alloca, some routines have to be macros,
   not functions -- `alloca'-allocated space disappears at the end of the
   function it is called in.  */

#ifdef REGEX_MALLOC

# define REGEX_ALLOCATE malloc
# define REGEX_REALLOCATE(source, osize, nsize) realloc (source, nsize)
# define REGEX_FREE free

#else /* not REGEX_MALLOC  */

/* Emacs already defines alloca, sometimes.  */
# ifndef alloca

/* Make alloca work the best possible way.  */
#  ifdef __GNUC__
#   define alloca __builtin_alloca
#  else /* not __GNUC__ */
#   if HAVE_ALLOCA_H
#    include <alloca.h>
#   endif /* HAVE_ALLOCA_H */
#  endif /* not __GNUC__ */

# endif /* not alloca */

# define REGEX_ALLOCATE alloca

/* Assumes a `char *destination' variable.  */
# define REGEX_REALLOCATE(source, osize, nsize)				\
  (destination = (char *) alloca (nsize),				\
   memcpy (destination, source, osize))

/* No need to do anything to free, after alloca.  */
# define REGEX_FREE(arg) ((void)0) /* Do nothing!  But inhibit gcc warning.  */

#endif /* not REGEX_MALLOC */

/* Define how to allocate the failure stack.  */

#if defined REL_ALLOC && defined REGEX_MALLOC

# define REGEX_ALLOCATE_STACK(size)				\
  r_alloc (&failure_stack_ptr, (size))
# define REGEX_REALLOCATE_STACK(source, osize, nsize)		\
  r_re_alloc (&failure_stack_ptr, (nsize))
# define REGEX_FREE_STACK(ptr)					\
  r_alloc_free (&failure_stack_ptr)

#else /* not using relocating allocator */

# ifdef REGEX_MALLOC

#  define REGEX_ALLOCATE_STACK malloc
#  define REGEX_REALLOCATE_STACK(source, osize, nsize) realloc (source, nsize)
#  define REGEX_FREE_STACK free

# else /* not REGEX_MALLOC */

#  define REGEX_ALLOCATE_STACK alloca

#  define REGEX_REALLOCATE_STACK(source, osize, nsize)			\
   REGEX_REALLOCATE (source, osize, nsize)
/* No need to explicitly free anything.  */
#  define REGEX_FREE_STACK(arg)

# endif /* not REGEX_MALLOC */
#endif /* not using relocating allocator */


/* True if `size1' is non-NULL and PTR is pointing anywhere inside
   `string1' or just past its end.  This works if PTR is NULL, which is
   a good thing.  */
#define FIRST_STRING_P(ptr) 					\
  (size1 && string1 <= (ptr) && (ptr) <= string1 + size1)

/* (Re)Allocate N items of type T using malloc, or fail.  */
#define TALLOC(n, t) ((t *) malloc ((n) * sizeof (t)))
#define RETALLOC(addr, n, t) ((addr) = (t *) realloc (addr, (n) * sizeof (t)))
#define RETALLOC_IF(addr, n, t) \
  if (addr) RETALLOC((addr), (n), t); else (addr) = TALLOC ((n), t)
#define REGEX_TALLOC(n, t) ((t *) REGEX_ALLOCATE ((n) * sizeof (t)))

#define BYTEWIDTH 8 /* In bits.  */

#define STREQ(s1, s2) ((strcmp (s1, s2) == 0))

#undef MAX
#undef MIN
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

typedef char boolean;
#define false 0
#define true 1

static int re_match_2_internal PARAMS ((struct re_pattern_buffer *bufp,
					const char *string1, int size1,
					const char *string2, int size2,
					int pos,
					struct re_registers *regs,
					int stop));

/* These are the command codes that appear in compiled regular
   expressions.  Some opcodes are followed by argument bytes.  A
   command code can specify any interpretation whatsoever for its
   arguments.  Zero bytes may appear in the compiled regular expression.  */

typedef enum
{
  no_op = 0,

  /* Succeed right away--no more backtracking.  */
  succeed,

        /* Followed by one byte giving n, then by n literal bytes.  */
  exactn,

        /* Matches any (more or less) character.  */
  anychar,

        /* Matches any one char belonging to specified set.  First
           following byte is number of bitmap bytes.  Then come bytes
           for a bitmap saying which chars are in.  Bits in each byte
           are ordered low-bit-first.  A character is in the set if its
           bit is 1.  A character too large to have a bit in the map is
           automatically not in the set.  */
  charset,

        /* Same parameters as charset, but match any character that is
           not one of those specified.  */
  charset_not,

        /* Start remembering the text that is matched, for storing in a
           register.  Followed by one byte with the register number, in
           the range 0 to one less than the pattern buffer's re_nsub
           field.  Then followed by one byte with the number of groups
           inner to this one.  (This last has to be part of the
           start_memory only because we need it in the on_failure_jump
           of re_match_2.)  */
  start_memory,

        /* Stop remembering the text that is matched and store it in a
           memory register.  Followed by one byte with the register
           number, in the range 0 to one less than `re_nsub' in the
           pattern buffer, and one byte with the number of inner groups,
           just like `start_memory'.  (We need the number of inner
           groups here because we don't have any easy way of finding the
           corresponding start_memory when we're at a stop_memory.)  */
  stop_memory,

        /* Match a duplicate of something remembered. Followed by one
           byte containing the register number.  */
  duplicate,

        /* Fail unless at beginning of line.  */
  begline,

        /* Fail unless at end of line.  */
  endline,

        /* Succeeds if at beginning of buffer (if emacs) or at beginning
           of string to be matched (if not).  */
  begbuf,

        /* Analogously, for end of buffer/string.  */
  endbuf,

        /* Followed by two byte relative address to which to jump.  */
  jump,

	/* Same as jump, but marks the end of an alternative.  */
  jump_past_alt,

        /* Followed by two-byte relative address of place to resume at
           in case of failure.  */
  on_failure_jump,

        /* Like on_failure_jump, but pushes a placeholder instead of the
           current string position when executed.  */
  on_failure_keep_string_jump,

        /* Throw away latest failure point and then jump to following
           two-byte relative address.  */
  pop_failure_jump,

        /* Change to pop_failure_jump if know won't have to backtrack to
           match; otherwise change to jump.  This is used to jump
           back to the beginning of a repeat.  If what follows this jump
           clearly won't match what the repeat does, such that we can be
           sure that there is no use backtracking out of repetitions
           already matched, then we change it to a pop_failure_jump.
           Followed by two-byte address.  */
  maybe_pop_jump,

        /* Jump to following two-byte address, and push a dummy failure
           point. This failure point will be thrown away if an attempt
           is made to use it for a failure.  A `+' construct makes this
           before the first repeat.  Also used as an intermediary kind
           of jump when compiling an alternative.  */
  dummy_failure_jump,

	/* Push a dummy failure point and continue.  Used at the end of
	   alternatives.  */
  push_dummy_failure,

        /* Followed by two-byte relative address and two-byte number n.
           After matching N times, jump to the address upon failure.  */
  succeed_n,

        /* Followed by two-byte relative address, and two-byte number n.
           Jump to the address N times, then fail.  */
  jump_n,

        /* Set the following two-byte relative address to the
           subsequent two-byte number.  The address *includes* the two
           bytes of number.  */
  set_number_at,

  wordchar,	/* Matches any word-constituent character.  */
  notwordchar,	/* Matches any char that is not a word-constituent.  */

  wordbeg,	/* Succeeds if at word beginning.  */
  wordend,	/* Succeeds if at word end.  */

  wordbound,	/* Succeeds if at a word boundary.  */
  notwordbound	/* Succeeds if not at a word boundary.  */

#ifdef emacs
  ,before_dot,	/* Succeeds if before point.  */
  at_dot,	/* Succeeds if at point.  */
  after_dot,	/* Succeeds if after point.  */

	/* Matches any character whose syntax is specified.  Followed by
           a byte which contains a syntax code, e.g., Sword.  */
  syntaxspec,

	/* Matches any character whose syntax is not that specified.  */
  notsyntaxspec
#endif /* emacs */
} re_opcode_t;

/* Common operations on the compiled pattern.  */

/* Store NUMBER in two contiguous bytes starting at DESTINATION.  */

#define STORE_NUMBER(destination, number)				\
  do {									\
    (destination)[0] = (number) & 0377;					\
    (destination)[1] = (number) >> 8;					\
  } while (0)

/* Same as STORE_NUMBER, except increment DESTINATION to
   the byte after where the number is stored.  Therefore, DESTINATION
   must be an lvalue.  */

#define STORE_NUMBER_AND_INCR(destination, number)			\
  do {									\
    STORE_NUMBER (destination, number);					\
    (destination) += 2;							\
  } while (0)

/* Put into DESTINATION a number stored in two contiguous bytes starting
   at SOURCE.  */

#define EXTRACT_NUMBER(destination, source)				\
  do {									\
    (destination) = *(source) & 0377;					\
    (destination) += SIGN_EXTEND_CHAR (*((source) + 1)) << 8;		\
  } while (0)

#ifdef DEBUG
static void extract_number _RE_ARGS ((int *dest, unsigned char *source));
static void
extract_number (dest, source)
    int *dest;
    unsigned char *source;
{
  int temp = SIGN_EXTEND_CHAR (*(source + 1));
  *dest = *source & 0377;
  *dest += temp << 8;
}

# ifndef EXTRACT_MACROS /* To debug the macros.  */
#  undef EXTRACT_NUMBER
#  define EXTRACT_NUMBER(dest, src) extract_number (&dest, src)
# endif /* not EXTRACT_MACROS */

#endif /* DEBUG */

/* Same as EXTRACT_NUMBER, except increment SOURCE to after the number.
   SOURCE must be an lvalue.  */

#define EXTRACT_NUMBER_AND_INCR(destination, source)			\
  do {									\
    EXTRACT_NUMBER (destination, source);				\
    (source) += 2; 							\
  } while (0)

#ifdef DEBUG
static void extract_number_and_incr _RE_ARGS ((int *destination,
					       unsigned char **source));
static void
extract_number_and_incr (destination, source)
    int *destination;
    unsigned char **source;
{
  extract_number (destination, *source);
  *source += 2;
}

# ifndef EXTRACT_MACROS
#  undef EXTRACT_NUMBER_AND_INCR
#  define EXTRACT_NUMBER_AND_INCR(dest, src) \
  extract_number_and_incr (&dest, &src)
# endif /* not EXTRACT_MACROS */

#endif /* DEBUG */

/* If DEBUG is defined, Regex prints many voluminous messages about what
   it is doing (if the variable `debug' is nonzero).  If linked with the
   main program in `iregex.c', you can enter patterns and strings
   interactively.  And if linked with the main program in `main.c' and
   the other test files, you can run the already-written tests.  */

#ifdef DEBUG

/* We use standard I/O for debugging.  */
/*# include <stdio.h>*/

/* It is useful to test things that ``must'' be true when debugging.  */
/*# include <assert.h>*/

static int debug;

# define DEBUG_STATEMENT(e) e
# define DEBUG_PRINT1(x) if (debug) printf (x)
# define DEBUG_PRINT2(x1, x2) if (debug) printf (x1, x2)
# define DEBUG_PRINT3(x1, x2, x3) if (debug) printf (x1, x2, x3)
# define DEBUG_PRINT4(x1, x2, x3, x4) if (debug) printf (x1, x2, x3, x4)
# define DEBUG_PRINT_COMPILED_PATTERN(p, s, e) 				\
  if (debug) print_partial_compiled_pattern (s, e)
# define DEBUG_PRINT_DOUBLE_STRING(w, s1, sz1, s2, sz2)			\
  if (debug) print_double_string (w, s1, sz1, s2, sz2)


/* Print the fastmap in human-readable form.  */

void
print_fastmap (fastmap)
    char *fastmap;
{
  unsigned was_a_range = 0;
  unsigned i = 0;

  while (i < (1 << BYTEWIDTH))
    {
      if (fastmap[i++])
	{
	  was_a_range = 0;
          putchar (i - 1);
          while (i < (1 << BYTEWIDTH)  &&  fastmap[i])
            {
              was_a_range = 1;
              i++;
            }
	  if (was_a_range)
            {
              printf ("-");
              putchar (i - 1);
            }
        }
    }
  putchar ('\n');
}


/* Print a compiled pattern string in human-readable form, starting at
   the START pointer into it and ending just before the pointer END.  */

void
print_partial_compiled_pattern (start, end)
    unsigned char *start;
    unsigned char *end;
{
  int mcnt, mcnt2;
  unsigned char *p1;
  unsigned char *p = start;
  unsigned char *pend = end;

  if (start == NULL)
    {
      printf ("(null)\n");
      return;
    }

  /* Loop over pattern commands.  */
  while (p < pend)
    {
      printf ("%d:\t", p - start);

      switch ((re_opcode_t) *p++)
	{
        case no_op:
          printf ("/no_op");
          break;

	case exactn:
	  mcnt = *p++;
          printf ("/exactn/%d", mcnt);
          do
	    {
              putchar ('/');
	      putchar (*p++);
            }
          while (--mcnt);
          break;

	case start_memory:
          mcnt = *p++;
          printf ("/start_memory/%d/%d", mcnt, *p++);
          break;

	case stop_memory:
          mcnt = *p++;
	  printf ("/stop_memory/%d/%d", mcnt, *p++);
          break;

	case duplicate:
	  printf ("/duplicate/%d", *p++);
	  break;

	case anychar:
	  printf ("/anychar");
	  break;

	case charset:
        case charset_not:
          {
            register int c, last = -100;
	    register int in_range = 0;

	    printf ("/charset [%s",
	            (re_opcode_t) *(p - 1) == charset_not ? "^" : "");

            assert (p + *p < pend);

            for (c = 0; c < 256; c++)
	      if (c / 8 < *p
		  && (p[1 + (c/8)] & (1 << (c % 8))))
		{
		  /* Are we starting a range?  */
		  if (last + 1 == c && ! in_range)
		    {
		      putchar ('-');
		      in_range = 1;
		    }
		  /* Have we broken a range?  */
		  else if (last + 1 != c && in_range)
              {
		      putchar (last);
		      in_range = 0;
		    }

		  if (! in_range)
		    putchar (c);

		  last = c;
              }

	    if (in_range)
	      putchar (last);

	    putchar (']');

	    p += 1 + *p;
	  }
	  break;

	case begline:
	  printf ("/begline");
          break;

	case endline:
          printf ("/endline");
          break;

	case on_failure_jump:
          extract_number_and_incr (&mcnt, &p);
  	  printf ("/on_failure_jump to %d", p + mcnt - start);
          break;

	case on_failure_keep_string_jump:
          extract_number_and_incr (&mcnt, &p);
  	  printf ("/on_failure_keep_string_jump to %d", p + mcnt - start);
          break;

	case dummy_failure_jump:
          extract_number_and_incr (&mcnt, &p);
  	  printf ("/dummy_failure_jump to %d", p + mcnt - start);
          break;

	case push_dummy_failure:
          printf ("/push_dummy_failure");
          break;

        case maybe_pop_jump:
          extract_number_and_incr (&mcnt, &p);
  	  printf ("/maybe_pop_jump to %d", p + mcnt - start);
	  break;

        case pop_failure_jump:
	  extract_number_and_incr (&mcnt, &p);
  	  printf ("/pop_failure_jump to %d", p + mcnt - start);
	  break;

        case jump_past_alt:
	  extract_number_and_incr (&mcnt, &p);
  	  printf ("/jump_past_alt to %d", p + mcnt - start);
	  break;

        case jump:
	  extract_number_and_incr (&mcnt, &p);
  	  printf ("/jump to %d", p + mcnt - start);
	  break;

        case succeed_n:
          extract_number_and_incr (&mcnt, &p);
	  p1 = p + mcnt;
          extract_number_and_incr (&mcnt2, &p);
	  printf ("/succeed_n to %d, %d times", p1 - start, mcnt2);
          break;

        case jump_n:
          extract_number_and_incr (&mcnt, &p);
	  p1 = p + mcnt;
          extract_number_and_incr (&mcnt2, &p);
	  printf ("/jump_n to %d, %d times", p1 - start, mcnt2);
          break;

        case set_number_at:
          extract_number_and_incr (&mcnt, &p);
	  p1 = p + mcnt;
          extract_number_and_incr (&mcnt2, &p);
	  printf ("/set_number_at location %d to %d", p1 - start, mcnt2);
          break;

        case wordbound:
	  printf ("/wordbound");
	  break;

	case notwordbound:
	  printf ("/notwordbound");
          break;

	case wordbeg:
	  printf ("/wordbeg");
	  break;

	case wordend:
	  printf ("/wordend");

# ifdef emacs
	case before_dot:
	  printf ("/before_dot");
          break;

	case at_dot:
	  printf ("/at_dot");
          break;

	case after_dot:
	  printf ("/after_dot");
          break;

	case syntaxspec:
          printf ("/syntaxspec");
	  mcnt = *p++;
	  printf ("/%d", mcnt);
          break;

	case notsyntaxspec:
          printf ("/notsyntaxspec");
	  mcnt = *p++;
	  printf ("/%d", mcnt);
	  break;
# endif /* emacs */

	case wordchar:
	  printf ("/wordchar");
          break;

	case notwordchar:
	  printf ("/notwordchar");
          break;

	case begbuf:
	  printf ("/begbuf");
          break;

	case endbuf:
	  printf ("/endbuf");
          break;

        default:
          printf ("?%d", *(p-1));
	}

      putchar ('\n');
    }

  printf ("%d:\tend of pattern.\n", p - start);
}


void
print_compiled_pattern (bufp)
    struct re_pattern_buffer *bufp;
{
  unsigned char *buffer = bufp->buffer;

  print_partial_compiled_pattern (buffer, buffer + bufp->used);
  printf ("%ld bytes used/%ld bytes allocated.\n",
	  bufp->used, bufp->allocated);

  if (bufp->fastmap_accurate && bufp->fastmap)
    {
      printf ("fastmap: ");
      print_fastmap (bufp->fastmap);
    }

  printf ("re_nsub: %d\t", bufp->re_nsub);
  printf ("regs_alloc: %d\t", bufp->regs_allocated);
  printf ("can_be_null: %d\t", bufp->can_be_null);
  printf ("newline_anchor: %d\n", bufp->newline_anchor);
  printf ("no_sub: %d\t", bufp->no_sub);
  printf ("not_bol: %d\t", bufp->not_bol);
  printf ("not_eol: %d\t", bufp->not_eol);
  printf ("syntax: %lx\n", bufp->syntax);
  /* Perhaps we should print the translate table?  */
}


void
print_double_string (where, string1, size1, string2, size2)
    const char *where;
    const char *string1;
    const char *string2;
    int size1;
    int size2;
{
  int this_char;

  if (where == NULL)
    printf ("(null)");
  else
    {
      if (FIRST_STRING_P (where))
        {
          for (this_char = where - string1; this_char < size1; this_char++)
            putchar (string1[this_char]);

          where = string2;
        }

      for (this_char = where - string2; this_char < size2; this_char++)
        putchar (string2[this_char]);
    }
}

void
printchar (c)
     int c;
{
  putc (c, stderr);
}

#else /* not DEBUG */

# undef assert
# define assert(e)

# define DEBUG_STATEMENT(e)
# define DEBUG_PRINT1(x)
# define DEBUG_PRINT2(x1, x2)
# define DEBUG_PRINT3(x1, x2, x3)
# define DEBUG_PRINT4(x1, x2, x3, x4)
# define DEBUG_PRINT_COMPILED_PATTERN(p, s, e)
# define DEBUG_PRINT_DOUBLE_STRING(w, s1, sz1, s2, sz2)

#endif /* not DEBUG */

/* Set by `re_set_syntax' to the current regexp syntax to recognize.  Can
   also be assigned to arbitrarily: each pattern buffer stores its own
   syntax, so it can be changed between regex compilations.  */
/* This has no initializer because initialized variables in Emacs
   become read-only after dumping.  */
reg_syntax_t re_syntax_options;


/* Specify the precise syntax of regexps for compilation.  This provides
   for compatibility for various utilities which historically have
   different, incompatible syntaxes.

   The argument SYNTAX is a bit mask comprised of the various bits
   defined in regex.h.  We return the old syntax.  */

reg_syntax_t
re_set_syntax (syntax)
    reg_syntax_t syntax;
{
  reg_syntax_t ret = re_syntax_options;

  re_syntax_options = syntax;
#ifdef DEBUG
  if (syntax & RE_DEBUG)
    debug = 1;
  else if (debug) /* was on but now is not */
    debug = 0;
#endif /* DEBUG */
  return ret;
}
#ifdef _LIBC
weak_alias (__re_set_syntax, re_set_syntax)
#endif

/* This table gives an error message for each of the error codes listed
   in regex.h.  Obviously the order here has to be same as there.
   POSIX doesn't require that we do anything for REG_NOERROR,
   but why not be nice?  */

static const char *re_error_msgid[] =
  {
    gettext_noop ("Success"),	/* REG_NOERROR */
    gettext_noop ("No match"),	/* REG_NOMATCH */
    gettext_noop ("Invalid regular expression"), /* REG_BADPAT */
    gettext_noop ("Invalid collation character"), /* REG_ECOLLATE */
    gettext_noop ("Invalid character class name"), /* REG_ECTYPE */
    gettext_noop ("Trailing backslash"), /* REG_EESCAPE */
    gettext_noop ("Invalid back reference"), /* REG_ESUBREG */
    gettext_noop ("Unmatched [ or [^"),	/* REG_EBRACK */
    gettext_noop ("Unmatched ( or \\("), /* REG_EPAREN */
    gettext_noop ("Unmatched \\{"), /* REG_EBRACE */
    gettext_noop ("Invalid content of \\{\\}"), /* REG_BADBR */
    gettext_noop ("Invalid range end"),	/* REG_ERANGE */
    gettext_noop ("Memory exhausted"), /* REG_ESPACE */
    gettext_noop ("Invalid preceding regular expression"), /* REG_BADRPT */
    gettext_noop ("Premature end of regular expression"), /* REG_EEND */
    gettext_noop ("Regular expression too big"), /* REG_ESIZE */
    gettext_noop ("Unmatched ) or \\)"), /* REG_ERPAREN */
  };

/* Avoiding alloca during matching, to placate r_alloc.  */

/* Define MATCH_MAY_ALLOCATE unless we need to make sure that the
   searching and matching functions should not call alloca.  On some
   systems, alloca is implemented in terms of malloc, and if we're
   using the relocating allocator routines, then malloc could cause a
   relocation, which might (if the strings being searched are in the
   ralloc heap) shift the data out from underneath the regexp
   routines.

   Here's another reason to avoid allocation: Emacs
   processes input from X in a signal handler; processing X input may
   call malloc; if input arrives while a matching routine is calling
   malloc, then we're scrod.  But Emacs can't just block input while
   calling matching routines; then we don't notice interrupts when
   they come in.  So, Emacs blocks input around all regexp calls
   except the matching calls, which it leaves unprotected, in the
   faith that they will not malloc.  */

/* Normally, this is fine.  */
#define MATCH_MAY_ALLOCATE

/* When using GNU C, we are not REALLY using the C alloca, no matter
   what config.h may say.  So don't take precautions for it.  */
#ifdef __GNUC__
# undef C_ALLOCA
#endif

/* The match routines may not allocate if (1) they would do it with malloc
   and (2) it's not safe for them to use malloc.
   Note that if REL_ALLOC is defined, matching would not use malloc for the
   failure stack, but we would still use it for the register vectors;
   so REL_ALLOC should not affect this.  */
#if (defined C_ALLOCA || defined REGEX_MALLOC) && defined emacs
# undef MATCH_MAY_ALLOCATE
#endif


/* Failure stack declarations and macros; both re_compile_fastmap and
   re_match_2 use a failure stack.  These have to be macros because of
   REGEX_ALLOCATE_STACK.  */


/* Number of failure points for which to initially allocate space
   when matching.  If this number is exceeded, we allocate more
   space, so it is not a hard limit.  */
#ifndef INIT_FAILURE_ALLOC
# define INIT_FAILURE_ALLOC 5
#endif

/* Roughly the maximum number of failure points on the stack.  Would be
   exactly that if always used MAX_FAILURE_ITEMS items each time we failed.
   This is a variable only so users of regex can assign to it; we never
   change it ourselves.  */

#ifdef INT_IS_16BIT

# if defined MATCH_MAY_ALLOCATE
/* 4400 was enough to cause a crash on Alpha OSF/1,
   whose default stack limit is 2mb.  */
long int re_max_failures = 4000;
# else
long int re_max_failures = 2000;
# endif

union fail_stack_elt
{
  unsigned char *pointer;
  long int integer;
};

typedef union fail_stack_elt fail_stack_elt_t;

typedef struct
{
  fail_stack_elt_t *stack;
  unsigned long int size;
  unsigned long int avail;		/* Offset of next open position.  */
} fail_stack_type;

#else /* not INT_IS_16BIT */

# if defined MATCH_MAY_ALLOCATE
/* 4400 was enough to cause a crash on Alpha OSF/1,
   whose default stack limit is 2mb.  */
int re_max_failures = 20000;
# else
int re_max_failures = 2000;
# endif

union fail_stack_elt
{
  unsigned char *pointer;
  int integer;
};

typedef union fail_stack_elt fail_stack_elt_t;

typedef struct
{
  fail_stack_elt_t *stack;
  unsigned size;
  unsigned avail;			/* Offset of next open position.  */
} fail_stack_type;

#endif /* INT_IS_16BIT */

#define FAIL_STACK_EMPTY()     (fail_stack.avail == 0)
#define FAIL_STACK_PTR_EMPTY() (fail_stack_ptr->avail == 0)
#define FAIL_STACK_FULL()      (fail_stack.avail == fail_stack.size)


/* Define macros to initialize and free the failure stack.
   Do `return -2' if the alloc fails.  */

#ifdef MATCH_MAY_ALLOCATE
# define INIT_FAIL_STACK()						\
  do {									\
    fail_stack.stack = (fail_stack_elt_t *)				\
      REGEX_ALLOCATE_STACK (INIT_FAILURE_ALLOC * sizeof (fail_stack_elt_t)); \
									\
    if (fail_stack.stack == NULL)					\
      return -2;							\
									\
    fail_stack.size = INIT_FAILURE_ALLOC;				\
    fail_stack.avail = 0;						\
  } while (0)

# define RESET_FAIL_STACK()  REGEX_FREE_STACK (fail_stack.stack)
#else
# define INIT_FAIL_STACK()						\
  do {									\
    fail_stack.avail = 0;						\
  } while (0)

# define RESET_FAIL_STACK()
#endif


/* Double the size of FAIL_STACK, up to approximately `re_max_failures' items.

   Return 1 if succeeds, and 0 if either ran out of memory
   allocating space for it or it was already too large.

   REGEX_REALLOCATE_STACK requires `destination' be declared.   */

#define DOUBLE_FAIL_STACK(fail_stack)					\
  ((fail_stack).size > (unsigned) (re_max_failures * MAX_FAILURE_ITEMS)	\
   ? 0									\
   : ((fail_stack).stack = (fail_stack_elt_t *)				\
        REGEX_REALLOCATE_STACK ((fail_stack).stack, 			\
          (fail_stack).size * sizeof (fail_stack_elt_t),		\
          ((fail_stack).size << 1) * sizeof (fail_stack_elt_t)),	\
									\
      (fail_stack).stack == NULL					\
      ? 0								\
      : ((fail_stack).size <<= 1, 					\
         1)))


/* Push pointer POINTER on FAIL_STACK.
   Return 1 if was able to do so and 0 if ran out of memory allocating
   space to do so.  */
#define PUSH_PATTERN_OP(POINTER, FAIL_STACK)				\
  ((FAIL_STACK_FULL ()							\
    && !DOUBLE_FAIL_STACK (FAIL_STACK))					\
   ? 0									\
   : ((FAIL_STACK).stack[(FAIL_STACK).avail++].pointer = POINTER,	\
      1))

/* Push a pointer value onto the failure stack.
   Assumes the variable `fail_stack'.  Probably should only
   be called from within `PUSH_FAILURE_POINT'.  */
#define PUSH_FAILURE_POINTER(item)					\
  fail_stack.stack[fail_stack.avail++].pointer = (unsigned char *) (item)

/* This pushes an integer-valued item onto the failure stack.
   Assumes the variable `fail_stack'.  Probably should only
   be called from within `PUSH_FAILURE_POINT'.  */
#define PUSH_FAILURE_INT(item)					\
  fail_stack.stack[fail_stack.avail++].integer = (item)

/* Push a fail_stack_elt_t value onto the failure stack.
   Assumes the variable `fail_stack'.  Probably should only
   be called from within `PUSH_FAILURE_POINT'.  */
#define PUSH_FAILURE_ELT(item)					\
  fail_stack.stack[fail_stack.avail++] =  (item)

/* These three POP... operations complement the three PUSH... operations.
   All assume that `fail_stack' is nonempty.  */
#define POP_FAILURE_POINTER() fail_stack.stack[--fail_stack.avail].pointer
#define POP_FAILURE_INT() fail_stack.stack[--fail_stack.avail].integer
#define POP_FAILURE_ELT() fail_stack.stack[--fail_stack.avail]

/* Used to omit pushing failure point id's when we're not debugging.  */
#ifdef DEBUG
# define DEBUG_PUSH PUSH_FAILURE_INT
# define DEBUG_POP(item_addr) *(item_addr) = POP_FAILURE_INT ()
#else
# define DEBUG_PUSH(item)
# define DEBUG_POP(item_addr)
#endif


/* Push the information about the state we will need
   if we ever fail back to it.

   Requires variables fail_stack, regstart, regend, reg_info, and
   num_regs_pushed be declared.  DOUBLE_FAIL_STACK requires `destination'
   be declared.

   Does `return FAILURE_CODE' if runs out of memory.  */

#define PUSH_FAILURE_POINT(pattern_place, string_place, failure_code)	\
  do {									\
    char *destination;							\
    /* Must be int, so when we don't save any registers, the arithmetic	\
       of 0 + -1 isn't done as unsigned.  */				\
    /* Can't be int, since there is not a shred of a guarantee that int	\
       is wide enough to hold a value of something to which pointer can	\
       be assigned */							\
    active_reg_t this_reg;						\
    									\
    DEBUG_STATEMENT (failure_id++);					\
    DEBUG_STATEMENT (nfailure_points_pushed++);				\
    DEBUG_PRINT2 ("\nPUSH_FAILURE_POINT #%u:\n", failure_id);		\
    DEBUG_PRINT2 ("  Before push, next avail: %d\n", (fail_stack).avail);\
    DEBUG_PRINT2 ("                     size: %d\n", (fail_stack).size);\
									\
    DEBUG_PRINT2 ("  slots needed: %ld\n", NUM_FAILURE_ITEMS);		\
    DEBUG_PRINT2 ("     available: %d\n", REMAINING_AVAIL_SLOTS);	\
									\
    /* Ensure we have enough space allocated for what we will push.  */	\
    while (REMAINING_AVAIL_SLOTS < NUM_FAILURE_ITEMS)			\
      {									\
        if (!DOUBLE_FAIL_STACK (fail_stack))				\
          return failure_code;						\
									\
        DEBUG_PRINT2 ("\n  Doubled stack; size now: %d\n",		\
		       (fail_stack).size);				\
        DEBUG_PRINT2 ("  slots available: %d\n", REMAINING_AVAIL_SLOTS);\
      }									\
									\
    /* Push the info, starting with the registers.  */			\
    DEBUG_PRINT1 ("\n");						\
									\
    if (1)								\
      for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; \
	   this_reg++)							\
	{								\
	  DEBUG_PRINT2 ("  Pushing reg: %lu\n", this_reg);		\
	  DEBUG_STATEMENT (num_regs_pushed++);				\
									\
	  DEBUG_PRINT2 ("    start: %p\n", regstart[this_reg]);		\
	  PUSH_FAILURE_POINTER (regstart[this_reg]);			\
									\
	  DEBUG_PRINT2 ("    end: %p\n", regend[this_reg]);		\
	  PUSH_FAILURE_POINTER (regend[this_reg]);			\
									\
	  DEBUG_PRINT2 ("    info: %p\n      ",				\
			reg_info[this_reg].word.pointer);		\
	  DEBUG_PRINT2 (" match_null=%d",				\
			REG_MATCH_NULL_STRING_P (reg_info[this_reg]));	\
	  DEBUG_PRINT2 (" active=%d", IS_ACTIVE (reg_info[this_reg]));	\
	  DEBUG_PRINT2 (" matched_something=%d",			\
			MATCHED_SOMETHING (reg_info[this_reg]));	\
	  DEBUG_PRINT2 (" ever_matched=%d",				\
			EVER_MATCHED_SOMETHING (reg_info[this_reg]));	\
	  DEBUG_PRINT1 ("\n");						\
	  PUSH_FAILURE_ELT (reg_info[this_reg].word);			\
	}								\
									\
    DEBUG_PRINT2 ("  Pushing  low active reg: %ld\n", lowest_active_reg);\
    PUSH_FAILURE_INT (lowest_active_reg);				\
									\
    DEBUG_PRINT2 ("  Pushing high active reg: %ld\n", highest_active_reg);\
    PUSH_FAILURE_INT (highest_active_reg);				\
									\
    DEBUG_PRINT2 ("  Pushing pattern %p:\n", pattern_place);		\
    DEBUG_PRINT_COMPILED_PATTERN (bufp, pattern_place, pend);		\
    PUSH_FAILURE_POINTER (pattern_place);				\
									\
    DEBUG_PRINT2 ("  Pushing string %p: `", string_place);		\
    DEBUG_PRINT_DOUBLE_STRING (string_place, string1, size1, string2,   \
				 size2);				\
    DEBUG_PRINT1 ("'\n");						\
    PUSH_FAILURE_POINTER (string_place);				\
									\
    DEBUG_PRINT2 ("  Pushing failure id: %u\n", failure_id);		\
    DEBUG_PUSH (failure_id);						\
  } while (0)

/* This is the number of items that are pushed and popped on the stack
   for each register.  */
#define NUM_REG_ITEMS  3

/* Individual items aside from the registers.  */
#ifdef DEBUG
# define NUM_NONREG_ITEMS 5 /* Includes failure point id.  */
#else
# define NUM_NONREG_ITEMS 4
#endif

/* We push at most this many items on the stack.  */
/* We used to use (num_regs - 1), which is the number of registers
   this regexp will save; but that was changed to 5
   to avoid stack overflow for a regexp with lots of parens.  */
#define MAX_FAILURE_ITEMS (5 * NUM_REG_ITEMS + NUM_NONREG_ITEMS)

/* We actually push this many items.  */
#define NUM_FAILURE_ITEMS				\
  (((0							\
     ? 0 : highest_active_reg - lowest_active_reg + 1)	\
    * NUM_REG_ITEMS)					\
   + NUM_NONREG_ITEMS)

/* How many items can still be added to the stack without overflowing it.  */
#define REMAINING_AVAIL_SLOTS ((fail_stack).size - (fail_stack).avail)


/* Pops what PUSH_FAIL_STACK pushes.

   We restore into the parameters, all of which should be lvalues:
     STR -- the saved data position.
     PAT -- the saved pattern position.
     LOW_REG, HIGH_REG -- the highest and lowest active registers.
     REGSTART, REGEND -- arrays of string positions.
     REG_INFO -- array of information about each subexpression.

   Also assumes the variables `fail_stack' and (if debugging), `bufp',
   `pend', `string1', `size1', `string2', and `size2'.  */

#define POP_FAILURE_POINT(str, pat, low_reg, high_reg, regstart, regend, reg_info)\
{									\
  DEBUG_STATEMENT (unsigned failure_id;)				\
  active_reg_t this_reg;						\
  const unsigned char *string_temp;					\
									\
  assert (!FAIL_STACK_EMPTY ());					\
									\
  /* Remove failure points and point to how many regs pushed.  */	\
  DEBUG_PRINT1 ("POP_FAILURE_POINT:\n");				\
  DEBUG_PRINT2 ("  Before pop, next avail: %d\n", fail_stack.avail);	\
  DEBUG_PRINT2 ("                    size: %d\n", fail_stack.size);	\
									\
  assert (fail_stack.avail >= NUM_NONREG_ITEMS);			\
									\
  DEBUG_POP (&failure_id);						\
  DEBUG_PRINT2 ("  Popping failure id: %u\n", failure_id);		\
									\
  /* If the saved string location is NULL, it came from an		\
     on_failure_keep_string_jump opcode, and we want to throw away the	\
     saved NULL, thus retaining our current position in the string.  */	\
  string_temp = POP_FAILURE_POINTER ();					\
  if (string_temp != NULL)						\
    str = (const char *) string_temp;					\
									\
  DEBUG_PRINT2 ("  Popping string %p: `", str);				\
  DEBUG_PRINT_DOUBLE_STRING (str, string1, size1, string2, size2);	\
  DEBUG_PRINT1 ("'\n");							\
									\
  pat = (unsigned char *) POP_FAILURE_POINTER ();			\
  DEBUG_PRINT2 ("  Popping pattern %p:\n", pat);			\
  DEBUG_PRINT_COMPILED_PATTERN (bufp, pat, pend);			\
									\
  /* Restore register info.  */						\
  high_reg = (active_reg_t) POP_FAILURE_INT ();				\
  DEBUG_PRINT2 ("  Popping high active reg: %ld\n", high_reg);		\
									\
  low_reg = (active_reg_t) POP_FAILURE_INT ();				\
  DEBUG_PRINT2 ("  Popping  low active reg: %ld\n", low_reg);		\
									\
  if (1)								\
    for (this_reg = high_reg; this_reg >= low_reg; this_reg--)		\
      {									\
	DEBUG_PRINT2 ("    Popping reg: %ld\n", this_reg);		\
									\
	reg_info[this_reg].word = POP_FAILURE_ELT ();			\
	DEBUG_PRINT2 ("      info: %p\n",				\
		      reg_info[this_reg].word.pointer);			\
									\
	regend[this_reg] = (const char *) POP_FAILURE_POINTER ();	\
	DEBUG_PRINT2 ("      end: %p\n", regend[this_reg]);		\
									\
	regstart[this_reg] = (const char *) POP_FAILURE_POINTER ();	\
	DEBUG_PRINT2 ("      start: %p\n", regstart[this_reg]);		\
      }									\
  else									\
    {									\
      for (this_reg = highest_active_reg; this_reg > high_reg; this_reg--) \
	{								\
	  reg_info[this_reg].word.integer = 0;				\
	  regend[this_reg] = 0;						\
	  regstart[this_reg] = 0;					\
	}								\
      highest_active_reg = high_reg;					\
    }									\
									\
  set_regs_matched_done = 0;						\
  DEBUG_STATEMENT (nfailure_points_popped++);				\
} /* POP_FAILURE_POINT */



/* Structure for per-register (a.k.a. per-group) information.
   Other register information, such as the
   starting and ending positions (which are addresses), and the list of
   inner groups (which is a bits list) are maintained in separate
   variables.

   We are making a (strictly speaking) nonportable assumption here: that
   the compiler will pack our bit fields into something that fits into
   the type of `word', i.e., is something that fits into one item on the
   failure stack.  */


/* Declarations and macros for re_match_2.  */

typedef union
{
  fail_stack_elt_t word;
  struct
  {
      /* This field is one if this group can match the empty string,
         zero if not.  If not yet determined,  `MATCH_NULL_UNSET_VALUE'.  */
#define MATCH_NULL_UNSET_VALUE 3
    unsigned match_null_string_p : 2;
    unsigned is_active : 1;
    unsigned matched_something : 1;
    unsigned ever_matched_something : 1;
  } bits;
} register_info_type;

#define REG_MATCH_NULL_STRING_P(R)  ((R).bits.match_null_string_p)
#define IS_ACTIVE(R)  ((R).bits.is_active)
#define MATCHED_SOMETHING(R)  ((R).bits.matched_something)
#define EVER_MATCHED_SOMETHING(R)  ((R).bits.ever_matched_something)


/* Call this when have matched a real character; it sets `matched' flags
   for the subexpressions which we are currently inside.  Also records
   that those subexprs have matched.  */
#define SET_REGS_MATCHED()						\
  do									\
    {									\
      if (!set_regs_matched_done)					\
	{								\
	  active_reg_t r;						\
	  set_regs_matched_done = 1;					\
	  for (r = lowest_active_reg; r <= highest_active_reg; r++)	\
	    {								\
	      MATCHED_SOMETHING (reg_info[r])				\
		= EVER_MATCHED_SOMETHING (reg_info[r])			\
		= 1;							\
	    }								\
	}								\
    }									\
  while (0)

/* Registers are set to a sentinel when they haven't yet matched.  */
static char reg_unset_dummy;
#define REG_UNSET_VALUE (&reg_unset_dummy)
#define REG_UNSET(e) ((e) == REG_UNSET_VALUE)

/* Subroutine declarations and macros for regex_compile.  */

static reg_errcode_t regex_compile _RE_ARGS ((const char *pattern, size_t size,
					      reg_syntax_t syntax,
					      struct re_pattern_buffer *bufp));
static void store_op1 _RE_ARGS ((re_opcode_t op, unsigned char *loc, int arg));
static void store_op2 _RE_ARGS ((re_opcode_t op, unsigned char *loc,
				 int arg1, int arg2));
static void insert_op1 _RE_ARGS ((re_opcode_t op, unsigned char *loc,
				  int arg, unsigned char *end));
static void insert_op2 _RE_ARGS ((re_opcode_t op, unsigned char *loc,
				  int arg1, int arg2, unsigned char *end));
static boolean at_begline_loc_p _RE_ARGS ((const char *pattern, const char *p,
					   reg_syntax_t syntax));
static boolean at_endline_loc_p _RE_ARGS ((const char *p, const char *pend,
					   reg_syntax_t syntax));
static reg_errcode_t compile_range _RE_ARGS ((const char **p_ptr,
					      const char *pend,
					      char *translate,
					      reg_syntax_t syntax,
					      unsigned char *b));

/* Fetch the next character in the uncompiled pattern---translating it
   if necessary.  Also cast from a signed character in the constant
   string passed to us by the user to an unsigned char that we can use
   as an array index (in, e.g., `translate').  */
#ifndef PATFETCH
# define PATFETCH(c)							\
  do {if (p == pend) return REG_EEND;					\
    c = (unsigned char) *p++;						\
    if (translate) c = (unsigned char) translate[c];			\
  } while (0)
#endif

/* Fetch the next character in the uncompiled pattern, with no
   translation.  */
#define PATFETCH_RAW(c)							\
  do {if (p == pend) return REG_EEND;					\
    c = (unsigned char) *p++; 						\
  } while (0)

/* Go backwards one character in the pattern.  */
#define PATUNFETCH p--


/* If `translate' is non-null, return translate[D], else just D.  We
   cast the subscript to translate because some data is declared as
   `char *', to avoid warnings when a string constant is passed.  But
   when we use a character as a subscript we must make it unsigned.  */
#ifndef TRANSLATE
# define TRANSLATE(d) \
  (translate ? (char) translate[(unsigned char) (d)] : (d))
#endif


/* Macros for outputting the compiled pattern into `buffer'.  */

/* If the buffer isn't allocated when it comes in, use this.  */
#define INIT_BUF_SIZE  32

/* Make sure we have at least N more bytes of space in buffer.  */
#define GET_BUFFER_SPACE(n)						\
    while ((unsigned long) (b - bufp->buffer + (n)) > bufp->allocated)	\
      EXTEND_BUFFER ()

/* Make sure we have one more byte of buffer space and then add C to it.  */
#define BUF_PUSH(c)							\
  do {									\
    GET_BUFFER_SPACE (1);						\
    *b++ = (unsigned char) (c);						\
  } while (0)


/* Ensure we have two more bytes of buffer space and then append C1 and C2.  */
#define BUF_PUSH_2(c1, c2)						\
  do {									\
    GET_BUFFER_SPACE (2);						\
    *b++ = (unsigned char) (c1);					\
    *b++ = (unsigned char) (c2);					\
  } while (0)


/* As with BUF_PUSH_2, except for three bytes.  */
#define BUF_PUSH_3(c1, c2, c3)						\
  do {									\
    GET_BUFFER_SPACE (3);						\
    *b++ = (unsigned char) (c1);					\
    *b++ = (unsigned char) (c2);					\
    *b++ = (unsigned char) (c3);					\
  } while (0)


/* Store a jump with opcode OP at LOC to location TO.  We store a
   relative address offset by the three bytes the jump itself occupies.  */
#define STORE_JUMP(op, loc, to) \
  store_op1 (op, loc, (int) ((to) - (loc) - 3))

/* Likewise, for a two-argument jump.  */
#define STORE_JUMP2(op, loc, to, arg) \
  store_op2 (op, loc, (int) ((to) - (loc) - 3), arg)

/* Like `STORE_JUMP', but for inserting.  Assume `b' is the buffer end.  */
#define INSERT_JUMP(op, loc, to) \
  insert_op1 (op, loc, (int) ((to) - (loc) - 3), b)

/* Like `STORE_JUMP2', but for inserting.  Assume `b' is the buffer end.  */
#define INSERT_JUMP2(op, loc, to, arg) \
  insert_op2 (op, loc, (int) ((to) - (loc) - 3), arg, b)


/* This is not an arbitrary limit: the arguments which represent offsets
   into the pattern are two bytes long.  So if 2^16 bytes turns out to
   be too small, many things would have to change.  */
/* Any other compiler which, like MSC, has allocation limit below 2^16
   bytes will have to use approach similar to what was done below for
   MSC and drop MAX_BUF_SIZE a bit.  Otherwise you may end up
   reallocating to 0 bytes.  Such thing is not going to work too well.
   You have been warned!!  */
#undef   REALLOC  
#if defined _MSC_VER  && !defined WIN32
/* Microsoft C 16-bit versions limit malloc to approx 65512 bytes.
   The REALLOC define eliminates a flurry of conversion warnings,
   but is not required. */
# define MAX_BUF_SIZE  65500L
# define REALLOC(p,s) realloc ((p), (size_t) (s))
#else
# define MAX_BUF_SIZE (1L << 16)
# define REALLOC(p,s) realloc ((p), (s))
#endif

/* Extend the buffer by twice its current size via realloc and
   reset the pointers that pointed into the old block to point to the
   correct places in the new one.  If extending the buffer results in it
   being larger than MAX_BUF_SIZE, then flag memory exhausted.  */
#define EXTEND_BUFFER()							\
  do { 									\
    unsigned char *old_buffer = bufp->buffer;				\
    if (bufp->allocated == MAX_BUF_SIZE) 				\
      return REG_ESIZE;							\
    bufp->allocated <<= 1;						\
    if (bufp->allocated > MAX_BUF_SIZE)					\
      bufp->allocated = MAX_BUF_SIZE; 					\
    bufp->buffer = (unsigned char *) REALLOC (bufp->buffer, bufp->allocated);\
    if (bufp->buffer == NULL)						\
      return REG_ESPACE;						\
    /* If the buffer moved, move all the pointers into it.  */		\
    if (old_buffer != bufp->buffer)					\
      {									\
        b = (b - old_buffer) + bufp->buffer;				\
        begalt = (begalt - old_buffer) + bufp->buffer;			\
        if (fixup_alt_jump)						\
          fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;\
        if (laststart)							\
          laststart = (laststart - old_buffer) + bufp->buffer;		\
        if (pending_exact)						\
          pending_exact = (pending_exact - old_buffer) + bufp->buffer;	\
      }									\
  } while (0)


/* Since we have one byte reserved for the register number argument to
   {start,stop}_memory, the maximum number of groups we can report
   things about is what fits in that byte.  */
#define MAX_REGNUM 255

/* But patterns can have more than `MAX_REGNUM' registers.  We just
   ignore the excess.  */
typedef unsigned regnum_t;


/* Macros for the compile stack.  */

/* Since offsets can go either forwards or backwards, this type needs to
   be able to hold values from -(MAX_BUF_SIZE - 1) to MAX_BUF_SIZE - 1.  */
/* int may be not enough when sizeof(int) == 2.  */
typedef long pattern_offset_t;

typedef struct
{
  pattern_offset_t begalt_offset;
  pattern_offset_t fixup_alt_jump;
  pattern_offset_t inner_group_offset;
  pattern_offset_t laststart_offset;
  regnum_t regnum;
} compile_stack_elt_t;


typedef struct
{
  compile_stack_elt_t *stack;
  unsigned size;
  unsigned avail;			/* Offset of next open position.  */
} compile_stack_type;


#define INIT_COMPILE_STACK_SIZE 32

#define COMPILE_STACK_EMPTY  (compile_stack.avail == 0)
#define COMPILE_STACK_FULL  (compile_stack.avail == compile_stack.size)

/* The next available element.  */
#define COMPILE_STACK_TOP (compile_stack.stack[compile_stack.avail])


/* Set the bit for character C in a list.  */
#define SET_LIST_BIT(c)                               \
  (b[((unsigned char) (c)) / BYTEWIDTH]               \
   |= 1 << (((unsigned char) c) % BYTEWIDTH))


/* Get the next unsigned number in the uncompiled pattern.  */
#define GET_UNSIGNED_NUMBER(num) 					\
  { if (p != pend)							\
     {									\
       PATFETCH (c); 							\
       while (ISDIGIT (c)) 						\
         { 								\
           if (num < 0)							\
              num = 0;							\
           num = num * 10 + c - '0'; 					\
           if (p == pend) 						\
              break; 							\
           PATFETCH (c);						\
         } 								\
       } 								\
    }

#if defined _LIBC || WIDE_CHAR_SUPPORT
/* The GNU C library provides support for user-defined character classes
   and the functions from ISO C amendement 1.  */
# ifdef CHARCLASS_NAME_MAX
#  define CHAR_CLASS_MAX_LENGTH CHARCLASS_NAME_MAX
# else
/* This shouldn't happen but some implementation might still have this
   problem.  Use a reasonable default value.  */
#  define CHAR_CLASS_MAX_LENGTH 256
# endif

# ifdef _LIBC
#  define IS_CHAR_CLASS(string) __wctype (string)
# else
#  define IS_CHAR_CLASS(string) wctype (string)
# endif
#else
# define CHAR_CLASS_MAX_LENGTH  6 /* Namely, `xdigit'.  */

# define IS_CHAR_CLASS(string)						\
   (STREQ (string, "alpha") || STREQ (string, "upper")			\
    || STREQ (string, "lower") || STREQ (string, "digit")		\
    || STREQ (string, "alnum") || STREQ (string, "xdigit")		\
    || STREQ (string, "space") || STREQ (string, "print")		\
    || STREQ (string, "punct") || STREQ (string, "graph")		\
    || STREQ (string, "cntrl") || STREQ (string, "blank"))
#endif

#ifndef MATCH_MAY_ALLOCATE

/* If we cannot allocate large objects within re_match_2_internal,
   we make the fail stack and register vectors global.
   The fail stack, we grow to the maximum size when a regexp
   is compiled.
   The register vectors, we adjust in size each time we
   compile a regexp, according to the number of registers it needs.  */

static fail_stack_type fail_stack;

/* Size with which the following vectors are currently allocated.
   That is so we can make them bigger as needed,
   but never make them smaller.  */
static int regs_allocated_size;

static const char **     regstart, **     regend;
static const char ** old_regstart, ** old_regend;
static const char **best_regstart, **best_regend;
static register_info_type *reg_info;
static const char **reg_dummy;
static register_info_type *reg_info_dummy;

/* Make the register vectors big enough for NUM_REGS registers,
   but don't make them smaller.  */

static
regex_grow_registers (num_regs)
     int num_regs;
{
  if (num_regs > regs_allocated_size)
    {
      RETALLOC_IF (regstart,	 num_regs, const char *);
      RETALLOC_IF (regend,	 num_regs, const char *);
      RETALLOC_IF (old_regstart, num_regs, const char *);
      RETALLOC_IF (old_regend,	 num_regs, const char *);
      RETALLOC_IF (best_regstart, num_regs, const char *);
      RETALLOC_IF (best_regend,	 num_regs, const char *);
      RETALLOC_IF (reg_info,	 num_regs, register_info_type);
      RETALLOC_IF (reg_dummy,	 num_regs, const char *);
      RETALLOC_IF (reg_info_dummy, num_regs, register_info_type);

      regs_allocated_size = num_regs;
    }
}

#endif /* not MATCH_MAY_ALLOCATE */

static boolean group_in_compile_stack _RE_ARGS ((compile_stack_type
						 compile_stack,
						 regnum_t regnum));

/* `regex_compile' compiles PATTERN (of length SIZE) according to SYNTAX.
   Returns one of error codes defined in `regex.h', or zero for success.

   Assumes the `allocated' (and perhaps `buffer') and `translate'
   fields are set in BUFP on entry.

   If it succeeds, results are put in BUFP (if it returns an error, the
   contents of BUFP are undefined):
     `buffer' is the compiled pattern;
     `syntax' is set to SYNTAX;
     `used' is set to the length of the compiled pattern;
     `fastmap_accurate' is zero;
     `re_nsub' is the number of subexpressions in PATTERN;
     `not_bol' and `not_eol' are zero;

   The `fastmap' and `newline_anchor' fields are neither
   examined nor set.  */

/* Return, freeing storage we allocated.  */
#define FREE_STACK_RETURN(value)		\
  return (free (compile_stack.stack), value)

static reg_errcode_t
regex_compile (pattern, size, syntax, bufp)
     const char *pattern;
     size_t size;
     reg_syntax_t syntax;
     struct re_pattern_buffer *bufp;
{
  /* We fetch characters from PATTERN here.  Even though PATTERN is
     `char *' (i.e., signed), we declare these variables as unsigned, so
     they can be reliably used as array indices.  */
  register unsigned char c, c1;

  /* A random temporary spot in PATTERN.  */
  const char *p1;

  /* Points to the end of the buffer, where we should append.  */
  register unsigned char *b;

  /* Keeps track of unclosed groups.  */
  compile_stack_type compile_stack;

  /* Points to the current (ending) position in the pattern.  */
  const char *p = pattern;
  const char *pend = pattern + size;

  /* How to translate the characters in the pattern.  */
  RE_TRANSLATE_TYPE translate = bufp->translate;

  /* Address of the count-byte of the most recently inserted `exactn'
     command.  This makes it possible to tell if a new exact-match
     character can be added to that command or if the character requires
     a new `exactn' command.  */
  unsigned char *pending_exact = 0;

  /* Address of start of the most recently finished expression.
     This tells, e.g., postfix * where to find the start of its
     operand.  Reset at the beginning of groups and alternatives.  */
  unsigned char *laststart = 0;

  /* Address of beginning of regexp, or inside of last group.  */
  unsigned char *begalt;

  /* Place in the uncompiled pattern (i.e., the {) to
     which to go back if the interval is invalid.  */
  const char *beg_interval;

  /* Address of the place where a forward jump should go to the end of
     the containing expression.  Each alternative of an `or' -- except the
     last -- ends with a forward jump of this sort.  */
  unsigned char *fixup_alt_jump = 0;

  /* Counts open-groups as they are encountered.  Remembered for the
     matching close-group on the compile stack, so the same register
     number is put in the stop_memory as the start_memory.  */
  regnum_t regnum = 0;

#ifdef DEBUG
  DEBUG_PRINT1 ("\nCompiling pattern: ");
  if (debug)
    {
      unsigned debug_count;

      for (debug_count = 0; debug_count < size; debug_count++)
        putchar (pattern[debug_count]);
      putchar ('\n');
    }
#endif /* DEBUG */

  /* Initialize the compile stack.  */
  compile_stack.stack = TALLOC (INIT_COMPILE_STACK_SIZE, compile_stack_elt_t);
  if (compile_stack.stack == NULL)
    return REG_ESPACE;

  compile_stack.size = INIT_COMPILE_STACK_SIZE;
  compile_stack.avail = 0;

  /* Initialize the pattern buffer.  */
  bufp->syntax = syntax;
  bufp->fastmap_accurate = 0;
  bufp->not_bol = bufp->not_eol = 0;

  /* Set `used' to zero, so that if we return an error, the pattern
     printer (for debugging) will think there's no pattern.  We reset it
     at the end.  */
  bufp->used = 0;

  /* Always count groups, whether or not bufp->no_sub is set.  */
  bufp->re_nsub = 0;

#if !defined emacs && !defined SYNTAX_TABLE
  /* Initialize the syntax table.  */
   init_syntax_once ();
#endif

  if (bufp->allocated == 0)
    {
      if (bufp->buffer)
	{ /* If zero allocated, but buffer is non-null, try to realloc
             enough space.  This loses if buffer's address is bogus, but
             that is the user's responsibility.  */
          RETALLOC (bufp->buffer, INIT_BUF_SIZE, unsigned char);
        }
      else
        { /* Caller did not allocate a buffer.  Do it for them.  */
          bufp->buffer = TALLOC (INIT_BUF_SIZE, unsigned char);
        }
      if (!bufp->buffer) FREE_STACK_RETURN (REG_ESPACE);

      bufp->allocated = INIT_BUF_SIZE;
    }

  begalt = b = bufp->buffer;

  /* Loop through the uncompiled pattern until we're at the end.  */
  while (p != pend)
    {
      PATFETCH (c);

      switch (c)
        {
        case '^':
          {
            if (   /* If at start of pattern, it's an operator.  */
                   p == pattern + 1
                   /* If context independent, it's an operator.  */
                || syntax & RE_CONTEXT_INDEP_ANCHORS
                   /* Otherwise, depends on what's come before.  */
                || at_begline_loc_p (pattern, p, syntax))
              BUF_PUSH (begline);
            else
              goto normal_char;
          }
          break;


        case '$':
          {
            if (   /* If at end of pattern, it's an operator.  */
                   p == pend
                   /* If context independent, it's an operator.  */
                || syntax & RE_CONTEXT_INDEP_ANCHORS
                   /* Otherwise, depends on what's next.  */
                || at_endline_loc_p (p, pend, syntax))
               BUF_PUSH (endline);
             else
               goto normal_char;
           }
           break;


	case '+':
        case '?':
          if ((syntax & RE_BK_PLUS_QM)
              || (syntax & RE_LIMITED_OPS))
            goto normal_char;
        handle_plus:
        case '*':
          /* If there is no previous pattern... */
          if (!laststart)
            {
              if (syntax & RE_CONTEXT_INVALID_OPS)
                FREE_STACK_RETURN (REG_BADRPT);
              else if (!(syntax & RE_CONTEXT_INDEP_OPS))
                goto normal_char;
            }

          {
            /* Are we optimizing this jump?  */
            boolean keep_string_p = false;

            /* 1 means zero (many) matches is allowed.  */
            char zero_times_ok = 0, many_times_ok = 0;

            /* If there is a sequence of repetition chars, collapse it
               down to just one (the right one).  We can't combine
               interval operators with these because of, e.g., `a{2}*',
               which should only match an even number of `a's.  */

            for (;;)
              {
                zero_times_ok |= c != '+';
                many_times_ok |= c != '?';

                if (p == pend)
                  break;

                PATFETCH (c);

                if (c == '*'
                    || (!(syntax & RE_BK_PLUS_QM) && (c == '+' || c == '?')))
                  ;

                else if (syntax & RE_BK_PLUS_QM  &&  c == '\\')
                  {
                    if (p == pend) FREE_STACK_RETURN (REG_EESCAPE);

                    PATFETCH (c1);
                    if (!(c1 == '+' || c1 == '?'))
                      {
                        PATUNFETCH;
                        PATUNFETCH;
                        break;
                      }

                    c = c1;
                  }
                else
                  {
                    PATUNFETCH;
                    break;
                  }

                /* If we get here, we found another repeat character.  */
               }

            /* Star, etc. applied to an empty pattern is equivalent
               to an empty pattern.  */
            if (!laststart)
              break;

            /* Now we know whether or not zero matches is allowed
               and also whether or not two or more matches is allowed.  */
            if (many_times_ok)
              { /* More than one repetition is allowed, so put in at the
                   end a backward relative jump from `b' to before the next
                   jump we're going to put in below (which jumps from
                   laststart to after this jump).

                   But if we are at the `*' in the exact sequence `.*\n',
                   insert an unconditional jump backwards to the .,
                   instead of the beginning of the loop.  This way we only
                   push a failure point once, instead of every time
                   through the loop.  */
                assert (p - 1 > pattern);

                /* Allocate the space for the jump.  */
                GET_BUFFER_SPACE (3);

                /* We know we are not at the first character of the pattern,
                   because laststart was nonzero.  And we've already
                   incremented `p', by the way, to be the character after
                   the `*'.  Do we have to do something analogous here
                   for null bytes, because of RE_DOT_NOT_NULL?  */
                if (TRANSLATE (*(p - 2)) == TRANSLATE ('.')
		    && zero_times_ok
                    && p < pend && TRANSLATE (*p) == TRANSLATE ('\n')
                    && !(syntax & RE_DOT_NEWLINE))
                  { /* We have .*\n.  */
                    STORE_JUMP (jump, b, laststart);
                    keep_string_p = true;
                  }
                else
                  /* Anything else.  */
                  STORE_JUMP (maybe_pop_jump, b, laststart - 3);

                /* We've added more stuff to the buffer.  */
                b += 3;
              }

            /* On failure, jump from laststart to b + 3, which will be the
               end of the buffer after this jump is inserted.  */
            GET_BUFFER_SPACE (3);
            INSERT_JUMP (keep_string_p ? on_failure_keep_string_jump
                                       : on_failure_jump,
                         laststart, b + 3);
            pending_exact = 0;
            b += 3;

            if (!zero_times_ok)
              {
                /* At least one repetition is required, so insert a
                   `dummy_failure_jump' before the initial
                   `on_failure_jump' instruction of the loop. This
                   effects a skip over that instruction the first time
                   we hit that loop.  */
                GET_BUFFER_SPACE (3);
                INSERT_JUMP (dummy_failure_jump, laststart, laststart + 6);
                b += 3;
              }
            }
	  break;


	case '.':
          laststart = b;
          BUF_PUSH (anychar);
          break;


        case '[':
          {
            boolean had_char_class = false;

            if (p == pend) FREE_STACK_RETURN (REG_EBRACK);

            /* Ensure that we have enough space to push a charset: the
               opcode, the length count, and the bitset; 34 bytes in all.  */
	    GET_BUFFER_SPACE (34);

            laststart = b;

            /* We test `*p == '^' twice, instead of using an if
               statement, so we only need one BUF_PUSH.  */
            BUF_PUSH (*p == '^' ? charset_not : charset);
            if (*p == '^')
              p++;

            /* Remember the first position in the bracket expression.  */
            p1 = p;

            /* Push the number of bytes in the bitmap.  */
            BUF_PUSH ((1 << BYTEWIDTH) / BYTEWIDTH);

            /* Clear the whole map.  */
            bzero (b, (1 << BYTEWIDTH) / BYTEWIDTH);

            /* charset_not matches newline according to a syntax bit.  */
            if ((re_opcode_t) b[-2] == charset_not
                && (syntax & RE_HAT_LISTS_NOT_NEWLINE))
              SET_LIST_BIT ('\n');

            /* Read in characters and ranges, setting map bits.  */
            for (;;)
              {
                if (p == pend) FREE_STACK_RETURN (REG_EBRACK);

                PATFETCH (c);

                /* \ might escape characters inside [...] and [^...].  */
                if ((syntax & RE_BACKSLASH_ESCAPE_IN_LISTS) && c == '\\')
                  {
                    if (p == pend) FREE_STACK_RETURN (REG_EESCAPE);

                    PATFETCH (c1);
                    SET_LIST_BIT (c1);
                    continue;
                  }

                /* Could be the end of the bracket expression.  If it's
                   not (i.e., when the bracket expression is `[]' so
                   far), the ']' character bit gets set way below.  */
                if (c == ']' && p != p1 + 1)
                  break;

                /* Look ahead to see if it's a range when the last thing
                   was a character class.  */
                if (had_char_class && c == '-' && *p != ']')
                  FREE_STACK_RETURN (REG_ERANGE);

                /* Look ahead to see if it's a range when the last thing
                   was a character: if this is a hyphen not at the
                   beginning or the end of a list, then it's the range
                   operator.  */
                if (c == '-'
                    && !(p - 2 >= pattern && p[-2] == '[')
                    && !(p - 3 >= pattern && p[-3] == '[' && p[-2] == '^')
                    && *p != ']')
                  {
                    reg_errcode_t ret
                      = compile_range (&p, pend, translate, syntax, b);
                    if (ret != REG_NOERROR) FREE_STACK_RETURN (ret);
                  }

                else if (p[0] == '-' && p[1] != ']')
                  { /* This handles ranges made up of characters only.  */
                    reg_errcode_t ret;

		    /* Move past the `-'.  */
                    PATFETCH (c1);

                    ret = compile_range (&p, pend, translate, syntax, b);
                    if (ret != REG_NOERROR) FREE_STACK_RETURN (ret);
                  }

                /* See if we're at the beginning of a possible character
                   class.  */

                else if (syntax & RE_CHAR_CLASSES && c == '[' && *p == ':')
                  { /* Leave room for the null.  */
                    char str[CHAR_CLASS_MAX_LENGTH + 1];

                    PATFETCH (c);
                    c1 = 0;

                    /* If pattern is `[[:'.  */
                    if (p == pend) FREE_STACK_RETURN (REG_EBRACK);

                    for (;;)
                      {
                        PATFETCH (c);
                        if ((c == ':' && *p == ']') || p == pend)
                          break;
			if (c1 < CHAR_CLASS_MAX_LENGTH)
			  str[c1++] = c;
			else
			  /* This is in any case an invalid class name.  */
			  str[0] = '\0';
                      }
                    str[c1] = '\0';

                    /* If isn't a word bracketed by `[:' and `:]':
                       undo the ending character, the letters, and leave
                       the leading `:' and `[' (but set bits for them).  */
                    if (c == ':' && *p == ']')
                      {
#if defined _LIBC || WIDE_CHAR_SUPPORT
                        boolean is_lower = STREQ (str, "lower");
                        boolean is_upper = STREQ (str, "upper");
			wctype_t wt;
                        int ch;

			wt = IS_CHAR_CLASS (str);
			if (wt == 0)
			  FREE_STACK_RETURN (REG_ECTYPE);

                        /* Throw away the ] at the end of the character
                           class.  */
                        PATFETCH (c);

                        if (p == pend) FREE_STACK_RETURN (REG_EBRACK);

                        for (ch = 0; ch < 1 << BYTEWIDTH; ++ch)
			  {
# ifdef _LIBC
			    if (__iswctype (__btowc (ch), wt))
			      SET_LIST_BIT (ch);
# else
			    if (iswctype (btowc (ch), wt))
			      SET_LIST_BIT (ch);
# endif

			    if (translate && (is_upper || is_lower)
				&& (ISUPPER (ch) || ISLOWER (ch)))
			      SET_LIST_BIT (ch);
			  }

                        had_char_class = true;
#else
                        int ch;
                        boolean is_alnum = STREQ (str, "alnum");
                        boolean is_alpha = STREQ (str, "alpha");
                        boolean is_blank = STREQ (str, "blank");
                        boolean is_cntrl = STREQ (str, "cntrl");
                        boolean is_digit = STREQ (str, "digit");
                        boolean is_graph = STREQ (str, "graph");
                        boolean is_lower = STREQ (str, "lower");
                        boolean is_print = STREQ (str, "print");
                        boolean is_punct = STREQ (str, "punct");
                        boolean is_space = STREQ (str, "space");
                        boolean is_upper = STREQ (str, "upper");
                        boolean is_xdigit = STREQ (str, "xdigit");

                        if (!IS_CHAR_CLASS (str))
			  FREE_STACK_RETURN (REG_ECTYPE);

                        /* Throw away the ] at the end of the character
                           class.  */
                        PATFETCH (c);

                        if (p == pend) FREE_STACK_RETURN (REG_EBRACK);

                        for (ch = 0; ch < 1 << BYTEWIDTH; ch++)
                          {
			    /* This was split into 3 if's to
			       avoid an arbitrary limit in some compiler.  */
                            if (   (is_alnum  && ISALNUM (ch))
                                || (is_alpha  && ISALPHA (ch))
                                || (is_blank  && ISBLANK (ch))
                                || (is_cntrl  && ISCNTRL (ch)))
			      SET_LIST_BIT (ch);
			    if (   (is_digit  && ISDIGIT (ch))
                                || (is_graph  && ISGRAPH (ch))
                                || (is_lower  && ISLOWER (ch))
                                || (is_print  && ISPRINT (ch)))
			      SET_LIST_BIT (ch);
			    if (   (is_punct  && ISPUNCT (ch))
                                || (is_space  && ISSPACE (ch))
                                || (is_upper  && ISUPPER (ch))
                                || (is_xdigit && ISXDIGIT (ch)))
			      SET_LIST_BIT (ch);
			    if (   translate && (is_upper || is_lower)
				&& (ISUPPER (ch) || ISLOWER (ch)))
			      SET_LIST_BIT (ch);
                          }
                        had_char_class = true;
#endif	/* libc || wctype.h */
                      }
                    else
                      {
                        c1++;
                        while (c1--)
                          PATUNFETCH;
                        SET_LIST_BIT ('[');
                        SET_LIST_BIT (':');
                        had_char_class = false;
                      }
                  }
                else
                  {
                    had_char_class = false;
                    SET_LIST_BIT (c);
                  }
              }

            /* Discard any (non)matching list bytes that are all 0 at the
               end of the map.  Decrease the map-length byte too.  */
            while ((int) b[-1] > 0 && b[b[-1] - 1] == 0)
              b[-1]--;
            b += b[-1];
          }
          break;


	case '(':
          if (syntax & RE_NO_BK_PARENS)
            goto handle_open;
          else
            goto normal_char;


        case ')':
          if (syntax & RE_NO_BK_PARENS)
            goto handle_close;
          else
            goto normal_char;


        case '\n':
          if (syntax & RE_NEWLINE_ALT)
            goto handle_alt;
          else
            goto normal_char;


	case '|':
          if (syntax & RE_NO_BK_VBAR)
            goto handle_alt;
          else
            goto normal_char;


        case '{':
           if (syntax & RE_INTERVALS && syntax & RE_NO_BK_BRACES)
             goto handle_interval;
           else
             goto normal_char;


        case '\\':
          if (p == pend) FREE_STACK_RETURN (REG_EESCAPE);

          /* Do not translate the character after the \, so that we can
             distinguish, e.g., \B from \b, even if we normally would
             translate, e.g., B to b.  */
          PATFETCH_RAW (c);

          switch (c)
            {
            case '(':
              if (syntax & RE_NO_BK_PARENS)
                goto normal_backslash;

            handle_open:
              bufp->re_nsub++;
              regnum++;

              if (COMPILE_STACK_FULL)
                {
                  RETALLOC (compile_stack.stack, compile_stack.size << 1,
                            compile_stack_elt_t);
                  if (compile_stack.stack == NULL) return REG_ESPACE;

                  compile_stack.size <<= 1;
                }

              /* These are the values to restore when we hit end of this
                 group.  They are all relative offsets, so that if the
                 whole pattern moves because of realloc, they will still
                 be valid.  */
              COMPILE_STACK_TOP.begalt_offset = begalt - bufp->buffer;
              COMPILE_STACK_TOP.fixup_alt_jump
                = fixup_alt_jump ? fixup_alt_jump - bufp->buffer + 1 : 0;
              COMPILE_STACK_TOP.laststart_offset = b - bufp->buffer;
              COMPILE_STACK_TOP.regnum = regnum;

              /* We will eventually replace the 0 with the number of
                 groups inner to this one.  But do not push a
                 start_memory for groups beyond the last one we can
                 represent in the compiled pattern.  */
              if (regnum <= MAX_REGNUM)
                {
                  COMPILE_STACK_TOP.inner_group_offset = b - bufp->buffer + 2;
                  BUF_PUSH_3 (start_memory, regnum, 0);
                }

              compile_stack.avail++;

              fixup_alt_jump = 0;
              laststart = 0;
              begalt = b;
	      /* If we've reached MAX_REGNUM groups, then this open
		 won't actually generate any code, so we'll have to
		 clear pending_exact explicitly.  */
	      pending_exact = 0;
              break;


            case ')':
              if (syntax & RE_NO_BK_PARENS) goto normal_backslash;

              if (COMPILE_STACK_EMPTY)
		{
		  if (syntax & RE_UNMATCHED_RIGHT_PAREN_ORD)
		    goto normal_backslash;
		  else
		    FREE_STACK_RETURN (REG_ERPAREN);
		}

            handle_close:
              if (fixup_alt_jump)
                { /* Push a dummy failure point at the end of the
                     alternative for a possible future
                     `pop_failure_jump' to pop.  See comments at
                     `push_dummy_failure' in `re_match_2'.  */
                  BUF_PUSH (push_dummy_failure);

                  /* We allocated space for this jump when we assigned
                     to `fixup_alt_jump', in the `handle_alt' case below.  */
                  STORE_JUMP (jump_past_alt, fixup_alt_jump, b - 1);
                }

              /* See similar code for backslashed left paren above.  */
              if (COMPILE_STACK_EMPTY)
		{
		  if (syntax & RE_UNMATCHED_RIGHT_PAREN_ORD)
		    goto normal_char;
		  else
		    FREE_STACK_RETURN (REG_ERPAREN);
		}

              /* Since we just checked for an empty stack above, this
                 ``can't happen''.  */
              assert (compile_stack.avail != 0);
              {
                /* We don't just want to restore into `regnum', because
                   later groups should continue to be numbered higher,
                   as in `(ab)c(de)' -- the second group is #2.  */
                regnum_t this_group_regnum;

                compile_stack.avail--;
                begalt = bufp->buffer + COMPILE_STACK_TOP.begalt_offset;
                fixup_alt_jump
                  = COMPILE_STACK_TOP.fixup_alt_jump
                    ? bufp->buffer + COMPILE_STACK_TOP.fixup_alt_jump - 1
                    : 0;
                laststart = bufp->buffer + COMPILE_STACK_TOP.laststart_offset;
                this_group_regnum = COMPILE_STACK_TOP.regnum;
		/* If we've reached MAX_REGNUM groups, then this open
		   won't actually generate any code, so we'll have to
		   clear pending_exact explicitly.  */
		pending_exact = 0;

                /* We're at the end of the group, so now we know how many
                   groups were inside this one.  */
                if (this_group_regnum <= MAX_REGNUM)
                  {
                    unsigned char *inner_group_loc
                      = bufp->buffer + COMPILE_STACK_TOP.inner_group_offset;

                    *inner_group_loc = regnum - this_group_regnum;
                    BUF_PUSH_3 (stop_memory, this_group_regnum,
                                regnum - this_group_regnum);
                  }
              }
              break;


            case '|':					/* `\|'.  */
              if (syntax & RE_LIMITED_OPS || syntax & RE_NO_BK_VBAR)
                goto normal_backslash;
            handle_alt:
              if (syntax & RE_LIMITED_OPS)
                goto normal_char;

              /* Insert before the previous alternative a jump which
                 jumps to this alternative if the former fails.  */
              GET_BUFFER_SPACE (3);
              INSERT_JUMP (on_failure_jump, begalt, b + 6);
              pending_exact = 0;
              b += 3;

              /* The alternative before this one has a jump after it
                 which gets executed if it gets matched.  Adjust that
                 jump so it will jump to this alternative's analogous
                 jump (put in below, which in turn will jump to the next
                 (if any) alternative's such jump, etc.).  The last such
                 jump jumps to the correct final destination.  A picture:
                          _____ _____
                          |   | |   |
                          |   v |   v
                         a | b   | c

                 If we are at `b', then fixup_alt_jump right now points to a
                 three-byte space after `a'.  We'll put in the jump, set
                 fixup_alt_jump to right after `b', and leave behind three
                 bytes which we'll fill in when we get to after `c'.  */

              if (fixup_alt_jump)
                STORE_JUMP (jump_past_alt, fixup_alt_jump, b);

              /* Mark and leave space for a jump after this alternative,
                 to be filled in later either by next alternative or
                 when know we're at the end of a series of alternatives.  */
              fixup_alt_jump = b;
              GET_BUFFER_SPACE (3);
              b += 3;

              laststart = 0;
              begalt = b;
              break;


            case '{':
              /* If \{ is a literal.  */
              if (!(syntax & RE_INTERVALS)
                     /* If we're at `\{' and it's not the open-interval
                        operator.  */
                  || ((syntax & RE_INTERVALS) && (syntax & RE_NO_BK_BRACES))
                  || (p - 2 == pattern  &&  p == pend))
                goto normal_backslash;

            handle_interval:
              {
                /* If got here, then the syntax allows intervals.  */

                /* At least (most) this many matches must be made.  */
                int lower_bound = -1, upper_bound = -1;

                beg_interval = p - 1;

                if (p == pend)
                  {
                    if (syntax & RE_NO_BK_BRACES)
                      goto unfetch_interval;
                    else
                      FREE_STACK_RETURN (REG_EBRACE);
                  }

                GET_UNSIGNED_NUMBER (lower_bound);

                if (c == ',')
                  {
                    GET_UNSIGNED_NUMBER (upper_bound);
                    if (upper_bound < 0) upper_bound = RE_DUP_MAX;
                  }
                else
                  /* Interval such as `{1}' => match exactly once. */
                  upper_bound = lower_bound;

                if (lower_bound < 0 || upper_bound > RE_DUP_MAX
                    || lower_bound > upper_bound)
                  {
                    if (syntax & RE_NO_BK_BRACES)
                      goto unfetch_interval;
                    else
                      FREE_STACK_RETURN (REG_BADBR);
                  }

                if (!(syntax & RE_NO_BK_BRACES))
                  {
                    if (c != '\\') FREE_STACK_RETURN (REG_EBRACE);

                    PATFETCH (c);
                  }

                if (c != '}')
                  {
                    if (syntax & RE_NO_BK_BRACES)
                      goto unfetch_interval;
                    else
                      FREE_STACK_RETURN (REG_BADBR);
                  }

                /* We just parsed a valid interval.  */

                /* If it's invalid to have no preceding re.  */
                if (!laststart)
                  {
                    if (syntax & RE_CONTEXT_INVALID_OPS)
                      FREE_STACK_RETURN (REG_BADRPT);
                    else if (syntax & RE_CONTEXT_INDEP_OPS)
                      laststart = b;
                    else
                      goto unfetch_interval;
                  }

                /* If the upper bound is zero, don't want to succeed at
                   all; jump from `laststart' to `b + 3', which will be
                   the end of the buffer after we insert the jump.  */
                 if (upper_bound == 0)
                   {
                     GET_BUFFER_SPACE (3);
                     INSERT_JUMP (jump, laststart, b + 3);
                     b += 3;
                   }

                 /* Otherwise, we have a nontrivial interval.  When
                    we're all done, the pattern will look like:
                      set_number_at <jump count> <upper bound>
                      set_number_at <succeed_n count> <lower bound>
                      succeed_n <after jump addr> <succeed_n count>
                      <body of loop>
                      jump_n <succeed_n addr> <jump count>
                    (The upper bound and `jump_n' are omitted if
                    `upper_bound' is 1, though.)  */
                 else
                   { /* If the upper bound is > 1, we need to insert
                        more at the end of the loop.  */
                     unsigned nbytes = 10 + (upper_bound > 1) * 10;

                     GET_BUFFER_SPACE (nbytes);

                     /* Initialize lower bound of the `succeed_n', even
                        though it will be set during matching by its
                        attendant `set_number_at' (inserted next),
                        because `re_compile_fastmap' needs to know.
                        Jump to the `jump_n' we might insert below.  */
                     INSERT_JUMP2 (succeed_n, laststart,
                                   b + 5 + (upper_bound > 1) * 5,
                                   lower_bound);
                     b += 5;

                     /* Code to initialize the lower bound.  Insert
                        before the `succeed_n'.  The `5' is the last two
                        bytes of this `set_number_at', plus 3 bytes of
                        the following `succeed_n'.  */
                     insert_op2 (set_number_at, laststart, 5, lower_bound, b);
                     b += 5;

                     if (upper_bound > 1)
                       { /* More than one repetition is allowed, so
                            append a backward jump to the `succeed_n'
                            that starts this interval.

                            When we've reached this during matching,
                            we'll have matched the interval once, so
                            jump back only `upper_bound - 1' times.  */
                         STORE_JUMP2 (jump_n, b, laststart + 5,
                                      upper_bound - 1);
                         b += 5;

                         /* The location we want to set is the second
                            parameter of the `jump_n'; that is `b-2' as
                            an absolute address.  `laststart' will be
                            the `set_number_at' we're about to insert;
                            `laststart+3' the number to set, the source
                            for the relative address.  But we are
                            inserting into the middle of the pattern --
                            so everything is getting moved up by 5.
                            Conclusion: (b - 2) - (laststart + 3) + 5,
                            i.e., b - laststart.

                            We insert this at the beginning of the loop
                            so that if we fail during matching, we'll
                            reinitialize the bounds.  */
                         insert_op2 (set_number_at, laststart, b - laststart,
                                     upper_bound - 1, b);
                         b += 5;
                       }
                   }
                pending_exact = 0;
                beg_interval = NULL;
              }
              break;

            unfetch_interval:
              /* If an invalid interval, match the characters as literals.  */
               assert (beg_interval);
               p = beg_interval;
               beg_interval = NULL;

               /* normal_char and normal_backslash need `c'.  */
               PATFETCH (c);

               if (!(syntax & RE_NO_BK_BRACES))
                 {
                   if (p > pattern  &&  p[-1] == '\\')
                     goto normal_backslash;
                 }
               goto normal_char;

#ifdef emacs
            /* There is no way to specify the before_dot and after_dot
               operators.  rms says this is ok.  --karl  */
            case '=':
              BUF_PUSH (at_dot);
              break;

            case 's':
              laststart = b;
              PATFETCH (c);
              BUF_PUSH_2 (syntaxspec, syntax_spec_code[c]);
              break;

            case 'S':
              laststart = b;
              PATFETCH (c);
              BUF_PUSH_2 (notsyntaxspec, syntax_spec_code[c]);
              break;
#endif /* emacs */


            case 'w':
	      if (syntax & RE_NO_GNU_OPS)
		goto normal_char;
              laststart = b;
              BUF_PUSH (wordchar);
              break;


            case 'W':
	      if (syntax & RE_NO_GNU_OPS)
		goto normal_char;
              laststart = b;
              BUF_PUSH (notwordchar);
              break;


            case '<':
	      if (syntax & RE_NO_GNU_OPS)
		goto normal_char;
              BUF_PUSH (wordbeg);
              break;

            case '>':
	      if (syntax & RE_NO_GNU_OPS)
		goto normal_char;
              BUF_PUSH (wordend);
              break;

            case 'b':
	      if (syntax & RE_NO_GNU_OPS)
		goto normal_char;
              BUF_PUSH (wordbound);
              break;

            case 'B':
	      if (syntax & RE_NO_GNU_OPS)
		goto normal_char;
              BUF_PUSH (notwordbound);
              break;

            case '`':
	      if (syntax & RE_NO_GNU_OPS)
		goto normal_char;
              BUF_PUSH (begbuf);
              break;

            case '\'':
	      if (syntax & RE_NO_GNU_OPS)
		goto normal_char;
              BUF_PUSH (endbuf);
              break;

            case '1': case '2': case '3': case '4': case '5':
            case '6': case '7': case '8': case '9':
              if (syntax & RE_NO_BK_REFS)
                goto normal_char;

              c1 = c - '0';

              if (c1 > regnum)
                FREE_STACK_RETURN (REG_ESUBREG);

              /* Can't back reference to a subexpression if inside of it.  */
              if (group_in_compile_stack (compile_stack, (regnum_t) c1))
                goto normal_char;

              laststart = b;
              BUF_PUSH_2 (duplicate, c1);
              break;


            case '+':
            case '?':
              if (syntax & RE_BK_PLUS_QM)
                goto handle_plus;
              else
                goto normal_backslash;

            default:
            normal_backslash:
              /* You might think it would be useful for \ to mean
                 not to translate; but if we don't translate it
                 it will never match anything.  */
              c = TRANSLATE (c);
              goto normal_char;
            }
          break;


	default:
        /* Expects the character in `c'.  */
	normal_char:
	      /* If no exactn currently being built.  */
          if (!pending_exact

              /* If last exactn not at current position.  */
              || pending_exact + *pending_exact + 1 != b

              /* We have only one byte following the exactn for the count.  */
	      || *pending_exact == (1 << BYTEWIDTH) - 1

              /* If followed by a repetition operator.  */
              || *p == '*' || *p == '^'
	      || ((syntax & RE_BK_PLUS_QM)
		  ? *p == '\\' && (p[1] == '+' || p[1] == '?')
		  : (*p == '+' || *p == '?'))
	      || ((syntax & RE_INTERVALS)
                  && ((syntax & RE_NO_BK_BRACES)
		      ? *p == '{'
                      : (p[0] == '\\' && p[1] == '{'))))
	    {
	      /* Start building a new exactn.  */

              laststart = b;

	      BUF_PUSH_2 (exactn, 0);
	      pending_exact = b - 1;
            }

	  BUF_PUSH (c);
          (*pending_exact)++;
	  break;
        } /* switch (c) */
    } /* while p != pend */


  /* Through the pattern now.  */

  if (fixup_alt_jump)
    STORE_JUMP (jump_past_alt, fixup_alt_jump, b);

  if (!COMPILE_STACK_EMPTY)
    FREE_STACK_RETURN (REG_EPAREN);

  /* If we don't want backtracking, force success
     the first time we reach the end of the compiled pattern.  */
  if (syntax & RE_NO_POSIX_BACKTRACKING)
    BUF_PUSH (succeed);

  free (compile_stack.stack);

  /* We have succeeded; set the length of the buffer.  */
  bufp->used = b - bufp->buffer;

#ifdef DEBUG
  if (debug)
    {
      DEBUG_PRINT1 ("\nCompiled pattern: \n");
      print_compiled_pattern (bufp);
    }
#endif /* DEBUG */

#ifndef MATCH_MAY_ALLOCATE
  /* Initialize the failure stack to the largest possible stack.  This
     isn't necessary unless we're trying to avoid calling alloca in
     the search and match routines.  */
  {
    int num_regs = bufp->re_nsub + 1;

    /* Since DOUBLE_FAIL_STACK refuses to double only if the current size
       is strictly greater than re_max_failures, the largest possible stack
       is 2 * re_max_failures failure points.  */
    if (fail_stack.size < (2 * re_max_failures * MAX_FAILURE_ITEMS))
      {
	fail_stack.size = (2 * re_max_failures * MAX_FAILURE_ITEMS);

# ifdef emacs
	if (! fail_stack.stack)
	  fail_stack.stack
	    = (fail_stack_elt_t *) xmalloc (fail_stack.size
					    * sizeof (fail_stack_elt_t));
	else
	  fail_stack.stack
	    = (fail_stack_elt_t *) xrealloc (fail_stack.stack,
					     (fail_stack.size
					      * sizeof (fail_stack_elt_t)));
# else /* not emacs */
	if (! fail_stack.stack)
	  fail_stack.stack
	    = (fail_stack_elt_t *) malloc (fail_stack.size
					   * sizeof (fail_stack_elt_t));
	else
	  fail_stack.stack
	    = (fail_stack_elt_t *) realloc (fail_stack.stack,
					    (fail_stack.size
					     * sizeof (fail_stack_elt_t)));
# endif /* not emacs */
      }

    regex_grow_registers (num_regs);
  }
#endif /* not MATCH_MAY_ALLOCATE */

  return REG_NOERROR;
} /* regex_compile */

/* Subroutines for `regex_compile'.  */

/* Store OP at LOC followed by two-byte integer parameter ARG.  */

static void
store_op1 (op, loc, arg)
    re_opcode_t op;
    unsigned char *loc;
    int arg;
{
  *loc = (unsigned char) op;
  STORE_NUMBER (loc + 1, arg);
}


/* Like `store_op1', but for two two-byte parameters ARG1 and ARG2.  */

static void
store_op2 (op, loc, arg1, arg2)
    re_opcode_t op;
    unsigned char *loc;
    int arg1, arg2;
{
  *loc = (unsigned char) op;
  STORE_NUMBER (loc + 1, arg1);
  STORE_NUMBER (loc + 3, arg2);
}


/* Copy the bytes from LOC to END to open up three bytes of space at LOC
   for OP followed by two-byte integer parameter ARG.  */

static void
insert_op1 (op, loc, arg, end)
    re_opcode_t op;
    unsigned char *loc;
    int arg;
    unsigned char *end;
{
  register unsigned char *pfrom = end;
  register unsigned char *pto = end + 3;

  while (pfrom != loc)
    *--pto = *--pfrom;

  store_op1 (op, loc, arg);
}


/* Like `insert_op1', but for two two-byte parameters ARG1 and ARG2.  */

static void
insert_op2 (op, loc, arg1, arg2, end)
    re_opcode_t op;
    unsigned char *loc;
    int arg1, arg2;
    unsigned char *end;
{
  register unsigned char *pfrom = end;
  register unsigned char *pto = end + 5;

  while (pfrom != loc)
    *--pto = *--pfrom;

  store_op2 (op, loc, arg1, arg2);
}


/* P points to just after a ^ in PATTERN.  Return true if that ^ comes
   after an alternative or a begin-subexpression.  We assume there is at
   least one character before the ^.  */

static boolean
at_begline_loc_p (pattern, p, syntax)
    const char *pattern, *p;
    reg_syntax_t syntax;
{
  const char *prev = p - 2;
  boolean prev_prev_backslash = prev > pattern && prev[-1] == '\\';

  return
       /* After a subexpression?  */
       (*prev == '(' && (syntax & RE_NO_BK_PARENS || prev_prev_backslash))
       /* After an alternative?  */
    || (*prev == '|' && (syntax & RE_NO_BK_VBAR || prev_prev_backslash));
}


/* The dual of at_begline_loc_p.  This one is for $.  We assume there is
   at least one character after the $, i.e., `P < PEND'.  */

static boolean
at_endline_loc_p (p, pend, syntax)
    const char *p, *pend;
    reg_syntax_t syntax;
{
  const char *next = p;
  boolean next_backslash = *next == '\\';
  const char *next_next = p + 1 < pend ? p + 1 : 0;

  return
       /* Before a subexpression?  */
       (syntax & RE_NO_BK_PARENS ? *next == ')'
        : next_backslash && next_next && *next_next == ')')
       /* Before an alternative?  */
    || (syntax & RE_NO_BK_VBAR ? *next == '|'
        : next_backslash && next_next && *next_next == '|');
}


/* Returns true if REGNUM is in one of COMPILE_STACK's elements and
   false if it's not.  */

static boolean
group_in_compile_stack (compile_stack, regnum)
    compile_stack_type compile_stack;
    regnum_t regnum;
{
  int this_element;

  for (this_element = compile_stack.avail - 1;
       this_element >= 0;
       this_element--)
    if (compile_stack.stack[this_element].regnum == regnum)
      return true;

  return false;
}


/* Read the ending character of a range (in a bracket expression) from the
   uncompiled pattern *P_PTR (which ends at PEND).  We assume the
   starting character is in `P[-2]'.  (`P[-1]' is the character `-'.)
   Then we set the translation of all bits between the starting and
   ending characters (inclusive) in the compiled pattern B.

   Return an error code.

   We use these short variable names so we can use the same macros as
   `regex_compile' itself.  */

static reg_errcode_t
compile_range (p_ptr, pend, translate, syntax, b)
    const char **p_ptr, *pend;
    RE_TRANSLATE_TYPE translate;
    reg_syntax_t syntax;
    unsigned char *b;
{
  unsigned this_char;

  const char *p = *p_ptr;
  unsigned int range_start, range_end;

  if (p == pend)
    return REG_ERANGE;

  /* Even though the pattern is a signed `char *', we need to fetch
     with unsigned char *'s; if the high bit of the pattern character
     is set, the range endpoints will be negative if we fetch using a
     signed char *.

     We also want to fetch the endpoints without translating them; the
     appropriate translation is done in the bit-setting loop below.  */
  /* The SVR4 compiler on the 3B2 had trouble with unsigned const char *.  */
  range_start = ((const unsigned char *) p)[-2];
  range_end   = ((const unsigned char *) p)[0];

  /* Have to increment the pointer into the pattern string, so the
     caller isn't still at the ending character.  */
  (*p_ptr)++;

  /* If the start is after the end, the range is empty.  */
  if (range_start > range_end)
    return syntax & RE_NO_EMPTY_RANGES ? REG_ERANGE : REG_NOERROR;

  /* Here we see why `this_char' has to be larger than an `unsigned
     char' -- the range is inclusive, so if `range_end' == 0xff
     (assuming 8-bit characters), we would otherwise go into an infinite
     loop, since all characters <= 0xff.  */
  for (this_char = range_start; this_char <= range_end; this_char++)
    {
      SET_LIST_BIT (TRANSLATE (this_char));
    }

  return REG_NOERROR;
}

/* re_compile_fastmap computes a ``fastmap'' for the compiled pattern in
   BUFP.  A fastmap records which of the (1 << BYTEWIDTH) possible
   characters can start a string that matches the pattern.  This fastmap
   is used by re_search to skip quickly over impossible starting points.

   The caller must supply the address of a (1 << BYTEWIDTH)-byte data
   area as BUFP->fastmap.

   We set the `fastmap', `fastmap_accurate', and `can_be_null' fields in
   the pattern buffer.

   Returns 0 if we succeed, -2 if an internal error.   */

int
re_compile_fastmap (bufp)
     struct re_pattern_buffer *bufp;
{
  int j, k;
#ifdef MATCH_MAY_ALLOCATE
  fail_stack_type fail_stack;
#endif
#ifndef REGEX_MALLOC
  char *destination;
#endif

  register char *fastmap = bufp->fastmap;
  unsigned char *pattern = bufp->buffer;
  unsigned char *p = pattern;
  register unsigned char *pend = pattern + bufp->used;

#ifdef REL_ALLOC
  /* This holds the pointer to the failure stack, when
     it is allocated relocatably.  */
  fail_stack_elt_t *failure_stack_ptr;
#endif

  /* Assume that each path through the pattern can be null until
     proven otherwise.  We set this false at the bottom of switch
     statement, to which we get only if a particular path doesn't
     match the empty string.  */
  boolean path_can_be_null = true;

  /* We aren't doing a `succeed_n' to begin with.  */
  boolean succeed_n_p = false;

  assert (fastmap != NULL && p != NULL);

  INIT_FAIL_STACK ();
  bzero (fastmap, 1 << BYTEWIDTH);  /* Assume nothing's valid.  */
  bufp->fastmap_accurate = 1;	    /* It will be when we're done.  */
  bufp->can_be_null = 0;

  while (1)
    {
      if (p == pend || *p == succeed)
	{
	  /* We have reached the (effective) end of pattern.  */
	  if (!FAIL_STACK_EMPTY ())
	    {
	      bufp->can_be_null |= path_can_be_null;

	      /* Reset for next path.  */
	      path_can_be_null = true;

	      p = fail_stack.stack[--fail_stack.avail].pointer;

	      continue;
	    }
	  else
	    break;
	}

      /* We should never be about to go beyond the end of the pattern.  */
      assert (p < pend);

      switch (SWITCH_ENUM_CAST ((re_opcode_t) *p++))
	{

        /* I guess the idea here is to simply not bother with a fastmap
           if a backreference is used, since it's too hard to figure out
           the fastmap for the corresponding group.  Setting
           `can_be_null' stops `re_search_2' from using the fastmap, so
           that is all we do.  */
	case duplicate:
	  bufp->can_be_null = 1;
          goto done;


      /* Following are the cases which match a character.  These end
         with `break'.  */

	case exactn:
          fastmap[p[1]] = 1;
	  break;


        case charset:
          for (j = *p++ * BYTEWIDTH - 1; j >= 0; j--)
	    if (p[j / BYTEWIDTH] & (1 << (j % BYTEWIDTH)))
              fastmap[j] = 1;
	  break;


	case charset_not:
	  /* Chars beyond end of map must be allowed.  */
	  for (j = *p * BYTEWIDTH; j < (1 << BYTEWIDTH); j++)
            fastmap[j] = 1;

	  for (j = *p++ * BYTEWIDTH - 1; j >= 0; j--)
	    if (!(p[j / BYTEWIDTH] & (1 << (j % BYTEWIDTH))))
              fastmap[j] = 1;
          break;


	case wordchar:
	  for (j = 0; j < (1 << BYTEWIDTH); j++)
	    if (SYNTAX (j) == Sword)
	      fastmap[j] = 1;
	  break;


	case notwordchar:
	  for (j = 0; j < (1 << BYTEWIDTH); j++)
	    if (SYNTAX (j) != Sword)
	      fastmap[j] = 1;
	  break;


        case anychar:
	  {
	    int fastmap_newline = fastmap['\n'];

	    /* `.' matches anything ...  */
	    for (j = 0; j < (1 << BYTEWIDTH); j++)
	      fastmap[j] = 1;

	    /* ... except perhaps newline.  */
	    if (!(bufp->syntax & RE_DOT_NEWLINE))
	      fastmap['\n'] = fastmap_newline;

	    /* Return if we have already set `can_be_null'; if we have,
	       then the fastmap is irrelevant.  Something's wrong here.  */
	    else if (bufp->can_be_null)
	      goto done;

	    /* Otherwise, have to check alternative paths.  */
	    break;
	  }

#ifdef emacs
        case syntaxspec:
	  k = *p++;
	  for (j = 0; j < (1 << BYTEWIDTH); j++)
	    if (SYNTAX (j) == (enum syntaxcode) k)
	      fastmap[j] = 1;
	  break;


	case notsyntaxspec:
	  k = *p++;
	  for (j = 0; j < (1 << BYTEWIDTH); j++)
	    if (SYNTAX (j) != (enum syntaxcode) k)
	      fastmap[j] = 1;
	  break;


      /* All cases after this match the empty string.  These end with
         `continue'.  */


	case before_dot:
	case at_dot:
	case after_dot:
          continue;
#endif /* emacs */


        case no_op:
        case begline:
        case endline:
	case begbuf:
	case endbuf:
	case wordbound:
	case notwordbound:
	case wordbeg:
	case wordend:
        case push_dummy_failure:
          continue;


	case jump_n:
        case pop_failure_jump:
	case maybe_pop_jump:
	case jump:
        case jump_past_alt:
	case dummy_failure_jump:
          EXTRACT_NUMBER_AND_INCR (j, p);
	  p += j;
	  if (j > 0)
	    continue;

          /* Jump backward implies we just went through the body of a
             loop and matched nothing.  Opcode jumped to should be
             `on_failure_jump' or `succeed_n'.  Just treat it like an
             ordinary jump.  For a * loop, it has pushed its failure
             point already; if so, discard that as redundant.  */
          if ((re_opcode_t) *p != on_failure_jump
	      && (re_opcode_t) *p != succeed_n)
	    continue;

          p++;
          EXTRACT_NUMBER_AND_INCR (j, p);
          p += j;

          /* If what's on the stack is where we are now, pop it.  */
          if (!FAIL_STACK_EMPTY ()
	      && fail_stack.stack[fail_stack.avail - 1].pointer == p)
            fail_stack.avail--;

          continue;


        case on_failure_jump:
        case on_failure_keep_string_jump:
	handle_on_failure_jump:
          EXTRACT_NUMBER_AND_INCR (j, p);

          /* For some patterns, e.g., `(a?)?', `p+j' here points to the
             end of the pattern.  We don't want to push such a point,
             since when we restore it above, entering the switch will
             increment `p' past the end of the pattern.  We don't need
             to push such a point since we obviously won't find any more
             fastmap entries beyond `pend'.  Such a pattern can match
             the null string, though.  */
          if (p + j < pend)
            {
              if (!PUSH_PATTERN_OP (p + j, fail_stack))
		{
		  RESET_FAIL_STACK ();
		  return -2;
		}
            }
          else
            bufp->can_be_null = 1;

          if (succeed_n_p)
            {
              EXTRACT_NUMBER_AND_INCR (k, p);	/* Skip the n.  */
              succeed_n_p = false;
	    }

          continue;


	case succeed_n:
          /* Get to the number of times to succeed.  */
          p += 2;

          /* Increment p past the n for when k != 0.  */
          EXTRACT_NUMBER_AND_INCR (k, p);
          if (k == 0)
	    {
              p -= 4;
  	      succeed_n_p = true;  /* Spaghetti code alert.  */
              goto handle_on_failure_jump;
            }
          continue;


	case set_number_at:
          p += 4;
          continue;


	case start_memory:
        case stop_memory:
	  p += 2;
	  continue;


	default:
          abort (); /* We have listed all the cases.  */
        } /* switch *p++ */

      /* Getting here means we have found the possible starting
         characters for one path of the pattern -- and that the empty
         string does not match.  We need not follow this path further.
         Instead, look at the next alternative (remembered on the
         stack), or quit if no more.  The test at the top of the loop
         does these things.  */
      path_can_be_null = false;
      p = pend;
    } /* while p */

  /* Set `can_be_null' for the last path (also the first path, if the
     pattern is empty).  */
  bufp->can_be_null |= path_can_be_null;

 done:
  RESET_FAIL_STACK ();
  return 0;
} /* re_compile_fastmap */
#ifdef _LIBC
weak_alias (__re_compile_fastmap, re_compile_fastmap)
#endif

/* Set REGS to hold NUM_REGS registers, storing them in STARTS and
   ENDS.  Subsequent matches using PATTERN_BUFFER and REGS will use
   this memory for recording register information.  STARTS and ENDS
   must be allocated using the malloc library routine, and must each
   be at least NUM_REGS * sizeof (regoff_t) bytes long.

   If NUM_REGS == 0, then subsequent matches should allocate their own
   register data.

   Unless this function is called, the first search or match using
   PATTERN_BUFFER will allocate its own register data, without
   freeing the old data.  */

void
re_set_registers (bufp, regs, num_regs, starts, ends)
    struct re_pattern_buffer *bufp;
    struct re_registers *regs;
    unsigned num_regs;
    regoff_t *starts, *ends;
{
  if (num_regs)
    {
      bufp->regs_allocated = REGS_REALLOCATE;
      regs->num_regs = num_regs;
      regs->start = starts;
      regs->end = ends;
    }
  else
    {
      bufp->regs_allocated = REGS_UNALLOCATED;
      regs->num_regs = 0;
      regs->start = regs->end = (regoff_t *) 0;
    }
}
#ifdef _LIBC
weak_alias (__re_set_registers, re_set_registers)
#endif

/* Searching routines.  */

/* Like re_search_2, below, but only one string is specified, and
   doesn't let you say where to stop matching. */

int
re_search (bufp, string, size, startpos, range, regs)
     struct re_pattern_buffer *bufp;
     const char *string;
     int size, startpos, range;
     struct re_registers *regs;
{
  return re_search_2 (bufp, NULL, 0, string, size, startpos, range,
		      regs, size);
}
#ifdef _LIBC
weak_alias (__re_search, re_search)
#endif


/* Using the compiled pattern in BUFP->buffer, first tries to match the
   virtual concatenation of STRING1 and STRING2, starting first at index
   STARTPOS, then at STARTPOS + 1, and so on.

   STRING1 and STRING2 have length SIZE1 and SIZE2, respectively.

   RANGE is how far to scan while trying to match.  RANGE = 0 means try
   only at STARTPOS; in general, the last start tried is STARTPOS +
   RANGE.

   In REGS, return the indices of the virtual concatenation of STRING1
   and STRING2 that matched the entire BUFP->buffer and its contained
   subexpressions.

   Do not consider matching one past the index STOP in the virtual
   concatenation of STRING1 and STRING2.

   We return either the position in the strings at which the match was
   found, -1 if no match, or -2 if error (such as failure
   stack overflow).  */

int
re_search_2 (bufp, string1, size1, string2, size2, startpos, range, regs, stop)
     struct re_pattern_buffer *bufp;
     const char *string1, *string2;
     int size1, size2;
     int startpos;
     int range;
     struct re_registers *regs;
     int stop;
{
  int val;
  register char *fastmap = bufp->fastmap;
  register RE_TRANSLATE_TYPE translate = bufp->translate;
  int total_size = size1 + size2;
  int endpos = startpos + range;

  /* Check for out-of-range STARTPOS.  */
  if (startpos < 0 || startpos > total_size)
    return -1;

  /* Fix up RANGE if it might eventually take us outside
     the virtual concatenation of STRING1 and STRING2.
     Make sure we won't move STARTPOS below 0 or above TOTAL_SIZE.  */
  if (endpos < 0)
    range = 0 - startpos;
  else if (endpos > total_size)
    range = total_size - startpos;

  /* If the search isn't to be a backwards one, don't waste time in a
     search for a pattern that must be anchored.  */
  if (bufp->used > 0 && range > 0
      && ((re_opcode_t) bufp->buffer[0] == begbuf
	  /* `begline' is like `begbuf' if it cannot match at newlines.  */
	  || ((re_opcode_t) bufp->buffer[0] == begline
	      && !bufp->newline_anchor)))
    {
      if (startpos > 0)
	return -1;
      else
	range = 1;
    }

#ifdef emacs
  /* In a forward search for something that starts with \=.
     don't keep searching past point.  */
  if (bufp->used > 0 && (re_opcode_t) bufp->buffer[0] == at_dot && range > 0)
    {
      range = PT - startpos;
      if (range <= 0)
	return -1;
    }
#endif /* emacs */

  /* Update the fastmap now if not correct already.  */
  if (fastmap && !bufp->fastmap_accurate)
    if (re_compile_fastmap (bufp) == -2)
      return -2;

  /* Loop through the string, looking for a place to start matching.  */
  for (;;)
    {
      /* If a fastmap is supplied, skip quickly over characters that
         cannot be the start of a match.  If the pattern can match the
         null string, however, we don't need to skip characters; we want
         the first null string.  */
      if (fastmap && startpos < total_size && !bufp->can_be_null)
	{
	  if (range > 0)	/* Searching forwards.  */
	    {
	      register const char *d;
	      register int lim = 0;
	      int irange = range;

              if (startpos < size1 && startpos + range >= size1)
                lim = range - (size1 - startpos);

	      d = (startpos >= size1 ? string2 - size1 : string1) + startpos;

              /* Written out as an if-else to avoid testing `translate'
                 inside the loop.  */
	      if (translate)
                while (range > lim
                       && !fastmap[(unsigned char)
				   translate[(unsigned char) *d++]])
                  range--;
	      else
                while (range > lim && !fastmap[(unsigned char) *d++])
                  range--;

	      startpos += irange - range;
	    }
	  else				/* Searching backwards.  */
	    {
	      register char c = (size1 == 0 || startpos >= size1
                                 ? string2[startpos - size1]
                                 : string1[startpos]);

	      if (!fastmap[(unsigned char) TRANSLATE (c)])
		goto advance;
	    }
	}

      /* If can't match the null string, and that's all we have left, fail.  */
      if (range >= 0 && startpos == total_size && fastmap
          && !bufp->can_be_null)
	return -1;

      val = re_match_2_internal (bufp, string1, size1, string2, size2,
				 startpos, regs, stop);
#ifndef REGEX_MALLOC
# ifdef C_ALLOCA
      alloca (0);
# endif
#endif

      if (val >= 0)
	return startpos;

      if (val == -2)
	return -2;

    advance:
      if (!range)
        break;
      else if (range > 0)
        {
          range--;
          startpos++;
        }
      else
        {
          range++;
          startpos--;
        }
    }
  return -1;
} /* re_search_2 */
#ifdef _LIBC
weak_alias (__re_search_2, re_search_2)
#endif

/* This converts PTR, a pointer into one of the search strings `string1'
   and `string2' into an offset from the beginning of that string.  */
#define POINTER_TO_OFFSET(ptr)			\
  (FIRST_STRING_P (ptr)				\
   ? ((regoff_t) ((ptr) - string1))		\
   : ((regoff_t) ((ptr) - string2 + size1)))

/* Macros for dealing with the split strings in re_match_2.  */

#define MATCHING_IN_FIRST_STRING  (dend == end_match_1)

/* Call before fetching a character with *d.  This switches over to
   string2 if necessary.  */
#define PREFETCH()							\
  while (d == dend)						    	\
    {									\
      /* End of string2 => fail.  */					\
      if (dend == end_match_2) 						\
        goto fail;							\
      /* End of string1 => advance to string2.  */ 			\
      d = string2;						        \
      dend = end_match_2;						\
    }


/* Test if at very beginning or at very end of the virtual concatenation
   of `string1' and `string2'.  If only one string, it's `string2'.  */
#define AT_STRINGS_BEG(d) ((d) == (size1 ? string1 : string2) || !size2)
#define AT_STRINGS_END(d) ((d) == end2)


/* Test if D points to a character which is word-constituent.  We have
   two special cases to check for: if past the end of string1, look at
   the first character in string2; and if before the beginning of
   string2, look at the last character in string1.  */
#define WORDCHAR_P(d)							\
  (SYNTAX ((d) == end1 ? *string2					\
           : (d) == string2 - 1 ? *(end1 - 1) : *(d))			\
   == Sword)

/* Disabled due to a compiler bug -- see comment at case wordbound */
#if 0
/* Test if the character before D and the one at D differ with respect
   to being word-constituent.  */
#define AT_WORD_BOUNDARY(d)						\
  (AT_STRINGS_BEG (d) || AT_STRINGS_END (d)				\
   || WORDCHAR_P (d - 1) != WORDCHAR_P (d))
#endif

/* Free everything we malloc.  */
#ifdef MATCH_MAY_ALLOCATE
# define FREE_VAR(var) if (var) REGEX_FREE (var); var = NULL
# define FREE_VARIABLES()						\
  do {									\
    REGEX_FREE_STACK (fail_stack.stack);				\
    FREE_VAR (regstart);						\
    FREE_VAR (regend);							\
    FREE_VAR (old_regstart);						\
    FREE_VAR (old_regend);						\
    FREE_VAR (best_regstart);						\
    FREE_VAR (best_regend);						\
    FREE_VAR (reg_info);						\
    FREE_VAR (reg_dummy);						\
    FREE_VAR (reg_info_dummy);						\
  } while (0)
#else
# define FREE_VARIABLES() ((void)0) /* Do nothing!  But inhibit gcc warning. */
#endif /* not MATCH_MAY_ALLOCATE */

/* These values must meet several constraints.  They must not be valid
   register values; since we have a limit of 255 registers (because
   we use only one byte in the pattern for the register number), we can
   use numbers larger than 255.  They must differ by 1, because of
   NUM_FAILURE_ITEMS above.  And the value for the lowest register must
   be larger than the value for the highest register, so we do not try
   to actually save any registers when none are active.  */
#define NO_HIGHEST_ACTIVE_REG (1 << BYTEWIDTH)
#define NO_LOWEST_ACTIVE_REG (NO_HIGHEST_ACTIVE_REG + 1)

/* Matching routines.  */

#ifndef emacs   /* Emacs never uses this.  */
/* re_match is like re_match_2 except it takes only a single string.  */

int
re_match (bufp, string, size, pos, regs)
     struct re_pattern_buffer *bufp;
     const char *string;
     int size, pos;
     struct re_registers *regs;
{
  int result = re_match_2_internal (bufp, NULL, 0, string, size,
				    pos, regs, size);
# ifndef REGEX_MALLOC
#  ifdef C_ALLOCA
  alloca (0);
#  endif
# endif
  return result;
}
# ifdef _LIBC
weak_alias (__re_match, re_match)
# endif
#endif /* not emacs */

static boolean group_match_null_string_p _RE_ARGS ((unsigned char **p,
						    unsigned char *end,
						register_info_type *reg_info));
static boolean alt_match_null_string_p _RE_ARGS ((unsigned char *p,
						  unsigned char *end,
						register_info_type *reg_info));
static boolean common_op_match_null_string_p _RE_ARGS ((unsigned char **p,
							unsigned char *end,
						register_info_type *reg_info));
static int bcmp_translate _RE_ARGS ((const char *s1, const char *s2,
				     int len, char *translate));

/* re_match_2 matches the compiled pattern in BUFP against the
   the (virtual) concatenation of STRING1 and STRING2 (of length SIZE1
   and SIZE2, respectively).  We start matching at POS, and stop
   matching at STOP.

   If REGS is non-null and the `no_sub' field of BUFP is nonzero, we
   store offsets for the substring each group matched in REGS.  See the
   documentation for exactly how many groups we fill.

   We return -1 if no match, -2 if an internal error (such as the
   failure stack overflowing).  Otherwise, we return the length of the
   matched substring.  */

int
re_match_2 (bufp, string1, size1, string2, size2, pos, regs, stop)
     struct re_pattern_buffer *bufp;
     const char *string1, *string2;
     int size1, size2;
     int pos;
     struct re_registers *regs;
     int stop;
{
  int result = re_match_2_internal (bufp, string1, size1, string2, size2,
				    pos, regs, stop);
#ifndef REGEX_MALLOC
# ifdef C_ALLOCA
  alloca (0);
# endif
#endif
  return result;
}
#ifdef _LIBC
weak_alias (__re_match_2, re_match_2)
#endif

/* This is a separate function so that we can force an alloca cleanup
   afterwards.  */
static int
re_match_2_internal (bufp, string1, size1, string2, size2, pos, regs, stop)
     struct re_pattern_buffer *bufp;
     const char *string1, *string2;
     int size1, size2;
     int pos;
     struct re_registers *regs;
     int stop;
{
  /* General temporaries.  */
  int mcnt;
  unsigned char *p1;

  /* Just past the end of the corresponding string.  */
  const char *end1, *end2;

  /* Pointers into string1 and string2, just past the last characters in
     each to consider matching.  */
  const char *end_match_1, *end_match_2;

  /* Where we are in the data, and the end of the current string.  */
  const char *d, *dend;

  /* Where we are in the pattern, and the end of the pattern.  */
  unsigned char *p = bufp->buffer;
  register unsigned char *pend = p + bufp->used;

  /* Mark the opcode just after a start_memory, so we can test for an
     empty subpattern when we get to the stop_memory.  */
  unsigned char *just_past_start_mem = 0;

  /* We use this to map every character in the string.  */
  RE_TRANSLATE_TYPE translate = bufp->translate;

  /* Failure point stack.  Each place that can handle a failure further
     down the line pushes a failure point on this stack.  It consists of
     restart, regend, and reg_info for all registers corresponding to
     the subexpressions we're currently inside, plus the number of such
     registers, and, finally, two char *'s.  The first char * is where
     to resume scanning the pattern; the second one is where to resume
     scanning the strings.  If the latter is zero, the failure point is
     a ``dummy''; if a failure happens and the failure point is a dummy,
     it gets discarded and the next next one is tried.  */
#ifdef MATCH_MAY_ALLOCATE /* otherwise, this is global.  */
  fail_stack_type fail_stack;
#endif
#ifdef DEBUG
  static unsigned failure_id;
  unsigned nfailure_points_pushed = 0, nfailure_points_popped = 0;
#endif

#ifdef REL_ALLOC
  /* This holds the pointer to the failure stack, when
     it is allocated relocatably.  */
  fail_stack_elt_t *failure_stack_ptr;
#endif

  /* We fill all the registers internally, independent of what we
     return, for use in backreferences.  The number here includes
     an element for register zero.  */
  size_t num_regs = bufp->re_nsub + 1;

  /* The currently active registers.  */
  active_reg_t lowest_active_reg = NO_LOWEST_ACTIVE_REG;
  active_reg_t highest_active_reg = NO_HIGHEST_ACTIVE_REG;

  /* Information on the contents of registers. These are pointers into
     the input strings; they record just what was matched (on this
     attempt) by a subexpression part of the pattern, that is, the
     regnum-th regstart pointer points to where in the pattern we began
     matching and the regnum-th regend points to right after where we
     stopped matching the regnum-th subexpression.  (The zeroth register
     keeps track of what the whole pattern matches.)  */
#ifdef MATCH_MAY_ALLOCATE /* otherwise, these are global.  */
  const char **regstart, **regend;
#endif

  /* If a group that's operated upon by a repetition operator fails to
     match anything, then the register for its start will need to be
     restored because it will have been set to wherever in the string we
     are when we last see its open-group operator.  Similarly for a
     register's end.  */
#ifdef MATCH_MAY_ALLOCATE /* otherwise, these are global.  */
  const char **old_regstart, **old_regend;
#endif

  /* The is_active field of reg_info helps us keep track of which (possibly
     nested) subexpressions we are currently in. The matched_something
     field of reg_info[reg_num] helps us tell whether or not we have
     matched any of the pattern so far this time through the reg_num-th
     subexpression.  These two fields get reset each time through any
     loop their register is in.  */
#ifdef MATCH_MAY_ALLOCATE /* otherwise, this is global.  */
  register_info_type *reg_info;
#endif

  /* The following record the register info as found in the above
     variables when we find a match better than any we've seen before.
     This happens as we backtrack through the failure points, which in
     turn happens only if we have not yet matched the entire string. */
  unsigned best_regs_set = false;
#ifdef MATCH_MAY_ALLOCATE /* otherwise, these are global.  */
  const char **best_regstart, **best_regend;
#endif

  /* Logically, this is `best_regend[0]'.  But we don't want to have to
     allocate space for that if we're not allocating space for anything
     else (see below).  Also, we never need info about register 0 for
     any of the other register vectors, and it seems rather a kludge to
     treat `best_regend' differently than the rest.  So we keep track of
     the end of the best match so far in a separate variable.  We
     initialize this to NULL so that when we backtrack the first time
     and need to test it, it's not garbage.  */
  const char *match_end = NULL;

  /* This helps SET_REGS_MATCHED avoid doing redundant work.  */
  int set_regs_matched_done = 0;

  /* Used when we pop values we don't care about.  */
#ifdef MATCH_MAY_ALLOCATE /* otherwise, these are global.  */
  const char **reg_dummy;
  register_info_type *reg_info_dummy;
#endif

#ifdef DEBUG
  /* Counts the total number of registers pushed.  */
  unsigned num_regs_pushed = 0;
#endif

  DEBUG_PRINT1 ("\n\nEntering re_match_2.\n");

  INIT_FAIL_STACK ();

#ifdef MATCH_MAY_ALLOCATE
  /* Do not bother to initialize all the register variables if there are
     no groups in the pattern, as it takes a fair amount of time.  If
     there are groups, we include space for register 0 (the whole
     pattern), even though we never use it, since it simplifies the
     array indexing.  We should fix this.  */
  if (bufp->re_nsub)
    {
      regstart = REGEX_TALLOC (num_regs, const char *);
      regend = REGEX_TALLOC (num_regs, const char *);
      old_regstart = REGEX_TALLOC (num_regs, const char *);
      old_regend = REGEX_TALLOC (num_regs, const char *);
      best_regstart = REGEX_TALLOC (num_regs, const char *);
      best_regend = REGEX_TALLOC (num_regs, const char *);
      reg_info = REGEX_TALLOC (num_regs, register_info_type);
      reg_dummy = REGEX_TALLOC (num_regs, const char *);
      reg_info_dummy = REGEX_TALLOC (num_regs, register_info_type);

      if (!(regstart && regend && old_regstart && old_regend && reg_info
            && best_regstart && best_regend && reg_dummy && reg_info_dummy))
        {
          FREE_VARIABLES ();
          return -2;
        }
    }
  else
    {
      /* We must initialize all our variables to NULL, so that
         `FREE_VARIABLES' doesn't try to free them.  */
      regstart = regend = old_regstart = old_regend = best_regstart
        = best_regend = reg_dummy = NULL;
      reg_info = reg_info_dummy = (register_info_type *) NULL;
    }
#endif /* MATCH_MAY_ALLOCATE */

  /* The starting position is bogus.  */
  if (pos < 0 || pos > size1 + size2)
    {
      FREE_VARIABLES ();
      return -1;
    }

  /* Initialize subexpression text positions to -1 to mark ones that no
     start_memory/stop_memory has been seen for. Also initialize the
     register information struct.  */
  for (mcnt = 1; (unsigned) mcnt < num_regs; mcnt++)
    {
      regstart[mcnt] = regend[mcnt]
        = old_regstart[mcnt] = old_regend[mcnt] = REG_UNSET_VALUE;

      REG_MATCH_NULL_STRING_P (reg_info[mcnt]) = MATCH_NULL_UNSET_VALUE;
      IS_ACTIVE (reg_info[mcnt]) = 0;
      MATCHED_SOMETHING (reg_info[mcnt]) = 0;
      EVER_MATCHED_SOMETHING (reg_info[mcnt]) = 0;
    }

  /* We move `string1' into `string2' if the latter's empty -- but not if
     `string1' is null.  */
  if (size2 == 0 && string1 != NULL)
    {
      string2 = string1;
      size2 = size1;
      string1 = 0;
      size1 = 0;
    }
  end1 = string1 + size1;
  end2 = string2 + size2;

  /* Compute where to stop matching, within the two strings.  */
  if (stop <= size1)
    {
      end_match_1 = string1 + stop;
      end_match_2 = string2;
    }
  else
    {
      end_match_1 = end1;
      end_match_2 = string2 + stop - size1;
    }

  /* `p' scans through the pattern as `d' scans through the data.
     `dend' is the end of the input string that `d' points within.  `d'
     is advanced into the following input string whenever necessary, but
     this happens before fetching; therefore, at the beginning of the
     loop, `d' can be pointing at the end of a string, but it cannot
     equal `string2'.  */
  if (size1 > 0 && pos <= size1)
    {
      d = string1 + pos;
      dend = end_match_1;
    }
  else
    {
      d = string2 + pos - size1;
      dend = end_match_2;
    }

  DEBUG_PRINT1 ("The compiled pattern is:\n");
  DEBUG_PRINT_COMPILED_PATTERN (bufp, p, pend);
  DEBUG_PRINT1 ("The string to match is: `");
  DEBUG_PRINT_DOUBLE_STRING (d, string1, size1, string2, size2);
  DEBUG_PRINT1 ("'\n");

  /* This loops over pattern commands.  It exits by returning from the
     function if the match is complete, or it drops through if the match
     fails at this starting point in the input data.  */
  for (;;)
    {
#ifdef _LIBC
      DEBUG_PRINT2 ("\n%p: ", p);
#else
      DEBUG_PRINT2 ("\n0x%x: ", p);
#endif

      if (p == pend)
	{ /* End of pattern means we might have succeeded.  */
          DEBUG_PRINT1 ("end of pattern ... ");

	  /* If we haven't matched the entire string, and we want the
             longest match, try backtracking.  */
          if (d != end_match_2)
	    {
	      /* 1 if this match ends in the same string (string1 or string2)
		 as the best previous match.  */
	      boolean same_str_p = (FIRST_STRING_P (match_end)
				    == MATCHING_IN_FIRST_STRING);
	      /* 1 if this match is the best seen so far.  */
	      boolean best_match_p;

	      /* AIX compiler got confused when this was combined
		 with the previous declaration.  */
	      if (same_str_p)
		best_match_p = d > match_end;
	      else
		best_match_p = !MATCHING_IN_FIRST_STRING;

              DEBUG_PRINT1 ("backtracking.\n");

              if (!FAIL_STACK_EMPTY ())
                { /* More failure points to try.  */

                  /* If exceeds best match so far, save it.  */
                  if (!best_regs_set || best_match_p)
                    {
                      best_regs_set = true;
                      match_end = d;

                      DEBUG_PRINT1 ("\nSAVING match as best so far.\n");

                      for (mcnt = 1; (unsigned) mcnt < num_regs; mcnt++)
                        {
                          best_regstart[mcnt] = regstart[mcnt];
                          best_regend[mcnt] = regend[mcnt];
                        }
                    }
                  goto fail;
                }

              /* If no failure points, don't restore garbage.  And if
                 last match is real best match, don't restore second
                 best one. */
              else if (best_regs_set && !best_match_p)
                {
  	        restore_best_regs:
                  /* Restore best match.  It may happen that `dend ==
                     end_match_1' while the restored d is in string2.
                     For example, the pattern `x.*y.*z' against the
                     strings `x-' and `y-z-', if the two strings are
                     not consecutive in memory.  */
                  DEBUG_PRINT1 ("Restoring best registers.\n");

                  d = match_end;
                  dend = ((d >= string1 && d <= end1)
		           ? end_match_1 : end_match_2);

		  for (mcnt = 1; (unsigned) mcnt < num_regs; mcnt++)
		    {
		      regstart[mcnt] = best_regstart[mcnt];
		      regend[mcnt] = best_regend[mcnt];
		    }
                }
            } /* d != end_match_2 */

	succeed_label:
          DEBUG_PRINT1 ("Accepting match.\n");

          /* If caller wants register contents data back, do it.  */
          if (regs && !bufp->no_sub)
	    {
              /* Have the register data arrays been allocated?  */
              if (bufp->regs_allocated == REGS_UNALLOCATED)
                { /* No.  So allocate them with malloc.  We need one
                     extra element beyond `num_regs' for the `-1' marker
                     GNU code uses.  */
                  regs->num_regs = MAX (RE_NREGS, num_regs + 1);
                  regs->start = TALLOC (regs->num_regs, regoff_t);
                  regs->end = TALLOC (regs->num_regs, regoff_t);
                  if (regs->start == NULL || regs->end == NULL)
		    {
		      FREE_VARIABLES ();
		      return -2;
		    }
                  bufp->regs_allocated = REGS_REALLOCATE;
                }
              else if (bufp->regs_allocated == REGS_REALLOCATE)
                { /* Yes.  If we need more elements than were already
                     allocated, reallocate them.  If we need fewer, just
                     leave it alone.  */
                  if (regs->num_regs < num_regs + 1)
                    {
                      regs->num_regs = num_regs + 1;
                      RETALLOC (regs->start, regs->num_regs, regoff_t);
                      RETALLOC (regs->end, regs->num_regs, regoff_t);
                      if (regs->start == NULL || regs->end == NULL)
			{
			  FREE_VARIABLES ();
			  return -2;
			}
                    }
                }
              else
		{
		  /* These braces fend off a "empty body in an else-statement"
		     warning under GCC when assert expands to nothing.  */
		  assert (bufp->regs_allocated == REGS_FIXED);
		}

              /* Convert the pointer data in `regstart' and `regend' to
                 indices.  Register zero has to be set differently,
                 since we haven't kept track of any info for it.  */
              if (regs->num_regs > 0)
                {
                  regs->start[0] = pos;
                  regs->end[0] = (MATCHING_IN_FIRST_STRING
				  ? ((regoff_t) (d - string1))
			          : ((regoff_t) (d - string2 + size1)));
                }

              /* Go through the first `min (num_regs, regs->num_regs)'
                 registers, since that is all we initialized.  */
	      for (mcnt = 1; (unsigned) mcnt < MIN (num_regs, regs->num_regs);
		   mcnt++)
		{
                  if (REG_UNSET (regstart[mcnt]) || REG_UNSET (regend[mcnt]))
                    regs->start[mcnt] = regs->end[mcnt] = -1;
                  else
                    {
		      regs->start[mcnt]
			= (regoff_t) POINTER_TO_OFFSET (regstart[mcnt]);
                      regs->end[mcnt]
			= (regoff_t) POINTER_TO_OFFSET (regend[mcnt]);
                    }
		}

              /* If the regs structure we return has more elements than
                 were in the pattern, set the extra elements to -1.  If
                 we (re)allocated the registers, this is the case,
                 because we always allocate enough to have at least one
                 -1 at the end.  */
              for (mcnt = num_regs; (unsigned) mcnt < regs->num_regs; mcnt++)
                regs->start[mcnt] = regs->end[mcnt] = -1;
	    } /* regs && !bufp->no_sub */

          DEBUG_PRINT4 ("%u failure points pushed, %u popped (%u remain).\n",
                        nfailure_points_pushed, nfailure_points_popped,
                        nfailure_points_pushed - nfailure_points_popped);
          DEBUG_PRINT2 ("%u registers pushed.\n", num_regs_pushed);

          mcnt = d - pos - (MATCHING_IN_FIRST_STRING
			    ? string1
			    : string2 - size1);

          DEBUG_PRINT2 ("Returning %d from re_match_2.\n", mcnt);

          FREE_VARIABLES ();
          return mcnt;
        }

      /* Otherwise match next pattern command.  */
      switch (SWITCH_ENUM_CAST ((re_opcode_t) *p++))
	{
        /* Ignore these.  Used to ignore the n of succeed_n's which
           currently have n == 0.  */
        case no_op:
          DEBUG_PRINT1 ("EXECUTING no_op.\n");
          break;

	case succeed:
          DEBUG_PRINT1 ("EXECUTING succeed.\n");
	  goto succeed_label;

        /* Match the next n pattern characters exactly.  The following
           byte in the pattern defines n, and the n bytes after that
           are the characters to match.  */
	case exactn:
	  mcnt = *p++;
          DEBUG_PRINT2 ("EXECUTING exactn %d.\n", mcnt);

          /* This is written out as an if-else so we don't waste time
             testing `translate' inside the loop.  */
          if (translate)
	    {
	      do
		{
		  PREFETCH ();
		  if ((unsigned char) translate[(unsigned char) *d++]
		      != (unsigned char) *p++)
                    goto fail;
		}
	      while (--mcnt);
	    }
	  else
	    {
	      do
		{
		  PREFETCH ();
		  if (*d++ != (char) *p++) goto fail;
		}
	      while (--mcnt);
	    }
	  SET_REGS_MATCHED ();
          break;


        /* Match any character except possibly a newline or a null.  */
	case anychar:
          DEBUG_PRINT1 ("EXECUTING anychar.\n");

          PREFETCH ();

          if ((!(bufp->syntax & RE_DOT_NEWLINE) && TRANSLATE (*d) == '\n')
              || (bufp->syntax & RE_DOT_NOT_NULL && TRANSLATE (*d) == '\000'))
	    goto fail;

          SET_REGS_MATCHED ();
          DEBUG_PRINT2 ("  Matched `%d'.\n", *d);
          d++;
	  break;


	case charset:
	case charset_not:
	  {
	    register unsigned char c;
	    boolean not = (re_opcode_t) *(p - 1) == charset_not;

            DEBUG_PRINT2 ("EXECUTING charset%s.\n", not ? "_not" : "");

	    PREFETCH ();
	    c = TRANSLATE (*d); /* The character to match.  */

            /* Cast to `unsigned' instead of `unsigned char' in case the
               bit list is a full 32 bytes long.  */
	    if (c < (unsigned) (*p * BYTEWIDTH)
		&& p[1 + c / BYTEWIDTH] & (1 << (c % BYTEWIDTH)))
	      not = !not;

	    p += 1 + *p;

	    if (!not) goto fail;

	    SET_REGS_MATCHED ();
            d++;
	    break;
	  }


        /* The beginning of a group is represented by start_memory.
           The arguments are the register number in the next byte, and the
           number of groups inner to this one in the next.  The text
           matched within the group is recorded (in the internal
           registers data structure) under the register number.  */
        case start_memory:
	  DEBUG_PRINT3 ("EXECUTING start_memory %d (%d):\n", *p, p[1]);

          /* Find out if this group can match the empty string.  */
	  p1 = p;		/* To send to group_match_null_string_p.  */

          if (REG_MATCH_NULL_STRING_P (reg_info[*p]) == MATCH_NULL_UNSET_VALUE)
            REG_MATCH_NULL_STRING_P (reg_info[*p])
              = group_match_null_string_p (&p1, pend, reg_info);

          /* Save the position in the string where we were the last time
             we were at this open-group operator in case the group is
             operated upon by a repetition operator, e.g., with `(a*)*b'
             against `ab'; then we want to ignore where we are now in
             the string in case this attempt to match fails.  */
          old_regstart[*p] = REG_MATCH_NULL_STRING_P (reg_info[*p])
                             ? REG_UNSET (regstart[*p]) ? d : regstart[*p]
                             : regstart[*p];
	  DEBUG_PRINT2 ("  old_regstart: %d\n",
			 POINTER_TO_OFFSET (old_regstart[*p]));

          regstart[*p] = d;
	  DEBUG_PRINT2 ("  regstart: %d\n", POINTER_TO_OFFSET (regstart[*p]));

          IS_ACTIVE (reg_info[*p]) = 1;
          MATCHED_SOMETHING (reg_info[*p]) = 0;

	  /* Clear this whenever we change the register activity status.  */
	  set_regs_matched_done = 0;

          /* This is the new highest active register.  */
          highest_active_reg = *p;

          /* If nothing was active before, this is the new lowest active
             register.  */
          if (lowest_active_reg == NO_LOWEST_ACTIVE_REG)
            lowest_active_reg = *p;

          /* Move past the register number and inner group count.  */
          p += 2;
	  just_past_start_mem = p;

          break;


        /* The stop_memory opcode represents the end of a group.  Its
           arguments are the same as start_memory's: the register
           number, and the number of inner groups.  */
	case stop_memory:
	  DEBUG_PRINT3 ("EXECUTING stop_memory %d (%d):\n", *p, p[1]);

          /* We need to save the string position the last time we were at
             this close-group operator in case the group is operated
             upon by a repetition operator, e.g., with `((a*)*(b*)*)*'
             against `aba'; then we want to ignore where we are now in
             the string in case this attempt to match fails.  */
          old_regend[*p] = REG_MATCH_NULL_STRING_P (reg_info[*p])
                           ? REG_UNSET (regend[*p]) ? d : regend[*p]
			   : regend[*p];
	  DEBUG_PRINT2 ("      old_regend: %d\n",
			 POINTER_TO_OFFSET (old_regend[*p]));

          regend[*p] = d;
	  DEBUG_PRINT2 ("      regend: %d\n", POINTER_TO_OFFSET (regend[*p]));

          /* This register isn't active anymore.  */
          IS_ACTIVE (reg_info[*p]) = 0;

	  /* Clear this whenever we change the register activity status.  */
	  set_regs_matched_done = 0;

          /* If this was the only register active, nothing is active
             anymore.  */
          if (lowest_active_reg == highest_active_reg)
            {
              lowest_active_reg = NO_LOWEST_ACTIVE_REG;
              highest_active_reg = NO_HIGHEST_ACTIVE_REG;
            }
          else
            { /* We must scan for the new highest active register, since
                 it isn't necessarily one less than now: consider
                 (a(b)c(d(e)f)g).  When group 3 ends, after the f), the
                 new highest active register is 1.  */
              unsigned char r = *p - 1;
              while (r > 0 && !IS_ACTIVE (reg_info[r]))
                r--;

              /* If we end up at register zero, that means that we saved
                 the registers as the result of an `on_failure_jump', not
                 a `start_memory', and we jumped to past the innermost
                 `stop_memory'.  For example, in ((.)*) we save
                 registers 1 and 2 as a result of the *, but when we pop
                 back to the second ), we are at the stop_memory 1.
                 Thus, nothing is active.  */
	      if (r == 0)
                {
                  lowest_active_reg = NO_LOWEST_ACTIVE_REG;
                  highest_active_reg = NO_HIGHEST_ACTIVE_REG;
                }
              else
                highest_active_reg = r;
            }

          /* If just failed to match something this time around with a
             group that's operated on by a repetition operator, try to
             force exit from the ``loop'', and restore the register
             information for this group that we had before trying this
             last match.  */
          if ((!MATCHED_SOMETHING (reg_info[*p])
               || just_past_start_mem == p - 1)
	      && (p + 2) < pend)
            {
              boolean is_a_jump_n = false;

              p1 = p + 2;
              mcnt = 0;
              switch ((re_opcode_t) *p1++)
                {
                  case jump_n:
		    is_a_jump_n = true;
                  case pop_failure_jump:
		  case maybe_pop_jump:
		  case jump:
		  case dummy_failure_jump:
                    EXTRACT_NUMBER_AND_INCR (mcnt, p1);
		    if (is_a_jump_n)
		      p1 += 2;
                    break;

                  default:
                    /* do nothing */ ;
                }
	      p1 += mcnt;

              /* If the next operation is a jump backwards in the pattern
	         to an on_failure_jump right before the start_memory
                 corresponding to this stop_memory, exit from the loop
                 by forcing a failure after pushing on the stack the
                 on_failure_jump's jump in the pattern, and d.  */
              if (mcnt < 0 && (re_opcode_t) *p1 == on_failure_jump
                  && (re_opcode_t) p1[3] == start_memory && p1[4] == *p)
		{
                  /* If this group ever matched anything, then restore
                     what its registers were before trying this last
                     failed match, e.g., with `(a*)*b' against `ab' for
                     regstart[1], and, e.g., with `((a*)*(b*)*)*'
                     against `aba' for regend[3].

                     Also restore the registers for inner groups for,
                     e.g., `((a*)(b*))*' against `aba' (register 3 would
                     otherwise get trashed).  */

                  if (EVER_MATCHED_SOMETHING (reg_info[*p]))
		    {
		      unsigned r;

                      EVER_MATCHED_SOMETHING (reg_info[*p]) = 0;

		      /* Restore this and inner groups' (if any) registers.  */
                      for (r = *p; r < (unsigned) *p + (unsigned) *(p + 1);
			   r++)
                        {
                          regstart[r] = old_regstart[r];

                          /* xx why this test?  */
                          if (old_regend[r] >= regstart[r])
                            regend[r] = old_regend[r];
                        }
                    }
		  p1++;
                  EXTRACT_NUMBER_AND_INCR (mcnt, p1);
                  PUSH_FAILURE_POINT (p1 + mcnt, d, -2);

                  goto fail;
                }
            }

          /* Move past the register number and the inner group count.  */
          p += 2;
          break;


	/* \<digit> has been turned into a `duplicate' command which is
           followed by the numeric value of <digit> as the register number.  */
        case duplicate:
	  {
	    register const char *d2, *dend2;
	    int regno = *p++;   /* Get which register to match against.  */
	    DEBUG_PRINT2 ("EXECUTING duplicate %d.\n", regno);

	    /* Can't back reference a group which we've never matched.  */
            if (REG_UNSET (regstart[regno]) || REG_UNSET (regend[regno]))
              goto fail;

            /* Where in input to try to start matching.  */
            d2 = regstart[regno];

            /* Where to stop matching; if both the place to start and
               the place to stop matching are in the same string, then
               set to the place to stop, otherwise, for now have to use
               the end of the first string.  */

            dend2 = ((FIRST_STRING_P (regstart[regno])
		      == FIRST_STRING_P (regend[regno]))
		     ? regend[regno] : end_match_1);
	    for (;;)
	      {
		/* If necessary, advance to next segment in register
                   contents.  */
		while (d2 == dend2)
		  {
		    if (dend2 == end_match_2) break;
		    if (dend2 == regend[regno]) break;

                    /* End of string1 => advance to string2. */
                    d2 = string2;
                    dend2 = regend[regno];
		  }
		/* At end of register contents => success */
		if (d2 == dend2) break;

		/* If necessary, advance to next segment in data.  */
		PREFETCH ();

		/* How many characters left in this segment to match.  */
		mcnt = dend - d;

		/* Want how many consecutive characters we can match in
                   one shot, so, if necessary, adjust the count.  */
                if (mcnt > dend2 - d2)
		  mcnt = dend2 - d2;

		/* Compare that many; failure if mismatch, else move
                   past them.  */
		if (translate
                    ? bcmp_translate (d, d2, mcnt, translate)
                    : memcmp (d, d2, mcnt))
		  goto fail;
		d += mcnt, d2 += mcnt;

		/* Do this because we've match some characters.  */
		SET_REGS_MATCHED ();
	      }
	  }
	  break;


        /* begline matches the empty string at the beginning of the string
           (unless `not_bol' is set in `bufp'), and, if
           `newline_anchor' is set, after newlines.  */
	case begline:
          DEBUG_PRINT1 ("EXECUTING begline.\n");

          if (AT_STRINGS_BEG (d))
            {
              if (!bufp->not_bol) break;
            }
          else if (d[-1] == '\n' && bufp->newline_anchor)
            {
              break;
            }
          /* In all other cases, we fail.  */
          goto fail;


        /* endline is the dual of begline.  */
	case endline:
          DEBUG_PRINT1 ("EXECUTING endline.\n");

          if (AT_STRINGS_END (d))
            {
              if (!bufp->not_eol) break;
            }

          /* We have to ``prefetch'' the next character.  */
          else if ((d == end1 ? *string2 : *d) == '\n'
                   && bufp->newline_anchor)
            {
              break;
            }
          goto fail;


	/* Match at the very beginning of the data.  */
        case begbuf:
          DEBUG_PRINT1 ("EXECUTING begbuf.\n");
          if (AT_STRINGS_BEG (d))
            break;
          goto fail;


	/* Match at the very end of the data.  */
        case endbuf:
          DEBUG_PRINT1 ("EXECUTING endbuf.\n");
	  if (AT_STRINGS_END (d))
	    break;
          goto fail;


        /* on_failure_keep_string_jump is used to optimize `.*\n'.  It
           pushes NULL as the value for the string on the stack.  Then
           `pop_failure_point' will keep the current value for the
           string, instead of restoring it.  To see why, consider
           matching `foo\nbar' against `.*\n'.  The .* matches the foo;
           then the . fails against the \n.  But the next thing we want
           to do is match the \n against the \n; if we restored the
           string value, we would be back at the foo.

           Because this is used only in specific cases, we don't need to
           check all the things that `on_failure_jump' does, to make
           sure the right things get saved on the stack.  Hence we don't
           share its code.  The only reason to push anything on the
           stack at all is that otherwise we would have to change
           `anychar's code to do something besides goto fail in this
           case; that seems worse than this.  */
        case on_failure_keep_string_jump:
          DEBUG_PRINT1 ("EXECUTING on_failure_keep_string_jump");

          EXTRACT_NUMBER_AND_INCR (mcnt, p);
#ifdef _LIBC
          DEBUG_PRINT3 (" %d (to %p):\n", mcnt, p + mcnt);
#else
          DEBUG_PRINT3 (" %d (to 0x%x):\n", mcnt, p + mcnt);
#endif

          PUSH_FAILURE_POINT (p + mcnt, NULL, -2);
          break;


	/* Uses of on_failure_jump:

           Each alternative starts with an on_failure_jump that points
           to the beginning of the next alternative.  Each alternative
           except the last ends with a jump that in effect jumps past
           the rest of the alternatives.  (They really jump to the
           ending jump of the following alternative, because tensioning
           these jumps is a hassle.)

           Repeats start with an on_failure_jump that points past both
           the repetition text and either the following jump or
           pop_failure_jump back to this on_failure_jump.  */
	case on_failure_jump:
        on_failure:
          DEBUG_PRINT1 ("EXECUTING on_failure_jump");

          EXTRACT_NUMBER_AND_INCR (mcnt, p);
#ifdef _LIBC
          DEBUG_PRINT3 (" %d (to %p)", mcnt, p + mcnt);
#else
          DEBUG_PRINT3 (" %d (to 0x%x)", mcnt, p + mcnt);
#endif

          /* If this on_failure_jump comes right before a group (i.e.,
             the original * applied to a group), save the information
             for that group and all inner ones, so that if we fail back
             to this point, the group's information will be correct.
             For example, in \(a*\)*\1, we need the preceding group,
             and in \(zz\(a*\)b*\)\2, we need the inner group.  */

          /* We can't use `p' to check ahead because we push
             a failure point to `p + mcnt' after we do this.  */
          p1 = p;

          /* We need to skip no_op's before we look for the
             start_memory in case this on_failure_jump is happening as
             the result of a completed succeed_n, as in \(a\)\{1,3\}b\1
             against aba.  */
          while (p1 < pend && (re_opcode_t) *p1 == no_op)
            p1++;

          if (p1 < pend && (re_opcode_t) *p1 == start_memory)
            {
              /* We have a new highest active register now.  This will
                 get reset at the start_memory we are about to get to,
                 but we will have saved all the registers relevant to
                 this repetition op, as described above.  */
              highest_active_reg = *(p1 + 1) + *(p1 + 2);
              if (lowest_active_reg == NO_LOWEST_ACTIVE_REG)
                lowest_active_reg = *(p1 + 1);
            }

          DEBUG_PRINT1 (":\n");
          PUSH_FAILURE_POINT (p + mcnt, d, -2);
          break;


        /* A smart repeat ends with `maybe_pop_jump'.
	   We change it to either `pop_failure_jump' or `jump'.  */
        case maybe_pop_jump:
          EXTRACT_NUMBER_AND_INCR (mcnt, p);
          DEBUG_PRINT2 ("EXECUTING maybe_pop_jump %d.\n", mcnt);
          {
	    register unsigned char *p2 = p;

            /* Compare the beginning of the repeat with what in the
               pattern follows its end. If we can establish that there
               is nothing that they would both match, i.e., that we
               would have to backtrack because of (as in, e.g., `a*a')
               then we can change to pop_failure_jump, because we'll
               never have to backtrack.

               This is not true in the case of alternatives: in
               `(a|ab)*' we do need to backtrack to the `ab' alternative
               (e.g., if the string was `ab').  But instead of trying to
               detect that here, the alternative has put on a dummy
               failure point which is what we will end up popping.  */

	    /* Skip over open/close-group commands.
	       If what follows this loop is a ...+ construct,
	       look at what begins its body, since we will have to
	       match at least one of that.  */
	    while (1)
	      {
		if (p2 + 2 < pend
		    && ((re_opcode_t) *p2 == stop_memory
			|| (re_opcode_t) *p2 == start_memory))
		  p2 += 3;
		else if (p2 + 6 < pend
			 && (re_opcode_t) *p2 == dummy_failure_jump)
		  p2 += 6;
		else
		  break;
	      }

	    p1 = p + mcnt;
	    /* p1[0] ... p1[2] are the `on_failure_jump' corresponding
	       to the `maybe_finalize_jump' of this case.  Examine what
	       follows.  */

            /* If we're at the end of the pattern, we can change.  */
            if (p2 == pend)
	      {
		/* Consider what happens when matching ":\(.*\)"
		   against ":/".  I don't really understand this code
		   yet.  */
  	        p[-3] = (unsigned char) pop_failure_jump;
                DEBUG_PRINT1
                  ("  End of pattern: change to `pop_failure_jump'.\n");
              }

            else if ((re_opcode_t) *p2 == exactn
		     || (bufp->newline_anchor && (re_opcode_t) *p2 == endline))
	      {
		register unsigned char c
                  = *p2 == (unsigned char) endline ? '\n' : p2[2];

                if ((re_opcode_t) p1[3] == exactn && p1[5] != c)
                  {
  		    p[-3] = (unsigned char) pop_failure_jump;
                    DEBUG_PRINT3 ("  %c != %c => pop_failure_jump.\n",
                                  c, p1[5]);
                  }

		else if ((re_opcode_t) p1[3] == charset
			 || (re_opcode_t) p1[3] == charset_not)
		  {
		    int not = (re_opcode_t) p1[3] == charset_not;

		    if (c < (unsigned char) (p1[4] * BYTEWIDTH)
			&& p1[5 + c / BYTEWIDTH] & (1 << (c % BYTEWIDTH)))
		      not = !not;

                    /* `not' is equal to 1 if c would match, which means
                        that we can't change to pop_failure_jump.  */
		    if (!not)
                      {
  		        p[-3] = (unsigned char) pop_failure_jump;
                        DEBUG_PRINT1 ("  No match => pop_failure_jump.\n");
                      }
		  }
	      }
            else if ((re_opcode_t) *p2 == charset)
	      {
		/* We win if the first character of the loop is not part
                   of the charset.  */
                if ((re_opcode_t) p1[3] == exactn
		    && ! ((int) p2[1] * BYTEWIDTH > (int) p1[5]
			  && (p2[2 + p1[5] / BYTEWIDTH]
			      & (1 << (p1[5] % BYTEWIDTH)))))
                  {
  		    p[-3] = (unsigned char) pop_failure_jump;
		    DEBUG_PRINT1 ("  No match => pop_failure_jump.\n");
                  }

		else if ((re_opcode_t) p1[3] == charset_not)
		  {
		    int idx;
		    /* We win if the charset_not inside the loop
		       lists every character listed in the charset after.  */
		    for (idx = 0; idx < (int) p2[1]; idx++)
		      if (! (p2[2 + idx] == 0
			     || (idx < (int) p1[4]
				 && ((p2[2 + idx] & ~ p1[5 + idx]) == 0))))
			break;

		    if (idx == p2[1])
                      {
  		        p[-3] = (unsigned char) pop_failure_jump;
                        DEBUG_PRINT1 ("  No match => pop_failure_jump.\n");
                      }
		  }
		else if ((re_opcode_t) p1[3] == charset)
		  {
		    int idx;
		    /* We win if the charset inside the loop
		       has no overlap with the one after the loop.  */
		    for (idx = 0;
			 idx < (int) p2[1] && idx < (int) p1[4];
			 idx++)
		      if ((p2[2 + idx] & p1[5 + idx]) != 0)
			break;

		    if (idx == p2[1] || idx == p1[4])
                      {
  		        p[-3] = (unsigned char) pop_failure_jump;
                        DEBUG_PRINT1 ("  No match => pop_failure_jump.\n");
                      }
		  }
	      }
	  }
	  p -= 2;		/* Point at relative address again.  */
	  if ((re_opcode_t) p[-1] != pop_failure_jump)
	    {
	      p[-1] = (unsigned char) jump;
              DEBUG_PRINT1 ("  Match => jump.\n");
	      goto unconditional_jump;
	    }
        /* Note fall through.  */


	/* The end of a simple repeat has a pop_failure_jump back to
           its matching on_failure_jump, where the latter will push a
           failure point.  The pop_failure_jump takes off failure
           points put on by this pop_failure_jump's matching
           on_failure_jump; we got through the pattern to here from the
           matching on_failure_jump, so didn't fail.  */
        case pop_failure_jump:
          {
            /* We need to pass separate storage for the lowest and
               highest registers, even though we don't care about the
               actual values.  Otherwise, we will restore only one
               register from the stack, since lowest will == highest in
               `pop_failure_point'.  */
            active_reg_t dummy_low_reg, dummy_high_reg;
            unsigned char *pdummy;
            const char *sdummy;

            DEBUG_PRINT1 ("EXECUTING pop_failure_jump.\n");
            POP_FAILURE_POINT (sdummy, pdummy,
                               dummy_low_reg, dummy_high_reg,
                               reg_dummy, reg_dummy, reg_info_dummy);
          }
	  /* Note fall through.  */

	unconditional_jump:
#ifdef _LIBC
	  DEBUG_PRINT2 ("\n%p: ", p);
#else
	  DEBUG_PRINT2 ("\n0x%x: ", p);
#endif
          /* Note fall through.  */

        /* Unconditionally jump (without popping any failure points).  */
        case jump:
	  EXTRACT_NUMBER_AND_INCR (mcnt, p);	/* Get the amount to jump.  */
          DEBUG_PRINT2 ("EXECUTING jump %d ", mcnt);
	  p += mcnt;				/* Do the jump.  */
#ifdef _LIBC
          DEBUG_PRINT2 ("(to %p).\n", p);
#else
          DEBUG_PRINT2 ("(to 0x%x).\n", p);
#endif
	  break;


        /* We need this opcode so we can detect where alternatives end
           in `group_match_null_string_p' et al.  */
        case jump_past_alt:
          DEBUG_PRINT1 ("EXECUTING jump_past_alt.\n");
          goto unconditional_jump;


        /* Normally, the on_failure_jump pushes a failure point, which
           then gets popped at pop_failure_jump.  We will end up at
           pop_failure_jump, also, and with a pattern of, say, `a+', we
           are skipping over the on_failure_jump, so we have to push
           something meaningless for pop_failure_jump to pop.  */
        case dummy_failure_jump:
          DEBUG_PRINT1 ("EXECUTING dummy_failure_jump.\n");
          /* It doesn't matter what we push for the string here.  What
             the code at `fail' tests is the value for the pattern.  */
          PUSH_FAILURE_POINT (NULL, NULL, -2);
          goto unconditional_jump;


        /* At the end of an alternative, we need to push a dummy failure
           point in case we are followed by a `pop_failure_jump', because
           we don't want the failure point for the alternative to be
           popped.  For example, matching `(a|ab)*' against `aab'
           requires that we match the `ab' alternative.  */
        case push_dummy_failure:
          DEBUG_PRINT1 ("EXECUTING push_dummy_failure.\n");
          /* See comments just above at `dummy_failure_jump' about the
             two zeroes.  */
          PUSH_FAILURE_POINT (NULL, NULL, -2);
          break;

        /* Have to succeed matching what follows at least n times.
           After that, handle like `on_failure_jump'.  */
        case succeed_n:
          EXTRACT_NUMBER (mcnt, p + 2);
          DEBUG_PRINT2 ("EXECUTING succeed_n %d.\n", mcnt);

          assert (mcnt >= 0);
          /* Originally, this is how many times we HAVE to succeed.  */
          if (mcnt > 0)
            {
               mcnt--;
	       p += 2;
               STORE_NUMBER_AND_INCR (p, mcnt);
#ifdef _LIBC
               DEBUG_PRINT3 ("  Setting %p to %d.\n", p - 2, mcnt);
#else
               DEBUG_PRINT3 ("  Setting 0x%x to %d.\n", p - 2, mcnt);
#endif
            }
	  else if (mcnt == 0)
            {
#ifdef _LIBC
              DEBUG_PRINT2 ("  Setting two bytes from %p to no_op.\n", p+2);
#else
              DEBUG_PRINT2 ("  Setting two bytes from 0x%x to no_op.\n", p+2);
#endif
	      p[2] = (unsigned char) no_op;
              p[3] = (unsigned char) no_op;
              goto on_failure;
            }
          break;

        case jump_n:
          EXTRACT_NUMBER (mcnt, p + 2);
          DEBUG_PRINT2 ("EXECUTING jump_n %d.\n", mcnt);

          /* Originally, this is how many times we CAN jump.  */
          if (mcnt)
            {
               mcnt--;
               STORE_NUMBER (p + 2, mcnt);
#ifdef _LIBC
               DEBUG_PRINT3 ("  Setting %p to %d.\n", p + 2, mcnt);
#else
               DEBUG_PRINT3 ("  Setting 0x%x to %d.\n", p + 2, mcnt);
#endif
	       goto unconditional_jump;
            }
          /* If don't have to jump any more, skip over the rest of command.  */
	  else
	    p += 4;
          break;

	case set_number_at:
	  {
            DEBUG_PRINT1 ("EXECUTING set_number_at.\n");

            EXTRACT_NUMBER_AND_INCR (mcnt, p);
            p1 = p + mcnt;
            EXTRACT_NUMBER_AND_INCR (mcnt, p);
#ifdef _LIBC
            DEBUG_PRINT3 ("  Setting %p to %d.\n", p1, mcnt);
#else
            DEBUG_PRINT3 ("  Setting 0x%x to %d.\n", p1, mcnt);
#endif
	    STORE_NUMBER (p1, mcnt);
            break;
          }

#if 0
	/* The DEC Alpha C compiler 3.x generates incorrect code for the
	   test  WORDCHAR_P (d - 1) != WORDCHAR_P (d)  in the expansion of
	   AT_WORD_BOUNDARY, so this code is disabled.  Expanding the
	   macro and introducing temporary variables works around the bug.  */

	case wordbound:
	  DEBUG_PRINT1 ("EXECUTING wordbound.\n");
	  if (AT_WORD_BOUNDARY (d))
	    break;
	  goto fail;

	case notwordbound:
	  DEBUG_PRINT1 ("EXECUTING notwordbound.\n");
	  if (AT_WORD_BOUNDARY (d))
	    goto fail;
	  break;
#else
	case wordbound:
	{
	  boolean prevchar, thischar;

	  DEBUG_PRINT1 ("EXECUTING wordbound.\n");
	  if (AT_STRINGS_BEG (d) || AT_STRINGS_END (d))
	    break;

	  prevchar = WORDCHAR_P (d - 1);
	  thischar = WORDCHAR_P (d);
	  if (prevchar != thischar)
	    break;
	  goto fail;
	}

      case notwordbound:
	{
	  boolean prevchar, thischar;

	  DEBUG_PRINT1 ("EXECUTING notwordbound.\n");
	  if (AT_STRINGS_BEG (d) || AT_STRINGS_END (d))
	    goto fail;

	  prevchar = WORDCHAR_P (d - 1);
	  thischar = WORDCHAR_P (d);
	  if (prevchar != thischar)
	    goto fail;
	  break;
	}
#endif

	case wordbeg:
          DEBUG_PRINT1 ("EXECUTING wordbeg.\n");
	  if (WORDCHAR_P (d) && (AT_STRINGS_BEG (d) || !WORDCHAR_P (d - 1)))
	    break;
          goto fail;

	case wordend:
          DEBUG_PRINT1 ("EXECUTING wordend.\n");
	  if (!AT_STRINGS_BEG (d) && WORDCHAR_P (d - 1)
              && (!WORDCHAR_P (d) || AT_STRINGS_END (d)))
	    break;
          goto fail;

#ifdef emacs
  	case before_dot:
          DEBUG_PRINT1 ("EXECUTING before_dot.\n");
 	  if (PTR_CHAR_POS ((unsigned char *) d) >= point)
  	    goto fail;
  	  break;

  	case at_dot:
          DEBUG_PRINT1 ("EXECUTING at_dot.\n");
 	  if (PTR_CHAR_POS ((unsigned char *) d) != point)
  	    goto fail;
  	  break;

  	case after_dot:
          DEBUG_PRINT1 ("EXECUTING after_dot.\n");
          if (PTR_CHAR_POS ((unsigned char *) d) <= point)
  	    goto fail;
  	  break;

	case syntaxspec:
          DEBUG_PRINT2 ("EXECUTING syntaxspec %d.\n", mcnt);
	  mcnt = *p++;
	  goto matchsyntax;

        case wordchar:
          DEBUG_PRINT1 ("EXECUTING Emacs wordchar.\n");
	  mcnt = (int) Sword;
        matchsyntax:
	  PREFETCH ();
	  /* Can't use *d++ here; SYNTAX may be an unsafe macro.  */
	  d++;
	  if (SYNTAX (d[-1]) != (enum syntaxcode) mcnt)
	    goto fail;
          SET_REGS_MATCHED ();
	  break;

	case notsyntaxspec:
          DEBUG_PRINT2 ("EXECUTING notsyntaxspec %d.\n", mcnt);
	  mcnt = *p++;
	  goto matchnotsyntax;

        case notwordchar:
          DEBUG_PRINT1 ("EXECUTING Emacs notwordchar.\n");
	  mcnt = (int) Sword;
        matchnotsyntax:
	  PREFETCH ();
	  /* Can't use *d++ here; SYNTAX may be an unsafe macro.  */
	  d++;
	  if (SYNTAX (d[-1]) == (enum syntaxcode) mcnt)
	    goto fail;
	  SET_REGS_MATCHED ();
          break;

#else /* not emacs */
	case wordchar:
          DEBUG_PRINT1 ("EXECUTING non-Emacs wordchar.\n");
	  PREFETCH ();
          if (!WORDCHAR_P (d))
            goto fail;
	  SET_REGS_MATCHED ();
          d++;
	  break;

	case notwordchar:
          DEBUG_PRINT1 ("EXECUTING non-Emacs notwordchar.\n");
	  PREFETCH ();
	  if (WORDCHAR_P (d))
            goto fail;
          SET_REGS_MATCHED ();
          d++;
	  break;
#endif /* not emacs */

        default:
          abort ();
	}
      continue;  /* Successfully executed one pattern command; keep going.  */


    /* We goto here if a matching operation fails. */
    fail:
      if (!FAIL_STACK_EMPTY ())
	{ /* A restart point is known.  Restore to that state.  */
          DEBUG_PRINT1 ("\nFAIL:\n");
          POP_FAILURE_POINT (d, p,
                             lowest_active_reg, highest_active_reg,
                             regstart, regend, reg_info);

          /* If this failure point is a dummy, try the next one.  */
          if (!p)
	    goto fail;

          /* If we failed to the end of the pattern, don't examine *p.  */
	  assert (p <= pend);
          if (p < pend)
            {
              boolean is_a_jump_n = false;

              /* If failed to a backwards jump that's part of a repetition
                 loop, need to pop this failure point and use the next one.  */
              switch ((re_opcode_t) *p)
                {
                case jump_n:
                  is_a_jump_n = true;
                case maybe_pop_jump:
                case pop_failure_jump:
                case jump:
                  p1 = p + 1;
                  EXTRACT_NUMBER_AND_INCR (mcnt, p1);
                  p1 += mcnt;

                  if ((is_a_jump_n && (re_opcode_t) *p1 == succeed_n)
                      || (!is_a_jump_n
                          && (re_opcode_t) *p1 == on_failure_jump))
                    goto fail;
                  break;
                default:
                  /* do nothing */ ;
                }
            }

          if (d >= string1 && d <= end1)
	    dend = end_match_1;
        }
      else
        break;   /* Matching at this starting point really fails.  */
    } /* for (;;) */

  if (best_regs_set)
    goto restore_best_regs;

  FREE_VARIABLES ();

  return -1;         			/* Failure to match.  */
} /* re_match_2 */

/* Subroutine definitions for re_match_2.  */


/* We are passed P pointing to a register number after a start_memory.

   Return true if the pattern up to the corresponding stop_memory can
   match the empty string, and false otherwise.

   If we find the matching stop_memory, sets P to point to one past its number.
   Otherwise, sets P to an undefined byte less than or equal to END.

   We don't handle duplicates properly (yet).  */

static boolean
group_match_null_string_p (p, end, reg_info)
    unsigned char **p, *end;
    register_info_type *reg_info;
{
  int mcnt;
  /* Point to after the args to the start_memory.  */
  unsigned char *p1 = *p + 2;

  while (p1 < end)
    {
      /* Skip over opcodes that can match nothing, and return true or
	 false, as appropriate, when we get to one that can't, or to the
         matching stop_memory.  */

      switch ((re_opcode_t) *p1)
        {
        /* Could be either a loop or a series of alternatives.  */
        case on_failure_jump:
          p1++;
          EXTRACT_NUMBER_AND_INCR (mcnt, p1);

          /* If the next operation is not a jump backwards in the
	     pattern.  */

	  if (mcnt >= 0)
	    {
              /* Go through the on_failure_jumps of the alternatives,
                 seeing if any of the alternatives cannot match nothing.
                 The last alternative starts with only a jump,
                 whereas the rest start with on_failure_jump and end
                 with a jump, e.g., here is the pattern for `a|b|c':

                 /on_failure_jump/0/6/exactn/1/a/jump_past_alt/0/6
                 /on_failure_jump/0/6/exactn/1/b/jump_past_alt/0/3
                 /exactn/1/c

                 So, we have to first go through the first (n-1)
                 alternatives and then deal with the last one separately.  */


              /* Deal with the first (n-1) alternatives, which start
                 with an on_failure_jump (see above) that jumps to right
                 past a jump_past_alt.  */

              while ((re_opcode_t) p1[mcnt-3] == jump_past_alt)
                {
                  /* `mcnt' holds how many bytes long the alternative
                     is, including the ending `jump_past_alt' and
                     its number.  */

                  if (!alt_match_null_string_p (p1, p1 + mcnt - 3,
				                      reg_info))
                    return false;

                  /* Move to right after this alternative, including the
		     jump_past_alt.  */
                  p1 += mcnt;

                  /* Break if it's the beginning of an n-th alternative
                     that doesn't begin with an on_failure_jump.  */
                  if ((re_opcode_t) *p1 != on_failure_jump)
                    break;

		  /* Still have to check that it's not an n-th
		     alternative that starts with an on_failure_jump.  */
		  p1++;
                  EXTRACT_NUMBER_AND_INCR (mcnt, p1);
                  if ((re_opcode_t) p1[mcnt-3] != jump_past_alt)
                    {
		      /* Get to the beginning of the n-th alternative.  */
                      p1 -= 3;
                      break;
                    }
                }

              /* Deal with the last alternative: go back and get number
                 of the `jump_past_alt' just before it.  `mcnt' contains
                 the length of the alternative.  */
              EXTRACT_NUMBER (mcnt, p1 - 2);

              if (!alt_match_null_string_p (p1, p1 + mcnt, reg_info))
                return false;

              p1 += mcnt;	/* Get past the n-th alternative.  */
            } /* if mcnt > 0 */
          break;


        case stop_memory:
	  assert (p1[1] == **p);
          *p = p1 + 2;
          return true;


        default:
          if (!common_op_match_null_string_p (&p1, end, reg_info))
            return false;
        }
    } /* while p1 < end */

  return false;
} /* group_match_null_string_p */


/* Similar to group_match_null_string_p, but doesn't deal with alternatives:
   It expects P to be the first byte of a single alternative and END one
   byte past the last. The alternative can contain groups.  */

static boolean
alt_match_null_string_p (p, end, reg_info)
    unsigned char *p, *end;
    register_info_type *reg_info;
{
  int mcnt;
  unsigned char *p1 = p;

  while (p1 < end)
    {
      /* Skip over opcodes that can match nothing, and break when we get
         to one that can't.  */

      switch ((re_opcode_t) *p1)
        {
	/* It's a loop.  */
        case on_failure_jump:
          p1++;
          EXTRACT_NUMBER_AND_INCR (mcnt, p1);
          p1 += mcnt;
          break;

	default:
          if (!common_op_match_null_string_p (&p1, end, reg_info))
            return false;
        }
    }  /* while p1 < end */

  return true;
} /* alt_match_null_string_p */


/* Deals with the ops common to group_match_null_string_p and
   alt_match_null_string_p.

   Sets P to one after the op and its arguments, if any.  */

static boolean
common_op_match_null_string_p (p, end, reg_info)
    unsigned char **p, *end;
    register_info_type *reg_info;
{
  int mcnt;
  boolean ret;
  int reg_no;
  unsigned char *p1 = *p;

  switch ((re_opcode_t) *p1++)
    {
    case no_op:
    case begline:
    case endline:
    case begbuf:
    case endbuf:
    case wordbeg:
    case wordend:
    case wordbound:
    case notwordbound:
#ifdef emacs
    case before_dot:
    case at_dot:
    case after_dot:
#endif
      break;

    case start_memory:
      reg_no = *p1;
      assert (reg_no > 0 && reg_no <= MAX_REGNUM);
      ret = group_match_null_string_p (&p1, end, reg_info);

      /* Have to set this here in case we're checking a group which
         contains a group and a back reference to it.  */

      if (REG_MATCH_NULL_STRING_P (reg_info[reg_no]) == MATCH_NULL_UNSET_VALUE)
        REG_MATCH_NULL_STRING_P (reg_info[reg_no]) = ret;

      if (!ret)
        return false;
      break;

    /* If this is an optimized succeed_n for zero times, make the jump.  */
    case jump:
      EXTRACT_NUMBER_AND_INCR (mcnt, p1);
      if (mcnt >= 0)
        p1 += mcnt;
      else
        return false;
      break;

    case succeed_n:
      /* Get to the number of times to succeed.  */
      p1 += 2;
      EXTRACT_NUMBER_AND_INCR (mcnt, p1);

      if (mcnt == 0)
        {
          p1 -= 4;
          EXTRACT_NUMBER_AND_INCR (mcnt, p1);
          p1 += mcnt;
        }
      else
        return false;
      break;

    case duplicate:
      if (!REG_MATCH_NULL_STRING_P (reg_info[*p1]))
        return false;
      break;

    case set_number_at:
      p1 += 4;

    default:
      /* All other opcodes mean we cannot match the empty string.  */
      return false;
  }

  *p = p1;
  return true;
} /* common_op_match_null_string_p */


/* Return zero if TRANSLATE[S1] and TRANSLATE[S2] are identical for LEN
   bytes; nonzero otherwise.  */

static int
bcmp_translate (s1, s2, len, translate)
     const char *s1, *s2;
     register int len;
     RE_TRANSLATE_TYPE translate;
{
  register const unsigned char *p1 = (const unsigned char *) s1;
  register const unsigned char *p2 = (const unsigned char *) s2;
  while (len)
    {
      if (translate[*p1++] != translate[*p2++]) return 1;
      len--;
    }
  return 0;
}

/* Entry points for GNU code.  */

/* re_compile_pattern is the GNU regular expression compiler: it
   compiles PATTERN (of length SIZE) and puts the result in BUFP.
   Returns 0 if the pattern was valid, otherwise an error string.

   Assumes the `allocated' (and perhaps `buffer') and `translate' fields
   are set in BUFP on entry.

   We call regex_compile to do the actual compilation.  */

const char *
re_compile_pattern (pattern, length, bufp)
     const char *pattern;
     size_t length;
     struct re_pattern_buffer *bufp;
{
  reg_errcode_t ret;

  /* GNU code is written to assume at least RE_NREGS registers will be set
     (and at least one extra will be -1).  */
  bufp->regs_allocated = REGS_UNALLOCATED;

  /* And GNU code determines whether or not to get register information
     by passing null for the REGS argument to re_match, etc., not by
     setting no_sub.  */
  bufp->no_sub = 0;

  /* Match anchors at newline.  */
  bufp->newline_anchor = 1;

  ret = regex_compile (pattern, length, re_syntax_options, bufp);

  if (!ret)
    return NULL;
  return gettext (re_error_msgid[(int) ret]);
}
#ifdef _LIBC
weak_alias (__re_compile_pattern, re_compile_pattern)
#endif

/* Entry points compatible with 4.2 BSD regex library.  We don't define
   them unless specifically requested.  */

#if defined _REGEX_RE_COMP || defined _LIBC

/* BSD has one and only one pattern buffer.  */
static struct re_pattern_buffer re_comp_buf;

char *
#ifdef _LIBC
/* Make these definitions weak in libc, so POSIX programs can redefine
   these names if they don't use our functions, and still use
   regcomp/regexec below without link errors.  */
weak_function
#endif
re_comp (s)
    const char *s;
{
  reg_errcode_t ret;

  if (!s)
    {
      if (!re_comp_buf.buffer)
	return gettext ("No previous regular expression");
      return 0;
    }

  if (!re_comp_buf.buffer)
    {
      re_comp_buf.buffer = (unsigned char *) malloc (200);
      if (re_comp_buf.buffer == NULL)
        return (char *) gettext (re_error_msgid[(int) REG_ESPACE]);
      re_comp_buf.allocated = 200;

      re_comp_buf.fastmap = (char *) malloc (1 << BYTEWIDTH);
      if (re_comp_buf.fastmap == NULL)
	return (char *) gettext (re_error_msgid[(int) REG_ESPACE]);
    }

  /* Since `re_exec' always passes NULL for the `regs' argument, we
     don't need to initialize the pattern buffer fields which affect it.  */

  /* Match anchors at newlines.  */
  re_comp_buf.newline_anchor = 1;

  ret = regex_compile (s, strlen (s), re_syntax_options, &re_comp_buf);

  if (!ret)
    return NULL;

  /* Yes, we're discarding `const' here if !HAVE_LIBINTL.  */
  return (char *) gettext (re_error_msgid[(int) ret]);
}


int
#ifdef _LIBC
weak_function
#endif
re_exec (s)
    const char *s;
{
  const int len = strlen (s);
  return
    0 <= re_search (&re_comp_buf, s, len, 0, len, (struct re_registers *) 0);
}

#endif /* _REGEX_RE_COMP */

/* POSIX.2 functions.  Don't define these for Emacs.  */

#ifndef emacs

/* regcomp takes a regular expression as a string and compiles it.

   PREG is a regex_t *.  We do not expect any fields to be initialized,
   since POSIX says we shouldn't.  Thus, we set

     `buffer' to the compiled pattern;
     `used' to the length of the compiled pattern;
     `syntax' to RE_SYNTAX_POSIX_EXTENDED if the
       REG_EXTENDED bit in CFLAGS is set; otherwise, to
       RE_SYNTAX_POSIX_BASIC;
     `newline_anchor' to REG_NEWLINE being set in CFLAGS;
     `fastmap' to an allocated space for the fastmap;
     `fastmap_accurate' to zero;
     `re_nsub' to the number of subexpressions in PATTERN.

   PATTERN is the address of the pattern string.

   CFLAGS is a series of bits which affect compilation.

     If REG_EXTENDED is set, we use POSIX extended syntax; otherwise, we
     use POSIX basic syntax.

     If REG_NEWLINE is set, then . and [^...] don't match newline.
     Also, regexec will try a match beginning after every newline.

     If REG_ICASE is set, then we considers upper- and lowercase
     versions of letters to be equivalent when matching.

     If REG_NOSUB is set, then when PREG is passed to regexec, that
     routine will report only success or failure, and nothing about the
     registers.

   It returns 0 if it succeeds, nonzero if it doesn't.  (See regex.h for
   the return codes and their meanings.)  */

int
regcomp (preg, pattern, cflags)
    regex_t *preg;
    const char *pattern;
    int cflags;
{
  reg_errcode_t ret;
  reg_syntax_t syntax
    = (cflags & REG_EXTENDED) ?
      RE_SYNTAX_POSIX_EXTENDED : RE_SYNTAX_POSIX_BASIC;

  /* regex_compile will allocate the space for the compiled pattern.  */
  preg->buffer = 0;
  preg->allocated = 0;
  preg->used = 0;

  /* Try to allocate space for the fastmap.  */
  preg->fastmap = (char *) malloc (1 << BYTEWIDTH);

  if (cflags & REG_ICASE)
    {
      unsigned i;

      preg->translate
	= (RE_TRANSLATE_TYPE) malloc (CHAR_SET_SIZE
				      * sizeof (*(RE_TRANSLATE_TYPE)0));
      if (preg->translate == NULL)
        return (int) REG_ESPACE;

      /* Map uppercase characters to corresponding lowercase ones.  */
      for (i = 0; i < CHAR_SET_SIZE; i++)
        preg->translate[i] = ISUPPER (i) ? tolower (i) : i;
    }
  else
    preg->translate = NULL;

  /* If REG_NEWLINE is set, newlines are treated differently.  */
  if (cflags & REG_NEWLINE)
    { /* REG_NEWLINE implies neither . nor [^...] match newline.  */
      syntax &= ~RE_DOT_NEWLINE;
      syntax |= RE_HAT_LISTS_NOT_NEWLINE;
      /* It also changes the matching behavior.  */
      preg->newline_anchor = 1;
    }
  else
    preg->newline_anchor = 0;

  preg->no_sub = !!(cflags & REG_NOSUB);

  /* POSIX says a null character in the pattern terminates it, so we
     can use strlen here in compiling the pattern.  */
  ret = regex_compile (pattern, strlen (pattern), syntax, preg);

  /* POSIX doesn't distinguish between an unmatched open-group and an
     unmatched close-group: both are REG_EPAREN.  */
  if (ret == REG_ERPAREN) ret = REG_EPAREN;

  if (ret == REG_NOERROR && preg->fastmap)
    {
      /* Compute the fastmap now, since regexec cannot modify the pattern
	 buffer.  */
      if (re_compile_fastmap (preg) == -2)
	{
	  /* Some error occured while computing the fastmap, just forget
	     about it.  */
	  free (preg->fastmap);
	  preg->fastmap = NULL;
	}
    }

  return (int) ret;
}
#ifdef _LIBC
weak_alias (__regcomp, regcomp)
#endif


/* regexec searches for a given pattern, specified by PREG, in the
   string STRING.

   If NMATCH is zero or REG_NOSUB was set in the cflags argument to
   `regcomp', we ignore PMATCH.  Otherwise, we assume PMATCH has at
   least NMATCH elements, and we set them to the offsets of the
   corresponding matched substrings.

   EFLAGS specifies `execution flags' which affect matching: if
   REG_NOTBOL is set, then ^ does not match at the beginning of the
   string; if REG_NOTEOL is set, then $ does not match at the end.

   We return 0 if we find a match and REG_NOMATCH if not.  */

int
regexec (preg, string, nmatch, pmatch, eflags)
    const regex_t *preg;
    const char *string;
    size_t nmatch;
    regmatch_t pmatch[];
    int eflags;
{
  int ret;
  struct re_registers regs;
  regex_t private_preg;
  int len = strlen (string);
  boolean want_reg_info = !preg->no_sub && nmatch > 0;

  private_preg = *preg;

  private_preg.not_bol = !!(eflags & REG_NOTBOL);
  private_preg.not_eol = !!(eflags & REG_NOTEOL);

  /* The user has told us exactly how many registers to return
     information about, via `nmatch'.  We have to pass that on to the
     matching routines.  */
  private_preg.regs_allocated = REGS_FIXED;

  if (want_reg_info)
    {
      regs.num_regs = nmatch;
      regs.start = TALLOC (nmatch * 2, regoff_t);
      if (regs.start == NULL)
        return (int) REG_NOMATCH;
      regs.end = regs.start + nmatch;
    }

  /* Perform the searching operation.  */
  ret = re_search (&private_preg, string, len,
                   /* start: */ 0, /* range: */ len,
                   want_reg_info ? &regs : (struct re_registers *) 0);

  /* Copy the register information to the POSIX structure.  */
  if (want_reg_info)
    {
      if (ret >= 0)
        {
          unsigned r;

          for (r = 0; r < nmatch; r++)
            {
              pmatch[r].rm_so = regs.start[r];
              pmatch[r].rm_eo = regs.end[r];
            }
        }

      /* If we needed the temporary register info, free the space now.  */
      free (regs.start);
    }

  /* We want zero return to mean success, unlike `re_search'.  */
  return ret >= 0 ? (int) REG_NOERROR : (int) REG_NOMATCH;
}
#ifdef _LIBC
weak_alias (__regexec, regexec)
#endif


/* Returns a message corresponding to an error code, ERRCODE, returned
   from either regcomp or regexec.   We don't use PREG here.  */

size_t
regerror (errcode, preg, errbuf, errbuf_size)
    int errcode;
    const regex_t *preg;
    char *errbuf;
    size_t errbuf_size;
{
  const char *msg;
  size_t msg_size;

  if (errcode < 0
      || errcode >= (int) (sizeof (re_error_msgid)
			   / sizeof (re_error_msgid[0])))
    /* Only error codes returned by the rest of the code should be passed
       to this routine.  If we are given anything else, or if other regex
       code generates an invalid error code, then the program has a bug.
       Dump core so we can fix it.  */
    abort ();

  msg = gettext (re_error_msgid[errcode]);

  msg_size = strlen (msg) + 1; /* Includes the null.  */

  if (errbuf_size != 0)
    {
      if (msg_size > errbuf_size)
        {
#if defined HAVE_MEMPCPY || defined _LIBC
	  *((char *) __mempcpy (errbuf, msg, errbuf_size - 1)) = '\0';
#else
          memcpy (errbuf, msg, errbuf_size - 1);
          errbuf[errbuf_size - 1] = 0;
#endif
        }
      else
        memcpy (errbuf, msg, msg_size);
    }

  return msg_size;
}
#ifdef _LIBC
weak_alias (__regerror, regerror)
#endif


/* Free dynamically allocated space used by PREG.  */

void
regfree (preg)
    regex_t *preg;
{
  if (preg->buffer != NULL)
    free (preg->buffer);
  preg->buffer = NULL;

  preg->allocated = 0;
  preg->used = 0;

  if (preg->fastmap != NULL)
    free (preg->fastmap);
  preg->fastmap = NULL;
  preg->fastmap_accurate = 0;

  if (preg->translate != NULL)
    free (preg->translate);
  preg->translate = NULL;
}
#ifdef _LIBC
weak_alias (__regfree, regfree)
#endif

#endif /* not emacs  */
/* savedir.c -- save the list of files in a directory in a string
   Copyright (C) 1990, 1997, 1998 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

/* Written by David MacKenzie <djm@gnu.ai.mit.edu>. */

#if HAVE_CONFIG_H
#if flag_config==0
# include <config.h>
#define flag_config 1
#endif
#endif

/*#include <sys/types.h>*/

#if HAVE_UNISTD_H
# include <unistd.h>
#define flag_unistd 1
#endif

#if HAVE_DIRENT_H
# include <dirent.h>
# define NAMLEN(dirent) strlen((dirent)->d_name)
#else
# define dirent direct
# define NAMLEN(dirent) (dirent)->d_namlen
# if HAVE_SYS_NDIR_H
#  include <sys/ndir.h>
# endif
# if HAVE_SYS_DIR_H
#  include <sys/dir.h>
# endif
# if HAVE_NDIR_H
#  include <ndir.h>
# endif
#endif

#ifdef CLOSEDIR_VOID
/* Fake a return value. */
# define CLOSEDIR(d) (closedir (d), 0)
#else
# define CLOSEDIR(d) closedir (d)
#endif

#ifdef STDC_HEADERS
#if flag_stdlib==0
# include <stdlib.h>
#define flag_stdlib 1
#endif
#if flag_string==0
# include <string.h>
#define flag_string 1
#endif
#else
char *malloc ();
char *realloc ();
#endif
#ifndef NULL
# define NULL 0
#endif

#ifndef stpcpy
char *stpcpy ();
#endif

/*#include "savedir.h"*/

/* Return a freshly allocated string containing the filenames
   in directory DIR, separated by '\0' characters;
   the end is marked by two '\0' characters in a row.
   NAME_SIZE is the number of bytes to initially allocate
   for the string; it will be enlarged as needed.
   Return NULL if DIR cannot be opened or if out of memory. */

char *
savedir (dir, name_size)
     const char *dir;
     unsigned int name_size;
{
  DIR *dirp;
  struct dirent *dp;
  char *name_space;
  char *namep;

  dirp = opendir (dir);
  if (dirp == NULL)
    return NULL;

  name_space = (char *) malloc (name_size);
  if (name_space == NULL)
    {
      closedir (dirp);
      return NULL;
    }
  namep = name_space;

  while ((dp = readdir (dirp)) != NULL)
    {
      /* Skip "." and ".." (some NFS filesystems' directories lack them). */
      if (dp->d_name[0] != '.'
	  || (dp->d_name[1] != '\0'
	      && (dp->d_name[1] != '.' || dp->d_name[2] != '\0')))
	{
	  unsigned size_needed = (namep - name_space) + NAMLEN (dp) + 2;

	  if (size_needed > name_size)
	    {
	      char *new_name_space;

	      while (size_needed > name_size)
		name_size += 1024;

	      new_name_space = realloc (name_space, name_size);
	      if (new_name_space == NULL)
		{
		  closedir (dirp);
		  return NULL;
		}
	      namep += new_name_space - name_space;
	      name_space = new_name_space;
	    }
	  namep = stpcpy (namep, dp->d_name) + 1;
	}
    }
  *namep = '\0';
  if (CLOSEDIR (dirp))
    {
      free (name_space);
      return NULL;
    }
  return name_space;
}
/* Getopt for GNU.
   NOTE: getopt is now part of the C library, so if you don't know what
   "Keep this file name-space clean" means, talk to roland@gnu.ai.mit.edu
   before changing it!

   Copyright (C) 1987, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97
   	Free Software Foundation, Inc.

   This file is part of the GNU C Library.  Its master source is NOT part of
   the C library, however.  The master source lives in /gd/gnu/lib.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* This tells Alpha OSF/1 not to define a getopt prototype in <stdio.h>.
   Ditto for AIX 3.2 and <stdlib.h>.  */
#ifndef _NO_PROTO
#define _NO_PROTO
#endif

#ifdef HAVE_CONFIG_H
#if flag_config==0
#include <config.h>
#define flag_config 1
#endif
#endif

#if !defined (__STDC__) || !__STDC__
/* This is a separate conditional since some stdc systems
   reject `defined (const)'.  */
#ifndef const
#define const
#endif
#endif

/*#include <stdio.h>*/

/* Comment out all this code if we are using the GNU C Library, and are not
   actually compiling the library itself.  This code is part of the GNU C
   Library, but also included in many other GNU distributions.  Compiling
   and linking in this code is a waste when using the GNU C library
   (especially if it is a shared library).  Rather than having every GNU
   program understand `configure --with-gnu-libc' and omit the object files,
   it is simpler to just do this in the source for each such file.  */

#define GETOPT_INTERFACE_VERSION 2
#if !defined (_LIBC) && defined (__GLIBC__) && __GLIBC__ >= 2
#if flag_gnuversions==0
#include <gnu-versions.h>
#define flag_gnuversions 1
#endif
#if _GNU_GETOPT_INTERFACE_VERSION == GETOPT_INTERFACE_VERSION
#define ELIDE_CODE
#endif
#endif

#ifndef ELIDE_CODE


/* This needs to come after some library #include
   to get __GNU_LIBRARY__ defined.  */
#ifdef	__GNU_LIBRARY__
/* Don't include stdlib.h for non-GNU C libraries because some of them
   contain conflicting prototypes for getopt.  */
#if flag_stdlib==0   
#include <stdlib.h>
#define flag_stdlib 1
#endif
#if flag_unistd==0
#include <unistd.h>
#define flag_unistd 1
#endif
#endif	/* GNU C library.  */

#ifdef VMS
#include <unixlib.h>
#if HAVE_STRING_H - 0
#if flag_string==0
#include <string.h>
#define flag_string 1
#endif
#endif
#endif

#if defined (WIN32) && !defined (__CYGWIN32__)
/* It's not Unix, really.  See?  Capital letters.  */
#include <windows.h>
#define getpid() GetCurrentProcessId()
#endif

#ifndef _
/* This is for other GNU distributions with internationalized messages.
   When compiling libc, the _ macro is predefined.  */
#ifdef HAVE_LIBINTL_H
#if flag_libintl==0
# include <libintl.h>
#define flag_libintl 1
#endif
# define _(msgid)	gettext (msgid)
#else
# define _(msgid)	(msgid)
#endif
#endif

/* This version of `getopt' appears to the caller like standard Unix `getopt'
   but it behaves differently for the user, since it allows the user
   to intersperse the options with the other arguments.

   As `getopt' works, it permutes the elements of ARGV so that,
   when it is done, all the options precede everything else.  Thus
   all application programs are extended to handle flexible argument order.

   Setting the environment variable POSIXLY_CORRECT disables permutation.
   Then the behavior is completely standard.

   GNU application programs can use a third alternative mode in which
   they can distinguish the relative order of options and other arguments.  */

/*#include "getopt.h"*/

/* For communication from `getopt' to the caller.
   When `getopt' finds an option that takes an argument,
   the argument value is returned here.
   Also, when `ordering' is RETURN_IN_ORDER,
   each non-option ARGV-element is returned here.  */

char *optarg = NULL;

/* Index in ARGV of the next element to be scanned.
   This is used for communication to and from the caller
   and for communication between successive calls to `getopt'.

   On entry to `getopt', zero means this is the first call; initialize.

   When `getopt' returns -1, this is the index of the first of the
   non-option elements that the caller should itself scan.

   Otherwise, `optind' communicates from one call to the next
   how much of ARGV has been scanned so far.  */

/* 1003.2 says this must be 1 before any call.  */
int optind = 1;

/* Formerly, initialization of getopt depended on optind==0, which
   causes problems with re-calling getopt as programs generally don't
   know that. */

int __getopt_initialized = 0;

/* The next char to be scanned in the option-element
   in which the last option character we returned was found.
   This allows us to pick up the scan where we left off.

   If this is zero, or a null string, it means resume the scan
   by advancing to the next ARGV-element.  */

static char *nextchar;

/* Callers store zero here to inhibit the error message
   for unrecognized options.  */

int opterr = 1;

/* Set to an option character which was unrecognized.
   This must be initialized on some systems to avoid linking in the
   system's own getopt implementation.  */

int optopt = '?';

/* Describe how to deal with options that follow non-option ARGV-elements.

   If the caller did not specify anything,
   the default is REQUIRE_ORDER if the environment variable
   POSIXLY_CORRECT is defined, PERMUTE otherwise.

   REQUIRE_ORDER means don't recognize them as options;
   stop option processing when the first non-option is seen.
   This is what Unix does.
   This mode of operation is selected by either setting the environment
   variable POSIXLY_CORRECT, or using `+' as the first character
   of the list of option characters.

   PERMUTE is the default.  We permute the contents of ARGV as we scan,
   so that eventually all the non-options are at the end.  This allows options
   to be given in any order, even with programs that were not written to
   expect this.

   RETURN_IN_ORDER is an option available to programs that were written
   to expect options and other ARGV-elements in any order and that care about
   the ordering of the two.  We describe each non-option ARGV-element
   as if it were the argument of an option with character code 1.
   Using `-' as the first character of the list of option characters
   selects this mode of operation.

   The special argument `--' forces an end of option-scanning regardless
   of the value of `ordering'.  In the case of RETURN_IN_ORDER, only
   `--' can cause `getopt' to return -1 with `optind' != ARGC.  */

static enum
{
  REQUIRE_ORDER, PERMUTE, RETURN_IN_ORDER
} ordering;

/* Value of POSIXLY_CORRECT environment variable.  */
static char *posixly_correct;

#ifdef	__GNU_LIBRARY__
/* We want to avoid inclusion of string.h with non-GNU libraries
   because there are many ways it can cause trouble.
   On some systems, it contains special magic macros that don't work
   in GCC.  */
#if flag_string==0   
#include <string.h>
#define flag_string 1
#endif
#define	my_index	strchr
#else

/* Avoid depending on library functions or files
   whose names are inconsistent.  */

char *getenv ();

static char *
my_index (str, chr)
     const char *str;
     int chr;
{
  while (*str)
    {
      if (*str == chr)
	return (char *) str;
      str++;
    }
  return 0;
}

/* If using GCC, we can safely declare strlen this way.
   If not using GCC, it is ok not to declare it.  */
#ifdef __GNUC__
/* Note that Motorola Delta 68k R3V7 comes with GCC but not stddef.h.
   That was relevant to code that was here before.  */
#if !defined (__STDC__) || !__STDC__
/* gcc with -traditional declares the built-in strlen to return int,
   and has done so at least since version 2.4.5. -- rms.  */
extern int strlen (const char *);
#endif /* not __STDC__ */
#endif /* __GNUC__ */

#endif /* not __GNU_LIBRARY__ */

/* Handle permutation of arguments.  */

/* Describe the part of ARGV that contains non-options that have
   been skipped.  `first_nonopt' is the index in ARGV of the first of them;
   `last_nonopt' is the index after the last of them.  */

static int first_nonopt;
static int last_nonopt;

#ifdef _LIBC
/* Bash 2.0 gives us an environment variable containing flags
   indicating ARGV elements that should not be considered arguments.  */

static const char *nonoption_flags;
static int nonoption_flags_len;

static int original_argc;
static char *const *original_argv;

/* Make sure the environment variable bash 2.0 puts in the environment
   is valid for the getopt call we must make sure that the ARGV passed
   to getopt is that one passed to the process.  */
static void store_args (int argc, char *const *argv) __attribute__ ((unused));
static void
store_args (int argc, char *const *argv)
{
  /* XXX This is no good solution.  We should rather copy the args so
     that we can compare them later.  But we must not use malloc(3).  */
  original_argc = argc;
  original_argv = argv;
}
text_set_element (__libc_subinit, store_args);
#endif

/* Exchange two adjacent subsequences of ARGV.
   One subsequence is elements [first_nonopt,last_nonopt)
   which contains all the non-options that have been skipped so far.
   The other is elements [last_nonopt,optind), which contains all
   the options processed since those non-options were skipped.

   `first_nonopt' and `last_nonopt' are relocated so that they describe
   the new indices of the non-options in ARGV after they are moved.  */

#if defined (__STDC__) && __STDC__
static void exchange (char **);
#endif

static void
exchange (argv)
     char **argv;
{
  int bottom = first_nonopt;
  int middle = last_nonopt;
  int top = optind;
  char *tem;

  /* Exchange the shorter segment with the far end of the longer segment.
     That puts the shorter segment into the right place.
     It leaves the longer segment in the right place overall,
     but it consists of two parts that need to be swapped next.  */

  while (top > middle && middle > bottom)
    {
      if (top - middle > middle - bottom)
	{
	  /* Bottom segment is the short one.  */
	  int len = middle - bottom;
	  register int i;

	  /* Swap it with the top part of the top segment.  */
	  for (i = 0; i < len; i++)
	    {
	      tem = argv[bottom + i];
	      argv[bottom + i] = argv[top - (middle - bottom) + i];
	      argv[top - (middle - bottom) + i] = tem;
	    }
	  /* Exclude the moved bottom segment from further swapping.  */
	  top -= len;
	}
      else
	{
	  /* Top segment is the short one.  */
	  int len = top - middle;
	  register int i;

	  /* Swap it with the bottom part of the bottom segment.  */
	  for (i = 0; i < len; i++)
	    {
	      tem = argv[bottom + i];
	      argv[bottom + i] = argv[middle + i];
	      argv[middle + i] = tem;
	    }
	  /* Exclude the moved top segment from further swapping.  */
	  bottom += len;
	}
    }

  /* Update records for the slots the non-options now occupy.  */

  first_nonopt += (optind - last_nonopt);
  last_nonopt = optind;
}

/* Initialize the internal data when the first call is made.  */

#if defined (__STDC__) && __STDC__
static const char *_getopt_initialize (int, char *const *, const char *);
#endif
static const char *
_getopt_initialize (argc, argv, optstring)
     int argc;
     char *const *argv;
     const char *optstring;
{
  /* Start processing options with ARGV-element 1 (since ARGV-element 0
     is the program name); the sequence of previously skipped
     non-option ARGV-elements is empty.  */

  first_nonopt = last_nonopt = optind = 1;

  nextchar = NULL;

  posixly_correct = getenv ("POSIXLY_CORRECT");

  /* Determine how to handle the ordering of options and nonoptions.  */

  if (optstring[0] == '-')
    {
      ordering = RETURN_IN_ORDER;
      ++optstring;
    }
  else if (optstring[0] == '+')
    {
      ordering = REQUIRE_ORDER;
      ++optstring;
    }
  else if (posixly_correct != NULL)
    ordering = REQUIRE_ORDER;
  else
    ordering = PERMUTE;

#ifdef _LIBC
  if (posixly_correct == NULL
      && argc == original_argc && argv == original_argv)
    {
      /* Bash 2.0 puts a special variable in the environment for each
	 command it runs, specifying which ARGV elements are the results of
	 file name wildcard expansion and therefore should not be
	 considered as options.  */
      char var[100];
      sprintf (var, "_%d_GNU_nonoption_argv_flags_", getpid ());
      nonoption_flags = getenv (var);
      if (nonoption_flags == NULL)
	nonoption_flags_len = 0;
      else
	nonoption_flags_len = strlen (nonoption_flags);
    }
  else
    nonoption_flags_len = 0;
#endif

  return optstring;
}

/* Scan elements of ARGV (whose length is ARGC) for option characters
   given in OPTSTRING.

   If an element of ARGV starts with '-', and is not exactly "-" or "--",
   then it is an option element.  The characters of this element
   (aside from the initial '-') are option characters.  If `getopt'
   is called repeatedly, it returns successively each of the option characters
   from each of the option elements.

   If `getopt' finds another option character, it returns that character,
   updating `optind' and `nextchar' so that the next call to `getopt' can
   resume the scan with the following option character or ARGV-element.

   If there are no more option characters, `getopt' returns -1.
   Then `optind' is the index in ARGV of the first ARGV-element
   that is not an option.  (The ARGV-elements have been permuted
   so that those that are not options now come last.)

   OPTSTRING is a string containing the legitimate option characters.
   If an option character is seen that is not listed in OPTSTRING,
   return '?' after printing an error message.  If you set `opterr' to
   zero, the error message is suppressed but we still return '?'.

   If a char in OPTSTRING is followed by a colon, that means it wants an arg,
   so the following text in the same ARGV-element, or the text of the following
   ARGV-element, is returned in `optarg'.  Two colons mean an option that
   wants an optional arg; if there is text in the current ARGV-element,
   it is returned in `optarg', otherwise `optarg' is set to zero.

   If OPTSTRING starts with `-' or `+', it requests different methods of
   handling the non-option ARGV-elements.
   See the comments about RETURN_IN_ORDER and REQUIRE_ORDER, above.

   Long-named options begin with `--' instead of `-'.
   Their names may be abbreviated as long as the abbreviation is unique
   or is an exact match for some defined option.  If they have an
   argument, it follows the option name in the same ARGV-element, separated
   from the option name by a `=', or else the in next ARGV-element.
   When `getopt' finds a long-named option, it returns 0 if that option's
   `flag' field is nonzero, the value of the option's `val' field
   if the `flag' field is zero.

   The elements of ARGV aren't really const, because we permute them.
   But we pretend they're const in the prototype to be compatible
   with other systems.

   LONGOPTS is a vector of `struct option' terminated by an
   element containing a name which is zero.

   LONGIND returns the index in LONGOPT of the long-named option found.
   It is only valid when a long-named option has been found by the most
   recent call.

   If LONG_ONLY is nonzero, '-' as well as '--' can introduce
   long-named options.  */

int
_getopt_internal (argc, argv, optstring, longopts, longind, long_only)
     int argc;
     char *const *argv;
     const char *optstring;
     const struct option *longopts;
     int *longind;
     int long_only;
{
  optarg = NULL;

  if (!__getopt_initialized || optind == 0)
    {
      optstring = _getopt_initialize (argc, argv, optstring);
      optind = 1;		/* Don't scan ARGV[0], the program name.  */
      __getopt_initialized = 1;
    }

  /* Test whether ARGV[optind] points to a non-option argument.
     Either it does not have option syntax, or there is an environment flag
     from the shell indicating it is not an option.  The later information
     is only used when the used in the GNU libc.  */
#ifdef _LIBC
#define NONOPTION_P (argv[optind][0] != '-' || argv[optind][1] == '\0'	      \
		     || (optind < nonoption_flags_len			      \
			 && nonoption_flags[optind] == '1'))
#else
#define NONOPTION_P (argv[optind][0] != '-' || argv[optind][1] == '\0')
#endif

  if (nextchar == NULL || *nextchar == '\0')
    {
      /* Advance to the next ARGV-element.  */

      /* Give FIRST_NONOPT & LAST_NONOPT rational values if OPTIND has been
	 moved back by the user (who may also have changed the arguments).  */
      if (last_nonopt > optind)
	last_nonopt = optind;
      if (first_nonopt > optind)
	first_nonopt = optind;

      if (ordering == PERMUTE)
	{
	  /* If we have just processed some options following some non-options,
	     exchange them so that the options come first.  */

	  if (first_nonopt != last_nonopt && last_nonopt != optind)
	    exchange ((char **) argv);
	  else if (last_nonopt != optind)
	    first_nonopt = optind;

	  /* Skip any additional non-options
	     and extend the range of non-options previously skipped.  */

	  while (optind < argc && NONOPTION_P)
	    optind++;
	  last_nonopt = optind;
	}

      /* The special ARGV-element `--' means premature end of options.
	 Skip it like a null option,
	 then exchange with previous non-options as if it were an option,
	 then skip everything else like a non-option.  */

      if (optind != argc && !strcmp (argv[optind], "--"))
	{
	  optind++;

	  if (first_nonopt != last_nonopt && last_nonopt != optind)
	    exchange ((char **) argv);
	  else if (first_nonopt == last_nonopt)
	    first_nonopt = optind;
	  last_nonopt = argc;

	  optind = argc;
	}

      /* If we have done all the ARGV-elements, stop the scan
	 and back over any non-options that we skipped and permuted.  */

      if (optind == argc)
	{
	  /* Set the next-arg-index to point at the non-options
	     that we previously skipped, so the caller will digest them.  */
	  if (first_nonopt != last_nonopt)
	    optind = first_nonopt;
	  return -1;
	}

      /* If we have come to a non-option and did not permute it,
	 either stop the scan or describe it to the caller and pass it by.  */

      if (NONOPTION_P)
	{
	  if (ordering == REQUIRE_ORDER)
	    return -1;
	  optarg = argv[optind++];
	  return 1;
	}

      /* We have found another option-ARGV-element.
	 Skip the initial punctuation.  */

      nextchar = (argv[optind] + 1
		  + (longopts != NULL && argv[optind][1] == '-'));
    }

  /* Decode the current option-ARGV-element.  */

  /* Check whether the ARGV-element is a long option.

     If long_only and the ARGV-element has the form "-f", where f is
     a valid short option, don't consider it an abbreviated form of
     a long option that starts with f.  Otherwise there would be no
     way to give the -f short option.

     On the other hand, if there's a long option "fubar" and
     the ARGV-element is "-fu", do consider that an abbreviation of
     the long option, just like "--fu", and not "-f" with arg "u".

     This distinction seems to be the most useful approach.  */

  if (longopts != NULL
      && (argv[optind][1] == '-'
	  || (long_only && (argv[optind][2] || !my_index (optstring, argv[optind][1])))))
    {
      char *nameend;
      const struct option *p;
      const struct option *pfound = NULL;
      int exact = 0;
      int ambig = 0;
      int indfound = -1;
      int option_index;

      for (nameend = nextchar; *nameend && *nameend != '='; nameend++)
	/* Do nothing.  */ ;

      /* Test all long options for either exact match
	 or abbreviated matches.  */
      for (p = longopts, option_index = 0; p->name; p++, option_index++)
	if (!strncmp (p->name, nextchar, nameend - nextchar))
	  {
	    if ((unsigned int) (nameend - nextchar)
		== (unsigned int) strlen (p->name))
	      {
		/* Exact match found.  */
		pfound = p;
		indfound = option_index;
		exact = 1;
		break;
	      }
	    else if (pfound == NULL)
	      {
		/* First nonexact match found.  */
		pfound = p;
		indfound = option_index;
	      }
	    else
	      /* Second or later nonexact match found.  */
	      ambig = 1;
	  }

      if (ambig && !exact)
	{
	  if (opterr)
	    fprintf (stderr, _("%s: option `%s' is ambiguous\n"),
		     argv[0], argv[optind]);
	  nextchar += strlen (nextchar);
	  optind++;
	  optopt = 0;
	  return '?';
	}

      if (pfound != NULL)
	{
	  option_index = indfound;
	  optind++;
	  if (*nameend)
	    {
	      /* Don't test has_arg with >, because some C compilers don't
		 allow it to be used on enums.  */
	      if (pfound->has_arg)
		optarg = nameend + 1;
	      else
		{
		  if (opterr)
		   if (argv[optind - 1][1] == '-')
		    /* --option */
		    fprintf (stderr,
		     _("%s: option `--%s' doesn't allow an argument\n"),
		     argv[0], pfound->name);
		   else
		    /* +option or -option */
		    fprintf (stderr,
		     _("%s: option `%c%s' doesn't allow an argument\n"),
		     argv[0], argv[optind - 1][0], pfound->name);

		  nextchar += strlen (nextchar);

		  optopt = pfound->val;
		  return '?';
		}
	    }
	  else if (pfound->has_arg == 1)
	    {
	      if (optind < argc)
		optarg = argv[optind++];
	      else
		{
		  if (opterr)
		    fprintf (stderr,
			   _("%s: option `%s' requires an argument\n"),
			   argv[0], argv[optind - 1]);
		  nextchar += strlen (nextchar);
		  optopt = pfound->val;
		  return optstring[0] == ':' ? ':' : '?';
		}
	    }
	  nextchar += strlen (nextchar);
	  if (longind != NULL)
	    *longind = option_index;
	  if (pfound->flag)
	    {
	      *(pfound->flag) = pfound->val;
	      return 0;
	    }
	  return pfound->val;
	}

      /* Can't find it as a long option.  If this is not getopt_long_only,
	 or the option starts with '--' or is not a valid short
	 option, then it's an error.
	 Otherwise interpret it as a short option.  */
      if (!long_only || argv[optind][1] == '-'
	  || my_index (optstring, *nextchar) == NULL)
	{
	  if (opterr)
	    {
	      if (argv[optind][1] == '-')
		/* --option */
		fprintf (stderr, _("%s: unrecognized option `--%s'\n"),
			 argv[0], nextchar);
	      else
		/* +option or -option */
		fprintf (stderr, _("%s: unrecognized option `%c%s'\n"),
			 argv[0], argv[optind][0], nextchar);
	    }
	  nextchar = (char *) "";
	  optind++;
	  optopt = 0;
	  return '?';
	}
    }

  /* Look at and handle the next short option-character.  */

  {
    char c = *nextchar++;
    char *temp = my_index (optstring, c);

    /* Increment `optind' when we start to process its last character.  */
    if (*nextchar == '\0')
      ++optind;

    if (temp == NULL || c == ':')
      {
	if (opterr)
	  {
	    if (posixly_correct)
	      /* 1003.2 specifies the format of this message.  */
	      fprintf (stderr, _("%s: illegal option -- %c\n"),
		       argv[0], c);
	    else
	      fprintf (stderr, _("%s: invalid option -- %c\n"),
		       argv[0], c);
	  }
	optopt = c;
	return '?';
      }
    /* Convenience. Treat POSIX -W foo same as long option --foo */
    if (temp[0] == 'W' && temp[1] == ';')
      {
	char *nameend;
	const struct option *p;
	const struct option *pfound = NULL;
	int exact = 0;
	int ambig = 0;
	int indfound = 0;
	int option_index;

	/* This is an option that requires an argument.  */
	if (*nextchar != '\0')
	  {
	    optarg = nextchar;
	    /* If we end this ARGV-element by taking the rest as an arg,
	       we must advance to the next element now.  */
	    optind++;
	  }
	else if (optind == argc)
	  {
	    if (opterr)
	      {
		/* 1003.2 specifies the format of this message.  */
		fprintf (stderr, _("%s: option requires an argument -- %c\n"),
			 argv[0], c);
	      }
	    optopt = c;
	    if (optstring[0] == ':')
	      c = ':';
	    else
	      c = '?';
	    return c;
	  }
	else
	  /* We already incremented `optind' once;
	     increment it again when taking next ARGV-elt as argument.  */
	  optarg = argv[optind++];

	/* optarg is now the argument, see if it's in the
	   table of longopts.  */

	for (nextchar = nameend = optarg; *nameend && *nameend != '='; nameend++)
	  /* Do nothing.  */ ;

	/* Test all long options for either exact match
	   or abbreviated matches.  */
	for (p = longopts, option_index = 0; p->name; p++, option_index++)
	  if (!strncmp (p->name, nextchar, nameend - nextchar))
	    {
	      if ((unsigned int) (nameend - nextchar) == strlen (p->name))
		{
		  /* Exact match found.  */
		  pfound = p;
		  indfound = option_index;
		  exact = 1;
		  break;
		}
	      else if (pfound == NULL)
		{
		  /* First nonexact match found.  */
		  pfound = p;
		  indfound = option_index;
		}
	      else
		/* Second or later nonexact match found.  */
		ambig = 1;
	    }
	if (ambig && !exact)
	  {
	    if (opterr)
	      fprintf (stderr, _("%s: option `-W %s' is ambiguous\n"),
		       argv[0], argv[optind]);
	    nextchar += strlen (nextchar);
	    optind++;
	    return '?';
	  }
	if (pfound != NULL)
	  {
	    option_index = indfound;
	    if (*nameend)
	      {
		/* Don't test has_arg with >, because some C compilers don't
		   allow it to be used on enums.  */
		if (pfound->has_arg)
		  optarg = nameend + 1;
		else
		  {
		    if (opterr)
		      fprintf (stderr, _("\
%s: option `-W %s' doesn't allow an argument\n"),
			       argv[0], pfound->name);

		    nextchar += strlen (nextchar);
		    return '?';
		  }
	      }
	    else if (pfound->has_arg == 1)
	      {
		if (optind < argc)
		  optarg = argv[optind++];
		else
		  {
		    if (opterr)
		      fprintf (stderr,
			       _("%s: option `%s' requires an argument\n"),
			       argv[0], argv[optind - 1]);
		    nextchar += strlen (nextchar);
		    return optstring[0] == ':' ? ':' : '?';
		  }
	      }
	    nextchar += strlen (nextchar);
	    if (longind != NULL)
	      *longind = option_index;
	    if (pfound->flag)
	      {
		*(pfound->flag) = pfound->val;
		return 0;
	      }
	    return pfound->val;
	  }
	  nextchar = NULL;
	  return 'W';	/* Let the application handle it.   */
      }
    if (temp[1] == ':')
      {
	if (temp[2] == ':')
	  {
	    /* This is an option that accepts an argument optionally.  */
	    if (*nextchar != '\0')
	      {
		optarg = nextchar;
		optind++;
	      }
	    else
	      optarg = NULL;
	    nextchar = NULL;
	  }
	else
	  {
	    /* This is an option that requires an argument.  */
	    if (*nextchar != '\0')
	      {
		optarg = nextchar;
		/* If we end this ARGV-element by taking the rest as an arg,
		   we must advance to the next element now.  */
		optind++;
	      }
	    else if (optind == argc)
	      {
		if (opterr)
		  {
		    /* 1003.2 specifies the format of this message.  */
		    fprintf (stderr,
			   _("%s: option requires an argument -- %c\n"),
			   argv[0], c);
		  }
		optopt = c;
		if (optstring[0] == ':')
		  c = ':';
		else
		  c = '?';
	      }
	    else
	      /* We already incremented `optind' once;
		 increment it again when taking next ARGV-elt as argument.  */
	      optarg = argv[optind++];
	    nextchar = NULL;
	  }
      }
    return c;
  }
}

int
getopt (argc, argv, optstring)
     int argc;
     char *const *argv;
     const char *optstring;
{
  return _getopt_internal (argc, argv, optstring,
			   (const struct option *) 0,
			   (int *) 0,
			   0);
}

#endif	/* Not ELIDE_CODE.  */

#ifdef TEST

/* Compile with -DTEST to make an executable for use in testing
   the above definition of `getopt'.  */

int
main (argc, argv)
     int argc;
     char **argv;
{
  int c;
  int digit_optind = 0;

  while (1)
    {
      int this_option_optind = optind ? optind : 1;

      c = getopt (argc, argv, "abc:d:0123456789");
      if (c == -1)
	break;

      switch (c)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	  if (digit_optind != 0 && digit_optind != this_option_optind)
	    printf ("digits occur in two different argv-elements.\n");
	  digit_optind = this_option_optind;
	  printf ("option %c\n", c);
	  break;

	case 'a':
	  printf ("option a\n");
	  break;

	case 'b':
	  printf ("option b\n");
	  break;

	case 'c':
	  printf ("option c with value `%s'\n", optarg);
	  break;

	case '?':
	  break;

	default:
	  printf ("?? getopt returned character code 0%o ??\n", c);
	}
    }

  if (optind < argc)
    {
      printf ("non-option ARGV-elements: ");
      while (optind < argc)
	printf ("%s ", argv[optind++]);
      printf ("\n");
    }

  exit (0);
}

#endif /* TEST */
/* getopt_long and getopt_long_only entry points for GNU getopt.
   Copyright (C) 1987,88,89,90,91,92,93,94,96,97, 98 Free Software Foundation, Inc.

   This file is part of the GNU C Library.  Its master source is NOT part of
   the C library, however.  The master source lives in /gd/gnu/lib.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

#ifdef HAVE_CONFIG_H
#if flag_config==0
#include <config.h>
#define flag_config 1
#endif
#endif

/*#include "getopt.h"*/

#if !defined (__STDC__) || !__STDC__
/* This is a separate conditional since some stdc systems
   reject `defined (const)'.  */
#ifndef const
#define const
#endif
#endif

/*#include <stdio.h>*/

/* Comment out all this code if we are using the GNU C Library, and are not
   actually compiling the library itself.  This code is part of the GNU C
   Library, but also included in many other GNU distributions.  Compiling
   and linking in this code is a waste when using the GNU C library
   (especially if it is a shared library).  Rather than having every GNU
   program understand `configure --with-gnu-libc' and omit the object files,
   it is simpler to just do this in the source for each such file.  */

#define GETOPT_INTERFACE_VERSION 2
#if !defined (_LIBC) && defined (__GLIBC__) && __GLIBC__ >= 2
#if flag_gnuversions==0
#include <gnu-versions.h>
#define flag_gnuversions 1
#endif
#if _GNU_GETOPT_INTERFACE_VERSION == GETOPT_INTERFACE_VERSION
#define ELIDE_CODE
#endif
#endif

#ifndef ELIDE_CODE


/* This needs to come after some library #include
   to get __GNU_LIBRARY__ defined.  */
#ifdef __GNU_LIBRARY__
#if flag_stdlib==0
#include <stdlib.h>
#define flag_stdlib 1
#endif
#endif

#ifndef	NULL
#define NULL 0
#endif

int
getopt_long (argc, argv, options, long_options, opt_index)
     int argc;
     char *const *argv;
     const char *options;
     const struct option *long_options;
     int *opt_index;
{
  return _getopt_internal (argc, argv, options, long_options, opt_index, 0);
}

/* Like getopt_long, but '-' as well as '--' can indicate a long option.
   If an option that starts with '-' (not '--') doesn't match a long option,
   but does match a short option, it is parsed as a short option
   instead.  */

int
getopt_long_only (argc, argv, options, long_options, opt_index)
     int argc;
     char *const *argv;
     const char *options;
     const struct option *long_options;
     int *opt_index;
{
  return _getopt_internal (argc, argv, options, long_options, opt_index, 1);
}


#endif	/* Not ELIDE_CODE.  */

#ifdef TEST

/*#include <stdio.h>*/

int
main (argc, argv)
     int argc;
     char **argv;
{
  int c;
  int digit_optind = 0;

  while (1)
    {
      int this_option_optind = optind ? optind : 1;
      int option_index = 0;
      static struct option long_options[] =
      {
	{"add", 1, 0, 0},
	{"append", 0, 0, 0},
	{"delete", 1, 0, 0},
	{"verbose", 0, 0, 0},
	{"create", 0, 0, 0},
	{"file", 1, 0, 0},
	{0, 0, 0, 0}
      };

      c = getopt_long (argc, argv, "abc:d:0123456789",
		       long_options, &option_index);
      if (c == -1)
	break;

      switch (c)
	{
	case 0:
	  printf (_("option %s"), long_options[option_index].name);
	  if (optarg)
	    printf (_(" with arg %s"), optarg);
	  printf ("\n");
	  break;

	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	  if (digit_optind != 0 && digit_optind != this_option_optind)
	    printf (_("digits occur in two different argv-elements.\n"));
	  digit_optind = this_option_optind;
	  printf (_("option %c\n"), c);
	  break;

	case 'a':
	  printf (_("option a\n"));
	  break;

	case 'b':
	  printf (_("option b\n"));
	  break;

	case 'c':
	  printf (_("option c with value `%s'\n"), optarg);
	  break;

	case 'd':
	  printf (_("option d with value `%s'\n"), optarg);
	  break;

	case '?':
	  break;

	default:
	  printf (_("?? getopt returned character code 0%o ??\n"), c);
	}
    }

  if (optind < argc)
    {
      printf (_("non-option ARGV-elements: "));
      while (optind < argc)
	printf ("%s ", argv[optind++]);
      printf ("\n");
    }

  exit (0);
}

#endif /* TEST */
/* search.c - searching subroutines using dfa, kwset and regex for grep.
   Copyright (C) 1992, 1998 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA.  */

/* Written August 1992 by Mike Haertel. */

#ifdef HAVE_CONFIG_H
#if flag_config==0
# include <config.h>
#define flag_config 1
#endif
#endif
/*#include <sys/types.h>*/
/*#include "system.h"*/
/*#include "grep.h"*/
/*#include "regex.h"*/
/*#include "dfa.h"*/
/*#include "kwset.h"*/

#define NCHAR (UCHAR_MAX + 1)

static void Gcompile PARAMS((char *, size_t));
static void Ecompile PARAMS((char *, size_t));
static char *EGexecute PARAMS((char *, size_t, char **));
static void Fcompile PARAMS((char *, size_t));
static char *Fexecute PARAMS((char *, size_t, char **));
static void kwsinit PARAMS((void));

/* Here is the matchers vector for the main program. */
struct matcher matchers[] = {
  { "default", Gcompile, EGexecute },
  { "grep", Gcompile, EGexecute },
  { "egrep", Ecompile, EGexecute },
  { "awk", Ecompile, EGexecute },
  { "fgrep", Fcompile, Fexecute },
  { 0, 0, 0 },
};

/* For -w, we also consider _ to be word constituent.  */
#define WCHAR(C) (ISALNUM(C) || (C) == '_')

/* DFA compiled regexp. */
static struct dfa dfa_1;

/* Regex compiled regexp. */
static struct re_pattern_buffer regexbuf;

/* KWset compiled pattern.  For Ecompile and Gcompile, we compile
   a list of strings, at least one of which is known to occur in
   any string matching the regexp. */
static kwset_t kwset;

/* Last compiled fixed string known to exactly match the regexp.
   If kwsexec() returns < lastexact, then we don't need to
   call the regexp matcher at all. */
static int lastexact;

void
dfaerror(mesg)
  const char *mesg;
{
  fatal(mesg, 0);
}

static void
kwsinit()
{
  static char trans[NCHAR];
  int i;

  if (match_icase)
    for (i = 0; i < NCHAR; ++i)
      trans[i] = TOLOWER(i);

  if (!(kwset = kwsalloc(match_icase ? trans : (char *) 0)))
    fatal("memory exhausted", 0);
}

/* If the DFA turns out to have some set of fixed strings one of
   which must occur in the match, then we build a kwset matcher
   to find those strings, and thus quickly filter out impossible
   matches. */
static void
kwsmusts()
{
  struct dfamust *dm;
  char *err;

  if (dfa_1.musts)
    {
      kwsinit();
      /* First, we compile in the substrings known to be exact
	 matches.  The kwset matcher will return the index
	 of the matching string that it chooses. */
      for (dm = dfa_1.musts; dm; dm = dm->next)
	{
	  if (!dm->exact)
	    continue;
	  ++lastexact;
	  if ((err = kwsincr(kwset, dm->must, strlen(dm->must))) != 0)
	    fatal(err, 0);
	}
      /* Now, we compile the substrings that will require
	 the use of the regexp matcher.  */
      for (dm = dfa_1.musts; dm; dm = dm->next)
	{
	  if (dm->exact)
	    continue;
	  if ((err = kwsincr(kwset, dm->must, strlen(dm->must))) != 0)
	    fatal(err, 0);
	}
      if ((err = kwsprep(kwset)) != 0)
	fatal(err, 0);
    }
}

static void
Gcompile(pattern, size)
     char *pattern;
     size_t size;
{
  const char *err;

  re_set_syntax(RE_SYNTAX_GREP | RE_HAT_LISTS_NOT_NEWLINE);
  #ifndef FAULTY_F_DG_1
  dfasyntax(RE_SYNTAX_GREP | RE_HAT_LISTS_NOT_NEWLINE, match_icase, eolbyte);
  #else
  dfasyntax(RE_SYNTAX_GREP | RE_HAT_LISTS_NOT_NEWLINE, match_icase, '\r');
  #endif 

  if ((err = re_compile_pattern(pattern, size, &regexbuf)) != 0)
    fatal(err, 0);

  /* In the match_words and match_lines cases, we use a different pattern
     for the DFA matcher that will quickly throw out cases that won't work.
     Then if DFA succeeds we do some hairy stuff using the regex matcher
     to decide whether the match should really count. */
  if (match_words || match_lines)
    {
      /* In the whole-word case, we use the pattern:
	 (^|[^A-Za-z_])(userpattern)([^A-Za-z_]|$).
	 In the whole-line case, we use the pattern:
	 ^(userpattern)$.
	 BUG: Using [A-Za-z_] is locale-dependent!
	 So will use [:alnum:] */

      char *n = malloc(size + 50);
      int i = 0;

      strcpy(n, "");

      if (match_lines)
	strcpy(n, "^\\(");
      if (match_words)
	strcpy(n, "\\(^\\|[^[:alnum:]_]\\)\\(");

      i = strlen(n);
      memcpy(n + i, pattern, size);
      i += size;

      if (match_words)
	strcpy(n + i, "\\)\\([^[:alnum:]_]\\|$\\)");
      if (match_lines)
	strcpy(n + i, "\\)$");

      i += strlen(n + i);
      dfacomp(n, i, &dfa_1, 1);
    }
  else
    dfacomp(pattern, size, &dfa_1, 1);

  kwsmusts();
}

static void
Ecompile(pattern, size)
     char *pattern;
     size_t size;
{
  const char *err;

  if (strcmp(matcher, "awk") == 0)
    {
      re_set_syntax(RE_SYNTAX_AWK);
      dfasyntax(RE_SYNTAX_AWK, match_icase, eolbyte);
    }
  else
    {
      re_set_syntax (RE_SYNTAX_POSIX_EGREP);
      dfasyntax (RE_SYNTAX_POSIX_EGREP, match_icase, eolbyte);
    }

  if ((err = re_compile_pattern(pattern, size, &regexbuf)) != 0)
    fatal(err, 0);

  /* In the match_words and match_lines cases, we use a different pattern
     for the DFA matcher that will quickly throw out cases that won't work.
     Then if DFA succeeds we do some hairy stuff using the regex matcher
     to decide whether the match should really count. */
  if (match_words || match_lines)
    {
      /* In the whole-word case, we use the pattern:
	 (^|[^A-Za-z_])(userpattern)([^A-Za-z_]|$).
	 In the whole-line case, we use the pattern:
	 ^(userpattern)$.
	 BUG: Using [A-Za-z_] is locale-dependent!
	 so will use the char class */

      char *n = malloc(size + 50);
      int i = 0;

      strcpy(n, "");

      if (match_lines)
	strcpy(n, "^(");
      if (match_words)
	strcpy(n, "(^|[^[:alnum:]_])(");

      i = strlen(n);
      memcpy(n + i, pattern, size);
      i += size;

      if (match_words)
	strcpy(n + i, ")([^[:alnum:]_]|$)");
      if (match_lines)
	strcpy(n + i, ")$");

      i += strlen(n + i);
      dfacomp(n, i, &dfa_1, 1);
    }
  else
    dfacomp(pattern, size, &dfa_1, 1);

  kwsmusts();
}

static char *
EGexecute(buf, size, endp)
     char *buf;
     size_t size;
     char **endp;
{
  register char *buflim, *beg, *end, save;
  char eol = eolbyte;
  int backref, start, len;
  struct kwsmatch kwsm;
  static struct re_registers regs; /* This is static on account of a BRAIN-DEAD
				    Q@#%!# library interface in regex.c.  */

  buflim = buf + size;

  for (beg = end = buf; end < buflim; beg = end + 1)
    {
      if (kwset)
	{
	  /* Find a possible match using the KWset matcher. */
	  beg = kwsexec(kwset, beg, buflim - beg, &kwsm);
	  if (!beg)
	    goto failure;
	  /* Narrow down to the line containing the candidate, and
	     run it through DFA. */
	  end = memchr(beg, eol, buflim - beg);
	  if (!end)
	    end = buflim;
	  while (beg > buf && beg[-1] != eol)
	    --beg;
	  save = *end;
	  if (kwsm.index < lastexact)
	    goto success;
	  if (!dfaexec(&dfa_1, beg, end, 0, (int *) 0, &backref))
	    {
	      *end = save;
	      continue;
	    }
	  *end = save;
	  /* Successful, no backreferences encountered. */
	  if (!backref)
	    goto success;
	}
      else
	{
	  /* No good fixed strings; start with DFA. */
	  save = *buflim;
	  beg = dfaexec(&dfa_1, beg, buflim, 0, (int *) 0, &backref);
	  *buflim = save;
	  if (!beg)
	    goto failure;
	  /* Narrow down to the line we've found. */
	  end = memchr(beg, eol, buflim - beg);
	  if (!end)
	    end = buflim;
	  while (beg > buf && beg[-1] != eol)
	    --beg;
	  /* Successful, no backreferences encountered! */
	  if (!backref)
	    goto success;
	}
      /* If we've made it to this point, this means DFA has seen
	 a probable match, and we need to run it through Regex. */
      regexbuf.not_eol = 0;
      if ((start = re_search(&regexbuf, beg, end - beg, 0, end - beg, &regs)) >= 0)
	{
	  len = regs.end[0] - start;
	  if ((!match_lines && !match_words)
	      || (match_lines && len == end - beg))
	    goto success;
	  /* If -w, check if the match aligns with word boundaries.
	     We do this iteratively because:
	     (a) the line may contain more than one occurence of the pattern, and
	     (b) Several alternatives in the pattern might be valid at a given
	     point, and we may need to consider a shorter one to find a word
	     boundary. */
	  if (match_words)
	    while (start >= 0)
	      {
		if ((start == 0 || !WCHAR ((unsigned char) beg[start - 1]))
		    && (len == end - beg
			|| !WCHAR ((unsigned char) beg[start + len])))
		  goto success;
		if (len > 0)
		  {
		    /* Try a shorter length anchored at the same place. */
		    --len;
		    regexbuf.not_eol = 1;
		    len = re_match(&regexbuf, beg, start + len, start, &regs);
		  }
		if (len <= 0)
		  {
		    /* Try looking further on. */
		    if (start == end - beg)
		      break;
		    ++start;
		    regexbuf.not_eol = 0;
		    start = re_search(&regexbuf, beg, end - beg,
				      start, end - beg - start, &regs);
		    len = regs.end[0] - start;
		  }
	      }
	}
    }

 failure:
  return 0;

 success:
  *endp = end < buflim ? end + 1 : end;
  return beg;
}

static void
Fcompile(pattern, size)
     char *pattern;
     size_t size;
{
  char *beg, *lim, *err;

  kwsinit();
  beg = pattern;
  do
    {
      for (lim = beg; lim < pattern + size && *lim != '\n'; ++lim)
	;
      if ((err = kwsincr(kwset, beg, lim - beg)) != 0)
	fatal(err, 0);
      if (lim < pattern + size)
	++lim;
      beg = lim;
    }
  while (beg < pattern + size);

  if ((err = kwsprep(kwset)) != 0)
    fatal(err, 0);
}

static char *
Fexecute(buf, size, endp)
     char *buf;
     size_t size;
     char **endp;
{
  register char *beg, *try, *end;
  register size_t len;
  char eol = eolbyte;
  struct kwsmatch kwsmatch;

  for (beg = buf; beg <= buf + size; ++beg)
    {
      if (!(beg = kwsexec(kwset, beg, buf + size - beg, &kwsmatch)))
	return 0;
      len = kwsmatch.size[0];
      if (match_lines)
	{
	  if (beg > buf && beg[-1] != eol)
	    continue;
	  if (beg + len < buf + size && beg[len] != eol)
	    continue;
	  goto success;
	}
      else if (match_words)
	for (try = beg; len && try;)
	  {
	    if (try > buf && WCHAR((unsigned char) try[-1]))
	      break;
	    if (try + len < buf + size && WCHAR((unsigned char) try[len]))
	      {
		try = kwsexec(kwset, beg, --len, &kwsmatch);
		len = kwsmatch.size[0];
	      }
	    else
	      goto success;
	  }
      else
	goto success;
    }

  return 0;

 success:
  if ((end = memchr(beg + len, eol, (buf + size) - (beg + len))) != 0)
    ++end;
  else
    end = buf + size;
  *endp = end;
  while (beg > buf && beg[-1] != '\n')
    --beg;
  return beg;
}
#ifdef HAVE_CONFIG_H
#if flag_config==0
# include <config.h>
#define flag_config 1
#endif
#endif
/*#include "system.h"*/
/*#include "grep.h"*/
char const *matcher;
/* stpcpy.c -- copy a string and return pointer to end of new string
   Copyright (C) 1992, 1995, 1997, 1998 Free Software Foundation, Inc.

   NOTE: The canonical source of this file is maintained with the GNU C Library.
   Bugs can be reported to bug-glibc@prep.ai.mit.edu.

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
   USA.  */

#ifdef HAVE_CONFIG_H
#if flag_config==0
# include <config.h>
#define flag_config 1
#endif
#endif

#if flag_string==0
#include <string.h>
#define flag_string 1
#endif

#undef __stpcpy
#undef stpcpy

#ifndef weak_alias
# define __stpcpy stpcpy
#endif

/* Copy SRC to DEST, returning the address of the terminating '\0' in DEST.  */
char *
__stpcpy (dest, src)
     char *dest;
     const char *src;
{
  register char *d = dest;
  register const char *s = src;

  do
    *d++ = *s;
  while (*s++ != '\0');

  return d - 1;
}
#ifdef weak_alias
weak_alias (__stpcpy, stpcpy)
#endif
