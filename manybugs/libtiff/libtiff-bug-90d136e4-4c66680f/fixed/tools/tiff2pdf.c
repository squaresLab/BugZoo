# 1 "tiff2pdf.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-90d136e4-4c66680f/libtiff/tools//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "tiff2pdf.c"
# 27 "tiff2pdf.c"
# 1 "../libtiff/tif_config.h" 1
# 28 "tiff2pdf.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 361 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 365 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 366 "/usr/include/sys/cdefs.h" 2 3 4
# 362 "/usr/include/features.h" 2 3 4
# 385 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 386 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


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
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


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
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
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
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
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
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
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
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 416 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 490 "/usr/include/libio.h" 3 4
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




typedef __gnuc_va_list va_list;
# 93 "/usr/include/stdio.h" 3 4
typedef __off64_t off_t;
# 103 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;









typedef _G_fpos64_t fpos_t;


# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));



# 197 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) __asm__ ("" "tmpfile64") ;
# 208 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 226 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 251 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 265 "/usr/include/stdio.h" 3 4

# 282 "/usr/include/stdio.h" 3 4
extern FILE *fopen (__const char *__restrict __filename, __const char *__restrict __modes) __asm__ ("" "fopen64")

  ;
extern FILE *freopen (__const char *__restrict __filename, __const char *__restrict __modes, FILE *__restrict __stream) __asm__ ("" "freopen64")


  ;






# 305 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 318 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






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

# 416 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 447 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__))

                      ;
# 467 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 498 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 526 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 554 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 565 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 598 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 660 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 732 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 776 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off64_t __off, int __whence) __asm__ ("" "fseeko64")

                  ;
extern __off64_t ftello (FILE *__stream) __asm__ ("" "ftello64");








# 801 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos) __asm__ ("" "fgetpos64")
                                          ;
extern int fsetpos (FILE *__stream, __const fpos_t *__pos) __asm__ ("" "fsetpos64")
                                                            ;






# 819 "/usr/include/stdio.h" 3 4


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
# 849 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 868 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 908 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 929 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 36 "/usr/include/bits/stdio.h" 3 4
extern __inline int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 125 "/usr/include/bits/stdio.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline int
__attribute__ ((__nothrow__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 930 "/usr/include/stdio.h" 2 3 4
# 938 "/usr/include/stdio.h" 3 4

# 30 "tiff2pdf.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 323 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef long int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

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
# 44 "/usr/include/stdlib.h" 2 3 4
# 68 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
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







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


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





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





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

# 277 "/usr/include/stdlib.h" 3 4

extern __inline double
__attribute__ ((__nothrow__)) atof (__const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
extern __inline int
__attribute__ ((__nothrow__)) atoi (__const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline long int
__attribute__ ((__nothrow__)) atol (__const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline long long int
__attribute__ ((__nothrow__)) atoll (__const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;





typedef __ino64_t ino_t;
# 61 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 99 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
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
# 220 "/usr/include/sys/types.h" 3 4
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
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
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






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


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
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
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





typedef __blksize_t blksize_t;
# 249 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt_t;



typedef __fsblkcnt64_t fsblkcnt_t;



typedef __fsfilcnt64_t fsfilcnt_t;
# 271 "/usr/include/sys/types.h" 3 4
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


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
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
# 272 "/usr/include/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






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
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 531 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 554 "/usr/include/stdlib.h" 3 4






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 623 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __asm__ ("" "mkstemp64")
     __attribute__ ((__nonnull__ (1))) ;
# 645 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __asm__ ("" "mkstemps64")
                     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 771 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 808 "/usr/include/stdlib.h" 3 4
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
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 948 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4

# 31 "tiff2pdf.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4









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
# 95 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 126 "/usr/include/string.h" 3 4


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






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 163 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
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
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__))

                        __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 536 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 559 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 634 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 635 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/bits/string2.h" 1 3 4
# 394 "/usr/include/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 969 "/usr/include/bits/string2.h" 3 4
extern __inline size_t __strcspn_c1 (__const char *__s, int __reject);
extern __inline size_t
__strcspn_c1 (__const char *__s, int __reject)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c2 (__const char *__s, int __reject1,
         int __reject2);
extern __inline size_t
__strcspn_c2 (__const char *__s, int __reject1, int __reject2)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c3 (__const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline size_t
__strcspn_c3 (__const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1045 "/usr/include/bits/string2.h" 3 4
extern __inline size_t __strspn_c1 (__const char *__s, int __accept);
extern __inline size_t
__strspn_c1 (__const char *__s, int __accept)
{
  register size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c2 (__const char *__s, int __accept1,
        int __accept2);
extern __inline size_t
__strspn_c2 (__const char *__s, int __accept1, int __accept2)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c3 (__const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline size_t
__strspn_c3 (__const char *__s, int __accept1, int __accept2, int __accept3)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1121 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strpbrk_c2 (__const char *__s, int __accept1,
         int __accept2);
extern __inline char *
__strpbrk_c2 (__const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline char *__strpbrk_c3 (__const char *__s, int __accept1,
         int __accept2, int __accept3);
extern __inline char *
__strpbrk_c3 (__const char *__s, int __accept1, int __accept2,
       int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1172 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline char *
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
# 1204 "/usr/include/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, __const char *__delim);
# 1222 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strsep_1c (char **__s, char __reject);
extern __inline char *
__strsep_1c (char **__s, char __reject)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
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

extern __inline char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
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
# 1303 "/usr/include/bits/string2.h" 3 4
extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 1322 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 638 "/usr/include/string.h" 2 3 4
# 646 "/usr/include/string.h" 3 4

# 32 "tiff2pdf.c" 2
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
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
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








extern int isblank (int) __attribute__ ((__nothrow__));


# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
# 190 "/usr/include/ctype.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline int
__attribute__ ((__nothrow__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
# 323 "/usr/include/ctype.h" 3 4

# 33 "tiff2pdf.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


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
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 180 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));

# 217 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__));
# 230 "/usr/include/time.h" 3 4



extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));
# 313 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 328 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));
# 417 "/usr/include/time.h" 3 4

# 34 "tiff2pdf.c" 2


# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4

# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 208 "/usr/include/unistd.h" 2 3 4
# 227 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 228 "/usr/include/unistd.h" 2 3 4
# 256 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 305 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ ("" "lseek64") __attribute__ ((__nothrow__))

             ;
# 350 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 385 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")

                    ;
extern ssize_t pwrite (int __fd, __const void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pwrite64")

                     ;
# 414 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;
# 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
# 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));






extern int usleep (__useconds_t __useconds);
# 466 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__)) ;
# 508 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;
# 522 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));
# 540 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 595 "/usr/include/unistd.h" 3 4
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
# 607 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
# 643 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
# 669 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__));
# 686 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;
# 719 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));
# 775 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__));





extern int ttyslot (void) __attribute__ ((__nothrow__));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 890 "/usr/include/unistd.h" 3 4
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
# 891 "/usr/include/unistd.h" 2 3 4







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
# 976 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__));





extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__));
# 1011 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off64_t __length) __asm__ ("" "truncate64") __attribute__ ((__nothrow__))

                  __attribute__ ((__nonnull__ (1))) ;
# 1029 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off64_t __length) __asm__ ("" "ftruncate64") __attribute__ ((__nothrow__))
                        ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
# 1094 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64")
                       ;
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1151 "/usr/include/unistd.h" 3 4
extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 1160 "/usr/include/unistd.h" 3 4

# 37 "tiff2pdf.c" 2



# 1 "/usr/include/fcntl.h" 1 3 4
# 30 "/usr/include/fcntl.h" 3 4




# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 150 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;




    __off64_t l_start;
    __off64_t l_len;

    __pid_t l_pid;
  };
# 235 "/usr/include/bits/fcntl.h" 3 4

# 281 "/usr/include/bits/fcntl.h" 3 4

# 35 "/usr/include/fcntl.h" 2 3 4






# 1 "/usr/include/bits/stat.h" 1 3 4
# 39 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;
    unsigned short int __pad1;



    __ino_t __st_ino;

    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;



    __off64_t st_size;

    __blksize_t st_blksize;




    __blkcnt64_t st_blocks;
# 73 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 91 "/usr/include/bits/stat.h" 3 4
    __ino64_t st_ino;

  };
# 42 "/usr/include/fcntl.h" 2 3 4
# 122 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 134 "/usr/include/fcntl.h" 3 4
extern int open (__const char *__file, int __oflag, ...) __asm__ ("" "open64")
     __attribute__ ((__nonnull__ (1)));
# 159 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, __const char *__file, int __oflag, ...) __asm__ ("" "openat64")
                    __attribute__ ((__nonnull__ (2)));
# 180 "/usr/include/fcntl.h" 3 4
extern int creat (__const char *__file, __mode_t __mode) __asm__ ("" "creat64")
                  __attribute__ ((__nonnull__ (1)));
# 227 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off64_t __offset, __off64_t __len, int __advise) __asm__ ("" "posix_fadvise64") __attribute__ ((__nothrow__))

                      ;
# 248 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off64_t __offset, __off64_t __len) __asm__ ("" "posix_fallocate64")

                           ;
# 267 "/usr/include/fcntl.h" 3 4

# 41 "tiff2pdf.c" 2
# 51 "tiff2pdf.c"
# 1 "../libtiff/tiffio.h" 1
# 33 "../libtiff/tiffio.h"
# 1 "../libtiff/tiff.h" 1
# 30 "../libtiff/tiff.h"
# 1 "../libtiff/tiffconf.h" 1
# 31 "../libtiff/tiff.h" 2
# 68 "../libtiff/tiff.h"
typedef signed char int8;
typedef unsigned char uint8;

typedef signed short int16;
typedef unsigned short uint16;

typedef signed int int32;
typedef unsigned int uint32;

typedef signed long long int64;
typedef unsigned long long uint64;
# 88 "../libtiff/tiff.h"
typedef int uint16_vap;




typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
} TIFFHeaderCommon;
typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
 uint32 tiff_diroff;
} TIFFHeaderClassic;
typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
 uint16 tiff_offsetsize;
 uint16 tiff_unused;
 uint64 tiff_diroff;
} TIFFHeaderBig;
# 125 "../libtiff/tiff.h"
typedef enum {
 TIFF_NOTYPE = 0,
 TIFF_BYTE = 1,
 TIFF_ASCII = 2,
 TIFF_SHORT = 3,
 TIFF_LONG = 4,
 TIFF_RATIONAL = 5,
 TIFF_SBYTE = 6,
 TIFF_UNDEFINED = 7,
 TIFF_SSHORT = 8,
 TIFF_SLONG = 9,
 TIFF_SRATIONAL = 10,
 TIFF_FLOAT = 11,
 TIFF_DOUBLE = 12,
 TIFF_IFD = 13,
 TIFF_LONG8 = 16,
 TIFF_SLONG8 = 17,
 TIFF_IFD8 = 18
} TIFFDataType;
# 34 "../libtiff/tiffio.h" 2
# 1 "../libtiff/tiffvers.h" 1
# 35 "../libtiff/tiffio.h" 2





typedef struct tiff TIFF;
# 67 "../libtiff/tiffio.h"
typedef signed long tmsize_t;
typedef uint64 toff_t;


typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrile_t;
typedef tstrile_t tstrip_t;
typedef tstrile_t ttile_t;
typedef tmsize_t tsize_t;
typedef void* tdata_t;
# 106 "../libtiff/tiffio.h"
typedef void* thandle_t;
# 138 "../libtiff/tiffio.h"
typedef unsigned char TIFFRGBValue;

typedef struct {
 float d_mat[3][3];
 float d_YCR;
 float d_YCG;
 float d_YCB;
 uint32 d_Vrwr;
 uint32 d_Vrwg;
 uint32 d_Vrwb;
 float d_Y0R;
 float d_Y0G;
 float d_Y0B;
 float d_gammaR;
 float d_gammaG;
 float d_gammaB;
} TIFFDisplay;

typedef struct {
 TIFFRGBValue* clamptab;
 int* Cr_r_tab;
 int* Cb_b_tab;
 int32* Cr_g_tab;
 int32* Cb_g_tab;
 int32* Y_tab;
} TIFFYCbCrToRGB;

typedef struct {
 int range;

 float rstep, gstep, bstep;
 float X0, Y0, Z0;
 TIFFDisplay display;
 float Yr2r[1500 + 1];
 float Yg2g[1500 + 1];
 float Yb2b[1500 + 1];
} TIFFCIELabToRGB;




typedef struct _TIFFRGBAImage TIFFRGBAImage;
# 190 "../libtiff/tiffio.h"
typedef void (*tileContigRoutine)
    (TIFFRGBAImage*, uint32*, uint32, uint32, uint32, uint32, int32, int32,
 unsigned char*);
typedef void (*tileSeparateRoutine)
    (TIFFRGBAImage*, uint32*, uint32, uint32, uint32, uint32, int32, int32,
 unsigned char*, unsigned char*, unsigned char*, unsigned char*);



struct _TIFFRGBAImage {
 TIFF* tif;
 int stoponerr;
 int isContig;
 int alpha;
 uint32 width;
 uint32 height;
 uint16 bitspersample;
 uint16 samplesperpixel;
 uint16 orientation;
 uint16 req_orientation;
 uint16 photometric;
 uint16* redcmap;
 uint16* greencmap;
 uint16* bluecmap;

 int (*get)(TIFFRGBAImage*, uint32*, uint32, uint32);

 union {
     void (*any)(TIFFRGBAImage*);
     tileContigRoutine contig;
     tileSeparateRoutine separate;
 } put;
 TIFFRGBValue* Map;
 uint32** BWmap;
 uint32** PALmap;
 TIFFYCbCrToRGB* ycbcr;
 TIFFCIELabToRGB* cielab;

 uint8* UaToAa;
 uint8* Bitdepth16To8;

 int row_offset;
 int col_offset;
};
# 251 "../libtiff/tiffio.h"
typedef int (*TIFFInitMethod)(TIFF*, int);
typedef struct {
 char* name;
 uint16 scheme;
 TIFFInitMethod init;
} TIFFCodec;


# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 260 "../libtiff/tiffio.h" 2
# 273 "../libtiff/tiffio.h"
typedef void (*TIFFErrorHandler)(const char*, const char*, va_list);
typedef void (*TIFFErrorHandlerExt)(thandle_t, const char*, const char*, va_list);
typedef tmsize_t (*TIFFReadWriteProc)(thandle_t, void*, tmsize_t);
typedef toff_t (*TIFFSeekProc)(thandle_t, toff_t, int);
typedef int (*TIFFCloseProc)(thandle_t);
typedef toff_t (*TIFFSizeProc)(thandle_t);
typedef int (*TIFFMapFileProc)(thandle_t, void** base, toff_t* size);
typedef void (*TIFFUnmapFileProc)(thandle_t, void* base, toff_t size);
typedef void (*TIFFExtendProc)(TIFF*);

extern const char* TIFFGetVersion(void);

extern const TIFFCodec* TIFFFindCODEC(uint16);
extern TIFFCodec* TIFFRegisterCODEC(uint16, const char*, TIFFInitMethod);
extern void TIFFUnRegisterCODEC(TIFFCodec*);
extern int TIFFIsCODECConfigured(uint16);
extern TIFFCodec* TIFFGetConfiguredCODECs(void);





extern void* _TIFFmalloc(tmsize_t s);
extern void* _TIFFrealloc(void* p, tmsize_t s);
extern void _TIFFmemset(void* p, int v, tmsize_t c);
extern void _TIFFmemcpy(void* d, const void* s, tmsize_t c);
extern int _TIFFmemcmp(const void* p1, const void* p2, tmsize_t c);
extern void _TIFFfree(void* p);




extern int TIFFGetTagListCount( TIFF * );
extern uint32 TIFFGetTagListEntry( TIFF *, int tag_index );
# 315 "../libtiff/tiffio.h"
typedef struct _TIFFField TIFFField;
typedef struct _TIFFFieldArray TIFFFieldArray;

extern const TIFFField* TIFFFindField(TIFF *, uint32, TIFFDataType);
extern const TIFFField* TIFFFieldWithTag(TIFF*, uint32);
extern const TIFFField* TIFFFieldWithName(TIFF*, const char *);

typedef int (*TIFFVSetMethod)(TIFF*, uint32, va_list);
typedef int (*TIFFVGetMethod)(TIFF*, uint32, va_list);
typedef void (*TIFFPrintMethod)(TIFF*, FILE*, long);

typedef struct {
    TIFFVSetMethod vsetfield;
    TIFFVGetMethod vgetfield;
    TIFFPrintMethod printdir;
} TIFFTagMethods;

extern TIFFTagMethods *TIFFAccessTagMethods(TIFF *);
extern void *TIFFGetClientInfo(TIFF *, const char *);
extern void TIFFSetClientInfo(TIFF *, void *, const char *);

extern void TIFFCleanup(TIFF* tif);
extern void TIFFClose(TIFF* tif);
extern int TIFFFlush(TIFF* tif);
extern int TIFFFlushData(TIFF* tif);
extern int TIFFGetField(TIFF* tif, uint32 tag, ...);
extern int TIFFVGetField(TIFF* tif, uint32 tag, va_list ap);
extern int TIFFGetFieldDefaulted(TIFF* tif, uint32 tag, ...);
extern int TIFFVGetFieldDefaulted(TIFF* tif, uint32 tag, va_list ap);
extern int TIFFReadDirectory(TIFF* tif);
extern int TIFFReadCustomDirectory(TIFF* tif, toff_t diroff, const TIFFFieldArray* infoarray);
extern int TIFFReadEXIFDirectory(TIFF* tif, toff_t diroff);
extern uint64 TIFFScanlineSize64(TIFF* tif);
extern tmsize_t TIFFScanlineSize(TIFF* tif);
extern uint64 TIFFRasterScanlineSize64(TIFF* tif);
extern tmsize_t TIFFRasterScanlineSize(TIFF* tif);
extern uint64 TIFFStripSize64(TIFF* tif);
extern tmsize_t TIFFStripSize(TIFF* tif);
extern uint64 TIFFRawStripSize64(TIFF* tif, uint32 strip);
extern tmsize_t TIFFRawStripSize(TIFF* tif, uint32 strip);
extern uint64 TIFFVStripSize64(TIFF* tif, uint32 nrows);
extern tmsize_t TIFFVStripSize(TIFF* tif, uint32 nrows);
extern uint64 TIFFTileRowSize64(TIFF* tif);
extern tmsize_t TIFFTileRowSize(TIFF* tif);
extern uint64 TIFFTileSize64(TIFF* tif);
extern tmsize_t TIFFTileSize(TIFF* tif);
extern uint64 TIFFVTileSize64(TIFF* tif, uint32 nrows);
extern tmsize_t TIFFVTileSize(TIFF* tif, uint32 nrows);
extern uint32 TIFFDefaultStripSize(TIFF* tif, uint32 request);
extern void TIFFDefaultTileSize(TIFF*, uint32*, uint32*);
extern int TIFFFileno(TIFF*);
extern int TIFFSetFileno(TIFF*, int);
extern thandle_t TIFFClientdata(TIFF*);
extern thandle_t TIFFSetClientdata(TIFF*, thandle_t);
extern int TIFFGetMode(TIFF*);
extern int TIFFSetMode(TIFF*, int);
extern int TIFFIsTiled(TIFF*);
extern int TIFFIsByteSwapped(TIFF*);
extern int TIFFIsUpSampled(TIFF*);
extern int TIFFIsMSB2LSB(TIFF*);
extern int TIFFIsBigEndian(TIFF*);
extern TIFFReadWriteProc TIFFGetReadProc(TIFF*);
extern TIFFReadWriteProc TIFFGetWriteProc(TIFF*);
extern TIFFSeekProc TIFFGetSeekProc(TIFF*);
extern TIFFCloseProc TIFFGetCloseProc(TIFF*);
extern TIFFSizeProc TIFFGetSizeProc(TIFF*);
extern TIFFMapFileProc TIFFGetMapFileProc(TIFF*);
extern TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF*);
extern uint32 TIFFCurrentRow(TIFF*);
extern uint16 TIFFCurrentDirectory(TIFF*);
extern uint16 TIFFNumberOfDirectories(TIFF*);
extern uint64 TIFFCurrentDirOffset(TIFF*);
extern uint32 TIFFCurrentStrip(TIFF*);
extern uint32 TIFFCurrentTile(TIFF* tif);
extern int TIFFReadBufferSetup(TIFF* tif, void* bp, tmsize_t size);
extern int TIFFWriteBufferSetup(TIFF* tif, void* bp, tmsize_t size);
extern int TIFFSetupStrips(TIFF *);
extern int TIFFWriteCheck(TIFF*, int, const char *);
extern void TIFFFreeDirectory(TIFF*);
extern int TIFFCreateDirectory(TIFF*);
extern int TIFFLastDirectory(TIFF*);
extern int TIFFSetDirectory(TIFF*, uint16);
extern int TIFFSetSubDirectory(TIFF*, uint64);
extern int TIFFUnlinkDirectory(TIFF*, uint16);
extern int TIFFSetField(TIFF*, uint32, ...);
extern int TIFFVSetField(TIFF*, uint32, va_list);
extern int TIFFUnsetField(TIFF*, uint32);
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFCheckpointDirectory(TIFF *);
extern int TIFFRewriteDirectory(TIFF *);
# 414 "../libtiff/tiffio.h"
extern void TIFFPrintDirectory(TIFF*, FILE*, long);
extern int TIFFReadScanline(TIFF* tif, void* buf, uint32 row, uint16 sample);
extern int TIFFWriteScanline(TIFF* tif, void* buf, uint32 row, uint16 sample);
extern int TIFFReadRGBAImage(TIFF*, uint32, uint32, uint32*, int);
extern int TIFFReadRGBAImageOriented(TIFF*, uint32, uint32, uint32*, int, int);


extern int TIFFReadRGBAStrip(TIFF*, uint32, uint32 * );
extern int TIFFReadRGBATile(TIFF*, uint32, uint32, uint32 * );
extern int TIFFRGBAImageOK(TIFF*, char [1024]);
extern int TIFFRGBAImageBegin(TIFFRGBAImage*, TIFF*, int, char [1024]);
extern int TIFFRGBAImageGet(TIFFRGBAImage*, uint32*, uint32, uint32);
extern void TIFFRGBAImageEnd(TIFFRGBAImage*);
extern TIFF* TIFFOpen(const char*, const char*);



extern TIFF* TIFFFdOpen(int, const char*, const char*);
extern TIFF* TIFFClientOpen(const char*, const char*,
     thandle_t,
     TIFFReadWriteProc, TIFFReadWriteProc,
     TIFFSeekProc, TIFFCloseProc,
     TIFFSizeProc,
     TIFFMapFileProc, TIFFUnmapFileProc);
extern const char* TIFFFileName(TIFF*);
extern const char* TIFFSetFileName(TIFF*, const char *);
extern void TIFFError(const char*, const char*, ...) __attribute__((format (printf,2,3)));
extern void TIFFErrorExt(thandle_t, const char*, const char*, ...) __attribute__((format (printf,3,4)));
extern void TIFFWarning(const char*, const char*, ...) __attribute__((format (printf,2,3)));
extern void TIFFWarningExt(thandle_t, const char*, const char*, ...) __attribute__((format (printf,3,4)));
extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(TIFFErrorHandlerExt);
extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetWarningHandlerExt(TIFFErrorHandlerExt);
extern TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc);
extern uint32 TIFFComputeTile(TIFF* tif, uint32 x, uint32 y, uint32 z, uint16 s);
extern int TIFFCheckTile(TIFF* tif, uint32 x, uint32 y, uint32 z, uint16 s);
extern uint32 TIFFNumberOfTiles(TIFF*);
extern tmsize_t TIFFReadTile(TIFF* tif, void* buf, uint32 x, uint32 y, uint32 z, uint16 s);
extern tmsize_t TIFFWriteTile(TIFF* tif, void* buf, uint32 x, uint32 y, uint32 z, uint16 s);
extern uint32 TIFFComputeStrip(TIFF*, uint32, uint16);
extern uint32 TIFFNumberOfStrips(TIFF*);
extern tmsize_t TIFFReadEncodedStrip(TIFF* tif, uint32 strip, void* buf, tmsize_t size);
extern tmsize_t TIFFReadRawStrip(TIFF* tif, uint32 strip, void* buf, tmsize_t size);
extern tmsize_t TIFFReadEncodedTile(TIFF* tif, uint32 tile, void* buf, tmsize_t size);
extern tmsize_t TIFFReadRawTile(TIFF* tif, uint32 tile, void* buf, tmsize_t size);
extern tmsize_t TIFFWriteEncodedStrip(TIFF* tif, uint32 strip, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteRawStrip(TIFF* tif, uint32 strip, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteEncodedTile(TIFF* tif, uint32 tile, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteRawTile(TIFF* tif, uint32 tile, void* data, tmsize_t cc);
extern int TIFFDataWidth(TIFFDataType);
extern void TIFFSetWriteOffset(TIFF* tif, toff_t off);
extern void TIFFSwabShort(uint16*);
extern void TIFFSwabLong(uint32*);
extern void TIFFSwabLong8(uint64*);
extern void TIFFSwabFloat(float*);
extern void TIFFSwabDouble(double*);
extern void TIFFSwabArrayOfShort(uint16* wp, tmsize_t n);
extern void TIFFSwabArrayOfTriples(uint8* tp, tmsize_t n);
extern void TIFFSwabArrayOfLong(uint32* lp, tmsize_t n);
extern void TIFFSwabArrayOfLong8(uint64* lp, tmsize_t n);
extern void TIFFSwabArrayOfFloat(float* fp, tmsize_t n);
extern void TIFFSwabArrayOfDouble(double* dp, tmsize_t n);
extern void TIFFReverseBits(uint8* cp, tmsize_t n);
extern const unsigned char* TIFFGetBitRevTable(int);





extern double LogL16toY(int);
extern double LogL10toY(int);
extern void XYZtoRGB24(float*, uint8*);
extern int uv_decode(double*, double*, int);
extern void LogLuv24toXYZ(uint32, float*);
extern void LogLuv32toXYZ(uint32, float*);







extern int LogL16fromY(double, int);
extern int LogL10fromY(double, int);
extern int uv_encode(double, double, int);
extern uint32 LogLuv24fromXYZ(float*, int);
extern uint32 LogLuv32fromXYZ(float*, int);



extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB*, const TIFFDisplay *, float*);
extern void TIFFCIELabToXYZ(TIFFCIELabToRGB *, uint32, int32, int32,
    float *, float *, float *);
extern void TIFFXYZToRGB(TIFFCIELabToRGB *, float, float, float,
    uint32 *, uint32 *, uint32 *);

extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB*, float*, float*);
extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB *, uint32, int32, int32,
    uint32 *, uint32 *, uint32 *);







