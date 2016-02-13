# 1 "io.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "io.c"
# 31 "io.c"
# 1 "../../include/portable.h" 1
# 1135 "../../include/portable.h"
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 214 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef unsigned int size_t;
# 326 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef long int wchar_t;
# 1136 "../../include/portable.h" 2
# 1151 "../../include/portable.h"
# 1 "../../include/ac/fdset.h" 1
# 32 "../../include/ac/fdset.h"
# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 328 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 324 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 325 "/usr/include/sys/cdefs.h" 2 3 4
# 329 "/usr/include/features.h" 2 3 4
# 351 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 352 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 135 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 33 "../../include/ac/fdset.h" 2
# 1152 "../../include/portable.h" 2

# 1 "../../include/ldap_cdefs.h" 1
# 1154 "../../include/portable.h" 2
# 1 "../../include/ldap_features.h" 1
# 1155 "../../include/portable.h" 2

# 1 "../../include/ac/assert.h" 1
# 27 "../../include/ac/assert.h"
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 28 "../../include/ac/assert.h" 2
# 1157 "../../include/portable.h" 2
# 1 "../../include/ac/localize.h" 1
# 1158 "../../include/portable.h" 2
# 32 "io.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 355 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 51 "/usr/include/wchar.h" 2 3 4
# 76 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4


# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/gconv.h" 2 3 4





enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
       __const unsigned char **, __const unsigned char *,
       unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
      struct __gconv_step_data *, void *,
      __const unsigned char *,
      __const unsigned char **,
      __const unsigned char *, unsigned char **,
      size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
       __const unsigned char *,
       unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
     size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  __const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 167 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 177 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 200 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 268 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 316 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 325 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 361 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 413 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern wint_t __wunderflow (_IO_FILE *);
extern wint_t __wuflow (_IO_FILE *);
extern wint_t __woverflow (_IO_FILE *, wint_t);
# 451 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 481 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4
# 89 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 141 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));














extern FILE *tmpfile (void) ;
# 188 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 206 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 231 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 245 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 274 "/usr/include/stdio.h" 3 4

# 285 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 306 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 400 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));

# 442 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 466 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 510 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 591 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 644 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 680 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 699 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 722 "/usr/include/stdio.h" 3 4

# 731 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 761 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 780 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 820 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 850 "/usr/include/stdio.h" 3 4

# 34 "io.c" 2

# 1 "../../include/ac/stdlib.h" 1
# 26 "../../include/ac/stdlib.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;



# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 182 "/usr/include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 279 "/usr/include/stdlib.h" 3 4
extern double __strtod_internal (__const char *__restrict __nptr,
     char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern float __strtof_internal (__const char *__restrict __nptr,
    char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern long double __strtold_internal (__const char *__restrict __nptr,
           char **__restrict __endptr,
           int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long int __strtol_internal (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern unsigned long int __strtoul_internal (__const char *__restrict __nptr,
          char **__restrict __endptr,
          int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
      char **__restrict __endptr,
      int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



__extension__
extern unsigned long long int __strtoull_internal (__const char *
         __restrict __nptr,
         char **__restrict __endptr,
         int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 429 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[4096 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern __inline unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern __inline unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern __inline unsigned long long int gnu_dev_makedev (unsigned int __major,
       unsigned int __minor)
     __attribute__ ((__nothrow__));


__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned int __flags;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 439 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;







extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 613 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

# 658 "/usr/include/stdlib.h" 3 4


extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 698 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 709 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 729 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;








extern int system (__const char *__command) ;

# 755 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);









extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));



extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;












extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 820 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 925 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) ;
# 960 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 976 "/usr/include/stdlib.h" 3 4

# 27 "../../include/ac/stdlib.h" 2
# 39 "../../include/ac/stdlib.h"
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 153 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 36 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 37 "/usr/include/bits/local_lim.h" 2 3 4
# 154 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h" 2 3 4
# 40 "../../include/ac/stdlib.h" 2
# 36 "io.c" 2

# 1 "../../include/ac/ctype.h" 1
# 20 "../../include/ac/ctype.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4

# 48 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));


# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
# 323 "/usr/include/ctype.h" 3 4

# 21 "../../include/ac/ctype.h" 2
# 38 "io.c" 2
# 1 "../../include/ac/errno.h" 1
# 21 "../../include/ac/errno.h"
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4




# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 5 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 43 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 59 "/usr/include/errno.h" 3 4

# 22 "../../include/ac/errno.h" 2
# 39 "io.c" 2
# 1 "../../include/ac/socket.h" 1
# 25 "../../include/ac/socket.h"
# 1 "/usr/include/poll.h" 1 3 4
# 1 "/usr/include/sys/poll.h" 1 3 4
# 26 "/usr/include/sys/poll.h" 3 4
# 1 "/usr/include/bits/poll.h" 1 3 4
# 27 "/usr/include/sys/poll.h" 2 3 4
# 37 "/usr/include/sys/poll.h" 3 4
typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };



# 58 "/usr/include/sys/poll.h" 3 4
extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);
# 72 "/usr/include/sys/poll.h" 3 4

# 1 "/usr/include/poll.h" 2 3 4
# 26 "../../include/ac/socket.h" 2



# 1 "/usr/include/sys/socket.h" 1 3 4
# 25 "/usr/include/sys/socket.h" 3 4


# 1 "/usr/include/sys/uio.h" 1 3 4
# 26 "/usr/include/sys/uio.h" 3 4



# 1 "/usr/include/bits/uio.h" 1 3 4
# 44 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 30 "/usr/include/sys/uio.h" 2 3 4
# 40 "/usr/include/sys/uio.h" 3 4
extern ssize_t readv (int __fd, __const struct iovec *__iovec, int __count);
# 50 "/usr/include/sys/uio.h" 3 4
extern ssize_t writev (int __fd, __const struct iovec *__iovec, int __count);


# 28 "/usr/include/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 30 "/usr/include/sys/socket.h" 2 3 4





# 1 "/usr/include/bits/socket.h" 1 3 4
# 30 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 31 "/usr/include/bits/socket.h" 2 3 4

# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 33 "/usr/include/bits/socket.h" 2 3 4




typedef __socklen_t socklen_t;




enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_PACKET = 10



};
# 143 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/bits/sockaddr.h" 1 3 4
# 29 "/usr/include/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 144 "/usr/include/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 163 "/usr/include/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    __uint32_t __ss_align;
    char __ss_padding[(128 - (2 * sizeof (__uint32_t)))];
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000

  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 264 "/usr/include/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__));
# 291 "/usr/include/bits/socket.h" 3 4
enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};


# 1 "/usr/include/asm/socket.h" 1 3 4



# 1 "/usr/include/asm/sockios.h" 1 3 4
# 5 "/usr/include/asm/socket.h" 2 3 4
# 312 "/usr/include/bits/socket.h" 2 3 4



struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 36 "/usr/include/sys/socket.h" 2 3 4




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 100 "/usr/include/sys/socket.h" 3 4
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__));


extern int bind (int __fd, __const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));
# 124 "/usr/include/sys/socket.h" 3 4
extern int connect (int __fd, __const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));






extern ssize_t send (int __fd, __const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, __const void *__buf, size_t __n,
         int __flags, __const struct sockaddr * __addr,
         socklen_t __addr_len);
# 161 "/usr/include/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, __const struct msghdr *__message,
   int __flags);






extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);





extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__));




extern int setsockopt (int __fd, int __level, int __optname,
         __const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__));
# 209 "/usr/include/sys/socket.h" 3 4
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);







extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__));
# 240 "/usr/include/sys/socket.h" 3 4

# 30 "../../include/ac/socket.h" 2


# 1 "/usr/include/sys/un.h" 1 3 4
# 27 "/usr/include/sys/un.h" 3 4



struct sockaddr_un
  {
    sa_family_t sun_family;
    char sun_path[108];
  };



# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 294 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 331 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 354 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 432 "/usr/include/string.h" 3 4

# 39 "/usr/include/sys/un.h" 2 3 4







# 33 "../../include/ac/socket.h" 2






# 1 "/usr/include/netinet/in.h" 1 3 4
# 23 "/usr/include/netinet/in.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 28 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 49 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 126 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 24 "/usr/include/netinet/in.h" 2 3 4







enum
  {
    IPPROTO_IP = 0,

    IPPROTO_HOPOPTS = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_IPV6 = 41,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MTP = 92,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };



typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };
# 193 "/usr/include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t u6_addr8[16];
 uint16_t u6_addr16[8];
 uint32_t u6_addr32[4];
      } in6_u;



  };

extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
# 219 "/usr/include/netinet/in.h" 3 4
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };


struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };



struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };


struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };



struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
# 345 "/usr/include/netinet/in.h" 3 4
# 1 "/usr/include/bits/in.h" 1 3 4
# 82 "/usr/include/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 346 "/usr/include/netinet/in.h" 2 3 4
# 354 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));




# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 366 "/usr/include/netinet/in.h" 2 3 4
# 428 "/usr/include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__));
# 456 "/usr/include/netinet/in.h" 3 4
struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
  };
# 551 "/usr/include/netinet/in.h" 3 4

