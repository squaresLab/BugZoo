struct _IO_FILE;
struct _IO_FILE *_coverage_fout  ;
typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
typedef long __time_t;
typedef __time_t time_t;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef void (*__sighandler_t)(int  );
struct __anonstruct_cmdline_48 {
   char *name ;
   int verbose ;
   int debug ;
   char *keyword ;
   char *keyword2 ;
   int mode ;
   int filter ;
   char *suffix ;
   char *prompt ;
   int recursive ;
   int symlinks ;
   int force ;
   int mismatch ;
   char **infiles ;
   int count ;
   char *keyfile ;
   int timid ;
};
typedef struct __anonstruct_cmdline_48 cmdline;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct stat {
   __dev_t st_dev ;
   __ino_t st_ino ;
   __nlink_t st_nlink ;
   __mode_t st_mode ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   int pad0 ;
   __dev_t st_rdev ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   long __unused[3] ;
};
struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
struct __dirstream;
typedef struct __dirstream DIR;
struct utimbuf {
   __time_t actime ;
   __time_t modtime ;
};
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;
struct termios {
   tcflag_t c_iflag ;
   tcflag_t c_oflag ;
   tcflag_t c_cflag ;
   tcflag_t c_lflag ;
   cc_t c_line ;
   cc_t c_cc[32] ;
   speed_t c_ispeed ;
   speed_t c_ospeed ;
};
typedef int __pid_t;
struct reader {
   int (*bgetc)(struct reader *this ) ;
};
typedef struct reader reader;
struct writer {
   int (*dummy)() ;
   int (*bputc)(int c , struct writer *this ) ;
   int (*beof)(struct writer *this ) ;
};
typedef struct writer writer;
struct readwriter {
   int (*bgetc)(struct reader *this ) ;
   int (*bputc)(int c , struct writer *this ) ;
   int (*beof)(struct writer *this ) ;
};
typedef struct readwriter readwriter;
typedef unsigned char word8;
typedef unsigned int word32;
struct __anonstruct_roundkey_52 {
   int BC ;
   int KC ;
   int ROUNDS ;
   int shift[2][4] ;
   word32 rk[120] ;
};
typedef struct __anonstruct_roundkey_52 roundkey;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
struct stream_reader {
   int (*bgetc)(reader *this ) ;
   FILE *in ;
};
typedef struct stream_reader stream_reader;
struct stream_writer {
   int (*dummy)() ;
   int (*bputc)(int c , writer *this ) ;
   int (*beof)(writer *this ) ;
   FILE *out ;
};
typedef struct stream_writer stream_writer;
struct file_readwriter {
   int (*bgetc)(reader *this ) ;
   int (*bputc)(int c , writer *this ) ;
   int (*beof)(writer *this ) ;
   char buffer[1000] ;
   int first ;
   int next ;
   int size ;
   char inbuffer[1000] ;
   int innext ;
   int insize ;
   int p ;
   int fd ;
   char *filename ;
};
typedef struct file_readwriter file_readwriter;
struct unixcrypt_state_s {
   char box1[256] ;
   char box2[256] ;
   char box3[256] ;
   int j ;
   int k ;
};
typedef struct unixcrypt_state_s unixcrypt_state;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) getenv)(char const   *__name ) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
extern void perror(char const   *__s ) ;
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcat)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strrchr)(char const   *__s ,
                                                                                      int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
extern char *optarg ;
extern int optind ;
extern int getopt_long(int __argc , char * const  *__argv ,
                       char const   *__shortopts ,
                       struct option  const  *__longopts , int *__longind ) ;
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig ,
                                                           void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isatty(int __fd ) ;
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
cmdline cmd  ;
int sigint_flag ;
char *readkey(char *prompt___0 , char *myname ) ;
int ccencrypt_streams(FILE *fin , FILE *fout , char *keyword ) ;
int ccdecrypt_streams(FILE *fin , FILE *fout , char *keyword ) ;
int cckeychange_streams(FILE *fin , FILE *fout , char *key_in , char *key_out ) ;
char const   *ccrypt_error(int st ) ;
void reset_inodes(void) ;
void traverse_files(char **filelist , int count___0 ) ;
char *xreadline(FILE *fin , char *myname ) ;
int unixcrypt_streams(FILE *fin , FILE *fout , char *keyword ) ;
void usage(FILE *fout ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"NAME VERSION. Secure encryption and decryption of files and streams.\n\nUsage: NAME [mode] [options] [file...]\n       NAMEENCRYPT [options] [file...]\n       NAMEDECRYPT [options] [file...]\n       NAMECAT [options] file...\n\nModes:\n    -e, --encrypt          encrypt\n    -d, --decrypt          decrypt\n    -c, --cat              cat; decrypt files to stdout\n    -x, --keychange        change key\n    -u, --unixcrypt        decrypt old unix crypt files\n\nOptions:\n    -h, --help             print this help message and exit\n    -V, --version          print version info and exit\n    -L, --license          print license info and exit\n    -v, --verbose          print progress information to stderr\n    -q, --quiet            run quietly; suppress warnings\n    -f, --force            overwrite existing files without asking\n    -m, --mismatch         allow decryption with non-matching key\n    -E, --envvar var       read keyword from environment variable var (unsafe)\n    -K, --key key          give keyword on command line (unsafe)\n    -k, --keyfile file     read keyword(s) as first line(s) from file\n    -S, --suffix .suf      use suffix .suf instead of default .cpt\n    -P, --prompt prompt    use prompt instead of \"Enter key: \"\n    -t, --timid            prompt twice for destructive encryption keys\n    -r, --recursive        recurse through directories\n    -R, --rec-symlinks     follow symbolic links as subdirectories\n    -l, --symlinks         dereference symbolic links\n    --                     end of options, filenames follow\n");
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void version(FILE *fout ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"ccrypt 1.2. Secure encryption and decryption of files and streams.\nCopyright (C) 2000-2001 Peter Selinger.\n");
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void license(FILE *fout ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"ccrypt 1.2. Secure encryption and decryption of files and streams.\nCopyright (C) 2000-2001 Peter Selinger.\n\nFor the full text of the GNU General Public License, see the file\nCOPYING distributed with this software.\n\nThis program is free software; you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation; either version 2 of the License, or\n(at your option) any later version.\n\nThis program is distributed in the hope that it will be useful,\nbut WITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\nGNU General Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.\n");
  {
  fprintf(_coverage_fout, "6\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void output_commandline(cmdline cmd___0 , FILE *fout ) 
{ 
  char *recursive[3] ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char **tmp___5 ;
  int tmp___6 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "7\n");
  fflush(_coverage_fout);
  }
  recursive[0] = (char *)"no";
  {
  fprintf(_coverage_fout, "8\n");
  fflush(_coverage_fout);
  }
  recursive[1] = (char *)"dirs, not symlinks";
  {
  fprintf(_coverage_fout, "9\n");
  fflush(_coverage_fout);
  }
  recursive[2] = (char *)"dirs and symlinks";
  {
  fprintf(_coverage_fout, "10\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"\nCommand line:\n");
  {
  fprintf(_coverage_fout, "11\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.verbose > 0) {
    {
    fprintf(_coverage_fout, "12\n");
    fflush(_coverage_fout);
    }
    tmp = "yes";
  } else {
    {
    fprintf(_coverage_fout, "13\n");
    fflush(_coverage_fout);
    }
    tmp = "no";
  }
  {
  fprintf(_coverage_fout, "14\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"verbose = %s\n", tmp);
  {
  fprintf(_coverage_fout, "15\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.verbose < 0) {
    {
    fprintf(_coverage_fout, "16\n");
    fflush(_coverage_fout);
    }
    tmp___0 = "yes";
  } else {
    {
    fprintf(_coverage_fout, "17\n");
    fflush(_coverage_fout);
    }
    tmp___0 = "no";
  }
  {
  fprintf(_coverage_fout, "18\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"quiet = %s\n", tmp___0);
  {
  fprintf(_coverage_fout, "19\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"debug = %d\n", cmd___0.debug);
  {
  fprintf(_coverage_fout, "20\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.keyword) {
    {
    fprintf(_coverage_fout, "21\n");
    fflush(_coverage_fout);
    }
    tmp___1 = "(known)";
  } else {
    {
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    }
    tmp___1 = "(unknown)";
  }
  {
  fprintf(_coverage_fout, "23\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"keyword = %s\n", tmp___1);
  {
  fprintf(_coverage_fout, "24\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"mode = %d\n", cmd___0.mode);
  {
  fprintf(_coverage_fout, "25\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"suffix = %s\n", cmd___0.suffix);
  {
  fprintf(_coverage_fout, "26\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"recursive = %s\n",
          recursive[cmd___0.recursive]);
  {
  fprintf(_coverage_fout, "27\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.symlinks) {
    {
    fprintf(_coverage_fout, "28\n");
    fflush(_coverage_fout);
    }
    tmp___2 = "yes";
  } else {
    {
    fprintf(_coverage_fout, "29\n");
    fflush(_coverage_fout);
    }
    tmp___2 = "no";
  }
  {
  fprintf(_coverage_fout, "30\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"symlinks = %s\n", tmp___2);
  {
  fprintf(_coverage_fout, "31\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.force) {
    {
    fprintf(_coverage_fout, "32\n");
    fflush(_coverage_fout);
    }
    tmp___3 = "yes";
  } else {
    {
    fprintf(_coverage_fout, "33\n");
    fflush(_coverage_fout);
    }
    tmp___3 = "no";
  }
  {
  fprintf(_coverage_fout, "34\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"force = %s\n", tmp___3);
  {
  fprintf(_coverage_fout, "35\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.filter) {
    {
    fprintf(_coverage_fout, "36\n");
    fflush(_coverage_fout);
    }
    tmp___4 = "yes";
  } else {
    {
    fprintf(_coverage_fout, "37\n");
    fflush(_coverage_fout);
    }
    tmp___4 = "no";
  }
  {
  fprintf(_coverage_fout, "38\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"filter = %s\n", tmp___4);
  {
  fprintf(_coverage_fout, "39\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"infiles:");
  {
  fprintf(_coverage_fout, "40\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "41\n");
    fflush(_coverage_fout);
    }
    tmp___6 = cmd___0.count;
    {
    fprintf(_coverage_fout, "42\n");
    fflush(_coverage_fout);
    }
    (cmd___0.count) --;
    {
    fprintf(_coverage_fout, "43\n");
    fflush(_coverage_fout);
    }
    if (! (tmp___6 > 0)) {
      {
      fprintf(_coverage_fout, "44\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "45\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "46\n");
    fflush(_coverage_fout);
    }
    tmp___5 = cmd___0.infiles;
    {
    fprintf(_coverage_fout, "47\n");
    fflush(_coverage_fout);
    }
    (cmd___0.infiles) ++;
    {
    fprintf(_coverage_fout, "48\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)fout,
            (char const   */* __restrict  */)" %s", *tmp___5);
  }
  {
  fprintf(_coverage_fout, "49\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)fout, (char const   */* __restrict  */)"\n\n");
  {
  fprintf(_coverage_fout, "50\n");
  fflush(_coverage_fout);
  }
  return;
}
}
static struct option longopts[23]  = 
  {      {"encrypt", 0, (int *)0, 'e'}, 
        {"decrypt", 0, (int *)0, 'd'}, 
        {"cat", 0, (int *)0, 'c'}, 
        {"keychange", 0, (int *)0, 'x'}, 
        {"unixcrypt", 0, (int *)0, 'u'}, 
        {"help", 0, (int *)0, 'h'}, 
        {"version", 0, (int *)0, 'V'}, 
        {"license", 0, (int *)0, 'L'}, 
        {"verbose", 0, (int *)0, 'v'}, 
        {"quiet", 0, (int *)0, 'q'}, 
        {"debug", 0, (int *)0, 'D'}, 
        {"force", 0, (int *)0, 'f'}, 
        {"mismatch", 0, (int *)0, 'm'}, 
        {"envvar", 1, (int *)0, 'E'}, 
        {"key", 1, (int *)0, 'K'}, 
        {"keyfile", 0, (int *)0, 'k'}, 
        {"suffix", 1, (int *)0, 'S'}, 
        {"prompt", 1, (int *)0, 'P'}, 
        {"timid", 0, (int *)0, 't'}, 
        {"recursive", 0, (int *)0, 'r'}, 
        {"rec-symlinks", 0, (int *)0, 'R'}, 
        {"symlinks", 0, (int *)0, 'l'}, 
        {(char const   *)0, 0, (int *)0, 0}};
static char *shortopts  =    (char *)"edcxuhVLvqDfmE:K:k:S:P:trRl-";
cmdline read_commandline(int ac , char **av ) 
{ 
  cmdline cmd___0 ;
  int c ;
  char *p ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___14 ;
  int tmp___17 ;
  int tmp___18 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___24 ;
  int tmp___27 ;
  int tmp___28 ;
  char *tmp___38 ;
  char *tmp___48 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___54 ;
  int tmp___57 ;
  int tmp___58 ;
  int tmp___59 ;
  int tmp___60 ;
  int tmp___61 ;
  int tmp___62 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "51\n");
  fflush(_coverage_fout);
  }
  cmd___0.verbose = 0;
  {
  fprintf(_coverage_fout, "52\n");
  fflush(_coverage_fout);
  }
  cmd___0.debug = 0;
  {
  fprintf(_coverage_fout, "53\n");
  fflush(_coverage_fout);
  }
  cmd___0.keyword = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "54\n");
  fflush(_coverage_fout);
  }
  cmd___0.keyword2 = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "55\n");
  fflush(_coverage_fout);
  }
  cmd___0.mode = 0;
  {
  fprintf(_coverage_fout, "56\n");
  fflush(_coverage_fout);
  }
  cmd___0.suffix = (char *)".cpt";
  {
  fprintf(_coverage_fout, "57\n");
  fflush(_coverage_fout);
  }
  cmd___0.prompt = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "58\n");
  fflush(_coverage_fout);
  }
  cmd___0.recursive = 0;
  {
  fprintf(_coverage_fout, "59\n");
  fflush(_coverage_fout);
  }
  cmd___0.symlinks = 0;
  {
  fprintf(_coverage_fout, "60\n");
  fflush(_coverage_fout);
  }
  cmd___0.force = 0;
  {
  fprintf(_coverage_fout, "61\n");
  fflush(_coverage_fout);
  }
  cmd___0.mismatch = 0;
  {
  fprintf(_coverage_fout, "62\n");
  fflush(_coverage_fout);
  }
  cmd___0.filter = 1;
  {
  fprintf(_coverage_fout, "63\n");
  fflush(_coverage_fout);
  }
  cmd___0.infiles = (char **)((void *)0);
  {
  fprintf(_coverage_fout, "64\n");
  fflush(_coverage_fout);
  }
  cmd___0.count = 0;
  {
  fprintf(_coverage_fout, "65\n");
  fflush(_coverage_fout);
  }
  cmd___0.keyfile = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "66\n");
  fflush(_coverage_fout);
  }
  cmd___0.timid = 0;
  {
  fprintf(_coverage_fout, "67\n");
  fflush(_coverage_fout);
  }
  cmd___0.name = strrchr((char const   *)*(av + 0), '/');
  {
  fprintf(_coverage_fout, "68\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.name) {
    {
    fprintf(_coverage_fout, "69\n");
    fflush(_coverage_fout);
    }
    (cmd___0.name) ++;
  } else {
    {
    fprintf(_coverage_fout, "70\n");
    fflush(_coverage_fout);
    }
    cmd___0.name = *(av + 0);
  }
  {
  fprintf(_coverage_fout, "71\n");
  fflush(_coverage_fout);
  }
  if (0) {
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    __s1_len___1 = strlen((char const   *)cmd___0.name);
    {
    fprintf(_coverage_fout, "73\n");
    fflush(_coverage_fout);
    }
    __s2_len___1 = strlen("ccencrypt");
    {
    fprintf(_coverage_fout, "74\n");
    fflush(_coverage_fout);
    }
    if (! ((unsigned long )((void const   *)(cmd___0.name + 1)) - (unsigned long )((void const   *)cmd___0.name) == 1UL)) {
      {
      fprintf(_coverage_fout, "75\n");
      fflush(_coverage_fout);
      }
      goto _L___4;
    } else {
      {
      fprintf(_coverage_fout, "76\n");
      fflush(_coverage_fout);
      }
      if (__s1_len___1 >= 4UL) {
        {
        fprintf(_coverage_fout, "77\n");
        fflush(_coverage_fout);
        }
        _L___4: 
        if (! ((unsigned long )((void const   *)("ccencrypt" + 1)) - (unsigned long )((void const   *)"ccencrypt") == 1UL)) {
          {
          fprintf(_coverage_fout, "78\n");
          fflush(_coverage_fout);
          }
          tmp___28 = 1;
        } else {
          {
          fprintf(_coverage_fout, "79\n");
          fflush(_coverage_fout);
          }
          if (__s2_len___1 >= 4UL) {
            {
            fprintf(_coverage_fout, "80\n");
            fflush(_coverage_fout);
            }
            tmp___28 = 1;
          } else {
            {
            fprintf(_coverage_fout, "81\n");
            fflush(_coverage_fout);
            }
            tmp___28 = 0;
          }
        }
      } else {
        {
        fprintf(_coverage_fout, "82\n");
        fflush(_coverage_fout);
        }
        tmp___28 = 0;
      }
    }
    {
    fprintf(_coverage_fout, "83\n");
    fflush(_coverage_fout);
    }
    if (tmp___28) {
      {
      fprintf(_coverage_fout, "84\n");
      fflush(_coverage_fout);
      }
      tmp___24 = __builtin_strcmp((char const   *)cmd___0.name, "ccencrypt");
    } else {
      {
      fprintf(_coverage_fout, "85\n");
      fflush(_coverage_fout);
      }
      tmp___27 = __builtin_strcmp((char const   *)cmd___0.name, "ccencrypt");
      {
      fprintf(_coverage_fout, "86\n");
      fflush(_coverage_fout);
      }
      tmp___24 = tmp___27;
    }
  } else {
    {
    fprintf(_coverage_fout, "87\n");
    fflush(_coverage_fout);
    }
    tmp___27 = __builtin_strcmp((char const   *)cmd___0.name, "ccencrypt");
    {
    fprintf(_coverage_fout, "88\n");
    fflush(_coverage_fout);
    }
    tmp___24 = tmp___27;
  }
  {
  fprintf(_coverage_fout, "89\n");
  fflush(_coverage_fout);
  }
  if (tmp___24) {
    {
    fprintf(_coverage_fout, "90\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "91\n");
      fflush(_coverage_fout);
      }
      __s1_len___0 = strlen((char const   *)cmd___0.name);
      {
      fprintf(_coverage_fout, "92\n");
      fflush(_coverage_fout);
      }
      __s2_len___0 = strlen("ccdecrypt");
      {
      fprintf(_coverage_fout, "93\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(cmd___0.name + 1)) - (unsigned long )((void const   *)cmd___0.name) == 1UL)) {
        {
        fprintf(_coverage_fout, "94\n");
        fflush(_coverage_fout);
        }
        goto _L___2;
      } else {
        {
        fprintf(_coverage_fout, "95\n");
        fflush(_coverage_fout);
        }
        if (__s1_len___0 >= 4UL) {
          {
          fprintf(_coverage_fout, "96\n");
          fflush(_coverage_fout);
          }
          _L___2: 
          if (! ((unsigned long )((void const   *)("ccdecrypt" + 1)) - (unsigned long )((void const   *)"ccdecrypt") == 1UL)) {
            {
            fprintf(_coverage_fout, "97\n");
            fflush(_coverage_fout);
            }
            tmp___18 = 1;
          } else {
            {
            fprintf(_coverage_fout, "98\n");
            fflush(_coverage_fout);
            }
            if (__s2_len___0 >= 4UL) {
              {
              fprintf(_coverage_fout, "99\n");
              fflush(_coverage_fout);
              }
              tmp___18 = 1;
            } else {
              {
              fprintf(_coverage_fout, "100\n");
              fflush(_coverage_fout);
              }
              tmp___18 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "101\n");
          fflush(_coverage_fout);
          }
          tmp___18 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "102\n");
      fflush(_coverage_fout);
      }
      if (tmp___18) {
        {
        fprintf(_coverage_fout, "103\n");
        fflush(_coverage_fout);
        }
        tmp___14 = __builtin_strcmp((char const   *)cmd___0.name, "ccdecrypt");
      } else {
        {
        fprintf(_coverage_fout, "104\n");
        fflush(_coverage_fout);
        }
        tmp___17 = __builtin_strcmp((char const   *)cmd___0.name, "ccdecrypt");
        {
        fprintf(_coverage_fout, "105\n");
        fflush(_coverage_fout);
        }
        tmp___14 = tmp___17;
      }
    } else {
      {
      fprintf(_coverage_fout, "106\n");
      fflush(_coverage_fout);
      }
      tmp___17 = __builtin_strcmp((char const   *)cmd___0.name, "ccdecrypt");
      {
      fprintf(_coverage_fout, "107\n");
      fflush(_coverage_fout);
      }
      tmp___14 = tmp___17;
    }
    {
    fprintf(_coverage_fout, "108\n");
    fflush(_coverage_fout);
    }
    if (tmp___14) {
      {
      fprintf(_coverage_fout, "109\n");
      fflush(_coverage_fout);
      }
      if (0) {
        {
        fprintf(_coverage_fout, "110\n");
        fflush(_coverage_fout);
        }
        __s1_len = strlen((char const   *)cmd___0.name);
        {
        fprintf(_coverage_fout, "111\n");
        fflush(_coverage_fout);
        }
        __s2_len = strlen("ccat");
        {
        fprintf(_coverage_fout, "112\n");
        fflush(_coverage_fout);
        }
        if (! ((unsigned long )((void const   *)(cmd___0.name + 1)) - (unsigned long )((void const   *)cmd___0.name) == 1UL)) {
          {
          fprintf(_coverage_fout, "113\n");
          fflush(_coverage_fout);
          }
          goto _L___0;
        } else {
          {
          fprintf(_coverage_fout, "114\n");
          fflush(_coverage_fout);
          }
          if (__s1_len >= 4UL) {
            {
            fprintf(_coverage_fout, "115\n");
            fflush(_coverage_fout);
            }
            _L___0: 
            if (! ((unsigned long )((void const   *)("ccat" + 1)) - (unsigned long )((void const   *)"ccat") == 1UL)) {
              {
              fprintf(_coverage_fout, "116\n");
              fflush(_coverage_fout);
              }
              tmp___8 = 1;
            } else {
              {
              fprintf(_coverage_fout, "117\n");
              fflush(_coverage_fout);
              }
              if (__s2_len >= 4UL) {
                {
                fprintf(_coverage_fout, "118\n");
                fflush(_coverage_fout);
                }
                tmp___8 = 1;
              } else {
                {
                fprintf(_coverage_fout, "119\n");
                fflush(_coverage_fout);
                }
                tmp___8 = 0;
              }
            }
          } else {
            {
            fprintf(_coverage_fout, "120\n");
            fflush(_coverage_fout);
            }
            tmp___8 = 0;
          }
        }
        {
        fprintf(_coverage_fout, "121\n");
        fflush(_coverage_fout);
        }
        if (tmp___8) {
          {
          fprintf(_coverage_fout, "122\n");
          fflush(_coverage_fout);
          }
          tmp___4 = __builtin_strcmp((char const   *)cmd___0.name, "ccat");
        } else {
          {
          fprintf(_coverage_fout, "123\n");
          fflush(_coverage_fout);
          }
          tmp___7 = __builtin_strcmp((char const   *)cmd___0.name, "ccat");
          {
          fprintf(_coverage_fout, "124\n");
          fflush(_coverage_fout);
          }
          tmp___4 = tmp___7;
        }
      } else {
        {
        fprintf(_coverage_fout, "125\n");
        fflush(_coverage_fout);
        }
        tmp___7 = __builtin_strcmp((char const   *)cmd___0.name, "ccat");
        {
        fprintf(_coverage_fout, "126\n");
        fflush(_coverage_fout);
        }
        tmp___4 = tmp___7;
      }
      {
      fprintf(_coverage_fout, "127\n");
      fflush(_coverage_fout);
      }
      if (tmp___4) {
        {
        fprintf(_coverage_fout, "128\n");
        fflush(_coverage_fout);
        }
        *(av + 0) = (char *)"ccrypt";
        {
        fprintf(_coverage_fout, "129\n");
        fflush(_coverage_fout);
        }
        cmd___0.name = *(av + 0);
      } else {
        {
        fprintf(_coverage_fout, "130\n");
        fflush(_coverage_fout);
        }
        cmd___0.mode = 3;
      }
    } else {
      {
      fprintf(_coverage_fout, "131\n");
      fflush(_coverage_fout);
      }
      cmd___0.mode = 1;
    }
  } else {
    {
    fprintf(_coverage_fout, "132\n");
    fflush(_coverage_fout);
    }
    cmd___0.mode = 0;
  }
  {
  fprintf(_coverage_fout, "133\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "134\n");
    fflush(_coverage_fout);
    }
    c = getopt_long(ac, (char * const  *)av, (char const   *)shortopts,
                    (struct option  const  *)(longopts), (int *)((void *)0));
    {
    fprintf(_coverage_fout, "135\n");
    fflush(_coverage_fout);
    }
    if (! (c != -1)) {
      {
      fprintf(_coverage_fout, "136\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "137\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "138\n");
    fflush(_coverage_fout);
    }
    switch (c) {
    {
    fprintf(_coverage_fout, "139\n");
    fflush(_coverage_fout);
    }
    case 104: 
    usage(stdout);
    {
    fprintf(_coverage_fout, "140\n");
    fflush(_coverage_fout);
    }
    exit(0);
    {
    fprintf(_coverage_fout, "141\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "142\n");
    fflush(_coverage_fout);
    }
    case 86: 
    version(stdout);
    {
    fprintf(_coverage_fout, "143\n");
    fflush(_coverage_fout);
    }
    exit(0);
    {
    fprintf(_coverage_fout, "144\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "145\n");
    fflush(_coverage_fout);
    }
    case 76: 
    license(stdout);
    {
    fprintf(_coverage_fout, "146\n");
    fflush(_coverage_fout);
    }
    exit(0);
    {
    fprintf(_coverage_fout, "147\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "148\n");
    fflush(_coverage_fout);
    }
    case 118: 
    cmd___0.verbose = 1;
    {
    fprintf(_coverage_fout, "149\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "150\n");
    fflush(_coverage_fout);
    }
    case 113: 
    cmd___0.verbose = -1;
    {
    fprintf(_coverage_fout, "151\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "152\n");
    fflush(_coverage_fout);
    }
    case 68: 
    (cmd___0.debug) ++;
    {
    fprintf(_coverage_fout, "153\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "154\n");
    fflush(_coverage_fout);
    }
    case 69: 
    p = getenv((char const   *)optarg);
    {
    fprintf(_coverage_fout, "155\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )p == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "156\n");
      fflush(_coverage_fout);
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: environment variable %s does not exist\n",
              cmd___0.name, optarg);
      {
      fprintf(_coverage_fout, "157\n");
      fflush(_coverage_fout);
      }
      exit(1);
    } else {
      {
      fprintf(_coverage_fout, "158\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "159\n");
    fflush(_coverage_fout);
    }
    tmp___38 = __strdup((char const   *)p);
    {
    fprintf(_coverage_fout, "160\n");
    fflush(_coverage_fout);
    }
    cmd___0.keyword = tmp___38;
    {
    fprintf(_coverage_fout, "161\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "162\n");
      fflush(_coverage_fout);
      }
      if (*p) {
        {
        fprintf(_coverage_fout, "163\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "164\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "165\n");
      fflush(_coverage_fout);
      }
      *p = (char)0;
      {
      fprintf(_coverage_fout, "166\n");
      fflush(_coverage_fout);
      }
      p ++;
    }
    {
    fprintf(_coverage_fout, "167\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "168\n");
    fflush(_coverage_fout);
    }
    case 75: 
    tmp___48 = __strdup((char const   *)optarg);
    {
    fprintf(_coverage_fout, "169\n");
    fflush(_coverage_fout);
    }
    cmd___0.keyword = tmp___48;
    {
    fprintf(_coverage_fout, "170\n");
    fflush(_coverage_fout);
    }
    p = optarg;
    {
    fprintf(_coverage_fout, "171\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "172\n");
      fflush(_coverage_fout);
      }
      if (*p) {
        {
        fprintf(_coverage_fout, "173\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "174\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "175\n");
      fflush(_coverage_fout);
      }
      *p = (char)0;
      {
      fprintf(_coverage_fout, "176\n");
      fflush(_coverage_fout);
      }
      p ++;
    }
    {
    fprintf(_coverage_fout, "177\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "178\n");
    fflush(_coverage_fout);
    }
    case 107: 
    cmd___0.keyfile = optarg;
    {
    fprintf(_coverage_fout, "179\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "180\n");
    fflush(_coverage_fout);
    }
    case 83: 
    cmd___0.suffix = optarg;
    {
    fprintf(_coverage_fout, "181\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "182\n");
    fflush(_coverage_fout);
    }
    case 80: 
    cmd___0.prompt = optarg;
    {
    fprintf(_coverage_fout, "183\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "184\n");
    fflush(_coverage_fout);
    }
    case 101: 
    cmd___0.mode = 0;
    {
    fprintf(_coverage_fout, "185\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "186\n");
    fflush(_coverage_fout);
    }
    case 100: 
    cmd___0.mode = 1;
    {
    fprintf(_coverage_fout, "187\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "188\n");
    fflush(_coverage_fout);
    }
    case 99: 
    cmd___0.mode = 3;
    {
    fprintf(_coverage_fout, "189\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "190\n");
    fflush(_coverage_fout);
    }
    case 120: 
    cmd___0.mode = 2;
    {
    fprintf(_coverage_fout, "191\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "192\n");
    fflush(_coverage_fout);
    }
    case 117: 
    cmd___0.mode = 4;
    {
    fprintf(_coverage_fout, "193\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "194\n");
    fflush(_coverage_fout);
    }
    case 116: 
    cmd___0.timid = 1;
    {
    fprintf(_coverage_fout, "195\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "196\n");
    fflush(_coverage_fout);
    }
    case 114: 
    cmd___0.recursive = 1;
    {
    fprintf(_coverage_fout, "197\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "198\n");
    fflush(_coverage_fout);
    }
    case 82: 
    cmd___0.recursive = 2;
    {
    fprintf(_coverage_fout, "199\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "200\n");
    fflush(_coverage_fout);
    }
    case 108: 
    cmd___0.symlinks = 1;
    {
    fprintf(_coverage_fout, "201\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "202\n");
    fflush(_coverage_fout);
    }
    case 102: 
    cmd___0.force = 1;
    {
    fprintf(_coverage_fout, "203\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "204\n");
    fflush(_coverage_fout);
    }
    case 109: 
    cmd___0.mismatch = 1;
    {
    fprintf(_coverage_fout, "205\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "206\n");
    fflush(_coverage_fout);
    }
    case 63: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Try --help for more info\n");
    {
    fprintf(_coverage_fout, "207\n");
    fflush(_coverage_fout);
    }
    exit(1);
    {
    fprintf(_coverage_fout, "208\n");
    fflush(_coverage_fout);
    }
    break;
    }
  }
  {
  fprintf(_coverage_fout, "209\n");
  fflush(_coverage_fout);
  }
  cmd___0.infiles = av + optind;
  {
  fprintf(_coverage_fout, "210\n");
  fflush(_coverage_fout);
  }
  cmd___0.count = ac - optind;
  {
  fprintf(_coverage_fout, "211\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.count > 0) {
    {
    fprintf(_coverage_fout, "212\n");
    fflush(_coverage_fout);
    }
    cmd___0.filter = 0;
  } else {
    {
    fprintf(_coverage_fout, "213\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "214\n");
      fflush(_coverage_fout);
      }
      __s1_len___2 = strlen((char const   *)*(av + (optind - 1)));
      {
      fprintf(_coverage_fout, "215\n");
      fflush(_coverage_fout);
      }
      __s2_len___2 = strlen("--");
      {
      fprintf(_coverage_fout, "216\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(*(av + (optind - 1)) + 1)) - (unsigned long )((void const   *)*(av + (optind - 1))) == 1UL)) {
        {
        fprintf(_coverage_fout, "217\n");
        fflush(_coverage_fout);
        }
        goto _L___6;
      } else {
        {
        fprintf(_coverage_fout, "218\n");
        fflush(_coverage_fout);
        }
        if (__s1_len___2 >= 4UL) {
          {
          fprintf(_coverage_fout, "219\n");
          fflush(_coverage_fout);
          }
          _L___6: 
          if (! ((unsigned long )((void const   *)("--" + 1)) - (unsigned long )((void const   *)"--") == 1UL)) {
            {
            fprintf(_coverage_fout, "220\n");
            fflush(_coverage_fout);
            }
            tmp___58 = 1;
          } else {
            {
            fprintf(_coverage_fout, "221\n");
            fflush(_coverage_fout);
            }
            if (__s2_len___2 >= 4UL) {
              {
              fprintf(_coverage_fout, "222\n");
              fflush(_coverage_fout);
              }
              tmp___58 = 1;
            } else {
              {
              fprintf(_coverage_fout, "223\n");
              fflush(_coverage_fout);
              }
              tmp___58 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "224\n");
          fflush(_coverage_fout);
          }
          tmp___58 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "225\n");
      fflush(_coverage_fout);
      }
      if (tmp___58) {
        {
        fprintf(_coverage_fout, "226\n");
        fflush(_coverage_fout);
        }
        tmp___54 = __builtin_strcmp((char const   *)*(av + (optind - 1)), "--");
      } else {
        {
        fprintf(_coverage_fout, "227\n");
        fflush(_coverage_fout);
        }
        tmp___57 = __builtin_strcmp((char const   *)*(av + (optind - 1)), "--");
        {
        fprintf(_coverage_fout, "228\n");
        fflush(_coverage_fout);
        }
        tmp___54 = tmp___57;
      }
    } else {
      {
      fprintf(_coverage_fout, "229\n");
      fflush(_coverage_fout);
      }
      tmp___57 = __builtin_strcmp((char const   *)*(av + (optind - 1)), "--");
      {
      fprintf(_coverage_fout, "230\n");
      fflush(_coverage_fout);
      }
      tmp___54 = tmp___57;
    }
    {
    fprintf(_coverage_fout, "231\n");
    fflush(_coverage_fout);
    }
    if (tmp___54 == 0) {
      {
      fprintf(_coverage_fout, "232\n");
      fflush(_coverage_fout);
      }
      cmd___0.filter = 0;
    } else {
      {
      fprintf(_coverage_fout, "233\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "234\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.mode == 3) {
    {
    fprintf(_coverage_fout, "235\n");
    fflush(_coverage_fout);
    }
    cmd___0.symlinks = 1;
  } else {
    {
    fprintf(_coverage_fout, "236\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "237\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.debug) {
    {
    fprintf(_coverage_fout, "238\n");
    fflush(_coverage_fout);
    }
    output_commandline(cmd___0, stderr);
  } else {
    {
    fprintf(_coverage_fout, "239\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "240\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.mismatch) {
    {
    fprintf(_coverage_fout, "241\n");
    fflush(_coverage_fout);
    }
    if (! cmd___0.filter) {
      {
      fprintf(_coverage_fout, "242\n");
      fflush(_coverage_fout);
      }
      if (cmd___0.mode != 3) {
        {
        fprintf(_coverage_fout, "243\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: option -m can only be used with -c or when running as a filter.\n",
                cmd___0.name);
        {
        fprintf(_coverage_fout, "244\n");
        fflush(_coverage_fout);
        }
        exit(1);
      } else {
        {
        fprintf(_coverage_fout, "245\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "246\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "247\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "248\n");
  fflush(_coverage_fout);
  }
  if (! cmd___0.filter) {
    {
    fprintf(_coverage_fout, "249\n");
    fflush(_coverage_fout);
    }
    if (cmd___0.count == 0) {
      {
      fprintf(_coverage_fout, "250\n");
      fflush(_coverage_fout);
      }
      if (cmd___0.verbose >= 0) {
        {
        fprintf(_coverage_fout, "251\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: warning: empty list of filenames given\n",
                cmd___0.name);
      } else {
        {
        fprintf(_coverage_fout, "252\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "253\n");
      fflush(_coverage_fout);
      }
      exit(0);
    } else {
      {
      fprintf(_coverage_fout, "254\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "255\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "256\n");
  fflush(_coverage_fout);
  }
  if (cmd___0.filter) {
    {
    fprintf(_coverage_fout, "257\n");
    fflush(_coverage_fout);
    }
    if (! cmd___0.force) {
      {
      fprintf(_coverage_fout, "258\n");
      fflush(_coverage_fout);
      }
      if (cmd___0.mode == 0) {
        {
        fprintf(_coverage_fout, "259\n");
        fflush(_coverage_fout);
        }
        goto _L___7;
      } else {
        {
        fprintf(_coverage_fout, "260\n");
        fflush(_coverage_fout);
        }
        if (cmd___0.mode == 2) {
          {
          fprintf(_coverage_fout, "261\n");
          fflush(_coverage_fout);
          }
          _L___7: 
          tmp___59 = fileno(stdout);
          {
          fprintf(_coverage_fout, "262\n");
          fflush(_coverage_fout);
          }
          tmp___60 = isatty(tmp___59);
          {
          fprintf(_coverage_fout, "263\n");
          fflush(_coverage_fout);
          }
          if (tmp___60) {
            {
            fprintf(_coverage_fout, "264\n");
            fflush(_coverage_fout);
            }
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"%s: encrypted data not written to a terminal. Use -f to force encryption.\nTry --help for more information.\n",
                    cmd___0.name);
            {
            fprintf(_coverage_fout, "265\n");
            fflush(_coverage_fout);
            }
            exit(1);
          } else {
            {
            fprintf(_coverage_fout, "266\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "267\n");
          fflush(_coverage_fout);
          }

        }
      }
      {
      fprintf(_coverage_fout, "268\n");
      fflush(_coverage_fout);
      }
      if (cmd___0.mode == 1) {
        {
        fprintf(_coverage_fout, "269\n");
        fflush(_coverage_fout);
        }
        goto _L___8;
      } else {
        {
        fprintf(_coverage_fout, "270\n");
        fflush(_coverage_fout);
        }
        if (cmd___0.mode == 2) {
          {
          fprintf(_coverage_fout, "271\n");
          fflush(_coverage_fout);
          }
          goto _L___8;
        } else {
          {
          fprintf(_coverage_fout, "272\n");
          fflush(_coverage_fout);
          }
          if (cmd___0.mode == 3) {
            {
            fprintf(_coverage_fout, "273\n");
            fflush(_coverage_fout);
            }
            goto _L___8;
          } else {
            {
            fprintf(_coverage_fout, "274\n");
            fflush(_coverage_fout);
            }
            if (cmd___0.mode == 4) {
              {
              fprintf(_coverage_fout, "275\n");
              fflush(_coverage_fout);
              }
              _L___8: 
              tmp___61 = fileno(stdin);
              {
              fprintf(_coverage_fout, "276\n");
              fflush(_coverage_fout);
              }
              tmp___62 = isatty(tmp___61);
              {
              fprintf(_coverage_fout, "277\n");
              fflush(_coverage_fout);
              }
              if (tmp___62) {
                {
                fprintf(_coverage_fout, "278\n");
                fflush(_coverage_fout);
                }
                fprintf((FILE */* __restrict  */)stderr,
                        (char const   */* __restrict  */)"%s: encrypted data not read from a terminal. Use -f to force decryption.\nTry --help for more information.\n",
                        cmd___0.name);
                {
                fprintf(_coverage_fout, "279\n");
                fflush(_coverage_fout);
                }
                exit(1);
              } else {
                {
                fprintf(_coverage_fout, "280\n");
                fflush(_coverage_fout);
                }

              }
            } else {
              {
              fprintf(_coverage_fout, "281\n");
              fflush(_coverage_fout);
              }

            }
          }
        }
      }
    } else {
      {
      fprintf(_coverage_fout, "282\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "283\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "284\n");
  fflush(_coverage_fout);
  }
  return (cmd___0);
}
}
int sigint_flag  =    0;
void sigint(int dummy ) ;
static time_t sigint_time  =    (time_t )0;
void sigint(int dummy ) 
{ 
  int errno_saved ;
  int *tmp ;
  time_t tmp___0 ;
  int *tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "285\n");
  fflush(_coverage_fout);
  }
  tmp = __errno_location();
  {
  fprintf(_coverage_fout, "286\n");
  fflush(_coverage_fout);
  }
  errno_saved = *tmp;
  {
  fprintf(_coverage_fout, "287\n");
  fflush(_coverage_fout);
  }
  tmp___0 = time((time_t *)((void *)0));
  {
  fprintf(_coverage_fout, "288\n");
  fflush(_coverage_fout);
  }
  if (tmp___0 - sigint_time <= 1L) {
    {
    fprintf(_coverage_fout, "289\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Interrupted.\n");
    {
    fprintf(_coverage_fout, "290\n");
    fflush(_coverage_fout);
    }
    exit(6);
  } else {
    {
    fprintf(_coverage_fout, "291\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "292\n");
  fflush(_coverage_fout);
  }
  sigint_time = time((time_t *)((void *)0));
  {
  fprintf(_coverage_fout, "293\n");
  fflush(_coverage_fout);
  }
  sigint_flag = 1;
  {
  fprintf(_coverage_fout, "294\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"Interrupt - will exit after current file. Press CTRL-C twice to exit now.\n");
  {
  fprintf(_coverage_fout, "295\n");
  fflush(_coverage_fout);
  }
  tmp___1 = __errno_location();
  {
  fprintf(_coverage_fout, "296\n");
  fflush(_coverage_fout);
  }
  *tmp___1 = errno_saved;
  {
  fprintf(_coverage_fout, "297\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int main(int ac , char **av ) 
{ 
  int res ;
  FILE *f ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___14 ;
  int tmp___17 ;
  int tmp___18 ;
  size_t tmp___19 ;
  char *promptagain ;
  unsigned long __lengthofpromptagain ;
  void *tmp___20 ;
  char *repeat ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___26 ;
  int tmp___29 ;
  int tmp___30 ;
  size_t tmp___31 ;
  char *promptagain___0 ;
  unsigned long __lengthofpromptagain___0 ;
  void *tmp___32 ;
  char *repeat___0 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___38 ;
  int tmp___41 ;
  int tmp___42 ;
  char const   *tmp___43 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "298\n");
  fflush(_coverage_fout);
  }
  cmd = read_commandline(ac, av);
  {
  fprintf(_coverage_fout, "299\n");
  fflush(_coverage_fout);
  }
  if (cmd.keyfile) {
    {
    fprintf(_coverage_fout, "300\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "301\n");
      fflush(_coverage_fout);
      }
      __s1_len = strlen((char const   *)cmd.keyfile);
      {
      fprintf(_coverage_fout, "302\n");
      fflush(_coverage_fout);
      }
      __s2_len = strlen("-");
      {
      fprintf(_coverage_fout, "303\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(cmd.keyfile + 1)) - (unsigned long )((void const   *)cmd.keyfile) == 1UL)) {
        {
        fprintf(_coverage_fout, "304\n");
        fflush(_coverage_fout);
        }
        goto _L___0;
      } else {
        {
        fprintf(_coverage_fout, "305\n");
        fflush(_coverage_fout);
        }
        if (__s1_len >= 4UL) {
          {
          fprintf(_coverage_fout, "306\n");
          fflush(_coverage_fout);
          }
          _L___0: 
          if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
            {
            fprintf(_coverage_fout, "307\n");
            fflush(_coverage_fout);
            }
            tmp___8 = 1;
          } else {
            {
            fprintf(_coverage_fout, "308\n");
            fflush(_coverage_fout);
            }
            if (__s2_len >= 4UL) {
              {
              fprintf(_coverage_fout, "309\n");
              fflush(_coverage_fout);
              }
              tmp___8 = 1;
            } else {
              {
              fprintf(_coverage_fout, "310\n");
              fflush(_coverage_fout);
              }
              tmp___8 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "311\n");
          fflush(_coverage_fout);
          }
          tmp___8 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "312\n");
      fflush(_coverage_fout);
      }
      if (tmp___8) {
        {
        fprintf(_coverage_fout, "313\n");
        fflush(_coverage_fout);
        }
        tmp___4 = __builtin_strcmp((char const   *)cmd.keyfile, "-");
      } else {
        {
        fprintf(_coverage_fout, "314\n");
        fflush(_coverage_fout);
        }
        tmp___7 = __builtin_strcmp((char const   *)cmd.keyfile, "-");
        {
        fprintf(_coverage_fout, "315\n");
        fflush(_coverage_fout);
        }
        tmp___4 = tmp___7;
      }
    } else {
      {
      fprintf(_coverage_fout, "316\n");
      fflush(_coverage_fout);
      }
      tmp___7 = __builtin_strcmp((char const   *)cmd.keyfile, "-");
      {
      fprintf(_coverage_fout, "317\n");
      fflush(_coverage_fout);
      }
      tmp___4 = tmp___7;
    }
    {
    fprintf(_coverage_fout, "318\n");
    fflush(_coverage_fout);
    }
    if (tmp___4 == 0) {
      {
      fprintf(_coverage_fout, "319\n");
      fflush(_coverage_fout);
      }
      f = stdin;
    } else {
      {
      fprintf(_coverage_fout, "320\n");
      fflush(_coverage_fout);
      }
      f = fopen((char const   */* __restrict  */)cmd.keyfile,
                (char const   */* __restrict  */)"r");
      {
      fprintf(_coverage_fout, "321\n");
      fflush(_coverage_fout);
      }
      if (! f) {
        {
        fprintf(_coverage_fout, "322\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: could not read key from %s: ",
                cmd.name, cmd.keyfile);
        {
        fprintf(_coverage_fout, "323\n");
        fflush(_coverage_fout);
        }
        perror("");
        {
        fprintf(_coverage_fout, "324\n");
        fflush(_coverage_fout);
        }
        exit(1);
      } else {
        {
        fprintf(_coverage_fout, "325\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "326\n");
    fflush(_coverage_fout);
    }
    cmd.keyword = xreadline(f, cmd.name);
    {
    fprintf(_coverage_fout, "327\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )cmd.keyword == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "328\n");
      fflush(_coverage_fout);
      }
      exit(0);
    } else {
      {
      fprintf(_coverage_fout, "329\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "330\n");
    fflush(_coverage_fout);
    }
    if (cmd.mode == 2) {
      {
      fprintf(_coverage_fout, "331\n");
      fflush(_coverage_fout);
      }
      cmd.keyword2 = xreadline(f, cmd.name);
      {
      fprintf(_coverage_fout, "332\n");
      fflush(_coverage_fout);
      }
      if ((unsigned long )cmd.keyword2 == (unsigned long )((void *)0)) {
        {
        fprintf(_coverage_fout, "333\n");
        fflush(_coverage_fout);
        }
        exit(0);
      } else {
        {
        fprintf(_coverage_fout, "334\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "335\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "336\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "337\n");
      fflush(_coverage_fout);
      }
      __s1_len___0 = strlen((char const   *)cmd.keyfile);
      {
      fprintf(_coverage_fout, "338\n");
      fflush(_coverage_fout);
      }
      __s2_len___0 = strlen("-");
      {
      fprintf(_coverage_fout, "339\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(cmd.keyfile + 1)) - (unsigned long )((void const   *)cmd.keyfile) == 1UL)) {
        {
        fprintf(_coverage_fout, "340\n");
        fflush(_coverage_fout);
        }
        goto _L___2;
      } else {
        {
        fprintf(_coverage_fout, "341\n");
        fflush(_coverage_fout);
        }
        if (__s1_len___0 >= 4UL) {
          {
          fprintf(_coverage_fout, "342\n");
          fflush(_coverage_fout);
          }
          _L___2: 
          if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
            {
            fprintf(_coverage_fout, "343\n");
            fflush(_coverage_fout);
            }
            tmp___18 = 1;
          } else {
            {
            fprintf(_coverage_fout, "344\n");
            fflush(_coverage_fout);
            }
            if (__s2_len___0 >= 4UL) {
              {
              fprintf(_coverage_fout, "345\n");
              fflush(_coverage_fout);
              }
              tmp___18 = 1;
            } else {
              {
              fprintf(_coverage_fout, "346\n");
              fflush(_coverage_fout);
              }
              tmp___18 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "347\n");
          fflush(_coverage_fout);
          }
          tmp___18 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "348\n");
      fflush(_coverage_fout);
      }
      if (tmp___18) {
        {
        fprintf(_coverage_fout, "349\n");
        fflush(_coverage_fout);
        }
        tmp___14 = __builtin_strcmp((char const   *)cmd.keyfile, "-");
      } else {
        {
        fprintf(_coverage_fout, "350\n");
        fflush(_coverage_fout);
        }
        tmp___17 = __builtin_strcmp((char const   *)cmd.keyfile, "-");
        {
        fprintf(_coverage_fout, "351\n");
        fflush(_coverage_fout);
        }
        tmp___14 = tmp___17;
      }
    } else {
      {
      fprintf(_coverage_fout, "352\n");
      fflush(_coverage_fout);
      }
      tmp___17 = __builtin_strcmp((char const   *)cmd.keyfile, "-");
      {
      fprintf(_coverage_fout, "353\n");
      fflush(_coverage_fout);
      }
      tmp___14 = tmp___17;
    }
    {
    fprintf(_coverage_fout, "354\n");
    fflush(_coverage_fout);
    }
    if (tmp___14 != 0) {
      {
      fprintf(_coverage_fout, "355\n");
      fflush(_coverage_fout);
      }
      fclose(f);
    } else {
      {
      fprintf(_coverage_fout, "356\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "357\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "358\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )cmd.keyword == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "359\n");
    fflush(_coverage_fout);
    }
    if (! cmd.prompt) {
      {
      fprintf(_coverage_fout, "360\n");
      fflush(_coverage_fout);
      }
      switch (cmd.mode) {
      {
      fprintf(_coverage_fout, "361\n");
      fflush(_coverage_fout);
      }
      default: 
      case 0: 
      cmd.prompt = (char *)"Enter encryption key: ";
      {
      fprintf(_coverage_fout, "362\n");
      fflush(_coverage_fout);
      }
      break;
      {
      fprintf(_coverage_fout, "363\n");
      fflush(_coverage_fout);
      }
      case 3: 
      case 1: 
      cmd.prompt = (char *)"Enter decryption key: ";
      {
      fprintf(_coverage_fout, "364\n");
      fflush(_coverage_fout);
      }
      break;
      {
      fprintf(_coverage_fout, "365\n");
      fflush(_coverage_fout);
      }
      case 2: 
      cmd.prompt = (char *)"Enter old key: ";
      {
      fprintf(_coverage_fout, "366\n");
      fflush(_coverage_fout);
      }
      break;
      {
      fprintf(_coverage_fout, "367\n");
      fflush(_coverage_fout);
      }
      case 4: 
      cmd.prompt = (char *)"Enter key: ";
      {
      fprintf(_coverage_fout, "368\n");
      fflush(_coverage_fout);
      }
      break;
      }
    } else {
      {
      fprintf(_coverage_fout, "369\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "370\n");
    fflush(_coverage_fout);
    }
    cmd.keyword = readkey(cmd.prompt, cmd.name);
    {
    fprintf(_coverage_fout, "371\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )cmd.keyword == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "372\n");
      fflush(_coverage_fout);
      }
      exit(0);
    } else {
      {
      fprintf(_coverage_fout, "373\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "374\n");
    fflush(_coverage_fout);
    }
    if (cmd.timid) {
      {
      fprintf(_coverage_fout, "375\n");
      fflush(_coverage_fout);
      }
      if (cmd.mode == 0) {
        {
        fprintf(_coverage_fout, "376\n");
        fflush(_coverage_fout);
        }
        if (! cmd.filter) {
          {
          fprintf(_coverage_fout, "377\n");
          fflush(_coverage_fout);
          }
          tmp___19 = strlen((char const   *)cmd.prompt);
          {
          fprintf(_coverage_fout, "378\n");
          fflush(_coverage_fout);
          }
          __lengthofpromptagain = tmp___19 + 10UL;
          {
          fprintf(_coverage_fout, "379\n");
          fflush(_coverage_fout);
          }
          tmp___20 = __builtin_alloca(sizeof(*promptagain) * __lengthofpromptagain);
          {
          fprintf(_coverage_fout, "380\n");
          fflush(_coverage_fout);
          }
          promptagain = (char *)tmp___20;
          {
          fprintf(_coverage_fout, "381\n");
          fflush(_coverage_fout);
          }
          strcpy((char */* __restrict  */)promptagain,
                 (char const   */* __restrict  */)cmd.prompt);
          {
          fprintf(_coverage_fout, "382\n");
          fflush(_coverage_fout);
          }
          strcat((char */* __restrict  */)promptagain,
                 (char const   */* __restrict  */)"(repeat) ");
          {
          fprintf(_coverage_fout, "383\n");
          fflush(_coverage_fout);
          }
          repeat = readkey(promptagain, cmd.name);
          {
          fprintf(_coverage_fout, "384\n");
          fflush(_coverage_fout);
          }
          if ((unsigned long )repeat == (unsigned long )((void *)0)) {
            {
            fprintf(_coverage_fout, "385\n");
            fflush(_coverage_fout);
            }
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"Sorry, keys did not match.\n");
            {
            fprintf(_coverage_fout, "386\n");
            fflush(_coverage_fout);
            }
            exit(7);
          } else {
            {
            fprintf(_coverage_fout, "387\n");
            fflush(_coverage_fout);
            }
            if (0) {
              {
              fprintf(_coverage_fout, "388\n");
              fflush(_coverage_fout);
              }
              __s1_len___1 = strlen((char const   *)repeat);
              {
              fprintf(_coverage_fout, "389\n");
              fflush(_coverage_fout);
              }
              __s2_len___1 = strlen((char const   *)cmd.keyword);
              {
              fprintf(_coverage_fout, "390\n");
              fflush(_coverage_fout);
              }
              if (! ((unsigned long )((void const   *)(repeat + 1)) - (unsigned long )((void const   *)repeat) == 1UL)) {
                {
                fprintf(_coverage_fout, "391\n");
                fflush(_coverage_fout);
                }
                goto _L___4;
              } else {
                {
                fprintf(_coverage_fout, "392\n");
                fflush(_coverage_fout);
                }
                if (__s1_len___1 >= 4UL) {
                  {
                  fprintf(_coverage_fout, "393\n");
                  fflush(_coverage_fout);
                  }
                  _L___4: 
                  if (! ((unsigned long )((void const   *)(cmd.keyword + 1)) - (unsigned long )((void const   *)cmd.keyword) == 1UL)) {
                    {
                    fprintf(_coverage_fout, "394\n");
                    fflush(_coverage_fout);
                    }
                    tmp___30 = 1;
                  } else {
                    {
                    fprintf(_coverage_fout, "395\n");
                    fflush(_coverage_fout);
                    }
                    if (__s2_len___1 >= 4UL) {
                      {
                      fprintf(_coverage_fout, "396\n");
                      fflush(_coverage_fout);
                      }
                      tmp___30 = 1;
                    } else {
                      {
                      fprintf(_coverage_fout, "397\n");
                      fflush(_coverage_fout);
                      }
                      tmp___30 = 0;
                    }
                  }
                } else {
                  {
                  fprintf(_coverage_fout, "398\n");
                  fflush(_coverage_fout);
                  }
                  tmp___30 = 0;
                }
              }
              {
              fprintf(_coverage_fout, "399\n");
              fflush(_coverage_fout);
              }
              if (tmp___30) {
                {
                fprintf(_coverage_fout, "400\n");
                fflush(_coverage_fout);
                }
                tmp___26 = __builtin_strcmp((char const   *)repeat,
                                            (char const   *)cmd.keyword);
              } else {
                {
                fprintf(_coverage_fout, "401\n");
                fflush(_coverage_fout);
                }
                tmp___29 = __builtin_strcmp((char const   *)repeat,
                                            (char const   *)cmd.keyword);
                {
                fprintf(_coverage_fout, "402\n");
                fflush(_coverage_fout);
                }
                tmp___26 = tmp___29;
              }
            } else {
              {
              fprintf(_coverage_fout, "403\n");
              fflush(_coverage_fout);
              }
              tmp___29 = __builtin_strcmp((char const   *)repeat,
                                          (char const   *)cmd.keyword);
              {
              fprintf(_coverage_fout, "404\n");
              fflush(_coverage_fout);
              }
              tmp___26 = tmp___29;
            }
            {
            fprintf(_coverage_fout, "405\n");
            fflush(_coverage_fout);
            }
            if (tmp___26 != 0) {
              {
              fprintf(_coverage_fout, "406\n");
              fflush(_coverage_fout);
              }
              fprintf((FILE */* __restrict  */)stderr,
                      (char const   */* __restrict  */)"Sorry, keys did not match.\n");
              {
              fprintf(_coverage_fout, "407\n");
              fflush(_coverage_fout);
              }
              exit(7);
            } else {
              {
              fprintf(_coverage_fout, "408\n");
              fflush(_coverage_fout);
              }

            }
          }
        } else {
          {
          fprintf(_coverage_fout, "409\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "410\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "411\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "412\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "413\n");
  fflush(_coverage_fout);
  }
  if (cmd.mode == 2) {
    {
    fprintf(_coverage_fout, "414\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )cmd.keyword2 == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "415\n");
      fflush(_coverage_fout);
      }
      cmd.keyword2 = readkey((char *)"Enter new key: ", cmd.name);
      {
      fprintf(_coverage_fout, "416\n");
      fflush(_coverage_fout);
      }
      if ((unsigned long )cmd.keyword2 == (unsigned long )((void *)0)) {
        {
        fprintf(_coverage_fout, "417\n");
        fflush(_coverage_fout);
        }
        exit(0);
      } else {
        {
        fprintf(_coverage_fout, "418\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "419\n");
      fflush(_coverage_fout);
      }
      if (cmd.timid) {
        {
        fprintf(_coverage_fout, "420\n");
        fflush(_coverage_fout);
        }
        if (! cmd.filter) {
          {
          fprintf(_coverage_fout, "421\n");
          fflush(_coverage_fout);
          }
          tmp___31 = strlen((char const   *)cmd.prompt);
          {
          fprintf(_coverage_fout, "422\n");
          fflush(_coverage_fout);
          }
          __lengthofpromptagain___0 = tmp___31 + 10UL;
          {
          fprintf(_coverage_fout, "423\n");
          fflush(_coverage_fout);
          }
          tmp___32 = __builtin_alloca(sizeof(*promptagain___0) * __lengthofpromptagain___0);
          {
          fprintf(_coverage_fout, "424\n");
          fflush(_coverage_fout);
          }
          promptagain___0 = (char *)tmp___32;
          {
          fprintf(_coverage_fout, "425\n");
          fflush(_coverage_fout);
          }
          strcpy((char */* __restrict  */)promptagain___0,
                 (char const   */* __restrict  */)"Enter new key: ");
          {
          fprintf(_coverage_fout, "426\n");
          fflush(_coverage_fout);
          }
          strcat((char */* __restrict  */)promptagain___0,
                 (char const   */* __restrict  */)"(repeat) ");
          {
          fprintf(_coverage_fout, "427\n");
          fflush(_coverage_fout);
          }
          repeat___0 = readkey(promptagain___0, cmd.name);
          {
          fprintf(_coverage_fout, "428\n");
          fflush(_coverage_fout);
          }
          if ((unsigned long )repeat___0 == (unsigned long )((void *)0)) {
            {
            fprintf(_coverage_fout, "429\n");
            fflush(_coverage_fout);
            }
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"Sorry, keys did not match.\n");
            {
            fprintf(_coverage_fout, "430\n");
            fflush(_coverage_fout);
            }
            exit(7);
          } else {
            {
            fprintf(_coverage_fout, "431\n");
            fflush(_coverage_fout);
            }
            if (0) {
              {
              fprintf(_coverage_fout, "432\n");
              fflush(_coverage_fout);
              }
              __s1_len___2 = strlen((char const   *)repeat___0);
              {
              fprintf(_coverage_fout, "433\n");
              fflush(_coverage_fout);
              }
              __s2_len___2 = strlen((char const   *)cmd.keyword2);
              {
              fprintf(_coverage_fout, "434\n");
              fflush(_coverage_fout);
              }
              if (! ((unsigned long )((void const   *)(repeat___0 + 1)) - (unsigned long )((void const   *)repeat___0) == 1UL)) {
                {
                fprintf(_coverage_fout, "435\n");
                fflush(_coverage_fout);
                }
                goto _L___6;
              } else {
                {
                fprintf(_coverage_fout, "436\n");
                fflush(_coverage_fout);
                }
                if (__s1_len___2 >= 4UL) {
                  {
                  fprintf(_coverage_fout, "437\n");
                  fflush(_coverage_fout);
                  }
                  _L___6: 
                  if (! ((unsigned long )((void const   *)(cmd.keyword2 + 1)) - (unsigned long )((void const   *)cmd.keyword2) == 1UL)) {
                    {
                    fprintf(_coverage_fout, "438\n");
                    fflush(_coverage_fout);
                    }
                    tmp___42 = 1;
                  } else {
                    {
                    fprintf(_coverage_fout, "439\n");
                    fflush(_coverage_fout);
                    }
                    if (__s2_len___2 >= 4UL) {
                      {
                      fprintf(_coverage_fout, "440\n");
                      fflush(_coverage_fout);
                      }
                      tmp___42 = 1;
                    } else {
                      {
                      fprintf(_coverage_fout, "441\n");
                      fflush(_coverage_fout);
                      }
                      tmp___42 = 0;
                    }
                  }
                } else {
                  {
                  fprintf(_coverage_fout, "442\n");
                  fflush(_coverage_fout);
                  }
                  tmp___42 = 0;
                }
              }
              {
              fprintf(_coverage_fout, "443\n");
              fflush(_coverage_fout);
              }
              if (tmp___42) {
                {
                fprintf(_coverage_fout, "444\n");
                fflush(_coverage_fout);
                }
                tmp___38 = __builtin_strcmp((char const   *)repeat___0,
                                            (char const   *)cmd.keyword2);
              } else {
                {
                fprintf(_coverage_fout, "445\n");
                fflush(_coverage_fout);
                }
                tmp___41 = __builtin_strcmp((char const   *)repeat___0,
                                            (char const   *)cmd.keyword2);
                {
                fprintf(_coverage_fout, "446\n");
                fflush(_coverage_fout);
                }
                tmp___38 = tmp___41;
              }
            } else {
              {
              fprintf(_coverage_fout, "447\n");
              fflush(_coverage_fout);
              }
              tmp___41 = __builtin_strcmp((char const   *)repeat___0,
                                          (char const   *)cmd.keyword2);
              {
              fprintf(_coverage_fout, "448\n");
              fflush(_coverage_fout);
              }
              tmp___38 = tmp___41;
            }
            {
            fprintf(_coverage_fout, "449\n");
            fflush(_coverage_fout);
            }
            if (tmp___38 != 0) {
              {
              fprintf(_coverage_fout, "450\n");
              fflush(_coverage_fout);
              }
              fprintf((FILE */* __restrict  */)stderr,
                      (char const   */* __restrict  */)"Sorry, keys did not match.\n");
              {
              fprintf(_coverage_fout, "451\n");
              fflush(_coverage_fout);
              }
              exit(7);
            } else {
              {
              fprintf(_coverage_fout, "452\n");
              fflush(_coverage_fout);
              }

            }
          }
        } else {
          {
          fprintf(_coverage_fout, "453\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "454\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "455\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "456\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "457\n");
  fflush(_coverage_fout);
  }
  if (cmd.filter) {
    {
    fprintf(_coverage_fout, "458\n");
    fflush(_coverage_fout);
    }
    switch (cmd.mode) {
    {
    fprintf(_coverage_fout, "459\n");
    fflush(_coverage_fout);
    }
    default: 
    case 0: 
    res = ccencrypt_streams(stdin, stdout, cmd.keyword);
    {
    fprintf(_coverage_fout, "460\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "461\n");
    fflush(_coverage_fout);
    }
    case 3: 
    case 1: 
    res = ccdecrypt_streams(stdin, stdout, cmd.keyword);
    {
    fprintf(_coverage_fout, "462\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "463\n");
    fflush(_coverage_fout);
    }
    case 2: 
    res = cckeychange_streams(stdin, stdout, cmd.keyword, cmd.keyword2);
    {
    fprintf(_coverage_fout, "464\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "465\n");
    fflush(_coverage_fout);
    }
    case 4: 
    res = unixcrypt_streams(stdin, stdout, cmd.keyword);
    {
    fprintf(_coverage_fout, "466\n");
    fflush(_coverage_fout);
    }
    break;
    }
    {
    fprintf(_coverage_fout, "467\n");
    fflush(_coverage_fout);
    }
    if (res) {
      {
      fprintf(_coverage_fout, "468\n");
      fflush(_coverage_fout);
      }
      tmp___43 = ccrypt_error(res);
      {
      fprintf(_coverage_fout, "469\n");
      fflush(_coverage_fout);
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: %s\n", cmd.name, tmp___43);
      {
      fprintf(_coverage_fout, "470\n");
      fflush(_coverage_fout);
      }
      if (res < 0) {
        {
        fprintf(_coverage_fout, "471\n");
        fflush(_coverage_fout);
        }
        return (3);
      } else {
        {
        fprintf(_coverage_fout, "472\n");
        fflush(_coverage_fout);
        }
        if (res == 2) {
          {
          fprintf(_coverage_fout, "473\n");
          fflush(_coverage_fout);
          }
          return (4);
        } else {
          {
          fprintf(_coverage_fout, "474\n");
          fflush(_coverage_fout);
          }
          return (5);
        }
      }
    } else {
      {
      fprintf(_coverage_fout, "475\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "476\n");
    fflush(_coverage_fout);
    }
    fflush(stdout);
    {
    fprintf(_coverage_fout, "477\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "478\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "479\n");
  fflush(_coverage_fout);
  }
  if (cmd.mode != 3) {
    {
    fprintf(_coverage_fout, "480\n");
    fflush(_coverage_fout);
    }
    if (cmd.mode != 4) {
      {
      fprintf(_coverage_fout, "481\n");
      fflush(_coverage_fout);
      }
      signal(2, & sigint);
    } else {
      {
      fprintf(_coverage_fout, "482\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "483\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "484\n");
  fflush(_coverage_fout);
  }
  reset_inodes();
  {
  fprintf(_coverage_fout, "485\n");
  fflush(_coverage_fout);
  }
  traverse_files(cmd.infiles, cmd.count);
  {
  fprintf(_coverage_fout, "486\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file ,
                                                   int __oflag  , ...) ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf ) ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chmod)(char const   *__file ,
                                                                                  __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __xstat)(int __ver ,
                                                                                      char const   *__filename ,
                                                                                      struct stat *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __lxstat)(int __ver ,
                                                                                       char const   *__filename ,
                                                                                       struct stat *__stat_buf ) ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf ) ;
__inline static int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                              struct stat * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "487\n");
  fflush(_coverage_fout);
  }
  tmp = __xstat(1, (char const   *)__path, (struct stat *)__statbuf);
  {
  fprintf(_coverage_fout, "488\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf ) ;
__inline static int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                               struct stat * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "489\n");
  fflush(_coverage_fout);
  }
  tmp = __lxstat(1, (char const   *)__path, (struct stat *)__statbuf);
  {
  fprintf(_coverage_fout, "490\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
extern DIR *( __attribute__((__nonnull__(1))) opendir)(char const   *__name ) ;
extern int ( __attribute__((__nonnull__(1))) closedir)(DIR *__dirp ) ;
extern struct dirent *( __attribute__((__nonnull__(1))) readdir)(DIR *__dirp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) utime)(char const   *__file ,
                                                                                  struct utimbuf  const  *__file_times ) ;
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chown)(char const   *__file ,
                                                                                  __uid_t __owner ,
                                                                                  __gid_t __group ) ;
void *xalloc(size_t size , char *myname ) ;
void *xrealloc(void *p , size_t size , char *myname ) ;
void traverse_file(char *filename ) ;
int ccencrypt_file(int fd , char *filename , char *keyword ) ;
int ccdecrypt_file(int fd , char *filename , char *keyword ) ;
int cckeychange_file(int fd , char *filename , char *key_in , char *key_out ) ;
ino_t *inodes  =    (ino_t *)((void *)0);
dev_t *devs  =    (dev_t *)((void *)0);
int numinodes  =    0;
int sizeinodes  =    0;
void reset_inodes(void) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "491\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )inodes != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "492\n");
    fflush(_coverage_fout);
    }
    free((void *)inodes);
    {
    fprintf(_coverage_fout, "493\n");
    fflush(_coverage_fout);
    }
    free((void *)devs);
  } else {
    {
    fprintf(_coverage_fout, "494\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "495\n");
  fflush(_coverage_fout);
  }
  numinodes = 0;
  {
  fprintf(_coverage_fout, "496\n");
  fflush(_coverage_fout);
  }
  inodes = (ino_t *)((void *)0);
  {
  fprintf(_coverage_fout, "497\n");
  fflush(_coverage_fout);
  }
  devs = (dev_t *)((void *)0);
  {
  fprintf(_coverage_fout, "498\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int known_inode(ino_t ino , dev_t dev ) 
{ 
  int i ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "499\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "500\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "501\n");
    fflush(_coverage_fout);
    }
    if (i < numinodes) {
      {
      fprintf(_coverage_fout, "502\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "503\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "504\n");
    fflush(_coverage_fout);
    }
    if (*(inodes + i) == ino) {
      {
      fprintf(_coverage_fout, "505\n");
      fflush(_coverage_fout);
      }
      if (*(devs + i) == dev) {
        {
        fprintf(_coverage_fout, "506\n");
        fflush(_coverage_fout);
        }
        return (1);
      } else {
        {
        fprintf(_coverage_fout, "507\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "508\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "509\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "510\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )inodes == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "511\n");
    fflush(_coverage_fout);
    }
    sizeinodes = 100;
    {
    fprintf(_coverage_fout, "512\n");
    fflush(_coverage_fout);
    }
    tmp = xalloc((unsigned long )sizeinodes * sizeof(ino_t ), cmd.name);
    {
    fprintf(_coverage_fout, "513\n");
    fflush(_coverage_fout);
    }
    inodes = (ino_t *)tmp;
    {
    fprintf(_coverage_fout, "514\n");
    fflush(_coverage_fout);
    }
    tmp___0 = xalloc((unsigned long )sizeinodes * sizeof(dev_t ), cmd.name);
    {
    fprintf(_coverage_fout, "515\n");
    fflush(_coverage_fout);
    }
    devs = (dev_t *)tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "516\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "517\n");
  fflush(_coverage_fout);
  }
  if (numinodes >= sizeinodes) {
    {
    fprintf(_coverage_fout, "518\n");
    fflush(_coverage_fout);
    }
    sizeinodes += 100;
    {
    fprintf(_coverage_fout, "519\n");
    fflush(_coverage_fout);
    }
    tmp___1 = xrealloc((void *)inodes,
                       (unsigned long )sizeinodes * sizeof(ino_t ), cmd.name);
    {
    fprintf(_coverage_fout, "520\n");
    fflush(_coverage_fout);
    }
    inodes = (ino_t *)tmp___1;
    {
    fprintf(_coverage_fout, "521\n");
    fflush(_coverage_fout);
    }
    tmp___2 = xrealloc((void *)devs,
                       (unsigned long )sizeinodes * sizeof(dev_t ), cmd.name);
    {
    fprintf(_coverage_fout, "522\n");
    fflush(_coverage_fout);
    }
    devs = (dev_t *)tmp___2;
  } else {
    {
    fprintf(_coverage_fout, "523\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "524\n");
  fflush(_coverage_fout);
  }
  *(inodes + numinodes) = ino;
  {
  fprintf(_coverage_fout, "525\n");
  fflush(_coverage_fout);
  }
  *(devs + numinodes) = dev;
  {
  fprintf(_coverage_fout, "526\n");
  fflush(_coverage_fout);
  }
  numinodes ++;
  {
  fprintf(_coverage_fout, "527\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int has_suffix(char *filename , char *suffix ) 
{ 
  int flen ;
  size_t tmp ;
  int slen ;
  size_t tmp___0 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___6 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "528\n");
  fflush(_coverage_fout);
  }
  tmp = strlen((char const   *)filename);
  {
  fprintf(_coverage_fout, "529\n");
  fflush(_coverage_fout);
  }
  flen = (int )tmp;
  {
  fprintf(_coverage_fout, "530\n");
  fflush(_coverage_fout);
  }
  tmp___0 = strlen((char const   *)suffix);
  {
  fprintf(_coverage_fout, "531\n");
  fflush(_coverage_fout);
  }
  slen = (int )tmp___0;
  {
  fprintf(_coverage_fout, "532\n");
  fflush(_coverage_fout);
  }
  if (flen > slen) {
    {
    fprintf(_coverage_fout, "533\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "534\n");
      fflush(_coverage_fout);
      }
      __s1_len = strlen((char const   *)((filename + flen) - slen));
      {
      fprintf(_coverage_fout, "535\n");
      fflush(_coverage_fout);
      }
      __s2_len = strlen((char const   *)suffix);
      {
      fprintf(_coverage_fout, "536\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(((filename + flen) - slen) + 1)) - (unsigned long )((void const   *)((filename + flen) - slen)) == 1UL)) {
        {
        fprintf(_coverage_fout, "537\n");
        fflush(_coverage_fout);
        }
        goto _L___0;
      } else {
        {
        fprintf(_coverage_fout, "538\n");
        fflush(_coverage_fout);
        }
        if (__s1_len >= 4UL) {
          {
          fprintf(_coverage_fout, "539\n");
          fflush(_coverage_fout);
          }
          _L___0: 
          if (! ((unsigned long )((void const   *)(suffix + 1)) - (unsigned long )((void const   *)suffix) == 1UL)) {
            {
            fprintf(_coverage_fout, "540\n");
            fflush(_coverage_fout);
            }
            tmp___10 = 1;
          } else {
            {
            fprintf(_coverage_fout, "541\n");
            fflush(_coverage_fout);
            }
            if (__s2_len >= 4UL) {
              {
              fprintf(_coverage_fout, "542\n");
              fflush(_coverage_fout);
              }
              tmp___10 = 1;
            } else {
              {
              fprintf(_coverage_fout, "543\n");
              fflush(_coverage_fout);
              }
              tmp___10 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "544\n");
          fflush(_coverage_fout);
          }
          tmp___10 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "545\n");
      fflush(_coverage_fout);
      }
      if (tmp___10) {
        {
        fprintf(_coverage_fout, "546\n");
        fflush(_coverage_fout);
        }
        tmp___6 = __builtin_strcmp((char const   *)((filename + flen) - slen),
                                   (char const   *)suffix);
      } else {
        {
        fprintf(_coverage_fout, "547\n");
        fflush(_coverage_fout);
        }
        tmp___9 = __builtin_strcmp((char const   *)((filename + flen) - slen),
                                   (char const   *)suffix);
        {
        fprintf(_coverage_fout, "548\n");
        fflush(_coverage_fout);
        }
        tmp___6 = tmp___9;
      }
    } else {
      {
      fprintf(_coverage_fout, "549\n");
      fflush(_coverage_fout);
      }
      tmp___9 = __builtin_strcmp((char const   *)((filename + flen) - slen),
                                 (char const   *)suffix);
      {
      fprintf(_coverage_fout, "550\n");
      fflush(_coverage_fout);
      }
      tmp___6 = tmp___9;
    }
    {
    fprintf(_coverage_fout, "551\n");
    fflush(_coverage_fout);
    }
    if (tmp___6 == 0) {
      {
      fprintf(_coverage_fout, "552\n");
      fflush(_coverage_fout);
      }
      tmp___11 = 1;
    } else {
      {
      fprintf(_coverage_fout, "553\n");
      fflush(_coverage_fout);
      }
      tmp___11 = 0;
    }
  } else {
    {
    fprintf(_coverage_fout, "554\n");
    fflush(_coverage_fout);
    }
    tmp___11 = 0;
  }
  {
  fprintf(_coverage_fout, "555\n");
  fflush(_coverage_fout);
  }
  return (tmp___11);
}
}
char *add_suffix(char *filename , char *suffix ) ;
static char *outfile  =    (char *)((void *)0);
char *add_suffix(char *filename , char *suffix ) 
{ 
  int flen ;
  size_t tmp ;
  int slen ;
  size_t tmp___0 ;
  void *tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "556\n");
  fflush(_coverage_fout);
  }
  tmp = strlen((char const   *)filename);
  {
  fprintf(_coverage_fout, "557\n");
  fflush(_coverage_fout);
  }
  flen = (int )tmp;
  {
  fprintf(_coverage_fout, "558\n");
  fflush(_coverage_fout);
  }
  tmp___0 = strlen((char const   *)suffix);
  {
  fprintf(_coverage_fout, "559\n");
  fflush(_coverage_fout);
  }
  slen = (int )tmp___0;
  {
  fprintf(_coverage_fout, "560\n");
  fflush(_coverage_fout);
  }
  tmp___1 = xrealloc((void *)outfile, (unsigned long )((flen + slen) + 1),
                     cmd.name);
  {
  fprintf(_coverage_fout, "561\n");
  fflush(_coverage_fout);
  }
  outfile = (char *)tmp___1;
  {
  fprintf(_coverage_fout, "562\n");
  fflush(_coverage_fout);
  }
  __builtin_strncpy(outfile, (char const   *)filename, (unsigned long )flen);
  {
  fprintf(_coverage_fout, "563\n");
  fflush(_coverage_fout);
  }
  __builtin_strncpy(outfile + flen, (char const   *)suffix,
                    (unsigned long )(slen + 1));
  {
  fprintf(_coverage_fout, "564\n");
  fflush(_coverage_fout);
  }
  return (outfile);
}
}
char *remove_suffix(char *filename , char *suffix ) ;
static char *outfile___0  =    (char *)((void *)0);
char *remove_suffix(char *filename , char *suffix ) 
{ 
  int flen ;
  size_t tmp ;
  int slen ;
  size_t tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "565\n");
  fflush(_coverage_fout);
  }
  tmp = strlen((char const   *)filename);
  {
  fprintf(_coverage_fout, "566\n");
  fflush(_coverage_fout);
  }
  flen = (int )tmp;
  {
  fprintf(_coverage_fout, "567\n");
  fflush(_coverage_fout);
  }
  tmp___0 = strlen((char const   *)suffix);
  {
  fprintf(_coverage_fout, "568\n");
  fflush(_coverage_fout);
  }
  slen = (int )tmp___0;
  {
  fprintf(_coverage_fout, "569\n");
  fflush(_coverage_fout);
  }
  if ((int )*(suffix + 0) == 0) {
    {
    fprintf(_coverage_fout, "570\n");
    fflush(_coverage_fout);
    }
    return (filename);
  } else {
    {
    fprintf(_coverage_fout, "571\n");
    fflush(_coverage_fout);
    }
    tmp___1 = has_suffix(filename, suffix);
    {
    fprintf(_coverage_fout, "572\n");
    fflush(_coverage_fout);
    }
    if (! tmp___1) {
      {
      fprintf(_coverage_fout, "573\n");
      fflush(_coverage_fout);
      }
      return (filename);
    } else {
      {
      fprintf(_coverage_fout, "574\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "575\n");
  fflush(_coverage_fout);
  }
  tmp___2 = xrealloc((void *)outfile___0, (unsigned long )((flen - slen) + 1),
                     cmd.name);
  {
  fprintf(_coverage_fout, "576\n");
  fflush(_coverage_fout);
  }
  outfile___0 = (char *)tmp___2;
  {
  fprintf(_coverage_fout, "577\n");
  fflush(_coverage_fout);
  }
  __builtin_strncpy(outfile___0, (char const   *)filename,
                    (unsigned long )(flen - slen));
  {
  fprintf(_coverage_fout, "578\n");
  fflush(_coverage_fout);
  }
  *(outfile___0 + (flen - slen)) = (char)0;
  {
  fprintf(_coverage_fout, "579\n");
  fflush(_coverage_fout);
  }
  return (outfile___0);
}
}
int prompt(void) 
{ 
  char *line ;
  FILE *fin ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___14 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "580\n");
  fflush(_coverage_fout);
  }
  fin = stdin;
  {
  fprintf(_coverage_fout, "581\n");
  fflush(_coverage_fout);
  }
  line = xreadline(fin, cmd.name);
  {
  fprintf(_coverage_fout, "582\n");
  fflush(_coverage_fout);
  }
  if (0) {
    {
    fprintf(_coverage_fout, "583\n");
    fflush(_coverage_fout);
    }
    __s1_len = strlen((char const   *)line);
    {
    fprintf(_coverage_fout, "584\n");
    fflush(_coverage_fout);
    }
    __s2_len = strlen("y");
    {
    fprintf(_coverage_fout, "585\n");
    fflush(_coverage_fout);
    }
    if (! ((unsigned long )((void const   *)(line + 1)) - (unsigned long )((void const   *)line) == 1UL)) {
      {
      fprintf(_coverage_fout, "586\n");
      fflush(_coverage_fout);
      }
      goto _L___0;
    } else {
      {
      fprintf(_coverage_fout, "587\n");
      fflush(_coverage_fout);
      }
      if (__s1_len >= 4UL) {
        {
        fprintf(_coverage_fout, "588\n");
        fflush(_coverage_fout);
        }
        _L___0: 
        if (! ((unsigned long )((void const   *)("y" + 1)) - (unsigned long )((void const   *)"y") == 1UL)) {
          {
          fprintf(_coverage_fout, "589\n");
          fflush(_coverage_fout);
          }
          tmp___8 = 1;
        } else {
          {
          fprintf(_coverage_fout, "590\n");
          fflush(_coverage_fout);
          }
          if (__s2_len >= 4UL) {
            {
            fprintf(_coverage_fout, "591\n");
            fflush(_coverage_fout);
            }
            tmp___8 = 1;
          } else {
            {
            fprintf(_coverage_fout, "592\n");
            fflush(_coverage_fout);
            }
            tmp___8 = 0;
          }
        }
      } else {
        {
        fprintf(_coverage_fout, "593\n");
        fflush(_coverage_fout);
        }
        tmp___8 = 0;
      }
    }
    {
    fprintf(_coverage_fout, "594\n");
    fflush(_coverage_fout);
    }
    if (tmp___8) {
      {
      fprintf(_coverage_fout, "595\n");
      fflush(_coverage_fout);
      }
      tmp___4 = __builtin_strcmp((char const   *)line, "y");
    } else {
      {
      fprintf(_coverage_fout, "596\n");
      fflush(_coverage_fout);
      }
      tmp___7 = __builtin_strcmp((char const   *)line, "y");
      {
      fprintf(_coverage_fout, "597\n");
      fflush(_coverage_fout);
      }
      tmp___4 = tmp___7;
    }
  } else {
    {
    fprintf(_coverage_fout, "598\n");
    fflush(_coverage_fout);
    }
    tmp___7 = __builtin_strcmp((char const   *)line, "y");
    {
    fprintf(_coverage_fout, "599\n");
    fflush(_coverage_fout);
    }
    tmp___4 = tmp___7;
  }
  {
  fprintf(_coverage_fout, "600\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "601\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "602\n");
      fflush(_coverage_fout);
      }
      __s1_len___0 = strlen((char const   *)line);
      {
      fprintf(_coverage_fout, "603\n");
      fflush(_coverage_fout);
      }
      __s2_len___0 = strlen("yes");
      {
      fprintf(_coverage_fout, "604\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(line + 1)) - (unsigned long )((void const   *)line) == 1UL)) {
        {
        fprintf(_coverage_fout, "605\n");
        fflush(_coverage_fout);
        }
        goto _L___2;
      } else {
        {
        fprintf(_coverage_fout, "606\n");
        fflush(_coverage_fout);
        }
        if (__s1_len___0 >= 4UL) {
          {
          fprintf(_coverage_fout, "607\n");
          fflush(_coverage_fout);
          }
          _L___2: 
          if (! ((unsigned long )((void const   *)("yes" + 1)) - (unsigned long )((void const   *)"yes") == 1UL)) {
            {
            fprintf(_coverage_fout, "608\n");
            fflush(_coverage_fout);
            }
            tmp___18 = 1;
          } else {
            {
            fprintf(_coverage_fout, "609\n");
            fflush(_coverage_fout);
            }
            if (__s2_len___0 >= 4UL) {
              {
              fprintf(_coverage_fout, "610\n");
              fflush(_coverage_fout);
              }
              tmp___18 = 1;
            } else {
              {
              fprintf(_coverage_fout, "611\n");
              fflush(_coverage_fout);
              }
              tmp___18 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "612\n");
          fflush(_coverage_fout);
          }
          tmp___18 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "613\n");
      fflush(_coverage_fout);
      }
      if (tmp___18) {
        {
        fprintf(_coverage_fout, "614\n");
        fflush(_coverage_fout);
        }
        tmp___14 = __builtin_strcmp((char const   *)line, "yes");
      } else {
        {
        fprintf(_coverage_fout, "615\n");
        fflush(_coverage_fout);
        }
        tmp___17 = __builtin_strcmp((char const   *)line, "yes");
        {
        fprintf(_coverage_fout, "616\n");
        fflush(_coverage_fout);
        }
        tmp___14 = tmp___17;
      }
    } else {
      {
      fprintf(_coverage_fout, "617\n");
      fflush(_coverage_fout);
      }
      tmp___17 = __builtin_strcmp((char const   *)line, "yes");
      {
      fprintf(_coverage_fout, "618\n");
      fflush(_coverage_fout);
      }
      tmp___14 = tmp___17;
    }
    {
    fprintf(_coverage_fout, "619\n");
    fflush(_coverage_fout);
    }
    if (tmp___14) {
      {
      fprintf(_coverage_fout, "620\n");
      fflush(_coverage_fout);
      }
      tmp___19 = 0;
    } else {
      {
      fprintf(_coverage_fout, "621\n");
      fflush(_coverage_fout);
      }
      tmp___19 = 1;
    }
  } else {
    {
    fprintf(_coverage_fout, "622\n");
    fflush(_coverage_fout);
    }
    tmp___19 = 1;
  }
  {
  fprintf(_coverage_fout, "623\n");
  fflush(_coverage_fout);
  }
  return (tmp___19);
}
}
int file_exists(char *filename ) 
{ 
  struct stat buf ;
  int st ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "624\n");
  fflush(_coverage_fout);
  }
  st = lstat((char const   */* __restrict  */)filename,
             (struct stat */* __restrict  */)(& buf));
  {
  fprintf(_coverage_fout, "625\n");
  fflush(_coverage_fout);
  }
  if (st) {
    {
    fprintf(_coverage_fout, "626\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "627\n");
    fflush(_coverage_fout);
    }
    return (1);
  }
}
}
void set_attributes(char *filename , struct stat *bufp ) 
{ 
  struct utimbuf ut ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "628\n");
  fflush(_coverage_fout);
  }
  ut.actime = bufp->st_atim.tv_sec;
  {
  fprintf(_coverage_fout, "629\n");
  fflush(_coverage_fout);
  }
  ut.modtime = bufp->st_mtim.tv_sec;
  {
  fprintf(_coverage_fout, "630\n");
  fflush(_coverage_fout);
  }
  utime((char const   *)filename, (struct utimbuf  const  *)(& ut));
  {
  fprintf(_coverage_fout, "631\n");
  fflush(_coverage_fout);
  }
  chown((char const   *)filename, bufp->st_uid, bufp->st_gid);
  {
  fprintf(_coverage_fout, "632\n");
  fflush(_coverage_fout);
  }
  chmod((char const   *)filename, bufp->st_mode);
  {
  fprintf(_coverage_fout, "633\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int crypt_filename(char *filename ) 
{ 
  int fd ;
  int res ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "634\n");
  fflush(_coverage_fout);
  }
  fd = open((char const   *)filename, 2);
  {
  fprintf(_coverage_fout, "635\n");
  fflush(_coverage_fout);
  }
  if (fd == -1) {
    {
    fprintf(_coverage_fout, "636\n");
    fflush(_coverage_fout);
    }
    perror((char const   *)filename);
    {
    fprintf(_coverage_fout, "637\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "638\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "639\n");
  fflush(_coverage_fout);
  }
  switch (cmd.mode) {
  {
  fprintf(_coverage_fout, "640\n");
  fflush(_coverage_fout);
  }
  default: 
  case 0: ;
  {
  fprintf(_coverage_fout, "641\n");
  fflush(_coverage_fout);
  }
  if (cmd.verbose > 0) {
    {
    fprintf(_coverage_fout, "642\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Encrypting %s\n", filename);
  } else {
    {
    fprintf(_coverage_fout, "643\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "644\n");
  fflush(_coverage_fout);
  }
  res = ccencrypt_file(fd, filename, cmd.keyword);
  {
  fprintf(_coverage_fout, "645\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "646\n");
  fflush(_coverage_fout);
  }
  case 1: 
  if (cmd.verbose > 0) {
    {
    fprintf(_coverage_fout, "647\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Decrypting %s\n", filename);
  } else {
    {
    fprintf(_coverage_fout, "648\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "649\n");
  fflush(_coverage_fout);
  }
  res = ccdecrypt_file(fd, filename, cmd.keyword);
  {
  fprintf(_coverage_fout, "650\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "651\n");
  fflush(_coverage_fout);
  }
  case 2: 
  if (cmd.verbose > 0) {
    {
    fprintf(_coverage_fout, "652\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Changing key for %s\n", filename);
  } else {
    {
    fprintf(_coverage_fout, "653\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "654\n");
  fflush(_coverage_fout);
  }
  res = cckeychange_file(fd, filename, cmd.keyword, cmd.keyword2);
  {
  fprintf(_coverage_fout, "655\n");
  fflush(_coverage_fout);
  }
  break;
  }
  {
  fprintf(_coverage_fout, "656\n");
  fflush(_coverage_fout);
  }
  close(fd);
  {
  fprintf(_coverage_fout, "657\n");
  fflush(_coverage_fout);
  }
  return (res);
}
}
int crypt_cat(char *infile ) 
{ 
  FILE *fin ;
  int res ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "658\n");
  fflush(_coverage_fout);
  }
  fin = fopen((char const   */* __restrict  */)infile,
              (char const   */* __restrict  */)"rb");
  {
  fprintf(_coverage_fout, "659\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )fin == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "660\n");
    fflush(_coverage_fout);
    }
    perror((char const   *)infile);
    {
    fprintf(_coverage_fout, "661\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "662\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "663\n");
  fflush(_coverage_fout);
  }
  switch (cmd.mode) {
  {
  fprintf(_coverage_fout, "664\n");
  fflush(_coverage_fout);
  }
  default: 
  case 3: ;
  {
  fprintf(_coverage_fout, "665\n");
  fflush(_coverage_fout);
  }
  if (cmd.verbose > 0) {
    {
    fprintf(_coverage_fout, "666\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Decrypting %s\n", infile);
    {
    fprintf(_coverage_fout, "667\n");
    fflush(_coverage_fout);
    }
    fflush(stderr);
  } else {
    {
    fprintf(_coverage_fout, "668\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "669\n");
  fflush(_coverage_fout);
  }
  res = ccdecrypt_streams(fin, stdout, cmd.keyword);
  {
  fprintf(_coverage_fout, "670\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "671\n");
  fflush(_coverage_fout);
  }
  case 4: 
  if (cmd.verbose > 0) {
    {
    fprintf(_coverage_fout, "672\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Decrypting %s\n", infile);
    {
    fprintf(_coverage_fout, "673\n");
    fflush(_coverage_fout);
    }
    fflush(stderr);
  } else {
    {
    fprintf(_coverage_fout, "674\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "675\n");
  fflush(_coverage_fout);
  }
  res = unixcrypt_streams(fin, stdout, cmd.keyword);
  {
  fprintf(_coverage_fout, "676\n");
  fflush(_coverage_fout);
  }
  break;
  }
  {
  fprintf(_coverage_fout, "677\n");
  fflush(_coverage_fout);
  }
  fflush(stdout);
  {
  fprintf(_coverage_fout, "678\n");
  fflush(_coverage_fout);
  }
  fclose(fin);
  {
  fprintf(_coverage_fout, "679\n");
  fflush(_coverage_fout);
  }
  return (res);
}
}
void file_action(char *filename ) 
{ 
  struct stat buf ;
  int st ;
  int link___0 ;
  size_t tmp ;
  size_t tmp___0 ;
  char *buffer ;
  unsigned long __lengthofbuffer ;
  void *tmp___1 ;
  char *outfile___1 ;
  int orig_errno ;
  int *tmp___2 ;
  char *orig_filename ;
  int *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___11 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  char const   *tmp___17 ;
  char const   *tmp___18 ;
  int tmp___19 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___25 ;
  int tmp___28 ;
  int tmp___29 ;
  char const   *tmp___30 ;
  char const   *tmp___31 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "680\n");
  fflush(_coverage_fout);
  }
  link___0 = 0;
  {
  fprintf(_coverage_fout, "681\n");
  fflush(_coverage_fout);
  }
  tmp = strlen((char const   *)filename);
  {
  fprintf(_coverage_fout, "682\n");
  fflush(_coverage_fout);
  }
  tmp___0 = strlen((char const   *)cmd.suffix);
  {
  fprintf(_coverage_fout, "683\n");
  fflush(_coverage_fout);
  }
  __lengthofbuffer = (tmp + tmp___0) + 1UL;
  {
  fprintf(_coverage_fout, "684\n");
  fflush(_coverage_fout);
  }
  tmp___1 = __builtin_alloca(sizeof(*buffer) * __lengthofbuffer);
  {
  fprintf(_coverage_fout, "685\n");
  fflush(_coverage_fout);
  }
  buffer = (char *)tmp___1;
  {
  fprintf(_coverage_fout, "686\n");
  fflush(_coverage_fout);
  }
  st = lstat((char const   */* __restrict  */)filename,
             (struct stat */* __restrict  */)(& buf));
  {
  fprintf(_coverage_fout, "687\n");
  fflush(_coverage_fout);
  }
  if (st) {
    {
    fprintf(_coverage_fout, "688\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __errno_location();
    {
    fprintf(_coverage_fout, "689\n");
    fflush(_coverage_fout);
    }
    orig_errno = *tmp___2;
    {
    fprintf(_coverage_fout, "690\n");
    fflush(_coverage_fout);
    }
    orig_filename = filename;
    {
    fprintf(_coverage_fout, "691\n");
    fflush(_coverage_fout);
    }
    tmp___3 = __errno_location();
    {
    fprintf(_coverage_fout, "692\n");
    fflush(_coverage_fout);
    }
    if (*tmp___3 == 2) {
      {
      fprintf(_coverage_fout, "693\n");
      fflush(_coverage_fout);
      }
      if (cmd.mode == 1) {
        {
        fprintf(_coverage_fout, "694\n");
        fflush(_coverage_fout);
        }
        goto _L;
      } else {
        {
        fprintf(_coverage_fout, "695\n");
        fflush(_coverage_fout);
        }
        if (cmd.mode == 3) {
          {
          fprintf(_coverage_fout, "696\n");
          fflush(_coverage_fout);
          }
          goto _L;
        } else {
          {
          fprintf(_coverage_fout, "697\n");
          fflush(_coverage_fout);
          }
          if (cmd.mode == 2) {
            {
            fprintf(_coverage_fout, "698\n");
            fflush(_coverage_fout);
            }
            goto _L;
          } else {
            {
            fprintf(_coverage_fout, "699\n");
            fflush(_coverage_fout);
            }
            if (cmd.mode == 4) {
              {
              fprintf(_coverage_fout, "700\n");
              fflush(_coverage_fout);
              }
              _L: 
              if ((int )*(cmd.suffix + 0) != 0) {
                {
                fprintf(_coverage_fout, "701\n");
                fflush(_coverage_fout);
                }
                strcpy((char */* __restrict  */)buffer,
                       (char const   */* __restrict  */)filename);
                {
                fprintf(_coverage_fout, "702\n");
                fflush(_coverage_fout);
                }
                strcat((char */* __restrict  */)buffer,
                       (char const   */* __restrict  */)cmd.suffix);
                {
                fprintf(_coverage_fout, "703\n");
                fflush(_coverage_fout);
                }
                filename = buffer;
                {
                fprintf(_coverage_fout, "704\n");
                fflush(_coverage_fout);
                }
                st = lstat((char const   */* __restrict  */)buffer,
                           (struct stat */* __restrict  */)(& buf));
              } else {
                {
                fprintf(_coverage_fout, "705\n");
                fflush(_coverage_fout);
                }

              }
            } else {
              {
              fprintf(_coverage_fout, "706\n");
              fflush(_coverage_fout);
              }

            }
          }
        }
      }
    } else {
      {
      fprintf(_coverage_fout, "707\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "708\n");
    fflush(_coverage_fout);
    }
    if (st) {
      {
      fprintf(_coverage_fout, "709\n");
      fflush(_coverage_fout);
      }
      tmp___4 = __errno_location();
      {
      fprintf(_coverage_fout, "710\n");
      fflush(_coverage_fout);
      }
      *tmp___4 = orig_errno;
      {
      fprintf(_coverage_fout, "711\n");
      fflush(_coverage_fout);
      }
      perror((char const   *)orig_filename);
      {
      fprintf(_coverage_fout, "712\n");
      fflush(_coverage_fout);
      }
      return;
    } else {
      {
      fprintf(_coverage_fout, "713\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "714\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "715\n");
  fflush(_coverage_fout);
  }
  if (cmd.symlinks) {
    {
    fprintf(_coverage_fout, "716\n");
    fflush(_coverage_fout);
    }
    if ((buf.st_mode & 61440U) == 40960U) {
      {
      fprintf(_coverage_fout, "717\n");
      fflush(_coverage_fout);
      }
      link___0 = 1;
      {
      fprintf(_coverage_fout, "718\n");
      fflush(_coverage_fout);
      }
      st = stat((char const   */* __restrict  */)filename,
                (struct stat */* __restrict  */)(& buf));
      {
      fprintf(_coverage_fout, "719\n");
      fflush(_coverage_fout);
      }
      if (st) {
        {
        fprintf(_coverage_fout, "720\n");
        fflush(_coverage_fout);
        }
        perror((char const   *)filename);
      } else {
        {
        fprintf(_coverage_fout, "721\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "722\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "723\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "724\n");
  fflush(_coverage_fout);
  }
  if (! st) {
    {
    fprintf(_coverage_fout, "725\n");
    fflush(_coverage_fout);
    }
    if ((buf.st_mode & 61440U) == 40960U) {
      {
      fprintf(_coverage_fout, "726\n");
      fflush(_coverage_fout);
      }
      if (cmd.verbose >= 0) {
        {
        fprintf(_coverage_fout, "727\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s: is a symbolic link -- ignored\n",
                cmd.name, filename);
      } else {
        {
        fprintf(_coverage_fout, "728\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "729\n");
      fflush(_coverage_fout);
      }
      return;
    } else {
      {
      fprintf(_coverage_fout, "730\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "731\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "732\n");
  fflush(_coverage_fout);
  }
  if (! st) {
    {
    fprintf(_coverage_fout, "733\n");
    fflush(_coverage_fout);
    }
    if (! ((buf.st_mode & 61440U) == 32768U)) {
      {
      fprintf(_coverage_fout, "734\n");
      fflush(_coverage_fout);
      }
      if (cmd.verbose >= 0) {
        {
        fprintf(_coverage_fout, "735\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s: is not a regular file -- ignored\n",
                cmd.name, filename);
      } else {
        {
        fprintf(_coverage_fout, "736\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "737\n");
      fflush(_coverage_fout);
      }
      return;
    } else {
      {
      fprintf(_coverage_fout, "738\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "739\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "740\n");
  fflush(_coverage_fout);
  }
  switch (cmd.mode) {
  {
  fprintf(_coverage_fout, "741\n");
  fflush(_coverage_fout);
  }
  case 2: 
  case 1: 
  case 0: 
  switch (cmd.mode) {
  {
  fprintf(_coverage_fout, "742\n");
  fflush(_coverage_fout);
  }
  default: 
  case 0: 
  outfile___1 = add_suffix(filename, cmd.suffix);
  {
  fprintf(_coverage_fout, "743\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "744\n");
  fflush(_coverage_fout);
  }
  case 1: 
  outfile___1 = remove_suffix(filename, cmd.suffix);
  {
  fprintf(_coverage_fout, "745\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "746\n");
  fflush(_coverage_fout);
  }
  case 2: 
  outfile___1 = filename;
  {
  fprintf(_coverage_fout, "747\n");
  fflush(_coverage_fout);
  }
  break;
  }
  {
  fprintf(_coverage_fout, "748\n");
  fflush(_coverage_fout);
  }
  if (! cmd.force) {
    {
    fprintf(_coverage_fout, "749\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "750\n");
      fflush(_coverage_fout);
      }
      __s1_len = strlen((char const   *)filename);
      {
      fprintf(_coverage_fout, "751\n");
      fflush(_coverage_fout);
      }
      __s2_len = strlen((char const   *)outfile___1);
      {
      fprintf(_coverage_fout, "752\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(filename + 1)) - (unsigned long )((void const   *)filename) == 1UL)) {
        {
        fprintf(_coverage_fout, "753\n");
        fflush(_coverage_fout);
        }
        goto _L___1;
      } else {
        {
        fprintf(_coverage_fout, "754\n");
        fflush(_coverage_fout);
        }
        if (__s1_len >= 4UL) {
          {
          fprintf(_coverage_fout, "755\n");
          fflush(_coverage_fout);
          }
          _L___1: 
          if (! ((unsigned long )((void const   *)(outfile___1 + 1)) - (unsigned long )((void const   *)outfile___1) == 1UL)) {
            {
            fprintf(_coverage_fout, "756\n");
            fflush(_coverage_fout);
            }
            tmp___15 = 1;
          } else {
            {
            fprintf(_coverage_fout, "757\n");
            fflush(_coverage_fout);
            }
            if (__s2_len >= 4UL) {
              {
              fprintf(_coverage_fout, "758\n");
              fflush(_coverage_fout);
              }
              tmp___15 = 1;
            } else {
              {
              fprintf(_coverage_fout, "759\n");
              fflush(_coverage_fout);
              }
              tmp___15 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "760\n");
          fflush(_coverage_fout);
          }
          tmp___15 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "761\n");
      fflush(_coverage_fout);
      }
      if (tmp___15) {
        {
        fprintf(_coverage_fout, "762\n");
        fflush(_coverage_fout);
        }
        tmp___11 = __builtin_strcmp((char const   *)filename,
                                    (char const   *)outfile___1);
      } else {
        {
        fprintf(_coverage_fout, "763\n");
        fflush(_coverage_fout);
        }
        tmp___14 = __builtin_strcmp((char const   *)filename,
                                    (char const   *)outfile___1);
        {
        fprintf(_coverage_fout, "764\n");
        fflush(_coverage_fout);
        }
        tmp___11 = tmp___14;
      }
    } else {
      {
      fprintf(_coverage_fout, "765\n");
      fflush(_coverage_fout);
      }
      tmp___14 = __builtin_strcmp((char const   *)filename,
                                  (char const   *)outfile___1);
      {
      fprintf(_coverage_fout, "766\n");
      fflush(_coverage_fout);
      }
      tmp___11 = tmp___14;
    }
    {
    fprintf(_coverage_fout, "767\n");
    fflush(_coverage_fout);
    }
    if (tmp___11) {
      {
      fprintf(_coverage_fout, "768\n");
      fflush(_coverage_fout);
      }
      tmp___16 = file_exists(outfile___1);
      {
      fprintf(_coverage_fout, "769\n");
      fflush(_coverage_fout);
      }
      if (tmp___16) {
        {
        fprintf(_coverage_fout, "770\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s already exists; overwrite (y or n)? ",
                cmd.name, outfile___1);
        {
        fprintf(_coverage_fout, "771\n");
        fflush(_coverage_fout);
        }
        fflush(stderr);
        {
        fprintf(_coverage_fout, "772\n");
        fflush(_coverage_fout);
        }
        tmp___5 = prompt();
        {
        fprintf(_coverage_fout, "773\n");
        fflush(_coverage_fout);
        }
        if (tmp___5 == 0) {
          {
          fprintf(_coverage_fout, "774\n");
          fflush(_coverage_fout);
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"Not overwritten.\n");
          {
          fprintf(_coverage_fout, "775\n");
          fflush(_coverage_fout);
          }
          return;
        } else {
          {
          fprintf(_coverage_fout, "776\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "777\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "778\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "779\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "780\n");
  fflush(_coverage_fout);
  }
  if (! st) {
    {
    fprintf(_coverage_fout, "781\n");
    fflush(_coverage_fout);
    }
    tmp___19 = known_inode(buf.st_ino, buf.st_dev);
    {
    fprintf(_coverage_fout, "782\n");
    fflush(_coverage_fout);
    }
    if (tmp___19) {
      {
      fprintf(_coverage_fout, "783\n");
      fflush(_coverage_fout);
      }
      if (cmd.verbose > 0) {
        {
        fprintf(_coverage_fout, "784\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"Already visited inode %s.\n",
                filename);
      } else {
        {
        fprintf(_coverage_fout, "785\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "786\n");
      fflush(_coverage_fout);
      }
      if (buf.st_nlink > 1UL) {
        {
        fprintf(_coverage_fout, "787\n");
        fflush(_coverage_fout);
        }
        if (cmd.verbose >= 0) {
          {
          fprintf(_coverage_fout, "788\n");
          fflush(_coverage_fout);
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: warning: %s has %d links\n",
                  cmd.name, filename, buf.st_nlink);
        } else {
          {
          fprintf(_coverage_fout, "789\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "790\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "791\n");
      fflush(_coverage_fout);
      }
      st = crypt_filename(filename);
      {
      fprintf(_coverage_fout, "792\n");
      fflush(_coverage_fout);
      }
      set_attributes(filename, & buf);
      {
      fprintf(_coverage_fout, "793\n");
      fflush(_coverage_fout);
      }
      if (st > 0) {
        {
        fprintf(_coverage_fout, "794\n");
        fflush(_coverage_fout);
        }
        tmp___17 = ccrypt_error(st);
        {
        fprintf(_coverage_fout, "795\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s: %s -- unchanged\n",
                cmd.name, filename, tmp___17);
        {
        fprintf(_coverage_fout, "796\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "797\n");
        fflush(_coverage_fout);
        }
        if (st < 0) {
          {
          fprintf(_coverage_fout, "798\n");
          fflush(_coverage_fout);
          }
          tmp___18 = ccrypt_error(st);
          {
          fprintf(_coverage_fout, "799\n");
          fflush(_coverage_fout);
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s: %s: %s\n", cmd.name,
                  filename, tmp___18);
          {
          fprintf(_coverage_fout, "800\n");
          fflush(_coverage_fout);
          }
          exit(3);
        } else {
          {
          fprintf(_coverage_fout, "801\n");
          fflush(_coverage_fout);
          }

        }
      }
    }
  } else {
    {
    fprintf(_coverage_fout, "802\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "803\n");
  fflush(_coverage_fout);
  }
  if (0) {
    {
    fprintf(_coverage_fout, "804\n");
    fflush(_coverage_fout);
    }
    __s1_len___0 = strlen((char const   *)filename);
    {
    fprintf(_coverage_fout, "805\n");
    fflush(_coverage_fout);
    }
    __s2_len___0 = strlen((char const   *)outfile___1);
    {
    fprintf(_coverage_fout, "806\n");
    fflush(_coverage_fout);
    }
    if (! ((unsigned long )((void const   *)(filename + 1)) - (unsigned long )((void const   *)filename) == 1UL)) {
      {
      fprintf(_coverage_fout, "807\n");
      fflush(_coverage_fout);
      }
      goto _L___3;
    } else {
      {
      fprintf(_coverage_fout, "808\n");
      fflush(_coverage_fout);
      }
      if (__s1_len___0 >= 4UL) {
        {
        fprintf(_coverage_fout, "809\n");
        fflush(_coverage_fout);
        }
        _L___3: 
        if (! ((unsigned long )((void const   *)(outfile___1 + 1)) - (unsigned long )((void const   *)outfile___1) == 1UL)) {
          {
          fprintf(_coverage_fout, "810\n");
          fflush(_coverage_fout);
          }
          tmp___29 = 1;
        } else {
          {
          fprintf(_coverage_fout, "811\n");
          fflush(_coverage_fout);
          }
          if (__s2_len___0 >= 4UL) {
            {
            fprintf(_coverage_fout, "812\n");
            fflush(_coverage_fout);
            }
            tmp___29 = 1;
          } else {
            {
            fprintf(_coverage_fout, "813\n");
            fflush(_coverage_fout);
            }
            tmp___29 = 0;
          }
        }
      } else {
        {
        fprintf(_coverage_fout, "814\n");
        fflush(_coverage_fout);
        }
        tmp___29 = 0;
      }
    }
    {
    fprintf(_coverage_fout, "815\n");
    fflush(_coverage_fout);
    }
    if (tmp___29) {
      {
      fprintf(_coverage_fout, "816\n");
      fflush(_coverage_fout);
      }
      tmp___25 = __builtin_strcmp((char const   *)filename,
                                  (char const   *)outfile___1);
    } else {
      {
      fprintf(_coverage_fout, "817\n");
      fflush(_coverage_fout);
      }
      tmp___28 = __builtin_strcmp((char const   *)filename,
                                  (char const   *)outfile___1);
      {
      fprintf(_coverage_fout, "818\n");
      fflush(_coverage_fout);
      }
      tmp___25 = tmp___28;
    }
  } else {
    {
    fprintf(_coverage_fout, "819\n");
    fflush(_coverage_fout);
    }
    tmp___28 = __builtin_strcmp((char const   *)filename,
                                (char const   *)outfile___1);
    {
    fprintf(_coverage_fout, "820\n");
    fflush(_coverage_fout);
    }
    tmp___25 = tmp___28;
  }
  {
  fprintf(_coverage_fout, "821\n");
  fflush(_coverage_fout);
  }
  if (tmp___25) {
    {
    fprintf(_coverage_fout, "822\n");
    fflush(_coverage_fout);
    }
    st = rename((char const   *)filename, (char const   *)outfile___1);
    {
    fprintf(_coverage_fout, "823\n");
    fflush(_coverage_fout);
    }
    if (st) {
      {
      fprintf(_coverage_fout, "824\n");
      fflush(_coverage_fout);
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: could not rename %s as %s: ",
              cmd.name, filename, outfile___1);
      {
      fprintf(_coverage_fout, "825\n");
      fflush(_coverage_fout);
      }
      perror("");
    } else {
      {
      fprintf(_coverage_fout, "826\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "827\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "828\n");
  fflush(_coverage_fout);
  }
  if (sigint_flag) {
    {
    fprintf(_coverage_fout, "829\n");
    fflush(_coverage_fout);
    }
    exit(6);
  } else {
    {
    fprintf(_coverage_fout, "830\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "831\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "832\n");
  fflush(_coverage_fout);
  }
  default: 
  case 4: 
  case 3: ;
  {
  fprintf(_coverage_fout, "833\n");
  fflush(_coverage_fout);
  }
  if (! st) {
    {
    fprintf(_coverage_fout, "834\n");
    fflush(_coverage_fout);
    }
    st = crypt_cat(filename);
    {
    fprintf(_coverage_fout, "835\n");
    fflush(_coverage_fout);
    }
    if (st > 0) {
      {
      fprintf(_coverage_fout, "836\n");
      fflush(_coverage_fout);
      }
      tmp___30 = ccrypt_error(st);
      {
      fprintf(_coverage_fout, "837\n");
      fflush(_coverage_fout);
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: %s: %s -- ignored\n",
              cmd.name, filename, tmp___30);
    } else {
      {
      fprintf(_coverage_fout, "838\n");
      fflush(_coverage_fout);
      }
      if (st < 0) {
        {
        fprintf(_coverage_fout, "839\n");
        fflush(_coverage_fout);
        }
        tmp___31 = ccrypt_error(st);
        {
        fprintf(_coverage_fout, "840\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s: %s\n", cmd.name,
                filename, tmp___31);
        {
        fprintf(_coverage_fout, "841\n");
        fflush(_coverage_fout);
        }
        exit(3);
      } else {
        {
        fprintf(_coverage_fout, "842\n");
        fflush(_coverage_fout);
        }

      }
    }
  } else {
    {
    fprintf(_coverage_fout, "843\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "844\n");
  fflush(_coverage_fout);
  }
  break;
  }
  {
  fprintf(_coverage_fout, "845\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int get_filelist(char *dirname , char ***filelistp , int *countp ) 
{ 
  DIR *dir ;
  struct dirent *dirent ;
  char **filelist ;
  int count___0 ;
  char *strbuf ;
  size_t tmp ;
  size_t tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___8 ;
  int tmp___11 ;
  int tmp___12 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___18 ;
  int tmp___21 ;
  int tmp___22 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "846\n");
  fflush(_coverage_fout);
  }
  filelist = (char **)((void *)0);
  {
  fprintf(_coverage_fout, "847\n");
  fflush(_coverage_fout);
  }
  count___0 = 0;
  {
  fprintf(_coverage_fout, "848\n");
  fflush(_coverage_fout);
  }
  dir = opendir((char const   *)dirname);
  {
  fprintf(_coverage_fout, "849\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )dir == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "850\n");
    fflush(_coverage_fout);
    }
    perror((char const   *)dirname);
    {
    fprintf(_coverage_fout, "851\n");
    fflush(_coverage_fout);
    }
    *filelistp = (char **)((void *)0);
    {
    fprintf(_coverage_fout, "852\n");
    fflush(_coverage_fout);
    }
    *countp = 0;
    {
    fprintf(_coverage_fout, "853\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "854\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "855\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "856\n");
    fflush(_coverage_fout);
    }
    dirent = readdir(dir);
    {
    fprintf(_coverage_fout, "857\n");
    fflush(_coverage_fout);
    }
    if (! ((unsigned long )dirent != (unsigned long )((void *)0))) {
      {
      fprintf(_coverage_fout, "858\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "859\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "860\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "861\n");
      fflush(_coverage_fout);
      }
      __s1_len = strlen((char const   *)(dirent->d_name));
      {
      fprintf(_coverage_fout, "862\n");
      fflush(_coverage_fout);
      }
      __s2_len = strlen("..");
      {
      fprintf(_coverage_fout, "863\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(dirent->d_name + 1)) - (unsigned long )((void const   *)(dirent->d_name)) == 1UL)) {
        {
        fprintf(_coverage_fout, "864\n");
        fflush(_coverage_fout);
        }
        goto _L___0;
      } else {
        {
        fprintf(_coverage_fout, "865\n");
        fflush(_coverage_fout);
        }
        if (__s1_len >= 4UL) {
          {
          fprintf(_coverage_fout, "866\n");
          fflush(_coverage_fout);
          }
          _L___0: 
          if (! ((unsigned long )((void const   *)(".." + 1)) - (unsigned long )((void const   *)"..") == 1UL)) {
            {
            fprintf(_coverage_fout, "867\n");
            fflush(_coverage_fout);
            }
            tmp___12 = 1;
          } else {
            {
            fprintf(_coverage_fout, "868\n");
            fflush(_coverage_fout);
            }
            if (__s2_len >= 4UL) {
              {
              fprintf(_coverage_fout, "869\n");
              fflush(_coverage_fout);
              }
              tmp___12 = 1;
            } else {
              {
              fprintf(_coverage_fout, "870\n");
              fflush(_coverage_fout);
              }
              tmp___12 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "871\n");
          fflush(_coverage_fout);
          }
          tmp___12 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "872\n");
      fflush(_coverage_fout);
      }
      if (tmp___12) {
        {
        fprintf(_coverage_fout, "873\n");
        fflush(_coverage_fout);
        }
        tmp___8 = __builtin_strcmp((char const   *)(dirent->d_name), "..");
      } else {
        {
        fprintf(_coverage_fout, "874\n");
        fflush(_coverage_fout);
        }
        tmp___11 = __builtin_strcmp((char const   *)(dirent->d_name), "..");
        {
        fprintf(_coverage_fout, "875\n");
        fflush(_coverage_fout);
        }
        tmp___8 = tmp___11;
      }
    } else {
      {
      fprintf(_coverage_fout, "876\n");
      fflush(_coverage_fout);
      }
      tmp___11 = __builtin_strcmp((char const   *)(dirent->d_name), "..");
      {
      fprintf(_coverage_fout, "877\n");
      fflush(_coverage_fout);
      }
      tmp___8 = tmp___11;
    }
    {
    fprintf(_coverage_fout, "878\n");
    fflush(_coverage_fout);
    }
    if (tmp___8 != 0) {
      {
      fprintf(_coverage_fout, "879\n");
      fflush(_coverage_fout);
      }
      if (0) {
        {
        fprintf(_coverage_fout, "880\n");
        fflush(_coverage_fout);
        }
        __s1_len___0 = strlen((char const   *)(dirent->d_name));
        {
        fprintf(_coverage_fout, "881\n");
        fflush(_coverage_fout);
        }
        __s2_len___0 = strlen(".");
        {
        fprintf(_coverage_fout, "882\n");
        fflush(_coverage_fout);
        }
        if (! ((unsigned long )((void const   *)(dirent->d_name + 1)) - (unsigned long )((void const   *)(dirent->d_name)) == 1UL)) {
          {
          fprintf(_coverage_fout, "883\n");
          fflush(_coverage_fout);
          }
          goto _L___2;
        } else {
          {
          fprintf(_coverage_fout, "884\n");
          fflush(_coverage_fout);
          }
          if (__s1_len___0 >= 4UL) {
            {
            fprintf(_coverage_fout, "885\n");
            fflush(_coverage_fout);
            }
            _L___2: 
            if (! ((unsigned long )((void const   *)("." + 1)) - (unsigned long )((void const   *)".") == 1UL)) {
              {
              fprintf(_coverage_fout, "886\n");
              fflush(_coverage_fout);
              }
              tmp___22 = 1;
            } else {
              {
              fprintf(_coverage_fout, "887\n");
              fflush(_coverage_fout);
              }
              if (__s2_len___0 >= 4UL) {
                {
                fprintf(_coverage_fout, "888\n");
                fflush(_coverage_fout);
                }
                tmp___22 = 1;
              } else {
                {
                fprintf(_coverage_fout, "889\n");
                fflush(_coverage_fout);
                }
                tmp___22 = 0;
              }
            }
          } else {
            {
            fprintf(_coverage_fout, "890\n");
            fflush(_coverage_fout);
            }
            tmp___22 = 0;
          }
        }
        {
        fprintf(_coverage_fout, "891\n");
        fflush(_coverage_fout);
        }
        if (tmp___22) {
          {
          fprintf(_coverage_fout, "892\n");
          fflush(_coverage_fout);
          }
          tmp___18 = __builtin_strcmp((char const   *)(dirent->d_name), ".");
        } else {
          {
          fprintf(_coverage_fout, "893\n");
          fflush(_coverage_fout);
          }
          tmp___21 = __builtin_strcmp((char const   *)(dirent->d_name), ".");
          {
          fprintf(_coverage_fout, "894\n");
          fflush(_coverage_fout);
          }
          tmp___18 = tmp___21;
        }
      } else {
        {
        fprintf(_coverage_fout, "895\n");
        fflush(_coverage_fout);
        }
        tmp___21 = __builtin_strcmp((char const   *)(dirent->d_name), ".");
        {
        fprintf(_coverage_fout, "896\n");
        fflush(_coverage_fout);
        }
        tmp___18 = tmp___21;
      }
      {
      fprintf(_coverage_fout, "897\n");
      fflush(_coverage_fout);
      }
      if (tmp___18 != 0) {
        {
        fprintf(_coverage_fout, "898\n");
        fflush(_coverage_fout);
        }
        tmp = strlen((char const   *)dirname);
        {
        fprintf(_coverage_fout, "899\n");
        fflush(_coverage_fout);
        }
        tmp___0 = strlen((char const   *)(dirent->d_name));
        {
        fprintf(_coverage_fout, "900\n");
        fflush(_coverage_fout);
        }
        tmp___1 = xalloc((tmp + tmp___0) + 2UL, cmd.name);
        {
        fprintf(_coverage_fout, "901\n");
        fflush(_coverage_fout);
        }
        strbuf = (char *)tmp___1;
        {
        fprintf(_coverage_fout, "902\n");
        fflush(_coverage_fout);
        }
        strcpy((char */* __restrict  */)strbuf,
               (char const   */* __restrict  */)dirname);
        {
        fprintf(_coverage_fout, "903\n");
        fflush(_coverage_fout);
        }
        strcat((char */* __restrict  */)strbuf,
               (char const   */* __restrict  */)"/");
        {
        fprintf(_coverage_fout, "904\n");
        fflush(_coverage_fout);
        }
        strcat((char */* __restrict  */)strbuf,
               (char const   */* __restrict  */)(dirent->d_name));
        {
        fprintf(_coverage_fout, "905\n");
        fflush(_coverage_fout);
        }
        tmp___2 = xrealloc((void *)filelist,
                           (unsigned long )(count___0 + 1) * sizeof(char *),
                           cmd.name);
        {
        fprintf(_coverage_fout, "906\n");
        fflush(_coverage_fout);
        }
        filelist = (char **)tmp___2;
        {
        fprintf(_coverage_fout, "907\n");
        fflush(_coverage_fout);
        }
        *(filelist + count___0) = strbuf;
        {
        fprintf(_coverage_fout, "908\n");
        fflush(_coverage_fout);
        }
        count___0 ++;
      } else {
        {
        fprintf(_coverage_fout, "909\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "910\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "911\n");
  fflush(_coverage_fout);
  }
  closedir(dir);
  {
  fprintf(_coverage_fout, "912\n");
  fflush(_coverage_fout);
  }
  *filelistp = filelist;
  {
  fprintf(_coverage_fout, "913\n");
  fflush(_coverage_fout);
  }
  *countp = count___0;
  {
  fprintf(_coverage_fout, "914\n");
  fflush(_coverage_fout);
  }
  return (count___0);
}
}
void free_filelist(char **filelist , int count___0 ) 
{ 
  int i ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "915\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "916\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "917\n");
    fflush(_coverage_fout);
    }
    if (i < count___0) {
      {
      fprintf(_coverage_fout, "918\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "919\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "920\n");
    fflush(_coverage_fout);
    }
    free((void *)*(filelist + i));
    {
    fprintf(_coverage_fout, "921\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "922\n");
  fflush(_coverage_fout);
  }
  free((void *)filelist);
  {
  fprintf(_coverage_fout, "923\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void traverse_file(char *filename ) 
{ 
  struct stat buf ;
  int st ;
  int link___0 ;
  int tmp ;
  char **filelist ;
  int count___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "924\n");
  fflush(_coverage_fout);
  }
  link___0 = 0;
  {
  fprintf(_coverage_fout, "925\n");
  fflush(_coverage_fout);
  }
  st = lstat((char const   */* __restrict  */)filename,
             (struct stat */* __restrict  */)(& buf));
  {
  fprintf(_coverage_fout, "926\n");
  fflush(_coverage_fout);
  }
  if (! st) {
    {
    fprintf(_coverage_fout, "927\n");
    fflush(_coverage_fout);
    }
    if ((buf.st_mode & 61440U) == 40960U) {
      {
      fprintf(_coverage_fout, "928\n");
      fflush(_coverage_fout);
      }
      link___0 = 1;
      {
      fprintf(_coverage_fout, "929\n");
      fflush(_coverage_fout);
      }
      st = stat((char const   */* __restrict  */)filename,
                (struct stat */* __restrict  */)(& buf));
    } else {
      {
      fprintf(_coverage_fout, "930\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "931\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "932\n");
  fflush(_coverage_fout);
  }
  if (st) {
    {
    fprintf(_coverage_fout, "933\n");
    fflush(_coverage_fout);
    }
    file_action(filename);
    {
    fprintf(_coverage_fout, "934\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "935\n");
    fflush(_coverage_fout);
    }
    if (! ((buf.st_mode & 61440U) == 16384U)) {
      {
      fprintf(_coverage_fout, "936\n");
      fflush(_coverage_fout);
      }
      file_action(filename);
      {
      fprintf(_coverage_fout, "937\n");
      fflush(_coverage_fout);
      }
      return;
    } else {
      {
      fprintf(_coverage_fout, "938\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "939\n");
  fflush(_coverage_fout);
  }
  if (cmd.recursive <= 1) {
    {
    fprintf(_coverage_fout, "940\n");
    fflush(_coverage_fout);
    }
    if (link___0 == 1) {
      {
      fprintf(_coverage_fout, "941\n");
      fflush(_coverage_fout);
      }
      if (cmd.verbose >= 0) {
        {
        fprintf(_coverage_fout, "942\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s: directory is a symbolic link -- ignored\n",
                cmd.name, filename);
      } else {
        {
        fprintf(_coverage_fout, "943\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "944\n");
      fflush(_coverage_fout);
      }
      return;
    } else {
      {
      fprintf(_coverage_fout, "945\n");
      fflush(_coverage_fout);
      }
      goto _L;
    }
  } else {
    {
    fprintf(_coverage_fout, "946\n");
    fflush(_coverage_fout);
    }
    _L: 
    if (cmd.recursive == 0) {
      {
      fprintf(_coverage_fout, "947\n");
      fflush(_coverage_fout);
      }
      if (cmd.verbose >= 0) {
        {
        fprintf(_coverage_fout, "948\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: %s: is a directory -- ignored\n",
                cmd.name, filename);
      } else {
        {
        fprintf(_coverage_fout, "949\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "950\n");
      fflush(_coverage_fout);
      }
      return;
    } else {
      {
      fprintf(_coverage_fout, "951\n");
      fflush(_coverage_fout);
      }
      tmp = known_inode(buf.st_ino, buf.st_dev);
      {
      fprintf(_coverage_fout, "952\n");
      fflush(_coverage_fout);
      }
      if (tmp) {
        {
        fprintf(_coverage_fout, "953\n");
        fflush(_coverage_fout);
        }
        if (cmd.verbose > 0) {
          {
          fprintf(_coverage_fout, "954\n");
          fflush(_coverage_fout);
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"Already visited directory %s -- skipped.\n",
                  filename);
        } else {
          {
          fprintf(_coverage_fout, "955\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "956\n");
        fflush(_coverage_fout);
        }
        return;
      } else {
        {
        fprintf(_coverage_fout, "957\n");
        fflush(_coverage_fout);
        }

      }
    }
  }
  {
  fprintf(_coverage_fout, "958\n");
  fflush(_coverage_fout);
  }
  get_filelist(filename, & filelist, & count___0);
  {
  fprintf(_coverage_fout, "959\n");
  fflush(_coverage_fout);
  }
  traverse_files(filelist, count___0);
  {
  fprintf(_coverage_fout, "960\n");
  fflush(_coverage_fout);
  }
  free_filelist(filelist, count___0);
  {
  fprintf(_coverage_fout, "961\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void traverse_files(char **filelist , int count___0 ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "962\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "963\n");
    fflush(_coverage_fout);
    }
    if (count___0 > 0) {
      {
      fprintf(_coverage_fout, "964\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "965\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "966\n");
    fflush(_coverage_fout);
    }
    traverse_file(*filelist);
    {
    fprintf(_coverage_fout, "967\n");
    fflush(_coverage_fout);
    }
    filelist ++;
    {
    fprintf(_coverage_fout, "968\n");
    fflush(_coverage_fout);
    }
    count___0 --;
  }
  {
  fprintf(_coverage_fout, "969\n");
  fflush(_coverage_fout);
  }
  return;
}
}
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__)) realloc)(void *__ptr ,
                                                                                              size_t __size )  __attribute__((__malloc__)) ;
void *xalloc(size_t size , char *myname ) 
{ 
  void *p ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "970\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(size);
  {
  fprintf(_coverage_fout, "971\n");
  fflush(_coverage_fout);
  }
  p = tmp;
  {
  fprintf(_coverage_fout, "972\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "973\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s: out of memory\n", myname);
    {
    fprintf(_coverage_fout, "974\n");
    fflush(_coverage_fout);
    }
    exit(2);
  } else {
    {
    fprintf(_coverage_fout, "975\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "976\n");
  fflush(_coverage_fout);
  }
  return (p);
}
}
void *xrealloc(void *p , size_t size , char *myname ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "977\n");
  fflush(_coverage_fout);
  }
  p = realloc(p, size);
  {
  fprintf(_coverage_fout, "978\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "979\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s: out of memory\n", myname);
    {
    fprintf(_coverage_fout, "980\n");
    fflush(_coverage_fout);
    }
    exit(2);
  } else {
    {
    fprintf(_coverage_fout, "981\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "982\n");
  fflush(_coverage_fout);
  }
  return (p);
}
}
char *xreadline(FILE *fin , char *myname ) 
{ 
  int buflen ;
  char *buf ;
  void *tmp ;
  char *res ;
  char *nl ;
  char *tmp___1 ;
  int oldbuflen ;
  void *tmp___2 ;
  char *tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "983\n");
  fflush(_coverage_fout);
  }
  buflen = 32;
  {
  fprintf(_coverage_fout, "984\n");
  fflush(_coverage_fout);
  }
  tmp = xalloc((unsigned long )buflen, myname);
  {
  fprintf(_coverage_fout, "985\n");
  fflush(_coverage_fout);
  }
  buf = (char *)tmp;
  {
  fprintf(_coverage_fout, "986\n");
  fflush(_coverage_fout);
  }
  res = fgets((char */* __restrict  */)buf, 32, (FILE */* __restrict  */)fin);
  {
  fprintf(_coverage_fout, "987\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )res == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "988\n");
    fflush(_coverage_fout);
    }
    free((void *)buf);
    {
    fprintf(_coverage_fout, "989\n");
    fflush(_coverage_fout);
    }
    return ((char *)((void *)0));
  } else {
    {
    fprintf(_coverage_fout, "990\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "991\n");
  fflush(_coverage_fout);
  }
  tmp___1 = __builtin_strchr(buf, '\n');
  {
  fprintf(_coverage_fout, "992\n");
  fflush(_coverage_fout);
  }
  nl = tmp___1;
  {
  fprintf(_coverage_fout, "993\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "994\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )nl == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "995\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "996\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "997\n");
    fflush(_coverage_fout);
    }
    oldbuflen = buflen;
    {
    fprintf(_coverage_fout, "998\n");
    fflush(_coverage_fout);
    }
    buflen <<= 1;
    {
    fprintf(_coverage_fout, "999\n");
    fflush(_coverage_fout);
    }
    tmp___2 = xrealloc((void *)buf, (unsigned long )buflen, myname);
    {
    fprintf(_coverage_fout, "1000\n");
    fflush(_coverage_fout);
    }
    buf = (char *)tmp___2;
    {
    fprintf(_coverage_fout, "1001\n");
    fflush(_coverage_fout);
    }
    res = fgets((char */* __restrict  */)((buf + oldbuflen) - 1),
                (buflen - oldbuflen) + 1, (FILE */* __restrict  */)fin);
    {
    fprintf(_coverage_fout, "1002\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )res == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "1003\n");
      fflush(_coverage_fout);
      }
      return (buf);
    } else {
      {
      fprintf(_coverage_fout, "1004\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1005\n");
    fflush(_coverage_fout);
    }
    tmp___4 = __builtin_strchr((buf + oldbuflen) - 1, '\n');
    {
    fprintf(_coverage_fout, "1006\n");
    fflush(_coverage_fout);
    }
    nl = tmp___4;
  }
  {
  fprintf(_coverage_fout, "1007\n");
  fflush(_coverage_fout);
  }
  *nl = (char)0;
  {
  fprintf(_coverage_fout, "1008\n");
  fflush(_coverage_fout);
  }
  return (buf);
}
}
extern  __attribute__((__nothrow__)) int tcgetattr(int __fd ,
                                                   struct termios *__termios_p ) ;
extern  __attribute__((__nothrow__)) int tcsetattr(int __fd ,
                                                   int __optional_actions ,
                                                   struct termios  const  *__termios_p ) ;
char *readkey(char *prompt___0 , char *myname ) 
{ 
  char *line ;
  FILE *fin ;
  struct termios tio ;
  struct termios saved_tio ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1009\n");
  fflush(_coverage_fout);
  }
  fin = stdin;
  {
  fprintf(_coverage_fout, "1010\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )fin == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "1011\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s: cannot open /dev/tty\n",
            myname);
    {
    fprintf(_coverage_fout, "1012\n");
    fflush(_coverage_fout);
    }
    exit(2);
  } else {
    {
    fprintf(_coverage_fout, "1013\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1014\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"%s", prompt___0);
  {
  fprintf(_coverage_fout, "1015\n");
  fflush(_coverage_fout);
  }
  fflush(stderr);
  {
  fprintf(_coverage_fout, "1016\n");
  fflush(_coverage_fout);
  }
  tmp = fileno(fin);
  {
  fprintf(_coverage_fout, "1017\n");
  fflush(_coverage_fout);
  }
  tcgetattr(tmp, & tio);
  {
  fprintf(_coverage_fout, "1018\n");
  fflush(_coverage_fout);
  }
  saved_tio = tio;
  {
  fprintf(_coverage_fout, "1019\n");
  fflush(_coverage_fout);
  }
  tio.c_lflag &= 4294967175U;
  {
  fprintf(_coverage_fout, "1020\n");
  fflush(_coverage_fout);
  }
  tmp___0 = fileno(fin);
  {
  fprintf(_coverage_fout, "1021\n");
  fflush(_coverage_fout);
  }
  tcsetattr(tmp___0, 0, (struct termios  const  *)(& tio));
  {
  fprintf(_coverage_fout, "1022\n");
  fflush(_coverage_fout);
  }
  line = xreadline(fin, myname);
  {
  fprintf(_coverage_fout, "1023\n");
  fflush(_coverage_fout);
  }
  tmp___1 = fileno(fin);
  {
  fprintf(_coverage_fout, "1024\n");
  fflush(_coverage_fout);
  }
  tcsetattr(tmp___1, 0, (struct termios  const  *)(& saved_tio));
  {
  fprintf(_coverage_fout, "1025\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"\n");
  {
  fprintf(_coverage_fout, "1026\n");
  fflush(_coverage_fout);
  }
  fflush(stderr);
  {
  fprintf(_coverage_fout, "1027\n");
  fflush(_coverage_fout);
  }
  fclose(fin);
  {
  fprintf(_coverage_fout, "1028\n");
  fflush(_coverage_fout);
  }
  return (line);
}
}
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncmp)(char const   *__s1 ,
                                                                                      char const   *__s2 ,
                                                                                      size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) __pid_t getpid(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) gethostname)(char *__name ,
                                                                                        size_t __len ) ;
reader *new_stream_reader(FILE *in ) ;
writer *new_stream_writer(FILE *out ) ;
readwriter *new_file_readwriter(int fd , char *filename ) ;
int xrijndaelKeySched(word32 *key , int keyBits , int blockBits , roundkey *rkk ) ;
void xrijndaelEncrypt(word32 *block , roundkey *rkk ) ;
void xrijndaelDecrypt(word32 *block , roundkey *rkk ) ;
void hashstring(char *keystring , word32 *hash ) 
{ 
  int i ;
  roundkey rkk ;
  word32 key[8] ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1029\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1030\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1031\n");
    fflush(_coverage_fout);
    }
    if (i < 8) {
      {
      fprintf(_coverage_fout, "1032\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1033\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1034\n");
    fflush(_coverage_fout);
    }
    *(hash + i) = 0U;
    {
    fprintf(_coverage_fout, "1035\n");
    fflush(_coverage_fout);
    }
    key[i] = *(hash + i);
    {
    fprintf(_coverage_fout, "1036\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1037\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1038\n");
    fflush(_coverage_fout);
    }
    i = 0;
    {
    fprintf(_coverage_fout, "1039\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1040\n");
      fflush(_coverage_fout);
      }
      if (i < 32) {
        {
        fprintf(_coverage_fout, "1041\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "1042\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1043\n");
      fflush(_coverage_fout);
      }
      if ((int )*keystring != 0) {
        {
        fprintf(_coverage_fout, "1044\n");
        fflush(_coverage_fout);
        }
        *((word8 *)(key) + i) = (unsigned char )((int )*((word8 *)(key) + i) ^ (int )*keystring);
        {
        fprintf(_coverage_fout, "1045\n");
        fflush(_coverage_fout);
        }
        keystring ++;
      } else {
        {
        fprintf(_coverage_fout, "1046\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "1047\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
    {
    fprintf(_coverage_fout, "1048\n");
    fflush(_coverage_fout);
    }
    xrijndaelKeySched(key, 256, 256, & rkk);
    {
    fprintf(_coverage_fout, "1049\n");
    fflush(_coverage_fout);
    }
    xrijndaelEncrypt(hash, & rkk);
    {
    fprintf(_coverage_fout, "1050\n");
    fflush(_coverage_fout);
    }
    if (! ((int )*keystring != 0)) {
      {
      fprintf(_coverage_fout, "1051\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "1052\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "1053\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void make_nonce(word32 *nonce ) ;
static int count  =    0;
void make_nonce(word32 *nonce ) 
{ 
  char acc[512] ;
  char host[256] ;
  int tmp ;
  __pid_t tmp___0 ;
  time_t tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1054\n");
  fflush(_coverage_fout);
  }
  gethostname(host, 256UL);
  {
  fprintf(_coverage_fout, "1055\n");
  fflush(_coverage_fout);
  }
  tmp = count;
  {
  fprintf(_coverage_fout, "1056\n");
  fflush(_coverage_fout);
  }
  count ++;
  {
  fprintf(_coverage_fout, "1057\n");
  fflush(_coverage_fout);
  }
  tmp___0 = getpid();
  {
  fprintf(_coverage_fout, "1058\n");
  fflush(_coverage_fout);
  }
  tmp___1 = time((time_t *)0);
  {
  fprintf(_coverage_fout, "1059\n");
  fflush(_coverage_fout);
  }
  sprintf((char */* __restrict  */)(acc),
          (char const   */* __restrict  */)"%s, %d, %d, %d", host,
          (int )tmp___1, tmp___0, tmp);
  {
  fprintf(_coverage_fout, "1060\n");
  fflush(_coverage_fout);
  }
  hashstring(acc, nonce);
  {
  fprintf(_coverage_fout, "1061\n");
  fflush(_coverage_fout);
  }
  return;
}
}
static char const   *errstr[3]  = {      "no error",      "bad file format",      "key does not match"};
char const   *ccrypt_error(int st ) 
{ 
  int *tmp ;
  char *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1062\n");
  fflush(_coverage_fout);
  }
  if (st >= 0) {
    {
    fprintf(_coverage_fout, "1063\n");
    fflush(_coverage_fout);
    }
    return (errstr[st]);
  } else {
    {
    fprintf(_coverage_fout, "1064\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1065\n");
  fflush(_coverage_fout);
  }
  if (st == -1) {
    {
    fprintf(_coverage_fout, "1066\n");
    fflush(_coverage_fout);
    }
    tmp = __errno_location();
    {
    fprintf(_coverage_fout, "1067\n");
    fflush(_coverage_fout);
    }
    tmp___0 = strerror(*tmp);
    {
    fprintf(_coverage_fout, "1068\n");
    fflush(_coverage_fout);
    }
    return ((char const   *)tmp___0);
  } else {
    {
    fprintf(_coverage_fout, "1069\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1070\n");
  fflush(_coverage_fout);
  }
  return ("unknown error");
}
}
int ccencrypt(reader *r , writer *w , char *keyword ) 
{ 
  word32 state[8] ;
  word8 *statec ;
  roundkey rkk ;
  word32 key[8] ;
  int i ;
  int c ;
  int cc ;
  int st ;
  int *tmp ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1071\n");
  fflush(_coverage_fout);
  }
  statec = (word8 *)(state);
  {
  fprintf(_coverage_fout, "1072\n");
  fflush(_coverage_fout);
  }
  hashstring(keyword, key);
  {
  fprintf(_coverage_fout, "1073\n");
  fflush(_coverage_fout);
  }
  xrijndaelKeySched(key, 256, 256, & rkk);
  {
  fprintf(_coverage_fout, "1074\n");
  fflush(_coverage_fout);
  }
  make_nonce(state);
  {
  fprintf(_coverage_fout, "1075\n");
  fflush(_coverage_fout);
  }
  __builtin_strncpy((char *)statec, "c051", 4UL);
  {
  fprintf(_coverage_fout, "1076\n");
  fflush(_coverage_fout);
  }
  xrijndaelEncrypt(state, & rkk);
  {
  fprintf(_coverage_fout, "1077\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1078\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1079\n");
    fflush(_coverage_fout);
    }
    if (i < 32) {
      {
      fprintf(_coverage_fout, "1080\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1081\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1082\n");
    fflush(_coverage_fout);
    }
    st = (*(w->bputc))((int )*(statec + i), w);
    {
    fprintf(_coverage_fout, "1083\n");
    fflush(_coverage_fout);
    }
    if (st < 0) {
      {
      fprintf(_coverage_fout, "1084\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "1085\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1086\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1087\n");
  fflush(_coverage_fout);
  }
  c = (*(r->bgetc))(r);
  {
  fprintf(_coverage_fout, "1088\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1089\n");
    fflush(_coverage_fout);
    }
    if (c != -1) {
      {
      fprintf(_coverage_fout, "1090\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1091\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1092\n");
    fflush(_coverage_fout);
    }
    xrijndaelEncrypt(state, & rkk);
    {
    fprintf(_coverage_fout, "1093\n");
    fflush(_coverage_fout);
    }
    i = 0;
    {
    fprintf(_coverage_fout, "1094\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1095\n");
      fflush(_coverage_fout);
      }
      if (i < 32) {
        {
        fprintf(_coverage_fout, "1096\n");
        fflush(_coverage_fout);
        }
        if (! (c != -1)) {
          {
          fprintf(_coverage_fout, "1097\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "1098\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "1099\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1100\n");
      fflush(_coverage_fout);
      }
      cc = c ^ (int )*(statec + i);
      {
      fprintf(_coverage_fout, "1101\n");
      fflush(_coverage_fout);
      }
      *(statec + i) = (unsigned char )cc;
      {
      fprintf(_coverage_fout, "1102\n");
      fflush(_coverage_fout);
      }
      st = (*(w->bputc))(cc, w);
      {
      fprintf(_coverage_fout, "1103\n");
      fflush(_coverage_fout);
      }
      if (st < 0) {
        {
        fprintf(_coverage_fout, "1104\n");
        fflush(_coverage_fout);
        }
        return (-1);
      } else {
        {
        fprintf(_coverage_fout, "1105\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "1106\n");
      fflush(_coverage_fout);
      }
      c = (*(r->bgetc))(r);
      {
      fprintf(_coverage_fout, "1107\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
  }
  {
  fprintf(_coverage_fout, "1108\n");
  fflush(_coverage_fout);
  }
  tmp = __errno_location();
  {
  fprintf(_coverage_fout, "1109\n");
  fflush(_coverage_fout);
  }
  if (*tmp) {
    {
    fprintf(_coverage_fout, "1110\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1111\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1112\n");
  fflush(_coverage_fout);
  }
  tmp___0 = (*(w->beof))(w);
  {
  fprintf(_coverage_fout, "1113\n");
  fflush(_coverage_fout);
  }
  return (tmp___0);
}
}
int ccdecrypt(reader *r , writer *w , char *keyword ) 
{ 
  word32 state[8] ;
  word32 seed[8] ;
  word8 *statec ;
  word8 *seedchar ;
  roundkey rkk ;
  word32 key[8] ;
  int i ;
  int c ;
  int cc ;
  int st ;
  int *tmp ;
  int tmp___13 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___19 ;
  int tmp___22 ;
  int tmp___23 ;
  int *tmp___26 ;
  int tmp___27 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1114\n");
  fflush(_coverage_fout);
  }
  statec = (word8 *)(state);
  {
  fprintf(_coverage_fout, "1115\n");
  fflush(_coverage_fout);
  }
  seedchar = (word8 *)(seed);
  {
  fprintf(_coverage_fout, "1116\n");
  fflush(_coverage_fout);
  }
  hashstring(keyword, key);
  {
  fprintf(_coverage_fout, "1117\n");
  fflush(_coverage_fout);
  }
  xrijndaelKeySched(key, 256, 256, & rkk);
  {
  fprintf(_coverage_fout, "1118\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1119\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1120\n");
    fflush(_coverage_fout);
    }
    if (i < 32) {
      {
      fprintf(_coverage_fout, "1121\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1122\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1123\n");
    fflush(_coverage_fout);
    }
    cc = (*(r->bgetc))(r);
    {
    fprintf(_coverage_fout, "1124\n");
    fflush(_coverage_fout);
    }
    *(statec + i) = (unsigned char )cc;
    {
    fprintf(_coverage_fout, "1125\n");
    fflush(_coverage_fout);
    }
    *(seedchar + i) = *(statec + i);
    {
    fprintf(_coverage_fout, "1126\n");
    fflush(_coverage_fout);
    }
    if (cc == -1) {
      {
      fprintf(_coverage_fout, "1127\n");
      fflush(_coverage_fout);
      }
      tmp = __errno_location();
      {
      fprintf(_coverage_fout, "1128\n");
      fflush(_coverage_fout);
      }
      if (*tmp) {
        {
        fprintf(_coverage_fout, "1129\n");
        fflush(_coverage_fout);
        }
        return (-1);
      } else {
        {
        fprintf(_coverage_fout, "1130\n");
        fflush(_coverage_fout);
        }
        return (1);
      }
    } else {
      {
      fprintf(_coverage_fout, "1131\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1132\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1133\n");
  fflush(_coverage_fout);
  }
  xrijndaelDecrypt(seed, & rkk);
  {
  fprintf(_coverage_fout, "1134\n");
  fflush(_coverage_fout);
  }
  if (0) {
    {
    fprintf(_coverage_fout, "1135\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "1136\n");
      fflush(_coverage_fout);
      }
      __s1_len___0 = strlen((char const   *)seedchar);
      {
      fprintf(_coverage_fout, "1137\n");
      fflush(_coverage_fout);
      }
      __s2_len___0 = strlen("c051");
      {
      fprintf(_coverage_fout, "1138\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(seedchar + 1)) - (unsigned long )((void const   *)seedchar) == 1UL)) {
        {
        fprintf(_coverage_fout, "1139\n");
        fflush(_coverage_fout);
        }
        goto _L___2;
      } else {
        {
        fprintf(_coverage_fout, "1140\n");
        fflush(_coverage_fout);
        }
        if (__s1_len___0 >= 4UL) {
          {
          fprintf(_coverage_fout, "1141\n");
          fflush(_coverage_fout);
          }
          _L___2: 
          if (! ((unsigned long )((void const   *)("c051" + 1)) - (unsigned long )((void const   *)"c051") == 1UL)) {
            {
            fprintf(_coverage_fout, "1142\n");
            fflush(_coverage_fout);
            }
            tmp___23 = 1;
          } else {
            {
            fprintf(_coverage_fout, "1143\n");
            fflush(_coverage_fout);
            }
            if (__s2_len___0 >= 4UL) {
              {
              fprintf(_coverage_fout, "1144\n");
              fflush(_coverage_fout);
              }
              tmp___23 = 1;
            } else {
              {
              fprintf(_coverage_fout, "1145\n");
              fflush(_coverage_fout);
              }
              tmp___23 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "1146\n");
          fflush(_coverage_fout);
          }
          tmp___23 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "1147\n");
      fflush(_coverage_fout);
      }
      if (tmp___23) {
        {
        fprintf(_coverage_fout, "1148\n");
        fflush(_coverage_fout);
        }
        tmp___19 = __builtin_strcmp((char const   *)seedchar, "c051");
      } else {
        {
        fprintf(_coverage_fout, "1149\n");
        fflush(_coverage_fout);
        }
        tmp___22 = __builtin_strcmp((char const   *)seedchar, "c051");
        {
        fprintf(_coverage_fout, "1150\n");
        fflush(_coverage_fout);
        }
        tmp___19 = tmp___22;
      }
    } else {
      {
      fprintf(_coverage_fout, "1151\n");
      fflush(_coverage_fout);
      }
      tmp___22 = __builtin_strcmp((char const   *)seedchar, "c051");
      {
      fprintf(_coverage_fout, "1152\n");
      fflush(_coverage_fout);
      }
      tmp___19 = tmp___22;
    }
    {
    fprintf(_coverage_fout, "1153\n");
    fflush(_coverage_fout);
    }
    tmp___13 = tmp___19;
  } else {
    {
    fprintf(_coverage_fout, "1154\n");
    fflush(_coverage_fout);
    }
    tmp___13 = strncmp((char const   *)seedchar, "c051", 4UL);
  }
  {
  fprintf(_coverage_fout, "1155\n");
  fflush(_coverage_fout);
  }
  if (tmp___13) {
    {
    fprintf(_coverage_fout, "1156\n");
    fflush(_coverage_fout);
    }
    if (! cmd.mismatch) {
      {
      fprintf(_coverage_fout, "1157\n");
      fflush(_coverage_fout);
      }
      return (2);
    } else {
      {
      fprintf(_coverage_fout, "1158\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1159\n");
    fflush(_coverage_fout);
    }
    if (cmd.verbose >= 0) {
      {
      fprintf(_coverage_fout, "1160\n");
      fflush(_coverage_fout);
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: warning: key does not match - decrypting anyway\n",
              cmd.name);
    } else {
      {
      fprintf(_coverage_fout, "1161\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1162\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1163\n");
  fflush(_coverage_fout);
  }
  cc = (*(r->bgetc))(r);
  {
  fprintf(_coverage_fout, "1164\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1165\n");
    fflush(_coverage_fout);
    }
    if (cc != -1) {
      {
      fprintf(_coverage_fout, "1166\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1167\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1168\n");
    fflush(_coverage_fout);
    }
    xrijndaelEncrypt(state, & rkk);
    {
    fprintf(_coverage_fout, "1169\n");
    fflush(_coverage_fout);
    }
    i = 0;
    {
    fprintf(_coverage_fout, "1170\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1171\n");
      fflush(_coverage_fout);
      }
      if (i < 32) {
        {
        fprintf(_coverage_fout, "1172\n");
        fflush(_coverage_fout);
        }
        if (! (cc != -1)) {
          {
          fprintf(_coverage_fout, "1173\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "1174\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "1175\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1176\n");
      fflush(_coverage_fout);
      }
      c = cc ^ (int )*(statec + i);
      {
      fprintf(_coverage_fout, "1177\n");
      fflush(_coverage_fout);
      }
      *(statec + i) = (unsigned char )cc;
      {
      fprintf(_coverage_fout, "1178\n");
      fflush(_coverage_fout);
      }
      st = (*(w->bputc))(c, w);
      {
      fprintf(_coverage_fout, "1179\n");
      fflush(_coverage_fout);
      }
      if (st < 0) {
        {
        fprintf(_coverage_fout, "1180\n");
        fflush(_coverage_fout);
        }
        return (-1);
      } else {
        {
        fprintf(_coverage_fout, "1181\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "1182\n");
      fflush(_coverage_fout);
      }
      cc = (*(r->bgetc))(r);
      {
      fprintf(_coverage_fout, "1183\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
  }
  {
  fprintf(_coverage_fout, "1184\n");
  fflush(_coverage_fout);
  }
  tmp___26 = __errno_location();
  {
  fprintf(_coverage_fout, "1185\n");
  fflush(_coverage_fout);
  }
  if (*tmp___26) {
    {
    fprintf(_coverage_fout, "1186\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1187\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1188\n");
  fflush(_coverage_fout);
  }
  tmp___27 = (*(w->beof))(w);
  {
  fprintf(_coverage_fout, "1189\n");
  fflush(_coverage_fout);
  }
  return (tmp___27);
}
}
int cckeychange(reader *r , writer *w , char *keyword_in , char *keyword_out ) 
{ 
  word32 state_in[8] ;
  word32 seed_in[8] ;
  word8 *statec_in ;
  word8 *seedchar_in ;
  roundkey rkk_in ;
  word32 state_out[8] ;
  word8 *statec_out ;
  roundkey rkk_out ;
  word32 key[8] ;
  int i ;
  int c ;
  int cc ;
  int st ;
  int *tmp ;
  int tmp___13 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___19 ;
  int tmp___22 ;
  int tmp___23 ;
  int *tmp___26 ;
  int tmp___27 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1190\n");
  fflush(_coverage_fout);
  }
  statec_in = (word8 *)(state_in);
  {
  fprintf(_coverage_fout, "1191\n");
  fflush(_coverage_fout);
  }
  seedchar_in = (word8 *)(seed_in);
  {
  fprintf(_coverage_fout, "1192\n");
  fflush(_coverage_fout);
  }
  statec_out = (word8 *)(state_out);
  {
  fprintf(_coverage_fout, "1193\n");
  fflush(_coverage_fout);
  }
  hashstring(keyword_in, key);
  {
  fprintf(_coverage_fout, "1194\n");
  fflush(_coverage_fout);
  }
  xrijndaelKeySched(key, 256, 256, & rkk_in);
  {
  fprintf(_coverage_fout, "1195\n");
  fflush(_coverage_fout);
  }
  hashstring(keyword_out, key);
  {
  fprintf(_coverage_fout, "1196\n");
  fflush(_coverage_fout);
  }
  xrijndaelKeySched(key, 256, 256, & rkk_out);
  {
  fprintf(_coverage_fout, "1197\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1198\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1199\n");
    fflush(_coverage_fout);
    }
    if (i < 32) {
      {
      fprintf(_coverage_fout, "1200\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1201\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1202\n");
    fflush(_coverage_fout);
    }
    cc = (*(r->bgetc))(r);
    {
    fprintf(_coverage_fout, "1203\n");
    fflush(_coverage_fout);
    }
    *(statec_in + i) = (unsigned char )cc;
    {
    fprintf(_coverage_fout, "1204\n");
    fflush(_coverage_fout);
    }
    *(seedchar_in + i) = *(statec_in + i);
    {
    fprintf(_coverage_fout, "1205\n");
    fflush(_coverage_fout);
    }
    if (cc == -1) {
      {
      fprintf(_coverage_fout, "1206\n");
      fflush(_coverage_fout);
      }
      tmp = __errno_location();
      {
      fprintf(_coverage_fout, "1207\n");
      fflush(_coverage_fout);
      }
      if (*tmp) {
        {
        fprintf(_coverage_fout, "1208\n");
        fflush(_coverage_fout);
        }
        return (-1);
      } else {
        {
        fprintf(_coverage_fout, "1209\n");
        fflush(_coverage_fout);
        }
        return (1);
      }
    } else {
      {
      fprintf(_coverage_fout, "1210\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1211\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1212\n");
  fflush(_coverage_fout);
  }
  xrijndaelDecrypt(seed_in, & rkk_in);
  {
  fprintf(_coverage_fout, "1213\n");
  fflush(_coverage_fout);
  }
  if (0) {
    {
    fprintf(_coverage_fout, "1214\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "1215\n");
      fflush(_coverage_fout);
      }
      __s1_len___0 = strlen((char const   *)seedchar_in);
      {
      fprintf(_coverage_fout, "1216\n");
      fflush(_coverage_fout);
      }
      __s2_len___0 = strlen("c051");
      {
      fprintf(_coverage_fout, "1217\n");
      fflush(_coverage_fout);
      }
      if (! ((unsigned long )((void const   *)(seedchar_in + 1)) - (unsigned long )((void const   *)seedchar_in) == 1UL)) {
        {
        fprintf(_coverage_fout, "1218\n");
        fflush(_coverage_fout);
        }
        goto _L___2;
      } else {
        {
        fprintf(_coverage_fout, "1219\n");
        fflush(_coverage_fout);
        }
        if (__s1_len___0 >= 4UL) {
          {
          fprintf(_coverage_fout, "1220\n");
          fflush(_coverage_fout);
          }
          _L___2: 
          if (! ((unsigned long )((void const   *)("c051" + 1)) - (unsigned long )((void const   *)"c051") == 1UL)) {
            {
            fprintf(_coverage_fout, "1221\n");
            fflush(_coverage_fout);
            }
            tmp___23 = 1;
          } else {
            {
            fprintf(_coverage_fout, "1222\n");
            fflush(_coverage_fout);
            }
            if (__s2_len___0 >= 4UL) {
              {
              fprintf(_coverage_fout, "1223\n");
              fflush(_coverage_fout);
              }
              tmp___23 = 1;
            } else {
              {
              fprintf(_coverage_fout, "1224\n");
              fflush(_coverage_fout);
              }
              tmp___23 = 0;
            }
          }
        } else {
          {
          fprintf(_coverage_fout, "1225\n");
          fflush(_coverage_fout);
          }
          tmp___23 = 0;
        }
      }
      {
      fprintf(_coverage_fout, "1226\n");
      fflush(_coverage_fout);
      }
      if (tmp___23) {
        {
        fprintf(_coverage_fout, "1227\n");
        fflush(_coverage_fout);
        }
        tmp___19 = __builtin_strcmp((char const   *)seedchar_in, "c051");
      } else {
        {
        fprintf(_coverage_fout, "1228\n");
        fflush(_coverage_fout);
        }
        tmp___22 = __builtin_strcmp((char const   *)seedchar_in, "c051");
        {
        fprintf(_coverage_fout, "1229\n");
        fflush(_coverage_fout);
        }
        tmp___19 = tmp___22;
      }
    } else {
      {
      fprintf(_coverage_fout, "1230\n");
      fflush(_coverage_fout);
      }
      tmp___22 = __builtin_strcmp((char const   *)seedchar_in, "c051");
      {
      fprintf(_coverage_fout, "1231\n");
      fflush(_coverage_fout);
      }
      tmp___19 = tmp___22;
    }
    {
    fprintf(_coverage_fout, "1232\n");
    fflush(_coverage_fout);
    }
    tmp___13 = tmp___19;
  } else {
    {
    fprintf(_coverage_fout, "1233\n");
    fflush(_coverage_fout);
    }
    tmp___13 = strncmp((char const   *)seedchar_in, "c051", 4UL);
  }
  {
  fprintf(_coverage_fout, "1234\n");
  fflush(_coverage_fout);
  }
  if (tmp___13) {
    {
    fprintf(_coverage_fout, "1235\n");
    fflush(_coverage_fout);
    }
    return (2);
  } else {
    {
    fprintf(_coverage_fout, "1236\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1237\n");
  fflush(_coverage_fout);
  }
  make_nonce(state_out);
  {
  fprintf(_coverage_fout, "1238\n");
  fflush(_coverage_fout);
  }
  __builtin_strncpy((char *)statec_out, "c051", 4UL);
  {
  fprintf(_coverage_fout, "1239\n");
  fflush(_coverage_fout);
  }
  xrijndaelEncrypt(state_out, & rkk_out);
  {
  fprintf(_coverage_fout, "1240\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1241\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1242\n");
    fflush(_coverage_fout);
    }
    if (i < 32) {
      {
      fprintf(_coverage_fout, "1243\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1244\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1245\n");
    fflush(_coverage_fout);
    }
    st = (*(w->bputc))((int )*(statec_out + i), w);
    {
    fprintf(_coverage_fout, "1246\n");
    fflush(_coverage_fout);
    }
    if (st < 0) {
      {
      fprintf(_coverage_fout, "1247\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "1248\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1249\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1250\n");
  fflush(_coverage_fout);
  }
  cc = (*(r->bgetc))(r);
  {
  fprintf(_coverage_fout, "1251\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1252\n");
    fflush(_coverage_fout);
    }
    if (cc != -1) {
      {
      fprintf(_coverage_fout, "1253\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1254\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1255\n");
    fflush(_coverage_fout);
    }
    xrijndaelEncrypt(state_in, & rkk_in);
    {
    fprintf(_coverage_fout, "1256\n");
    fflush(_coverage_fout);
    }
    xrijndaelEncrypt(state_out, & rkk_out);
    {
    fprintf(_coverage_fout, "1257\n");
    fflush(_coverage_fout);
    }
    i = 0;
    {
    fprintf(_coverage_fout, "1258\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1259\n");
      fflush(_coverage_fout);
      }
      if (i < 32) {
        {
        fprintf(_coverage_fout, "1260\n");
        fflush(_coverage_fout);
        }
        if (! (cc != -1)) {
          {
          fprintf(_coverage_fout, "1261\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "1262\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "1263\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1264\n");
      fflush(_coverage_fout);
      }
      c = cc ^ (int )*(statec_in + i);
      {
      fprintf(_coverage_fout, "1265\n");
      fflush(_coverage_fout);
      }
      *(statec_in + i) = (unsigned char )cc;
      {
      fprintf(_coverage_fout, "1266\n");
      fflush(_coverage_fout);
      }
      cc = c ^ (int )*(statec_out + i);
      {
      fprintf(_coverage_fout, "1267\n");
      fflush(_coverage_fout);
      }
      *(statec_out + i) = (unsigned char )cc;
      {
      fprintf(_coverage_fout, "1268\n");
      fflush(_coverage_fout);
      }
      st = (*(w->bputc))(cc, w);
      {
      fprintf(_coverage_fout, "1269\n");
      fflush(_coverage_fout);
      }
      if (st < 0) {
        {
        fprintf(_coverage_fout, "1270\n");
        fflush(_coverage_fout);
        }
        return (-1);
      } else {
        {
        fprintf(_coverage_fout, "1271\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "1272\n");
      fflush(_coverage_fout);
      }
      cc = (*(r->bgetc))(r);
      {
      fprintf(_coverage_fout, "1273\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
  }
  {
  fprintf(_coverage_fout, "1274\n");
  fflush(_coverage_fout);
  }
  tmp___26 = __errno_location();
  {
  fprintf(_coverage_fout, "1275\n");
  fflush(_coverage_fout);
  }
  if (*tmp___26) {
    {
    fprintf(_coverage_fout, "1276\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1277\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1278\n");
  fflush(_coverage_fout);
  }
  tmp___27 = (*(w->beof))(w);
  {
  fprintf(_coverage_fout, "1279\n");
  fflush(_coverage_fout);
  }
  return (tmp___27);
}
}
int ccencrypt_file(int fd , char *filename , char *keyword ) 
{ 
  readwriter *rw ;
  readwriter *tmp ;
  reader *r ;
  writer *w ;
  int st ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1280\n");
  fflush(_coverage_fout);
  }
  tmp = new_file_readwriter(fd, filename);
  {
  fprintf(_coverage_fout, "1281\n");
  fflush(_coverage_fout);
  }
  rw = tmp;
  {
  fprintf(_coverage_fout, "1282\n");
  fflush(_coverage_fout);
  }
  r = (reader *)rw;
  {
  fprintf(_coverage_fout, "1283\n");
  fflush(_coverage_fout);
  }
  w = (writer *)rw;
  {
  fprintf(_coverage_fout, "1284\n");
  fflush(_coverage_fout);
  }
  tmp___0 = ccencrypt(r, w, keyword);
  {
  fprintf(_coverage_fout, "1285\n");
  fflush(_coverage_fout);
  }
  st = tmp___0;
  {
  fprintf(_coverage_fout, "1286\n");
  fflush(_coverage_fout);
  }
  free((void *)rw);
  {
  fprintf(_coverage_fout, "1287\n");
  fflush(_coverage_fout);
  }
  return (st);
}
}
int ccdecrypt_file(int fd , char *filename , char *keyword ) 
{ 
  readwriter *rw ;
  readwriter *tmp ;
  reader *r ;
  writer *w ;
  int st ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1288\n");
  fflush(_coverage_fout);
  }
  tmp = new_file_readwriter(fd, filename);
  {
  fprintf(_coverage_fout, "1289\n");
  fflush(_coverage_fout);
  }
  rw = tmp;
  {
  fprintf(_coverage_fout, "1290\n");
  fflush(_coverage_fout);
  }
  r = (reader *)rw;
  {
  fprintf(_coverage_fout, "1291\n");
  fflush(_coverage_fout);
  }
  w = (writer *)rw;
  {
  fprintf(_coverage_fout, "1292\n");
  fflush(_coverage_fout);
  }
  tmp___0 = ccdecrypt(r, w, keyword);
  {
  fprintf(_coverage_fout, "1293\n");
  fflush(_coverage_fout);
  }
  st = tmp___0;
  {
  fprintf(_coverage_fout, "1294\n");
  fflush(_coverage_fout);
  }
  free((void *)rw);
  {
  fprintf(_coverage_fout, "1295\n");
  fflush(_coverage_fout);
  }
  return (st);
}
}
int cckeychange_file(int fd , char *filename , char *key_in , char *key_out ) 
{ 
  readwriter *rw ;
  readwriter *tmp ;
  reader *r ;
  writer *w ;
  int st ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1296\n");
  fflush(_coverage_fout);
  }
  tmp = new_file_readwriter(fd, filename);
  {
  fprintf(_coverage_fout, "1297\n");
  fflush(_coverage_fout);
  }
  rw = tmp;
  {
  fprintf(_coverage_fout, "1298\n");
  fflush(_coverage_fout);
  }
  r = (reader *)rw;
  {
  fprintf(_coverage_fout, "1299\n");
  fflush(_coverage_fout);
  }
  w = (writer *)rw;
  {
  fprintf(_coverage_fout, "1300\n");
  fflush(_coverage_fout);
  }
  tmp___0 = cckeychange(r, w, key_in, key_out);
  {
  fprintf(_coverage_fout, "1301\n");
  fflush(_coverage_fout);
  }
  st = tmp___0;
  {
  fprintf(_coverage_fout, "1302\n");
  fflush(_coverage_fout);
  }
  free((void *)rw);
  {
  fprintf(_coverage_fout, "1303\n");
  fflush(_coverage_fout);
  }
  return (st);
}
}
int ccencrypt_streams(FILE *fin , FILE *fout , char *keyword ) 
{ 
  reader *r ;
  reader *tmp ;
  writer *w ;
  writer *tmp___0 ;
  int st ;
  int tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1304\n");
  fflush(_coverage_fout);
  }
  tmp = new_stream_reader(fin);
  {
  fprintf(_coverage_fout, "1305\n");
  fflush(_coverage_fout);
  }
  r = tmp;
  {
  fprintf(_coverage_fout, "1306\n");
  fflush(_coverage_fout);
  }
  tmp___0 = new_stream_writer(fout);
  {
  fprintf(_coverage_fout, "1307\n");
  fflush(_coverage_fout);
  }
  w = tmp___0;
  {
  fprintf(_coverage_fout, "1308\n");
  fflush(_coverage_fout);
  }
  tmp___1 = ccencrypt(r, w, keyword);
  {
  fprintf(_coverage_fout, "1309\n");
  fflush(_coverage_fout);
  }
  st = tmp___1;
  {
  fprintf(_coverage_fout, "1310\n");
  fflush(_coverage_fout);
  }
  free((void *)r);
  {
  fprintf(_coverage_fout, "1311\n");
  fflush(_coverage_fout);
  }
  free((void *)w);
  {
  fprintf(_coverage_fout, "1312\n");
  fflush(_coverage_fout);
  }
  return (st);
}
}
int ccdecrypt_streams(FILE *fin , FILE *fout , char *keyword ) 
{ 
  reader *r ;
  reader *tmp ;
  writer *w ;
  writer *tmp___0 ;
  int st ;
  int tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1313\n");
  fflush(_coverage_fout);
  }
  tmp = new_stream_reader(fin);
  {
  fprintf(_coverage_fout, "1314\n");
  fflush(_coverage_fout);
  }
  r = tmp;
  {
  fprintf(_coverage_fout, "1315\n");
  fflush(_coverage_fout);
  }
  tmp___0 = new_stream_writer(fout);
  {
  fprintf(_coverage_fout, "1316\n");
  fflush(_coverage_fout);
  }
  w = tmp___0;
  {
  fprintf(_coverage_fout, "1317\n");
  fflush(_coverage_fout);
  }
  tmp___1 = ccdecrypt(r, w, keyword);
  {
  fprintf(_coverage_fout, "1318\n");
  fflush(_coverage_fout);
  }
  st = tmp___1;
  {
  fprintf(_coverage_fout, "1319\n");
  fflush(_coverage_fout);
  }
  free((void *)r);
  {
  fprintf(_coverage_fout, "1320\n");
  fflush(_coverage_fout);
  }
  free((void *)w);
  {
  fprintf(_coverage_fout, "1321\n");
  fflush(_coverage_fout);
  }
  return (st);
}
}
int cckeychange_streams(FILE *fin , FILE *fout , char *key_in , char *key_out ) 
{ 
  reader *r ;
  reader *tmp ;
  writer *w ;
  writer *tmp___0 ;
  int st ;
  int tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1322\n");
  fflush(_coverage_fout);
  }
  tmp = new_stream_reader(fin);
  {
  fprintf(_coverage_fout, "1323\n");
  fflush(_coverage_fout);
  }
  r = tmp;
  {
  fprintf(_coverage_fout, "1324\n");
  fflush(_coverage_fout);
  }
  tmp___0 = new_stream_writer(fout);
  {
  fprintf(_coverage_fout, "1325\n");
  fflush(_coverage_fout);
  }
  w = tmp___0;
  {
  fprintf(_coverage_fout, "1326\n");
  fflush(_coverage_fout);
  }
  tmp___1 = cckeychange(r, w, key_in, key_out);
  {
  fprintf(_coverage_fout, "1327\n");
  fflush(_coverage_fout);
  }
  st = tmp___1;
  {
  fprintf(_coverage_fout, "1328\n");
  fflush(_coverage_fout);
  }
  free((void *)r);
  {
  fprintf(_coverage_fout, "1329\n");
  fflush(_coverage_fout);
  }
  free((void *)w);
  {
  fprintf(_coverage_fout, "1330\n");
  fflush(_coverage_fout);
  }
  return (st);
}
}
extern int fgetc(FILE *__stream ) ;
extern int fputc(int __c , FILE *__stream ) ;
extern  __attribute__((__nothrow__)) __off_t lseek(int __fd , __off_t __offset ,
                                                   int __whence ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd , __off_t __length ) ;
int sgetc(reader *this ) 
{ 
  stream_reader *b ;
  int *tmp ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1331\n");
  fflush(_coverage_fout);
  }
  b = (stream_reader *)this;
  {
  fprintf(_coverage_fout, "1332\n");
  fflush(_coverage_fout);
  }
  tmp = __errno_location();
  {
  fprintf(_coverage_fout, "1333\n");
  fflush(_coverage_fout);
  }
  *tmp = 0;
  {
  fprintf(_coverage_fout, "1334\n");
  fflush(_coverage_fout);
  }
  tmp___0 = fgetc(b->in);
  {
  fprintf(_coverage_fout, "1335\n");
  fflush(_coverage_fout);
  }
  return (tmp___0);
}
}
int sputc(int c , writer *this ) 
{ 
  stream_writer *b ;
  int st ;
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1336\n");
  fflush(_coverage_fout);
  }
  b = (stream_writer *)this;
  {
  fprintf(_coverage_fout, "1337\n");
  fflush(_coverage_fout);
  }
  tmp = fputc(c, b->out);
  {
  fprintf(_coverage_fout, "1338\n");
  fflush(_coverage_fout);
  }
  st = tmp;
  {
  fprintf(_coverage_fout, "1339\n");
  fflush(_coverage_fout);
  }
  if (st < 0) {
    {
    fprintf(_coverage_fout, "1340\n");
    fflush(_coverage_fout);
    }
    return (st);
  } else {
    {
    fprintf(_coverage_fout, "1341\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1342\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int seof(writer *this ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1343\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
reader *new_stream_reader(FILE *in ) 
{ 
  stream_reader *r ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1344\n");
  fflush(_coverage_fout);
  }
  tmp = xalloc(sizeof(stream_reader ), cmd.name);
  {
  fprintf(_coverage_fout, "1345\n");
  fflush(_coverage_fout);
  }
  r = (stream_reader *)tmp;
  {
  fprintf(_coverage_fout, "1346\n");
  fflush(_coverage_fout);
  }
  r->bgetc = & sgetc;
  {
  fprintf(_coverage_fout, "1347\n");
  fflush(_coverage_fout);
  }
  r->in = in;
  {
  fprintf(_coverage_fout, "1348\n");
  fflush(_coverage_fout);
  }
  return ((reader *)r);
}
}
writer *new_stream_writer(FILE *out ) 
{ 
  stream_writer *w ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1349\n");
  fflush(_coverage_fout);
  }
  tmp = xalloc(sizeof(stream_writer ), cmd.name);
  {
  fprintf(_coverage_fout, "1350\n");
  fflush(_coverage_fout);
  }
  w = (stream_writer *)tmp;
  {
  fprintf(_coverage_fout, "1351\n");
  fflush(_coverage_fout);
  }
  w->bputc = & sputc;
  {
  fprintf(_coverage_fout, "1352\n");
  fflush(_coverage_fout);
  }
  w->beof = & seof;
  {
  fprintf(_coverage_fout, "1353\n");
  fflush(_coverage_fout);
  }
  w->out = out;
  {
  fprintf(_coverage_fout, "1354\n");
  fflush(_coverage_fout);
  }
  return ((writer *)w);
}
}
int bflush(file_readwriter *b , int n ) 
{ 
  int st ;
  __off_t tmp ;
  ssize_t tmp___0 ;
  ssize_t tmp___1 ;
  __off_t tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1355\n");
  fflush(_coverage_fout);
  }
  if (n > b->size) {
    {
    fprintf(_coverage_fout, "1356\n");
    fflush(_coverage_fout);
    }
    n = b->size;
  } else {
    {
    fprintf(_coverage_fout, "1357\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1358\n");
  fflush(_coverage_fout);
  }
  tmp = lseek(b->fd, (long )(- b->p), 1);
  {
  fprintf(_coverage_fout, "1359\n");
  fflush(_coverage_fout);
  }
  st = (int )tmp;
  {
  fprintf(_coverage_fout, "1360\n");
  fflush(_coverage_fout);
  }
  if (st < 0) {
    {
    fprintf(_coverage_fout, "1361\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1362\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1363\n");
  fflush(_coverage_fout);
  }
  if (b->first + n > 1000) {
    {
    fprintf(_coverage_fout, "1364\n");
    fflush(_coverage_fout);
    }
    tmp___0 = write(b->fd, (void const   *)(& b->buffer[b->first]),
                    (unsigned long )(1000 - b->first));
    {
    fprintf(_coverage_fout, "1365\n");
    fflush(_coverage_fout);
    }
    st = (int )tmp___0;
    {
    fprintf(_coverage_fout, "1366\n");
    fflush(_coverage_fout);
    }
    if (st < 0) {
      {
      fprintf(_coverage_fout, "1367\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "1368\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1369\n");
    fflush(_coverage_fout);
    }
    b->size -= 1000 - b->first;
    {
    fprintf(_coverage_fout, "1370\n");
    fflush(_coverage_fout);
    }
    b->p -= 1000 - b->first;
    {
    fprintf(_coverage_fout, "1371\n");
    fflush(_coverage_fout);
    }
    n -= 1000 - b->first;
    {
    fprintf(_coverage_fout, "1372\n");
    fflush(_coverage_fout);
    }
    b->first = 0;
  } else {
    {
    fprintf(_coverage_fout, "1373\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1374\n");
  fflush(_coverage_fout);
  }
  tmp___1 = write(b->fd, (void const   *)(& b->buffer[b->first]),
                  (unsigned long )n);
  {
  fprintf(_coverage_fout, "1375\n");
  fflush(_coverage_fout);
  }
  st = (int )tmp___1;
  {
  fprintf(_coverage_fout, "1376\n");
  fflush(_coverage_fout);
  }
  if (st < 0) {
    {
    fprintf(_coverage_fout, "1377\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1378\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1379\n");
  fflush(_coverage_fout);
  }
  b->size -= n;
  {
  fprintf(_coverage_fout, "1380\n");
  fflush(_coverage_fout);
  }
  b->first = (b->first + n) % 1000;
  {
  fprintf(_coverage_fout, "1381\n");
  fflush(_coverage_fout);
  }
  b->p -= n;
  {
  fprintf(_coverage_fout, "1382\n");
  fflush(_coverage_fout);
  }
  n = 0;
  {
  fprintf(_coverage_fout, "1383\n");
  fflush(_coverage_fout);
  }
  tmp___2 = lseek(b->fd, (long )b->p, 1);
  {
  fprintf(_coverage_fout, "1384\n");
  fflush(_coverage_fout);
  }
  st = (int )tmp___2;
  {
  fprintf(_coverage_fout, "1385\n");
  fflush(_coverage_fout);
  }
  if (st < 0) {
    {
    fprintf(_coverage_fout, "1386\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1387\n");
    fflush(_coverage_fout);
    }
    return (0);
  }
}
}
int bgetc(reader *this ) 
{ 
  int st ;
  file_readwriter *b ;
  unsigned char c ;
  ssize_t tmp ;
  int *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1388\n");
  fflush(_coverage_fout);
  }
  b = (file_readwriter *)this;
  {
  fprintf(_coverage_fout, "1389\n");
  fflush(_coverage_fout);
  }
  if (b->insize == 0) {
    {
    fprintf(_coverage_fout, "1390\n");
    fflush(_coverage_fout);
    }
    b->innext = 0;
    {
    fprintf(_coverage_fout, "1391\n");
    fflush(_coverage_fout);
    }
    tmp = read(b->fd, (void *)(b->inbuffer), 1000UL);
    {
    fprintf(_coverage_fout, "1392\n");
    fflush(_coverage_fout);
    }
    b->insize = (int )tmp;
    {
    fprintf(_coverage_fout, "1393\n");
    fflush(_coverage_fout);
    }
    st = b->insize;
    {
    fprintf(_coverage_fout, "1394\n");
    fflush(_coverage_fout);
    }
    if (st < 0) {
      {
      fprintf(_coverage_fout, "1395\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "1396\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1397\n");
    fflush(_coverage_fout);
    }
    b->p += b->insize;
    {
    fprintf(_coverage_fout, "1398\n");
    fflush(_coverage_fout);
    }
    if (b->insize == 0) {
      {
      fprintf(_coverage_fout, "1399\n");
      fflush(_coverage_fout);
      }
      tmp___0 = __errno_location();
      {
      fprintf(_coverage_fout, "1400\n");
      fflush(_coverage_fout);
      }
      *tmp___0 = 0;
      {
      fprintf(_coverage_fout, "1401\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "1402\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1403\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1404\n");
  fflush(_coverage_fout);
  }
  c = (unsigned char )b->inbuffer[b->innext];
  {
  fprintf(_coverage_fout, "1405\n");
  fflush(_coverage_fout);
  }
  (b->innext) ++;
  {
  fprintf(_coverage_fout, "1406\n");
  fflush(_coverage_fout);
  }
  (b->insize) --;
  {
  fprintf(_coverage_fout, "1407\n");
  fflush(_coverage_fout);
  }
  return ((int )c);
}
}
int bputc(int c , writer *this ) 
{ 
  int st ;
  file_readwriter *b ;
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1408\n");
  fflush(_coverage_fout);
  }
  b = (file_readwriter *)this;
  {
  fprintf(_coverage_fout, "1409\n");
  fflush(_coverage_fout);
  }
  if (b->size >= 1000) {
    {
    fprintf(_coverage_fout, "1410\n");
    fflush(_coverage_fout);
    }
    if (b->size < b->p) {
      {
      fprintf(_coverage_fout, "1411\n");
      fflush(_coverage_fout);
      }
      tmp = b->size;
    } else {
      {
      fprintf(_coverage_fout, "1412\n");
      fflush(_coverage_fout);
      }
      tmp = b->p;
    }
    {
    fprintf(_coverage_fout, "1413\n");
    fflush(_coverage_fout);
    }
    st = bflush(b, tmp);
    {
    fprintf(_coverage_fout, "1414\n");
    fflush(_coverage_fout);
    }
    if (st < 0) {
      {
      fprintf(_coverage_fout, "1415\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "1416\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1417\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1418\n");
  fflush(_coverage_fout);
  }
  if (b->size < 1000) {
    {
    fprintf(_coverage_fout, "1419\n");
    fflush(_coverage_fout);
    }
    b->buffer[b->next] = (char )c;
    {
    fprintf(_coverage_fout, "1420\n");
    fflush(_coverage_fout);
    }
    (b->size) ++;
    {
    fprintf(_coverage_fout, "1421\n");
    fflush(_coverage_fout);
    }
    b->next = (b->next + 1) % 1000;
  } else {
    {
    fprintf(_coverage_fout, "1422\n");
    fflush(_coverage_fout);
    }
    return (1);
  }
  {
  fprintf(_coverage_fout, "1423\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int beof(writer *this ) 
{ 
  file_readwriter *b ;
  int st ;
  __off_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1424\n");
  fflush(_coverage_fout);
  }
  b = (file_readwriter *)this;
  {
  fprintf(_coverage_fout, "1425\n");
  fflush(_coverage_fout);
  }
  st = bflush(b, b->size);
  {
  fprintf(_coverage_fout, "1426\n");
  fflush(_coverage_fout);
  }
  if (st < 0) {
    {
    fprintf(_coverage_fout, "1427\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1428\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1429\n");
  fflush(_coverage_fout);
  }
  tmp = lseek(b->fd, (long )(- b->p), 1);
  {
  fprintf(_coverage_fout, "1430\n");
  fflush(_coverage_fout);
  }
  st = ftruncate(b->fd, tmp);
  {
  fprintf(_coverage_fout, "1431\n");
  fflush(_coverage_fout);
  }
  if (st < 0) {
    {
    fprintf(_coverage_fout, "1432\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1433\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1434\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
readwriter *new_file_readwriter(int fd , char *filename ) 
{ 
  file_readwriter *b ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1435\n");
  fflush(_coverage_fout);
  }
  tmp = xalloc(sizeof(file_readwriter ), cmd.name);
  {
  fprintf(_coverage_fout, "1436\n");
  fflush(_coverage_fout);
  }
  b = (file_readwriter *)tmp;
  {
  fprintf(_coverage_fout, "1437\n");
  fflush(_coverage_fout);
  }
  b->bgetc = & bgetc;
  {
  fprintf(_coverage_fout, "1438\n");
  fflush(_coverage_fout);
  }
  b->bputc = & bputc;
  {
  fprintf(_coverage_fout, "1439\n");
  fflush(_coverage_fout);
  }
  b->beof = & beof;
  {
  fprintf(_coverage_fout, "1440\n");
  fflush(_coverage_fout);
  }
  b->first = 0;
  {
  fprintf(_coverage_fout, "1441\n");
  fflush(_coverage_fout);
  }
  b->next = 0;
  {
  fprintf(_coverage_fout, "1442\n");
  fflush(_coverage_fout);
  }
  b->size = 0;
  {
  fprintf(_coverage_fout, "1443\n");
  fflush(_coverage_fout);
  }
  b->innext = 0;
  {
  fprintf(_coverage_fout, "1444\n");
  fflush(_coverage_fout);
  }
  b->insize = 0;
  {
  fprintf(_coverage_fout, "1445\n");
  fflush(_coverage_fout);
  }
  b->size = 0;
  {
  fprintf(_coverage_fout, "1446\n");
  fflush(_coverage_fout);
  }
  b->p = 0;
  {
  fprintf(_coverage_fout, "1447\n");
  fflush(_coverage_fout);
  }
  b->fd = fd;
  {
  fprintf(_coverage_fout, "1448\n");
  fflush(_coverage_fout);
  }
  b->filename = filename;
  {
  fprintf(_coverage_fout, "1449\n");
  fflush(_coverage_fout);
  }
  return ((readwriter *)b);
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memset)(void *__s ,
                                                                                     int __c ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) crypt)(char const   *__key ,
                                                                                      char const   *__salt ) ;
void unixcrypt_init(unixcrypt_state *st , char *key ) ;
int unixcrypt_char(unixcrypt_state *st , int c ) ;
int unixcrypt_file(int fd , char *filename , char *keyword ) ;
static char result[13]  ;
char *crypt_sun(char const   *key , char const   *salt ) 
{ 
  char salt1[2] ;
  char *p ;
  int tmp ;
  int tmp___1 ;
  int tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1450\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*(salt + 0) > 90) {
    {
    fprintf(_coverage_fout, "1451\n");
    fflush(_coverage_fout);
    }
    tmp___1 = (int )((int const   )*(salt + 0) - 59);
  } else {
    {
    fprintf(_coverage_fout, "1452\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(salt + 0) > 57) {
      {
      fprintf(_coverage_fout, "1453\n");
      fflush(_coverage_fout);
      }
      tmp___1 = (int )((int const   )*(salt + 0) - 53);
    } else {
      {
      fprintf(_coverage_fout, "1454\n");
      fflush(_coverage_fout);
      }
      tmp___1 = (int )((int const   )*(salt + 0) - 46);
    }
  }
  {
  fprintf(_coverage_fout, "1455\n");
  fflush(_coverage_fout);
  }
  tmp = 63 & tmp___1;
  {
  fprintf(_coverage_fout, "1456\n");
  fflush(_coverage_fout);
  }
  if (tmp >= 38) {
    {
    fprintf(_coverage_fout, "1457\n");
    fflush(_coverage_fout);
    }
    salt1[0] = (char )((tmp - 38) + 97);
  } else {
    {
    fprintf(_coverage_fout, "1458\n");
    fflush(_coverage_fout);
    }
    if (tmp >= 12) {
      {
      fprintf(_coverage_fout, "1459\n");
      fflush(_coverage_fout);
      }
      salt1[0] = (char )((tmp - 12) + 65);
    } else {
      {
      fprintf(_coverage_fout, "1460\n");
      fflush(_coverage_fout);
      }
      salt1[0] = (char )(tmp + 46);
    }
  }
  {
  fprintf(_coverage_fout, "1461\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*(salt + 1) > 90) {
    {
    fprintf(_coverage_fout, "1462\n");
    fflush(_coverage_fout);
    }
    tmp___4 = (int )((int const   )*(salt + 1) - 59);
  } else {
    {
    fprintf(_coverage_fout, "1463\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(salt + 1) > 57) {
      {
      fprintf(_coverage_fout, "1464\n");
      fflush(_coverage_fout);
      }
      tmp___4 = (int )((int const   )*(salt + 1) - 53);
    } else {
      {
      fprintf(_coverage_fout, "1465\n");
      fflush(_coverage_fout);
      }
      tmp___4 = (int )((int const   )*(salt + 1) - 46);
    }
  }
  {
  fprintf(_coverage_fout, "1466\n");
  fflush(_coverage_fout);
  }
  tmp = 63 & tmp___4;
  {
  fprintf(_coverage_fout, "1467\n");
  fflush(_coverage_fout);
  }
  if (tmp >= 38) {
    {
    fprintf(_coverage_fout, "1468\n");
    fflush(_coverage_fout);
    }
    salt1[1] = (char )((tmp - 38) + 97);
  } else {
    {
    fprintf(_coverage_fout, "1469\n");
    fflush(_coverage_fout);
    }
    if (tmp >= 12) {
      {
      fprintf(_coverage_fout, "1470\n");
      fflush(_coverage_fout);
      }
      salt1[1] = (char )((tmp - 12) + 65);
    } else {
      {
      fprintf(_coverage_fout, "1471\n");
      fflush(_coverage_fout);
      }
      salt1[1] = (char )(tmp + 46);
    }
  }
  {
  fprintf(_coverage_fout, "1472\n");
  fflush(_coverage_fout);
  }
  p = crypt(key, (char const   *)(salt1));
  {
  fprintf(_coverage_fout, "1473\n");
  fflush(_coverage_fout);
  }
  __builtin_strncpy(result, (char const   *)p, 13UL);
  {
  fprintf(_coverage_fout, "1474\n");
  fflush(_coverage_fout);
  }
  result[0] = (char )*(salt + 0);
  {
  fprintf(_coverage_fout, "1475\n");
  fflush(_coverage_fout);
  }
  result[1] = (char )*(salt + 1);
  {
  fprintf(_coverage_fout, "1476\n");
  fflush(_coverage_fout);
  }
  return (result);
}
}
void unixcrypt_init(unixcrypt_state *st , char *key ) 
{ 
  signed char buf[16] ;
  int i ;
  int j ;
  int k ;
  int acc ;
  int tmp ;
  int v ;
  char *p ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1477\n");
  fflush(_coverage_fout);
  }
  memset((void *)(buf), 0, 16UL);
  {
  fprintf(_coverage_fout, "1478\n");
  fflush(_coverage_fout);
  }
  __builtin_strncpy((char *)(buf), (char const   *)key, 8UL);
  {
  fprintf(_coverage_fout, "1479\n");
  fflush(_coverage_fout);
  }
  buf[8] = buf[0];
  {
  fprintf(_coverage_fout, "1480\n");
  fflush(_coverage_fout);
  }
  buf[9] = buf[1];
  {
  fprintf(_coverage_fout, "1481\n");
  fflush(_coverage_fout);
  }
  p = crypt_sun((char const   *)(buf), (char const   *)(& buf[8]));
  {
  fprintf(_coverage_fout, "1482\n");
  fflush(_coverage_fout);
  }
  __builtin_strncpy((char *)(buf), (char const   *)p, 13UL);
  {
  fprintf(_coverage_fout, "1483\n");
  fflush(_coverage_fout);
  }
  acc = 123;
  {
  fprintf(_coverage_fout, "1484\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1485\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1486\n");
    fflush(_coverage_fout);
    }
    if (i < 13) {
      {
      fprintf(_coverage_fout, "1487\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1488\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1489\n");
    fflush(_coverage_fout);
    }
    acc = i + acc * (int )buf[i];
    {
    fprintf(_coverage_fout, "1490\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1491\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1492\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1493\n");
    fflush(_coverage_fout);
    }
    if (i < 256) {
      {
      fprintf(_coverage_fout, "1494\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1495\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1496\n");
    fflush(_coverage_fout);
    }
    st->box1[i] = (char )i;
    {
    fprintf(_coverage_fout, "1497\n");
    fflush(_coverage_fout);
    }
    st->box2[i] = (char)0;
    {
    fprintf(_coverage_fout, "1498\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1499\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1500\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1501\n");
    fflush(_coverage_fout);
    }
    if (i < 256) {
      {
      fprintf(_coverage_fout, "1502\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1503\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1504\n");
    fflush(_coverage_fout);
    }
    acc *= 5;
    {
    fprintf(_coverage_fout, "1505\n");
    fflush(_coverage_fout);
    }
    acc += (int )buf[i % 13];
    {
    fprintf(_coverage_fout, "1506\n");
    fflush(_coverage_fout);
    }
    v = acc - 65521 * (acc / 65521);
    {
    fprintf(_coverage_fout, "1507\n");
    fflush(_coverage_fout);
    }
    j = (v & 255) % (256 - i);
    {
    fprintf(_coverage_fout, "1508\n");
    fflush(_coverage_fout);
    }
    k = 255 - i;
    {
    fprintf(_coverage_fout, "1509\n");
    fflush(_coverage_fout);
    }
    tmp = (int )st->box1[k];
    {
    fprintf(_coverage_fout, "1510\n");
    fflush(_coverage_fout);
    }
    st->box1[k] = st->box1[j];
    {
    fprintf(_coverage_fout, "1511\n");
    fflush(_coverage_fout);
    }
    st->box1[j] = (char )tmp;
    {
    fprintf(_coverage_fout, "1512\n");
    fflush(_coverage_fout);
    }
    if ((int )st->box2[k] == 0) {
      {
      fprintf(_coverage_fout, "1513\n");
      fflush(_coverage_fout);
      }
      j = ((v >> 8) & 255) % k;
      {
      fprintf(_coverage_fout, "1514\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "1515\n");
        fflush(_coverage_fout);
        }
        if ((int )st->box2[j] != 0) {
          {
          fprintf(_coverage_fout, "1516\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "1517\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "1518\n");
        fflush(_coverage_fout);
        }
        j = (j + 1) % k;
      }
      {
      fprintf(_coverage_fout, "1519\n");
      fflush(_coverage_fout);
      }
      st->box2[k] = (char )j;
      {
      fprintf(_coverage_fout, "1520\n");
      fflush(_coverage_fout);
      }
      st->box2[j] = (char )k;
    } else {
      {
      fprintf(_coverage_fout, "1521\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1522\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1523\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1524\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1525\n");
    fflush(_coverage_fout);
    }
    if (i < 256) {
      {
      fprintf(_coverage_fout, "1526\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1527\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1528\n");
    fflush(_coverage_fout);
    }
    st->box3[(int )st->box1[i] & 255] = (char )i;
    {
    fprintf(_coverage_fout, "1529\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1530\n");
  fflush(_coverage_fout);
  }
  st->k = 0;
  {
  fprintf(_coverage_fout, "1531\n");
  fflush(_coverage_fout);
  }
  st->j = st->k;
  {
  fprintf(_coverage_fout, "1532\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int unixcrypt_char(unixcrypt_state *st , int c ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1533\n");
  fflush(_coverage_fout);
  }
  c += st->k;
  {
  fprintf(_coverage_fout, "1534\n");
  fflush(_coverage_fout);
  }
  c = (int )st->box1[c & 255];
  {
  fprintf(_coverage_fout, "1535\n");
  fflush(_coverage_fout);
  }
  c += st->j;
  {
  fprintf(_coverage_fout, "1536\n");
  fflush(_coverage_fout);
  }
  c = (int )st->box2[c & 255];
  {
  fprintf(_coverage_fout, "1537\n");
  fflush(_coverage_fout);
  }
  c -= st->j;
  {
  fprintf(_coverage_fout, "1538\n");
  fflush(_coverage_fout);
  }
  c = (int )st->box3[c & 255];
  {
  fprintf(_coverage_fout, "1539\n");
  fflush(_coverage_fout);
  }
  c -= st->k;
  {
  fprintf(_coverage_fout, "1540\n");
  fflush(_coverage_fout);
  }
  (st->k) ++;
  {
  fprintf(_coverage_fout, "1541\n");
  fflush(_coverage_fout);
  }
  if (st->k == 256) {
    {
    fprintf(_coverage_fout, "1542\n");
    fflush(_coverage_fout);
    }
    (st->j) ++;
    {
    fprintf(_coverage_fout, "1543\n");
    fflush(_coverage_fout);
    }
    st->k = 0;
    {
    fprintf(_coverage_fout, "1544\n");
    fflush(_coverage_fout);
    }
    if (st->j == 256) {
      {
      fprintf(_coverage_fout, "1545\n");
      fflush(_coverage_fout);
      }
      st->j = 0;
    } else {
      {
      fprintf(_coverage_fout, "1546\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1547\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1548\n");
  fflush(_coverage_fout);
  }
  return (c);
}
}
int unixcrypt(reader *r , writer *w , char *keyword ) 
{ 
  unixcrypt_state uc_state ;
  int c ;
  int st ;
  int *tmp ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1549\n");
  fflush(_coverage_fout);
  }
  unixcrypt_init(& uc_state, keyword);
  {
  fprintf(_coverage_fout, "1550\n");
  fflush(_coverage_fout);
  }
  c = (*(r->bgetc))(r);
  {
  fprintf(_coverage_fout, "1551\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1552\n");
    fflush(_coverage_fout);
    }
    if (c != -1) {
      {
      fprintf(_coverage_fout, "1553\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1554\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1555\n");
    fflush(_coverage_fout);
    }
    c = unixcrypt_char(& uc_state, c);
    {
    fprintf(_coverage_fout, "1556\n");
    fflush(_coverage_fout);
    }
    st = (*(w->bputc))(c, w);
    {
    fprintf(_coverage_fout, "1557\n");
    fflush(_coverage_fout);
    }
    if (st < 0) {
      {
      fprintf(_coverage_fout, "1558\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "1559\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1560\n");
    fflush(_coverage_fout);
    }
    c = (*(r->bgetc))(r);
  }
  {
  fprintf(_coverage_fout, "1561\n");
  fflush(_coverage_fout);
  }
  tmp = __errno_location();
  {
  fprintf(_coverage_fout, "1562\n");
  fflush(_coverage_fout);
  }
  if (*tmp) {
    {
    fprintf(_coverage_fout, "1563\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1564\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1565\n");
  fflush(_coverage_fout);
  }
  tmp___0 = (*(w->beof))(w);
  {
  fprintf(_coverage_fout, "1566\n");
  fflush(_coverage_fout);
  }
  return (tmp___0);
}
}
int unixcrypt_file(int fd , char *filename , char *keyword ) 
{ 
  readwriter *rw ;
  readwriter *tmp ;
  reader *r ;
  writer *w ;
  int st ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1567\n");
  fflush(_coverage_fout);
  }
  tmp = new_file_readwriter(fd, filename);
  {
  fprintf(_coverage_fout, "1568\n");
  fflush(_coverage_fout);
  }
  rw = tmp;
  {
  fprintf(_coverage_fout, "1569\n");
  fflush(_coverage_fout);
  }
  r = (reader *)rw;
  {
  fprintf(_coverage_fout, "1570\n");
  fflush(_coverage_fout);
  }
  w = (writer *)rw;
  {
  fprintf(_coverage_fout, "1571\n");
  fflush(_coverage_fout);
  }
  tmp___0 = unixcrypt(r, w, keyword);
  {
  fprintf(_coverage_fout, "1572\n");
  fflush(_coverage_fout);
  }
  st = tmp___0;
  {
  fprintf(_coverage_fout, "1573\n");
  fflush(_coverage_fout);
  }
  free((void *)rw);
  {
  fprintf(_coverage_fout, "1574\n");
  fflush(_coverage_fout);
  }
  return (st);
}
}
int unixcrypt_streams(FILE *fin , FILE *fout , char *keyword ) 
{ 
  reader *r ;
  reader *tmp ;
  writer *w ;
  writer *tmp___0 ;
  int st ;
  int tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1575\n");
  fflush(_coverage_fout);
  }
  tmp = new_stream_reader(fin);
  {
  fprintf(_coverage_fout, "1576\n");
  fflush(_coverage_fout);
  }
  r = tmp;
  {
  fprintf(_coverage_fout, "1577\n");
  fflush(_coverage_fout);
  }
  tmp___0 = new_stream_writer(fout);
  {
  fprintf(_coverage_fout, "1578\n");
  fflush(_coverage_fout);
  }
  w = tmp___0;
  {
  fprintf(_coverage_fout, "1579\n");
  fflush(_coverage_fout);
  }
  tmp___1 = unixcrypt(r, w, keyword);
  {
  fprintf(_coverage_fout, "1580\n");
  fflush(_coverage_fout);
  }
  st = tmp___1;
  {
  fprintf(_coverage_fout, "1581\n");
  fflush(_coverage_fout);
  }
  free((void *)r);
  {
  fprintf(_coverage_fout, "1582\n");
  fflush(_coverage_fout);
  }
  free((void *)w);
  {
  fprintf(_coverage_fout, "1583\n");
  fflush(_coverage_fout);
  }
  return (st);
}
}
word8 M0b[4][256][4] ;
word32 (*M0)[256] ;
word8 M1b[4][256][4] ;
word32 (*M1)[256] ;
word8 xrcon[30] ;
word8 xS[256] ;
word8 xSi[256] ;
static int xshifts[3][2][4]  = { { {          0,          1,          2,          3}, 
     {          0,          3,          2,          1}}, 
   { {          0,          1,          2,          3}, 
     {          0,          5,          4,          3}}, 
   { {          0,          1,          3,          4}, 
     {          0,          7,          5,          4}}};
void xKeyAddition(word8 (*res)[4] , word8 (*a)[4] , word32 *rk , word8 BC ) 
{ 
  int j ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1584\n");
  fflush(_coverage_fout);
  }
  j = 0;
  {
  fprintf(_coverage_fout, "1585\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1586\n");
    fflush(_coverage_fout);
    }
    if (j < (int )BC) {
      {
      fprintf(_coverage_fout, "1587\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1588\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1589\n");
    fflush(_coverage_fout);
    }
    *((word32 *)(*(res + j))) = *((word32 *)(*(a + j))) ^ *(rk + j);
    {
    fprintf(_coverage_fout, "1590\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "1591\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void xShiftRow(word8 (*res)[4] , word8 (*a)[4] , int *shift , word8 BC ) 
{ 
  int i ;
  int j ;
  int s ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1592\n");
  fflush(_coverage_fout);
  }
  j = 0;
  {
  fprintf(_coverage_fout, "1593\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1594\n");
    fflush(_coverage_fout);
    }
    if (j < (int )BC) {
      {
      fprintf(_coverage_fout, "1595\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1596\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1597\n");
    fflush(_coverage_fout);
    }
    (*(res + j))[0] = (*(a + j))[0];
    {
    fprintf(_coverage_fout, "1598\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "1599\n");
  fflush(_coverage_fout);
  }
  i = 1;
  {
  fprintf(_coverage_fout, "1600\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1601\n");
    fflush(_coverage_fout);
    }
    if (i < 4) {
      {
      fprintf(_coverage_fout, "1602\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1603\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1604\n");
    fflush(_coverage_fout);
    }
    s = *(shift + i);
    {
    fprintf(_coverage_fout, "1605\n");
    fflush(_coverage_fout);
    }
    j = 0;
    {
    fprintf(_coverage_fout, "1606\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1607\n");
      fflush(_coverage_fout);
      }
      if (j < (int )BC) {
        {
        fprintf(_coverage_fout, "1608\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "1609\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1610\n");
      fflush(_coverage_fout);
      }
      (*(res + j))[i] = (*(a + (j + s) % (int )BC))[i];
      {
      fprintf(_coverage_fout, "1611\n");
      fflush(_coverage_fout);
      }
      j ++;
    }
    {
    fprintf(_coverage_fout, "1612\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1613\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void xSubstitution(word8 (*a)[4] , word8 *box , word8 BC ) 
{ 
  int i ;
  int j ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1614\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1615\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1616\n");
    fflush(_coverage_fout);
    }
    if (i < 4) {
      {
      fprintf(_coverage_fout, "1617\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1618\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1619\n");
    fflush(_coverage_fout);
    }
    j = 0;
    {
    fprintf(_coverage_fout, "1620\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1621\n");
      fflush(_coverage_fout);
      }
      if (j < (int )BC) {
        {
        fprintf(_coverage_fout, "1622\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "1623\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1624\n");
      fflush(_coverage_fout);
      }
      (*(a + j))[i] = *(box + (int )(*(a + j))[i]);
      {
      fprintf(_coverage_fout, "1625\n");
      fflush(_coverage_fout);
      }
      j ++;
    }
    {
    fprintf(_coverage_fout, "1626\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1627\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void xShiftSubst(word8 (*res)[4] , word8 (*a)[4] , int *shift , word8 BC ,
                 word8 *box ) 
{ 
  int i ;
  int j ;
  int s ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1628\n");
  fflush(_coverage_fout);
  }
  j = 0;
  {
  fprintf(_coverage_fout, "1629\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1630\n");
    fflush(_coverage_fout);
    }
    if (j < (int )BC) {
      {
      fprintf(_coverage_fout, "1631\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1632\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1633\n");
    fflush(_coverage_fout);
    }
    (*(res + j))[0] = *(box + (int )(*(a + j))[0]);
    {
    fprintf(_coverage_fout, "1634\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "1635\n");
  fflush(_coverage_fout);
  }
  i = 1;
  {
  fprintf(_coverage_fout, "1636\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1637\n");
    fflush(_coverage_fout);
    }
    if (i < 4) {
      {
      fprintf(_coverage_fout, "1638\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1639\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1640\n");
    fflush(_coverage_fout);
    }
    s = *(shift + i);
    {
    fprintf(_coverage_fout, "1641\n");
    fflush(_coverage_fout);
    }
    j = 0;
    {
    fprintf(_coverage_fout, "1642\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1643\n");
      fflush(_coverage_fout);
      }
      if (j < (int )BC - s) {
        {
        fprintf(_coverage_fout, "1644\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "1645\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1646\n");
      fflush(_coverage_fout);
      }
      (*(res + j))[i] = *(box + (int )(*(a + (j + s)))[i]);
      {
      fprintf(_coverage_fout, "1647\n");
      fflush(_coverage_fout);
      }
      j ++;
    }
    {
    fprintf(_coverage_fout, "1648\n");
    fflush(_coverage_fout);
    }
    j = (int )BC - s;
    {
    fprintf(_coverage_fout, "1649\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1650\n");
      fflush(_coverage_fout);
      }
      if (j < (int )BC) {
        {
        fprintf(_coverage_fout, "1651\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "1652\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1653\n");
      fflush(_coverage_fout);
      }
      (*(res + j))[i] = *(box + (int )(*(a + ((j + s) - (int )BC)))[i]);
      {
      fprintf(_coverage_fout, "1654\n");
      fflush(_coverage_fout);
      }
      j ++;
    }
    {
    fprintf(_coverage_fout, "1655\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1656\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void xMixColumn(word8 (*res)[4] , word8 (*a)[4] , word8 BC ) 
{ 
  int j ;
  word32 b ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1657\n");
  fflush(_coverage_fout);
  }
  j = 0;
  {
  fprintf(_coverage_fout, "1658\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1659\n");
    fflush(_coverage_fout);
    }
    if (j < (int )BC) {
      {
      fprintf(_coverage_fout, "1660\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1661\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1662\n");
    fflush(_coverage_fout);
    }
    b = (*(M0 + 0))[(*(a + j))[0]];
    {
    fprintf(_coverage_fout, "1663\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M0 + 1))[(*(a + j))[1]];
    {
    fprintf(_coverage_fout, "1664\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M0 + 2))[(*(a + j))[2]];
    {
    fprintf(_coverage_fout, "1665\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M0 + 3))[(*(a + j))[3]];
    {
    fprintf(_coverage_fout, "1666\n");
    fflush(_coverage_fout);
    }
    *((word32 *)(*(res + j))) = b;
    {
    fprintf(_coverage_fout, "1667\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "1668\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void xMixAdd(word8 (*res)[4] , word8 (*a)[4] , word32 *rk , word8 BC ) 
{ 
  int j ;
  word32 b ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1669\n");
  fflush(_coverage_fout);
  }
  j = 0;
  {
  fprintf(_coverage_fout, "1670\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1671\n");
    fflush(_coverage_fout);
    }
    if (j < (int )BC) {
      {
      fprintf(_coverage_fout, "1672\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1673\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1674\n");
    fflush(_coverage_fout);
    }
    b = (*(M0 + 0))[(*(a + j))[0]];
    {
    fprintf(_coverage_fout, "1675\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M0 + 1))[(*(a + j))[1]];
    {
    fprintf(_coverage_fout, "1676\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M0 + 2))[(*(a + j))[2]];
    {
    fprintf(_coverage_fout, "1677\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M0 + 3))[(*(a + j))[3]];
    {
    fprintf(_coverage_fout, "1678\n");
    fflush(_coverage_fout);
    }
    b ^= *(rk + j);
    {
    fprintf(_coverage_fout, "1679\n");
    fflush(_coverage_fout);
    }
    *((word32 *)(*(res + j))) = b;
    {
    fprintf(_coverage_fout, "1680\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "1681\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void xInvMixColumn(word8 (*res)[4] , word8 (*a)[4] , word8 BC ) 
{ 
  int j ;
  word32 b ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1682\n");
  fflush(_coverage_fout);
  }
  j = 0;
  {
  fprintf(_coverage_fout, "1683\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1684\n");
    fflush(_coverage_fout);
    }
    if (j < (int )BC) {
      {
      fprintf(_coverage_fout, "1685\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1686\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1687\n");
    fflush(_coverage_fout);
    }
    b = (*(M1 + 0))[(*(a + j))[0]];
    {
    fprintf(_coverage_fout, "1688\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M1 + 1))[(*(a + j))[1]];
    {
    fprintf(_coverage_fout, "1689\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M1 + 2))[(*(a + j))[2]];
    {
    fprintf(_coverage_fout, "1690\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M1 + 3))[(*(a + j))[3]];
    {
    fprintf(_coverage_fout, "1691\n");
    fflush(_coverage_fout);
    }
    *((word32 *)(*(res + j))) = b;
    {
    fprintf(_coverage_fout, "1692\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "1693\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void xAddInvMix(word8 (*res)[4] , word8 (*a)[4] , word32 *rk , word8 BC ) 
{ 
  int j ;
  word32 b ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1694\n");
  fflush(_coverage_fout);
  }
  j = 0;
  {
  fprintf(_coverage_fout, "1695\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1696\n");
    fflush(_coverage_fout);
    }
    if (j < (int )BC) {
      {
      fprintf(_coverage_fout, "1697\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1698\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1699\n");
    fflush(_coverage_fout);
    }
    *((word32 *)(*(a + j))) ^= *(rk + j);
    {
    fprintf(_coverage_fout, "1700\n");
    fflush(_coverage_fout);
    }
    b = (*(M1 + 0))[(*(a + j))[0]];
    {
    fprintf(_coverage_fout, "1701\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M1 + 1))[(*(a + j))[1]];
    {
    fprintf(_coverage_fout, "1702\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M1 + 2))[(*(a + j))[2]];
    {
    fprintf(_coverage_fout, "1703\n");
    fflush(_coverage_fout);
    }
    b ^= (*(M1 + 3))[(*(a + j))[3]];
    {
    fprintf(_coverage_fout, "1704\n");
    fflush(_coverage_fout);
    }
    *((word32 *)(*(res + j))) = b;
    {
    fprintf(_coverage_fout, "1705\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "1706\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int xrijndaelKeySched(word32 *key , int keyBits , int blockBits , roundkey *rkk ) 
{ 
  int KC ;
  int BC ;
  int ROUNDS ;
  int i ;
  int j ;
  int t ;
  int rconpointer ;
  word8 (*k)[4] ;
  word32 *k32 ;
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1707\n");
  fflush(_coverage_fout);
  }
  rconpointer = 0;
  {
  fprintf(_coverage_fout, "1708\n");
  fflush(_coverage_fout);
  }
  k = (word8 (*)[4])key;
  {
  fprintf(_coverage_fout, "1709\n");
  fflush(_coverage_fout);
  }
  k32 = key;
  {
  fprintf(_coverage_fout, "1710\n");
  fflush(_coverage_fout);
  }
  switch (keyBits) {
  {
  fprintf(_coverage_fout, "1711\n");
  fflush(_coverage_fout);
  }
  case 128: 
  KC = 4;
  {
  fprintf(_coverage_fout, "1712\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "1713\n");
  fflush(_coverage_fout);
  }
  case 192: 
  KC = 6;
  {
  fprintf(_coverage_fout, "1714\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "1715\n");
  fflush(_coverage_fout);
  }
  case 256: 
  KC = 8;
  {
  fprintf(_coverage_fout, "1716\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "1717\n");
  fflush(_coverage_fout);
  }
  default: ;
  {
  fprintf(_coverage_fout, "1718\n");
  fflush(_coverage_fout);
  }
  return (-1);
  }
  {
  fprintf(_coverage_fout, "1719\n");
  fflush(_coverage_fout);
  }
  switch (blockBits) {
  {
  fprintf(_coverage_fout, "1720\n");
  fflush(_coverage_fout);
  }
  case 128: 
  BC = 4;
  {
  fprintf(_coverage_fout, "1721\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "1722\n");
  fflush(_coverage_fout);
  }
  case 192: 
  BC = 6;
  {
  fprintf(_coverage_fout, "1723\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "1724\n");
  fflush(_coverage_fout);
  }
  case 256: 
  BC = 8;
  {
  fprintf(_coverage_fout, "1725\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "1726\n");
  fflush(_coverage_fout);
  }
  default: ;
  {
  fprintf(_coverage_fout, "1727\n");
  fflush(_coverage_fout);
  }
  return (-2);
  }
  {
  fprintf(_coverage_fout, "1728\n");
  fflush(_coverage_fout);
  }
  if (KC > BC) {
    {
    fprintf(_coverage_fout, "1729\n");
    fflush(_coverage_fout);
    }
    ROUNDS = KC + 6;
  } else {
    {
    fprintf(_coverage_fout, "1730\n");
    fflush(_coverage_fout);
    }
    ROUNDS = BC + 6;
  }
  {
  fprintf(_coverage_fout, "1731\n");
  fflush(_coverage_fout);
  }
  t = 0;
  {
  fprintf(_coverage_fout, "1732\n");
  fflush(_coverage_fout);
  }
  j = 0;
  {
  fprintf(_coverage_fout, "1733\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1734\n");
    fflush(_coverage_fout);
    }
    if (j < KC) {
      {
      fprintf(_coverage_fout, "1735\n");
      fflush(_coverage_fout);
      }
      if (! (t < (ROUNDS + 1) * BC)) {
        {
        fprintf(_coverage_fout, "1736\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "1737\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "1738\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1739\n");
    fflush(_coverage_fout);
    }
    rkk->rk[t] = *(k32 + j);
    {
    fprintf(_coverage_fout, "1740\n");
    fflush(_coverage_fout);
    }
    j ++;
    {
    fprintf(_coverage_fout, "1741\n");
    fflush(_coverage_fout);
    }
    t ++;
  }
  {
  fprintf(_coverage_fout, "1742\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1743\n");
    fflush(_coverage_fout);
    }
    if (t < (ROUNDS + 1) * BC) {
      {
      fprintf(_coverage_fout, "1744\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1745\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1746\n");
    fflush(_coverage_fout);
    }
    i = 0;
    {
    fprintf(_coverage_fout, "1747\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1748\n");
      fflush(_coverage_fout);
      }
      if (i < 4) {
        {
        fprintf(_coverage_fout, "1749\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "1750\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1751\n");
      fflush(_coverage_fout);
      }
      (*(k + 0))[i] = (unsigned char )((int )(*(k + 0))[i] ^ (int )xS[(*(k + (KC - 1)))[(i + 1) % 4]]);
      {
      fprintf(_coverage_fout, "1752\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
    {
    fprintf(_coverage_fout, "1753\n");
    fflush(_coverage_fout);
    }
    tmp = rconpointer;
    {
    fprintf(_coverage_fout, "1754\n");
    fflush(_coverage_fout);
    }
    rconpointer ++;
    {
    fprintf(_coverage_fout, "1755\n");
    fflush(_coverage_fout);
    }
    (*(k + 0))[0] = (unsigned char )((int )(*(k + 0))[0] ^ (int )xrcon[tmp]);
    {
    fprintf(_coverage_fout, "1756\n");
    fflush(_coverage_fout);
    }
    if (KC != 8) {
      {
      fprintf(_coverage_fout, "1757\n");
      fflush(_coverage_fout);
      }
      j = 1;
      {
      fprintf(_coverage_fout, "1758\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "1759\n");
        fflush(_coverage_fout);
        }
        if (j < KC) {
          {
          fprintf(_coverage_fout, "1760\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "1761\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "1762\n");
        fflush(_coverage_fout);
        }
        *(k32 + j) ^= *(k32 + (j - 1));
        {
        fprintf(_coverage_fout, "1763\n");
        fflush(_coverage_fout);
        }
        j ++;
      }
    } else {
      {
      fprintf(_coverage_fout, "1764\n");
      fflush(_coverage_fout);
      }
      j = 1;
      {
      fprintf(_coverage_fout, "1765\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "1766\n");
        fflush(_coverage_fout);
        }
        if (j < 4) {
          {
          fprintf(_coverage_fout, "1767\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "1768\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "1769\n");
        fflush(_coverage_fout);
        }
        *(k32 + j) ^= *(k32 + (j - 1));
        {
        fprintf(_coverage_fout, "1770\n");
        fflush(_coverage_fout);
        }
        j ++;
      }
      {
      fprintf(_coverage_fout, "1771\n");
      fflush(_coverage_fout);
      }
      i = 0;
      {
      fprintf(_coverage_fout, "1772\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "1773\n");
        fflush(_coverage_fout);
        }
        if (i < 4) {
          {
          fprintf(_coverage_fout, "1774\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "1775\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "1776\n");
        fflush(_coverage_fout);
        }
        (*(k + 4))[i] = (unsigned char )((int )(*(k + 4))[i] ^ (int )xS[(*(k + 3))[i]]);
        {
        fprintf(_coverage_fout, "1777\n");
        fflush(_coverage_fout);
        }
        i ++;
      }
      {
      fprintf(_coverage_fout, "1778\n");
      fflush(_coverage_fout);
      }
      j = 5;
      {
      fprintf(_coverage_fout, "1779\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "1780\n");
        fflush(_coverage_fout);
        }
        if (j < 8) {
          {
          fprintf(_coverage_fout, "1781\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "1782\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "1783\n");
        fflush(_coverage_fout);
        }
        *(k32 + j) ^= *(k32 + (j - 1));
        {
        fprintf(_coverage_fout, "1784\n");
        fflush(_coverage_fout);
        }
        j ++;
      }
    }
    {
    fprintf(_coverage_fout, "1785\n");
    fflush(_coverage_fout);
    }
    j = 0;
    {
    fprintf(_coverage_fout, "1786\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1787\n");
      fflush(_coverage_fout);
      }
      if (j < KC) {
        {
        fprintf(_coverage_fout, "1788\n");
        fflush(_coverage_fout);
        }
        if (! (t < (ROUNDS + 1) * BC)) {
          {
          fprintf(_coverage_fout, "1789\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "1790\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "1791\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1792\n");
      fflush(_coverage_fout);
      }
      rkk->rk[t] = *(k32 + j);
      {
      fprintf(_coverage_fout, "1793\n");
      fflush(_coverage_fout);
      }
      j ++;
      {
      fprintf(_coverage_fout, "1794\n");
      fflush(_coverage_fout);
      }
      t ++;
    }
  }
  {
  fprintf(_coverage_fout, "1795\n");
  fflush(_coverage_fout);
  }
  rkk->BC = BC;
  {
  fprintf(_coverage_fout, "1796\n");
  fflush(_coverage_fout);
  }
  rkk->KC = KC;
  {
  fprintf(_coverage_fout, "1797\n");
  fflush(_coverage_fout);
  }
  rkk->ROUNDS = ROUNDS;
  {
  fprintf(_coverage_fout, "1798\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "1799\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1800\n");
    fflush(_coverage_fout);
    }
    if (i < 2) {
      {
      fprintf(_coverage_fout, "1801\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1802\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1803\n");
    fflush(_coverage_fout);
    }
    j = 0;
    {
    fprintf(_coverage_fout, "1804\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1805\n");
      fflush(_coverage_fout);
      }
      if (j < 4) {
        {
        fprintf(_coverage_fout, "1806\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "1807\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1808\n");
      fflush(_coverage_fout);
      }
      rkk->shift[i][j] = xshifts[(BC - 4) >> 1][i][j];
      {
      fprintf(_coverage_fout, "1809\n");
      fflush(_coverage_fout);
      }
      j ++;
    }
    {
    fprintf(_coverage_fout, "1810\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1811\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
void xrijndaelEncrypt(word32 *block , roundkey *rkk ) 
{ 
  word8 (*a)[4] ;
  word8 a2[8][4] ;
  int r ;
  int *shift ;
  int BC ;
  int ROUNDS ;
  word32 *rp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1812\n");
  fflush(_coverage_fout);
  }
  a = (word8 (*)[4])block;
  {
  fprintf(_coverage_fout, "1813\n");
  fflush(_coverage_fout);
  }
  shift = rkk->shift[0];
  {
  fprintf(_coverage_fout, "1814\n");
  fflush(_coverage_fout);
  }
  BC = rkk->BC;
  {
  fprintf(_coverage_fout, "1815\n");
  fflush(_coverage_fout);
  }
  ROUNDS = rkk->ROUNDS;
  {
  fprintf(_coverage_fout, "1816\n");
  fflush(_coverage_fout);
  }
  rp = rkk->rk;
  {
  fprintf(_coverage_fout, "1817\n");
  fflush(_coverage_fout);
  }
  xKeyAddition(a, a, rp, (unsigned char )BC);
  {
  fprintf(_coverage_fout, "1818\n");
  fflush(_coverage_fout);
  }
  rp += BC;
  {
  fprintf(_coverage_fout, "1819\n");
  fflush(_coverage_fout);
  }
  r = 1;
  {
  fprintf(_coverage_fout, "1820\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1821\n");
    fflush(_coverage_fout);
    }
    if (r < ROUNDS) {
      {
      fprintf(_coverage_fout, "1822\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1823\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1824\n");
    fflush(_coverage_fout);
    }
    xShiftSubst(a2, a, shift, (unsigned char )BC, xS);
    {
    fprintf(_coverage_fout, "1825\n");
    fflush(_coverage_fout);
    }
    xMixAdd(a, a2, rp, (unsigned char )BC);
    {
    fprintf(_coverage_fout, "1826\n");
    fflush(_coverage_fout);
    }
    rp += BC;
    {
    fprintf(_coverage_fout, "1827\n");
    fflush(_coverage_fout);
    }
    r ++;
  }
  {
  fprintf(_coverage_fout, "1828\n");
  fflush(_coverage_fout);
  }
  xShiftSubst(a2, a, shift, (unsigned char )BC, xS);
  {
  fprintf(_coverage_fout, "1829\n");
  fflush(_coverage_fout);
  }
  xKeyAddition(a, a2, rp, (unsigned char )BC);
  {
  fprintf(_coverage_fout, "1830\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void xrijndaelDecrypt(word32 *block , roundkey *rkk ) 
{ 
  word8 (*a)[4] ;
  word8 a2[8][4] ;
  int r ;
  int *shift ;
  int BC ;
  int ROUNDS ;
  word32 *rp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/ccrypt/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1831\n");
  fflush(_coverage_fout);
  }
  a = (word8 (*)[4])block;
  {
  fprintf(_coverage_fout, "1832\n");
  fflush(_coverage_fout);
  }
  shift = rkk->shift[1];
  {
  fprintf(_coverage_fout, "1833\n");
  fflush(_coverage_fout);
  }
  BC = rkk->BC;
  {
  fprintf(_coverage_fout, "1834\n");
  fflush(_coverage_fout);
  }
  ROUNDS = rkk->ROUNDS;
  {
  fprintf(_coverage_fout, "1835\n");
  fflush(_coverage_fout);
  }
  rp = rkk->rk + ROUNDS * BC;
  {
  fprintf(_coverage_fout, "1836\n");
  fflush(_coverage_fout);
  }
  xKeyAddition(a2, a, rp, (unsigned char )BC);
  {
  fprintf(_coverage_fout, "1837\n");
  fflush(_coverage_fout);
  }
  xShiftSubst(a, a2, shift, (unsigned char )BC, xSi);
  {
  fprintf(_coverage_fout, "1838\n");
  fflush(_coverage_fout);
  }
  rp -= BC;
  {
  fprintf(_coverage_fout, "1839\n");
  fflush(_coverage_fout);
  }
  r = ROUNDS - 1;
  {
  fprintf(_coverage_fout, "1840\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1841\n");
    fflush(_coverage_fout);
    }
    if (r > 0) {
      {
      fprintf(_coverage_fout, "1842\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1843\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1844\n");
    fflush(_coverage_fout);
    }
    xKeyAddition(a, a, rp, (unsigned char )BC);
    {
    fprintf(_coverage_fout, "1845\n");
    fflush(_coverage_fout);
    }
    xInvMixColumn(a2, a, (unsigned char )BC);
    {
    fprintf(_coverage_fout, "1846\n");
    fflush(_coverage_fout);
    }
    xShiftSubst(a, a2, shift, (unsigned char )BC, xSi);
    {
    fprintf(_coverage_fout, "1847\n");
    fflush(_coverage_fout);
    }
    rp -= BC;
    {
    fprintf(_coverage_fout, "1848\n");
    fflush(_coverage_fout);
    }
    r --;
  }
  {
  fprintf(_coverage_fout, "1849\n");
  fflush(_coverage_fout);
  }
  xKeyAddition(a, a, rp, (unsigned char )BC);
  {
  fprintf(_coverage_fout, "1850\n");
  fflush(_coverage_fout);
  }
  return;
}
}
word8 xLogtable[256] ;
word8 xAlogtable[256] ;
word8 L[256] ;
word8 M0b[4][256][4]  = { { {          (word8 )0,          (word8 )0,          (word8 )0,          (word8 )0}, 
     {          (word8 )2,          (word8 )1,          (word8 )1,          (word8 )3}, 
     {          (word8 )4,          (word8 )2,          (word8 )2,          (word8 )6}, 
     {          (word8 )6,          (word8 )3,          (word8 )3,          (word8 )5}, 
     {          (word8 )8,          (word8 )4,          (word8 )4,          (word8 )12}, 
     {          (word8 )10,          (word8 )5,          (word8 )5,          (word8 )15}, 
     {          (word8 )12,          (word8 )6,          (word8 )6,          (word8 )10}, 
     {          (word8 )14,          (word8 )7,          (word8 )7,          (word8 )9}, 
     {          (word8 )16,          (word8 )8,          (word8 )8,          (word8 )24}, 
     {          (word8 )18,          (word8 )9,          (word8 )9,          (word8 )27}, 
     {          (word8 )20,          (word8 )10,          (word8 )10,          (word8 )30}, 
     {          (word8 )22,          (word8 )11,          (word8 )11,          (word8 )29}, 
     {          (word8 )24,          (word8 )12,          (word8 )12,          (word8 )20}, 
     {          (word8 )26,          (word8 )13,          (word8 )13,          (word8 )23}, 
     {          (word8 )28,          (word8 )14,          (word8 )14,          (word8 )18}, 
     {          (word8 )30,          (word8 )15,          (word8 )15,          (word8 )17}, 
     {          (word8 )32,          (word8 )16,          (word8 )16,          (word8 )48}, 
     {          (word8 )34,          (word8 )17,          (word8 )17,          (word8 )51}, 
     {          (word8 )36,          (word8 )18,          (word8 )18,          (word8 )54}, 
     {          (word8 )38,          (word8 )19,          (word8 )19,          (word8 )53}, 
     {          (word8 )40,          (word8 )20,          (word8 )20,          (word8 )60}, 
     {          (word8 )42,          (word8 )21,          (word8 )21,          (word8 )63}, 
     {          (word8 )44,          (word8 )22,          (word8 )22,          (word8 )58}, 
     {          (word8 )46,          (word8 )23,          (word8 )23,          (word8 )57}, 
     {          (word8 )48,          (word8 )24,          (word8 )24,          (word8 )40}, 
     {          (word8 )50,          (word8 )25,          (word8 )25,          (word8 )43}, 
     {          (word8 )52,          (word8 )26,          (word8 )26,          (word8 )46}, 
     {          (word8 )54,          (word8 )27,          (word8 )27,          (word8 )45}, 
     {          (word8 )56,          (word8 )28,          (word8 )28,          (word8 )36}, 
     {          (word8 )58,          (word8 )29,          (word8 )29,          (word8 )39}, 
     {          (word8 )60,          (word8 )30,          (word8 )30,          (word8 )34}, 
     {          (word8 )62,          (word8 )31,          (word8 )31,          (word8 )33}, 
     {          (word8 )64,          (word8 )32,          (word8 )32,          (word8 )96}, 
     {          (word8 )66,          (word8 )33,          (word8 )33,          (word8 )99}, 
     {          (word8 )68,          (word8 )34,          (word8 )34,          (word8 )102}, 
     {          (word8 )70,          (word8 )35,          (word8 )35,          (word8 )101}, 
     {          (word8 )72,          (word8 )36,          (word8 )36,          (word8 )108}, 
     {          (word8 )74,          (word8 )37,          (word8 )37,          (word8 )111}, 
     {          (word8 )76,          (word8 )38,          (word8 )38,          (word8 )106}, 
     {          (word8 )78,          (word8 )39,          (word8 )39,          (word8 )105}, 
     {          (word8 )80,          (word8 )40,          (word8 )40,          (word8 )120}, 
     {          (word8 )82,          (word8 )41,          (word8 )41,          (word8 )123}, 
     {          (word8 )84,          (word8 )42,          (word8 )42,          (word8 )126}, 
     {          (word8 )86,          (word8 )43,          (word8 )43,          (word8 )125}, 
     {          (word8 )88,          (word8 )44,          (word8 )44,          (word8 )116}, 
     {          (word8 )90,          (word8 )45,          (word8 )45,          (word8 )119}, 
     {          (word8 )92,          (word8 )46,          (word8 )46,          (word8 )114}, 
     {          (word8 )94,          (word8 )47,          (word8 )47,          (word8 )113}, 
     {          (word8 )96,          (word8 )48,          (word8 )48,          (word8 )80}, 
     {          (word8 )98,          (word8 )49,          (word8 )49,          (word8 )83}, 
     {          (word8 )100,          (word8 )50,          (word8 )50,          (word8 )86}, 
     {          (word8 )102,          (word8 )51,          (word8 )51,          (word8 )85}, 
     {          (word8 )104,          (word8 )52,          (word8 )52,          (word8 )92}, 
     {          (word8 )106,          (word8 )53,          (word8 )53,          (word8 )95}, 
     {          (word8 )108,          (word8 )54,          (word8 )54,          (word8 )90}, 
     {          (word8 )110,          (word8 )55,          (word8 )55,          (word8 )89}, 
     {          (word8 )112,          (word8 )56,          (word8 )56,          (word8 )72}, 
     {          (word8 )114,          (word8 )57,          (word8 )57,          (word8 )75}, 
     {          (word8 )116,          (word8 )58,          (word8 )58,          (word8 )78}, 
     {          (word8 )118,          (word8 )59,          (word8 )59,          (word8 )77}, 
     {          (word8 )120,          (word8 )60,          (word8 )60,          (word8 )68}, 
     {          (word8 )122,          (word8 )61,          (word8 )61,          (word8 )71}, 
     {          (word8 )124,          (word8 )62,          (word8 )62,          (word8 )66}, 
     {          (word8 )126,          (word8 )63,          (word8 )63,          (word8 )65}, 
     {          (word8 )128,          (word8 )64,          (word8 )64,          (word8 )192}, 
     {          (word8 )130,          (word8 )65,          (word8 )65,          (word8 )195}, 
     {          (word8 )132,          (word8 )66,          (word8 )66,          (word8 )198}, 
     {          (word8 )134,          (word8 )67,          (word8 )67,          (word8 )197}, 
     {          (word8 )136,          (word8 )68,          (word8 )68,          (word8 )204}, 
     {          (word8 )138,          (word8 )69,          (word8 )69,          (word8 )207}, 
     {          (word8 )140,          (word8 )70,          (word8 )70,          (word8 )202}, 
     {          (word8 )142,          (word8 )71,          (word8 )71,          (word8 )201}, 
     {          (word8 )144,          (word8 )72,          (word8 )72,          (word8 )216}, 
     {          (word8 )146,          (word8 )73,          (word8 )73,          (word8 )219}, 
     {          (word8 )148,          (word8 )74,          (word8 )74,          (word8 )222}, 
     {          (word8 )150,          (word8 )75,          (word8 )75,          (word8 )221}, 
     {          (word8 )152,          (word8 )76,          (word8 )76,          (word8 )212}, 
     {          (word8 )154,          (word8 )77,          (word8 )77,          (word8 )215}, 
     {          (word8 )156,          (word8 )78,          (word8 )78,          (word8 )210}, 
     {          (word8 )158,          (word8 )79,          (word8 )79,          (word8 )209}, 
     {          (word8 )160,          (word8 )80,          (word8 )80,          (word8 )240}, 
     {          (word8 )162,          (word8 )81,          (word8 )81,          (word8 )243}, 
     {          (word8 )164,          (word8 )82,          (word8 )82,          (word8 )246}, 
     {          (word8 )166,          (word8 )83,          (word8 )83,          (word8 )245}, 
     {          (word8 )168,          (word8 )84,          (word8 )84,          (word8 )252}, 
     {          (word8 )170,          (word8 )85,          (word8 )85,          (word8 )255}, 
     {          (word8 )172,          (word8 )86,          (word8 )86,          (word8 )250}, 
     {          (word8 )174,          (word8 )87,          (word8 )87,          (word8 )249}, 
     {          (word8 )176,          (word8 )88,          (word8 )88,          (word8 )232}, 
     {          (word8 )178,          (word8 )89,          (word8 )89,          (word8 )235}, 
     {          (word8 )180,          (word8 )90,          (word8 )90,          (word8 )238}, 
     {          (word8 )182,          (word8 )91,          (word8 )91,          (word8 )237}, 
     {          (word8 )184,          (word8 )92,          (word8 )92,          (word8 )228}, 
     {          (word8 )186,          (word8 )93,          (word8 )93,          (word8 )231}, 
     {          (word8 )188,          (word8 )94,          (word8 )94,          (word8 )226}, 
     {          (word8 )190,          (word8 )95,          (word8 )95,          (word8 )225}, 
     {          (word8 )192,          (word8 )96,          (word8 )96,          (word8 )160}, 
     {          (word8 )194,          (word8 )97,          (word8 )97,          (word8 )163}, 
     {          (word8 )196,          (word8 )98,          (word8 )98,          (word8 )166}, 
     {          (word8 )198,          (word8 )99,          (word8 )99,          (word8 )165}, 
     {          (word8 )200,          (word8 )100,          (word8 )100,          (word8 )172}, 
     {          (word8 )202,          (word8 )101,          (word8 )101,          (word8 )175}, 
     {          (word8 )204,          (word8 )102,          (word8 )102,          (word8 )170}, 
     {          (word8 )206,          (word8 )103,          (word8 )103,          (word8 )169}, 
     {          (word8 )208,          (word8 )104,          (word8 )104,          (word8 )184}, 
     {          (word8 )210,          (word8 )105,          (word8 )105,          (word8 )187}, 
     {          (word8 )212,          (word8 )106,          (word8 )106,          (word8 )190}, 
     {          (word8 )214,          (word8 )107,          (word8 )107,          (word8 )189}, 
     {          (word8 )216,          (word8 )108,          (word8 )108,          (word8 )180}, 
     {          (word8 )218,          (word8 )109,          (word8 )109,          (word8 )183}, 
     {          (word8 )220,          (word8 )110,          (word8 )110,          (word8 )178}, 
     {          (word8 )222,          (word8 )111,          (word8 )111,          (word8 )177}, 
     {          (word8 )224,          (word8 )112,          (word8 )112,          (word8 )144}, 
     {          (word8 )226,          (word8 )113,          (word8 )113,          (word8 )147}, 
     {          (word8 )228,          (word8 )114,          (word8 )114,          (word8 )150}, 
     {          (word8 )230,          (word8 )115,          (word8 )115,          (word8 )149}, 
     {          (word8 )232,          (word8 )116,          (word8 )116,          (word8 )156}, 
     {          (word8 )234,          (word8 )117,          (word8 )117,          (word8 )159}, 
     {          (word8 )236,          (word8 )118,          (word8 )118,          (word8 )154}, 
     {          (word8 )238,          (word8 )119,          (word8 )119,          (word8 )153}, 
     {          (word8 )240,          (word8 )120,          (word8 )120,          (word8 )136}, 
     {          (word8 )242,          (word8 )121,          (word8 )121,          (word8 )139}, 
     {          (word8 )244,          (word8 )122,          (word8 )122,          (word8 )142}, 
     {          (word8 )246,          (word8 )123,          (word8 )123,          (word8 )141}, 
     {          (word8 )248,          (word8 )124,          (word8 )124,          (word8 )132}, 
     {          (word8 )250,          (word8 )125,          (word8 )125,          (word8 )135}, 
     {          (word8 )252,          (word8 )126,          (word8 )126,          (word8 )130}, 
     {          (word8 )254,          (word8 )127,          (word8 )127,          (word8 )129}, 
     {          (word8 )27,          (word8 )128,          (word8 )128,          (word8 )155}, 
     {          (word8 )25,          (word8 )129,          (word8 )129,          (word8 )152}, 
     {          (word8 )31,          (word8 )130,          (word8 )130,          (word8 )157}, 
     {          (word8 )29,          (word8 )131,          (word8 )131,          (word8 )158}, 
     {          (word8 )19,          (word8 )132,          (word8 )132,          (word8 )151}, 
     {          (word8 )17,          (word8 )133,          (word8 )133,          (word8 )148}, 
     {          (word8 )23,          (word8 )134,          (word8 )134,          (word8 )145}, 
     {          (word8 )21,          (word8 )135,          (word8 )135,          (word8 )146}, 
     {          (word8 )11,          (word8 )136,          (word8 )136,          (word8 )131}, 
     {          (word8 )9,          (word8 )137,          (word8 )137,          (word8 )128}, 
     {          (word8 )15,          (word8 )138,          (word8 )138,          (word8 )133}, 
     {          (word8 )13,          (word8 )139,          (word8 )139,          (word8 )134}, 
     {          (word8 )3,          (word8 )140,          (word8 )140,          (word8 )143}, 
     {          (word8 )1,          (word8 )141,          (word8 )141,          (word8 )140}, 
     {          (word8 )7,          (word8 )142,          (word8 )142,          (word8 )137}, 
     {          (word8 )5,          (word8 )143,          (word8 )143,          (word8 )138}, 
     {          (word8 )59,          (word8 )144,          (word8 )144,          (word8 )171}, 
     {          (word8 )57,          (word8 )145,          (word8 )145,          (word8 )168}, 
     {          (word8 )63,          (word8 )146,          (word8 )146,          (word8 )173}, 
     {          (word8 )61,          (word8 )147,          (word8 )147,          (word8 )174}, 
     {          (word8 )51,          (word8 )148,          (word8 )148,          (word8 )167}, 
     {          (word8 )49,          (word8 )149,          (word8 )149,          (word8 )164}, 
     {          (word8 )55,          (word8 )150,          (word8 )150,          (word8 )161}, 
     {          (word8 )53,          (word8 )151,          (word8 )151,          (word8 )162}, 
     {          (word8 )43,          (word8 )152,          (word8 )152,          (word8 )179}, 
     {          (word8 )41,          (word8 )153,          (word8 )153,          (word8 )176}, 
     {          (word8 )47,          (word8 )154,          (word8 )154,          (word8 )181}, 
     {          (word8 )45,          (word8 )155,          (word8 )155,          (word8 )182}, 
     {          (word8 )35,          (word8 )156,          (word8 )156,          (word8 )191}, 
     {          (word8 )33,          (word8 )157,          (word8 )157,          (word8 )188}, 
     {          (word8 )39,          (word8 )158,          (word8 )158,          (word8 )185}, 
     {          (word8 )37,          (word8 )159,          (word8 )159,          (word8 )186}, 
     {          (word8 )91,          (word8 )160,          (word8 )160,          (word8 )251}, 
     {          (word8 )89,          (word8 )161,          (word8 )161,          (word8 )248}, 
     {          (word8 )95,          (word8 )162,          (word8 )162,          (word8 )253}, 
     {          (word8 )93,          (word8 )163,          (word8 )163,          (word8 )254}, 
     {          (word8 )83,          (word8 )164,          (word8 )164,          (word8 )247}, 
     {          (word8 )81,          (word8 )165,          (word8 )165,          (word8 )244}, 
     {          (word8 )87,          (word8 )166,          (word8 )166,          (word8 )241}, 
     {          (word8 )85,          (word8 )167,          (word8 )167,          (word8 )242}, 
     {          (word8 )75,          (word8 )168,          (word8 )168,          (word8 )227}, 
     {          (word8 )73,          (word8 )169,          (word8 )169,          (word8 )224}, 
     {          (word8 )79,          (word8 )170,          (word8 )170,          (word8 )229}, 
     {          (word8 )77,          (word8 )171,          (word8 )171,          (word8 )230}, 
     {          (word8 )67,          (word8 )172,          (word8 )172,          (word8 )239}, 
     {          (word8 )65,          (word8 )173,          (word8 )173,          (word8 )236}, 
     {          (word8 )71,          (word8 )174,          (word8 )174,          (word8 )233}, 
     {          (word8 )69,          (word8 )175,          (word8 )175,          (word8 )234}, 
     {          (word8 )123,          (word8 )176,          (word8 )176,          (word8 )203}, 
     {          (word8 )121,          (word8 )177,          (word8 )177,          (word8 )200}, 
     {          (word8 )127,          (word8 )178,          (word8 )178,          (word8 )205}, 
     {          (word8 )125,          (word8 )179,          (word8 )179,          (word8 )206}, 
     {          (word8 )115,          (word8 )180,          (word8 )180,          (word8 )199}, 
     {          (word8 )113,          (word8 )181,          (word8 )181,          (word8 )196}, 
     {          (word8 )119,          (word8 )182,          (word8 )182,          (word8 )193}, 
     {          (word8 )117,          (word8 )183,          (word8 )183,          (word8 )194}, 
     {          (word8 )107,          (word8 )184,          (word8 )184,          (word8 )211}, 
     {          (word8 )105,          (word8 )185,          (word8 )185,          (word8 )208}, 
     {          (word8 )111,          (word8 )186,          (word8 )186,          (word8 )213}, 
     {          (word8 )109,          (word8 )187,          (word8 )187,          (word8 )214}, 
     {          (word8 )99,          (word8 )188,          (word8 )188,          (word8 )223}, 
     {          (word8 )97,          (word8 )189,          (word8 )189,          (word8 )220}, 
     {          (word8 )103,          (word8 )190,          (word8 )190,          (word8 )217}, 
     {          (word8 )101,          (word8 )191,          (word8 )191,          (word8 )218}, 
     {          (word8 )155,          (word8 )192,          (word8 )192,          (word8 )91}, 
     {          (word8 )153,          (word8 )193,          (word8 )193,          (word8 )88}, 
     {          (word8 )159,          (word8 )194,          (word8 )194,          (word8 )93}, 
     {          (word8 )157,          (word8 )195,          (word8 )195,          (word8 )94}, 
     {          (word8 )147,          (word8 )196,          (word8 )196,          (word8 )87}, 
     {          (word8 )145,          (word8 )197,          (word8 )197,          (word8 )84}, 
     {          (word8 )151,          (word8 )198,          (word8 )198,          (word8 )81}, 
     {          (word8 )149,          (word8 )199,          (word8 )199,          (word8 )82}, 
     {          (word8 )139,          (word8 )200,          (word8 )200,          (word8 )67}, 
     {          (word8 )137,          (word8 )201,          (word8 )201,          (word8 )64}, 
     {          (word8 )143,          (word8 )202,          (word8 )202,          (word8 )69}, 
     {          (word8 )141,          (word8 )203,          (word8 )203,          (word8 )70}, 
     {          (word8 )131,          (word8 )204,          (word8 )204,          (word8 )79}, 
     {          (word8 )129,          (word8 )205,          (word8 )205,          (word8 )76}, 
     {          (word8 )135,          (word8 )206,          (word8 )206,          (word8 )73}, 
     {          (word8 )133,          (word8 )207,          (word8 )207,          (word8 )74}, 
     {          (word8 )187,          (word8 )208,          (word8 )208,          (word8 )107}, 
     {          (word8 )185,          (word8 )209,          (word8 )209,          (word8 )104}, 
     {          (word8 )191,          (word8 )210,          (word8 )210,          (word8 )109}, 
     {          (word8 )189,          (word8 )211,          (word8 )211,          (word8 )110}, 
     {          (word8 )179,          (word8 )212,          (word8 )212,          (word8 )103}, 
     {          (word8 )177,          (word8 )213,          (word8 )213,          (word8 )100}, 
     {          (word8 )183,          (word8 )214,          (word8 )214,          (word8 )97}, 
     {          (word8 )181,          (word8 )215,          (word8 )215,          (word8 )98}, 
     {          (word8 )171,          (word8 )216,          (word8 )216,          (word8 )115}, 
     {          (word8 )169,          (word8 )217,          (word8 )217,          (word8 )112}, 
     {          (word8 )175,          (word8 )218,          (word8 )218,          (word8 )117}, 
     {          (word8 )173,          (word8 )219,          (word8 )219,          (word8 )118}, 
     {          (word8 )163,          (word8 )220,          (word8 )220,          (word8 )127}, 
     {          (word8 )161,          (word8 )221,          (word8 )221,          (word8 )124}, 
     {          (word8 )167,          (word8 )222,          (word8 )222,          (word8 )121}, 
     {          (word8 )165,          (word8 )223,          (word8 )223,          (word8 )122}, 
     {          (word8 )219,          (word8 )224,          (word8 )224,          (word8 )59}, 
     {          (word8 )217,          (word8 )225,          (word8 )225,          (word8 )56}, 
     {          (word8 )223,          (word8 )226,          (word8 )226,          (word8 )61}, 
     {          (word8 )221,          (word8 )227,          (word8 )227,          (word8 )62}, 
     {          (word8 )211,          (word8 )228,          (word8 )228,          (word8 )55}, 
     {          (word8 )209,          (word8 )229,          (word8 )229,          (word8 )52}, 
     {          (word8 )215,          (word8 )230,          (word8 )230,          (word8 )49}, 
     {          (word8 )213,          (word8 )231,          (word8 )231,          (word8 )50}, 
     {          (word8 )203,          (word8 )232,          (word8 )232,          (word8 )35}, 
     {          (word8 )201,          (word8 )233,          (word8 )233,          (word8 )32}, 
     {          (word8 )207,          (word8 )234,          (word8 )234,          (word8 )37}, 
     {          (word8 )205,          (word8 )235,          (word8 )235,          (word8 )38}, 
     {          (word8 )195,          (word8 )236,          (word8 )236,          (word8 )47}, 
     {          (word8 )193,          (word8 )237,          (word8 )237,          (word8 )44}, 
     {          (word8 )199,          (word8 )238,          (word8 )238,          (word8 )41}, 
     {          (word8 )197,          (word8 )239,          (word8 )239,          (word8 )42}, 
     {          (word8 )251,          (word8 )240,          (word8 )240,          (word8 )11}, 
     {          (word8 )249,          (word8 )241,          (word8 )241,          (word8 )8}, 
     {          (word8 )255,          (word8 )242,          (word8 )242,          (word8 )13}, 
     {          (word8 )253,          (word8 )243,          (word8 )243,          (word8 )14}, 
     {          (word8 )243,          (word8 )244,          (word8 )244,          (word8 )7}, 
     {          (word8 )241,          (word8 )245,          (word8 )245,          (word8 )4}, 
     {          (word8 )247,          (word8 )246,          (word8 )246,          (word8 )1}, 
     {          (word8 )245,          (word8 )247,          (word8 )247,          (word8 )2}, 
     {          (word8 )235,          (word8 )248,          (word8 )248,          (word8 )19}, 
     {          (word8 )233,          (word8 )249,          (word8 )249,          (word8 )16}, 
     {          (word8 )239,          (word8 )250,          (word8 )250,          (word8 )21}, 
     {          (word8 )237,          (word8 )251,          (word8 )251,          (word8 )22}, 
     {          (word8 )227,          (word8 )252,          (word8 )252,          (word8 )31}, 
     {          (word8 )225,          (word8 )253,          (word8 )253,          (word8 )28}, 
     {          (word8 )231,          (word8 )254,          (word8 )254,          (word8 )25}, 
     {          (word8 )229,          (word8 )255,          (word8 )255,          (word8 )26}}, 
   { {          (word8 )0,          (word8 )0,          (word8 )0,          (word8 )0}, 
     {          (word8 )3,          (word8 )2,          (word8 )1,          (word8 )1}, 
     {          (word8 )6,          (word8 )4,          (word8 )2,          (word8 )2}, 
     {          (word8 )5,          (word8 )6,          (word8 )3,          (word8 )3}, 
     {          (word8 )12,          (word8 )8,          (word8 )4,          (word8 )4}, 
     {          (word8 )15,          (word8 )10,          (word8 )5,          (word8 )5}, 
     {          (word8 )10,          (word8 )12,          (word8 )6,          (word8 )6}, 
     {          (word8 )9,          (word8 )14,          (word8 )7,          (word8 )7}, 
     {          (word8 )24,          (word8 )16,          (word8 )8,          (word8 )8}, 
     {          (word8 )27,          (word8 )18,          (word8 )9,          (word8 )9}, 
     {          (word8 )30,          (word8 )20,          (word8 )10,          (word8 )10}, 
     {          (word8 )29,          (word8 )22,          (word8 )11,          (word8 )11}, 
     {          (word8 )20,          (word8 )24,          (word8 )12,          (word8 )12}, 
     {          (word8 )23,          (word8 )26,          (word8 )13,          (word8 )13}, 
     {          (word8 )18,          (word8 )28,          (word8 )14,          (word8 )14}, 
     {          (word8 )17,          (word8 )30,          (word8 )15,          (word8 )15}, 
     {          (word8 )48,          (word8 )32,          (word8 )16,          (word8 )16}, 
     {          (word8 )51,          (word8 )34,          (word8 )17,          (word8 )17}, 
     {          (word8 )54,          (word8 )36,          (word8 )18,          (word8 )18}, 
     {          (word8 )53,          (word8 )38,          (word8 )19,          (word8 )19}, 
     {          (word8 )60,          (word8 )40,          (word8 )20,          (word8 )20}, 
     {          (word8 )63,          (word8 )42,          (word8 )21,          (word8 )21}, 
     {          (word8 )58,          (word8 )44,          (word8 )22,          (word8 )22}, 
     {          (word8 )57,          (word8 )46,          (word8 )23,          (word8 )23}, 
     {          (word8 )40,          (word8 )48,          (word8 )24,          (word8 )24}, 
     {          (word8 )43,          (word8 )50,          (word8 )25,          (word8 )25}, 
     {          (word8 )46,          (word8 )52,          (word8 )26,          (word8 )26}, 
     {          (word8 )45,          (word8 )54,          (word8 )27,          (word8 )27}, 
     {          (word8 )36,          (word8 )56,          (word8 )28,          (word8 )28}, 
     {          (word8 )39,          (word8 )58,          (word8 )29,          (word8 )29}, 
     {          (word8 )34,          (word8 )60,          (word8 )30,          (word8 )30}, 
     {          (word8 )33,          (word8 )62,          (word8 )31,          (word8 )31}, 
     {          (word8 )96,          (word8 )64,          (word8 )32,          (word8 )32}, 
     {          (word8 )99,          (word8 )66,          (word8 )33,          (word8 )33}, 
     {          (word8 )102,          (word8 )68,          (word8 )34,          (word8 )34}, 
     {          (word8 )101,          (word8 )70,          (word8 )35,          (word8 )35}, 
     {          (word8 )108,          (word8 )72,          (word8 )36,          (word8 )36}, 
     {          (word8 )111,          (word8 )74,          (word8 )37,          (word8 )37}, 
     {          (word8 )106,          (word8 )76,          (word8 )38,          (word8 )38}, 
     {          (word8 )105,          (word8 )78,          (word8 )39,          (word8 )39}, 
     {          (word8 )120,          (word8 )80,          (word8 )40,          (word8 )40}, 
     {          (word8 )123,          (word8 )82,          (word8 )41,          (word8 )41}, 
     {          (word8 )126,          (word8 )84,          (word8 )42,          (word8 )42}, 
     {          (word8 )125,          (word8 )86,          (word8 )43,          (word8 )43}, 
     {          (word8 )116,          (word8 )88,          (word8 )44,          (word8 )44}, 
     {          (word8 )119,          (word8 )90,          (word8 )45,          (word8 )45}, 
     {          (word8 )114,          (word8 )92,          (word8 )46,          (word8 )46}, 
     {          (word8 )113,          (word8 )94,          (word8 )47,          (word8 )47}, 
     {          (word8 )80,          (word8 )96,          (word8 )48,          (word8 )48}, 
     {          (word8 )83,          (word8 )98,          (word8 )49,          (word8 )49}, 
     {          (word8 )86,          (word8 )100,          (word8 )50,          (word8 )50}, 
     {          (word8 )85,          (word8 )102,          (word8 )51,          (word8 )51}, 
     {          (word8 )92,          (word8 )104,          (word8 )52,          (word8 )52}, 
     {          (word8 )95,          (word8 )106,          (word8 )53,          (word8 )53}, 
     {          (word8 )90,          (word8 )108,          (word8 )54,          (word8 )54}, 
     {          (word8 )89,          (word8 )110,          (word8 )55,          (word8 )55}, 
     {          (word8 )72,          (word8 )112,          (word8 )56,          (word8 )56}, 
     {          (word8 )75,          (word8 )114,          (word8 )57,          (word8 )57}, 
     {          (word8 )78,          (word8 )116,          (word8 )58,          (word8 )58}, 
     {          (word8 )77,          (word8 )118,          (word8 )59,          (word8 )59}, 
     {          (word8 )68,          (word8 )120,          (word8 )60,          (word8 )60}, 
     {          (word8 )71,          (word8 )122,          (word8 )61,          (word8 )61}, 
     {          (word8 )66,          (word8 )124,          (word8 )62,          (word8 )62}, 
     {          (word8 )65,          (word8 )126,          (word8 )63,          (word8 )63}, 
     {          (word8 )192,          (word8 )128,          (word8 )64,          (word8 )64}, 
     {          (word8 )195,          (word8 )130,          (word8 )65,          (word8 )65}, 
     {          (word8 )198,          (word8 )132,          (word8 )66,          (word8 )66}, 
     {          (word8 )197,          (word8 )134,          (word8 )67,          (word8 )67}, 
     {          (word8 )204,          (word8 )136,          (word8 )68,          (word8 )68}, 
     {          (word8 )207,          (word8 )138,          (word8 )69,          (word8 )69}, 
     {          (word8 )202,          (word8 )140,          (word8 )70,          (word8 )70}, 
     {          (word8 )201,          (word8 )142,          (word8 )71,          (word8 )71}, 
     {          (word8 )216,          (word8 )144,          (word8 )72,          (word8 )72}, 
     {          (word8 )219,          (word8 )146,          (word8 )73,          (word8 )73}, 
     {          (word8 )222,          (word8 )148,          (word8 )74,          (word8 )74}, 
     {          (word8 )221,          (word8 )150,          (word8 )75,          (word8 )75}, 
     {          (word8 )212,          (word8 )152,          (word8 )76,          (word8 )76}, 
     {          (word8 )215,          (word8 )154,          (word8 )77,          (word8 )77}, 
     {          (word8 )210,          (word8 )156,          (word8 )78,          (word8 )78}, 
     {          (word8 )209,          (word8 )158,          (word8 )79,          (word8 )79}, 
     {          (word8 )240,          (word8 )160,          (word8 )80,          (word8 )80}, 
     {          (word8 )243,          (word8 )162,          (word8 )81,          (word8 )81}, 
     {          (word8 )246,          (word8 )164,          (word8 )82,          (word8 )82}, 
     {          (word8 )245,          (word8 )166,          (word8 )83,          (word8 )83}, 
     {          (word8 )252,          (word8 )168,          (word8 )84,          (word8 )84}, 
     {          (word8 )255,          (word8 )170,          (word8 )85,          (word8 )85}, 
     {          (word8 )250,          (word8 )172,          (word8 )86,          (word8 )86}, 
     {          (word8 )249,          (word8 )174,          (word8 )87,          (word8 )87}, 
     {          (word8 )232,          (word8 )176,          (word8 )88,          (word8 )88}, 
     {          (word8 )235,          (word8 )178,          (word8 )89,          (word8 )89}, 
     {          (word8 )238,          (word8 )180,          (word8 )90,          (word8 )90}, 
     {          (word8 )237,          (word8 )182,          (word8 )91,          (word8 )91}, 
     {          (word8 )228,          (word8 )184,          (word8 )92,          (word8 )92}, 
     {          (word8 )231,          (word8 )186,          (word8 )93,          (word8 )93}, 
     {          (word8 )226,          (word8 )188,          (word8 )94,          (word8 )94}, 
     {          (word8 )225,          (word8 )190,          (word8 )95,          (word8 )95}, 
     {          (word8 )160,          (word8 )192,          (word8 )96,          (word8 )96}, 
     {          (word8 )163,          (word8 )194,          (word8 )97,          (word8 )97}, 
     {          (word8 )166,          (word8 )196,          (word8 )98,          (word8 )98}, 
     {          (word8 )165,          (word8 )198,          (word8 )99,          (word8 )99}, 
     {          (word8 )172,          (word8 )200,          (word8 )100,          (word8 )100}, 
     {          (word8 )175,          (word8 )202,          (word8 )101,          (word8 )101}, 
     {          (word8 )170,          (word8 )204,          (word8 )102,          (word8 )102}, 
     {          (word8 )169,          (word8 )206,          (word8 )103,          (word8 )103}, 
     {          (word8 )184,          (word8 )208,          (word8 )104,          (word8 )104}, 
     {          (word8 )187,          (word8 )210,          (word8 )105,          (word8 )105}, 
     {          (word8 )190,          (word8 )212,          (word8 )106,          (word8 )106}, 
     {          (word8 )189,          (word8 )214,          (word8 )107,          (word8 )107}, 
     {          (word8 )180,          (word8 )216,          (word8 )108,          (word8 )108}, 
     {          (word8 )183,          (word8 )218,          (word8 )109,          (word8 )109}, 
     {          (word8 )178,          (word8 )220,          (word8 )110,          (word8 )110}, 
     {          (word8 )177,          (word8 )222,          (word8 )111,          (word8 )111}, 
     {          (word8 )144,          (word8 )224,          (word8 )112,          (word8 )112}, 
     {          (word8 )147,          (word8 )226,          (word8 )113,          (word8 )113}, 
     {          (word8 )150,          (word8 )228,          (word8 )114,          (word8 )114}, 
     {          (word8 )149,          (word8 )230,          (word8 )115,          (word8 )115}, 
     {          (word8 )156,          (word8 )232,          (word8 )116,          (word8 )116}, 
     {          (word8 )159,          (word8 )234,          (word8 )117,          (word8 )117}, 
     {          (word8 )154,          (word8 )236,          (word8 )118,          (word8 )118}, 
     {          (word8 )153,          (word8 )238,          (word8 )119,          (word8 )119}, 
     {          (word8 )136,          (word8 )240,          (word8 )120,          (word8 )120}, 
     {          (word8 )139,          (word8 )242,          (word8 )121,          (word8 )121}, 
     {          (word8 )142,          (word8 )244,          (word8 )122,          (word8 )122}, 
     {          (word8 )141,          (word8 )246,          (word8 )123,          (word8 )123}, 
     {          (word8 )132,          (word8 )248,          (word8 )124,          (word8 )124}, 
     {          (word8 )135,          (word8 )250,          (word8 )125,          (word8 )125}, 
     {          (word8 )130,          (word8 )252,          (word8 )126,          (word8 )126}, 
     {          (word8 )129,          (word8 )254,          (word8 )127,          (word8 )127}, 
     {          (word8 )155,          (word8 )27,          (word8 )128,          (word8 )128}, 
     {          (word8 )152,          (word8 )25,          (word8 )129,          (word8 )129}, 
     {          (word8 )157,          (word8 )31,          (word8 )130,          (word8 )130}, 
     {          (word8 )158,          (word8 )29,          (word8 )131,          (word8 )131}, 
     {          (word8 )151,          (word8 )19,          (word8 )132,          (word8 )132}, 
     {          (word8 )148,          (word8 )17,          (word8 )133,          (word8 )133}, 
     {          (word8 )145,          (word8 )23,          (word8 )134,          (word8 )134}, 
     {          (word8 )146,          (word8 )21,          (word8 )135,          (word8 )135}, 
     {          (word8 )131,          (word8 )11,          (word8 )136,          (word8 )136}, 
     {          (word8 )128,          (word8 )9,          (word8 )137,          (word8 )137}, 
     {          (word8 )133,          (word8 )15,          (word8 )138,          (word8 )138}, 
     {          (word8 )134,          (word8 )13,          (word8 )139,          (word8 )139}, 
     {          (word8 )143,          (word8 )3,          (word8 )140,          (word8 )140}, 
     {          (word8 )140,          (word8 )1,          (word8 )141,          (word8 )141}, 
     {          (word8 )137,          (word8 )7,          (word8 )142,          (word8 )142}, 
     {          (word8 )138,          (word8 )5,          (word8 )143,          (word8 )143}, 
     {          (word8 )171,          (word8 )59,          (word8 )144,          (word8 )144}, 
     {          (word8 )168,          (word8 )57,          (word8 )145,          (word8 )145}, 
     {          (word8 )173,          (word8 )63,          (word8 )146,          (word8 )146}, 
     {          (word8 )174,          (word8 )61,          (word8 )147,          (word8 )147}, 
     {          (word8 )167,          (word8 )51,          (word8 )148,          (word8 )148}, 
     {          (word8 )164,          (word8 )49,          (word8 )149,          (word8 )149}, 
     {          (word8 )161,          (word8 )55,          (word8 )150,          (word8 )150}, 
     {          (word8 )162,          (word8 )53,          (word8 )151,          (word8 )151}, 
     {          (word8 )179,          (word8 )43,          (word8 )152,          (word8 )152}, 
     {          (word8 )176,          (word8 )41,          (word8 )153,          (word8 )153}, 
     {          (word8 )181,          (word8 )47,          (word8 )154,          (word8 )154}, 
     {          (word8 )182,          (word8 )45,          (word8 )155,          (word8 )155}, 
     {          (word8 )191,          (word8 )35,          (word8 )156,          (word8 )156}, 
     {          (word8 )188,          (word8 )33,          (word8 )157,          (word8 )157}, 
     {          (word8 )185,          (word8 )39,          (word8 )158,          (word8 )158}, 
     {          (word8 )186,          (word8 )37,          (word8 )159,          (word8 )159}, 
     {          (word8 )251,          (word8 )91,          (word8 )160,          (word8 )160}, 
     {          (word8 )248,          (word8 )89,          (word8 )161,          (word8 )161}, 
     {          (word8 )253,          (word8 )95,          (word8 )162,          (word8 )162}, 
     {          (word8 )254,          (word8 )93,          (word8 )163,          (word8 )163}, 
     {          (word8 )247,          (word8 )83,          (word8 )164,          (word8 )164}, 
     {          (word8 )244,          (word8 )81,          (word8 )165,          (word8 )165}, 
     {          (word8 )241,          (word8 )87,          (word8 )166,          (word8 )166}, 
     {          (word8 )242,          (word8 )85,          (word8 )167,          (word8 )167}, 
     {          (word8 )227,          (word8 )75,          (word8 )168,          (word8 )168}, 
     {          (word8 )224,          (word8 )73,          (word8 )169,          (word8 )169}, 
     {          (word8 )229,          (word8 )79,          (word8 )170,          (word8 )170}, 
     {          (word8 )230,          (word8 )77,          (word8 )171,          (word8 )171}, 
     {          (word8 )239,          (word8 )67,          (word8 )172,          (word8 )172}, 
     {          (word8 )236,          (word8 )65,          (word8 )173,          (word8 )173}, 
     {          (word8 )233,          (word8 )71,          (word8 )174,          (word8 )174}, 
     {          (word8 )234,          (word8 )69,          (word8 )175,          (word8 )175}, 
     {          (word8 )203,          (word8 )123,          (word8 )176,          (word8 )176}, 
     {          (word8 )200,          (word8 )121,          (word8 )177,          (word8 )177}, 
     {          (word8 )205,          (word8 )127,          (word8 )178,          (word8 )178}, 
     {          (word8 )206,          (word8 )125,          (word8 )179,          (word8 )179}, 
     {          (word8 )199,          (word8 )115,          (word8 )180,          (word8 )180}, 
     {          (word8 )196,          (word8 )113,          (word8 )181,          (word8 )181}, 
     {          (word8 )193,          (word8 )119,          (word8 )182,          (word8 )182}, 
     {          (word8 )194,          (word8 )117,          (word8 )183,          (word8 )183}, 
     {          (word8 )211,          (word8 )107,          (word8 )184,          (word8 )184}, 
     {          (word8 )208,          (word8 )105,          (word8 )185,          (word8 )185}, 
     {          (word8 )213,          (word8 )111,          (word8 )186,          (word8 )186}, 
     {          (word8 )214,          (word8 )109,          (word8 )187,          (word8 )187}, 
     {          (word8 )223,          (word8 )99,          (word8 )188,          (word8 )188}, 
     {          (word8 )220,          (word8 )97,          (word8 )189,          (word8 )189}, 
     {          (word8 )217,          (word8 )103,          (word8 )190,          (word8 )190}, 
     {          (word8 )218,          (word8 )101,          (word8 )191,          (word8 )191}, 
     {          (word8 )91,          (word8 )155,          (word8 )192,          (word8 )192}, 
     {          (word8 )88,          (word8 )153,          (word8 )193,          (word8 )193}, 
     {          (word8 )93,          (word8 )159,          (word8 )194,          (word8 )194}, 
     {          (word8 )94,          (word8 )157,          (word8 )195,          (word8 )195}, 
     {          (word8 )87,          (word8 )147,          (word8 )196,          (word8 )196}, 
     {          (word8 )84,          (word8 )145,          (word8 )197,          (word8 )197}, 
     {          (word8 )81,          (word8 )151,          (word8 )198,          (word8 )198}, 
     {          (word8 )82,          (word8 )149,          (word8 )199,          (word8 )199}, 
     {          (word8 )67,          (word8 )139,          (word8 )200,          (word8 )200}, 
     {          (word8 )64,          (word8 )137,          (word8 )201,          (word8 )201}, 
     {          (word8 )69,          (word8 )143,          (word8 )202,          (word8 )202}, 
     {          (word8 )70,          (word8 )141,          (word8 )203,          (word8 )203}, 
     {          (word8 )79,          (word8 )131,          (word8 )204,          (word8 )204}, 
     {          (word8 )76,          (word8 )129,          (word8 )205,          (word8 )205}, 
     {          (word8 )73,          (word8 )135,          (word8 )206,          (word8 )206}, 
     {          (word8 )74,          (word8 )133,          (word8 )207,          (word8 )207}, 
     {          (word8 )107,          (word8 )187,          (word8 )208,          (word8 )208}, 
     {          (word8 )104,          (word8 )185,          (word8 )209,          (word8 )209}, 
     {          (word8 )109,          (word8 )191,          (word8 )210,          (word8 )210}, 
     {          (word8 )110,          (word8 )189,          (word8 )211,          (word8 )211}, 
     {          (word8 )103,          (word8 )179,          (word8 )212,          (word8 )212}, 
     {          (word8 )100,          (word8 )177,          (word8 )213,          (word8 )213}, 
     {          (word8 )97,          (word8 )183,          (word8 )214,          (word8 )214}, 
     {          (word8 )98,          (word8 )181,          (word8 )215,          (word8 )215}, 
     {          (word8 )115,          (word8 )171,          (word8 )216,          (word8 )216}, 
     {          (word8 )112,          (word8 )169,          (word8 )217,          (word8 )217}, 
     {          (word8 )117,          (word8 )175,          (word8 )218,          (word8 )218}, 
     {          (word8 )118,          (word8 )173,          (word8 )219,          (word8 )219}, 
     {          (word8 )127,          (word8 )163,          (word8 )220,          (word8 )220}, 
     {          (word8 )124,          (word8 )161,          (word8 )221,          (word8 )221}, 
     {          (word8 )121,          (word8 )167,          (word8 )222,          (word8 )222}, 
     {          (word8 )122,          (word8 )165,          (word8 )223,          (word8 )223}, 
     {          (word8 )59,          (word8 )219,          (word8 )224,          (word8 )224}, 
     {          (word8 )56,          (word8 )217,          (word8 )225,          (word8 )225}, 
     {          (word8 )61,          (word8 )223,          (word8 )226,          (word8 )226}, 
     {          (word8 )62,          (word8 )221,          (word8 )227,          (word8 )227}, 
     {          (word8 )55,          (word8 )211,          (word8 )228,          (word8 )228}, 
     {          (word8 )52,          (word8 )209,          (word8 )229,          (word8 )229}, 
     {          (word8 )49,          (word8 )215,          (word8 )230,          (word8 )230}, 
     {          (word8 )50,          (word8 )213,          (word8 )231,          (word8 )231}, 
     {          (word8 )35,          (word8 )203,          (word8 )232,          (word8 )232}, 
     {          (word8 )32,          (word8 )201,          (word8 )233,          (word8 )233}, 
     {          (word8 )37,          (word8 )207,          (word8 )234,          (word8 )234}, 
     {          (word8 )38,          (word8 )205,          (word8 )235,          (word8 )235}, 
     {          (word8 )47,          (word8 )195,          (word8 )236,          (word8 )236}, 
     {          (word8 )44,          (word8 )193,          (word8 )237,          (word8 )237}, 
     {          (word8 )41,          (word8 )199,          (word8 )238,          (word8 )238}, 
     {          (word8 )42,          (word8 )197,          (word8 )239,          (word8 )239}, 
     {          (word8 )11,          (word8 )251,          (word8 )240,          (word8 )240}, 
     {          (word8 )8,          (word8 )249,          (word8 )241,          (word8 )241}, 
     {          (word8 )13,          (word8 )255,          (word8 )242,          (word8 )242}, 
     {          (word8 )14,          (word8 )253,          (word8 )243,          (word8 )243}, 
     {          (word8 )7,          (word8 )243,          (word8 )244,          (word8 )244}, 
     {          (word8 )4,          (word8 )241,          (word8 )245,          (word8 )245}, 
     {          (word8 )1,          (word8 )247,          (word8 )246,          (word8 )246}, 
     {          (word8 )2,          (word8 )245,          (word8 )247,          (word8 )247}, 
     {          (word8 )19,          (word8 )235,          (word8 )248,          (word8 )248}, 
     {          (word8 )16,          (word8 )233,          (word8 )249,          (word8 )249}, 
     {          (word8 )21,          (word8 )239,          (word8 )250,          (word8 )250}, 
     {          (word8 )22,          (word8 )237,          (word8 )251,          (word8 )251}, 
     {          (word8 )31,          (word8 )227,          (word8 )252,          (word8 )252}, 
     {          (word8 )28,          (word8 )225,          (word8 )253,          (word8 )253}, 
     {          (word8 )25,          (word8 )231,          (word8 )254,          (word8 )254}, 
     {          (word8 )26,          (word8 )229,          (word8 )255,          (word8 )255}}, 
   { {          (word8 )0,          (word8 )0,          (word8 )0,          (word8 )0}, 
     {          (word8 )1,          (word8 )3,          (word8 )2,          (word8 )1}, 
     {          (word8 )2,          (word8 )6,          (word8 )4,          (word8 )2}, 
     {          (word8 )3,          (word8 )5,          (word8 )6,          (word8 )3}, 
     {          (word8 )4,          (word8 )12,          (word8 )8,          (word8 )4}, 
     {          (word8 )5,          (word8 )15,          (word8 )10,          (word8 )5}, 
     {          (word8 )6,          (word8 )10,          (word8 )12,          (word8 )6}, 
     {          (word8 )7,          (word8 )9,          (word8 )14,          (word8 )7}, 
     {          (word8 )8,          (word8 )24,          (word8 )16,          (word8 )8}, 
     {          (word8 )9,          (word8 )27,          (word8 )18,          (word8 )9}, 
     {          (word8 )10,          (word8 )30,          (word8 )20,          (word8 )10}, 
     {          (word8 )11,          (word8 )29,          (word8 )22,          (word8 )11}, 
     {          (word8 )12,          (word8 )20,          (word8 )24,          (word8 )12}, 
     {          (word8 )13,          (word8 )23,          (word8 )26,          (word8 )13}, 
     {          (word8 )14,          (word8 )18,          (word8 )28,          (word8 )14}, 
     {          (word8 )15,          (word8 )17,          (word8 )30,          (word8 )15}, 
     {          (word8 )16,          (word8 )48,          (word8 )32,          (word8 )16}, 
     {          (word8 )17,          (word8 )51,          (word8 )34,          (word8 )17}, 
     {          (word8 )18,          (word8 )54,          (word8 )36,          (word8 )18}, 
     {          (word8 )19,          (word8 )53,          (word8 )38,          (word8 )19}, 
     {          (word8 )20,          (word8 )60,          (word8 )40,          (word8 )20}, 
     {          (word8 )21,          (word8 )63,          (word8 )42,          (word8 )21}, 
     {          (word8 )22,          (word8 )58,          (word8 )44,          (word8 )22}, 
     {          (word8 )23,          (word8 )57,          (word8 )46,          (word8 )23}, 
     {          (word8 )24,          (word8 )40,          (word8 )48,          (word8 )24}, 
     {          (word8 )25,          (word8 )43,          (word8 )50,          (word8 )25}, 
     {          (word8 )26,          (word8 )46,          (word8 )52,          (word8 )26}, 
     {          (word8 )27,          (word8 )45,          (word8 )54,          (word8 )27}, 
     {          (word8 )28,          (word8 )36,          (word8 )56,          (word8 )28}, 
     {          (word8 )29,          (word8 )39,          (word8 )58,          (word8 )29}, 
     {          (word8 )30,          (word8 )34,          (word8 )60,          (word8 )30}, 
     {          (word8 )31,          (word8 )33,          (word8 )62,          (word8 )31}, 
     {          (word8 )32,          (word8 )96,          (word8 )64,          (word8 )32}, 
     {          (word8 )33,          (word8 )99,          (word8 )66,          (word8 )33}, 
     {          (word8 )34,          (word8 )102,          (word8 )68,          (word8 )34}, 
     {          (word8 )35,          (word8 )101,          (word8 )70,          (word8 )35}, 
     {          (word8 )36,          (word8 )108,          (word8 )72,          (word8 )36}, 
     {          (word8 )37,          (word8 )111,          (word8 )74,          (word8 )37}, 
     {          (word8 )38,          (word8 )106,          (word8 )76,          (word8 )38}, 
     {          (word8 )39,          (word8 )105,          (word8 )78,          (word8 )39}, 
     {          (word8 )40,          (word8 )120,          (word8 )80,          (word8 )40}, 
     {          (word8 )41,          (word8 )123,          (word8 )82,          (word8 )41}, 
     {          (word8 )42,          (word8 )126,          (word8 )84,          (word8 )42}, 
     {          (word8 )43,          (word8 )125,          (word8 )86,          (word8 )43}, 
     {          (word8 )44,          (word8 )116,          (word8 )88,          (word8 )44}, 
     {          (word8 )45,          (word8 )119,          (word8 )90,          (word8 )45}, 
     {          (word8 )46,          (word8 )114,          (word8 )92,          (word8 )46}, 
     {          (word8 )47,          (word8 )113,          (word8 )94,          (word8 )47}, 
     {          (word8 )48,          (word8 )80,          (word8 )96,          (word8 )48}, 
     {          (word8 )49,          (word8 )83,          (word8 )98,          (word8 )49}, 
     {          (word8 )50,          (word8 )86,          (word8 )100,          (word8 )50}, 
     {          (word8 )51,          (word8 )85,          (word8 )102,          (word8 )51}, 
     {          (word8 )52,          (word8 )92,          (word8 )104,          (word8 )52}, 
     {          (word8 )53,          (word8 )95,          (word8 )106,          (word8 )53}, 
     {          (word8 )54,          (word8 )90,          (word8 )108,          (word8 )54}, 
     {          (word8 )55,          (word8 )89,          (word8 )110,          (word8 )55}, 
     {          (word8 )56,          (word8 )72,          (word8 )112,          (word8 )56}, 
     {          (word8 )57,          (word8 )75,          (word8 )114,          (word8 )57}, 
     {          (word8 )58,          (word8 )78,          (word8 )116,          (word8 )58}, 
     {          (word8 )59,          (word8 )77,          (word8 )118,          (word8 )59}, 
     {          (word8 )60,          (word8 )68,          (word8 )120,          (word8 )60}, 
     {          (word8 )61,          (word8 )71,          (word8 )122,          (word8 )61}, 
     {          (word8 )62,          (word8 )66,          (word8 )124,          (word8 )62}, 
     {          (word8 )63,          (word8 )65,          (word8 )126,          (word8 )63}, 
     {          (word8 )64,          (word8 )192,          (word8 )128,          (word8 )64}, 
     {          (word8 )65,          (word8 )195,          (word8 )130,          (word8 )65}, 
     {          (word8 )66,          (word8 )198,          (word8 )132,          (word8 )66}, 
     {          (word8 )67,          (word8 )197,          (word8 )134,          (word8 )67}, 
     {          (word8 )68,          (word8 )204,          (word8 )136,          (word8 )68}, 
     {          (word8 )69,          (word8 )207,          (word8 )138,          (word8 )69}, 
     {          (word8 )70,          (word8 )202,          (word8 )140,          (word8 )70}, 
     {          (word8 )71,          (word8 )201,          (word8 )142,          (word8 )71}, 
     {          (word8 )72,          (word8 )216,          (word8 )144,          (word8 )72}, 
     {          (word8 )73,          (word8 )219,          (word8 )146,          (word8 )73}, 
     {          (word8 )74,          (word8 )222,          (word8 )148,          (word8 )74}, 
     {          (word8 )75,          (word8 )221,          (word8 )150,          (word8 )75}, 
     {          (word8 )76,          (word8 )212,          (word8 )152,          (word8 )76}, 
     {          (word8 )77,          (word8 )215,          (word8 )154,          (word8 )77}, 
     {          (word8 )78,          (word8 )210,          (word8 )156,          (word8 )78}, 
     {          (word8 )79,          (word8 )209,          (word8 )158,          (word8 )79}, 
     {          (word8 )80,          (word8 )240,          (word8 )160,          (word8 )80}, 
     {          (word8 )81,          (word8 )243,          (word8 )162,          (word8 )81}, 
     {          (word8 )82,          (word8 )246,          (word8 )164,          (word8 )82}, 
     {          (word8 )83,          (word8 )245,          (word8 )166,          (word8 )83}, 
     {          (word8 )84,          (word8 )252,          (word8 )168,          (word8 )84}, 
     {          (word8 )85,          (word8 )255,          (word8 )170,          (word8 )85}, 
     {          (word8 )86,          (word8 )250,          (word8 )172,          (word8 )86}, 
     {          (word8 )87,          (word8 )249,          (word8 )174,          (word8 )87}, 
     {          (word8 )88,          (word8 )232,          (word8 )176,          (word8 )88}, 
     {          (word8 )89,          (word8 )235,          (word8 )178,          (word8 )89}, 
     {          (word8 )90,          (word8 )238,          (word8 )180,          (word8 )90}, 
     {          (word8 )91,          (word8 )237,          (word8 )182,          (word8 )91}, 
     {          (word8 )92,          (word8 )228,          (word8 )184,          (word8 )92}, 
     {          (word8 )93,          (word8 )231,          (word8 )186,          (word8 )93}, 
     {          (word8 )94,          (word8 )226,          (word8 )188,          (word8 )94}, 
     {          (word8 )95,          (word8 )225,          (word8 )190,          (word8 )95}, 
     {          (word8 )96,          (word8 )160,          (word8 )192,          (word8 )96}, 
     {          (word8 )97,          (word8 )163,          (word8 )194,          (word8 )97}, 
     {          (word8 )98,          (word8 )166,          (word8 )196,          (word8 )98}, 
     {          (word8 )99,          (word8 )165,          (word8 )198,          (word8 )99}, 
     {          (word8 )100,          (word8 )172,          (word8 )200,          (word8 )100}, 
     {          (word8 )101,          (word8 )175,          (word8 )202,          (word8 )101}, 
     {          (word8 )102,          (word8 )170,          (word8 )204,          (word8 )102}, 
     {          (word8 )103,          (word8 )169,          (word8 )206,          (word8 )103}, 
     {          (word8 )104,          (word8 )184,          (word8 )208,          (word8 )104}, 
     {          (word8 )105,          (word8 )187,          (word8 )210,          (word8 )105}, 
     {          (word8 )106,          (word8 )190,          (word8 )212,          (word8 )106}, 
     {          (word8 )107,          (word8 )189,          (word8 )214,          (word8 )107}, 
     {          (word8 )108,          (word8 )180,          (word8 )216,          (word8 )108}, 
     {          (word8 )109,          (word8 )183,          (word8 )218,          (word8 )109}, 
     {          (word8 )110,          (word8 )178,          (word8 )220,          (word8 )110}, 
     {          (word8 )111,          (word8 )177,          (word8 )222,          (word8 )111}, 
     {          (word8 )112,          (word8 )144,          (word8 )224,          (word8 )112}, 
     {          (word8 )113,          (word8 )147,          (word8 )226,          (word8 )113}, 
     {          (word8 )114,          (word8 )150,          (word8 )228,          (word8 )114}, 
     {          (word8 )115,          (word8 )149,          (word8 )230,          (word8 )115}, 
     {          (word8 )116,          (word8 )156,          (word8 )232,          (word8 )116}, 
     {          (word8 )117,          (word8 )159,          (word8 )234,          (word8 )117}, 
     {          (word8 )118,          (word8 )154,          (word8 )236,          (word8 )118}, 
     {          (word8 )119,          (word8 )153,          (word8 )238,          (word8 )119}, 
     {          (word8 )120,          (word8 )136,          (word8 )240,          (word8 )120}, 
     {          (word8 )121,          (word8 )139,          (word8 )242,          (word8 )121}, 
     {          (word8 )122,          (word8 )142,          (word8 )244,          (word8 )122}, 
     {          (word8 )123,          (word8 )141,          (word8 )246,          (word8 )123}, 
     {          (word8 )124,          (word8 )132,          (word8 )248,          (word8 )124}, 
     {          (word8 )125,          (word8 )135,          (word8 )250,          (word8 )125}, 
     {          (word8 )126,          (word8 )130,          (word8 )252,          (word8 )126}, 
     {          (word8 )127,          (word8 )129,          (word8 )254,          (word8 )127}, 
     {          (word8 )128,          (word8 )155,          (word8 )27,          (word8 )128}, 
     {          (word8 )129,          (word8 )152,          (word8 )25,          (word8 )129}, 
     {          (word8 )130,          (word8 )157,          (word8 )31,          (word8 )130}, 
     {          (word8 )131,          (word8 )158,          (word8 )29,          (word8 )131}, 
     {          (word8 )132,          (word8 )151,          (word8 )19,          (word8 )132}, 
     {          (word8 )133,          (word8 )148,          (word8 )17,          (word8 )133}, 
     {          (word8 )134,          (word8 )145,          (word8 )23,          (word8 )134}, 
     {          (word8 )135,          (word8 )146,          (word8 )21,          (word8 )135}, 
     {          (word8 )136,          (word8 )131,          (word8 )11,          (word8 )136}, 
     {          (word8 )137,          (word8 )128,          (word8 )9,          (word8 )137}, 
     {          (word8 )138,          (word8 )133,          (word8 )15,          (word8 )138}, 
     {          (word8 )139,          (word8 )134,          (word8 )13,          (word8 )139}, 
     {          (word8 )140,          (word8 )143,          (word8 )3,          (word8 )140}, 
     {          (word8 )141,          (word8 )140,          (word8 )1,          (word8 )141}, 
     {          (word8 )142,          (word8 )137,          (word8 )7,          (word8 )142}, 
     {          (word8 )143,          (word8 )138,          (word8 )5,          (word8 )143}, 
     {          (word8 )144,          (word8 )171,          (word8 )59,          (word8 )144}, 
     {          (word8 )145,          (word8 )168,          (word8 )57,          (word8 )145}, 
     {          (word8 )146,          (word8 )173,          (word8 )63,          (word8 )146}, 
     {          (word8 )147,          (word8 )174,          (word8 )61,          (word8 )147}, 
     {          (word8 )148,          (word8 )167,          (word8 )51,          (word8 )148}, 
     {          (word8 )149,          (word8 )164,          (word8 )49,          (word8 )149}, 
     {          (word8 )150,          (word8 )161,          (word8 )55,          (word8 )150}, 
     {          (word8 )151,          (word8 )162,          (word8 )53,          (word8 )151}, 
     {          (word8 )152,          (word8 )179,          (word8 )43,          (word8 )152}, 
     {          (word8 )153,          (word8 )176,          (word8 )41,          (word8 )153}, 
     {          (word8 )154,          (word8 )181,          (word8 )47,          (word8 )154}, 
     {          (word8 )155,          (word8 )182,          (word8 )45,          (word8 )155}, 
     {          (word8 )156,          (word8 )191,          (word8 )35,          (word8 )156}, 
     {          (word8 )157,          (word8 )188,          (word8 )33,          (word8 )157}, 
     {          (word8 )158,          (word8 )185,          (word8 )39,          (word8 )158}, 
     {          (word8 )159,          (word8 )186,          (word8 )37,          (word8 )159}, 
     {          (word8 )160,          (word8 )251,          (word8 )91,          (word8 )160}, 
     {          (word8 )161,          (word8 )248,          (word8 )89,          (word8 )161}, 
     {          (word8 )162,          (word8 )253,          (word8 )95,          (word8 )162}, 
     {          (word8 )163,          (word8 )254,          (word8 )93,          (word8 )163}, 
     {          (word8 )164,          (word8 )247,          (word8 )83,          (word8 )164}, 
     {          (word8 )165,          (word8 )244,          (word8 )81,          (word8 )165}, 
     {          (word8 )166,          (word8 )241,          (word8 )87,          (word8 )166}, 
     {          (word8 )167,          (word8 )242,          (word8 )85,          (word8 )167}, 
     {          (word8 )168,          (word8 )227,          (word8 )75,          (word8 )168}, 
     {          (word8 )169,          (word8 )224,          (word8 )73,          (word8 )169}, 
     {          (word8 )170,          (word8 )229,          (word8 )79,          (word8 )170}, 
     {          (word8 )171,          (word8 )230,          (word8 )77,          (word8 )171}, 
     {          (word8 )172,          (word8 )239,          (word8 )67,          (word8 )172}, 
     {          (word8 )173,          (word8 )236,          (word8 )65,          (word8 )173}, 
     {          (word8 )174,          (word8 )233,          (word8 )71,          (word8 )174}, 
     {          (word8 )175,          (word8 )234,          (word8 )69,          (word8 )175}, 
     {          (word8 )176,          (word8 )203,          (word8 )123,          (word8 )176}, 
     {          (word8 )177,          (word8 )200,          (word8 )121,          (word8 )177}, 
     {          (word8 )178,          (word8 )205,          (word8 )127,          (word8 )178}, 
     {          (word8 )179,          (word8 )206,          (word8 )125,          (word8 )179}, 
     {          (word8 )180,          (word8 )199,          (word8 )115,          (word8 )180}, 
     {          (word8 )181,          (word8 )196,          (word8 )113,          (word8 )181}, 
     {          (word8 )182,          (word8 )193,          (word8 )119,          (word8 )182}, 
     {          (word8 )183,          (word8 )194,          (word8 )117,          (word8 )183}, 
     {          (word8 )184,          (word8 )211,          (word8 )107,          (word8 )184}, 
     {          (word8 )185,          (word8 )208,          (word8 )105,          (word8 )185}, 
     {          (word8 )186,          (word8 )213,          (word8 )111,          (word8 )186}, 
     {          (word8 )187,          (word8 )214,          (word8 )109,          (word8 )187}, 
     {          (word8 )188,          (word8 )223,          (word8 )99,          (word8 )188}, 
     {          (word8 )189,          (word8 )220,          (word8 )97,          (word8 )189}, 
     {          (word8 )190,          (word8 )217,          (word8 )103,          (word8 )190}, 
     {          (word8 )191,          (word8 )218,          (word8 )101,          (word8 )191}, 
     {          (word8 )192,          (word8 )91,          (word8 )155,          (word8 )192}, 
     {          (word8 )193,          (word8 )88,          (word8 )153,          (word8 )193}, 
     {          (word8 )194,          (word8 )93,          (word8 )159,          (word8 )194}, 
     {          (word8 )195,          (word8 )94,          (word8 )157,          (word8 )195}, 
     {          (word8 )196,          (word8 )87,          (word8 )147,          (word8 )196}, 
     {          (word8 )197,          (word8 )84,          (word8 )145,          (word8 )197}, 
     {          (word8 )198,          (word8 )81,          (word8 )151,          (word8 )198}, 
     {          (word8 )199,          (word8 )82,          (word8 )149,          (word8 )199}, 
     {          (word8 )200,          (word8 )67,          (word8 )139,          (word8 )200}, 
     {          (word8 )201,          (word8 )64,          (word8 )137,          (word8 )201}, 
     {          (word8 )202,          (word8 )69,          (word8 )143,          (word8 )202}, 
     {          (word8 )203,          (word8 )70,          (word8 )141,          (word8 )203}, 
     {          (word8 )204,          (word8 )79,          (word8 )131,          (word8 )204}, 
     {          (word8 )205,          (word8 )76,          (word8 )129,          (word8 )205}, 
     {          (word8 )206,          (word8 )73,          (word8 )135,          (word8 )206}, 
     {          (word8 )207,          (word8 )74,          (word8 )133,          (word8 )207}, 
     {          (word8 )208,          (word8 )107,          (word8 )187,          (word8 )208}, 
     {          (word8 )209,          (word8 )104,          (word8 )185,          (word8 )209}, 
     {          (word8 )210,          (word8 )109,          (word8 )191,          (word8 )210}, 
     {          (word8 )211,          (word8 )110,          (word8 )189,          (word8 )211}, 
     {          (word8 )212,          (word8 )103,          (word8 )179,          (word8 )212}, 
     {          (word8 )213,          (word8 )100,          (word8 )177,          (word8 )213}, 
     {          (word8 )214,          (word8 )97,          (word8 )183,          (word8 )214}, 
     {          (word8 )215,          (word8 )98,          (word8 )181,          (word8 )215}, 
     {          (word8 )216,          (word8 )115,          (word8 )171,          (word8 )216}, 
     {          (word8 )217,          (word8 )112,          (word8 )169,          (word8 )217}, 
     {          (word8 )218,          (word8 )117,          (word8 )175,          (word8 )218}, 
     {          (word8 )219,          (word8 )118,          (word8 )173,          (word8 )219}, 
     {          (word8 )220,          (word8 )127,          (word8 )163,          (word8 )220}, 
     {          (word8 )221,          (word8 )124,          (word8 )161,          (word8 )221}, 
     {          (word8 )222,          (word8 )121,          (word8 )167,          (word8 )222}, 
     {          (word8 )223,          (word8 )122,          (word8 )165,          (word8 )223}, 
     {          (word8 )224,          (word8 )59,          (word8 )219,          (word8 )224}, 
     {          (word8 )225,          (word8 )56,          (word8 )217,          (word8 )225}, 
     {          (word8 )226,          (word8 )61,          (word8 )223,          (word8 )226}, 
     {          (word8 )227,          (word8 )62,          (word8 )221,          (word8 )227}, 
     {          (word8 )228,          (word8 )55,          (word8 )211,          (word8 )228}, 
     {          (word8 )229,          (word8 )52,          (word8 )209,          (word8 )229}, 
     {          (word8 )230,          (word8 )49,          (word8 )215,          (word8 )230}, 
     {          (word8 )231,          (word8 )50,          (word8 )213,          (word8 )231}, 
     {          (word8 )232,          (word8 )35,          (word8 )203,          (word8 )232}, 
     {          (word8 )233,          (word8 )32,          (word8 )201,          (word8 )233}, 
     {          (word8 )234,          (word8 )37,          (word8 )207,          (word8 )234}, 
     {          (word8 )235,          (word8 )38,          (word8 )205,          (word8 )235}, 
     {          (word8 )236,          (word8 )47,          (word8 )195,          (word8 )236}, 
     {          (word8 )237,          (word8 )44,          (word8 )193,          (word8 )237}, 
     {          (word8 )238,          (word8 )41,          (word8 )199,          (word8 )238}, 
     {          (word8 )239,          (word8 )42,          (word8 )197,          (word8 )239}, 
     {          (word8 )240,          (word8 )11,          (word8 )251,          (word8 )240}, 
     {          (word8 )241,          (word8 )8,          (word8 )249,          (word8 )241}, 
     {          (word8 )242,          (word8 )13,          (word8 )255,          (word8 )242}, 
     {          (word8 )243,          (word8 )14,          (word8 )253,          (word8 )243}, 
     {          (word8 )244,          (word8 )7,          (word8 )243,          (word8 )244}, 
     {          (word8 )245,          (word8 )4,          (word8 )241,          (word8 )245}, 
     {          (word8 )246,          (word8 )1,          (word8 )247,          (word8 )246}, 
     {          (word8 )247,          (word8 )2,          (word8 )245,          (word8 )247}, 
     {          (word8 )248,          (word8 )19,          (word8 )235,          (word8 )248}, 
     {          (word8 )249,          (word8 )16,          (word8 )233,          (word8 )249}, 
     {          (word8 )250,          (word8 )21,          (word8 )239,          (word8 )250}, 
     {          (word8 )251,          (word8 )22,          (word8 )237,          (word8 )251}, 
     {          (word8 )252,          (word8 )31,          (word8 )227,          (word8 )252}, 
     {          (word8 )253,          (word8 )28,          (word8 )225,          (word8 )253}, 
     {          (word8 )254,          (word8 )25,          (word8 )231,          (word8 )254}, 
     {          (word8 )255,          (word8 )26,          (word8 )229,          (word8 )255}}, 
   { {          (word8 )0,          (word8 )0,          (word8 )0,          (word8 )0}, 
     {          (word8 )1,          (word8 )1,          (word8 )3,          (word8 )2}, 
     {          (word8 )2,          (word8 )2,          (word8 )6,          (word8 )4}, 
     {          (word8 )3,          (word8 )3,          (word8 )5,          (word8 )6}, 
     {          (word8 )4,          (word8 )4,          (word8 )12,          (word8 )8}, 
     {          (word8 )5,          (word8 )5,          (word8 )15,          (word8 )10}, 
     {          (word8 )6,          (word8 )6,          (word8 )10,          (word8 )12}, 
     {          (word8 )7,          (word8 )7,          (word8 )9,          (word8 )14}, 
     {          (word8 )8,          (word8 )8,          (word8 )24,          (word8 )16}, 
     {          (word8 )9,          (word8 )9,          (word8 )27,          (word8 )18}, 
     {          (word8 )10,          (word8 )10,          (word8 )30,          (word8 )20}, 
     {          (word8 )11,          (word8 )11,          (word8 )29,          (word8 )22}, 
     {          (word8 )12,          (word8 )12,          (word8 )20,          (word8 )24}, 
     {          (word8 )13,          (word8 )13,          (word8 )23,          (word8 )26}, 
     {          (word8 )14,          (word8 )14,          (word8 )18,          (word8 )28}, 
     {          (word8 )15,          (word8 )15,          (word8 )17,          (word8 )30}, 
     {          (word8 )16,          (word8 )16,          (word8 )48,          (word8 )32}, 
     {          (word8 )17,          (word8 )17,          (word8 )51,          (word8 )34}, 
     {          (word8 )18,          (word8 )18,          (word8 )54,          (word8 )36}, 
     {          (word8 )19,          (word8 )19,          (word8 )53,          (word8 )38}, 
     {          (word8 )20,          (word8 )20,          (word8 )60,          (word8 )40}, 
     {          (word8 )21,          (word8 )21,          (word8 )63,          (word8 )42}, 
     {          (word8 )22,          (word8 )22,          (word8 )58,          (word8 )44}, 
     {          (word8 )23,          (word8 )23,          (word8 )57,          (word8 )46}, 
     {          (word8 )24,          (word8 )24,          (word8 )40,          (word8 )48}, 
     {          (word8 )25,          (word8 )25,          (word8 )43,          (word8 )50}, 
     {          (word8 )26,          (word8 )26,          (word8 )46,          (word8 )52}, 
     {          (word8 )27,          (word8 )27,          (word8 )45,          (word8 )54}, 
     {          (word8 )28,          (word8 )28,          (word8 )36,          (word8 )56}, 
     {          (word8 )29,          (word8 )29,          (word8 )39,          (word8 )58}, 
     {          (word8 )30,          (word8 )30,          (word8 )34,          (word8 )60}, 
     {          (word8 )31,          (word8 )31,          (word8 )33,          (word8 )62}, 
     {          (word8 )32,          (word8 )32,          (word8 )96,          (word8 )64}, 
     {          (word8 )33,          (word8 )33,          (word8 )99,          (word8 )66}, 
     {          (word8 )34,          (word8 )34,          (word8 )102,          (word8 )68}, 
     {          (word8 )35,          (word8 )35,          (word8 )101,          (word8 )70}, 
     {          (word8 )36,          (word8 )36,          (word8 )108,          (word8 )72}, 
     {          (word8 )37,          (word8 )37,          (word8 )111,          (word8 )74}, 
     {          (word8 )38,          (word8 )38,          (word8 )106,          (word8 )76}, 
     {          (word8 )39,          (word8 )39,          (word8 )105,          (word8 )78}, 
     {          (word8 )40,          (word8 )40,          (word8 )120,          (word8 )80}, 
     {          (word8 )41,          (word8 )41,          (word8 )123,          (word8 )82}, 
     {          (word8 )42,          (word8 )42,          (word8 )126,          (word8 )84}, 
     {          (word8 )43,          (word8 )43,          (word8 )125,          (word8 )86}, 
     {          (word8 )44,          (word8 )44,          (word8 )116,          (word8 )88}, 
     {          (word8 )45,          (word8 )45,          (word8 )119,          (word8 )90}, 
     {          (word8 )46,          (word8 )46,          (word8 )114,          (word8 )92}, 
     {          (word8 )47,          (word8 )47,          (word8 )113,          (word8 )94}, 
     {          (word8 )48,          (word8 )48,          (word8 )80,          (word8 )96}, 
     {          (word8 )49,          (word8 )49,          (word8 )83,          (word8 )98}, 
     {          (word8 )50,          (word8 )50,          (word8 )86,          (word8 )100}, 
     {          (word8 )51,          (word8 )51,          (word8 )85,          (word8 )102}, 
     {          (word8 )52,          (word8 )52,          (word8 )92,          (word8 )104}, 
     {          (word8 )53,          (word8 )53,          (word8 )95,          (word8 )106}, 
     {          (word8 )54,          (word8 )54,          (word8 )90,          (word8 )108}, 
     {          (word8 )55,          (word8 )55,          (word8 )89,          (word8 )110}, 
     {          (word8 )56,          (word8 )56,          (word8 )72,          (word8 )112}, 
     {          (word8 )57,          (word8 )57,          (word8 )75,          (word8 )114}, 
     {          (word8 )58,          (word8 )58,          (word8 )78,          (word8 )116}, 
     {          (word8 )59,          (word8 )59,          (word8 )77,          (word8 )118}, 
     {          (word8 )60,          (word8 )60,          (word8 )68,          (word8 )120}, 
     {          (word8 )61,          (word8 )61,          (word8 )71,          (word8 )122}, 
     {          (word8 )62,          (word8 )62,          (word8 )66,          (word8 )124}, 
     {          (word8 )63,          (word8 )63,          (word8 )65,          (word8 )126}, 
     {          (word8 )64,          (word8 )64,          (word8 )192,          (word8 )128}, 
     {          (word8 )65,          (word8 )65,          (word8 )195,          (word8 )130}, 
     {          (word8 )66,          (word8 )66,          (word8 )198,          (word8 )132}, 
     {          (word8 )67,          (word8 )67,          (word8 )197,          (word8 )134}, 
     {          (word8 )68,          (word8 )68,          (word8 )204,          (word8 )136}, 
     {          (word8 )69,          (word8 )69,          (word8 )207,          (word8 )138}, 
     {          (word8 )70,          (word8 )70,          (word8 )202,          (word8 )140}, 
     {          (word8 )71,          (word8 )71,          (word8 )201,          (word8 )142}, 
     {          (word8 )72,          (word8 )72,          (word8 )216,          (word8 )144}, 
     {          (word8 )73,          (word8 )73,          (word8 )219,          (word8 )146}, 
     {          (word8 )74,          (word8 )74,          (word8 )222,          (word8 )148}, 
     {          (word8 )75,          (word8 )75,          (word8 )221,          (word8 )150}, 
     {          (word8 )76,          (word8 )76,          (word8 )212,          (word8 )152}, 
     {          (word8 )77,          (word8 )77,          (word8 )215,          (word8 )154}, 
     {          (word8 )78,          (word8 )78,          (word8 )210,          (word8 )156}, 
     {          (word8 )79,          (word8 )79,          (word8 )209,          (word8 )158}, 
     {          (word8 )80,          (word8 )80,          (word8 )240,          (word8 )160}, 
     {          (word8 )81,          (word8 )81,          (word8 )243,          (word8 )162}, 
     {          (word8 )82,          (word8 )82,          (word8 )246,          (word8 )164}, 
     {          (word8 )83,          (word8 )83,          (word8 )245,          (word8 )166}, 
     {          (word8 )84,          (word8 )84,          (word8 )252,          (word8 )168}, 
     {          (word8 )85,          (word8 )85,          (word8 )255,          (word8 )170}, 
     {          (word8 )86,          (word8 )86,          (word8 )250,          (word8 )172}, 
     {          (word8 )87,          (word8 )87,          (word8 )249,          (word8 )174}, 
     {          (word8 )88,          (word8 )88,          (word8 )232,          (word8 )176}, 
     {          (word8 )89,          (word8 )89,          (word8 )235,          (word8 )178}, 
     {          (word8 )90,          (word8 )90,          (word8 )238,          (word8 )180}, 
     {          (word8 )91,          (word8 )91,          (word8 )237,          (word8 )182}, 
     {          (word8 )92,          (word8 )92,          (word8 )228,          (word8 )184}, 
     {          (word8 )93,          (word8 )93,          (word8 )231,          (word8 )186}, 
     {          (word8 )94,          (word8 )94,          (word8 )226,          (word8 )188}, 
     {          (word8 )95,          (word8 )95,          (word8 )225,          (word8 )190}, 
     {          (word8 )96,          (word8 )96,          (word8 )160,          (word8 )192}, 
     {          (word8 )97,          (word8 )97,          (word8 )163,          (word8 )194}, 
     {          (word8 )98,          (word8 )98,          (word8 )166,          (word8 )196}, 
     {          (word8 )99,          (word8 )99,          (word8 )165,          (word8 )198}, 
     {          (word8 )100,          (word8 )100,          (word8 )172,          (word8 )200}, 
     {          (word8 )101,          (word8 )101,          (word8 )175,          (word8 )202}, 
     {          (word8 )102,          (word8 )102,          (word8 )170,          (word8 )204}, 
     {          (word8 )103,          (word8 )103,          (word8 )169,          (word8 )206}, 
     {          (word8 )104,          (word8 )104,          (word8 )184,          (word8 )208}, 
     {          (word8 )105,          (word8 )105,          (word8 )187,          (word8 )210}, 
     {          (word8 )106,          (word8 )106,          (word8 )190,          (word8 )212}, 
     {          (word8 )107,          (word8 )107,          (word8 )189,          (word8 )214}, 
     {          (word8 )108,          (word8 )108,          (word8 )180,          (word8 )216}, 
     {          (word8 )109,          (word8 )109,          (word8 )183,          (word8 )218}, 
     {          (word8 )110,          (word8 )110,          (word8 )178,          (word8 )220}, 
     {          (word8 )111,          (word8 )111,          (word8 )177,          (word8 )222}, 
     {          (word8 )112,          (word8 )112,          (word8 )144,          (word8 )224}, 
     {          (word8 )113,          (word8 )113,          (word8 )147,          (word8 )226}, 
     {          (word8 )114,          (word8 )114,          (word8 )150,          (word8 )228}, 
     {          (word8 )115,          (word8 )115,          (word8 )149,          (word8 )230}, 
     {          (word8 )116,          (word8 )116,          (word8 )156,          (word8 )232}, 
     {          (word8 )117,          (word8 )117,          (word8 )159,          (word8 )234}, 
     {          (word8 )118,          (word8 )118,          (word8 )154,          (word8 )236}, 
     {          (word8 )119,          (word8 )119,          (word8 )153,          (word8 )238}, 
     {          (word8 )120,          (word8 )120,          (word8 )136,          (word8 )240}, 
     {          (word8 )121,          (word8 )121,          (word8 )139,          (word8 )242}, 
     {          (word8 )122,          (word8 )122,          (word8 )142,          (word8 )244}, 
     {          (word8 )123,          (word8 )123,          (word8 )141,          (word8 )246}, 
     {          (word8 )124,          (word8 )124,          (word8 )132,          (word8 )248}, 
     {          (word8 )125,          (word8 )125,          (word8 )135,          (word8 )250}, 
     {          (word8 )126,          (word8 )126,          (word8 )130,          (word8 )252}, 
     {          (word8 )127,          (word8 )127,          (word8 )129,          (word8 )254}, 
     {          (word8 )128,          (word8 )128,          (word8 )155,          (word8 )27}, 
     {          (word8 )129,          (word8 )129,          (word8 )152,          (word8 )25}, 
     {          (word8 )130,          (word8 )130,          (word8 )157,          (word8 )31}, 
     {          (word8 )131,          (word8 )131,          (word8 )158,          (word8 )29}, 
     {          (word8 )132,          (word8 )132,          (word8 )151,          (word8 )19}, 
     {          (word8 )133,          (word8 )133,          (word8 )148,          (word8 )17}, 
     {          (word8 )134,          (word8 )134,          (word8 )145,          (word8 )23}, 
     {          (word8 )135,          (word8 )135,          (word8 )146,          (word8 )21}, 
     {          (word8 )136,          (word8 )136,          (word8 )131,          (word8 )11}, 
     {          (word8 )137,          (word8 )137,          (word8 )128,          (word8 )9}, 
     {          (word8 )138,          (word8 )138,          (word8 )133,          (word8 )15}, 
     {          (word8 )139,          (word8 )139,          (word8 )134,          (word8 )13}, 
     {          (word8 )140,          (word8 )140,          (word8 )143,          (word8 )3}, 
     {          (word8 )141,          (word8 )141,          (word8 )140,          (word8 )1}, 
     {          (word8 )142,          (word8 )142,          (word8 )137,          (word8 )7}, 
     {          (word8 )143,          (word8 )143,          (word8 )138,          (word8 )5}, 
     {          (word8 )144,          (word8 )144,          (word8 )171,          (word8 )59}, 
     {          (word8 )145,          (word8 )145,          (word8 )168,          (word8 )57}, 
     {          (word8 )146,          (word8 )146,          (word8 )173,          (word8 )63}, 
     {          (word8 )147,          (word8 )147,          (word8 )174,          (word8 )61}, 
     {          (word8 )148,          (word8 )148,          (word8 )167,          (word8 )51}, 
     {          (word8 )149,          (word8 )149,          (word8 )164,          (word8 )49}, 
     {          (word8 )150,          (word8 )150,          (word8 )161,          (word8 )55}, 
     {          (word8 )151,          (word8 )151,          (word8 )162,          (word8 )53}, 
     {          (word8 )152,          (word8 )152,          (word8 )179,          (word8 )43}, 
     {          (word8 )153,          (word8 )153,          (word8 )176,          (word8 )41}, 
     {          (word8 )154,          (word8 )154,          (word8 )181,          (word8 )47}, 
     {          (word8 )155,          (word8 )155,          (word8 )182,          (word8 )45}, 
     {          (word8 )156,          (word8 )156,          (word8 )191,          (word8 )35}, 
     {          (word8 )157,          (word8 )157,          (word8 )188,          (word8 )33}, 
     {          (word8 )158,          (word8 )158,          (word8 )185,          (word8 )39}, 
     {          (word8 )159,          (word8 )159,          (word8 )186,          (word8 )37}, 
     {          (word8 )160,          (word8 )160,          (word8 )251,          (word8 )91}, 
     {          (word8 )161,          (word8 )161,          (word8 )248,          (word8 )89}, 
     {          (word8 )162,          (word8 )162,          (word8 )253,          (word8 )95}, 
     {          (word8 )163,          (word8 )163,          (word8 )254,          (word8 )93}, 
     {          (word8 )164,          (word8 )164,          (word8 )247,          (word8 )83}, 
     {          (word8 )165,          (word8 )165,          (word8 )244,          (word8 )81}, 
     {          (word8 )166,          (word8 )166,          (word8 )241,          (word8 )87}, 
     {          (word8 )167,          (word8 )167,          (word8 )242,          (word8 )85}, 
     {          (word8 )168,          (word8 )168,          (word8 )227,          (word8 )75}, 
     {          (word8 )169,          (word8 )169,          (word8 )224,          (word8 )73}, 
     {          (word8 )170,          (word8 )170,          (word8 )229,          (word8 )79}, 
     {          (word8 )171,          (word8 )171,          (word8 )230,          (word8 )77}, 
     {          (word8 )172,          (word8 )172,          (word8 )239,          (word8 )67}, 
     {          (word8 )173,          (word8 )173,          (word8 )236,          (word8 )65}, 
     {          (word8 )174,          (word8 )174,          (word8 )233,          (word8 )71}, 
     {          (word8 )175,          (word8 )175,          (word8 )234,          (word8 )69}, 
     {          (word8 )176,          (word8 )176,          (word8 )203,          (word8 )123}, 
     {          (word8 )177,          (word8 )177,          (word8 )200,          (word8 )121}, 
     {          (word8 )178,          (word8 )178,          (word8 )205,          (word8 )127}, 
     {          (word8 )179,          (word8 )179,          (word8 )206,          (word8 )125}, 
     {          (word8 )180,          (word8 )180,          (word8 )199,          (word8 )115}, 
     {          (word8 )181,          (word8 )181,          (word8 )196,          (word8 )113}, 
     {          (word8 )182,          (word8 )182,          (word8 )193,          (word8 )119}, 
     {          (word8 )183,          (word8 )183,          (word8 )194,          (word8 )117}, 
     {          (word8 )184,          (word8 )184,          (word8 )211,          (word8 )107}, 
     {          (word8 )185,          (word8 )185,          (word8 )208,          (word8 )105}, 
     {          (word8 )186,          (word8 )186,          (word8 )213,          (word8 )111}, 
     {          (word8 )187,          (word8 )187,          (word8 )214,          (word8 )109}, 
     {          (word8 )188,          (word8 )188,          (word8 )223,          (word8 )99}, 
     {          (word8 )189,          (word8 )189,          (word8 )220,          (word8 )97}, 
     {          (word8 )190,          (word8 )190,          (word8 )217,          (word8 )103}, 
     {          (word8 )191,          (word8 )191,          (word8 )218,          (word8 )101}, 
     {          (word8 )192,          (word8 )192,          (word8 )91,          (word8 )155}, 
     {          (word8 )193,          (word8 )193,          (word8 )88,          (word8 )153}, 
     {          (word8 )194,          (word8 )194,          (word8 )93,          (word8 )159}, 
     {          (word8 )195,          (word8 )195,          (word8 )94,          (word8 )157}, 
     {          (word8 )196,          (word8 )196,          (word8 )87,          (word8 )147}, 
     {          (word8 )197,          (word8 )197,          (word8 )84,          (word8 )145}, 
     {          (word8 )198,          (word8 )198,          (word8 )81,          (word8 )151}, 
     {          (word8 )199,          (word8 )199,          (word8 )82,          (word8 )149}, 
     {          (word8 )200,          (word8 )200,          (word8 )67,          (word8 )139}, 
     {          (word8 )201,          (word8 )201,          (word8 )64,          (word8 )137}, 
     {          (word8 )202,          (word8 )202,          (word8 )69,          (word8 )143}, 
     {          (word8 )203,          (word8 )203,          (word8 )70,          (word8 )141}, 
     {          (word8 )204,          (word8 )204,          (word8 )79,          (word8 )131}, 
     {          (word8 )205,          (word8 )205,          (word8 )76,          (word8 )129}, 
     {          (word8 )206,          (word8 )206,          (word8 )73,          (word8 )135}, 
     {          (word8 )207,          (word8 )207,          (word8 )74,          (word8 )133}, 
     {          (word8 )208,          (word8 )208,          (word8 )107,          (word8 )187}, 
     {          (word8 )209,          (word8 )209,          (word8 )104,          (word8 )185}, 
     {          (word8 )210,          (word8 )210,          (word8 )109,          (word8 )191}, 
     {          (word8 )211,          (word8 )211,          (word8 )110,          (word8 )189}, 
     {          (word8 )212,          (word8 )212,          (word8 )103,          (word8 )179}, 
     {          (word8 )213,          (word8 )213,          (word8 )100,          (word8 )177}, 
     {          (word8 )214,          (word8 )214,          (word8 )97,          (word8 )183}, 
     {          (word8 )215,          (word8 )215,          (word8 )98,          (word8 )181}, 
     {          (word8 )216,          (word8 )216,          (word8 )115,          (word8 )171}, 
     {          (word8 )217,          (word8 )217,          (word8 )112,          (word8 )169}, 
     {          (word8 )218,          (word8 )218,          (word8 )117,          (word8 )175}, 
     {          (word8 )219,          (word8 )219,          (word8 )118,          (word8 )173}, 
     {          (word8 )220,          (word8 )220,          (word8 )127,          (word8 )163}, 
     {          (word8 )221,          (word8 )221,          (word8 )124,          (word8 )161}, 
     {          (word8 )222,          (word8 )222,          (word8 )121,          (word8 )167}, 
     {          (word8 )223,          (word8 )223,          (word8 )122,          (word8 )165}, 
     {          (word8 )224,          (word8 )224,          (word8 )59,          (word8 )219}, 
     {          (word8 )225,          (word8 )225,          (word8 )56,          (word8 )217}, 
     {          (word8 )226,          (word8 )226,          (word8 )61,          (word8 )223}, 
     {          (word8 )227,          (word8 )227,          (word8 )62,          (word8 )221}, 
     {          (word8 )228,          (word8 )228,          (word8 )55,          (word8 )211}, 
     {          (word8 )229,          (word8 )229,          (word8 )52,          (word8 )209}, 
     {          (word8 )230,          (word8 )230,          (word8 )49,          (word8 )215}, 
     {          (word8 )231,          (word8 )231,          (word8 )50,          (word8 )213}, 
     {          (word8 )232,          (word8 )232,          (word8 )35,          (word8 )203}, 
     {          (word8 )233,          (word8 )233,          (word8 )32,          (word8 )201}, 
     {          (word8 )234,          (word8 )234,          (word8 )37,          (word8 )207}, 
     {          (word8 )235,          (word8 )235,          (word8 )38,          (word8 )205}, 
     {          (word8 )236,          (word8 )236,          (word8 )47,          (word8 )195}, 
     {          (word8 )237,          (word8 )237,          (word8 )44,          (word8 )193}, 
     {          (word8 )238,          (word8 )238,          (word8 )41,          (word8 )199}, 
     {          (word8 )239,          (word8 )239,          (word8 )42,          (word8 )197}, 
     {          (word8 )240,          (word8 )240,          (word8 )11,          (word8 )251}, 
     {          (word8 )241,          (word8 )241,          (word8 )8,          (word8 )249}, 
     {          (word8 )242,          (word8 )242,          (word8 )13,          (word8 )255}, 
     {          (word8 )243,          (word8 )243,          (word8 )14,          (word8 )253}, 
     {          (word8 )244,          (word8 )244,          (word8 )7,          (word8 )243}, 
     {          (word8 )245,          (word8 )245,          (word8 )4,          (word8 )241}, 
     {          (word8 )246,          (word8 )246,          (word8 )1,          (word8 )247}, 
     {          (word8 )247,          (word8 )247,          (word8 )2,          (word8 )245}, 
     {          (word8 )248,          (word8 )248,          (word8 )19,          (word8 )235}, 
     {          (word8 )249,          (word8 )249,          (word8 )16,          (word8 )233}, 
     {          (word8 )250,          (word8 )250,          (word8 )21,          (word8 )239}, 
     {          (word8 )251,          (word8 )251,          (word8 )22,          (word8 )237}, 
     {          (word8 )252,          (word8 )252,          (word8 )31,          (word8 )227}, 
     {          (word8 )253,          (word8 )253,          (word8 )28,          (word8 )225}, 
     {          (word8 )254,          (word8 )254,          (word8 )25,          (word8 )231}, 
     {          (word8 )255,          (word8 )255,          (word8 )26,          (word8 )229}}};
word8 M1b[4][256][4]  = { { {          (word8 )0,          (word8 )0,          (word8 )0,          (word8 )0}, 
     {          (word8 )14,          (word8 )9,          (word8 )13,          (word8 )11}, 
     {          (word8 )28,          (word8 )18,          (word8 )26,          (word8 )22}, 
     {          (word8 )18,          (word8 )27,          (word8 )23,          (word8 )29}, 
     {          (word8 )56,          (word8 )36,          (word8 )52,          (word8 )44}, 
     {          (word8 )54,          (word8 )45,          (word8 )57,          (word8 )39}, 
     {          (word8 )36,          (word8 )54,          (word8 )46,          (word8 )58}, 
     {          (word8 )42,          (word8 )63,          (word8 )35,          (word8 )49}, 
     {          (word8 )112,          (word8 )72,          (word8 )104,          (word8 )88}, 
     {          (word8 )126,          (word8 )65,          (word8 )101,          (word8 )83}, 
     {          (word8 )108,          (word8 )90,          (word8 )114,          (word8 )78}, 
     {          (word8 )98,          (word8 )83,          (word8 )127,          (word8 )69}, 
     {          (word8 )72,          (word8 )108,          (word8 )92,          (word8 )116}, 
     {          (word8 )70,          (word8 )101,          (word8 )81,          (word8 )127}, 
     {          (word8 )84,          (word8 )126,          (word8 )70,          (word8 )98}, 
     {          (word8 )90,          (word8 )119,          (word8 )75,          (word8 )105}, 
     {          (word8 )224,          (word8 )144,          (word8 )208,          (word8 )176}, 
     {          (word8 )238,          (word8 )153,          (word8 )221,          (word8 )187}, 
     {          (word8 )252,          (word8 )130,          (word8 )202,          (word8 )166}, 
     {          (word8 )242,          (word8 )139,          (word8 )199,          (word8 )173}, 
     {          (word8 )216,          (word8 )180,          (word8 )228,          (word8 )156}, 
     {          (word8 )214,          (word8 )189,          (word8 )233,          (word8 )151}, 
     {          (word8 )196,          (word8 )166,          (word8 )254,          (word8 )138}, 
     {          (word8 )202,          (word8 )175,          (word8 )243,          (word8 )129}, 
     {          (word8 )144,          (word8 )216,          (word8 )184,          (word8 )232}, 
     {          (word8 )158,          (word8 )209,          (word8 )181,          (word8 )227}, 
     {          (word8 )140,          (word8 )202,          (word8 )162,          (word8 )254}, 
     {          (word8 )130,          (word8 )195,          (word8 )175,          (word8 )245}, 
     {          (word8 )168,          (word8 )252,          (word8 )140,          (word8 )196}, 
     {          (word8 )166,          (word8 )245,          (word8 )129,          (word8 )207}, 
     {          (word8 )180,          (word8 )238,          (word8 )150,          (word8 )210}, 
     {          (word8 )186,          (word8 )231,          (word8 )155,          (word8 )217}, 
     {          (word8 )219,          (word8 )59,          (word8 )187,          (word8 )123}, 
     {          (word8 )213,          (word8 )50,          (word8 )182,          (word8 )112}, 
     {          (word8 )199,          (word8 )41,          (word8 )161,          (word8 )109}, 
     {          (word8 )201,          (word8 )32,          (word8 )172,          (word8 )102}, 
     {          (word8 )227,          (word8 )31,          (word8 )143,          (word8 )87}, 
     {          (word8 )237,          (word8 )22,          (word8 )130,          (word8 )92}, 
     {          (word8 )255,          (word8 )13,          (word8 )149,          (word8 )65}, 
     {          (word8 )241,          (word8 )4,          (word8 )152,          (word8 )74}, 
     {          (word8 )171,          (word8 )115,          (word8 )211,          (word8 )35}, 
     {          (word8 )165,          (word8 )122,          (word8 )222,          (word8 )40}, 
     {          (word8 )183,          (word8 )97,          (word8 )201,          (word8 )53}, 
     {          (word8 )185,          (word8 )104,          (word8 )196,          (word8 )62}, 
     {          (word8 )147,          (word8 )87,          (word8 )231,          (word8 )15}, 
     {          (word8 )157,          (word8 )94,          (word8 )234,          (word8 )4}, 
     {          (word8 )143,          (word8 )69,          (word8 )253,          (word8 )25}, 
     {          (word8 )129,          (word8 )76,          (word8 )240,          (word8 )18}, 
     {          (word8 )59,          (word8 )171,          (word8 )107,          (word8 )203}, 
     {          (word8 )53,          (word8 )162,          (word8 )102,          (word8 )192}, 
     {          (word8 )39,          (word8 )185,          (word8 )113,          (word8 )221}, 
     {          (word8 )41,          (word8 )176,          (word8 )124,          (word8 )214}, 
     {          (word8 )3,          (word8 )143,          (word8 )95,          (word8 )231}, 
     {          (word8 )13,          (word8 )134,          (word8 )82,          (word8 )236}, 
     {          (word8 )31,          (word8 )157,          (word8 )69,          (word8 )241}, 
     {          (word8 )17,          (word8 )148,          (word8 )72,          (word8 )250}, 
     {          (word8 )75,          (word8 )227,          (word8 )3,          (word8 )147}, 
     {          (word8 )69,          (word8 )234,          (word8 )14,          (word8 )152}, 
     {          (word8 )87,          (word8 )241,          (word8 )25,          (word8 )133}, 
     {          (word8 )89,          (word8 )248,          (word8 )20,          (word8 )142}, 
     {          (word8 )115,          (word8 )199,          (word8 )55,          (word8 )191}, 
     {          (word8 )125,          (word8 )206,          (word8 )58,          (word8 )180}, 
     {          (word8 )111,          (word8 )213,          (word8 )45,          (word8 )169}, 
     {          (word8 )97,          (word8 )220,          (word8 )32,          (word8 )162}, 
     {          (word8 )173,          (word8 )118,          (word8 )109,          (word8 )246}, 
     {          (word8 )163,          (word8 )127,          (word8 )96,          (word8 )253}, 
     {          (word8 )177,          (word8 )100,          (word8 )119,          (word8 )224}, 
     {          (word8 )191,          (word8 )109,          (word8 )122,          (word8 )235}, 
     {          (word8 )149,          (word8 )82,          (word8 )89,          (word8 )218}, 
     {          (word8 )155,          (word8 )91,          (word8 )84,          (word8 )209}, 
     {          (word8 )137,          (word8 )64,          (word8 )67,          (word8 )204}, 
     {          (word8 )135,          (word8 )73,          (word8 )78,          (word8 )199}, 
     {          (word8 )221,          (word8 )62,          (word8 )5,          (word8 )174}, 
     {          (word8 )211,          (word8 )55,          (word8 )8,          (word8 )165}, 
     {          (word8 )193,          (word8 )44,          (word8 )31,          (word8 )184}, 
     {          (word8 )207,          (word8 )37,          (word8 )18,          (word8 )179}, 
     {          (word8 )229,          (word8 )26,          (word8 )49,          (word8 )130}, 
     {          (word8 )235,          (word8 )19,          (word8 )60,          (word8 )137}, 
     {          (word8 )249,          (word8 )8,          (word8 )43,          (word8 )148}, 
     {          (word8 )247,          (word8 )1,          (word8 )38,          (word8 )159}, 
     {          (word8 )77,          (word8 )230,          (word8 )189,          (word8 )70}, 
     {          (word8 )67,          (word8 )239,          (word8 )176,          (word8 )77}, 
     {          (word8 )81,          (word8 )244,          (word8 )167,          (word8 )80}, 
     {          (word8 )95,          (word8 )253,          (word8 )170,          (word8 )91}, 
     {          (word8 )117,          (word8 )194,          (word8 )137,          (word8 )106}, 
     {          (word8 )123,          (word8 )203,          (word8 )132,          (word8 )97}, 
     {          (word8 )105,          (word8 )208,          (word8 )147,          (word8 )124}, 
     {          (word8 )103,          (word8 )217,          (word8 )158,          (word8 )119}, 
     {          (word8 )61,          (word8 )174,          (word8 )213,          (word8 )30}, 
     {          (word8 )51,          (word8 )167,          (word8 )216,          (word8 )21}, 
     {          (word8 )33,          (word8 )188,          (word8 )207,          (word8 )8}, 
     {          (word8 )47,          (word8 )181,          (word8 )194,          (word8 )3}, 
     {          (word8 )5,          (word8 )138,          (word8 )225,          (word8 )50}, 
     {          (word8 )11,          (word8 )131,          (word8 )236,          (word8 )57}, 
     {          (word8 )25,          (word8 )152,          (word8 )251,          (word8 )36}, 
     {          (word8 )23,          (word8 )145,          (word8 )246,          (word8 )47}, 
     {          (word8 )118,          (word8 )77,          (word8 )214,          (word8 )141}, 
     {          (word8 )120,          (word8 )68,          (word8 )219,          (word8 )134}, 
     {          (word8 )106,          (word8 )95,          (word8 )204,          (word8 )155}, 
     {          (word8 )100,          (word8 )86,          (word8 )193,          (word8 )144}, 
     {          (word8 )78,          (word8 )105,          (word8 )226,          (word8 )161}, 
     {          (word8 )64,          (word8 )96,          (word8 )239,          (word8 )170}, 
     {          (word8 )82,          (word8 )123,          (word8 )248,          (word8 )183}, 
     {          (word8 )92,          (word8 )114,          (word8 )245,          (word8 )188}, 
     {          (word8 )6,          (word8 )5,          (word8 )190,          (word8 )213}, 
     {          (word8 )8,          (word8 )12,          (word8 )179,          (word8 )222}, 
     {          (word8 )26,          (word8 )23,          (word8 )164,          (word8 )195}, 
     {          (word8 )20,          (word8 )30,          (word8 )169,          (word8 )200}, 
     {          (word8 )62,          (word8 )33,          (word8 )138,          (word8 )249}, 
     {          (word8 )48,          (word8 )40,          (word8 )135,          (word8 )242}, 
     {          (word8 )34,          (word8 )51,          (word8 )144,          (word8 )239}, 
     {          (word8 )44,          (word8 )58,          (word8 )157,          (word8 )228}, 
     {          (word8 )150,          (word8 )221,          (word8 )6,          (word8 )61}, 
     {          (word8 )152,          (word8 )212,          (word8 )11,          (word8 )54}, 
     {          (word8 )138,          (word8 )207,          (word8 )28,          (word8 )43}, 
     {          (word8 )132,          (word8 )198,          (word8 )17,          (word8 )32}, 
     {          (word8 )174,          (word8 )249,          (word8 )50,          (word8 )17}, 
     {          (word8 )160,          (word8 )240,          (word8 )63,          (word8 )26}, 
     {          (word8 )178,          (word8 )235,          (word8 )40,          (word8 )7}, 
     {          (word8 )188,          (word8 )226,          (word8 )37,          (word8 )12}, 
     {          (word8 )230,          (word8 )149,          (word8 )110,          (word8 )101}, 
     {          (word8 )232,          (word8 )156,          (word8 )99,          (word8 )110}, 
     {          (word8 )250,          (word8 )135,          (word8 )116,          (word8 )115}, 
     {          (word8 )244,          (word8 )142,          (word8 )121,          (word8 )120}, 
     {          (word8 )222,          (word8 )177,          (word8 )90,          (word8 )73}, 
     {          (word8 )208,          (word8 )184,          (word8 )87,          (word8 )66}, 
     {          (word8 )194,          (word8 )163,          (word8 )64,          (word8 )95}, 
     {          (word8 )204,          (word8 )170,          (word8 )77,          (word8 )84}, 
     {          (word8 )65,          (word8 )236,          (word8 )218,          (word8 )247}, 
     {          (word8 )79,          (word8 )229,          (word8 )215,          (word8 )252}, 
     {          (word8 )93,          (word8 )254,          (word8 )192,          (word8 )225}, 
     {          (word8 )83,          (word8 )247,          (word8 )205,          (word8 )234}, 
     {          (word8 )121,          (word8 )200,          (word8 )238,          (word8 )219}, 
     {          (word8 )119,          (word8 )193,          (word8 )227,          (word8 )208}, 
     {          (word8 )101,          (word8 )218,          (word8 )244,          (word8 )205}, 
     {          (word8 )107,          (word8 )211,          (word8 )249,          (word8 )198}, 
     {          (word8 )49,          (word8 )164,          (word8 )178,          (word8 )175}, 
     {          (word8 )63,          (word8 )173,          (word8 )191,          (word8 )164}, 
     {          (word8 )45,          (word8 )182,          (word8 )168,          (word8 )185}, 
     {          (word8 )35,          (word8 )191,          (word8 )165,          (word8 )178}, 
     {          (word8 )9,          (word8 )128,          (word8 )134,          (word8 )131}, 
     {          (word8 )7,          (word8 )137,          (word8 )139,          (word8 )136}, 
     {          (word8 )21,          (word8 )146,          (word8 )156,          (word8 )149}, 
     {          (word8 )27,          (word8 )155,          (word8 )145,          (word8 )158}, 
     {          (word8 )161,          (word8 )124,          (word8 )10,          (word8 )71}, 
     {          (word8 )175,          (word8 )117,          (word8 )7,          (word8 )76}, 
     {          (word8 )189,          (word8 )110,          (word8 )16,          (word8 )81}, 
     {          (word8 )179,          (word8 )103,          (word8 )29,          (word8 )90}, 
     {          (word8 )153,          (word8 )88,          (word8 )62,          (word8 )107}, 
     {          (word8 )151,          (word8 )81,          (word8 )51,          (word8 )96}, 
     {          (word8 )133,          (word8 )74,          (word8 )36,          (word8 )125}, 
     {          (word8 )139,          (word8 )67,          (word8 )41,          (word8 )118}, 
     {          (word8 )209,          (word8 )52,          (word8 )98,          (word8 )31}, 
     {          (word8 )223,          (word8 )61,          (word8 )111,          (word8 )20}, 
     {          (word8 )205,          (word8 )38,          (word8 )120,          (word8 )9}, 
     {          (word8 )195,          (word8 )47,          (word8 )117,          (word8 )2}, 
     {          (word8 )233,          (word8 )16,          (word8 )86,          (word8 )51}, 
     {          (word8 )231,          (word8 )25,          (word8 )91,          (word8 )56}, 
     {          (word8 )245,          (word8 )2,          (word8 )76,          (word8 )37}, 
     {          (word8 )251,          (word8 )11,          (word8 )65,          (word8 )46}, 
     {          (word8 )154,          (word8 )215,          (word8 )97,          (word8 )140}, 
     {          (word8 )148,          (word8 )222,          (word8 )108,          (word8 )135}, 
     {          (word8 )134,          (word8 )197,          (word8 )123,          (word8 )154}, 
     {          (word8 )136,          (word8 )204,          (word8 )118,          (word8 )145}, 
     {          (word8 )162,          (word8 )243,          (word8 )85,          (word8 )160}, 
     {          (word8 )172,          (word8 )250,          (word8 )88,          (word8 )171}, 
     {          (word8 )190,          (word8 )225,          (word8 )79,          (word8 )182}, 
     {          (word8 )176,          (word8 )232,          (word8 )66,          (word8 )189}, 
     {          (word8 )234,          (word8 )159,          (word8 )9,          (word8 )212}, 
     {          (word8 )228,          (word8 )150,          (word8 )4,          (word8 )223}, 
     {          (word8 )246,          (word8 )141,          (word8 )19,          (word8 )194}, 
     {          (word8 )248,          (word8 )132,          (word8 )30,          (word8 )201}, 
     {          (word8 )210,          (word8 )187,          (word8 )61,          (word8 )248}, 
     {          (word8 )220,          (word8 )178,          (word8 )48,          (word8 )243}, 
     {          (word8 )206,          (word8 )169,          (word8 )39,          (word8 )238}, 
     {          (word8 )192,          (word8 )160,          (word8 )42,          (word8 )229}, 
     {          (word8 )122,          (word8 )71,          (word8 )177,          (word8 )60}, 
     {          (word8 )116,          (word8 )78,          (word8 )188,          (word8 )55}, 
     {          (word8 )102,          (word8 )85,          (word8 )171,          (word8 )42}, 
     {          (word8 )104,          (word8 )92,          (word8 )166,          (word8 )33}, 
     {          (word8 )66,          (word8 )99,          (word8 )133,          (word8 )16}, 
     {          (word8 )76,          (word8 )106,          (word8 )136,          (word8 )27}, 
     {          (word8 )94,          (word8 )113,          (word8 )159,          (word8 )6}, 
     {          (word8 )80,          (word8 )120,          (word8 )146,          (word8 )13}, 
     {          (word8 )10,          (word8 )15,          (word8 )217,          (word8 )100}, 
     {          (word8 )4,          (word8 )6,          (word8 )212,          (word8 )111}, 
     {          (word8 )22,          (word8 )29,          (word8 )195,          (word8 )114}, 
     {          (word8 )24,          (word8 )20,          (word8 )206,          (word8 )121}, 
     {          (word8 )50,          (word8 )43,          (word8 )237,          (word8 )72}, 
     {          (word8 )60,          (word8 )34,          (word8 )224,          (word8 )67}, 
     {          (word8 )46,          (word8 )57,          (word8 )247,          (word8 )94}, 
     {          (word8 )32,          (word8 )48,          (word8 )250,          (word8 )85}, 
     {          (word8 )236,          (word8 )154,          (word8 )183,          (word8 )1}, 
     {          (word8 )226,          (word8 )147,          (word8 )186,          (word8 )10}, 
     {          (word8 )240,          (word8 )136,          (word8 )173,          (word8 )23}, 
     {          (word8 )254,          (word8 )129,          (word8 )160,          (word8 )28}, 
     {          (word8 )212,          (word8 )190,          (word8 )131,          (word8 )45}, 
     {          (word8 )218,          (word8 )183,          (word8 )142,          (word8 )38}, 
     {          (word8 )200,          (word8 )172,          (word8 )153,          (word8 )59}, 
     {          (word8 )198,          (word8 )165,          (word8 )148,          (word8 )48}, 
     {          (word8 )156,          (word8 )210,          (word8 )223,          (word8 )89}, 
     {          (word8 )146,          (word8 )219,          (word8 )210,          (word8 )82}, 
     {          (word8 )128,          (word8 )192,          (word8 )197,          (word8 )79}, 
     {          (word8 )142,          (word8 )201,          (word8 )200,          (word8 )68}, 
     {          (word8 )164,          (word8 )246,          (word8 )235,          (word8 )117}, 
     {          (word8 )170,          (word8 )255,          (word8 )230,          (word8 )126}, 
     {          (word8 )184,          (word8 )228,          (word8 )241,          (word8 )99}, 
     {          (word8 )182,          (word8 )237,          (word8 )252,          (word8 )104}, 
     {          (word8 )12,          (word8 )10,          (word8 )103,          (word8 )177}, 
     {          (word8 )2,          (word8 )3,          (word8 )106,          (word8 )186}, 
     {          (word8 )16,          (word8 )24,          (word8 )125,          (word8 )167}, 
     {          (word8 )30,          (word8 )17,          (word8 )112,          (word8 )172}, 
     {          (word8 )52,          (word8 )46,          (word8 )83,          (word8 )157}, 
     {          (word8 )58,          (word8 )39,          (word8 )94,          (word8 )150}, 
     {          (word8 )40,          (word8 )60,          (word8 )73,          (word8 )139}, 
     {          (word8 )38,          (word8 )53,          (word8 )68,          (word8 )128}, 
     {          (word8 )124,          (word8 )66,          (word8 )15,          (word8 )233}, 
     {          (word8 )114,          (word8 )75,          (word8 )2,          (word8 )226}, 
     {          (word8 )96,          (word8 )80,          (word8 )21,          (word8 )255}, 
     {          (word8 )110,          (word8 )89,          (word8 )24,          (word8 )244}, 
     {          (word8 )68,          (word8 )102,          (word8 )59,          (word8 )197}, 
     {          (word8 )74,          (word8 )111,          (word8 )54,          (word8 )206}, 
     {          (word8 )88,          (word8 )116,          (word8 )33,          (word8 )211}, 
     {          (word8 )86,          (word8 )125,          (word8 )44,          (word8 )216}, 
     {          (word8 )55,          (word8 )161,          (word8 )12,          (word8 )122}, 
     {          (word8 )57,          (word8 )168,          (word8 )1,          (word8 )113}, 
     {          (word8 )43,          (word8 )179,          (word8 )22,          (word8 )108}, 
     {          (word8 )37,          (word8 )186,          (word8 )27,          (word8 )103}, 
     {          (word8 )15,          (word8 )133,          (word8 )56,          (word8 )86}, 
     {          (word8 )1,          (word8 )140,          (word8 )53,          (word8 )93}, 
     {          (word8 )19,          (word8 )151,          (word8 )34,          (word8 )64}, 
     {          (word8 )29,          (word8 )158,          (word8 )47,          (word8 )75}, 
     {          (word8 )71,          (word8 )233,          (word8 )100,          (word8 )34}, 
     {          (word8 )73,          (word8 )224,          (word8 )105,          (word8 )41}, 
     {          (word8 )91,          (word8 )251,          (word8 )126,          (word8 )52}, 
     {          (word8 )85,          (word8 )242,          (word8 )115,          (word8 )63}, 
     {          (word8 )127,          (word8 )205,          (word8 )80,          (word8 )14}, 
     {          (word8 )113,          (word8 )196,          (word8 )93,          (word8 )5}, 
     {          (word8 )99,          (word8 )223,          (word8 )74,          (word8 )24}, 
     {          (word8 )109,          (word8 )214,          (word8 )71,          (word8 )19}, 
     {          (word8 )215,          (word8 )49,          (word8 )220,          (word8 )202}, 
     {          (word8 )217,          (word8 )56,          (word8 )209,          (word8 )193}, 
     {          (word8 )203,          (word8 )35,          (word8 )198,          (word8 )220}, 
     {          (word8 )197,          (word8 )42,          (word8 )203,          (word8 )215}, 
     {          (word8 )239,          (word8 )21,          (word8 )232,          (word8 )230}, 
     {          (word8 )225,          (word8 )28,          (word8 )229,          (word8 )237}, 
     {          (word8 )243,          (word8 )7,          (word8 )242,          (word8 )240}, 
     {          (word8 )253,          (word8 )14,          (word8 )255,          (word8 )251}, 
     {          (word8 )167,          (word8 )121,          (word8 )180,          (word8 )146}, 
     {          (word8 )169,          (word8 )112,          (word8 )185,          (word8 )153}, 
     {          (word8 )187,          (word8 )107,          (word8 )174,          (word8 )132}, 
     {          (word8 )181,          (word8 )98,          (word8 )163,          (word8 )143}, 
     {          (word8 )159,          (word8 )93,          (word8 )128,          (word8 )190}, 
     {          (word8 )145,          (word8 )84,          (word8 )141,          (word8 )181}, 
     {          (word8 )131,          (word8 )79,          (word8 )154,          (word8 )168}, 
     {          (word8 )141,          (word8 )70,          (word8 )151,          (word8 )163}}, 
   { {          (word8 )0,          (word8 )0,          (word8 )0,          (word8 )0}, 
     {          (word8 )11,          (word8 )14,          (word8 )9,          (word8 )13}, 
     {          (word8 )22,          (word8 )28,          (word8 )18,          (word8 )26}, 
     {          (word8 )29,          (word8 )18,          (word8 )27,          (word8 )23}, 
     {          (word8 )44,          (word8 )56,          (word8 )36,          (word8 )52}, 
     {          (word8 )39,          (word8 )54,          (word8 )45,          (word8 )57}, 
     {          (word8 )58,          (word8 )36,          (word8 )54,          (word8 )46}, 
     {          (word8 )49,          (word8 )42,          (word8 )63,          (word8 )35}, 
     {          (word8 )88,          (word8 )112,          (word8 )72,          (word8 )104}, 
     {          (word8 )83,          (word8 )126,          (word8 )65,          (word8 )101}, 
     {          (word8 )78,          (word8 )108,          (word8 )90,          (word8 )114}, 
     {          (word8 )69,          (word8 )98,          (word8 )83,          (word8 )127}, 
     {          (word8 )116,          (word8 )72,          (word8 )108,          (word8 )92}, 
     {          (word8 )127,          (word8 )70,          (word8 )101,          (word8 )81}, 
     {          (word8 )98,          (word8 )84,          (word8 )126,          (word8 )70}, 
     {          (word8 )105,          (word8 )90,          (word8 )119,          (word8 )75}, 
     {          (word8 )176,          (word8 )224,          (word8 )144,          (word8 )208}, 
     {          (word8 )187,          (word8 )238,          (word8 )153,          (word8 )221}, 
     {          (word8 )166,          (word8 )252,          (word8 )130,          (word8 )202}, 
     {          (word8 )173,          (word8 )242,          (word8 )139,          (word8 )199}, 
     {          (word8 )156,          (word8 )216,          (word8 )180,          (word8 )228}, 
     {          (word8 )151,          (word8 )214,          (word8 )189,          (word8 )233}, 
     {          (word8 )138,          (word8 )196,          (word8 )166,          (word8 )254}, 
     {          (word8 )129,          (word8 )202,          (word8 )175,          (word8 )243}, 
     {          (word8 )232,          (word8 )144,          (word8 )216,          (word8 )184}, 
     {          (word8 )227,          (word8 )158,          (word8 )209,          (word8 )181}, 
     {          (word8 )254,          (word8 )140,          (word8 )202,          (word8 )162}, 
     {          (word8 )245,          (word8 )130,          (word8 )195,          (word8 )175}, 
     {          (word8 )196,          (word8 )168,          (word8 )252,          (word8 )140}, 
     {          (word8 )207,          (word8 )166,          (word8 )245,          (word8 )129}, 
     {          (word8 )210,          (word8 )180,          (word8 )238,          (word8 )150}, 
     {          (word8 )217,          (word8 )186,          (word8 )231,          (word8 )155}, 
     {          (word8 )123,          (word8 )219,          (word8 )59,          (word8 )187}, 
     {          (word8 )112,          (word8 )213,          (word8 )50,          (word8 )182}, 
     {          (word8 )109,          (word8 )199,          (word8 )41,          (word8 )161}, 
     {          (word8 )102,          (word8 )201,          (word8 )32,          (word8 )172}, 
     {          (word8 )87,          (word8 )227,          (word8 )31,          (word8 )143}, 
     {          (word8 )92,          (word8 )237,          (word8 )22,          (word8 )130}, 
     {          (word8 )65,          (word8 )255,          (word8 )13,          (word8 )149}, 
     {          (word8 )74,          (word8 )241,          (word8 )4,          (word8 )152}, 
     {          (word8 )35,          (word8 )171,          (word8 )115,          (word8 )211}, 
     {          (word8 )40,          (word8 )165,          (word8 )122,          (word8 )222}, 
     {          (word8 )53,          (word8 )183,          (word8 )97,          (word8 )201}, 
     {          (word8 )62,          (word8 )185,          (word8 )104,          (word8 )196}, 
     {          (word8 )15,          (word8 )147,          (word8 )87,          (word8 )231}, 
     {          (word8 )4,          (word8 )157,          (word8 )94,          (word8 )234}, 
     {          (word8 )25,          (word8 )143,          (word8 )69,          (word8 )253}, 
     {          (word8 )18,          (word8 )129,          (word8 )76,          (word8 )240}, 
     {          (word8 )203,          (word8 )59,          (word8 )171,          (word8 )107}, 
     {          (word8 )192,          (word8 )53,          (word8 )162,          (word8 )102}, 
     {          (word8 )221,          (word8 )39,          (word8 )185,          (word8 )113}, 
     {          (word8 )214,          (word8 )41,          (word8 )176,          (word8 )124}, 
     {          (word8 )231,          (word8 )3,          (word8 )143,          (word8 )95}, 
     {          (word8 )236,          (word8 )13,          (word8 )134,          (word8 )82}, 
     {          (word8 )241,          (word8 )31,          (word8 )157,          (word8 )69}, 
     {          (word8 )250,          (word8 )17,          (word8 )148,          (word8 )72}, 
     {          (word8 )147,          (word8 )75,          (word8 )227,          (word8 )3}, 
     {          (word8 )152,          (word8 )69,          (word8 )234,          (word8 )14}, 
     {          (word8 )133,          (word8 )87,          (word8 )241,          (word8 )25}, 
     {          (word8 )142,          (word8 )89,          (word8 )248,          (word8 )20}, 
     {          (word8 )191,          (word8 )115,          (word8 )199,          (word8 )55}, 
     {          (word8 )180,          (word8 )125,          (word8 )206,          (word8 )58}, 
     {          (word8 )169,          (word8 )111,          (word8 )213,          (word8 )45}, 
     {          (word8 )162,          (word8 )97,          (word8 )220,          (word8 )32}, 
     {          (word8 )246,          (word8 )173,          (word8 )118,          (word8 )109}, 
     {          (word8 )253,          (word8 )163,          (word8 )127,          (word8 )96}, 
     {          (word8 )224,          (word8 )177,          (word8 )100,          (word8 )119}, 
     {          (word8 )235,          (word8 )191,          (word8 )109,          (word8 )122}, 
     {          (word8 )218,          (word8 )149,          (word8 )82,          (word8 )89}, 
     {          (word8 )209,          (word8 )155,          (word8 )91,          (word8 )84}, 
     {          (word8 )204,          (word8 )137,          (word8 )64,          (word8 )67}, 
     {          (word8 )199,          (word8 )135,          (word8 )73,          (word8 )78}, 
     {          (word8 )174,          (word8 )221,          (word8 )62,          (word8 )5}, 
     {          (word8 )165,          (word8 )211,          (word8 )55,          (word8 )8}, 
     {          (word8 )184,          (word8 )193,          (word8 )44,          (word8 )31}, 
     {          (word8 )179,          (word8 )207,          (word8 )37,          (word8 )18}, 
     {          (word8 )130,          (word8 )229,          (word8 )26,          (word8 )49}, 
     {          (word8 )137,          (word8 )235,          (word8 )19,          (word8 )60}, 
     {          (word8 )148,          (word8 )249,          (word8 )8,          (word8 )43}, 
     {          (word8 )159,          (word8 )247,          (word8 )1,          (word8 )38}, 
     {          (word8 )70,          (word8 )77,          (word8 )230,          (word8 )189}, 
     {          (word8 )77,          (word8 )67,          (word8 )239,          (word8 )176}, 
     {          (word8 )80,          (word8 )81,          (word8 )244,          (word8 )167}, 
     {          (word8 )91,          (word8 )95,          (word8 )253,          (word8 )170}, 
     {          (word8 )106,          (word8 )117,          (word8 )194,          (word8 )137}, 
     {          (word8 )97,          (word8 )123,          (word8 )203,          (word8 )132}, 
     {          (word8 )124,          (word8 )105,          (word8 )208,          (word8 )147}, 
     {          (word8 )119,          (word8 )103,          (word8 )217,          (word8 )158}, 
     {          (word8 )30,          (word8 )61,          (word8 )174,          (word8 )213}, 
     {          (word8 )21,          (word8 )51,          (word8 )167,          (word8 )216}, 
     {          (word8 )8,          (word8 )33,          (word8 )188,          (word8 )207}, 
     {          (word8 )3,          (word8 )47,          (word8 )181,          (word8 )194}, 
     {          (word8 )50,          (word8 )5,          (word8 )138,          (word8 )225}, 
     {          (word8 )57,          (word8 )11,          (word8 )131,          (word8 )236}, 
     {          (word8 )36,          (word8 )25,          (word8 )152,          (word8 )251}, 
     {          (word8 )47,          (word8 )23,          (word8 )145,          (word8 )246}, 
     {          (word8 )141,          (word8 )118,          (word8 )77,          (word8 )214}, 
     {          (word8 )134,          (word8 )120,          (word8 )68,          (word8 )219}, 
     {          (word8 )155,          (word8 )106,          (word8 )95,          (word8 )204}, 
     {          (word8 )144,          (word8 )100,          (word8 )86,          (word8 )193}, 
     {          (word8 )161,          (word8 )78,          (word8 )105,          (word8 )226}, 
     {          (word8 )170,          (word8 )64,          (word8 )96,          (word8 )239}, 
     {          (word8 )183,          (word8 )82,          (word8 )123,          (word8 )248}, 
     {          (word8 )188,          (word8 )92,          (word8 )114,          (word8 )245}, 
     {          (word8 )213,          (word8 )6,          (word8 )5,          (word8 )190}, 
     {          (word8 )222,          (word8 )8,          (word8 )12,          (word8 )179}, 
     {          (word8 )195,          (word8 )26,          (word8 )23,          (word8 )164}, 
     {          (word8 )200,          (word8 )20,          (word8 )30,          (word8 )169}, 
     {          (word8 )249,          (word8 )62,          (word8 )33,          (word8 )138}, 
     {          (word8 )242,          (word8 )48,          (word8 )40,          (word8 )135}, 
     {          (word8 )239,          (word8 )34,          (word8 )51,          (word8 )144}, 
     {          (word8 )228,          (word8 )44,          (word8 )58,          (word8 )157}, 
     {          (word8 )61,          (word8 )150,          (word8 )221,          (word8 )6}, 
     {          (word8 )54,          (word8 )152,          (word8 )212,          (word8 )11}, 
     {          (word8 )43,          (word8 )138,          (word8 )207,          (word8 )28}, 
     {          (word8 )32,          (word8 )132,          (word8 )198,          (word8 )17}, 
     {          (word8 )17,          (word8 )174,          (word8 )249,          (word8 )50}, 
     {          (word8 )26,          (word8 )160,          (word8 )240,          (word8 )63}, 
     {          (word8 )7,          (word8 )178,          (word8 )235,          (word8 )40}, 
     {          (word8 )12,          (word8 )188,          (word8 )226,          (word8 )37}, 
     {          (word8 )101,          (word8 )230,          (word8 )149,          (word8 )110}, 
     {          (word8 )110,          (word8 )232,          (word8 )156,          (word8 )99}, 
     {          (word8 )115,          (word8 )250,          (word8 )135,          (word8 )116}, 
     {          (word8 )120,          (word8 )244,          (word8 )142,          (word8 )121}, 
     {          (word8 )73,          (word8 )222,          (word8 )177,          (word8 )90}, 
     {          (word8 )66,          (word8 )208,          (word8 )184,          (word8 )87}, 
     {          (word8 )95,          (word8 )194,          (word8 )163,          (word8 )64}, 
     {          (word8 )84,          (word8 )204,          (word8 )170,          (word8 )77}, 
     {          (word8 )247,          (word8 )65,          (word8 )236,          (word8 )218}, 
     {          (word8 )252,          (word8 )79,          (word8 )229,          (word8 )215}, 
     {          (word8 )225,          (word8 )93,          (word8 )254,          (word8 )192}, 
     {          (word8 )234,          (word8 )83,          (word8 )247,          (word8 )205}, 
     {          (word8 )219,          (word8 )121,          (word8 )200,          (word8 )238}, 
     {          (word8 )208,          (word8 )119,          (word8 )193,          (word8 )227}, 
     {          (word8 )205,          (word8 )101,          (word8 )218,          (word8 )244}, 
     {          (word8 )198,          (word8 )107,          (word8 )211,          (word8 )249}, 
     {          (word8 )175,          (word8 )49,          (word8 )164,          (word8 )178}, 
     {          (word8 )164,          (word8 )63,          (word8 )173,          (word8 )191}, 
     {          (word8 )185,          (word8 )45,          (word8 )182,          (word8 )168}, 
     {          (word8 )178,          (word8 )35,          (word8 )191,          (word8 )165}, 
     {          (word8 )131,          (word8 )9,          (word8 )128,          (word8 )134}, 
     {          (word8 )136,          (word8 )7,          (word8 )137,          (word8 )139}, 
     {          (word8 )149,          (word8 )21,          (word8 )146,          (word8 )156}, 
     {          (word8 )158,          (word8 )27,          (word8 )155,          (word8 )145}, 
     {          (word8 )71,          (word8 )161,          (word8 )124,          (word8 )10}, 
     {          (word8 )76,          (word8 )175,          (word8 )117,          (word8 )7}, 
     {          (word8 )81,          (word8 )189,          (word8 )110,          (word8 )16}, 
     {          (word8 )90,          (word8 )179,          (word8 )103,          (word8 )29}, 
     {          (word8 )107,          (word8 )153,          (word8 )88,          (word8 )62}, 
     {          (word8 )96,          (word8 )151,          (word8 )81,          (word8 )51}, 
     {          (word8 )125,          (word8 )133,          (word8 )74,          (word8 )36}, 
     {          (word8 )118,          (word8 )139,          (word8 )67,          (word8 )41}, 
     {          (word8 )31,          (word8 )209,          (word8 )52,          (word8 )98}, 
     {          (word8 )20,          (word8 )223,          (word8 )61,          (word8 )111}, 
     {          (word8 )9,          (word8 )205,          (word8 )38,          (word8 )120}, 
     {          (word8 )2,          (word8 )195,          (word8 )47,          (word8 )117}, 
     {          (word8 )51,          (word8 )233,          (word8 )16,          (word8 )86}, 
     {          (word8 )56,          (word8 )231,          (word8 )25,          (word8 )91}, 
     {          (word8 )37,          (word8 )245,          (word8 )2,          (word8 )76}, 
     {          (word8 )46,          (word8 )251,          (word8 )11,          (word8 )65}, 
     {          (word8 )140,          (word8 )154,          (word8 )215,          (word8 )97}, 
     {          (word8 )135,          (word8 )148,          (word8 )222,          (word8 )108}, 
     {          (word8 )154,          (word8 )134,          (word8 )197,          (word8 )123}, 
     {          (word8 )145,          (word8 )136,          (word8 )204,          (word8 )118}, 
     {          (word8 )160,          (word8 )162,          (word8 )243,          (word8 )85}, 
     {          (word8 )171,          (word8 )172,          (word8 )250,          (word8 )88}, 
     {          (word8 )182,          (word8 )190,          (word8 )225,          (word8 )79}, 
     {          (word8 )189,          (word8 )176,          (word8 )232,          (word8 )66}, 
     {          (word8 )212,          (word8 )234,          (word8 )159,          (word8 )9}, 
     {          (word8 )223,          (word8 )228,          (word8 )150,          (word8 )4}, 
     {          (word8 )194,          (word8 )246,          (word8 )141,          (word8 )19}, 
     {          (word8 )201,          (word8 )248,          (word8 )132,          (word8 )30}, 
     {          (word8 )248,          (word8 )210,          (word8 )187,          (word8 )61}, 
     {          (word8 )243,          (word8 )220,          (word8 )178,          (word8 )48}, 
     {          (word8 )238,          (word8 )206,          (word8 )169,          (word8 )39}, 
     {          (word8 )229,          (word8 )192,          (word8 )160,          (word8 )42}, 
     {          (word8 )60,          (word8 )122,          (word8 )71,          (word8 )177}, 
     {          (word8 )55,          (word8 )116,          (word8 )78,          (word8 )188}, 
     {          (word8 )42,          (word8 )102,          (word8 )85,          (word8 )171}, 
     {          (word8 )33,          (word8 )104,          (word8 )92,          (word8 )166}, 
     {          (word8 )16,          (word8 )66,          (word8 )99,          (word8 )133}, 
     {          (word8 )27,          (word8 )76,          (word8 )106,          (word8 )136}, 
     {          (word8 )6,          (word8 )94,          (word8 )113,          (word8 )159}, 
     {          (word8 )13,          (word8 )80,          (word8 )120,          (word8 )146}, 
     {          (word8 )100,          (word8 )10,          (word8 )15,          (word8 )217}, 
     {          (word8 )111,          (word8 )4,          (word8 )6,          (word8 )212}, 
     {          (word8 )114,          (word8 )22,          (word8 )29,          (word8 )195}, 
     {          (word8 )121,          (word8 )24,          (word8 )20,          (word8 )206}, 
     {          (word8 )72,          (word8 )50,          (word8 )43,          (word8 )237}, 
     {          (word8 )67,          (word8 )60,          (word8 )34,          (word8 )224}, 
     {          (word8 )94,          (word8 )46,          (word8 )57,          (word8 )247}, 
     {          (word8 )85,          (word8 )32,          (word8 )48,          (word8 )250}, 
     {          (word8 )1,          (word8 )236,          (word8 )154,          (word8 )183}, 
     {          (word8 )10,          (word8 )226,          (word8 )147,          (word8 )186}, 
     {          (word8 )23,          (word8 )240,          (word8 )136,          (word8 )173}, 
     {          (word8 )28,          (word8 )254,          (word8 )129,          (word8 )160}, 
     {          (word8 )45,          (word8 )212,          (word8 )190,          (word8 )131}, 
     {          (word8 )38,          (word8 )218,          (word8 )183,          (word8 )142}, 
     {          (word8 )59,          (word8 )200,          (word8 )172,          (word8 )153}, 
     {          (word8 )48,          (word8 )198,          (word8 )165,          (word8 )148}, 
     {          (word8 )89,          (word8 )156,          (word8 )210,          (word8 )223}, 
     {          (word8 )82,          (word8 )146,          (word8 )219,          (word8 )210}, 
     {          (word8 )79,          (word8 )128,          (word8 )192,          (word8 )197}, 
     {          (word8 )68,          (word8 )142,          (word8 )201,          (word8 )200}, 
     {          (word8 )117,          (word8 )164,          (word8 )246,          (word8 )235}, 
     {          (word8 )126,          (word8 )170,          (word8 )255,          (word8 )230}, 
     {          (word8 )99,          (word8 )184,          (word8 )228,          (word8 )241}, 
     {          (word8 )104,          (word8 )182,          (word8 )237,          (word8 )252}, 
     {          (word8 )177,          (word8 )12,          (word8 )10,          (word8 )103}, 
     {          (word8 )186,          (word8 )2,          (word8 )3,          (word8 )106}, 
     {          (word8 )167,          (word8 )16,          (word8 )24,          (word8 )125}, 
     {          (word8 )172,          (word8 )30,          (word8 )17,          (word8 )112}, 
     {          (word8 )157,          (word8 )52,          (word8 )46,          (word8 )83}, 
     {          (word8 )150,          (word8 )58,          (word8 )39,          (word8 )94}, 
     {          (word8 )139,          (word8 )40,          (word8 )60,          (word8 )73}, 
     {          (word8 )128,          (word8 )38,          (word8 )53,          (word8 )68}, 
     {          (word8 )233,          (word8 )124,          (word8 )66,          (word8 )15}, 
     {          (word8 )226,          (word8 )114,          (word8 )75,          (word8 )2}, 
     {          (word8 )255,          (word8 )96,          (word8 )80,          (word8 )21}, 
     {          (word8 )244,          (word8 )110,          (word8 )89,          (word8 )24}, 
     {          (word8 )197,          (word8 )68,          (word8 )102,          (word8 )59}, 
     {          (word8 )206,          (word8 )74,          (word8 )111,          (word8 )54}, 
     {          (word8 )211,          (word8 )88,          (word8 )116,          (word8 )33}, 
     {          (word8 )216,          (word8 )86,          (word8 )125,          (word8 )44}, 
     {          (word8 )122,          (word8 )55,          (word8 )161,          (word8 )12}, 
     {          (word8 )113,          (word8 )57,          (word8 )168,          (word8 )1}, 
     {          (word8 )108,          (word8 )43,          (word8 )179,          (word8 )22}, 
     {          (word8 )103,          (word8 )37,          (word8 )186,          (word8 )27}, 
     {          (word8 )86,          (word8 )15,          (word8 )133,          (word8 )56}, 
     {          (word8 )93,          (word8 )1,          (word8 )140,          (word8 )53}, 
     {          (word8 )64,          (word8 )19,          (word8 )151,          (word8 )34}, 
     {          (word8 )75,          (word8 )29,          (word8 )158,          (word8 )47}, 
     {          (word8 )34,          (word8 )71,          (word8 )233,          (word8 )100}, 
     {          (word8 )41,          (word8 )73,          (word8 )224,          (word8 )105}, 
     {          (word8 )52,          (word8 )91,          (word8 )251,          (word8 )126}, 
     {          (word8 )63,          (word8 )85,          (word8 )242,          (word8 )115}, 
     {          (word8 )14,          (word8 )127,          (word8 )205,          (word8 )80}, 
     {          (word8 )5,          (word8 )113,          (word8 )196,          (word8 )93}, 
     {          (word8 )24,          (word8 )99,          (word8 )223,          (word8 )74}, 
     {          (word8 )19,          (word8 )109,          (word8 )214,          (word8 )71}, 
     {          (word8 )202,          (word8 )215,          (word8 )49,          (word8 )220}, 
     {          (word8 )193,          (word8 )217,          (word8 )56,          (word8 )209}, 
     {          (word8 )220,          (word8 )203,          (word8 )35,          (word8 )198}, 
     {          (word8 )215,          (word8 )197,          (word8 )42,          (word8 )203}, 
     {          (word8 )230,          (word8 )239,          (word8 )21,          (word8 )232}, 
     {          (word8 )237,          (word8 )225,          (word8 )28,          (word8 )229}, 
     {          (word8 )240,          (word8 )243,          (word8 )7,          (word8 )242}, 
     {          (word8 )251,          (word8 )253,          (word8 )14,          (word8 )255}, 
     {          (word8 )146,          (word8 )167,          (word8 )121,          (word8 )180}, 
     {          (word8 )153,          (word8 )169,          (word8 )112,          (word8 )185}, 
     {          (word8 )132,          (word8 )187,          (word8 )107,          (word8 )174}, 
     {          (word8 )143,          (word8 )181,          (word8 )98,          (word8 )163}, 
     {          (word8 )190,          (word8 )159,          (word8 )93,          (word8 )128}, 
     {          (word8 )181,          (word8 )145,          (word8 )84,          (word8 )141}, 
     {          (word8 )168,          (word8 )131,          (word8 )79,          (word8 )154}, 
     {          (word8 )163,          (word8 )141,          (word8 )70,          (word8 )151}}, 
   { {          (word8 )0,          (word8 )0,          (word8 )0,          (word8 )0}, 
     {          (word8 )13,          (word8 )11,          (word8 )14,          (word8 )9}, 
     {          (word8 )26,          (word8 )22,          (word8 )28,          (word8 )18}, 
     {          (word8 )23,          (word8 )29,          (word8 )18,          (word8 )27}, 
     {          (word8 )52,          (word8 )44,          (word8 )56,          (word8 )36}, 
     {          (word8 )57,          (word8 )39,          (word8 )54,          (word8 )45}, 
     {          (word8 )46,          (word8 )58,          (word8 )36,          (word8 )54}, 
     {          (word8 )35,          (word8 )49,          (word8 )42,          (word8 )63}, 
     {          (word8 )104,          (word8 )88,          (word8 )112,          (word8 )72}, 
     {          (word8 )101,          (word8 )83,          (word8 )126,          (word8 )65}, 
     {          (word8 )114,          (word8 )78,          (word8 )108,          (word8 )90}, 
     {          (word8 )127,          (word8 )69,          (word8 )98,          (word8 )83}, 
     {          (word8 )92,          (word8 )116,          (word8 )72,          (word8 )108}, 
     {          (word8 )81,          (word8 )127,          (word8 )70,          (word8 )101}, 
     {          (word8 )70,          (word8 )98,          (word8 )84,          (word8 )126}, 
     {          (word8 )75,          (word8 )105,          (word8 )90,          (word8 )119}, 
     {          (word8 )208,          (word8 )176,          (word8 )224,          (word8 )144}, 
     {          (word8 )221,          (word8 )187,          (word8 )238,          (word8 )153}, 
     {          (word8 )202,          (word8 )166,          (word8 )252,          (word8 )130}, 
     {          (word8 )199,          (word8 )173,          (word8 )242,          (word8 )139}, 
     {          (word8 )228,          (word8 )156,          (word8 )216,          (word8 )180}, 
     {          (word8 )233,          (word8 )151,          (word8 )214,          (word8 )189}, 
     {          (word8 )254,          (word8 )138,          (word8 )196,          (word8 )166}, 
     {          (word8 )243,          (word8 )129,          (word8 )202,          (word8 )175}, 
     {          (word8 )184,          (word8 )232,          (word8 )144,          (word8 )216}, 
     {          (word8 )181,          (word8 )227,          (word8 )158,          (word8 )209}, 
     {          (word8 )162,          (word8 )254,          (word8 )140,          (word8 )202}, 
     {          (word8 )175,          (word8 )245,          (word8 )130,          (word8 )195}, 
     {          (word8 )140,          (word8 )196,          (word8 )168,          (word8 )252}, 
     {          (word8 )129,          (word8 )207,          (word8 )166,          (word8 )245}, 
     {          (word8 )150,          (word8 )210,          (word8 )180,          (word8 )238}, 
     {          (word8 )155,          (word8 )217,          (word8 )186,          (word8 )231}, 
     {          (word8 )187,          (word8 )123,          (word8 )219,          (word8 )59}, 
     {          (word8 )182,          (word8 )112,          (word8 )213,          (word8 )50}, 
     {          (word8 )161,          (word8 )109,          (word8 )199,          (word8 )41}, 
     {          (word8 )172,          (word8 )102,          (word8 )201,          (word8 )32}, 
     {          (word8 )143,          (word8 )87,          (word8 )227,          (word8 )31}, 
     {          (word8 )130,          (word8 )92,          (word8 )237,          (word8 )22}, 
     {          (word8 )149,          (word8 )65,          (word8 )255,          (word8 )13}, 
     {          (word8 )152,          (word8 )74,          (word8 )241,          (word8 )4}, 
     {          (word8 )211,          (word8 )35,          (word8 )171,          (word8 )115}, 
     {          (word8 )222,          (word8 )40,          (word8 )165,          (word8 )122}, 
     {          (word8 )201,          (word8 )53,          (word8 )183,          (word8 )97}, 
     {          (word8 )196,          (word8 )62,          (word8 )185,          (word8 )104}, 
     {          (word8 )231,          (word8 )15,          (word8 )147,          (word8 )87}, 
     {          (word8 )234,          (word8 )4,          (word8 )157,          (word8 )94}, 
     {          (word8 )253,          (word8 )25,          (word8 )143,          (word8 )69}, 
     {          (word8 )240,          (word8 )18,          (word8 )129,          (word8 )76}, 
     {          (word8 )107,          (word8 )203,          (word8 )59,          (word8 )171}, 
     {          (word8 )102,          (word8 )192,          (word8 )53,          (word8 )162}, 
     {          (word8 )113,          (word8 )221,          (word8 )39,          (word8 )185}, 
     {          (word8 )124,          (word8 )214,          (word8 )41,          (word8 )176}, 
     {          (word8 )95,          (word8 )231,          (word8 )3,          (word8 )143}, 
     {          (word8 )82,          (word8 )236,          (word8 )13,          (word8 )134}, 
     {          (word8 )69,          (word8 )241,          (word8 )31,          (word8 )157}, 
     {          (word8 )72,          (word8 )250,          (word8 )17,          (word8 )148}, 
     {          (word8 )3,          (word8 )147,          (word8 )75,          (word8 )227}, 
     {          (word8 )14,          (word8 )152,          (word8 )69,          (word8 )234}, 
     {          (word8 )25,          (word8 )133,          (word8 )87,          (word8 )241}, 
     {          (word8 )20,          (word8 )142,          (word8 )89,          (word8 )248}, 
     {          (word8 )55,          (word8 )191,          (word8 )115,          (word8 )199}, 
     {          (word8 )58,          (word8 )180,          (word8 )125,          (word8 )206}, 
     {          (word8 )45,          (word8 )169,          (word8 )111,          (word8 )213}, 
     {          (word8 )32,          (word8 )162,          (word8 )97,          (word8 )220}, 
     {          (word8 )109,          (word8 )246,          (word8 )173,          (word8 )118}, 
     {          (word8 )96,          (word8 )253,          (word8 )163,          (word8 )127}, 
     {          (word8 )119,          (word8 )224,          (word8 )177,          (word8 )100}, 
     {          (word8 )122,          (word8 )235,          (word8 )191,          (word8 )109}, 
     {          (word8 )89,          (word8 )218,          (word8 )149,          (word8 )82}, 
     {          (word8 )84,          (word8 )209,          (word8 )155,          (word8 )91}, 
     {          (word8 )67,          (word8 )204,          (word8 )137,          (word8 )64}, 
     {          (word8 )78,          (word8 )199,          (word8 )135,          (word8 )73}, 
     {          (word8 )5,          (word8 )174,          (word8 )221,          (word8 )62}, 
     {          (word8 )8,          (word8 )165,          (word8 )211,          (word8 )55}, 
     {          (word8 )31,          (word8 )184,          (word8 )193,          (word8 )44}, 
     {          (word8 )18,          (word8 )179,          (word8 )207,          (word8 )37}, 
     {          (word8 )49,          (word8 )130,          (word8 )229,          (word8 )26}, 
     {          (word8 )60,          (word8 )137,          (word8 )235,          (word8 )19}, 
     {          (word8 )43,          (word8 )148,          (word8 )249,          (word8 )8}, 
     {          (word8 )38,          (word8 )159,          (word8 )247,          (word8 )1}, 
     {          (word8 )189,          (word8 )70,          (word8 )77,          (word8 )230}, 
     {          (word8 )176,          (word8 )77,          (word8 )67,          (word8 )239}, 
     {          (word8 )167,          (word8 )80,          (word8 )81,          (word8 )244}, 
     {          (word8 )170,          (word8 )91,          (word8 )95,          (word8 )253}, 
     {          (word8 )137,          (word8 )106,          (word8 )117,          (word8 )194}, 
     {          (word8 )132,          (word8 )97,          (word8 )123,          (word8 )203}, 
     {          (word8 )147,          (word8 )124,          (word8 )105,          (word8 )208}, 
     {          (word8 )158,          (word8 )119,          (word8 )103,          (word8 )217}, 
     {          (word8 )213,          (word8 )30,          (word8 )61,          (word8 )174}, 
     {          (word8 )216,          (word8 )21,          (word8 )51,          (word8 )167}, 
     {          (word8 )207,          (word8 )8,          (word8 )33,          (word8 )188}, 
     {          (word8 )194,          (word8 )3,          (word8 )47,          (word8 )181}, 
     {          (word8 )225,          (word8 )50,          (word8 )5,          (word8 )138}, 
     {          (word8 )236,          (word8 )57,          (word8 )11,          (word8 )131}, 
     {          (word8 )251,          (word8 )36,          (word8 )25,          (word8 )152}, 
     {          (word8 )246,          (word8 )47,          (word8 )23,          (word8 )145}, 
     {          (word8 )214,          (word8 )141,          (word8 )118,          (word8 )77}, 
     {          (word8 )219,          (word8 )134,          (word8 )120,          (word8 )68}, 
     {          (word8 )204,          (word8 )155,          (word8 )106,          (word8 )95}, 
     {          (word8 )193,          (word8 )144,          (word8 )100,          (word8 )86}, 
     {          (word8 )226,          (word8 )161,          (word8 )78,          (word8 )105}, 
     {          (word8 )239,          (word8 )170,          (word8 )64,          (word8 )96}, 
     {          (word8 )248,          (word8 )183,          (word8 )82,          (word8 )123}, 
     {          (word8 )245,          (word8 )188,          (word8 )92,          (word8 )114}, 
     {          (word8 )190,          (word8 )213,          (word8 )6,          (word8 )5}, 
     {          (word8 )179,          (word8 )222,          (word8 )8,          (word8 )12}, 
     {          (word8 )164,          (word8 )195,          (word8 )26,          (word8 )23}, 
     {          (word8 )169,          (word8 )200,          (word8 )20,          (word8 )30}, 
     {          (word8 )138,          (word8 )249,          (word8 )62,          (word8 )33}, 
     {          (word8 )135,          (word8 )242,          (word8 )48,          (word8 )40}, 
     {          (word8 )144,          (word8 )239,          (word8 )34,          (word8 )51}, 
     {          (word8 )157,          (word8 )228,          (word8 )44,          (word8 )58}, 
     {          (word8 )6,          (word8 )61,          (word8 )150,          (word8 )221}, 
     {          (word8 )11,          (word8 )54,          (word8 )152,          (word8 )212}, 
     {          (word8 )28,          (word8 )43,          (word8 )138,          (word8 )207}, 
     {          (word8 )17,          (word8 )32,          (word8 )132,          (word8 )198}, 
     {          (word8 )50,          (word8 )17,          (word8 )174,          (word8 )249}, 
     {          (word8 )63,          (word8 )26,          (word8 )160,          (word8 )240}, 
     {          (word8 )40,          (word8 )7,          (word8 )178,          (word8 )235}, 
     {          (word8 )37,          (word8 )12,          (word8 )188,          (word8 )226}, 
     {          (word8 )110,          (word8 )101,          (word8 )230,          (word8 )149}, 
     {          (word8 )99,          (word8 )110,          (word8 )232,          (word8 )156}, 
     {          (word8 )116,          (word8 )115,          (word8 )250,          (word8 )135}, 
     {          (word8 )121,          (word8 )120,          (word8 )244,          (word8 )142}, 
     {          (word8 )90,          (word8 )73,          (word8 )222,          (word8 )177}, 
     {          (word8 )87,          (word8 )66,          (word8 )208,          (word8 )184}, 
     {          (word8 )64,          (word8 )95,          (word8 )194,          (word8 )163}, 
     {          (word8 )77,          (word8 )84,          (word8 )204,          (word8 )170}, 
     {          (word8 )218,          (word8 )247,          (word8 )65,          (word8 )236}, 
     {          (word8 )215,          (word8 )252,          (word8 )79,          (word8 )229}, 
     {          (word8 )192,          (word8 )225,          (word8 )93,          (word8 )254}, 
     {          (word8 )205,          (word8 )234,          (word8 )83,          (word8 )247}, 
     {          (word8 )238,          (word8 )219,          (word8 )121,          (word8 )200}, 
     {          (word8 )227,          (word8 )208,          (word8 )119,          (word8 )193}, 
     {          (word8 )244,          (word8 )205,          (word8 )101,          (word8 )218}, 
     {          (word8 )249,          (word8 )198,          (word8 )107,          (word8 )211}, 
     {          (word8 )178,          (word8 )175,          (word8 )49,          (word8 )164}, 
     {          (word8 )191,          (word8 )164,          (word8 )63,          (word8 )173}, 
     {          (word8 )168,          (word8 )185,          (word8 )45,          (word8 )182}, 
     {          (word8 )165,          (word8 )178,          (word8 )35,          (word8 )191}, 
     {          (word8 )134,          (word8 )131,          (word8 )9,          (word8 )128}, 
     {          (word8 )139,          (word8 )136,          (word8 )7,          (word8 )137}, 
     {          (word8 )156,          (word8 )149,          (word8 )21,          (word8 )146}, 
     {          (word8 )145,          (word8 )158,          (word8 )27,          (word8 )155}, 
     {          (word8 )10,          (word8 )71,          (word8 )161,          (word8 )124}, 
     {          (word8 )7,          (word8 )76,          (word8 )175,          (word8 )117}, 
     {          (word8 )16,          (word8 )81,          (word8 )189,          (word8 )110}, 
     {          (word8 )29,          (word8 )90,          (word8 )179,          (word8 )103}, 
     {          (word8 )62,          (word8 )107,          (word8 )153,          (word8 )88}, 
     {          (word8 )51,          (word8 )96,          (word8 )151,          (word8 )81}, 
     {          (word8 )36,          (word8 )125,          (word8 )133,          (word8 )74}, 
     {          (word8 )41,          (word8 )118,          (word8 )139,          (word8 )67}, 
     {          (word8 )98,          (word8 )31,          (word8 )209,          (word8 )52}, 
     {          (word8 )111,          (word8 )20,          (word8 )223,          (word8 )61}, 
     {          (word8 )120,          (word8 )9,          (word8 )205,          (word8 )38}, 
     {          (word8 )117,          (word8 )2,          (word8 )195,          (word8 )47}, 
     {          (word8 )86,          (word8 )51,          (word8 )233,          (word8 )16}, 
     {          (word8 )91,          (word8 )56,          (word8 )231,          (word8 )25}, 
     {          (word8 )76,          (word8 )37,          (word8 )245,          (word8 )2}, 
     {          (word8 )65,          (word8 )46,          (word8 )251,          (word8 )11}, 
     {          (word8 )97,          (word8 )140,          (word8 )154,          (word8 )215}, 
     {          (word8 )108,          (word8 )135,          (word8 )148,          (word8 )222}, 
     {          (word8 )123,          (word8 )154,          (word8 )134,          (word8 )197}, 
     {          (word8 )118,          (word8 )145,          (word8 )136,          (word8 )204}, 
     {          (word8 )85,          (word8 )160,          (word8 )162,          (word8 )243}, 
     {          (word8 )88,          (word8 )171,          (word8 )172,          (word8 )250}, 
     {          (word8 )79,          (word8 )182,          (word8 )190,          (word8 )225}, 
     {          (word8 )66,          (word8 )189,          (word8 )176,          (word8 )232}, 
     {          (word8 )9,          (word8 )212,          (word8 )234,          (word8 )159}, 
     {          (word8 )4,          (word8 )223,          (word8 )228,          (word8 )150}, 
     {          (word8 )19,          (word8 )194,          (word8 )246,          (word8 )141}, 
     {          (word8 )30,          (word8 )201,          (word8 )248,          (word8 )132}, 
     {          (word8 )61,          (word8 )248,          (word8 )210,          (word8 )187}, 
     {          (word8 )48,          (word8 )243,          (word8 )220,          (word8 )178}, 
     {          (word8 )39,          (word8 )238,          (word8 )206,          (word8 )169}, 
     {          (word8 )42,          (word8 )229,          (word8 )192,          (word8 )160}, 
     {          (word8 )177,          (word8 )60,          (word8 )122,          (word8 )71}, 
     {          (word8 )188,          (word8 )55,          (word8 )116,          (word8 )78}, 
     {          (word8 )171,          (word8 )42,          (word8 )102,          (word8 )85}, 
     {          (word8 )166,          (word8 )33,          (word8 )104,          (word8 )92}, 
     {          (word8 )133,          (word8 )16,          (word8 )66,          (word8 )99}, 
     {          (word8 )136,          (word8 )27,          (word8 )76,          (word8 )106}, 
     {          (word8 )159,          (word8 )6,          (word8 )94,          (word8 )113}, 
     {          (word8 )146,          (word8 )13,          (word8 )80,          (word8 )120}, 
     {          (word8 )217,          (word8 )100,          (word8 )10,          (word8 )15}, 
     {          (word8 )212,          (word8 )111,          (word8 )4,          (word8 )6}, 
     {          (word8 )195,          (word8 )114,          (word8 )22,          (word8 )29}, 
     {          (word8 )206,          (word8 )121,          (word8 )24,          (word8 )20}, 
     {          (word8 )237,          (word8 )72,          (word8 )50,          (word8 )43}, 
     {          (word8 )224,          (word8 )67,          (word8 )60,          (word8 )34}, 
     {          (word8 )247,          (word8 )94,          (word8 )46,          (word8 )57}, 
     {          (word8 )250,          (word8 )85,          (word8 )32,          (word8 )48}, 
     {          (word8 )183,          (word8 )1,          (word8 )236,          (word8 )154}, 
     {          (word8 )186,          (word8 )10,          (word8 )226,          (word8 )147}, 
     {          (word8 )173,          (word8 )23,          (word8 )240,          (word8 )136}, 
     {          (word8 )160,          (word8 )28,          (word8 )254,          (word8 )129}, 
     {          (word8 )131,          (word8 )45,          (word8 )212,          (word8 )190}, 
     {          (word8 )142,          (word8 )38,          (word8 )218,          (word8 )183}, 
     {          (word8 )153,          (word8 )59,          (word8 )200,          (word8 )172}, 
     {          (word8 )148,          (word8 )48,          (word8 )198,          (word8 )165}, 
     {          (word8 )223,          (word8 )89,          (word8 )156,          (word8 )210}, 
     {          (word8 )210,          (word8 )82,          (word8 )146,          (word8 )219}, 
     {          (word8 )197,          (word8 )79,          (word8 )128,          (word8 )192}, 
     {          (word8 )200,          (word8 )68,          (word8 )142,          (word8 )201}, 
     {          (word8 )235,          (word8 )117,          (word8 )164,          (word8 )246}, 
     {          (word8 )230,          (word8 )126,          (word8 )170,          (word8 )255}, 
     {          (word8 )241,          (word8 )99,          (word8 )184,          (word8 )228}, 
     {          (word8 )252,          (word8 )104,          (word8 )182,          (word8 )237}, 
     {          (word8 )103,          (word8 )177,          (word8 )12,          (word8 )10}, 
     {          (word8 )106,          (word8 )186,          (word8 )2,          (word8 )3}, 
     {          (word8 )125,          (word8 )167,          (word8 )16,          (word8 )24}, 
     {          (word8 )112,          (word8 )172,          (word8 )30,          (word8 )17}, 
     {          (word8 )83,          (word8 )157,          (word8 )52,          (word8 )46}, 
     {          (word8 )94,          (word8 )150,          (word8 )58,          (word8 )39}, 
     {          (word8 )73,          (word8 )139,          (word8 )40,          (word8 )60}, 
     {          (word8 )68,          (word8 )128,          (word8 )38,          (word8 )53}, 
     {          (word8 )15,          (word8 )233,          (word8 )124,          (word8 )66}, 
     {          (word8 )2,          (word8 )226,          (word8 )114,          (word8 )75}, 
     {          (word8 )21,          (word8 )255,          (word8 )96,          (word8 )80}, 
     {          (word8 )24,          (word8 )244,          (word8 )110,          (word8 )89}, 
     {          (word8 )59,          (word8 )197,          (word8 )68,          (word8 )102}, 
     {          (word8 )54,          (word8 )206,          (word8 )74,          (word8 )111}, 
     {          (word8 )33,          (word8 )211,          (word8 )88,          (word8 )116}, 
     {          (word8 )44,          (word8 )216,          (word8 )86,          (word8 )125}, 
     {          (word8 )12,          (word8 )122,          (word8 )55,          (word8 )161}, 
     {          (word8 )1,          (word8 )113,          (word8 )57,          (word8 )168}, 
     {          (word8 )22,          (word8 )108,          (word8 )43,          (word8 )179}, 
     {          (word8 )27,          (word8 )103,          (word8 )37,          (word8 )186}, 
     {          (word8 )56,          (word8 )86,          (word8 )15,          (word8 )133}, 
     {          (word8 )53,          (word8 )93,          (word8 )1,          (word8 )140}, 
     {          (word8 )34,          (word8 )64,          (word8 )19,          (word8 )151}, 
     {          (word8 )47,          (word8 )75,          (word8 )29,          (word8 )158}, 
     {          (word8 )100,          (word8 )34,          (word8 )71,          (word8 )233}, 
     {          (word8 )105,          (word8 )41,          (word8 )73,          (word8 )224}, 
     {          (word8 )126,          (word8 )52,          (word8 )91,          (word8 )251}, 
     {          (word8 )115,          (word8 )63,          (word8 )85,          (word8 )242}, 
     {          (word8 )80,          (word8 )14,          (word8 )127,          (word8 )205}, 
     {          (word8 )93,          (word8 )5,          (word8 )113,          (word8 )196}, 
     {          (word8 )74,          (word8 )24,          (word8 )99,          (word8 )223}, 
     {          (word8 )71,          (word8 )19,          (word8 )109,          (word8 )214}, 
     {          (word8 )220,          (word8 )202,          (word8 )215,          (word8 )49}, 
     {          (word8 )209,          (word8 )193,          (word8 )217,          (word8 )56}, 
     {          (word8 )198,          (word8 )220,          (word8 )203,          (word8 )35}, 
     {          (word8 )203,          (word8 )215,          (word8 )197,          (word8 )42}, 
     {          (word8 )232,          (word8 )230,          (word8 )239,          (word8 )21}, 
     {          (word8 )229,          (word8 )237,          (word8 )225,          (word8 )28}, 
     {          (word8 )242,          (word8 )240,          (word8 )243,          (word8 )7}, 
     {          (word8 )255,          (word8 )251,          (word8 )253,          (word8 )14}, 
     {          (word8 )180,          (word8 )146,          (word8 )167,          (word8 )121}, 
     {          (word8 )185,          (word8 )153,          (word8 )169,          (word8 )112}, 
     {          (word8 )174,          (word8 )132,          (word8 )187,          (word8 )107}, 
     {          (word8 )163,          (word8 )143,          (word8 )181,          (word8 )98}, 
     {          (word8 )128,          (word8 )190,          (word8 )159,          (word8 )93}, 
     {          (word8 )141,          (word8 )181,          (word8 )145,          (word8 )84}, 
     {          (word8 )154,          (word8 )168,          (word8 )131,          (word8 )79}, 
     {          (word8 )151,          (word8 )163,          (word8 )141,          (word8 )70}}, 
   { {          (word8 )0,          (word8 )0,          (word8 )0,          (word8 )0}, 
     {          (word8 )9,          (word8 )13,          (word8 )11,          (word8 )14}, 
     {          (word8 )18,          (word8 )26,          (word8 )22,          (word8 )28}, 
     {          (word8 )27,          (word8 )23,          (word8 )29,          (word8 )18}, 
     {          (word8 )36,          (word8 )52,          (word8 )44,          (word8 )56}, 
     {          (word8 )45,          (word8 )57,          (word8 )39,          (word8 )54}, 
     {          (word8 )54,          (word8 )46,          (word8 )58,          (word8 )36}, 
     {          (word8 )63,          (word8 )35,          (word8 )49,          (word8 )42}, 
     {          (word8 )72,          (word8 )104,          (word8 )88,          (word8 )112}, 
     {          (word8 )65,          (word8 )101,          (word8 )83,          (word8 )126}, 
     {          (word8 )90,          (word8 )114,          (word8 )78,          (word8 )108}, 
     {          (word8 )83,          (word8 )127,          (word8 )69,          (word8 )98}, 
     {          (word8 )108,          (word8 )92,          (word8 )116,          (word8 )72}, 
     {          (word8 )101,          (word8 )81,          (word8 )127,          (word8 )70}, 
     {          (word8 )126,          (word8 )70,          (word8 )98,          (word8 )84}, 
     {          (word8 )119,          (word8 )75,          (word8 )105,          (word8 )90}, 
     {          (word8 )144,          (word8 )208,          (word8 )176,          (word8 )224}, 
     {          (word8 )153,          (word8 )221,          (word8 )187,          (word8 )238}, 
     {          (word8 )130,          (word8 )202,          (word8 )166,          (word8 )252}, 
     {          (word8 )139,          (word8 )199,          (word8 )173,          (word8 )242}, 
     {          (word8 )180,          (word8 )228,          (word8 )156,          (word8 )216}, 
     {          (word8 )189,          (word8 )233,          (word8 )151,          (word8 )214}, 
     {          (word8 )166,          (word8 )254,          (word8 )138,          (word8 )196}, 
     {          (word8 )175,          (word8 )243,          (word8 )129,          (word8 )202}, 
     {          (word8 )216,          (word8 )184,          (word8 )232,          (word8 )144}, 
     {          (word8 )209,          (word8 )181,          (word8 )227,          (word8 )158}, 
     {          (word8 )202,          (word8 )162,          (word8 )254,          (word8 )140}, 
     {          (word8 )195,          (word8 )175,          (word8 )245,          (word8 )130}, 
     {          (word8 )252,          (word8 )140,          (word8 )196,          (word8 )168}, 
     {          (word8 )245,          (word8 )129,          (word8 )207,          (word8 )166}, 
     {          (word8 )238,          (word8 )150,          (word8 )210,          (word8 )180}, 
     {          (word8 )231,          (word8 )155,          (word8 )217,          (word8 )186}, 
     {          (word8 )59,          (word8 )187,          (word8 )123,          (word8 )219}, 
     {          (word8 )50,          (word8 )182,          (word8 )112,          (word8 )213}, 
     {          (word8 )41,          (word8 )161,          (word8 )109,          (word8 )199}, 
     {          (word8 )32,          (word8 )172,          (word8 )102,          (word8 )201}, 
     {          (word8 )31,          (word8 )143,          (word8 )87,          (word8 )227}, 
     {          (word8 )22,          (word8 )130,          (word8 )92,          (word8 )237}, 
     {          (word8 )13,          (word8 )149,          (word8 )65,          (word8 )255}, 
     {          (word8 )4,          (word8 )152,          (word8 )74,          (word8 )241}, 
     {          (word8 )115,          (word8 )211,          (word8 )35,          (word8 )171}, 
     {          (word8 )122,          (word8 )222,          (word8 )40,          (word8 )165}, 
     {          (word8 )97,          (word8 )201,          (word8 )53,          (word8 )183}, 
     {          (word8 )104,          (word8 )196,          (word8 )62,          (word8 )185}, 
     {          (word8 )87,          (word8 )231,          (word8 )15,          (word8 )147}, 
     {          (word8 )94,          (word8 )234,          (word8 )4,          (word8 )157}, 
     {          (word8 )69,          (word8 )253,          (word8 )25,          (word8 )143}, 
     {          (word8 )76,          (word8 )240,          (word8 )18,          (word8 )129}, 
     {          (word8 )171,          (word8 )107,          (word8 )203,          (word8 )59}, 
     {          (word8 )162,          (word8 )102,          (word8 )192,          (word8 )53}, 
     {          (word8 )185,          (word8 )113,          (word8 )221,          (word8 )39}, 
     {          (word8 )176,          (word8 )124,          (word8 )214,          (word8 )41}, 
     {          (word8 )143,          (word8 )95,          (word8 )231,          (word8 )3}, 
     {          (word8 )134,          (word8 )82,          (word8 )236,          (word8 )13}, 
     {          (word8 )157,          (word8 )69,          (word8 )241,          (word8 )31}, 
     {          (word8 )148,          (word8 )72,          (word8 )250,          (word8 )17}, 
     {          (word8 )227,          (word8 )3,          (word8 )147,          (word8 )75}, 
     {          (word8 )234,          (word8 )14,          (word8 )152,          (word8 )69}, 
     {          (word8 )241,          (word8 )25,          (word8 )133,          (word8 )87}, 
     {          (word8 )248,          (word8 )20,          (word8 )142,          (word8 )89}, 
     {          (word8 )199,          (word8 )55,          (word8 )191,          (word8 )115}, 
     {          (word8 )206,          (word8 )58,          (word8 )180,          (word8 )125}, 
     {          (word8 )213,          (word8 )45,          (word8 )169,          (word8 )111}, 
     {          (word8 )220,          (word8 )32,          (word8 )162,          (word8 )97}, 
     {          (word8 )118,          (word8 )109,          (word8 )246,          (word8 )173}, 
     {          (word8 )127,          (word8 )96,          (word8 )253,          (word8 )163}, 
     {          (word8 )100,          (word8 )119,          (word8 )224,          (word8 )177}, 
     {          (word8 )109,          (word8 )122,          (word8 )235,          (word8 )191}, 
     {          (word8 )82,          (word8 )89,          (word8 )218,          (word8 )149}, 
     {          (word8 )91,          (word8 )84,          (word8 )209,          (word8 )155}, 
     {          (word8 )64,          (word8 )67,          (word8 )204,          (word8 )137}, 
     {          (word8 )73,          (word8 )78,          (word8 )199,          (word8 )135}, 
     {          (word8 )62,          (word8 )5,          (word8 )174,          (word8 )221}, 
     {          (word8 )55,          (word8 )8,          (word8 )165,          (word8 )211}, 
     {          (word8 )44,          (word8 )31,          (word8 )184,          (word8 )193}, 
     {          (word8 )37,          (word8 )18,          (word8 )179,          (word8 )207}, 
     {          (word8 )26,          (word8 )49,          (word8 )130,          (word8 )229}, 
     {          (word8 )19,          (word8 )60,          (word8 )137,          (word8 )235}, 
     {          (word8 )8,          (word8 )43,          (word8 )148,          (word8 )249}, 
     {          (word8 )1,          (word8 )38,          (word8 )159,          (word8 )247}, 
     {          (word8 )230,          (word8 )189,          (word8 )70,          (word8 )77}, 
     {          (word8 )239,          (word8 )176,          (word8 )77,          (word8 )67}, 
     {          (word8 )244,          (word8 )167,          (word8 )80,          (word8 )81}, 
     {          (word8 )253,          (word8 )170,          (word8 )91,          (word8 )95}, 
     {          (word8 )194,          (word8 )137,          (word8 )106,          (word8 )117}, 
     {          (word8 )203,          (word8 )132,          (word8 )97,          (word8 )123}, 
     {          (word8 )208,          (word8 )147,          (word8 )124,          (word8 )105}, 
     {          (word8 )217,          (word8 )158,          (word8 )119,          (word8 )103}, 
     {          (word8 )174,          (word8 )213,          (word8 )30,          (word8 )61}, 
     {          (word8 )167,          (word8 )216,          (word8 )21,          (word8 )51}, 
     {          (word8 )188,          (word8 )207,          (word8 )8,          (word8 )33}, 
     {          (word8 )181,          (word8 )194,          (word8 )3,          (word8 )47}, 
     {          (word8 )138,          (word8 )225,          (word8 )50,          (word8 )5}, 
     {          (word8 )131,          (word8 )236,          (word8 )57,          (word8 )11}, 
     {          (word8 )152,          (word8 )251,          (word8 )36,          (word8 )25}, 
     {          (word8 )145,          (word8 )246,          (word8 )47,          (word8 )23}, 
     {          (word8 )77,          (word8 )214,          (word8 )141,          (word8 )118}, 
     {          (word8 )68,          (word8 )219,          (word8 )134,          (word8 )120}, 
     {          (word8 )95,          (word8 )204,          (word8 )155,          (word8 )106}, 
     {          (word8 )86,          (word8 )193,          (word8 )144,          (word8 )100}, 
     {          (word8 )105,          (word8 )226,          (word8 )161,          (word8 )78}, 
     {          (word8 )96,          (word8 )239,          (word8 )170,          (word8 )64}, 
     {          (word8 )123,          (word8 )248,          (word8 )183,          (word8 )82}, 
     {          (word8 )114,          (word8 )245,          (word8 )188,          (word8 )92}, 
     {          (word8 )5,          (word8 )190,          (word8 )213,          (word8 )6}, 
     {          (word8 )12,          (word8 )179,          (word8 )222,          (word8 )8}, 
     {          (word8 )23,          (word8 )164,          (word8 )195,          (word8 )26}, 
     {          (word8 )30,          (word8 )169,          (word8 )200,          (word8 )20}, 
     {          (word8 )33,          (word8 )138,          (word8 )249,          (word8 )62}, 
     {          (word8 )40,          (word8 )135,          (word8 )242,          (word8 )48}, 
     {          (word8 )51,          (word8 )144,          (word8 )239,          (word8 )34}, 
     {          (word8 )58,          (word8 )157,          (word8 )228,          (word8 )44}, 
     {          (word8 )221,          (word8 )6,          (word8 )61,          (word8 )150}, 
     {          (word8 )212,          (word8 )11,          (word8 )54,          (word8 )152}, 
     {          (word8 )207,          (word8 )28,          (word8 )43,          (word8 )138}, 
     {          (word8 )198,          (word8 )17,          (word8 )32,          (word8 )132}, 
     {          (word8 )249,          (word8 )50,          (word8 )17,          (word8 )174}, 
     {          (word8 )240,          (word8 )63,          (word8 )26,          (word8 )160}, 
     {          (word8 )235,          (word8 )40,          (word8 )7,          (word8 )178}, 
     {          (word8 )226,          (word8 )37,          (word8 )12,          (word8 )188}, 
     {          (word8 )149,          (word8 )110,          (word8 )101,          (word8 )230}, 
     {          (word8 )156,          (word8 )99,          (word8 )110,          (word8 )232}, 
     {          (word8 )135,          (word8 )116,          (word8 )115,          (word8 )250}, 
     {          (word8 )142,          (word8 )121,          (word8 )120,          (word8 )244}, 
     {          (word8 )177,          (word8 )90,          (word8 )73,          (word8 )222}, 
     {          (word8 )184,          (word8 )87,          (word8 )66,          (word8 )208}, 
     {          (word8 )163,          (word8 )64,          (word8 )95,          (word8 )194}, 
     {          (word8 )170,          (word8 )77,          (word8 )84,          (word8 )204}, 
     {          (word8 )236,          (word8 )218,          (word8 )247,          (word8 )65}, 
     {          (word8 )229,          (word8 )215,          (word8 )252,          (word8 )79}, 
     {          (word8 )254,          (word8 )192,          (word8 )225,          (word8 )93}, 
     {          (word8 )247,          (word8 )205,          (word8 )234,          (word8 )83}, 
     {          (word8 )200,          (word8 )238,          (word8 )219,          (word8 )121}, 
     {          (word8 )193,          (word8 )227,          (word8 )208,          (word8 )119}, 
     {          (word8 )218,          (word8 )244,          (word8 )205,          (word8 )101}, 
     {          (word8 )211,          (word8 )249,          (word8 )198,          (word8 )107}, 
     {          (word8 )164,          (word8 )178,          (word8 )175,          (word8 )49}, 
     {          (word8 )173,          (word8 )191,          (word8 )164,          (word8 )63}, 
     {          (word8 )182,          (word8 )168,          (word8 )185,          (word8 )45}, 
     {          (word8 )191,          (word8 )165,          (word8 )178,          (word8 )35}, 
     {          (word8 )128,          (word8 )134,          (word8 )131,          (word8 )9}, 
     {          (word8 )137,          (word8 )139,          (word8 )136,          (word8 )7}, 
     {          (word8 )146,          (word8 )156,          (word8 )149,          (word8 )21}, 
     {          (word8 )155,          (word8 )145,          (word8 )158,          (word8 )27}, 
     {          (word8 )124,          (word8 )10,          (word8 )71,          (word8 )161}, 
     {          (word8 )117,          (word8 )7,          (word8 )76,          (word8 )175}, 
     {          (word8 )110,          (word8 )16,          (word8 )81,          (word8 )189}, 
     {          (word8 )103,          (word8 )29,          (word8 )90,          (word8 )179}, 
     {          (word8 )88,          (word8 )62,          (word8 )107,          (word8 )153}, 
     {          (word8 )81,          (word8 )51,          (word8 )96,          (word8 )151}, 
     {          (word8 )74,          (word8 )36,          (word8 )125,          (word8 )133}, 
     {          (word8 )67,          (word8 )41,          (word8 )118,          (word8 )139}, 
     {          (word8 )52,          (word8 )98,          (word8 )31,          (word8 )209}, 
     {          (word8 )61,          (word8 )111,          (word8 )20,          (word8 )223}, 
     {          (word8 )38,          (word8 )120,          (word8 )9,          (word8 )205}, 
     {          (word8 )47,          (word8 )117,          (word8 )2,          (word8 )195}, 
     {          (word8 )16,          (word8 )86,          (word8 )51,          (word8 )233}, 
     {          (word8 )25,          (word8 )91,          (word8 )56,          (word8 )231}, 
     {          (word8 )2,          (word8 )76,          (word8 )37,          (word8 )245}, 
     {          (word8 )11,          (word8 )65,          (word8 )46,          (word8 )251}, 
     {          (word8 )215,          (word8 )97,          (word8 )140,          (word8 )154}, 
     {          (word8 )222,          (word8 )108,          (word8 )135,          (word8 )148}, 
     {          (word8 )197,          (word8 )123,          (word8 )154,          (word8 )134}, 
     {          (word8 )204,          (word8 )118,          (word8 )145,          (word8 )136}, 
     {          (word8 )243,          (word8 )85,          (word8 )160,          (word8 )162}, 
     {          (word8 )250,          (word8 )88,          (word8 )171,          (word8 )172}, 
     {          (word8 )225,          (word8 )79,          (word8 )182,          (word8 )190}, 
     {          (word8 )232,          (word8 )66,          (word8 )189,          (word8 )176}, 
     {          (word8 )159,          (word8 )9,          (word8 )212,          (word8 )234}, 
     {          (word8 )150,          (word8 )4,          (word8 )223,          (word8 )228}, 
     {          (word8 )141,          (word8 )19,          (word8 )194,          (word8 )246}, 
     {          (word8 )132,          (word8 )30,          (word8 )201,          (word8 )248}, 
     {          (word8 )187,          (word8 )61,          (word8 )248,          (word8 )210}, 
     {          (word8 )178,          (word8 )48,          (word8 )243,          (word8 )220}, 
     {          (word8 )169,          (word8 )39,          (word8 )238,          (word8 )206}, 
     {          (word8 )160,          (word8 )42,          (word8 )229,          (word8 )192}, 
     {          (word8 )71,          (word8 )177,          (word8 )60,          (word8 )122}, 
     {          (word8 )78,          (word8 )188,          (word8 )55,          (word8 )116}, 
     {          (word8 )85,          (word8 )171,          (word8 )42,          (word8 )102}, 
     {          (word8 )92,          (word8 )166,          (word8 )33,          (word8 )104}, 
     {          (word8 )99,          (word8 )133,          (word8 )16,          (word8 )66}, 
     {          (word8 )106,          (word8 )136,          (word8 )27,          (word8 )76}, 
     {          (word8 )113,          (word8 )159,          (word8 )6,          (word8 )94}, 
     {          (word8 )120,          (word8 )146,          (word8 )13,          (word8 )80}, 
     {          (word8 )15,          (word8 )217,          (word8 )100,          (word8 )10}, 
     {          (word8 )6,          (word8 )212,          (word8 )111,          (word8 )4}, 
     {          (word8 )29,          (word8 )195,          (word8 )114,          (word8 )22}, 
     {          (word8 )20,          (word8 )206,          (word8 )121,          (word8 )24}, 
     {          (word8 )43,          (word8 )237,          (word8 )72,          (word8 )50}, 
     {          (word8 )34,          (word8 )224,          (word8 )67,          (word8 )60}, 
     {          (word8 )57,          (word8 )247,          (word8 )94,          (word8 )46}, 
     {          (word8 )48,          (word8 )250,          (word8 )85,          (word8 )32}, 
     {          (word8 )154,          (word8 )183,          (word8 )1,          (word8 )236}, 
     {          (word8 )147,          (word8 )186,          (word8 )10,          (word8 )226}, 
     {          (word8 )136,          (word8 )173,          (word8 )23,          (word8 )240}, 
     {          (word8 )129,          (word8 )160,          (word8 )28,          (word8 )254}, 
     {          (word8 )190,          (word8 )131,          (word8 )45,          (word8 )212}, 
     {          (word8 )183,          (word8 )142,          (word8 )38,          (word8 )218}, 
     {          (word8 )172,          (word8 )153,          (word8 )59,          (word8 )200}, 
     {          (word8 )165,          (word8 )148,          (word8 )48,          (word8 )198}, 
     {          (word8 )210,          (word8 )223,          (word8 )89,          (word8 )156}, 
     {          (word8 )219,          (word8 )210,          (word8 )82,          (word8 )146}, 
     {          (word8 )192,          (word8 )197,          (word8 )79,          (word8 )128}, 
     {          (word8 )201,          (word8 )200,          (word8 )68,          (word8 )142}, 
     {          (word8 )246,          (word8 )235,          (word8 )117,          (word8 )164}, 
     {          (word8 )255,          (word8 )230,          (word8 )126,          (word8 )170}, 
     {          (word8 )228,          (word8 )241,          (word8 )99,          (word8 )184}, 
     {          (word8 )237,          (word8 )252,          (word8 )104,          (word8 )182}, 
     {          (word8 )10,          (word8 )103,          (word8 )177,          (word8 )12}, 
     {          (word8 )3,          (word8 )106,          (word8 )186,          (word8 )2}, 
     {          (word8 )24,          (word8 )125,          (word8 )167,          (word8 )16}, 
     {          (word8 )17,          (word8 )112,          (word8 )172,          (word8 )30}, 
     {          (word8 )46,          (word8 )83,          (word8 )157,          (word8 )52}, 
     {          (word8 )39,          (word8 )94,          (word8 )150,          (word8 )58}, 
     {          (word8 )60,          (word8 )73,          (word8 )139,          (word8 )40}, 
     {          (word8 )53,          (word8 )68,          (word8 )128,          (word8 )38}, 
     {          (word8 )66,          (word8 )15,          (word8 )233,          (word8 )124}, 
     {          (word8 )75,          (word8 )2,          (word8 )226,          (word8 )114}, 
     {          (word8 )80,          (word8 )21,          (word8 )255,          (word8 )96}, 
     {          (word8 )89,          (word8 )24,          (word8 )244,          (word8 )110}, 
     {          (word8 )102,          (word8 )59,          (word8 )197,          (word8 )68}, 
     {          (word8 )111,          (word8 )54,          (word8 )206,          (word8 )74}, 
     {          (word8 )116,          (word8 )33,          (word8 )211,          (word8 )88}, 
     {          (word8 )125,          (word8 )44,          (word8 )216,          (word8 )86}, 
     {          (word8 )161,          (word8 )12,          (word8 )122,          (word8 )55}, 
     {          (word8 )168,          (word8 )1,          (word8 )113,          (word8 )57}, 
     {          (word8 )179,          (word8 )22,          (word8 )108,          (word8 )43}, 
     {          (word8 )186,          (word8 )27,          (word8 )103,          (word8 )37}, 
     {          (word8 )133,          (word8 )56,          (word8 )86,          (word8 )15}, 
     {          (word8 )140,          (word8 )53,          (word8 )93,          (word8 )1}, 
     {          (word8 )151,          (word8 )34,          (word8 )64,          (word8 )19}, 
     {          (word8 )158,          (word8 )47,          (word8 )75,          (word8 )29}, 
     {          (word8 )233,          (word8 )100,          (word8 )34,          (word8 )71}, 
     {          (word8 )224,          (word8 )105,          (word8 )41,          (word8 )73}, 
     {          (word8 )251,          (word8 )126,          (word8 )52,          (word8 )91}, 
     {          (word8 )242,          (word8 )115,          (word8 )63,          (word8 )85}, 
     {          (word8 )205,          (word8 )80,          (word8 )14,          (word8 )127}, 
     {          (word8 )196,          (word8 )93,          (word8 )5,          (word8 )113}, 
     {          (word8 )223,          (word8 )74,          (word8 )24,          (word8 )99}, 
     {          (word8 )214,          (word8 )71,          (word8 )19,          (word8 )109}, 
     {          (word8 )49,          (word8 )220,          (word8 )202,          (word8 )215}, 
     {          (word8 )56,          (word8 )209,          (word8 )193,          (word8 )217}, 
     {          (word8 )35,          (word8 )198,          (word8 )220,          (word8 )203}, 
     {          (word8 )42,          (word8 )203,          (word8 )215,          (word8 )197}, 
     {          (word8 )21,          (word8 )232,          (word8 )230,          (word8 )239}, 
     {          (word8 )28,          (word8 )229,          (word8 )237,          (word8 )225}, 
     {          (word8 )7,          (word8 )242,          (word8 )240,          (word8 )243}, 
     {          (word8 )14,          (word8 )255,          (word8 )251,          (word8 )253}, 
     {          (word8 )121,          (word8 )180,          (word8 )146,          (word8 )167}, 
     {          (word8 )112,          (word8 )185,          (word8 )153,          (word8 )169}, 
     {          (word8 )107,          (word8 )174,          (word8 )132,          (word8 )187}, 
     {          (word8 )98,          (word8 )163,          (word8 )143,          (word8 )181}, 
     {          (word8 )93,          (word8 )128,          (word8 )190,          (word8 )159}, 
     {          (word8 )84,          (word8 )141,          (word8 )181,          (word8 )145}, 
     {          (word8 )79,          (word8 )154,          (word8 )168,          (word8 )131}, 
     {          (word8 )70,          (word8 )151,          (word8 )163,          (word8 )141}}};
word32 (*M0)[256]  =    (word32 (*)[256])(M0b);
word32 (*M1)[256]  =    (word32 (*)[256])(M1b);
word8 xrcon[30]  = 
  {      (word8 )1,      (word8 )2,      (word8 )4,      (word8 )8, 
        (word8 )16,      (word8 )32,      (word8 )64,      (word8 )128, 
        (word8 )27,      (word8 )54,      (word8 )108,      (word8 )216, 
        (word8 )171,      (word8 )77,      (word8 )154,      (word8 )47, 
        (word8 )94,      (word8 )188,      (word8 )99,      (word8 )198, 
        (word8 )151,      (word8 )53,      (word8 )106,      (word8 )212, 
        (word8 )179,      (word8 )125,      (word8 )250,      (word8 )239, 
        (word8 )197,      (word8 )145};
word8 xLogtable[256]  = 
  {      (word8 )0,      (word8 )0,      (word8 )25,      (word8 )1, 
        (word8 )50,      (word8 )2,      (word8 )26,      (word8 )198, 
        (word8 )75,      (word8 )199,      (word8 )27,      (word8 )104, 
        (word8 )51,      (word8 )238,      (word8 )223,      (word8 )3, 
        (word8 )100,      (word8 )4,      (word8 )224,      (word8 )14, 
        (word8 )52,      (word8 )141,      (word8 )129,      (word8 )239, 
        (word8 )76,      (word8 )113,      (word8 )8,      (word8 )200, 
        (word8 )248,      (word8 )105,      (word8 )28,      (word8 )193, 
        (word8 )125,      (word8 )194,      (word8 )29,      (word8 )181, 
        (word8 )249,      (word8 )185,      (word8 )39,      (word8 )106, 
        (word8 )77,      (word8 )228,      (word8 )166,      (word8 )114, 
        (word8 )154,      (word8 )201,      (word8 )9,      (word8 )120, 
        (word8 )101,      (word8 )47,      (word8 )138,      (word8 )5, 
        (word8 )33,      (word8 )15,      (word8 )225,      (word8 )36, 
        (word8 )18,      (word8 )240,      (word8 )130,      (word8 )69, 
        (word8 )53,      (word8 )147,      (word8 )218,      (word8 )142, 
        (word8 )150,      (word8 )143,      (word8 )219,      (word8 )189, 
        (word8 )54,      (word8 )208,      (word8 )206,      (word8 )148, 
        (word8 )19,      (word8 )92,      (word8 )210,      (word8 )241, 
        (word8 )64,      (word8 )70,      (word8 )131,      (word8 )56, 
        (word8 )102,      (word8 )221,      (word8 )253,      (word8 )48, 
        (word8 )191,      (word8 )6,      (word8 )139,      (word8 )98, 
        (word8 )179,      (word8 )37,      (word8 )226,      (word8 )152, 
        (word8 )34,      (word8 )136,      (word8 )145,      (word8 )16, 
        (word8 )126,      (word8 )110,      (word8 )72,      (word8 )195, 
        (word8 )163,      (word8 )182,      (word8 )30,      (word8 )66, 
        (word8 )58,      (word8 )107,      (word8 )40,      (word8 )84, 
        (word8 )250,      (word8 )133,      (word8 )61,      (word8 )186, 
        (word8 )43,      (word8 )121,      (word8 )10,      (word8 )21, 
        (word8 )155,      (word8 )159,      (word8 )94,      (word8 )202, 
        (word8 )78,      (word8 )212,      (word8 )172,      (word8 )229, 
        (word8 )243,      (word8 )115,      (word8 )167,      (word8 )87, 
        (word8 )175,      (word8 )88,      (word8 )168,      (word8 )80, 
        (word8 )244,      (word8 )234,      (word8 )214,      (word8 )116, 
        (word8 )79,      (word8 )174,      (word8 )233,      (word8 )213, 
        (word8 )231,      (word8 )230,      (word8 )173,      (word8 )232, 
        (word8 )44,      (word8 )215,      (word8 )117,      (word8 )122, 
        (word8 )235,      (word8 )22,      (word8 )11,      (word8 )245, 
        (word8 )89,      (word8 )203,      (word8 )95,      (word8 )176, 
        (word8 )156,      (word8 )169,      (word8 )81,      (word8 )160, 
        (word8 )127,      (word8 )12,      (word8 )246,      (word8 )111, 
        (word8 )23,      (word8 )196,      (word8 )73,      (word8 )236, 
        (word8 )216,      (word8 )67,      (word8 )31,      (word8 )45, 
        (word8 )164,      (word8 )118,      (word8 )123,      (word8 )183, 
        (word8 )204,      (word8 )187,      (word8 )62,      (word8 )90, 
        (word8 )251,      (word8 )96,      (word8 )177,      (word8 )134, 
        (word8 )59,      (word8 )82,      (word8 )161,      (word8 )108, 
        (word8 )170,      (word8 )85,      (word8 )41,      (word8 )157, 
        (word8 )151,      (word8 )178,      (word8 )135,      (word8 )144, 
        (word8 )97,      (word8 )190,      (word8 )220,      (word8 )252, 
        (word8 )188,      (word8 )149,      (word8 )207,      (word8 )205, 
        (word8 )55,      (word8 )63,      (word8 )91,      (word8 )209, 
        (word8 )83,      (word8 )57,      (word8 )132,      (word8 )60, 
        (word8 )65,      (word8 )162,      (word8 )109,      (word8 )71, 
        (word8 )20,      (word8 )42,      (word8 )158,      (word8 )93, 
        (word8 )86,      (word8 )242,      (word8 )211,      (word8 )171, 
        (word8 )68,      (word8 )17,      (word8 )146,      (word8 )217, 
        (word8 )35,      (word8 )32,      (word8 )46,      (word8 )137, 
        (word8 )180,      (word8 )124,      (word8 )184,      (word8 )38, 
        (word8 )119,      (word8 )153,      (word8 )227,      (word8 )165, 
        (word8 )103,      (word8 )74,      (word8 )237,      (word8 )222, 
        (word8 )197,      (word8 )49,      (word8 )254,      (word8 )24, 
        (word8 )13,      (word8 )99,      (word8 )140,      (word8 )128, 
        (word8 )192,      (word8 )247,      (word8 )112,      (word8 )7};
word8 xAlogtable[256]  = 
  {      (word8 )1,      (word8 )3,      (word8 )5,      (word8 )15, 
        (word8 )17,      (word8 )51,      (word8 )85,      (word8 )255, 
        (word8 )26,      (word8 )46,      (word8 )114,      (word8 )150, 
        (word8 )161,      (word8 )248,      (word8 )19,      (word8 )53, 
        (word8 )95,      (word8 )225,      (word8 )56,      (word8 )72, 
        (word8 )216,      (word8 )115,      (word8 )149,      (word8 )164, 
        (word8 )247,      (word8 )2,      (word8 )6,      (word8 )10, 
        (word8 )30,      (word8 )34,      (word8 )102,      (word8 )170, 
        (word8 )229,      (word8 )52,      (word8 )92,      (word8 )228, 
        (word8 )55,      (word8 )89,      (word8 )235,      (word8 )38, 
        (word8 )106,      (word8 )190,      (word8 )217,      (word8 )112, 
        (word8 )144,      (word8 )171,      (word8 )230,      (word8 )49, 
        (word8 )83,      (word8 )245,      (word8 )4,      (word8 )12, 
        (word8 )20,      (word8 )60,      (word8 )68,      (word8 )204, 
        (word8 )79,      (word8 )209,      (word8 )104,      (word8 )184, 
        (word8 )211,      (word8 )110,      (word8 )178,      (word8 )205, 
        (word8 )76,      (word8 )212,      (word8 )103,      (word8 )169, 
        (word8 )224,      (word8 )59,      (word8 )77,      (word8 )215, 
        (word8 )98,      (word8 )166,      (word8 )241,      (word8 )8, 
        (word8 )24,      (word8 )40,      (word8 )120,      (word8 )136, 
        (word8 )131,      (word8 )158,      (word8 )185,      (word8 )208, 
        (word8 )107,      (word8 )189,      (word8 )220,      (word8 )127, 
        (word8 )129,      (word8 )152,      (word8 )179,      (word8 )206, 
        (word8 )73,      (word8 )219,      (word8 )118,      (word8 )154, 
        (word8 )181,      (word8 )196,      (word8 )87,      (word8 )249, 
        (word8 )16,      (word8 )48,      (word8 )80,      (word8 )240, 
        (word8 )11,      (word8 )29,      (word8 )39,      (word8 )105, 
        (word8 )187,      (word8 )214,      (word8 )97,      (word8 )163, 
        (word8 )254,      (word8 )25,      (word8 )43,      (word8 )125, 
        (word8 )135,      (word8 )146,      (word8 )173,      (word8 )236, 
        (word8 )47,      (word8 )113,      (word8 )147,      (word8 )174, 
        (word8 )233,      (word8 )32,      (word8 )96,      (word8 )160, 
        (word8 )251,      (word8 )22,      (word8 )58,      (word8 )78, 
        (word8 )210,      (word8 )109,      (word8 )183,      (word8 )194, 
        (word8 )93,      (word8 )231,      (word8 )50,      (word8 )86, 
        (word8 )250,      (word8 )21,      (word8 )63,      (word8 )65, 
        (word8 )195,      (word8 )94,      (word8 )226,      (word8 )61, 
        (word8 )71,      (word8 )201,      (word8 )64,      (word8 )192, 
        (word8 )91,      (word8 )237,      (word8 )44,      (word8 )116, 
        (word8 )156,      (word8 )191,      (word8 )218,      (word8 )117, 
        (word8 )159,      (word8 )186,      (word8 )213,      (word8 )100, 
        (word8 )172,      (word8 )239,      (word8 )42,      (word8 )126, 
        (word8 )130,      (word8 )157,      (word8 )188,      (word8 )223, 
        (word8 )122,      (word8 )142,      (word8 )137,      (word8 )128, 
        (word8 )155,      (word8 )182,      (word8 )193,      (word8 )88, 
        (word8 )232,      (word8 )35,      (word8 )101,      (word8 )175, 
        (word8 )234,      (word8 )37,      (word8 )111,      (word8 )177, 
        (word8 )200,      (word8 )67,      (word8 )197,      (word8 )84, 
        (word8 )252,      (word8 )31,      (word8 )33,      (word8 )99, 
        (word8 )165,      (word8 )244,      (word8 )7,      (word8 )9, 
        (word8 )27,      (word8 )45,      (word8 )119,      (word8 )153, 
        (word8 )176,      (word8 )203,      (word8 )70,      (word8 )202, 
        (word8 )69,      (word8 )207,      (word8 )74,      (word8 )222, 
        (word8 )121,      (word8 )139,      (word8 )134,      (word8 )145, 
        (word8 )168,      (word8 )227,      (word8 )62,      (word8 )66, 
        (word8 )198,      (word8 )81,      (word8 )243,      (word8 )14, 
        (word8 )18,      (word8 )54,      (word8 )90,      (word8 )238, 
        (word8 )41,      (word8 )123,      (word8 )141,      (word8 )140, 
        (word8 )143,      (word8 )138,      (word8 )133,      (word8 )148, 
        (word8 )167,      (word8 )242,      (word8 )13,      (word8 )23, 
        (word8 )57,      (word8 )75,      (word8 )221,      (word8 )124, 
        (word8 )132,      (word8 )151,      (word8 )162,      (word8 )253, 
        (word8 )28,      (word8 )36,      (word8 )108,      (word8 )180, 
        (word8 )199,      (word8 )82,      (word8 )246,      (word8 )1};
word8 xS[256]  = 
  {      (word8 )99,      (word8 )124,      (word8 )119,      (word8 )123, 
        (word8 )242,      (word8 )107,      (word8 )111,      (word8 )197, 
        (word8 )48,      (word8 )1,      (word8 )103,      (word8 )43, 
        (word8 )254,      (word8 )215,      (word8 )171,      (word8 )118, 
        (word8 )202,      (word8 )130,      (word8 )201,      (word8 )125, 
        (word8 )250,      (word8 )89,      (word8 )71,      (word8 )240, 
        (word8 )173,      (word8 )212,      (word8 )162,      (word8 )175, 
        (word8 )156,      (word8 )164,      (word8 )114,      (word8 )192, 
        (word8 )183,      (word8 )253,      (word8 )147,      (word8 )38, 
        (word8 )54,      (word8 )63,      (word8 )247,      (word8 )204, 
        (word8 )52,      (word8 )165,      (word8 )229,      (word8 )241, 
        (word8 )113,      (word8 )216,      (word8 )49,      (word8 )21, 
        (word8 )4,      (word8 )199,      (word8 )35,      (word8 )195, 
        (word8 )24,      (word8 )150,      (word8 )5,      (word8 )154, 
        (word8 )7,      (word8 )18,      (word8 )128,      (word8 )226, 
        (word8 )235,      (word8 )39,      (word8 )178,      (word8 )117, 
        (word8 )9,      (word8 )131,      (word8 )44,      (word8 )26, 
        (word8 )27,      (word8 )110,      (word8 )90,      (word8 )160, 
        (word8 )82,      (word8 )59,      (word8 )214,      (word8 )179, 
        (word8 )41,      (word8 )227,      (word8 )47,      (word8 )132, 
        (word8 )83,      (word8 )209,      (word8 )0,      (word8 )237, 
        (word8 )32,      (word8 )252,      (word8 )177,      (word8 )91, 
        (word8 )106,      (word8 )203,      (word8 )190,      (word8 )57, 
        (word8 )74,      (word8 )76,      (word8 )88,      (word8 )207, 
        (word8 )208,      (word8 )239,      (word8 )170,      (word8 )251, 
        (word8 )67,      (word8 )77,      (word8 )51,      (word8 )133, 
        (word8 )69,      (word8 )249,      (word8 )2,      (word8 )127, 
        (word8 )80,      (word8 )60,      (word8 )159,      (word8 )168, 
        (word8 )81,      (word8 )163,      (word8 )64,      (word8 )143, 
        (word8 )146,      (word8 )157,      (word8 )56,      (word8 )245, 
        (word8 )188,      (word8 )182,      (word8 )218,      (word8 )33, 
        (word8 )16,      (word8 )255,      (word8 )243,      (word8 )210, 
        (word8 )205,      (word8 )12,      (word8 )19,      (word8 )236, 
        (word8 )95,      (word8 )151,      (word8 )68,      (word8 )23, 
        (word8 )196,      (word8 )167,      (word8 )126,      (word8 )61, 
        (word8 )100,      (word8 )93,      (word8 )25,      (word8 )115, 
        (word8 )96,      (word8 )129,      (word8 )79,      (word8 )220, 
        (word8 )34,      (word8 )42,      (word8 )144,      (word8 )136, 
        (word8 )70,      (word8 )238,      (word8 )184,      (word8 )20, 
        (word8 )222,      (word8 )94,      (word8 )11,      (word8 )219, 
        (word8 )224,      (word8 )50,      (word8 )58,      (word8 )10, 
        (word8 )73,      (word8 )6,      (word8 )36,      (word8 )92, 
        (word8 )194,      (word8 )211,      (word8 )172,      (word8 )98, 
        (word8 )145,      (word8 )149,      (word8 )228,      (word8 )121, 
        (word8 )231,      (word8 )200,      (word8 )55,      (word8 )109, 
        (word8 )141,      (word8 )213,      (word8 )78,      (word8 )169, 
        (word8 )108,      (word8 )86,      (word8 )244,      (word8 )234, 
        (word8 )101,      (word8 )122,      (word8 )174,      (word8 )8, 
        (word8 )186,      (word8 )120,      (word8 )37,      (word8 )46, 
        (word8 )28,      (word8 )166,      (word8 )180,      (word8 )198, 
        (word8 )232,      (word8 )221,      (word8 )116,      (word8 )31, 
        (word8 )75,      (word8 )189,      (word8 )139,      (word8 )138, 
        (word8 )112,      (word8 )62,      (word8 )181,      (word8 )102, 
        (word8 )72,      (word8 )3,      (word8 )246,      (word8 )14, 
        (word8 )97,      (word8 )53,      (word8 )87,      (word8 )185, 
        (word8 )134,      (word8 )193,      (word8 )29,      (word8 )158, 
        (word8 )225,      (word8 )248,      (word8 )152,      (word8 )17, 
        (word8 )105,      (word8 )217,      (word8 )142,      (word8 )148, 
        (word8 )155,      (word8 )30,      (word8 )135,      (word8 )233, 
        (word8 )206,      (word8 )85,      (word8 )40,      (word8 )223, 
        (word8 )140,      (word8 )161,      (word8 )137,      (word8 )13, 
        (word8 )191,      (word8 )230,      (word8 )66,      (word8 )104, 
        (word8 )65,      (word8 )153,      (word8 )45,      (word8 )15, 
        (word8 )176,      (word8 )84,      (word8 )187,      (word8 )22};
word8 xSi[256]  = 
  {      (word8 )82,      (word8 )9,      (word8 )106,      (word8 )213, 
        (word8 )48,      (word8 )54,      (word8 )165,      (word8 )56, 
        (word8 )191,      (word8 )64,      (word8 )163,      (word8 )158, 
        (word8 )129,      (word8 )243,      (word8 )215,      (word8 )251, 
        (word8 )124,      (word8 )227,      (word8 )57,      (word8 )130, 
        (word8 )155,      (word8 )47,      (word8 )255,      (word8 )135, 
        (word8 )52,      (word8 )142,      (word8 )67,      (word8 )68, 
        (word8 )196,      (word8 )222,      (word8 )233,      (word8 )203, 
        (word8 )84,      (word8 )123,      (word8 )148,      (word8 )50, 
        (word8 )166,      (word8 )194,      (word8 )35,      (word8 )61, 
        (word8 )238,      (word8 )76,      (word8 )149,      (word8 )11, 
        (word8 )66,      (word8 )250,      (word8 )195,      (word8 )78, 
        (word8 )8,      (word8 )46,      (word8 )161,      (word8 )102, 
        (word8 )40,      (word8 )217,      (word8 )36,      (word8 )178, 
        (word8 )118,      (word8 )91,      (word8 )162,      (word8 )73, 
        (word8 )109,      (word8 )139,      (word8 )209,      (word8 )37, 
        (word8 )114,      (word8 )248,      (word8 )246,      (word8 )100, 
        (word8 )134,      (word8 )104,      (word8 )152,      (word8 )22, 
        (word8 )212,      (word8 )164,      (word8 )92,      (word8 )204, 
        (word8 )93,      (word8 )101,      (word8 )182,      (word8 )146, 
        (word8 )108,      (word8 )112,      (word8 )72,      (word8 )80, 
        (word8 )253,      (word8 )237,      (word8 )185,      (word8 )218, 
        (word8 )94,      (word8 )21,      (word8 )70,      (word8 )87, 
        (word8 )167,      (word8 )141,      (word8 )157,      (word8 )132, 
        (word8 )144,      (word8 )216,      (word8 )171,      (word8 )0, 
        (word8 )140,      (word8 )188,      (word8 )211,      (word8 )10, 
        (word8 )247,      (word8 )228,      (word8 )88,      (word8 )5, 
        (word8 )184,      (word8 )179,      (word8 )69,      (word8 )6, 
        (word8 )208,      (word8 )44,      (word8 )30,      (word8 )143, 
        (word8 )202,      (word8 )63,      (word8 )15,      (word8 )2, 
        (word8 )193,      (word8 )175,      (word8 )189,      (word8 )3, 
        (word8 )1,      (word8 )19,      (word8 )138,      (word8 )107, 
        (word8 )58,      (word8 )145,      (word8 )17,      (word8 )65, 
        (word8 )79,      (word8 )103,      (word8 )220,      (word8 )234, 
        (word8 )151,      (word8 )242,      (word8 )207,      (word8 )206, 
        (word8 )240,      (word8 )180,      (word8 )230,      (word8 )115, 
        (word8 )150,      (word8 )172,      (word8 )116,      (word8 )34, 
        (word8 )231,      (word8 )173,      (word8 )53,      (word8 )133, 
        (word8 )226,      (word8 )249,      (word8 )55,      (word8 )232, 
        (word8 )28,      (word8 )117,      (word8 )223,      (word8 )110, 
        (word8 )71,      (word8 )241,      (word8 )26,      (word8 )113, 
        (word8 )29,      (word8 )41,      (word8 )197,      (word8 )137, 
        (word8 )111,      (word8 )183,      (word8 )98,      (word8 )14, 
        (word8 )170,      (word8 )24,      (word8 )190,      (word8 )27, 
        (word8 )252,      (word8 )86,      (word8 )62,      (word8 )75, 
        (word8 )198,      (word8 )210,      (word8 )121,      (word8 )32, 
        (word8 )154,      (word8 )219,      (word8 )192,      (word8 )254, 
        (word8 )120,      (word8 )205,      (word8 )90,      (word8 )244, 
        (word8 )31,      (word8 )221,      (word8 )168,      (word8 )51, 
        (word8 )136,      (word8 )7,      (word8 )199,      (word8 )49, 
        (word8 )177,      (word8 )18,      (word8 )16,      (word8 )89, 
        (word8 )39,      (word8 )128,      (word8 )236,      (word8 )95, 
        (word8 )96,      (word8 )81,      (word8 )127,      (word8 )169, 
        (word8 )25,      (word8 )181,      (word8 )74,      (word8 )13, 
        (word8 )45,      (word8 )229,      (word8 )122,      (word8 )159, 
        (word8 )147,      (word8 )201,      (word8 )156,      (word8 )239, 
        (word8 )160,      (word8 )224,      (word8 )59,      (word8 )77, 
        (word8 )174,      (word8 )42,      (word8 )245,      (word8 )176, 
        (word8 )200,      (word8 )235,      (word8 )187,      (word8 )60, 
        (word8 )131,      (word8 )83,      (word8 )153,      (word8 )97, 
        (word8 )23,      (word8 )43,      (word8 )4,      (word8 )126, 
        (word8 )186,      (word8 )119,      (word8 )214,      (word8 )38, 
        (word8 )225,      (word8 )105,      (word8 )20,      (word8 )99, 
        (word8 )85,      (word8 )33,      (word8 )12,      (word8 )125};
word8 L[256]  = 
  {      (word8 )0,      (word8 )2,      (word8 )3,      (word8 )1, 
        (word8 )8,      (word8 )10,      (word8 )11,      (word8 )9, 
        (word8 )12,      (word8 )14,      (word8 )15,      (word8 )13, 
        (word8 )4,      (word8 )6,      (word8 )7,      (word8 )5, 
        (word8 )32,      (word8 )34,      (word8 )35,      (word8 )33, 
        (word8 )40,      (word8 )42,      (word8 )43,      (word8 )41, 
        (word8 )44,      (word8 )46,      (word8 )47,      (word8 )45, 
        (word8 )36,      (word8 )38,      (word8 )39,      (word8 )37, 
        (word8 )48,      (word8 )50,      (word8 )51,      (word8 )49, 
        (word8 )56,      (word8 )58,      (word8 )59,      (word8 )57, 
        (word8 )60,      (word8 )62,      (word8 )63,      (word8 )61, 
        (word8 )52,      (word8 )54,      (word8 )55,      (word8 )53, 
        (word8 )16,      (word8 )18,      (word8 )19,      (word8 )17, 
        (word8 )24,      (word8 )26,      (word8 )27,      (word8 )25, 
        (word8 )28,      (word8 )30,      (word8 )31,      (word8 )29, 
        (word8 )20,      (word8 )22,      (word8 )23,      (word8 )21, 
        (word8 )128,      (word8 )130,      (word8 )131,      (word8 )129, 
        (word8 )136,      (word8 )138,      (word8 )139,      (word8 )137, 
        (word8 )140,      (word8 )142,      (word8 )143,      (word8 )141, 
        (word8 )132,      (word8 )134,      (word8 )135,      (word8 )133, 
        (word8 )160,      (word8 )162,      (word8 )163,      (word8 )161, 
        (word8 )168,      (word8 )170,      (word8 )171,      (word8 )169, 
        (word8 )172,      (word8 )174,      (word8 )175,      (word8 )173, 
        (word8 )164,      (word8 )166,      (word8 )167,      (word8 )165, 
        (word8 )176,      (word8 )178,      (word8 )179,      (word8 )177, 
        (word8 )184,      (word8 )186,      (word8 )187,      (word8 )185, 
        (word8 )188,      (word8 )190,      (word8 )191,      (word8 )189, 
        (word8 )180,      (word8 )182,      (word8 )183,      (word8 )181, 
        (word8 )144,      (word8 )146,      (word8 )147,      (word8 )145, 
        (word8 )152,      (word8 )154,      (word8 )155,      (word8 )153, 
        (word8 )156,      (word8 )158,      (word8 )159,      (word8 )157, 
        (word8 )148,      (word8 )150,      (word8 )151,      (word8 )149, 
        (word8 )192,      (word8 )194,      (word8 )195,      (word8 )193, 
        (word8 )200,      (word8 )202,      (word8 )203,      (word8 )201, 
        (word8 )204,      (word8 )206,      (word8 )207,      (word8 )205, 
        (word8 )196,      (word8 )198,      (word8 )199,      (word8 )197, 
        (word8 )224,      (word8 )226,      (word8 )227,      (word8 )225, 
        (word8 )232,      (word8 )234,      (word8 )235,      (word8 )233, 
        (word8 )236,      (word8 )238,      (word8 )239,      (word8 )237, 
        (word8 )228,      (word8 )230,      (word8 )231,      (word8 )229, 
        (word8 )240,      (word8 )242,      (word8 )243,      (word8 )241, 
        (word8 )248,      (word8 )250,      (word8 )251,      (word8 )249, 
        (word8 )252,      (word8 )254,      (word8 )255,      (word8 )253, 
        (word8 )244,      (word8 )246,      (word8 )247,      (word8 )245, 
        (word8 )208,      (word8 )210,      (word8 )211,      (word8 )209, 
        (word8 )216,      (word8 )218,      (word8 )219,      (word8 )217, 
        (word8 )220,      (word8 )222,      (word8 )223,      (word8 )221, 
        (word8 )212,      (word8 )214,      (word8 )215,      (word8 )213, 
        (word8 )64,      (word8 )66,      (word8 )67,      (word8 )65, 
        (word8 )72,      (word8 )74,      (word8 )75,      (word8 )73, 
        (word8 )76,      (word8 )78,      (word8 )79,      (word8 )77, 
        (word8 )68,      (word8 )70,      (word8 )71,      (word8 )69, 
        (word8 )96,      (word8 )98,      (word8 )99,      (word8 )97, 
        (word8 )104,      (word8 )106,      (word8 )107,      (word8 )105, 
        (word8 )108,      (word8 )110,      (word8 )111,      (word8 )109, 
        (word8 )100,      (word8 )102,      (word8 )103,      (word8 )101, 
        (word8 )112,      (word8 )114,      (word8 )115,      (word8 )113, 
        (word8 )120,      (word8 )122,      (word8 )123,      (word8 )121, 
        (word8 )124,      (word8 )126,      (word8 )127,      (word8 )125, 
        (word8 )116,      (word8 )118,      (word8 )119,      (word8 )117, 
        (word8 )80,      (word8 )82,      (word8 )83,      (word8 )81, 
        (word8 )88,      (word8 )90,      (word8 )91,      (word8 )89, 
        (word8 )92,      (word8 )94,      (word8 )95,      (word8 )93, 
        (word8 )84,      (word8 )86,      (word8 )87,      (word8 )85};