typedef struct {
 ttag_t field_tag;
 short field_readcount;
 short field_writecount;
 TIFFDataType field_type;
        unsigned short field_bit;
 unsigned char field_oktochange;
 unsigned char field_passcount;
 char *field_name;
} TIFFFieldInfo;

extern int TIFFMergeFieldInfo(TIFF*, const TIFFFieldInfo[], uint32);
extern const TIFFFieldInfo* TIFFFindFieldInfo(TIFF*, uint32, TIFFDataType);
extern const TIFFFieldInfo* TIFFFindFieldInfoByName(TIFF* , const char *,
          TIFFDataType);
# 52 "tiff2pdf.c" 2
# 62 "tiff2pdf.c"
typedef enum {
 T2P_CS_BILEVEL = 0x01,
 T2P_CS_GRAY = 0x02,
 T2P_CS_RGB = 0x04,
 T2P_CS_CMYK = 0x08,
 T2P_CS_LAB = 0x10,
 T2P_CS_PALETTE = 0x1000,
 T2P_CS_CALGRAY = 0x20,
 T2P_CS_CALRGB = 0x40,
 T2P_CS_ICCBASED = 0x80
} t2p_cs_t;


typedef enum{
 T2P_COMPRESS_NONE=0x00

 , T2P_COMPRESS_G4=0x01





 , T2P_COMPRESS_ZIP=0x04

} t2p_compress_t;


typedef enum{
 T2P_TRANSCODE_RAW=0x01,
 T2P_TRANSCODE_ENCODE=0x02
} t2p_transcode_t;


typedef enum{
 T2P_SAMPLE_NOTHING=0x0000,
 T2P_SAMPLE_ABGR_TO_RGB=0x0001,
 T2P_SAMPLE_RGBA_TO_RGB=0x0002,
 T2P_SAMPLE_RGBAA_TO_RGB=0x0004,
 T2P_SAMPLE_YCBCR_TO_RGB=0x0008,
 T2P_SAMPLE_YCBCR_TO_LAB=0x0010,
 T2P_SAMPLE_REALIZE_PALETTE=0x0020,
 T2P_SAMPLE_SIGNED_TO_UNSIGNED=0x0040,
 T2P_SAMPLE_LAB_SIGNED_TO_UNSIGNED=0x0040,
 T2P_SAMPLE_PLANAR_SEPARATE_TO_CONTIG=0x0100
} t2p_sample_t;


typedef enum{
 T2P_ERR_OK = 0,
 T2P_ERR_ERROR = 1
} t2p_err_t;


typedef struct {
 tdir_t page_directory;
 uint32 page_number;
 ttile_t page_tilecount;
 uint32 page_extra;
} T2P_PAGE;


typedef struct {
 float x1;
 float y1;
 float x2;
 float y2;
 float mat[9];
} T2P_BOX;


typedef struct {
 T2P_BOX tile_box;
} T2P_TILE;


typedef struct {
 ttile_t tiles_tilecount;
 uint32 tiles_tilewidth;
 uint32 tiles_tilelength;
 uint32 tiles_tilecountx;
 uint32 tiles_tilecounty;
 uint32 tiles_edgetilewidth;
 uint32 tiles_edgetilelength;
 T2P_TILE* tiles_tiles;
} T2P_TILES;


typedef struct {
 t2p_err_t t2p_error;
 T2P_PAGE* tiff_pages;
 T2P_TILES* tiff_tiles;
 tdir_t tiff_pagecount;
 uint16 tiff_compression;
 uint16 tiff_photometric;
 uint16 tiff_fillorder;
 uint16 tiff_bitspersample;
 uint16 tiff_samplesperpixel;
 uint16 tiff_planar;
 uint32 tiff_width;
 uint32 tiff_length;
 float tiff_xres;
 float tiff_yres;
 uint16 tiff_orientation;
 toff_t tiff_dataoffset;
 tsize_t tiff_datasize;
 uint16 tiff_resunit;
 uint16 pdf_centimeters;
 uint16 pdf_overrideres;
 uint16 pdf_overridepagesize;
 float pdf_defaultxres;
 float pdf_defaultyres;
 float pdf_xres;
 float pdf_yres;
 float pdf_defaultpagewidth;
 float pdf_defaultpagelength;
 float pdf_pagewidth;
 float pdf_pagelength;
 float pdf_imagewidth;
 float pdf_imagelength;
 T2P_BOX pdf_mediabox;
 T2P_BOX pdf_imagebox;
 uint16 pdf_majorversion;
 uint16 pdf_minorversion;
 uint32 pdf_catalog;
 uint32 pdf_pages;
 uint32 pdf_info;
 uint32 pdf_palettecs;
 uint16 pdf_fitwindow;
 uint32 pdf_startxref;
 unsigned char* pdf_fileid;
 unsigned char* pdf_datetime;
 unsigned char* pdf_creator;
 unsigned char* pdf_author;
 unsigned char* pdf_title;
 unsigned char* pdf_subject;
 unsigned char* pdf_keywords;
 t2p_cs_t pdf_colorspace;
 uint16 pdf_colorspace_invert;
 uint16 pdf_switchdecode;
 uint16 pdf_palettesize;
 unsigned char* pdf_palette;
 int pdf_labrange[4];
 t2p_compress_t pdf_defaultcompression;
 uint16 pdf_defaultcompressionquality;
 t2p_compress_t pdf_compression;
 uint16 pdf_compressionquality;
 uint16 pdf_nopassthrough;
 t2p_transcode_t pdf_transcode;
 t2p_sample_t pdf_sample;
 uint32* pdf_xrefoffsets;
 uint32 pdf_xrefcount;
 tdir_t pdf_page;





 float tiff_whitechromaticities[2];
 float tiff_primarychromaticities[6];
 float tiff_referenceblackwhite[2];
 float* tiff_transferfunction[3];
 int pdf_image_interpolate;

 uint16 tiff_transferfunctioncount;
 uint32 pdf_icccs;
 uint32 tiff_iccprofilelength;
 tdata_t tiff_iccprofile;


 FILE *outputfile;
 int outputdisable;
 tsize_t outputwritten;
} T2P;



void tiff2pdf_usage(void);
int tiff2pdf_match_paper_size(float*, float*, char*);







T2P* t2p_init(void);
void t2p_validate(T2P*);
tsize_t t2p_write_pdf(T2P*, TIFF*, TIFF*);
void t2p_free(T2P*);





void t2p_read_tiff_init(T2P*, TIFF*);
int t2p_cmp_t2p_page(const void*, const void*);
void t2p_read_tiff_data(T2P*, TIFF*);
void t2p_read_tiff_size(T2P*, TIFF*);
void t2p_read_tiff_size_tile(T2P*, TIFF*, ttile_t);
int t2p_tile_is_right_edge(T2P_TILES, ttile_t);
int t2p_tile_is_bottom_edge(T2P_TILES, ttile_t);
int t2p_tile_is_edge(T2P_TILES, ttile_t);
int t2p_tile_is_corner_edge(T2P_TILES, ttile_t);
tsize_t t2p_readwrite_pdf_image(T2P*, TIFF*, TIFF*);
tsize_t t2p_readwrite_pdf_image_tile(T2P*, TIFF*, TIFF*, ttile_t);






void t2p_tile_collapse_left(tdata_t, tsize_t, uint32, uint32, uint32);
void t2p_write_advance_directory(T2P*, TIFF*);
tsize_t t2p_sample_planar_separate_to_contig(T2P*, unsigned char*, unsigned char*, tsize_t);
tsize_t t2p_sample_realize_palette(T2P*, unsigned char*);
tsize_t t2p_sample_abgr_to_rgb(tdata_t, uint32);
tsize_t t2p_sample_rgba_to_rgb(tdata_t, uint32);
tsize_t t2p_sample_rgbaa_to_rgb(tdata_t, uint32);
tsize_t t2p_sample_lab_signed_to_unsigned(tdata_t, uint32);
tsize_t t2p_write_pdf_header(T2P*, TIFF*);
tsize_t t2p_write_pdf_obj_start(uint32, TIFF*);
tsize_t t2p_write_pdf_obj_end(TIFF*);
tsize_t t2p_write_pdf_name(unsigned char*, TIFF*);
tsize_t t2p_write_pdf_string(unsigned char*, TIFF*);
tsize_t t2p_write_pdf_stream(tdata_t, tsize_t, TIFF*);
tsize_t t2p_write_pdf_stream_start(TIFF*);
tsize_t t2p_write_pdf_stream_end(TIFF*);
tsize_t t2p_write_pdf_stream_dict(tsize_t, uint32, TIFF*);
tsize_t t2p_write_pdf_stream_dict_start(TIFF*);
tsize_t t2p_write_pdf_stream_dict_end(TIFF*);
tsize_t t2p_write_pdf_stream_length(tsize_t, TIFF*);
tsize_t t2p_write_pdf_catalog(T2P*, TIFF*);
tsize_t t2p_write_pdf_info(T2P*, TIFF*, TIFF*);
void t2p_pdf_currenttime(T2P*);
void t2p_pdf_tifftime(T2P*, TIFF*);
tsize_t t2p_write_pdf_pages(T2P*, TIFF*);
tsize_t t2p_write_pdf_page(uint32, T2P*, TIFF*);
void t2p_compose_pdf_page(T2P*);
void t2p_compose_pdf_page_orient(T2P_BOX*, uint16);
void t2p_compose_pdf_page_orient_flip(T2P_BOX*, uint16);
tsize_t t2p_write_pdf_page_content(T2P*, TIFF*);
tsize_t t2p_write_pdf_xobject_stream_dict(ttile_t, T2P*, TIFF*);
tsize_t t2p_write_pdf_xobject_cs(T2P*, TIFF*);
tsize_t t2p_write_pdf_transfer(T2P*, TIFF*);
tsize_t t2p_write_pdf_transfer_dict(T2P*, TIFF*, uint16);
tsize_t t2p_write_pdf_transfer_stream(T2P*, TIFF*, uint16);
tsize_t t2p_write_pdf_xobject_calcs(T2P*, TIFF*);
tsize_t t2p_write_pdf_xobject_icccs(T2P*, TIFF*);
tsize_t t2p_write_pdf_xobject_icccs_dict(T2P*, TIFF*);
tsize_t t2p_write_pdf_xobject_icccs_stream(T2P*, TIFF*);
tsize_t t2p_write_pdf_xobject_cs_stream(T2P*, TIFF*);
tsize_t t2p_write_pdf_xobject_decode(T2P*, TIFF*);
tsize_t t2p_write_pdf_xobject_stream_filter(ttile_t, T2P*, TIFF*);
tsize_t t2p_write_pdf_xreftable(T2P*, TIFF*);
tsize_t t2p_write_pdf_trailer(T2P*, TIFF*);

static void
t2p_disable(TIFF *tif)
{
 T2P *t2p = (T2P*) TIFFClientdata(tif);
 t2p->outputdisable = 1;
}

static void
t2p_enable(TIFF *tif)
{
 T2P *t2p = (T2P*) TIFFClientdata(tif);
 t2p->outputdisable = 0;
}





static tmsize_t
t2pReadFile(TIFF *tif, tdata_t data, tmsize_t size)
{
 thandle_t client = TIFFClientdata(tif);
 TIFFReadWriteProc proc = TIFFGetReadProc(tif);
 if (proc)
  return proc(client, data, size);
 return -1;
}

static tmsize_t
t2pWriteFile(TIFF *tif, tdata_t data, tmsize_t size)
{
 thandle_t client = TIFFClientdata(tif);
 TIFFReadWriteProc proc = TIFFGetWriteProc(tif);
 if (proc)
  return proc(client, data, size);
 return -1;
}

static uint64
t2pSeekFile(TIFF *tif, toff_t offset, int whence)
{
 thandle_t client = TIFFClientdata(tif);
 TIFFSeekProc proc = TIFFGetSeekProc(tif);
 if (proc)
  return proc(client, offset, whence);
 return -1;
}

static tmsize_t
t2p_readproc(thandle_t handle, tdata_t data, tmsize_t size)
{
 (void) handle, (void) data, (void) size;
 return -1;
}

static tmsize_t
t2p_writeproc(thandle_t handle, tdata_t data, tmsize_t size)
{
 T2P *t2p = (T2P*) handle;
 if (t2p->outputdisable <= 0 && t2p->outputfile) {
  tsize_t written = fwrite(data, 1, size, t2p->outputfile);
  t2p->outputwritten += written;
  return written;
 }
 return size;
}

static uint64
t2p_seekproc(thandle_t handle, uint64 offset, int whence)
{
 T2P *t2p = (T2P*) handle;
 if (t2p->outputdisable <= 0 && t2p->outputfile)
  return fseek(t2p->outputfile, (long) offset, whence);
 return offset;
}

static int
t2p_closeproc(thandle_t handle)
{
 (void) handle;
 return 0;
}

static uint64
t2p_sizeproc(thandle_t handle)
{
 (void) handle;
 return -1;
}

static int
t2p_mapproc(thandle_t handle, void **data, toff_t *offset)
{
 (void) handle, (void) data, (void) offset;
 return -1;
}