# 40 "../../include/ac/socket.h" 2


# 1 "/usr/include/netinet/tcp.h" 1 3 4
# 90 "/usr/include/netinet/tcp.h" 3 4
struct tcphdr
  {
    u_int16_t source;
    u_int16_t dest;
    u_int32_t seq;
    u_int32_t ack_seq;

    u_int16_t res1:4;
    u_int16_t doff:4;
    u_int16_t fin:1;
    u_int16_t syn:1;
    u_int16_t rst:1;
    u_int16_t psh:1;
    u_int16_t ack:1;
    u_int16_t urg:1;
    u_int16_t res2:2;
# 119 "/usr/include/netinet/tcp.h" 3 4
    u_int16_t window;
    u_int16_t check;
    u_int16_t urg_ptr;
};


enum
{
  TCP_ESTABLISHED = 1,
  TCP_SYN_SENT,
  TCP_SYN_RECV,
  TCP_FIN_WAIT1,
  TCP_FIN_WAIT2,
  TCP_TIME_WAIT,
  TCP_CLOSE,
  TCP_CLOSE_WAIT,
  TCP_LAST_ACK,
  TCP_LISTEN,
  TCP_CLOSING
};
# 177 "/usr/include/netinet/tcp.h" 3 4
enum tcp_ca_state
{
  TCP_CA_Open = 0,
  TCP_CA_Disorder = 1,
  TCP_CA_CWR = 2,
  TCP_CA_Recovery = 3,
  TCP_CA_Loss = 4
};

struct tcp_info
{
  u_int8_t tcpi_state;
  u_int8_t tcpi_ca_state;
  u_int8_t tcpi_retransmits;
  u_int8_t tcpi_probes;
  u_int8_t tcpi_backoff;
  u_int8_t tcpi_options;
  u_int8_t tcpi_snd_wscale : 4, tcpi_rcv_wscale : 4;

  u_int32_t tcpi_rto;
  u_int32_t tcpi_ato;
  u_int32_t tcpi_snd_mss;
  u_int32_t tcpi_rcv_mss;

  u_int32_t tcpi_unacked;
  u_int32_t tcpi_sacked;
  u_int32_t tcpi_lost;
  u_int32_t tcpi_retrans;
  u_int32_t tcpi_fackets;


  u_int32_t tcpi_last_data_sent;
  u_int32_t tcpi_last_ack_sent;
  u_int32_t tcpi_last_data_recv;
  u_int32_t tcpi_last_ack_recv;


  u_int32_t tcpi_pmtu;
  u_int32_t tcpi_rcv_ssthresh;
  u_int32_t tcpi_rtt;
  u_int32_t tcpi_rttvar;
  u_int32_t tcpi_snd_ssthresh;
  u_int32_t tcpi_snd_cwnd;
  u_int32_t tcpi_advmss;
  u_int32_t tcpi_reordering;
};
# 43 "../../include/ac/socket.h" 2



# 1 "/usr/include/arpa/inet.h" 1 3 4
# 31 "/usr/include/arpa/inet.h" 3 4




extern in_addr_t inet_addr (__const char *__cp) __attribute__ ((__nothrow__));


extern in_addr_t inet_lnaof (struct in_addr __in) __attribute__ ((__nothrow__));



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     __attribute__ ((__nothrow__));


extern in_addr_t inet_netof (struct in_addr __in) __attribute__ ((__nothrow__));



extern in_addr_t inet_network (__const char *__cp) __attribute__ ((__nothrow__));



extern char *inet_ntoa (struct in_addr __in) __attribute__ ((__nothrow__));




extern int inet_pton (int __af, __const char *__restrict __cp,
        void *__restrict __buf) __attribute__ ((__nothrow__));




extern __const char *inet_ntop (int __af, __const void *__restrict __cp,
    char *__restrict __buf, socklen_t __len)
     __attribute__ ((__nothrow__));






extern int inet_aton (__const char *__cp, struct in_addr *__inp) __attribute__ ((__nothrow__));



