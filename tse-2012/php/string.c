# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
# 1 "/home/repair/benchmarks/tse-2012/php/src//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
# 25 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 368 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 410 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 411 "/usr/include/sys/cdefs.h" 2 3 4
# 369 "/usr/include/features.h" 2 3 4
# 392 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 393 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


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

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 122 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
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
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
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
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







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
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 640 "/usr/include/stdio.h" 3 4

# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 912 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 933 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 35 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 124 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 934 "/usr/include/stdio.h" 2 3 4
# 942 "/usr/include/stdio.h" 3 4

# 26 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 1
# 33 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_version.h" 1
# 34 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 1
# 53 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_config.h" 1
# 1 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h" 1
# 2908 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


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







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 276 "/usr/include/stdlib.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4
# 146 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 22 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/sys/select.h" 3 4

# 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/sys/select.h" 3 4

# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}


# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
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
  int __align;
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
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
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
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;


# 1 "/usr/include/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return ((void *)0);
}
# 760 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 774 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 950 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}

# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 2909 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h" 2
# 2924 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4

# 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 277 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 392 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 422 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 440 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 529 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 552 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 627 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 628 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/bits/string2.h" 1 3 4
# 393 "/usr/include/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 945 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c1 (const char *__s, int __reject);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c1 (const char *__s, int __reject)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c2 (const char *__s, int __reject1,
         int __reject2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c2 (const char *__s, int __reject1, int __reject2)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c3 (const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c3 (const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1021 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c1 (const char *__s, int __accept);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c1 (const char *__s, int __accept)
{
  size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c2 (const char *__s, int __accept1, int __accept2)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1097 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c2 (const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1147 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1179 "/usr/include/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, const char *__delim);
# 1197 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_1c (char **__s, char __reject);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_1c (char **__s, char __reject)
{
  char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 1278 "/usr/include/bits/string2.h" 3 4
extern char *__strdup (const char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
# 1297 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
# 631 "/usr/include/string.h" 2 3 4
# 658 "/usr/include/string.h" 3 4

# 2925 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h" 2
# 2935 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h"
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4



# 1 "/usr/include/bits/math-vector.h" 1 3 4
# 25 "/usr/include/bits/math-vector.h" 3 4
# 1 "/usr/include/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/bits/math-vector.h" 2 3 4
# 32 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 45 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 28 "/usr/include/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 49 "/usr/include/math.h" 2 3 4
# 83 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 84 "/usr/include/math.h" 2 3 4
# 104 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 105 "/usr/include/math.h" 2 3 4
# 151 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 152 "/usr/include/math.h" 2 3 4
# 168 "/usr/include/math.h" 3 4
extern int signgam;
# 209 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 347 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 372 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 472 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathinline.h" 1 3 4
# 123 "/usr/include/bits/mathinline.h" 3 4



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) __signbitf (float __x)
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x8) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) __signbit (double __x)
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x80) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) __signbitl (long double __x)
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}


# 473 "/usr/include/math.h" 2 3 4
# 534 "/usr/include/math.h" 3 4

# 2936 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h" 2
# 2 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_config.h" 2
# 54 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2
# 76 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stdarg.h" 1 3 4
# 77 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2



# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/bits/dlfcn.h" 1 3 4
# 28 "/usr/include/dlfcn.h" 2 3 4
# 52 "/usr/include/dlfcn.h" 3 4




extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 82 "/usr/include/dlfcn.h" 3 4
extern char *dlerror (void) __attribute__ ((__nothrow__ , __leaf__));
# 188 "/usr/include/dlfcn.h" 3 4

# 81 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2
# 223 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_errors.h" 1
# 224 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h" 1
# 27 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/../TSRM/TSRM.h" 1
# 18 "/home/repair/benchmarks/tse-2012/php/src/Zend/../TSRM/TSRM.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config.h" 1
# 1 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h" 1
# 1 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config.h" 2
# 19 "/home/repair/benchmarks/tse-2012/php/src/Zend/../TSRM/TSRM.h" 2
# 28 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 1
# 29 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h" 2


# 30 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 char *filename;
 uint lineno;
 char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



 char *zend_strndup(const char *s, unsigned int length) __attribute__ ((__malloc__));

 void *_emalloc(size_t size ) __attribute__ ((__malloc__));
 void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
 void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
 void _efree(void *ptr );
 void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__));
 void *_erealloc(void *ptr, size_t size, int allow_failure );
 char *_estrdup(const char *s ) __attribute__ ((__malloc__));
 char *_estrndup(const char *s, unsigned int length ) __attribute__ ((__malloc__));
 size_t _zend_mem_block_size(void *ptr );
# 94 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h"
 int zend_set_memory_limit(unsigned int memory_limit);

 void start_memory_manager(void);
 void shutdown_memory_manager(int silent, int full_shutdown );
 int is_zend_mm(void);
# 111 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h"
 size_t zend_memory_usage(int real_usage );
 size_t zend_memory_peak_usage(int real_usage );


# 157 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

 zend_mm_heap *zend_mm_startup(void);
 void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent);
 void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
 void _zend_mm_free(zend_mm_heap *heap, void *p );
 void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
 size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 177 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h"
typedef struct _zend_mm_storage zend_mm_storage;

typedef struct _zend_mm_segment {
 size_t size;
 struct _zend_mm_segment *next_segment;
} zend_mm_segment;

typedef struct _zend_mm_mem_handlers {
 const char *name;
 zend_mm_storage* (*init)(void *params);
 void (*dtor)(zend_mm_storage *storage);
 zend_mm_segment* (*_alloc)(zend_mm_storage *storage, size_t size);
 zend_mm_segment* (*_realloc)(zend_mm_storage *storage, zend_mm_segment *ptr, size_t size);
 void (*_free)(zend_mm_storage *storage, zend_mm_segment *ptr);
} zend_mm_mem_handlers;

struct _zend_mm_storage {
 const zend_mm_mem_handlers *handlers;
 void *data;
};

 zend_mm_heap *zend_mm_startup_ex(const zend_mm_mem_handlers *handlers, size_t block_size, void *params);
 zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap );
# 225 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_types.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;

typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 zend_object_handlers *handlers;
} zend_object_value;
# 227 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2


# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 38 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 2 3 4
# 161 "/usr/include/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 2 3 4
# 230 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2
# 246 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 1
# 39 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
typedef ulong (*hash_func_t)(char *arKey, uint nKeyLength);
typedef int (*compare_func_t)(const void *, const void * );
typedef void (*sort_func_t)(void *, size_t, register size_t, compare_func_t );
typedef void (*dtor_func_t)(void *pDest);
typedef void (*copy_ctor_func_t)(void *pElement);
typedef void (*copy_ctor_param_func_t)(void *pElement, void *pParam);

struct _hashtable;

typedef struct bucket {
 ulong h;
 uint nKeyLength;
 void *pData;
 void *pDataPtr;
 struct bucket *pListNext;
 struct bucket *pListLast;
 struct bucket *pNext;
 struct bucket *pLast;
 char arKey[1];
} Bucket;

typedef struct _hashtable {
 uint nTableSize;
 uint nTableMask;
 uint nNumOfElements;
 ulong nNextFreeElement;
 Bucket *pInternalPointer;
 Bucket *pListHead;
 Bucket *pListTail;
 Bucket **arBuckets;
 dtor_func_t pDestructor;
 zend_bool persistent;
 unsigned char nApplyCount;
 zend_bool bApplyProtection;



} HashTable;


typedef struct _zend_hash_key {
 char *arKey;
 uint nKeyLength;
 ulong h;
} zend_hash_key;


typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, void *source_data, zend_hash_key *hash_key, void *pParam);

typedef Bucket* HashPosition;




 int _zend_hash_init(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
 int _zend_hash_init_ex(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
 void zend_hash_destroy(HashTable *ht);
 void zend_hash_clean(HashTable *ht);




 int _zend_hash_add_or_update(HashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





 int _zend_hash_quick_add_or_update(HashTable *ht, char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





 int _zend_hash_index_update_or_next_insert(HashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





 int zend_hash_add_empty_element(HashTable *ht, char *arKey, uint nKeyLength);







typedef int (*apply_func_t)(void *pDest );
typedef int (*apply_func_arg_t)(void *pDest, void *argument );
typedef int (*apply_func_args_t)(void *pDest, int num_args, va_list args, zend_hash_key *hash_key);

 void zend_hash_graceful_destroy(HashTable *ht);
 void zend_hash_graceful_reverse_destroy(HashTable *ht);
 void zend_hash_apply(HashTable *ht, apply_func_t apply_func );
 void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void * );
 void zend_hash_apply_with_arguments(HashTable *ht, apply_func_args_t apply_func, int, ...);







 void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func );



 int zend_hash_del_key_or_index(HashTable *ht, char *arKey, uint nKeyLength, ulong h, int flag);





 ulong zend_get_hash_value(char *arKey, uint nKeyLength);


 int zend_hash_find(HashTable *ht, char *arKey, uint nKeyLength, void **pData);
 int zend_hash_quick_find(HashTable *ht, char *arKey, uint nKeyLength, ulong h, void **pData);
 int zend_hash_index_find(HashTable *ht, ulong h, void **pData);


 int zend_hash_exists(HashTable *ht, char *arKey, uint nKeyLength);
 int zend_hash_quick_exists(HashTable *ht, char *arKey, uint nKeyLength, ulong h);
 int zend_hash_index_exists(HashTable *ht, ulong h);
 ulong zend_hash_next_free_element(HashTable *ht);





 int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
 int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
 int zend_hash_get_current_key_ex(HashTable *ht, char **str_index, uint *str_length, ulong *num_index, zend_bool duplicate, HashPosition *pos);
 int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
 int zend_hash_get_current_data_ex(HashTable *ht, void **pData, HashPosition *pos);
 void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
 void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);
 int zend_hash_update_current_key_ex(HashTable *ht, int key_type, char *str_index, uint str_length, ulong num_index, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 ulong h;
} HashPointer;

 int zend_hash_get_pointer(HashTable *ht, HashPointer *ptr);
 int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 207 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
 void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
 void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
 void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
 int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
 int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
 int zend_hash_minmax(HashTable *ht, compare_func_t compar, int flag, void **pData );




 int zend_hash_num_elements(HashTable *ht);

 int zend_hash_rehash(HashTable *ht);
# 254 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
static inline ulong zend_inline_hash_func(char *arKey, uint nKeyLength)
{
 register ulong hash = 5381;


 for (; nKeyLength >= 8; nKeyLength -= 8) {
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
 }
 switch (nKeyLength) {
  case 7: hash = ((hash << 5) + hash) + *arKey++;
  case 6: hash = ((hash << 5) + hash) + *arKey++;
  case 5: hash = ((hash << 5) + hash) + *arKey++;
  case 4: hash = ((hash << 5) + hash) + *arKey++;
  case 3: hash = ((hash << 5) + hash) + *arKey++;
  case 2: hash = ((hash << 5) + hash) + *arKey++;
  case 1: hash = ((hash << 5) + hash) + *arKey++; break;
  case 0: break;

 }
 return hash;
}


 ulong zend_hash_func(char *arKey, uint nKeyLength);








# 337 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
static inline int zend_symtable_update(HashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest)
 {
 { register char *tmp=arKey; if (*tmp=='-') { tmp++; } if ((*tmp>='0' && *tmp<='9')) do { char *end=arKey+nKeyLength-1; long idx; if (*tmp++=='0' && nKeyLength>2) { break; } while (tmp<end) { if (!(*tmp>='0' && *tmp<='9')) { break; } tmp++; } if (tmp==end && *tmp=='\0') { if (*arKey=='-') { idx = strtol(arKey, 
# 339 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 339 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=
# 339 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
(-0x7fffffffffffffffL - 1L)
# 339 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
) { return _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, (1<<0) ); } } else { idx = strtol(arKey, 
# 339 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 339 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=0x7fffffffffffffffL) { return _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, (1<<0) ); } } } } while (0); };
 return _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize, pDest, (1<<0) );
}


static inline int zend_symtable_del(HashTable *ht, char *arKey, uint nKeyLength)
{
 { register char *tmp=arKey; if (*tmp=='-') { tmp++; } if ((*tmp>='0' && *tmp<='9')) do { char *end=arKey+nKeyLength-1; long idx; if (*tmp++=='0' && nKeyLength>2) { break; } while (tmp<end) { if (!(*tmp>='0' && *tmp<='9')) { break; } tmp++; } if (tmp==end && *tmp=='\0') { if (*arKey=='-') { idx = strtol(arKey, 
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
(-0x7fffffffffffffffL - 1L)
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
) { return zend_hash_del_key_or_index(ht, 
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 0, idx, 1); } } else { idx = strtol(arKey, 
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=0x7fffffffffffffffL) { return zend_hash_del_key_or_index(ht, 
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 0, idx, 1); } } } } while (0); }
 return zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0, 0);
}


static inline int zend_symtable_find(HashTable *ht, char *arKey, uint nKeyLength, void **pData)
{
 { register char *tmp=arKey; if (*tmp=='-') { tmp++; } if ((*tmp>='0' && *tmp<='9')) do { char *end=arKey+nKeyLength-1; long idx; if (*tmp++=='0' && nKeyLength>2) { break; } while (tmp<end) { if (!(*tmp>='0' && *tmp<='9')) { break; } tmp++; } if (tmp==end && *tmp=='\0') { if (*arKey=='-') { idx = strtol(arKey, 
# 353 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 353 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=
# 353 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
(-0x7fffffffffffffffL - 1L)
# 353 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
) { return zend_hash_index_find(ht, idx, pData); } } else { idx = strtol(arKey, 
# 353 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 353 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=0x7fffffffffffffffL) { return zend_hash_index_find(ht, idx, pData); } } } } while (0); };
 return zend_hash_find(ht, arKey, nKeyLength, pData);
}


static inline int zend_symtable_exists(HashTable *ht, char *arKey, uint nKeyLength)
{
 { register char *tmp=arKey; if (*tmp=='-') { tmp++; } if ((*tmp>='0' && *tmp<='9')) do { char *end=arKey+nKeyLength-1; long idx; if (*tmp++=='0' && nKeyLength>2) { break; } while (tmp<end) { if (!(*tmp>='0' && *tmp<='9')) { break; } tmp++; } if (tmp==end && *tmp=='\0') { if (*arKey=='-') { idx = strtol(arKey, 
# 360 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 360 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=
# 360 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
(-0x7fffffffffffffffL - 1L)
# 360 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
) { return zend_hash_index_exists(ht, idx); } } else { idx = strtol(arKey, 
# 360 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 360 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=0x7fffffffffffffffL) { return zend_hash_index_exists(ht, idx); } } } } while (0); };
 return zend_hash_exists(ht, arKey, nKeyLength);
}

static inline int zend_symtable_update_current_key(HashTable *ht, char *arKey, uint nKeyLength)
{
 { register char *tmp=arKey; if (*tmp=='-') { tmp++; } if ((*tmp>='0' && *tmp<='9')) do { char *end=arKey+nKeyLength-1; long idx; if (*tmp++=='0' && nKeyLength>2) { break; } while (tmp<end) { if (!(*tmp>='0' && *tmp<='9')) { break; } tmp++; } if (tmp==end && *tmp=='\0') { if (*arKey=='-') { idx = strtol(arKey, 
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
(-0x7fffffffffffffffL - 1L)
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
) { return zend_hash_update_current_key_ex(ht, 2, 
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 0, idx, 
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
); } } else { idx = strtol(arKey, 
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 10); if (idx!=0x7fffffffffffffffL) { return zend_hash_update_current_key_ex(ht, 2, 
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
, 0, idx, 
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
((void *)0)
# 366 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
); } } } } while (0); };
 return zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0, 
# 367 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 3 4
       ((void *)0)
# 367 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h"
       );
}
# 247 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_ts_hash.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






 int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
 int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
 void zend_ts_hash_destroy(TsHashTable *ht);
 void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_ts_hash.h"
 int _zend_ts_hash_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





 int _zend_ts_hash_quick_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





 int _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





 int zend_ts_hash_add_empty_element(TsHashTable *ht, char *arKey, uint nKeyLength);

 void zend_ts_hash_graceful_destroy(TsHashTable *ht);
 void zend_ts_hash_apply(TsHashTable *ht, apply_func_t apply_func );
 void zend_ts_hash_apply_with_argument(TsHashTable *ht, apply_func_arg_t apply_func, void * );
 void zend_ts_hash_apply_with_arguments(TsHashTable *ht, apply_func_args_t apply_func, int, ...);

 void zend_ts_hash_reverse_apply(TsHashTable *ht, apply_func_t apply_func );



 int zend_ts_hash_del_key_or_index(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, int flag);





 ulong zend_ts_get_hash_value(TsHashTable *ht, char *arKey, uint nKeyLength);


 int zend_ts_hash_find(TsHashTable *ht, char *arKey, uint nKeyLength, void **pData);
 int zend_ts_hash_quick_find(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void **pData);
 int zend_ts_hash_index_find(TsHashTable *ht, ulong h, void **pData);


 int zend_ts_hash_exists(TsHashTable *ht, char *arKey, uint nKeyLength);
 int zend_ts_hash_index_exists(TsHashTable *ht, ulong h);


 void zend_ts_hash_copy(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
 void zend_ts_hash_merge(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite);
 void zend_ts_hash_merge_ex(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
 int zend_ts_hash_sort(TsHashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
 int zend_ts_hash_compare(TsHashTable *ht1, TsHashTable *ht2, compare_func_t compar, zend_bool ordered );
 int zend_ts_hash_minmax(TsHashTable *ht, compare_func_t compar, int flag, void **pData );

 int zend_ts_hash_num_elements(TsHashTable *ht);

 int zend_ts_hash_rehash(TsHashTable *ht);

 ulong zend_ts_hash_func(char *arKey, uint nKeyLength);








# 248 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_llist.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_llist.h"
typedef struct _zend_llist_element {
 struct _zend_llist_element *next;
 struct _zend_llist_element *prev;
 char data[1];
} zend_llist_element;

typedef void (*llist_dtor_func_t)(void *);
typedef int (*llist_compare_func_t)(const zend_llist_element **, const zend_llist_element ** );
typedef void (*llist_apply_with_args_func_t)(void *data, int num_args, va_list args );
typedef void (*llist_apply_with_arg_func_t)(void *data, void *arg );
typedef void (*llist_apply_func_t)(void * );

typedef struct _zend_llist {
 zend_llist_element *head;
 zend_llist_element *tail;
 size_t count;
 size_t size;
 llist_dtor_func_t dtor;
 unsigned char persistent;
 zend_llist_element *traverse_ptr;
} zend_llist;

typedef zend_llist_element* zend_llist_position;


 void zend_llist_init(zend_llist *l, size_t size, llist_dtor_func_t dtor, unsigned char persistent);
 void zend_llist_add_element(zend_llist *l, void *element);
 void zend_llist_prepend_element(zend_llist *l, void *element);
 void zend_llist_del_element(zend_llist *l, void *element, int (*compare)(void *element1, void *element2));
 void zend_llist_destroy(zend_llist *l);
 void zend_llist_clean(zend_llist *l);
 void *zend_llist_remove_tail(zend_llist *l);
 void zend_llist_copy(zend_llist *dst, zend_llist *src);
 void zend_llist_apply(zend_llist *l, llist_apply_func_t func );
 void zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
 void zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func, void *arg );
 void zend_llist_apply_with_arguments(zend_llist *l, llist_apply_with_args_func_t func , int num_args, ...);
 int zend_llist_count(zend_llist *l);
 void zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func );


 void *zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
 void *zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
 void *zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
 void *zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);







# 249 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2






void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));
# 264 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"
typedef struct _zval_struct zval;
typedef struct _zend_class_entry zend_class_entry;

typedef struct _zend_guard {
 zend_bool in_get;
 zend_bool in_set;
 zend_bool in_unset;
 zend_bool in_isset;
 zend_bool dummy;
} zend_guard;

typedef struct _zend_object {
 zend_class_entry *ce;
 HashTable *properties;
 HashTable *guards;
} zend_object;

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_object_handlers.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 45 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value );


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value );



typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member );



typedef void (*zend_object_set_t)(zval **object, zval *value );




typedef zval* (*zend_object_get_t)(zval *object );







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists );


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty );


typedef void (*zend_object_unset_property_t)(zval *object, zval *member );


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset );


typedef HashTable *(*zend_object_get_properties_t)(zval *object );





typedef int (*zend_object_call_method_t)(char *method, int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr, char *method, int method_len );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );


typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(zval *object );
typedef int (*zend_object_get_class_name_t)(zval *object, char **class_name, zend_uint *class_name_len, int parent );
typedef int (*zend_object_compare_t)(zval *object1, zval *object2 );



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type );



typedef int (*zend_object_count_elements_t)(zval *object, long *count );

struct _zend_object_handlers {

 zend_object_add_ref_t add_ref;
 zend_object_del_ref_t del_ref;
 zend_object_clone_obj_t clone_obj;

 zend_object_read_property_t read_property;
 zend_object_write_property_t write_property;
 zend_object_read_dimension_t read_dimension;
 zend_object_write_dimension_t write_dimension;
 zend_object_get_property_ptr_ptr_t get_property_ptr_ptr;
 zend_object_get_t get;
 zend_object_set_t set;
 zend_object_has_property_t has_property;
 zend_object_unset_property_t unset_property;
 zend_object_has_dimension_t has_dimension;
 zend_object_unset_dimension_t unset_dimension;
 zend_object_get_properties_t get_properties;
 zend_object_get_method_t get_method;
 zend_object_call_method_t call_method;
 zend_object_get_constructor_t get_constructor;
 zend_object_get_class_entry_t get_class_entry;
 zend_object_get_class_name_t get_class_name;
 zend_object_compare_t compare_objects;
 zend_object_cast_t cast_object;
 zend_object_count_elements_t count_elements;
};

extern zend_object_handlers std_object_handlers;


 union _zend_function *zend_std_get_static_method(zend_class_entry *ce, char *function_name_strval, int function_name_strlen );
 zval **zend_std_get_static_property(zend_class_entry *ce, char *property_name, int property_name_len, zend_bool silent );
 zend_bool zend_std_unset_static_property(zend_class_entry *ce, char *property_name, int property_name_len );
 union _zend_function *zend_std_get_constructor(zval *object );
 struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zval *member, int silent );

 int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type );





 int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, char *function_name_strval, int function_name_strlen );

 int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

 int zend_check_property_access(zend_object *zobj, char *prop_info_name, int prop_info_name_len );

 void zend_std_call_user_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 282 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2

typedef union _zvalue_value {
 long lval;
 double dval;
 struct {
  char *val;
  int len;
 } str;
 HashTable *ht;
 zend_object_value obj;
} zvalue_value;


struct _zval_struct {

 zvalue_value value;
 zend_uint refcount;
 zend_uchar type;
 zend_uchar is_ref;
};






union _zend_function;

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_iterators.h" 1
# 29 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_iterators.h"
typedef struct _zend_object_iterator zend_object_iterator;

typedef struct _zend_object_iterator_funcs {

 void (*dtor)(zend_object_iterator *iter );


 int (*valid)(zend_object_iterator *iter );


 void (*get_current_data)(zend_object_iterator *iter, zval ***data );


 int (*get_current_key)(zend_object_iterator *iter, char **str_key, uint *str_key_len, ulong *int_key );


 void (*move_forward)(zend_object_iterator *iter );


 void (*rewind)(zend_object_iterator *iter );


 void (*invalidate_current)(zend_object_iterator *iter );
} zend_object_iterator_funcs;

struct _zend_object_iterator {
 void *data;
 zend_object_iterator_funcs *funcs;
 ulong index;
};

typedef struct _zend_class_iterator_funcs {
 zend_object_iterator_funcs *funcs;
 union _zend_function *zf_new_iterator;
 union _zend_function *zf_valid;
 union _zend_function *zf_current;
 union _zend_function *zf_key;
 union _zend_function *zf_next;
 union _zend_function *zf_rewind;
} zend_class_iterator_funcs;

enum zend_object_iterator_kind {
 ZEND_ITER_INVALID,
 ZEND_ITER_PLAIN_ARRAY,
 ZEND_ITER_PLAIN_OBJECT,
 ZEND_ITER_OBJECT
};



 enum zend_object_iterator_kind zend_iterator_unwrap(zval *array_ptr, zend_object_iterator **iter );


 zval *zend_iterator_wrap(zend_object_iterator *iter );

 void zend_register_iterator_wrapper(void);

# 311 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2

struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_class_entry {
 char type;
 char *name;
 zend_uint name_length;
 struct _zend_class_entry *parent;
 int refcount;
 zend_bool constants_updated;
 zend_uint ce_flags;

 HashTable function_table;
 HashTable default_properties;
 HashTable properties_info;
 HashTable default_static_members;
 HashTable *static_members;
 HashTable constants_table;
 struct _zend_function_entry *builtin_functions;

 union _zend_function *constructor;
 union _zend_function *destructor;
 union _zend_function *clone;
 union _zend_function *__get;
 union _zend_function *__set;
 union _zend_function *__unset;
 union _zend_function *__isset;
 union _zend_function *__call;
 union _zend_function *__tostring;
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object_value (*create_object)(zend_class_entry *class_type );
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref );
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type );


 int (*serialize)(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
 int (*unserialize)(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

 zend_class_entry **interfaces;
 zend_uint num_interfaces;

 char *filename;
 zend_uint line_start;
 zend_uint line_end;
 char *doc_comment;
 zend_uint doc_comment_len;

 struct _zend_module_entry *module;
};

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_stream.h" 1
# 28 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_stream.h"
typedef size_t (*zend_stream_reader_t)(void *handle, char *buf, size_t len );
typedef void (*zend_stream_closer_t)(void *handle );
typedef long (*zend_stream_fteller_t)(void *handle );

typedef struct _zend_stream {
 void *handle;
 zend_stream_reader_t reader;
 zend_stream_closer_t closer;
 zend_stream_fteller_t fteller;
 int interactive;
} zend_stream;

typedef struct _zend_file_handle {
 zend_uchar type;
 char *filename;
 char *opened_path;
 union {
  int fd;
  FILE *fp;
  zend_stream stream;
 } handle;
 zend_bool free_filename;
} zend_file_handle;


 int zend_stream_open(const char *filename, zend_file_handle *handle );
 int zend_stream_ferror(zend_file_handle *file_handle );
 int zend_stream_getc(zend_file_handle *file_handle );
 size_t zend_stream_read(zend_file_handle *file_handle, char *buf, size_t len );
 long zend_stream_ftell(zend_file_handle *file_handle );
 int zend_stream_fixup(zend_file_handle *file_handle );

# 371 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path);
 void (*message_handler)(long message, void *data);
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 int (*get_configuration_directive)(char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks);
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 int (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len );
} zend_utility_functions;


typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;


typedef int (*zend_write_func_t)(const char *str, uint str_length);
# 433 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions, int start_builtin_functions);
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);





void zend_set_utility_values(zend_utility_values *utility_values);


 void _zend_bailout(char *filename, uint lineno);

# 465 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"

 char *get_zend_version(void);
 void zend_make_printable_zval(zval *expr, zval *expr_copy, int *use_copy);
 int zend_print_zval(zval *expr, int indent);
 int zend_print_zval_ex(zend_write_func_t write_func, zval *expr, int indent);
 void zend_print_zval_r(zval *expr, int indent );
 void zend_print_flat_zval_r(zval *expr );
 void zend_print_zval_r_ex(zend_write_func_t write_func, zval *expr, int indent );
 void zend_output_debug_string(zend_bool trigger_break, char *format, ...) __attribute__ ((format(printf, 2, 3)));


void zend_activate(void);
void zend_deactivate(void);
void zend_call_destructors(void);
void zend_activate_modules(void);
void zend_deactivate_modules(void);
void zend_post_deactivate_modules(void);








 void free_estring(char **str_p);

# 511 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"

extern int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern zend_write_func_t zend_write;
extern FILE *(*zend_fopen)(const char *filename, char **opened_path);
extern void (*zend_block_interruptions)(void);
extern void (*zend_unblock_interruptions)(void);
extern void (*zend_ticks_function)(int ticks);
extern void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern void (*zend_on_timeout)(int seconds );
extern int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern char *(*zend_getenv)(char *name, size_t name_len );


 void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(char *error);



extern zend_class_entry *zend_standard_class_def;
extern zend_utility_values zend_uv;
extern zval zval_used_for_init;










 void zend_message_dispatcher(long message, void *data);

 int zend_get_configuration_directive(char *name, uint name_length, zval *contents);

# 651 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_variables.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_variables.h"


 void _zval_dtor_func(zval *zvalue );

static inline void _zval_dtor(zval *zvalue )
{
        if (zvalue->type <= 3) {
                return;
        }
 _zval_dtor_func(zvalue );
}

 void _zval_copy_ctor_func(zval *zvalue );

static inline void _zval_copy_ctor(zval *zvalue )
{
        if (zvalue->type <= 3) {
                return;
        }
 _zval_copy_ctor_func(zvalue );
}


 int zend_print_variable(zval *var);
 void _zval_ptr_dtor(zval **zval_ptr );
 void _zval_internal_dtor(zval *zvalue );
 void _zval_internal_ptr_dtor(zval **zvalue );
# 78 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_variables.h"
 void zval_add_ref(zval **p);


# 652 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend.h" 2
# 35 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_qsort.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_qsort.h"

 void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );

# 36 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_compat.h" 1
# 27 "/home/repair/benchmarks/tse-2012/php/src/main/php_compat.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_config.h" 1
# 28 "/home/repair/benchmarks/tse-2012/php/src/main/php_compat.h" 2
# 37 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_modules.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_modules.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h" 1
# 52 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;

typedef struct _znode {
 int op_type;
 union {
  zval constant;

  zend_uint var;
  zend_uint opline_num;
  zend_op_array *op_array;
  zend_op *jmp_addr;
  struct {
   zend_uint var;
   zend_uint type;
  } EA;
 } u;
} znode;

typedef struct _zend_execute_data zend_execute_data;




typedef int (*opcode_handler_t) (zend_execute_data *execute_data );

extern opcode_handler_t *zend_opcode_handlers;

struct _zend_op {
 opcode_handler_t handler;
 znode result;
 znode op1;
 znode op2;
 ulong extended_value;
 uint lineno;
 zend_uchar opcode;
};


typedef struct _zend_brk_cont_element {
 int start;
 int cont;
 int brk;
 int parent;
} zend_brk_cont_element;


typedef struct _zend_try_catch_element {
 zend_uint try_op;
 zend_uint catch_op;
} zend_try_catch_element;
# 143 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 char *name;
 int name_length;
 ulong h;
 char *doc_comment;
 int doc_comment_len;
 zend_class_entry *ce;
} zend_property_info;


typedef struct _zend_arg_info {
 char *name;
 zend_uint name_len;
 char *class_name;
 zend_uint class_name_len;
 zend_bool array_type_hint;
 zend_bool allow_null;
 zend_bool pass_by_reference;
 zend_bool return_reference;
 int required_num_args;
} zend_arg_info;

typedef struct _zend_compiled_variable {
 char *name;
 int name_len;
 ulong hash_value;
} zend_compiled_variable;

struct _zend_op_array {

 zend_uchar type;
 char *function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;
 zend_bool pass_rest_by_reference;
 unsigned char return_reference;


 zend_uint *refcount;

 zend_op *opcodes;
 zend_uint last, size;

 zend_compiled_variable *vars;
 int last_var, size_var;

 zend_uint T;

 zend_brk_cont_element *brk_cont_array;
 zend_uint last_brk_cont;
 zend_uint current_brk_cont;

 zend_try_catch_element *try_catch_array;
 int last_try_catch;


 HashTable *static_variables;

 zend_op *start_op;
 int backpatch_count;

 zend_bool done_pass_two;
 zend_bool uses_this;

 char *filename;
 zend_uint line_start;
 zend_uint line_end;
 char *doc_comment;
 zend_uint doc_comment_len;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 char * function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;
 zend_bool pass_rest_by_reference;
 unsigned char return_reference;


 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_module_entry *module;
} zend_internal_function;



typedef union _zend_function {
 zend_uchar type;

 struct {
  zend_uchar type;
  char *function_name;
  zend_class_entry *scope;
  zend_uint fn_flags;
  union _zend_function *prototype;
  zend_uint num_args;
  zend_uint required_num_args;
  zend_arg_info *arg_info;
  zend_bool pass_rest_by_reference;
  unsigned char return_reference;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
} zend_function;


typedef struct _zend_function_state {
 HashTable *function_symbol_table;
 zend_function *function;
 void *reserved[4];
} zend_function_state;


typedef struct _zend_switch_entry {
 znode cond;
 int default_case;
 int control_var;
} zend_switch_entry;


typedef struct _list_llist_element {
 znode var;
 zend_llist dimensions;
 znode value;
} list_llist_element;

union _temp_variable;

struct _zend_execute_data {
 struct _zend_op *opline;
 zend_function_state function_state;
 zend_function *fbc;
 zend_op_array *op_array;
 zval *object;
 union _temp_variable *Ts;
 zval ***CVs;
 zend_bool original_in_execution;
 HashTable *symbol_table;
 struct _zend_execute_data *prev_execute_data;
 zval *old_error_reporting;
};
# 316 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 26 "/usr/include/bits/setjmp.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/setjmp.h" 2 3 4





# 31 "/usr/include/bits/setjmp.h" 3 4
typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 31 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));










extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 102 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 112 "/usr/include/setjmp.h" 3 4

# 27 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals_macros.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals_macros.h"

# 25 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_scanner_globals zend_scanner_globals;
# 37 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals_macros.h"
extern struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 47 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals_macros.h"
extern zend_executor_globals executor_globals;
# 56 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals_macros.h"
extern zend_scanner_globals language_scanner_globals;
# 66 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals_macros.h"
extern zend_scanner_globals ini_scanner_globals;
# 29 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_stack.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_stack.h"
typedef struct _zend_stack {
 int top, max;
 void **elements;
} zend_stack;





 int zend_stack_init(zend_stack *stack);
 int zend_stack_push(zend_stack *stack, void *element, int size);
 int zend_stack_top(zend_stack *stack, void **element);
 int zend_stack_del_top(zend_stack *stack);
 int zend_stack_int_top(zend_stack *stack);
 int zend_stack_is_empty(zend_stack *stack);
 int zend_stack_destroy(zend_stack *stack);
 void **zend_stack_base(zend_stack *stack);
 int zend_stack_count(zend_stack *stack);
 void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
 void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);

# 31 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_ptr_stack.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_ptr_stack.h"
typedef struct _zend_ptr_stack {
 int top, max;
 void **elements;
 void **top_element;
} zend_ptr_stack;





 void zend_ptr_stack_init(zend_ptr_stack *stack);
 void zend_ptr_stack_n_push(zend_ptr_stack *stack, int count, ...);
 void zend_ptr_stack_n_pop(zend_ptr_stack *stack, int count, ...);
 void zend_ptr_stack_destroy(zend_ptr_stack *stack);
 void zend_ptr_stack_apply(zend_ptr_stack *stack, void (*func)(void *));
 void zend_ptr_stack_clean(zend_ptr_stack *stack, void (*func)(void *), zend_bool free_elements);
 int zend_ptr_stack_num_elements(zend_ptr_stack *stack);

# 55 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_ptr_stack.h"
static inline void zend_ptr_stack_3_push(zend_ptr_stack *stack, void *a, void *b, void *c)
{


 if (stack->top+3 > stack->max) { stack->max *= 2; stack->max += 3; stack->elements = (void **) _erealloc((stack->elements), ((sizeof(void *) * (stack->max))), 0 ); stack->top_element = stack->elements+stack->top; }

 stack->top += 3;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;
 *(stack->top_element++) = c;


}

static inline void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a, void *b)
{


 if (stack->top+2 > stack->max) { stack->max *= 2; stack->max += 2; stack->elements = (void **) _erealloc((stack->elements), ((sizeof(void *) * (stack->max))), 0 ); stack->top_element = stack->elements+stack->top; }

 stack->top += 2;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;


}

static inline void zend_ptr_stack_3_pop(zend_ptr_stack *stack, void **a, void **b, void **c)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 *c = *(--stack->top_element);
 stack->top -= 3;
}

static inline void zend_ptr_stack_2_pop(zend_ptr_stack *stack, void **a, void **b)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 stack->top -= 2;
}

static inline void zend_ptr_stack_push(zend_ptr_stack *stack, void *ptr)
{
 if (stack->top+1 > stack->max) { stack->max *= 2; stack->max += 1; stack->elements = (void **) _erealloc((stack->elements), ((sizeof(void *) * (stack->max))), 0 ); stack->top_element = stack->elements+stack->top; }

 stack->top++;
 *(stack->top_element++) = ptr;
}

static inline void *zend_ptr_stack_pop(zend_ptr_stack *stack)
{
 stack->top--;
 return *(--stack->top_element);
}
# 32 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 2


# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_objects.h" 1
# 27 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_objects.h"

 void zend_object_std_init(zend_object *object, zend_class_entry *ce );
 void zend_object_std_dtor(zend_object *object );
 zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
 void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
 zend_object *zend_objects_get_address(zval *object );
 void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
 zend_object_value zend_objects_clone_obj(zval *object );
 void zend_objects_free_object_storage(zend_object *object );

# 35 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_objects_API.h" 1
# 27 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_objects_API.h"
typedef void (*zend_objects_store_dtor_t)(void *object, zend_object_handle handle );
typedef void (*zend_objects_free_object_storage_t)(void *object );
typedef void (*zend_objects_store_clone_t)(void *object, void **object_clone );

typedef struct _zend_object_store_bucket {
 zend_bool destructor_called;
 zend_bool valid;
 union _store_bucket {
  struct _store_object {
   void *object;
   zend_objects_store_dtor_t dtor;
   zend_objects_free_object_storage_t free_storage;
   zend_objects_store_clone_t clone;
   zend_uint refcount;
  } obj;
  struct {
   int next;
  } free_list;
 } bucket;
} zend_object_store_bucket;

typedef struct _zend_objects_store {
 zend_object_store_bucket *object_buckets;
 zend_uint top;
 zend_uint size;
 int free_list_head;
} zend_objects_store;



 void zend_objects_store_init(zend_objects_store *objects, zend_uint init_size);
 void zend_objects_store_call_destructors(zend_objects_store *objects );
 void zend_objects_store_mark_destructed(zend_objects_store *objects );
 void zend_objects_store_destroy(zend_objects_store *objects);


 zend_object_handle zend_objects_store_put(void *object, zend_objects_store_dtor_t dtor, zend_objects_free_object_storage_t storage, zend_objects_store_clone_t clone );

 void zend_objects_store_add_ref(zval *object );
 void zend_objects_store_del_ref(zval *object );
 void zend_objects_store_add_ref_by_handle(zend_object_handle handle );
 void zend_objects_store_del_ref_by_handle(zend_object_handle handle );
 zend_uint zend_objects_store_get_refcount(zval *object );
 zend_object_value zend_objects_store_clone_obj(zval *object );
 void *zend_object_store_get_object(zval *object );
 void *zend_object_store_get_object_by_handle(zend_object_handle handle );

 void zend_object_store_set_object(zval *zobject, void *object );
 void zend_object_store_ctor_failed(zval *zobject );

 void zend_objects_store_free_object_storage(zend_objects_store *objects );



 zval *zend_object_create_proxy(zval *object, zval *member );

 zend_object_handlers *zend_get_std_object_handlers();

# 36 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_modules.h" 1
# 37 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 2
# 57 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h" 1
# 58 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 2





typedef struct _zend_declarables {
 zval ticks;
} zend_declarables;


struct _zend_compiler_globals {
 zend_stack bp_stack;
 zend_stack switch_cond_stack;
 zend_stack foreach_copy_stack;
 zend_stack object_stack;
 zend_stack declare_stack;

 zend_class_entry *active_class_entry;


 zend_llist list_llist;
 zend_llist dimension_llist;
 zend_stack list_stack;

 zend_stack function_call_stack;

 char *compiled_filename;

 int zend_lineno;
 int comment_start_line;
 char *heredoc;
 int heredoc_len;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;

 HashTable filenames_table;

 HashTable *auto_globals;

 zend_bool in_compilation;
 zend_bool short_tags;
 zend_bool asp_tags;
 zend_bool allow_call_time_pass_reference;

 zend_declarables declarables;


 zend_bool extended_info;
 zend_bool handle_op_arrays;

 zend_bool unclean_shutdown;

 zend_bool ini_parser_unbuffered_errors;

 zend_llist open_files;

 long catch_begin;

 struct _zend_ini_parser_param *ini_parser_param;

 int interactive;

 zend_uint start_lineno;
 zend_bool increment_lineno;

 znode implementing_class;

 zend_uint access_type;

 char *doc_comment;
 zend_uint doc_comment_len;
# 150 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h"
};


struct _zend_executor_globals {
 zval **return_value_ptr_ptr;

 zval uninitialized_zval;
 zval *uninitialized_zval_ptr;

 zval error_zval;
 zval *error_zval_ptr;

 zend_function_state *function_state_ptr;
 zend_ptr_stack arg_types_stack;


 HashTable *symtable_cache[32];
 HashTable **symtable_cache_limit;
 HashTable **symtable_cache_ptr;

 zend_op **opline_ptr;

 HashTable *active_symbol_table;
 HashTable symbol_table;

 HashTable included_files;

 jmp_buf *bailout;

 int error_reporting;
 int orig_error_reporting;
 int exit_status;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;
 HashTable *zend_constants;

 zend_class_entry *scope;

 zval *This;

 long precision;

 int ticks_count;

 zend_bool in_execution;
 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;
 zend_bool ze1_compatibility_mode;


 zend_bool no_extensions;





 HashTable regular_list;
 HashTable persistent_list;

 zend_ptr_stack argument_stack;

 int user_error_handler_error_reporting;
 zval *user_error_handler;
 zval *user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_ptr_stack user_error_handlers;
 zend_ptr_stack user_exception_handlers;


 int timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;

 zend_objects_store objects_store;
 zval *exception;
 zend_op *opline_before_exception;

 struct _zend_execute_data *current_execute_data;

 struct _zend_module_entry *current_module;

 zend_property_info std_property_info;

 zend_bool active;

 void *reserved[4];
};

struct _zend_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;
 int yy_leng;
 char *yy_text;
 struct yy_buffer_state *current_buffer;
 char *c_buf_p;
 int init;
 int start;
 int lineno;
 char _yy_hold_char;
 int yy_n_chars;
 int _yy_did_buffer_switch_on_eof;
 int _yy_last_accepting_state;


 char *_yy_last_accepting_cpos;
 int _yy_more_flag;
 int _yy_more_len;
 int yy_start_stack_ptr;
 int yy_start_stack_depth;
 int *yy_start_stack;
# 283 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h"
};
# 317 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);

extern zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
extern zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );

 int lex_scan(zval *zendlval );
void startup_scanner(void);
void shutdown_scanner(void);

 char *zend_set_compiled_filename(char *new_compiled_filename );
 void zend_restore_compiled_filename(char *original_compiled_filename );
 char *zend_get_compiled_filename(void);
 int zend_get_compiled_lineno(void);
 int zend_get_scanned_file_offset(void);

 char* zend_get_compiled_variable_name(zend_op_array *op_array, zend_uint var, int* name_len);
# 346 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h"
void zend_do_binary_op(zend_uchar op, znode *result, znode *op1, znode *op2 );
void zend_do_unary_op(zend_uchar op, znode *result, znode *op1 );
void zend_do_binary_assign_op(zend_uchar op, znode *result, znode *op1, znode *op2 );
void zend_do_assign(znode *result, znode *variable, znode *value );
void zend_do_assign_ref(znode *result, znode *lvar, znode *rvar );
void fetch_simple_variable(znode *result, znode *varname, int bp );
void fetch_simple_variable_ex(znode *result, znode *varname, int bp, zend_uchar op );
void zend_do_indirect_references(znode *result, znode *num_references, znode *variable );
void zend_do_fetch_static_variable(znode *varname, znode *static_assignment, int fetch_type );
void zend_do_fetch_global_variable(znode *varname, znode *static_assignment, int fetch_type );

void fetch_array_begin(znode *result, znode *varname, znode *first_dim );
void fetch_array_dim(znode *result, znode *parent, znode *dim );
void fetch_string_offset(znode *result, znode *parent, znode *offset );
void zend_do_fetch_static_member(znode *result, znode *class_znode );
void zend_do_print(znode *result, znode *arg );
void zend_do_echo(znode *arg );
typedef int (*unary_op_type)(zval *, zval *);
 unary_op_type get_unary_op(int opcode);
 void *get_binary_op(int opcode);

void zend_do_while_cond(znode *expr, znode *close_bracket_token );
void zend_do_while_end(znode *while_token, znode *close_bracket_token );
void zend_do_do_while_begin(void);
void zend_do_do_while_end(znode *do_token, znode *expr_open_bracket, znode *expr );


void zend_do_if_cond(znode *cond, znode *closing_bracket_token );
void zend_do_if_after_statement(znode *closing_bracket_token, unsigned char initialize );
void zend_do_if_end(void);

void zend_do_for_cond(znode *expr, znode *second_semicolon_token );
void zend_do_for_before_statement(znode *cond_start, znode *second_semicolon_token );
void zend_do_for_end(znode *second_semicolon_token );

void zend_do_pre_incdec(znode *result, znode *op1, zend_uchar op );
void zend_do_post_incdec(znode *result, znode *op1, zend_uchar op );

void zend_do_begin_variable_parse(void);
void zend_do_end_variable_parse(int type, int arg_offset );

void zend_check_writable_variable(znode *variable);

void zend_do_free(znode *op1 );

void zend_do_init_string(znode *result );
void zend_do_add_char(znode *result, znode *op1, znode *op2 );
void zend_do_add_string(znode *result, znode *op1, znode *op2 );
void zend_do_add_variable(znode *result, znode *op1, znode *op2 );

int zend_do_verify_access_types(znode *current_access_type, znode *new_modifier);
void zend_do_begin_function_declaration(znode *function_token, znode *function_name, int is_method, int return_reference, znode *fn_flags_znode );
void zend_do_end_function_declaration(znode *function_token );
void zend_do_receive_arg(zend_uchar op, znode *var, znode *offset, znode *initialization, znode *class_type, znode *varname, zend_bool pass_by_reference );
int zend_do_begin_function_call(znode *function_name );
void zend_do_begin_method_call(znode *left_bracket );
void zend_do_clone(znode *result, znode *expr );
void zend_do_begin_dynamic_function_call(znode *function_name );
void zend_do_fetch_class(znode *result, znode *class_name );
void zend_do_fetch_class_name(znode *result, znode *class_entry, znode *class_name );
void zend_do_begin_class_member_function_call(znode *class_name, znode *method_name );
void zend_do_end_function_call(znode *function_name, znode *result, znode *argument_list, int is_method, int is_dynamic_fcall );
void zend_do_return(znode *expr, int do_end_vparse );
void zend_do_handle_exception(void);

void zend_do_try(znode *try_token );
void zend_do_begin_catch(znode *try_token, znode *catch_class, znode *catch_var, zend_bool first_catch );
void zend_do_end_catch(znode *try_token );
void zend_do_throw(znode *expr );

 int do_bind_function(zend_op *opline, HashTable *function_table, zend_bool compile_time);
 zend_class_entry *do_bind_class(zend_op *opline, HashTable *class_table, zend_bool compile_time );
 zend_class_entry *do_bind_inherited_class(zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time );
 void zend_do_inherit_interfaces(zend_class_entry *ce, zend_class_entry *iface );
 void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface );
void zend_do_implements_interface(znode *interface_znode );

 void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce );
void zend_do_early_binding(void);

void zend_do_pass_param(znode *param, zend_uchar op, int offset );


void zend_do_boolean_or_begin(znode *expr1, znode *op_token );
void zend_do_boolean_or_end(znode *result, znode *expr1, znode *expr2, znode *op_token );
void zend_do_boolean_and_begin(znode *expr1, znode *op_token );
void zend_do_boolean_and_end(znode *result, znode *expr1, znode *expr2, znode *op_token );

void zend_do_brk_cont(zend_uchar op, znode *expr );

void zend_do_switch_cond(znode *cond );
void zend_do_switch_end(znode *case_list );
void zend_do_case_before_statement(znode *case_list, znode *case_token, znode *case_expr );
void zend_do_case_after_statement(znode *result, znode *case_token );
void zend_do_default_before_statement(znode *case_list, znode *default_token );

void zend_do_begin_class_declaration(znode *class_token, znode *class_name, znode *parent_class_name );
void zend_do_end_class_declaration(znode *class_token, znode *parent_token );
void zend_do_declare_property(znode *var_name, znode *value, zend_uint access_type );
void zend_do_declare_implicit_property(void);
void zend_do_declare_class_constant(znode *var_name, znode *value );

void zend_do_fetch_property(znode *result, znode *object, znode *property );


void zend_do_push_object(znode *object );
void zend_do_pop_object(znode *object );


void zend_do_begin_new_object(znode *new_token, znode *class_type );
void zend_do_end_new_object(znode *result, znode *new_token, znode *argument_list );

void zend_do_fetch_constant(znode *result, znode *constant_container, znode *constant_name, int mode );

void zend_do_shell_exec(znode *result, znode *cmd );

void zend_do_init_array(znode *result, znode *expr, znode *offset, zend_bool is_ref );
void zend_do_add_array_element(znode *result, znode *expr, znode *offset, zend_bool is_ref );
void zend_do_add_static_array_element(znode *result, znode *offset, znode *expr);
void zend_do_list_init(void);
void zend_do_list_end(znode *result, znode *expr );
void zend_do_add_list_element(znode *element );
void zend_do_new_list_begin(void);
void zend_do_new_list_end(void);

void zend_do_cast(znode *result, znode *expr, int type );
void zend_do_include_or_eval(int type, znode *result, znode *op1 );

void zend_do_unset(znode *variable );
void zend_do_isset_or_isempty(int type, znode *result, znode *variable );

void zend_do_instanceof(znode *result, znode *expr, znode *class_znode, int type );

void zend_do_foreach_begin(znode *foreach_token, znode *open_brackets_token, znode *array, znode *as_token, int variable );
void zend_do_foreach_cont(znode *foreach_token, znode *open_brackets_token, znode *as_token, znode *value, znode *key );
void zend_do_foreach_end(znode *foreach_token, znode *as_token );

void zend_do_declare_begin(void);
void zend_do_declare_stmt(znode *var, znode *val );
void zend_do_declare_end(znode *declare_token );

void zend_do_end_heredoc(void);

void zend_do_exit(znode *result, znode *message );

void zend_do_begin_silence(znode *strudel_token );
void zend_do_end_silence(znode *strudel_token );

void zend_do_begin_qm_op(znode *cond, znode *qm_token );
void zend_do_qm_true(znode *true_value, znode *qm_token, znode *colon_token );
void zend_do_qm_false(znode *result, znode *false_value, znode *qm_token, znode *colon_token );

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_do_ticks(void);

void zend_do_abstract_method(znode *function_name, znode *modifiers, znode *body );

 void function_add_ref(zend_function *function);





 zend_op_array *compile_file(zend_file_handle *file_handle, int type );
 zend_op_array *compile_string(zval *source_string, char *filename );
 zend_op_array *compile_filename(int type, zval *filename );
 int zend_execute_scripts(int type , zval **retval, int file_count, ...);
 int open_file_for_scanning(zend_file_handle *file_handle );
 void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size );
 void destroy_op_array(zend_op_array *op_array );
 void zend_destroy_file_handle(zend_file_handle *file_handle );
 void zend_file_handle_dtor(zend_file_handle *fh);
 int zend_cleanup_class_data(zend_class_entry **pce );
 int zend_cleanup_function_data(zend_function *function );
 int zend_cleanup_function_data_full(zend_function *function );

 void destroy_zend_function(zend_function *function );
 void zend_function_dtor(zend_function *function);
 void destroy_zend_class(zend_class_entry **pce);
void zend_class_add_ref(zend_class_entry **ce);

 void zend_mangle_property_name(char **dest, int *dest_length, char *src1, int src1_length, char *src2, int src2_length, int internal);
 int zend_unmangle_property_name(char *mangled_property, int mangled_property_len, char **prop_name, char **class_name);




zend_op *get_next_op(zend_op_array *op_array );
void init_op(zend_op *op );
int get_next_op_number(zend_op_array *op_array);
int print_class(zend_class_entry *class_entry );
void print_op_array(zend_op_array *op_array, int optimizations);
int pass_two(zend_op_array *op_array );
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array);
void zend_do_first_catch(znode *open_parentheses );
void zend_initialize_try_catch_element(znode *try_token );
void zend_do_mark_last_catch(znode *first_catch, znode *last_additional_catch );
 zend_bool zend_is_compiling(void);
 char *zend_make_compiled_string_description(char *name );
 void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers );
int zend_get_class_fetch_type(char *class_name, uint class_name_len);

typedef zend_bool (*zend_auto_global_callback)(char *name, uint name_len );
typedef struct _zend_auto_global {
 char *name;
 uint name_len;
 zend_auto_global_callback auto_global_callback;
 zend_bool armed;
} zend_auto_global;

void zend_auto_global_dtor(zend_auto_global *auto_global);
 int zend_register_auto_global(char *name, uint name_len, zend_auto_global_callback auto_global_callback );
 zend_bool zend_is_auto_global(char *name, uint name_len );
 int zend_auto_global_disable_jit(char *varname, zend_uint varname_length );

int zendlex(znode *zendlval );



# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_vm_opcodes.h" 1
# 569 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h" 2
# 688 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_compile.h"

# 27 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_modules.h" 2
# 35 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_modules.h"
extern struct _zend_arg_info first_arg_force_ref[2];
extern struct _zend_arg_info second_arg_force_ref[3];
extern struct _zend_arg_info third_arg_force_ref[4];
extern struct _zend_arg_info fourth_arg_force_ref[5];
extern struct _zend_arg_info fifth_arg_force_ref[6];
extern struct _zend_arg_info all_args_by_ref[1];
# 73 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_modules.h"
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
typedef struct _zend_module_dep zend_module_dep;

struct _zend_module_entry {
 unsigned short size;
 unsigned int zend_api;
 unsigned char zend_debug;
 unsigned char zts;
 struct _zend_ini_entry *ini_entry;
 struct _zend_module_dep *deps;
 char *name;
 struct _zend_function_entry *functions;
 int (*module_startup_func)(int type, int module_number );
 int (*module_shutdown_func)(int type, int module_number );
 int (*request_startup_func)(int type, int module_number );
 int (*request_shutdown_func)(int type, int module_number );
 void (*info_func)(zend_module_entry *zend_module );
 char *version;
 size_t globals_size;



 void* globals_ptr;

 void (*globals_ctor)(void *global );
 void (*globals_dtor)(void *global );
 int (*post_deactivate_func)(void);
 int module_started;
 unsigned char type;
 void *handle;
 int module_number;
};
# 119 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_modules.h"
struct _zend_module_dep {
 char *name;
 char *rel;
 char *version;
 unsigned char type;
};

extern HashTable module_registry;

void module_destructor(zend_module_entry *module);
int module_registry_cleanup(zend_module_entry *module );
int module_registry_request_startup(zend_module_entry *module );
int module_registry_unload_temp(zend_module_entry *module );
# 27 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_list.h" 1
# 28 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_list.h"





typedef struct _zend_rsrc_list_entry {
 void *ptr;
 int type;
 int refcount;
} zend_rsrc_list_entry;

typedef void (*rsrc_dtor_func_t)(zend_rsrc_list_entry *rsrc );


typedef struct _zend_rsrc_list_dtors_entry {

 void (*list_dtor)(void *);
 void (*plist_dtor)(void *);


 rsrc_dtor_func_t list_dtor_ex;
 rsrc_dtor_func_t plist_dtor_ex;

 char *type_name;

 int module_number;
 int resource_id;
 unsigned char type;
} zend_rsrc_list_dtors_entry;



 int zend_register_list_destructors(void (*ld)(void *), void (*pld)(void *), int module_number);
 int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, char *type_name, int module_number);

void list_entry_destructor(void *ptr);
void plist_entry_destructor(void *ptr);

void zend_clean_module_rsrc_dtors(int module_number );
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_destroy_rsrc_list(HashTable *ht );
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

 int zend_list_insert(void *ptr, int type);
 int _zend_list_addref(int id );
 int _zend_list_delete(int id );
 void *_zend_list_find(int id, int *type );





 int zend_register_resource(zval *rsrc_result, void *rsrc_pointer, int rsrc_type);
 void *zend_fetch_resource(zval **passed_id , int default_id, char *resource_type_name, int *found_resource_type, int num_resource_types, ...);

 char *zend_rsrc_list_get_rsrc_type(int resource );
 int zend_fetch_list_dtor_id(char *type_name);

extern int le_index_ptr;
# 110 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_list.h"

# 28 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




# 1 "/usr/include/bits/errno.h" 1 3 4
# 24 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/bits/errno.h" 2 3 4
# 50 "/usr/include/bits/errno.h" 3 4

# 50 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 58 "/usr/include/errno.h" 3 4

# 26 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 64 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 28 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 2





# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_strtod.h" 1
# 27 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_strtod.h"

 
# 28 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_strtod.h"
        void zend_freedtoa(char *s);
 char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
 double zend_strtod(const char *s00, char **se);
 double zend_hex_strtod(const char *str, char **endptr);
 int zend_startup_strtod(void);
 int zend_shutdown_strtod(void);

# 34 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 2
# 44 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
static const char long_min_digits[] = "9223372036854775808";







 int add_function(zval *result, zval *op1, zval *op2 );
 int sub_function(zval *result, zval *op1, zval *op2 );
 int mul_function(zval *result, zval *op1, zval *op2 );
 int div_function(zval *result, zval *op1, zval *op2 );
 int mod_function(zval *result, zval *op1, zval *op2 );
 int boolean_xor_function(zval *result, zval *op1, zval *op2 );
 int boolean_not_function(zval *result, zval *op1 );
 int bitwise_not_function(zval *result, zval *op1 );
 int bitwise_or_function(zval *result, zval *op1, zval *op2 );
 int bitwise_and_function(zval *result, zval *op1, zval *op2 );
 int bitwise_xor_function(zval *result, zval *op1, zval *op2 );
 int shift_left_function(zval *result, zval *op1, zval *op2 );
 int shift_right_function(zval *result, zval *op1, zval *op2 );
 int concat_function(zval *result, zval *op1, zval *op2 );

 int is_equal_function(zval *result, zval *op1, zval *op2 );
 int is_identical_function(zval *result, zval *op1, zval *op2 );
 int is_not_identical_function(zval *result, zval *op1, zval *op2 );
 int is_not_equal_function(zval *result, zval *op1, zval *op2 );
 int is_smaller_function(zval *result, zval *op1, zval *op2 );
 int is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 );

 zend_bool instanceof_function_ex(zend_class_entry *instance_ce, zend_class_entry *ce, zend_bool interfaces_only );
 zend_bool instanceof_function(zend_class_entry *instance_ce, zend_class_entry *ce );

# 93 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
static inline zend_uchar is_numeric_string(const char *str, int length, long *lval, double *dval, int allow_errors)
{
 const char *ptr;
 int base = 10, digits = 0, dp_or_e = 0;
 double local_dval;
 zend_uchar type;

 if (!length) {
  return 0;
 }



 while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f') {
  str++;
  length--;
 }
 ptr = str;

 if (*ptr == '-' || *ptr == '+') {
  ptr++;
 }

 if (((*ptr) >= '0' && (*ptr) <= '9')) {


  if (length > 2 && *str == '0' && (str[1] == 'x' || str[1] == 'X')) {
   base = 16;
   ptr += 2;
  }


  while (*ptr == '0') {
   ptr++;
  }




  for (type = 1; !(digits >= 20 && (dval || allow_errors == 1)); digits++, ptr++) {
check_digits:
   if (((*ptr) >= '0' && (*ptr) <= '9') || (base == 16 && (((*ptr) >= 'A' && (*ptr) <= 'F') || ((*ptr) >= 'a' && (*ptr) <= 'f')))) {
    continue;
   } else if (base == 10) {
    if (*ptr == '.' && dp_or_e < 1) {
     goto process_double;
    } else if ((*ptr == 'e' || *ptr == 'E') && dp_or_e < 2) {
     const char *e = ptr + 1;

     if (*e == '-' || *e == '+') {
      ptr = e++;
     }
     if (((*e) >= '0' && (*e) <= '9')) {
      goto process_double;
     }
    }
   }

   break;
  }

  if (base == 10) {
   if (digits >= 20) {
    dp_or_e = -1;
    goto process_double;
   }
  } else if (!(digits < 8 * 2 || (digits == 8 * 2 && ptr[-digits] <= '7'))) {
   if (dval) {
    local_dval = zend_hex_strtod(str, (char **)&ptr);
   }
   type = 2;
  }
 } else if (*ptr == '.' && ((ptr[1]) >= '0' && (ptr[1]) <= '9')) {
process_double:
  type = 2;



  if (dval) {
   local_dval = zend_strtod(str, (char **)&ptr);
  } else if (allow_errors != 1 && dp_or_e != -1) {
   dp_or_e = (*ptr++ == '.') ? 1 : 2;
   goto check_digits;
  }
 } else {
  return 0;
 }

 if (ptr != str + length) {
  if (!allow_errors) {
   return 0;
  }
  if (allow_errors == -1) {
   zend_error((1<<3L), "A non well formed numeric value encountered");
  }
 }

 if (type == 1) {
  if (digits == 20 - 1) {
   int cmp = 
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) && __builtin_constant_p (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) && (__s1_len = strlen (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ), __s2_len = strlen (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ), (!((size_t)(const void *)((
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) + 1) - (size_t)(const void *)(
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) + 1) - (size_t)(const void *)(
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) == 1) || __s2_len >= 4)) ? __builtin_strcmp (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            , 
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) : (__builtin_constant_p (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) && ((size_t)(const void *)((
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) + 1) - (size_t)(const void *)(
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) == 1) && (__s1_len = strlen (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ), __s1_len < 4) ? (__builtin_constant_p (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) && ((size_t)(const void *)((
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) + 1) - (size_t)(const void *)(
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) == 1) ? __builtin_strcmp (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            , 
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ); int __result = (((const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) && ((size_t)(const void *)((
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) + 1) - (size_t)(const void *)(
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) == 1) && (__s2_len = strlen (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ), __s2_len < 4) ? (__builtin_constant_p (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) && ((size_t)(const void *)((
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) + 1) - (size_t)(const void *)(
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) == 1) ? __builtin_strcmp (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            , 
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ); int __result = (((const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            ))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            &ptr[-digits]
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            , 
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            long_min_digits
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
            )))); })
# 192 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
                                                  ;

   if (!(cmp < 0 || (cmp == 0 && *str == '-'))) {
    if (dval) {
     *dval = zend_strtod(str, 
# 196 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
                             ((void *)0)
# 196 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
                                 );
    }

    return 2;
   }
  }

  if (lval) {
   *lval = strtol(str, 
# 204 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
                      ((void *)0)
# 204 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
                          , base);
  }

  return 1;
 } else {
  if (dval) {
   *dval = local_dval;
  }

  return 2;
 }
}

static inline char *
zend_memnstr(char *haystack, char *needle, int needle_len, char *end)
{
 char *p = haystack;
 char ne = needle[needle_len-1];

 end -= needle_len;

 while (p <= end) {
  if ((p = (char *)memchr(p, *needle, (end-p+1))) && ne == p[needle_len-1]) {
   if (!memcmp(needle, p, needle_len-1)) {
    return p;
   }
  }

  if (p == 
# 232 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
          ((void *)0)
# 232 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
              ) {
   return 
# 233 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
         ((void *)0)
# 233 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
             ;
  }

  p++;
 }

 return 
# 239 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
       ((void *)0)
# 239 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
           ;
}

static inline void *zend_memrchr(const void *s, int c, size_t n)
{
 register unsigned char *e;

 if (n <= 0) {
  return 
# 247 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
        ((void *)0)
# 247 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
            ;
 }

 for (e = (unsigned char *)s + n - 1; e >= (unsigned char *)s; e--) {
  if (*e == (unsigned char)c) {
   return (void *)e;
  }
 }

 return 
# 256 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 3 4
       ((void *)0)
# 256 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h"
           ;
}


 int increment_function(zval *op1);
 int decrement_function(zval *op2);

 void convert_scalar_to_number(zval *op );
 void _convert_to_string(zval *op );
 void convert_to_long(zval *op);
 void convert_to_double(zval *op);
 void convert_to_long_base(zval *op, int base);
 void convert_to_null(zval *op);
 void convert_to_boolean(zval *op);
 void convert_to_array(zval *op);
 void convert_to_object(zval *op);
 void multi_convert_to_long_ex(int argc, ...);
 void multi_convert_to_double_ex(int argc, ...);
 void multi_convert_to_string_ex(int argc, ...);
 int add_char_to_string(zval *result, zval *op1, zval *op2);
 int add_string_to_string(zval *result, zval *op1, zval *op2);


 double zend_string_to_double(const char *number, zend_uint length);

 int zval_is_true(zval *op);
 int compare_function(zval *result, zval *op1, zval *op2 );
 int numeric_compare_function(zval *result, zval *op1, zval *op2 );
 int string_compare_function(zval *result, zval *op1, zval *op2 );

 int string_locale_compare_function(zval *result, zval *op1, zval *op2 );


 void zend_str_tolower(char *str, unsigned int length);
 char *zend_str_tolower_copy(char *dest, const char *source, unsigned int length);


static inline char *
zend_str_tolower_dup(const char *source, unsigned int length)
{
 return zend_str_tolower_copy((char *)_emalloc((length+1) ), source, length);
}


 int zend_binary_zval_strcmp(zval *s1, zval *s2);
 int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
 int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
 int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
 int zend_binary_strcmp(char *s1, uint len1, char *s2, uint len2);
 int zend_binary_strncmp(char *s1, uint len1, char *s2, uint len2, uint length);
 int zend_binary_strcasecmp(char *s1, uint len1, char *s2, uint len2);
 int zend_binary_strncasecmp(char *s1, uint len1, char *s2, uint len2, uint length);

 void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
 void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
 void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
 void zend_compare_objects(zval *result, zval *o1, zval *o2 );

 int zend_atoi(const char *str, int str_len);

 void zend_locale_sprintf_double(zval *op );

# 29 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_execute.h" 1
# 30 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_execute.h"
typedef union _temp_variable {
 zval tmp_var;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
 } var;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
  zval *str;
  zend_uint offset;
 } str_offset;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
  HashPointer fe_pos;
 } fe;
 zend_class_entry *class_entry;
} temp_variable;



 extern void (*zend_execute)(zend_op_array *op_array );
 extern void (*zend_execute_internal)(zend_execute_data *execute_data_ptr, int return_value_used );

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
 void execute(zend_op_array *op_array );
 void execute_internal(zend_execute_data *execute_data_ptr, int return_value_used );
 int zend_is_true(zval *op);

static inline void safe_free_zval_ptr_rel(zval *p )
{
 ;

 if (p!=(executor_globals.uninitialized_zval_ptr)) {
  _efree((p) );
 }
}
 int zend_lookup_class(char *name, int name_length, zend_class_entry ***ce );
 int zend_lookup_class_ex(char *name, int name_length, int use_autoload, zend_class_entry ***ce );
 int zend_eval_string(char *str, zval *retval_ptr, char *string_name );
 int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions );

static inline int i_zend_is_true(zval *op)
{
 int result;

 switch ((*op).type) {
  case 0:
   result = 0;
   break;
  case 1:
  case 3:
  case 7:
   result = ((*op).value.lval?1:0);
   break;
  case 2:
   result = ((*op).value.dval ? 1 : 0);
   break;
  case 6:
   if ((*op).value.str.len == 0
    || ((*op).value.str.len==1 && (*op).value.str.val[0]=='0')) {
    result = 0;
   } else {
    result = 1;
   }
   break;
  case 4:
   result = (zend_hash_num_elements((*op).value.ht)?1:0);
   break;
  case 5:
   if(((*op).type == 5 && (((*op)).value.obj.handlers->get_class_entry != 
# 106 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_execute.h" 3 4
     ((void *)0)
# 106 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_execute.h"
     ))) {
    ;

    if ((*op).value.obj.handlers->cast_object) {
     zval tmp;
     if ((*op).value.obj.handlers->cast_object(op, &tmp, 3 ) == 0) {
      result = (tmp).value.lval;
      break;
     }
    } else if ((*op).value.obj.handlers->get) {
     zval *tmp = (*op).value.obj.handlers->get(op );
     if((*tmp).type != 5) {

      convert_to_boolean(tmp);
      result = (*tmp).value.lval;
      _zval_ptr_dtor((&tmp) );
      break;
     }
    }

    if((executor_globals.ze1_compatibility_mode)) {
     result = (zend_hash_num_elements(((*op)).value.obj.handlers->get_properties(&(*op) ))?1:0);
    } else {
     result = 1;
    }
   } else {
    result = 1;
   }
   break;
  default:
   result = 0;
   break;
 }
 return result;
}

 int zval_update_constant(zval **pp, void *arg );
 int zval_update_constant_ex(zval **pp, void *arg, zend_class_entry *scope );


static inline void zend_ptr_stack_clear_multiple(void)
{
 void **p = (executor_globals.argument_stack).top_element-2;
 int delete_count = (ulong) *p;

 (executor_globals.argument_stack).top -= (delete_count+2);
 while (--delete_count>=0) {
  zval *q = *(zval **)(--p);
  *p = 
# 154 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_execute.h" 3 4
      ((void *)0)
# 154 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_execute.h"
          ;
  _zval_ptr_dtor((&q) );
 }
 (executor_globals.argument_stack).top_element = p;
}

static inline int zend_ptr_stack_get_arg(int requested_arg, void **data )
{
 void **p = (executor_globals.argument_stack).top_element-2;
 int arg_count = (ulong) *p;

 if (requested_arg>arg_count) {
  return -1;
 }
 *data = (p-arg_count+requested_arg-1);
 return 0;
}

void execute_new_code(void);



 char *get_active_class_name(char **space );
 char *get_active_function_name(void);
 char *zend_get_executed_filename(void);
 uint zend_get_executed_lineno(void);
 zend_bool zend_is_executing(void);

 void zend_set_timeout(long seconds);
 void zend_unset_timeout(void);
 void zend_timeout(int dummy);
 zend_class_entry *zend_fetch_class(char *class_name, uint class_name_len, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );
# 205 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_execute.h"
 zval** zend_get_compiled_variable_value(zend_execute_data *execute_data_ptr, zend_uint var);







 int zend_set_user_opcode_handler(zend_uchar opcode, opcode_handler_t handler);
 opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

 zval *zend_get_zval_ptr(znode *node, temp_variable *Ts, zend_free_op *should_free, int type );
 zval **zend_get_zval_ptr_ptr(znode *node, temp_variable *Ts, zend_free_op *should_free, int type );

 int zend_do_fcall(zend_execute_data *execute_data );


# 31 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 char *fname;
 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_arg_info *arg_info;
 zend_uint num_args;
 zend_uint flags;
} zend_function_entry;
# 168 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h"
int zend_next_free_module(void);


 int zend_get_parameters(int ht, int param_count, ...);
 int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
 int zend_get_parameters_ex(int param_count, ...);
 int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


 int zend_copy_parameters_array(int param_count, zval *argument_array );
# 188 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h"
 int zend_parse_parameters(int num_args , char *type_spec, ...);
 int zend_parse_parameters_ex(int flags, int num_args , char *type_spec, ...);
 char *zend_zval_type_name(zval *arg);

 int zend_parse_method_parameters(int num_args , zval *this_ptr, char *type_spec, ...);
 int zend_parse_method_parameters_ex(int flags, int num_args , zval *this_ptr, char *type_spec, ...);



 int zend_register_functions(zend_class_entry *scope, zend_function_entry *functions, HashTable *function_table, int type );
 void zend_unregister_functions(zend_function_entry *functions, int count, HashTable *function_table );
 int zend_startup_module(zend_module_entry *module_entry);
 zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry );
 zend_module_entry* zend_register_module_ex(zend_module_entry *module );
 int zend_startup_module_ex(zend_module_entry *module );
 int zend_startup_modules(void);
 void zend_check_magic_method_implementation(zend_class_entry *ce, zend_function *fptr, int error_type );

 zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry );
 zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce, char *parent_name );
 zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry );
 void zend_class_implements(zend_class_entry *class_entry , int num_interfaces, ...);

 int zend_disable_function(char *function_name, uint function_name_length );
 int zend_disable_class(char *class_name, uint class_name_length );

 void zend_wrong_param_count(void);







 zend_bool zend_is_callable_ex(zval *callable, uint check_flags, char **callable_name, int *callable_name_len, zend_class_entry **ce_ptr, zend_function **fptr_ptr, zval ***zobj_ptr_ptr );
 zend_bool zend_is_callable(zval *callable, uint check_flags, char **callable_name);
 zend_bool zend_make_callable(zval *callable, char **callable_name );
 char *zend_get_module_version(char *module_name);
 int zend_get_module_started(char *module_name);
 int zend_declare_property(zend_class_entry *ce, char *name, int name_length, zval *property, int access_type );
 int zend_declare_property_ex(zend_class_entry *ce, char *name, int name_length, zval *property, int access_type, char *doc_comment, int doc_comment_len );
 int zend_declare_property_null(zend_class_entry *ce, char *name, int name_length, int access_type );
 int zend_declare_property_bool(zend_class_entry *ce, char *name, int name_length, long value, int access_type );
 int zend_declare_property_long(zend_class_entry *ce, char *name, int name_length, long value, int access_type );
 int zend_declare_property_double(zend_class_entry *ce, char *name, int name_length, double value, int access_type );
 int zend_declare_property_string(zend_class_entry *ce, char *name, int name_length, char *value, int access_type );
 int zend_declare_property_stringl(zend_class_entry *ce, char *name, int name_length, char *value, int value_len, int access_type );

 int zend_declare_class_constant(zend_class_entry *ce, char *name, size_t name_length, zval *value );
 int zend_declare_class_constant_null(zend_class_entry *ce, char *name, size_t name_length );
 int zend_declare_class_constant_long(zend_class_entry *ce, char *name, size_t name_length, long value );
 int zend_declare_class_constant_bool(zend_class_entry *ce, char *name, size_t name_length, zend_bool value );
 int zend_declare_class_constant_double(zend_class_entry *ce, char *name, size_t name_length, double value );
 int zend_declare_class_constant_stringl(zend_class_entry *ce, char *name, size_t name_length, char *value, size_t value_length );
 int zend_declare_class_constant_string(zend_class_entry *ce, char *name, size_t name_length, char *value );

 void zend_update_class_constants(zend_class_entry *class_type );
 void zend_update_property(zend_class_entry *scope, zval *object, char *name, int name_length, zval *value );
 void zend_update_property_null(zend_class_entry *scope, zval *object, char *name, int name_length );
 void zend_update_property_bool(zend_class_entry *scope, zval *object, char *name, int name_length, long value );
 void zend_update_property_long(zend_class_entry *scope, zval *object, char *name, int name_length, long value );
 void zend_update_property_double(zend_class_entry *scope, zval *object, char *name, int name_length, double value );
 void zend_update_property_string(zend_class_entry *scope, zval *object, char *name, int name_length, char *value );
 void zend_update_property_stringl(zend_class_entry *scope, zval *object, char *name, int name_length, char *value, int value_length );

 int zend_update_static_property(zend_class_entry *scope, char *name, int name_length, zval *value );
 int zend_update_static_property_null(zend_class_entry *scope, char *name, int name_length );
 int zend_update_static_property_bool(zend_class_entry *scope, char *name, int name_length, long value );
 int zend_update_static_property_long(zend_class_entry *scope, char *name, int name_length, long value );
 int zend_update_static_property_double(zend_class_entry *scope, char *name, int name_length, double value );
 int zend_update_static_property_string(zend_class_entry *scope, char *name, int name_length, char *value );
 int zend_update_static_property_stringl(zend_class_entry *scope, char *name, int name_length, char *value, int value_length );

 zval *zend_read_property(zend_class_entry *scope, zval *object, char *name, int name_length, zend_bool silent );

 zval *zend_read_static_property(zend_class_entry *scope, char *name, int name_length, zend_bool silent );

 zend_class_entry *zend_get_class_entry(zval *zobject );
 int zend_get_object_classname(zval *object, char **class_name, zend_uint *class_name_len );
 char *zend_get_type_by_const(int type);
# 286 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h"
 int _array_init(zval *arg );
 int _object_init(zval *arg );
 int _object_init_ex(zval *arg, zend_class_entry *ce );
 int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );

 void zend_merge_properties(zval *obj, HashTable *properties, int destroy_ht );


 int add_assoc_function(zval *arg, char *key, void (*function_ptr)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used ));

 int add_assoc_long_ex(zval *arg, char *key, uint key_len, long n);
 int add_assoc_null_ex(zval *arg, char *key, uint key_len);
 int add_assoc_bool_ex(zval *arg, char *key, uint key_len, int b);
 int add_assoc_resource_ex(zval *arg, char *key, uint key_len, int r);
 int add_assoc_double_ex(zval *arg, char *key, uint key_len, double d);
 int add_assoc_string_ex(zval *arg, char *key, uint key_len, char *str, int duplicate);
 int add_assoc_stringl_ex(zval *arg, char *key, uint key_len, char *str, uint length, int duplicate);
 int add_assoc_zval_ex(zval *arg, char *key, uint key_len, zval *value);
# 320 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h"
 int add_index_long(zval *arg, ulong idx, long n);
 int add_index_null(zval *arg, ulong idx);
 int add_index_bool(zval *arg, ulong idx, int b);
 int add_index_resource(zval *arg, ulong idx, int r);
 int add_index_double(zval *arg, ulong idx, double d);
 int add_index_string(zval *arg, ulong idx, char *str, int duplicate);
 int add_index_stringl(zval *arg, ulong idx, char *str, uint length, int duplicate);
 int add_index_zval(zval *arg, ulong index, zval *value);

 int add_next_index_long(zval *arg, long n);
 int add_next_index_null(zval *arg);
 int add_next_index_bool(zval *arg, int b);
 int add_next_index_resource(zval *arg, int r);
 int add_next_index_double(zval *arg, double d);
 int add_next_index_string(zval *arg, char *str, int duplicate);
 int add_next_index_stringl(zval *arg, char *str, uint length, int duplicate);
 int add_next_index_zval(zval *arg, zval *value);

 int add_get_assoc_string_ex(zval *arg, char *key, uint key_len, char *str, void **dest, int duplicate);
 int add_get_assoc_stringl_ex(zval *arg, char *key, uint key_len, char *str, uint length, void **dest, int duplicate);




 int add_get_index_long(zval *arg, ulong idx, long l, void **dest);
 int add_get_index_double(zval *arg, ulong idx, double d, void **dest);
 int add_get_index_string(zval *arg, ulong idx, char *str, void **dest, int duplicate);
 int add_get_index_stringl(zval *arg, ulong idx, char *str, uint length, void **dest, int duplicate);

 int add_property_long_ex(zval *arg, char *key, uint key_len, long l );
 int add_property_null_ex(zval *arg, char *key, uint key_len );
 int add_property_bool_ex(zval *arg, char *key, uint key_len, int b );
 int add_property_resource_ex(zval *arg, char *key, uint key_len, long r );
 int add_property_double_ex(zval *arg, char *key, uint key_len, double d );
 int add_property_string_ex(zval *arg, char *key, uint key_len, char *str, int duplicate );
 int add_property_stringl_ex(zval *arg, char *key, uint key_len, char *str, uint length, int duplicate );
 int add_property_zval_ex(zval *arg, char *key, uint key_len, zval *value );
# 368 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h"
 int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
 int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );


typedef struct _zend_fcall_info {
 size_t size;
 HashTable *function_table;
 zval *function_name;
 HashTable *symbol_table;
 zval **retval_ptr_ptr;
 zend_uint param_count;
 zval ***params;
 zval **object_pp;
 zend_bool no_separation;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zval **object_pp;
} zend_fcall_info_cache;


 extern zend_fcall_info_cache empty_fcall_info_cache;
# 402 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h"
 int zend_fcall_info_init(zval *callable, zend_fcall_info *fci, zend_fcall_info_cache *fcc );




 int zend_fcall_info_args(zend_fcall_info *fci, zval *args );




 int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval **retval, zval *args );

 int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache );


 int zend_set_hash_symbol(zval *symbol, char *name, int name_length,
                                  zend_bool is_ref, int num_symbol_tables, ...);

 int zend_delete_global_variable(char *name, int name_len );

 void zend_reset_all_cv(HashTable *symbol_table );



 void zif_display_disabled_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void zif_display_disabled_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 631 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_API.h"

# 39 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 74 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_regex.h" 1
# 32 "/home/repair/benchmarks/tse-2012/php/src/main/php_regex.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/regex/regex_extra.h" 1
# 33 "/home/repair/benchmarks/tse-2012/php/src/main/php_regex.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/regex/regex.h" 1
# 17 "/home/repair/benchmarks/tse-2012/php/src/regex/regex.h"
typedef off_t regoff_t;
typedef struct {
 int re_magic;
 size_t re_nsub;
 const char *re_endp;
 struct re_guts *re_g;
} regex_t;
typedef struct {
 regoff_t rm_so;
 regoff_t rm_eo;
} regmatch_t;



int php_regcomp(regex_t *, const char *, int);
# 62 "/home/repair/benchmarks/tse-2012/php/src/regex/regex.h"
size_t php_regerror(int, const regex_t *, char *, size_t);



int php_regexec(const regex_t *, const char *, size_t, regmatch_t [], int);
# 76 "/home/repair/benchmarks/tse-2012/php/src/regex/regex.h"
void php_regfree(regex_t *);
# 34 "/home/repair/benchmarks/tse-2012/php/src/main/php_regex.h" 2



# 1 "/home/repair/benchmarks/tse-2012/php/src/regex/regex_extra.h" 1
# 38 "/home/repair/benchmarks/tse-2012/php/src/main/php_regex.h" 2
# 75 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 84 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 85 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 100 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/build-defs.h" 1
# 101 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 125 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"

 size_t php_strlcpy(char *dst, const char *src, size_t siz);







 size_t php_strlcat(char *dst, const char *src, size_t siz);

# 161 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
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
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 214 "/usr/include/ctype.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 162 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2

# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 205 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 206 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 22 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 2 3 4
# 210 "/usr/include/unistd.h" 2 3 4
# 229 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 230 "/usr/include/unistd.h" 2 3 4
# 258 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 270 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 290 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 307 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 337 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 356 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 379 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 420 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 435 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 447 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 472 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 514 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 528 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 546 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 601 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 24 "/usr/include/bits/confname.h" 3 4
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

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



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

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 613 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 663 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 703 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 759 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 874 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 875 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 972 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 996 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1040 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1061 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1084 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1154 "/usr/include/unistd.h" 3 4

# 164 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 174 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_hash.h" 1
# 175 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php3_compat.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/main/php3_compat.h"

# 24 "/home/repair/benchmarks/tse-2012/php/src/main/php3_compat.h"
typedef zval pval;
# 176 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_alloc.h" 1
# 177 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_stack.h" 1
# 178 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 190 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/safe_mode.h" 1
# 35 "/home/repair/benchmarks/tse-2012/php/src/main/safe_mode.h"

 int php_checkuid(const char *filename, const char *fopen_mode, int mode);
 int php_checkuid_ex(const char *filename, const char *fopen_mode, int mode, int flags);
 char *php_get_current_user(void);

# 191 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2






# 1 "/home/repair/benchmarks/tse-2012/php/src/regex/regex_extra.h" 1
# 198 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2






# 1 "/usr/include/pwd.h" 1 3 4
# 27 "/usr/include/pwd.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 33 "/usr/include/pwd.h" 2 3 4
# 49 "/usr/include/pwd.h" 3 4

# 49 "/usr/include/pwd.h" 3 4
struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
# 72 "/usr/include/pwd.h" 3 4
extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
# 94 "/usr/include/pwd.h" 3 4
extern struct passwd *fgetpwent (FILE *__stream) __attribute__ ((__nonnull__ (1)));







extern int putpwent (const struct passwd *__restrict __p,
       FILE *__restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name) __attribute__ ((__nonnull__ (1)));
# 139 "/usr/include/pwd.h" 3 4
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         __attribute__ ((__nonnull__ (1, 2, 4)));


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         __attribute__ ((__nonnull__ (2, 3, 5)));

extern int getpwnam_r (const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         __attribute__ ((__nonnull__ (1, 2, 3, 5)));
# 166 "/usr/include/pwd.h" 3 4
extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result)
   __attribute__ ((__nonnull__ (1, 2, 3, 5)));
# 187 "/usr/include/pwd.h" 3 4

# 205 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/usr/include/sys/param.h" 1 3 4
# 23 "/usr/include/sys/param.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 24 "/usr/include/sys/param.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 1 3 4
# 27 "/usr/include/sys/param.h" 2 3 4

# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 102 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 116 "/usr/include/bits/sigset.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int __sigismember (const __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return (__set->__val[__word] & __mask) ? 1 : 0; }
extern __inline __attribute__ ((__gnu_inline__)) int __sigaddset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] |= __mask), 0); }
extern __inline __attribute__ ((__gnu_inline__)) int __sigdelset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] &= ~__mask), 0); }
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 75 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 76 "/usr/include/signal.h" 2 3 4




# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 24 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
     struct
       {
  void *_lower;
  void *_upper;
       } si_addr_bnd;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 160 "/usr/include/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
# 264 "/usr/include/bits/siginfo.h" 3 4
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 320 "/usr/include/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/signal.h" 3 4


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 114 "/usr/include/signal.h" 3 4

# 127 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 187 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 207 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 243 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 24 "/usr/include/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 244 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
# 301 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 307 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 25 "/usr/include/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 324 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 22 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 2 3 4
# 31 "/usr/include/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];
# 92 "/usr/include/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 327 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
# 362 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 30 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));
# 363 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));




# 29 "/usr/include/sys/param.h" 2 3 4


# 1 "/usr/include/bits/param.h" 1 3 4
# 28 "/usr/include/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 1 "/usr/include/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/bits/param.h" 2 3 4
# 32 "/usr/include/sys/param.h" 2 3 4
# 206 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2




# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 1 3 4
# 211 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 233 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"

# 1 "/home/repair/benchmarks/tse-2012/php/src/main/snprintf.h" 1
# 68 "/home/repair/benchmarks/tse-2012/php/src/main/snprintf.h"

# 68 "/home/repair/benchmarks/tse-2012/php/src/main/snprintf.h"
typedef int bool_int;

typedef enum {
 NO = 0, YES = 1
} boolean_e;



 int ap_php_snprintf(char *, size_t, const char *, ...) __attribute__ ((format(printf, 3, 4)));
 int ap_php_vsnprintf(char *, size_t, const char *, va_list ap) __attribute__ ((format(printf, 3, 0)));
 int php_sprintf (char* s, const char* format, ...) __attribute__ ((format(printf, 2, 3)));
 char * php_gcvt(double value, int ndigit, char dec_point, char exponent, char *buf);
 char * php_conv_fp(register char format, register double num,
   boolean_e add_dp, int precision, char dec_point, bool_int * is_negative, char *buf, int *len);


# 100 "/home/repair/benchmarks/tse-2012/php/src/main/snprintf.h"
typedef enum {
 LM_STD = 0,







 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE
} length_modifier_e;
# 125 "/home/repair/benchmarks/tse-2012/php/src/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register int *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register int *len);
# 235 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/main/spprintf.h" 1
# 39 "/home/repair/benchmarks/tse-2012/php/src/main/spprintf.h"

 int spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

 int vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));

# 237 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 260 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
extern char **environ;
# 271 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"

void phperror(char *error);
 int php_write(void *buf, uint size );
 int php_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)))
    ;
 void php_log_err(char *log_message );
int Debug(char *format, ...) __attribute__ ((format(printf, 1, 2)));
int cfgparse(void);




typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} error_handling_t;


 void php_set_error_handling(error_handling_t error_handling, zend_class_entry *exception_class );


 void php_verror(const char *docref, const char *params, int type, const char *format, va_list args ) __attribute__ ((format(printf, 4, 0)));
# 302 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
 void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
 void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
 void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));

# 322 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"

int php_register_internal_extensions(void);

int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );

 void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);

 int cfg_get_long(char *varname, long *result);
 int cfg_get_double(char *varname, double *result);
 int cfg_get_string(char *varname, char **result);

 void php_com_initialize(void);

# 387 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_output.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/main/php_output.h"
typedef void (*php_output_handler_func_t)(char *output, uint output_len, char **handled_output, uint *handled_output_len, int mode );


 void php_output_startup(void);
 void php_output_activate(void);
 void php_output_set_status(zend_bool status );
 void php_output_register_constants(void);
 int php_default_output_func(const char *str, uint str_len );
 int php_ub_body_write(const char *str, uint str_length );
 int php_ub_body_write_no_header(const char *str, uint str_length );
 int php_body_write(const char *str, uint str_length );
 int php_header_write(const char *str, uint str_length );
 int php_start_ob_buffer(zval *output_handler, uint chunk_size, zend_bool erase );
 int php_start_ob_buffer_named(const char *output_handler_name, uint chunk_size, zend_bool erase );
 void php_end_ob_buffer(zend_bool send_buffer, zend_bool just_flush );
 void php_end_ob_buffers(zend_bool send_buffer );
 int php_ob_get_buffer(zval *p );
 int php_ob_get_length(zval *p );
 void php_start_implicit_flush(void);
 void php_end_implicit_flush(void);
 char *php_get_output_start_filename(void);
 int php_get_output_start_lineno(void);
 void php_ob_set_internal_handler(php_output_handler_func_t internal_output_handler, uint buffer_size, char *handler_name, zend_bool erase );
 int php_ob_handler_used(char *handler_name );
 int php_ob_init_conflict(char *handler_new, char *handler_set );
 int php_ob_get_buffer(zval *p );
 int php_ob_get_length(zval *p );


void zif_ob_start(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_end_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_end_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_length(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_level(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_status(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_implicit_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_list_handlers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

typedef struct _php_ob_buffer {
 char *buffer;
 uint size;
 uint text_length;
 int block_size;
 uint chunk_size;
 int status;
 zval *output_handler;
 php_output_handler_func_t internal_output_handler;
 char *internal_output_handler_buffer;
 uint internal_output_handler_buffer_size;
 char *handler_name;
 zend_bool erase;
} php_ob_buffer;

typedef struct _php_output_globals {
 int (*php_body_write)(const char *str, uint str_length );
 int (*php_header_write)(const char *str, uint str_length );
 php_ob_buffer active_ob_buffer;
 unsigned char implicit_flush;
 char *output_start_filename;
 int output_start_lineno;
 zend_stack ob_buffers;
 int ob_nesting_level;
 zend_bool ob_lock;
 zend_bool disable_output;
} php_output_globals;






 extern php_output_globals output_globals;
# 110 "/home/repair/benchmarks/tse-2012/php/src/main/php_output.h"
void zif_output_add_rewrite_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_output_reset_rewrite_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 388 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 403 "/home/repair/benchmarks/tse-2012/php/src/main/php.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
# 1 "/usr/include/sys/time.h" 1 3 4
# 25 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 26 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4
# 37 "/usr/include/sys/time.h" 3 4

# 55 "/usr/include/sys/time.h" 3 4

# 55 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 71 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ , __leaf__));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ , __leaf__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ , __leaf__));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ , __leaf__));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 189 "/usr/include/sys/time.h" 3 4

# 26 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 2


# 1 "/usr/include/sys/stat.h" 1 3 4
# 36 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 37 "/usr/include/sys/stat.h" 2 3 4
# 102 "/usr/include/sys/stat.h" 3 4


# 1 "/usr/include/bits/stat.h" 1 3 4
# 46 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/bits/stat.h" 3 4
  };
# 105 "/usr/include/sys/stat.h" 2 3 4
# 208 "/usr/include/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 237 "/usr/include/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 262 "/usr/include/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 283 "/usr/include/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 320 "/usr/include/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 398 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 441 "/usr/include/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));




extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) stat (const char *__path, struct stat *__statbuf)
{
  return __xstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) lstat (const char *__path, struct stat *__statbuf)
{
  return __lxstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstat (int __fd, struct stat *__statbuf)
{
  return __fxstat (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstatat (int __fd, const char *__filename, struct stat *__statbuf, int __flag)

{
  return __fxstatat (1, __fd, __filename, __statbuf, __flag);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) mknod (const char *__path, __mode_t __mode, __dev_t __dev)
{
  return __xmknod (0, __path, __mode, &__dev);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) mknodat (int __fd, const char *__path, __mode_t __mode, __dev_t __dev)

{
  return __xmknodat (0, __fd, __path, __mode, &__dev);
}
# 533 "/usr/include/sys/stat.h" 3 4

# 29 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 2


 
# 31 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
      int php_file_le_stream(void);
 int php_file_le_pstream(void);
 int php_file_le_stream_filter(void);

# 98 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
typedef struct _php_stream php_stream;
typedef struct _php_stream_wrapper php_stream_wrapper;
typedef struct _php_stream_context php_stream_context;
typedef struct _php_stream_filter php_stream_filter;

# 1 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_context.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_context.h"
typedef void (*php_stream_notification_func)(php_stream_context *context,
  int notifycode, int severity,
  char *xmsg, int xcode,
  size_t bytes_sofar, size_t bytes_max,
  void * ptr );
# 43 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_context.h"
typedef struct _php_stream_notifier php_stream_notifier;

struct _php_stream_notifier {
 php_stream_notification_func func;
 void (*dtor)(php_stream_notifier *notifier);
 void *ptr;
 int mask;
 size_t progress, progress_max;
};

struct _php_stream_context {
 php_stream_notifier *notifier;
 zval *options;
 zval *links;
 int rsrc_id;
};


 void php_stream_context_free(php_stream_context *context);
 php_stream_context *php_stream_context_alloc(void);
 int php_stream_context_get_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval ***optionvalue);
 int php_stream_context_set_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval *optionvalue);

 int php_stream_context_get_link(php_stream_context *context,
  const char *hostent, php_stream **stream);
 int php_stream_context_set_link(php_stream_context *context,
  const char *hostent, php_stream *stream);
 int php_stream_context_del_link(php_stream_context *context,
  php_stream *stream);

 php_stream_notifier *php_stream_notification_alloc(void);
 void php_stream_notification_free(php_stream_notifier *notifier);

# 95 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_context.h"

 void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
 php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);

# 104 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_filter_api.h" 1
# 41 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_bucket php_stream_bucket;
typedef struct _php_stream_bucket_brigade php_stream_bucket_brigade;

struct _php_stream_bucket {
 php_stream_bucket *next, *prev;
 php_stream_bucket_brigade *brigade;

 char *buf;
 size_t buflen;

 int own_buf;
 int is_persistent;


 int refcount;
};

struct _php_stream_bucket_brigade {
 php_stream_bucket *head, *tail;
};

typedef enum {
 PSFS_ERR_FATAL,
 PSFS_FEED_ME,
 PSFS_PASS_ON,
} php_stream_filter_status_t;



 php_stream_bucket *php_stream_bucket_new(php_stream *stream, char *buf, size_t buflen, int own_buf, int buf_persistent );
 int php_stream_bucket_split(php_stream_bucket *in, php_stream_bucket **left, php_stream_bucket **right, size_t length );
 void php_stream_bucket_delref(php_stream_bucket *bucket );

 void php_stream_bucket_prepend(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
 void php_stream_bucket_append(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
 void php_stream_bucket_unlink(php_stream_bucket *bucket );
 php_stream_bucket *php_stream_bucket_make_writeable(php_stream_bucket *bucket );






typedef struct _php_stream_filter_ops {

 php_stream_filter_status_t (*filter)(
   php_stream *stream,
   php_stream_filter *thisfilter,
   php_stream_bucket_brigade *buckets_in,
   php_stream_bucket_brigade *buckets_out,
   size_t *bytes_consumed,
   int flags
   );

 void (*dtor)(php_stream_filter *thisfilter );

 const char *label;

} php_stream_filter_ops;

typedef struct _php_stream_filter_chain {
 php_stream_filter *head, *tail;


 php_stream *stream;
} php_stream_filter_chain;

struct _php_stream_filter {
 php_stream_filter_ops *fops;
 void *abstract;
 php_stream_filter *next;
 php_stream_filter *prev;
 int is_persistent;


 php_stream_filter_chain *chain;


 php_stream_bucket_brigade buffer;


 int rsrc_id;
};



 void _php_stream_filter_prepend(php_stream_filter_chain *chain, php_stream_filter *filter );
 void _php_stream_filter_append(php_stream_filter_chain *chain, php_stream_filter *filter );
 int _php_stream_filter_flush(php_stream_filter *filter, int finish );
 php_stream_filter *php_stream_filter_remove(php_stream_filter *filter, int call_dtor );
 void php_stream_filter_free(php_stream_filter *filter );
 php_stream_filter *_php_stream_filter_alloc(php_stream_filter_ops *fops, void *abstract, int persistent );

# 142 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent );
} php_stream_filter_factory;


 int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory );
 int php_stream_filter_unregister_factory(const char *filterpattern );
 int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory );
 php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent );

# 105 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 2

typedef struct _php_stream_statbuf {
 struct stat sb;

} php_stream_statbuf;

typedef struct _php_stream_dirent {
 char d_name[
# 112 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 3 4
            4096
# 112 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
                      ];
} php_stream_dirent;


typedef struct _php_stream_ops {

 size_t (*write)(php_stream *stream, const char *buf, size_t count );
 size_t (*read)(php_stream *stream, char *buf, size_t count );
 int (*close)(php_stream *stream, int close_handle );
 int (*flush)(php_stream *stream );

 const char *label;


 int (*seek)(php_stream *stream, off_t offset, int whence, off_t *newoffset );
 int (*cast)(php_stream *stream, int castas, void **ret );
 int (*stat)(php_stream *stream, php_stream_statbuf *ssb );
 int (*set_option)(php_stream *stream, int option, int value, void *ptrparam );
} php_stream_ops;

typedef struct _php_stream_wrapper_ops {

 php_stream *(*stream_opener)(php_stream_wrapper *wrapper, char *filename, char *mode,
   int options, char **opened_path, php_stream_context *context );

 int (*stream_closer)(php_stream_wrapper *wrapper, php_stream *stream );

 int (*stream_stat)(php_stream_wrapper *wrapper, php_stream *stream, php_stream_statbuf *ssb );

 int (*url_stat)(php_stream_wrapper *wrapper, char *url, int flags, php_stream_statbuf *ssb, php_stream_context *context );

 php_stream *(*dir_opener)(php_stream_wrapper *wrapper, char *filename, char *mode,
   int options, char **opened_path, php_stream_context *context );

 const char *label;


 int (*unlink)(php_stream_wrapper *wrapper, char *url, int options, php_stream_context *context );


 int (*rename)(php_stream_wrapper *wrapper, char *url_from, char *url_to, int options, php_stream_context *context );


 int (*stream_mkdir)(php_stream_wrapper *wrapper, char *url, int mode, int options, php_stream_context *context );
 int (*stream_rmdir)(php_stream_wrapper *wrapper, char *url, int options, php_stream_context *context );
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;


 int err_count;
 char **err_stack;
};
# 182 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
struct _php_stream {
 php_stream_ops *ops;
 void *abstract;

 php_stream_filter_chain readfilters, writefilters;

 php_stream_wrapper *wrapper;
 void *wrapperthis;
 zval *wrapperdata;

 int fgetss_state;
 int is_persistent;
 char mode[16];
 int rsrc_id;
 int in_free;


 int fclose_stdiocast;
 FILE *stdiocast;



 char *orig_path;

 php_stream_context *context;
 int flags;


 off_t position;
 unsigned char *readbuf;
 size_t readbuflen;
 off_t readpos;
 off_t writepos;


 size_t chunk_size;

 int eof;

};







 php_stream *_php_stream_alloc(php_stream_ops *ops, void *abstract,
  const char *persistent_id, const char *mode );

# 251 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"

 int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 266 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
 int _php_stream_free(php_stream *stream, int close_options );




 int _php_stream_seek(php_stream *stream, off_t offset, int whence );



 off_t _php_stream_tell(php_stream *stream );


 size_t _php_stream_read(php_stream *stream, char *buf, size_t count );


 size_t _php_stream_write(php_stream *stream, const char *buf, size_t count );



 size_t _php_stream_printf(php_stream *stream , const char *fmt, ...);



 int _php_stream_eof(php_stream *stream );


 int _php_stream_getc(php_stream *stream );


 int _php_stream_putc(php_stream *stream, int c );


 int _php_stream_flush(php_stream *stream, int closing );


 char *_php_stream_get_line(php_stream *stream, char *buf, size_t maxlen, size_t *returned_len );



 char *php_stream_get_record(php_stream *stream, size_t maxlen, size_t *returned_len, char *delim, size_t delim_len );


 int _php_stream_puts(php_stream *stream, char *buf );


 int _php_stream_stat(php_stream *stream, php_stream_statbuf *ssb );


 int _php_stream_stat_path(char *path, int flags, php_stream_statbuf *ssb, php_stream_context *context );



 int _php_stream_mkdir(char *path, int mode, int options, php_stream_context *context );


 int _php_stream_rmdir(char *path, int options, php_stream_context *context );


 php_stream *_php_stream_opendir(char *path, int options, php_stream_context *context );

 php_stream_dirent *_php_stream_readdir(php_stream *dirstream, php_stream_dirent *ent );




 int php_stream_dirent_alphasort(const char **a, const char **b);
 int php_stream_dirent_alphasortr(const char **a, const char **b);

 int _php_stream_scandir(char *dirname, char **namelist[], int flags, php_stream_context *context,
   int (*compare) (const char **a, const char **b) );


 int _php_stream_set_option(php_stream *stream, int option, int value, void *ptrparam );





# 393 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"

 int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );


# 413 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"

 size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );





 size_t _php_stream_copy_to_mem(php_stream *src, char **buf, size_t maxlen,
  int persistent );



 size_t _php_stream_passthru(php_stream * src );



# 1 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_transport.h" 1
# 22 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_transport.h"
# 1 "/usr/include/sys/socket.h" 1 3 4
# 24 "/usr/include/sys/socket.h" 3 4


# 1 "/usr/include/sys/uio.h" 1 3 4
# 25 "/usr/include/sys/uio.h" 3 4



# 1 "/usr/include/bits/uio.h" 1 3 4
# 43 "/usr/include/bits/uio.h" 3 4

# 43 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 29 "/usr/include/sys/uio.h" 2 3 4
# 39 "/usr/include/sys/uio.h" 3 4
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  ;
# 50 "/usr/include/sys/uio.h" 3 4
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  ;
# 65 "/usr/include/sys/uio.h" 3 4
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count,
         __off_t __offset) ;
# 77 "/usr/include/sys/uio.h" 3 4
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count,
   __off_t __offset) ;
# 120 "/usr/include/sys/uio.h" 3 4

# 27 "/usr/include/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 29 "/usr/include/sys/socket.h" 2 3 4
# 38 "/usr/include/sys/socket.h" 3 4
# 1 "/usr/include/bits/socket.h" 1 3 4
# 27 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 28 "/usr/include/bits/socket.h" 2 3 4
# 38 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/bits/socket_type.h" 1 3 4
# 24 "/usr/include/bits/socket_type.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
# 39 "/usr/include/bits/socket.h" 2 3 4
# 150 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 151 "/usr/include/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 166 "/usr/include/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
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

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



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
# 276 "/usr/include/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ , __leaf__));




extern __inline __attribute__ ((__gnu_inline__)) struct cmsghdr *
__attribute__ ((__nothrow__ , __leaf__)) __cmsg_nxthdr (struct msghdr *__mhdr, struct cmsghdr *__cmsg)
{
  if ((size_t) __cmsg->cmsg_len < sizeof (struct cmsghdr))

    return (struct cmsghdr *) 0;

  __cmsg = (struct cmsghdr *) ((unsigned char *) __cmsg
          + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)));
  if ((unsigned char *) (__cmsg + 1) > ((unsigned char *) __mhdr->msg_control
     + __mhdr->msg_controllen)
      || ((unsigned char *) __cmsg + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
   > ((unsigned char *) __mhdr->msg_control + __mhdr->msg_controllen)))

    return (struct cmsghdr *) 0;
  return __cmsg;
}




enum
  {
    SCM_RIGHTS = 0x01





  };
# 349 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4



# 1 "/usr/include/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 1 "/usr/include/asm/sockios.h" 2 3 4
# 5 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/asm/socket.h" 2 3 4
# 350 "/usr/include/bits/socket.h" 2 3 4
# 383 "/usr/include/bits/socket.h" 3 4
struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 39 "/usr/include/sys/socket.h" 2 3 4




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
# 113 "/usr/include/sys/socket.h" 3 4
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ , __leaf__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ , __leaf__));


extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));
# 137 "/usr/include/sys/socket.h" 3 4
extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);
# 174 "/usr/include/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
# 202 "/usr/include/sys/socket.h" 3 4
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
# 219 "/usr/include/sys/socket.h" 3 4
extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ , __leaf__));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ , __leaf__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ , __leaf__));
# 243 "/usr/include/sys/socket.h" 3 4
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
# 261 "/usr/include/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ , __leaf__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ , __leaf__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ , __leaf__));
# 283 "/usr/include/sys/socket.h" 3 4

# 23 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_transport.h" 2



# 25 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_transport.h"
typedef php_stream *(php_stream_transport_factory_func)(const char *proto, long protolen,
  char *resourcename, long resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


 int php_stream_xport_register(char *protocol, php_stream_transport_factory factory );
 int php_stream_xport_unregister(char *protocol );
# 45 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_transport.h"
 php_stream *_php_stream_xport_create(const char *name, long namelen, int options,
  int flags, const char *persistent_id,
  struct timeval *timeout,
  php_stream_context *context,
  char **error_string,
  int *error_code
  );





 int php_stream_xport_bind(php_stream *stream,
  const char *name, long namelen,
  char **error_text
  );


 int php_stream_xport_connect(php_stream *stream,
  const char *name, long namelen,
  int asynchronous,
  struct timeval *timeout,
  char **error_text,
  int *error_code
  );


 int php_stream_xport_listen(php_stream *stream,
  int backlog,
  char **error_text
  );



 int php_stream_xport_accept(php_stream *stream, php_stream **client,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen,
  struct timeval *timeout,
  char **error_text
  );


 int php_stream_xport_get_name(php_stream *stream, int want_peer,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen
  );

enum php_stream_xport_send_recv_flags {
 STREAM_OOB = 1,
 STREAM_PEEK = 2
};



 int php_stream_xport_recvfrom(php_stream *stream, char *buf, size_t buflen,
  long flags, void **addr, socklen_t *addrlen,
  char **textaddr, int *textaddrlen );



 int php_stream_xport_sendto(php_stream *stream, const char *buf, size_t buflen,
  long flags, void *addr, socklen_t addrlen );

typedef enum {
 STREAM_SHUT_RD,
 STREAM_SHUT_WR,
 STREAM_SHUT_RDWR
} stream_shutdown_t;



 int php_stream_xport_shutdown(php_stream *stream, stream_shutdown_t how );





typedef struct _php_stream_xport_param {
 enum {
  STREAM_XPORT_OP_BIND, STREAM_XPORT_OP_CONNECT,
  STREAM_XPORT_OP_LISTEN, STREAM_XPORT_OP_ACCEPT,
  STREAM_XPORT_OP_CONNECT_ASYNC,
  STREAM_XPORT_OP_GET_NAME,
  STREAM_XPORT_OP_GET_PEER_NAME,
  STREAM_XPORT_OP_RECV,
  STREAM_XPORT_OP_SEND,
  STREAM_XPORT_OP_SHUTDOWN
 } op;
 unsigned int want_addr:1;
 unsigned int want_textaddr:1;
 unsigned int want_errortext:1;
 unsigned int how:2;

 struct {
  char *name;
  long namelen;
  int backlog;
  struct timeval *timeout;
  struct sockaddr *addr;
  socklen_t addrlen;
  char *buf;
  size_t buflen;
  long flags;
 } inputs;
 struct {
  php_stream *client;
  int returncode;
  struct sockaddr *addr;
  socklen_t addrlen;
  char *textaddr;
  long textaddrlen;

  char *error_text;
  int error_code;
 } outputs;
} php_stream_xport_param;



typedef enum {
 STREAM_CRYPTO_METHOD_SSLv2_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv3_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv23_CLIENT,
 STREAM_CRYPTO_METHOD_TLS_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv2_SERVER,
 STREAM_CRYPTO_METHOD_SSLv3_SERVER,
 STREAM_CRYPTO_METHOD_SSLv23_SERVER,
 STREAM_CRYPTO_METHOD_TLS_SERVER
} php_stream_xport_crypt_method_t;


 int php_stream_xport_crypto_setup(php_stream *stream, php_stream_xport_crypt_method_t crypto_method, php_stream *session_stream );
 int php_stream_xport_crypto_enable(php_stream *stream, int activate );


typedef struct _php_stream_xport_crypto_param {
 enum {
  STREAM_XPORT_CRYPTO_OP_SETUP,
  STREAM_XPORT_CRYPTO_OP_ENABLE
 } op;
 struct {
  int activate;
  php_stream_xport_crypt_method_t method;
  php_stream *session;
 } inputs;
 struct {
  int returncode;
 } outputs;
} php_stream_xport_crypto_param;


 HashTable *php_stream_xport_get_hash(void);
 php_stream_transport_factory_func php_stream_generic_socket_factory;

# 430 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_plain_wrapper.h"
 extern php_stream_ops php_stream_stdio_ops;
 extern php_stream_wrapper php_plain_files_wrapper;




 php_stream *_php_stream_fopen(const char *filename, const char *mode, char **opened_path, int options );


 php_stream *_php_stream_fopen_with_path(char *filename, char *mode, char *path, char **opened_path, int options );


 php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


 php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


 php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


 php_stream *_php_stream_fopen_tmpfile(int dummy );


 php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, char **opened_path );





 FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, char **opened_path );



# 431 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_userspace.h" 1
# 23 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_userspace.h"
 extern php_stream_ops php_stream_userspace_ops;
 extern php_stream_ops php_stream_userspace_dir_ops;
# 432 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_mmap.h" 1
# 30 "/home/repair/benchmarks/tse-2012/php/src/main/streams/php_stream_mmap.h"
typedef enum {

 PHP_STREAM_MMAP_SUPPORTED,



 PHP_STREAM_MMAP_MAP_RANGE,

 PHP_STREAM_MMAP_UNMAP
} php_stream_mmap_operation_t;

typedef enum {
 PHP_STREAM_MAP_MODE_READONLY,
 PHP_STREAM_MAP_MODE_READWRITE,
 PHP_STREAM_MAP_MODE_SHARED_READONLY,
 PHP_STREAM_MAP_MODE_SHARED_READWRITE
} php_stream_mmap_access_t;

typedef struct {


 size_t offset;
 size_t length;

 php_stream_mmap_access_t mode;


 char *mapped;

} php_stream_mmap_range;








 char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_operation_t mode, size_t *mapped_len );



 int _php_stream_mmap_unmap(php_stream *stream );


# 433 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h" 2
# 449 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"

 int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );

# 503 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
int php_init_stream_wrappers(int module_number );
int php_shutdown_stream_wrappers(int module_number );
void php_shutdown_stream_hashes(void);
int zm_deactivate_streams(int type, int module_number );


 int php_register_url_stream_wrapper(char *protocol, php_stream_wrapper *wrapper );
 int php_unregister_url_stream_wrapper(char *protocol );
 int php_register_url_stream_wrapper_volatile(char *protocol, php_stream_wrapper *wrapper );
 int php_unregister_url_stream_wrapper_volatile(char *protocol );
 php_stream *_php_stream_open_wrapper_ex(char *path, char *mode, int options, char **opened_path, php_stream_context *context );
 php_stream_wrapper *php_stream_locate_url_wrapper(const char *path, char **path_for_open, int options );
 char *php_stream_locate_eol(php_stream *stream, char *buf, size_t buf_len );
# 527 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
 void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...);
# 538 "/home/repair/benchmarks/tse-2012/php/src/main/php_streams.h"
 int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



 HashTable *_php_stream_get_url_stream_wrappers_hash(void);

 HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
 HashTable *_php_get_stream_filters_hash(void);

 HashTable *php_get_stream_filters_hash_global();

# 404 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_memory_streams.h" 1
# 42 "/home/repair/benchmarks/tse-2012/php/src/main/php_memory_streams.h"

 php_stream *_php_stream_memory_create(int mode );
 php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
 char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

 php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
 php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern php_stream_ops php_stream_memory_ops;
extern php_stream_ops php_stream_temp_ops;
extern php_stream_ops php_stream_rfc2397_ops;
extern php_stream_wrapper php_stream_rfc2397_wrapper;
# 405 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/fopen_wrappers.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/main/fopen_wrappers.h"

# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_globals.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/main/php_globals.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_globals.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/main/php_globals.h" 2

typedef struct _php_core_globals php_core_globals;






extern struct _php_core_globals core_globals;
# 45 "/home/repair/benchmarks/tse-2012/php/src/main/php_globals.h"
struct _php_tick_function_entry;

typedef struct _arg_separators {
 char *output;
 char *input;
} arg_separators;

struct _php_core_globals {
 zend_bool magic_quotes_gpc;
 zend_bool magic_quotes_runtime;
 zend_bool magic_quotes_sybase;

 zend_bool safe_mode;

 zend_bool allow_call_time_pass_reference;
 zend_bool implicit_flush;

 long output_buffering;

 char *safe_mode_include_dir;
 zend_bool safe_mode_gid;
 zend_bool sql_safe_mode;
 zend_bool enable_dl;

 char *output_handler;

 char *unserialize_callback_func;
 long serialize_precision;

 char *safe_mode_exec_dir;

 long memory_limit;
 long max_input_time;

 zend_bool track_errors;
 zend_bool display_errors;
 zend_bool display_startup_errors;
 zend_bool log_errors;
 long log_errors_max_len;
 zend_bool ignore_repeated_errors;
 zend_bool ignore_repeated_source;
 zend_bool report_memleaks;
 char *error_log;

 char *doc_root;
 char *user_dir;
 char *include_path;
 char *open_basedir;
 char *extension_dir;

 char *upload_tmp_dir;
 long upload_max_filesize;

 char *error_append_string;
 char *error_prepend_string;

 char *auto_prepend_file;
 char *auto_append_file;

 arg_separators arg_separator;

 char *variables_order;

 HashTable rfc1867_protected_variables;

 short connection_status;
 short ignore_user_abort;

 unsigned char header_is_being_sent;

 zend_llist tick_functions;

 zval *http_globals[6];

 zend_bool expose_php;

 zend_bool register_globals;
 zend_bool register_long_arrays;
 zend_bool register_argc_argv;
 zend_bool auto_globals_jit;

 zend_bool y2k_compliance;

 char *docref_root;
 char *docref_ext;

 zend_bool html_errors;
 zend_bool xmlrpc_errors;

 long xmlrpc_error_number;

 zend_bool activated_auto_globals[8];

 zend_bool modules_activated;
 zend_bool file_uploads;
 zend_bool during_request_startup;
 zend_bool allow_url_fopen;
 zend_bool always_populate_raw_post_data;
 zend_bool report_zend_debug;

 int last_error_type;
 char *last_error_message;
 char *last_error_file;
 int last_error_lineno;
 error_handling_t error_handling;
 zend_class_entry *exception_class;

 char *disable_functions;
 char *disable_classes;
 zend_bool allow_url_include;



};
# 26 "/home/repair/benchmarks/tse-2012/php/src/main/fopen_wrappers.h" 2

 int php_fopen_primary_script(zend_file_handle *file_handle );
 char *expand_filepath(const char *filepath, char *real_path );

 int php_check_open_basedir(const char *path );
 int php_check_open_basedir_ex(const char *path, int warn );
 int php_check_specific_open_basedir(const char *basedir, const char *path );

 int php_check_safe_mode_include_dir(const char *path );

 FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

 int php_is_url(char *path);
 char *php_strip_url_passwd(char *path);

# 406 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2



# 1 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/TSRM/TSRM.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config_common.h" 1
# 11 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config_common.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config.h" 1
# 1 "/home/repair/benchmarks/tse-2012/php/src/include/../main/php_config.h" 1
# 1 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config.h" 2
# 12 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config_common.h" 2
# 39 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config_common.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/limits.h" 1 3 4
# 40 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_config_common.h" 2
# 27 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h" 2






# 1 "/usr/include/utime.h" 1 3 4
# 27 "/usr/include/utime.h" 3 4






# 1 "/usr/include/time.h" 1 3 4
# 34 "/usr/include/utime.h" 2 3 4




# 37 "/usr/include/utime.h" 3 4
struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 34 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h" 2
# 89 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/bits/dirent.h" 1 3 4
# 22 "/usr/include/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 208 "/usr/include/dirent.h" 3 4
extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 244 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 245 "/usr/include/dirent.h" 2 3 4
# 254 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 324 "/usr/include/dirent.h" 3 4
extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
# 401 "/usr/include/dirent.h" 3 4

# 90 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h" 2
# 135 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h"

# 135 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

 void virtual_cwd_startup(void);
 void virtual_cwd_shutdown(void);
 char *virtual_getcwd_ex(size_t *length );
 char *virtual_getcwd(char *buf, size_t size );
 int virtual_chdir(const char *path );
 int virtual_chdir_file(const char *path, int (*p_chdir)(const char *path ) );
 int virtual_filepath(const char *path, char **filepath );
 int virtual_filepath_ex(const char *path, char **filepath, verify_path_func verify_path );
 char *virtual_realpath(const char *path, char *real_path );
 FILE *virtual_fopen(const char *path, const char *mode );
 int virtual_open(const char *path , int flags, ...);
 int virtual_creat(const char *path, mode_t mode );
 int virtual_rename(char *oldname, char *newname );
 int virtual_stat(const char *path, struct stat *buf );

 int virtual_lstat(const char *path, struct stat *buf );

 int virtual_unlink(const char *path );
 int virtual_mkdir(const char *pathname, mode_t mode );
 int virtual_rmdir(const char *pathname );
 DIR *virtual_opendir(const char *pathname );
 FILE *virtual_popen(const char *command, const char *type );
 int virtual_access(const char *pathname, int mode );
# 182 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h"
 int virtual_utime(const char *filename, struct utimbuf *buf );

 int virtual_chmod(const char *filename, mode_t mode );

 int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 196 "/home/repair/benchmarks/tse-2012/php/src/TSRM/tsrm_virtual_cwd.h"
 int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath);

 char *tsrm_realpath(const char *path, char *real_path );




typedef struct _realpath_cache_bucket {
 unsigned long key;
 char *path;
 int path_len;
 char *realpath;
 int realpath_len;
 time_t expires;
 struct _realpath_cache_bucket *next;
} realpath_cache_bucket;

typedef struct _virtual_cwd_globals {
 cwd_state cwd;
 long realpath_cache_size;
 long realpath_cache_size_limit;
 long realpath_cache_ttl;
 realpath_cache_bucket *realpath_cache[1024];
} virtual_cwd_globals;





extern virtual_cwd_globals cwd_globals;



 void realpath_cache_clean(void);
 void realpath_cache_del(const char *path, int path_len );
# 410 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_constants.h" 1
# 33 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 51 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_constants.h"

void clean_module_constants(int module_number );
void free_zend_constant(zend_constant *c);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
 int zend_get_constant(char *name, uint name_len, zval *result );
 int zend_get_constant_ex(char *name, uint name_len, zval *result, zend_class_entry *scope );
 void zend_register_long_constant(char *name, uint name_len, long lval, int flags, int module_number );
 void zend_register_double_constant(char *name, uint name_len, double dval, int flags, int module_number );
 void zend_register_string_constant(char *name, uint name_len, char *strval, int flags, int module_number );
 void zend_register_stringl_constant(char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
 int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
void copy_zend_constant(zend_constant *c);

# 412 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2






# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_reentrancy.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/main/php_reentrancy.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/main/php_reentrancy.h" 2





# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4



# 133 "/usr/include/time.h" 3 4
struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 430 "/usr/include/time.h" 3 4

# 31 "/home/repair/benchmarks/tse-2012/php/src/main/php_reentrancy.h" 2
# 52 "/home/repair/benchmarks/tse-2012/php/src/main/php_reentrancy.h"

# 119 "/home/repair/benchmarks/tse-2012/php/src/main/php_reentrancy.h"

# 419 "/home/repair/benchmarks/tse-2012/php/src/main/php.h" 2
# 27 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/reg.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/reg.h"
 
# 25 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/reg.h"
      char *php_reg_replace(const char *pattern, const char *replace, const char *string, int icase, int extended);

void zif_ereg(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_eregi(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_eregi_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ereg_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_spliti(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void zif_sql_regcase(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

typedef struct _zend_reg_globals {
 HashTable ht_rc;
} zend_reg_globals;

int zm_startup_regex(int type, int module_number );
int zm_shutdown_regex(int type, int module_number );
void zm_info_regex(zend_module_entry *zend_module );
# 28 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_rand.h" 1
# 29 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_rand.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/basic_functions.h" 1
# 28 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/basic_functions.h"
# 1 "/usr/include/wchar.h" 1 3 4
# 41 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 42 "/usr/include/wchar.h" 2 3 4
# 51 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 357 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4

# 357 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 52 "/usr/include/wchar.h" 2 3 4
# 104 "/usr/include/wchar.h" 3 4


typedef __mbstate_t mbstate_t;

# 132 "/usr/include/wchar.h" 3 4





struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ , __leaf__));


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ , __leaf__));



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ , __leaf__));








extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));


extern wchar_t *wcsdup (const wchar_t *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));










extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
# 240 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));


# 252 "/usr/include/wchar.h" 3 4



extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
# 269 "/usr/include/wchar.h" 3 4
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
# 280 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));



extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) __attribute__ ((__nothrow__ , __leaf__));


extern size_t wcslen (const wchar_t *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));

# 309 "/usr/include/wchar.h" 3 4
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));




# 323 "/usr/include/wchar.h" 3 4
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));



extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ , __leaf__));



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

# 353 "/usr/include/wchar.h" 3 4



extern wint_t btowc (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int wctob (wint_t __c) __attribute__ ((__nothrow__ , __leaf__));



extern int mbsinit (const mbstate_t *__ps) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) __attribute__ ((__nothrow__ , __leaf__));


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));








extern wint_t __btowc_alias (int __c) __asm ("btowc");
extern __inline __attribute__ ((__gnu_inline__)) wint_t
__attribute__ ((__nothrow__ , __leaf__)) btowc (int __c)
{ return (__builtin_constant_p (__c) && __c >= '\0' && __c <= '\x7f'
   ? (wint_t) __c : __btowc_alias (__c)); }

extern int __wctob_alias (wint_t __c) __asm ("wctob");
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctob (wint_t __wc)
{ return (__builtin_constant_p (__wc) && __wc >= L'\0' && __wc <= L'\x7f'
   ? (int) __wc : __wctob_alias (__wc)); }

extern __inline __attribute__ ((__gnu_inline__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbrlen (const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps)

{ return (__ps != ((void *)0)
   ? mbrtowc (((void *)0), __s, __n, __ps) : __mbrlen (__s, __n, ((void *)0))); }





extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
# 450 "/usr/include/wchar.h" 3 4



extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) __attribute__ ((__nothrow__ , __leaf__));

# 569 "/usr/include/wchar.h" 3 4
extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ , __leaf__));



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__));






extern int fwide (__FILE *__fp, int __mode) __attribute__ ((__nothrow__ , __leaf__));






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) ;
# 659 "/usr/include/wchar.h" 3 4
extern int fwscanf (__FILE *__restrict __stream, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_fwscanf")


                                                          ;
extern int wscanf (const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_wscanf")

                                                          ;
extern int swscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_swscanf") __attribute__ ((__nothrow__ , __leaf__))


                                                          ;
# 683 "/usr/include/wchar.h" 3 4









extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;





extern int vfwscanf (__FILE *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfwscanf")


                                                          ;
extern int vwscanf (const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vwscanf")

                                                          ;
extern int vswscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vswscanf") __attribute__ ((__nothrow__ , __leaf__))


                                                          ;
# 739 "/usr/include/wchar.h" 3 4









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);

# 854 "/usr/include/wchar.h" 3 4




extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 894 "/usr/include/wchar.h" 3 4

# 29 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/basic_functions.h" 2


# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_filestat.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_filestat.h"

# 24 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_filestat.h"
int zm_activate_filestat(int type, int module_number );
int zm_deactivate_filestat(int type, int module_number );

void zif_clearstatcache(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileatime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filectime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filegroup(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileinode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filemtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileowner(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileperms(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filesize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filetype(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_writable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_readable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_executable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_dir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_link(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_stat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_lstat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_disk_total_space(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_disk_free_space(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chown(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chgrp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_lchown(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_lchgrp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_chmod(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_touch(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_clearstatcache(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 87 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_filestat.h"
typedef int php_stat_len;


 void php_stat(const char *filename, php_stat_len filename_length, int type, zval *return_value );
# 32 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/basic_functions.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_highlight.h" 1
# 33 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_highlight.h"
typedef struct _zend_syntax_highlighter_ini {
 char *highlight_html;
 char *highlight_comment;
 char *highlight_default;
 char *highlight_string;
 char *highlight_keyword;
} zend_syntax_highlighter_ini;



 void zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini );
 void zend_strip(void);
 int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini );
 int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name );
 void zend_html_putc(char c);
 void zend_html_puts(const char *s, uint len );


extern zend_syntax_highlighter_ini syntax_highlighter_ini;
# 34 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/basic_functions.h" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/url_scanner.h" 1
# 23 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/url_scanner.h"
int php_url_scanner_activate(void);
int php_url_scanner_deactivate(void);

char *url_adapt(const char *src, size_t srclen, const char *data, size_t *newlen);

enum url_state {
 STATE_NORMAL,
 STATE_TAG_START,
 STATE_TAG,
 STATE_IN_TAG,
 STATE_TAG_ATTR,
 STATE_TAG_IS,
 STATE_TAG_IS2,
 STATE_TAG_VAL,
 STATE_TAG_VAL2,
 STATE_TAG_QVAL1,
 STATE_TAG_QVAL2,
 STATE_TAG_QVAL2b
};

typedef struct url_adapt_struct {
  enum url_state state;
 char *tag;
 char *attr;
 char *val;
 char delim;
 char *p;
 int l, ml;
 int attr_done;
} url_adapt_state_t;
# 36 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/basic_functions.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/url_scanner_ex.h" 1
# 24 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/url_scanner_ex.h"
int zm_startup_url_scanner_ex(int type, int module_number );
int zm_shutdown_url_scanner_ex(int type, int module_number );

int zm_activate_url_scanner_ex(int type, int module_number );
int zm_deactivate_url_scanner_ex(int type, int module_number );

char *php_url_scanner_adapt_single_url(const char *url, size_t urllen, const char *name, const char *value, size_t *newlen );

int php_url_scanner_add_var(char *name, int name_len, char *value, int value_len, int urlencode );
int php_url_scanner_reset_vars(void);

int php_url_scanner_ex_activate(void);
int php_url_scanner_ex_deactivate(void);

# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_smart_str_public.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_smart_str_public.h"
typedef struct {
 char *c;
 size_t len;
 size_t a;
} smart_str;
# 39 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/url_scanner_ex.h" 2

typedef struct {

 smart_str tag;
 smart_str arg;
 smart_str val;
 smart_str buf;


 smart_str result;


 smart_str form_app, url_app;

 int active;

 char *lookup_data;
 int state;


 HashTable *tags;
} url_adapt_state_ex_t;

typedef struct {
 smart_str var;
 smart_str val;
} url_adapt_var_t;
# 37 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/basic_functions.h" 2

extern zend_module_entry basic_functions_module;


int zm_startup_basic(int type, int module_number );
int zm_shutdown_basic(int type, int module_number );
int zm_activate_basic(int type, int module_number );
int zm_deactivate_basic(int type, int module_number );
void zm_info_basic(zend_module_entry *zend_module );

void zif_constant(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_toggle_short_open_tag(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_usleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_time_nanosleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_time_sleep_until(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_inet_ntop(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void php_inet_pton(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_ip2long(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_long2ip(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_getenv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_putenv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_getopt(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_get_current_user(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_time_limit(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_get_cfg_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_magic_quotes_runtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_magic_quotes_runtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_magic_quotes_gpc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_import_request_variables(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_error_log(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_error_get_last(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_call_user_func(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_func_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_method(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_method_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_register_shutdown_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_highlight_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_highlight_string(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_strip_whitespace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void php_get_highlight_struct(zend_syntax_highlighter_ini *syntax_highlighter_ini);

void zif_ini_get(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_get_all(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_set(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_restore(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_restore_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_print_r(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vfprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_connection_aborted(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_connection_status(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ignore_user_abort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_getservbyname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getservbyport(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getprotobyname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getprotobynumber(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_if_crc32(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_register_tick_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unregister_tick_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_sys_getloadavg(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_is_uploaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_move_uploaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_parse_ini_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_str_rot13(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_get_filters(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_filter_register(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_make_writeable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_prepend(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_append(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_new(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
int zm_startup_user_filters(int type, int module_number );
int zm_deactivate_user_filters(int type, int module_number );

 int _php_error_log(int opt_err, char *message, char *opt, char *headers );



typedef unsigned int php_uint32;
typedef signed int php_int32;
# 156 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/basic_functions.h"
typedef struct _php_basic_globals {
 HashTable *user_shutdown_function_names;
 HashTable putenv_ht;
 zval *strtok_zval;
 char *strtok_string;
 char *locale_string;
 char *strtok_last;
 char strtok_table[256];
 ulong strtok_len;
 char str_ebuf[40];
 zval **array_walk_func_name;
 zval **user_compare_func_name;
 zend_fcall_info_cache user_compare_fci_cache;
 zend_llist *user_tick_functions;

 zval *active_ini_file_section;

 HashTable sm_protected_env_vars;
 char *sm_allowed_env_vars;


 long page_uid;
 long page_gid;
 long page_inode;
 long page_mtime;


 char *CurrentStatFile, *CurrentLStatFile;
 php_stream_statbuf ssb, lssb;


 php_uint32 state[(624)+1];
 php_uint32 *next;
 int left;

 unsigned int rand_seed;

 zend_bool rand_is_seeded;
 zend_bool mt_rand_is_seeded;


 int syslog_started;
 char *syslog_device;


 zend_class_entry *incomplete_class;


 url_adapt_state_t url_adapt_state;

 url_adapt_state_ex_t url_adapt_state_ex;


 void *mmap_file;
 size_t mmap_len;


 HashTable *user_filter_map;






 int umask;
} php_basic_globals;






 extern php_basic_globals basic_globals;



typedef struct {
 char *putenv_string;
 char *previous_value;
 char *key;
 int key_len;
} putenv_entry;







 double php_get_nan();
 double php_get_inf();
# 30 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_rand.h" 2
# 55 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_rand.h"
 void php_srand(long seed );
 long php_rand(void);
 void php_mt_srand(php_uint32 seed );
 php_uint32 php_mt_rand(void);
# 29 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_string.h" 1
# 27 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_string.h"
void zif_strspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strcspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_ireplace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rtrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_trim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ltrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_soundex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_levenshtein(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_count_chars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_wordwrap(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_explode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_implode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtok(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtoupper(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtolower(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_basename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_dirname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_pathinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strstr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrchr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_quotemeta(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ucfirst(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ucwords(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hebrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hebrevc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_user_sprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_user_printf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vsprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_addcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_addslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ord(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_nl2br(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_setlocale(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_localeconv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_nl_langinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stristr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chunk_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_parse_str(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_bin2hex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_similar_text(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strip_tags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_repeat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strnatcmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strnatcasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_pad(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sscanf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_shuffle(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_word_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strpbrk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_compare(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_strcoll(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_money_format(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );







int zm_startup_nl_langinfo(int type, int module_number );






 int strnatcmp_ex(char const *a, size_t a_len, char const *b, size_t b_len, int fold_case);


 struct lconv *localeconv_r(struct lconv *out);


 char *php_strtoupper(char *s, size_t len);
 char *php_strtolower(char *s, size_t len);
 char *php_strtr(char *str, int len, char *str_from, char *str_to, int trlen);
 char *php_addslashes(char *str, int length, int *new_length, int freeit );
 char *php_addslashes_ex(char *str, int length, int *new_length, int freeit, int ignore_sybase );
 char *php_addcslashes(char *str, int length, int *new_length, int freeit, char *what, int wlength );
 void php_stripslashes(char *str, int *len );
 void php_stripcslashes(char *str, int *len);
 void php_basename(char *s, size_t len, char *suffix, size_t sufflen, char **p_ret, size_t *p_len );
 size_t php_dirname(char *str, size_t len);
 char *php_stristr(unsigned char *s, unsigned char *t, size_t s_len, size_t t_len);
 char *php_str_to_str_ex(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length, int case_sensitivity, int *replace_count);
 char *php_str_to_str(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length);
 char *php_trim(char *c, int len, char *what, int what_len, zval *return_value, int mode );
 size_t php_strip_tags(char *rbuf, int len, int *state, char *allow, int allow_len);
 size_t php_strip_tags_ex(char *rbuf, int len, int *stateptr, char *allow, int allow_len, zend_bool allow_tag_spaces);
 int php_char_to_str_ex(char *str, uint len, char from, char *to, int to_len, zval *result, int case_sensitivity, int *replace_count);
 int php_char_to_str(char *str, uint len, char from, char *to, int to_len, zval *result);
 void php_implode(zval *delim, zval *arr, zval *return_value );
 void php_explode(zval *delim, zval *str, zval *return_value, int limit);

 size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end);
 size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end);
# 159 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_string.h"
void register_string_constants(int type, int module_number );
# 30 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_variables.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/main/php_variables.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/SAPI.h" 1
# 25 "/home/repair/benchmarks/tse-2012/php/src/main/SAPI.h"
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_llist.h" 1
# 26 "/home/repair/benchmarks/tse-2012/php/src/main/SAPI.h" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_operators.h" 1
# 27 "/home/repair/benchmarks/tse-2012/php/src/main/SAPI.h" 2
# 48 "/home/repair/benchmarks/tse-2012/php/src/main/SAPI.h"
typedef struct {
 char *header;
 uint header_len;
 zend_bool replace;
} sapi_header_struct;


typedef struct {
 zend_llist headers;
 int http_response_code;
 unsigned char send_default_content_type;
 char *mimetype;
 char *http_status_line;
} sapi_headers_struct;


typedef struct _sapi_post_entry sapi_post_entry;
typedef struct _sapi_module_struct sapi_module_struct;


extern sapi_module_struct sapi_module;








typedef struct {
 const char *request_method;
 char *query_string;
 char *post_data, *raw_post_data;
 char *cookie_data;
 long content_length;
 uint post_data_length, raw_post_data_length;

 char *path_translated;
 char *request_uri;

 const char *content_type;

 zend_bool headers_only;
 zend_bool no_headers;
 zend_bool headers_read;

 sapi_post_entry *post_entry;

 char *content_type_dup;


 char *auth_user;
 char *auth_password;
 char *auth_digest;


 char *argv0;


 char *current_user;
 int current_user_length;


    int argc;
    char **argv;
 int proto_num;
} sapi_request_info;


typedef struct _sapi_globals_struct {
 void *server_context;
 sapi_request_info request_info;
 sapi_headers_struct sapi_headers;
 int read_post_bytes;
 unsigned char headers_sent;
 struct stat global_stat;
 char *default_mimetype;
 char *default_charset;
 HashTable *rfc1867_uploaded_files;
 long post_max_size;
 int options;
 zend_bool sapi_started;
 time_t global_request_time;
 HashTable known_post_content_types;
} sapi_globals_struct;








extern sapi_globals_struct sapi_globals;


 void sapi_startup(sapi_module_struct *sf);
 void sapi_shutdown(void);
 void sapi_activate(void);
 void sapi_deactivate(void);
 void sapi_initialize_empty_request(void);

# 162 "/home/repair/benchmarks/tse-2012/php/src/main/SAPI.h"
typedef struct {
 char *line;
 uint line_len;
 long response_code;
} sapi_header_line;

typedef enum {
 SAPI_HEADER_REPLACE,
 SAPI_HEADER_ADD,
 SAPI_HEADER_SET_STATUS
} sapi_header_op_enum;


 int sapi_header_op(sapi_header_op_enum op, void *arg );


 int sapi_add_header_ex(char *header_line, uint header_line_len, zend_bool duplicate, zend_bool replace );



 int sapi_send_headers(void);
 void sapi_free_header(sapi_header_struct *sapi_header);
 void sapi_handle_post(void *arg );

 int sapi_register_post_entries(sapi_post_entry *post_entry );
 int sapi_register_post_entry(sapi_post_entry *post_entry );
 void sapi_unregister_post_entry(sapi_post_entry *post_entry );
 int sapi_register_default_post_reader(void (*default_post_reader)(void));
 int sapi_register_treat_data(void (*treat_data)(int arg, char *str, zval *destArray ));
 int sapi_register_input_filter(unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len ));

 int sapi_flush(void);
 struct stat *sapi_get_stat(void);
 char *sapi_getenv(char *name, size_t name_len );

 char *sapi_get_default_content_type(void);
 void sapi_get_default_content_type_header(sapi_header_struct *default_header );
 size_t sapi_apply_default_charset(char **mimetype, size_t len );
 void sapi_activate_headers_only(void);

 int sapi_get_fd(int *fd );
 int sapi_force_http_10(void);

 int sapi_get_target_uid(uid_t * );
 int sapi_get_target_gid(gid_t * );
 time_t sapi_get_request_time(void);


struct _sapi_module_struct {
 char *name;
 char *pretty_name;

 int (*startup)(struct _sapi_module_struct *sapi_module);
 int (*shutdown)(struct _sapi_module_struct *sapi_module);

 int (*activate)(void);
 int (*deactivate)(void);

 int (*ub_write)(const char *str, unsigned int str_length );
 void (*flush)(void *server_context);
 struct stat *(*get_stat)(void);
 char *(*getenv)(char *name, size_t name_len );

 void (*sapi_error)(int type, const char *error_msg, ...);

 int (*header_handler)(sapi_header_struct *sapi_header, sapi_headers_struct *sapi_headers );
 int (*send_headers)(sapi_headers_struct *sapi_headers );
 void (*send_header)(sapi_header_struct *sapi_header, void *server_context );

 int (*read_post)(char *buffer, uint count_bytes );
 char *(*read_cookies)(void);

 void (*register_server_variables)(zval *track_vars_array );
 void (*log_message)(char *message);
 time_t (*get_request_time)(void);

 char *php_ini_path_override;

 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);

 void (*default_post_reader)(void);
 void (*treat_data)(int arg, char *str, zval *destArray );
 char *executable_location;

 int php_ini_ignore;

 int (*get_fd)(int *fd );

 int (*force_http_10)(void);

 int (*get_target_uid)(uid_t * );
 int (*get_target_gid)(gid_t * );

 unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

 void (*ini_defaults)(HashTable *configuration_hash);
 int phpinfo_as_text;

 char *ini_entries;
};


struct _sapi_post_entry {
 char *content_type;
 uint content_type_len;
 void (*post_reader)(void);
 void (*post_handler)(char *content_type_dup, void *arg );
};
# 292 "/home/repair/benchmarks/tse-2012/php/src/main/SAPI.h"

 void sapi_read_standard_form_data(void);
 void php_default_post_reader(void);
 void php_default_treat_data(int arg, char *str, zval* destArray );
 unsigned int php_default_input_filter(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

# 27 "/home/repair/benchmarks/tse-2012/php/src/main/php_variables.h" 2
# 36 "/home/repair/benchmarks/tse-2012/php/src/main/php_variables.h"

void php_startup_auto_globals(void);
extern void (*php_import_environment_variables)(zval *array_ptr );
 void php_register_variable(char *var, char *val, zval *track_vars_array );

 void php_register_variable_safe(char *var, char *val, int val_len, zval *track_vars_array );
 void php_register_variable_ex(char *var, zval *val, zval *track_vars_array );

int php_hash_environment(void);

# 31 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2

# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4


# 50 "/usr/include/locale.h" 3 4




# 53 "/usr/include/locale.h" 3 4
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 120 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));


# 151 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));








# 33 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2


# 1 "/usr/include/langinfo.h" 1 3 4
# 23 "/usr/include/langinfo.h" 3 4
# 1 "/usr/include/nl_types.h" 1 3 4
# 30 "/usr/include/nl_types.h" 3 4



typedef void *nl_catd;


typedef int nl_item;





extern nl_catd catopen (const char *__cat_name, int __flag) __attribute__ ((__nonnull__ (1)));



extern char *catgets (nl_catd __catalog, int __set, int __number,
        const char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int catclose (nl_catd __catalog) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 24 "/usr/include/langinfo.h" 2 3 4

# 1 "/usr/include/bits/locale.h" 1 3 4
# 26 "/usr/include/langinfo.h" 2 3 4



# 41 "/usr/include/langinfo.h" 3 4
enum
{



  ABDAY_1 = (((2) << 16) | (0)),

  ABDAY_2,

  ABDAY_3,

  ABDAY_4,

  ABDAY_5,

  ABDAY_6,

  ABDAY_7,



  DAY_1,

  DAY_2,

  DAY_3,

  DAY_4,

  DAY_5,

  DAY_6,

  DAY_7,



  ABMON_1,

  ABMON_2,

  ABMON_3,

  ABMON_4,

  ABMON_5,

  ABMON_6,

  ABMON_7,

  ABMON_8,

  ABMON_9,

  ABMON_10,

  ABMON_11,

  ABMON_12,



  MON_1,

  MON_2,

  MON_3,

  MON_4,

  MON_5,

  MON_6,

  MON_7,

  MON_8,

  MON_9,

  MON_10,

  MON_11,

  MON_12,


  AM_STR,

  PM_STR,


  D_T_FMT,

  D_FMT,

  T_FMT,

  T_FMT_AMPM,


  ERA,

  __ERA_YEAR,



  ERA_D_FMT,

  ALT_DIGITS,

  ERA_D_T_FMT,

  ERA_T_FMT,


  _NL_TIME_ERA_NUM_ENTRIES,
  _NL_TIME_ERA_ENTRIES,

  _NL_WABDAY_1,
  _NL_WABDAY_2,
  _NL_WABDAY_3,
  _NL_WABDAY_4,
  _NL_WABDAY_5,
  _NL_WABDAY_6,
  _NL_WABDAY_7,


  _NL_WDAY_1,
  _NL_WDAY_2,
  _NL_WDAY_3,
  _NL_WDAY_4,
  _NL_WDAY_5,
  _NL_WDAY_6,
  _NL_WDAY_7,


  _NL_WABMON_1,
  _NL_WABMON_2,
  _NL_WABMON_3,
  _NL_WABMON_4,
  _NL_WABMON_5,
  _NL_WABMON_6,
  _NL_WABMON_7,
  _NL_WABMON_8,
  _NL_WABMON_9,
  _NL_WABMON_10,
  _NL_WABMON_11,
  _NL_WABMON_12,


  _NL_WMON_1,
  _NL_WMON_2,
  _NL_WMON_3,
  _NL_WMON_4,
  _NL_WMON_5,
  _NL_WMON_6,
  _NL_WMON_7,
  _NL_WMON_8,
  _NL_WMON_9,
  _NL_WMON_10,
  _NL_WMON_11,
  _NL_WMON_12,

  _NL_WAM_STR,
  _NL_WPM_STR,

  _NL_WD_T_FMT,
  _NL_WD_FMT,
  _NL_WT_FMT,
  _NL_WT_FMT_AMPM,

  _NL_WERA_YEAR,
  _NL_WERA_D_FMT,
  _NL_WALT_DIGITS,
  _NL_WERA_D_T_FMT,
  _NL_WERA_T_FMT,

  _NL_TIME_WEEK_NDAYS,
  _NL_TIME_WEEK_1STDAY,
  _NL_TIME_WEEK_1STWEEK,
  _NL_TIME_FIRST_WEEKDAY,
  _NL_TIME_FIRST_WORKDAY,
  _NL_TIME_CAL_DIRECTION,
  _NL_TIME_TIMEZONE,

  _DATE_FMT,

  _NL_W_DATE_FMT,

  _NL_TIME_CODESET,

  _NL_NUM_LC_TIME,




  _NL_COLLATE_NRULES = (((3) << 16) | (0)),
  _NL_COLLATE_RULESETS,
  _NL_COLLATE_TABLEMB,
  _NL_COLLATE_WEIGHTMB,
  _NL_COLLATE_EXTRAMB,
  _NL_COLLATE_INDIRECTMB,
  _NL_COLLATE_GAP1,
  _NL_COLLATE_GAP2,
  _NL_COLLATE_GAP3,
  _NL_COLLATE_TABLEWC,
  _NL_COLLATE_WEIGHTWC,
  _NL_COLLATE_EXTRAWC,
  _NL_COLLATE_INDIRECTWC,
  _NL_COLLATE_SYMB_HASH_SIZEMB,
  _NL_COLLATE_SYMB_TABLEMB,
  _NL_COLLATE_SYMB_EXTRAMB,
  _NL_COLLATE_COLLSEQMB,
  _NL_COLLATE_COLLSEQWC,
  _NL_COLLATE_CODESET,
  _NL_NUM_LC_COLLATE,




  _NL_CTYPE_CLASS = (((0) << 16) | (0)),
  _NL_CTYPE_TOUPPER,
  _NL_CTYPE_GAP1,
  _NL_CTYPE_TOLOWER,
  _NL_CTYPE_GAP2,
  _NL_CTYPE_CLASS32,
  _NL_CTYPE_GAP3,
  _NL_CTYPE_GAP4,
  _NL_CTYPE_GAP5,
  _NL_CTYPE_GAP6,
  _NL_CTYPE_CLASS_NAMES,
  _NL_CTYPE_MAP_NAMES,
  _NL_CTYPE_WIDTH,
  _NL_CTYPE_MB_CUR_MAX,
  _NL_CTYPE_CODESET_NAME,
  CODESET = _NL_CTYPE_CODESET_NAME,

  _NL_CTYPE_TOUPPER32,
  _NL_CTYPE_TOLOWER32,
  _NL_CTYPE_CLASS_OFFSET,
  _NL_CTYPE_MAP_OFFSET,
  _NL_CTYPE_INDIGITS_MB_LEN,
  _NL_CTYPE_INDIGITS0_MB,
  _NL_CTYPE_INDIGITS1_MB,
  _NL_CTYPE_INDIGITS2_MB,
  _NL_CTYPE_INDIGITS3_MB,
  _NL_CTYPE_INDIGITS4_MB,
  _NL_CTYPE_INDIGITS5_MB,
  _NL_CTYPE_INDIGITS6_MB,
  _NL_CTYPE_INDIGITS7_MB,
  _NL_CTYPE_INDIGITS8_MB,
  _NL_CTYPE_INDIGITS9_MB,
  _NL_CTYPE_INDIGITS_WC_LEN,
  _NL_CTYPE_INDIGITS0_WC,
  _NL_CTYPE_INDIGITS1_WC,
  _NL_CTYPE_INDIGITS2_WC,
  _NL_CTYPE_INDIGITS3_WC,
  _NL_CTYPE_INDIGITS4_WC,
  _NL_CTYPE_INDIGITS5_WC,
  _NL_CTYPE_INDIGITS6_WC,
  _NL_CTYPE_INDIGITS7_WC,
  _NL_CTYPE_INDIGITS8_WC,
  _NL_CTYPE_INDIGITS9_WC,
  _NL_CTYPE_OUTDIGIT0_MB,
  _NL_CTYPE_OUTDIGIT1_MB,
  _NL_CTYPE_OUTDIGIT2_MB,
  _NL_CTYPE_OUTDIGIT3_MB,
  _NL_CTYPE_OUTDIGIT4_MB,
  _NL_CTYPE_OUTDIGIT5_MB,
  _NL_CTYPE_OUTDIGIT6_MB,
  _NL_CTYPE_OUTDIGIT7_MB,
  _NL_CTYPE_OUTDIGIT8_MB,
  _NL_CTYPE_OUTDIGIT9_MB,
  _NL_CTYPE_OUTDIGIT0_WC,
  _NL_CTYPE_OUTDIGIT1_WC,
  _NL_CTYPE_OUTDIGIT2_WC,
  _NL_CTYPE_OUTDIGIT3_WC,
  _NL_CTYPE_OUTDIGIT4_WC,
  _NL_CTYPE_OUTDIGIT5_WC,
  _NL_CTYPE_OUTDIGIT6_WC,
  _NL_CTYPE_OUTDIGIT7_WC,
  _NL_CTYPE_OUTDIGIT8_WC,
  _NL_CTYPE_OUTDIGIT9_WC,
  _NL_CTYPE_TRANSLIT_TAB_SIZE,
  _NL_CTYPE_TRANSLIT_FROM_IDX,
  _NL_CTYPE_TRANSLIT_FROM_TBL,
  _NL_CTYPE_TRANSLIT_TO_IDX,
  _NL_CTYPE_TRANSLIT_TO_TBL,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING,
  _NL_CTYPE_TRANSLIT_IGNORE_LEN,
  _NL_CTYPE_TRANSLIT_IGNORE,
  _NL_CTYPE_MAP_TO_NONASCII,
  _NL_CTYPE_NONASCII_CASE,
  _NL_CTYPE_EXTRA_MAP_1,
  _NL_CTYPE_EXTRA_MAP_2,
  _NL_CTYPE_EXTRA_MAP_3,
  _NL_CTYPE_EXTRA_MAP_4,
  _NL_CTYPE_EXTRA_MAP_5,
  _NL_CTYPE_EXTRA_MAP_6,
  _NL_CTYPE_EXTRA_MAP_7,
  _NL_CTYPE_EXTRA_MAP_8,
  _NL_CTYPE_EXTRA_MAP_9,
  _NL_CTYPE_EXTRA_MAP_10,
  _NL_CTYPE_EXTRA_MAP_11,
  _NL_CTYPE_EXTRA_MAP_12,
  _NL_CTYPE_EXTRA_MAP_13,
  _NL_CTYPE_EXTRA_MAP_14,
  _NL_NUM_LC_CTYPE,




  __INT_CURR_SYMBOL = (((4) << 16) | (0)),



  __CURRENCY_SYMBOL,



  __MON_DECIMAL_POINT,



  __MON_THOUSANDS_SEP,



  __MON_GROUPING,



  __POSITIVE_SIGN,



  __NEGATIVE_SIGN,



  __INT_FRAC_DIGITS,



  __FRAC_DIGITS,



  __P_CS_PRECEDES,



  __P_SEP_BY_SPACE,



  __N_CS_PRECEDES,



  __N_SEP_BY_SPACE,



  __P_SIGN_POSN,



  __N_SIGN_POSN,



  _NL_MONETARY_CRNCYSTR,

  __INT_P_CS_PRECEDES,



  __INT_P_SEP_BY_SPACE,



  __INT_N_CS_PRECEDES,



  __INT_N_SEP_BY_SPACE,



  __INT_P_SIGN_POSN,



  __INT_N_SIGN_POSN,



  _NL_MONETARY_DUO_INT_CURR_SYMBOL,
  _NL_MONETARY_DUO_CURRENCY_SYMBOL,
  _NL_MONETARY_DUO_INT_FRAC_DIGITS,
  _NL_MONETARY_DUO_FRAC_DIGITS,
  _NL_MONETARY_DUO_P_CS_PRECEDES,
  _NL_MONETARY_DUO_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_N_CS_PRECEDES,
  _NL_MONETARY_DUO_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_P_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_N_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_P_SIGN_POSN,
  _NL_MONETARY_DUO_N_SIGN_POSN,
  _NL_MONETARY_DUO_INT_P_SIGN_POSN,
  _NL_MONETARY_DUO_INT_N_SIGN_POSN,
  _NL_MONETARY_UNO_VALID_FROM,
  _NL_MONETARY_UNO_VALID_TO,
  _NL_MONETARY_DUO_VALID_FROM,
  _NL_MONETARY_DUO_VALID_TO,
  _NL_MONETARY_CONVERSION_RATE,
  _NL_MONETARY_DECIMAL_POINT_WC,
  _NL_MONETARY_THOUSANDS_SEP_WC,
  _NL_MONETARY_CODESET,
  _NL_NUM_LC_MONETARY,



  __DECIMAL_POINT = (((1) << 16) | (0)),



  RADIXCHAR = __DECIMAL_POINT,

  __THOUSANDS_SEP,



  THOUSEP = __THOUSANDS_SEP,

  __GROUPING,



  _NL_NUMERIC_DECIMAL_POINT_WC,
  _NL_NUMERIC_THOUSANDS_SEP_WC,
  _NL_NUMERIC_CODESET,
  _NL_NUM_LC_NUMERIC,

  __YESEXPR = (((5) << 16) | (0)),

  __NOEXPR,

  __YESSTR,



  __NOSTR,



  _NL_MESSAGES_CODESET,
  _NL_NUM_LC_MESSAGES,

  _NL_PAPER_HEIGHT = (((7) << 16) | (0)),
  _NL_PAPER_WIDTH,
  _NL_PAPER_CODESET,
  _NL_NUM_LC_PAPER,

  _NL_NAME_NAME_FMT = (((8) << 16) | (0)),
  _NL_NAME_NAME_GEN,
  _NL_NAME_NAME_MR,
  _NL_NAME_NAME_MRS,
  _NL_NAME_NAME_MISS,
  _NL_NAME_NAME_MS,
  _NL_NAME_CODESET,
  _NL_NUM_LC_NAME,

  _NL_ADDRESS_POSTAL_FMT = (((9) << 16) | (0)),
  _NL_ADDRESS_COUNTRY_NAME,
  _NL_ADDRESS_COUNTRY_POST,
  _NL_ADDRESS_COUNTRY_AB2,
  _NL_ADDRESS_COUNTRY_AB3,
  _NL_ADDRESS_COUNTRY_CAR,
  _NL_ADDRESS_COUNTRY_NUM,
  _NL_ADDRESS_COUNTRY_ISBN,
  _NL_ADDRESS_LANG_NAME,
  _NL_ADDRESS_LANG_AB,
  _NL_ADDRESS_LANG_TERM,
  _NL_ADDRESS_LANG_LIB,
  _NL_ADDRESS_CODESET,
  _NL_NUM_LC_ADDRESS,

  _NL_TELEPHONE_TEL_INT_FMT = (((10) << 16) | (0)),
  _NL_TELEPHONE_TEL_DOM_FMT,
  _NL_TELEPHONE_INT_SELECT,
  _NL_TELEPHONE_INT_PREFIX,
  _NL_TELEPHONE_CODESET,
  _NL_NUM_LC_TELEPHONE,

  _NL_MEASUREMENT_MEASUREMENT = (((11) << 16) | (0)),
  _NL_MEASUREMENT_CODESET,
  _NL_NUM_LC_MEASUREMENT,

  _NL_IDENTIFICATION_TITLE = (((12) << 16) | (0)),
  _NL_IDENTIFICATION_SOURCE,
  _NL_IDENTIFICATION_ADDRESS,
  _NL_IDENTIFICATION_CONTACT,
  _NL_IDENTIFICATION_EMAIL,
  _NL_IDENTIFICATION_TEL,
  _NL_IDENTIFICATION_FAX,
  _NL_IDENTIFICATION_LANGUAGE,
  _NL_IDENTIFICATION_TERRITORY,
  _NL_IDENTIFICATION_AUDIENCE,
  _NL_IDENTIFICATION_APPLICATION,
  _NL_IDENTIFICATION_ABBREVIATION,
  _NL_IDENTIFICATION_REVISION,
  _NL_IDENTIFICATION_DATE,
  _NL_IDENTIFICATION_CATEGORY,
  _NL_IDENTIFICATION_CODESET,
  _NL_NUM_LC_IDENTIFICATION,


  _NL_NUM
};
# 583 "/usr/include/langinfo.h" 3 4
extern char *nl_langinfo (nl_item __item) __attribute__ ((__nothrow__ , __leaf__));
# 594 "/usr/include/langinfo.h" 3 4
extern char *nl_langinfo_l (nl_item __item, __locale_t __l);



# 36 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2


# 1 "/usr/include/monetary.h" 1 3 4
# 26 "/usr/include/monetary.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 27 "/usr/include/monetary.h" 2 3 4
# 35 "/usr/include/monetary.h" 3 4



extern ssize_t strfmon (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__strfmon__, 3, 4)));





extern ssize_t strfmon_l (char *__restrict __s, size_t __maxsize,
     __locale_t __loc,
     const char *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__strfmon__, 4, 5)));







# 39 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2







# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/scanf.h" 1
# 44 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/scanf.h"
 
# 44 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/scanf.h"
      int ValidateFormat(char *format, int numVars, int *totalVars);
 int php_sscanf_internal(char *string,char *format,int argCount,zval ***args,
    int varStart, zval **return_value );
# 47 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/Zend/zend_execute.h" 1
# 49 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2
# 1 "/home/repair/benchmarks/tse-2012/php/src/main/php_globals.h" 1
# 50 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2

# 1 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_smart_str.h" 1
# 153 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/php_smart_str.h"
static inline char *smart_str_print_long(char *buf, long num) {
 char *r;
 do { if (num < 0) { do { char *__p = ((buf)); unsigned long __num = (-(num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); *--(r) = '-'; } else { do { char *__p = ((buf)); unsigned long __num = ((num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); } } while (0);
 return r;
}

static inline char *smart_str_print_unsigned(char *buf, long num) {
 char *r;
 do { char *__p = (buf); unsigned long __num = (num); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); r = __p; } while (0);
 return r;
}
# 52 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 2
# 70 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
void register_string_constants(int type, int module_number )
{
 zend_register_long_constant(("STR_PAD_LEFT"), sizeof("STR_PAD_LEFT"), (0), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("STR_PAD_RIGHT"), sizeof("STR_PAD_RIGHT"), (1), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("STR_PAD_BOTH"), sizeof("STR_PAD_BOTH"), (2), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("PATHINFO_DIRNAME"), sizeof("PATHINFO_DIRNAME"), (1), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("PATHINFO_BASENAME"), sizeof("PATHINFO_BASENAME"), (2), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("PATHINFO_EXTENSION"), sizeof("PATHINFO_EXTENSION"), (4), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("PATHINFO_FILENAME"), sizeof("PATHINFO_FILENAME"), (8), ((1<<0) | (1<<1)), module_number );
# 88 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 zend_register_long_constant(("CHAR_MAX"), sizeof("CHAR_MAX"), (0x7f), ((1<<0) | (1<<1)), module_number );



 zend_register_long_constant(("LC_CTYPE"), sizeof("LC_CTYPE"), (
# 92 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
0
# 92 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LC_NUMERIC"), sizeof("LC_NUMERIC"), (
# 93 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
1
# 93 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LC_TIME"), sizeof("LC_TIME"), (
# 94 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
2
# 94 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LC_COLLATE"), sizeof("LC_COLLATE"), (
# 95 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
3
# 95 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LC_MONETARY"), sizeof("LC_MONETARY"), (
# 96 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
4
# 96 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LC_ALL"), sizeof("LC_ALL"), (
# 97 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
6
# 97 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );

 zend_register_long_constant(("LC_MESSAGES"), sizeof("LC_MESSAGES"), (
# 99 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
5
# 99 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );



}


int php_tag_find(char *tag, int len, char *set);


static char hexconvtab[] = "0123456789abcdef";
# 118 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
static char *php_bin2hex(const unsigned char *old, const size_t oldlen, size_t *newlen)
{
 register unsigned char *result = 
# 120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                 ((void *)0)
# 120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                     ;
 size_t i, j;

 result = (char *) _safe_emalloc((oldlen * 2), (sizeof(char)), (1) );

 for (i = j = 0; i < oldlen; i++) {
  result[j++] = hexconvtab[old[i] >> 4];
  result[j++] = hexconvtab[old[i] & 15];
 }
 result[j] = '\0';

 if (newlen)
  *newlen = oldlen * 2 * sizeof(char);

 return result;
}





 struct lconv *localeconv_r(struct lconv *out)
{
 struct lconv *res;






 res = localeconv();

 *out = *res;





 return out;
}
# 186 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
void zif_bin2hex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **data;
 char *result;
 size_t newlen;

 if ((ht) != 1 || zend_get_parameters_ex(1, &data) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*data)->type!=6) { if (!((*data)->is_ref)) { { zval *orig_ptr = *(data); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(data)) = (zval *) _emalloc((sizeof(zval)) ); **(data) = *orig_ptr; _zval_copy_ctor((*(data)) ); (*(data))->refcount=1; (*(data))->is_ref = 0; } }; }; if ((*data)->type != 6) { _convert_to_string((*data) ); }; };

 result = php_bin2hex((**data).value.str.val, (**data).value.str.len, &newlen);

 if (!result) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 { { char *__s=(result); int __l=newlen; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}


static void php_spn_common_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int behavior)
{
 char *s11, *s22;
 int len1, len2;
 long start, len;

 start = 0;
 len = 0;
 if (zend_parse_parameters((ht) , "ss|ll", &s11, &len1,
    &s22, &len2, &start, &len) == -1) {
  return;
 }

 if ((ht) < 4) {
  len = len1;
 }



 if (start < 0) {
  start += len1;
  if (start < 0) {
   start = 0;
  }
 } else if (start > len1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (len < 0) {
  len += (len1 - start);
  if (len < 0) {
   len = 0;
  }
 }

 if ((start + len) > len1) {
  len = len1 - start;
 }

 if (behavior == 0) {
  { { (*return_value).type = 1; (*return_value).value.lval = php_strspn(s11 + start , s22 , s11 + start + len , s22 + len2 ); }; return; }


                               ;
 } else if (behavior == 1) {
  { { (*return_value).type = 1; (*return_value).value.lval = php_strcspn(s11 + start , s22 , s11 + start + len , s22 + len2 ); }; return; }


                               ;
 }

}



void zif_strspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_spn_common_handler(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_strcspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_spn_common_handler(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




int zm_startup_nl_langinfo(int type, int module_number )
{


 zend_register_long_constant(("ABDAY_1"), sizeof("ABDAY_1"), (
# 282 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABDAY_1
# 282 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABDAY_2"), sizeof("ABDAY_2"), (
# 283 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABDAY_2
# 283 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABDAY_3"), sizeof("ABDAY_3"), (
# 284 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABDAY_3
# 284 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABDAY_4"), sizeof("ABDAY_4"), (
# 285 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABDAY_4
# 285 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABDAY_5"), sizeof("ABDAY_5"), (
# 286 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABDAY_5
# 286 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABDAY_6"), sizeof("ABDAY_6"), (
# 287 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABDAY_6
# 287 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABDAY_7"), sizeof("ABDAY_7"), (
# 288 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABDAY_7
# 288 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("DAY_1"), sizeof("DAY_1"), (
# 291 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
DAY_1
# 291 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("DAY_2"), sizeof("DAY_2"), (
# 292 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
DAY_2
# 292 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("DAY_3"), sizeof("DAY_3"), (
# 293 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
DAY_3
# 293 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("DAY_4"), sizeof("DAY_4"), (
# 294 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
DAY_4
# 294 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("DAY_5"), sizeof("DAY_5"), (
# 295 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
DAY_5
# 295 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("DAY_6"), sizeof("DAY_6"), (
# 296 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
DAY_6
# 296 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("DAY_7"), sizeof("DAY_7"), (
# 297 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
DAY_7
# 297 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("ABMON_1"), sizeof("ABMON_1"), (
# 300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_1
# 300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_2"), sizeof("ABMON_2"), (
# 301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_2
# 301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_3"), sizeof("ABMON_3"), (
# 302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_3
# 302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_4"), sizeof("ABMON_4"), (
# 303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_4
# 303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_5"), sizeof("ABMON_5"), (
# 304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_5
# 304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_6"), sizeof("ABMON_6"), (
# 305 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_6
# 305 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_7"), sizeof("ABMON_7"), (
# 306 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_7
# 306 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_8"), sizeof("ABMON_8"), (
# 307 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_8
# 307 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_9"), sizeof("ABMON_9"), (
# 308 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_9
# 308 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_10"), sizeof("ABMON_10"), (
# 309 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_10
# 309 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_11"), sizeof("ABMON_11"), (
# 310 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_11
# 310 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ABMON_12"), sizeof("ABMON_12"), (
# 311 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ABMON_12
# 311 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("MON_1"), sizeof("MON_1"), (
# 314 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_1
# 314 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_2"), sizeof("MON_2"), (
# 315 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_2
# 315 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_3"), sizeof("MON_3"), (
# 316 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_3
# 316 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_4"), sizeof("MON_4"), (
# 317 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_4
# 317 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_5"), sizeof("MON_5"), (
# 318 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_5
# 318 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_6"), sizeof("MON_6"), (
# 319 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_6
# 319 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_7"), sizeof("MON_7"), (
# 320 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_7
# 320 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_8"), sizeof("MON_8"), (
# 321 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_8
# 321 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_9"), sizeof("MON_9"), (
# 322 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_9
# 322 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_10"), sizeof("MON_10"), (
# 323 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_10
# 323 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_11"), sizeof("MON_11"), (
# 324 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_11
# 324 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("MON_12"), sizeof("MON_12"), (
# 325 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
MON_12
# 325 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("AM_STR"), sizeof("AM_STR"), (
# 328 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
AM_STR
# 328 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("PM_STR"), sizeof("PM_STR"), (
# 331 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
PM_STR
# 331 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("D_T_FMT"), sizeof("D_T_FMT"), (
# 334 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
D_T_FMT
# 334 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("D_FMT"), sizeof("D_FMT"), (
# 337 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
D_FMT
# 337 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("T_FMT"), sizeof("T_FMT"), (
# 340 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
T_FMT
# 340 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("T_FMT_AMPM"), sizeof("T_FMT_AMPM"), (
# 343 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
T_FMT_AMPM
# 343 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("ERA"), sizeof("ERA"), (
# 346 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ERA
# 346 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );





 zend_register_long_constant(("ERA_D_T_FMT"), sizeof("ERA_D_T_FMT"), (
# 352 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ERA_D_T_FMT
# 352 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("ERA_D_FMT"), sizeof("ERA_D_FMT"), (
# 355 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ERA_D_FMT
# 355 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("ERA_T_FMT"), sizeof("ERA_T_FMT"), (
# 358 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ERA_T_FMT
# 358 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("ALT_DIGITS"), sizeof("ALT_DIGITS"), (
# 361 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
ALT_DIGITS
# 361 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
# 370 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 zend_register_long_constant(("CRNCYSTR"), sizeof("CRNCYSTR"), (
# 370 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
_NL_MONETARY_CRNCYSTR
# 370 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
# 415 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 zend_register_long_constant(("RADIXCHAR"), sizeof("RADIXCHAR"), (
# 415 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
RADIXCHAR
# 415 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );





 zend_register_long_constant(("THOUSEP"), sizeof("THOUSEP"), (
# 421 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
THOUSEP
# 421 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );





 zend_register_long_constant(("YESEXPR"), sizeof("YESEXPR"), (
# 427 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
__YESEXPR
# 427 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("NOEXPR"), sizeof("NOEXPR"), (
# 430 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
__NOEXPR
# 430 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );
# 439 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 zend_register_long_constant(("CODESET"), sizeof("CODESET"), (
# 439 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
CODESET
# 439 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), ((1<<0) | (1<<1)), module_number );


 return 0;
}




void zif_nl_langinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **item;
 char *value;

 if ((ht) != 1 || zend_get_parameters_ex(1, &item) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*item)->type!=1) { if (!((*item)->is_ref)) { { zval *orig_ptr = *(item); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(item)) = (zval *) _emalloc((sizeof(zval)) ); **(item) = *orig_ptr; _zval_copy_ctor((*(item)) ); (*(item))->refcount=1; (*(item))->is_ref = 0; } }; }; convert_to_long(*item); };

 value = nl_langinfo((**item).value.lval);
 if (value == 
# 459 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ((void *)0)
# 459 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                 ) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 } else {
  { { char *__s=(value); (return_value)->value.str.len = strlen(__s); (return_value)->value.str.val = (1?_estrndup((__s), ((return_value)->value.str.len) ):__s); (return_value)->type = 6; }; return; };
 }
}






void zif_strcoll(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **s1, **s2;

 if ((ht)!=2 || zend_get_parameters_ex(2, &s1, &s2) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*s1)->type!=6) { if (!((*s1)->is_ref)) { { zval *orig_ptr = *(s1); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(s1)) = (zval *) _emalloc((sizeof(zval)) ); **(s1) = *orig_ptr; _zval_copy_ctor((*(s1)) ); (*(s1))->refcount=1; (*(s1))->is_ref = 0; } }; }; if ((*s1)->type != 6) { _convert_to_string((*s1) ); }; };
 if ((*s2)->type!=6) { if (!((*s2)->is_ref)) { { zval *orig_ptr = *(s2); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(s2)) = (zval *) _emalloc((sizeof(zval)) ); **(s2) = *orig_ptr; _zval_copy_ctor((*(s2)) ); (*(s2))->refcount=1; (*(s2))->is_ref = 0; } }; }; if ((*s2)->type != 6) { _convert_to_string((*s2) ); }; };

 { { (*return_value).type = 1; (*return_value).value.lval = strcoll((const char *) (**s1).value.str.val, (const char *) (**s2).value.str.val); }; return; }
                                                     ;
}
# 492 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
static inline int php_charmask(unsigned char *input, int len, char *mask )
{
 unsigned char *end;
 unsigned char c;
 int result = 0;

 memset(mask, 0, 256);
 for (end = input+len; input < end; input++) {
  c=*input;
  if ((input+3 < end) && input[1] == '.' && input[2] == '.'
    && input[3] >= c) {
   memset(mask+c, 1, input[3] - c + 1);
   input+=3;
  } else if ((input+1 < end) && input[0] == '.' && input[1] == '.') {


   if (end-len >= input) {
    php_error_docref0(
# 509 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 509 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<1L), "Invalid '..'-range, no character to the left of '..'.");
    result = -1;
    continue;
   }
   if (input+2 >= end) {
    php_error_docref0(
# 514 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 514 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<1L), "Invalid '..'-range, no character to the right of '..'.");
    result = -1;
    continue;
   }
   if (input[-1] > input[2]) {
    php_error_docref0(
# 519 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 519 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<1L), "Invalid '..'-range, '..'-range needs to be incrementing.");
    result = -1;
    continue;
   }

   php_error_docref0(
# 524 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 524 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Invalid '..'-range.");
   result = -1;
   continue;
  } else {
   mask[c]=1;
  }
 }
 return result;
}
# 541 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 char *php_trim(char *c, int len, char *what, int what_len, zval *return_value, int mode )
{
 register int i;
 int trimmed = 0;
 char mask[256];

 if (what) {
  php_charmask(what, what_len, mask );
 } else {
  php_charmask(" \n\r\t\v\0", 6, mask );
 }

 if (mode & 1) {
  for (i = 0; i < len; i++) {
   if (mask[(unsigned char)c[i]]) {
    trimmed++;
   } else {
    break;
   }
  }
  len -= trimmed;
  c += trimmed;
 }
 if (mode & 2) {
  for (i = len - 1; i >= 0; i--) {
   if (mask[(unsigned char)c[i]]) {
    len--;
   } else {
    break;
   }
  }
 }

 if (return_value) {
  { char *__s=(c); int __l=len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
 } else {
  return _estrndup((c), (len) );
 }
 return "";
}





static void php_do_trim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int mode)
{
 zval **str;
 zval **what = 
# 589 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0)
# 589 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ;
 int argc = (ht);

 if (argc < 1 || argc > 2 || zend_get_parameters_ex(argc, &str, &what) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 if (argc > 1) {
  if ((*what)->type!=6) { if (!((*what)->is_ref)) { { zval *orig_ptr = *(what); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(what)) = (zval *) _emalloc((sizeof(zval)) ); **(what) = *orig_ptr; _zval_copy_ctor((*(what)) ); (*(what))->refcount=1; (*(what))->is_ref = 0; } }; }; if ((*what)->type != 6) { _convert_to_string((*what) ); }; };
  php_trim((**str).value.str.val, (**str).value.str.len, (**what).value.str.val, (**what).value.str.len, return_value, mode );
 } else {
  php_trim((**str).value.str.val, (**str).value.str.len, 
# 602 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                              ((void *)0)
# 602 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                  , 0, return_value, mode );
 }
}




void zif_trim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_do_trim(ht, return_value, return_value_ptr, this_ptr, return_value_used , 3);
}




void zif_rtrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_do_trim(ht, return_value, return_value_ptr, this_ptr, return_value_used , 2);
}




void zif_ltrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_do_trim(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zif_wordwrap(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 const char *text, *breakchar = "\n";
 char *newtext;
 int textlen, breakcharlen = 1, newtextlen, chk;
 size_t alloced;
 long current = 0, laststart = 0, lastspace = 0;
 long linelength = 75;
 zend_bool docut = 0;

 if (zend_parse_parameters((ht) , "s|lsb", &text, &textlen, &linelength, &breakchar, &breakcharlen, &docut) == -1) {
  return;
 }

 if (textlen == 0) {
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }

 if (linelength == 0 && docut) {
  php_error_docref0(
# 652 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 652 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "Can't force cut when width is zero.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }



 if (breakcharlen == 1 && !docut) {
  newtext = _estrndup((text), (textlen) );

  laststart = lastspace = 0;
  for (current = 0; current < textlen; current++) {
   if (text[current] == breakchar[0]) {
    laststart = lastspace = current;
   } else if (text[current] == ' ') {
    if (current - laststart >= linelength) {
     newtext[current] = breakchar[0];
     laststart = current + 1;
    }
    lastspace = current;
   } else if (current - laststart >= linelength && laststart != lastspace) {
    newtext[lastspace] = breakchar[0];
    laststart = lastspace + 1;
   }
  }

  { { char *__s=(newtext); int __l=textlen; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 } else {

  if (linelength > 0) {
   chk = (int)(textlen/linelength + 1);
   newtext = _safe_emalloc((chk), (breakcharlen), (textlen + 1) );
   alloced = textlen + chk * breakcharlen + 1;
  } else {
   chk = textlen;
   alloced = textlen * (breakcharlen + 1) + 1;
   newtext = _safe_emalloc((textlen), ((breakcharlen + 1)), (1) );
  }


  newtextlen = 0;

  laststart = lastspace = 0;
  for (current = 0; current < textlen; current++) {
   if (chk <= 0) {
    alloced += (int) (((textlen - current + 1)/linelength + 1) * breakcharlen) + 1;
    newtext = _erealloc((newtext), (alloced), 0 );
    chk = (int) ((textlen - current)/linelength) + 1;
   }


   if (text[current] == breakchar[0]
    && current + breakcharlen < textlen
    && !
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       (__extension__ (__builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakcharlen
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && ((__builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && strlen (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) < ((size_t) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakcharlen
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))) || (__builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && strlen (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) < ((size_t) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakcharlen
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       )))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && __builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && (__s1_len = strlen (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ), __s2_len = strlen (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ), (!((size_t)(const void *)((
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) + 1) - (size_t)(const void *)(
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) + 1) - (size_t)(const void *)(
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) == 1) || __s2_len >= 4)) ? __builtin_strcmp (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       , 
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) : (__builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && ((size_t)(const void *)((
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) + 1) - (size_t)(const void *)(
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) == 1) && (__s1_len = strlen (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ), __s1_len < 4) ? (__builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && ((size_t)(const void *)((
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) + 1) - (size_t)(const void *)(
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) == 1) ? __builtin_strcmp (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       , 
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ); int __result = (((const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && ((size_t)(const void *)((
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) + 1) - (size_t)(const void *)(
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) == 1) && (__s2_len = strlen (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ), __s2_len < 4) ? (__builtin_constant_p (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) && ((size_t)(const void *)((
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) + 1) - (size_t)(const void *)(
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) == 1) ? __builtin_strcmp (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       , 
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ); int __result = (((const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       , 
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       )))); }) : strncmp (
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       text+current
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       , 
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakchar
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       , 
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       breakcharlen
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       )))
# 704 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                     ) {
    memcpy(newtext+newtextlen, text+laststart, current-laststart+breakcharlen);
    newtextlen += current-laststart+breakcharlen;
    current += breakcharlen - 1;
    laststart = lastspace = current + 1;
    chk--;
   }


   else if (text[current] == ' ') {
    if (current - laststart >= linelength) {
     memcpy(newtext+newtextlen, text+laststart, current-laststart);
     newtextlen += current - laststart;
     memcpy(newtext+newtextlen, breakchar, breakcharlen);
     newtextlen += breakcharlen;
     laststart = current + 1;
     chk--;
    }
    lastspace = current;
   }



   else if (current - laststart >= linelength
     && docut && laststart >= lastspace) {
    memcpy(newtext+newtextlen, text+laststart, current-laststart);
    newtextlen += current - laststart;
    memcpy(newtext+newtextlen, breakchar, breakcharlen);
    newtextlen += breakcharlen;
    laststart = lastspace = current;
    chk--;
   }



   else if (current - laststart >= linelength
     && laststart < lastspace) {
    memcpy(newtext+newtextlen, text+laststart, lastspace-laststart);
    newtextlen += lastspace - laststart;
    memcpy(newtext+newtextlen, breakchar, breakcharlen);
    newtextlen += breakcharlen;
    laststart = lastspace = lastspace + 1;
    chk--;
   }
  }


  if (laststart != current) {
   memcpy(newtext+newtextlen, text+laststart, current-laststart);
   newtextlen += current - laststart;
  }

  newtext[newtextlen] = '\0';

  newtext = _erealloc((newtext), (newtextlen+1), 0 );

  { { char *__s=(newtext); int __l=newtextlen; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 }
}




 void php_explode(zval *delim, zval *str, zval *return_value, int limit)
{
 char *p1, *p2, *endp;

 endp = (*str).value.str.val + (*str).value.str.len;

 p1 = (*str).value.str.val;
 p2 = zend_memnstr((*str).value.str.val, (*delim).value.str.val, (*delim).value.str.len, endp);

 if (p2 == 
# 776 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
          ((void *)0)
# 776 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
              ) {
  add_next_index_stringl(return_value, p1, (*str).value.str.len, 1);
 } else {
  do {
   add_next_index_stringl(return_value, p1, p2 - p1, 1);
   p1 = p2 + (*delim).value.str.len;
  } while ((p2 = zend_memnstr(p1, (*delim).value.str.val, (*delim).value.str.len, endp)) != 
# 782 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                                                ((void *)0) 
# 782 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                                     &&
     (limit == -1 || --limit > 1));

  if (p1 <= endp)
   add_next_index_stringl(return_value, p1, endp-p1, 1);
 }
}




 void php_explode_negative_limit(zval *delim, zval *str, zval *return_value, int limit)
{

 char *p1, *p2, *endp;
 int allocated = 50, found = 0, i = 0, to_return = 0;
 char **positions = _safe_emalloc((allocated), (sizeof(char *)), (0) );

 endp = (*str).value.str.val + (*str).value.str.len;

 p1 = (*str).value.str.val;
 p2 = zend_memnstr((*str).value.str.val, (*delim).value.str.val, (*delim).value.str.len, endp);

 if (p2 == 
# 805 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
          ((void *)0)
# 805 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
              ) {




 } else {
  positions[found++] = p1;
  do {
   if (found >= allocated) {
    allocated = found + 50;
    positions = _erealloc((positions), (allocated*sizeof(char *)), 0 );
   }
   positions[found++] = p1 = p2 + (*delim).value.str.len;
  } while ((p2 = zend_memnstr(p1, (*delim).value.str.val, (*delim).value.str.len, endp)) != 
# 818 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                                                ((void *)0)
# 818 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                                    );

  to_return = limit + found;

  for (i = 0;i < to_return;i++) {
   add_next_index_stringl(return_value, positions[i],
     (positions[i+1] - (*delim).value.str.len) - positions[i],
     1
    );
  }
 }
 _efree((positions) );

}





void zif_explode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str, **delim, **zlimit = 
# 839 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                ((void *)0)
# 839 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                    ;
 int limit = -1;
 int argc = (ht);

 if (argc < 2 || argc > 3 || zend_get_parameters_ex(argc, &delim, &str, &zlimit) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };
 if ((*delim)->type!=6) { if (!((*delim)->is_ref)) { { zval *orig_ptr = *(delim); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(delim)) = (zval *) _emalloc((sizeof(zval)) ); **(delim) = *orig_ptr; _zval_copy_ctor((*(delim)) ); (*(delim))->refcount=1; (*(delim))->is_ref = 0; } }; }; if ((*delim)->type != 6) { _convert_to_string((*delim) ); }; };

 if (argc > 2) {
  if ((*zlimit)->type!=1) { if (!((*zlimit)->is_ref)) { { zval *orig_ptr = *(zlimit); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(zlimit)) = (zval *) _emalloc((sizeof(zval)) ); **(zlimit) = *orig_ptr; _zval_copy_ctor((*(zlimit)) ); (*(zlimit))->refcount=1; (*(zlimit))->is_ref = 0; } }; }; convert_to_long(*zlimit); };
  limit = (**zlimit).value.lval;
 }

 if (! (**delim).value.str.len) {
  php_error_docref0(
# 855 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 855 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "Empty delimiter.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 _array_init((return_value) );

 if (! (**str).value.str.len) {
  add_next_index_stringl(return_value, "", sizeof("") - 1, 1);
  return;
 }


 if (limit == 0 || limit == 1) {
  add_index_stringl(return_value, 0, (**str).value.str.val, (**str).value.str.len, 1);
 } else if (limit < 0 && argc == 3) {
  php_explode_negative_limit(*delim, *str, return_value, limit);
 } else {
  php_explode(*delim, *str, return_value, limit);
 }
}
# 883 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 void php_implode(zval *delim, zval *arr, zval *return_value )
{
 zval **tmp;
 HashPosition pos;
 smart_str implstr = {0};
 int numelems, i = 0;
 zval tmp_val;
 int str_len;

 numelems = zend_hash_num_elements((*arr).value.ht);

 if (numelems == 0) {
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }

 zend_hash_internal_pointer_reset_ex((*arr).value.ht, &pos);

 while (zend_hash_get_current_data_ex((*arr).value.ht, (void **) &tmp, &pos) == 0) {
  switch ((*tmp)->type) {
   case 6:
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((((**tmp).value.str.len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((((**tmp).value.str.len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (((**tmp).value.str.val)), (((**tmp).value.str.len))); __dest->len = __nl; } while (0);
    break;

   case 1: {
    char stmp[20 + 1];
    str_len = php_sprintf(stmp, "%ld", (**tmp).value.lval);
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((str_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((str_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((stmp)), ((str_len))); __dest->len = __nl; } while (0);
   }
    break;

   case 3:
    if ((**tmp).value.lval == 1) {
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((sizeof("1")-1))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((sizeof("1")-1))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("1")), ((sizeof("1")-1))); __dest->len = __nl; } while (0);
    }
    break;

   case 0:
    break;

   case 2: {
    char *stmp;
    str_len = spprintf(&stmp, 0, "%.*G", (int) (executor_globals.precision), (**tmp).value.dval);
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((str_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((str_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((stmp)), ((str_len))); __dest->len = __nl; } while (0);
    _efree((stmp) );
   }
    break;

   case 5: {
    int copy;
    zval expr;
    zend_make_printable_zval(*tmp, &expr, &copy);
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((((expr).value.str.len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((((expr).value.str.len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (((expr).value.str.val)), (((expr).value.str.len))); __dest->len = __nl; } while (0);
    if (copy) {
     _zval_dtor((&expr) );
    }
   }
    break;

   default:
    tmp_val = **tmp;
    _zval_copy_ctor((&tmp_val) );
    if ((&tmp_val)->type != 6) { _convert_to_string((&tmp_val) ); };
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((((tmp_val).value.str.len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((((tmp_val).value.str.len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (((tmp_val).value.str.val)), (((tmp_val).value.str.len))); __dest->len = __nl; } while (0);
    _zval_dtor((&tmp_val) );
    break;

  }

  if (++i != numelems) {
   do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((((*delim).value.str.len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((((*delim).value.str.len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (((*delim).value.str.val)), (((*delim).value.str.len))); __dest->len = __nl; } while (0);
  }
  zend_hash_move_forward_ex((*arr).value.ht, &pos);
 }
 do { if ((&implstr)->c) { (&implstr)->c[(&implstr)->len] = '\0'; } } while (0);

 if (implstr.len) {
  { { char *__s=(implstr.c); int __l=implstr.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 } else {
  do { smart_str *__s = (smart_str *) ((&implstr)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = 
# 961 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
 ((void *)0)
# 961 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 ; } __s->a = __s->len = 0; } while (0);
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }
}




void zif_implode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **arg1 = 
# 971 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0)
# 971 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  , **arg2 = 
# 971 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                             ((void *)0)
# 971 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , *delim, *arr;
 int argc = (ht);
 HashPosition pos;

 if (argc < 1 || argc > 2 ||
  zend_get_parameters_ex(argc, &arg1, &arg2) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if (argc == 1) {
  if ((**arg1).type != 4) {
   php_error_docref0(
# 982 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 982 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Argument to implode must be an array.");
   return;
  }

  (delim) = (zval *) _emalloc((sizeof(zval)) ); (delim)->refcount = 1; (delim)->is_ref = 0;;;

  { char *__s=(""); int __l=sizeof("") - 1; (delim)->value.str.len = __l; (delim)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (delim)->type = 6; };

  { zval *orig_ptr = *(arg1); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(arg1)) = (zval *) _emalloc((sizeof(zval)) ); **(arg1) = *orig_ptr; _zval_copy_ctor((*(arg1)) ); (*(arg1))->refcount=1; (*(arg1))->is_ref = 0; } };
  arr = *arg1;
 } else {
  if ((**arg1).type == 4) {
   arr = *arg1;
   if ((*arg2)->type!=6) { if (!((*arg2)->is_ref)) { { zval *orig_ptr = *(arg2); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(arg2)) = (zval *) _emalloc((sizeof(zval)) ); **(arg2) = *orig_ptr; _zval_copy_ctor((*(arg2)) ); (*(arg2))->refcount=1; (*(arg2))->is_ref = 0; } }; }; if ((*arg2)->type != 6) { _convert_to_string((*arg2) ); }; };
   delim = *arg2;
  } else if ((**arg2).type == 4) {
   arr = *arg2;
   if ((*arg1)->type!=6) { if (!((*arg1)->is_ref)) { { zval *orig_ptr = *(arg1); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(arg1)) = (zval *) _emalloc((sizeof(zval)) ); **(arg1) = *orig_ptr; _zval_copy_ctor((*(arg1)) ); (*(arg1))->refcount=1; (*(arg1))->is_ref = 0; } }; }; if ((*arg1)->type != 6) { _convert_to_string((*arg1) ); }; };
   delim = *arg1;
  } else {
   php_error_docref0(
# 1002 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 1002 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Bad arguments.");
   return;
  }
 }

 pos = (*arr).value.ht->pInternalPointer;

 php_implode(delim, arr, return_value );

 (*arr).value.ht->pInternalPointer = pos;

 if (argc == 1) {
  _efree((delim) );
 }
}






void zif_strtok(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **args[2];
 zval **tok, **str;
 char *token;
 char *token_end;
 char *p;
 char *pe;
 int skipped = 0;

 if ((ht) < 1 || (ht) > 2 || _zend_get_parameters_array_ex((ht), args ) == -1) {
  { zend_wrong_param_count(); return; };
 }

 switch ((ht)) {
  case 1:
   tok = args[0];
   break;

  default:
  case 2:
   str = args[0];
   tok = args[1];
   if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

   zval_add_ref(str);
   if ((basic_globals.strtok_zval)) {
    _zval_ptr_dtor((&(basic_globals.strtok_zval)) );
   }
   (basic_globals.strtok_zval) = *str;
   (basic_globals.strtok_last) = (basic_globals.strtok_string) = (**str).value.str.val;
   (basic_globals.strtok_len) = (**str).value.str.len;
   break;
 }

 p = (basic_globals.strtok_last);
 pe = (basic_globals.strtok_string) + (basic_globals.strtok_len);

 if (!p || p >= pe) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((*tok)->type!=6) { if (!((*tok)->is_ref)) { { zval *orig_ptr = *(tok); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(tok)) = (zval *) _emalloc((sizeof(zval)) ); **(tok) = *orig_ptr; _zval_copy_ctor((*(tok)) ); (*(tok))->refcount=1; (*(tok))->is_ref = 0; } }; }; if ((*tok)->type != 6) { _convert_to_string((*tok) ); }; };

 token = (**tok).value.str.val;
 token_end = token + (**tok).value.str.len;

 while (token < token_end) {
  (basic_globals.strtok_table)[(unsigned char) *token++] = 1;
 }


 while ((basic_globals.strtok_table)[(unsigned char) *p]) {
  if (++p >= pe) {

   (basic_globals.strtok_last) = 
# 1078 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0)
# 1078 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                        ;
   { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
   goto restore;
  }
  skipped++;
 }


 while (++p < pe) {
  if ((basic_globals.strtok_table)[(unsigned char) *p]) {
   goto return_token;
  }
 }

 if (p - (basic_globals.strtok_last)) {
return_token:
  { char *__s=((basic_globals.strtok_last) + skipped); int __l=(p - (basic_globals.strtok_last)) - skipped; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
  (basic_globals.strtok_last) = p + 1;
 } else {
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
  (basic_globals.strtok_last) = 
# 1098 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0)
# 1098 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                       ;
 }


restore:
 token = (**tok).value.str.val;

 while (token < token_end) {
  (basic_globals.strtok_table)[(unsigned char) *token++] = 0;
 }
}




 char *php_strtoupper(char *s, size_t len)
{
 unsigned char *c, *e;

 c = s;
 e = c+len;

 while (c < e) {
  *c = 
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      (__extension__ ({ int __res; if (sizeof (
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) > 1) { if (__builtin_constant_p (
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )) { int __c = (
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper (
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); } else __res = (*__ctype_toupper_loc ())[(int) (
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )]; __res; }))
# 1121 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                 ;
  c++;
 }
 return s;
}




void zif_strtoupper(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **arg;

 if ((ht) != 1 || zend_get_parameters_ex(1, &arg)) {
  { zend_wrong_param_count(); return; };
 }
 if ((*arg)->type!=6) { if (!((*arg)->is_ref)) { { zval *orig_ptr = *(arg); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(arg)) = (zval *) _emalloc((sizeof(zval)) ); **(arg) = *orig_ptr; _zval_copy_ctor((*(arg)) ); (*(arg))->refcount=1; (*(arg))->is_ref = 0; } }; }; if ((*arg)->type != 6) { _convert_to_string((*arg) ); }; };

 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*arg); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**arg).type = 0; }; } _zval_ptr_dtor((&*arg) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
 php_strtoupper((*return_value).value.str.val, (*return_value).value.str.len);
}




 char *php_strtolower(char *s, size_t len)
{
 unsigned char *c, *e;

 c = s;
 e = c+len;

 while (c < e) {
  *c = 
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      (__extension__ ({ int __res; if (sizeof (
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) > 1) { if (__builtin_constant_p (
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )) { int __c = (
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *c
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )]; __res; }))
# 1154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                 ;
  c++;
 }
 return s;
}




void zif_strtolower(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;
 char *ret;

 if ((ht) != 1 || zend_get_parameters_ex(1, &str)) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*str); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**str).type = 0; }; } _zval_ptr_dtor((&*str) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
 ret = php_strtolower((*return_value).value.str.val, (*return_value).value.str.len);
}




 void php_basename(char *s, size_t len, char *suffix, size_t sufflen, char **p_ret, size_t *p_len )
{
 char *ret = 
# 1182 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
            ((void *)0)
# 1182 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                , *c, *comp, *cend;
 size_t inc_len, cnt;
 int state;

 c = comp = cend = s;
 cnt = len;
 state = 0;
 while (cnt > 0) {
  inc_len = (*c == '\0' ? 1: mblen(c, cnt));

  switch (inc_len) {
   case -2:
   case -1:
    inc_len = 1;
    mblen(
# 1196 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
   ((void *)0)
# 1196 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
   , 0);
    break;
   case 0:
    goto quit_loop;
   case 1:



    if (*c == '/') {

     if (state == 1) {
      state = 0;
      cend = c;
     }
    } else {
     if (state == 0) {
      comp = c;
      state = 1;
     }
    }
    break;
   default:
    if (state == 0) {
     comp = c;
     state = 1;
    }
    break;
  }
  c += inc_len;
  cnt -= inc_len;
 }

quit_loop:
 if (state == 1) {
  cend = c;
 }
 if (suffix != 
# 1232 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0) 
# 1232 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                   && sufflen < (uint)(cend - comp) &&
   memcmp(cend - sufflen, suffix, sufflen) == 0) {
  cend -= sufflen;
 }

 len = cend - comp;

 if (p_ret) {
  ret = _emalloc((len + 1) );
  memcpy(ret, comp, len);
  ret[len] = '\0';
  *p_ret = ret;
 }
 if (p_len) {
  *p_len = len;
 }
}




void zif_basename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *string, *suffix = 
# 1255 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                        ((void *)0)
# 1255 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                            , *ret;
 int string_len, suffix_len = 0;
 size_t ret_len;

 if (zend_parse_parameters((ht) , "s|s", &string, &string_len, &suffix, &suffix_len) == -1) {
  return;
 }

 php_basename(string, string_len, suffix, suffix_len, &ret, &ret_len );
 { { char *__s=(ret); int __l=(int)ret_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}




 size_t php_dirname(char *path, size_t len)
{
 register char *end = path + len - 1;
 unsigned int len_adjust = 0;
# 1309 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 if (len == 0) {

  return 0;
 }


 while (end >= path && (*(end) == '/')) {
  end--;
 }
 if (end < path) {

  path[0] = '/';
  path[1] = '\0';
  return 1 + len_adjust;
 }


 while (end >= path && !(*(end) == '/')) {
  end--;
 }
 if (end < path) {
# 1342 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
  path[0] = '.';
  path[1] = '\0';
  return 1 + len_adjust;

 }


 while (end >= path && (*(end) == '/')) {
  end--;
 }
 if (end < path) {
  path[0] = '/';
  path[1] = '\0';
  return 1 + len_adjust;
 }
 *(end+1) = '\0';

 return (size_t)(end + 1 - path) + len_adjust;
}




void zif_dirname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;
 char *ret;
 size_t ret_len;

 if ((ht) != 1 || zend_get_parameters_ex(1, &str) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 ret = _estrndup(((**str).value.str.val), ((**str).value.str.len) );
 ret_len = php_dirname(ret, (**str).value.str.len);

 { { char *__s=(ret); int __l=ret_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}




void zif_pathinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *tmp;
 char *path, *ret = 
# 1388 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0)
# 1388 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                       ;
 int path_len, have_basename;
 size_t ret_len;
 long opt = (1 | 2 | 4 | 8);

 if (zend_parse_parameters((ht) , "s|l", &path, &path_len, &opt) == -1) {
  return;
 }

 have_basename = ((opt & 2) == 2);

 (tmp) = (zval *) _emalloc((sizeof(zval)) ); (tmp)->refcount = 1; (tmp)->is_ref = 0;;;
 _array_init((tmp) );

 if ((opt & 1) == 1) {
  ret = _estrndup((path), (path_len) );
  php_dirname(ret, path_len);
  if (*ret) {
   add_assoc_string_ex(tmp, "dirname", strlen("dirname")+1, ret, 1);
  }
  _efree((ret) );
  ret = 
# 1409 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ((void *)0)
# 1409 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
           ;
 }

 if (have_basename) {
  php_basename(path, path_len, 
# 1413 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                              ((void *)0)
# 1413 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , 0, &ret, &ret_len );
  add_assoc_stringl_ex(tmp, "basename", strlen("basename")+1, ret, ret_len, 0);
 }

 if ((opt & 4) == 4) {
  char *p;
  int idx;

  if (!have_basename) {
   php_basename(path, path_len, 
# 1422 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                               ((void *)0)
# 1422 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                   , 0, &ret, &ret_len );
  }

  p = zend_memrchr(ret, '.', ret_len);

  if (p) {
   idx = p - ret;
   add_assoc_stringl_ex(tmp, "extension", strlen("extension")+1, ret + idx + 1, ret_len - idx - 1, 1);
  }
 }

 if ((opt & 8) == 8) {
  char *p;
  int idx;


  if (!have_basename && !ret) {
   php_basename(path, path_len, 
# 1439 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                               ((void *)0)
# 1439 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                   , 0, &ret, &ret_len );
  }

  p = zend_memrchr(ret, '.', ret_len);

  idx = p ? (p - ret) : ret_len;
  add_assoc_stringl_ex(tmp, "filename", strlen("filename")+1, ret, idx, 1);
 }

 if (!have_basename && ret) {
  _efree((ret) );
 }

 if (opt == (1 | 2 | 4 | 8)) {
  { { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(tmp); if (0) { _zval_copy_ctor((return_value) ); } if (1) { if (!0) { { (*tmp).type = 0; }; } _zval_ptr_dtor((&tmp) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; }; return; };
 } else {
  zval **element;
  if (zend_hash_get_current_data_ex((*tmp).value.ht, (void **) &element, 
# 1456 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ((void *)0)
# 1456 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     ) == 0) {
   { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*element); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**element).type = 0; }; } _zval_ptr_dtor((&*element) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
  } else {
   { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; };
  }
 }

 _zval_ptr_dtor((&tmp) );
}




 char *php_stristr(unsigned char *s, unsigned char *t, size_t s_len, size_t t_len)
{
 php_strtolower(s, s_len);
 php_strtolower(t, t_len);
 return zend_memnstr(s, t, t_len, s + s_len);
}




 size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end)
{
 register const char *p = s1, *spanp;
 register char c = *p;

cont:
 for (spanp = s2; p != s1_end && spanp != s2_end;) {
  if (*spanp++ == c) {
   c = *(++p);
   goto cont;
  }
 }
 return (p - s1);
}




 size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end)
{
 register const char *p, *spanp;
 register char c = *s1;

 for (p = s1;;) {
  spanp = s2;
  do {
   if (*spanp == c || p == s1_end) {
    return p - s1;
   }
  } while (spanp++ < (s2_end - 1));
  c = *++p;
 }

}




void zif_stristr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **haystack, **needle;
 char *found = 
# 1520 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0)
# 1520 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ;
 int found_offset;
 char *haystack_orig;
 char needle_char[2];

 if ((ht) != 2 || zend_get_parameters_ex(2, &haystack, &needle) == -1) {
  { zend_wrong_param_count(); return; };
 }

 { zval *orig_ptr = *(haystack); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(haystack)) = (zval *) _emalloc((sizeof(zval)) ); **(haystack) = *orig_ptr; _zval_copy_ctor((*(haystack)) ); (*(haystack))->refcount=1; (*(haystack))->is_ref = 0; } };
 { zval *orig_ptr = *(needle); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(needle)) = (zval *) _emalloc((sizeof(zval)) ); **(needle) = *orig_ptr; _zval_copy_ctor((*(needle)) ); (*(needle))->refcount=1; (*(needle))->is_ref = 0; } };

 if ((*haystack)->type!=6) { if (!((*haystack)->is_ref)) { { zval *orig_ptr = *(haystack); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(haystack)) = (zval *) _emalloc((sizeof(zval)) ); **(haystack) = *orig_ptr; _zval_copy_ctor((*(haystack)) ); (*(haystack))->refcount=1; (*(haystack))->is_ref = 0; } }; }; if ((*haystack)->type != 6) { _convert_to_string((*haystack) ); }; };

 haystack_orig = _estrndup(((**haystack).value.str.val), ((**haystack).value.str.len) );

 if ((**needle).type == 6) {
  if (!(**needle).value.str.len) {
   php_error_docref0(
# 1538 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 1538 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Empty delimiter.");
   _efree((haystack_orig) );
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  found = php_stristr((**haystack).value.str.val,
       (**needle).value.str.val,
       (**haystack).value.str.len,
       (**needle).value.str.len);
 } else {
  if ((*needle)->type!=1) { if (!((*needle)->is_ref)) { { zval *orig_ptr = *(needle); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(needle)) = (zval *) _emalloc((sizeof(zval)) ); **(needle) = *orig_ptr; _zval_copy_ctor((*(needle)) ); (*(needle))->refcount=1; (*(needle))->is_ref = 0; } }; }; convert_to_long(*needle); };
  needle_char[0] = (char) (**needle).value.lval;
  needle_char[1] = 0;

  found = php_stristr((**haystack).value.str.val,
       needle_char,
       (**haystack).value.str.len,
       1);
 }

 if (found) {
  found_offset = found - (**haystack).value.str.val;
  { char *__s=(haystack_orig + found_offset); int __l=(**haystack).value.str.len - found_offset; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
 } else {
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 }

 _efree((haystack_orig) );
}




void zif_strstr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **haystack, **needle;
 char *found = 
# 1574 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0)
# 1574 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ;
 char needle_char[2];
 long found_offset;

 if ((ht) != 2 || zend_get_parameters_ex(2, &haystack, &needle) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*haystack)->type!=6) { if (!((*haystack)->is_ref)) { { zval *orig_ptr = *(haystack); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(haystack)) = (zval *) _emalloc((sizeof(zval)) ); **(haystack) = *orig_ptr; _zval_copy_ctor((*(haystack)) ); (*(haystack))->refcount=1; (*(haystack))->is_ref = 0; } }; }; if ((*haystack)->type != 6) { _convert_to_string((*haystack) ); }; };

 if ((**needle).type == 6) {
  if (!(**needle).value.str.len) {
   php_error_docref0(
# 1586 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 1586 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Empty delimiter.");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  found = zend_memnstr((**haystack).value.str.val,
                      (**needle).value.str.val,
                      (**needle).value.str.len,
                      (**haystack).value.str.val + (**haystack).value.str.len);
 } else {
  if ((*needle)->type!=1) { if (!((*needle)->is_ref)) { { zval *orig_ptr = *(needle); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(needle)) = (zval *) _emalloc((sizeof(zval)) ); **(needle) = *orig_ptr; _zval_copy_ctor((*(needle)) ); (*(needle))->refcount=1; (*(needle))->is_ref = 0; } }; }; convert_to_long(*needle); };
  needle_char[0] = (char) (**needle).value.lval;
  needle_char[1] = 0;

  found = zend_memnstr((**haystack).value.str.val,
       needle_char,
       1,
                      (**haystack).value.str.val + (**haystack).value.str.len);
 }

 if (found) {
  found_offset = found - (**haystack).value.str.val;
  { { char *__s=(found); int __l=(**haystack).value.str.len - found_offset; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}
# 1620 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
void zif_strpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **haystack, **needle, **z_offset;
 char *found = 
# 1623 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0)
# 1623 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ;
 char needle_char[2];
 int offset = 0;
 int argc = (ht);

 if (argc < 2 || argc > 3 || zend_get_parameters_ex(argc, &haystack, &needle, &z_offset) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*haystack)->type!=6) { if (!((*haystack)->is_ref)) { { zval *orig_ptr = *(haystack); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(haystack)) = (zval *) _emalloc((sizeof(zval)) ); **(haystack) = *orig_ptr; _zval_copy_ctor((*(haystack)) ); (*(haystack))->refcount=1; (*(haystack))->is_ref = 0; } }; }; if ((*haystack)->type != 6) { _convert_to_string((*haystack) ); }; };

 if (argc > 2) {
  if ((*z_offset)->type!=1) { if (!((*z_offset)->is_ref)) { { zval *orig_ptr = *(z_offset); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(z_offset)) = (zval *) _emalloc((sizeof(zval)) ); **(z_offset) = *orig_ptr; _zval_copy_ctor((*(z_offset)) ); (*(z_offset))->refcount=1; (*(z_offset))->is_ref = 0; } }; }; convert_to_long(*z_offset); };
  offset = (**z_offset).value.lval;
 }

 if (offset < 0 || offset > (**haystack).value.str.len) {
  php_error_docref0(
# 1639 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 1639 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "Offset not contained in string.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((**needle).type == 6) {
  if (!(**needle).value.str.len) {
   php_error_docref0(
# 1645 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 1645 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Empty delimiter.");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  found = zend_memnstr((**haystack).value.str.val + offset,
                   (**needle).value.str.val,
                   (**needle).value.str.len,
                   (**haystack).value.str.val + (**haystack).value.str.len);
 } else {
  if ((*needle)->type!=1) { if (!((*needle)->is_ref)) { { zval *orig_ptr = *(needle); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(needle)) = (zval *) _emalloc((sizeof(zval)) ); **(needle) = *orig_ptr; _zval_copy_ctor((*(needle)) ); (*(needle))->refcount=1; (*(needle))->is_ref = 0; } }; }; convert_to_long(*needle); };
  needle_char[0] = (char) (**needle).value.lval;
  needle_char[1] = 0;

  found = zend_memnstr((**haystack).value.str.val + offset,
       needle_char,
       1,
                      (**haystack).value.str.val + (**haystack).value.str.len);
 }

 if (found) {
  { { (*return_value).type = 1; (*return_value).value.lval = found - (**haystack).value.str.val; }; return; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}




void zif_stripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *found = 
# 1676 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0)
# 1676 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ;
 char *haystack;
 int haystack_len;
 long offset = 0;
 char *needle_dup = 
# 1680 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0)
# 1680 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                       , *haystack_dup;
 char needle_char[2];
 zval *needle;

 if (zend_parse_parameters((ht) , "sz|l", &haystack, &haystack_len, &needle, &offset) == -1) {
  return;
 }

 if (offset < 0 || offset > haystack_len) {
  php_error_docref0(
# 1689 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 1689 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "Offset not contained in string.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (haystack_len == 0) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 haystack_dup = _estrndup((haystack), (haystack_len) );
 php_strtolower(haystack_dup, haystack_len);

 if ((*needle).type == 6) {
  if ((*needle).value.str.len == 0 || (*needle).value.str.len > haystack_len) {
   _efree((haystack_dup) );
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  needle_dup = _estrndup(((*needle).value.str.val), ((*needle).value.str.len) );
  php_strtolower(needle_dup, (*needle).value.str.len);
  found = zend_memnstr(haystack_dup + offset, needle_dup, (*needle).value.str.len, haystack_dup + haystack_len);
 } else {
  switch ((*needle).type) {
   case 1:
   case 3:
    needle_char[0] = 
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    (__extension__ ({ int __res; if (sizeof (
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.lval
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ) > 1) { if (__builtin_constant_p (
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.lval
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    )) { int __c = (
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.lval
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.lval
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.lval
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    )]; __res; }))
# 1713 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                    ;
    break;
   case 2:
    needle_char[0] = 
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    (__extension__ ({ int __res; if (sizeof (
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.dval
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ) > 1) { if (__builtin_constant_p (
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.dval
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    )) { int __c = (
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.dval
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.dval
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    (char) (*needle).value.dval
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    )]; __res; }))
# 1716 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                    ;
    break;
   default:
    php_error_docref0(
# 1719 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 1719 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<1L), "needle is not a string or an integer.");
    _efree((haystack_dup) );
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
    break;

  }
  needle_char[1] = '\0';
  found = zend_memnstr(haystack_dup + offset,
       needle_char,
       sizeof(needle_char) - 1,
       haystack_dup + haystack_len);
 }

 _efree((haystack_dup) );
 if (needle_dup) {
  _efree((needle_dup) );
 }

 if (found) {
  { { (*return_value).type = 1; (*return_value).value.lval = found - haystack_dup; }; return; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}




void zif_strrpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **zneedle;
 char *needle, *haystack;
 int needle_len, haystack_len;
 long offset = 0;
 char *p, *e, ord_needle[2];

 if (zend_parse_parameters((ht) , "sZ|l", &haystack, &haystack_len, &zneedle, &offset) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((**zneedle).type == 6) {
  needle = (**zneedle).value.str.val;
  needle_len = (**zneedle).value.str.len;
 } else {
  if ((*zneedle)->type!=1) { if (!((*zneedle)->is_ref)) { { zval *orig_ptr = *(zneedle); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(zneedle)) = (zval *) _emalloc((sizeof(zval)) ); **(zneedle) = *orig_ptr; _zval_copy_ctor((*(zneedle)) ); (*(zneedle))->refcount=1; (*(zneedle))->is_ref = 0; } }; }; convert_to_long(*zneedle); };
  ord_needle[0] = (char)((**zneedle).value.lval & 0xFF);
  ord_needle[1] = '\0';
  needle = ord_needle;
  needle_len = 1;
 }

 if ((haystack_len == 0) || (needle_len == 0)) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (offset >= 0) {
  if (offset > haystack_len) {
   php_error_docref0(
# 1776 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 1776 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<3L), "Offset is greater than the length of haystack string");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
  p = haystack + offset;
  e = haystack + haystack_len - needle_len;
 } else {
  if (-offset > haystack_len) {
   php_error_docref0(
# 1783 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 1783 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<3L), "Offset is greater than the length of haystack string");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  p = haystack;
  if (needle_len > -offset) {
   e = haystack + haystack_len - needle_len;
  } else {
   e = haystack + haystack_len + offset;
  }
 }

 if (needle_len == 1) {

  while (e >= p) {
   if (*e == *needle) {
    { { (*return_value).type = 1; (*return_value).value.lval = e - p + (offset > 0 ? offset : 0); }; return; };
   }
   e--;
  }
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 while (e >= p) {
  if (memcmp(e, needle, needle_len) == 0) {
   { { (*return_value).type = 1; (*return_value).value.lval = e - p + (offset > 0 ? offset : 0); }; return; };
  }
  e--;
 }

 { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
}




void zif_strripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **zneedle;
 char *needle, *haystack;
 int needle_len, haystack_len;
 long offset = 0;
 char *p, *e, ord_needle[2];
 char *needle_dup, *haystack_dup;

 if (zend_parse_parameters((ht) , "sZ|l", &haystack, &haystack_len, &zneedle, &offset) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((**zneedle).type == 6) {
  needle = (**zneedle).value.str.val;
  needle_len = (**zneedle).value.str.len;
 } else {
  if ((*zneedle)->type!=1) { if (!((*zneedle)->is_ref)) { { zval *orig_ptr = *(zneedle); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(zneedle)) = (zval *) _emalloc((sizeof(zval)) ); **(zneedle) = *orig_ptr; _zval_copy_ctor((*(zneedle)) ); (*(zneedle))->refcount=1; (*(zneedle))->is_ref = 0; } }; }; convert_to_long(*zneedle); };
  ord_needle[0] = (char)((**zneedle).value.lval & 0xFF);
  ord_needle[1] = '\0';
  needle = ord_needle;
  needle_len = 1;
 }

 if ((haystack_len == 0) || (needle_len == 0)) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (needle_len == 1) {


  if (offset >= 0) {
   if (offset > haystack_len) {
    php_error_docref0(
# 1852 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 1852 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<3L), "Offset is greater than the length of haystack string");
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }
   p = haystack + offset;
   e = haystack + haystack_len - 1;
  } else {
   p = haystack;
   if (-offset > haystack_len) {
    php_error_docref0(
# 1860 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 1860 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<3L), "Offset is greater than the length of haystack string");
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   } else {
    e = haystack + haystack_len + offset;
   }
  }

  *ord_needle = 
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
               (__extension__ ({ int __res; if (sizeof (
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
               *needle
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
               ) > 1) { if (__builtin_constant_p (
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
               *needle
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
               )) { int __c = (
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
               *needle
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
               ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
               *needle
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
               ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
               *needle
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
               )]; __res; }))
# 1867 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                               ;
  while (e >= p) {
   if (
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      (__extension__ ({ int __res; if (sizeof (
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *e
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) > 1) { if (__builtin_constant_p (
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *e
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )) { int __c = (
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *e
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *e
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *e
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )]; __res; })) 
# 1869 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  == *ord_needle) {
    { { (*return_value).type = 1; (*return_value).value.lval = e - p + (offset > 0 ? offset : 0); }; return; };
   }
   e--;
  }
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 needle_dup = _estrndup((needle), (needle_len) );
 php_strtolower(needle_dup, needle_len);
 haystack_dup = _estrndup((haystack), (haystack_len) );
 php_strtolower(haystack_dup, haystack_len);

 if (offset >= 0) {
  if (offset > haystack_len) {
   _efree((needle_dup) );
   _efree((haystack_dup) );
   php_error_docref0(
# 1886 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 1886 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<3L), "Offset is greater than the length of haystack string");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
  p = haystack_dup + offset;
  e = haystack_dup + haystack_len - needle_len;
 } else {
  if (-offset > haystack_len) {
   _efree((needle_dup) );
   _efree((haystack_dup) );
   php_error_docref0(
# 1895 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 1895 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<3L), "Offset is greater than the length of haystack string");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
  p = haystack_dup;
  if (needle_len > -offset) {
   e = haystack_dup + haystack_len - needle_len;
  } else {
   e = haystack_dup + haystack_len + offset;
  }
 }

 while (e >= p) {
  if (memcmp(e, needle_dup, needle_len) == 0) {
   _efree((haystack_dup) );
   _efree((needle_dup) );
   { { (*return_value).type = 1; (*return_value).value.lval = e - p + (offset > 0 ? offset : 0); }; return; };
  }
  e--;
 }

 _efree((haystack_dup) );
 _efree((needle_dup) );
 { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
}




void zif_strrchr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **haystack, **needle;
 char *found = 
# 1926 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0)
# 1926 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ;
 long found_offset;

 if ((ht) != 2 || zend_get_parameters_ex(2, &haystack, &needle) ==
  -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*haystack)->type!=6) { if (!((*haystack)->is_ref)) { { zval *orig_ptr = *(haystack); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(haystack)) = (zval *) _emalloc((sizeof(zval)) ); **(haystack) = *orig_ptr; _zval_copy_ctor((*(haystack)) ); (*(haystack))->refcount=1; (*(haystack))->is_ref = 0; } }; }; if ((*haystack)->type != 6) { _convert_to_string((*haystack) ); }; };

 if ((**needle).type == 6) {
  found = zend_memrchr((**haystack).value.str.val, *(**needle).value.str.val, (**haystack).value.str.len);
 } else {
  if ((*needle)->type!=1) { if (!((*needle)->is_ref)) { { zval *orig_ptr = *(needle); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(needle)) = (zval *) _emalloc((sizeof(zval)) ); **(needle) = *orig_ptr; _zval_copy_ctor((*(needle)) ); (*(needle))->refcount=1; (*(needle))->is_ref = 0; } }; }; convert_to_long(*needle); };
  found = zend_memrchr((**haystack).value.str.val, (char) (**needle).value.lval, (**haystack).value.str.len);
 }

 if (found) {
  found_offset = found - (**haystack).value.str.val;
  { { char *__s=(found); int __l=(**haystack).value.str.len - found_offset; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}




static char *php_chunk_split(char *src, int srclen, char *end, int endlen, int chunklen, int *destlen)
{
 char *dest;
 char *p, *q;
 int chunks;
 int restlen;

 chunks = srclen / chunklen;
 restlen = srclen - chunks * chunklen;

 dest = _safe_emalloc(((srclen + (chunks + 1) * endlen + 1)), (sizeof(char)), (0) );

 for (p = src, q = dest; p < (src + srclen - chunklen + 1); ) {
  memcpy(q, p, chunklen);
  q += chunklen;
  memcpy(q, end, endlen);
  q += endlen;
  p += chunklen;
 }

 if (restlen) {
  memcpy(q, p, restlen);
  q += restlen;
  memcpy(q, end, endlen);
  q += endlen;
 }

 *q = '\0';
 if (destlen) {
  *destlen = q - dest;
 }

 return(dest);
}




void zif_chunk_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **p_str, **p_chunklen, **p_ending;
 char *result;
 char *end = "\r\n";
 int endlen = 2;
 int chunklen = 76;
 int result_len;
 int argc = (ht);

 if (argc < 1 || argc > 3 || zend_get_parameters_ex(argc, &p_str, &p_chunklen, &p_ending) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*p_str)->type!=6) { if (!((*p_str)->is_ref)) { { zval *orig_ptr = *(p_str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(p_str)) = (zval *) _emalloc((sizeof(zval)) ); **(p_str) = *orig_ptr; _zval_copy_ctor((*(p_str)) ); (*(p_str))->refcount=1; (*(p_str))->is_ref = 0; } }; }; if ((*p_str)->type != 6) { _convert_to_string((*p_str) ); }; };

 if (argc > 1) {
  if ((*p_chunklen)->type!=1) { if (!((*p_chunklen)->is_ref)) { { zval *orig_ptr = *(p_chunklen); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(p_chunklen)) = (zval *) _emalloc((sizeof(zval)) ); **(p_chunklen) = *orig_ptr; _zval_copy_ctor((*(p_chunklen)) ); (*(p_chunklen))->refcount=1; (*(p_chunklen))->is_ref = 0; } }; }; convert_to_long(*p_chunklen); };
  chunklen = (**p_chunklen).value.lval;
 }

 if (argc > 2) {
  if ((*p_ending)->type!=6) { if (!((*p_ending)->is_ref)) { { zval *orig_ptr = *(p_ending); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(p_ending)) = (zval *) _emalloc((sizeof(zval)) ); **(p_ending) = *orig_ptr; _zval_copy_ctor((*(p_ending)) ); (*(p_ending))->refcount=1; (*(p_ending))->is_ref = 0; } }; }; if ((*p_ending)->type != 6) { _convert_to_string((*p_ending) ); }; };
  end = (**p_ending).value.str.val;
  endlen = (**p_ending).value.str.len;
 }

 if (chunklen <= 0) {
  php_error_docref0(
# 2019 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 2019 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "Chunk length should be greater than zero.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (chunklen > (**p_str).value.str.len) {

  result_len = endlen + (**p_str).value.str.len;
  result = _emalloc((result_len + 1) );
  memcpy(result, (**p_str).value.str.val, (**p_str).value.str.len);
  memcpy(result + (**p_str).value.str.len, end, endlen);
  result[result_len] = '\0';
  { { char *__s=(result); int __l=result_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 }

 if (!(**p_str).value.str.len) {
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }

 result = php_chunk_split((**p_str).value.str.val, (**p_str).value.str.len, end, endlen, chunklen, &result_len);

 if (result) {
  { { char *__s=(result); int __l=result_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}




void zif_substr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str, **from, **len;
 int l;
 int f;
 int argc = (ht);

 if (argc < 2 || argc > 3 || zend_get_parameters_ex(argc, &str, &from, &len) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };
 if ((*from)->type!=1) { if (!((*from)->is_ref)) { { zval *orig_ptr = *(from); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(from)) = (zval *) _emalloc((sizeof(zval)) ); **(from) = *orig_ptr; _zval_copy_ctor((*(from)) ); (*(from))->refcount=1; (*(from))->is_ref = 0; } }; }; convert_to_long(*from); };

 if (argc > 2) {
  if ((*len)->type!=1) { if (!((*len)->is_ref)) { { zval *orig_ptr = *(len); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(len)) = (zval *) _emalloc((sizeof(zval)) ); **(len) = *orig_ptr; _zval_copy_ctor((*(len)) ); (*(len))->refcount=1; (*(len))->is_ref = 0; } }; }; convert_to_long(*len); };
  l = (**len).value.lval;
 } else {
  l = (**str).value.str.len;
 }

 f = (**from).value.lval;




 if (f < 0) {
  f = (**str).value.str.len + f;
  if (f < 0) {
   f = 0;
  }
 }




 if (l < 0) {
  l = ((**str).value.str.len - f) + l;
  if (l < 0) {
   l = 0;
  }
 }

 if (f >= (**str).value.str.len) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((f + l) > (**str).value.str.len) {
  l = (**str).value.str.len - f;
 }

 { { char *__s=((**str).value.str.val + f); int __l=l; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}





void zif_substr_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;
 zval **from;
 zval **len = 
# 2111 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ((void *)0)
# 2111 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                 ;
 zval **repl;
 char *result;
 int result_len;
 int l = 0;
 int f;
 int argc = (ht);

 HashPosition pos_str, pos_from, pos_repl, pos_len;
 zval **tmp_str = 
# 2120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                 ((void *)0)
# 2120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                     , **tmp_from = 
# 2120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                    ((void *)0)
# 2120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                        , **tmp_repl = 
# 2120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                       ((void *)0)
# 2120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                           , **tmp_len= 
# 2120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                                        ((void *)0)
# 2120 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                            ;


 if (argc < 3 || argc > 4 || zend_get_parameters_ex(argc, &str, &repl, &from, &len) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**str).type != 4) {
  if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };
 }
 if ((**repl).type != 4) {
  if ((*repl)->type!=6) { if (!((*repl)->is_ref)) { { zval *orig_ptr = *(repl); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(repl)) = (zval *) _emalloc((sizeof(zval)) ); **(repl) = *orig_ptr; _zval_copy_ctor((*(repl)) ); (*(repl))->refcount=1; (*(repl))->is_ref = 0; } }; }; if ((*repl)->type != 6) { _convert_to_string((*repl) ); }; };
 }
 if ((**from).type != 4) {
  if ((*from)->type!=1) { if (!((*from)->is_ref)) { { zval *orig_ptr = *(from); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(from)) = (zval *) _emalloc((sizeof(zval)) ); **(from) = *orig_ptr; _zval_copy_ctor((*(from)) ); (*(from))->refcount=1; (*(from))->is_ref = 0; } }; }; convert_to_long(*from); };
 }

 if (argc > 3) {
  if ((**len).type != 4) {
   if ((*len)->type!=1) { if (!((*len)->is_ref)) { { zval *orig_ptr = *(len); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(len)) = (zval *) _emalloc((sizeof(zval)) ); **(len) = *orig_ptr; _zval_copy_ctor((*(len)) ); (*(len))->refcount=1; (*(len))->is_ref = 0; } }; }; convert_to_long(*len); };
   l = (**len).value.lval;
  }
 } else {
  if ((**str).type != 4) {
   l = (**str).value.str.len;
  }
 }

 if ((**str).type == 6) {
  if (
   (argc == 3 && (**from).type == 4)
   ||
   (argc == 4 && (**from).type != (**len).type)
  ) {
   php_error_docref0(
# 2154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 2154 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "'from' and 'len' should be of same type - numerical or array ");
   { { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
  }
  if (argc == 4 && (**from).type == 4) {
   if (zend_hash_num_elements((**from).value.ht) != zend_hash_num_elements((**len).value.ht)) {
    php_error_docref0(
# 2159 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 2159 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<1L), "'from' and 'len' should have the same number of elements");
    { { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
   }
  }
 }


 if ((**str).type != 4) {
  if ((**from).type != 4) {
   int repl_len = 0;

   f = (**from).value.lval;




   if (f < 0) {
    f = (**str).value.str.len + f;
    if (f < 0) {
     f = 0;
    }
   } else if (f > (**str).value.str.len) {
    f = (**str).value.str.len;
   }



   if (l < 0) {
    l = ((**str).value.str.len - f) + l;
    if (l < 0) {
     l = 0;
    }
   }

   if ((f + l) > (**str).value.str.len) {
    l = (**str).value.str.len - f;
   }
   if ((**repl).type == 4) {
    zend_hash_internal_pointer_reset_ex((**repl).value.ht, &pos_repl);
    if (0 == zend_hash_get_current_data_ex((**repl).value.ht, (void **) &tmp_repl, &pos_repl)) {
     if ((*tmp_repl)->type!=6) { if (!((*tmp_repl)->is_ref)) { { zval *orig_ptr = *(tmp_repl); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(tmp_repl)) = (zval *) _emalloc((sizeof(zval)) ); **(tmp_repl) = *orig_ptr; _zval_copy_ctor((*(tmp_repl)) ); (*(tmp_repl))->refcount=1; (*(tmp_repl))->is_ref = 0; } }; }; if ((*tmp_repl)->type != 6) { _convert_to_string((*tmp_repl) ); }; };
     repl_len = (**tmp_repl).value.str.len;
    }
   } else {
    repl_len = (**repl).value.str.len;
   }
   result_len = (**str).value.str.len - l + repl_len;
   result = _emalloc((result_len + 1) );

   memcpy(result, (**str).value.str.val, f);
   if (repl_len) {
    memcpy((result + f), ((**repl).type == 4 ? (**tmp_repl).value.str.val : (**repl).value.str.val), repl_len);
   }
   memcpy((result + f + repl_len), (**str).value.str.val + f + l, (**str).value.str.len - f - l);
   result[result_len] = '\0';
   { { char *__s=(result); int __l=result_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
  } else {
   php_error_docref0(
# 2216 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 2216 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Functionality of 'from' and 'len' as arrays is not implemented.");
   { { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
  }
 } else {
  _array_init((return_value) );

  if ((**from).type == 4) {
   zend_hash_internal_pointer_reset_ex((**from).value.ht, &pos_from);
  }

  if (argc > 3 && (**len).type == 4) {
   zend_hash_internal_pointer_reset_ex((**len).value.ht, &pos_len);
  }

  if ((**repl).type == 4) {
   zend_hash_internal_pointer_reset_ex((**repl).value.ht, &pos_repl);
  }

  zend_hash_internal_pointer_reset_ex((**str).value.ht, &pos_str);
  while (zend_hash_get_current_data_ex((**str).value.ht, (void **) &tmp_str, &pos_str) == 0) {
   if ((*tmp_str)->type!=6) { if (!((*tmp_str)->is_ref)) { { zval *orig_ptr = *(tmp_str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(tmp_str)) = (zval *) _emalloc((sizeof(zval)) ); **(tmp_str) = *orig_ptr; _zval_copy_ctor((*(tmp_str)) ); (*(tmp_str))->refcount=1; (*(tmp_str))->is_ref = 0; } }; }; if ((*tmp_str)->type != 6) { _convert_to_string((*tmp_str) ); }; };

   if ((**from).type == 4) {
    if (0 == zend_hash_get_current_data_ex((**from).value.ht, (void **) &tmp_from, &pos_from)) {
     if ((*tmp_from)->type!=1) { if (!((*tmp_from)->is_ref)) { { zval *orig_ptr = *(tmp_from); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(tmp_from)) = (zval *) _emalloc((sizeof(zval)) ); **(tmp_from) = *orig_ptr; _zval_copy_ctor((*(tmp_from)) ); (*(tmp_from))->refcount=1; (*(tmp_from))->is_ref = 0; } }; }; convert_to_long(*tmp_from); };

     f = (**tmp_from).value.lval;
     if (f < 0) {
      f = (**tmp_str).value.str.len + f;
      if (f < 0) {
       f = 0;
      }
     } else if (f > (**tmp_str).value.str.len) {
      f = (**tmp_str).value.str.len;
     }
     zend_hash_move_forward_ex((**from).value.ht, &pos_from);
    } else {
     f = 0;
    }
   } else {
    f = (**from).value.lval;
    if (f < 0) {
     f = (**tmp_str).value.str.len + f;
     if (f < 0) {
      f = 0;
     }
    } else if (f > (**tmp_str).value.str.len) {
     f = (**tmp_str).value.str.len;
    }
   }

   if (argc > 3 && (**len).type == 4) {
    if (0 == zend_hash_get_current_data_ex((**len).value.ht, (void **) &tmp_len, &pos_len)) {
     if ((*tmp_len)->type!=1) { if (!((*tmp_len)->is_ref)) { { zval *orig_ptr = *(tmp_len); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(tmp_len)) = (zval *) _emalloc((sizeof(zval)) ); **(tmp_len) = *orig_ptr; _zval_copy_ctor((*(tmp_len)) ); (*(tmp_len))->refcount=1; (*(tmp_len))->is_ref = 0; } }; }; convert_to_long(*tmp_len); };

     l = (**tmp_len).value.lval;
     zend_hash_move_forward_ex((**len).value.ht, &pos_len);
    } else {
     l = (**tmp_str).value.str.len;
    }
   } else if (argc > 3) {
    l = (**len).value.lval;
   } else {
    l = (**tmp_str).value.str.len;
   }

   if (l < 0) {
    l = ((**tmp_str).value.str.len - f) + l;
    if (l < 0) {
     l = 0;
    }
   }

   if ((f + l) > (**tmp_str).value.str.len) {
    l = (**tmp_str).value.str.len - f;
   }

   result_len = (**tmp_str).value.str.len - l;

   if ((**repl).type == 4) {
    if (0 == zend_hash_get_current_data_ex((**repl).value.ht, (void **) &tmp_repl, &pos_repl)) {
     if ((*tmp_repl)->type!=6) { if (!((*tmp_repl)->is_ref)) { { zval *orig_ptr = *(tmp_repl); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(tmp_repl)) = (zval *) _emalloc((sizeof(zval)) ); **(tmp_repl) = *orig_ptr; _zval_copy_ctor((*(tmp_repl)) ); (*(tmp_repl))->refcount=1; (*(tmp_repl))->is_ref = 0; } }; }; if ((*tmp_repl)->type != 6) { _convert_to_string((*tmp_repl) ); }; };
     result_len += (**tmp_repl).value.str.len;
     zend_hash_move_forward_ex((**repl).value.ht, &pos_repl);
     result = _emalloc((result_len + 1) );

     memcpy(result, (**tmp_str).value.str.val, f);
     memcpy((result + f), (**tmp_repl).value.str.val, (**tmp_repl).value.str.len);
     memcpy((result + f + (**tmp_repl).value.str.len), (**tmp_str).value.str.val + f + l, (**tmp_str).value.str.len - f - l);
    } else {
     result = _emalloc((result_len + 1) );

     memcpy(result, (**tmp_str).value.str.val, f);
     memcpy((result + f), (**tmp_str).value.str.val + f + l, (**tmp_str).value.str.len - f - l);
    }
   } else {
    result_len += (**repl).value.str.len;

    result = _emalloc((result_len + 1) );

    memcpy(result, (**tmp_str).value.str.val, f);
    memcpy((result + f), (**repl).value.str.val, (**repl).value.str.len);
    memcpy((result + f + (**repl).value.str.len), (**tmp_str).value.str.val + f + l, (**tmp_str).value.str.len - f - l);
   }

   result[result_len] = '\0';
   add_next_index_stringl(return_value, result, result_len, 0);

   zend_hash_move_forward_ex((**str).value.ht, &pos_str);
  }
 }
}







void zif_quotemeta(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **arg;
 char *str, *old;
 char *old_end;
 char *p, *q;
 char c;

 if ((ht) != 1 || zend_get_parameters_ex(1, &arg) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*arg)->type!=6) { if (!((*arg)->is_ref)) { { zval *orig_ptr = *(arg); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(arg)) = (zval *) _emalloc((sizeof(zval)) ); **(arg) = *orig_ptr; _zval_copy_ctor((*(arg)) ); (*(arg))->refcount=1; (*(arg))->is_ref = 0; } }; }; if ((*arg)->type != 6) { _convert_to_string((*arg) ); }; };

 old = (**arg).value.str.val;
 old_end = (**arg).value.str.val + (**arg).value.str.len;

 if (old == old_end) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 str = _safe_emalloc((2), ((**arg).value.str.len), (1) );

 for (p = old, q = str; p != old_end; p++) {
  c = *p;
  switch (c) {
   case '.':
   case '\\':
   case '+':
   case '*':
   case '?':
   case '[':
   case '^':
   case ']':
   case '$':
   case '(':
   case ')':
    *q++ = '\\';

   default:
    *q++ = c;
  }
 }
 *q = 0;

 { { char *__s=(_erealloc((str), (q - str + 1), 0 )); int __l=q - str; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}




void zif_ord(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;

 if ((ht) != 1 || zend_get_parameters_ex(1, &str) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 { { (*return_value).type = 1; (*return_value).value.lval = (unsigned char) (**str).value.str.val[0]; }; return; };
}




void zif_chr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **num;
 char temp[2];

 if ((ht) != 1 || zend_get_parameters_ex(1, &num) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*num)->type!=1) { if (!((*num)->is_ref)) { { zval *orig_ptr = *(num); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(num)) = (zval *) _emalloc((sizeof(zval)) ); **(num) = *orig_ptr; _zval_copy_ctor((*(num)) ); (*(num))->refcount=1; (*(num))->is_ref = 0; } }; }; convert_to_long(*num); };

 temp[0] = (char) (**num).value.lval;
 temp[1] = 0;

 { char *__s=(temp); int __l=1; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
}




void zif_ucfirst(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;

 if ((ht) != 1 || zend_get_parameters_ex(1, &str) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 if (!(**str).value.str.len) {
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }

 { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
 *(*return_value).value.str.val = 
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                            (__extension__ ({ int __res; if (sizeof (
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                            (unsigned char) *(*return_value).value.str.val
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                            ) > 1) { if (__builtin_constant_p (
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                            (unsigned char) *(*return_value).value.str.val
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                            )) { int __c = (
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                            (unsigned char) *(*return_value).value.str.val
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                            ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper (
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                            (unsigned char) *(*return_value).value.str.val
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                            ); } else __res = (*__ctype_toupper_loc ())[(int) (
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                            (unsigned char) *(*return_value).value.str.val
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                            )]; __res; }))
# 2434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                              ;
}




void zif_ucwords(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;
 register char *r, *r_end;

 if ((ht) != 1 || zend_get_parameters_ex(1, &str) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 if (!(**str).value.str.len) {
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }

 { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
 r = (*return_value).value.str.val;

 *r = 
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     (__extension__ ({ int __res; if (sizeof (
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (unsigned char) *r
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ) > 1) { if (__builtin_constant_p (
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (unsigned char) *r
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     )) { int __c = (
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (unsigned char) *r
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper (
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (unsigned char) *r
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ); } else __res = (*__ctype_toupper_loc ())[(int) (
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (unsigned char) *r
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     )]; __res; }))
# 2457 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                ;
 for (r_end = r + (*return_value).value.str.len - 1; r < r_end; ) {
  if (
# 2459 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ((*__ctype_b_loc ())[(int) ((
# 2459 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (int) *(unsigned char *)r++
# 2459 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ))] & (unsigned short int) _ISspace)
# 2459 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                         ) {
   *r = 
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       (__extension__ ({ int __res; if (sizeof (
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       (unsigned char) *r
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ) > 1) { if (__builtin_constant_p (
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       (unsigned char) *r
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       )) { int __c = (
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       (unsigned char) *r
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper (
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       (unsigned char) *r
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ); } else __res = (*__ctype_toupper_loc ())[(int) (
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       (unsigned char) *r
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       )]; __res; }))
# 2460 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  ;
  }
 }
}




 char *php_strtr(char *str, int len, char *str_from, char *str_to, int trlen)
{
 int i;
 unsigned char xlat[256];

 if ((trlen < 1) || (len < 1)) {
  return str;
 }

 for (i = 0; i < 256; xlat[i] = i, i++);

 for (i = 0; i < trlen; i++) {
  xlat[(unsigned char) str_from[i]] = str_to[i];
 }

 for (i = 0; i < len; i++) {
  str[i] = xlat[(unsigned char) str[i]];
 }

 return str;
}




static void php_strtr_array(zval *return_value, char *str, int slen, HashTable *hash)
{
 zval **entry;
 char *string_key;
 uint string_key_len;
 zval **trans;
 zval ctmp;
 ulong num_key;
 int minlen = 128*1024;
 int maxlen = 0, pos, len, found;
 char *key;
 HashPosition hpos;
 smart_str result = {0};
 HashTable tmp_hash;

 _zend_hash_init((&tmp_hash), (zend_hash_num_elements(hash)), (
# 2508 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
((void *)0)
# 2508 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), (
# 2508 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
((void *)0)
# 2508 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
), (0) );
 zend_hash_internal_pointer_reset_ex(hash, &hpos);
 while (zend_hash_get_current_data_ex(hash, (void **)&entry, &hpos) == 0) {
  switch (zend_hash_get_current_key_ex(hash, &string_key, &string_key_len, &num_key, 0, &hpos)) {
   case 1:
    len = string_key_len-1;
    if (len < 1) {
     zend_hash_destroy(&tmp_hash);
     { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
    }
    _zend_hash_add_or_update(&tmp_hash, string_key, string_key_len, entry, sizeof(zval*), 
# 2518 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
   ((void *)0)
# 2518 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
   , (1<<1) );
    if (len > maxlen) {
     maxlen = len;
    }
    if (len < minlen) {
     minlen = len;
    }
    break;

   case 2:
    (ctmp).type = 1;
    (ctmp).value.lval = num_key;

    if ((&ctmp)->type != 6) { _convert_to_string((&ctmp) ); };
    len = (ctmp).value.str.len;
    _zend_hash_add_or_update(&tmp_hash, (ctmp).value.str.val, len+1, entry, sizeof(zval*), 
# 2533 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
   ((void *)0)
# 2533 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
   , (1<<1) );
    _zval_dtor((&ctmp) );

    if (len > maxlen) {
     maxlen = len;
    }
    if (len < minlen) {
     minlen = len;
    }
    break;
  }
  zend_hash_move_forward_ex(hash, &hpos);
 }

 key = _emalloc((maxlen+1) );
 pos = 0;

 while (pos < slen) {
  if ((pos + maxlen) > slen) {
   maxlen = slen - pos;
  }

  found = 0;
  memcpy(key, str+pos, maxlen);

  for (len = maxlen; len >= minlen; len--) {
   key[len] = 0;

   if (zend_hash_find(&tmp_hash, key, len+1, (void**)&trans) == 0) {
    char *tval;
    int tlen;
    zval tmp;

    if ((**trans).type != 6) {
     tmp = **trans;
     _zval_copy_ctor((&tmp) );
     if ((&tmp)->type != 6) { _convert_to_string((&tmp) ); };
     tval = (tmp).value.str.val;
     tlen = (tmp).value.str.len;
    } else {
     tval = (**trans).value.str.val;
     tlen = (**trans).value.str.len;
    }

    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&result)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((tlen))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((tlen))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((tval)), ((tlen))); __dest->len = __nl; } while (0);
    pos += len;
    found = 1;

    if ((**trans).type != 6) {
     _zval_dtor((&tmp) );
    }
    break;
   }
  }

  if (! found) {
   do { register size_t __nl; do { if (!(((&result)))->c) { (((&result)))->len = 0; __nl = (1); (((&result)))->a = __nl < 78 ? 78 : __nl + 128; (((&result)))->c = (((((0))))?realloc((((((&result)))->c)), (((((&result)))->a + 1))):_erealloc(((((((&result)))->c))), ((((((&result)))->a + 1))), 0 )); } else { __nl = (((&result)))->len + (1); if (__nl >= (((&result)))->a) { (((&result)))->a = __nl + 128; (((&result)))->c = (((((0))))?realloc((((((&result)))->c)), (((((&result)))->a + 1))):_erealloc(((((((&result)))->c))), ((((((&result)))->a + 1))), 0 )); } } } while (0); ((&result))->len = __nl; ((unsigned char *) ((&result))->c)[((&result))->len - 1] = ((str[pos++])); } while (0);
  }
 }

 _efree((key) );
 zend_hash_destroy(&tmp_hash);
 do { if ((&result)->c) { (&result)->c[(&result)->len] = '\0'; } } while (0);
 { char *__s=(result.c); int __l=result.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
}




void zif_strtr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str, **from, **to;
 int ac = (ht);

 if (ac < 2 || ac > 3 || zend_get_parameters_ex(ac, &str, &from, &to) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if (ac == 2 && (**from).type != 4) {
  php_error_docref0(
# 2612 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 2612 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "The second argument is not an array.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };


 if ((**str).value.str.len == 0) {
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }

 if (ac == 2) {
  php_strtr_array(return_value, (**str).value.str.val, (**str).value.str.len, ((**from).type==4 ? (**from).value.ht : (((**from).type==5 ? (**from).value.obj.handlers->get_properties((*from) ) : 
# 2624 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                                   ((void *)0)
# 2624 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                   ))));
 } else {
  if ((*from)->type!=6) { if (!((*from)->is_ref)) { { zval *orig_ptr = *(from); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(from)) = (zval *) _emalloc((sizeof(zval)) ); **(from) = *orig_ptr; _zval_copy_ctor((*(from)) ); (*(from))->refcount=1; (*(from))->is_ref = 0; } }; }; if ((*from)->type != 6) { _convert_to_string((*from) ); }; };
  if ((*to)->type!=6) { if (!((*to)->is_ref)) { { zval *orig_ptr = *(to); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(to)) = (zval *) _emalloc((sizeof(zval)) ); **(to) = *orig_ptr; _zval_copy_ctor((*(to)) ); (*(to))->refcount=1; (*(to))->is_ref = 0; } }; }; if ((*to)->type != 6) { _convert_to_string((*to) ); }; };

  { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };

  php_strtr((*return_value).value.str.val,
      (*return_value).value.str.len,
      (**from).value.str.val,
      (**to).value.str.val,
      
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     (((
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (**from).value.str.len
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     )<(
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (**to).value.str.len
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ))?(
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (**from).value.str.len
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ):(
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     (**to).value.str.len
# 2635 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ))
                      
# 2636 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                     );
 }
}




void zif_strrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;
 char *s, *e, *n, *p;

 if ((ht)!=1 || zend_get_parameters_ex(1, &str) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 n = _emalloc(((**str).value.str.len+1) );
 p = n;

 s = (**str).value.str.val;
 e = s + (**str).value.str.len;

 while (--e>=s) {
  *p++ = *e;
 }

 *p = '\0';

 { char *__s=(n); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
}




static void php_similar_str(const char *txt1, int len1, const char *txt2, int len2, int *pos1, int *pos2, int *max)
{
 char *p, *q;
 char *end1 = (char *) txt1 + len1;
 char *end2 = (char *) txt2 + len2;
 int l;

 *max = 0;
 for (p = (char *) txt1; p < end1; p++) {
  for (q = (char *) txt2; q < end2; q++) {
   for (l = 0; (p + l < end1) && (q + l < end2) && (p[l] == q[l]); l++);
   if (l > *max) {
    *max = l;
    *pos1 = p - txt1;
    *pos2 = q - txt2;
   }
  }
 }
}




static int php_similar_char(const char *txt1, int len1, const char *txt2, int len2)
{
 int sum;
 int pos1, pos2, max;

 php_similar_str(txt1, len1, txt2, len2, &pos1, &pos2, &max);
 if ((sum = max)) {
  if (pos1 && pos2) {
   sum += php_similar_char(txt1, pos1,
         txt2, pos2);
  }
  if ((pos1 + max < len1) && (pos2 + max < len2)) {
   sum += php_similar_char(txt1 + pos1 + max, len1 - pos1 - max,
         txt2 + pos2 + max, len2 - pos2 - max);
  }
 }

 return sum;
}




void zif_similar_text(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **t1, **t2, **percent;
 int ac = (ht);
 int sim;

 if (ac < 2 || ac > 3 || zend_get_parameters_ex(ac, &t1, &t2, &percent) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*t1)->type!=6) { if (!((*t1)->is_ref)) { { zval *orig_ptr = *(t1); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(t1)) = (zval *) _emalloc((sizeof(zval)) ); **(t1) = *orig_ptr; _zval_copy_ctor((*(t1)) ); (*(t1))->refcount=1; (*(t1))->is_ref = 0; } }; }; if ((*t1)->type != 6) { _convert_to_string((*t1) ); }; };
 if ((*t2)->type!=6) { if (!((*t2)->is_ref)) { { zval *orig_ptr = *(t2); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(t2)) = (zval *) _emalloc((sizeof(zval)) ); **(t2) = *orig_ptr; _zval_copy_ctor((*(t2)) ); (*(t2))->refcount=1; (*(t2))->is_ref = 0; } }; }; if ((*t2)->type != 6) { _convert_to_string((*t2) ); }; };

 if (ac > 2) {
  if ((*percent)->type!=2) { if (!((*percent)->is_ref)) { { zval *orig_ptr = *(percent); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(percent)) = (zval *) _emalloc((sizeof(zval)) ); **(percent) = *orig_ptr; _zval_copy_ctor((*(percent)) ); (*(percent))->refcount=1; (*(percent))->is_ref = 0; } }; }; convert_to_double(*percent); };
 }

 if ((**t1).value.str.len + (**t2).value.str.len == 0) {
  if (ac > 2) {
   (**percent).value.dval = 0;
  }

  { { (*return_value).type = 1; (*return_value).value.lval = 0; }; return; };
 }

 sim = php_similar_char((**t1).value.str.val, (**t1).value.str.len, (**t2).value.str.val, (**t2).value.str.len);

 if (ac > 2) {
  (**percent).value.dval = sim * 200.0 / ((**t1).value.str.len + (**t2).value.str.len);
 }

 { { (*return_value).type = 1; (*return_value).value.lval = sim; }; return; };
}





 void php_stripslashes(char *str, int *len )
{
 char *s, *t;
 int l;

 if (len != 
# 2760 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
           ((void *)0)
# 2760 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
               ) {
  l = *len;
 } else {
  l = strlen(str);
 }
 s = str;
 t = str;

 if ((core_globals.magic_quotes_sybase)) {
  while (l > 0) {
   if (*t == '\'') {
    if ((l > 0) && (t[1] == '\'')) {
     t++;
     if (len != 
# 2773 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
               ((void *)0)
# 2773 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                   ) {
      (*len)--;
     }
     l--;
    }
    *s++ = *t++;
   } else if (*t == '\\' && t[1] == '0' && l > 0) {
    *s++='\0';
    t+=2;
    if (len != 
# 2782 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
              ((void *)0)
# 2782 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ) {
     (*len)--;
    }
    l--;
   } else {
    *s++ = *t++;
   }
   l--;
  }
  *s = '\0';

  return;
 }

 while (l > 0) {
  if (*t == '\\') {
   t++;
   if (len != 
# 2799 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ((void *)0)
# 2799 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                 ) {
    (*len)--;
   }
   l--;
   if (l > 0) {
    if (*t == '0') {
     *s++='\0';
     t++;
    } else {
     *s++ = *t++;
    }
    l--;
   }
  } else {
   *s++ = *t++;
   l--;
  }
 }
 if (s != t) {
  *s = '\0';
 }
}




void zif_addcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str, **what;

 if ((ht) != 2 || zend_get_parameters_ex(2, &str, &what) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };
 if ((*what)->type!=6) { if (!((*what)->is_ref)) { { zval *orig_ptr = *(what); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(what)) = (zval *) _emalloc((sizeof(zval)) ); **(what) = *orig_ptr; _zval_copy_ctor((*(what)) ); (*(what))->refcount=1; (*(what))->is_ref = 0; } }; }; if ((*what)->type != 6) { _convert_to_string((*what) ); }; };

 if ((**str).value.str.len == 0) {
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }

 if ((**what).value.str.len == 0) {
  { { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 }

 { { char *__s=(php_addcslashes((**str).value.str.val, (**str).value.str.len, &(*return_value).value.str.len, 0, (**what).value.str.val, (**what).value.str.len )); (return_value)->value.str.len = strlen(__s); (return_value)->value.str.val = (0?_estrndup((__s), ((return_value)->value.str.len) ):__s); (return_value)->type = 6; }; return; }



                                                               ;
}




void zif_addslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;

 if ((ht) != 1 || zend_get_parameters_ex(1, &str) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 if ((**str).value.str.len == 0) {
  { { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; }; return; };
 }

 { { char *__s=(php_addslashes((**str).value.str.val, (**str).value.str.len, &(*return_value).value.str.len, 0 )); (return_value)->value.str.len = strlen(__s); (return_value)->value.str.val = (0?_estrndup((__s), ((return_value)->value.str.len) ):__s); (return_value)->type = 6; }; return; }


                                            ;
}




void zif_stripcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;

 if ((ht) != 1 || zend_get_parameters_ex(1, &str) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
 php_stripcslashes((*return_value).value.str.val, &(*return_value).value.str.len);
}




void zif_stripslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **str;

 if ((ht) != 1 || zend_get_parameters_ex(1, &str) == -1) {
  { zend_wrong_param_count(); return; };
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 { char *__s=((**str).value.str.val); int __l=(**str).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
 php_stripslashes((*return_value).value.str.val, &(*return_value).value.str.len );
}
# 2926 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 void php_stripcslashes(char *str, int *len)
{
 char *source, *target, *end;
 int nlen = *len, i;
 char numtmp[4];

 for (source=str, end=str+nlen, target=str; source < end; source++) {
  if (*source == '\\' && source+1 < end) {
   source++;
   switch (*source) {
    case 'n': *target++='\n'; nlen--; break;
    case 'r': *target++='\r'; nlen--; break;
    case 'a': *target++='\a'; nlen--; break;
    case 't': *target++='\t'; nlen--; break;
    case 'v': *target++='\v'; nlen--; break;
    case 'b': *target++='\b'; nlen--; break;
    case 'f': *target++='\f'; nlen--; break;
    case '\\': *target++='\\'; nlen--; break;
    case 'x':
     if (source+1 < end && 
# 2945 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          ((*__ctype_b_loc ())[(int) ((
# 2945 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          (int)(*(source+1))
# 2945 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          ))] & (unsigned short int) _ISxdigit)
# 2945 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                      ) {
      numtmp[0] = *++source;
      if (source+1 < end && 
# 2947 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                           ((*__ctype_b_loc ())[(int) ((
# 2947 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                           (int)(*(source+1))
# 2947 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                           ))] & (unsigned short int) _ISxdigit)
# 2947 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                       ) {
       numtmp[1] = *++source;
       numtmp[2] = '\0';
       nlen-=3;
      } else {
       numtmp[1] = '\0';
       nlen-=2;
      }
      *target++=(char)strtol(numtmp, 
# 2955 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                    ((void *)0)
# 2955 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                        , 16);
      break;
     }

    default:
     i=0;
     while (source < end && *source >= '0' && *source <= '7' && i<3) {
      numtmp[i++] = *source++;
     }
     if (i) {
      numtmp[i]='\0';
      *target++=(char)strtol(numtmp, 
# 2966 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                    ((void *)0)
# 2966 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                        , 8);
      nlen-=i;
      source--;
     } else {
      *target++=*source;
      nlen--;
     }
   }
  } else {
   *target++=*source;
  }
 }

 if (nlen != 0) {
  *target='\0';
 }

 *len = nlen;
}




 char *php_addcslashes(char *str, int length, int *new_length, int should_free, char *what, int wlength )
{
 char flags[256];
 char *new_str = _safe_emalloc((4), ((length?length:(length=strlen(str)))), (1) );
 char *source, *target;
 char *end;
 char c;
 int newlen;

 if (!wlength) {
  wlength = strlen(what);
 }

 php_charmask(what, wlength, flags );

 for (source = str, end = source + length, target = new_str; (c = *source) || (source < end); source++) {
  if (flags[(unsigned char)c]) {
   if ((unsigned char) c < 32 || (unsigned char) c > 126) {
    *target++ = '\\';
    switch (c) {
     case '\n': *target++ = 'n'; break;
     case '\t': *target++ = 't'; break;
     case '\r': *target++ = 'r'; break;
     case '\a': *target++ = 'a'; break;
     case '\v': *target++ = 'v'; break;
     case '\b': *target++ = 'b'; break;
     case '\f': *target++ = 'f'; break;
     default: target += php_sprintf(target, "%03o", (unsigned char) c);
    }
    continue;
   }
   *target++ = '\\';
  }
  *target++ = c;
 }
 *target = 0;
 newlen = target - new_str;
 if (target - new_str < length * 4) {
  new_str = _erealloc((new_str), (newlen + 1), 0 );
 }
 if (new_length) {
  *new_length = newlen;
 }
 if (should_free) {
  if (str) { _efree((str) ); };
 }
 return new_str;
}




 char *php_addslashes(char *str, int length, int *new_length, int should_free )
{
 return php_addslashes_ex(str, length, new_length, should_free, 0 );
}




 char *php_addslashes_ex(char *str, int length, int *new_length, int should_free, int ignore_sybase )
{

 char *new_str;
 char *source, *target;
 char *end;
 int local_new_length;

 if (!new_length) {
  new_length = &local_new_length;
 }
 if (!str) {
  *new_length = 0;
  return str;
 }
 new_str = (char *) _safe_emalloc((2), ((length ? length : (length = strlen(str)))), (1) );
 source = str;
 end = source + length;
 target = new_str;

 if (!ignore_sybase && (core_globals.magic_quotes_sybase)) {
  while (source < end) {
   switch (*source) {
    case '\0':
     *target++ = '\\';
     *target++ = '0';
     break;
    case '\'':
     *target++ = '\'';
     *target++ = '\'';
     break;
    default:
     *target++ = *source;
     break;
   }
   source++;
  }
 } else {
  while (source < end) {
   switch (*source) {
    case '\0':
     *target++ = '\\';
     *target++ = '0';
     break;
    case '\'':
    case '\"':
    case '\\':
     *target++ = '\\';

    default:
     *target++ = *source;
     break;
   }

   source++;
  }
 }

 *target = 0;
 *new_length = target - new_str;
 if (should_free) {
  if (str) { _efree((str) ); };
 }
 new_str = (char *) _erealloc((new_str), (*new_length + 1), 0 );
 return new_str;
}
# 3125 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 int php_char_to_str_ex(char *str, uint len, char from, char *to, int to_len, zval *result, int case_sensitivity, int *replace_count)
{
 int char_count = 0;
 int replaced = 0;
 char *source, *target, *tmp, *source_end=str+len, *tmp_end = 
# 3129 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                             ((void *)0)
# 3129 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                 ;

 if (case_sensitivity) {
  char *p = str, *e = p + len;
  while ((p = memchr(p, from, (e - p)))) {
   char_count++;
   p++;
  }
 } else {
  for (source = str; source < source_end; source++) {
   if (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      (__extension__ ({ int __res; if (sizeof (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) > 1) { if (__builtin_constant_p (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )) { int __c = (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )]; __res; })) 
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                       == 
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          (__extension__ ({ int __res; if (sizeof (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          ) > 1) { if (__builtin_constant_p (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          )) { int __c = (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          )]; __res; }))
# 3139 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                       ) {
    char_count++;
   }
  }
 }

 if (char_count == 0 && case_sensitivity) {
  { char *__s=(str); int __l=len; (result)->value.str.len = __l; (result)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (result)->type = 6; };
  return 0;
 }

 (*result).value.str.len = len + (char_count * (to_len - 1));
 (*result).value.str.val = target = _safe_emalloc((char_count), (to_len), (len) );
 (*result).type = 6;

 if (case_sensitivity) {
  char *p = str, *e = p + len, *s = str;
  while ((p = memchr(p, from, (e - p)))) {
   memcpy(target, s, (p - s));
   target += p - s;
   memcpy(target, to, to_len);
   target += to_len;
   p++;
   s = p;
   if (replace_count) {
    *replace_count += 1;
   }
  }
  if (s < e) {
   memcpy(target, s, (e - s));
   target += e - s;
  }
 } else {
  for (source = str; source < source_end; source++) {
   if (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      (__extension__ ({ int __res; if (sizeof (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) > 1) { if (__builtin_constant_p (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )) { int __c = (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      *source
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )]; __res; })) 
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                       == 
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          (__extension__ ({ int __res; if (sizeof (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          ) > 1) { if (__builtin_constant_p (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          )) { int __c = (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                          from
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                          )]; __res; }))
# 3173 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                       ) {
    replaced = 1;
    if (replace_count) {
     *replace_count += 1;
    }
    for (tmp = to, tmp_end = tmp+to_len; tmp < tmp_end; tmp++) {
     *target = *tmp;
     target++;
    }
   } else {
    *target = *source;
    target++;
   }
  }
 }
 *target = 0;
 return replaced;
}




 int php_char_to_str(char *str, uint len, char from, char *to, int to_len, zval *result)
{
 return php_char_to_str_ex(str, len, from, to, to_len, result, 1, 
# 3197 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                                 ((void *)0)
# 3197 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                     );
}




 char *php_str_to_str_ex(char *haystack, int length,
 char *needle, int needle_len, char *str, int str_len, int *_new_length, int case_sensitivity, int *replace_count)
{
 char *new_str;

 if (needle_len < length) {
  char *end, *haystack_dup = 
# 3209 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                            ((void *)0)
# 3209 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , *needle_dup = 
# 3209 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                ((void *)0)
# 3209 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                    ;
  char *e, *s, *p, *r;

  if (needle_len == str_len) {
   new_str = _estrndup((haystack), (length) );
   *_new_length = length;

   if (case_sensitivity) {
    end = new_str + length;
    for (p = new_str; (r = zend_memnstr(p, needle, needle_len, end)); p = r + needle_len) {
     memcpy(r, str, str_len);
     if (replace_count) {
      (*replace_count)++;
     }
    }
   } else {
    haystack_dup = _estrndup((haystack), (length) );
    needle_dup = _estrndup((needle), (needle_len) );
    php_strtolower(haystack_dup, length);
    php_strtolower(needle_dup, needle_len);
    end = haystack_dup + length;
    for (p = haystack_dup; (r = zend_memnstr(p, needle_dup, needle_len, end)); p = r + needle_len) {
     memcpy(new_str + (r - haystack_dup), str, str_len);
     if (replace_count) {
      (*replace_count)++;
     }
    }
    _efree((haystack_dup) );
    _efree((needle_dup) );
   }
   return new_str;
  } else {
   if (!case_sensitivity) {
    haystack_dup = _estrndup((haystack), (length) );
    needle_dup = _estrndup((needle), (needle_len) );
    php_strtolower(haystack_dup, length);
    php_strtolower(needle_dup, needle_len);
   }

   if (str_len < needle_len) {
    new_str = _emalloc((length + 1) );
   } else {
    int count = 0;
    char *o, *n, *endp;

    if (case_sensitivity) {
     o = haystack;
     n = needle;
    } else {
     o = haystack_dup;
     n = needle_dup;
    }
    endp = o + length;

    while ((o = zend_memnstr(o, n, needle_len, endp))) {
     o += needle_len;
     count++;
    }
    if (count == 0) {

     if (haystack_dup) {
      _efree((haystack_dup) );
     }
     if (needle_dup) {
      _efree((needle_dup) );
     }
     new_str = _estrndup((haystack), (length) );
     if (_new_length) {
      *_new_length = length;
     }
     return new_str;
    } else {
     new_str = _safe_emalloc((count), (str_len - needle_len), (length + 1) );
    }
   }

   e = s = new_str;

   if (case_sensitivity) {
    end = haystack + length;
    for (p = haystack; (r = zend_memnstr(p, needle, needle_len, end)); p = r + needle_len) {
     memcpy(e, p, r - p);
     e += r - p;
     memcpy(e, str, str_len);
     e += str_len;
     if (replace_count) {
      (*replace_count)++;
     }
    }

    if (p < end) {
     memcpy(e, p, end - p);
     e += end - p;
    }
   } else {
    end = haystack_dup + length;

    for (p = haystack_dup; (r = zend_memnstr(p, needle_dup, needle_len, end)); p = r + needle_len) {
     memcpy(e, haystack + (p - haystack_dup), r - p);
     e += r - p;
     memcpy(e, str, str_len);
     e += str_len;
     if (replace_count) {
      (*replace_count)++;
     }
    }

    if (p < end) {
     memcpy(e, haystack + (p - haystack_dup), end - p);
     e += end - p;
    }
   }

   if (haystack_dup) {
    _efree((haystack_dup) );
   }
   if (needle_dup) {
    _efree((needle_dup) );
   }

   *e = '\0';
   *_new_length = e - s;

   new_str = _erealloc((new_str), (*_new_length + 1), 0 );
   return new_str;
  }
 } else if (needle_len > length) {
nothing_todo:
  *_new_length = length;
  new_str = _estrndup((haystack), (length) );
  return new_str;
 } else {
  if (case_sensitivity && memcmp(haystack, needle, length)) {
   goto nothing_todo;
  } else if (!case_sensitivity) {
   char *l_haystack, *l_needle;

   l_haystack = _estrndup((haystack), (length) );
   l_needle = _estrndup((needle), (length) );

   php_strtolower(l_haystack, length);
   php_strtolower(l_needle, length);

   if (memcmp(l_haystack, l_needle, length)) {
    _efree((l_haystack) );
    _efree((l_needle) );
    goto nothing_todo;
   }
   _efree((l_haystack) );
   _efree((l_needle) );
  }

  *_new_length = str_len;
  new_str = _estrndup((str), (str_len) );

  if (replace_count) {
   (*replace_count)++;
  }
  return new_str;
 }

}




 char *php_str_to_str(char *haystack, int length,
 char *needle, int needle_len, char *str, int str_len, int *_new_length)
{
 return php_str_to_str_ex(haystack, length, needle, needle_len, str, str_len, _new_length, 1, 
# 3378 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                                                             ((void *)0)
# 3378 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                                                 );
}





static void php_str_replace_in_subject(zval *search, zval *replace, zval **subject, zval *result, int case_sensitivity, int *replace_count)
{
 zval **search_entry,
    **replace_entry = 
# 3388 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                     ((void *)0)
# 3388 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                         ,
      temp_result;
 char *replace_value = 
# 3390 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                       ((void *)0)
# 3390 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                           ;
 int replace_len = 0;


 if ((*subject)->type!=6) { if (!((*subject)->is_ref)) { { zval *orig_ptr = *(subject); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(subject)) = (zval *) _emalloc((sizeof(zval)) ); **(subject) = *orig_ptr; _zval_copy_ctor((*(subject)) ); (*(subject))->refcount=1; (*(subject))->is_ref = 0; } }; }; if ((*subject)->type != 6) { _convert_to_string((*subject) ); }; };
 (*result).type = 6;
 if ((**subject).value.str.len == 0) {
  { char *__s=(""); int __l=0; (result)->value.str.len = __l; (result)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (result)->type = 6; };
  return;
 }


 if ((*search).type == 4) {

  *result = **subject;
  _zval_copy_ctor((result) );
  (result)->refcount = 1; (result)->is_ref = 0;;

  zend_hash_internal_pointer_reset_ex((*search).value.ht, 
# 3408 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
 ((void *)0)
# 3408 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 );

  if ((*replace).type == 4) {
   zend_hash_internal_pointer_reset_ex((*replace).value.ht, 
# 3411 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
  ((void *)0)
# 3411 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
  );
  } else {

   replace_value = (*replace).value.str.val;
   replace_len = (*replace).value.str.len;
  }


  while (zend_hash_get_current_data_ex((*search).value.ht, (void **) &search_entry, 
# 3419 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        ((void *)0)
# 3419 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
        ) == 0) {

   { zval *orig_ptr = *(search_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(search_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(search_entry) = *orig_ptr; _zval_copy_ctor((*(search_entry)) ); (*(search_entry))->refcount=1; (*(search_entry))->is_ref = 0; } };
   if ((*search_entry)->type != 6) { _convert_to_string((*search_entry) ); };
   if ((**search_entry).value.str.len == 0) {
    zend_hash_move_forward_ex((*search).value.ht, 
# 3424 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
   ((void *)0)
# 3424 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
   );
    if ((*replace).type == 4) {
     zend_hash_move_forward_ex((*replace).value.ht, 
# 3426 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
    ((void *)0)
# 3426 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
    );
    }
    continue;
   }


   if ((*replace).type == 4) {

    if (zend_hash_get_current_data_ex((*replace).value.ht, (void **)&replace_entry, 
# 3434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ((void *)0)
# 3434 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       ) == 0) {

     if ((*replace_entry)->type!=6) { if (!((*replace_entry)->is_ref)) { { zval *orig_ptr = *(replace_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(replace_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(replace_entry) = *orig_ptr; _zval_copy_ctor((*(replace_entry)) ); (*(replace_entry))->refcount=1; (*(replace_entry))->is_ref = 0; } }; }; if ((*replace_entry)->type != 6) { _convert_to_string((*replace_entry) ); }; };


     replace_value = (**replace_entry).value.str.val;
     replace_len = (**replace_entry).value.str.len;

     zend_hash_move_forward_ex((*replace).value.ht, 
# 3442 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
    ((void *)0)
# 3442 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
    );
    } else {

     replace_value = "";
     replace_len = 0;
    }
   }

   if ((**search_entry).value.str.len == 1) {
    php_char_to_str_ex((*result).value.str.val,
        (*result).value.str.len,
        (**search_entry).value.str.val[0],
        replace_value,
        replace_len,
        &temp_result,
        case_sensitivity,
        replace_count);
   } else if ((**search_entry).value.str.len > 1) {
    (temp_result).value.str.val = php_str_to_str_ex((*result).value.str.val, (*result).value.str.len,
                 (**search_entry).value.str.val, (**search_entry).value.str.len,
                 replace_value, replace_len, &(temp_result).value.str.len, case_sensitivity, replace_count);
   }

   _efree(((*result).value.str.val) );
   (*result).value.str.val = (temp_result).value.str.val;
   (*result).value.str.len = (temp_result).value.str.len;

   if ((*result).value.str.len == 0) {
    return;
   }

   zend_hash_move_forward_ex((*search).value.ht, 
# 3473 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
  ((void *)0)
# 3473 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
  );
  }
 } else {
  if ((*search).value.str.len == 1) {
   php_char_to_str_ex((**subject).value.str.val,
       (**subject).value.str.len,
       (*search).value.str.val[0],
       (*replace).value.str.val,
       (*replace).value.str.len,
       result,
       case_sensitivity,
       replace_count);
  } else if ((*search).value.str.len > 1) {
   (*result).value.str.val = php_str_to_str_ex((**subject).value.str.val, (**subject).value.str.len,
             (*search).value.str.val, (*search).value.str.len,
             (*replace).value.str.val, (*replace).value.str.len, &(*result).value.str.len, case_sensitivity, replace_count);
  } else {
   *result = **subject;
   _zval_copy_ctor((result) );
   (result)->refcount = 1; (result)->is_ref = 0;;
  }
 }
}




static void php_str_replace_common(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int case_sensitivity)
{
 zval **subject, **search, **replace, **subject_entry, **zcount;
 zval *result;
 char *string_key;
 uint string_key_len;
 ulong num_key;
 int count = 0;
 int argc = (ht);

 if (argc < 3 || argc > 4 ||
    zend_get_parameters_ex(argc, &search, &replace, &subject, &zcount) == -1) {
  { zend_wrong_param_count(); return; };
 }

 { zval *orig_ptr = *(search); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(search)) = (zval *) _emalloc((sizeof(zval)) ); **(search) = *orig_ptr; _zval_copy_ctor((*(search)) ); (*(search))->refcount=1; (*(search))->is_ref = 0; } };
 { zval *orig_ptr = *(replace); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(replace)) = (zval *) _emalloc((sizeof(zval)) ); **(replace) = *orig_ptr; _zval_copy_ctor((*(replace)) ); (*(replace))->refcount=1; (*(replace))->is_ref = 0; } };
 { zval *orig_ptr = *(subject); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(subject)) = (zval *) _emalloc((sizeof(zval)) ); **(subject) = *orig_ptr; _zval_copy_ctor((*(subject)) ); (*(subject))->refcount=1; (*(subject))->is_ref = 0; } };


 if ((**search).type != 4) {
  if ((*search)->type!=6) { if (!((*search)->is_ref)) { { zval *orig_ptr = *(search); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(search)) = (zval *) _emalloc((sizeof(zval)) ); **(search) = *orig_ptr; _zval_copy_ctor((*(search)) ); (*(search))->refcount=1; (*(search))->is_ref = 0; } }; }; if ((*search)->type != 6) { _convert_to_string((*search) ); }; };
  if ((*replace)->type!=6) { if (!((*replace)->is_ref)) { { zval *orig_ptr = *(replace); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(replace)) = (zval *) _emalloc((sizeof(zval)) ); **(replace) = *orig_ptr; _zval_copy_ctor((*(replace)) ); (*(replace))->refcount=1; (*(replace))->is_ref = 0; } }; }; if ((*replace)->type != 6) { _convert_to_string((*replace) ); }; };
 } else if ((**replace).type != 4) {
  if ((*replace)->type!=6) { if (!((*replace)->is_ref)) { { zval *orig_ptr = *(replace); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(replace)) = (zval *) _emalloc((sizeof(zval)) ); **(replace) = *orig_ptr; _zval_copy_ctor((*(replace)) ); (*(replace))->refcount=1; (*(replace))->is_ref = 0; } }; }; if ((*replace)->type != 6) { _convert_to_string((*replace) ); }; };
 }


 if ((**subject).type == 4) {
  _array_init((return_value) );
  zend_hash_internal_pointer_reset_ex((**subject).value.ht, 
# 3530 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
 ((void *)0)
# 3530 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 );



  while (zend_hash_get_current_data_ex((**subject).value.ht, (void **)&subject_entry, 
# 3534 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        ((void *)0)
# 3534 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
        ) == 0) {
   if ((**subject_entry).type != 4 && (**subject_entry).type != 5) {
    (result) = (zval *) _emalloc((sizeof(zval)) ); (result)->refcount = 1; (result)->is_ref = 0;;;
    { zval *orig_ptr = *(subject_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(subject_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(subject_entry) = *orig_ptr; _zval_copy_ctor((*(subject_entry)) ); (*(subject_entry))->refcount=1; (*(subject_entry))->is_ref = 0; } };
    php_str_replace_in_subject(*search, *replace, subject_entry, result, case_sensitivity, (argc > 3) ? &count : 
# 3538 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                                                                                ((void *)0)
# 3538 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                                                                    );
   } else {
    (result) = (zval *) _emalloc((sizeof(zval)) );
    (++(*subject_entry)->refcount);
    (*result) = *(*subject_entry); if ((*subject_entry)->refcount>1) { _zval_copy_ctor((&(*result)) ); (*subject_entry)->refcount--; } else { _efree((*subject_entry) ); } (&(*result))->refcount = 1; (&(*result))->is_ref = 0;;;
   }

   switch (zend_hash_get_current_key_ex((**subject).value.ht, &string_key,
            &string_key_len, &num_key, 0, 
# 3546 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                         ((void *)0)
# 3546 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                             )) {
    case 1:
     add_assoc_zval_ex(return_value, string_key, string_key_len, result);
     break;

    case 2:
     add_index_zval(return_value, num_key, result);
     break;
   }

   zend_hash_move_forward_ex((**subject).value.ht, 
# 3556 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
  ((void *)0)
# 3556 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
  );
  }
 } else {
  php_str_replace_in_subject(*search, *replace, subject, return_value, case_sensitivity, (argc > 3) ? &count : 
# 3559 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                                                                              ((void *)0)
# 3559 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                                                                  );
 }
 if (argc > 3) {
  _zval_dtor((*zcount) );
  { (**zcount).type = 1; (**zcount).value.lval = count; };
 }
}




void zif_str_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_str_replace_common(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zif_str_ireplace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_str_replace_common(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}







static void php_hebrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int convert_newlines)
{
 zval **str, **max_chars_per_line;
 char *heb_str, *tmp, *target, *broken_str;
 int block_start, block_end, block_type, block_length, i;
 long max_chars=0;
 int begin, end, char_count, orig_begin;


 switch ((ht)) {
  case 1:
   if (zend_get_parameters_ex(1, &str) == -1) {
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }
   break;
  case 2:
   if (zend_get_parameters_ex(2, &str, &max_chars_per_line) == -1) {
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }
   if ((*max_chars_per_line)->type!=1) { if (!((*max_chars_per_line)->is_ref)) { { zval *orig_ptr = *(max_chars_per_line); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(max_chars_per_line)) = (zval *) _emalloc((sizeof(zval)) ); **(max_chars_per_line) = *orig_ptr; _zval_copy_ctor((*(max_chars_per_line)) ); (*(max_chars_per_line))->refcount=1; (*(max_chars_per_line))->is_ref = 0; } }; }; convert_to_long(*max_chars_per_line); };
   max_chars = (**max_chars_per_line).value.lval;
   break;
  default:
   { zend_wrong_param_count(); return; };
   break;
 }

 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };

 if ((**str).value.str.len == 0) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 tmp = (**str).value.str.val;
 block_start=block_end=0;

 heb_str = (char *) _emalloc(((**str).value.str.len+1) );
 target = heb_str+(**str).value.str.len;
 *target = 0;
 target--;

 block_length=0;

 if ((((((unsigned char) *tmp) >= 224) && (((unsigned char) *tmp) <= 250)) ? 1 : 0)) {
  block_type = 2;
 } else {
  block_type = 1;
 }

 do {
  if (block_type == 2) {
   while (((((((unsigned char) (int)*(tmp+1)) >= 224) && (((unsigned char) (int)*(tmp+1)) <= 250)) ? 1 : 0) || (((((unsigned char) (int)*(tmp+1)) == ' ' || ((unsigned char) (int)*(tmp+1)) == '\t')) ? 1 : 0) || 
# 3640 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                             ((*__ctype_b_loc ())[(int) ((
# 3640 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                             (int)*(tmp+1)
# 3640 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                             ))] & (unsigned short int) _ISpunct) 
# 3640 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                                                    || (int)*(tmp+1)=='\n' ) && block_end<(**str).value.str.len-1) {
    tmp++;
    block_end++;
    block_length++;
   }
   for (i = block_start; i<= block_end; i++) {
    *target = (**str).value.str.val[i];
    switch (*target) {
     case '(':
      *target = ')';
      break;
     case ')':
      *target = '(';
      break;
     case '[':
      *target = ']';
      break;
     case ']':
      *target = '[';
      break;
     case '{':
      *target = '}';
      break;
     case '}':
      *target = '{';
      break;
     case '<':
      *target = '>';
      break;
     case '>':
      *target = '<';
      break;
     case '\\':
      *target = '/';
      break;
     case '/':
      *target = '\\';
      break;
     default:
      break;
    }
    target--;
   }
   block_type = 1;
  } else {
   while (!(((((unsigned char) *(tmp+1)) >= 224) && (((unsigned char) *(tmp+1)) <= 250)) ? 1 : 0) && (int)*(tmp+1)!='\n' && block_end < (**str).value.str.len-1) {
    tmp++;
    block_end++;
    block_length++;
   }
   while (((((((unsigned char) (int)*tmp) == ' ' || ((unsigned char) (int)*tmp) == '\t')) ? 1 : 0) || 
# 3690 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                 ((*__ctype_b_loc ())[(int) ((
# 3690 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 (int)*tmp
# 3690 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                 ))] & (unsigned short int) _ISpunct)
# 3690 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                   ) && *tmp!='/' && *tmp!='-' && block_end > block_start) {
    tmp--;
    block_end--;
   }
   for (i = block_end; i >= block_start; i--) {
    *target = (**str).value.str.val[i];
    target--;
   }
   block_type = 2;
  }
  block_start=block_end+1;
 } while (block_end < (**str).value.str.len-1);


 broken_str = (char *) _emalloc(((**str).value.str.len+1) );
 begin=end=(**str).value.str.len-1;
 target = broken_str;

 while (1) {
  char_count=0;
  while ((!max_chars || char_count < max_chars) && begin > 0) {
   char_count++;
   begin--;
   if (begin <= 0 || (((((unsigned char) heb_str[begin]) == '\n' || ((unsigned char) heb_str[begin]) == '\r')) ? 1 : 0)) {
    while (begin > 0 && (((((unsigned char) heb_str[begin-1]) == '\n' || ((unsigned char) heb_str[begin-1]) == '\r')) ? 1 : 0)) {
     begin--;
     char_count++;
    }
    break;
   }
  }
  if (char_count == max_chars) {
   int new_char_count=char_count, new_begin=begin;

   while (new_char_count > 0) {
    if ((((((unsigned char) heb_str[new_begin]) == ' ' || ((unsigned char) heb_str[new_begin]) == '\t')) ? 1 : 0) || (((((unsigned char) heb_str[new_begin]) == '\n' || ((unsigned char) heb_str[new_begin]) == '\r')) ? 1 : 0)) {
     break;
    }
    new_begin++;
    new_char_count--;
   }
   if (new_char_count > 0) {
    char_count=new_char_count;
    begin=new_begin;
   }
  }
  orig_begin=begin;

  if ((((((unsigned char) heb_str[begin]) == ' ' || ((unsigned char) heb_str[begin]) == '\t')) ? 1 : 0)) {
   heb_str[begin]='\n';
  }
  while (begin <= end && (((((unsigned char) heb_str[begin]) == '\n' || ((unsigned char) heb_str[begin]) == '\r')) ? 1 : 0)) {
   begin++;
  }
  for (i = begin; i <= end; i++) {
   *target = heb_str[i];
   target++;
  }
  for (i = orig_begin; i <= end && (((((unsigned char) heb_str[i]) == '\n' || ((unsigned char) heb_str[i]) == '\r')) ? 1 : 0); i++) {
   *target = heb_str[i];
   target++;
  }
  begin=orig_begin;

  if (begin <= 0) {
   *target = 0;
   break;
  }
  begin--;
  end=begin;
 }
 _efree((heb_str) );

 if (convert_newlines) {
  php_char_to_str(broken_str, (**str).value.str.len,'\n', "<br />\n", 7, return_value);
  _efree((broken_str) );
 } else {
  (*return_value).value.str.val = broken_str;
  (*return_value).value.str.len = (**str).value.str.len;
  (*return_value).type = 6;
 }
}




void zif_hebrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_hebrev(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_hebrevc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_hebrev(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}





void zif_nl2br(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{

 zval **zstr;
 char *tmp, *str;
 int new_length;
 char *end, *target;
 int repl_cnt = 0;

 if ((ht) != 1 || zend_get_parameters_ex(1, &zstr) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*zstr)->type!=6) { if (!((*zstr)->is_ref)) { { zval *orig_ptr = *(zstr); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(zstr)) = (zval *) _emalloc((sizeof(zval)) ); **(zstr) = *orig_ptr; _zval_copy_ctor((*(zstr)) ); (*(zstr))->refcount=1; (*(zstr))->is_ref = 0; } }; }; if ((*zstr)->type != 6) { _convert_to_string((*zstr) ); }; };

 str = (**zstr).value.str.val;
 end = str + (**zstr).value.str.len;



 while (str < end) {
  if (*str == '\r') {
   if (*(str+1) == '\n') {
    str++;
   }
   repl_cnt++;
  } else if (*str == '\n') {
   if (*(str+1) == '\r') {
    str++;
   }
   repl_cnt++;
  }

  str++;
 }

 if (repl_cnt == 0) {
  { { char *__s=((**zstr).value.str.val); int __l=(**zstr).value.str.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 }

 new_length = (**zstr).value.str.len + repl_cnt * (sizeof("<br />") - 1);
 tmp = target = _emalloc((new_length + 1) );

 str = (**zstr).value.str.val;

 while (str < end) {
  switch (*str) {
   case '\r':
   case '\n':
    *target++ = '<';
    *target++ = 'b';
    *target++ = 'r';
    *target++ = ' ';
    *target++ = '/';
    *target++ = '>';

    if ((*str == '\r' && *(str+1) == '\n') || (*str == '\n' && *(str+1) == '\r')) {
     *target++ = *str++;
    }

   default:
    *target++ = *str;
  }

  str++;
 }

 *target = '\0';

 { { char *__s=(tmp); int __l=new_length; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}





void zif_strip_tags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *buf;
 zval **str, **allow=
# 3872 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0)
# 3872 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                        ;
 char *allowed_tags=
# 3873 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0)
# 3873 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                       ;
 int allowed_tags_len=0;
 size_t retval_len;

 switch ((ht)) {
  case 1:
   if (zend_get_parameters_ex(1, &str) == -1) {
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }
   break;
  case 2:
   if (zend_get_parameters_ex(2, &str, &allow) == -1) {
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }
   if ((*allow)->type!=6) { if (!((*allow)->is_ref)) { { zval *orig_ptr = *(allow); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(allow)) = (zval *) _emalloc((sizeof(zval)) ); **(allow) = *orig_ptr; _zval_copy_ctor((*(allow)) ); (*(allow))->refcount=1; (*(allow))->is_ref = 0; } }; }; if ((*allow)->type != 6) { _convert_to_string((*allow) ); }; };
   allowed_tags = (**allow).value.str.val;
   allowed_tags_len = (**allow).value.str.len;
   break;
  default:
   { zend_wrong_param_count(); return; };
   break;
 }
 if ((*str)->type!=6) { if (!((*str)->is_ref)) { { zval *orig_ptr = *(str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(str)) = (zval *) _emalloc((sizeof(zval)) ); **(str) = *orig_ptr; _zval_copy_ctor((*(str)) ); (*(str))->refcount=1; (*(str))->is_ref = 0; } }; }; if ((*str)->type != 6) { _convert_to_string((*str) ); }; };
 buf = _estrndup(((**str).value.str.val), ((**str).value.str.len) );
 retval_len = php_strip_tags_ex(buf, (**str).value.str.len, 
# 3897 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                                                      ((void *)0)
# 3897 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                          , allowed_tags, allowed_tags_len, 0);
 { { char *__s=(buf); int __l=retval_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}




void zif_setlocale(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval ***args = (zval ***) _safe_emalloc((sizeof(zval **)), ((ht)), (0) );
 zval **pcategory, **plocale;
 int i, cat, n_args=(ht);
 char *loc, *retval;

 if (_zend_get_parameters_array_ex(n_args, args ) == -1 || n_args < 2) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }

 pcategory = args[0];
 if ((**pcategory).type == 1) {
  if ((*pcategory)->type!=1) { if (!((*pcategory)->is_ref)) { { zval *orig_ptr = *(pcategory); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(pcategory)) = (zval *) _emalloc((sizeof(zval)) ); **(pcategory) = *orig_ptr; _zval_copy_ctor((*(pcategory)) ); (*(pcategory))->refcount=1; (*(pcategory))->is_ref = 0; } }; }; convert_to_long(*pcategory); };
  cat = (**pcategory).value.lval;
 } else {
  char *category;
  php_error_docref0(
# 3922 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 3922 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "Passing locale category name as string is deprecated. Use the LC_* -constants instead.");
  if ((*pcategory)->type!=6) { if (!((*pcategory)->is_ref)) { { zval *orig_ptr = *(pcategory); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(pcategory)) = (zval *) _emalloc((sizeof(zval)) ); **(pcategory) = *orig_ptr; _zval_copy_ctor((*(pcategory)) ); (*(pcategory))->refcount=1; (*(pcategory))->is_ref = 0; } }; }; if ((*pcategory)->type != 6) { _convert_to_string((*pcategory) ); }; };
  category = (**pcategory).value.str.val;

  if (!strcasecmp ("LC_ALL", category))
   cat = 
# 3927 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        6
# 3927 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
              ;
  else if (!strcasecmp ("LC_COLLATE", category))
   cat = 
# 3929 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        3
# 3929 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ;
  else if (!strcasecmp ("LC_CTYPE", category))
   cat = 
# 3931 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        0
# 3931 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                ;

  else if (!strcasecmp ("LC_MESSAGES", category))
   cat = 
# 3934 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        5
# 3934 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                   ;

  else if (!strcasecmp ("LC_MONETARY", category))
   cat = 
# 3937 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        4
# 3937 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                   ;
  else if (!strcasecmp ("LC_NUMERIC", category))
   cat = 
# 3939 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        1
# 3939 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  ;
  else if (!strcasecmp ("LC_TIME", category))
   cat = 
# 3941 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        2
# 3941 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
               ;
  else {
   php_error_docref0(
# 3943 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 3943 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Invalid locale category name %s, must be one of LC_ALL, LC_COLLATE, LC_CTYPE, LC_MONETARY, LC_NUMERIC, or LC_TIME.", category);
   _efree((args) );
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
 }

 if ((**args[1]).type == 4) {
  zend_hash_internal_pointer_reset_ex((**args[1]).value.ht, 
# 3950 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
 ((void *)0)
# 3950 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 );
  i=0;
 } else {
  i=1;
 }
 while (1) {
  if ((**args[1]).type == 4) {
   if (!zend_hash_num_elements((**args[1]).value.ht)) {
    break;
   }
   zend_hash_get_current_data_ex((**args[1]).value.ht, (void **)&plocale, 
# 3960 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
  ((void *)0)
# 3960 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
  );
  } else {
   plocale = args[i];
  }

  if ((*plocale)->type!=6) { if (!((*plocale)->is_ref)) { { zval *orig_ptr = *(plocale); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(plocale)) = (zval *) _emalloc((sizeof(zval)) ); **(plocale) = *orig_ptr; _zval_copy_ctor((*(plocale)) ); (*(plocale))->refcount=1; (*(plocale))->is_ref = 0; } }; }; if ((*plocale)->type != 6) { _convert_to_string((*plocale) ); }; };

  if (!
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) && __builtin_constant_p (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) && (__s1_len = strlen (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ), __s2_len = strlen (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ), (!((size_t)(const void *)((
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) + 1) - (size_t)(const void *)(
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) + 1) - (size_t)(const void *)(
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) == 1) || __s2_len >= 4)) ? __builtin_strcmp (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      , 
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) : (__builtin_constant_p (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) && ((size_t)(const void *)((
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) + 1) - (size_t)(const void *)(
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) == 1) && (__s1_len = strlen (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ), __s1_len < 4) ? (__builtin_constant_p (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) && ((size_t)(const void *)((
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) + 1) - (size_t)(const void *)(
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) == 1) ? __builtin_strcmp (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      , 
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); int __result = (((const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) && ((size_t)(const void *)((
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) + 1) - (size_t)(const void *)(
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) == 1) && (__s2_len = strlen (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ), __s2_len < 4) ? (__builtin_constant_p (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) && ((size_t)(const void *)((
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) + 1) - (size_t)(const void *)(
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) == 1) ? __builtin_strcmp (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      , 
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ); int __result = (((const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      "0"
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      , 
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      (**plocale).value.str.val
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      )))); })
# 3967 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                        ) {
   loc = 
# 3968 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        ((void *)0)
# 3968 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
            ;
  } else {
   loc = (**plocale).value.str.val;
  }

  retval = setlocale (cat, loc);
  ;
  if (retval) {

   if (loc) {
    if ((basic_globals.locale_string)) { _efree(((basic_globals.locale_string)) ); };
    (basic_globals.locale_string) = _estrdup((retval) );
   }

   _efree((args) );
   { char *__s=(retval); (return_value)->value.str.len = strlen(__s); (return_value)->value.str.val = (1?_estrndup((__s), ((return_value)->value.str.len) ):__s); (return_value)->type = 6; };

   return;
  }

  if ((**args[1]).type == 4) {
   if (zend_hash_move_forward_ex((**args[1]).value.ht, 
# 3989 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
      ((void *)0)
# 3989 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
      ) == -1) break;
  } else {
   if (++i >= n_args) break;
  }
 }


 _efree((args) );

 { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
}




void zif_parse_str(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **arg;
 zval **arrayArg;
 zval *sarg;
 char *res = 
# 4009 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
            ((void *)0)
# 4009 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                ;
 int argCount;

 argCount = (ht);
 if (argCount < 1 || argCount > 2 || zend_get_parameters_ex(argCount, &arg, &arrayArg) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*arg)->type!=6) { if (!((*arg)->is_ref)) { { zval *orig_ptr = *(arg); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(arg)) = (zval *) _emalloc((sizeof(zval)) ); **(arg) = *orig_ptr; _zval_copy_ctor((*(arg)) ); (*(arg))->refcount=1; (*(arg))->is_ref = 0; } }; }; if ((*arg)->type != 6) { _convert_to_string((*arg) ); }; };
 sarg = *arg;
 if ((*sarg).value.str.val && *(*sarg).value.str.val) {
  res = _estrndup(((*sarg).value.str.val), ((*sarg).value.str.len) );
 }

 if (argCount == 1) {
  zval tmp;
  (tmp).value.ht = (executor_globals.active_symbol_table);

  sapi_module.treat_data(3, res, &tmp );
 } else {

  _zval_dtor((*arrayArg) );
  _array_init((*arrayArg) );

  sapi_module.treat_data(3, res, *arrayArg );
 }
}
# 4049 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
int php_tag_find(char *tag, int len, char *set) {
 char c, *n, *t;
 int state=0, done=0;
 char *norm;

 if (len <= 0) {
  return 0;
 }

 norm = _emalloc((len+1) );

 n = norm;
 t = tag;
 c = 
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
    (__extension__ ({ int __res; if (sizeof (
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
    *t
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
    ) > 1) { if (__builtin_constant_p (
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
    *t
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
    )) { int __c = (
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
    *t
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
    ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
    *t
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
    ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
    *t
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
    )]; __res; }))
# 4062 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
               ;





 while (!done) {
  switch (c) {
   case '<':
    *(n++) = c;
    break;
   case '>':
    done =1;
    break;
   default:
    if (!
# 4077 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        ((*__ctype_b_loc ())[(int) ((
# 4077 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
        (int)c
# 4077 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
        ))] & (unsigned short int) _ISspace)
# 4077 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                       ) {
     if (state == 0) {
      state=1;
      if (c != '/')
       *(n++) = c;
     } else {
      *(n++) = c;
     }
    } else {
     if (state == 1)
      done=1;
    }
    break;
  }
  c = 
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     (__extension__ ({ int __res; if (sizeof (
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     *(++t)
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ) > 1) { if (__builtin_constant_p (
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     *(++t)
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     )) { int __c = (
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     *(++t)
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     *(++t)
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
     *(++t)
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
     )]; __res; }))
# 4091 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    ;
 }
 *(n++) = '>';
 *n = '\0';
 if (strstr(set, norm)) {
  done=1;
 } else {
  done=0;
 }
 _efree((norm) );
 return done;
}


 size_t php_strip_tags(char *rbuf, int len, int *stateptr, char *allow, int allow_len)
{
 return php_strip_tags_ex(rbuf, len, stateptr, allow, allow_len, 0);
}
# 4130 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 size_t php_strip_tags_ex(char *rbuf, int len, int *stateptr, char *allow, int allow_len, zend_bool allow_tag_spaces)
{
 char *tbuf, *buf, *p, *tp, *rp, c, lc;
 int br, i=0, depth=0;
 int state = 0;

 if (stateptr)
  state = *stateptr;

 buf = _estrndup((rbuf), (len) );
 c = *buf;
 lc = '\0';
 p = buf;
 rp = rbuf;
 br = 0;
 if (allow) {
  php_strtolower(allow, allow_len);
  tbuf = _emalloc((1023 +1) );
  tp = tbuf;
 } else {
  tbuf = tp = 
# 4150 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ((void *)0)
# 4150 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                 ;
 }

 while (i < len) {
  switch (c) {
   case '\0':
    break;
   case '<':
    if (
# 4158 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ((*__ctype_b_loc ())[(int) ((
# 4158 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
       *(p + 1)
# 4158 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
       ))] & (unsigned short int) _ISspace) 
# 4158 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                         && !allow_tag_spaces) {
     goto reg_char;
    }
    if (state == 0) {
     lc = '<';
     state = 1;
     if (allow) {
      tp = ((tp-tbuf) >= 1023 ? tbuf: tp);
      *(tp++) = '<';
     }
    } else if (state == 1) {
     depth++;
    }
    break;

   case '(':
    if (state == 2) {
     if (lc != '"' && lc != '\'') {
      lc = '(';
      br++;
     }
    } else if (allow && state == 1) {
     tp = ((tp-tbuf) >= 1023 ? tbuf: tp);
     *(tp++) = c;
    } else if (state == 0) {
     *(rp++) = c;
    }
    break;

   case ')':
    if (state == 2) {
     if (lc != '"' && lc != '\'') {
      lc = ')';
      br--;
     }
    } else if (allow && state == 1) {
     tp = ((tp-tbuf) >= 1023 ? tbuf: tp);
     *(tp++) = c;
    } else if (state == 0) {
     *(rp++) = c;
    }
    break;

   case '>':
    if (depth) {
     depth--;
     break;
    }

    switch (state) {
     case 1:
      lc = '>';
      state = 0;
      if (allow) {
       tp = ((tp-tbuf) >= 1023 ? tbuf: tp);
       *(tp++) = '>';
       *tp='\0';
       if (php_tag_find(tbuf, tp-tbuf, allow)) {
        memcpy(rp, tbuf, tp-tbuf);
        rp += tp-tbuf;
       }
       tp = tbuf;
      }
      break;

     case 2:
      if (!br && lc != '\"' && *(p-1) == '?') {
       state = 0;
       tp = tbuf;
      }
      break;

     case 3:
      state = 0;
      tp = tbuf;
      break;

     case 4:
      if (p >= buf + 2 && *(p-1) == '-' && *(p-2) == '-') {
       state = 0;
       tp = tbuf;
      }
      break;

     default:
      *(rp++) = c;
      break;
    }
    break;

   case '"':
   case '\'':
    if (state == 2 && *(p-1) != '\\') {
     if (lc == c) {
      lc = '\0';
     } else if (lc != '\\') {
      lc = c;
     }
    } else if (state == 0) {
     *(rp++) = c;
    } else if (allow && state == 1) {
     tp = ((tp-tbuf) >= 1023 ? tbuf: tp);
     *(tp++) = c;
    }
    break;

   case '!':

    if (state == 1 && *(p-1) == '<') {
     state = 3;
     lc = c;
    } else {
     if (state == 0) {
      *(rp++) = c;
     } else if (allow && state == 1) {
      tp = ((tp-tbuf) >= 1023 ? tbuf: tp);
      *(tp++) = c;
     }
    }
    break;

   case '-':
    if (state == 3 && p >= buf + 2 && *(p-1) == '-' && *(p-2) == '!') {
     state = 4;
    } else {
     goto reg_char;
    }
    break;

   case '?':

    if (state == 1 && *(p-1) == '<') {
     br=0;
     state=2;
     break;
    }

   case 'E':
   case 'e':

    if (state==3 && p > buf+6
           && 
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             (__extension__ ({ int __res; if (sizeof (
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-1)
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ) > 1) { if (__builtin_constant_p (
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-1)
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )) { int __c = (
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-1)
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-1)
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-1)
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )]; __res; })) 
# 4299 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                             == 'p'
              && 
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                (__extension__ ({ int __res; if (sizeof (
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                *(p-2)
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                ) > 1) { if (__builtin_constant_p (
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                *(p-2)
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                )) { int __c = (
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                *(p-2)
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                *(p-2)
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                *(p-2)
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                )]; __res; })) 
# 4300 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                == 'y'
           && 
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             (__extension__ ({ int __res; if (sizeof (
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-3)
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ) > 1) { if (__builtin_constant_p (
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-3)
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )) { int __c = (
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-3)
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-3)
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-3)
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )]; __res; })) 
# 4301 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                             == 't'
           && 
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             (__extension__ ({ int __res; if (sizeof (
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-4)
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ) > 1) { if (__builtin_constant_p (
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-4)
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )) { int __c = (
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-4)
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-4)
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-4)
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )]; __res; })) 
# 4302 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                             == 'c'
           && 
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             (__extension__ ({ int __res; if (sizeof (
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-5)
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ) > 1) { if (__builtin_constant_p (
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-5)
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )) { int __c = (
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-5)
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-5)
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-5)
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )]; __res; })) 
# 4303 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                             == 'o'
           && 
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             (__extension__ ({ int __res; if (sizeof (
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-6)
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ) > 1) { if (__builtin_constant_p (
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-6)
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )) { int __c = (
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-6)
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-6)
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             ); } else __res = (*__ctype_tolower_loc ())[(int) (
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
             *(p-6)
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
             )]; __res; })) 
# 4304 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                             == 'd') {
     state = 1;
     break;
    }


   case 'l':





    if (state == 2 && p > buf+2 && *(p-1) == 'm' && *(p-2) == 'x') {
     state = 1;
     break;
    }


   default:
reg_char:
    if (state == 0) {
     *(rp++) = c;
    } else if (allow && state == 1) {
     tp = ((tp-tbuf) >= 1023 ? tbuf: tp);
     *(tp++) = c;
    }
    break;
  }
  c = *(++p);
  i++;
 }
 if (rp < rbuf + len) {
  *rp = '\0';
 }
 _efree((buf) );
 if (allow)
  _efree((tbuf) );
 if (stateptr)
  *stateptr = state;

 return (size_t)(rp - rbuf);
}




void zif_str_repeat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input_str;
 zval **mult;
 char *result;
 size_t result_len;

 if ((ht) != 2 || zend_get_parameters_ex(2, &input_str, &mult) == -1) {
  { zend_wrong_param_count(); return; };
 }


 if ((*input_str)->type!=6) { if (!((*input_str)->is_ref)) { { zval *orig_ptr = *(input_str); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(input_str)) = (zval *) _emalloc((sizeof(zval)) ); **(input_str) = *orig_ptr; _zval_copy_ctor((*(input_str)) ); (*(input_str))->refcount=1; (*(input_str))->is_ref = 0; } }; }; if ((*input_str)->type != 6) { _convert_to_string((*input_str) ); }; };
 if ((*mult)->type!=1) { if (!((*mult)->is_ref)) { { zval *orig_ptr = *(mult); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(mult)) = (zval *) _emalloc((sizeof(zval)) ); **(mult) = *orig_ptr; _zval_copy_ctor((*(mult)) ); (*(mult))->refcount=1; (*(mult))->is_ref = 0; } }; }; convert_to_long(*mult); };

 if ((**mult).value.lval < 0) {
  php_error_docref0(
# 4366 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 4366 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "Second argument has to be greater than or equal to 0.");
  return;
 }


 if ((**input_str).value.str.len == 0)
  { { char *__s=(""); int __l=0; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };


 if ((**mult).value.lval == 0)
  { { char *__s=(""); int __l=0; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };


 result_len = (**input_str).value.str.len * (**mult).value.lval;
 result = (char *)_safe_emalloc(((**input_str).value.str.len), ((**mult).value.lval), (1) );


 if ((**input_str).value.str.len == 1) {
  memset(result, *((**input_str).value.str.val), (**mult).value.lval);
 } else {
  char *s, *e, *ee;
  int l=0;
  memcpy(result, (**input_str).value.str.val, (**input_str).value.str.len);
  s = result;
  e = result + (**input_str).value.str.len;
  ee = result + result_len;

  while (e<ee) {
   l = (e-s) < (ee-e) ? (e-s) : (ee-e);
   memmove(e, s, l);
   e += l;
  }
 }

 result[result_len] = '\0';

 { { char *__s=(result); int __l=result_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}




void zif_count_chars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input, **mode;
 int chars[256];
 int ac=(ht);
 int mymode=0;
 unsigned char *buf;
 int len, inx;
 char retstr[256];
 int retlen=0;

 if (ac < 1 || ac > 2 || zend_get_parameters_ex(ac, &input, &mode) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*input)->type!=6) { if (!((*input)->is_ref)) { { zval *orig_ptr = *(input); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(input)) = (zval *) _emalloc((sizeof(zval)) ); **(input) = *orig_ptr; _zval_copy_ctor((*(input)) ); (*(input))->refcount=1; (*(input))->is_ref = 0; } }; }; if ((*input)->type != 6) { _convert_to_string((*input) ); }; };

 if (ac == 2) {
  if ((*mode)->type!=1) { if (!((*mode)->is_ref)) { { zval *orig_ptr = *(mode); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(mode)) = (zval *) _emalloc((sizeof(zval)) ); **(mode) = *orig_ptr; _zval_copy_ctor((*(mode)) ); (*(mode))->refcount=1; (*(mode))->is_ref = 0; } }; }; convert_to_long(*mode); };
  mymode = (**mode).value.lval;

  if (mymode < 0 || mymode > 4) {
   php_error_docref0(
# 4430 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 4430 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Unknown mode.");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
 }

 len = (**input).value.str.len;
 buf = (unsigned char *) (**input).value.str.val;
 memset((void*) chars, 0, sizeof(chars));

 while (len > 0) {
  chars[*buf]++;
  buf++;
  len--;
 }

 if (mymode < 3) {
  _array_init((return_value) );
 }

 for (inx = 0; inx < 256; inx++) {
  switch (mymode) {
    case 0:
    add_index_long(return_value, inx, chars[inx]);
    break;
    case 1:
    if (chars[inx] != 0) {
     add_index_long(return_value, inx, chars[inx]);
    }
    break;
     case 2:
    if (chars[inx] == 0) {
     add_index_long(return_value, inx, chars[inx]);
    }
    break;
     case 3:
    if (chars[inx] != 0) {
     retstr[retlen++] = inx;
    }
    break;
     case 4:
    if (chars[inx] == 0) {
     retstr[retlen++] = inx;
    }
    break;
  }
 }

 if (mymode >= 3 && mymode <= 4) {
  { { char *__s=(retstr); int __l=retlen; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 }
}




static void php_strnatcmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int fold_case)
{
 zval **s1, **s2;

 if ((ht)!=2 || zend_get_parameters_ex(2, &s1, &s2) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*s1)->type!=6) { if (!((*s1)->is_ref)) { { zval *orig_ptr = *(s1); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(s1)) = (zval *) _emalloc((sizeof(zval)) ); **(s1) = *orig_ptr; _zval_copy_ctor((*(s1)) ); (*(s1))->refcount=1; (*(s1))->is_ref = 0; } }; }; if ((*s1)->type != 6) { _convert_to_string((*s1) ); }; };
 if ((*s2)->type!=6) { if (!((*s2)->is_ref)) { { zval *orig_ptr = *(s2); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(s2)) = (zval *) _emalloc((sizeof(zval)) ); **(s2) = *orig_ptr; _zval_copy_ctor((*(s2)) ); (*(s2))->refcount=1; (*(s2))->is_ref = 0; } }; }; if ((*s2)->type != 6) { _convert_to_string((*s2) ); }; };

 { { (*return_value).type = 1; (*return_value).value.lval = strnatcmp_ex((**s1).value.str.val, (**s1).value.str.len, (**s2).value.str.val, (**s2).value.str.len, fold_case); }; return; }

                   ;
}




void zif_strnatcmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_strnatcmp(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_localeconv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *grouping, *mon_grouping;
 int len, i;


 if ((ht) > 0) {
  { zend_wrong_param_count(); return; };
 }

 (grouping) = (zval *) _emalloc((sizeof(zval)) ); (grouping)->refcount = 1; (grouping)->is_ref = 0;;;
 (mon_grouping) = (zval *) _emalloc((sizeof(zval)) ); (mon_grouping)->refcount = 1; (mon_grouping)->is_ref = 0;;;

 _array_init((return_value) );
 _array_init((grouping) );
 _array_init((mon_grouping) );


 {
  struct lconv currlocdata;

  localeconv_r( &currlocdata );


  len = strlen(currlocdata.grouping);

  for (i = 0; i < len; i++) {
   add_index_long(grouping, i, currlocdata.grouping[i]);
  }


  len = strlen(currlocdata.mon_grouping);

  for (i = 0; i < len; i++) {
   add_index_long(mon_grouping, i, currlocdata.mon_grouping[i]);
  }

  add_assoc_string_ex(return_value, "decimal_point", strlen("decimal_point")+1, currlocdata.decimal_point, 1);
  add_assoc_string_ex(return_value, "thousands_sep", strlen("thousands_sep")+1, currlocdata.thousands_sep, 1);
  add_assoc_string_ex(return_value, "int_curr_symbol", strlen("int_curr_symbol")+1, currlocdata.int_curr_symbol, 1);
  add_assoc_string_ex(return_value, "currency_symbol", strlen("currency_symbol")+1, currlocdata.currency_symbol, 1);
  add_assoc_string_ex(return_value, "mon_decimal_point", strlen("mon_decimal_point")+1, currlocdata.mon_decimal_point, 1);
  add_assoc_string_ex(return_value, "mon_thousands_sep", strlen("mon_thousands_sep")+1, currlocdata.mon_thousands_sep, 1);
  add_assoc_string_ex(return_value, "positive_sign", strlen("positive_sign")+1, currlocdata.positive_sign, 1);
  add_assoc_string_ex(return_value, "negative_sign", strlen("negative_sign")+1, currlocdata.negative_sign, 1);
  add_assoc_long_ex(return_value, "int_frac_digits", strlen("int_frac_digits")+1, currlocdata.int_frac_digits);
  add_assoc_long_ex(return_value, "frac_digits", strlen("frac_digits")+1, currlocdata.frac_digits);
  add_assoc_long_ex(return_value, "p_cs_precedes", strlen("p_cs_precedes")+1, currlocdata.p_cs_precedes);
  add_assoc_long_ex(return_value, "p_sep_by_space", strlen("p_sep_by_space")+1, currlocdata.p_sep_by_space);
  add_assoc_long_ex(return_value, "n_cs_precedes", strlen("n_cs_precedes")+1, currlocdata.n_cs_precedes);
  add_assoc_long_ex(return_value, "n_sep_by_space", strlen("n_sep_by_space")+1, currlocdata.n_sep_by_space);
  add_assoc_long_ex(return_value, "p_sign_posn", strlen("p_sign_posn")+1, currlocdata.p_sign_posn);
  add_assoc_long_ex(return_value, "n_sign_posn", strlen("n_sign_posn")+1, currlocdata.n_sign_posn);
 }
# 4591 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
 _zend_hash_add_or_update((*return_value).value.ht, "grouping", 9, &grouping, sizeof(zval *), 
# 4591 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
((void *)0)
# 4591 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
, (1<<0) );
 _zend_hash_add_or_update((*return_value).value.ht, "mon_grouping", 13, &mon_grouping, sizeof(zval *), 
# 4592 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
((void *)0)
# 4592 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
, (1<<0) );
}




void zif_strnatcasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_strnatcmp(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zif_substr_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **haystack, **needle, **offset, **length;
 int ac = (ht);
 int count = 0;
 char *p, *endp, cmp;

 if (ac < 2 || ac > 4 || zend_get_parameters_ex(ac, &haystack, &needle, &offset, &length) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*haystack)->type!=6) { if (!((*haystack)->is_ref)) { { zval *orig_ptr = *(haystack); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(haystack)) = (zval *) _emalloc((sizeof(zval)) ); **(haystack) = *orig_ptr; _zval_copy_ctor((*(haystack)) ); (*(haystack))->refcount=1; (*(haystack))->is_ref = 0; } }; }; if ((*haystack)->type != 6) { _convert_to_string((*haystack) ); }; };
 if ((*needle)->type!=6) { if (!((*needle)->is_ref)) { { zval *orig_ptr = *(needle); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(needle)) = (zval *) _emalloc((sizeof(zval)) ); **(needle) = *orig_ptr; _zval_copy_ctor((*(needle)) ); (*(needle))->refcount=1; (*(needle))->is_ref = 0; } }; }; if ((*needle)->type != 6) { _convert_to_string((*needle) ); }; };

 if ((**needle).value.str.len == 0) {
  php_error_docref0(
# 4621 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 4621 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "Empty substring.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 p = (**haystack).value.str.val;
 endp = p + (**haystack).value.str.len;

 if (ac > 2) {
  if ((*offset)->type!=1) { if (!((*offset)->is_ref)) { { zval *orig_ptr = *(offset); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(offset)) = (zval *) _emalloc((sizeof(zval)) ); **(offset) = *orig_ptr; _zval_copy_ctor((*(offset)) ); (*(offset))->refcount=1; (*(offset))->is_ref = 0; } }; }; convert_to_long(*offset); };
  if ((**offset).value.lval < 0) {
   php_error_docref0(
# 4631 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 4631 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Offset should be greater than or equal to 0.");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
  p += (**offset).value.lval;
  if (p > endp) {
   php_error_docref0(
# 4636 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 4636 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Offset value %ld exceeds string length.", (**offset).value.lval);
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
  if (ac == 4) {
   if ((*length)->type!=1) { if (!((*length)->is_ref)) { { zval *orig_ptr = *(length); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(length)) = (zval *) _emalloc((sizeof(zval)) ); **(length) = *orig_ptr; _zval_copy_ctor((*(length)) ); (*(length))->refcount=1; (*(length))->is_ref = 0; } }; }; convert_to_long(*length); };
   if ((**length).value.lval <= 0) {
    php_error_docref0(
# 4642 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 4642 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<1L), "Length should be greater than 0.");
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }
   if ((p + (**length).value.lval) > endp) {
    php_error_docref0(
# 4646 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 4646 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<1L), "Length value %ld exceeds string length.", (**length).value.lval);
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }
   endp = p + (**length).value.lval;
  }
 }

 if ((**needle).value.str.len == 1) {
  cmp = (**needle).value.str.val[0];

  while ((p = memchr(p, cmp, endp - p))) {
   count++;
   p++;
  }
 } else {
  while ((p = zend_memnstr(p, (**needle).value.str.val, (**needle).value.str.len, endp))) {
   p += (**needle).value.str.len;
   count++;
  }
 }

 { { (*return_value).type = 1; (*return_value).value.lval = count; }; return; };
}




void zif_str_pad(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{

 zval **input,
   **pad_length,
   **pad_string,
   **pad_type;


 int num_pad_chars;
 char *result = 
# 4683 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                ((void *)0)
# 4683 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                    ;
 int result_len = 0;
 char *pad_str_val = " ";
 int pad_str_len = 1;
 int pad_type_val = 1;
 int i, left_pad=0, right_pad=0;


 if ((ht) < 2 || (ht) > 4 ||
  zend_get_parameters_ex((ht), &input, &pad_length, &pad_string, &pad_type) == -1) {
  { zend_wrong_param_count(); return; };
 }


 if ((*input)->type!=6) { if (!((*input)->is_ref)) { { zval *orig_ptr = *(input); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(input)) = (zval *) _emalloc((sizeof(zval)) ); **(input) = *orig_ptr; _zval_copy_ctor((*(input)) ); (*(input))->refcount=1; (*(input))->is_ref = 0; } }; }; if ((*input)->type != 6) { _convert_to_string((*input) ); }; };
 if ((*pad_length)->type!=1) { if (!((*pad_length)->is_ref)) { { zval *orig_ptr = *(pad_length); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(pad_length)) = (zval *) _emalloc((sizeof(zval)) ); **(pad_length) = *orig_ptr; _zval_copy_ctor((*(pad_length)) ); (*(pad_length))->refcount=1; (*(pad_length))->is_ref = 0; } }; }; convert_to_long(*pad_length); };

 num_pad_chars = (**pad_length).value.lval - (**input).value.str.len;



 if (num_pad_chars < 0) {
  { { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*input); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**input).type = 0; }; } _zval_ptr_dtor((&*input) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; }; return; };
 }


 if ((ht) > 2) {
  if ((*pad_string)->type!=6) { if (!((*pad_string)->is_ref)) { { zval *orig_ptr = *(pad_string); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(pad_string)) = (zval *) _emalloc((sizeof(zval)) ); **(pad_string) = *orig_ptr; _zval_copy_ctor((*(pad_string)) ); (*(pad_string))->refcount=1; (*(pad_string))->is_ref = 0; } }; }; if ((*pad_string)->type != 6) { _convert_to_string((*pad_string) ); }; };
  if ((**pad_string).value.str.len == 0) {
   php_error_docref0(
# 4712 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 4712 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Padding string cannot be empty.");
   return;
  }
  pad_str_val = (**pad_string).value.str.val;
  pad_str_len = (**pad_string).value.str.len;

  if ((ht) > 3) {
   if ((*pad_type)->type!=1) { if (!((*pad_type)->is_ref)) { { zval *orig_ptr = *(pad_type); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(pad_type)) = (zval *) _emalloc((sizeof(zval)) ); **(pad_type) = *orig_ptr; _zval_copy_ctor((*(pad_type)) ); (*(pad_type))->refcount=1; (*(pad_type))->is_ref = 0; } }; }; convert_to_long(*pad_type); };
   pad_type_val = (**pad_type).value.lval;
   if (pad_type_val < 0 || pad_type_val > 2) {
    php_error_docref0(
# 4722 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                    ((void *)0) 
# 4722 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , (1<<1L), "Padding type has to be STR_PAD_LEFT, STR_PAD_RIGHT, or STR_PAD_BOTH.");
    return;
   }
  }
 }

 result = (char *)_emalloc(((**input).value.str.len + num_pad_chars + 1) );


 switch (pad_type_val) {
  case 1:
   left_pad = 0;
   right_pad = num_pad_chars;
   break;

  case 0:
   left_pad = num_pad_chars;
   right_pad = 0;
   break;

  case 2:
   left_pad = num_pad_chars / 2;
   right_pad = num_pad_chars - left_pad;
   break;
 }


 for (i = 0; i < left_pad; i++)
  result[result_len++] = pad_str_val[i % pad_str_len];


 memcpy(result + result_len, (**input).value.str.val, (**input).value.str.len);
 result_len += (**input).value.str.len;


 for (i = 0; i < right_pad; i++)
  result[result_len++] = pad_str_val[i % pad_str_len];

 result[result_len] = '\0';

 { { char *__s=(result); int __l=result_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}




void zif_sscanf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval ***args;
 int result;
 int argc = (ht);

 if (argc < 2) {
  { zend_wrong_param_count(); return; };
 }

 args = (zval ***) _safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }

 if ((*args[0])->type!=6) { if (!((*args[0])->is_ref)) { { zval *orig_ptr = *(args[0]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(args[0])) = (zval *) _emalloc((sizeof(zval)) ); **(args[0]) = *orig_ptr; _zval_copy_ctor((*(args[0])) ); (*(args[0]))->refcount=1; (*(args[0]))->is_ref = 0; } }; }; if ((*args[0])->type != 6) { _convert_to_string((*args[0]) ); }; };
 if ((*args[1])->type!=6) { if (!((*args[1])->is_ref)) { { zval *orig_ptr = *(args[1]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(args[1])) = (zval *) _emalloc((sizeof(zval)) ); **(args[1]) = *orig_ptr; _zval_copy_ctor((*(args[1])) ); (*(args[1]))->refcount=1; (*(args[1]))->is_ref = 0; } }; }; if ((*args[1])->type != 6) { _convert_to_string((*args[1]) ); }; };

 result = php_sscanf_internal((**args[0]).value.str.val,
                              (**args[1]).value.str.val,
                              argc, args,
                              2, &return_value );
 _efree((args) );

 if ((((-1 - 1) - 1) - 1) == result) {
  { zend_wrong_param_count(); return; };
 }
}


static char rot13_from[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
static char rot13_to[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";



void zif_str_rot13(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **arg;

 if ((ht) != 1 || zend_get_parameters_ex(1, &arg)) {
  { zend_wrong_param_count(); return; };
 }

 if ((*arg)->type!=6) { if (!((*arg)->is_ref)) { { zval *orig_ptr = *(arg); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(arg)) = (zval *) _emalloc((sizeof(zval)) ); **(arg) = *orig_ptr; _zval_copy_ctor((*(arg)) ); (*(arg))->refcount=1; (*(arg))->is_ref = 0; } }; }; if ((*arg)->type != 6) { _convert_to_string((*arg) ); }; };
 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*arg); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**arg).type = 0; }; } _zval_ptr_dtor((&*arg) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };

 php_strtr((*return_value).value.str.val, (*return_value).value.str.len, rot13_from, rot13_to, 52);
}



static void php_string_shuffle(char *str, long len )
{
 long n_elems, rnd_idx, n_left;
 char temp;


 n_elems = len;

 if (n_elems <= 1) {
  return;
 }

 n_left = n_elems;

 while (--n_left) {
  rnd_idx = php_rand();
  (rnd_idx) = (0) + (long) ((double) ( (double) (n_left) - (0) + 1.0) * ((rnd_idx) / ((2147483647) + 1.0)));
  if (rnd_idx != n_left) {
   temp = str[n_left];
   str[n_left] = str[rnd_idx];
   str[rnd_idx] = temp;
  }
 }
}




void zif_str_shuffle(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **arg;

 if ((ht) != 1 || zend_get_parameters_ex(1, &arg)) {
  { zend_wrong_param_count(); return; };
 }

 if ((*arg)->type!=6) { if (!((*arg)->is_ref)) { { zval *orig_ptr = *(arg); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(arg)) = (zval *) _emalloc((sizeof(zval)) ); **(arg) = *orig_ptr; _zval_copy_ctor((*(arg)) ); (*(arg))->refcount=1; (*(arg))->is_ref = 0; } }; }; if ((*arg)->type != 6) { _convert_to_string((*arg) ); }; };
 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*arg); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**arg).type = 0; }; } _zval_ptr_dtor((&*arg) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
 if ((*return_value).value.str.len > 1) {
  php_string_shuffle((*return_value).value.str.val, (long) (*return_value).value.str.len );
 }
}
# 4875 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
void zif_str_word_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *buf, *str, *char_list = 
# 4877 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                              ((void *)0)
# 4877 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                  , *p, *e, *s, ch[256];
 int str_len, char_list_len, word_count = 0;
 long type = 0;

 if (zend_parse_parameters((ht) , "s|ls", &str, &str_len, &type, &char_list, &char_list_len) == -1) {
  return;
 }

 switch(type) {
  case 1:
  case 2:
   _array_init((return_value) );
   if (!str_len) {
    return;
   }
   break;
  case 0:
   if (!str_len) {
    { { (*return_value).type = 1; (*return_value).value.lval = 0; }; return; };
   }

   break;
  default:
   php_error_docref0(
# 4900 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                   ((void *)0) 
# 4900 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                 , (1<<1L), "Invalid format value %ld", type);
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (char_list) {
  php_charmask(char_list, char_list_len, ch );
 }

 p = str;
 e = str + str_len;


 if ((*p == '\'' && (!char_list || !ch['\''])) || (*p == '-' && (!char_list || !ch['-']))) {
  p++;
 }

 if (*(e - 1) == '-' && (!char_list || !ch['-'])) {
  e--;
 }

 while (p < e) {
  s = p;
  while (p < e && (
# 4922 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((*__ctype_b_loc ())[(int) ((
# 4922 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                  *p
# 4922 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ))] & (unsigned short int) _ISalpha) 
# 4922 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                              || (char_list && ch[(unsigned char)*p]) || *p == '\'' || *p == '-')) {
   p++;
  }
  if (p > s) {
   switch (type)
   {
    case 1:
     buf = _estrndup((s), ((p-s)) );
     add_next_index_stringl(return_value, buf, (p-s), 0);
     break;
    case 2:
     buf = _estrndup((s), ((p-s)) );
     add_index_stringl(return_value, (s - str), buf, p-s, 0);
     break;
    default:
     word_count++;
     break;
   }
  }
  p++;
 }

 if (!type) {
  { { (*return_value).type = 1; (*return_value).value.lval = word_count; }; return; };
 }
}






void zif_money_format(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 int format_len = 0, str_len;
 char *format, *str;
 double value;

 if (zend_parse_parameters((ht) , "sd", &format, &format_len, &value) == -1) {
  return;
 }

 str_len = format_len + 1024;
 str = _emalloc((str_len) );
 if ((str_len = strfmon(str, str_len, format, value)) < 0) {
  _efree((str) );
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 str[str_len] = 0;

 { { char *__s=(_erealloc((str), (str_len + 1), 0 )); int __l=str_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
}





void zif_str_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *str;
 int str_len;
 long split_length = 1;
 char *p;
 int n_reg_segments;

 if (zend_parse_parameters((ht) , "s|l", &str, &str_len, &split_length) == -1) {
  return;
 }

 if (split_length <= 0) {
  php_error_docref0(
# 4992 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 4992 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "The length of each segment must be greater than zero.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 _array_init((return_value) );

 if (split_length >= str_len) {
  add_next_index_stringl(return_value, str, str_len, 1);
  return;
 }

 n_reg_segments = floor(str_len / split_length);
 p = str;

 while (n_reg_segments-- > 0) {
  add_next_index_stringl(return_value, p, split_length, 1);
  p += split_length;
 }

 if (p != (str + str_len)) {
  add_next_index_stringl(return_value, p, (str + str_len - p), 1);
 }
}




void zif_strpbrk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *haystack, *char_list;
 int haystack_len, char_list_len;
 char *p;

 if (zend_parse_parameters((ht) , "ss", &haystack, &haystack_len, &char_list, &char_list_len) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (!char_list_len) {
  php_error_docref0(
# 5030 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 5030 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "The character list cannot be empty.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((p = 
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         __extension__ ({ char __a0, __a1, __a2; (__builtin_constant_p (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ) && ((size_t)(const void *)((
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ) + 1) - (size_t)(const void *)(
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ) == 1) ? ((__builtin_constant_p (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ) && ((size_t)(const void *)((
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ) + 1) - (size_t)(const void *)(
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ) == 1)) ? __builtin_strpbrk (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         , 
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ) : ((__a0 = ((const char *) (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ))[0], __a0 == '\0') ? ((void) (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ), (char *) ((void *)0)) : ((__a1 = ((const char *) (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ))[1], __a1 == '\0') ? __builtin_strchr (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         , __a0) : ((__a2 = ((const char *) (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ))[2], __a2 == '\0') ? __strpbrk_c2 (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         , __a0, __a1) : (((const char *) (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         ))[3] == '\0' ? __strpbrk_c3 (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         , __a0, __a1, __a2) : __builtin_strpbrk (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         , 
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         )))))) : __builtin_strpbrk (
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         haystack
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         , 
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
         char_list
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
         )); })
# 5034 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                     )) {
  { { char *__s=(p); int __l=(haystack + haystack_len - p); (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}




void zif_substr_compare(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *s1, *s2;
 int s1_len, s2_len;
 long offset, len=0;
 zend_bool cs=0;
 uint cmp_len;

 if (zend_parse_parameters((ht) , "ssl|lb", &s1, &s1_len, &s2, &s2_len, &offset, &len, &cs) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((ht) >= 4 && len <= 0) {
  php_error_docref0(
# 5057 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 5057 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "The length must be greater than zero");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (offset < 0) {
  offset = s1_len + offset;
  offset = (offset < 0) ? 0 : offset;
 }

 if ((offset + len) > s1_len) {
  php_error_docref0(
# 5067 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                  ((void *)0) 
# 5067 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                , (1<<1L), "The start position cannot exceed initial string length");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 cmp_len = (uint) (len ? len : 
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                              (((
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                              s2_len
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                              )>(
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                              (s1_len - offset)
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                              ))?(
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                              s2_len
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                              ):(
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                              (s1_len - offset)
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c" 3 4
                              ))
# 5071 "/home/repair/benchmarks/tse-2012/php/src/ext/standard/string.c"
                                                            );

 if (!cs) {
  { { (*return_value).type = 1; (*return_value).value.lval = zend_binary_strncmp(s1 + offset, (s1_len - offset), s2, s2_len, cmp_len); }; return; };
 } else {
  { { (*return_value).type = 1; (*return_value).value.lval = zend_binary_strncasecmp(s1 + offset, (s1_len - offset), s2, s2_len, cmp_len); }; return; };
 }
}