static void
t2p_unmapproc(thandle_t handle, void *data, toff_t offset)
{
 (void) handle, (void) data, (void) offset;
}
# 541 "tiff2pdf.c"
int main(int argc, char** argv){

 extern char *optarg;
 extern int optind;
 const char *outfilename = ((void *)0);
 T2P *t2p = ((void *)0);
 TIFF *input = ((void *)0), *output = ((void *)0);
 tsize_t written = 0;
 int c;

 t2p = t2p_init();

 if (t2p == ((void *)0)){
  TIFFError("tiff2pdf", "Can't initialize context");
  goto fail;
 }

 while (argv &&
        (c = getopt(argc, argv,
      "o:q:u:x:y:w:l:r:p:e:c:a:t:s:k:jzndifbh")) != -1){
  switch (c) {
   case 'o':
    outfilename = optarg;
    break;






   case 'j':
    TIFFWarning(
     "tiff2pdf",
     "JPEG support in libtiff required for JPEG compression, ignoring option");
    break;


   case 'z':
    t2p->pdf_defaultcompression=T2P_COMPRESS_ZIP;
    break;
# 589 "tiff2pdf.c"
   case 'q':
    t2p->pdf_defaultcompressionquality=atoi(optarg);
    break;
   case 'n':
    t2p->pdf_nopassthrough=1;
    break;
   case 'd':
    t2p->pdf_defaultcompression=T2P_COMPRESS_NONE;
    break;
   case 'u':
    if(optarg[0]=='m'){
     t2p->pdf_centimeters=1;
    }
    break;
   case 'x':
    t2p->pdf_defaultxres =
     (float)atof(optarg) / (t2p->pdf_centimeters?2.54F:1.0F);
    break;
   case 'y':
    t2p->pdf_defaultyres =
     (float)atof(optarg) / (t2p->pdf_centimeters?2.54F:1.0F);
    break;
   case 'w':
    t2p->pdf_overridepagesize=1;
    t2p->pdf_defaultpagewidth =
     ((float)atof(optarg) * 72.0F) / (t2p->pdf_centimeters?2.54F:1.0F);
    break;
   case 'l':
    t2p->pdf_overridepagesize=1;
    t2p->pdf_defaultpagelength =
     ((float)atof(optarg) * 72.0F) / (t2p->pdf_centimeters?2.54F:1.0F);
    break;
   case 'r':
    if(optarg[0]=='o'){
     t2p->pdf_overrideres=1;
    }
    break;
   case 'p':
    if(tiff2pdf_match_paper_size(
     &(t2p->pdf_defaultpagewidth),
     &(t2p->pdf_defaultpagelength),
     optarg)){
     t2p->pdf_overridepagesize=1;
    } else {
     TIFFWarning("tiff2pdf",
     "Unknown paper size %s, ignoring option",
      optarg);
    }
    break;
   case 'i':
    t2p->pdf_colorspace_invert=1;
    break;
   case 'f':
    t2p->pdf_fitwindow=1;
    break;
   case 'e':
    t2p->pdf_datetime =
     (unsigned char*)_TIFFmalloc(17);
    if(t2p->pdf_datetime==((void *)0)){
     TIFFError("tiff2pdf",
    "Can't allocate %u bytes of memory for main",
      17);
     goto fail;
    }
    if(strlen(optarg)==0){
     t2p->pdf_datetime[0] = 0;
    } else {
     if(strlen(optarg)>14){optarg[14]=0;}
     t2p->pdf_datetime[0] = 'D';
     t2p->pdf_datetime[1] = ':';
     strcpy((char *)t2p->pdf_datetime + 2,
            optarg);
    }
    break;
   case 'c':
    t2p->pdf_creator = (unsigned char *)
     _TIFFmalloc(strlen(optarg) + 1);
    if(t2p->pdf_creator==((void *)0)){
     TIFFError("tiff2pdf",
    "Can't allocate %lu bytes of memory for main",
        (unsigned long) strlen(optarg) + 1);
     goto fail;
    }
    strcpy((char *)t2p->pdf_creator, optarg);
    t2p->pdf_creator[strlen(optarg)] = 0;
    break;
   case 'a':
    t2p->pdf_author = (unsigned char *)
     _TIFFmalloc(strlen(optarg) + 1);
    if(t2p->pdf_author==((void *)0)){
     TIFFError(
      "tiff2pdf",
    "Can't allocate %lu bytes of memory for main",
      (unsigned long) strlen(optarg) + 1);
     goto fail;
    }
    strcpy((char *)t2p->pdf_author, optarg);
    t2p->pdf_author[strlen(optarg)]=0;
    break;
   case 't':
    t2p->pdf_title = (unsigned char*)
     _TIFFmalloc(strlen(optarg)+1);
    if(t2p->pdf_title==((void *)0)){
     TIFFError(
      "tiff2pdf",
    "Can't allocate %lu bytes of memory for main",
      (unsigned long) strlen(optarg) + 1);
     goto fail;
    }
    strcpy((char *)t2p->pdf_title, optarg);
    t2p->pdf_title[strlen(optarg)] = 0;
    break;
   case 's':
    t2p->pdf_subject = (unsigned char*)
     _TIFFmalloc(strlen(optarg) + 1);
    if(t2p->pdf_subject==((void *)0)){
     TIFFError(
      "tiff2pdf",
    "Can't allocate %lu bytes of memory for main",
      (unsigned long) strlen(optarg)+1);
     goto fail;
    }
    strcpy((char *)t2p->pdf_subject, optarg);
    t2p->pdf_subject[strlen(optarg)]=0;
    break;
   case 'k':
    t2p->pdf_keywords = (unsigned char*)
     _TIFFmalloc(strlen(optarg) + 1);
    if(t2p->pdf_keywords==((void *)0)){
     TIFFError(
      "tiff2pdf",
    "Can't allocate %lu bytes of memory for main",
      (unsigned long) strlen(optarg) + 1);
     goto fail;
    }
    strcpy((char *)t2p->pdf_keywords, optarg);
    t2p->pdf_keywords[strlen(optarg)] = 0;
    break;
   case 'b':
    t2p->pdf_image_interpolate = 1;
    break;
   case 'h':
   case '?':
    tiff2pdf_usage();
    goto success;
    break;
  }
 }




 if(argc > optind) {
  input = TIFFOpen(argv[optind++], "r");
  if (input==((void *)0)) {
   TIFFError("tiff2pdf",
      "Can't open input file %s for reading",
      argv[optind-1]);
   goto fail;
  }
 } else {
  TIFFError("tiff2pdf", "No input file specified");
  tiff2pdf_usage();
  goto fail;
 }

 if(argc > optind) {
  TIFFError("tiff2pdf",
     "No support for multiple input files");
  tiff2pdf_usage();
  goto fail;
 }




 t2p->outputdisable = 0;
 if (outfilename) {
  t2p->outputfile = fopen(outfilename, "wb");
  if (t2p->outputfile == ((void *)0)) {
   TIFFError("tiff2pdf",
      "Can't open output file %s for writing",
      outfilename);
   goto fail;
  }
 } else {
  outfilename = "-";
  t2p->outputfile = stdout;
 }

 output = TIFFClientOpen(outfilename, "w", (thandle_t) t2p,
    t2p_readproc, t2p_writeproc, t2p_seekproc,
    t2p_closeproc, t2p_sizeproc,
    t2p_mapproc, t2p_unmapproc);
 if (output == ((void *)0)) {
  TIFFError("tiff2pdf",
     "Can't initialize output descriptor");
  goto fail;
 }




 t2p_validate(t2p);
 t2pSeekFile(output, (toff_t) 0, 0);




 written = t2p_write_pdf(t2p, input, output);
 if (t2p->t2p_error != 0) {
  TIFFError("tiff2pdf",
     "An error occurred creating output PDF file");
  goto fail;
 }

success:
 if (output != ((void *)0))
  TIFFClose(output);
 if (t2p != ((void *)0))
  t2p_free(t2p);
 return(0);

fail:
 if(input != ((void *)0))
  TIFFClose(input);
 if (output != ((void *)0))
  TIFFClose(output);
 if (t2p != ((void *)0))
  t2p_free(t2p);
 return(1);

}

void tiff2pdf_usage(){
 char* lines[]={
 "usage:  tiff2pdf [options] input.tiff",
 "options:",
 " -o: output to file name",




 " -z: compress with Zip/Deflate",

 " -q: compression quality",
 " -n: no compressed data passthrough",
 " -d: do not compress (decompress)",
 " -i: invert colors",
 " -u: set distance unit, 'i' for inch, 'm' for centimeter",
 " -x: set x resolution default in dots per unit",
 " -y: set y resolution default in dots per unit",
 " -w: width in units",
 " -l: length in units",
 " -r: 'd' for resolution default, 'o' for resolution override",
 " -p: paper size, eg \"letter\", \"legal\", \"A4\"",
 " -f: set PDF \"Fit Window\" user preference",
 " -e: date, overrides image or current date/time default, YYYYMMDDHHMMSS",
 " -c: sets document creator, overrides image software default",
 " -a: sets document author, overrides image artist default",
 " -t: sets document title, overrides image document name default",
 " -s: sets document subject, overrides image image description default",
 " -k: sets document keywords",
 " -b: set PDF \"Interpolate\" user preference",
 " -h: usage",
 ((void *)0)
 };
 int i=0;

 fprintf(stderr, "%s\n\n", TIFFGetVersion());
 for (i=0;lines[i]!=((void *)0);i++){
  fprintf(stderr, "%s\n", lines[i]);
 }

 return;
}

int tiff2pdf_match_paper_size(float* width, float* length, char* papersize){

 size_t i, len;
 const char* sizes[]={
  "LETTER", "A4", "LEGAL",
  "EXECUTIVE", "LETTER", "LEGAL", "LEDGER", "TABLOID",
  "A", "B", "C", "D", "E", "F", "G", "H", "J", "K",
  "A10", "A9", "A8", "A7", "A6", "A5", "A4", "A3", "A2", "A1", "A0",
  "2A0", "4A0", "2A", "4A",
  "B10", "B9", "B8", "B7", "B6", "B5", "B4", "B3", "B2", "B1", "B0",
  "JISB10", "JISB9", "JISB8", "JISB7", "JISB6", "JISB5", "JISB4",
  "JISB3", "JISB2", "JISB1", "JISB0",
  "C10", "C9", "C8", "C7", "C6", "C5", "C4", "C3", "C2", "C1", "C0",
  "RA2", "RA1", "RA0", "SRA4", "SRA3", "SRA2", "SRA1", "SRA0",
  "A3EXTRA", "A4EXTRA",
  "STATEMENT", "FOLIO", "QUARTO",
  ((void *)0)
 } ;
 const int widths[]={
  612, 595, 612,
  522, 612,612,792,792,
  612,792,1224,1584,2448,2016,792,2016,2448,2880,
  74,105,147,210,298,420,595,842,1191,1684,2384,3370,4768,3370,4768,
  88,125,176,249,354,499,709,1001,1417,2004,2835,
  91,128,181,258,363,516,729,1032,1460,2064,2920,
  79,113,162,230,323,459,649,918,1298,1298,2599,
  1219,1729,2438,638,907,1276,1814,2551,
  914,667,
  396, 612, 609,
  0
 };
 const int lengths[]={
  792,842,1008,
  756,792,1008,1224,1224,
  792,1224,1584,2448,3168,2880,6480,10296,12672,10296,
  105,147,210,298,420,595,842,1191,1684,2384,3370,4768,6741,4768,6741,
  125,176,249,354,499,709,1001,1417,2004,2835,4008,
  128,181,258,363,516,729,1032,1460,2064,2920,4127,
  113,162,230,323,459,649,918,1298,1837,1837,3677,
  1729,2438,3458,907,1276,1814,2551,3628,
  1262,914,
  612, 936, 780,
  0
 };

 len=strlen(papersize);
 for(i=0;i<len;i++){
  papersize[i]=(__extension__ ({ int __res; if (sizeof (papersize[i]) > 1) { if (__builtin_constant_p (papersize[i])) { int __c = (papersize[i]); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper (papersize[i]); } else __res = (*__ctype_toupper_loc ())[(int) (papersize[i])]; __res; }));
 }
 for(i=0;sizes[i]!=((void *)0); i++){
  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p ((const char*)papersize) && __builtin_constant_p (sizes[i]) && (__s1_len = strlen ((const char*)papersize), __s2_len = strlen (sizes[i]), (!((size_t)(const void *)(((const char*)papersize) + 1) - (size_t)(const void *)((const char*)papersize) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((sizes[i]) + 1) - (size_t)(const void *)(sizes[i]) == 1) || __s2_len >= 4)) ? __builtin_strcmp ((const char*)papersize, sizes[i]) : (__builtin_constant_p ((const char*)papersize) && ((size_t)(const void *)(((const char*)papersize) + 1) - (size_t)(const void *)((const char*)papersize) == 1) && (__s1_len = strlen ((const char*)papersize), __s1_len < 4) ? (__builtin_constant_p (sizes[i]) && ((size_t)(const void *)((sizes[i]) + 1) - (size_t)(const void *)(sizes[i]) == 1) ? __builtin_strcmp ((const char*)papersize, sizes[i]) : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) (sizes[i]); register int __result = (((__const unsigned char *) (__const char *) ((const char*)papersize))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) ((const char*)papersize))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) ((const char*)papersize))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) ((const char*)papersize))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (sizes[i]) && ((size_t)(const void *)((sizes[i]) + 1) - (size_t)(const void *)(sizes[i]) == 1) && (__s2_len = strlen (sizes[i]), __s2_len < 4) ? (__builtin_constant_p ((const char*)papersize) && ((size_t)(const void *)(((const char*)papersize) + 1) - (size_t)(const void *)((const char*)papersize) == 1) ? __builtin_strcmp ((const char*)papersize, sizes[i]) : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) ((const char*)papersize); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) (sizes[i]))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) (sizes[i]))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) (sizes[i]))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) (sizes[i]))[3]); } } __result; }))) : __builtin_strcmp ((const char*)papersize, sizes[i])))); })==0){
   *width=(float)widths[i];
   *length=(float)lengths[i];
   return(1);
  }
 }

 return(0);
}





T2P* t2p_init(){

 T2P* t2p = (T2P*) _TIFFmalloc(sizeof(T2P));
 if(t2p==((void *)0)){
  TIFFError(
   "tiff2pdf",
   "Can't allocate %lu bytes of memory for t2p_init",
   (unsigned long) sizeof(T2P));
  return( (T2P*) ((void *)0) );
 }
 _TIFFmemset(t2p, 0x00, sizeof(T2P));
 t2p->pdf_majorversion=1;
 t2p->pdf_minorversion=1;
 t2p->pdf_defaultxres=300.0;
 t2p->pdf_defaultyres=300.0;
 t2p->pdf_defaultpagewidth=612.0;
 t2p->pdf_defaultpagelength=792.0;
 t2p->pdf_xrefcount=3;

 return(t2p);
}





void t2p_free(T2P* t2p){

 int i=0;

 if(t2p != ((void *)0)){
  if(t2p->pdf_xrefoffsets != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_xrefoffsets);
  }
  if(t2p->tiff_pages != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->tiff_pages);
  }
  for(i=0;i<t2p->tiff_pagecount;i++){
   if(t2p->tiff_tiles[i].tiles_tiles != ((void *)0)){
    _TIFFfree( (tdata_t) t2p->tiff_tiles[i].tiles_tiles);
   }
  }
  if(t2p->tiff_tiles != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->tiff_tiles);
  }
  if(t2p->pdf_palette != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_palette);
  }
  if(t2p->pdf_fileid != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_fileid);
  }
  if(t2p->pdf_datetime != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_datetime);
  }
  if(t2p->pdf_creator != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_creator);
  }
  if(t2p->pdf_author != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_author);
  }
  if(t2p->pdf_title != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_title);
  }
  if(t2p->pdf_subject != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_subject);
  }
  if(t2p->pdf_keywords != ((void *)0)){
   _TIFFfree( (tdata_t) t2p->pdf_keywords);
  }





  _TIFFfree( (tdata_t) t2p );
 }

 return;
}