extern char *inet_neta (in_addr_t __net, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern char *inet_net_ntop (int __af, __const void *__cp, int __bits,
       char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern int inet_net_pton (int __af, __const char *__cp,
     void *__buf, size_t __len) __attribute__ ((__nothrow__));




extern unsigned int inet_nsap_addr (__const char *__cp,
        unsigned char *__buf, int __len) __attribute__ ((__nothrow__));



extern char *inet_nsap_ntoa (int __len, __const unsigned char *__cp,
        char *__buf) __attribute__ ((__nothrow__));



# 47 "../../include/ac/socket.h" 2



# 1 "/usr/include/arpa/nameser.h" 1 3 4
# 56 "/usr/include/arpa/nameser.h" 3 4
# 1 "/usr/include/sys/param.h" 1 3 4
# 22 "/usr/include/sys/param.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 23 "/usr/include/sys/param.h" 2 3 4

# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/asm/param.h" 1 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 25 "/usr/include/sys/param.h" 2 3 4
# 57 "/usr/include/arpa/nameser.h" 2 3 4

# 1 "/usr/include/sys/bitypes.h" 1 3 4
# 59 "/usr/include/arpa/nameser.h" 2 3 4
# 96 "/usr/include/arpa/nameser.h" 3 4
typedef enum __ns_sect {
 ns_s_qd = 0,
 ns_s_zn = 0,
 ns_s_an = 1,
 ns_s_pr = 1,
 ns_s_ns = 2,
 ns_s_ud = 2,
 ns_s_ar = 3,
 ns_s_max = 4
} ns_sect;






typedef struct __ns_msg {
 const u_char *_msg, *_eom;
 u_int16_t _id, _flags, _counts[ns_s_max];
 const u_char *_sections[ns_s_max];
 ns_sect _sect;
 int _rrnum;
 const u_char *_ptr;
} ns_msg;


struct _ns_flagdata { int mask, shift; };
extern struct _ns_flagdata _ns_flagdata[];
# 139 "/usr/include/arpa/nameser.h" 3 4
typedef struct __ns_rr {
 char name[1025];
 u_int16_t type;
 u_int16_t rr_class;
 u_int32_t ttl;
 u_int16_t rdlength;
 const u_char * rdata;
} ns_rr;
# 161 "/usr/include/arpa/nameser.h" 3 4
typedef enum __ns_flag {
 ns_f_qr,
 ns_f_opcode,
 ns_f_aa,
 ns_f_tc,
 ns_f_rd,
 ns_f_ra,
 ns_f_z,
 ns_f_ad,
 ns_f_cd,
 ns_f_rcode,
 ns_f_max
} ns_flag;




typedef enum __ns_opcode {
 ns_o_query = 0,
 ns_o_iquery = 1,
 ns_o_status = 2,

 ns_o_notify = 4,
 ns_o_update = 5,
 ns_o_max = 6
} ns_opcode;




typedef enum __ns_rcode {
 ns_r_noerror = 0,
 ns_r_formerr = 1,
 ns_r_servfail = 2,
 ns_r_nxdomain = 3,
 ns_r_notimpl = 4,
 ns_r_refused = 5,

 ns_r_yxdomain = 6,
 ns_r_yxrrset = 7,
 ns_r_nxrrset = 8,
 ns_r_notauth = 9,
 ns_r_notzone = 10,
 ns_r_max = 11,

 ns_r_badsig = 16,
 ns_r_badkey = 17,
 ns_r_badtime = 18
} ns_rcode;


typedef enum __ns_update_operation {
 ns_uop_delete = 0,
 ns_uop_add = 1,
 ns_uop_max = 2
} ns_update_operation;




struct ns_tsig_key {
        char name[1025], alg[1025];
        unsigned char *data;
        int len;
};
typedef struct ns_tsig_key ns_tsig_key;




struct ns_tcp_tsig_state {
 int counter;
 struct dst_key *key;
 void *ctx;
 unsigned char sig[512];
 int siglen;
};
typedef struct ns_tcp_tsig_state ns_tcp_tsig_state;
# 251 "/usr/include/arpa/nameser.h" 3 4
typedef enum __ns_type {
 ns_t_invalid = 0,
 ns_t_a = 1,
 ns_t_ns = 2,
 ns_t_md = 3,
 ns_t_mf = 4,
 ns_t_cname = 5,
 ns_t_soa = 6,
 ns_t_mb = 7,
 ns_t_mg = 8,
 ns_t_mr = 9,
 ns_t_null = 10,
 ns_t_wks = 11,
 ns_t_ptr = 12,
 ns_t_hinfo = 13,
 ns_t_minfo = 14,
 ns_t_mx = 15,
 ns_t_txt = 16,
 ns_t_rp = 17,
 ns_t_afsdb = 18,
 ns_t_x25 = 19,
 ns_t_isdn = 20,
 ns_t_rt = 21,
 ns_t_nsap = 22,
 ns_t_nsap_ptr = 23,
 ns_t_sig = 24,
 ns_t_key = 25,
 ns_t_px = 26,
 ns_t_gpos = 27,
 ns_t_aaaa = 28,
 ns_t_loc = 29,
 ns_t_nxt = 30,
 ns_t_eid = 31,
 ns_t_nimloc = 32,
 ns_t_srv = 33,
 ns_t_atma = 34,
 ns_t_naptr = 35,
 ns_t_kx = 36,
 ns_t_cert = 37,
 ns_t_a6 = 38,
 ns_t_dname = 39,
 ns_t_sink = 40,
 ns_t_opt = 41,
 ns_t_tsig = 250,
 ns_t_ixfr = 251,
 ns_t_axfr = 252,
 ns_t_mailb = 253,
 ns_t_maila = 254,
 ns_t_any = 255,
 ns_t_zxfr = 256,
 ns_t_max = 65536
} ns_type;
# 318 "/usr/include/arpa/nameser.h" 3 4
typedef enum __ns_class {
 ns_c_invalid = 0,
 ns_c_in = 1,
 ns_c_2 = 2,
 ns_c_chaos = 3,
 ns_c_hs = 4,

 ns_c_none = 254,
 ns_c_any = 255,
 ns_c_max = 65536
} ns_class;



typedef enum __ns_key_types {
 ns_kt_rsa = 1,
 ns_kt_dh = 2,
 ns_kt_dsa = 3,
 ns_kt_private = 254
} ns_key_types;

typedef enum __ns_cert_types {
 cert_t_pkix = 1,
 cert_t_spki = 2,
 cert_t_pgp = 3,
 cert_t_url = 253,
 cert_t_oid = 254
} ns_cert_types;
# 501 "/usr/include/arpa/nameser.h" 3 4

u_int __ns_get16 (const u_char *) __attribute__ ((__nothrow__));
u_long __ns_get32 (const u_char *) __attribute__ ((__nothrow__));
void __ns_put16 (u_int, u_char *) __attribute__ ((__nothrow__));
void __ns_put32 (u_long, u_char *) __attribute__ ((__nothrow__));
int __ns_initparse (const u_char *, int, ns_msg *) __attribute__ ((__nothrow__));
int __ns_skiprr (const u_char *, const u_char *, ns_sect, int)
     __attribute__ ((__nothrow__));
int __ns_parserr (ns_msg *, ns_sect, int, ns_rr *) __attribute__ ((__nothrow__));
int __ns_sprintrr (const ns_msg *, const ns_rr *,
        const char *, const char *, char *, size_t)
     __attribute__ ((__nothrow__));
int __ns_sprintrrf (const u_char *, size_t, const char *,
         ns_class, ns_type, u_long, const u_char *,
         size_t, const char *, const char *,
         char *, size_t) __attribute__ ((__nothrow__));
int __ns_format_ttl (u_long, char *, size_t) __attribute__ ((__nothrow__));
int __ns_parse_ttl (const char *, u_long *) __attribute__ ((__nothrow__));
u_int32_t __ns_datetosecs (const char *cp, int *errp) __attribute__ ((__nothrow__));
int __ns_name_ntol (const u_char *, u_char *, size_t) __attribute__ ((__nothrow__));
int __ns_name_ntop (const u_char *, char *, size_t) __attribute__ ((__nothrow__));
int __ns_name_pton (const char *, u_char *, size_t) __attribute__ ((__nothrow__));
int __ns_name_unpack (const u_char *, const u_char *,
    const u_char *, u_char *, size_t) __attribute__ ((__nothrow__));
int __ns_name_pack (const u_char *, u_char *, int,
         const u_char **, const u_char **) __attribute__ ((__nothrow__));
int __ns_name_uncompress (const u_char *, const u_char *,
        const u_char *, char *, size_t) __attribute__ ((__nothrow__));
int __ns_name_compress (const char *, u_char *, size_t,
      const u_char **, const u_char **) __attribute__ ((__nothrow__));
int __ns_name_skip (const u_char **, const u_char *) __attribute__ ((__nothrow__));
void __ns_name_rollback (const u_char *, const u_char **,
      const u_char **) __attribute__ ((__nothrow__));
int __ns_sign (u_char *, int *, int, int, void *,
    const u_char *, int, u_char *, int *, time_t) __attribute__ ((__nothrow__));
int __ns_sign_tcp (u_char *, int *, int, int,
        ns_tcp_tsig_state *, int) __attribute__ ((__nothrow__));
int __ns_sign_tcp_init (void *, const u_char *, int,
      ns_tcp_tsig_state *) __attribute__ ((__nothrow__));
u_char *__ns_find_tsig (u_char *, u_char *) __attribute__ ((__nothrow__));
int __ns_verify (u_char *, int *, void *, const u_char *, int,
      u_char *, int *, time_t *, int) __attribute__ ((__nothrow__));
int __ns_verify_tcp (u_char *, int *, ns_tcp_tsig_state *, int)
     __attribute__ ((__nothrow__));
int __ns_verify_tcp_init (void *, const u_char *, int,
        ns_tcp_tsig_state *) __attribute__ ((__nothrow__));
int __ns_samedomain (const char *, const char *) __attribute__ ((__nothrow__));
int __ns_subdomain (const char *, const char *) __attribute__ ((__nothrow__));
int __ns_makecanon (const char *, char *, size_t) __attribute__ ((__nothrow__));
int __ns_samename (const char *, const char *) __attribute__ ((__nothrow__));



# 1 "/usr/include/arpa/nameser_compat.h" 1 3 4
# 48 "/usr/include/arpa/nameser_compat.h" 3 4
typedef struct {
 unsigned id :16;
# 66 "/usr/include/arpa/nameser_compat.h" 3 4
 unsigned rd :1;
 unsigned tc :1;
 unsigned aa :1;
 unsigned opcode :4;
 unsigned qr :1;

 unsigned rcode :4;
 unsigned cd: 1;
 unsigned ad: 1;
 unsigned unused :1;
 unsigned ra :1;


 unsigned qdcount :16;
 unsigned ancount :16;
 unsigned nscount :16;
 unsigned arcount :16;
} HEADER;
# 555 "/usr/include/arpa/nameser.h" 2 3 4
# 51 "../../include/ac/socket.h" 2


# 1 "/usr/include/netdb.h" 1 3 4
# 33 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/rpc/netdb.h" 1 3 4
# 42 "/usr/include/rpc/netdb.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 43 "/usr/include/rpc/netdb.h" 2 3 4



struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) __attribute__ ((__nothrow__));
extern void endrpcent (void) __attribute__ ((__nothrow__));
extern struct rpcent *getrpcbyname (__const char *__name) __attribute__ ((__nothrow__));
extern struct rpcent *getrpcbynumber (int __number) __attribute__ ((__nothrow__));
extern struct rpcent *getrpcent (void) __attribute__ ((__nothrow__));


extern int getrpcbyname_r (__const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) __attribute__ ((__nothrow__));

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) __attribute__ ((__nothrow__));

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) __attribute__ ((__nothrow__));



# 34 "/usr/include/netdb.h" 2 3 4
# 43 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/bits/netdb.h" 1 3 4
# 27 "/usr/include/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 44 "/usr/include/netdb.h" 2 3 4
# 54 "/usr/include/netdb.h" 3 4







extern int *__h_errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 88 "/usr/include/netdb.h" 3 4
extern void herror (__const char *__str) __attribute__ ((__nothrow__));