void t2p_validate(T2P* t2p){
# 1026 "tiff2pdf.c"
 if(t2p->pdf_defaultcompression==T2P_COMPRESS_ZIP){
   uint16 m=t2p->pdf_defaultcompressionquality%100;
   if(t2p->pdf_defaultcompressionquality/100 > 9 ||
    (m>1 && m<10) || m>15){
    t2p->pdf_defaultcompressionquality=0;
  }
  if(t2p->pdf_defaultcompressionquality%100 !=0){
    t2p->pdf_defaultcompressionquality/=100;
    t2p->pdf_defaultcompressionquality*=100;
   TIFFError(
    "tiff2pdf",
    "PNG Group predictor differencing not implemented, assuming compression quality %u",
    t2p->pdf_defaultcompressionquality);
  }
  t2p->pdf_defaultcompressionquality%=100;
  if(t2p->pdf_minorversion<2){t2p->pdf_minorversion=2;}
 }

 (void)0;

 return;
}
# 1057 "tiff2pdf.c"
void t2p_read_tiff_init(T2P* t2p, TIFF* input){

 tdir_t directorycount=0;
 tdir_t i=0;
 uint16 pagen=0;
 uint16 paged=0;
 uint16 xuint16=0;

 directorycount=TIFFNumberOfDirectories(input);
 t2p->tiff_pages = (T2P_PAGE*) _TIFFmalloc(directorycount * sizeof(T2P_PAGE));
 if(t2p->tiff_pages==((void *)0)){
  TIFFError(
   "tiff2pdf",
   "Can't allocate %lu bytes of memory for tiff_pages array, %s",
   (unsigned long) directorycount * sizeof(T2P_PAGE),
   TIFFFileName(input));
  t2p->t2p_error = T2P_ERR_ERROR;
  return;
 }
 _TIFFmemset( t2p->tiff_pages, 0x00, directorycount * sizeof(T2P_PAGE));
 t2p->tiff_tiles = (T2P_TILES*) _TIFFmalloc(directorycount * sizeof(T2P_TILES));
 if(t2p->tiff_tiles==((void *)0)){
  TIFFError(
   "tiff2pdf",
   "Can't allocate %lu bytes of memory for tiff_tiles array, %s",
   (unsigned long) directorycount * sizeof(T2P_TILES),
   TIFFFileName(input));
  t2p->t2p_error = T2P_ERR_ERROR;
  return;
 }
 _TIFFmemset( t2p->tiff_tiles, 0x00, directorycount * sizeof(T2P_TILES));
 for(i=0;i<directorycount;i++){
  uint32 subfiletype = 0;

  if(!TIFFSetDirectory(input, i)){
   TIFFError(
    "tiff2pdf",
    "Can't set directory %u of input file %s",
    i,
    TIFFFileName(input));
   return;
  }
  if(TIFFGetField(input, 297, &pagen, &paged)){
   if((pagen>paged) && (paged != 0)){
    t2p->tiff_pages[t2p->tiff_pagecount].page_number =
     paged;
   } else {
    t2p->tiff_pages[t2p->tiff_pagecount].page_number =
     pagen;
   }
   goto ispage2;
  }
  if(TIFFGetField(input, 254, &subfiletype)){
   if ( ((subfiletype & 0x2) != 0)
                             || (subfiletype == 0)){
    goto ispage;
   } else {
    goto isnotpage;
   }
  }
  if(TIFFGetField(input, 255, &subfiletype)){
   if ((subfiletype == 1)
    || (subfiletype == 3)
    || (subfiletype == 0) ){
    goto ispage;
   } else {
    goto isnotpage;
   }
  }
  ispage:
  t2p->tiff_pages[t2p->tiff_pagecount].page_number=t2p->tiff_pagecount;
  ispage2:
  t2p->tiff_pages[t2p->tiff_pagecount].page_directory=i;
  if(TIFFIsTiled(input)){
   t2p->tiff_pages[t2p->tiff_pagecount].page_tilecount =
    TIFFNumberOfTiles(input);
  }
  t2p->tiff_pagecount++;
  isnotpage:
  (void)0;
 }

 qsort((void*) t2p->tiff_pages, t2p->tiff_pagecount,
              sizeof(T2P_PAGE), t2p_cmp_t2p_page);

 for(i=0;i<t2p->tiff_pagecount;i++){
  t2p->pdf_xrefcount += 5;
  TIFFSetDirectory(input, t2p->tiff_pages[i].page_directory );
  if((TIFFGetField(input, 262, &xuint16)
                    && (xuint16==3))
     || TIFFGetField(input, 346, &xuint16)) {
   t2p->tiff_pages[i].page_extra++;
   t2p->pdf_xrefcount++;
  }

  if (TIFFGetField(input, 259, &xuint16)) {
                        if( (xuint16== 32946 ||
                             xuint16== 8) &&
                            ((t2p->tiff_pages[i].page_tilecount != 0)
                             || TIFFNumberOfStrips(input)==1) &&
                            (t2p->pdf_nopassthrough==0) ){
                                if(t2p->pdf_minorversion<2){t2p->pdf_minorversion=2;}
                        }
                }

  if (TIFFGetField(input, 301,
                                 &(t2p->tiff_transferfunction[0]),
                                 &(t2p->tiff_transferfunction[1]),
                                 &(t2p->tiff_transferfunction[2]))) {
   if(t2p->tiff_transferfunction[1] !=
      t2p->tiff_transferfunction[0]) {
    t2p->tiff_transferfunctioncount = 3;
    t2p->tiff_pages[i].page_extra += 4;
    t2p->pdf_xrefcount += 4;
   } else {
    t2p->tiff_transferfunctioncount = 1;
    t2p->tiff_pages[i].page_extra += 2;
    t2p->pdf_xrefcount += 2;
   }
   if(t2p->pdf_minorversion < 2)
    t2p->pdf_minorversion = 2;
                } else {
   t2p->tiff_transferfunctioncount=0;
  }
  if( TIFFGetField(
   input,
   34675,
   &(t2p->tiff_iccprofilelength),
   &(t2p->tiff_iccprofile)) != 0){
   t2p->tiff_pages[i].page_extra++;
   t2p->pdf_xrefcount++;
   if(t2p->pdf_minorversion<3){t2p->pdf_minorversion=3;}
  }
  t2p->tiff_tiles[i].tiles_tilecount=
   t2p->tiff_pages[i].page_tilecount;
  if( (TIFFGetField(input, 284, &xuint16) != 0)
   && (xuint16 == 2 ) ){
    TIFFGetField(input, 277, &xuint16);
    t2p->tiff_tiles[i].tiles_tilecount/= xuint16;
  }
  if( t2p->tiff_tiles[i].tiles_tilecount > 0){
   t2p->pdf_xrefcount +=
    (t2p->tiff_tiles[i].tiles_tilecount -1)*2;
   TIFFGetField(input,
    322,
    &( t2p->tiff_tiles[i].tiles_tilewidth) );
   TIFFGetField(input,
    323,
    &( t2p->tiff_tiles[i].tiles_tilelength) );
   t2p->tiff_tiles[i].tiles_tiles =
   (T2P_TILE*) _TIFFmalloc(
    t2p->tiff_tiles[i].tiles_tilecount
    * sizeof(T2P_TILE) );
   if( t2p->tiff_tiles[i].tiles_tiles == ((void *)0)){
    TIFFError(
     "tiff2pdf",
     "Can't allocate %lu bytes of memory for t2p_read_tiff_init, %s",
     (unsigned long) t2p->tiff_tiles[i].tiles_tilecount * sizeof(T2P_TILE),
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
   }
  }
 }

 return;
}






int t2p_cmp_t2p_page(const void* e1, const void* e2){

 return( ((T2P_PAGE*)e1)->page_number - ((T2P_PAGE*)e2)->page_number );
}
# 1247 "tiff2pdf.c"
void t2p_read_tiff_data(T2P* t2p, TIFF* input){

 int i=0;
 uint16* r;
 uint16* g;
 uint16* b;
 uint16* a;
 uint16 xuint16;
 uint16* xuint16p;
 float* xfloatp;

 t2p->pdf_transcode = T2P_TRANSCODE_ENCODE;
 t2p->pdf_sample = T2P_SAMPLE_NOTHING;
        t2p->pdf_switchdecode = t2p->pdf_colorspace_invert;


 TIFFSetDirectory(input, t2p->tiff_pages[t2p->pdf_page].page_directory);

 TIFFGetField(input, 256, &(t2p->tiff_width));
 if(t2p->tiff_width == 0){
  TIFFError(
   "tiff2pdf",
   "No support for %s with zero width",
   TIFFFileName(input) );
  t2p->t2p_error = T2P_ERR_ERROR;
  return;
 }

 TIFFGetField(input, 257, &(t2p->tiff_length));
 if(t2p->tiff_length == 0){
  TIFFError(
   "tiff2pdf",
   "No support for %s with zero length",
   TIFFFileName(input) );
  t2p->t2p_error = T2P_ERR_ERROR;
  return;
 }

        if(TIFFGetField(input, 259, &(t2p->tiff_compression)) == 0){
                TIFFError(
                        "tiff2pdf",
                        "No support for %s with no compression tag",
                        TIFFFileName(input) );
                t2p->t2p_error = T2P_ERR_ERROR;
                return;

        }
        if( TIFFIsCODECConfigured(t2p->tiff_compression) == 0){
  TIFFError(
   "tiff2pdf",
   "No support for %s with compression type %u:  not configured",
   TIFFFileName(input),
   t2p->tiff_compression
   );
  t2p->t2p_error = T2P_ERR_ERROR;
  return;

 }

 TIFFGetFieldDefaulted(input, 258, &(t2p->tiff_bitspersample));
 switch(t2p->tiff_bitspersample){
  case 1:
  case 2:
  case 4:
  case 8:
   break;
  case 0:
   TIFFWarning(
    "tiff2pdf",
    "Image %s has 0 bits per sample, assuming 1",
    TIFFFileName(input));
   t2p->tiff_bitspersample=1;
   break;
  default:
   TIFFError(
    "tiff2pdf",
    "No support for %s with %u bits per sample",
    TIFFFileName(input),
    t2p->tiff_bitspersample);
   t2p->t2p_error = T2P_ERR_ERROR;
   return;
 }

 TIFFGetFieldDefaulted(input, 277, &(t2p->tiff_samplesperpixel));
 if(t2p->tiff_samplesperpixel>4){
  TIFFError(
   "tiff2pdf",
   "No support for %s with %u samples per pixel",
   TIFFFileName(input),
   t2p->tiff_samplesperpixel);
  t2p->t2p_error = T2P_ERR_ERROR;
  return;
 }
 if(t2p->tiff_samplesperpixel==0){
  TIFFWarning(
   "tiff2pdf",
   "Image %s has 0 samples per pixel, assuming 1",
   TIFFFileName(input));
  t2p->tiff_samplesperpixel=1;
 }

 if(TIFFGetField(input, 339, &xuint16) != 0 ){
  switch(xuint16){
   case 0:
   case 1:
   case 4:
    break;
   default:
    TIFFError(
     "tiff2pdf",
     "No support for %s with sample format %u",
     TIFFFileName(input),
     xuint16);
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
    break;
  }
 }

 TIFFGetFieldDefaulted(input, 266, &(t2p->tiff_fillorder));

        if(TIFFGetField(input, 262, &(t2p->tiff_photometric)) == 0){
                TIFFError(
                        "tiff2pdf",
                        "No support for %s with no photometric interpretation tag",
                        TIFFFileName(input) );
                t2p->t2p_error = T2P_ERR_ERROR;
                return;

        }

 switch(t2p->tiff_photometric){
  case 0:
  case 1:
   if (t2p->tiff_bitspersample==1){
    t2p->pdf_colorspace=T2P_CS_BILEVEL;
    if(t2p->tiff_photometric==0){
     t2p->pdf_switchdecode ^= 1;
    }
   } else {
    t2p->pdf_colorspace=T2P_CS_GRAY;
    if(t2p->tiff_photometric==0){
     t2p->pdf_switchdecode ^= 1;
    }
   }
   break;
  case 2:
   t2p->pdf_colorspace=T2P_CS_RGB;
   if(t2p->tiff_samplesperpixel == 3){
    break;
   }
   if(TIFFGetField(input, 346, &xuint16)){
    if(xuint16==1)
     goto photometric_palette;
   }
   if(t2p->tiff_samplesperpixel > 3) {
    if(t2p->tiff_samplesperpixel == 4) {
     t2p->pdf_colorspace = T2P_CS_RGB;
     if(TIFFGetField(input,
       338,
       &xuint16, &xuint16p)
        && xuint16 == 1) {
      if(xuint16p[0] == 1){
       t2p->pdf_sample=T2P_SAMPLE_RGBAA_TO_RGB;
       break;
      }
      if(xuint16p[0] == 2){
       t2p->pdf_sample=T2P_SAMPLE_RGBA_TO_RGB;
       break;
      }
      TIFFWarning(
       "tiff2pdf",
       "RGB image %s has 4 samples per pixel, assuming RGBA",
       TIFFFileName(input));
       break;
     }
     t2p->pdf_colorspace=T2P_CS_CMYK;
     t2p->pdf_switchdecode ^= 1;
     TIFFWarning(
      "tiff2pdf",
      "RGB image %s has 4 samples per pixel, assuming inverse CMYK",
     TIFFFileName(input));
     break;
    } else {
     TIFFError(
      "tiff2pdf",
      "No support for RGB image %s with %u samples per pixel",
      TIFFFileName(input),
      t2p->tiff_samplesperpixel);
     t2p->t2p_error = T2P_ERR_ERROR;
     break;
    }
   } else {
    TIFFError(
     "tiff2pdf",
     "No support for RGB image %s with %u samples per pixel",
     TIFFFileName(input),
     t2p->tiff_samplesperpixel);
    t2p->t2p_error = T2P_ERR_ERROR;
    break;
   }
  case 3:
   photometric_palette:
   if(t2p->tiff_samplesperpixel!=1){
    TIFFError(
     "tiff2pdf",
     "No support for palettized image %s with not one sample per pixel",
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
   }
   t2p->pdf_colorspace=T2P_CS_RGB | T2P_CS_PALETTE;
   t2p->pdf_palettesize=0x0001<<t2p->tiff_bitspersample;
   if(!TIFFGetField(input, 320, &r, &g, &b)){
    TIFFError(
     "tiff2pdf",
     "Palettized image %s has no color map",
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
   }
   if(t2p->pdf_palette != ((void *)0)){
    _TIFFfree(t2p->pdf_palette);
    t2p->pdf_palette=((void *)0);
   }
   t2p->pdf_palette = (unsigned char*)
    _TIFFmalloc(t2p->pdf_palettesize*3);
   if(t2p->pdf_palette==((void *)0)){
    TIFFError(
     "tiff2pdf",
     "Can't allocate %u bytes of memory for t2p_read_tiff_image, %s",
     t2p->pdf_palettesize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
   }
   for(i=0;i<t2p->pdf_palettesize;i++){
    t2p->pdf_palette[(i*3)] = (unsigned char) (r[i]>>8);
    t2p->pdf_palette[(i*3)+1]= (unsigned char) (g[i]>>8);
    t2p->pdf_palette[(i*3)+2]= (unsigned char) (b[i]>>8);
   }
   t2p->pdf_palettesize *= 3;
   break;
  case 5:
   if(TIFFGetField(input, 346, &xuint16)){
    if(xuint16==1){
      goto photometric_palette_cmyk;
    }
   }
   if( TIFFGetField(input, 332, &xuint16) ){
    if(xuint16 != 1){
     TIFFError(
      "tiff2pdf",
      "No support for %s because its inkset is not CMYK",
      TIFFFileName(input) );
     t2p->t2p_error = T2P_ERR_ERROR;
     return;
    }
   }
   if(t2p->tiff_samplesperpixel==4){
    t2p->pdf_colorspace=T2P_CS_CMYK;
   } else {
    TIFFError(
     "tiff2pdf",
     "No support for %s because it has %u samples per pixel",
     TIFFFileName(input),
     t2p->tiff_samplesperpixel);
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
   }
   break;
   photometric_palette_cmyk:
   if(t2p->tiff_samplesperpixel!=1){
    TIFFError(
     "tiff2pdf",
     "No support for palettized CMYK image %s with not one sample per pixel",
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
   }
   t2p->pdf_colorspace=T2P_CS_CMYK | T2P_CS_PALETTE;
   t2p->pdf_palettesize=0x0001<<t2p->tiff_bitspersample;
   if(!TIFFGetField(input, 320, &r, &g, &b, &a)){
    TIFFError(
     "tiff2pdf",
     "Palettized image %s has no color map",
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
   }
   if(t2p->pdf_palette != ((void *)0)){
    _TIFFfree(t2p->pdf_palette);
    t2p->pdf_palette=((void *)0);
   }
   t2p->pdf_palette = (unsigned char*)
    _TIFFmalloc(t2p->pdf_palettesize*4);
   if(t2p->pdf_palette==((void *)0)){
    TIFFError(
     "tiff2pdf",
     "Can't allocate %u bytes of memory for t2p_read_tiff_image, %s",
     t2p->pdf_palettesize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
   }
   for(i=0;i<t2p->pdf_palettesize;i++){
    t2p->pdf_palette[(i*4)] = (unsigned char) (r[i]>>8);
    t2p->pdf_palette[(i*4)+1]= (unsigned char) (g[i]>>8);
    t2p->pdf_palette[(i*4)+2]= (unsigned char) (b[i]>>8);
    t2p->pdf_palette[(i*4)+3]= (unsigned char) (a[i]>>8);
   }
   t2p->pdf_palettesize *= 4;
   break;
  case 6:
   t2p->pdf_colorspace=T2P_CS_RGB;
   if(t2p->tiff_samplesperpixel==1){
    t2p->pdf_colorspace=T2P_CS_GRAY;
    t2p->tiff_photometric=1;
    break;
   }
   t2p->pdf_sample=T2P_SAMPLE_YCBCR_TO_RGB;





   break;
  case 8:
   t2p->pdf_labrange[0]= -127;
   t2p->pdf_labrange[1]= 127;
   t2p->pdf_labrange[2]= -127;
   t2p->pdf_labrange[3]= 127;
   t2p->pdf_sample=T2P_SAMPLE_LAB_SIGNED_TO_UNSIGNED;
   t2p->pdf_colorspace=T2P_CS_LAB;
   break;
  case 9:
   t2p->pdf_labrange[0]= 0;
   t2p->pdf_labrange[1]= 255;
   t2p->pdf_labrange[2]= 0;
   t2p->pdf_labrange[3]= 255;
   t2p->pdf_colorspace=T2P_CS_LAB;
   break;
  case 10:
   t2p->pdf_labrange[0]=-85;
   t2p->pdf_labrange[1]=85;
   t2p->pdf_labrange[2]=-75;
   t2p->pdf_labrange[3]=124;
   t2p->pdf_sample=T2P_SAMPLE_LAB_SIGNED_TO_UNSIGNED;
   t2p->pdf_colorspace=T2P_CS_LAB;
   break;
  case 32844:
  case 32845:
   TIFFError(
    "tiff2pdf",
    "No support for %s with photometric interpretation LogL/LogLuv",
    TIFFFileName(input));
   t2p->t2p_error = T2P_ERR_ERROR;
   return;
  default:
   TIFFError(
    "tiff2pdf",
    "No support for %s with photometric interpretation %u",
    TIFFFileName(input),
    t2p->tiff_photometric);
   t2p->t2p_error = T2P_ERR_ERROR;
   return;
 }

 if(TIFFGetField(input, 284, &(t2p->tiff_planar))){
  switch(t2p->tiff_planar){
   case 0:
    TIFFWarning(
     "tiff2pdf",
     "Image %s has planar configuration 0, assuming 1",
     TIFFFileName(input));
    t2p->tiff_planar=1;
   case 1:
    break;
   case 2:
    t2p->pdf_sample=T2P_SAMPLE_PLANAR_SEPARATE_TO_CONTIG;
    if(t2p->tiff_bitspersample!=8){
     TIFFError(
      "tiff2pdf",
      "No support for %s with separated planar configuration and %u bits per sample",
      TIFFFileName(input),
      t2p->tiff_bitspersample);
     t2p->t2p_error = T2P_ERR_ERROR;
     return;
    }
    break;
   default:
    TIFFError(
     "tiff2pdf",
     "No support for %s with planar configuration %u",
     TIFFFileName(input),
     t2p->tiff_planar);
    t2p->t2p_error = T2P_ERR_ERROR;
    return;
  }
 }

        TIFFGetFieldDefaulted(input, 274,
                              &(t2p->tiff_orientation));
        if(t2p->tiff_orientation>8){
                TIFFWarning("tiff2pdf",
                            "Image %s has orientation %u, assuming 0",
                            TIFFFileName(input), t2p->tiff_orientation);
                t2p->tiff_orientation=0;
        }

        if(TIFFGetField(input, 282, &(t2p->tiff_xres) ) == 0){
                t2p->tiff_xres=0.0;
        }
        if(TIFFGetField(input, 283, &(t2p->tiff_yres) ) == 0){
                t2p->tiff_yres=0.0;
        }
 TIFFGetFieldDefaulted(input, 296,
         &(t2p->tiff_resunit));
 if(t2p->tiff_resunit == 3) {
  t2p->tiff_xres *= 2.54F;
  t2p->tiff_yres *= 2.54F;
 } else if (t2p->tiff_resunit != 2
     && t2p->pdf_centimeters != 0) {
  t2p->tiff_xres *= 2.54F;
  t2p->tiff_yres *= 2.54F;
 }

 t2p_compose_pdf_page(t2p);

 t2p->pdf_transcode = T2P_TRANSCODE_ENCODE;
 if(t2p->pdf_nopassthrough==0){

  if(t2p->tiff_compression==4
   ){
   if(TIFFIsTiled(input) || (TIFFNumberOfStrips(input)==1) ){
    t2p->pdf_transcode = T2P_TRANSCODE_RAW;
    t2p->pdf_compression=T2P_COMPRESS_G4;
   }
  }


  if(t2p->tiff_compression== 8
   || t2p->tiff_compression==32946){
   if(TIFFIsTiled(input) || (TIFFNumberOfStrips(input)==1) ){
    t2p->pdf_transcode = T2P_TRANSCODE_RAW;
    t2p->pdf_compression=T2P_COMPRESS_ZIP;
   }
  }
# 1709 "tiff2pdf.c"
  (void)0;
 }

 if(t2p->pdf_transcode!=T2P_TRANSCODE_RAW){
  t2p->pdf_compression = t2p->pdf_defaultcompression;
 }
# 1748 "tiff2pdf.c"
 if(t2p->pdf_sample & T2P_SAMPLE_REALIZE_PALETTE){
  if(t2p->pdf_colorspace & T2P_CS_CMYK){
   t2p->tiff_samplesperpixel=4;
   t2p->tiff_photometric=5;
  } else {
   t2p->tiff_samplesperpixel=3;
   t2p->tiff_photometric=2;
  }
 }

 if (TIFFGetField(input, 301,
    &(t2p->tiff_transferfunction[0]),
    &(t2p->tiff_transferfunction[1]),
    &(t2p->tiff_transferfunction[2]))) {
  if(t2p->tiff_transferfunction[1] !=
     t2p->tiff_transferfunction[0]) {
   t2p->tiff_transferfunctioncount=3;
  } else {
   t2p->tiff_transferfunctioncount=1;
  }
 } else {
  t2p->tiff_transferfunctioncount=0;
 }
 if(TIFFGetField(input, 318, &xfloatp)!=0){
  t2p->tiff_whitechromaticities[0]=xfloatp[0];
  t2p->tiff_whitechromaticities[1]=xfloatp[1];
  if(t2p->pdf_colorspace & T2P_CS_GRAY){
   t2p->pdf_colorspace |= T2P_CS_CALGRAY;
  }
  if(t2p->pdf_colorspace & T2P_CS_RGB){
   t2p->pdf_colorspace |= T2P_CS_CALRGB;
  }
 }
 if(TIFFGetField(input, 319, &xfloatp)!=0){
  t2p->tiff_primarychromaticities[0]=xfloatp[0];
  t2p->tiff_primarychromaticities[1]=xfloatp[1];
  t2p->tiff_primarychromaticities[2]=xfloatp[2];
  t2p->tiff_primarychromaticities[3]=xfloatp[3];
  t2p->tiff_primarychromaticities[4]=xfloatp[4];
  t2p->tiff_primarychromaticities[5]=xfloatp[5];
  if(t2p->pdf_colorspace & T2P_CS_RGB){
   t2p->pdf_colorspace |= T2P_CS_CALRGB;
  }
 }
 if(t2p->pdf_colorspace & T2P_CS_LAB){
  if(TIFFGetField(input, 318, &xfloatp) != 0){
   t2p->tiff_whitechromaticities[0]=xfloatp[0];
   t2p->tiff_whitechromaticities[1]=xfloatp[1];
  } else {
   t2p->tiff_whitechromaticities[0]=0.3457F;
   t2p->tiff_whitechromaticities[1]=0.3585F;
  }
 }
 if(TIFFGetField(input,
  34675,
  &(t2p->tiff_iccprofilelength),
  &(t2p->tiff_iccprofile))!=0){
  t2p->pdf_colorspace |= T2P_CS_ICCBASED;
 } else {
  t2p->tiff_iccprofilelength=0;
  t2p->tiff_iccprofile=((void *)0);
 }


 if( t2p->tiff_bitspersample==1 &&
  t2p->tiff_samplesperpixel==1){
  t2p->pdf_compression = T2P_COMPRESS_G4;
 }



 return;
}






void t2p_read_tiff_size(T2P* t2p, TIFF* input){

 uint64* sbc=((void *)0);
# 1839 "tiff2pdf.c"
 if(t2p->pdf_transcode == T2P_TRANSCODE_RAW){

  if(t2p->pdf_compression == T2P_COMPRESS_G4 ){
   TIFFGetField(input, 279, &sbc);
   t2p->tiff_datasize=(tmsize_t)sbc[0];
   return;
  }


  if(t2p->pdf_compression == T2P_COMPRESS_ZIP){
   TIFFGetField(input, 279, &sbc);
   t2p->tiff_datasize=(tmsize_t)sbc[0];
   return;
  }
# 1923 "tiff2pdf.c"
  (void) 0;
 }
 t2p->tiff_datasize=TIFFScanlineSize(input) * t2p->tiff_length;
 if(t2p->tiff_planar==2){
  t2p->tiff_datasize*= t2p->tiff_samplesperpixel;
 }

 return;
}






void t2p_read_tiff_size_tile(T2P* t2p, TIFF* input, ttile_t tile){

 uint64* tbc = ((void *)0);
 uint16 edge=0;




 edge |= t2p_tile_is_right_edge(t2p->tiff_tiles[t2p->pdf_page], tile);
 edge |= t2p_tile_is_bottom_edge(t2p->tiff_tiles[t2p->pdf_page], tile);

 if(t2p->pdf_transcode==T2P_TRANSCODE_RAW){
  if(edge



  ){
   t2p->tiff_datasize=TIFFTileSize(input);
   return;
  } else {
   TIFFGetField(input, 325, &tbc);
   t2p->tiff_datasize=(tmsize_t)tbc[tile];
# 1977 "tiff2pdf.c"
   return;
  }
 }
 t2p->tiff_datasize=TIFFTileSize(input);
 if(t2p->tiff_planar==2){
  t2p->tiff_datasize*= t2p->tiff_samplesperpixel;
 }

 return;
}






int t2p_tile_is_right_edge(T2P_TILES tiles, ttile_t tile){

 if( ((tile+1) % tiles.tiles_tilecountx == 0)
  && (tiles.tiles_edgetilewidth != 0) ){
  return(1);
 } else {
  return(0);
 }
}






int t2p_tile_is_bottom_edge(T2P_TILES tiles, ttile_t tile){

 if( ((tile+1) > (tiles.tiles_tilecount-tiles.tiles_tilecountx) )
  && (tiles.tiles_edgetilelength != 0) ){
  return(1);
 } else {
  return(0);
 }
}






int t2p_tile_is_edge(T2P_TILES tiles, ttile_t tile){

 return(t2p_tile_is_right_edge(tiles, tile) | t2p_tile_is_bottom_edge(tiles, tile) );
}






int t2p_tile_is_corner_edge(T2P_TILES tiles, ttile_t tile){

 return(t2p_tile_is_right_edge(tiles, tile) & t2p_tile_is_bottom_edge(tiles, tile) );
}
# 2045 "tiff2pdf.c"
tsize_t t2p_readwrite_pdf_image(T2P* t2p, TIFF* input, TIFF* output){

 tsize_t written=0;
 unsigned char* buffer=((void *)0);
 unsigned char* samplebuffer=((void *)0);
 tsize_t bufferoffset=0;
 tsize_t samplebufferoffset=0;
 tsize_t read=0;
 tstrip_t i=0;
 tstrip_t j=0;
 tstrip_t stripcount=0;
 tsize_t stripsize=0;
 tsize_t sepstripcount=0;
 tsize_t sepstripsize=0;
# 2075 "tiff2pdf.c"
 if(t2p->pdf_transcode == T2P_TRANSCODE_RAW){

  if(t2p->pdf_compression == T2P_COMPRESS_G4){
   buffer = (unsigned char*)
    _TIFFmalloc(t2p->tiff_datasize);
   if (buffer == ((void *)0)) {
    TIFFError("tiff2pdf",
 "Can't allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
   TIFFReadRawStrip(input, 0, (tdata_t) buffer,
      t2p->tiff_datasize);
   if (t2p->tiff_fillorder==2){




     TIFFReverseBits(buffer,
       t2p->tiff_datasize);
   }
   t2pWriteFile(output, (tdata_t) buffer,
          t2p->tiff_datasize);
   _TIFFfree(buffer);
   return(t2p->tiff_datasize);
  }


  if (t2p->pdf_compression == T2P_COMPRESS_ZIP) {
   buffer = (unsigned char*)
    _TIFFmalloc(t2p->tiff_datasize);
   if(buffer == ((void *)0)){
    TIFFError("tiff2pdf",
 "Can't allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
                        memset(buffer, 0, t2p->tiff_datasize);
   TIFFReadRawStrip(input, 0, (tdata_t) buffer,
      t2p->tiff_datasize);
   if (t2p->tiff_fillorder==2) {
     TIFFReverseBits(buffer,
       t2p->tiff_datasize);
   }
   t2pWriteFile(output, (tdata_t) buffer,
          t2p->tiff_datasize);
   _TIFFfree(buffer);
   return(t2p->tiff_datasize);
  }
# 2311 "tiff2pdf.c"
  (void)0;
 }

 if(t2p->pdf_sample==T2P_SAMPLE_NOTHING){
  buffer = (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
  if(buffer==((void *)0)){
   TIFFError("tiff2pdf",
 "Can't allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
    (unsigned long) t2p->tiff_datasize,
    TIFFFileName(input));
   t2p->t2p_error = T2P_ERR_ERROR;
   return(0);
  }
                memset(buffer, 0, t2p->tiff_datasize);
  stripsize=TIFFStripSize(input);
  stripcount=TIFFNumberOfStrips(input);
  for(i=0;i<stripcount;i++){
   read =
    TIFFReadEncodedStrip(input,
    i,
    (tdata_t) &buffer[bufferoffset],
    stripsize);
   if(read==-1){
    TIFFError("tiff2pdf",
     "Error on decoding strip %u of %s",
     i,
     TIFFFileName(input));
    _TIFFfree(buffer);
    t2p->t2p_error=T2P_ERR_ERROR;
    return(0);
   }
   bufferoffset+=read;
  }
 } else {
  if(t2p->pdf_sample & T2P_SAMPLE_PLANAR_SEPARATE_TO_CONTIG){

   sepstripsize=TIFFStripSize(input);
   sepstripcount=TIFFNumberOfStrips(input);

   stripsize=sepstripsize*t2p->tiff_samplesperpixel;
   stripcount=sepstripcount/t2p->tiff_samplesperpixel;

   buffer = (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
   if(buffer==((void *)0)){
    TIFFError("tiff2pdf",
 "Can't allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
                        memset(buffer, 0, t2p->tiff_datasize);
   samplebuffer = (unsigned char*) _TIFFmalloc(stripsize);
   if(samplebuffer==((void *)0)){
    TIFFError("tiff2pdf",
 "Can't allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
   for(i=0;i<stripcount;i++){
    samplebufferoffset=0;
    for(j=0;j<t2p->tiff_samplesperpixel;j++){
     read =
      TIFFReadEncodedStrip(input,
       i + j*stripcount,
       (tdata_t) &(samplebuffer[samplebufferoffset]),
       sepstripsize);
     if(read==-1){
      TIFFError("tiff2pdf",
     "Error on decoding strip %u of %s",
       i + j*stripcount,
       TIFFFileName(input));
       _TIFFfree(buffer);
      t2p->t2p_error=T2P_ERR_ERROR;
      return(0);
     }
     samplebufferoffset+=read;
    }
    t2p_sample_planar_separate_to_contig(
     t2p,
     &(buffer[bufferoffset]),
     samplebuffer,
     samplebufferoffset);
    bufferoffset+=samplebufferoffset;
   }
   _TIFFfree(samplebuffer);
   goto dataready;
  }

  buffer = (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
  if(buffer==((void *)0)){
   TIFFError("tiff2pdf",
 "Can't allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
    (unsigned long) t2p->tiff_datasize,
    TIFFFileName(input));
   t2p->t2p_error = T2P_ERR_ERROR;
   return(0);
  }
                memset(buffer, 0, t2p->tiff_datasize);
  stripsize=TIFFStripSize(input);
  stripcount=TIFFNumberOfStrips(input);
  for(i=0;i<stripcount;i++){
   read =
    TIFFReadEncodedStrip(input,
    i,
    (tdata_t) &buffer[bufferoffset],
    stripsize);
   if(read==-1){
    TIFFError("tiff2pdf",
     "Error on decoding strip %u of %s",
     i,
     TIFFFileName(input));
    _TIFFfree(samplebuffer);
    _TIFFfree(buffer);
    t2p->t2p_error=T2P_ERR_ERROR;
    return(0);
   }
   bufferoffset+=read;
  }

  if(t2p->pdf_sample & T2P_SAMPLE_REALIZE_PALETTE){
   samplebuffer=(unsigned char*)_TIFFrealloc(
    (tdata_t) buffer,
    t2p->tiff_datasize * t2p->tiff_samplesperpixel);
   if(samplebuffer==((void *)0)){
    TIFFError("tiff2pdf",
 "Can't allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
     _TIFFfree(buffer);
   } else {
    buffer=samplebuffer;
    t2p->tiff_datasize *= t2p->tiff_samplesperpixel;
   }
   t2p_sample_realize_palette(t2p, buffer);
  }

  if(t2p->pdf_sample & T2P_SAMPLE_RGBA_TO_RGB){
   t2p->tiff_datasize=t2p_sample_rgba_to_rgb(
    (tdata_t)buffer,
    t2p->tiff_width*t2p->tiff_length);
  }

  if(t2p->pdf_sample & T2P_SAMPLE_RGBAA_TO_RGB){
   t2p->tiff_datasize=t2p_sample_rgbaa_to_rgb(
    (tdata_t)buffer,
    t2p->tiff_width*t2p->tiff_length);
  }

  if(t2p->pdf_sample & T2P_SAMPLE_YCBCR_TO_RGB){
   samplebuffer=(unsigned char*)_TIFFrealloc(
    (tdata_t)buffer,
    t2p->tiff_width*t2p->tiff_length*4);
   if(samplebuffer==((void *)0)){
    TIFFError("tiff2pdf",
 "Can't allocate %lu bytes of memory for t2p_readwrite_pdf_image, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    _TIFFfree(buffer);
    return(0);
   } else {
    buffer=samplebuffer;
   }
   if(!TIFFReadRGBAImageOriented(
    input,
    t2p->tiff_width,
    t2p->tiff_length,
    (uint32*)buffer,
    1,
    0)){
    TIFFError("tiff2pdf",
 "Can't use TIFFReadRGBAImageOriented to extract RGB image from %s",
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
   t2p->tiff_datasize=t2p_sample_abgr_to_rgb(
    (tdata_t) buffer,
    t2p->tiff_width*t2p->tiff_length);

  }

  if(t2p->pdf_sample & T2P_SAMPLE_LAB_SIGNED_TO_UNSIGNED){
   t2p->tiff_datasize=t2p_sample_lab_signed_to_unsigned(
    (tdata_t)buffer,
    t2p->tiff_width*t2p->tiff_length);
  }
 }

dataready:

 t2p_disable(output);
 TIFFSetField(output, 262, t2p->tiff_photometric);
 TIFFSetField(output, 258, t2p->tiff_bitspersample);
 TIFFSetField(output, 277, t2p->tiff_samplesperpixel);
 TIFFSetField(output, 256, t2p->tiff_width);
 TIFFSetField(output, 257, t2p->tiff_length);
 TIFFSetField(output, 278, t2p->tiff_length);
 TIFFSetField(output, 284, 1);
 TIFFSetField(output, 266, 1);

 switch(t2p->pdf_compression){
 case T2P_COMPRESS_NONE:
  TIFFSetField(output, 259, 1);
  break;

 case T2P_COMPRESS_G4:
  TIFFSetField(output, 259, 4);
  break;
# 2572 "tiff2pdf.c"
 case T2P_COMPRESS_ZIP:
  TIFFSetField(output, 259, 32946);
  if(t2p->pdf_defaultcompressionquality%100 != 0){
   TIFFSetField(output,
    317,
    t2p->pdf_defaultcompressionquality % 100);
  }
  if(t2p->pdf_defaultcompressionquality/100 != 0){
   TIFFSetField(output,
    65557,
    (t2p->pdf_defaultcompressionquality / 100));
  }
  break;

 default:
  break;
 }

 t2p_enable(output);
 t2p->outputwritten = 0;
# 2600 "tiff2pdf.c"
        {
  bufferoffset = TIFFWriteEncodedStrip(output, (tstrip_t)0,
           buffer,
           t2p->tiff_datasize);
 }
 if (buffer != ((void *)0)) {
  _TIFFfree(buffer);
  buffer=((void *)0);
 }

 if (bufferoffset == (tsize_t)-1) {
  TIFFError("tiff2pdf",
     "Error writing encoded strip to output PDF %s",
     TIFFFileName(output));
  t2p->t2p_error = T2P_ERR_ERROR;
  return(0);
 }

 written = t2p->outputwritten;
 return(written);
}







tsize_t t2p_readwrite_pdf_image_tile(T2P* t2p, TIFF* input, TIFF* output, ttile_t tile){

 uint16 edge=0;
 tsize_t written=0;
 unsigned char* buffer=((void *)0);
 tsize_t bufferoffset=0;
 unsigned char* samplebuffer=((void *)0);
 tsize_t samplebufferoffset=0;
 tsize_t read=0;
 uint16 i=0;
 ttile_t tilecount=0;
 tsize_t tilesize=0;
 ttile_t septilecount=0;
 tsize_t septilesize=0;






 edge |= t2p_tile_is_right_edge(t2p->tiff_tiles[t2p->pdf_page], tile);
 edge |= t2p_tile_is_bottom_edge(t2p->tiff_tiles[t2p->pdf_page], tile);

 if( (t2p->pdf_transcode == T2P_TRANSCODE_RAW) && ((edge == 0)



 )
 ){

  if(t2p->pdf_compression == T2P_COMPRESS_G4){
   buffer= (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
   if(buffer==((void *)0)){
    TIFFError("tiff2pdf",
     "Can't allocate %lu bytes of memory "
                                        "for t2p_readwrite_pdf_image_tile, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
   TIFFReadRawTile(input, tile, (tdata_t) buffer, t2p->tiff_datasize);
   if (t2p->tiff_fillorder==2){
     TIFFReverseBits(buffer, t2p->tiff_datasize);
   }
   t2pWriteFile(output, (tdata_t) buffer, t2p->tiff_datasize);
   _TIFFfree(buffer);
   return(t2p->tiff_datasize);
  }


  if(t2p->pdf_compression == T2P_COMPRESS_ZIP){
   buffer= (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
   if(buffer==((void *)0)){
    TIFFError("tiff2pdf",
     "Can't allocate %lu bytes of memory "
                                        "for t2p_readwrite_pdf_image_tile, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
   TIFFReadRawTile(input, tile, (tdata_t) buffer, t2p->tiff_datasize);
   if (t2p->tiff_fillorder==2){
     TIFFReverseBits(buffer, t2p->tiff_datasize);
   }
   t2pWriteFile(output, (tdata_t) buffer, t2p->tiff_datasize);
   _TIFFfree(buffer);
   return(t2p->tiff_datasize);
  }
# 2789 "tiff2pdf.c"
  (void)0;
 }

 if(t2p->pdf_sample==T2P_SAMPLE_NOTHING){
  buffer = (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
  if(buffer==((void *)0)){
   TIFFError("tiff2pdf",
    "Can't allocate %lu bytes of memory for "
                                "t2p_readwrite_pdf_image_tile, %s",
    (unsigned long) t2p->tiff_datasize,
    TIFFFileName(input));
   t2p->t2p_error = T2P_ERR_ERROR;
   return(0);
  }

  read = TIFFReadEncodedTile(
   input,
   tile,
   (tdata_t) &buffer[bufferoffset],
   t2p->tiff_datasize);
  if(read==-1){
   TIFFError("tiff2pdf",
    "Error on decoding tile %u of %s",
    tile,
    TIFFFileName(input));
   _TIFFfree(buffer);
   t2p->t2p_error=T2P_ERR_ERROR;
   return(0);
  }

 } else {

  if(t2p->pdf_sample == T2P_SAMPLE_PLANAR_SEPARATE_TO_CONTIG){
   septilesize=TIFFTileSize(input);
   septilecount=TIFFNumberOfTiles(input);
   tilesize=septilesize*t2p->tiff_samplesperpixel;
   tilecount=septilecount/t2p->tiff_samplesperpixel;
   buffer = (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
   if(buffer==((void *)0)){
    TIFFError("tiff2pdf",
     "Can't allocate %lu bytes of memory "
                                        "for t2p_readwrite_pdf_image_tile, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
   samplebuffer = (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
   if(samplebuffer==((void *)0)){
    TIFFError("tiff2pdf",
     "Can't allocate %lu bytes of memory "
                                        "for t2p_readwrite_pdf_image_tile, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
   samplebufferoffset=0;
   for(i=0;i<t2p->tiff_samplesperpixel;i++){
    read =
     TIFFReadEncodedTile(input,
      tile + i*tilecount,
      (tdata_t) &(samplebuffer[samplebufferoffset]),
      septilesize);
    if(read==-1){
     TIFFError("tiff2pdf",
      "Error on decoding tile %u of %s",
      tile + i*tilecount,
      TIFFFileName(input));
      _TIFFfree(samplebuffer);
      _TIFFfree(buffer);
     t2p->t2p_error=T2P_ERR_ERROR;
     return(0);
    }
    samplebufferoffset+=read;
   }
   t2p_sample_planar_separate_to_contig(
    t2p,
    &(buffer[bufferoffset]),
    samplebuffer,
    samplebufferoffset);
   bufferoffset+=samplebufferoffset;
   _TIFFfree(samplebuffer);
  }

  if(buffer==((void *)0)){
   buffer = (unsigned char*) _TIFFmalloc(t2p->tiff_datasize);
   if(buffer==((void *)0)){
    TIFFError("tiff2pdf",
     "Can't allocate %lu bytes of memory "
                                        "for t2p_readwrite_pdf_image_tile, %s",
     (unsigned long) t2p->tiff_datasize,
     TIFFFileName(input));
    t2p->t2p_error = T2P_ERR_ERROR;
    return(0);
   }
   read = TIFFReadEncodedTile(
    input,
    tile,
    (tdata_t) &buffer[bufferoffset],
    t2p->tiff_datasize);
   if(read==-1){
    TIFFError("tiff2pdf",
     "Error on decoding tile %u of %s",
     tile,
     TIFFFileName(input));
    _TIFFfree(buffer);
    t2p->t2p_error=T2P_ERR_ERROR;
    return(0);
   }
  }

  if(t2p->pdf_sample & T2P_SAMPLE_RGBA_TO_RGB){
   t2p->tiff_datasize=t2p_sample_rgba_to_rgb(
    (tdata_t)buffer,
    t2p->tiff_tiles[t2p->pdf_page].tiles_tilewidth
    *t2p->tiff_tiles[t2p->pdf_page].tiles_tilelength);
  }

  if(t2p->pdf_sample & T2P_SAMPLE_RGBAA_TO_RGB){
   t2p->tiff_datasize=t2p_sample_rgbaa_to_rgb(
    (tdata_t)buffer,
    t2p->tiff_tiles[t2p->pdf_page].tiles_tilewidth
    *t2p->tiff_tiles[t2p->pdf_page].tiles_tilelength);
  }

  if(t2p->pdf_sample & T2P_SAMPLE_YCBCR_TO_RGB){
   TIFFError("tiff2pdf",
    "No support for YCbCr to RGB in tile for %s",
    TIFFFileName(input));
   _TIFFfree(buffer);
   t2p->t2p_error = T2P_ERR_ERROR;
   return(0);
  }

  if(t2p->pdf_sample & T2P_SAMPLE_LAB_SIGNED_TO_UNSIGNED){
   t2p->tiff_datasize=t2p_sample_lab_signed_to_unsigned(
    (tdata_t)buffer,
    t2p->tiff_tiles[t2p->pdf_page].tiles_tilewidth
    *t2p->tiff_tiles[t2p->pdf_page].tiles_tilelength);
  }
 }

 if(t2p_tile_is_right_edge(t2p->tiff_tiles[t2p->pdf_page], tile) != 0){
  t2p_tile_collapse_left(
   buffer,
   TIFFTileRowSize(input),
   t2p->tiff_tiles[t2p->pdf_page].tiles_tilewidth,
   t2p->tiff_tiles[t2p->pdf_page].tiles_edgetilewidth,
   t2p->tiff_tiles[t2p->pdf_page].tiles_tilelength);
 }


 t2p_disable(output);
 TIFFSetField(output, 262, t2p->tiff_photometric);
 TIFFSetField(output, 258, t2p->tiff_bitspersample);
 TIFFSetField(output, 277, t2p->tiff_samplesperpixel);
 if(t2p_tile_is_right_edge(t2p->tiff_tiles[t2p->pdf_page], tile) == 0){
  TIFFSetField(
   output,
   256,
   t2p->tiff_tiles[t2p->pdf_page].tiles_tilewidth);
 } else {
  TIFFSetField(
   output,
   256,
   t2p->tiff_tiles[t2p->pdf_page].tiles_edgetilewidth);
 }
 if(t2p_tile_is_bottom_edge(t2p->tiff_tiles[t2p->pdf_page], tile) == 0){
  TIFFSetField(
   output,
   257,
   t2p->tiff_tiles[t2p->pdf_page].tiles_tilelength);
  TIFFSetField(
   output,
   278,
   t2p->tiff_tiles[t2p->pdf_page].tiles_tilelength);
 } else {
  TIFFSetField(
   output,
   257,
   t2p->tiff_tiles[t2p->pdf_page].tiles_edgetilelength);
  TIFFSetField(
   output,
   278,
   t2p->tiff_tiles[t2p->pdf_page].tiles_edgetilelength);
 }
 TIFFSetField(output, 284, 1);
 TIFFSetField(output, 266, 1);

 switch(t2p->pdf_compression){
 case T2P_COMPRESS_NONE:
  TIFFSetField(output, 259, 1);
  break;

 case T2P_COMPRESS_G4:
  TIFFSetField(output, 259, 4);
  break;
# 3025 "tiff2pdf.c"
 case T2P_COMPRESS_ZIP:
  TIFFSetField(output, 259, 32946);
  if(t2p->pdf_defaultcompressionquality%100 != 0){
   TIFFSetField(output,
    317,
    t2p->pdf_defaultcompressionquality % 100);
  }
  if(t2p->pdf_defaultcompressionquality/100 != 0){
   TIFFSetField(output,
    65557,
    (t2p->pdf_defaultcompressionquality / 100));
  }
  break;

 default:
  break;
 }

 t2p_enable(output);
 t2p->outputwritten = 0;
 bufferoffset = TIFFWriteEncodedStrip(output, (tstrip_t) 0, buffer,
          TIFFStripSize(output));
 if (buffer != ((void *)0)) {
  _TIFFfree(buffer);
  buffer = ((void *)0);
 }
 if (bufferoffset == -1) {
  TIFFError("tiff2pdf",
     "Error writing encoded tile to output PDF %s",
     TIFFFileName(output));
  t2p->t2p_error = T2P_ERR_ERROR;
  return(0);
 }

 written = t2p->outputwritten;

 return(written);
}
# 3405 "tiff2pdf.c"
void t2p_tile_collapse_left(
 tdata_t buffer,
 tsize_t scanwidth,
 uint32 tilewidth,
 uint32 edgetilewidth,
 uint32 tilelength){

 uint32 i=0;
 tsize_t edgescanwidth=0;

 edgescanwidth = (scanwidth * edgetilewidth + (tilewidth - 1))/ tilewidth;
 for(i=i;i<tilelength;i++){
  _TIFFmemcpy(
   &(((char*)buffer)[edgescanwidth*i]),
   &(((char*)buffer)[scanwidth*i]),
   edgescanwidth);
 }

 return;
}
# 3433 "tiff2pdf.c"
void
t2p_write_advance_directory(T2P* t2p, TIFF* output)
{
 t2p_disable(output);
 if(!TIFFWriteDirectory(output)){
  TIFFError("tiff2pdf",
   "Error writing virtual directory to output PDF %s",
   TIFFFileName(output));
  t2p->t2p_error = T2P_ERR_ERROR;
  return;
 }
 t2p_enable(output);
 return;
}

tsize_t t2p_sample_planar_separate_to_contig(
           T2P* t2p,
           unsigned char* buffer,
           unsigned char* samplebuffer,
           tsize_t samplebuffersize){

 tsize_t stride=0;
 tsize_t i=0;
 tsize_t j=0;

 stride=samplebuffersize/t2p->tiff_samplesperpixel;
 for(i=0;i<stride;i++){
  for(j=0;j<t2p->tiff_samplesperpixel;j++){
   buffer[i*t2p->tiff_samplesperpixel + j] = samplebuffer[i + j*stride];
  }
 }

 return(samplebuffersize);
}

tsize_t t2p_sample_realize_palette(T2P* t2p, unsigned char* buffer){

 uint32 sample_count=0;
 uint16 component_count=0;
 uint32 palette_offset=0;
 uint32 sample_offset=0;
 uint32 i=0;
 uint32 j=0;
 sample_count=t2p->tiff_width*t2p->tiff_length;
 component_count=t2p->tiff_samplesperpixel;

 for(i=sample_count;i>0;i--){
  palette_offset=buffer[i-1] * component_count;
  sample_offset= (i-1) * component_count;
  for(j=0;j<component_count;j++){
   buffer[sample_offset+j]=t2p->pdf_palette[palette_offset+j];
  }
 }

 return(0);
}






tsize_t t2p_sample_abgr_to_rgb(tdata_t data, uint32 samplecount)
{
 uint32 i=0;
 uint32 sample=0;

 for(i=0;i<samplecount;i++){
  sample=((uint32*)data)[i];
  ((char*)data)[i*3]= (char) (sample & 0xff);
  ((char*)data)[i*3+1]= (char) ((sample>>8) & 0xff);
  ((char*)data)[i*3+2]= (char) ((sample>>16) & 0xff);
 }

 return(i*3);
}






tsize_t
t2p_sample_rgbaa_to_rgb(tdata_t data, uint32 samplecount)
{
 uint32 i;

 for(i = 0; i < samplecount; i++)
  memcpy((uint8*)data + i * 3, (uint8*)data + i * 4, 3);

 return(i * 3);
}






tsize_t
t2p_sample_rgba_to_rgb(tdata_t data, uint32 samplecount)
{
 uint32 i = 0;
 uint32 sample = 0;
 uint8 alpha = 0;

 for (i = 0; i < samplecount; i++) {
  sample=((uint32*)data)[i];
  alpha=(uint8)((255 - (sample & 0xff)));
  ((uint8 *)data)[i * 3] = (uint8) ((sample >> 24) & 0xff) + alpha;
  ((uint8 *)data)[i * 3 + 1] = (uint8) ((sample >> 16) & 0xff) + alpha;
  ((uint8 *)data)[i * 3 + 2] = (uint8) ((sample >> 8) & 0xff) + alpha;

 }

 return (i * 3);
}






tsize_t t2p_sample_lab_signed_to_unsigned(tdata_t buffer, uint32 samplecount){

 uint32 i=0;

 for(i=0;i<samplecount;i++){
  if( (((unsigned char*)buffer)[(i*3)+1] & 0x80) !=0){
   ((unsigned char*)buffer)[(i*3)+1] =
    (unsigned char)(0x80 + ((char*)buffer)[(i*3)+1]);
  } else {
   ((unsigned char*)buffer)[(i*3)+1] |= 0x80;
  }
  if( (((unsigned char*)buffer)[(i*3)+2] & 0x80) !=0){
   ((unsigned char*)buffer)[(i*3)+2] =
    (unsigned char)(0x80 + ((char*)buffer)[(i*3)+2]);
  } else {
   ((unsigned char*)buffer)[(i*3)+2] |= 0x80;
  }
 }

 return(samplecount*3);
}





tsize_t t2p_write_pdf_header(T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 buflen=sprintf(buffer, "%%PDF-%u.%u ", t2p->pdf_majorversion&0xff, t2p->pdf_minorversion&0xff);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t)"\n%\342\343\317\323\n", 7);

 return(written);
}





tsize_t t2p_write_pdf_obj_start(uint32 number, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 buflen=sprintf(buffer, "%lu", (unsigned long)number);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen );
 written += t2pWriteFile(output, (tdata_t) " 0 obj\n", 7);

 return(written);
}





tsize_t t2p_write_pdf_obj_end(TIFF* output){

 tsize_t written=0;

 written += t2pWriteFile(output, (tdata_t) "endobj\n", 7);

 return(written);
}





tsize_t t2p_write_pdf_name(unsigned char* name, TIFF* output){

 tsize_t written=0;
 uint32 i=0;
 char buffer[64];
 uint16 nextchar=0;
 size_t namelen=0;

 namelen = strlen((char *)name);
 if (namelen>126) {
  namelen=126;
 }
 written += t2pWriteFile(output, (tdata_t) "/", 1);
 for (i=0;i<namelen;i++){
  if ( ((unsigned char)name[i]) < 0x21){
   sprintf(buffer, "#%.2X", name[i]);
   buffer[sizeof(buffer) - 1] = '\0';
   written += t2pWriteFile(output, (tdata_t) buffer, 3);
   nextchar=1;
  }
  if ( ((unsigned char)name[i]) > 0x7E){
   sprintf(buffer, "#%.2X", name[i]);
   buffer[sizeof(buffer) - 1] = '\0';
   written += t2pWriteFile(output, (tdata_t) buffer, 3);
   nextchar=1;
  }
  if (nextchar==0){
   switch (name[i]){
    case 0x23:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x25:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x28:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x29:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x2F:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x3C:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x3E:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x5B:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x5D:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x7B:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    case 0x7D:
     sprintf(buffer, "#%.2X", name[i]);
     buffer[sizeof(buffer) - 1] = '\0';
     written += t2pWriteFile(output, (tdata_t) buffer, 3);
     break;
    default:
     written += t2pWriteFile(output, (tdata_t) &name[i], 1);
   }
  }
  nextchar=0;
 }
 written += t2pWriteFile(output, (tdata_t) " ", 1);

 return(written);
}





tsize_t t2p_write_pdf_string(unsigned char* pdfstr, TIFF* output){

 tsize_t written = 0;
 uint32 i = 0;
 char buffer[64];
 size_t len = 0;

 len = strlen((char *)pdfstr);
 written += t2pWriteFile(output, (tdata_t) "(", 1);
 for (i=0; i<len; i++) {
  if((pdfstr[i]&0x80) || (pdfstr[i]==127) || (pdfstr[i]<32)){
   sprintf(buffer, "\\%.3hho", pdfstr[i]);
   buffer[sizeof(buffer) - 1] = '\0';
   written += t2pWriteFile(output, (tdata_t) buffer, 4);
  } else {
   switch (pdfstr[i]){
    case 0x08:
     written += t2pWriteFile(output, (tdata_t) "\\b", 2);
     break;
    case 0x09:
     written += t2pWriteFile(output, (tdata_t) "\\t", 2);
     break;
    case 0x0A:
     written += t2pWriteFile(output, (tdata_t) "\\n", 2);
     break;
    case 0x0C:
     written += t2pWriteFile(output, (tdata_t) "\\f", 2);
     break;
    case 0x0D:
     written += t2pWriteFile(output, (tdata_t) "\\r", 2);
     break;
    case 0x28:
     written += t2pWriteFile(output, (tdata_t) "\\(", 2);
     break;
    case 0x29:
     written += t2pWriteFile(output, (tdata_t) "\\)", 2);
     break;
    case 0x5C:
     written += t2pWriteFile(output, (tdata_t) "\\\\", 2);
     break;
    default:
     written += t2pWriteFile(output, (tdata_t) &pdfstr[i], 1);
   }
  }
 }
 written += t2pWriteFile(output, (tdata_t) ") ", 1);

 return(written);
}






tsize_t t2p_write_pdf_stream(tdata_t buffer, tsize_t len, TIFF* output){

 tsize_t written=0;

 written += t2pWriteFile(output, (tdata_t) buffer, len);

 return(written);
}





tsize_t t2p_write_pdf_stream_start(TIFF* output){

 tsize_t written=0;

 written += t2pWriteFile(output, (tdata_t) "stream\n", 7);

 return(written);
}





tsize_t t2p_write_pdf_stream_end(TIFF* output){

 tsize_t written=0;

 written += t2pWriteFile(output, (tdata_t) "\nendstream\n", 11);

 return(written);
}





tsize_t t2p_write_pdf_stream_dict(tsize_t len, uint32 number, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 written += t2pWriteFile(output, (tdata_t) "/Length ", 8);
 if(len!=0){
  written += t2p_write_pdf_stream_length(len, output);
 } else {
  buflen=sprintf(buffer, "%lu", (unsigned long)number);
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " 0 R \n", 6);
 }

 return(written);
}





tsize_t t2p_write_pdf_stream_dict_start(TIFF* output){

 tsize_t written=0;

 written += t2pWriteFile(output, (tdata_t) "<< \n", 4);

 return(written);
}





tsize_t t2p_write_pdf_stream_dict_end(TIFF* output){

 tsize_t written=0;

 written += t2pWriteFile(output, (tdata_t) " >>\n", 4);

 return(written);
}





tsize_t t2p_write_pdf_stream_length(tsize_t len, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 buflen=sprintf(buffer, "%lu", (unsigned long)len);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) "\n", 1);

 return(written);
}





tsize_t t2p_write_pdf_catalog(T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 written += t2pWriteFile(output,
  (tdata_t)"<< \n/Type /Catalog \n/Pages ",
  27);
 buflen=sprintf(buffer, "%lu", (unsigned long)t2p->pdf_pages);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen );
 written += t2pWriteFile(output, (tdata_t) " 0 R \n", 6);
 if(t2p->pdf_fitwindow){
  written += t2pWriteFile(output,
   (tdata_t) "/ViewerPreferences <</FitWindow true>>\n",
   39);
 }
 written += t2pWriteFile(output, (tdata_t)">>\n", 3);

 return(written);
}





tsize_t t2p_write_pdf_info(T2P* t2p, TIFF* input, TIFF* output){

 tsize_t written = 0;
 unsigned char* info;
 char buffer[512];
 int buflen = 0;

 if(t2p->pdf_datetime==((void *)0)){
  t2p_pdf_tifftime(t2p, input);
 }
 if(strlen((char *)t2p->pdf_datetime) > 0){
  written += t2pWriteFile(output, (tdata_t) "<< \n/CreationDate ", 18);
  written += t2p_write_pdf_string(t2p->pdf_datetime, output);
  written += t2pWriteFile(output, (tdata_t) "\n/ModDate ", 10);
  written += t2p_write_pdf_string(t2p->pdf_datetime, output);
 }
 written += t2pWriteFile(output, (tdata_t) "\n/Producer ", 11);
 _TIFFmemset((tdata_t)buffer, 0x00, sizeof(buffer));
 buflen = sprintf(buffer, "libtiff / tiff2pdf - %d", 20100611);
 written += t2p_write_pdf_string((unsigned char*)buffer, output);
 written += t2pWriteFile(output, (tdata_t) "\n", 1);
 if(t2p->pdf_creator != ((void *)0)){
  if(strlen((char *)t2p->pdf_creator)>0){
   if(strlen((char *)t2p->pdf_creator) > 511) {
    t2p->pdf_creator[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Creator ", 9);
   written += t2p_write_pdf_string(t2p->pdf_creator, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 } else{
  if( TIFFGetField(input, 305, &info) != 0){
   if(strlen((char *)info) > 511) {
    info[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Creator ", 9);
   written += t2p_write_pdf_string(info, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 }
 if(t2p->pdf_author != ((void *)0)) {
  if(strlen((char *)t2p->pdf_author) > 0) {
   if(strlen((char *)t2p->pdf_author) > 511) {
    t2p->pdf_author[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Author ", 8);
   written += t2p_write_pdf_string(t2p->pdf_author, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 } else{
  if( TIFFGetField(input, 315, &info) != 0){
   if(strlen((char *)info) > 511) {
    info[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Author ", 8);
   written += t2p_write_pdf_string(info, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  } else if ( TIFFGetField(input, 33432, &info) != 0){
   if(strlen((char *)info) > 511) {
    info[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Author ", 8);
   written += t2p_write_pdf_string(info, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 }
 if(t2p->pdf_title != ((void *)0)) {
  if(strlen((char *)t2p->pdf_title) > 0) {
   if(strlen((char *)t2p->pdf_title) > 511) {
    t2p->pdf_title[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Title ", 7);
   written += t2p_write_pdf_string(t2p->pdf_title, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 } else{
  if( TIFFGetField(input, 269, &info) != 0){
   if(strlen((char *)info) > 511) {
    info[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Title ", 7);
   written += t2p_write_pdf_string(info, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 }
 if(t2p->pdf_subject != ((void *)0)) {
  if(strlen((char *)t2p->pdf_subject) > 0) {
   if(strlen((char *)t2p->pdf_subject) > 511) {
    t2p->pdf_subject[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Subject ", 9);
   written += t2p_write_pdf_string(t2p->pdf_subject, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 } else {
  if(TIFFGetField(input, 270, &info) != 0) {
   if(strlen((char *)info) > 511) {
    info[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Subject ", 9);
   written += t2p_write_pdf_string(info, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 }
 if(t2p->pdf_keywords != ((void *)0)) {
  if(strlen((char *)t2p->pdf_keywords) > 0) {
   if(strlen((char *)t2p->pdf_keywords) > 511) {
    t2p->pdf_keywords[512] = '\0';
   }
   written += t2pWriteFile(output, (tdata_t) "/Keywords ", 10);
   written += t2p_write_pdf_string(t2p->pdf_keywords, output);
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
 }
 written += t2pWriteFile(output, (tdata_t) ">> \n", 4);

 return(written);
}






void t2p_pdf_currenttime(T2P* t2p)
{

 struct tm* currenttime;
 time_t timenow;

 timenow=time(0);
 currenttime=localtime(&timenow);
 sprintf((char *)t2p->pdf_datetime, "D:%.4d%.2d%.2d%.2d%.2d%.2d",
  (currenttime->tm_year+1900) % 65536,
  (currenttime->tm_mon+1) % 256,
  (currenttime->tm_mday) % 256,
  (currenttime->tm_hour) % 256,
  (currenttime->tm_min) % 256,
  (currenttime->tm_sec) % 256);

 return;
}






void t2p_pdf_tifftime(T2P* t2p, TIFF* input){

 char* datetime;

 t2p->pdf_datetime = (unsigned char*) _TIFFmalloc(19);
 if(t2p->pdf_datetime == ((void *)0)){
  TIFFError("tiff2pdf",
  "Can't allocate %u bytes of memory for t2p_pdf_tiff_time", 17);
  t2p->t2p_error = T2P_ERR_ERROR;
  return;
 }
 t2p->pdf_datetime[16] = '\0';
 if( TIFFGetField(input, 306, &datetime) != 0
     && (strlen(datetime) >= 19) ){
  t2p->pdf_datetime[0]='D';
  t2p->pdf_datetime[1]=':';
  t2p->pdf_datetime[2]=datetime[0];
  t2p->pdf_datetime[3]=datetime[1];
  t2p->pdf_datetime[4]=datetime[2];
  t2p->pdf_datetime[5]=datetime[3];
  t2p->pdf_datetime[6]=datetime[5];
  t2p->pdf_datetime[7]=datetime[6];
  t2p->pdf_datetime[8]=datetime[8];
  t2p->pdf_datetime[9]=datetime[9];
  t2p->pdf_datetime[10]=datetime[11];
  t2p->pdf_datetime[11]=datetime[12];
  t2p->pdf_datetime[12]=datetime[14];
  t2p->pdf_datetime[13]=datetime[15];
  t2p->pdf_datetime[14]=datetime[17];
  t2p->pdf_datetime[15]=datetime[18];
 } else {
  t2p_pdf_currenttime(t2p);
 }

 return;
}





tsize_t t2p_write_pdf_pages(T2P* t2p, TIFF* output)
{
 tsize_t written=0;
 tdir_t i=0;
 char buffer[16];
 int buflen=0;

 int page=0;
 written += t2pWriteFile(output,
  (tdata_t) "<< \n/Type /Pages \n/Kids [ ", 26);
 page = t2p->pdf_pages+1;
 for (i=0;i<t2p->tiff_pagecount;i++){
  buflen=sprintf(buffer, "%d", page);
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " 0 R ", 5);
  if ( ((i+1)%8)==0 ) {
   written += t2pWriteFile(output, (tdata_t) "\n", 1);
  }
  page +=3;
  page += t2p->tiff_pages[i].page_extra;
  if(t2p->tiff_pages[i].page_tilecount>0){
   page += (2 * t2p->tiff_pages[i].page_tilecount);
  } else {
   page +=2;
  }
 }
 written += t2pWriteFile(output, (tdata_t) "] \n/Count ", 10);
 _TIFFmemset(buffer, 0x00, 16);
 buflen=sprintf(buffer, "%d", t2p->tiff_pagecount);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) " \n>> \n", 6);

 return(written);
}





tsize_t t2p_write_pdf_page(uint32 object, T2P* t2p, TIFF* output){

 unsigned int i=0;
 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 written += t2pWriteFile(output, (tdata_t) "<<\n/Type /Page \n/Parent ", 24);
 buflen=sprintf(buffer, "%lu", (unsigned long)t2p->pdf_pages);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) " 0 R \n", 6);
 written += t2pWriteFile(output, (tdata_t) "/MediaBox [", 11);
 buflen=sprintf(buffer, "%.4f",t2p->pdf_mediabox.x1);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) " ", 1);
 buflen=sprintf(buffer, "%.4f",t2p->pdf_mediabox.y1);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) " ", 1);
 buflen=sprintf(buffer, "%.4f",t2p->pdf_mediabox.x2);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) " ", 1);
 buflen=sprintf(buffer, "%.4f",t2p->pdf_mediabox.y2);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) "] \n", 3);
 written += t2pWriteFile(output, (tdata_t) "/Contents ", 10);
 buflen=sprintf(buffer, "%lu", (unsigned long)(object + 1));
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) " 0 R \n", 6);
 written += t2pWriteFile(output, (tdata_t) "/Resources << \n", 15);
 if( t2p->tiff_tiles[t2p->pdf_page].tiles_tilecount != 0 ){
  written += t2pWriteFile(output, (tdata_t) "/XObject <<\n", 12);
  for(i=0;i<t2p->tiff_tiles[t2p->pdf_page].tiles_tilecount;i++){
   written += t2pWriteFile(output, (tdata_t) "/Im", 3);
   buflen = sprintf(buffer, "%u", t2p->pdf_page+1);
   written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   written += t2pWriteFile(output, (tdata_t) "_", 1);
   buflen = sprintf(buffer, "%u", i+1);
   written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   written += t2pWriteFile(output, (tdata_t) " ", 1);
   buflen = sprintf(
    buffer,
    "%lu",
    (unsigned long)(object+3+(2*i)+t2p->tiff_pages[t2p->pdf_page].page_extra));
   written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   written += t2pWriteFile(output, (tdata_t) " 0 R ", 5);
   if(i%4==3){
    written += t2pWriteFile(output, (tdata_t) "\n", 1);
   }
  }
  written += t2pWriteFile(output, (tdata_t) ">>\n", 3);
 } else {
   written += t2pWriteFile(output, (tdata_t) "/XObject <<\n", 12);
   written += t2pWriteFile(output, (tdata_t) "/Im", 3);
   buflen = sprintf(buffer, "%u", t2p->pdf_page+1);
   written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   written += t2pWriteFile(output, (tdata_t) " ", 1);
   buflen = sprintf(
    buffer,
    "%lu",
    (unsigned long)(object+3+(2*i)+t2p->tiff_pages[t2p->pdf_page].page_extra));
   written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   written += t2pWriteFile(output, (tdata_t) " 0 R ", 5);
  written += t2pWriteFile(output, (tdata_t) ">>\n", 3);
 }
 if(t2p->tiff_transferfunctioncount != 0) {
  written += t2pWriteFile(output, (tdata_t) "/ExtGState <<", 13);
  t2pWriteFile(output, (tdata_t) "/GS1 ", 5);
  buflen = sprintf(
   buffer,
   "%lu",
   (unsigned long)(object + 3));
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " 0 R ", 5);
  written += t2pWriteFile(output, (tdata_t) ">> \n", 4);
 }
 written += t2pWriteFile(output, (tdata_t) "/ProcSet [ ", 11);
 if(t2p->pdf_colorspace == T2P_CS_BILEVEL
  || t2p->pdf_colorspace == T2P_CS_GRAY
  ){
  written += t2pWriteFile(output, (tdata_t) "/ImageB ", 8);
 } else {
  written += t2pWriteFile(output, (tdata_t) "/ImageC ", 8);
  if(t2p->pdf_colorspace & T2P_CS_PALETTE){
   written += t2pWriteFile(output, (tdata_t) "/ImageI ", 8);
  }
 }
 written += t2pWriteFile(output, (tdata_t) "]\n>>\n>>\n", 8);

 return(written);
}





void t2p_compose_pdf_page(T2P* t2p){

 uint32 i=0;
 uint32 i2=0;
 T2P_TILE* tiles=((void *)0);
 T2P_BOX* boxp=((void *)0);
 uint32 tilecountx=0;
 uint32 tilecounty=0;
 uint32 tilewidth=0;
 uint32 tilelength=0;
 int istiled=0;
 float f=0;

 t2p->pdf_xres = t2p->tiff_xres;
 t2p->pdf_yres = t2p->tiff_yres;
 if(t2p->pdf_overrideres) {
  t2p->pdf_xres = t2p->pdf_defaultxres;
  t2p->pdf_yres = t2p->pdf_defaultyres;
 }
 if(t2p->pdf_xres == 0.0)
  t2p->pdf_xres = t2p->pdf_defaultxres;
 if(t2p->pdf_yres == 0.0)
  t2p->pdf_yres = t2p->pdf_defaultyres;
 if (t2p->tiff_resunit != 3
     && t2p->tiff_resunit != 2) {
  t2p->pdf_imagewidth = ((float)(t2p->tiff_width))/t2p->pdf_xres;
  t2p->pdf_imagelength = ((float)(t2p->tiff_length))/t2p->pdf_yres;
 } else {
  t2p->pdf_imagewidth =
   ((float)(t2p->tiff_width))*72.0F/t2p->pdf_xres;
  t2p->pdf_imagelength =
   ((float)(t2p->tiff_length))*72.0F/t2p->pdf_yres;
 }
 if(t2p->pdf_overridepagesize != 0) {
  t2p->pdf_pagewidth = t2p->pdf_defaultpagewidth;
  t2p->pdf_pagelength = t2p->pdf_defaultpagelength;
 } else {
  t2p->pdf_pagewidth = t2p->pdf_imagewidth;
  t2p->pdf_pagelength = t2p->pdf_imagelength;
 }
 t2p->pdf_mediabox.x1=0.0;
 t2p->pdf_mediabox.y1=0.0;
 t2p->pdf_mediabox.x2=t2p->pdf_pagewidth;
 t2p->pdf_mediabox.y2=t2p->pdf_pagelength;
 t2p->pdf_imagebox.x1=0.0;
 t2p->pdf_imagebox.y1=0.0;
 t2p->pdf_imagebox.x2=t2p->pdf_imagewidth;
 t2p->pdf_imagebox.y2=t2p->pdf_imagelength;
 if(t2p->pdf_overridepagesize!=0){
  t2p->pdf_imagebox.x1+=((t2p->pdf_pagewidth-t2p->pdf_imagewidth)/2.0F);
  t2p->pdf_imagebox.y1+=((t2p->pdf_pagelength-t2p->pdf_imagelength)/2.0F);
  t2p->pdf_imagebox.x2+=((t2p->pdf_pagewidth-t2p->pdf_imagewidth)/2.0F);
  t2p->pdf_imagebox.y2+=((t2p->pdf_pagelength-t2p->pdf_imagelength)/2.0F);
 }
 if(t2p->tiff_orientation > 4){
  f=t2p->pdf_mediabox.x2;
  t2p->pdf_mediabox.x2=t2p->pdf_mediabox.y2;
  t2p->pdf_mediabox.y2=f;
 }
 istiled=((t2p->tiff_tiles[t2p->pdf_page]).tiles_tilecount==0) ? 0 : 1;
 if(istiled==0){
  t2p_compose_pdf_page_orient(&(t2p->pdf_imagebox), t2p->tiff_orientation);
  return;
 } else {
  tilewidth=(t2p->tiff_tiles[t2p->pdf_page]).tiles_tilewidth;
  tilelength=(t2p->tiff_tiles[t2p->pdf_page]).tiles_tilelength;
  tilecountx=(t2p->tiff_width +
   tilewidth -1)/
   tilewidth;
  (t2p->tiff_tiles[t2p->pdf_page]).tiles_tilecountx=tilecountx;
  tilecounty=(t2p->tiff_length +
   tilelength -1)/
   tilelength;
  (t2p->tiff_tiles[t2p->pdf_page]).tiles_tilecounty=tilecounty;
  (t2p->tiff_tiles[t2p->pdf_page]).tiles_edgetilewidth=
   t2p->tiff_width % tilewidth;
  (t2p->tiff_tiles[t2p->pdf_page]).tiles_edgetilelength=
   t2p->tiff_length % tilelength;
  tiles=(t2p->tiff_tiles[t2p->pdf_page]).tiles_tiles;
  for(i2=0;i2<tilecounty-1;i2++){
   for(i=0;i<tilecountx-1;i++){
    boxp=&(tiles[i2*tilecountx+i].tile_box);
    boxp->x1 =
     t2p->pdf_imagebox.x1
     + ((float)(t2p->pdf_imagewidth * i * tilewidth)
     / (float)t2p->tiff_width);
    boxp->x2 =
     t2p->pdf_imagebox.x1
     + ((float)(t2p->pdf_imagewidth * (i+1) * tilewidth)
     / (float)t2p->tiff_width);
    boxp->y1 =
     t2p->pdf_imagebox.y2
     - ((float)(t2p->pdf_imagelength * (i2+1) * tilelength)
     / (float)t2p->tiff_length);
    boxp->y2 =
     t2p->pdf_imagebox.y2
     - ((float)(t2p->pdf_imagelength * i2 * tilelength)
     / (float)t2p->tiff_length);
   }
   boxp=&(tiles[i2*tilecountx+i].tile_box);
   boxp->x1 =
    t2p->pdf_imagebox.x1
    + ((float)(t2p->pdf_imagewidth * i * tilewidth)
    / (float)t2p->tiff_width);
   boxp->x2 = t2p->pdf_imagebox.x2;
   boxp->y1 =
    t2p->pdf_imagebox.y2
    - ((float)(t2p->pdf_imagelength * (i2+1) * tilelength)
    / (float)t2p->tiff_length);
   boxp->y2 =
    t2p->pdf_imagebox.y2
    - ((float)(t2p->pdf_imagelength * i2 * tilelength)
    / (float)t2p->tiff_length);
  }
  for(i=0;i<tilecountx-1;i++){
   boxp=&(tiles[i2*tilecountx+i].tile_box);
   boxp->x1 =
    t2p->pdf_imagebox.x1
    + ((float)(t2p->pdf_imagewidth * i * tilewidth)
    / (float)t2p->tiff_width);
   boxp->x2 =
    t2p->pdf_imagebox.x1
    + ((float)(t2p->pdf_imagewidth * (i+1) * tilewidth)
    / (float)t2p->tiff_width);
   boxp->y1 = t2p->pdf_imagebox.y1;
   boxp->y2 =
    t2p->pdf_imagebox.y2
    - ((float)(t2p->pdf_imagelength * i2 * tilelength)
    / (float)t2p->tiff_length);
  }
  boxp=&(tiles[i2*tilecountx+i].tile_box);
  boxp->x1 =
   t2p->pdf_imagebox.x1
   + ((float)(t2p->pdf_imagewidth * i * tilewidth)
   / (float)t2p->tiff_width);
  boxp->x2 = t2p->pdf_imagebox.x2;
  boxp->y1 = t2p->pdf_imagebox.y1;
  boxp->y2 =
   t2p->pdf_imagebox.y2
   - ((float)(t2p->pdf_imagelength * i2 * tilelength)
   / (float)t2p->tiff_length);
 }
 if(t2p->tiff_orientation==0 || t2p->tiff_orientation==1){
  for(i=0;i<(t2p->tiff_tiles[t2p->pdf_page]).tiles_tilecount;i++){
   t2p_compose_pdf_page_orient( &(tiles[i].tile_box) , 0);
  }
  return;
 }
 for(i=0;i<(t2p->tiff_tiles[t2p->pdf_page]).tiles_tilecount;i++){
  boxp=&(tiles[i].tile_box);
  boxp->x1 -= t2p->pdf_imagebox.x1;
  boxp->x2 -= t2p->pdf_imagebox.x1;
  boxp->y1 -= t2p->pdf_imagebox.y1;
  boxp->y2 -= t2p->pdf_imagebox.y1;
  if(t2p->tiff_orientation==2 || t2p->tiff_orientation==3){
   boxp->x1 = t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1 - boxp->x1;
   boxp->x2 = t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1 - boxp->x2;
  }
  if(t2p->tiff_orientation==3 || t2p->tiff_orientation==4){
   boxp->y1 = t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1 - boxp->y1;
   boxp->y2 = t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1 - boxp->y2;
  }
  if(t2p->tiff_orientation==8 || t2p->tiff_orientation==5){
   boxp->y1 = t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1 - boxp->y1;
   boxp->y2 = t2p->pdf_imagebox.y2 - t2p->pdf_imagebox.y1 - boxp->y2;
  }
  if(t2p->tiff_orientation==5 || t2p->tiff_orientation==6){
   boxp->x1 = t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1 - boxp->x1;
   boxp->x2 = t2p->pdf_imagebox.x2 - t2p->pdf_imagebox.x1 - boxp->x2;
  }
  if(t2p->tiff_orientation > 4){
   f=boxp->x1;
   boxp->x1 = boxp->y1;
   boxp->y1 = f;
   f=boxp->x2;
   boxp->x2 = boxp->y2;
   boxp->y2 = f;
   t2p_compose_pdf_page_orient_flip(boxp, t2p->tiff_orientation);
  } else {
   t2p_compose_pdf_page_orient(boxp, t2p->tiff_orientation);
  }

 }

 return;
}

void t2p_compose_pdf_page_orient(T2P_BOX* boxp, uint16 orientation){

 float m1[9];
 float f=0.0;

 if( boxp->x1 > boxp->x2){
  f=boxp->x1;
  boxp->x1=boxp->x2;
  boxp->x2 = f;
 }
 if( boxp->y1 > boxp->y2){
  f=boxp->y1;
  boxp->y1=boxp->y2;
  boxp->y2 = f;
 }
 boxp->mat[0]=m1[0]=boxp->x2-boxp->x1;
 boxp->mat[1]=m1[1]=0.0;
 boxp->mat[2]=m1[2]=0.0;
 boxp->mat[3]=m1[3]=0.0;
 boxp->mat[4]=m1[4]=boxp->y2-boxp->y1;
 boxp->mat[5]=m1[5]=0.0;
 boxp->mat[6]=m1[6]=boxp->x1;
 boxp->mat[7]=m1[7]=boxp->y1;
 boxp->mat[8]=m1[8]=1.0;
 switch(orientation){
  case 0:
  case 1:
   break;
  case 2:
   boxp->mat[0]=0.0F-m1[0];
   boxp->mat[6]+=m1[0];
   break;
  case 3:
   boxp->mat[0]=0.0F-m1[0];
   boxp->mat[4]=0.0F-m1[4];
   boxp->mat[6]+=m1[0];
   boxp->mat[7]+=m1[4];
   break;
  case 4:
   boxp->mat[4]=0.0F-m1[4];
   boxp->mat[7]+=m1[4];
   break;
  case 5:
   boxp->mat[0]=0.0F;
   boxp->mat[1]=0.0F-m1[0];
   boxp->mat[3]=0.0F-m1[4];
   boxp->mat[4]=0.0F;
   boxp->mat[6]+=m1[4];
   boxp->mat[7]+=m1[0];
   break;
  case 6:
   boxp->mat[0]=0.0F;
   boxp->mat[1]=0.0F-m1[0];
   boxp->mat[3]=m1[4];
   boxp->mat[4]=0.0F;
   boxp->mat[7]+=m1[0];
   break;
  case 7:
   boxp->mat[0]=0.0F;
   boxp->mat[1]=m1[0];
   boxp->mat[3]=m1[4];
   boxp->mat[4]=0.0F;
   break;
  case 8:
   boxp->mat[0]=0.0F;
   boxp->mat[1]=m1[0];
   boxp->mat[3]=0.0F-m1[4];
   boxp->mat[4]=0.0F;
   boxp->mat[6]+=m1[4];
   break;
 }

 return;
}

void t2p_compose_pdf_page_orient_flip(T2P_BOX* boxp, uint16 orientation){

 float m1[9];
 float f=0.0;

 if( boxp->x1 > boxp->x2){
  f=boxp->x1;
  boxp->x1=boxp->x2;
  boxp->x2 = f;
 }
 if( boxp->y1 > boxp->y2){
  f=boxp->y1;
  boxp->y1=boxp->y2;
  boxp->y2 = f;
 }
 boxp->mat[0]=m1[0]=boxp->x2-boxp->x1;
 boxp->mat[1]=m1[1]=0.0F;
 boxp->mat[2]=m1[2]=0.0F;
 boxp->mat[3]=m1[3]=0.0F;
 boxp->mat[4]=m1[4]=boxp->y2-boxp->y1;
 boxp->mat[5]=m1[5]=0.0F;
 boxp->mat[6]=m1[6]=boxp->x1;
 boxp->mat[7]=m1[7]=boxp->y1;
 boxp->mat[8]=m1[8]=1.0F;
 switch(orientation){
  case 5:
   boxp->mat[0]=0.0F;
   boxp->mat[1]=0.0F-m1[4];
   boxp->mat[3]=0.0F-m1[0];
   boxp->mat[4]=0.0F;
   boxp->mat[6]+=m1[0];
   boxp->mat[7]+=m1[4];
   break;
  case 6:
   boxp->mat[0]=0.0F;
   boxp->mat[1]=0.0F-m1[4];
   boxp->mat[3]=m1[0];
   boxp->mat[4]=0.0F;
   boxp->mat[7]+=m1[4];
   break;
  case 7:
   boxp->mat[0]=0.0F;
   boxp->mat[1]=m1[4];
   boxp->mat[3]=m1[0];
   boxp->mat[4]=0.0F;
   break;
  case 8:
   boxp->mat[0]=0.0F;
   boxp->mat[1]=m1[4];
   boxp->mat[3]=0.0F-m1[0];
   boxp->mat[4]=0.0F;
   boxp->mat[6]+=m1[0];
   break;
 }

 return;
}





tsize_t t2p_write_pdf_page_content_stream(T2P* t2p, TIFF* output){

 tsize_t written=0;
 ttile_t i=0;
 char buffer[512];
 int buflen=0;
 T2P_BOX box;

 if(t2p->tiff_tiles[t2p->pdf_page].tiles_tilecount>0){
  for(i=0;i<t2p->tiff_tiles[t2p->pdf_page].tiles_tilecount; i++){
   box=t2p->tiff_tiles[t2p->pdf_page].tiles_tiles[i].tile_box;
   buflen=sprintf(buffer,
    "q %s %.4f %.4f %.4f %.4f %.4f %.4f cm /Im%d_%ld Do Q\n",
    t2p->tiff_transferfunctioncount?"/GS1 gs ":"",
    box.mat[0],
    box.mat[1],
    box.mat[3],
    box.mat[4],
    box.mat[6],
    box.mat[7],
    t2p->pdf_page + 1,
    (long)(i + 1));
   written += t2p_write_pdf_stream(buffer, buflen, output);
  }
 } else {
  box=t2p->pdf_imagebox;
  buflen=sprintf(buffer,
   "q %s %.4f %.4f %.4f %.4f %.4f %.4f cm /Im%d Do Q\n",
   t2p->tiff_transferfunctioncount?"/GS1 gs ":"",
   box.mat[0],
   box.mat[1],
   box.mat[3],
   box.mat[4],
   box.mat[6],
   box.mat[7],
   t2p->pdf_page+1);
  written += t2p_write_pdf_stream(buffer, buflen, output);
 }

 return(written);
}





tsize_t t2p_write_pdf_xobject_stream_dict(ttile_t tile,
            T2P* t2p,
            TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 written += t2p_write_pdf_stream_dict(0, t2p->pdf_xrefcount+1, output);
 written += t2pWriteFile(output,
  (tdata_t) "/Type /XObject \n/Subtype /Image \n/Name /Im",
  42);
 buflen=sprintf(buffer, "%u", t2p->pdf_page+1);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 if(tile != 0){
  written += t2pWriteFile(output, (tdata_t) "_", 1);
  buflen=sprintf(buffer, "%lu", (unsigned long)tile);
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 }
 written += t2pWriteFile(output, (tdata_t) "\n/Width ", 8);
 _TIFFmemset((tdata_t)buffer, 0x00, 16);
 if(tile==0){
  buflen=sprintf(buffer, "%lu", (unsigned long)t2p->tiff_width);
 } else {
  if(t2p_tile_is_right_edge(t2p->tiff_tiles[t2p->pdf_page], tile-1)!=0){
   buflen=sprintf(
    buffer,
    "%lu",
    (unsigned long)t2p->tiff_tiles[t2p->pdf_page].tiles_edgetilewidth);
  } else {
   buflen=sprintf(
    buffer,
    "%lu",
    (unsigned long)t2p->tiff_tiles[t2p->pdf_page].tiles_tilewidth);
  }
 }
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) "\n/Height ", 9);
 _TIFFmemset((tdata_t)buffer, 0x00, 16);
 if(tile==0){
  buflen=sprintf(buffer, "%lu", (unsigned long)t2p->tiff_length);
 } else {
  if(t2p_tile_is_bottom_edge(t2p->tiff_tiles[t2p->pdf_page], tile-1)!=0){
   buflen=sprintf(
    buffer,
    "%lu",
    (unsigned long)t2p->tiff_tiles[t2p->pdf_page].tiles_edgetilelength);
  } else {
   buflen=sprintf(
    buffer,
    "%lu",
    (unsigned long)t2p->tiff_tiles[t2p->pdf_page].tiles_tilelength);
  }
 }
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) "\n/BitsPerComponent ", 19);
 _TIFFmemset((tdata_t)buffer, 0x00, 16);
 buflen=sprintf(buffer, "%u", t2p->tiff_bitspersample);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) "\n/ColorSpace ", 13);
 written += t2p_write_pdf_xobject_cs(t2p, output);
 if (t2p->pdf_image_interpolate)
  written += t2pWriteFile(output,
      (tdata_t) "\n/Interpolate true", 18);
 if( (t2p->pdf_switchdecode != 0)

  && ! (t2p->pdf_colorspace == T2P_CS_BILEVEL
  && t2p->pdf_compression == T2P_COMPRESS_G4)

  ){
  written += t2p_write_pdf_xobject_decode(t2p, output);
 }
 written += t2p_write_pdf_xobject_stream_filter(tile, t2p, output);

 return(written);
}






tsize_t t2p_write_pdf_xobject_cs(T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[128];
 int buflen=0;

 float X_W=1.0;
 float Y_W=1.0;
 float Z_W=1.0;

 if( (t2p->pdf_colorspace & T2P_CS_ICCBASED) != 0){
  written += t2p_write_pdf_xobject_icccs(t2p, output);
  return(written);
 }
 if( (t2p->pdf_colorspace & T2P_CS_PALETTE) != 0){
  written += t2pWriteFile(output, (tdata_t) "[ /Indexed ", 11);
  t2p->pdf_colorspace ^= T2P_CS_PALETTE;
  written += t2p_write_pdf_xobject_cs(t2p, output);
  t2p->pdf_colorspace |= T2P_CS_PALETTE;
  buflen=sprintf(buffer, "%u", (0x0001 << t2p->tiff_bitspersample)-1 );
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " ", 1);
  _TIFFmemset(buffer, 0x00, 16);
  buflen=sprintf(buffer, "%lu", (unsigned long)t2p->pdf_palettecs );
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " 0 R ]\n", 7);
  return(written);
 }
 if(t2p->pdf_colorspace & T2P_CS_BILEVEL){
   written += t2pWriteFile(output, (tdata_t) "/DeviceGray \n", 13);
 }
 if(t2p->pdf_colorspace & T2P_CS_GRAY){
   if(t2p->pdf_colorspace & T2P_CS_CALGRAY){
    written += t2p_write_pdf_xobject_calcs(t2p, output);
   } else {
    written += t2pWriteFile(output, (tdata_t) "/DeviceGray \n", 13);
   }
 }
 if(t2p->pdf_colorspace & T2P_CS_RGB){
   if(t2p->pdf_colorspace & T2P_CS_CALRGB){
    written += t2p_write_pdf_xobject_calcs(t2p, output);
   } else {
    written += t2pWriteFile(output, (tdata_t) "/DeviceRGB \n", 12);
   }
 }
 if(t2p->pdf_colorspace & T2P_CS_CMYK){
   written += t2pWriteFile(output, (tdata_t) "/DeviceCMYK \n", 13);
 }
 if(t2p->pdf_colorspace & T2P_CS_LAB){
   written += t2pWriteFile(output, (tdata_t) "[/Lab << \n", 10);
   written += t2pWriteFile(output, (tdata_t) "/WhitePoint ", 12);
   X_W = t2p->tiff_whitechromaticities[0];
   Y_W = t2p->tiff_whitechromaticities[1];
   Z_W = 1.0F - (X_W + Y_W);
   X_W /= Y_W;
   Z_W /= Y_W;
   Y_W = 1.0F;
   buflen=sprintf(buffer, "[%.4f %.4f %.4f] \n", X_W, Y_W, Z_W);
   written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   X_W = 0.3457F;
   Y_W = 0.3585F;
   Z_W = 1.0F - (X_W + Y_W);
   X_W /= Y_W;
   Z_W /= Y_W;
   Y_W = 1.0F;
   buflen=sprintf(buffer, "[%.4f %.4f %.4f] \n", X_W, Y_W, Z_W);
   written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   written += t2pWriteFile(output, (tdata_t) "/Range ", 7);
   buflen=sprintf(buffer, "[%d %d %d %d] \n",
    t2p->pdf_labrange[0],
    t2p->pdf_labrange[1],
    t2p->pdf_labrange[2],
    t2p->pdf_labrange[3]);
   written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   written += t2pWriteFile(output, (tdata_t) ">>] \n", 5);

 }

 return(written);
}

tsize_t t2p_write_pdf_transfer(T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 written += t2pWriteFile(output, (tdata_t) "<< /Type /ExtGState \n/TR ", 25);
 if(t2p->tiff_transferfunctioncount == 1){
  buflen=sprintf(buffer, "%lu",
          (unsigned long)(t2p->pdf_xrefcount + 1));
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " 0 R ", 5);
 } else {
  written += t2pWriteFile(output, (tdata_t) "[ ", 2);
  buflen=sprintf(buffer, "%lu",
          (unsigned long)(t2p->pdf_xrefcount + 1));
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " 0 R ", 5);
  buflen=sprintf(buffer, "%lu",
          (unsigned long)(t2p->pdf_xrefcount + 2));
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " 0 R ", 5);
  buflen=sprintf(buffer, "%lu",
          (unsigned long)(t2p->pdf_xrefcount + 3));
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) " 0 R ", 5);
  written += t2pWriteFile(output, (tdata_t) "/Identity ] ", 12);
 }

 written += t2pWriteFile(output, (tdata_t) " >> \n", 5);

 return(written);
}

tsize_t t2p_write_pdf_transfer_dict(T2P* t2p, TIFF* output, uint16 i){

 tsize_t written=0;
 char buffer[32];
 int buflen=0;
 (void)i;

 written += t2pWriteFile(output, (tdata_t) "/FunctionType 0 \n", 17);
 written += t2pWriteFile(output, (tdata_t) "/Domain [0.0 1.0] \n", 19);
 written += t2pWriteFile(output, (tdata_t) "/Range [0.0 1.0] \n", 18);
 buflen=sprintf(buffer, "/Size [%u] \n", (1<<t2p->tiff_bitspersample));
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) "/BitsPerSample 16 \n", 19);
 written += t2p_write_pdf_stream_dict(((tsize_t)1)<<(t2p->tiff_bitspersample+1), 0, output);

 return(written);
}

tsize_t t2p_write_pdf_transfer_stream(T2P* t2p, TIFF* output, uint16 i){

 tsize_t written=0;

 written += t2p_write_pdf_stream(
  t2p->tiff_transferfunction[i],
  (((tsize_t)1)<<(t2p->tiff_bitspersample+1)),
  output);

 return(written);
}





tsize_t t2p_write_pdf_xobject_calcs(T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[128];
 int buflen=0;

 float X_W=0.0;
 float Y_W=0.0;
 float Z_W=0.0;
 float X_R=0.0;
 float Y_R=0.0;
 float Z_R=0.0;
 float X_G=0.0;
 float Y_G=0.0;
 float Z_G=0.0;
 float X_B=0.0;
 float Y_B=0.0;
 float Z_B=0.0;
 float x_w=0.0;
 float y_w=0.0;
 float z_w=0.0;
 float x_r=0.0;
 float y_r=0.0;
 float x_g=0.0;
 float y_g=0.0;
 float x_b=0.0;
 float y_b=0.0;
 float R=1.0;
 float G=1.0;
 float B=1.0;

 written += t2pWriteFile(output, (tdata_t) "[", 1);
 if(t2p->pdf_colorspace & T2P_CS_CALGRAY){
  written += t2pWriteFile(output, (tdata_t) "/CalGray ", 9);
  X_W = t2p->tiff_whitechromaticities[0];
  Y_W = t2p->tiff_whitechromaticities[1];
  Z_W = 1.0F - (X_W + Y_W);
  X_W /= Y_W;
  Z_W /= Y_W;
  Y_W = 1.0F;
 }
 if(t2p->pdf_colorspace & T2P_CS_CALRGB){
  written += t2pWriteFile(output, (tdata_t) "/CalRGB ", 8);
  x_w = t2p->tiff_whitechromaticities[0];
  y_w = t2p->tiff_whitechromaticities[1];
  x_r = t2p->tiff_primarychromaticities[0];
  y_r = t2p->tiff_primarychromaticities[1];
  x_g = t2p->tiff_primarychromaticities[2];
  y_g = t2p->tiff_primarychromaticities[3];
  x_b = t2p->tiff_primarychromaticities[4];
  y_b = t2p->tiff_primarychromaticities[5];
  z_w = y_w * ((x_g - x_b)*y_r - (x_r-x_b)*y_g + (x_r-x_g)*y_b);
  Y_R = (y_r/R) * ((x_g-x_b)*y_w - (x_w-x_b)*y_g + (x_w-x_g)*y_b) / z_w;
  X_R = Y_R * x_r / y_r;
  Z_R = Y_R * (((1-x_r)/y_r)-1);
  Y_G = ((0.0F-(y_g))/G) * ((x_r-x_b)*y_w - (x_w-x_b)*y_r + (x_w-x_r)*y_b) / z_w;
  X_G = Y_G * x_g / y_g;
  Z_G = Y_G * (((1-x_g)/y_g)-1);
  Y_B = (y_b/B) * ((x_r-x_g)*y_w - (x_w-x_g)*y_r + (x_w-x_r)*y_g) / z_w;
  X_B = Y_B * x_b / y_b;
  Z_B = Y_B * (((1-x_b)/y_b)-1);
  X_W = (X_R * R) + (X_G * G) + (X_B * B);
  Y_W = (Y_R * R) + (Y_G * G) + (Y_B * B);
  Z_W = (Z_R * R) + (Z_G * G) + (Z_B * B);
  X_W /= Y_W;
  Z_W /= Y_W;
  Y_W = 1.0;
 }
 written += t2pWriteFile(output, (tdata_t) "<< \n", 4);
 if(t2p->pdf_colorspace & T2P_CS_CALGRAY){
  written += t2pWriteFile(output, (tdata_t) "/WhitePoint ", 12);
  buflen=sprintf(buffer, "[%.4f %.4f %.4f] \n", X_W, Y_W, Z_W);
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) "/Gamma 2.2 \n", 12);
 }
 if(t2p->pdf_colorspace & T2P_CS_CALRGB){
  written += t2pWriteFile(output, (tdata_t) "/WhitePoint ", 12);
  buflen=sprintf(buffer, "[%.4f %.4f %.4f] \n", X_W, Y_W, Z_W);
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) "/Matrix ", 8);
  buflen=sprintf(buffer, "[%.4f %.4f %.4f %.4f %.4f %.4f %.4f %.4f %.4f] \n",
   X_R, Y_R, Z_R,
   X_G, Y_G, Z_G,
   X_B, Y_B, Z_B);
  written += t2pWriteFile(output, (tdata_t) buffer, buflen);
  written += t2pWriteFile(output, (tdata_t) "/Gamma [2.2 2.2 2.2] \n", 22);
 }
 written += t2pWriteFile(output, (tdata_t) ">>] \n", 5);

 return(written);
}





tsize_t t2p_write_pdf_xobject_icccs(T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 written += t2pWriteFile(output, (tdata_t) "[/ICCBased ", 11);
 buflen=sprintf(buffer, "%lu", (unsigned long)t2p->pdf_icccs);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) " 0 R] \n", 7);

 return(written);
}

tsize_t t2p_write_pdf_xobject_icccs_dict(T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 written += t2pWriteFile(output, (tdata_t) "/N ", 3);
 buflen=sprintf(buffer, "%u \n", t2p->tiff_samplesperpixel);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) "/Alternate ", 11);
 t2p->pdf_colorspace ^= T2P_CS_ICCBASED;
 written += t2p_write_pdf_xobject_cs(t2p, output);
 t2p->pdf_colorspace |= T2P_CS_ICCBASED;
 written += t2p_write_pdf_stream_dict(t2p->tiff_iccprofilelength, 0, output);

 return(written);
}

tsize_t t2p_write_pdf_xobject_icccs_stream(T2P* t2p, TIFF* output){

 tsize_t written=0;

 written += t2p_write_pdf_stream(
    (tdata_t) t2p->tiff_iccprofile,
    (tsize_t) t2p->tiff_iccprofilelength,
    output);

 return(written);
}





tsize_t t2p_write_pdf_xobject_palettecs_stream(T2P* t2p, TIFF* output){

 tsize_t written=0;

 written += t2p_write_pdf_stream(
    (tdata_t) t2p->pdf_palette,
    (tsize_t) t2p->pdf_palettesize,
    output);

 return(written);
}





tsize_t t2p_write_pdf_xobject_decode(T2P* t2p, TIFF* output){

 tsize_t written=0;
 int i=0;

 written += t2pWriteFile(output, (tdata_t) "/Decode [ ", 10);
 for (i=0;i<t2p->tiff_samplesperpixel;i++){
  written += t2pWriteFile(output, (tdata_t) "1 0 ", 4);
 }
 written += t2pWriteFile(output, (tdata_t) "]\n", 2);

 return(written);
}






tsize_t t2p_write_pdf_xobject_stream_filter(ttile_t tile, T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[16];
 int buflen=0;

 if(t2p->pdf_compression==T2P_COMPRESS_NONE){
  return(written);
 }
 written += t2pWriteFile(output, (tdata_t) "/Filter ", 8);
 switch(t2p->pdf_compression){

  case T2P_COMPRESS_G4:
   written += t2pWriteFile(output, (tdata_t) "/CCITTFaxDecode ", 16);
   written += t2pWriteFile(output, (tdata_t) "/DecodeParms ", 13);
   written += t2pWriteFile(output, (tdata_t) "<< /K -1 ", 9);
   if(tile==0){
    written += t2pWriteFile(output, (tdata_t) "/Columns ", 9);
    buflen=sprintf(buffer, "%lu",
            (unsigned long)t2p->tiff_width);
    written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    written += t2pWriteFile(output, (tdata_t) " /Rows ", 7);
    buflen=sprintf(buffer, "%lu",
            (unsigned long)t2p->tiff_length);
    written += t2pWriteFile(output, (tdata_t) buffer, buflen);
   } else {
    if(t2p_tile_is_right_edge(t2p->tiff_tiles[t2p->pdf_page], tile-1)==0){
     written += t2pWriteFile(output, (tdata_t) "/Columns ", 9);
     buflen=sprintf(
      buffer,
      "%lu",
      (unsigned long)t2p->tiff_tiles[t2p->pdf_page].tiles_tilewidth);
     written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    } else {
     written += t2pWriteFile(output, (tdata_t) "/Columns ", 9);
     buflen=sprintf(
      buffer,
      "%lu",
      (unsigned long)t2p->tiff_tiles[t2p->pdf_page].tiles_edgetilewidth);
     written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    }
    if(t2p_tile_is_bottom_edge(t2p->tiff_tiles[t2p->pdf_page], tile-1)==0){
     written += t2pWriteFile(output, (tdata_t) " /Rows ", 7);
     buflen=sprintf(
      buffer,
      "%lu",
      (unsigned long)t2p->tiff_tiles[t2p->pdf_page].tiles_tilelength);
     written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    } else {
     written += t2pWriteFile(output, (tdata_t) " /Rows ", 7);
     buflen=sprintf(
      buffer,
      "%lu",
      (unsigned long)t2p->tiff_tiles[t2p->pdf_page].tiles_edgetilelength);
     written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    }
   }
   if(t2p->pdf_switchdecode == 0){
    written += t2pWriteFile(output, (tdata_t) " /BlackIs1 true ", 16);
   }
   written += t2pWriteFile(output, (tdata_t) ">>\n", 3);
   break;
# 5088 "tiff2pdf.c"
  case T2P_COMPRESS_ZIP:
   written += t2pWriteFile(output, (tdata_t) "/FlateDecode ", 13);
   if(t2p->pdf_compressionquality%100){
    written += t2pWriteFile(output, (tdata_t) "/DecodeParms ", 13);
    written += t2pWriteFile(output, (tdata_t) "<< /Predictor ", 14);
    _TIFFmemset(buffer, 0x00, 16);
    buflen=sprintf(buffer, "%u", t2p->pdf_compressionquality%100);
    written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    written += t2pWriteFile(output, (tdata_t) " /Columns ", 10);
    _TIFFmemset(buffer, 0x00, 16);
    buflen = sprintf(buffer, "%lu",
       (unsigned long)t2p->tiff_width);
    written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    written += t2pWriteFile(output, (tdata_t) " /Colors ", 9);
    _TIFFmemset(buffer, 0x00, 16);
    buflen=sprintf(buffer, "%u", t2p->tiff_samplesperpixel);
    written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    written += t2pWriteFile(output, (tdata_t) " /BitsPerComponent ", 19);
    _TIFFmemset(buffer, 0x00, 16);
    buflen=sprintf(buffer, "%u", t2p->tiff_bitspersample);
    written += t2pWriteFile(output, (tdata_t) buffer, buflen);
    written += t2pWriteFile(output, (tdata_t) ">>\n", 3);
   }
   break;

  default:
   break;
 }

 return(written);
}





tsize_t t2p_write_pdf_xreftable(T2P* t2p, TIFF* output){

 tsize_t written=0;
 char buffer[21];
 int buflen=0;
 uint32 i=0;

 written += t2pWriteFile(output, (tdata_t) "xref\n0 ", 7);
 buflen=sprintf(buffer, "%lu", (unsigned long)(t2p->pdf_xrefcount + 1));
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 written += t2pWriteFile(output, (tdata_t) " \n0000000000 65535 f \n", 22);
 for (i=0;i<t2p->pdf_xrefcount;i++){
  sprintf(buffer, "%.10lu 00000 n \n",
   (unsigned long)t2p->pdf_xrefoffsets[i]);
  written += t2pWriteFile(output, (tdata_t) buffer, 20);
 }

 return(written);
}





tsize_t t2p_write_pdf_trailer(T2P* t2p, TIFF* output)
{

 tsize_t written = 0;
 char buffer[32];
 int buflen = 0;
 char fileidbuf[16];
 int i = 0;

 ((int*)fileidbuf)[0] = rand();
 ((int*)fileidbuf)[1] = rand();
 ((int*)fileidbuf)[2] = rand();
 ((int*)fileidbuf)[3] = rand();
 t2p->pdf_fileid = (unsigned char*)_TIFFmalloc(33);
 if(t2p->pdf_fileid == ((void *)0)) {
  TIFFError(
   "tiff2pdf",
  "Can't allocate %u bytes of memory for t2p_write_pdf_trailer",
   33 );
  t2p->t2p_error = T2P_ERR_ERROR;
  return(0);
 }
 _TIFFmemset(t2p->pdf_fileid, 0x00, 33);
 for (i = 0; i < 16; i++) {
  sprintf((char *)t2p->pdf_fileid + 2 * i,
   "%.2hhX", fileidbuf[i]);
 }
 written += t2pWriteFile(output, (tdata_t) "trailer\n<<\n/Size ", 17);
 buflen = sprintf(buffer, "%lu", (unsigned long)(t2p->pdf_xrefcount+1));
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 _TIFFmemset(buffer, 0x00, 32);
 written += t2pWriteFile(output, (tdata_t) "\n/Root ", 7);
 buflen=sprintf(buffer, "%lu", (unsigned long)t2p->pdf_catalog);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 _TIFFmemset(buffer, 0x00, 32);
 written += t2pWriteFile(output, (tdata_t) " 0 R \n/Info ", 12);
 buflen=sprintf(buffer, "%lu", (unsigned long)t2p->pdf_info);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 _TIFFmemset(buffer, 0x00, 32);
 written += t2pWriteFile(output, (tdata_t) " 0 R \n/ID[<", 11);
 written += t2pWriteFile(output, (tdata_t) t2p->pdf_fileid, 32);
 written += t2pWriteFile(output, (tdata_t) "><", 2);
 written += t2pWriteFile(output, (tdata_t) t2p->pdf_fileid, 32);
 written += t2pWriteFile(output, (tdata_t) ">]\n>>\nstartxref\n", 16);
 buflen=sprintf(buffer, "%lu", (unsigned long)t2p->pdf_startxref);
 written += t2pWriteFile(output, (tdata_t) buffer, buflen);
 _TIFFmemset(buffer, 0x00, 32);
 written += t2pWriteFile(output, (tdata_t) "\n%%EOF\n", 7);

 return(written);
}
# 5240 "tiff2pdf.c"
tsize_t t2p_write_pdf(T2P* t2p, TIFF* input, TIFF* output){

 tsize_t written=0;
 ttile_t i2=0;
 tsize_t streamlen=0;
 uint16 i=0;

 t2p_read_tiff_init(t2p, input);
 if(t2p->t2p_error!=T2P_ERR_OK){return(0);}
 t2p->pdf_xrefoffsets= (uint32*) _TIFFmalloc(t2p->pdf_xrefcount * sizeof(uint32) );
 if(t2p->pdf_xrefoffsets==((void *)0)){
  TIFFError(
   "tiff2pdf",
   "Can't allocate %u bytes of memory for t2p_write_pdf",
   (unsigned int) (t2p->pdf_xrefcount * sizeof(uint32)) );
  return(written);
 }
 t2p->pdf_xrefcount=0;
 t2p->pdf_catalog=1;
 t2p->pdf_info=2;
 t2p->pdf_pages=3;
 written += t2p_write_pdf_header(t2p, output);
 t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
 t2p->pdf_catalog=t2p->pdf_xrefcount;
 written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
 written += t2p_write_pdf_catalog(t2p, output);
 written += t2p_write_pdf_obj_end(output);
 t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
 t2p->pdf_info=t2p->pdf_xrefcount;
 written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
 written += t2p_write_pdf_info(t2p, input, output);
 written += t2p_write_pdf_obj_end(output);
 t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
 t2p->pdf_pages=t2p->pdf_xrefcount;
 written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
 written += t2p_write_pdf_pages(t2p, output);
 written += t2p_write_pdf_obj_end(output);
 for(t2p->pdf_page=0;t2p->pdf_page<t2p->tiff_pagecount;t2p->pdf_page++){
  t2p_read_tiff_data(t2p, input);
  if(t2p->t2p_error!=T2P_ERR_OK){return(0);}
  t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
  written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
  written += t2p_write_pdf_page(t2p->pdf_xrefcount, t2p, output);
  written += t2p_write_pdf_obj_end(output);
  t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
  written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
  written += t2p_write_pdf_stream_dict_start(output);
  written += t2p_write_pdf_stream_dict(0, t2p->pdf_xrefcount+1, output);
  written += t2p_write_pdf_stream_dict_end(output);
  written += t2p_write_pdf_stream_start(output);
  streamlen=written;
  written += t2p_write_pdf_page_content_stream(t2p, output);
  streamlen=written-streamlen;
  written += t2p_write_pdf_stream_end(output);
  written += t2p_write_pdf_obj_end(output);
  t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
  written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
  written += t2p_write_pdf_stream_length(streamlen, output);
  written += t2p_write_pdf_obj_end(output);
  if(t2p->tiff_transferfunctioncount != 0){
   t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
   written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
   written += t2p_write_pdf_transfer(t2p, output);
   written += t2p_write_pdf_obj_end(output);
   for(i=0; i < t2p->tiff_transferfunctioncount; i++){
    t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
    written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
    written += t2p_write_pdf_stream_dict_start(output);
    written += t2p_write_pdf_transfer_dict(t2p, output, i);
    written += t2p_write_pdf_stream_dict_end(output);
    written += t2p_write_pdf_stream_start(output);
    streamlen=written;
    written += t2p_write_pdf_transfer_stream(t2p, output, i);
    streamlen=written-streamlen;
    written += t2p_write_pdf_stream_end(output);
    written += t2p_write_pdf_obj_end(output);
   }
  }
  if( (t2p->pdf_colorspace & T2P_CS_PALETTE) != 0){
   t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
   t2p->pdf_palettecs=t2p->pdf_xrefcount;
   written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
   written += t2p_write_pdf_stream_dict_start(output);
   written += t2p_write_pdf_stream_dict(t2p->pdf_palettesize, 0, output);
   written += t2p_write_pdf_stream_dict_end(output);
   written += t2p_write_pdf_stream_start(output);
   streamlen=written;
   written += t2p_write_pdf_xobject_palettecs_stream(t2p, output);
   streamlen=written-streamlen;
   written += t2p_write_pdf_stream_end(output);
   written += t2p_write_pdf_obj_end(output);
  }
  if( (t2p->pdf_colorspace & T2P_CS_ICCBASED) != 0){
   t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
   t2p->pdf_icccs=t2p->pdf_xrefcount;
   written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
   written += t2p_write_pdf_stream_dict_start(output);
   written += t2p_write_pdf_xobject_icccs_dict(t2p, output);
   written += t2p_write_pdf_stream_dict_end(output);
   written += t2p_write_pdf_stream_start(output);
   streamlen=written;
   written += t2p_write_pdf_xobject_icccs_stream(t2p, output);
   streamlen=written-streamlen;
   written += t2p_write_pdf_stream_end(output);
   written += t2p_write_pdf_obj_end(output);
  }
  if(t2p->tiff_tiles[t2p->pdf_page].tiles_tilecount !=0){
   for(i2=0;i2<t2p->tiff_tiles[t2p->pdf_page].tiles_tilecount;i2++){
    t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
    written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
    written += t2p_write_pdf_stream_dict_start(output);
    written += t2p_write_pdf_xobject_stream_dict(
     i2+1,
     t2p,
     output);
    written += t2p_write_pdf_stream_dict_end(output);
    written += t2p_write_pdf_stream_start(output);
    streamlen=written;
    t2p_read_tiff_size_tile(t2p, input, i2);
    written += t2p_readwrite_pdf_image_tile(t2p, input, output, i2);
    t2p_write_advance_directory(t2p, output);
    if(t2p->t2p_error!=T2P_ERR_OK){return(0);}
    streamlen=written-streamlen;
    written += t2p_write_pdf_stream_end(output);
    written += t2p_write_pdf_obj_end(output);
    t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
    written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
    written += t2p_write_pdf_stream_length(streamlen, output);
    written += t2p_write_pdf_obj_end(output);
   }
  } else {
   t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
   written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
   written += t2p_write_pdf_stream_dict_start(output);
   written += t2p_write_pdf_xobject_stream_dict(
    0,
    t2p,
    output);
   written += t2p_write_pdf_stream_dict_end(output);
   written += t2p_write_pdf_stream_start(output);
   streamlen=written;
   t2p_read_tiff_size(t2p, input);
   written += t2p_readwrite_pdf_image(t2p, input, output);
   t2p_write_advance_directory(t2p, output);
   if(t2p->t2p_error!=T2P_ERR_OK){return(0);}
   streamlen=written-streamlen;
   written += t2p_write_pdf_stream_end(output);
   written += t2p_write_pdf_obj_end(output);
   t2p->pdf_xrefoffsets[t2p->pdf_xrefcount++]=written;
   written += t2p_write_pdf_obj_start(t2p->pdf_xrefcount, output);
   written += t2p_write_pdf_stream_length(streamlen, output);
   written += t2p_write_pdf_obj_end(output);
  }
 }
 t2p->pdf_startxref = written;
 written += t2p_write_pdf_xreftable(t2p, output);
 written += t2p_write_pdf_trailer(t2p, output);
 t2p_disable(output);

 return(written);
}