extern __const char *hstrerror (int __err_num) __attribute__ ((__nothrow__));




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;

};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (__const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (__const char *__name);
# 149 "/usr/include/netdb.h" 3 4
extern struct hostent *gethostbyname2 (__const char *__name, int __af);
# 161 "/usr/include/netdb.h" 3 4
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (__const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (__const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (__const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
# 192 "/usr/include/netdb.h" 3 4
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (__const char *__name);
# 231 "/usr/include/netdb.h" 3 4
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (__const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (__const char *__name,
          __const char *__proto);






extern struct servent *getservbyport (int __port, __const char *__proto);
# 303 "/usr/include/netdb.h" 3 4
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (__const char *__restrict __name,
       __const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, __const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (__const char *__name);





extern struct protoent *getprotobynumber (int __proto);
# 369 "/usr/include/netdb.h" 3 4
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (__const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
# 390 "/usr/include/netdb.h" 3 4
extern int setnetgrent (__const char *__netgroup);







extern void endnetgrent (void);
# 407 "/usr/include/netdb.h" 3 4
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
# 418 "/usr/include/netdb.h" 3 4
extern int innetgr (__const char *__netgroup, __const char *__host,
      __const char *__user, __const char *domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
# 446 "/usr/include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   __const char *__restrict __locuser,
   __const char *__restrict __remuser,
   __const char *__restrict __cmd, int *__restrict __fd2p);
# 458 "/usr/include/netdb.h" 3 4
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      __const char *__restrict __locuser,
      __const char *__restrict __remuser,
      __const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
# 474 "/usr/include/netdb.h" 3 4
extern int rexec (char **__restrict __ahost, int __rport,
    __const char *__restrict __name,
    __const char *__restrict __pass,
    __const char *__restrict __cmd, int *__restrict __fd2p);
# 486 "/usr/include/netdb.h" 3 4
extern int rexec_af (char **__restrict __ahost, int __rport,
       __const char *__restrict __name,
       __const char *__restrict __pass,
       __const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
# 500 "/usr/include/netdb.h" 3 4
extern int ruserok (__const char *__rhost, int __suser,
      __const char *__remuser, __const char *__locuser);
# 510 "/usr/include/netdb.h" 3 4
extern int ruserok_af (__const char *__rhost, int __suser,
         __const char *__remuser, __const char *__locuser,
         sa_family_t __af);
# 522 "/usr/include/netdb.h" 3 4
extern int rresvport (int *__alport);
# 531 "/usr/include/netdb.h" 3 4
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};
# 631 "/usr/include/netdb.h" 3 4
extern int getaddrinfo (__const char *__restrict __name,
   __const char *__restrict __service,
   __const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) __attribute__ ((__nothrow__));


extern __const char *gai_strerror (int __ecode) __attribute__ ((__nothrow__));





extern int getnameinfo (__const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, unsigned int __flags);
# 682 "/usr/include/netdb.h" 3 4

# 54 "../../include/ac/socket.h" 2


# 1 "/usr/include/resolv.h" 1 3 4
# 71 "/usr/include/resolv.h" 3 4
typedef enum { res_goahead, res_nextns, res_modified, res_done, res_error }
 res_sendhookact;

typedef res_sendhookact (*res_send_qhook) (struct sockaddr_in * const *ns,
        const u_char **query,
        int *querylen,
        u_char *ans,
        int anssiz,
        int *resplen);

typedef res_sendhookact (*res_send_rhook) (const struct sockaddr_in *ns,
        const u_char *query,
        int querylen,
        u_char *ans,
        int anssiz,
        int *resplen);
# 104 "/usr/include/resolv.h" 3 4
struct __res_state {
 int retrans;
 int retry;
 u_long options;
 int nscount;
 struct sockaddr_in
  nsaddr_list[3];

 u_short id;
 char *dnsrch[6 +1];
 char defdname[256];
 u_long pfcode;
 unsigned ndots:4;
 unsigned nsort:4;
 char unused[3];
 struct {
  struct in_addr addr;
  u_int32_t mask;
 } sort_list[10];
 res_send_qhook qhook;
 res_send_rhook rhook;
 int res_h_errno;
 int _vcsock;
 u_int _flags;
 union {
  char pad[52];
  struct {
   u_int16_t nscount;
   u_int16_t nsmap[3];
   int nssocks[3];
   u_int16_t nscount6;
   u_int16_t nsinit;
   struct sockaddr_in6 *nsaddrs[3];




   unsigned int _initstamp[2];

  } _ext;
 } _u;
};

typedef struct __res_state *res_state;
# 172 "/usr/include/resolv.h" 3 4
struct res_sym {
 int number;
 char * name;
 char * humanname;
};
# 238 "/usr/include/resolv.h" 3 4

extern struct __res_state *__res_state(void) __attribute__ ((__const__));

# 257 "/usr/include/resolv.h" 3 4

void __fp_nquery (const u_char *, int, FILE *) __attribute__ ((__nothrow__));
void __fp_query (const u_char *, FILE *) __attribute__ ((__nothrow__));
const char * __hostalias (const char *) __attribute__ ((__nothrow__));
void __p_query (const u_char *) __attribute__ ((__nothrow__));
void __res_close (void) __attribute__ ((__nothrow__));
int __res_init (void) __attribute__ ((__nothrow__));
int __res_isourserver (const struct sockaddr_in *) __attribute__ ((__nothrow__));
int __res_mkquery (int, const char *, int, int, const u_char *,
        int, const u_char *, u_char *, int) __attribute__ ((__nothrow__));
int __res_query (const char *, int, int, u_char *, int) __attribute__ ((__nothrow__));
int __res_querydomain (const char *, const char *, int, int,
     u_char *, int) __attribute__ ((__nothrow__));
int __res_search (const char *, int, int, u_char *, int) __attribute__ ((__nothrow__));
int __res_send (const u_char *, int, u_char *, int) __attribute__ ((__nothrow__));

# 317 "/usr/include/resolv.h" 3 4

int __res_hnok (const char *) __attribute__ ((__nothrow__));
int __res_ownok (const char *) __attribute__ ((__nothrow__));
int __res_mailok (const char *) __attribute__ ((__nothrow__));
int __res_dnok (const char *) __attribute__ ((__nothrow__));
int __sym_ston (const struct res_sym *, const char *, int *) __attribute__ ((__nothrow__));
const char * __sym_ntos (const struct res_sym *, int, int *) __attribute__ ((__nothrow__));
const char * __sym_ntop (const struct res_sym *, int, int *) __attribute__ ((__nothrow__));
int __b64_ntop (u_char const *, size_t, char *, size_t) __attribute__ ((__nothrow__));
int __b64_pton (char const *, u_char *, size_t) __attribute__ ((__nothrow__));
int __loc_aton (const char *ascii, u_char *binary) __attribute__ ((__nothrow__));
const char * __loc_ntoa (const u_char *binary, char *ascii) __attribute__ ((__nothrow__));
int __dn_skipname (const u_char *, const u_char *) __attribute__ ((__nothrow__));
void __putlong (u_int32_t, u_char *) __attribute__ ((__nothrow__));
void __putshort (u_int16_t, u_char *) __attribute__ ((__nothrow__));
const char * __p_class (int) __attribute__ ((__nothrow__));
const char * __p_time (u_int32_t) __attribute__ ((__nothrow__));
const char * __p_type (int) __attribute__ ((__nothrow__));
const char * __p_rcode (int) __attribute__ ((__nothrow__));
const u_char * __p_cdnname (const u_char *, const u_char *, int, FILE *)
     __attribute__ ((__nothrow__));
const u_char * __p_cdname (const u_char *, const u_char *, FILE *) __attribute__ ((__nothrow__));
const u_char * __p_fqnname (const u_char *cp, const u_char *msg,
      int, char *, int) __attribute__ ((__nothrow__));
const u_char * __p_fqname (const u_char *, const u_char *, FILE *) __attribute__ ((__nothrow__));
const char * __p_option (u_long option) __attribute__ ((__nothrow__));
char * __p_secstodate (u_long) __attribute__ ((__nothrow__));
int __dn_count_labels (const char *) __attribute__ ((__nothrow__));
int __dn_comp (const char *, u_char *, int, u_char **, u_char **)
     __attribute__ ((__nothrow__));
int __dn_expand (const u_char *, const u_char *, const u_char *,
      char *, int) __attribute__ ((__nothrow__));
u_int __res_randomid (void) __attribute__ ((__nothrow__));
int __res_nameinquery (const char *, int, int,
     const u_char *, const u_char *) __attribute__ ((__nothrow__));
int __res_queriesmatch (const u_char *, const u_char *,
      const u_char *, const u_char *) __attribute__ ((__nothrow__));
const char * __p_section (int section, int opcode) __attribute__ ((__nothrow__));

int __res_ninit (res_state) __attribute__ ((__nothrow__));
int __res_nisourserver (const res_state,
      const struct sockaddr_in *) __attribute__ ((__nothrow__));
void __fp_resstat (const res_state, FILE *) __attribute__ ((__nothrow__));
void __res_npquery (const res_state, const u_char *, int, FILE *)
     __attribute__ ((__nothrow__));
const char * __res_hostalias (const res_state, const char *, char *, size_t)
     __attribute__ ((__nothrow__));
int __res_nquery (res_state, const char *, int, int, u_char *, int)
     __attribute__ ((__nothrow__));
int __res_nsearch (res_state, const char *, int, int, u_char *, int)
     __attribute__ ((__nothrow__));
int __res_nquerydomain (res_state, const char *, const char *, int,
      int, u_char *, int) __attribute__ ((__nothrow__));
int __res_nmkquery (res_state, int, const char *, int, int,
         const u_char *, int, const u_char *, u_char *,
         int) __attribute__ ((__nothrow__));
int __res_nsend (res_state, const u_char *, int, u_char *, int)
     __attribute__ ((__nothrow__));
void __res_nclose (res_state) __attribute__ ((__nothrow__));

# 57 "../../include/ac/socket.h" 2
# 215 "../../include/ac/socket.h"
extern int getpeereid( int s, uid_t *, gid_t * );
# 40 "io.c" 2
# 1 "../../include/ac/string.h" 1
# 51 "../../include/ac/string.h"
extern char * ldap_pvt_strtok ( char *str, const char *delim, char **pos );
# 61 "../../include/ac/string.h"
 extern char * (strdup)();
# 71 "../../include/ac/string.h"
int (strcasecmp)();
int (strncasecmp)();
# 102 "../../include/ac/string.h"
void * memrchr(const void *b, int c, size_t len);
# 41 "io.c" 2
# 1 "../../include/ac/unistd.h" 1
# 25 "../../include/ac/unistd.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4

# 173 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 174 "/usr/include/unistd.h" 2 3 4
# 197 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 198 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 258 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 301 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
# 320 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 384 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;
# 393 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
# 405 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);






extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));






extern int usleep (__useconds_t __useconds);
# 429 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 457 "/usr/include/unistd.h" 3 4
extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__)) ;
# 471 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;
# 484 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));


extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 516 "/usr/include/unistd.h" 3 4
extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int nice (int __inc) __attribute__ ((__nothrow__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,


    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS

  };
# 555 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
# 591 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));
# 600 "/usr/include/unistd.h" 3 4
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
# 617 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__));
# 634 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__));







extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;
# 667 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));
# 723 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));






extern __pid_t vfork (void) __attribute__ ((__nothrow__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__));





extern int ttyslot (void) __attribute__ ((__nothrow__));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 769 "/usr/include/unistd.h" 3 4
extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 792 "/usr/include/unistd.h" 3 4
extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 801 "/usr/include/unistd.h" 3 4
extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 837 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));
# 838 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__));


extern int revoke (__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) __attribute__ ((__nothrow__));



extern char *getusershell (void) __attribute__ ((__nothrow__));
extern void endusershell (void) __attribute__ ((__nothrow__));
extern void setusershell (void) __attribute__ ((__nothrow__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__)) ;






extern int chroot (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 923 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__));




extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__));




extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 970 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__)) ;
# 990 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
# 1011 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
# 1034 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1065 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1103 "/usr/include/unistd.h" 3 4

# 26 "../../include/ac/unistd.h" 2
# 39 "../../include/ac/unistd.h"
extern char*(getpass)();
# 49 "../../include/ac/unistd.h"
# 1 "/usr/include/getopt.h" 1 3 4
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 106 "/usr/include/getopt.h" 3 4
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));





extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__));
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__));
# 50 "../../include/ac/unistd.h" 2
# 64 "../../include/ac/unistd.h"
# 1 "../../include/lutil_lockf.h" 1
# 24 "../../include/lutil_lockf.h"


extern int
lutil_lockf ( int fd );

extern int
lutil_unlockf ( int fd );


# 65 "../../include/ac/unistd.h" 2
# 42 "io.c" 2





# 1 "lber-int.h" 1
# 29 "lber-int.h"
# 1 "../../include/lber.h" 1
# 29 "../../include/lber.h"
# 1 "../../include/lber_types.h" 1
# 24 "../../include/lber_types.h"
# 1 "../../include/ldap_cdefs.h" 1
# 25 "../../include/lber_types.h" 2


# 43 "../../include/lber_types.h"
typedef int ber_int_t;


typedef signed int ber_sint_t;
typedef unsigned int ber_uint_t;


typedef unsigned long ber_tag_t;


typedef int ber_socket_t;


typedef unsigned long ber_len_t;


typedef signed long ber_slen_t;


# 30 "../../include/lber.h" 2



# 112 "../../include/lber.h"
typedef int* (*BER_ERRNO_FN) ( void );

typedef void (*BER_LOG_PRINT_FN) ( const char *buf );

typedef void* (BER_MEMALLOC_FN) ( ber_len_t size, void *ctx );
typedef void* (BER_MEMCALLOC_FN) ( ber_len_t n, ber_len_t size, void *ctx );
typedef void* (BER_MEMREALLOC_FN) ( void *p, ber_len_t size, void *ctx );
typedef void (BER_MEMFREE_FN) ( void *p, void *ctx );

typedef struct lber_memory_fns {
 BER_MEMALLOC_FN *bmf_malloc;
 BER_MEMCALLOC_FN *bmf_calloc;
 BER_MEMREALLOC_FN *bmf_realloc;
 BER_MEMFREE_FN *bmf_free;
} BerMemoryFunctions;
# 155 "../../include/lber.h"
extern char ber_pvt_opt_on;






typedef struct berelement BerElement;
typedef struct sockbuf Sockbuf;
typedef struct seqorset Seqorset;

typedef struct sockbuf_io Sockbuf_IO;


typedef struct sockbuf_io_desc {
 int sbiod_level;
 Sockbuf *sbiod_sb;
 Sockbuf_IO *sbiod_io;
 void *sbiod_pvt;
 struct sockbuf_io_desc *sbiod_next;
} Sockbuf_IO_Desc;


struct sockbuf_io {
 int (*sbi_setup)( Sockbuf_IO_Desc *sbiod, void *arg );
 int (*sbi_remove)( Sockbuf_IO_Desc *sbiod );
 int (*sbi_ctrl)( Sockbuf_IO_Desc *sbiod, int opt, void *arg);

 ber_slen_t (*sbi_read)( Sockbuf_IO_Desc *sbiod, void *buf,
  ber_len_t len );
 ber_slen_t (*sbi_write)( Sockbuf_IO_Desc *sbiod, void *buf,
  ber_len_t len );

 int (*sbi_close)( Sockbuf_IO_Desc *sbiod );
};
# 204 "../../include/lber.h"
typedef struct berval {
 ber_len_t bv_len;
 char *bv_val;
} BerValue;

typedef BerValue *BerVarray;






extern void
ber_error_print ( const char *data );


extern void
ber_bprint ( const char *data, ber_len_t len );


extern void
ber_dump ( BerElement *ber, int inout );


extern void
ber_sos_dump ( Seqorset *sos );





typedef int (*BERDecodeCallback) ( BerElement *ber, void *data, int mode );




extern ber_tag_t
ber_get_tag ( BerElement *ber );


extern ber_tag_t
ber_skip_tag ( BerElement *ber, ber_len_t *len );



extern ber_tag_t
ber_peek_tag ( BerElement *ber, ber_len_t *len );



extern ber_tag_t
ber_get_int ( BerElement *ber, ber_int_t *num );



extern ber_tag_t
ber_get_enum ( BerElement *ber, ber_int_t *num );



extern ber_tag_t
ber_get_stringb ( BerElement *ber, char *buf, ber_len_t *len );




extern ber_tag_t
ber_get_stringbv ( BerElement *ber, struct berval *bv, int alloc );




extern ber_tag_t
ber_get_stringa ( BerElement *ber, char **buf );



extern ber_tag_t
ber_get_stringal ( BerElement *ber, struct berval **bv );



extern ber_tag_t
ber_get_bitstringa ( BerElement *ber, char **buf, ber_len_t *len );




extern ber_tag_t
ber_get_null ( BerElement *ber );


extern ber_tag_t
ber_get_boolean ( BerElement *ber, ber_int_t *boolval );



extern ber_tag_t
ber_first_element ( BerElement *ber, ber_len_t *len, char **last );




extern ber_tag_t
ber_next_element ( BerElement *ber, ber_len_t *len, const char *last );




extern ber_tag_t
ber_scanf ( BerElement *ber, const char *fmt, ... );







typedef int (*BEREncodeCallback) ( BerElement *ber, void *data );



extern int
ber_put_enum ( BerElement *ber, ber_int_t num, ber_tag_t tag );




extern int
ber_put_int ( BerElement *ber, ber_int_t num, ber_tag_t tag );




extern int
ber_put_ostring ( BerElement *ber, const char *str, ber_len_t len, ber_tag_t tag );





extern int
ber_put_berval ( BerElement *ber, struct berval *bv, ber_tag_t tag );




extern int
ber_put_string ( BerElement *ber, const char *str, ber_tag_t tag );




extern int
ber_put_bitstring ( BerElement *ber, const char *str, ber_len_t bitlen, ber_tag_t tag );





extern int
ber_put_null ( BerElement *ber, ber_tag_t tag );



extern int
ber_put_boolean ( BerElement *ber, ber_int_t boolval, ber_tag_t tag );




extern int
ber_start_seq ( BerElement *ber, ber_tag_t tag );



extern int
ber_start_set ( BerElement *ber, ber_tag_t tag );



extern int
ber_put_seq ( BerElement *ber );


extern int
ber_put_set ( BerElement *ber );


extern int
ber_printf ( BerElement *ber, const char *fmt, ... );
# 404 "../../include/lber.h"
extern ber_slen_t
ber_read ( BerElement *ber, char *buf, ber_len_t len );




extern ber_slen_t
ber_write ( BerElement *ber, const char *buf, ber_len_t len, int nosos );





extern void
ber_free ( BerElement *ber, int freebuf );



extern void
ber_free_buf ( BerElement *ber );

extern int
ber_flush ( Sockbuf *sb, BerElement *ber, int freeit );




extern BerElement *
ber_alloc ( void );

extern BerElement *
der_alloc ( void );

extern BerElement *
ber_alloc_t ( int beroptions );


extern BerElement *
ber_dup ( BerElement *ber );


extern ber_tag_t
ber_get_next ( Sockbuf *sb, ber_len_t *len, BerElement *ber );




extern void
ber_init2 ( BerElement *ber, struct berval *bv, int options );




extern void
ber_init_w_nullc ( BerElement *ber, int options );



extern void
ber_reset ( BerElement *ber, int was_writing );



extern BerElement *
ber_init ( struct berval *bv );


extern int
ber_flatten ( BerElement *ber, struct berval **bvPtr );



extern int
ber_flatten2 ( BerElement *ber, struct berval *bv, int alloc );




extern int
ber_remaining ( BerElement *ber );






extern int
ber_get_option ( void *item, int option, void *outvalue);




extern int
ber_set_option ( void *item, int option, const void *invalue);
# 506 "../../include/lber.h"
extern Sockbuf *
ber_sockbuf_alloc ( void );


extern void
ber_sockbuf_free ( Sockbuf *sb );


extern int
ber_sockbuf_add_io ( Sockbuf *sb, Sockbuf_IO *sbio, int layer, void *arg );





extern int
ber_sockbuf_remove_io ( Sockbuf *sb, Sockbuf_IO *sbio, int layer );




extern int
ber_sockbuf_ctrl ( Sockbuf *sb, int opt, void *arg );




extern Sockbuf_IO ber_sockbuf_io_tcp;
extern Sockbuf_IO ber_sockbuf_io_readahead;
extern Sockbuf_IO ber_sockbuf_io_fd;
extern Sockbuf_IO ber_sockbuf_io_debug;
extern Sockbuf_IO ber_sockbuf_io_udp;




extern void *
ber_memalloc ( ber_len_t s );


extern void *
ber_memrealloc ( void* p, ber_len_t s );



extern void *
ber_memcalloc ( ber_len_t n, ber_len_t s );



extern void
ber_memfree ( void* p );


extern void
ber_memvfree ( void** vector );


extern void
ber_bvfree ( struct berval *bv );


extern void
ber_bvecfree ( struct berval **bv );


extern int
ber_bvecadd ( struct berval ***bvec, struct berval *bv );



extern struct berval *
ber_dupbv ( struct berval *dst, struct berval *src );


extern struct berval *
ber_bvdup ( struct berval *src );


extern struct berval *
ber_mem2bv ( const char *, ber_len_t len, int duplicate, struct berval *bv);


extern struct berval *
ber_str2bv ( const char *, ber_len_t len, int duplicate, struct berval *bv);





extern char *
ber_strdup ( const char * );


extern struct berval *
ber_bvreplace ( struct berval *dst, const struct berval *src );


extern void
ber_bvarray_free ( BerVarray p );

extern int
ber_bvarray_add ( BerVarray *p, BerValue *bv );
# 618 "../../include/lber.h"
extern int * ber_errno_addr (void);
# 629 "../../include/lber.h"

# 30 "lber-int.h" 2
# 1 "../../include/ldap_log.h" 1
# 32 "../../include/ldap_log.h"

# 81 "../../include/ldap_log.h"
     extern int ldap_debug;



    extern int ldap_syslog;
    extern int ldap_syslog_level;
# 123 "../../include/ldap_log.h"
extern int lutil_debug_file ( FILE *file );

extern void lutil_debug ( int debug, int level, const char* fmt, ... ) __attribute__((format(printf, 3, 4)));




# 31 "lber-int.h" 2
# 1 "../../include/lber_pvt.h" 1
# 24 "../../include/lber_pvt.h"
# 1 "../../include/lber.h" 1
# 25 "../../include/lber_pvt.h" 2


# 41 "../../include/lber_pvt.h"
typedef union lber_berelement_u { char buffer[(256)]; int ialign; long lalign; float falign; double dalign; char* palign; }
 BerElementBuffer;

typedef struct sockbuf_buf {
 ber_len_t buf_size;
 ber_len_t buf_ptr;
 ber_len_t buf_end;
 char *buf_base;
} Sockbuf_Buf;




extern BER_LOG_PRINT_FN ber_pvt_log_print;

extern int
ber_pvt_log_printf ( int errlvl, int loglvl, const char *fmt, ... ) __attribute__((format(printf, 3, 4)));
# 66 "../../include/lber_pvt.h"
extern ber_slen_t
ber_pvt_sb_do_write ( Sockbuf_IO_Desc *sbiod, Sockbuf_Buf *buf_out );

extern void
ber_pvt_sb_buf_init ( Sockbuf_Buf *buf );

extern void
ber_pvt_sb_buf_destroy ( Sockbuf_Buf *buf );

extern int
ber_pvt_sb_grow_buffer ( Sockbuf_Buf *buf, ber_len_t minsize );

extern ber_len_t
ber_pvt_sb_copy_out ( Sockbuf_Buf *sbb, char *buf, ber_len_t len );

extern int
ber_pvt_socket_set_nonblock ( ber_socket_t sd, int nb );




extern void *
ber_memalloc_x ( ber_len_t s, void *ctx);


extern void *
ber_memrealloc_x ( void* p, ber_len_t s, void *ctx );



extern void *
ber_memcalloc_x ( ber_len_t n, ber_len_t s, void *ctx );



extern void
ber_memfree_x ( void* p, void *ctx );


extern void
ber_memvfree_x ( void** vector, void *ctx );


extern void
ber_bvfree_x ( struct berval *bv, void *ctx );


extern void
ber_bvecfree_x ( struct berval **bv, void *ctx );


extern int
ber_bvecadd_x ( struct berval ***bvec, struct berval *bv, void *ctx );



extern struct berval *
ber_dupbv_x ( struct berval *dst, struct berval *src, void *ctx );


extern struct berval *
ber_str2bv_x ( const char *, ber_len_t len, int dup, struct berval *bv, void *ctx);


extern struct berval *
ber_mem2bv_x ( const char *, ber_len_t len, int dup, struct berval *bv, void *ctx);


extern char *
ber_strdup_x ( const char *, void *ctx );


extern struct berval *
ber_bvreplace_x ( struct berval *dst, const struct berval *src, void *ctx );


extern void
ber_bvarray_free_x ( BerVarray p, void *ctx );

extern int
ber_bvarray_add_x ( BerVarray *p, BerValue *bv, void *ctx );
# 216 "../../include/lber_pvt.h"

# 32 "lber-int.h" 2
# 1 "../../include/ldap_queue.h" 1
# 33 "lber-int.h" 2



typedef void (*BER_LOG_FN)(FILE *file,
 const char *subsys, int level, const char *fmt, ... );

extern BER_ERRNO_FN ber_int_errno_fn;
# 51 "lber-int.h"
struct lber_options {
 short lbo_valid;
 unsigned short lbo_options;
 int lbo_debug;
};

extern int ber_pvt_log_output(
 const char *subsystem,
 int level,
 const char *fmt, ... );






extern struct lber_options ber_int_options;


struct berelement {
 struct lber_options ber_opts;





 ber_tag_t ber_tag;
 ber_len_t ber_len;
 ber_tag_t ber_usertag;

 char *ber_buf;
 char *ber_ptr;
 char *ber_end;

 struct seqorset *ber_sos;
 char *ber_rwptr;
 void *ber_memctx;
};






struct sockbuf {
 struct lber_options sb_opts;
 Sockbuf_IO_Desc *sb_iod;



 ber_socket_t sb_fd;
    unsigned int sb_trans_needs_read:1;
    unsigned int sb_trans_needs_write:1;
 ber_len_t sb_max_incoming;
};



struct seqorset {
 BerElement *sos_ber;
 ber_len_t sos_clen;
 ber_tag_t sos_tag;
 char *sos_first;
 char *sos_ptr;
 struct seqorset *sos_next;
};





extern int
ber_realloc ( BerElement *ber, ber_len_t len );



extern char * ber_start ( BerElement * );
extern int ber_len ( BerElement * );
extern int ber_ptrlen ( BerElement * );
extern void ber_rewind ( BerElement * );






extern int
ber_log_bprint ( int errlvl, int loglvl, const char *data, ber_len_t len );





extern int
ber_log_dump ( int errlvl, int loglvl, BerElement *ber, int inout );





extern int
ber_log_sos_dump ( int errlvl, int loglvl, Seqorset *sos );




extern BER_LOG_FN ber_int_log_proc;
extern FILE * ber_pvt_err_file;



extern BerMemoryFunctions * ber_int_memory_fns;
extern char * ber_strndup( const char *, ber_len_t );
extern char * ber_strndup_x( const char *, ber_len_t, void *ctx );
# 176 "lber-int.h"
extern int
ber_int_sb_init ( Sockbuf *sb );

extern int
ber_int_sb_close ( Sockbuf *sb );

extern int
ber_int_sb_destroy ( Sockbuf *sb );

extern ber_slen_t
ber_int_sb_read ( Sockbuf *sb, void *buf, ber_len_t len );

extern ber_slen_t
ber_int_sb_write ( Sockbuf *sb, void *buf, ber_len_t len );


# 48 "io.c" 2


ber_slen_t
ber_read(
 BerElement *ber,
 char *buf,
 ber_len_t len )
{
 ber_len_t actuallen, nleft;

 ((ber != ((void *)0)) ? (void) (0) : __assert_fail ("ber != ((void *)0)", "io.c", 58, __PRETTY_FUNCTION__));
 ((buf != ((void *)0)) ? (void) (0) : __assert_fail ("buf != ((void *)0)", "io.c", 59, __PRETTY_FUNCTION__));

 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 61, __PRETTY_FUNCTION__));

 nleft = ((ber)->ber_end - (ber)->ber_ptr);
 actuallen = nleft < len ? nleft : len;

 (memmove(((buf)), ((ber->ber_ptr)), ((actuallen))));

 ber->ber_ptr += actuallen;

 return( (ber_slen_t) actuallen );
}

ber_slen_t
ber_write(
 BerElement *ber,
 const char *buf,
 ber_len_t len,
 int nosos )
{
 ((ber != ((void *)0)) ? (void) (0) : __assert_fail ("ber != ((void *)0)", "io.c", 80, __PRETTY_FUNCTION__));
 ((buf != ((void *)0)) ? (void) (0) : __assert_fail ("buf != ((void *)0)", "io.c", 81, __PRETTY_FUNCTION__));

 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 83, __PRETTY_FUNCTION__));

 if ( nosos || ber->ber_sos == ((void *)0) ) {
  if ( ber->ber_ptr + len > ber->ber_end ) {
   if ( ber_realloc( ber, len ) != 0 ) return( -1 );
  }
  (memmove(((ber->ber_ptr)), ((buf)), (((size_t)len))));
  ber->ber_ptr += len;
  return( (ber_slen_t) len );

 } else {
  if ( ber->ber_sos->sos_ptr + len > ber->ber_end ) {
   if ( ber_realloc( ber, len ) != 0 ) return( -1 );
  }
  (memmove(((ber->ber_sos->sos_ptr)), ((buf)), (((size_t)len))));
  ber->ber_sos->sos_ptr += len;
  ber->ber_sos->sos_clen += len;
  return( (ber_slen_t) len );
 }
}

int
ber_realloc( BerElement *ber, ber_len_t len )
{
 ber_len_t total;
 Seqorset *s;
 long off;
 char *oldbuf;

 ((ber != ((void *)0)) ? (void) (0) : __assert_fail ("ber != ((void *)0)", "io.c", 112, __PRETTY_FUNCTION__));
 ((len > 0) ? (void) (0) : __assert_fail ("len > 0", "io.c", 113, __PRETTY_FUNCTION__));
 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 114, __PRETTY_FUNCTION__));

 total = ((ber)->ber_end - (ber)->ber_buf);





 total += len < 4060 ? 4060 : len;
# 134 "io.c"
 oldbuf = ber->ber_buf;

 ber->ber_buf = (char *) ber_memrealloc_x( oldbuf, total, ber->ber_memctx );

 if ( ber->ber_buf == ((void *)0) ) {
  ber->ber_buf = oldbuf;
  return( -1 );
 }

 ber->ber_end = ber->ber_buf + total;







 if ( ber->ber_buf != oldbuf ) {
  ber->ber_ptr = ber->ber_buf + (ber->ber_ptr - oldbuf);

  for ( s = ber->ber_sos; s != ((void *)0); s = s->sos_next ) {
   off = s->sos_first - oldbuf;
   s->sos_first = ber->ber_buf + off;

   off = s->sos_ptr - oldbuf;
   s->sos_ptr = ber->ber_buf + off;
  }
 }

 return( 0 );
}

void
ber_free_buf( BerElement *ber )
{
 Seqorset *s, *next;

 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 171, __PRETTY_FUNCTION__));

 if ( ber->ber_buf) ber_memfree_x( ber->ber_buf, ber->ber_memctx );

 for( s = ber->ber_sos ; s != ((void *)0) ; s = next ) {
  next = s->sos_next;
  ber_memfree_x( s, ber->ber_memctx );
 }

 ber->ber_buf = ((void *)0);
 ber->ber_sos = ((void *)0);
 ber->ber_opts.lbo_valid = 0x0;
}

void
ber_free( BerElement *ber, int freebuf )
{




 if( ber == ((void *)0) ) {
  return;
 }

 if( freebuf ) ber_free_buf( ber );

 ber_memfree_x( (char *) ber, ber->ber_memctx );
}

int
ber_flush( Sockbuf *sb, BerElement *ber, int freeit )
{
 ber_len_t towrite;
 ber_slen_t rc;

 ((sb != ((void *)0)) ? (void) (0) : __assert_fail ("sb != ((void *)0)", "io.c", 207, __PRETTY_FUNCTION__));
 ((ber != ((void *)0)) ? (void) (0) : __assert_fail ("ber != ((void *)0)", "io.c", 208, __PRETTY_FUNCTION__));

 ((( (sb)->sb_opts.lbo_valid == 0x3 )) ? (void) (0) : __assert_fail ("( (sb)->sb_opts.lbo_valid == 0x3 )", "io.c", 210, __PRETTY_FUNCTION__));
 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 211, __PRETTY_FUNCTION__));

 if ( ber->ber_rwptr == ((void *)0) ) {
  ber->ber_rwptr = ber->ber_buf;
 }
 towrite = ber->ber_ptr - ber->ber_rwptr;

 if ( sb->sb_opts.lbo_debug ) {
  ber_pvt_log_printf( 0x0001, sb->sb_opts.lbo_debug,
   "ber_flush: %ld bytes to sd %ld%s\n",
   towrite, (long) sb->sb_fd,
   ber->ber_rwptr != ber->ber_buf ? " (re-flush)" : "" );
  ber_log_bprint( 0x0002, sb->sb_opts.lbo_debug,
   ber->ber_rwptr, towrite );
 }

 while ( towrite > 0 ) {




  rc = ber_int_sb_write( sb, ber->ber_rwptr, towrite );

  if (rc<=0) {
   return -1;
  }
  towrite -= rc;
  ber->ber_rwptr += rc;
 }

 if ( freeit ) ber_free( ber, 1 );

 return( 0 );
}

BerElement *
ber_alloc_t( int options )
{
 BerElement *ber;

 ber = (BerElement *) ber_memcalloc((1),(sizeof(BerElement)));

 if ( ber == ((void *)0) ) {
  return ((void *)0);
 }

 ber->ber_opts.lbo_valid = 0x2;
 ber->ber_tag = ((ber_tag_t) -1);
 ber->ber_opts.lbo_options = options;
 ber->ber_opts.lbo_debug = ber_int_options.lbo_debug;

 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 262, __PRETTY_FUNCTION__));
 return ber;
}

BerElement *
ber_alloc( void )
{
 return ber_alloc_t( 0 );
}

BerElement *
der_alloc( void )
{
 return ber_alloc_t( 0x01 );
}

BerElement *
ber_dup( BerElement *ber )
{
 BerElement *new;

 ((ber != ((void *)0)) ? (void) (0) : __assert_fail ("ber != ((void *)0)", "io.c", 283, __PRETTY_FUNCTION__));
 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 284, __PRETTY_FUNCTION__));

 if ( (new = ber_alloc_t( ber->ber_opts.lbo_options )) == ((void *)0) ) {
  return ((void *)0);
 }

 *new = *ber;

 ((((new)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((new)->ber_opts.lbo_valid==0x2)", "io.c", 292, __PRETTY_FUNCTION__));
 return( new );
}


void
ber_init2( BerElement *ber, struct berval *bv, int options )
{
 ((ber != ((void *)0)) ? (void) (0) : __assert_fail ("ber != ((void *)0)", "io.c", 300, __PRETTY_FUNCTION__));

 (void) memset( (char *)ber, '\0', sizeof( BerElement ));
 ber->ber_opts.lbo_valid = 0x2;
 ber->ber_tag = ((ber_tag_t) -1);
 ber->ber_opts.lbo_options = (char) options;
 ber->ber_opts.lbo_debug = ber_int_options.lbo_debug;

 if ( bv != ((void *)0) ) {
  ber->ber_buf = bv->bv_val;
  ber->ber_ptr = ber->ber_buf;
  ber->ber_end = ber->ber_buf + bv->bv_len;
 }

 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 314, __PRETTY_FUNCTION__));
}


void
ber_init_w_nullc( BerElement *ber, int options )
{
 ber_init2( ber, ((void *)0), options );
}





BerElement *
ber_init( struct berval *bv )
{
 BerElement *ber;

 ((bv != ((void *)0)) ? (void) (0) : __assert_fail ("bv != ((void *)0)", "io.c", 333, __PRETTY_FUNCTION__));

 if ( bv == ((void *)0) ) {
  return ((void *)0);
 }

 ber = ber_alloc_t( 0 );

 if( ber == ((void *)0) ) {

  return ((void *)0);
 }


 if ( ((ber_len_t) ber_write ( ber, bv->bv_val, bv->bv_len, 0 ))
  != bv->bv_len )
 {

  ber_free( ber, 1 );
  return ((void *)0);
 }

 ber_reset( ber, 1 );
 return ber;
}
# 367 "io.c"
int ber_flatten2(
 BerElement *ber,
 struct berval *bv,
 int alloc )
{
 ((bv != ((void *)0)) ? (void) (0) : __assert_fail ("bv != ((void *)0)", "io.c", 372, __PRETTY_FUNCTION__));

 if ( bv == ((void *)0) ) {
  return -1;
 }

 if ( ber == ((void *)0) ) {

  bv->bv_val = ((void *)0);
  bv->bv_len = 0;

 } else {

  ber_len_t len = ((ber)->ber_ptr - (ber)->ber_buf);

  if ( alloc ) {
   bv->bv_val = (char *) ber_memalloc_x( len + 1, ber->ber_memctx );
   if ( bv->bv_val == ((void *)0) ) {
    return -1;
   }
   (memmove(((bv->bv_val)), ((ber->ber_buf)), ((len))));
  } else {
   bv->bv_val = ber->ber_buf;
  }
  bv->bv_val[len] = '\0';
  bv->bv_len = len;
 }
 return 0;
}

int ber_flatten(
 BerElement *ber,
 struct berval **bvPtr)
{
 struct berval *bv;
 int rc;

 ((bvPtr != ((void *)0)) ? (void) (0) : __assert_fail ("bvPtr != ((void *)0)", "io.c", 409, __PRETTY_FUNCTION__));

 if(bvPtr == ((void *)0)) {
  return -1;
 }

 bv = ber_memalloc_x( sizeof(struct berval), ber->ber_memctx );
 if ( bv == ((void *)0) ) {
  return -1;
 }
 rc = ber_flatten2(ber, bv, 1);
 if (rc == -1) {
  ber_memfree_x(bv, ber->ber_memctx);
 } else {
  *bvPtr = bv;
 }
 return rc;
}

void
ber_reset( BerElement *ber, int was_writing )
{
 ((ber != ((void *)0)) ? (void) (0) : __assert_fail ("ber != ((void *)0)", "io.c", 431, __PRETTY_FUNCTION__));
 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 432, __PRETTY_FUNCTION__));

 if ( was_writing ) {
  ber->ber_end = ber->ber_ptr;
  ber->ber_ptr = ber->ber_buf;

 } else {
  ber->ber_ptr = ber->ber_end;
 }

 ber->ber_rwptr = ((void *)0);
}
# 453 "io.c"
ber_tag_t
ber_get_next(
 Sockbuf *sb,
 ber_len_t *len,
 BerElement *ber )
{
 ((sb != ((void *)0)) ? (void) (0) : __assert_fail ("sb != ((void *)0)", "io.c", 459, __PRETTY_FUNCTION__));
 ((len != ((void *)0)) ? (void) (0) : __assert_fail ("len != ((void *)0)", "io.c", 460, __PRETTY_FUNCTION__));
 ((ber != ((void *)0)) ? (void) (0) : __assert_fail ("ber != ((void *)0)", "io.c", 461, __PRETTY_FUNCTION__));

 ((( (sb)->sb_opts.lbo_valid == 0x3 )) ? (void) (0) : __assert_fail ("( (sb)->sb_opts.lbo_valid == 0x3 )", "io.c", 463, __PRETTY_FUNCTION__));
 ((((ber)->ber_opts.lbo_valid==0x2)) ? (void) (0) : __assert_fail ("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 464, __PRETTY_FUNCTION__));

 ber_pvt_log_printf( 0x0001, ber->ber_opts.lbo_debug,
  "ber_get_next\n" );
# 490 "io.c"
 if (ber->ber_rwptr == ((void *)0)) {
  ((ber->ber_buf == ((void *)0)) ? (void) (0) : __assert_fail ("ber->ber_buf == ((void *)0)", "io.c", 491, __PRETTY_FUNCTION__));
  ber->ber_rwptr = (char *) &ber->ber_len-1;
  ber->ber_ptr = ber->ber_rwptr;
  ber->ber_tag = 0;
 }

 while (ber->ber_rwptr > (char *)&ber->ber_tag && ber->ber_rwptr <
  (char *)&ber->ber_len + 4*2 -1) {
  ber_slen_t sblen;
  char buf[sizeof(ber->ber_len)-1];
  ber_len_t tlen = 0;

  (*__errno_location ()) = (0);
  sblen=ber_int_sb_read( sb, ber->ber_rwptr,
   ((char *)&ber->ber_len + 4*2 - 1)-ber->ber_rwptr);
  if (sblen<=0) return ((ber_tag_t) -1);
  ber->ber_rwptr += sblen;


  if (ber->ber_ptr == (char *)&ber->ber_len-1) {
   ber_tag_t tag;
   unsigned char *p = (unsigned char *)ber->ber_ptr;
   tag = *p++;
   if ((tag & ((ber_tag_t) 0x1fU)) == ((ber_tag_t) 0x1fU)) {
    ber_len_t i;
    for (i=1; (char *)p<ber->ber_rwptr; i++) {
     tag <<= 8;
     tag |= *p++;
     if (!(tag & ((ber_tag_t) 0x80U)))
      break;

     if (i == sizeof(ber_tag_t)-1) {
      (*__errno_location ()) = (34);
      return ((ber_tag_t) -1);
     }
    }

    if ((char *)p == ber->ber_rwptr) {

     (*__errno_location ()) = (11);



     return ((ber_tag_t) -1);
    }
   }
   ber->ber_tag = tag;
   ber->ber_ptr = (char *)p;
  }

  if ( ber->ber_ptr == ber->ber_rwptr ) {

   (*__errno_location ()) = (11);



   return ((ber_tag_t) -1);
  }


  if (*ber->ber_ptr & 0x80) {
   int i;
   unsigned char *p = (unsigned char *)ber->ber_ptr;
   int llen = *p++ & 0x7f;
   if (llen > (int)sizeof(ber_len_t)) {
    (*__errno_location ()) = (34);
    return ((ber_tag_t) -1);
   }

   if (ber->ber_rwptr - (char *)p < llen) {

    (*__errno_location ()) = (11);



    return ((ber_tag_t) -1);
   }
   for (i=0; i<llen; i++) {
    tlen <<=8;
    tlen |= *p++;
   }
   ber->ber_ptr = (char *)p;
  } else {
   tlen = *(unsigned char *)ber->ber_ptr++;
  }


  if (ber->ber_ptr < (char *)&ber->ber_usertag) {
   if (ber->ber_rwptr < (char *)&ber->ber_usertag) {
    sblen = ber->ber_rwptr - ber->ber_ptr;
   } else {
    sblen = (char *)&ber->ber_usertag - ber->ber_ptr;
   }
   (memmove(((buf)), ((ber->ber_ptr)), ((sblen))));
   ber->ber_ptr += sblen;
  } else {
   sblen = 0;
  }
  ber->ber_len = tlen;




  if ( ber->ber_len == 0 ) {
   (*__errno_location ()) = (34);
   return ((ber_tag_t) -1);
  }

  if ( sb->sb_max_incoming && ber->ber_len > sb->sb_max_incoming ) {
   ber_pvt_log_printf( 0x0008, ber->ber_opts.lbo_debug,
    "ber_get_next: sockbuf_max_incoming exceeded "
    "(%ld > %ld)\n", ber->ber_len, sb->sb_max_incoming );
   (*__errno_location ()) = (34);
   return ((ber_tag_t) -1);
  }

  if (ber->ber_buf==((void *)0)) {
   ber_len_t l = ber->ber_rwptr - ber->ber_ptr;




   if ( ber->ber_len < sblen + l ) {
    (*__errno_location ()) = (34);
    return ((ber_tag_t) -1);
   }
   ber->ber_buf = (char *) ber_memalloc_x( ber->ber_len + 1, ber->ber_memctx );
   if (ber->ber_buf==((void *)0)) {
    return ((ber_tag_t) -1);
   }
   ber->ber_end = ber->ber_buf + ber->ber_len;
   if (sblen) {
    (memmove(((ber->ber_buf)), ((buf)), ((sblen))));
   }
   if (l > 0) {
    (memmove(((ber->ber_buf + sblen)), ((ber->ber_ptr)), ((l))));
    sblen += l;
   }
   *ber->ber_end = '\0';
   ber->ber_ptr = ber->ber_buf;
   ber->ber_usertag = 0;
   if ((ber_len_t)sblen == ber->ber_len) {
    goto done;
   }
   ber->ber_rwptr = ber->ber_buf + sblen;
  }
 }

 if ((ber->ber_rwptr>=ber->ber_buf) && (ber->ber_rwptr<ber->ber_end)) {
  ber_slen_t res;
  ber_slen_t to_go;

  to_go = ber->ber_end - ber->ber_rwptr;
  ((to_go > 0) ? (void) (0) : __assert_fail ("to_go > 0", "io.c", 644, __PRETTY_FUNCTION__));

  (*__errno_location ()) = (0);
  res = ber_int_sb_read( sb, ber->ber_rwptr, to_go );
  if (res<=0) return ((ber_tag_t) -1);
  ber->ber_rwptr+=res;

  if (res<to_go) {

   (*__errno_location ()) = (11);



   return ((ber_tag_t) -1);
  }
done:
  ber->ber_rwptr = ((void *)0);
  *len = ber->ber_len;
  if ( ber->ber_opts.lbo_debug ) {
   ber_pvt_log_printf( 0x0001, ber->ber_opts.lbo_debug,
    "ber_get_next: tag 0x%lx len %ld contents:\n",
    ber->ber_tag, ber->ber_len );
   ber_log_dump( 0x0010, ber->ber_opts.lbo_debug, ber, 1 );
  }
  return (ber->ber_tag);
 }

 ((0) ? (void) (0) : __assert_fail ("0", "io.c", 671, __PRETTY_FUNCTION__));
 return ((ber_tag_t) -1);
}

char *
ber_start( BerElement* ber )
{
 return ber->ber_buf;
}

int
ber_len( BerElement* ber )
{
 return ( ber->ber_end - ber->ber_buf );
}

int
ber_ptrlen( BerElement* ber )
{
 return ( ber->ber_ptr - ber->ber_buf );
}

void
ber_rewind ( BerElement * ber )
{
 ber->ber_rwptr = ((void *)0);
 ber->ber_sos = ((void *)0);
 ber->ber_end = ber->ber_ptr;
 ber->ber_ptr = ber->ber_buf;
}

int
ber_remaining( BerElement * ber )
{
 return ((ber)->ber_end - (ber)->ber_ptr);
}
