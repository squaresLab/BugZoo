# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
# 22 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
# 1 "Zend/zend_language_parser.h" 1
# 41 "Zend/zend_language_parser.h"
   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_GOTO = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_INSTEADOF = 341,
     T_GLOBAL = 342,
     T_PUBLIC = 343,
     T_PROTECTED = 344,
     T_PRIVATE = 345,
     T_FINAL = 346,
     T_ABSTRACT = 347,
     T_STATIC = 348,
     T_VAR = 349,
     T_UNSET = 350,
     T_ISSET = 351,
     T_EMPTY = 352,
     T_HALT_COMPILER = 353,
     T_CLASS = 354,
     T_TRAIT = 355,
     T_INTERFACE = 356,
     T_EXTENDS = 357,
     T_IMPLEMENTS = 358,
     T_OBJECT_OPERATOR = 359,
     T_DOUBLE_ARROW = 360,
     T_LIST = 361,
     T_ARRAY = 362,
     T_CALLABLE = 363,
     T_CLASS_C = 364,
     T_TRAIT_C = 365,
     T_METHOD_C = 366,
     T_FUNC_C = 367,
     T_LINE = 368,
     T_FILE = 369,
     T_COMMENT = 370,
     T_DOC_COMMENT = 371,
     T_OPEN_TAG = 372,
     T_OPEN_TAG_WITH_ECHO = 373,
     T_CLOSE_TAG = 374,
     T_WHITESPACE = 375,
     T_START_HEREDOC = 376,
     T_END_HEREDOC = 377,
     T_DOLLAR_OPEN_CURLY_BRACES = 378,
     T_CURLY_OPEN = 379,
     T_PAAMAYIM_NEKUDOTAYIM = 380,
     T_NAMESPACE = 381,
     T_NS_C = 382,
     T_DIR = 383,
     T_NS_SEPARATOR = 384
   };
# 306 "Zend/zend_language_parser.h"
typedef int YYSTYPE;
# 23 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 1
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"
# 1 "Zend/zend_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2423 "Zend/../main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
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
# 26 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
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

# 236 "/usr/include/stdlib.h" 3 4
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
# 237 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;





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
# 31 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





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



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





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
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





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






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 263 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





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
# 528 "/usr/include/stdlib.h" 3 4
extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void quick_exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







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
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




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





extern void setkey (__const char *__key) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4

# 2424 "Zend/../main/php_config.h" 2
# 2439 "Zend/../main/php_config.h"
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


# 109 "/usr/include/string.h" 3 4
extern void *rawmemchr (__const void *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 120 "/usr/include/string.h" 3 4
extern void *memrchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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

# 165 "/usr/include/string.h" 3 4
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


# 276 "/usr/include/string.h" 3 4
extern char *strchrnul (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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
# 373 "/usr/include/string.h" 3 4
extern char *strcasestr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





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




extern int ffsl (long int __l) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





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




extern int strverscmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 606 "/usr/include/string.h" 3 4
extern char *basename (__const char *__filename) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
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

# 2440 "Zend/../main/php_config.h" 2
# 2450 "Zend/../main/php_config.h"
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4




# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 36 "/usr/include/bits/mathdef.h" 3 4
typedef long double float_t;

typedef long double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__)); extern double __acos (double __x) __attribute__ ((__nothrow__));

extern double asin (double __x) __attribute__ ((__nothrow__)); extern double __asin (double __x) __attribute__ ((__nothrow__));

extern double atan (double __x) __attribute__ ((__nothrow__)); extern double __atan (double __x) __attribute__ ((__nothrow__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__));


extern double cos (double __x) __attribute__ ((__nothrow__)); extern double __cos (double __x) __attribute__ ((__nothrow__));

extern double sin (double __x) __attribute__ ((__nothrow__)); extern double __sin (double __x) __attribute__ ((__nothrow__));

extern double tan (double __x) __attribute__ ((__nothrow__)); extern double __tan (double __x) __attribute__ ((__nothrow__));




extern double cosh (double __x) __attribute__ ((__nothrow__)); extern double __cosh (double __x) __attribute__ ((__nothrow__));

extern double sinh (double __x) __attribute__ ((__nothrow__)); extern double __sinh (double __x) __attribute__ ((__nothrow__));

extern double tanh (double __x) __attribute__ ((__nothrow__)); extern double __tanh (double __x) __attribute__ ((__nothrow__));




extern void sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__)); extern void __sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__))
                                                           ;





extern double acosh (double __x) __attribute__ ((__nothrow__)); extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__)); extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__)); extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__)); extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__)); extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__)); extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));




extern double exp10 (double __x) __attribute__ ((__nothrow__)); extern double __exp10 (double __x) __attribute__ ((__nothrow__));

extern double pow10 (double __x) __attribute__ ((__nothrow__)); extern double __pow10 (double __x) __attribute__ ((__nothrow__));





extern double expm1 (double __x) __attribute__ ((__nothrow__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__)); extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__)); extern double __logb (double __x) __attribute__ ((__nothrow__));






extern double exp2 (double __x) __attribute__ ((__nothrow__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__));


extern double log2 (double __x) __attribute__ ((__nothrow__)); extern double __log2 (double __x) __attribute__ ((__nothrow__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__));


extern double sqrt (double __x) __attribute__ ((__nothrow__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__));






extern double cbrt (double __x) __attribute__ ((__nothrow__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__));








extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__));




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__));



extern double significand (double __x) __attribute__ ((__nothrow__)); extern double __significand (double __x) __attribute__ ((__nothrow__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern double nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__)); extern double __j0 (double) __attribute__ ((__nothrow__));
extern double j1 (double) __attribute__ ((__nothrow__)); extern double __j1 (double) __attribute__ ((__nothrow__));
extern double jn (int, double) __attribute__ ((__nothrow__)); extern double __jn (int, double) __attribute__ ((__nothrow__));
extern double y0 (double) __attribute__ ((__nothrow__)); extern double __y0 (double) __attribute__ ((__nothrow__));
extern double y1 (double) __attribute__ ((__nothrow__)); extern double __y1 (double) __attribute__ ((__nothrow__));
extern double yn (int, double) __attribute__ ((__nothrow__)); extern double __yn (int, double) __attribute__ ((__nothrow__));






extern double erf (double) __attribute__ ((__nothrow__)); extern double __erf (double) __attribute__ ((__nothrow__));
extern double erfc (double) __attribute__ ((__nothrow__)); extern double __erfc (double) __attribute__ ((__nothrow__));
extern double lgamma (double) __attribute__ ((__nothrow__)); extern double __lgamma (double) __attribute__ ((__nothrow__));






extern double tgamma (double) __attribute__ ((__nothrow__)); extern double __tgamma (double) __attribute__ ((__nothrow__));





extern double gamma (double) __attribute__ ((__nothrow__)); extern double __gamma (double) __attribute__ ((__nothrow__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));







extern double rint (double __x) __attribute__ ((__nothrow__)); extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__));



extern double round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrint (double __x) __attribute__ ((__nothrow__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__));
extern long long int llrint (double __x) __attribute__ ((__nothrow__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__));



extern long int lround (double __x) __attribute__ ((__nothrow__)); extern long int __lround (double __x) __attribute__ ((__nothrow__));
extern long long int llround (double __x) __attribute__ ((__nothrow__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__));








extern double scalb (double __x, double __n) __attribute__ ((__nothrow__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__));
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__)); extern float __acosf (float __x) __attribute__ ((__nothrow__));

extern float asinf (float __x) __attribute__ ((__nothrow__)); extern float __asinf (float __x) __attribute__ ((__nothrow__));

extern float atanf (float __x) __attribute__ ((__nothrow__)); extern float __atanf (float __x) __attribute__ ((__nothrow__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__));


extern float cosf (float __x) __attribute__ ((__nothrow__)); extern float __cosf (float __x) __attribute__ ((__nothrow__));

extern float sinf (float __x) __attribute__ ((__nothrow__)); extern float __sinf (float __x) __attribute__ ((__nothrow__));

extern float tanf (float __x) __attribute__ ((__nothrow__)); extern float __tanf (float __x) __attribute__ ((__nothrow__));




extern float coshf (float __x) __attribute__ ((__nothrow__)); extern float __coshf (float __x) __attribute__ ((__nothrow__));

extern float sinhf (float __x) __attribute__ ((__nothrow__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__));

extern float tanhf (float __x) __attribute__ ((__nothrow__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__));




extern void
 sincosf
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__)); extern void
 __sincosf
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__))
                                                           ;





extern float acoshf (float __x) __attribute__ ((__nothrow__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__)); extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__)); extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__)); extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));




extern float exp10f (float __x) __attribute__ ((__nothrow__)); extern float __exp10f (float __x) __attribute__ ((__nothrow__));

extern float pow10f (float __x) __attribute__ ((__nothrow__)); extern float __pow10f (float __x) __attribute__ ((__nothrow__));





extern float expm1f (float __x) __attribute__ ((__nothrow__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__)); extern float __logbf (float __x) __attribute__ ((__nothrow__));






extern float exp2f (float __x) __attribute__ ((__nothrow__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__));


extern float log2f (float __x) __attribute__ ((__nothrow__)); extern float __log2f (float __x) __attribute__ ((__nothrow__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__));








extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__));




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__));



extern float significandf (float __x) __attribute__ ((__nothrow__)); extern float __significandf (float __x) __attribute__ ((__nothrow__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern float nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__)); extern float __j0f (float) __attribute__ ((__nothrow__));
extern float j1f (float) __attribute__ ((__nothrow__)); extern float __j1f (float) __attribute__ ((__nothrow__));
extern float jnf (int, float) __attribute__ ((__nothrow__)); extern float __jnf (int, float) __attribute__ ((__nothrow__));
extern float y0f (float) __attribute__ ((__nothrow__)); extern float __y0f (float) __attribute__ ((__nothrow__));
extern float y1f (float) __attribute__ ((__nothrow__)); extern float __y1f (float) __attribute__ ((__nothrow__));
extern float ynf (int, float) __attribute__ ((__nothrow__)); extern float __ynf (int, float) __attribute__ ((__nothrow__));






extern float erff (float) __attribute__ ((__nothrow__)); extern float __erff (float) __attribute__ ((__nothrow__));
extern float erfcf (float) __attribute__ ((__nothrow__)); extern float __erfcf (float) __attribute__ ((__nothrow__));
extern float lgammaf (float) __attribute__ ((__nothrow__)); extern float __lgammaf (float) __attribute__ ((__nothrow__));






extern float tgammaf (float) __attribute__ ((__nothrow__)); extern float __tgammaf (float) __attribute__ ((__nothrow__));





extern float gammaf (float) __attribute__ ((__nothrow__)); extern float __gammaf (float) __attribute__ ((__nothrow__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));







extern float rintf (float __x) __attribute__ ((__nothrow__)); extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__));



extern float roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__));
extern long long int llrintf (float __x) __attribute__ ((__nothrow__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__));
extern long long int llroundf (float __x) __attribute__ ((__nothrow__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__));








extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__));
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__));




extern void
 sincosl
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__)); extern void
 __sincosl
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__))
                                                           ;





extern long double acoshl (long double __x) __attribute__ ((__nothrow__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));




extern long double exp10l (long double __x) __attribute__ ((__nothrow__)); extern long double __exp10l (long double __x) __attribute__ ((__nothrow__));

extern long double pow10l (long double __x) __attribute__ ((__nothrow__)); extern long double __pow10l (long double __x) __attribute__ ((__nothrow__));





extern long double expm1l (long double __x) __attribute__ ((__nothrow__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__)); extern long double __j0l (long double) __attribute__ ((__nothrow__));
extern long double j1l (long double) __attribute__ ((__nothrow__)); extern long double __j1l (long double) __attribute__ ((__nothrow__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__));
extern long double y0l (long double) __attribute__ ((__nothrow__)); extern long double __y0l (long double) __attribute__ ((__nothrow__));
extern long double y1l (long double) __attribute__ ((__nothrow__)); extern long double __y1l (long double) __attribute__ ((__nothrow__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__));






extern long double erfl (long double) __attribute__ ((__nothrow__)); extern long double __erfl (long double) __attribute__ ((__nothrow__));
extern long double erfcl (long double) __attribute__ ((__nothrow__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__));
extern long double lgammal (long double) __attribute__ ((__nothrow__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__));






extern long double tgammal (long double) __attribute__ ((__nothrow__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__));





extern long double gammal (long double) __attribute__ ((__nothrow__)); extern long double __gammal (long double) __attribute__ ((__nothrow__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));








extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 198 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 291 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 316 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 416 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathinline.h" 1 3 4
# 127 "/usr/include/bits/mathinline.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) __signbitf (float __x)
{
  __extension__ union { float __f; int __i; } __u = { __f: __x };
  return __u.__i < 0;
}
extern __inline int
__attribute__ ((__nothrow__)) __signbit (double __x)
{
  __extension__ union { double __d; int __i[2]; } __u = { __d: __x };
  return __u.__i[1] < 0;
}
extern __inline int
__attribute__ ((__nothrow__)) __signbitl (long double __x)
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 295 "/usr/include/bits/mathinline.h" 3 4
extern __inline double __sgn (double) __attribute__ ((__nothrow__)); extern __inline double __attribute__ ((__nothrow__)) __sgn (double __x) { return __x == 0.0 ? 0.0 : (__x > 0.0 ? 1.0 : -1.0); } extern __inline float __sgnf (float) __attribute__ ((__nothrow__)); extern __inline float __attribute__ ((__nothrow__)) __sgnf (float __x) { return __x == 0.0 ? 0.0 : (__x > 0.0 ? 1.0 : -1.0); } extern __inline long double __sgnl (long double) __attribute__ ((__nothrow__)); extern __inline long double __attribute__ ((__nothrow__)) __sgnl (long double __x) { return __x == 0.0 ? 0.0 : (__x > 0.0 ? 1.0 : -1.0); }
# 437 "/usr/include/bits/mathinline.h" 3 4
extern __inline long double __attribute__ ((__nothrow__)) __atan2l (long double __y, long double __x) { return __builtin_atan2l (__y, __x); }
# 477 "/usr/include/bits/mathinline.h" 3 4
extern __inline double __attribute__ ((__nothrow__)) fabs (double __x) { return __builtin_fabs (__x); }

extern __inline float __attribute__ ((__nothrow__)) fabsf (float __x) { return __builtin_fabsf (__x); }
extern __inline long double __attribute__ ((__nothrow__)) fabsl (long double __x) { return __builtin_fabsl (__x); }

extern __inline long double __attribute__ ((__nothrow__)) __fabsl (long double __x) { return __builtin_fabsl (__x); }
# 510 "/usr/include/bits/mathinline.h" 3 4
extern __inline long double __sgn1l (long double) __attribute__ ((__nothrow__)); extern __inline long double __attribute__ ((__nothrow__)) __sgn1l (long double __x) { __extension__ union { long double __xld; unsigned int __xi[3]; } __n = { __xld: __x }; __n.__xi[2] = (__n.__xi[2] & 0x8000) | 0x3fff; __n.__xi[1] = 0x80000000; __n.__xi[0] = 0; return __n.__xld; }
# 534 "/usr/include/bits/mathinline.h" 3 4
extern __inline double __attribute__ ((__nothrow__)) floor (double __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0400, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; } extern __inline float __attribute__ ((__nothrow__)) floorf (float __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0400, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; } extern __inline long double __attribute__ ((__nothrow__)) floorl (long double __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0400, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; }
# 552 "/usr/include/bits/mathinline.h" 3 4
extern __inline double __attribute__ ((__nothrow__)) ceil (double __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0800, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; } extern __inline float __attribute__ ((__nothrow__)) ceilf (float __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0800, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; } extern __inline long double __attribute__ ((__nothrow__)) ceill (long double __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0800, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; }
# 671 "/usr/include/bits/mathinline.h" 3 4
extern __inline long int
__attribute__ ((__nothrow__)) lrintf (float __x)
{
  long int __lrintres; __asm__ __volatile__ ("fistpl %0" : "=m" (__lrintres) : "t" (__x) : "st"); return __lrintres;
}
extern __inline long int
__attribute__ ((__nothrow__)) lrint (double __x)
{
  long int __lrintres; __asm__ __volatile__ ("fistpl %0" : "=m" (__lrintres) : "t" (__x) : "st"); return __lrintres;
}
extern __inline long int
__attribute__ ((__nothrow__)) lrintl (long double __x)
{
  long int __lrintres; __asm__ __volatile__ ("fistpl %0" : "=m" (__lrintres) : "t" (__x) : "st"); return __lrintres;
}
# 694 "/usr/include/bits/mathinline.h" 3 4
extern __inline long long int
__attribute__ ((__nothrow__)) llrintf (float __x)
{
  long long int __llrintres; __asm__ __volatile__ ("fistpll %0" : "=m" (__llrintres) : "t" (__x) : "st"); return __llrintres;
}
extern __inline long long int
__attribute__ ((__nothrow__)) llrint (double __x)
{
  long long int __llrintres; __asm__ __volatile__ ("fistpll %0" : "=m" (__llrintres) : "t" (__x) : "st"); return __llrintres;
}
extern __inline long long int
__attribute__ ((__nothrow__)) llrintl (long double __x)
{
  long long int __llrintres; __asm__ __volatile__ ("fistpll %0" : "=m" (__llrintres) : "t" (__x) : "st"); return __llrintres;
}
# 731 "/usr/include/bits/mathinline.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) __finite (double __x)
{
  return (__extension__
   (((((union { double __d; int __i[2]; }) {__d: __x}).__i[1]
      | 0x800fffffu) + 1) >> 31));
}
# 417 "/usr/include/math.h" 2 3 4
# 472 "/usr/include/math.h" 3 4

# 2451 "Zend/../main/php_config.h" 2
# 2 "Zend/zend_config.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 68 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
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




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







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
# 109 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
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








extern FILE *tmpfile (void) ;
# 204 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 226 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 251 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 261 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 294 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__)) ;




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






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
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
# 467 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
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

# 644 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
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

# 721 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 732 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 768 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 787 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 810 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




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


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 849 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 868 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







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





extern __inline __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





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

# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 76 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2



# 1 "/usr/include/dlfcn.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/bits/dlfcn.h" 1 3 4
# 58 "/usr/include/bits/dlfcn.h" 3 4



extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__));


# 29 "/usr/include/dlfcn.h" 2 3 4
# 45 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;











extern void *dlopen (__const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      __const char *__restrict __name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, __const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       __const char *__restrict __name,
       __const char *__restrict __version)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) __attribute__ ((__nothrow__));





typedef struct
{
  __const char *dli_fname;
  void *dli_fbase;
  __const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (__const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (__const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;




# 80 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_errors.h" 1
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/../TSRM/TSRM.h" 1
# 20 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/../TSRM/TSRM.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config.h" 2
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/../TSRM/TSRM.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h" 2
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 uint lineno;
 const char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



__attribute__ ((visibility("default"))) char *zend_strndup(const char *s, unsigned int length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void *_emalloc(size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_erealloc(void *ptr, size_t size, int allow_failure );
__attribute__ ((visibility("default"))) void *_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void *_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char *_estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char *_estrndup(const char *s, unsigned int length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h"
inline static void * __zend_malloc(size_t len)
{
 void *tmp = malloc(len);
 if (tmp) {
  return tmp;
 }
 fprintf(stderr, "Out of memory\n");
 exit(1);
}

inline static void * __zend_calloc(size_t nmemb, size_t len)
{
 void *tmp = _safe_malloc(nmemb, len, 0);
 memset(tmp, 0, nmemb * len);
 return tmp;
}

inline static void * __zend_realloc(void *p, size_t len)
{
 p = realloc(p, len);
 if (p) {
  return p;
 }
 fprintf(stderr, "Out of memory\n");
 exit(1);
}
# 142 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_alloc.h"
typedef struct _zend_mm_storage zend_mm_storage;

typedef struct _zend_mm_segment {
 size_t size;
 struct _zend_mm_segment *next_segment;
} zend_mm_segment;

typedef struct _zend_mm_mem_handlers {
 const char *name;
 zend_mm_storage* (*init)(void *params);
 void (*dtor)(zend_mm_storage *storage);
 void (*compact)(zend_mm_storage *storage);
 zend_mm_segment* (*_alloc)(zend_mm_storage *storage, size_t size);
 zend_mm_segment* (*_realloc)(zend_mm_storage *storage, zend_mm_segment *ptr, size_t size);
 void (*_free)(zend_mm_storage *storage, zend_mm_segment *ptr);
} zend_mm_mem_handlers;

struct _zend_mm_storage {
 const zend_mm_mem_handlers *handlers;
 void *data;
};

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup_ex(const zend_mm_mem_handlers *handlers, size_t block_size, size_t reserve_size, int internal, void *params);
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap );
__attribute__ ((visibility("default"))) zend_mm_storage *zend_mm_get_storage(zend_mm_heap *heap);

__attribute__ ((visibility("default"))) void zend_mm_set_custom_handlers(zend_mm_heap *heap,
                                          void* (*_malloc)(size_t),
                                          void (*_free)(void*),
                                          void* (*_realloc)(void*, size_t));
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_types.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_string.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_string.h"
__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2


# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 158 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 154 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 256 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"
static const char long_min_digits[] = "2147483648";
# 271 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_hash.h" 1
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_hash.h"
typedef ulong (*hash_func_t)(const char *arKey, uint nKeyLength);
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
 const char *arKey;
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
 const char *arKey;
 uint nKeyLength;
 ulong h;
} zend_hash_key;


typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, void *source_data, zend_hash_key *hash_key, void *pParam);

typedef Bucket* HashPosition;




__attribute__ ((visibility("default"))) int _zend_hash_init(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_hash_init_ex(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_hash_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_clean(HashTable *ht);




__attribute__ ((visibility("default"))) int _zend_hash_add_or_update(HashTable *ht, const char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_hash_quick_add_or_update(HashTable *ht, const char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_hash_index_update_or_next_insert(HashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int zend_hash_add_empty_element(HashTable *ht, const char *arKey, uint nKeyLength);






typedef int (*apply_func_t)(void *pDest );
typedef int (*apply_func_arg_t)(void *pDest, void *argument );
typedef int (*apply_func_args_t)(void *pDest , int num_args, va_list args, zend_hash_key *hash_key);

__attribute__ ((visibility("default"))) void zend_hash_graceful_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_graceful_reverse_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_apply(HashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_arguments(HashTable *ht , apply_func_args_t apply_func, int, ...);







__attribute__ ((visibility("default"))) void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_hash_del_key_or_index(HashTable *ht, const char *arKey, uint nKeyLength, ulong h, int flag);







__attribute__ ((visibility("default"))) ulong zend_get_hash_value(const char *arKey, uint nKeyLength);


__attribute__ ((visibility("default"))) int zend_hash_find(const HashTable *ht, const char *arKey, uint nKeyLength, void **pData);
__attribute__ ((visibility("default"))) int zend_hash_quick_find(const HashTable *ht, const char *arKey, uint nKeyLength, ulong h, void **pData);
__attribute__ ((visibility("default"))) int zend_hash_index_find(const HashTable *ht, ulong h, void **pData);


__attribute__ ((visibility("default"))) int zend_hash_exists(const HashTable *ht, const char *arKey, uint nKeyLength);
__attribute__ ((visibility("default"))) int zend_hash_quick_exists(const HashTable *ht, const char *arKey, uint nKeyLength, ulong h);
__attribute__ ((visibility("default"))) int zend_hash_index_exists(const HashTable *ht, ulong h);
__attribute__ ((visibility("default"))) ulong zend_hash_next_free_element(const HashTable *ht);





__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, char **str_index, uint *str_length, ulong *num_index, zend_bool duplicate, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_data_ex(HashTable *ht, void **pData, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_update_current_key_ex(HashTable *ht, int key_type, const char *str_index, uint str_length, ulong num_index, int mode, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 ulong h;
} HashPointer;

__attribute__ ((visibility("default"))) int zend_hash_get_pointer(const HashTable *ht, HashPointer *ptr);
__attribute__ ((visibility("default"))) int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_hash.h"
static inline ulong zend_inline_hash_func(const char *arKey, uint nKeyLength)
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


__attribute__ ((visibility("default"))) ulong zend_hash_func(const char *arKey, uint nKeyLength);








# 348 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_hash.h"
static inline int zend_symtable_update(HashTable *ht, const char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest)
 {
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, (1<<0) ); } } } while (0); } while (0);
 return _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize, pDest, (1<<0) );
}


static inline int zend_symtable_del(HashTable *ht, const char *arKey, uint nKeyLength)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return zend_hash_del_key_or_index(ht, ((void *)0), 0, idx, 1); } } } while (0); } while (0);
 return zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0, 0);
}


static inline int zend_symtable_find(HashTable *ht, const char *arKey, uint nKeyLength, void **pData)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return zend_hash_index_find(ht, idx, pData); } } } while (0); } while (0);
 return zend_hash_find(ht, arKey, nKeyLength, pData);
}


static inline int zend_symtable_exists(HashTable *ht, const char *arKey, uint nKeyLength)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return zend_hash_index_exists(ht, idx); } } } while (0); } while (0);
 return zend_hash_exists(ht, arKey, nKeyLength);
}

static inline int zend_symtable_update_current_key_ex(HashTable *ht, const char *arKey, uint nKeyLength, int mode, HashPosition *pos)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return zend_hash_update_current_key_ex(ht, 2, ((void *)0), 0, idx, mode, pos); } } } while (0); } while (0);
 return zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0, mode, pos);
}
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_ts_hash.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_ts_hash.h"
__attribute__ ((visibility("default"))) int _zend_ts_hash_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_ts_hash_quick_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int zend_ts_hash_add_empty_element(TsHashTable *ht, char *arKey, uint nKeyLength);

__attribute__ ((visibility("default"))) void zend_ts_hash_graceful_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_apply(TsHashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_ts_hash_apply_with_argument(TsHashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_ts_hash_apply_with_arguments(TsHashTable *ht , apply_func_args_t apply_func, int, ...);

__attribute__ ((visibility("default"))) void zend_ts_hash_reverse_apply(TsHashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_ts_hash_del_key_or_index(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, int flag);





__attribute__ ((visibility("default"))) ulong zend_ts_get_hash_value(TsHashTable *ht, char *arKey, uint nKeyLength);


__attribute__ ((visibility("default"))) int zend_ts_hash_find(TsHashTable *ht, char *arKey, uint nKeyLength, void **pData);
__attribute__ ((visibility("default"))) int zend_ts_hash_quick_find(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void **pData);
__attribute__ ((visibility("default"))) int zend_ts_hash_index_find(TsHashTable *ht, ulong h, void **pData);


__attribute__ ((visibility("default"))) int zend_ts_hash_exists(TsHashTable *ht, char *arKey, uint nKeyLength);
__attribute__ ((visibility("default"))) int zend_ts_hash_index_exists(TsHashTable *ht, ulong h);


__attribute__ ((visibility("default"))) void zend_ts_hash_copy(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void zend_ts_hash_copy_to_hash(HashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void zend_ts_hash_merge(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite);
__attribute__ ((visibility("default"))) void zend_ts_hash_merge_ex(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_ts_hash_sort(TsHashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_ts_hash_compare(TsHashTable *ht1, TsHashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_ts_hash_minmax(TsHashTable *ht, compare_func_t compar, int flag, void **pData );

__attribute__ ((visibility("default"))) int zend_ts_hash_num_elements(TsHashTable *ht);

__attribute__ ((visibility("default"))) int zend_ts_hash_rehash(TsHashTable *ht);

__attribute__ ((visibility("default"))) ulong zend_ts_hash_func(char *arKey, uint nKeyLength);








# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_llist.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_llist.h"
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


__attribute__ ((visibility("default"))) void zend_llist_init(zend_llist *l, size_t size, llist_dtor_func_t dtor, unsigned char persistent);
__attribute__ ((visibility("default"))) void zend_llist_add_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_prepend_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_del_element(zend_llist *l, void *element, int (*compare)(void *element1, void *element2));
__attribute__ ((visibility("default"))) void zend_llist_destroy(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_clean(zend_llist *l);
__attribute__ ((visibility("default"))) void *zend_llist_remove_tail(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_copy(zend_llist *dst, zend_llist *src);
__attribute__ ((visibility("default"))) void zend_llist_apply(zend_llist *l, llist_apply_func_t func );
__attribute__ ((visibility("default"))) void zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
__attribute__ ((visibility("default"))) void zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func, void *arg );
__attribute__ ((visibility("default"))) void zend_llist_apply_with_arguments(zend_llist *l, llist_apply_with_args_func_t func , int num_args, ...);
__attribute__ ((visibility("default"))) int zend_llist_count(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func );


__attribute__ ((visibility("default"))) void *zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);







# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2





void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));







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
 zval **properties_table;
 HashTable *guards;
} zend_object;

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_object_handlers.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value, const struct _zend_literal *key );


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value );



typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member, const struct _zend_literal *key );



typedef void (*zend_object_set_t)(zval **object, zval *value );




typedef zval* (*zend_object_get_t)(zval *object );







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists, const struct _zend_literal *key );


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty );


typedef void (*zend_object_unset_property_t)(zval *object, zval *member, const struct _zend_literal *key );


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset );


typedef HashTable *(*zend_object_get_properties_t)(zval *object );

typedef HashTable *(*zend_object_get_debug_info_t)(zval *object, int *is_temp );





typedef int (*zend_object_call_method_t)(const char *method, int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr, char *method, int method_len, const struct _zend_literal *key );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );


typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(const zval *object );
typedef int (*zend_object_get_class_name_t)(const zval *object, const char **class_name, zend_uint *class_name_len, int parent );
typedef int (*zend_object_compare_t)(zval *object1, zval *object2 );



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type );



typedef int (*zend_object_count_elements_t)(zval *object, long *count );

typedef int (*zend_object_get_closure_t)(zval *obj, zend_class_entry **ce_ptr, union _zend_function **fptr_ptr, zval **zobj_ptr );

typedef HashTable *(*zend_object_get_gc_t)(zval *object, zval ***table, int *n );

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
 zend_object_get_debug_info_t get_debug_info;
 zend_object_get_closure_t get_closure;
 zend_object_get_gc_t get_gc;
};

extern __attribute__ ((visibility("default"))) zend_object_handlers std_object_handlers;


__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_static_method(zend_class_entry *ce, const char *function_name_strval, int function_name_strlen, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zval **zend_std_get_static_property(zend_class_entry *ce, const char *property_name, int property_name_len, zend_bool silent, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zend_bool zend_std_unset_static_property(zend_class_entry *ce, const char *property_name, int property_name_len, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_constructor(zval *object );
__attribute__ ((visibility("default"))) struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zval *member, int silent );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_properties(zval *object );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_debug_info(zval *object, int *is_temp );
__attribute__ ((visibility("default"))) int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type );
__attribute__ ((visibility("default"))) void zend_std_write_property(zval *object, zval *member, zval *value, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) void rebuild_object_properties(zend_object *zobj);





__attribute__ ((visibility("default"))) int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, char *function_name_strval, int function_name_strlen );

__attribute__ ((visibility("default"))) int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

__attribute__ ((visibility("default"))) int zend_check_property_access(zend_object *zobj, const char *prop_info_name, int prop_info_name_len );

__attribute__ ((visibility("default"))) void zend_std_call_user_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 306 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2

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
 zend_uint refcount__gc;
 zend_uchar type;
 zend_uchar is_ref__gc;
};
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"
static inline __attribute__((always_inline)) zend_uint zval_refcount_p(zval* pz) {
 return pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_uint zval_set_refcount_p(zval* pz, zend_uint rc) {
 return pz->refcount__gc = rc;
}

static inline __attribute__((always_inline)) zend_uint zval_addref_p(zval* pz) {
 return ++pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_uint zval_delref_p(zval* pz) {
 return --pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_bool zval_isref_p(zval* pz) {
 return pz->is_ref__gc;
}

static inline __attribute__((always_inline)) zend_bool zval_set_isref_p(zval* pz) {
 return pz->is_ref__gc = 1;
}

static inline __attribute__((always_inline)) zend_bool zval_unset_isref_p(zval* pz) {
 return pz->is_ref__gc = 0;
}

static inline __attribute__((always_inline)) zend_bool zval_set_isref_to_p(zval* pz, zend_bool isref) {
 return pz->is_ref__gc = isref;
}





union _zend_function;

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_iterators.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_iterators.h"
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



__attribute__ ((visibility("default"))) enum zend_object_iterator_kind zend_iterator_unwrap(zval *array_ptr, zend_object_iterator **iter );


__attribute__ ((visibility("default"))) zval *zend_iterator_wrap(zend_object_iterator *iter );

__attribute__ ((visibility("default"))) void zend_register_iterator_wrapper(void);

# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2

struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_trait_method_reference {
 const char* method_name;
 unsigned int mname_len;

 zend_class_entry *ce;

 const char* class_name;
 unsigned int cname_len;
};
typedef struct _zend_trait_method_reference zend_trait_method_reference;

struct _zend_trait_precedence {
 zend_trait_method_reference *trait_method;

 zend_class_entry** exclude_from_classes;

 union _zend_function* function;
};
typedef struct _zend_trait_precedence zend_trait_precedence;

struct _zend_trait_alias {
 zend_trait_method_reference *trait_method;




 const char* alias;
 unsigned int alias_len;




 zend_uint modifiers;

 union _zend_function* function;
};
typedef struct _zend_trait_alias zend_trait_alias;

struct _zend_class_entry {
 char type;
 const char *name;
 zend_uint name_length;
 struct _zend_class_entry *parent;
 int refcount;
 zend_uint ce_flags;

 HashTable function_table;
 HashTable properties_info;
 zval **default_properties_table;
 zval **default_static_members_table;
 zval **static_members_table;
 HashTable constants_table;
 int default_properties_count;
 int default_static_members_count;

 union _zend_function *constructor;
 union _zend_function *destructor;
 union _zend_function *clone;
 union _zend_function *__get;
 union _zend_function *__set;
 union _zend_function *__unset;
 union _zend_function *__isset;
 union _zend_function *__call;
 union _zend_function *__callstatic;
 union _zend_function *__tostring;
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object_value (*create_object)(zend_class_entry *class_type );
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref );
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type );
 union _zend_function *(*get_static_method)(zend_class_entry *ce, char* method, int method_len );


 int (*serialize)(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
 int (*unserialize)(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

 zend_class_entry **interfaces;
 zend_uint num_interfaces;

 zend_class_entry **traits;
 zend_uint num_traits;
 zend_trait_alias **trait_aliases;
 zend_trait_precedence **trait_precedences;

 union {
  struct {
   const char *filename;
   zend_uint line_start;
   zend_uint line_end;
   const char *doc_comment;
   zend_uint doc_comment_len;
  } user;
  struct {
   const struct _zend_function_entry *builtin_functions;
   struct _zend_module_entry *module;
  } internal;
 } info;
};

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_stream.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_stream.h"
typedef size_t (*zend_stream_fsizer_t)(void* handle );
typedef size_t (*zend_stream_reader_t)(void* handle, char *buf, size_t len );
typedef void (*zend_stream_closer_t)(void* handle );



typedef enum {
 ZEND_HANDLE_FILENAME,
 ZEND_HANDLE_FD,
 ZEND_HANDLE_FP,
 ZEND_HANDLE_STREAM,
 ZEND_HANDLE_MAPPED
} zend_stream_type;

typedef struct _zend_mmap {
 size_t len;
 size_t pos;
 void *map;
 char *buf;
 void *old_handle;
 zend_stream_closer_t old_closer;
} zend_mmap;

typedef struct _zend_stream {
 void *handle;
 int isatty;
 zend_mmap mmap;
 zend_stream_reader_t reader;
 zend_stream_fsizer_t fsizer;
 zend_stream_closer_t closer;
} zend_stream;

typedef struct _zend_file_handle {
 zend_stream_type type;
 const char *filename;
 char *opened_path;
 union {
  int fd;
  FILE *fp;
  zend_stream stream;
 } handle;
 zend_bool free_filename;
} zend_file_handle;


__attribute__ ((visibility("default"))) int zend_stream_open(const char *filename, zend_file_handle *handle );
__attribute__ ((visibility("default"))) int zend_stream_fixup(zend_file_handle *file_handle, char **buf, size_t *len );
__attribute__ ((visibility("default"))) void zend_file_handle_dtor(zend_file_handle *fh );
__attribute__ ((visibility("default"))) int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);

# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, const void *data );




 int (*get_configuration_directive)(const char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks);
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 int (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len );
 char *(*resolve_path_function)(const char *filename, int filename_len );
} zend_utility_functions;

typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;

typedef int (*zend_write_func_t)(const char *str, uint str_length);
# 593 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 631 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"

__attribute__ ((visibility("default"))) char *get_zend_version(void);
__attribute__ ((visibility("default"))) void zend_make_printable_zval(zval *expr, zval *expr_copy, int *use_copy);
__attribute__ ((visibility("default"))) int zend_print_zval(zval *expr, int indent);
__attribute__ ((visibility("default"))) int zend_print_zval_ex(zend_write_func_t write_func, zval *expr, int indent);
__attribute__ ((visibility("default"))) void zend_print_zval_r(zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_print_flat_zval_r(zval *expr );
__attribute__ ((visibility("default"))) void zend_print_zval_r_ex(zend_write_func_t write_func, zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_output_debug_string(zend_bool trigger_break, const char *format, ...) __attribute__ ((format(printf, 2, 3)));


void zend_activate(void);
void zend_deactivate(void);
void zend_call_destructors(void);
void zend_activate_modules(void);
void zend_deactivate_modules(void);
void zend_post_deactivate_modules(void);








__attribute__ ((visibility("default"))) void free_estring(char **str_p);

# 676 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"

extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );




extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks);
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern void (*zend_on_timeout)(int seconds );
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len );
extern __attribute__ ((visibility("default"))) char *(*zend_resolve_path)(const char *filename, int filename_len );

__attribute__ ((visibility("default"))) void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;









# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_signal.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_signal.h"
# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 104 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember (__const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 118 "/usr/include/bits/sigset.h" 3 4
extern __inline int __sigismember (__const __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return (__set->__val[__word] & __mask) ? 1 : 0; }
extern __inline int __sigaddset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] |= __mask), 0); }
extern __inline int __sigdelset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] &= ~__mask), 0); }
# 34 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 58 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 59 "/usr/include/signal.h" 2 3 4
# 76 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 77 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 51 "/usr/include/bits/siginfo.h" 3 4
typedef struct siginfo
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


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
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;
      } _sifields;
  } siginfo_t;
# 129 "/usr/include/bits/siginfo.h" 3 4
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

  BUS_OBJERR

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


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
# 273 "/usr/include/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     void *_attribute;
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
# 80 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
# 113 "/usr/include/signal.h" 3 4





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));






extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__));




extern int raise (int __sig) __attribute__ ((__nothrow__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__));




extern void psignal (int __sig, __const char *__s);




extern void psiginfo (__const siginfo_t *__pinfo, __const char *__s);
# 168 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);
# 177 "/usr/include/signal.h" 3 4
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 196 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
# 211 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (__const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (__const sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, __const sigset_t *__left,
        __const sigset_t *__right) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, __const sigset_t *__left,
       __const sigset_t *__right) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3)));




# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 25 "/usr/include/bits/sigaction.h" 3 4
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
# 253 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, __const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__));






extern int sigsuspend (__const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, __const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (__const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (__const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (__const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    __const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, __const union sigval __val)
     __attribute__ ((__nothrow__));
# 310 "/usr/include/signal.h" 3 4
extern __const char *__const _sys_siglist[65];
extern __const char *__const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 334 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, __const struct sigvec *__vec,
     struct sigvec *__ovec) __attribute__ ((__nothrow__));



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/bits/sigcontext.h" 3 4
# 1 "/usr/include/asm/sigcontext.h" 1 3 4




# 1 "/usr/include/linux/types.h" 1 3 4



# 1 "/usr/include/asm/types.h" 1 3 4





# 1 "/usr/include/asm-generic/types.h" 1 3 4






# 1 "/usr/include/asm-generic/int-ll64.h" 1 3 4
# 11 "/usr/include/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/asm/bitsperlong.h" 1 3 4
# 10 "/usr/include/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 11 "/usr/include/asm/bitsperlong.h" 2 3 4
# 12 "/usr/include/asm-generic/int-ll64.h" 2 3 4







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 8 "/usr/include/asm-generic/types.h" 2 3 4



typedef unsigned short umode_t;
# 7 "/usr/include/asm/types.h" 2 3 4
# 5 "/usr/include/linux/types.h" 2 3 4



# 1 "/usr/include/linux/posix_types.h" 1 3 4



# 1 "/usr/include/linux/stddef.h" 1 3 4
# 5 "/usr/include/linux/posix_types.h" 2 3 4
# 36 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/asm/posix_types.h" 1 3 4

# 1 "/usr/include/asm/posix_types_32.h" 1 3 4
# 10 "/usr/include/asm/posix_types_32.h" 3 4
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;
# 3 "/usr/include/asm/posix_types.h" 2 3 4
# 48 "/usr/include/linux/posix_types.h" 2 3 4
# 9 "/usr/include/linux/types.h" 2 3 4
# 27 "/usr/include/linux/types.h" 3 4
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 6 "/usr/include/asm/sigcontext.h" 2 3 4
# 23 "/usr/include/asm/sigcontext.h" 3 4
struct _fpx_sw_bytes {
 __u32 magic1;
 __u32 extended_size;


 __u64 xstate_bv;




 __u32 xstate_size;




 __u32 padding[7];
};
# 56 "/usr/include/asm/sigcontext.h" 3 4
struct _fpreg {
 unsigned short significand[4];
 unsigned short exponent;
};

struct _fpxreg {
 unsigned short significand[4];
 unsigned short exponent;
 unsigned short padding[3];
};

struct _xmmreg {
 unsigned long element[4];
};

struct _fpstate {

 unsigned long cw;
 unsigned long sw;
 unsigned long tag;
 unsigned long ipoff;
 unsigned long cssel;
 unsigned long dataoff;
 unsigned long datasel;
 struct _fpreg _st[8];
 unsigned short status;
 unsigned short magic;


 unsigned long _fxsr_env[6];
 unsigned long mxcsr;
 unsigned long reserved;
 struct _fpxreg _fxsr_st[8];
 struct _xmmreg _xmm[8];
 unsigned long padding1[44];

 union {
  unsigned long padding2[12];
  struct _fpx_sw_bytes sw_reserved;

 };
};






struct sigcontext {
 unsigned short gs, __gsh;
 unsigned short fs, __fsh;
 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned long edi;
 unsigned long esi;
 unsigned long ebp;
 unsigned long esp;
 unsigned long ebx;
 unsigned long edx;
 unsigned long ecx;
 unsigned long eax;
 unsigned long trapno;
 unsigned long err;
 unsigned long eip;
 unsigned short cs, __csh;
 unsigned long eflags;
 unsigned long esp_at_signal;
 unsigned short ss, __ssh;
 struct _fpstate *fpstate;
 unsigned long oldmask;
 unsigned long cr2;
};
# 190 "/usr/include/asm/sigcontext.h" 3 4
struct _xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};

struct _ymmh_state {

 __u32 ymmh_space[64];
};







struct _xstate {
 struct _fpstate fpstate;
 struct _xsave_hdr xstate_hdr;
 struct _ymmh_state ymmh;

};
# 29 "/usr/include/bits/sigcontext.h" 2 3 4
# 340 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__));






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 350 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__));

# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 26 "/usr/include/bits/sigstack.h" 3 4
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
# 50 "/usr/include/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 357 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 24 "/usr/include/sys/ucontext.h" 2 3 4



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/sys/ucontext.h" 2 3 4



typedef int greg_t;





typedef greg_t gregset_t[19];



enum
{
  REG_GS = 0,

  REG_FS,

  REG_ES,

  REG_DS,

  REG_EDI,

  REG_ESI,

  REG_EBP,

  REG_ESP,

  REG_EBX,

  REG_EDX,

  REG_ECX,

  REG_EAX,

  REG_TRAPNO,

  REG_ERR,

  REG_EIP,

  REG_CS,

  REG_EFL,

  REG_UESP,

  REG_SS

};



struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
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
# 360 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));



extern int sigaltstack (__const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__));







extern int sighold (int __sig) __attribute__ ((__nothrow__));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__));


extern int sigignore (int __sig) __attribute__ ((__nothrow__));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__));






# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 31 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       __const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__));
# 396 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__));




# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_signal.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_signal.h"
typedef struct _zend_signal_entry_t {
 int flags;
 void* handler;
} zend_signal_entry_t;

typedef struct _zend_signal_t {
 int signo;
 siginfo_t *siginfo;
 void* context;
} zend_signal_t;

typedef struct _zend_signal_queue_t {
 zend_signal_t zend_signal;
 struct _zend_signal_queue_t *next;
} zend_signal_queue_t;


typedef struct _zend_signal_globals_t {
 int depth;
 int blocked;
 int running;
 int active;
 int initialized;
 zend_bool check;
 zend_signal_entry_t handlers[65];
 zend_signal_queue_t pstorage[32], *phead, *ptail, *pavail;
} zend_signal_globals_t;
# 74 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_signal.h"
extern __attribute__ ((visibility("default"))) zend_signal_globals_t zend_signal_globals;






void zend_signal_handler_defer(int signo, siginfo_t *siginfo, void *context);
void zend_signal_handler_unblock();
void zend_signal_activate(void);
void zend_signal_deactivate(void);
void zend_signal_startup();
void zend_signal_shutdown(void);
__attribute__ ((visibility("default"))) int zend_signal(int signo, void (*handler)(int) );
__attribute__ ((visibility("default"))) int zend_sigaction(int signo, const struct sigaction *act, struct sigaction *oldact );
# 711 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2






__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 829 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_gc.h" 1
# 81 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_gc.h"
typedef struct _gc_root_buffer {
 struct _gc_root_buffer *prev;
 struct _gc_root_buffer *next;
 zend_object_handle handle;
 union {
  zval *pz;
  const zend_object_handlers *handlers;
 } u;
} gc_root_buffer;

typedef struct _zval_gc_info {
 zval z;
 union {
  gc_root_buffer *buffered;
  struct _zval_gc_info *next;
 } u;
} zval_gc_info;

typedef struct _zend_gc_globals {
 zend_bool gc_enabled;
 zend_bool gc_active;

 gc_root_buffer *buf;
 gc_root_buffer roots;
 gc_root_buffer *unused;
 gc_root_buffer *first_unused;
 gc_root_buffer *last_unused;

 zval_gc_info *zval_to_free;
 zval_gc_info *free_list;
 zval_gc_info *next_to_free;

 zend_uint gc_runs;
 zend_uint collected;
# 129 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_zval_check_possible_root(zval *z )
{
 if (z->type == 4 || z->type == 5) {
  gc_zval_possible_root(z );
 }
}

static inline __attribute__((always_inline)) void gc_remove_from_buffer(gc_root_buffer *root )
{
 root->next->prev = root->prev;
 root->prev->next = root->next;
 root->prev = (gc_globals.unused);
 (gc_globals.unused) = root;
 ;
}
# 830 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h"
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4




# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 47 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;




# 69 "/usr/include/errno.h" 3 4
typedef int error_t;
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h" 2

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



# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h" 2





# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_strtod.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_multiply.h" 1
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h" 2








__attribute__ ((visibility("default"))) int add_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int sub_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mul_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int div_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mod_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int boolean_xor_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int boolean_not_function(zval *result, zval *op1 );
__attribute__ ((visibility("default"))) int bitwise_not_function(zval *result, zval *op1 );
__attribute__ ((visibility("default"))) int bitwise_or_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int bitwise_and_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int bitwise_xor_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int shift_left_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int shift_right_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int concat_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) int is_equal_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_identical_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_not_identical_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_not_equal_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_smaller_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) zend_bool instanceof_function_ex(const zend_class_entry *instance_ce, const zend_class_entry *ce, zend_bool interfaces_only );
__attribute__ ((visibility("default"))) zend_bool instanceof_function(const zend_class_entry *instance_ce, const zend_class_entry *ce );





static inline __attribute__((always_inline)) long zend_dval_to_lval(double d)
{
 if (d > 2147483647L || d < (-2147483647L - 1L)) {
  return (long)(unsigned long)(zend_long64) d;
 }
 return (long) d;
}
# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h"
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




  for (type = 1; !(digits >= 11 && (dval || allow_errors == 1)); digits++, ptr++) {
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
   if (digits >= 11) {
    dp_or_e = -1;
    goto process_double;
   }
  } else if (!(digits < 4 * 2 || (digits == 4 * 2 && ptr[-digits] <= '7'))) {
   if (dval) {
    local_dval = zend_hex_strtod(str, &ptr);
   }
   type = 2;
  }
 } else if (*ptr == '.' && ((ptr[1]) >= '0' && (ptr[1]) <= '9')) {
process_double:
  type = 2;



  if (dval) {
   local_dval = zend_strtod(str, &ptr);
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
  if (digits == 11 - 1) {
   int cmp = __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (&ptr[-digits]) && __builtin_constant_p (long_min_digits) && (__s1_len = strlen (&ptr[-digits]), __s2_len = strlen (long_min_digits), (!((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) || __s2_len >= 4)) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) && (__s1_len = strlen (&ptr[-digits]), __s1_len < 4) ? (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) (long_min_digits); register int __result = (((__const unsigned char *) (__const char *) (&ptr[-digits]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (&ptr[-digits]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (&ptr[-digits]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (&ptr[-digits]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) && (__s2_len = strlen (long_min_digits), __s2_len < 4) ? (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (&ptr[-digits]); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) (long_min_digits))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) (long_min_digits))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) (long_min_digits))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) (long_min_digits))[3]); } } __result; }))) : __builtin_strcmp (&ptr[-digits], long_min_digits)))); });

   if (!(cmp < 0 || (cmp == 0 && *str == '-'))) {
    if (dval) {
     *dval = zend_strtod(str, ((void *)0));
    }

    return 2;
   }
  }

  if (lval) {
   *lval = strtol(str, ((void *)0), base);
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

 if (needle_len == 1) {
  return (char *)memchr(p, *needle, (end-p));
 }

 if (needle_len > end-haystack) {
  return ((void *)0);
 }

 end -= needle_len;

 while (p <= end) {
  if ((p = (char *)memchr(p, *needle, (end-p+1))) && ne == p[needle_len-1]) {
   if (!memcmp(needle, p, needle_len-1)) {
    return p;
   }
  }

  if (p == ((void *)0)) {
   return ((void *)0);
  }

  p++;
 }

 return ((void *)0);
}

static inline const void *zend_memrchr(const void *s, int c, size_t n)
{
 register const unsigned char *e;

 if (n <= 0) {
  return ((void *)0);
 }

 for (e = (const unsigned char *)s + n - 1; e >= (const unsigned char *)s; e--) {
  if (*e == (const unsigned char)c) {
   return (const void *)e;
  }
 }

 return ((void *)0);
}


__attribute__ ((visibility("default"))) int increment_function(zval *op1);
__attribute__ ((visibility("default"))) int decrement_function(zval *op2);

__attribute__ ((visibility("default"))) void convert_scalar_to_number(zval *op );
__attribute__ ((visibility("default"))) void _convert_to_string(zval *op );
__attribute__ ((visibility("default"))) void convert_to_long(zval *op);
__attribute__ ((visibility("default"))) void convert_to_double(zval *op);
__attribute__ ((visibility("default"))) void convert_to_long_base(zval *op, int base);
__attribute__ ((visibility("default"))) void convert_to_null(zval *op);
__attribute__ ((visibility("default"))) void convert_to_boolean(zval *op);
__attribute__ ((visibility("default"))) void convert_to_array(zval *op);
__attribute__ ((visibility("default"))) void convert_to_object(zval *op);
__attribute__ ((visibility("default"))) void multi_convert_to_long_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_double_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_string_ex(int argc, ...);
__attribute__ ((visibility("default"))) int add_char_to_string(zval *result, const zval *op1, const zval *op2);
__attribute__ ((visibility("default"))) int add_string_to_string(zval *result, const zval *op1, const zval *op2);


__attribute__ ((visibility("default"))) double zend_string_to_double(const char *number, zend_uint length);

__attribute__ ((visibility("default"))) int zval_is_true(zval *op);
__attribute__ ((visibility("default"))) int compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int numeric_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive );
__attribute__ ((visibility("default"))) int string_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_case_compare_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) int string_locale_compare_function(zval *result, zval *op1, zval *op2 );


__attribute__ ((visibility("default"))) void zend_str_tolower(char *str, unsigned int length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_copy(char *dest, const char *source, unsigned int length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_dup(const char *source, unsigned int length);

__attribute__ ((visibility("default"))) int zend_binary_zval_strcmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_strcmp(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncmp(const char *s1, uint len1, const char *s2, uint len2, uint length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp(const char *s1, uint len1, const char *s2, uint len2, uint length);

__attribute__ ((visibility("default"))) void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
__attribute__ ((visibility("default"))) void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
__attribute__ ((visibility("default"))) void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
__attribute__ ((visibility("default"))) void zend_compare_objects(zval *result, zval *o1, zval *o2 );

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) long zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );

# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h"
static inline __attribute__((always_inline)) int fast_increment_function(zval *op1)
{
 if (__builtin_expect((*op1).type == 1, 1)) {

  __asm__(
   "incl (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x0, (%0)\n\t"
   "movl $0x41e00000, 0x4(%0)\n\t"
   "movb $0x2,0xc(%0)\n"
   "0:"
   :
   : "r"(op1));
# 488 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h"
  return 0;
 }
 return increment_function(op1);
}

static inline __attribute__((always_inline)) int fast_decrement_function(zval *op1)
{
 if (__builtin_expect((*op1).type == 1, 1)) {

  __asm__(
   "decl (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x00200000, (%0)\n\t"
   "movl $0xc1e00000, 0x4(%0)\n\t"
   "movb $0x2,0xc(%0)\n"
   "0:"
   :
   : "r"(op1));
# 525 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h"
  return 0;
 }
 return decrement_function(op1);
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {

  __asm__(
   "movl	(%1), %%eax\n\t"
   "addl   (%2), %%eax\n\t"
   "jo     0f\n\t"
   "movl   %%eax, (%0)\n\t"
   "movb   $0x1,0xc(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildl	(%1)\n\t"
   "fildl	(%2)\n\t"
   "faddp	%%st, %%st(1)\n\t"
   "movb   $0x2,0xc(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(result),
     "r"(op1),
     "r"(op2)
   : "eax");
# 585 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h"
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) + (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval + (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval + ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return add_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_sub_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {

  __asm__(
   "movl	(%1), %%eax\n\t"
   "subl   (%2), %%eax\n\t"
   "jo     0f\n\t"
   "movl   %%eax, (%0)\n\t"
   "movb   $0x1,0xc(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildl	(%2)\n\t"
   "fildl	(%1)\n\t"



   "fsubp	%%st, %%st(1)\n\t"

   "movb   $0x2,0xc(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(result),
     "r"(op1),
     "r"(op2)
   : "eax");
# 668 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_operators.h"
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) - (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval - (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval - ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return sub_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mul_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   long overflow;

   do { long __tmpvar; __asm__ ("imul %3,%0\n" "adc $0,%1" : "=r"(__tmpvar),"=r"(overflow) : "0"((*op1).value.lval), "r"((*op2).value.lval), "1"(0)); if (overflow) ((*result).value.dval) = (double) ((*op1).value.lval) * (double) ((*op2).value.lval); else ((*result).value.lval) = __tmpvar; } while (0);
   (*result).type = overflow ? 2 : 1;
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) * (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval * (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval * ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return mul_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_div_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1) && 0) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   } else if (__builtin_expect((*op2).value.lval == -1 && (*op1).value.lval == (-2147483647L - 1L), 0)) {

    (*result).value.dval = (double) (-2147483647L - 1L) / -1;
    (*result).type = 2;
   } else if (__builtin_expect((*op1).value.lval % (*op2).value.lval == 0, 1)) {

    (*result).value.lval = (*op1).value.lval / (*op2).value.lval;
    (*result).type = 1;
   } else {
    (*result).value.dval = ((double) (*op1).value.lval) / ((double)(*op2).value.lval);
    (*result).type = 2;
   }
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   if (__builtin_expect((*op2).value.dval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = ((double)(*op1).value.lval) / (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1) && 0) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   if (__builtin_expect((*op2).value.dval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = (*op1).value.dval / (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = (*op1).value.dval / ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return div_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mod_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   } else if (__builtin_expect((*op2).value.lval == -1, 0)) {

    (*result).value.lval = 0;
    (*result).type = 1;
    return 0;
   }
   (*result).value.lval = (*op1).value.lval % (*op2).value.lval;
   (*result).type = 1;
   return 0;
  }
 }
 return mod_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval == (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) == (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval == (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval == ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_not_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval != (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) != (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval != (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval != ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval != 0;
}

static inline __attribute__((always_inline)) int fast_is_smaller_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval < (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) < (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval < (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval < ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval < 0;
}

static inline __attribute__((always_inline)) int fast_is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval <= (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) <= (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval <= (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval <= ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval <= 0;
}
# 831 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_variables.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_variables.h"


__attribute__ ((visibility("default"))) void _zval_dtor_func(zval *zvalue );

static inline __attribute__((always_inline)) void _zval_dtor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_dtor_func(zvalue );
}

__attribute__ ((visibility("default"))) void _zval_copy_ctor_func(zval *zvalue );

static inline __attribute__((always_inline)) void _zval_copy_ctor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_copy_ctor_func(zvalue );
}

__attribute__ ((visibility("default"))) int zval_copy_static_var(zval **p , int num_args, va_list args, zend_hash_key *key);

__attribute__ ((visibility("default"))) int zend_print_variable(zval *var);
__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval **zval_ptr );
__attribute__ ((visibility("default"))) void _zval_internal_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval **zvalue );
__attribute__ ((visibility("default"))) void _zval_dtor_wrapper(zval *zvalue);
# 78 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 832 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend.h" 2

typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} zend_error_handling_t;

typedef struct {
 zend_error_handling_t handling;
 zend_class_entry *exception;
 zval *user_handler;
} zend_error_handling;

__attribute__ ((visibility("default"))) void zend_save_error_handling(zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_replace_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class, zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_restore_error_handling(zend_error_handling *saved );
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h" 1
# 53 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;

typedef struct _zend_compiler_context {
 zend_uint opcodes_size;
 int vars_size;
 int literals_size;
 int current_brk_cont;
 int backpatch_count;
 HashTable *labels;
} zend_compiler_context;

typedef struct _zend_literal {
 zval constant;
 zend_ulong hash_value;
 zend_uint cache_slot;
} zend_literal;




typedef union _znode_op {
 zend_uint constant;
 zend_uint var;
 zend_uint num;
 zend_ulong hash;
 zend_uint opline_num;
 zend_op *jmp_addr;
 zval *zv;
 zend_literal *literal;
  void *ptr;
} znode_op;

typedef struct _znode {
 int op_type;
 union {
  znode_op op;
  zval constant;
  zend_op_array *op_array;
 } u;
 zend_uint EA;
} znode;

typedef struct _zend_execute_data zend_execute_data;




typedef int (*user_opcode_handler_t) (zend_execute_data *execute_data );
typedef int (__attribute__((fastcall)) *opcode_handler_t) (zend_execute_data *execute_data );

extern __attribute__ ((visibility("default"))) opcode_handler_t *zend_opcode_handlers;

struct _zend_op {
 opcode_handler_t handler;
 znode_op op1;
 znode_op op2;
 znode_op result;
 ulong extended_value;
 uint lineno;
 zend_uchar opcode;
 zend_uchar op1_type;
 zend_uchar op2_type;
 zend_uchar result_type;
};


typedef struct _zend_brk_cont_element {
 int start;
 int cont;
 int brk;
 int parent;
} zend_brk_cont_element;

typedef struct _zend_label {
 int brk_cont;
 zend_uint opline_num;
} zend_label;

typedef struct _zend_try_catch_element {
 zend_uint try_op;
 zend_uint catch_op;
} zend_try_catch_element;
# 210 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 const char *name;
 int name_length;
 ulong h;
 int offset;
 const char *doc_comment;
 int doc_comment_len;
 zend_class_entry *ce;
} zend_property_info;


typedef struct _zend_arg_info {
 const char *name;
 zend_uint name_len;
 const char *class_name;
 zend_uint class_name_len;
 zend_uchar type_hint;
 zend_bool allow_null;
 zend_bool pass_by_reference;
} zend_arg_info;





typedef struct _zend_internal_function_info {
 const char *_name;
 zend_uint _name_len;
 const char *_class_name;
 zend_uint required_num_args;
 zend_uchar _type_hint;
 zend_bool return_reference;
 zend_bool pass_rest_by_reference;
} zend_internal_function_info;

typedef struct _zend_compiled_variable {
 const char *name;
 int name_len;
 ulong hash_value;
} zend_compiled_variable;

struct _zend_op_array {

 zend_uchar type;
 const char *function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 zend_uint *refcount;

 zend_op *opcodes;
 zend_uint last;

 zend_compiled_variable *vars;
 int last_var;

 zend_uint T;

 zend_brk_cont_element *brk_cont_array;
 int last_brk_cont;

 zend_try_catch_element *try_catch_array;
 int last_try_catch;


 HashTable *static_variables;

 zend_uint this_var;

 const char *filename;
 zend_uint line_start;
 zend_uint line_end;
 const char *doc_comment;
 zend_uint doc_comment_len;
 zend_uint early_binding;

 zend_literal *literals;
 int last_literal;

 void **run_time_cache;
 int last_cache_slot;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 const char * function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_module_entry *module;
} zend_internal_function;



typedef union _zend_function {
 zend_uchar type;

 struct {
  zend_uchar type;
  const char *function_name;
  zend_class_entry *scope;
  zend_uint fn_flags;
  union _zend_function *prototype;
  zend_uint num_args;
  zend_uint required_num_args;
  zend_arg_info *arg_info;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
} zend_function;


typedef struct _zend_function_state {
 zend_function *function;
 void **arguments;
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
 zend_class_entry *called_scope;
 zend_op_array *op_array;
 zval *object;
 union _temp_variable *Ts;
 zval ***CVs;
 HashTable *symbol_table;
 struct _zend_execute_data *prev_execute_data;
 zval *old_error_reporting;
 zend_bool nested;
 zval **original_return_value;
 zend_class_entry *current_scope;
 zend_class_entry *current_called_scope;
 zval *current_this;
 zval *current_object;
};
# 397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 28 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 29 "/usr/include/bits/setjmp.h" 3 4
typedef int __jmp_buf[6];
# 31 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 32 "/usr/include/setjmp.h" 2 3 4



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
# 78 "/usr/include/setjmp.h" 3 4




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 110 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 120 "/usr/include/setjmp.h" 3 4

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals_macros.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;









extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_stack.h"
typedef struct _zend_stack {
 int top, max;
 void **elements;
} zend_stack;





__attribute__ ((visibility("default"))) int zend_stack_init(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_push(zend_stack *stack, const void *element, int size);
__attribute__ ((visibility("default"))) int zend_stack_top(const zend_stack *stack, void **element);
__attribute__ ((visibility("default"))) int zend_stack_del_top(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_int_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_is_empty(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_destroy(zend_stack *stack);
__attribute__ ((visibility("default"))) void **zend_stack_base(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_count(const zend_stack *stack);
__attribute__ ((visibility("default"))) void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
__attribute__ ((visibility("default"))) void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_ptr_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_ptr_stack.h"
typedef struct _zend_ptr_stack {
 int top, max;
 void **elements;
 void **top_element;
 zend_bool persistent;
} zend_ptr_stack;





__attribute__ ((visibility("default"))) void zend_ptr_stack_init(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_init_ex(zend_ptr_stack *stack, zend_bool persistent);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_push(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_pop(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_destroy(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_apply(zend_ptr_stack *stack, void (*func)(void *));
__attribute__ ((visibility("default"))) void zend_ptr_stack_clean(zend_ptr_stack *stack, void (*func)(void *), zend_bool free_elements);
__attribute__ ((visibility("default"))) int zend_ptr_stack_num_elements(zend_ptr_stack *stack);

# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_ptr_stack.h"
static inline __attribute__((always_inline)) void zend_ptr_stack_3_push(zend_ptr_stack *stack, void *a, void *b, void *c)
{


 if (stack->top+3 > stack->max) { do { stack->max += 64; } while (stack->top+3 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top += 3;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;
 *(stack->top_element++) = c;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a, void *b)
{


 if (stack->top+2 > stack->max) { do { stack->max += 64; } while (stack->top+2 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top += 2;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_3_pop(zend_ptr_stack *stack, void **a, void **b, void **c)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 *c = *(--stack->top_element);
 stack->top -= 3;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_pop(zend_ptr_stack *stack, void **a, void **b)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 stack->top -= 2;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_push(zend_ptr_stack *stack, void *ptr)
{
 if (stack->top+1 > stack->max) { do { stack->max += 64; } while (stack->top+1 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top++;
 *(stack->top_element++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_ptr_stack_pop(zend_ptr_stack *stack)
{
 stack->top--;
 return *(--stack->top_element);
}
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_objects.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_objects_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_objects_API.h"
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
   const zend_object_handlers *handlers;
   zend_uint refcount;
   gc_root_buffer *buffered;
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



__attribute__ ((visibility("default"))) void zend_objects_store_init(zend_objects_store *objects, zend_uint init_size);
__attribute__ ((visibility("default"))) void zend_objects_store_call_destructors(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_mark_destructed(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_destroy(zend_objects_store *objects);


__attribute__ ((visibility("default"))) zend_object_handle zend_objects_store_put(void *object, zend_objects_store_dtor_t dtor, zend_objects_free_object_storage_t storage, zend_objects_store_clone_t clone );

__attribute__ ((visibility("default"))) void zend_objects_store_add_ref(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_store_del_ref(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_store_add_ref_by_handle(zend_object_handle handle );
__attribute__ ((visibility("default"))) void zend_objects_store_del_ref_by_handle_ex(zend_object_handle handle, const zend_object_handlers *handlers );
static inline __attribute__((always_inline)) void zend_objects_store_del_ref_by_handle(zend_object_handle handle ) {
 zend_objects_store_del_ref_by_handle_ex(handle, ((void *)0) );
}
__attribute__ ((visibility("default"))) zend_uint zend_objects_store_get_refcount(zval *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_store_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void *zend_object_store_get_object(const zval *object );
__attribute__ ((visibility("default"))) void *zend_object_store_get_object_by_handle(zend_object_handle handle );

__attribute__ ((visibility("default"))) void zend_object_store_set_object(zval *zobject, void *object );
__attribute__ ((visibility("default"))) void zend_object_store_ctor_failed(zval *zobject );

__attribute__ ((visibility("default"))) void zend_objects_store_free_object_storage(zend_objects_store *objects );



__attribute__ ((visibility("default"))) zval *zend_object_create_proxy(zval *object, zval *member );

__attribute__ ((visibility("default"))) zend_object_handlers *zend_get_std_object_handlers(void);

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_modules.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_modules.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_modules.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_build.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_modules.h" 2
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_modules.h"
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
typedef struct _zend_module_dep zend_module_dep;

struct _zend_module_entry {
 unsigned short size;
 unsigned int zend_api;
 unsigned char zend_debug;
 unsigned char zts;
 const struct _zend_ini_entry *ini_entry;
 const struct _zend_module_dep *deps;
 const char *name;
 const struct _zend_function_entry *functions;
 int (*module_startup_func)(int type, int module_number );
 int (*module_shutdown_func)(int type, int module_number );
 int (*request_startup_func)(int type, int module_number );
 int (*request_shutdown_func)(int type, int module_number );
 void (*info_func)(zend_module_entry *zend_module );
 const char *version;
 size_t globals_size;



 void* globals_ptr;

 void (*globals_ctor)(void *global );
 void (*globals_dtor)(void *global );
 int (*post_deactivate_func)(void);
 int module_started;
 unsigned char type;
 void *handle;
 int module_number;
 const char *build_id;
};
# 118 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_modules.h"
struct _zend_module_dep {
 const char *name;
 const char *rel;
 const char *version;
 unsigned char type;
};

extern __attribute__ ((visibility("default"))) HashTable module_registry;

void module_destructor(zend_module_entry *module);
int module_registry_cleanup(zend_module_entry *module );
int module_registry_request_startup(zend_module_entry *module );
int module_registry_unload_temp(const zend_module_entry *module );
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_float.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_float.h"
# 1 "/usr/include/fpu_control.h" 1 3 4
# 89 "/usr/include/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 100 "/usr/include/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_float.h" 2
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_multibyte.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_multibyte.h"
typedef struct _zend_encoding zend_encoding;

typedef size_t (*zend_encoding_filter)(unsigned char **str, size_t *str_length, const unsigned char *buf, size_t length );

typedef const zend_encoding* (*zend_encoding_fetcher)(const char *encoding_name );
typedef const char* (*zend_encoding_name_getter)(const zend_encoding *encoding);
typedef int (*zend_encoding_lexer_compatibility_checker)(const zend_encoding *encoding);
typedef const zend_encoding *(*zend_encoding_detector)(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size );
typedef size_t (*zend_encoding_converter)(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from );
typedef int (*zend_encoding_list_parser)(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent );
typedef const zend_encoding *(*zend_encoding_internal_encoding_getter)(void);
typedef int (*zend_encoding_internal_encoding_setter)(const zend_encoding *encoding );

typedef struct _zend_multibyte_functions {
    const char *provider_name;
    zend_encoding_fetcher encoding_fetcher;
    zend_encoding_name_getter encoding_name_getter;
    zend_encoding_lexer_compatibility_checker lexer_compatibility_checker;
    zend_encoding_detector encoding_detector;
    zend_encoding_converter encoding_converter;
    zend_encoding_list_parser encoding_list_parser;
    zend_encoding_internal_encoding_getter internal_encoding_getter;
    zend_encoding_internal_encoding_setter internal_encoding_setter;
} zend_multibyte_functions;






__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf8;


__attribute__ ((visibility("default"))) int zend_multibyte_set_functions(const zend_multibyte_functions *functions );
__attribute__ ((visibility("default"))) const zend_multibyte_functions *zend_multibyte_get_functions(void);

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_fetch_encoding(const char *name );
__attribute__ ((visibility("default"))) const char *zend_multibyte_get_encoding_name(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_check_lexer_compatibility(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_encoding_detector(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size );
__attribute__ ((visibility("default"))) size_t zend_multibyte_encoding_converter(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from );
__attribute__ ((visibility("default"))) int zend_multibyte_parse_encoding_list(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent );

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_internal_encoding(void);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_script_encoding(void);
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding(const zend_encoding **encoding_list, size_t encoding_list_size );
__attribute__ ((visibility("default"))) int zend_multibyte_set_internal_encoding(const zend_encoding *encoding );
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding_by_string(const char *new_value, size_t new_value_length );


# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h" 2
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_globals.h"
typedef struct _zend_declarables {
 zval ticks;
} zend_declarables;

typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;


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

 char *heredoc;
 int heredoc_len;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;

 HashTable filenames_table;

 HashTable *auto_globals;

 zend_bool parse_error;
 zend_bool in_compilation;
 zend_bool short_tags;
 zend_bool asp_tags;

 zend_declarables declarables;

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

 zend_uint compiler_options;

 zval *current_namespace;
 HashTable *current_import;
 zend_bool in_namespace;
 zend_bool has_bracketed_namespaces;

 zend_compiler_context context;
 zend_stack context_stack;


 char *interned_strings_start;
 char *interned_strings_end;
 char *interned_strings_top;
 char *interned_strings_snapshot_top;

 HashTable interned_strings;

 const zend_encoding **script_encoding_list;
 size_t script_encoding_list_size;
 zend_bool multibyte;
 zend_bool detect_unicode;
 zend_bool encoding_declared;





};


struct _zend_executor_globals {
 zval **return_value_ptr_ptr;

 zval uninitialized_zval;
 zval *uninitialized_zval_ptr;

 zval error_zval;
 zval *error_zval_ptr;

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
 zend_class_entry *called_scope;

 zval *This;

 long precision;

 int ticks_count;

 zend_bool in_execution;
 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;


 zend_bool no_extensions;






 HashTable regular_list;
 HashTable persistent_list;

 zend_vm_stack argument_stack;

 int user_error_handler_error_reporting;
 zval *user_error_handler;
 zval *user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_ptr_stack user_error_handlers;
 zend_ptr_stack user_exception_handlers;

 zend_error_handling_t error_handling;
 zend_class_entry *exception_class;


 int timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;
 zend_ini_entry *error_reporting_ini_entry;

 zend_objects_store objects_store;
 zval *exception, *prev_exception;
 zend_op *opline_before_exception;
 zend_op exception_op[3];

 struct _zend_execute_data *current_execute_data;

 struct _zend_module_entry *current_module;

 zend_property_info std_property_info;

 zend_bool active;

 zend_op *start_op;

 void *saved_fpu_cw_ptr;

 fpu_control_t saved_fpu_cw;


 void *reserved[4];
};

struct _zend_ini_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;

 char *filename;
 int lineno;


 int scanner_mode;
};

struct _zend_php_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;
};
# 398 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);
void zend_init_compiler_context(void);

extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );

__attribute__ ((visibility("default"))) int lex_scan(zval *zendlval );
void startup_scanner(void);
void shutdown_scanner(void);

__attribute__ ((visibility("default"))) char *zend_set_compiled_filename(const char *new_compiled_filename );
__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(char *original_compiled_filename );
__attribute__ ((visibility("default"))) char *zend_get_compiled_filename(void);
__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void);
__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void);

void zend_resolve_non_class_name(znode *element_name, zend_bool check_namespace );
void zend_resolve_class_name(znode *class_name, ulong fetch_type, int check_ns_name );
__attribute__ ((visibility("default"))) const char* zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var, int* name_len);
# 430 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h"
void zend_do_binary_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 );
void zend_do_unary_op(zend_uchar op, znode *result, const znode *op1 );
void zend_do_binary_assign_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 );
void zend_do_assign(znode *result, znode *variable, znode *value );
void zend_do_assign_ref(znode *result, const znode *lvar, const znode *rvar );
void fetch_simple_variable(znode *result, znode *varname, int bp );
void fetch_simple_variable_ex(znode *result, znode *varname, int bp, zend_uchar op );
void zend_do_indirect_references(znode *result, const znode *num_references, znode *variable );
void zend_do_fetch_static_variable(znode *varname, const znode *static_assignment, int fetch_type );
void zend_do_fetch_global_variable(znode *varname, const znode *static_assignment, int fetch_type );

void fetch_array_begin(znode *result, znode *varname, znode *first_dim );
void fetch_array_dim(znode *result, const znode *parent, const znode *dim );
void fetch_string_offset(znode *result, const znode *parent, const znode *offset );
void zend_do_fetch_static_member(znode *result, znode *class_znode );
void zend_do_print(znode *result, const znode *arg );
void zend_do_echo(const znode *arg );
typedef int (*unary_op_type)(zval *, zval * );
typedef int (*binary_op_type)(zval *, zval *, zval * );
__attribute__ ((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__ ((visibility("default"))) binary_op_type get_binary_op(int opcode);

void zend_do_while_cond(const znode *expr, znode *close_bracket_token );
void zend_do_while_end(const znode *while_token, const znode *close_bracket_token );
void zend_do_do_while_begin(void);
void zend_do_do_while_end(const znode *do_token, const znode *expr_open_bracket, const znode *expr );


void zend_do_if_cond(const znode *cond, znode *closing_bracket_token );
void zend_do_if_after_statement(const znode *closing_bracket_token, unsigned char initialize );
void zend_do_if_end(void);

void zend_do_for_cond(const znode *expr, znode *second_semicolon_token );
void zend_do_for_before_statement(const znode *cond_start, const znode *second_semicolon_token );
void zend_do_for_end(const znode *second_semicolon_token );

void zend_do_pre_incdec(znode *result, const znode *op1, zend_uchar op );
void zend_do_post_incdec(znode *result, const znode *op1, zend_uchar op );

void zend_do_begin_variable_parse(void);
void zend_do_end_variable_parse(znode *variable, int type, int arg_offset );

void zend_check_writable_variable(const znode *variable);

void zend_do_free(znode *op1 );

void zend_do_add_string(znode *result, const znode *op1, znode *op2 );
void zend_do_add_variable(znode *result, const znode *op1, const znode *op2 );

int zend_do_verify_access_types(const znode *current_access_type, const znode *new_modifier);
void zend_do_begin_function_declaration(znode *function_token, znode *function_name, int is_method, int return_reference, znode *fn_flags_znode );
void zend_do_end_function_declaration(const znode *function_token );
void zend_do_receive_arg(zend_uchar op, znode *varname, const znode *offset, const znode *initialization, znode *class_type, zend_bool pass_by_reference );
int zend_do_begin_function_call(znode *function_name, zend_bool check_namespace );
void zend_do_begin_method_call(znode *left_bracket );
void zend_do_clone(znode *result, const znode *expr );
void zend_do_begin_dynamic_function_call(znode *function_name, int prefix_len );
void zend_do_fetch_class(znode *result, znode *class_name );
void zend_do_build_full_name(znode *result, znode *prefix, znode *name, int is_class_member );
int zend_do_begin_class_member_function_call(znode *class_name, znode *method_name );
void zend_do_end_function_call(znode *function_name, znode *result, const znode *argument_list, int is_method, int is_dynamic_fcall );
void zend_do_return(znode *expr, int do_end_vparse );
void zend_do_handle_exception(void);

void zend_do_begin_lambda_function_declaration(znode *result, znode *function_token, int return_reference, int is_static );
void zend_do_fetch_lexical_variable(znode *varname, zend_bool is_ref );

void zend_do_try(znode *try_token );
void zend_do_begin_catch(znode *try_token, znode *catch_class, znode *catch_var, znode *first_catch );
void zend_do_end_catch(const znode *try_token );
void zend_do_throw(const znode *expr );

__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, zend_op *opline, HashTable *function_table, zend_bool compile_time);
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time );
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time );
__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface );
__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface );
void zend_do_implements_interface(znode *interface_znode );


void zend_add_trait_precedence(znode *precedence_znode );
void zend_add_trait_alias(znode *alias_znode );


void zend_do_implements_trait(znode *interface_znode );
__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait );
__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce );
void zend_prepare_trait_precedence(znode *result, znode *method_reference, znode *trait_list );
void zend_prepare_reference(znode *result, znode *class_name, znode *method_name );
void zend_prepare_trait_alias(znode *result, znode *method_reference, znode *modifiers, znode *alias );

void init_trait_alias_list(znode* result, const znode* trait_alias );
void add_trait_alias(znode* result, const znode* trait_alias );
void init_trait_alias(znode* result, const znode* method_name, const znode* alias, const znode* modifiers );

__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce );
void zend_do_early_binding(void);
__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array );

void zend_do_pass_param(znode *param, zend_uchar op, int offset );


void zend_do_boolean_or_begin(znode *expr1, znode *op_token );
void zend_do_boolean_or_end(znode *result, const znode *expr1, const znode *expr2, znode *op_token );
void zend_do_boolean_and_begin(znode *expr1, znode *op_token );
void zend_do_boolean_and_end(znode *result, const znode *expr1, const znode *expr2, const znode *op_token );

void zend_do_brk_cont(zend_uchar op, const znode *expr );

void zend_do_switch_cond(const znode *cond );
void zend_do_switch_end(const znode *case_list );
void zend_do_case_before_statement(const znode *case_list, znode *case_token, const znode *case_expr );
void zend_do_case_after_statement(znode *result, const znode *case_token );
void zend_do_default_before_statement(const znode *case_list, znode *default_token );

void zend_do_begin_class_declaration(const znode *class_token, znode *class_name, const znode *parent_class_name );
void zend_do_end_class_declaration(const znode *class_token, const znode *parent_token );
void zend_do_declare_property(const znode *var_name, const znode *value, zend_uint access_type );
void zend_do_declare_class_constant(znode *var_name, const znode *value );

void zend_do_fetch_property(znode *result, znode *object, const znode *property );

void zend_do_halt_compiler_register(void);

void zend_do_push_object(const znode *object );
void zend_do_pop_object(znode *object );


void zend_do_begin_new_object(znode *new_token, znode *class_type );
void zend_do_end_new_object(znode *result, const znode *new_token, const znode *argument_list );

void zend_do_fetch_constant(znode *result, znode *constant_container, znode *constant_name, int mode, zend_bool check_namespace );

void zend_do_shell_exec(znode *result, const znode *cmd );

void zend_do_init_array(znode *result, const znode *expr, const znode *offset, zend_bool is_ref );
void zend_do_add_array_element(znode *result, const znode *expr, const znode *offset, zend_bool is_ref );
void zend_do_add_static_array_element(znode *result, znode *offset, const znode *expr);
void zend_do_list_init(void);
void zend_do_list_end(znode *result, znode *expr );
void zend_do_add_list_element(const znode *element );
void zend_do_new_list_begin(void);
void zend_do_new_list_end(void);


void zend_init_list(void *result, void *item );
void zend_add_to_list(void *result, void *item );


void zend_do_cast(znode *result, const znode *expr, int type );
void zend_do_include_or_eval(int type, znode *result, const znode *op1 );

void zend_do_unset(const znode *variable );
void zend_do_isset_or_isempty(int type, znode *result, znode *variable );

void zend_do_instanceof(znode *result, const znode *expr, const znode *class_znode, int type );

void zend_do_foreach_begin(znode *foreach_token, znode *open_brackets_token, znode *array, znode *as_token, int variable );
void zend_do_foreach_cont(znode *foreach_token, const znode *open_brackets_token, const znode *as_token, znode *value, znode *key );
void zend_do_foreach_end(const znode *foreach_token, const znode *as_token );

void zend_do_declare_begin(void);
void zend_do_declare_stmt(znode *var, znode *val );
void zend_do_declare_end(const znode *declare_token );

void zend_do_exit(znode *result, const znode *message );

void zend_do_begin_silence(znode *strudel_token );
void zend_do_end_silence(const znode *strudel_token );

void zend_do_jmp_set(const znode *value, znode *jmp_token, znode *colon_token );
void zend_do_jmp_set_else(znode *result, const znode *false_value, const znode *jmp_token, const znode *colon_token );

void zend_do_begin_qm_op(const znode *cond, znode *qm_token );
void zend_do_qm_true(const znode *true_value, znode *qm_token, znode *colon_token );
void zend_do_qm_false(znode *result, const znode *false_value, const znode *qm_token, const znode *colon_token );

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_do_ticks(void);

void zend_do_abstract_method(const znode *function_name, znode *modifiers, const znode *body );

void zend_do_declare_constant(znode *name, znode *value );
void zend_do_build_namespace_name(znode *result, znode *prefix, znode *name );
void zend_do_begin_namespace(const znode *name, zend_bool with_brackets );
void zend_do_end_namespace(void);
void zend_verify_namespace(void);
void zend_do_use(znode *name, znode *new_name, int is_global );
void zend_do_end_compilation(void);

void zend_do_label(znode *label );
void zend_do_goto(const znode *label );
void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline, int pass2 );
void zend_release_labels(void);

__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function);






__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type );
__attribute__ ((visibility("default"))) zend_op_array *compile_string(zval *source_string, char *filename );
__attribute__ ((visibility("default"))) zend_op_array *compile_filename(int type, zval *filename );
__attribute__ ((visibility("default"))) int zend_execute_scripts(int type , zval **retval, int file_count, ...);
__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size );
__attribute__ ((visibility("default"))) void destroy_op_array(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) int zend_cleanup_class_data(zend_class_entry **pce );
__attribute__ ((visibility("default"))) int zend_cleanup_user_class_data(zend_class_entry **pce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_class_data(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_classes(void);
__attribute__ ((visibility("default"))) int zend_cleanup_function_data(zend_function *function );
__attribute__ ((visibility("default"))) int zend_cleanup_function_data_full(zend_function *function );

__attribute__ ((visibility("default"))) void destroy_zend_function(zend_function *function );
__attribute__ ((visibility("default"))) void zend_function_dtor(zend_function *function);
__attribute__ ((visibility("default"))) void destroy_zend_class(zend_class_entry **pce);
void zend_class_add_ref(zend_class_entry **ce);

__attribute__ ((visibility("default"))) void zend_mangle_property_name(char **dest, int *dest_length, const char *src1, int src1_length, const char *src2, int src2_length, int internal);
__attribute__ ((visibility("default"))) int zend_unmangle_property_name(const char *mangled_property, int mangled_property_len, const char **class_name, const char **prop_name);




zend_op *get_next_op(zend_op_array *op_array );
void init_op(zend_op *op );
int get_next_op_number(zend_op_array *op_array);
int print_class(zend_class_entry *class_entry );
void print_op_array(zend_op_array *op_array, int optimizations);
__attribute__ ((visibility("default"))) int pass_two(zend_op_array *op_array );
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array);
void zend_do_first_catch(znode *open_parentheses );
void zend_initialize_try_catch_element(const znode *try_token );
void zend_do_mark_last_catch(const znode *first_catch, const znode *last_additional_catch );
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name );
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers );
int zend_get_class_fetch_type(const char *class_name, uint class_name_len);

typedef zend_bool (*zend_auto_global_callback)(const char *name, uint name_len );
typedef struct _zend_auto_global {
 const char *name;
 uint name_len;
 zend_auto_global_callback auto_global_callback;
 zend_bool jit;
 zend_bool armed;
} zend_auto_global;

__attribute__ ((visibility("default"))) int zend_register_auto_global(const char *name, uint name_len, zend_bool jit, zend_auto_global_callback auto_global_callback );
__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global(const char *name, uint name_len );
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global_quick(const char *name, uint name_len, ulong hashval );
__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len);

int zendlex(znode *zendlval );

int zend_add_literal(zend_op_array *op_array, const zval *zv );



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_vm_opcodes.h" 1
# 698 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h" 2
# 820 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.h"

# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_constants.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_constants.h"

void clean_module_constants(int module_number );
void free_zend_constant(zend_constant *c);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) int zend_get_constant(const char *name, uint name_len, zval *result );
__attribute__ ((visibility("default"))) int zend_get_constant_ex(const char *name, uint name_len, zval *result, zend_class_entry *scope, ulong flags );
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, uint name_len, long lval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, uint name_len, double dval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, uint name_len, char *strval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
void copy_zend_constant(zend_constant *c);
zend_constant *zend_quick_get_constant(const zend_literal *key, ulong flags );

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_list.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_list.h"





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

 const char *type_name;

 int module_number;
 int resource_id;
 unsigned char type;
} zend_rsrc_list_dtors_entry;



__attribute__ ((visibility("default"))) int zend_register_list_destructors(void (*ld)(void *), void (*pld)(void *), int module_number);
__attribute__ ((visibility("default"))) int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, const char *type_name, int module_number);

void list_entry_destructor(void *ptr);
void plist_entry_destructor(void *ptr);

void zend_clean_module_rsrc_dtors(int module_number );
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_destroy_rsrc_list(HashTable *ht );
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

__attribute__ ((visibility("default"))) int zend_list_insert(void *ptr, int type );
__attribute__ ((visibility("default"))) int _zend_list_addref(int id );
__attribute__ ((visibility("default"))) int _zend_list_delete(int id );
__attribute__ ((visibility("default"))) void *_zend_list_find(int id, int *type );





__attribute__ ((visibility("default"))) int zend_register_resource(zval *rsrc_result, void *rsrc_pointer, int rsrc_type );
__attribute__ ((visibility("default"))) void *zend_fetch_resource(zval **passed_id , int default_id, const char *resource_type_name, int *found_resource_type, int num_resource_types, ...);

__attribute__ ((visibility("default"))) const char *zend_rsrc_list_get_rsrc_type(int resource );
__attribute__ ((visibility("default"))) int zend_fetch_list_dtor_id(char *type_name);

extern __attribute__ ((visibility("default"))) int le_index_ptr;
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_list.h"

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_execute.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_execute.h"
typedef union _temp_variable {
 zval tmp_var;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
 } var;
 struct {
  zval **ptr_ptr;
  zval *str;
  zend_uint offset;
 } str_offset;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  HashPointer fe_pos;
 } fe;
 zend_class_entry *class_entry;
} temp_variable;



__attribute__ ((visibility("default"))) extern void (*zend_execute)(zend_op_array *op_array );
__attribute__ ((visibility("default"))) extern void (*zend_execute_internal)(zend_execute_data *execute_data_ptr, int return_value_used );

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
__attribute__ ((visibility("default"))) void execute(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void execute_internal(zend_execute_data *execute_data_ptr, int return_value_used );
__attribute__ ((visibility("default"))) int zend_is_true(zval *op);

static inline __attribute__((always_inline)) void safe_free_zval_ptr_rel(zval *p )
{
 ;

 if (p!=(executor_globals.uninitialized_zval_ptr)) {
  do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)p)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(p ); }; _efree((p) ); } while (0);
 }
}
__attribute__ ((visibility("default"))) int zend_lookup_class(const char *name, int name_length, zend_class_entry ***ce );
__attribute__ ((visibility("default"))) int zend_lookup_class_ex(const char *name, int name_length, const zend_literal *key, int use_autoload, zend_class_entry ***ce );
__attribute__ ((visibility("default"))) int zend_eval_string(char *str, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_stringl(char *str, int str_len, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions );
__attribute__ ((visibility("default"))) int zend_eval_stringl_ex(char *str, int str_len, zval *retval_ptr, char *string_name, int handle_exceptions );

__attribute__ ((visibility("default"))) char * zend_verify_arg_class_kind(const zend_arg_info *cur_arg_info, ulong fetch_type, const char **class_name, zend_class_entry **pce );
__attribute__ ((visibility("default"))) int zend_verify_arg_error(int error_type, const zend_function *zf, zend_uint arg_num, const char *need_msg, const char *need_kind, const char *given_msg, const char *given_kind );

static inline __attribute__((always_inline)) void i_zval_ptr_dtor(zval *zval_ptr )
{
 if (!zval_delref_p(zval_ptr)) {
  ;

  if (zval_ptr != &(executor_globals.uninitialized_zval)) {
   if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)zval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(zval_ptr ); };
   _zval_dtor((zval_ptr) );
   _efree((zval_ptr) );
  }
 } else {
  ;

  if (zval_refcount_p(zval_ptr) == 1) {
   zval_unset_isref_p(zval_ptr);
  }

  gc_zval_check_possible_root((zval_ptr) );
 }
}

static inline __attribute__((always_inline)) int i_zend_is_true(zval *op)
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
   if(((*op).type == 5 && (((*op)).value.obj.handlers->get_class_entry != ((void *)0)))) {
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
   }
   result = 1;
   break;
  default:
   result = 0;
   break;
 }
 return result;
}

__attribute__ ((visibility("default"))) int zval_update_constant(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_inline_change(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_no_inline_change(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval **pp, void *arg, zend_class_entry *scope );




struct _zend_vm_stack {
 void **top;
 void **end;
 zend_vm_stack prev;
};
# 183 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_execute.h"
static inline __attribute__((always_inline)) zend_vm_stack zend_vm_stack_new_page(int count) {
 zend_vm_stack page = (zend_vm_stack)_emalloc(((((sizeof(*page)) + 4 - 1) & ~(4 -1)) + sizeof(void*) * count) );

 page->top = ((void**)(((char*)(page)) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1))));
 page->end = page->top + count;
 page->prev = ((void *)0);
 return page;
}

static inline __attribute__((always_inline)) void zend_vm_stack_init(void)
{
 (executor_globals.argument_stack) = zend_vm_stack_new_page(((16 * 1024) - 16));
}

static inline __attribute__((always_inline)) void zend_vm_stack_destroy(void)
{
 zend_vm_stack stack = (executor_globals.argument_stack);

 while (stack != ((void *)0)) {
  zend_vm_stack p = stack->prev;
  _efree((stack) );
  stack = p;
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_extend(int count )
{
 zend_vm_stack p = zend_vm_stack_new_page(count >= ((16 * 1024) - 16) ? count : ((16 * 1024) - 16));
 p->prev = (executor_globals.argument_stack);
 (executor_globals.argument_stack) = p;
}

static inline __attribute__((always_inline)) void **zend_vm_stack_top(void)
{
 return (executor_globals.argument_stack)->top;
}

static inline __attribute__((always_inline)) void zend_vm_stack_push(void *ptr )
{
 do { if (__builtin_expect((1) > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top, 0)) { zend_vm_stack_extend((1) ); } } while (0);
 *((executor_globals.argument_stack)->top++) = ptr;
}

static inline __attribute__((always_inline)) void zend_vm_stack_push_nocheck(void *ptr )
{
 *((executor_globals.argument_stack)->top++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_vm_stack_pop(void)
{
 void *el = *(--(executor_globals.argument_stack)->top);

 if (__builtin_expect((executor_globals.argument_stack)->top == ((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))), 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);
  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
  }
 return el;
}

static inline __attribute__((always_inline)) void *zend_vm_stack_alloc(size_t size )
{
 void *ret;

 size = (size + (sizeof(void*) - 1)) / sizeof(void*);


 if (4 > sizeof(void*)) {
  int extra = (4 - ((zend_uintptr_t)(executor_globals.argument_stack)->top & (4 - 1))) / sizeof(void*);

  if (__builtin_expect(size + extra + (((sizeof(void*)) + 4 - 1) & ~(4 -1)) / sizeof(void*) > (zend_uintptr_t)((executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top), 0)
                                                                          ) {
   zend_vm_stack_extend(size );
  } else {
   void **old_top = (executor_globals.argument_stack)->top;

   (executor_globals.argument_stack)->top += extra;

   *(executor_globals.argument_stack)->top = (void*)old_top;
   (executor_globals.argument_stack)->top += (((sizeof(void*)) + 4 - 1) & ~(4 -1)) / sizeof(void*);
  }
 } else {
  do { if (__builtin_expect(((int)size) > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top, 0)) { zend_vm_stack_extend(((int)size) ); } } while (0);
 }
 ret = (void*)(executor_globals.argument_stack)->top;
 (executor_globals.argument_stack)->top += size;
 return ret;
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_int(void *ptr )
{
 if (__builtin_expect(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))) == (void**)ptr, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {
  (executor_globals.argument_stack)->top = (void**)ptr;
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free(void *ptr )
{
 if (__builtin_expect(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))) == (void**)ptr, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {

  if (4 > sizeof(void*)) {
   ptr = (void*)(((char*)ptr) - (((sizeof(void*)) + 4 - 1) & ~(4 -1)));
   (executor_globals.argument_stack)->top = *(void***)ptr;
  } else {
   (executor_globals.argument_stack)->top = (void**)ptr;
  }
 }
}

static inline __attribute__((always_inline)) void** zend_vm_stack_push_args(int count )
{

 if (__builtin_expect((executor_globals.argument_stack)->top - ((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))) < count, 0) ||
  __builtin_expect((executor_globals.argument_stack)->top == (executor_globals.argument_stack)->end, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  zend_vm_stack_extend(count + 1 );

  (executor_globals.argument_stack)->top += count;
  *((executor_globals.argument_stack)->top) = (void*)(zend_uintptr_t)count;
  while (count-- > 0) {
   void *data = *(--p->top);

   if (__builtin_expect(p->top == ((void**)(((char*)(p)) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))), 0)) {
    zend_vm_stack r = p;

    (executor_globals.argument_stack)->prev = p->prev;
    p = p->prev;
    _efree((r) );
   }
   *(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))) + count) = data;
  }
  return (executor_globals.argument_stack)->top++;
 }
 *((executor_globals.argument_stack)->top) = (void*)(zend_uintptr_t)count;
 return (executor_globals.argument_stack)->top++;
}

static inline __attribute__((always_inline)) void zend_vm_stack_clear_multiple(void)
{
 void **p = (executor_globals.argument_stack)->top - 1;
 int delete_count = (int)(zend_uintptr_t) *p;

 while (--delete_count>=0) {
  zval *q = *(zval **)(--p);
  *p = ((void *)0);
  i_zval_ptr_dtor(q );
 }
 zend_vm_stack_free_int(p );
}

static inline __attribute__((always_inline)) zval** zend_vm_stack_get_arg(int requested_arg )
{
 void **p = (executor_globals.current_execute_data)->prev_execute_data->function_state.arguments;
 int arg_count = (int)(zend_uintptr_t) *p;

 if (__builtin_expect(requested_arg > arg_count, 0)) {
  return ((void *)0);
 }
 return (zval**)p - arg_count + requested_arg - 1;
}

static inline __attribute__((always_inline)) void zend_arg_types_stack_2_pop(zend_ptr_stack *stack, zval **object, zend_function **fbc)
{
 void *a, *b;

 zend_ptr_stack_2_pop(stack, &a, &b);

 *object = (zval *) a;
 *fbc = (zend_function *) b;
}

static inline __attribute__((always_inline)) void zend_arg_types_stack_3_pop(zend_ptr_stack *stack, zend_class_entry **called_scope, zval **object, zend_function **fbc)
{
 void *a, *b, *c;

 zend_ptr_stack_3_pop(stack, &a, &b, &c);

 *called_scope = (zend_class_entry *) a;
 *object = (zval *) b;
 *fbc = (zend_function *) c;
}

void execute_new_code(void);



__attribute__ ((visibility("default"))) const char *get_active_class_name(const char **space );
__attribute__ ((visibility("default"))) const char *get_active_function_name(void);
__attribute__ ((visibility("default"))) const char *zend_get_executed_filename(void);
__attribute__ ((visibility("default"))) uint zend_get_executed_lineno(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void);

__attribute__ ((visibility("default"))) void zend_set_timeout(long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(const char *class_name, uint class_name_len, int fetch_type );
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(const char *class_name, uint class_name_len, const zend_literal *key, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );
# 410 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_execute.h"

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 const char *fname;
 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 const struct _zend_arg_info *arg_info;
 zend_uint num_args;
 zend_uint flags;
} zend_function_entry;

typedef struct _zend_fcall_info {
 size_t size;
 HashTable *function_table;
 zval *function_name;
 HashTable *symbol_table;
 zval **retval_ptr_ptr;
 zend_uint param_count;
 zval ***params;
 zval *object_ptr;
 zend_bool no_separation;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zend_class_entry *called_scope;
 zval *object_ptr;
} zend_fcall_info_cache;
# 228 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 249 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_parameters(int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_ex(int flags, int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) char *zend_zval_type_name(const zval *arg);

__attribute__ ((visibility("default"))) int zend_parse_method_parameters(int num_args , zval *this_ptr, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_method_parameters_ex(int flags, int num_args , zval *this_ptr, const char *type_spec, ...);



__attribute__ ((visibility("default"))) int zend_register_functions(zend_class_entry *scope, const zend_function_entry *functions, HashTable *function_table, int type );
__attribute__ ((visibility("default"))) void zend_unregister_functions(const zend_function_entry *functions, int count, HashTable *function_table );
__attribute__ ((visibility("default"))) int zend_startup_module(zend_module_entry *module_entry);
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry );
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_modules(void);
__attribute__ ((visibility("default"))) void zend_collect_module_handlers(void);
__attribute__ ((visibility("default"))) void zend_destroy_modules(void);
__attribute__ ((visibility("default"))) void zend_check_magic_method_implementation(const zend_class_entry *ce, const zend_function *fptr, int error_type );

__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce, char *parent_name );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry );
__attribute__ ((visibility("default"))) void zend_class_implements(zend_class_entry *class_entry , int num_interfaces, ...);

__attribute__ ((visibility("default"))) int zend_register_class_alias_ex(const char *name, int name_len, zend_class_entry *ce );






__attribute__ ((visibility("default"))) int zend_disable_function(char *function_name, uint function_name_length );
__attribute__ ((visibility("default"))) int zend_disable_class(char *class_name, uint class_name_length );

__attribute__ ((visibility("default"))) void zend_wrong_param_count(void);
# 293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zval *object_ptr, uint check_flags, char **callable_name, int *callable_name_len, zend_fcall_info_cache *fcc, char **error );
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, char **callable_name );
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, char **callable_name );
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type, const char *doc_comment, int doc_comment_len );
__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, const char *name, int name_length, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, const char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_long(zend_class_entry *ce, const char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, const char *name, int name_length, double value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, const char *name, int name_length, const char *value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, const char *name, int name_length, const char *value, int value_len, int access_type );

__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_long(zend_class_entry *ce, const char *name, size_t name_length, long value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value );

__attribute__ ((visibility("default"))) void zend_update_class_constants(zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, const char *name, int name_length );
__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_long(zend_class_entry *scope, zval *object, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, const char *name, int name_length );
__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_long(zend_class_entry *scope, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zval *zobject );
__attribute__ ((visibility("default"))) int zend_get_object_classname(const zval *object, const char **class_name, zend_uint *class_name_len );
__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 358 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties, int destroy_ht );


__attribute__ ((visibility("default"))) int add_assoc_function(zval *arg, const char *key, void (*function_ptr)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used ));

__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, uint key_len, long n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, uint key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, uint key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, uint key_len, int r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, uint key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, uint key_len, char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, uint key_len, char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, uint key_len, zval *value);
# 393 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_long(zval *arg, ulong idx, long n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, ulong idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, ulong idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, ulong idx, int r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, ulong idx, double d);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, ulong idx, const char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, ulong idx, const char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, ulong index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, long n);
__attribute__ ((visibility("default"))) int add_next_index_null(zval *arg);
__attribute__ ((visibility("default"))) int add_next_index_bool(zval *arg, int b);
__attribute__ ((visibility("default"))) int add_next_index_resource(zval *arg, int r);
__attribute__ ((visibility("default"))) int add_next_index_double(zval *arg, double d);
__attribute__ ((visibility("default"))) int add_next_index_string(zval *arg, const char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_next_index_stringl(zval *arg, const char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_next_index_zval(zval *arg, zval *value);

__attribute__ ((visibility("default"))) int add_get_assoc_string_ex(zval *arg, const char *key, uint key_len, const char *str, void **dest, int duplicate);
__attribute__ ((visibility("default"))) int add_get_assoc_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, void **dest, int duplicate);




__attribute__ ((visibility("default"))) int add_get_index_long(zval *arg, ulong idx, long l, void **dest);
__attribute__ ((visibility("default"))) int add_get_index_double(zval *arg, ulong idx, double d, void **dest);
__attribute__ ((visibility("default"))) int add_get_index_string(zval *arg, ulong idx, const char *str, void **dest, int duplicate);
__attribute__ ((visibility("default"))) int add_get_index_stringl(zval *arg, ulong idx, const char *str, uint length, void **dest, int duplicate);

__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, uint key_len, long l );
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, uint key_len );
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, uint key_len, int b );
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, uint key_len, long r );
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, uint key_len, double d );
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, uint key_len, const char *str, int duplicate );
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, int duplicate );
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, uint key_len, zval *value );
# 441 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, char **callable_name, char **error );




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval ****params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval ***params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args );





__attribute__ ((visibility("default"))) int zend_fcall_info_argp(zend_fcall_info *fci , int argc, zval ***argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argv(zend_fcall_info *fci , int argc, va_list *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argn(zend_fcall_info *fci , int argc, ...);




__attribute__ ((visibility("default"))) int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval **retval, zval *args );

__attribute__ ((visibility("default"))) int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache );

__attribute__ ((visibility("default"))) int zend_set_hash_symbol(zval *symbol, const char *name, int name_length, zend_bool is_ref, int num_symbol_tables, ...);

__attribute__ ((visibility("default"))) void zend_delete_variable(zend_execute_data *ex, HashTable *ht, const char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) int zend_delete_global_variable(const char *name, int name_len );

__attribute__ ((visibility("default"))) int zend_delete_global_variable_ex(const char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) void zend_reset_all_cv(HashTable *symbol_table );

__attribute__ ((visibility("default"))) void zend_rebuild_symbol_table(void);



__attribute__ ((visibility("default"))) void zif_display_disabled_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_display_disabled_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 731 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_API.h"

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_exceptions.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_exceptions.h"


__attribute__ ((visibility("default"))) void zend_exception_set_previous(zval *exception, zval *add_previous );
__attribute__ ((visibility("default"))) void zend_exception_save(void);
__attribute__ ((visibility("default"))) void zend_exception_restore(void);

void zend_throw_exception_internal(zval *exception );

void zend_register_default_exception(void);

__attribute__ ((visibility("default"))) zend_class_entry *zend_exception_get_default(void);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_error_exception(void);
__attribute__ ((visibility("default"))) void zend_register_default_classes(void);



__attribute__ ((visibility("default"))) zval * zend_throw_exception(zend_class_entry *exception_ce, char *message, long code );
__attribute__ ((visibility("default"))) zval * zend_throw_exception_ex(zend_class_entry *exception_ce, long code , char *format, ...);
__attribute__ ((visibility("default"))) void zend_throw_exception_object(zval *exception );
__attribute__ ((visibility("default"))) void zend_clear_exception(void);

__attribute__ ((visibility("default"))) zval * zend_throw_error_exception(zend_class_entry *exception_ce, char *message, long code, int severity );

extern __attribute__ ((visibility("default"))) void (*zend_throw_exception_hook)(zval *ex );


__attribute__ ((visibility("default"))) void zend_exception_error(zval *exception, int severity );


int zend_spprintf(char **message, int max_len, char *format, ...);


# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/TSRM.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config_common.h" 1
# 13 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config_common.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config.h" 2
# 14 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config_common.h" 2
# 1 "/usr/include/sys/param.h" 1 3 4
# 26 "/usr/include/sys/param.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 27 "/usr/include/sys/param.h" 2 3 4

# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 1 "/usr/include/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/sys/param.h" 2 3 4
# 15 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config_common.h" 2
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config_common.h"
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
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
# 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
# 342 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 373 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
# 401 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__)) ;
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





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__));



extern char **__environ;

extern char **environ;





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




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





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



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__));



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__));






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
# 1007 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__)) ;
# 1036 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__)) ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1101 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__block, int __edflag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 1160 "/usr/include/unistd.h" 3 4

# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config_common.h" 2



# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_config_common.h" 2
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h" 2


# 1 "/usr/include/sys/stat.h" 1 3 4
# 39 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 40 "/usr/include/sys/stat.h" 2 3 4
# 105 "/usr/include/sys/stat.h" 3 4


# 1 "/usr/include/bits/stat.h" 1 3 4
# 39 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;
    unsigned short int __pad1;

    __ino_t st_ino;



    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;

    __off_t st_size;



    __blksize_t st_blksize;


    __blkcnt_t st_blocks;
# 73 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 88 "/usr/include/bits/stat.h" 3 4
    unsigned long int __unused4;
    unsigned long int __unused5;



  };


struct stat64
  {
    __dev_t st_dev;
    unsigned int __pad1;

    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned int __pad2;
    __off64_t st_size;
    __blksize_t st_blksize;

    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 130 "/usr/include/bits/stat.h" 3 4
    __ino64_t st_ino;
  };
# 108 "/usr/include/sys/stat.h" 2 3 4
# 211 "/usr/include/sys/stat.h" 3 4
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 230 "/usr/include/sys/stat.h" 3 4
extern int stat64 (__const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 255 "/usr/include/sys/stat.h" 3 4
extern int fstatat64 (int __fd, __const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 278 "/usr/include/sys/stat.h" 3 4
extern int lstat64 (__const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__));





extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__));



extern int mkdir (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__));
# 401 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));
# 434 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, __const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, __const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, __const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 5)));




extern __inline int
__attribute__ ((__nothrow__)) stat (__const char *__path, struct stat *__statbuf)
{
  return __xstat (3, __path, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) lstat (__const char *__path, struct stat *__statbuf)
{
  return __lxstat (3, __path, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) fstat (int __fd, struct stat *__statbuf)
{
  return __fxstat (3, __fd, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) fstatat (int __fd, __const char *__filename, struct stat *__statbuf, int __flag)

{
  return __fxstatat (3, __fd, __filename, __statbuf, __flag);
}



extern __inline int
__attribute__ ((__nothrow__)) mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
{
  return __xmknod (1, __path, __mode, &__dev);
}



extern __inline int
__attribute__ ((__nothrow__)) mknodat (int __fd, __const char *__path, __mode_t __mode, __dev_t __dev)

{
  return __xmknodat (1, __fd, __path, __mode, &__dev);
}





extern __inline int
__attribute__ ((__nothrow__)) stat64 (__const char *__path, struct stat64 *__statbuf)
{
  return __xstat64 (3, __path, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) lstat64 (__const char *__path, struct stat64 *__statbuf)
{
  return __lxstat64 (3, __path, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) fstat64 (int __fd, struct stat64 *__statbuf)
{
  return __fxstat64 (3, __fd, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) fstatat64 (int __fd, __const char *__filename, struct stat64 *__statbuf, int __flag)

{
  return __fxstatat64 (3, __fd, __filename, __statbuf, __flag);
}







# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h" 2
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






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__));






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

# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h" 2


# 1 "/usr/include/utime.h" 1 3 4
# 28 "/usr/include/utime.h" 3 4






# 1 "/usr/include/time.h" 1 3 4
# 35 "/usr/include/utime.h" 2 3 4



struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (__const char *__file,
    __const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h" 2
# 90 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 28 "/usr/include/dirent.h" 3 4

# 62 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/bits/dirent.h" 1 3 4
# 23 "/usr/include/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 63 "/usr/include/dirent.h" 2 3 4
# 98 "/usr/include/dirent.h" 3 4
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
# 128 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (__const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 163 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 174 "/usr/include/dirent.h" 3 4
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 184 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 201 "/usr/include/dirent.h" 3 4
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 245 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 246 "/usr/include/dirent.h" 2 3 4






extern int scandir (__const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (__const struct dirent *),
      int (*__cmp) (__const struct dirent **,
      __const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 275 "/usr/include/dirent.h" 3 4
extern int scandir64 (__const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (__const struct dirent64 *),
        int (*__cmp) (__const struct dirent64 **,
        __const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));




extern int alphasort (__const struct dirent **__e1,
        __const struct dirent **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 300 "/usr/include/dirent.h" 3 4
extern int alphasort64 (__const struct dirent64 **__e1,
   __const struct dirent64 **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 313 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));
# 330 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (__const struct dirent **__e1,
   __const struct dirent **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 356 "/usr/include/dirent.h" 3 4
extern int versionsort64 (__const struct dirent64 **__e1,
     __const struct dirent64 **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




# 91 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h" 2
# 145 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

__attribute__ ((visibility("default"))) void virtual_cwd_startup(void);
__attribute__ ((visibility("default"))) void virtual_cwd_shutdown(void);
__attribute__ ((visibility("default"))) char *virtual_getcwd_ex(size_t *length );
__attribute__ ((visibility("default"))) char *virtual_getcwd(char *buf, size_t size );
__attribute__ ((visibility("default"))) int virtual_chdir(const char *path );
__attribute__ ((visibility("default"))) int virtual_chdir_file(const char *path, int (*p_chdir)(const char *path ) );
__attribute__ ((visibility("default"))) int virtual_filepath(const char *path, char **filepath );
__attribute__ ((visibility("default"))) int virtual_filepath_ex(const char *path, char **filepath, verify_path_func verify_path );
__attribute__ ((visibility("default"))) char *virtual_realpath(const char *path, char *real_path );
__attribute__ ((visibility("default"))) FILE *virtual_fopen(const char *path, const char *mode );
__attribute__ ((visibility("default"))) int virtual_open(const char *path , int flags, ...);
__attribute__ ((visibility("default"))) int virtual_creat(const char *path, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rename(char *oldname, char *newname );
__attribute__ ((visibility("default"))) int virtual_stat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_lstat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_unlink(const char *path );
__attribute__ ((visibility("default"))) int virtual_mkdir(const char *pathname, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rmdir(const char *pathname );
__attribute__ ((visibility("default"))) DIR *virtual_opendir(const char *pathname );
__attribute__ ((visibility("default"))) FILE *virtual_popen(const char *command, const char *type );
__attribute__ ((visibility("default"))) int virtual_access(const char *pathname, int mode );
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 204 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath );

__attribute__ ((visibility("default"))) char *tsrm_realpath(const char *path, char *real_path );




typedef struct _realpath_cache_bucket {
 unsigned long key;
 char *path;
 int path_len;
 char *realpath;
 int realpath_len;
 int is_dir;
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



__attribute__ ((visibility("default"))) void realpath_cache_clean(void);
__attribute__ ((visibility("default"))) void realpath_cache_del(const char *path, int path_len );
__attribute__ ((visibility("default"))) realpath_cache_bucket* realpath_cache_lookup(const char *path, int path_len, time_t t );
__attribute__ ((visibility("default"))) int realpath_cache_size(void);
__attribute__ ((visibility("default"))) int realpath_cache_max_buckets(void);
__attribute__ ((visibility("default"))) realpath_cache_bucket** realpath_cache_get_buckets(void);
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_language_scanner.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_language_scanner.h"
typedef struct _zend_lex_state {
 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;

 zend_file_handle *in;
 uint lineno;
 char *filename;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;
} zend_lex_state;



int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);
__attribute__ ((visibility("default"))) void zend_save_lexical_state(zend_lex_state *lex_state );
__attribute__ ((visibility("default"))) void zend_restore_lexical_state(zend_lex_state *lex_state );
__attribute__ ((visibility("default"))) int zend_prepare_string_for_scanning(zval *str, char *filename );
__attribute__ ((visibility("default"))) void zend_multibyte_yyinput_again(zend_encoding_filter old_input_filter, const zend_encoding *old_encoding );
__attribute__ ((visibility("default"))) int zend_multibyte_set_filter(const zend_encoding *onetime_encoding );


# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c" 2
# 99 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
__attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
__attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );


__attribute__ ((visibility("default"))) zend_compiler_globals compiler_globals;
__attribute__ ((visibility("default"))) zend_executor_globals executor_globals;


static void zend_duplicate_property_info(zend_property_info *property_info)
{
 if (!(((property_info->name) >= (compiler_globals.interned_strings_start)) && ((property_info->name) < (compiler_globals.interned_strings_end)))) {
  property_info->name = _estrndup((property_info->name), (property_info->name_length) );
 }
 if (property_info->doc_comment) {
  property_info->doc_comment = _estrndup((property_info->doc_comment), (property_info->doc_comment_len) );
 }
}



static void zend_duplicate_property_info_internal(zend_property_info *property_info)
{
 if (!(((property_info->name) >= (compiler_globals.interned_strings_start)) && ((property_info->name) < (compiler_globals.interned_strings_end)))) {
  property_info->name = zend_strndup(property_info->name, property_info->name_length);
 }
}



static void zend_destroy_property_info(zend_property_info *property_info)
{
 do { if (!(((property_info->name) >= (compiler_globals.interned_strings_start)) && ((property_info->name) < (compiler_globals.interned_strings_end)))) { _efree(((char*)property_info->name) ); } } while (0);
 if (property_info->doc_comment) {
  _efree(((char*)property_info->doc_comment) );
 }
}



static void zend_destroy_property_info_internal(zend_property_info *property_info)
{
 do { if (!((((char*)property_info->name) >= (compiler_globals.interned_strings_start)) && (((char*)property_info->name) < (compiler_globals.interned_strings_end)))) { free((char*)(char*)property_info->name); } } while (0);
}


static void build_runtime_defined_function_key(zval *result, const char *name, int name_length )
{
 char char_pos_buf[32];
 uint char_pos_len;
 const char *filename;

 char_pos_len = sprintf(char_pos_buf, "%p", (language_scanner_globals.yy_text));
 if ((compiler_globals.active_op_array)->filename) {
  filename = (compiler_globals.active_op_array)->filename;
 } else {
  filename = "-";
 }


 result->value.str.len = 1+name_length+strlen(filename)+char_pos_len;


  result->value.str.val = (char *) _safe_emalloc((result->value.str.len), (1), (1) );
  result->value.str.val[0] = '\0';
  sprintf(result->value.str.val+1, "%s%s%s", name, filename, char_pos_buf);

 result->type = 6;
 zval_set_refcount_p(result, 1);
}



static void init_compiler_declarables(void)
{
 ((compiler_globals.declarables).ticks).type = 1;
 ((compiler_globals.declarables).ticks).value.lval = 0;
}


void zend_init_compiler_context(void)
{
 (compiler_globals.context).opcodes_size = ((compiler_globals.active_op_array)->fn_flags & 0x10) ? 8192 : 64;
 (compiler_globals.context).vars_size = 0;
 (compiler_globals.context).literals_size = 0;
 (compiler_globals.context).current_brk_cont = -1;
 (compiler_globals.context).backpatch_count = 0;
 (compiler_globals.context).labels = ((void *)0);
}


void zend_init_compiler_data_structures(void)
{
 zend_stack_init(&(compiler_globals.bp_stack));
 zend_stack_init(&(compiler_globals.function_call_stack));
 zend_stack_init(&(compiler_globals.switch_cond_stack));
 zend_stack_init(&(compiler_globals.foreach_copy_stack));
 zend_stack_init(&(compiler_globals.object_stack));
 zend_stack_init(&(compiler_globals.declare_stack));
 (compiler_globals.active_class_entry) = ((void *)0);
 zend_llist_init(&(compiler_globals.list_llist), sizeof(list_llist_element), ((void *)0), 0);
 zend_llist_init(&(compiler_globals.dimension_llist), sizeof(int), ((void *)0), 0);
 zend_stack_init(&(compiler_globals.list_stack));
 (compiler_globals.in_compilation) = 0;
 (compiler_globals.start_lineno) = 0;
 (compiler_globals.current_namespace) = ((void *)0);
 (compiler_globals.in_namespace) = 0;
 (compiler_globals.has_bracketed_namespaces) = 0;
 (compiler_globals.current_import) = ((void *)0);
 init_compiler_declarables();
 zend_stack_init(&(compiler_globals.context_stack));

 (compiler_globals.encoding_declared) = 0;
}



__attribute__ ((visibility("default"))) void file_handle_dtor(zend_file_handle *fh)
{
 ;

 zend_file_handle_dtor(fh );
}



void init_compiler(void)
{
 (compiler_globals.active_op_array) = ((void *)0);
 zend_init_compiler_data_structures();
 zend_init_rsrc_list();
 _zend_hash_init((&(compiler_globals.filenames_table)), (5), (((void *)0)), ((dtor_func_t) free_estring), (0) );
 zend_llist_init(&(compiler_globals.open_files), sizeof(zend_file_handle), (void (*)(void *)) file_handle_dtor, 0);
 (compiler_globals.unclean_shutdown) = 0;
}



void shutdown_compiler(void)
{
 zend_stack_destroy(&(compiler_globals.bp_stack));
 zend_stack_destroy(&(compiler_globals.function_call_stack));
 zend_stack_destroy(&(compiler_globals.switch_cond_stack));
 zend_stack_destroy(&(compiler_globals.foreach_copy_stack));
 zend_stack_destroy(&(compiler_globals.object_stack));
 zend_stack_destroy(&(compiler_globals.declare_stack));
 zend_stack_destroy(&(compiler_globals.list_stack));
 zend_hash_destroy(&(compiler_globals.filenames_table));
 zend_llist_destroy(&(compiler_globals.open_files));
 zend_stack_destroy(&(compiler_globals.context_stack));
}



__attribute__ ((visibility("default"))) char *zend_set_compiled_filename(const char *new_compiled_filename )
{
 char **pp, *p;
 int length = strlen(new_compiled_filename);

 if (zend_hash_find(&(compiler_globals.filenames_table), new_compiled_filename, length+1, (void **) &pp) == 0) {
  (compiler_globals.compiled_filename) = *pp;
  return *pp;
 }
 p = _estrndup((new_compiled_filename), (length) );
 _zend_hash_add_or_update(&(compiler_globals.filenames_table), new_compiled_filename, length+1, &p, sizeof(char *), (void **) &pp, (1<<0) );
 (compiler_globals.compiled_filename) = p;
 return p;
}



__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(char *original_compiled_filename )
{
 (compiler_globals.compiled_filename) = original_compiled_filename;
}



__attribute__ ((visibility("default"))) char *zend_get_compiled_filename(void)
{
 return (compiler_globals.compiled_filename);
}



__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void)
{
 return (compiler_globals.zend_lineno);
}



__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void)
{
 return (compiler_globals.in_compilation);
}



static zend_uint get_temporary_variable(zend_op_array *op_array)
{
 return (op_array->T)++ * (((sizeof(temp_variable)) + 4 - 1) & ~(4 -1));
}


static int lookup_cv(zend_op_array *op_array, char* name, int name_len, ulong hash )
{
 int i = 0;
 ulong hash_value = hash ? hash : zend_inline_hash_func(name, name_len+1);

 while (i < op_array->last_var) {
  if (op_array->vars[i].name == name ||
      (op_array->vars[i].hash_value == hash_value &&
       op_array->vars[i].name_len == name_len &&
       memcmp(op_array->vars[i].name, name, name_len) == 0)) {
   do { if (!(((name) >= (compiler_globals.interned_strings_start)) && ((name) < (compiler_globals.interned_strings_end)))) { _efree(((char*)name) ); } } while (0);
   return i;
  }
  i++;
 }
 i = op_array->last_var;
 op_array->last_var++;
 if (op_array->last_var > (compiler_globals.context).vars_size) {
  (compiler_globals.context).vars_size += 16;
  op_array->vars = _erealloc((op_array->vars), ((compiler_globals.context).vars_size * sizeof(zend_compiled_variable)), 0 );
 }
 op_array->vars[i].name = zend_new_interned_string(name, name_len + 1, 1 );
 op_array->vars[i].name_len = name_len;
 op_array->vars[i].hash_value = hash_value;
 return i;
}


void zend_del_literal(zend_op_array *op_array, int n)
{
 _zval_dtor((&(op_array)->literals[n].constant) );
 if (n + 1 == op_array->last_literal) {
  op_array->last_literal--;
 } else {
  ((op_array)->literals[n].constant).type = 0;
 }
}



static inline void zend_insert_literal(zend_op_array *op_array, const zval *zv, int literal_position )
{
 if ((*zv).type == 6 || (*zv).type == 8) {
  zval *z = (zval*)zv;
  (*z).value.str.val = (char*)zend_new_interned_string((*zv).value.str.val, (*zv).value.str.len + 1, 1 );
 }
 (op_array)->literals[literal_position].constant = *zv;
 zval_set_refcount_p(&((op_array)->literals[literal_position].constant), 2);
 zval_set_isref_p(&((op_array)->literals[literal_position].constant));
 op_array->literals[literal_position].hash_value = 0;
 op_array->literals[literal_position].cache_slot = -1;
}





int zend_add_literal(zend_op_array *op_array, const zval *zv )
{
 int i = op_array->last_literal;
 op_array->last_literal++;
 if (i >= (compiler_globals.context).literals_size) {
  while (i >= (compiler_globals.context).literals_size) {
   (compiler_globals.context).literals_size += 16;
  }
  op_array->literals = (zend_literal*)_erealloc((op_array->literals), ((compiler_globals.context).literals_size * sizeof(zend_literal)), 0 );
 }
 zend_insert_literal(op_array, zv, i );
 return i;
}




int zend_append_individual_literal(zend_op_array *op_array, const zval *zv )
{
 int i = op_array->last_literal;
 op_array->last_literal++;
 op_array->literals = (zend_literal*)_erealloc((op_array->literals), ((i + 1) * sizeof(zend_literal)), 0 );
 zend_insert_literal(op_array, zv, i );
 return i;
}


int zend_add_func_name_literal(zend_op_array *op_array, const zval *zv )
{
 int ret;
 char *lc_name;
 zval c;
 int lc_literal;

 if (op_array->last_literal > 0 &&
     &op_array->literals[op_array->last_literal - 1].constant == zv &&
     op_array->literals[op_array->last_literal - 1].cache_slot == -1) {

  ret = op_array->last_literal - 1;
 } else {
  ret = zend_add_literal(op_array, zv );
 }

 lc_name = zend_str_tolower_dup((*zv).value.str.val, (*zv).value.str.len);
 do { const char *__s=(lc_name); int __l=(*zv).value.str.len; zval *__z = (&c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 lc_literal = zend_add_literal((compiler_globals.active_op_array), &c );
 do { if (((((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[lc_literal].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[lc_literal].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val, (((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.len+1); } } while (0);

 return ret;
}


int zend_add_ns_func_name_literal(zend_op_array *op_array, const zval *zv )
{
 int ret;
 char *lc_name;
 const char *ns_separator;
 int lc_len;
 zval c;
 int lc_literal;

 if (op_array->last_literal > 0 &&
     &op_array->literals[op_array->last_literal - 1].constant == zv &&
     op_array->literals[op_array->last_literal - 1].cache_slot == -1) {

  ret = op_array->last_literal - 1;
 } else {
  ret = zend_add_literal(op_array, zv );
 }

 lc_name = zend_str_tolower_dup((*zv).value.str.val, (*zv).value.str.len);
 do { const char *__s=(lc_name); int __l=(*zv).value.str.len; zval *__z = (&c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 lc_literal = zend_add_literal((compiler_globals.active_op_array), &c );
 do { if (((((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[lc_literal].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[lc_literal].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val, (((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.len+1); } } while (0);

 ns_separator = (const char*)zend_memrchr((*zv).value.str.val, '\\', (*zv).value.str.len) + 1;
 lc_len = (*zv).value.str.len - (ns_separator - (*zv).value.str.val);
 lc_name = zend_str_tolower_dup(ns_separator, lc_len);
 do { const char *__s=(lc_name); int __l=lc_len; zval *__z = (&c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 lc_literal = zend_add_literal((compiler_globals.active_op_array), &c );
 do { if (((((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[lc_literal].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[lc_literal].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val, (((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.len+1); } } while (0);

 return ret;
}


int zend_add_class_name_literal(zend_op_array *op_array, const zval *zv )
{
 int ret;
 char *lc_name;
 int lc_len;
 zval c;
 int lc_literal;

 if (op_array->last_literal > 0 &&
     &op_array->literals[op_array->last_literal - 1].constant == zv &&
     op_array->literals[op_array->last_literal - 1].cache_slot == -1) {

  ret = op_array->last_literal - 1;
 } else {
  ret = zend_add_literal(op_array, zv );
 }

 if ((*zv).value.str.val[0] == '\\') {
  lc_len = (*zv).value.str.len - 1;
  lc_name = zend_str_tolower_dup((*zv).value.str.val + 1, lc_len);
 } else {
  lc_len = (*zv).value.str.len;
  lc_name = zend_str_tolower_dup((*zv).value.str.val, lc_len);
 }
 do { const char *__s=(lc_name); int __l=lc_len; zval *__z = (&c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 lc_literal = zend_add_literal((compiler_globals.active_op_array), &c );
 do { if (((((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[lc_literal].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[lc_literal].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.val, (((compiler_globals.active_op_array))->literals[lc_literal].constant).value.str.len+1); } } while (0);

 do { (compiler_globals.active_op_array)->literals[ret].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);

 return ret;
}


int zend_add_const_name_literal(zend_op_array *op_array, const zval *zv, int unqualified )
{
 int ret, tmp_literal;
 char *name, *tmp_name;
 const char *ns_separator;
 int name_len, ns_len;
 zval c;

 if (op_array->last_literal > 0 &&
     &op_array->literals[op_array->last_literal - 1].constant == zv &&
     op_array->literals[op_array->last_literal - 1].cache_slot == -1) {

  ret = op_array->last_literal - 1;
 } else {
  ret = zend_add_literal(op_array, zv );
 }


 if ((*zv).value.str.val[0] == '\\') {
  name_len = (*zv).value.str.len - 1;
  name = (*zv).value.str.val + 1;
 } else {
  name_len = (*zv).value.str.len;
  name = (*zv).value.str.val;
 }
 ns_separator = zend_memrchr(name, '\\', name_len);
 if (ns_separator) {
  ns_len = ns_separator - name;
 } else {
  ns_len = 0;
 }

 if (ns_len) {

  tmp_name = _estrndup((name), (name_len) );
  zend_str_tolower(tmp_name, ns_len);
  do { const char *__s=(tmp_name); int __l=name_len; zval *__z = (&c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  tmp_literal = zend_add_literal((compiler_globals.active_op_array), &c );
  do { if (((((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[tmp_literal].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[tmp_literal].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val, (((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.len+1); } } while (0);


  tmp_name = zend_str_tolower_dup(name, name_len);
  do { const char *__s=(tmp_name); int __l=name_len; zval *__z = (&c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  tmp_literal = zend_add_literal((compiler_globals.active_op_array), &c );
  do { if (((((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[tmp_literal].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[tmp_literal].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val, (((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.len+1); } } while (0);
 }

 if (ns_len) {
  if (!unqualified) {
   return ret;
  }
  ns_len++;
  name += ns_len;
  name_len -= ns_len;
 }


 tmp_name = _estrndup((name), (name_len) );
 do { const char *__s=(tmp_name); int __l=name_len; zval *__z = (&c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 tmp_literal = zend_add_literal((compiler_globals.active_op_array), &c );
 do { if (((((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[tmp_literal].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[tmp_literal].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val, (((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.len+1); } } while (0);


 tmp_name = zend_str_tolower_dup(name, name_len);
 do { const char *__s=(tmp_name); int __l=name_len; zval *__z = (&c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 tmp_literal = zend_add_literal((compiler_globals.active_op_array), &c );
 do { if (((((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[tmp_literal].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[tmp_literal].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.val, (((compiler_globals.active_op_array))->literals[tmp_literal].constant).value.str.len+1); } } while (0);

 return ret;
}
# 576 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
static inline zend_bool zend_is_function_or_method_call(const znode *variable)
{
 zend_uint type = variable->EA;

 return ((type & (1<<1)) || (type == (1<<3)));
}


void zend_do_binary_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = op;
 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
 do { opline->op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant ); } else { opline->op2 = (op2)->u.op; } } while (0);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_unary_op(zend_uchar op, znode *result, const znode *op1 )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = op;
 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
 opline->op2_type = (1<<3);
}





static void zend_do_op_data(zend_op *data_op, const znode *value )
{
 data_op->opcode = 137;
 do { data_op->op1_type = (value)->op_type; if ((value)->op_type == (1<<0)) { data_op->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(value)->u.constant ); } else { data_op->op1 = (value)->u.op; } } while (0);
 data_op->op2_type = (1<<3);
}


void zend_do_binary_assign_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 )
{
 int last_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 if (last_op_number > 0) {
  zend_op *last_op = &(compiler_globals.active_op_array)->opcodes[last_op_number-1];

  switch (last_op->opcode) {
   case 88:
    last_op->opcode = op;
    last_op->extended_value = 136;

    zend_do_op_data(opline, op2 );
    opline->result_type = (1<<3);
    do { (result)->op_type = last_op->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[last_op->result.constant].constant; } else { (result)->u.op = last_op->result; (result)->EA = 0; } } while (0);
    return;
   case 87:
    last_op->opcode = op;
    last_op->extended_value = 147;

    zend_do_op_data(opline, op2 );
    opline->op2.var = get_temporary_variable((compiler_globals.active_op_array));
    opline->op2_type = (1<<2);
    opline->result_type = (1<<3);
    do { (result)->op_type = last_op->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[last_op->result.constant].constant; } else { (result)->u.op = last_op->result; (result)->EA = 0; } } while (0);
    return;
   default:
    break;
  }
 }

 opline->opcode = op;
 do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
 do { opline->op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant ); } else { opline->op2 = (op2)->u.op; } } while (0);
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void fetch_simple_variable_ex(znode *result, znode *varname, int bp, zend_uchar op )
{
 zend_op opline;
 zend_op *opline_ptr;
 zend_llist *fetch_list_ptr;

 if (varname->op_type == (1<<0)) {
  ulong hash = 0;

  if ((varname->u.constant).type != 6) {
   if ((&varname->u.constant)->type != 6) { _convert_to_string((&varname->u.constant) ); };
  } else if (((((varname->u.constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((varname->u.constant).value.str.val) < (compiler_globals.interned_strings_end)))) {
   hash = (((Bucket*)(((char*)((varname->u.constant).value.str.val))-sizeof(Bucket)))->h);
  }
  if (!zend_is_auto_global_quick(varname->u.constant.value.str.val, varname->u.constant.value.str.len, hash ) &&
      !(varname->u.constant.value.str.len == (sizeof("this")-1) &&
        !memcmp(varname->u.constant.value.str.val, "this", sizeof("this"))) &&
      ((compiler_globals.active_op_array)->last == 0 ||
       (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1].opcode != 57)) {
   result->op_type = (1<<4);
   result->u.op.var = lookup_cv((compiler_globals.active_op_array), varname->u.constant.value.str.val, varname->u.constant.value.str.len, hash );
   varname->u.constant.value.str.val = (char*)(compiler_globals.active_op_array)->vars[result->u.op.var].name;
   result->EA = 0;
   return;
  }
 }

 if (bp) {
  opline_ptr = &opline;
  init_op(opline_ptr );
 } else {
  opline_ptr = get_next_op((compiler_globals.active_op_array) );
 }

 opline_ptr->opcode = op;
 opline_ptr->result_type = (1<<2);
 opline_ptr->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline_ptr->op1_type = (varname)->op_type; if ((varname)->op_type == (1<<0)) { opline_ptr->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(varname)->u.constant ); } else { opline_ptr->op1 = (varname)->u.op; } } while (0);
 do { (result)->op_type = opline_ptr->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline_ptr->result.constant].constant; } else { (result)->u.op = opline_ptr->result; (result)->EA = 0; } } while (0);
 opline_ptr->op2_type = (1<<3);
 opline_ptr->extended_value = 0x10000000;

 if (varname->op_type == (1<<0)) {
  do { if (((((((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant).value.str.len+1); } } while (0);
  if (zend_is_auto_global_quick(varname->u.constant.value.str.val, varname->u.constant.value.str.len, (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant))->hash_value) )) {
   opline_ptr->extended_value = 0x00000000;
  }
 }

 if (bp) {
  zend_stack_top(&(compiler_globals.bp_stack), (void **) &fetch_list_ptr);
  zend_llist_add_element(fetch_list_ptr, opline_ptr);
 }
}


void fetch_simple_variable(znode *result, znode *varname, int bp )
{

 fetch_simple_variable_ex(result, varname, bp, 83 );
}


void zend_do_fetch_static_member(znode *result, znode *class_name )
{
 znode class_node;
 zend_llist *fetch_list_ptr;
 zend_llist_element *le;
 zend_op *opline_ptr;
 zend_op opline;

 if (class_name->op_type == (1<<0) &&
     0 == zend_get_class_fetch_type((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.len)) {
  zend_resolve_class_name(class_name, 4, 1 );
  class_node = *class_name;
 } else {
  zend_do_fetch_class(&class_node, class_name );
 }
 zend_stack_top(&(compiler_globals.bp_stack), (void **) &fetch_list_ptr);
 if (result->op_type == (1<<4)) {
  init_op(&opline );

  opline.opcode = 83;
  opline.result_type = (1<<2);
  opline.result.var = get_temporary_variable((compiler_globals.active_op_array));
  opline.op1_type = (1<<0);
  do { zval _c; do { const char *__s=(_estrdup(((compiler_globals.active_op_array)->vars[result->u.op.var].name) )); int __l=(compiler_globals.active_op_array)->vars[result->u.op.var].name_len; zval *__z = (&_c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); opline.op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
  do { if (((((((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline.op1.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline.op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.len+1); } } while (0);
  do { (compiler_globals.active_op_array)->literals[opline.op1.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot; (compiler_globals.active_op_array)->last_cache_slot += 2; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 2] = ((void *)0); } } while (0);
  if (class_node.op_type == (1<<0)) {
   opline.op2_type = (1<<0);
   opline.op2.constant =
    zend_add_class_name_literal((compiler_globals.active_op_array), &class_node.u.constant );
  } else {
   do { opline.op2_type = (&class_node)->op_type; if ((&class_node)->op_type == (1<<0)) { opline.op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&class_node)->u.constant ); } else { opline.op2 = (&class_node)->u.op; } } while (0);
  }
  do { (result)->op_type = opline.result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline.result.constant].constant; } else { (result)->u.op = opline.result; (result)->EA = 0; } } while (0);
  opline.extended_value |= 0x30000000;
  opline_ptr = &opline;

  zend_llist_add_element(fetch_list_ptr, &opline);
 } else {
  le = fetch_list_ptr->head;

  opline_ptr = (zend_op *)le->data;
  if (opline_ptr->opcode != 83 && opline_ptr->op1_type == (1<<4)) {
   init_op(&opline );
   opline.opcode = 83;
   opline.result_type = (1<<2);
   opline.result.var = get_temporary_variable((compiler_globals.active_op_array));
   opline.op1_type = (1<<0);
   do { zval _c; do { const char *__s=(_estrdup(((compiler_globals.active_op_array)->vars[opline_ptr->op1.var].name) )); int __l=(compiler_globals.active_op_array)->vars[opline_ptr->op1.var].name_len; zval *__z = (&_c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); opline.op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
   do { if (((((((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline.op1.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline.op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline.op1.constant].constant).value.str.len+1); } } while (0);
   do { (compiler_globals.active_op_array)->literals[opline.op1.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot; (compiler_globals.active_op_array)->last_cache_slot += 2; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 2] = ((void *)0); } } while (0);
   if (class_node.op_type == (1<<0)) {
    opline.op2_type = (1<<0);
    opline.op2.constant =
     zend_add_class_name_literal((compiler_globals.active_op_array), &class_node.u.constant );
   } else {
    do { opline.op2_type = (&class_node)->op_type; if ((&class_node)->op_type == (1<<0)) { opline.op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&class_node)->u.constant ); } else { opline.op2 = (&class_node)->u.op; } } while (0);
   }
   opline.extended_value |= 0x30000000;
   do { opline_ptr->op1_type = opline.result_type; opline_ptr->op1 = opline.result; } while (0);

   zend_llist_prepend_element(fetch_list_ptr, &opline);
  } else {
   if (opline_ptr->op1_type == (1<<0)) {
    do { (compiler_globals.active_op_array)->literals[opline_ptr->op1.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot; (compiler_globals.active_op_array)->last_cache_slot += 2; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 2] = ((void *)0); } } while (0);
   }
   if (class_node.op_type == (1<<0)) {
    opline_ptr->op2_type = (1<<0);
    opline_ptr->op2.constant =
     zend_add_class_name_literal((compiler_globals.active_op_array), &class_node.u.constant );
   } else {
    do { opline_ptr->op2_type = (&class_node)->op_type; if ((&class_node)->op_type == (1<<0)) { opline_ptr->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&class_node)->u.constant ); } else { opline_ptr->op2 = (&class_node)->u.op; } } while (0);
   }
   opline_ptr->extended_value |= 0x30000000;
  }
 }
}


void fetch_array_begin(znode *result, znode *varname, znode *first_dim )
{
 fetch_simple_variable(result, varname, 1 );

 fetch_array_dim(result, result, first_dim );
}


void fetch_array_dim(znode *result, const znode *parent, const znode *dim )
{
 zend_op opline;
 zend_llist *fetch_list_ptr;

 zend_stack_top(&(compiler_globals.bp_stack), (void **) &fetch_list_ptr);

 if (zend_is_function_or_method_call(parent)) {
  init_op(&opline );
  opline.opcode = 156;
  do { opline.op1_type = (parent)->op_type; if ((parent)->op_type == (1<<0)) { opline.op1.constant = zend_add_literal((compiler_globals.active_op_array), &(parent)->u.constant ); } else { opline.op1 = (parent)->u.op; } } while (0);
  opline.op2_type = (1<<3);
  opline.result_type = (1<<2);
  opline.result.var = opline.op1.var;
  zend_llist_add_element(fetch_list_ptr, &opline);
 }

 init_op(&opline );
 opline.opcode = 84;
 opline.result_type = (1<<2);
 opline.result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline.op1_type = (parent)->op_type; if ((parent)->op_type == (1<<0)) { opline.op1.constant = zend_add_literal((compiler_globals.active_op_array), &(parent)->u.constant ); } else { opline.op1 = (parent)->u.op; } } while (0);
 do { opline.op2_type = (dim)->op_type; if ((dim)->op_type == (1<<0)) { opline.op2.constant = zend_add_literal((compiler_globals.active_op_array), &(dim)->u.constant ); } else { opline.op2 = (dim)->u.op; } } while (0);
 if (opline.op2_type == (1<<0) && (((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).type == 6) {
  ulong index;
  int numeric = 0;

  do { register const char *tmp = (((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = (((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val + (((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.len+1 - 1; if ((*end != '\0') || (*tmp == '0' && (((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.len+1 > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } index = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { index = (index * 10) + (*tmp - '0'); } if (tmp == end) { if (*(((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val == '-') { if (index-1 > 2147483647L) { break; } index = (ulong)(-(long)index); } else if (index > 2147483647L) { break; } numeric = 1; } } } while (0);
  if (numeric) {
   _zval_dtor((&((compiler_globals.active_op_array))->literals[opline.op2.constant].constant) );
   { zval *__z = (&((compiler_globals.active_op_array))->literals[opline.op2.constant].constant); (*__z).value.lval = index; (*__z).type = 1; };
  } else {
   do { if (((((((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline.op2.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline.op2.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.len+1); } } while (0);
  }
 }

 do { (result)->op_type = opline.result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline.result.constant].constant; } else { (result)->u.op = opline.result; (result)->EA = 0; } } while (0);

 zend_llist_add_element(fetch_list_ptr, &opline);
}


void fetch_string_offset(znode *result, const znode *parent, const znode *offset )
{
 fetch_array_dim(result, parent, offset );
}


void zend_do_print(znode *result, const znode *arg )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 opline->opcode = 41;
 do { opline->op1_type = (arg)->op_type; if ((arg)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(arg)->u.constant ); } else { opline->op1 = (arg)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_echo(const znode *arg )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 40;
 do { opline->op1_type = (arg)->op_type; if ((arg)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(arg)->u.constant ); } else { opline->op1 = (arg)->u.op; } } while (0);
 opline->op2_type = (1<<3);
}


void zend_do_abstract_method(const znode *function_name, znode *modifiers, const znode *body )
{
 char *method_type;

 if ((compiler_globals.active_class_entry)->ce_flags & 0x80) {
  (modifiers->u.constant).value.lval |= 0x02;
  method_type = "Interface";
 } else {
  method_type = "Abstract";
 }

 if (modifiers->u.constant.value.lval & 0x02) {
  if(modifiers->u.constant.value.lval & 0x400) {
   zend_error((1<<6L), "%s function %s::%s() cannot be declared private", method_type, (compiler_globals.active_class_entry)->name, function_name->u.constant.value.str.val);
  }
  if ((body->u.constant).value.lval == 0x02) {
   zend_op *opline = get_next_op((compiler_globals.active_op_array) );

   opline->opcode = 142;
   opline->op1_type = (1<<3);
   opline->op2_type = (1<<3);
  } else {

   zend_error((1<<6L), "%s function %s::%s() cannot contain body", method_type, (compiler_globals.active_class_entry)->name, function_name->u.constant.value.str.val);
  }
 } else {
  if (body->u.constant.value.lval == 0x02) {
   zend_error((1<<6L), "Non-abstract method %s::%s() must contain body", (compiler_globals.active_class_entry)->name, function_name->u.constant.value.str.val);
  }
 }
}


static zend_bool opline_is_fetch_this(const zend_op *opline )
{
 if ((opline->opcode == 83) && (opline->op1_type == (1<<0))
  && ((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).type == 6)
  && ((((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) == 275574653UL)
  && ((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len == (sizeof("this")-1))
  && !memcmp((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, "this", sizeof("this"))) {
  return 1;
 } else {
  return 0;
 }
}


void zend_do_assign(znode *result, znode *variable, znode *value )
{
 int last_op_number;
 zend_op *opline;

 if (value->op_type == (1<<4)) {
  zend_llist *fetch_list_ptr;

  zend_stack_top(&(compiler_globals.bp_stack), (void **) &fetch_list_ptr);
  if (fetch_list_ptr && fetch_list_ptr->head) {
   opline = (zend_op *)fetch_list_ptr->head->data;

   if (opline->opcode == 84 &&
       opline->op1_type == (1<<4) &&
       opline->op1.var == value->u.op.var) {

    opline = get_next_op((compiler_globals.active_op_array) );
    opline->opcode = 80;
    opline->result_type = (1<<2);
    opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
    opline->op1_type = (1<<0);
    do { zval _c; do { const char *__s=((compiler_globals.active_op_array)->vars[value->u.op.var].name); int __l=(compiler_globals.active_op_array)->vars[value->u.op.var].name_len; zval *__z = (&_c); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0)

                                                            ;
    do { if (((((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len+1); } } while (0);
    opline->op2_type = (1<<3);
    opline->extended_value = 0x10000000;
    do { (value)->op_type = opline->result_type; if ((value)->op_type == (1<<0)) { (value)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (value)->u.op = opline->result; (value)->EA = 0; } } while (0);
   }
  }
 }

 zend_do_end_variable_parse(variable, 1, 0 );

 last_op_number = get_next_op_number((compiler_globals.active_op_array));
 opline = get_next_op((compiler_globals.active_op_array) );

 if (variable->op_type == (1<<4)) {
  if (variable->u.op.var == (compiler_globals.active_op_array)->this_var) {
   zend_error((1<<6L), "Cannot re-assign $this");
  }
 } else if (variable->op_type == (1<<2)) {
  int n = 0;

  while (last_op_number - n > 0) {
   zend_op *last_op;

   last_op = &(compiler_globals.active_op_array)->opcodes[last_op_number-n-1];

   if (last_op->result_type == (1<<2) &&
       last_op->result.var == variable->u.op.var) {
    if (last_op->opcode == 85) {
     if (n > 0) {
      int opline_no = (opline-(compiler_globals.active_op_array)->opcodes)/sizeof(*opline);
      *opline = *last_op;
      { last_op->opcode = 0; memset(&last_op->result,0,sizeof(last_op->result)); memset(&last_op->op1,0,sizeof(last_op->op1)); memset(&last_op->op2,0,sizeof(last_op->op2)); last_op->result_type=last_op->op1_type=last_op->op2_type=(1<<3); };

      opline = get_next_op((compiler_globals.active_op_array) );

      last_op = &(compiler_globals.active_op_array)->opcodes[opline_no];
     }
     last_op->opcode = 136;
     zend_do_op_data(opline, value );
     opline->result_type = (1<<3);
     do { (result)->op_type = last_op->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[last_op->result.constant].constant; } else { (result)->u.op = last_op->result; (result)->EA = 0; } } while (0);
     return;
    } else if (last_op->opcode == 84) {
     if (n > 0) {
      int opline_no = (opline-(compiler_globals.active_op_array)->opcodes)/sizeof(*opline);
      *opline = *last_op;
      { last_op->opcode = 0; memset(&last_op->result,0,sizeof(last_op->result)); memset(&last_op->op1,0,sizeof(last_op->op1)); memset(&last_op->op2,0,sizeof(last_op->op2)); last_op->result_type=last_op->op1_type=last_op->op2_type=(1<<3); };


      opline = get_next_op((compiler_globals.active_op_array) );

      last_op = &(compiler_globals.active_op_array)->opcodes[opline_no];
     }
     last_op->opcode = 147;
     zend_do_op_data(opline, value );
     opline->op2.var = get_temporary_variable((compiler_globals.active_op_array));
     opline->op2_type = (1<<2);
     opline->result_type = (1<<3);
     do { (result)->op_type = last_op->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[last_op->result.constant].constant; } else { (result)->u.op = last_op->result; (result)->EA = 0; } } while (0);
     return;
    } else if (opline_is_fetch_this(last_op )) {
     zend_error((1<<6L), "Cannot re-assign $this");
    } else {
     break;
    }
   }
   n++;
  }
 }

 opline->opcode = 38;
 do { opline->op1_type = (variable)->op_type; if ((variable)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(variable)->u.constant ); } else { opline->op1 = (variable)->u.op; } } while (0);
 do { opline->op2_type = (value)->op_type; if ((value)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(value)->u.constant ); } else { opline->op2 = (value)->u.op; } } while (0);
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_assign_ref(znode *result, const znode *lvar, const znode *rvar )
{
 zend_op *opline;

 if (lvar->op_type == (1<<4)) {
  if (lvar->u.op.var == (compiler_globals.active_op_array)->this_var) {
    zend_error((1<<6L), "Cannot re-assign $this");
  }
 } else if (lvar->op_type == (1<<2)) {
  int last_op_number = get_next_op_number((compiler_globals.active_op_array));

  if (last_op_number > 0) {
   opline = &(compiler_globals.active_op_array)->opcodes[last_op_number-1];
   if (opline_is_fetch_this(opline )) {
     zend_error((1<<6L), "Cannot re-assign $this");
   }
   }
  }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 39;
 if (zend_is_function_or_method_call(rvar)) {
  opline->extended_value = 1<<0;
 } else if (rvar->EA & (1<<6)) {
  opline->extended_value = 1<<1;
 } else {
  opline->extended_value = 0;
 }
 if (result) {
  opline->result_type = (1<<2);
  opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
  do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
 } else {
  opline->result_type = (1<<3) | (1<<5);
 }
 do { opline->op1_type = (lvar)->op_type; if ((lvar)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(lvar)->u.constant ); } else { opline->op1 = (lvar)->u.op; } } while (0);
 do { opline->op2_type = (rvar)->op_type; if ((rvar)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(rvar)->u.constant ); } else { opline->op2 = (rvar)->u.op; } } while (0);
}


static inline void do_begin_loop(void)
{
 zend_brk_cont_element *brk_cont_element;
 int parent;

 parent = (compiler_globals.context).current_brk_cont;
 (compiler_globals.context).current_brk_cont = (compiler_globals.active_op_array)->last_brk_cont;
 brk_cont_element = get_next_brk_cont_element((compiler_globals.active_op_array));
 brk_cont_element->start = get_next_op_number((compiler_globals.active_op_array));
 brk_cont_element->parent = parent;
}


static inline void do_end_loop(int cont_addr, int has_loop_var )
{
 if (!has_loop_var) {



  (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].start = -1;
 }
 (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].cont = cont_addr;
 (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].brk = get_next_op_number((compiler_globals.active_op_array));
 (compiler_globals.context).current_brk_cont = (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].parent;
}


void zend_do_while_cond(const znode *expr, znode *close_bracket_token )
{
 int while_cond_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 43;
 do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);
 close_bracket_token->u.op.opline_num = while_cond_op_number;
 opline->op2_type = (1<<3);

 do_begin_loop();
 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_while_end(const znode *while_token, const znode *close_bracket_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );


 opline->opcode = 42;
 opline->op1.opline_num = while_token->u.op.opline_num;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);


 (compiler_globals.active_op_array)->opcodes[close_bracket_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));

 do_end_loop(while_token->u.op.opline_num, 0 );

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_do_for_cond(const znode *expr, znode *second_semicolon_token )
{
 int for_cond_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 45;
 do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);
 second_semicolon_token->u.op.opline_num = for_cond_op_number;
 opline->op2_type = (1<<3);
}


void zend_do_for_before_statement(const znode *cond_start, const znode *second_semicolon_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 42;
 opline->op1.opline_num = cond_start->u.op.opline_num;
 (compiler_globals.active_op_array)->opcodes[second_semicolon_token->u.op.opline_num].extended_value = get_next_op_number((compiler_globals.active_op_array));
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);

 do_begin_loop();

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_for_end(const znode *second_semicolon_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 42;
 opline->op1.opline_num = second_semicolon_token->u.op.opline_num+1;
 (compiler_globals.active_op_array)->opcodes[second_semicolon_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);

 do_end_loop(second_semicolon_token->u.op.opline_num+1, 0 );

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_do_pre_incdec(znode *result, const znode *op1, zend_uchar op )
{
 int last_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline;

 if (last_op_number > 0) {
  zend_op *last_op = &(compiler_globals.active_op_array)->opcodes[last_op_number-1];

  if (last_op->opcode == 88) {
   last_op->opcode = (op==34)?132:133;
   last_op->result_type = (1<<2);
   last_op->result.var = get_temporary_variable((compiler_globals.active_op_array));
   do { (result)->op_type = last_op->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[last_op->result.constant].constant; } else { (result)->u.op = last_op->result; (result)->EA = 0; } } while (0);
   return;
  }
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = op;
 do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_post_incdec(znode *result, const znode *op1, zend_uchar op )
{
 int last_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline;

 if (last_op_number > 0) {
  zend_op *last_op = &(compiler_globals.active_op_array)->opcodes[last_op_number-1];

  if (last_op->opcode == 88) {
   last_op->opcode = (op==36)?134:135;
   last_op->result_type = (1<<1);
   last_op->result.var = get_temporary_variable((compiler_globals.active_op_array));
   do { (result)->op_type = last_op->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[last_op->result.constant].constant; } else { (result)->u.op = last_op->result; (result)->EA = 0; } } while (0);
   return;
  }
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = op;
 do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_if_cond(const znode *cond, znode *closing_bracket_token )
{
 int if_cond_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 43;
 do { opline->op1_type = (cond)->op_type; if ((cond)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(cond)->u.constant ); } else { opline->op1 = (cond)->u.op; } } while (0);
 closing_bracket_token->u.op.opline_num = if_cond_op_number;
 opline->op2_type = (1<<3);
 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_if_after_statement(const znode *closing_bracket_token, unsigned char initialize )
{
 int if_end_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 zend_llist *jmp_list_ptr;

 opline->opcode = 42;

 if (initialize) {
  zend_llist jmp_list;

  zend_llist_init(&jmp_list, sizeof(int), ((void *)0), 0);
  zend_stack_push(&(compiler_globals.bp_stack), (void *) &jmp_list, sizeof(zend_llist));
 }
 zend_stack_top(&(compiler_globals.bp_stack), (void **) &jmp_list_ptr);
 zend_llist_add_element(jmp_list_ptr, &if_end_op_number);

 (compiler_globals.active_op_array)->opcodes[closing_bracket_token->u.op.opline_num].op2.opline_num = if_end_op_number+1;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_if_end(void)
{
 int next_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_llist *jmp_list_ptr;
 zend_llist_element *le;

 zend_stack_top(&(compiler_globals.bp_stack), (void **) &jmp_list_ptr);
 for (le=jmp_list_ptr->head; le; le = le->next) {
  (compiler_globals.active_op_array)->opcodes[*((int *) le->data)].op1.opline_num = next_op_number;
 }
 zend_llist_destroy(jmp_list_ptr);
 zend_stack_del_top(&(compiler_globals.bp_stack));
 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_check_writable_variable(const znode *variable)
{
 zend_uint type = variable->EA;

 if (type & (1<<1)) {
  zend_error((1<<6L), "Can't use method return value in write context");
 }
 if (type == (1<<3)) {
  zend_error((1<<6L), "Can't use function return value in write context");
 }
}


void zend_do_begin_variable_parse(void)
{
 zend_llist fetch_list;

 zend_llist_init(&fetch_list, sizeof(zend_op), ((void *)0), 0);
 zend_stack_push(&(compiler_globals.bp_stack), (void *) &fetch_list, sizeof(zend_llist));
}


void zend_do_end_variable_parse(znode *variable, int type, int arg_offset )
{
 zend_llist *fetch_list_ptr;
 zend_llist_element *le;
 zend_op *opline = ((void *)0);
 zend_op *opline_ptr;
 zend_uint this_var = -1;

 zend_stack_top(&(compiler_globals.bp_stack), (void **) &fetch_list_ptr);

 le = fetch_list_ptr->head;



 if (le) {
  opline_ptr = (zend_op *)le->data;
  if (opline_is_fetch_this(opline_ptr )) {

   if ((compiler_globals.active_op_array)->last == 0 ||
       (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1].opcode != 57) {

    this_var = opline_ptr->result.var;
    if ((compiler_globals.active_op_array)->this_var == -1) {
     (compiler_globals.active_op_array)->this_var = lookup_cv((compiler_globals.active_op_array), (((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant).value.str.len, (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant))->hash_value) );
     (((compiler_globals.active_op_array))->literals[opline_ptr->op1.constant].constant).type = 0;
    } else {
     zend_del_literal((compiler_globals.active_op_array), opline_ptr->op1.constant);
    }
    le = le->next;
    if (variable->op_type == (1<<2) &&
        variable->u.op.var == this_var) {
     variable->op_type = (1<<4);
     variable->u.op.var = (compiler_globals.active_op_array)->this_var;
    }
   } else if ((compiler_globals.active_op_array)->this_var == -1) {
    (compiler_globals.active_op_array)->this_var = lookup_cv((compiler_globals.active_op_array), _estrndup(("this"), (sizeof("this")-1) ), sizeof("this")-1, 275574653UL );
   }
  }

  while (le) {
   opline_ptr = (zend_op *)le->data;
   if (opline_ptr->opcode == 156) {
    if (type != 0 && type != 3) {
     opline = get_next_op((compiler_globals.active_op_array) );
     memcpy(opline, opline_ptr, sizeof(zend_op));
    }
    le = le->next;
    continue;
   }
   opline = get_next_op((compiler_globals.active_op_array) );
   memcpy(opline, opline_ptr, sizeof(zend_op));
   if (opline->op1_type == (1<<2) &&
       opline->op1.var == this_var) {
    opline->op1_type = (1<<4);
    opline->op1.var = (compiler_globals.active_op_array)->this_var;
   }
   switch (type) {
    case 0:
     if (opline->opcode == 84 && opline->op2_type == (1<<3)) {
      zend_error((1<<6L), "Cannot use [] for reading");
     }
     opline->opcode -= 3;
     break;
    case 1:
     break;
    case 2:
     opline->opcode += 3;
     break;
    case 3:
     if (opline->opcode == 84 && opline->op2_type == (1<<3)) {
      zend_error((1<<6L), "Cannot use [] for reading");
     }
     opline->opcode += 6;
     break;
    case 5:
     opline->opcode += 9;
     opline->extended_value |= arg_offset;
     break;
    case 6:
     if (opline->opcode == 84 && opline->op2_type == (1<<3)) {
      zend_error((1<<6L), "Cannot use [] for unsetting");
     }
     opline->opcode += 12;
     break;
   }
   le = le->next;
  }
  if (opline && type == 1 && arg_offset) {
   opline->extended_value |= 0x04000000;
  }
 }
 zend_llist_destroy(fetch_list_ptr);
 zend_stack_del_top(&(compiler_globals.bp_stack));
}


void zend_do_add_string(znode *result, const znode *op1, znode *op2 )
{
 zend_op *opline;

 if ((op2->u.constant).value.str.len > 1) {
  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 55;
 } else if ((op2->u.constant).value.str.len == 1) {
  int ch = *(op2->u.constant).value.str.val;


  _efree(((op2->u.constant).value.str.val) );
  { zval *__z = (&op2->u.constant); (*__z).value.lval = ch; (*__z).type = 1; };
  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 54;
 } else {
  _efree(((op2->u.constant).value.str.val) );
  return;
 }

 if (op1) {
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
  do { opline->result_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->result = (op1)->u.op; } } while (0);
 } else {
  opline->op1_type = (1<<3);
  opline->result_type = (1<<1);
  opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 }
 do { opline->op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant ); } else { opline->op2 = (op2)->u.op; } } while (0);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_add_variable(znode *result, const znode *op1, const znode *op2 )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 56;

 if (op1) {
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
  do { opline->result_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->result = (op1)->u.op; } } while (0);
 } else {
  opline->op1_type = (1<<3);
  opline->result_type = (1<<1);
  opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 }
 do { opline->op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant ); } else { opline->op2 = (op2)->u.op; } } while (0);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_free(znode *op1 )
{
 if (op1->op_type==(1<<1)) {
  zend_op *opline = get_next_op((compiler_globals.active_op_array) );

  opline->opcode = 70;
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
  opline->op2_type = (1<<3);
 } else if (op1->op_type==(1<<2)) {
  zend_op *opline = &(compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1];

  while (opline->opcode == 58 || opline->opcode == 103 || opline->opcode == 137) {
   opline--;
  }
  if (opline->result_type == (1<<2)
   && opline->result.var == op1->u.op.var) {
   if (opline->opcode == 80 ||
       opline->opcode == 81 ||
       opline->opcode == 82 ||
       opline->opcode == 157) {



    opline = get_next_op((compiler_globals.active_op_array) );
    opline->opcode = 70;
    do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
    opline->op2_type = (1<<3);
   } else {
    opline->result_type |= (1<<5);
   }
  } else {
   while (opline>(compiler_globals.active_op_array)->opcodes) {
    if (opline->opcode == 81
        && opline->op1_type == (1<<2)
        && opline->op1.var == op1->u.op.var) {



     opline->extended_value = 0x00000000;
     break;
    } else if (opline->result_type==(1<<2)
     && opline->result.var == op1->u.op.var) {
     if (opline->opcode == 68) {
      opline->result_type |= (1<<5);
     }
     break;
    }
    opline--;
   }
  }
 } else if (op1->op_type == (1<<0)) {
  _zval_dtor((&op1->u.constant) );
 }
}


int zend_do_verify_access_types(const znode *current_access_type, const znode *new_modifier)
{
 if (((current_access_type->u.constant).value.lval & (0x100 | 0x200 | 0x400))
  && ((new_modifier->u.constant).value.lval & (0x100 | 0x200 | 0x400))) {
  zend_error((1<<6L), "Multiple access type modifiers are not allowed");
 }
 if (((current_access_type->u.constant).value.lval & 0x02)
  && ((new_modifier->u.constant).value.lval & 0x02)) {
  zend_error((1<<6L), "Multiple abstract modifiers are not allowed");
 }
 if (((current_access_type->u.constant).value.lval & 0x01)
  && ((new_modifier->u.constant).value.lval & 0x01)) {
  zend_error((1<<6L), "Multiple static modifiers are not allowed");
 }
 if (((current_access_type->u.constant).value.lval & 0x04)
  && ((new_modifier->u.constant).value.lval & 0x04)) {
  zend_error((1<<6L), "Multiple final modifiers are not allowed");
 }
 if ((((current_access_type->u.constant).value.lval | (new_modifier->u.constant).value.lval) & (0x02 | 0x04)) == (0x02 | 0x04)) {
  zend_error((1<<6L), "Cannot use the final modifier on an abstract class member");
 }
 return ((current_access_type->u.constant).value.lval | (new_modifier->u.constant).value.lval);
}


void zend_do_begin_function_declaration(znode *function_token, znode *function_name, int is_method, int return_reference, znode *fn_flags_znode )
{
 zend_op_array op_array;
 char *name = function_name->u.constant.value.str.val;
 int name_len = function_name->u.constant.value.str.len;
 int function_begin_line = function_token->u.op.opline_num;
 zend_uint fn_flags;
 const char *lcname;
 zend_bool orig_interactive;
 zend_bool use_heap;

 if (is_method) {
  if ((compiler_globals.active_class_entry)->ce_flags & 0x80) {
   if (((fn_flags_znode->u.constant).value.lval & ~(0x01|0x100))) {
    zend_error((1<<6L), "Access type for interface method %s::%s() must be omitted", (compiler_globals.active_class_entry)->name, function_name->u.constant.value.str.val);
   }
   (fn_flags_znode->u.constant).value.lval |= 0x02;
  }
  fn_flags = (fn_flags_znode->u.constant).value.lval;
 } else {
  fn_flags = 0;
 }
 if ((fn_flags & 0x01) && (fn_flags & 0x02) && !((compiler_globals.active_class_entry)->ce_flags & 0x80)) {
  zend_error((1<<11L), "Static function %s%s%s() should not be abstract", is_method ? (compiler_globals.active_class_entry)->name : "", is_method ? "::" : "", (function_name->u.constant).value.str.val);
 }

 function_token->u.op_array = (compiler_globals.active_op_array);

 orig_interactive = (compiler_globals.interactive);
 (compiler_globals.interactive) = 0;
 init_op_array(&op_array, 2, 64 );
 (compiler_globals.interactive) = orig_interactive;

 op_array.function_name = name;
 if (return_reference) {
  op_array.fn_flags |= 0x4000000;
 }
 op_array.fn_flags |= fn_flags;

 op_array.scope = is_method?(compiler_globals.active_class_entry):((void *)0);
 op_array.prototype = ((void *)0);

 op_array.line_start = zend_get_compiled_lineno();

 if (is_method) {
  int result;

  lcname = zend_new_interned_string(zend_str_tolower_dup(name, name_len), name_len + 1, 1 );

  if ((((lcname) >= (compiler_globals.interned_strings_start)) && ((lcname) < (compiler_globals.interned_strings_end)))) {
   result = _zend_hash_quick_add_or_update(&(compiler_globals.active_class_entry)->function_table, lcname, name_len+1, (((Bucket*)(((char*)(lcname))-sizeof(Bucket)))->h), &op_array, sizeof(zend_op_array), (void **) &(compiler_globals.active_op_array), (1<<1) );
  } else {
   result = _zend_hash_add_or_update(&(compiler_globals.active_class_entry)->function_table, lcname, name_len+1, &op_array, sizeof(zend_op_array), (void **) &(compiler_globals.active_op_array), (1<<1) );
  }
  if (result == -1) {
   zend_error((1<<6L), "Cannot redeclare %s::%s()", (compiler_globals.active_class_entry)->name, name);
  }

  zend_stack_push(&(compiler_globals.context_stack), (void *) &(compiler_globals.context), sizeof((compiler_globals.context)));
  zend_init_compiler_context();

  if (fn_flags & 0x02) {
   (compiler_globals.active_class_entry)->ce_flags |= 0x10;
  }

  if (!(fn_flags & (0x100 | 0x200 | 0x400))) {
   fn_flags |= 0x100;
  }

  if ((compiler_globals.active_class_entry)->ce_flags & 0x80) {
   if ((name_len == sizeof("__call")-1) && (!memcmp(lcname, "__call", sizeof("__call")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __call() must have public visibility and cannot be static");
    }
   } else if ((name_len == sizeof("__callstatic")-1) && (!memcmp(lcname, "__callstatic", sizeof("__callstatic")-1))) {
    if ((fn_flags & ((0x100 | 0x200 | 0x400) ^ 0x100)) || (fn_flags & 0x01) == 0) {
     zend_error((1<<1L), "The magic method __callStatic() must have public visibility and be static");
    }
   } else if ((name_len == sizeof("__get")-1) && (!memcmp(lcname, "__get", sizeof("__get")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __get() must have public visibility and cannot be static");
    }
   } else if ((name_len == sizeof("__set")-1) && (!memcmp(lcname, "__set", sizeof("__set")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __set() must have public visibility and cannot be static");
    }
   } else if ((name_len == sizeof("__unset")-1) && (!memcmp(lcname, "__unset", sizeof("__unset")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __unset() must have public visibility and cannot be static");
    }
   } else if ((name_len == sizeof("__isset")-1) && (!memcmp(lcname, "__isset", sizeof("__isset")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __isset() must have public visibility and cannot be static");
    }
   } else if ((name_len == sizeof("__tostring")-1) && (!memcmp(lcname, "__tostring", sizeof("__tostring")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __toString() must have public visibility and cannot be static");
    }
   }
  } else {
   char *class_lcname;

   class_lcname = ((use_heap = (__builtin_expect(((compiler_globals.active_class_entry)->name_length + 1) > ((32 * 1024)), 0))) ? _emalloc(((compiler_globals.active_class_entry)->name_length + 1) ) : __builtin_alloca ((compiler_globals.active_class_entry)->name_length + 1));
   zend_str_tolower_copy(class_lcname, (compiler_globals.active_class_entry)->name, (compiler_globals.active_class_entry)->name_length);


   if (((compiler_globals.active_class_entry)->name_length == name_len) && (((compiler_globals.active_class_entry)->ce_flags & 0x120) != 0x120) && (!memcmp(class_lcname, lcname, name_len))) {
    if (!(compiler_globals.active_class_entry)->constructor) {
     (compiler_globals.active_class_entry)->constructor = (zend_function *) (compiler_globals.active_op_array);
    }
   } else if ((name_len == sizeof("__construct")-1) && (!memcmp(lcname, "__construct", sizeof("__construct")))) {
    if ((compiler_globals.active_class_entry)->constructor) {
     zend_error((1<<11L), "Redefining already defined constructor for class %s", (compiler_globals.active_class_entry)->name);
    }
    (compiler_globals.active_class_entry)->constructor = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__destruct")-1) && (!memcmp(lcname, "__destruct", sizeof("__destruct")-1))) {
    (compiler_globals.active_class_entry)->destructor = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__clone")-1) && (!memcmp(lcname, "__clone", sizeof("__clone")-1))) {
    (compiler_globals.active_class_entry)->clone = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__call")-1) && (!memcmp(lcname, "__call", sizeof("__call")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __call() must have public visibility and cannot be static");
    }
    (compiler_globals.active_class_entry)->__call = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__callstatic")-1) && (!memcmp(lcname, "__callstatic", sizeof("__callstatic")-1))) {
    if ((fn_flags & ((0x100 | 0x200 | 0x400) ^ 0x100)) || (fn_flags & 0x01) == 0) {
     zend_error((1<<1L), "The magic method __callStatic() must have public visibility and be static");
    }
    (compiler_globals.active_class_entry)->__callstatic = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__get")-1) && (!memcmp(lcname, "__get", sizeof("__get")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __get() must have public visibility and cannot be static");
    }
    (compiler_globals.active_class_entry)->__get = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__set")-1) && (!memcmp(lcname, "__set", sizeof("__set")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __set() must have public visibility and cannot be static");
    }
    (compiler_globals.active_class_entry)->__set = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__unset")-1) && (!memcmp(lcname, "__unset", sizeof("__unset")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __unset() must have public visibility and cannot be static");
    }
    (compiler_globals.active_class_entry)->__unset = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__isset")-1) && (!memcmp(lcname, "__isset", sizeof("__isset")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __isset() must have public visibility and cannot be static");
    }
    (compiler_globals.active_class_entry)->__isset = (zend_function *) (compiler_globals.active_op_array);
   } else if ((name_len == sizeof("__tostring")-1) && (!memcmp(lcname, "__tostring", sizeof("__tostring")-1))) {
    if (fn_flags & (((0x100 | 0x200 | 0x400) | 0x01) ^ 0x100)) {
     zend_error((1<<1L), "The magic method __toString() must have public visibility and cannot be static");
    }
    (compiler_globals.active_class_entry)->__tostring = (zend_function *) (compiler_globals.active_op_array);
   } else if (!(fn_flags & 0x01)) {
    (compiler_globals.active_op_array)->fn_flags |= 0x10000;
   }
   do { if (__builtin_expect(use_heap, 0)) _efree((class_lcname) ); } while (0);
  }

  do { if (!(((lcname) >= (compiler_globals.interned_strings_start)) && ((lcname) < (compiler_globals.interned_strings_end)))) { _efree(((char*)lcname) ); } } while (0);
 } else {
  zend_op *opline = get_next_op((compiler_globals.active_op_array) );
  zval key;

  if ((compiler_globals.current_namespace)) {

   znode tmp;

   tmp.u.constant = *(compiler_globals.current_namespace);
   _zval_copy_ctor((&tmp.u.constant) );
   zend_do_build_namespace_name(&tmp, &tmp, function_name );
   op_array.function_name = (tmp.u.constant).value.str.val;
   name_len = (tmp.u.constant).value.str.len;
   lcname = zend_str_tolower_dup((tmp.u.constant).value.str.val, name_len);
  } else {
   lcname = zend_str_tolower_dup(name, name_len);
  }

  opline->opcode = 141;
  opline->op1_type = (1<<0);
  build_runtime_defined_function_key(&key, lcname, name_len );
  opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &key );
  (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len);
  opline->op2_type = (1<<0);
  do { zval _c; do { const char *__s=(lcname); int __l=name_len; zval *__z = (&_c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
  do { if (((((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1); } } while (0);
  opline->extended_value = 141;
  _zend_hash_quick_add_or_update((compiler_globals.function_table), (key).value.str.val, (key).value.str.len, (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value), &op_array, sizeof(zend_op_array), (void **) &(compiler_globals.active_op_array), (1<<0) );
  zend_stack_push(&(compiler_globals.context_stack), (void *) &(compiler_globals.context), sizeof((compiler_globals.context)));
  zend_init_compiler_context();
 }

 if ((compiler_globals.compiler_options) & (1<<0)) {
  zend_op *opline = get_next_op((compiler_globals.active_op_array) );

  opline->opcode = 104;
  opline->lineno = function_begin_line;
  opline->op1_type = (1<<3);
  opline->op2_type = (1<<3);
 }

 {

  zend_switch_entry switch_entry;

  switch_entry.cond.op_type = (1<<3);
  switch_entry.default_case = 0;
  switch_entry.control_var = 0;

  zend_stack_push(&(compiler_globals.switch_cond_stack), (void *) &switch_entry, sizeof(switch_entry));

  {

   zend_op dummy_opline;

   dummy_opline.result_type = (1<<3);
   dummy_opline.op1_type = (1<<3);

   zend_stack_push(&(compiler_globals.foreach_copy_stack), (void *) &dummy_opline, sizeof(zend_op));
  }
 }

 if ((compiler_globals.doc_comment)) {
  (compiler_globals.active_op_array)->doc_comment = (compiler_globals.doc_comment);
  (compiler_globals.active_op_array)->doc_comment_len = (compiler_globals.doc_comment_len);
  (compiler_globals.doc_comment) = ((void *)0);
  (compiler_globals.doc_comment_len) = 0;
 }
}


void zend_do_begin_lambda_function_declaration(znode *result, znode *function_token, int return_reference, int is_static )
{
 znode function_name;
 zend_op_array *current_op_array = (compiler_globals.active_op_array);
 int current_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *current_op;

 function_name.op_type = (1<<0);
 do { const char *__s=("{closure}"); int __l=sizeof("{closure}")-1; zval *__z = (&function_name.u.constant); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 zend_do_begin_function_declaration(function_token, &function_name, 0, return_reference, ((void *)0) );

 result->op_type = (1<<1);
 result->u.op.var = get_temporary_variable(current_op_array);

 current_op = &current_op_array->opcodes[current_op_number];
 current_op->opcode = 153;
 zend_del_literal(current_op_array, current_op->op2.constant);
 current_op->op2_type = (1<<3);
 do { current_op->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { current_op->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { current_op->result = (result)->u.op; } } while (0);
 if (is_static) {
  (compiler_globals.active_op_array)->fn_flags |= 0x01;
 }
 (compiler_globals.active_op_array)->fn_flags |= 0x100000;
}


void zend_do_handle_exception(void)
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 149;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_end_function_declaration(const znode *function_token )
{
 char lcname[16];
 int name_len;

 zend_do_extended_info();
 zend_do_return(((void *)0), 0 );

 pass_two((compiler_globals.active_op_array) );
 zend_release_labels();

 if ((compiler_globals.active_class_entry)) {
  zend_check_magic_method_implementation((compiler_globals.active_class_entry), (zend_function*)(compiler_globals.active_op_array), (1<<6L) );
 } else {


  name_len = strlen((compiler_globals.active_op_array)->function_name);
  zend_str_tolower_copy(lcname, (compiler_globals.active_op_array)->function_name, (((name_len)<(sizeof(lcname)-1))?(name_len):(sizeof(lcname)-1)));
  lcname[sizeof(lcname)-1] = '\0';
  if (name_len == sizeof("__autoload") - 1 && !memcmp(lcname, "__autoload", sizeof("__autoload")) && (compiler_globals.active_op_array)->num_args != 1) {
   zend_error((1<<6L), "%s() must take exactly 1 argument", "__autoload");
  }
 }

 (compiler_globals.active_op_array)->line_end = zend_get_compiled_lineno();
 (compiler_globals.active_op_array) = function_token->u.op_array;



 zend_stack_del_top(&(compiler_globals.switch_cond_stack));
 zend_stack_del_top(&(compiler_globals.foreach_copy_stack));
}


void zend_do_receive_arg(zend_uchar op, znode *varname, const znode *offset, const znode *initialization, znode *class_type, zend_uchar pass_by_reference )
{
 zend_op *opline;
 zend_arg_info *cur_arg_info;
 znode var;

 if (class_type->op_type == (1<<0) &&
     (class_type->u.constant).type == 6 &&
     (class_type->u.constant).value.str.len == 0) {

  _zval_dtor((&class_type->u.constant) );
  zend_error((1<<6L), "Cannot use 'namespace' as a class name");
  return;
 }

 if (zend_is_auto_global_quick((varname->u.constant).value.str.val, (varname->u.constant).value.str.len, 0 )) {
  zend_error((1<<6L), "Cannot re-assign auto-global variable %s", (varname->u.constant).value.str.val);
 } else {
  var.op_type = (1<<4);
  var.u.op.var = lookup_cv((compiler_globals.active_op_array), varname->u.constant.value.str.val, varname->u.constant.value.str.len, 0 );
  (varname->u.constant).value.str.val = (char*)(compiler_globals.active_op_array)->vars[var.u.op.var].name;
  var.EA = 0;
  if ((compiler_globals.active_op_array)->vars[var.u.op.var].hash_value == 275574653UL &&
   (varname->u.constant).value.str.len == sizeof("this")-1 &&
      !memcmp((varname->u.constant).value.str.val, "this", sizeof("this")-1)) {
   if ((compiler_globals.active_op_array)->scope &&
       ((compiler_globals.active_op_array)->fn_flags & 0x01) == 0) {
    zend_error((1<<6L), "Cannot re-assign $this");
   }
   (compiler_globals.active_op_array)->this_var = var.u.op.var;
  }
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 (compiler_globals.active_op_array)->num_args++;
 opline->opcode = op;
 do { opline->result_type = (&var)->op_type; if ((&var)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(&var)->u.constant ); } else { opline->result = (&var)->u.op; } } while (0);
 do { opline->op1_type = (offset)->op_type; if ((offset)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(offset)->u.constant ); } else { opline->op1 = (offset)->u.op; } } while (0);
 if (op == 64) {
  do { opline->op2_type = (initialization)->op_type; if ((initialization)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(initialization)->u.constant ); } else { opline->op2 = (initialization)->u.op; } } while (0);
 } else {
  (compiler_globals.active_op_array)->required_num_args = (compiler_globals.active_op_array)->num_args;
  opline->op2_type = (1<<3);
 }
 (compiler_globals.active_op_array)->arg_info = _erealloc(((compiler_globals.active_op_array)->arg_info), (sizeof(zend_arg_info)*((compiler_globals.active_op_array)->num_args)), 0 );
 cur_arg_info = &(compiler_globals.active_op_array)->arg_info[(compiler_globals.active_op_array)->num_args-1];
 cur_arg_info->name = zend_new_interned_string(_estrndup((varname->u.constant.value.str.val), (varname->u.constant.value.str.len) ), varname->u.constant.value.str.len + 1, 1 );
 cur_arg_info->name_len = varname->u.constant.value.str.len;
 cur_arg_info->type_hint = 0;
 cur_arg_info->allow_null = 1;
 cur_arg_info->pass_by_reference = pass_by_reference;
 cur_arg_info->class_name = ((void *)0);
 cur_arg_info->class_name_len = 0;

 if (class_type->op_type != (1<<3)) {
  cur_arg_info->allow_null = 0;

  if (class_type->u.constant.type != 0) {
   if (class_type->u.constant.type == 4) {
    cur_arg_info->type_hint = 4;
    if (op == 64) {
     if ((initialization->u.constant).type == 0 || ((initialization->u.constant).type == 8 && !strcasecmp((initialization->u.constant).value.str.val, "NULL"))) {
      cur_arg_info->allow_null = 1;
     } else if ((initialization->u.constant).type != 4 && (initialization->u.constant).type != 9) {
      zend_error((1<<6L), "Default value for parameters with array type hint can only be an array or NULL");
     }
    }
   } else if (class_type->u.constant.type == 10) {
    cur_arg_info->type_hint = 10;
    if (op == 64) {
     if ((initialization->u.constant).type == 0 || ((initialization->u.constant).type == 8 && !strcasecmp((initialization->u.constant).value.str.val, "NULL"))) {
      cur_arg_info->allow_null = 1;
     } else {
      zend_error((1<<6L), "Default value for parameters with callable type hint can only be NULL");
     }
    }
   } else {
    cur_arg_info->type_hint = 5;
    if (0 == zend_get_class_fetch_type((class_type->u.constant).value.str.val, (class_type->u.constant).value.str.len)) {
     zend_resolve_class_name(class_type, opline->extended_value, 1 );
    }
    (class_type->u.constant).value.str.val = (char*)zend_new_interned_string(class_type->u.constant.value.str.val, class_type->u.constant.value.str.len + 1, 1 );
    cur_arg_info->class_name = class_type->u.constant.value.str.val;
    cur_arg_info->class_name_len = class_type->u.constant.value.str.len;
    if (op == 64) {
     if ((initialization->u.constant).type == 0 || ((initialization->u.constant).type == 8 && !strcasecmp((initialization->u.constant).value.str.val, "NULL"))) {
      cur_arg_info->allow_null = 1;
     } else {
      zend_error((1<<6L), "Default value for parameters with a class type hint can only be NULL");
     }
    }
   }
  }
 }
}


int zend_do_begin_function_call(znode *function_name, zend_bool check_namespace )
{
 zend_function *function;
 char *lcname;
 char *is_compound = memchr((function_name->u.constant).value.str.val, '\\', (function_name->u.constant).value.str.len);

 zend_resolve_non_class_name(function_name, check_namespace );

 if (check_namespace && (compiler_globals.current_namespace) && !is_compound) {





   zend_do_begin_dynamic_function_call(function_name, 1 );
   return 1;
 }

 lcname = zend_str_tolower_dup(function_name->u.constant.value.str.val, function_name->u.constant.value.str.len);
 if ((zend_hash_find((compiler_globals.function_table), lcname, function_name->u.constant.value.str.len+1, (void **) &function)==-1) ||
   (((compiler_globals.compiler_options) & (1<<2)) &&
   (function->type == 1))) {
    zend_do_begin_dynamic_function_call(function_name, 0 );
    _efree((lcname) );
    return 1;
  }
 _efree((function_name->u.constant.value.str.val) );
 function_name->u.constant.value.str.val = lcname;

 zend_stack_push(&(compiler_globals.function_call_stack), (void *) &function, sizeof(zend_function *));
 zend_do_extended_fcall_begin();
 return 0;
}


void zend_do_begin_method_call(znode *left_bracket )
{
 zend_op *last_op;
 int last_op_number;
 unsigned char *ptr = ((void *)0);

 zend_do_end_variable_parse(left_bracket, 0, 0 );
 zend_do_begin_variable_parse();

 last_op_number = get_next_op_number((compiler_globals.active_op_array))-1;
 last_op = &(compiler_globals.active_op_array)->opcodes[last_op_number];

 if ((last_op->op2_type == (1<<0)) && ((((compiler_globals.active_op_array))->literals[last_op->op2.constant].constant).type == 6) && ((((compiler_globals.active_op_array))->literals[last_op->op2.constant].constant).value.str.len == sizeof("__clone")-1)
  && !zend_binary_strcasecmp((((compiler_globals.active_op_array))->literals[last_op->op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[last_op->op2.constant].constant).value.str.len, "__clone", sizeof("__clone")-1)) {
  zend_error((1<<6L), "Cannot call __clone() method on objects - use 'clone $obj' instead");
 }

 if (last_op->opcode == 82) {
  if (last_op->op2_type == (1<<0)) {
   zval name;

   name = ((compiler_globals.active_op_array))->literals[last_op->op2.constant].constant;
   if (!((((name).value.str.val) >= (compiler_globals.interned_strings_start)) && (((name).value.str.val) < (compiler_globals.interned_strings_end)))) {
    (name).value.str.val = _estrndup(((name).value.str.val), ((name).value.str.len) );
   }
   do { if ((compiler_globals.active_op_array)->literals[last_op->op2.constant].cache_slot == (compiler_globals.active_op_array)->last_cache_slot - 2) { (compiler_globals.active_op_array)->literals[last_op->op2.constant].cache_slot = -1; (compiler_globals.active_op_array)->last_cache_slot -= 2; } } while (0);
   last_op->op2.constant =
    zend_add_func_name_literal((compiler_globals.active_op_array), &name );
   do { (compiler_globals.active_op_array)->literals[last_op->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot; (compiler_globals.active_op_array)->last_cache_slot += 2; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 2] = ((void *)0); } } while (0);
  }
  last_op->opcode = 112;
  last_op->result_type = (1<<3);
  (left_bracket->u.constant).value.lval = 59;
 } else {
  zend_op *opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 59;
  opline->op1_type = (1<<3);
  if (left_bracket->op_type == (1<<0)) {
   opline->op2_type = (1<<0);
   opline->op2.constant = zend_add_func_name_literal((compiler_globals.active_op_array), &left_bracket->u.constant );
   do { (compiler_globals.active_op_array)->literals[opline->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);
  } else {
   do { opline->op2_type = (left_bracket)->op_type; if ((left_bracket)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(left_bracket)->u.constant ); } else { opline->op2 = (left_bracket)->u.op; } } while (0);
  }
 }

 zend_stack_push(&(compiler_globals.function_call_stack), (void *) &ptr, sizeof(zend_function *));
 zend_do_extended_fcall_begin();
}


void zend_do_clone(znode *result, const znode *expr )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 110;
 do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_begin_dynamic_function_call(znode *function_name, int ns_call )
{
 unsigned char *ptr = ((void *)0);
 zend_op *opline;

 opline = get_next_op((compiler_globals.active_op_array) );
 if (ns_call) {


  opline->opcode = 69;
  opline->op1_type = (1<<3);
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_ns_func_name_literal((compiler_globals.active_op_array), &function_name->u.constant );
  do { (compiler_globals.active_op_array)->literals[opline->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);
 } else {
  opline->opcode = 59;
  opline->op1_type = (1<<3);
  if (function_name->op_type == (1<<0)) {
   opline->op2_type = (1<<0);
   opline->op2.constant = zend_add_func_name_literal((compiler_globals.active_op_array), &function_name->u.constant );
   do { (compiler_globals.active_op_array)->literals[opline->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);
  } else {
   do { opline->op2_type = (function_name)->op_type; if ((function_name)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(function_name)->u.constant ); } else { opline->op2 = (function_name)->u.op; } } while (0);
  }
 }

 zend_stack_push(&(compiler_globals.function_call_stack), (void *) &ptr, sizeof(zend_function *));
 zend_do_extended_fcall_begin();
}


void zend_resolve_non_class_name(znode *element_name, zend_bool check_namespace )
{
 znode tmp;
 int len;
 zval **ns;
 char *lcname, *compound = memchr((element_name->u.constant).value.str.val, '\\', (element_name->u.constant).value.str.len);

 if ((element_name->u.constant).value.str.val[0] == '\\') {

  memmove((element_name->u.constant).value.str.val, (element_name->u.constant).value.str.val+1, (element_name->u.constant).value.str.len);
  --(element_name->u.constant).value.str.len;
  return;
 }

 if(!check_namespace) {
  return;
 }

 if (compound && (compiler_globals.current_import)) {
  len = compound - (element_name->u.constant).value.str.val;
  lcname = zend_str_tolower_dup((element_name->u.constant).value.str.val, len);

  if (zend_hash_find((compiler_globals.current_import), lcname, len+1, (void**)&ns) == 0) {

   tmp.op_type = (1<<0);
   tmp.u.constant = **ns;
   _zval_copy_ctor((&tmp.u.constant) );
   len += 1;
   (element_name->u.constant).value.str.len -= len;
   memmove((element_name->u.constant).value.str.val, (element_name->u.constant).value.str.val+len, (element_name->u.constant).value.str.len+1);
   zend_do_build_namespace_name(&tmp, &tmp, element_name );
   *element_name = tmp;
   _efree((lcname) );
   return;
  }
  _efree((lcname) );
 }

 if ((compiler_globals.current_namespace)) {
  tmp = *element_name;
  (tmp.u.constant).value.str.len = sizeof("\\")-1 + (element_name->u.constant).value.str.len + (*(compiler_globals.current_namespace)).value.str.len;
  (tmp.u.constant).value.str.val = (char *) _emalloc(((tmp.u.constant).value.str.len+1) );
  memcpy((tmp.u.constant).value.str.val, (*(compiler_globals.current_namespace)).value.str.val, (*(compiler_globals.current_namespace)).value.str.len);
  memcpy(&((tmp.u.constant).value.str.val[(*(compiler_globals.current_namespace)).value.str.len]), "\\", sizeof("\\")-1);
  memcpy(&((tmp.u.constant).value.str.val[(*(compiler_globals.current_namespace)).value.str.len + sizeof("\\")-1]), (element_name->u.constant).value.str.val, (element_name->u.constant).value.str.len+1);
  if ((element_name->u.constant).value.str.val && !((((element_name->u.constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((element_name->u.constant).value.str.val) < (compiler_globals.interned_strings_end)))) { _efree(((element_name->u.constant).value.str.val) ); };
  *element_name = tmp;
 }
}


void zend_resolve_class_name(znode *class_name, ulong fetch_type, int check_ns_name )
{
 char *compound;
 char *lcname;
 zval **ns;
 znode tmp;
 int len;

 compound = memchr((class_name->u.constant).value.str.val, '\\', (class_name->u.constant).value.str.len);
 if (compound) {

  if ((class_name->u.constant).value.str.val[0] == '\\') {

   (class_name->u.constant).value.str.len -= 1;
   memmove((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.val+1, (class_name->u.constant).value.str.len+1);
   (class_name->u.constant).value.str.val = _erealloc(((class_name->u.constant).value.str.val), ((class_name->u.constant).value.str.len + 1), 0 )

                                        ;

   if (0 != zend_get_class_fetch_type((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.len)) {
    zend_error((1<<6L), "'\\%s' is an invalid class name", (class_name->u.constant).value.str.val);
   }
  } else {
   if ((compiler_globals.current_import)) {
    len = compound - (class_name->u.constant).value.str.val;
    lcname = zend_str_tolower_dup((class_name->u.constant).value.str.val, len);

    if (zend_hash_find((compiler_globals.current_import), lcname, len+1, (void**)&ns) == 0) {

     tmp.op_type = (1<<0);
     tmp.u.constant = **ns;
     _zval_copy_ctor((&tmp.u.constant) );
     len += 1;
     (class_name->u.constant).value.str.len -= len;
     memmove((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.val+len, (class_name->u.constant).value.str.len+1);
     zend_do_build_namespace_name(&tmp, &tmp, class_name );
     *class_name = tmp;
     _efree((lcname) );
     return;
    }
    _efree((lcname) );
   }

   if ((compiler_globals.current_namespace)) {
    tmp.op_type = (1<<0);
    tmp.u.constant = *(compiler_globals.current_namespace);
    _zval_copy_ctor((&tmp.u.constant) );
    zend_do_build_namespace_name(&tmp, &tmp, class_name );
    *class_name = tmp;
   }
  }
 } else if ((compiler_globals.current_import) || (compiler_globals.current_namespace)) {

  lcname = zend_str_tolower_dup((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.len);

  if ((compiler_globals.current_import) &&
      zend_hash_find((compiler_globals.current_import), lcname, (class_name->u.constant).value.str.len+1, (void**)&ns) == 0) {

   _zval_dtor((&class_name->u.constant) );
   class_name->u.constant = **ns;
   _zval_copy_ctor((&class_name->u.constant) );
  } else if ((compiler_globals.current_namespace)) {

   tmp.op_type = (1<<0);
   tmp.u.constant = *(compiler_globals.current_namespace);
   _zval_copy_ctor((&tmp.u.constant) );
   zend_do_build_namespace_name(&tmp, &tmp, class_name );
   *class_name = tmp;
  }
  _efree((lcname) );
 }
}


void zend_do_fetch_class(znode *result, znode *class_name )
{
 long fetch_class_op_number;
 zend_op *opline;

 if (class_name->op_type == (1<<0) &&
     (class_name->u.constant).type == 6 &&
     (class_name->u.constant).value.str.len == 0) {

  _zval_dtor((&class_name->u.constant) );
  zend_error((1<<6L), "Cannot use 'namespace' as a class name");
  return;
 }

 fetch_class_op_number = get_next_op_number((compiler_globals.active_op_array));
 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 109;
 opline->op1_type = (1<<3);
 opline->extended_value = 4;
 (compiler_globals.catch_begin) = fetch_class_op_number;
 if (class_name->op_type == (1<<0)) {
  int fetch_type;

  fetch_type = zend_get_class_fetch_type(class_name->u.constant.value.str.val, class_name->u.constant.value.str.len);
  switch (fetch_type) {
   case 1:
   case 2:
   case 7:
    opline->op2_type = (1<<3);
    opline->extended_value = fetch_type;
    _zval_dtor((&class_name->u.constant) );
    break;
   default:
    zend_resolve_class_name(class_name, opline->extended_value, 0 );
    opline->op2_type = (1<<0);
    opline->op2.constant =
     zend_add_class_name_literal((compiler_globals.active_op_array), &class_name->u.constant );
    break;
  }
 } else {
  do { opline->op2_type = (class_name)->op_type; if ((class_name)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(class_name)->u.constant ); } else { opline->op2 = (class_name)->u.op; } } while (0);
 }
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 opline->result_type = (1<<2);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
 result->EA = opline->extended_value;
}


void zend_do_label(znode *label )
{
 zend_label dest;

 if (!(compiler_globals.context).labels) {
  ((compiler_globals.context).labels) = (HashTable *) _emalloc((sizeof(HashTable)) );
  _zend_hash_init(((compiler_globals.context).labels), (4), (((void *)0)), (((void *)0)), (0) );
 }

 dest.brk_cont = (compiler_globals.context).current_brk_cont;
 dest.opline_num = get_next_op_number((compiler_globals.active_op_array));

 if (_zend_hash_add_or_update((compiler_globals.context).labels, (label->u.constant).value.str.val, (label->u.constant).value.str.len + 1, (void**)&dest, sizeof(zend_label), ((void *)0), (1<<1) ) == -1) {
  zend_error((1<<6L), "Label '%s' already defined", (label->u.constant).value.str.val);
 }


 _zval_dtor((&label->u.constant) );
}


void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline, int pass2 )
{
 zend_label *dest;
 long current, distance;
 zval *label;

 if (pass2) {
  label = opline->op2.zv;
 } else {
  label = &(op_array)->literals[opline->op2.constant].constant;
 }
 if ((compiler_globals.context).labels == ((void *)0) ||
     zend_hash_find((compiler_globals.context).labels, (*label).value.str.val, (*label).value.str.len+1, (void**)&dest) == -1) {

  if (pass2) {
   (compiler_globals.in_compilation) = 1;
   (compiler_globals.active_op_array) = op_array;
   (compiler_globals.zend_lineno) = opline->lineno;
   zend_error((1<<6L), "'goto' to undefined label '%s'", (*label).value.str.val);
  } else {

   if (op_array->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
   return;
  }
 }

 opline->op1.opline_num = dest->opline_num;
 _zval_dtor((label) );
 (*label).type = 0;


 current = opline->extended_value;
 for (distance = 0; current != dest->brk_cont; distance++) {
  if (current == -1) {
   if (pass2) {
    (compiler_globals.in_compilation) = 1;
    (compiler_globals.active_op_array) = op_array;
    (compiler_globals.zend_lineno) = opline->lineno;
   }
   zend_error((1<<6L), "'goto' into loop or switch statement is disallowed");
  }
  current = op_array->brk_cont_array[current].parent;
 }

 if (distance == 0) {

  opline->opcode = 42;
  opline->extended_value = 0;
  opline->op2_type = (1<<3);
 } else {

  { zval *__z = (label); (*__z).value.lval = distance; (*__z).type = 1; };
 }

 if (pass2) {
  if (op_array->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
 }
}


void zend_do_goto(const znode *label )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 100;
 opline->extended_value = (compiler_globals.context).current_brk_cont;
 opline->op1_type = (1<<3);
 do { opline->op2_type = (label)->op_type; if ((label)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(label)->u.constant ); } else { opline->op2 = (label)->u.op; } } while (0);
 zend_resolve_goto_label((compiler_globals.active_op_array), opline, 0 );
}


void zend_release_labels(void)
{
 if ((compiler_globals.context).labels) {
  zend_hash_destroy((compiler_globals.context).labels);
  _efree(((compiler_globals.context).labels) );
 }
 if (!zend_stack_is_empty(&(compiler_globals.context_stack))) {
  zend_compiler_context *ctx;

  zend_stack_top(&(compiler_globals.context_stack), (void**)&ctx);
  (compiler_globals.context) = *ctx;
  zend_stack_del_top(&(compiler_globals.context_stack));
 }
}


void zend_do_build_full_name(znode *result, znode *prefix, znode *name, int is_class_member )
{
 zend_uint length;

 if (!result) {
  result = prefix;
 } else {
  *result = *prefix;
 }

 if (is_class_member) {
  length = sizeof("::")-1 + result->u.constant.value.str.len + name->u.constant.value.str.len;
  result->u.constant.value.str.val = _erealloc((result->u.constant.value.str.val), (length+1), 0 );
  memcpy(&result->u.constant.value.str.val[result->u.constant.value.str.len], "::", sizeof("::")-1);
  memcpy(&result->u.constant.value.str.val[result->u.constant.value.str.len + sizeof("::")-1], name->u.constant.value.str.val, name->u.constant.value.str.len+1);
  if (name->u.constant.value.str.val && !(((name->u.constant.value.str.val) >= (compiler_globals.interned_strings_start)) && ((name->u.constant.value.str.val) < (compiler_globals.interned_strings_end)))) { _efree((name->u.constant.value.str.val) ); };
  result->u.constant.value.str.len = length;
 } else {
  length = sizeof("\\")-1 + result->u.constant.value.str.len + name->u.constant.value.str.len;
  result->u.constant.value.str.val = _erealloc((result->u.constant.value.str.val), (length+1), 0 );
  memcpy(&result->u.constant.value.str.val[result->u.constant.value.str.len], "\\", sizeof("\\")-1);
  memcpy(&result->u.constant.value.str.val[result->u.constant.value.str.len + sizeof("\\")-1], name->u.constant.value.str.val, name->u.constant.value.str.len+1);
  if (name->u.constant.value.str.val && !(((name->u.constant.value.str.val) >= (compiler_globals.interned_strings_start)) && ((name->u.constant.value.str.val) < (compiler_globals.interned_strings_end)))) { _efree((name->u.constant.value.str.val) ); };
  result->u.constant.value.str.len = length;
 }
}


int zend_do_begin_class_member_function_call(znode *class_name, znode *method_name )
{
 znode class_node;
 unsigned char *ptr = ((void *)0);
 zend_op *opline;

 if (method_name->op_type == (1<<0)) {
  char *lcname = zend_str_tolower_dup((method_name->u.constant).value.str.val, (method_name->u.constant).value.str.len);
  if ((sizeof("__construct")-1) == (method_name->u.constant).value.str.len &&
      memcmp(lcname, "__construct", sizeof("__construct")-1) == 0) {
   _zval_dtor((&method_name->u.constant) );
   method_name->op_type = (1<<3);
  }
  _efree((lcname) );
 }

 if (class_name->op_type == (1<<0) &&
     0 == zend_get_class_fetch_type((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.len)) {
  zend_resolve_class_name(class_name, 4, 1 );
  class_node = *class_name;
  opline = get_next_op((compiler_globals.active_op_array) );
 } else {
  zend_do_fetch_class(&class_node, class_name );
  opline = get_next_op((compiler_globals.active_op_array) );
  opline->extended_value = class_node.EA ;
 }
 opline->opcode = 113;
 if (class_node.op_type == (1<<0)) {
  opline->op1_type = (1<<0);
  opline->op1.constant =
   zend_add_class_name_literal((compiler_globals.active_op_array), &class_node.u.constant );
 } else {
  do { opline->op1_type = (&class_node)->op_type; if ((&class_node)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&class_node)->u.constant ); } else { opline->op1 = (&class_node)->u.op; } } while (0);
 }
 if (method_name->op_type == (1<<0)) {
  opline->op2_type = (1<<0);
  opline->op2.constant =
   zend_add_func_name_literal((compiler_globals.active_op_array), &method_name->u.constant );
  if (opline->op1_type == (1<<0)) {
   do { (compiler_globals.active_op_array)->literals[opline->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);
  } else {
   do { (compiler_globals.active_op_array)->literals[opline->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot; (compiler_globals.active_op_array)->last_cache_slot += 2; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 2] = ((void *)0); } } while (0);
  }
 } else {
  do { opline->op2_type = (method_name)->op_type; if ((method_name)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(method_name)->u.constant ); } else { opline->op2 = (method_name)->u.op; } } while (0);
 }

 zend_stack_push(&(compiler_globals.function_call_stack), (void *) &ptr, sizeof(zend_function *));
 zend_do_extended_fcall_begin();
 return 1;
}


void zend_do_end_function_call(znode *function_name, znode *result, const znode *argument_list, int is_method, int is_dynamic_fcall )
{
 zend_op *opline;

 if (is_method && function_name && function_name->op_type == (1<<3)) {

  if ((argument_list->u.constant).value.lval != 0) {
   zend_error((1<<1L), "Clone method does not require arguments");
  }
  opline = &(compiler_globals.active_op_array)->opcodes[(function_name->u.constant).value.lval];
 } else {
  opline = get_next_op((compiler_globals.active_op_array) );
  if (!is_method && !is_dynamic_fcall && function_name->op_type==(1<<0)) {
   opline->opcode = 60;
   do { opline->op1_type = (function_name)->op_type; if ((function_name)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(function_name)->u.constant ); } else { opline->op1 = (function_name)->u.op; } } while (0);
   do { if (((((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len+1); } } while (0);
   do { (compiler_globals.active_op_array)->literals[opline->op1.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);
  } else {
   opline->opcode = 61;
   opline->op1_type = (1<<3);
  }
 }

 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 opline->result_type = (1<<2);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0) ;
 opline->op2_type = (1<<3);

 zend_stack_del_top(&(compiler_globals.function_call_stack));
 opline->extended_value = (argument_list->u.constant).value.lval;
}


void zend_do_pass_param(znode *param, zend_uchar op, int offset )
{
 zend_op *opline;
 int original_op=op;
 zend_function **function_ptr_ptr, *function_ptr;
 int send_by_reference;
 int send_function = 0;

 zend_stack_top(&(compiler_globals.function_call_stack), (void **) &function_ptr_ptr);
 function_ptr = *function_ptr_ptr;

 if (original_op == 67) {
  if (function_ptr &&
      function_ptr->common.function_name &&
      function_ptr->common.type == 2 &&
      !((function_ptr) && ((((zend_function*)(function_ptr))->common.arg_info && (zend_uint) offset <= ((zend_function*)(function_ptr))->common.num_args) ? (((zend_function *)(function_ptr))->common.arg_info[(zend_uint) offset-1].pass_by_reference & (1|2)) : (((zend_function *)(function_ptr))->common.fn_flags & (0x1000000|0x2000000))))) {
   zend_error((1<<6L),
      "Call-time pass-by-reference has been removed; "
      "If you would like to pass argument by reference, modify the declaration of %s().",
      function_ptr->common.function_name);
  } else {
   zend_error((1<<6L), "Call-time pass-by-reference has been removed");
  }
  return;
 }

 if (function_ptr) {
  if (((function_ptr) && ((((zend_function*)(function_ptr))->common.arg_info && (zend_uint) offset <= ((zend_function*)(function_ptr))->common.num_args) ? (((zend_function *)(function_ptr))->common.arg_info[(zend_uint) offset-1].pass_by_reference & (2)) : (((zend_function *)(function_ptr))->common.fn_flags & (0x2000000))))) {
   if (param->op_type & ((1<<2)|(1<<4)) && original_op != 65) {
    send_by_reference = 1;
    if (op == 66 && zend_is_function_or_method_call(param)) {

     op = 106;
     send_function = (1<<2) | (1<<3);
    }
   } else {
    op = 65;
    send_by_reference = 0;
   }
  } else {
   send_by_reference = ((function_ptr) && ((((zend_function*)(function_ptr))->common.arg_info && (zend_uint) offset <= ((zend_function*)(function_ptr))->common.num_args) ? (((zend_function *)(function_ptr))->common.arg_info[(zend_uint) offset-1].pass_by_reference & (1|2)) : (((zend_function *)(function_ptr))->common.fn_flags & (0x1000000|0x2000000)))) ? (1<<0) : 0;
  }
 } else {
  send_by_reference = 0;
 }

 if (op == 66 && zend_is_function_or_method_call(param)) {

  op = 106;
  send_function = (1<<2);
 } else if (op == 65 && (param->op_type & ((1<<2)|(1<<4)))) {
  op = 106;
 }

 if (op!=106 && send_by_reference==(1<<0)) {

  switch (param->op_type) {
   case (1<<2):
   case (1<<4):
    op = 67;
    break;
   default:
    zend_error((1<<6L), "Only variables can be passed by reference");
    break;
  }
 }

 if (original_op == 66) {
  switch (op) {
   case 106:
    zend_do_end_variable_parse(param, 0, 0 );
    break;
   case 66:
    if (function_ptr) {
     zend_do_end_variable_parse(param, 0, 0 );
    } else {
     zend_do_end_variable_parse(param, 5, offset );
    }
    break;
   case 67:
    zend_do_end_variable_parse(param, 1, 0 );
    break;
  }
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 if (op == 106) {
  if (function_ptr) {
   opline->extended_value = (1<<1) | send_by_reference | send_function;
  } else {
   opline->extended_value = send_function;
  }
 } else {
  if (function_ptr) {
   opline->extended_value = 60;
  } else {
   opline->extended_value = 61;
  }
 }
 opline->opcode = op;
 do { opline->op1_type = (param)->op_type; if ((param)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(param)->u.constant ); } else { opline->op1 = (param)->u.op; } } while (0);
 opline->op2.opline_num = offset;
 opline->op2_type = (1<<3);
}


static int generate_free_switch_expr(const zend_switch_entry *switch_entry )
{
 zend_op *opline;

 if (switch_entry->cond.op_type != (1<<2) && switch_entry->cond.op_type != (1<<1)) {
  return (switch_entry->cond.op_type == (1<<3));
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = (switch_entry->cond.op_type == (1<<1)) ? 70 : 49;
 do { opline->op1_type = (&switch_entry->cond)->op_type; if ((&switch_entry->cond)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&switch_entry->cond)->u.constant ); } else { opline->op1 = (&switch_entry->cond)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 opline->extended_value = 0;
 return 0;
}


static int generate_free_foreach_copy(const zend_op *foreach_copy )
{
 zend_op *opline;


 if (foreach_copy->result_type == (1<<3) && foreach_copy->op1_type == (1<<3)) {
  return 1;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = (foreach_copy->result_type == (1<<1)) ? 70 : 49;
 do { opline->op1_type = foreach_copy->result_type; opline->op1 = foreach_copy->result; } while (0);
 opline->op2_type = (1<<3);
 opline->extended_value = 1;

 if (foreach_copy->op1_type != (1<<3)) {
  opline = get_next_op((compiler_globals.active_op_array) );

  opline->opcode = (foreach_copy->op1_type == (1<<1)) ? 70 : 49;
  do { opline->op1_type = foreach_copy->op1_type; opline->op1 = foreach_copy->op1; } while (0);
  opline->op2_type = (1<<3);
  opline->extended_value = 0;
 }

 return 0;
}


void zend_do_return(znode *expr, int do_end_vparse )
{
 zend_op *opline;
 int start_op_number, end_op_number;

 if (do_end_vparse) {
  if (((compiler_globals.active_op_array)->fn_flags & 0x4000000) && !zend_is_function_or_method_call(expr)) {
   zend_do_end_variable_parse(expr, 1, 0 );
  } else {
   zend_do_end_variable_parse(expr, 0, 0 );
  }
 }

 start_op_number = get_next_op_number((compiler_globals.active_op_array));





 zend_stack_apply(&(compiler_globals.switch_cond_stack), 1, (int (*)(void *element)) generate_free_switch_expr);
 zend_stack_apply(&(compiler_globals.foreach_copy_stack), 1, (int (*)(void *element)) generate_free_foreach_copy);


 end_op_number = get_next_op_number((compiler_globals.active_op_array));
 while (start_op_number < end_op_number) {
  (compiler_globals.active_op_array)->opcodes[start_op_number].extended_value |= (1<<2);
  start_op_number++;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = ((compiler_globals.active_op_array)->fn_flags & 0x4000000) ? 111 : 62;

 if (expr) {
  do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);

  if (do_end_vparse && zend_is_function_or_method_call(expr)) {
   opline->extended_value = 1<<0;
  }
 } else {
  opline->op1_type = (1<<0);
  do { zval _c; _c = zval_used_for_init;; opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
 }

 opline->op2_type = (1<<3);
}


static int zend_add_try_element(zend_uint try_op )
{
 int try_catch_offset = (compiler_globals.active_op_array)->last_try_catch++;

 (compiler_globals.active_op_array)->try_catch_array = _erealloc(((compiler_globals.active_op_array)->try_catch_array), (sizeof(zend_try_catch_element)*(compiler_globals.active_op_array)->last_try_catch), 0 );
 (compiler_globals.active_op_array)->try_catch_array[try_catch_offset].try_op = try_op;
 return try_catch_offset;
}


static void zend_add_catch_element(int offset, zend_uint catch_op )
{
 (compiler_globals.active_op_array)->try_catch_array[offset].catch_op = catch_op;
}


void zend_do_first_catch(znode *open_parentheses )
{
 open_parentheses->u.op.opline_num = get_next_op_number((compiler_globals.active_op_array));
}


void zend_initialize_try_catch_element(const znode *try_token )
{
 int jmp_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 zend_llist jmp_list;
 zend_llist *jmp_list_ptr;

 opline->opcode = 42;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);


 zend_llist_init(&jmp_list, sizeof(int), ((void *)0), 0);
 zend_stack_push(&(compiler_globals.bp_stack), (void *) &jmp_list, sizeof(zend_llist));
 zend_stack_top(&(compiler_globals.bp_stack), (void **) &jmp_list_ptr);
 zend_llist_add_element(jmp_list_ptr, &jmp_op_number);

 zend_add_catch_element(try_token->u.op.opline_num, get_next_op_number((compiler_globals.active_op_array)) );
}


void zend_do_mark_last_catch(const znode *first_catch, const znode *last_additional_catch )
{
 (compiler_globals.active_op_array)->last--;
 zend_do_if_end();
 if (last_additional_catch->u.op.opline_num == -1) {
  (compiler_globals.active_op_array)->opcodes[first_catch->u.op.opline_num].result.num = 1;
  (compiler_globals.active_op_array)->opcodes[first_catch->u.op.opline_num].extended_value = get_next_op_number((compiler_globals.active_op_array));
 } else {
  (compiler_globals.active_op_array)->opcodes[last_additional_catch->u.op.opline_num].result.num = 1;
  (compiler_globals.active_op_array)->opcodes[last_additional_catch->u.op.opline_num].extended_value = get_next_op_number((compiler_globals.active_op_array));
 }
 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_do_try(znode *try_token )
{
 try_token->u.op.opline_num = zend_add_try_element(get_next_op_number((compiler_globals.active_op_array)) );
 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_begin_catch(znode *try_token, znode *class_name, znode *catch_var, znode *first_catch )
{
 long catch_op_number;
 zend_op *opline;
 znode catch_class;

 if (class_name->op_type == (1<<0) &&
     0 == zend_get_class_fetch_type((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.len)) {
  zend_resolve_class_name(class_name, 4, 1 );
  catch_class = *class_name;
 } else {
  zend_error((1<<6L), "Bad class name in the catch statement");
 }

 catch_op_number = get_next_op_number((compiler_globals.active_op_array));
 if (first_catch) {
  first_catch->u.op.opline_num = catch_op_number;
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 107;
 opline->op1_type = (1<<0);
 opline->op1.constant = zend_add_class_name_literal((compiler_globals.active_op_array), &catch_class.u.constant );
 opline->op2_type = (1<<4);
 opline->op2.var = lookup_cv((compiler_globals.active_op_array), catch_var->u.constant.value.str.val, catch_var->u.constant.value.str.len, 0 );
 (catch_var->u.constant).value.str.val = (char*)(compiler_globals.active_op_array)->vars[opline->op2.var].name;
 opline->result.num = 0;

 try_token->u.op.opline_num = catch_op_number;
}


void zend_do_end_catch(const znode *try_token )
{
 int jmp_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 zend_llist *jmp_list_ptr;

 opline->opcode = 42;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);


 zend_stack_top(&(compiler_globals.bp_stack), (void **) &jmp_list_ptr);
 zend_llist_add_element(jmp_list_ptr, &jmp_op_number);

 (compiler_globals.active_op_array)->opcodes[try_token->u.op.opline_num].extended_value = get_next_op_number((compiler_globals.active_op_array));
}


void zend_do_throw(const znode *expr )
{
 zend_op *opline;

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 108;
 do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);
 opline->op2_type = (1<<3);
}


__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function)
{
 if (function->type == 2) {
  zend_op_array *op_array = &function->op_array;

  (*op_array->refcount)++;
  if (op_array->static_variables) {
   HashTable *static_variables = op_array->static_variables;
   zval *tmp_zval;

   (op_array->static_variables) = (HashTable *) _emalloc((sizeof(HashTable)) );
   _zend_hash_init((op_array->static_variables), (zend_hash_num_elements(static_variables)), (((void *)0)), ((void (*)(void *)) _zval_ptr_dtor), (0) );
   zend_hash_copy(op_array->static_variables, static_variables, (copy_ctor_func_t) zval_add_ref, (void *) &tmp_zval, sizeof(zval *));
  }
  op_array->run_time_cache = ((void *)0);
 }
}


static void do_inherit_parent_constructor(zend_class_entry *ce)
{
 zend_function *function;

 if (!ce->parent) {
  return;
 }


 ce->create_object = ce->parent->create_object;


 if (!ce->get_iterator) {
  ce->get_iterator = ce->parent->get_iterator;
 }
 if (!ce->iterator_funcs.funcs) {
  ce->iterator_funcs.funcs = ce->parent->iterator_funcs.funcs;
 }
 if (!ce->__get) {
  ce->__get = ce->parent->__get;
 }
 if (!ce->__set) {
  ce->__set = ce->parent->__set;
 }
 if (!ce->__unset) {
  ce->__unset = ce->parent->__unset;
 }
 if (!ce->__isset) {
  ce->__isset = ce->parent->__isset;
 }
 if (!ce->__call) {
  ce->__call = ce->parent->__call;
 }
 if (!ce->__callstatic) {
  ce->__callstatic = ce->parent->__callstatic;
 }
 if (!ce->__tostring) {
  ce->__tostring = ce->parent->__tostring;
 }
 if (!ce->clone) {
  ce->clone = ce->parent->clone;
 }
 if(!ce->serialize) {
  ce->serialize = ce->parent->serialize;
 }
 if(!ce->unserialize) {
  ce->unserialize = ce->parent->unserialize;
 }
 if (!ce->destructor) {
  ce->destructor = ce->parent->destructor;
 }
 if (ce->constructor) {
  if (ce->parent->constructor && ce->parent->constructor->common.fn_flags & 0x04) {
   zend_error((1<<0L), "Cannot override final %s::%s() with %s::%s()",
    ce->parent->name, ce->parent->constructor->common.function_name,
    ce->name, ce->constructor->common.function_name
    );
  }
  return;
 }

 if (zend_hash_find(&ce->parent->function_table, "__construct", sizeof("__construct"), (void **)&function)==0) {

  _zend_hash_add_or_update(&ce->function_table, "__construct", sizeof("__construct"), function, sizeof(zend_function), ((void *)0), (1<<0) );
  function_add_ref(function);
 } else {

  char *lc_class_name;
  char *lc_parent_class_name;

  lc_class_name = zend_str_tolower_dup(ce->name, ce->name_length);
  if (!zend_hash_exists(&ce->function_table, lc_class_name, ce->name_length+1)) {
   lc_parent_class_name = zend_str_tolower_dup(ce->parent->name, ce->parent->name_length);
   if (!zend_hash_exists(&ce->function_table, lc_parent_class_name, ce->parent->name_length+1) &&
     zend_hash_find(&ce->parent->function_table, lc_parent_class_name, ce->parent->name_length+1, (void **)&function)==0) {
    if (function->common.fn_flags & 0x2000) {

     _zend_hash_add_or_update(&ce->function_table, lc_parent_class_name, ce->parent->name_length+1, function, sizeof(zend_function), ((void *)0), (1<<0) );
     function_add_ref(function);
    }
   }
   _efree((lc_parent_class_name) );
  }
  _efree((lc_class_name) );
 }
 ce->constructor = ce->parent->constructor;
}


char *zend_visibility_string(zend_uint fn_flags)
{
 if (fn_flags & 0x400) {
  return "private";
 }
 if (fn_flags & 0x200) {
  return "protected";
 }
 if (fn_flags & 0x100) {
  return "public";
 }
 return "";
}


static void do_inherit_method(zend_function *function)
{




 function_add_ref(function);
}


static zend_bool zend_do_perform_implementation_check(const zend_function *fe, const zend_function *proto )
{
 zend_uint i;





 if (!proto || (!proto->common.arg_info && proto->common.type != 2)) {
  return 1;
 }




 if ((fe->common.fn_flags & 0x2000)
  && ((proto->common.scope->ce_flags & 0x80) == 0
   && (proto->common.fn_flags & 0x02) == 0)) {
  return 1;
 }


 if (proto->common.required_num_args < fe->common.required_num_args
  || proto->common.num_args > fe->common.num_args) {
  return 0;
 }

 if (fe->common.type != 2
  && (proto->common.fn_flags & 0x1000000) != 0
  && (fe->common.fn_flags & 0x1000000) == 0) {
  return 0;
 }


 if ((proto->common.fn_flags & 0x4000000)
  && !(fe->common.fn_flags & 0x4000000)) {
  return 0;
 }

 for (i=0; i < proto->common.num_args; i++) {
  if ((((fe->common.arg_info[i].class_name) ? 1 : 0) ^ ((proto->common.arg_info[i].class_name) ? 1 : 0))) {

   return 0;
  }
  if (fe->common.arg_info[i].class_name
   && strcasecmp(fe->common.arg_info[i].class_name, proto->common.arg_info[i].class_name)!=0) {
   const char *colon;

   if (fe->common.type != 2) {
    return 0;
   } else if ((__extension__ (__builtin_constant_p ('\\') && !__builtin_constant_p (proto->common.arg_info[i].class_name) && ('\\') == '\0' ? (char *) __rawmemchr (proto->common.arg_info[i].class_name, '\\') : __builtin_strchr (proto->common.arg_info[i].class_name, '\\'))) != ((void *)0) ||
       (colon = zend_memrchr(fe->common.arg_info[i].class_name, '\\', fe->common.arg_info[i].class_name_len)) == ((void *)0) ||
       strcasecmp(colon+1, proto->common.arg_info[i].class_name) != 0) {
    zend_class_entry **fe_ce, **proto_ce;
    int found, found2;

    found = zend_lookup_class(fe->common.arg_info[i].class_name, fe->common.arg_info[i].class_name_len, &fe_ce );
    found2 = zend_lookup_class(proto->common.arg_info[i].class_name, proto->common.arg_info[i].class_name_len, &proto_ce );


    if (found != 0 || found2 != 0 ||
     (*fe_ce)->type == 1 ||
     (*proto_ce)->type == 1 ||
     *fe_ce != *proto_ce) {
     return 0;
    }
   }
  }
  if (fe->common.arg_info[i].type_hint != proto->common.arg_info[i].type_hint) {

   return 0;
  }


  if (fe->common.arg_info[i].pass_by_reference != proto->common.arg_info[i].pass_by_reference) {
   return 0;
  }
 }

 if (proto->common.fn_flags & 0x1000000) {
  for (i=proto->common.num_args; i < fe->common.num_args; i++) {
   if (!fe->common.arg_info[i].pass_by_reference) {
    return 0;
   }
  }
 }
 return 1;
}
# 3020 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
static char * zend_get_function_declaration(zend_function *fptr )
{
 char *offset, *buf;
 zend_uint length = 1024;

 offset = buf = (char *)_emalloc((length * sizeof(char)) );
 if (fptr->op_array.fn_flags & 0x4000000) {
  *(offset++) = '&';
  *(offset++) = ' ';
 }

 if (fptr->common.scope) {
  memcpy(offset, fptr->common.scope->name, fptr->common.scope->name_length);
  offset += fptr->common.scope->name_length;
  *(offset++) = ':';
  *(offset++) = ':';
 }

 {
  size_t name_len = strlen(fptr->common.function_name);
  if (__builtin_expect(offset - buf + name_len >= length, 0)) { length += name_len + 1; buf = _erealloc((buf), (length), 0 ); };
  memcpy(offset, fptr->common.function_name, name_len);
  offset += name_len;
 }

 *(offset++) = '(';
 if (fptr->common.arg_info) {
  zend_uint i, required;
  zend_arg_info *arg_info = fptr->common.arg_info;

  required = fptr->common.required_num_args;
  for (i = 0; i < fptr->common.num_args;) {
   if (arg_info->class_name) {
    if (__builtin_expect(offset - buf + arg_info->class_name_len >= length, 0)) { length += arg_info->class_name_len + 1; buf = _erealloc((buf), (length), 0 ); };
    memcpy(offset, arg_info->class_name, arg_info->class_name_len);
    offset += arg_info->class_name_len;
    *(offset++) = ' ';
   } else if (arg_info->type_hint) {
    zend_uint type_name_len;
    char *type_name = zend_get_type_by_const(arg_info->type_hint);
    type_name_len = strlen(type_name);
    if (__builtin_expect(offset - buf + type_name_len >= length, 0)) { length += type_name_len + 1; buf = _erealloc((buf), (length), 0 ); };
    memcpy(offset, type_name, type_name_len);
    offset += type_name_len;
    *(offset++) = ' ';
   }

   if (arg_info->pass_by_reference) {
    *(offset++) = '&';
   }
   *(offset++) = '$';

   if (arg_info->name) {
    if (__builtin_expect(offset - buf + arg_info->name_len >= length, 0)) { length += arg_info->name_len + 1; buf = _erealloc((buf), (length), 0 ); };
    memcpy(offset, arg_info->name, arg_info->name_len);
    offset += arg_info->name_len;
   } else {
    zend_uint idx = i;
    memcpy(offset, "param", 5);
    offset += 5;
    do {
     *(offset++) = (char) (idx % 10) + '0';
     idx /= 10;
    } while (idx > 0);
   }
   if (i >= required) {
    *(offset++) = ' ';
    *(offset++) = '=';
    *(offset++) = ' ';
    if (fptr->type == 2) {
     zend_op *precv = ((void *)0);
     {
      zend_uint idx = i;
      zend_op *op = ((zend_op_array *)fptr)->opcodes;
      zend_op *end = op + ((zend_op_array *)fptr)->last;

      ++idx;
      while (op < end) {
       if ((op->opcode == 63 || op->opcode == 64)
         && op->op1.num == (long)idx)
       {
        precv = op;
       }
       ++op;
      }
     }
     if (precv && precv->opcode == 64 && precv->op2_type != (1<<3)) {
      zval *zv, zv_copy;
      int use_copy;
      do { (zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(zv))->u.buffered = ((void *)0); } while (0);
      *zv = *precv->op2.zv;
      _zval_copy_ctor((zv) );
      (zv)->refcount__gc = 1; (zv)->is_ref__gc = 0;;
      zval_update_constant_ex(&zv, (void*)1, fptr->common.scope );
      if ((*zv).type == 3) {
       if ((*zv).value.lval) {
        memcpy(offset, "true", 4);
        offset += 4;
       } else {
        memcpy(offset, "false", 5);
        offset += 5;
       }
      } else if ((*zv).type == 0) {
       memcpy(offset, "NULL", 4);
       offset += 4;
      } else if ((*zv).type == 6) {
       *(offset++) = '\'';
       if (__builtin_expect(offset - buf + ((((*zv).value.str.len)<(10))?((*zv).value.str.len):(10)) >= length, 0)) { length += ((((*zv).value.str.len)<(10))?((*zv).value.str.len):(10)) + 1; buf = _erealloc((buf), (length), 0 ); };
       memcpy(offset, (*zv).value.str.val, ((((*zv).value.str.len)<(10))?((*zv).value.str.len):(10)));
       offset += ((((*zv).value.str.len)<(10))?((*zv).value.str.len):(10));
       if ((*zv).value.str.len > 10) {
        *(offset++) = '.';
        *(offset++) = '.';
        *(offset++) = '.';
       }
       *(offset++) = '\'';
      } else if ((*zv).type == 4) {
       memcpy(offset, "Array", 5);
       offset += 5;
      } else {
       zend_make_printable_zval(zv, &zv_copy, &use_copy);
       if (__builtin_expect(offset - buf + (zv_copy).value.str.len >= length, 0)) { length += (zv_copy).value.str.len + 1; buf = _erealloc((buf), (length), 0 ); };
       memcpy(offset, (zv_copy).value.str.val, (zv_copy).value.str.len);
       offset += (zv_copy).value.str.len;
       if (use_copy) {
        _zval_dtor((&zv_copy) );
       }
      }
      _zval_ptr_dtor((&zv) );
     }
    } else {
     memcpy(offset, "NULL", 4);
     offset += 4;
    }
   }

   if (++i < fptr->common.num_args) {
    *(offset++) = ',';
    *(offset++) = ' ';
   }
   arg_info++;
   if (__builtin_expect(offset - buf + 32 >= length, 0)) { length += 32 + 1; buf = _erealloc((buf), (length), 0 ); };
  }
 }
 *(offset++) = ')';
 *offset = '\0';

 return buf;
}


static void do_inheritance_check_on_method(zend_function *child, zend_function *parent )
{
 zend_uint child_flags;
 zend_uint parent_flags = parent->common.fn_flags;

 if (parent->common.fn_flags & 0x02
  && parent->common.scope != (child->common.prototype ? child->common.prototype->common.scope : child->common.scope)
  && child->common.fn_flags & (0x02|0x08)) {
  zend_error((1<<6L), "Can't inherit abstract function %s::%s() (previously declared abstract in %s)",
   parent->common.scope->name,
   child->common.function_name,
   child->common.prototype ? child->common.prototype->common.scope->name : child->common.scope->name);
 }

 if (parent_flags & 0x04) {
  zend_error((1<<6L), "Cannot override final method %s::%s()", ((parent) && (parent)->common.scope ? (parent)->common.scope->name : ""), child->common.function_name);
 }

 child_flags = child->common.fn_flags;


 if ((child_flags & 0x01) != (parent_flags & 0x01)) {
  if (child->common.fn_flags & 0x01) {
   zend_error((1<<6L), "Cannot make non static method %s::%s() static in class %s", ((parent) && (parent)->common.scope ? (parent)->common.scope->name : ""), child->common.function_name, ((child) && (child)->common.scope ? (child)->common.scope->name : ""));
  } else {
   zend_error((1<<6L), "Cannot make static method %s::%s() non static in class %s", ((parent) && (parent)->common.scope ? (parent)->common.scope->name : ""), child->common.function_name, ((child) && (child)->common.scope ? (child)->common.scope->name : ""));
  }
 }


 if ((child_flags & 0x02) && !(parent_flags & 0x02)) {
  zend_error((1<<6L), "Cannot make non abstract method %s::%s() abstract in class %s", ((parent) && (parent)->common.scope ? (parent)->common.scope->name : ""), child->common.function_name, ((child) && (child)->common.scope ? (child)->common.scope->name : ""));
 }

 if (parent_flags & 0x800) {
  child->common.fn_flags |= 0x800;
 } else {


  if ((child_flags & (0x100 | 0x200 | 0x400)) > (parent_flags & (0x100 | 0x200 | 0x400))) {
   zend_error((1<<6L), "Access level to %s::%s() must be %s (as in class %s)%s", ((child) && (child)->common.scope ? (child)->common.scope->name : ""), child->common.function_name, zend_visibility_string(parent_flags), ((parent) && (parent)->common.scope ? (parent)->common.scope->name : ""), (parent_flags&0x100) ? "" : " or weaker");
  } else if (((child_flags & (0x100 | 0x200 | 0x400)) < (parent_flags & (0x100 | 0x200 | 0x400)))
   && ((parent_flags & (0x100 | 0x200 | 0x400)) & 0x400)) {
   child->common.fn_flags |= 0x800;
  }
 }

 if (parent_flags & 0x400) {
  child->common.prototype = ((void *)0);
 } else if (parent_flags & 0x02) {
  child->common.fn_flags |= 0x08;
  child->common.prototype = parent;
 } else if (!(parent->common.fn_flags & 0x2000) || (parent->common.prototype && (parent->common.prototype->common.scope->ce_flags & 0x80))) {

  child->common.prototype = parent->common.prototype ? parent->common.prototype : parent;
 }

 if (child->common.prototype && (child->common.prototype->common.fn_flags & 0x02)) {
  if (!zend_do_perform_implementation_check(child, child->common.prototype )) {
   zend_error((1<<6L), "Declaration of %s::%s() must be compatible with %s", ((child) && (child)->common.scope ? (child)->common.scope->name : ""), child->common.function_name, zend_get_function_declaration(child->common.prototype ));
  }
 } else if ((executor_globals.error_reporting) & (1<<11L) || (executor_globals.user_error_handler)) {
  if (!zend_do_perform_implementation_check(child, parent )) {
   char *method_prototype = zend_get_function_declaration(child->common.prototype );
   zend_error((1<<11L), "Declaration of %s::%s() should be compatible with %s", ((child) && (child)->common.scope ? (child)->common.scope->name : ""), child->common.function_name, method_prototype);
   _efree((method_prototype) );
  }
 }
}


static zend_bool do_inherit_method_check(HashTable *child_function_table, zend_function *parent, const zend_hash_key *hash_key, zend_class_entry *child_ce)
{
 zend_uint parent_flags = parent->common.fn_flags;
 zend_function *child;
 ;

 if (zend_hash_quick_find(child_function_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **) &child)==-1) {
  if (parent_flags & (0x02)) {
   child_ce->ce_flags |= 0x10;
  }
  return 1;
 }

 do_inheritance_check_on_method(child, parent );

 return 0;
}


static zend_bool do_inherit_property_access_check(HashTable *target_ht, zend_property_info *parent_info, const zend_hash_key *hash_key, zend_class_entry *ce)
{
 zend_property_info *child_info;
 zend_class_entry *parent_ce = ce->parent;

 if (parent_info->flags & (0x400|0x20000)) {
  if (zend_hash_quick_find(&ce->properties_info, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **) &child_info)==0) {
   child_info->flags |= 0x800;
  } else {
   _zend_hash_quick_add_or_update(&ce->properties_info, hash_key->arKey, hash_key->nKeyLength, hash_key->h, parent_info, sizeof(zend_property_info), (void **) &child_info, (1<<0) );
   if(ce->type & 1) {
    zend_duplicate_property_info_internal(child_info);
   } else {
    zend_duplicate_property_info(child_info);
   }
   child_info->flags &= ~0x400;
   child_info->flags |= 0x20000;
  }
  return 0;
 }

 if (zend_hash_quick_find(&ce->properties_info, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **) &child_info)==0) {
  if ((parent_info->flags & 0x01) != (child_info->flags & 0x01)) {
   zend_error((1<<6L), "Cannot redeclare %s%s::$%s as %s%s::$%s",
    (parent_info->flags & 0x01) ? "static " : "non static ", parent_ce->name, hash_key->arKey,
    (child_info->flags & 0x01) ? "static " : "non static ", ce->name, hash_key->arKey);

  }

  if(parent_info->flags & 0x800) {
   child_info->flags |= 0x800;
  }

  if ((child_info->flags & (0x100 | 0x200 | 0x400)) > (parent_info->flags & (0x100 | 0x200 | 0x400))) {
   zend_error((1<<6L), "Access level to %s::$%s must be %s (as in class %s)%s", ce->name, hash_key->arKey, zend_visibility_string(parent_info->flags), parent_ce->name, (parent_info->flags&0x100) ? "" : " or weaker");
  } else if ((child_info->flags & 0x01) == 0) {
   zval_delref_p(ce->default_properties_table[parent_info->offset]);
   ce->default_properties_table[parent_info->offset] = ce->default_properties_table[child_info->offset];
   ce->default_properties_table[child_info->offset] = ((void *)0);
   child_info->offset = parent_info->offset;
  }
  return 0;
 } else {
  return 1;
 }
}


static inline void do_implement_interface(zend_class_entry *ce, zend_class_entry *iface )
{
 if (!(ce->ce_flags & 0x80) && iface->interface_gets_implemented && iface->interface_gets_implemented(iface, ce ) == -1) {
  zend_error((1<<4L), "Class %s could not implement interface %s", ce->name, iface->name);
 }
 if (ce == iface) {
  zend_error((1<<0L), "Interface %s cannot implement itself", ce->name);
 }
}


__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface )
{

 zend_uint i, ce_num, if_num = iface->num_interfaces;
 zend_class_entry *entry;

 if (if_num==0) {
  return;
 }
 ce_num = ce->num_interfaces;

 if (ce->type == 1) {
  ce->interfaces = (zend_class_entry **) realloc(ce->interfaces, sizeof(zend_class_entry *) * (ce_num + if_num));
 } else {
  ce->interfaces = (zend_class_entry **) _erealloc((ce->interfaces), (sizeof(zend_class_entry *) * (ce_num + if_num)), 0 );
 }


 while (if_num--) {
  entry = iface->interfaces[if_num];
  for (i = 0; i < ce_num; i++) {
   if (ce->interfaces[i] == entry) {
    break;
   }
  }
  if (i == ce_num) {
   ce->interfaces[ce->num_interfaces++] = entry;
  }
 }


 while (ce_num < ce->num_interfaces) {
  do_implement_interface(ce, ce->interfaces[ce_num++] );
 }
}
# 3374 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce )
{
 zend_property_info *property_info;

 if ((ce->ce_flags & 0x80)
  && !(parent_ce->ce_flags & 0x80)) {
  zend_error((1<<6L), "Interface %s may not inherit from class (%s)", ce->name, parent_ce->name);
 }
 if (parent_ce->ce_flags & 0x40) {
  zend_error((1<<6L), "Class %s may not inherit from final class (%s)", ce->name, parent_ce->name);
 }

 ce->parent = parent_ce;

 if (!ce->serialize) {
  ce->serialize = parent_ce->serialize;
 }
 if (!ce->unserialize) {
  ce->unserialize = parent_ce->unserialize;
 }


 zend_do_inherit_interfaces(ce, parent_ce );


 if (parent_ce->default_properties_count) {
  int i = ce->default_properties_count + parent_ce->default_properties_count;

  ce->default_properties_table = ((ce->type == 1)?__zend_realloc((ce->default_properties_table), (sizeof(void*) * i)):_erealloc(((ce->default_properties_table)), ((sizeof(void*) * i)), 0 ));
  if (ce->default_properties_count) {
   while (i-- > parent_ce->default_properties_count) {
    ce->default_properties_table[i] = ce->default_properties_table[i - parent_ce->default_properties_count];
   }
  }
  for (i = 0; i < parent_ce->default_properties_count; i++) {
   ce->default_properties_table[i] = parent_ce->default_properties_table[i];
   if (ce->default_properties_table[i]) {
# 3422 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
    zval_addref_p(ce->default_properties_table[i]);

   }
  }
  ce->default_properties_count += parent_ce->default_properties_count;
 }

 if (parent_ce->type != ce->type) {

  zend_update_class_constants(parent_ce );
  if (parent_ce->default_static_members_count) {
   int i = ce->default_static_members_count + parent_ce->default_static_members_count;

   ce->default_static_members_table = _erealloc((ce->default_static_members_table), (sizeof(void*) * i), 0 );
   if (ce->default_static_members_count) {
    while (i-- > parent_ce->default_static_members_count) {
     ce->default_static_members_table[i] = ce->default_static_members_table[i - parent_ce->default_static_members_count];
    }
   }
   for (i = 0; i < parent_ce->default_static_members_count; i++) {
    if (!zval_isref_p(*&((parent_ce)->static_members_table)[i])) { do { if (zval_refcount_p(*((&((parent_ce)->static_members_table)[i]))) > 1) { zval *new_zv; zval_delref_p(*(&((parent_ce)->static_members_table)[i])); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(&((parent_ce)->static_members_table)[i]))->value; (*new_zv).type = (**(&((parent_ce)->static_members_table)[i])).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(&((parent_ce)->static_members_table)[i]) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); zval_set_isref_p(*((&((parent_ce)->static_members_table)[i]))); };
    ce->default_static_members_table[i] = ((parent_ce)->static_members_table)[i];
    zval_addref_p(ce->default_static_members_table[i]);
   }
   ce->default_static_members_count += parent_ce->default_static_members_count;
   ce->static_members_table = ce->default_static_members_table;
  }
 } else {
  if (parent_ce->default_static_members_count) {
   int i = ce->default_static_members_count + parent_ce->default_static_members_count;

   ce->default_static_members_table = ((ce->type == 1)?__zend_realloc((ce->default_static_members_table), (sizeof(void*) * i)):_erealloc(((ce->default_static_members_table)), ((sizeof(void*) * i)), 0 ));
   if (ce->default_static_members_count) {
    while (i-- > parent_ce->default_static_members_count) {
     ce->default_static_members_table[i] = ce->default_static_members_table[i - parent_ce->default_static_members_count];
    }
   }
   for (i = 0; i < parent_ce->default_static_members_count; i++) {
    if (!zval_isref_p(*&parent_ce->default_static_members_table[i])) { do { if (zval_refcount_p(*((&parent_ce->default_static_members_table[i]))) > 1) { zval *new_zv; zval_delref_p(*(&parent_ce->default_static_members_table[i])); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(&parent_ce->default_static_members_table[i]))->value; (*new_zv).type = (**(&parent_ce->default_static_members_table[i])).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(&parent_ce->default_static_members_table[i]) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); zval_set_isref_p(*((&parent_ce->default_static_members_table[i]))); };
    ce->default_static_members_table[i] = parent_ce->default_static_members_table[i];
    zval_addref_p(ce->default_static_members_table[i]);
   }
   ce->default_static_members_count += parent_ce->default_static_members_count;
   if (ce->type == 2) {
    ce->static_members_table = ce->default_static_members_table;
   }
  }
 }

 for (zend_hash_internal_pointer_reset_ex(&ce->properties_info, ((void *)0));
 zend_hash_get_current_data_ex(&ce->properties_info, (void *) &property_info, ((void *)0)) == 0;
 zend_hash_move_forward_ex(&ce->properties_info, ((void *)0))) {
  if (property_info->ce == ce) {
   if (property_info->flags & 0x01) {
    property_info->offset += parent_ce->default_static_members_count;
   } else {
    property_info->offset += parent_ce->default_properties_count;
   }
  }
 }

 zend_hash_merge_ex(&ce->properties_info, &parent_ce->properties_info, (copy_ctor_func_t) (ce->type & 1 ? zend_duplicate_property_info_internal : zend_duplicate_property_info), sizeof(zend_property_info), (merge_checker_func_t) do_inherit_property_access_check, ce);

 _zend_hash_merge(&ce->constants_table, &parent_ce->constants_table, ((void (*)(void *)) zval_add_ref), ((void *)0), sizeof(zval *), 0 );
 zend_hash_merge_ex(&ce->function_table, &parent_ce->function_table, (copy_ctor_func_t) do_inherit_method, sizeof(zend_function), (merge_checker_func_t) do_inherit_method_check, ce);
 do_inherit_parent_constructor(ce);

 if (ce->ce_flags & 0x10 && ce->type == 1) {
  ce->ce_flags |= 0x20;
 } else if (!(ce->ce_flags & 0x80000)
    && !(ce->ce_flags & 0x400000)) {

  zend_verify_abstract_class(ce );
 }
 ce->ce_flags |= parent_ce->ce_flags & 0x800000;
}


static zend_bool do_inherit_constant_check(HashTable *child_constants_table, const zval **parent_constant, const zend_hash_key *hash_key, const zend_class_entry *iface)
{
 zval **old_constant;

 if (zend_hash_quick_find(child_constants_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void**)&old_constant) == 0) {
  if (*old_constant != *parent_constant) {
   zend_error((1<<6L), "Cannot inherit previously-inherited or override constant %s from interface %s", hash_key->arKey, iface->name);
  }
  return 0;
 }
 return 1;
}


static int do_interface_constant_check(zval **val , int num_args, va_list args, const zend_hash_key *key)
{
 zend_class_entry **iface = __builtin_va_arg(args,zend_class_entry**);

 do_inherit_constant_check(&(*iface)->constants_table, (const zval **) val, key, *iface);

 return 0;
}


__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface )
{
 zend_uint i, ignore = 0;
 zend_uint current_iface_num = ce->num_interfaces;
 zend_uint parent_iface_num = ce->parent ? ce->parent->num_interfaces : 0;

 for (i = 0; i < ce->num_interfaces; i++) {
  if (ce->interfaces[i] == ((void *)0)) {
   memmove(ce->interfaces + i, ce->interfaces + i + 1, sizeof(zend_class_entry*) * (--ce->num_interfaces - i));
   i--;
  } else if (ce->interfaces[i] == iface) {
   if (i < parent_iface_num) {
    ignore = 1;
   } else {
    zend_error((1<<6L), "Class %s cannot implement previously implemented interface %s", ce->name, iface->name);
   }
  }
 }
 if (ignore) {

  zend_hash_apply_with_arguments(&ce->constants_table , (apply_func_args_t) do_interface_constant_check, 1, &iface);
 } else {
  if (ce->num_interfaces >= current_iface_num) {
   if (ce->type == 1) {
    ce->interfaces = (zend_class_entry **) realloc(ce->interfaces, sizeof(zend_class_entry *) * (++current_iface_num));
   } else {
    ce->interfaces = (zend_class_entry **) _erealloc((ce->interfaces), (sizeof(zend_class_entry *) * (++current_iface_num)), 0 );
   }
  }
  ce->interfaces[ce->num_interfaces++] = iface;

  zend_hash_merge_ex(&ce->constants_table, &iface->constants_table, (copy_ctor_func_t) zval_add_ref, sizeof(zval *), (merge_checker_func_t) do_inherit_constant_check, iface);
  zend_hash_merge_ex(&ce->function_table, &iface->function_table, (copy_ctor_func_t) do_inherit_method, sizeof(zend_function), (merge_checker_func_t) do_inherit_method_check, ce);

  do_implement_interface(ce, iface );
  zend_do_inherit_interfaces(ce, iface );
 }
}


__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait )
{
 zend_uint i, ignore = 0;
 zend_uint current_trait_num = ce->num_traits;
 zend_uint parent_trait_num = ce->parent ? ce->parent->num_traits : 0;

 for (i = 0; i < ce->num_traits; i++) {
  if (ce->traits[i] == ((void *)0)) {
   memmove(ce->traits + i, ce->traits + i + 1, sizeof(zend_class_entry*) * (--ce->num_traits - i));
   i--;
  } else if (ce->traits[i] == trait) {
   if (i < parent_trait_num) {
    ignore = 1;
   }
  }
 }
 if (!ignore) {
  if (ce->num_traits >= current_trait_num) {
   if (ce->type == 1) {
    ce->traits = (zend_class_entry **) realloc(ce->traits, sizeof(zend_class_entry *) * (++current_trait_num));
   } else {
    ce->traits = (zend_class_entry **) _erealloc((ce->traits), (sizeof(zend_class_entry *) * (++current_trait_num)), 0 );
   }
  }
  ce->traits[ce->num_traits++] = trait;
 }
}


static int zend_traits_merge_functions(zend_function *fn , int num_args, va_list args, zend_hash_key *hash_key)
{
 size_t current;
 size_t i;
 size_t count;
 HashTable* resulting_table;
 HashTable** function_tables;
 zend_class_entry *ce;
 size_t collision = 0;
 size_t abstract_solved = 0;
 zend_function* other_trait_fn;

 current = __builtin_va_arg(args,size_t);
 count = __builtin_va_arg(args,size_t);
 resulting_table = __builtin_va_arg(args,HashTable*);
 function_tables = __builtin_va_arg(args,HashTable**);
 ce = __builtin_va_arg(args,zend_class_entry*);

 for (i = 0; i < count; i++) {
  if (i == current) {
   continue;
  }

  if (zend_hash_quick_find(function_tables[i], hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **)&other_trait_fn) == 0) {

   if (other_trait_fn->common.fn_flags & 0x02) {

    if (fn->common.fn_flags & 0x02) {

     if ( !zend_do_perform_implementation_check(fn, other_trait_fn )
      || !zend_do_perform_implementation_check(other_trait_fn, fn )) {
      zend_error((1<<6L), "Declaration of %s must be compatible with %s",
             zend_get_function_declaration(fn ),
             zend_get_function_declaration(other_trait_fn ));
     }
    } else {

     do_inheritance_check_on_method(fn, other_trait_fn );
    }


    zend_function_dtor(other_trait_fn);
    zend_hash_del_key_or_index(function_tables[i], hash_key->arKey, hash_key->nKeyLength, hash_key->h, 2);
   } else {


    if (fn->common.fn_flags & 0x02) {


     do_inheritance_check_on_method(other_trait_fn, fn );


     abstract_solved = 1;
    } else {

     collision++;
     zend_function_dtor(other_trait_fn);
     zend_hash_del_key_or_index(function_tables[i], hash_key->arKey, hash_key->nKeyLength, hash_key->h, 2);
    }
   }
  }
 }

 if (collision) {
  zend_function* class_fn;


  if (zend_hash_quick_find(&ce->function_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **)&class_fn) == -1
   || class_fn->common.scope != ce) {
   zend_error((1<<6L), "Trait method %s has not been applied, because there are collisions with other trait methods on %s", fn->common.function_name, ce->name);
  }

  zend_function_dtor(fn);
 } else if (abstract_solved) {
  zend_function_dtor(fn);
 } else {

  if (_zend_hash_quick_add_or_update(resulting_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, fn, sizeof(zend_function), ((void *)0), (1<<1) )==-1) {
   zend_error((1<<6L), "Trait method %s has not been applied, because failure occured during updating resulting trait method table", fn->common.function_name);
  }
 }

 return 1<<0;
}





static void zend_traits_duplicate_function(zend_function *fe, zend_class_entry *target_ce, char *newname )
{
 zend_literal *literals_copy;
 zend_compiled_variable *dupvars;
 zend_op *opcode_copy;
 zval class_name_zv;
 int class_name_literal;
 int i;
 int number_of_literals;

 if (fe->op_array.static_variables) {
  HashTable *tmpHash;

  (tmpHash) = (HashTable *) _emalloc((sizeof(HashTable)) );
  _zend_hash_init((tmpHash), (zend_hash_num_elements(fe->op_array.static_variables)), (((void *)0)), ((void (*)(void *)) _zval_ptr_dtor), (0) );
  zend_hash_apply_with_arguments(fe->op_array.static_variables , (apply_func_args_t)zval_copy_static_var, 1, tmpHash);

  fe->op_array.static_variables = tmpHash;
 }

 number_of_literals = fe->op_array.last_literal;
 literals_copy = (zend_literal*)_emalloc((number_of_literals * sizeof(zend_literal)) );

 for (i = 0; i < number_of_literals; i++) {
  literals_copy[i] = fe->op_array.literals[i];
  _zval_copy_ctor((&literals_copy[i].constant) );
 }
 fe->op_array.literals = literals_copy;


 fe->op_array.refcount = _emalloc((sizeof(zend_uint)) );
 *(fe->op_array.refcount) = 1;

 if (fe->op_array.vars) {
  i = fe->op_array.last_var;
  dupvars = _safe_emalloc((fe->op_array.last_var), (sizeof(zend_compiled_variable)), (0) );
  while (i > 0) {
   i--;
   dupvars[i].name = _estrndup((fe->op_array.vars[i].name), (fe->op_array.vars[i].name_len) );
   dupvars[i].name_len = fe->op_array.vars[i].name_len;
   dupvars[i].hash_value = fe->op_array.vars[i].hash_value;
  }
  fe->op_array.vars = dupvars;
 } else {
  fe->op_array.vars = ((void *)0);
 }

 opcode_copy = _safe_emalloc((sizeof(zend_op)), (fe->op_array.last), (0) );
 for(i = 0; i < fe->op_array.last; i++) {
  opcode_copy[i] = fe->op_array.opcodes[i];
  if (opcode_copy[i].op1_type != (1<<0)) {
   switch (opcode_copy[i].opcode) {
    case 100:
    case 42:
     if (opcode_copy[i].op1.jmp_addr && opcode_copy[i].op1.jmp_addr >= fe->op_array.opcodes &&
      opcode_copy[i].op1.jmp_addr < fe->op_array.opcodes + fe->op_array.last) {
      opcode_copy[i].op1.jmp_addr = opcode_copy + (fe->op_array.opcodes[i].op1.jmp_addr - fe->op_array.opcodes);
     }
    break;
   }
  } else {

   if (target_ce

    && (*opcode_copy[i].op1.zv).type == 0
    && (*opcode_copy[i].op1.zv).value.lval == 0x120

    && (0x120 != (target_ce->ce_flags & 0x120)))
   {
    class_name_zv = zval_used_for_init;;
    do { const char *__s=(target_ce->name); int __l=target_ce->name_length; zval *__z = (&class_name_zv); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
    class_name_literal = zend_append_individual_literal(&fe->op_array, &class_name_zv );
    opcode_copy[i].op1.zv = &fe->op_array.literals[class_name_literal].constant;
   }
  }

  if (opcode_copy[i].op2_type != (1<<0)) {
   switch (opcode_copy[i].opcode) {
    case 43:
    case 44:
    case 46:
    case 47:
    case 152:
    case 158:
     if (opcode_copy[i].op2.jmp_addr && opcode_copy[i].op2.jmp_addr >= fe->op_array.opcodes &&
      opcode_copy[i].op2.jmp_addr < fe->op_array.opcodes + fe->op_array.last) {
      opcode_copy[i].op2.jmp_addr = opcode_copy + (fe->op_array.opcodes[i].op2.jmp_addr - fe->op_array.opcodes);
     }
    break;
   }
  } else {

   if (target_ce

    && (*opcode_copy[i].op2.zv).type == 0
    && (*opcode_copy[i].op2.zv).value.lval == 0x120

    && (0x120 != (target_ce->ce_flags & 0x120)))
   {
    class_name_zv = zval_used_for_init;;
    do { const char *__s=(target_ce->name); int __l=target_ce->name_length; zval *__z = (&class_name_zv); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
    class_name_literal = zend_append_individual_literal(&fe->op_array, &class_name_zv );
    opcode_copy[i].op2.zv = &fe->op_array.literals[class_name_literal].constant;
   }
  }
 }
 fe->op_array.opcodes = opcode_copy;
 fe->op_array.function_name = newname;



 if (fe->op_array.arg_info) {
  zend_arg_info *tmpArginfo;

  tmpArginfo = _safe_emalloc((sizeof(zend_arg_info)), (fe->op_array.num_args), (0) );
  for(i = 0; i < fe->op_array.num_args; i++) {
   tmpArginfo[i] = fe->op_array.arg_info[i];

   tmpArginfo[i].name = _estrndup((tmpArginfo[i].name), (tmpArginfo[i].name_len) );
   if (tmpArginfo[i].class_name) {
    tmpArginfo[i].class_name = _estrndup((tmpArginfo[i].class_name), (tmpArginfo[i].class_name_len) );
   }
  }
  fe->op_array.arg_info = tmpArginfo;
 }

 fe->op_array.doc_comment = _estrndup((fe->op_array.doc_comment), (fe->op_array.doc_comment_len) );
 fe->op_array.try_catch_array = (zend_try_catch_element*)_estrndup(((char*)fe->op_array.try_catch_array), (sizeof(zend_try_catch_element) * fe->op_array.last_try_catch) );

 fe->op_array.brk_cont_array = (zend_brk_cont_element*)_estrndup(((char*)fe->op_array.brk_cont_array), (sizeof(zend_brk_cont_element) * fe->op_array.last_brk_cont) );

}


static void zend_add_magic_methods(zend_class_entry* ce, const char* mname, uint mname_len, zend_function* fe )
{
 if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__clone") && strlen ("__clone") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__clone") && (__s1_len = strlen (mname), __s2_len = strlen ("__clone"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__clone") + 1) - (size_t)(const void *)("__clone") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__clone") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__clone") && ((size_t)(const void *)(("__clone") + 1) - (size_t)(const void *)("__clone") == 1) ? __builtin_strcmp (mname, "__clone") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__clone"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__clone") && ((size_t)(const void *)(("__clone") + 1) - (size_t)(const void *)("__clone") == 1) && (__s2_len = strlen ("__clone"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__clone") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__clone"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__clone"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__clone"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__clone"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__clone")))); }) : strncmp (mname, "__clone", mname_len)))) {
  ce->clone = fe; fe->common.fn_flags |= 0x8000;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__construct") && strlen ("__construct") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__construct") && (__s1_len = strlen (mname), __s2_len = strlen ("__construct"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__construct") + 1) - (size_t)(const void *)("__construct") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__construct") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__construct") && ((size_t)(const void *)(("__construct") + 1) - (size_t)(const void *)("__construct") == 1) ? __builtin_strcmp (mname, "__construct") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__construct"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__construct") && ((size_t)(const void *)(("__construct") + 1) - (size_t)(const void *)("__construct") == 1) && (__s2_len = strlen ("__construct"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__construct") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__construct"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__construct"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__construct"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__construct"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__construct")))); }) : strncmp (mname, "__construct", mname_len)))) {
  if (ce->constructor) {
   zend_error((1<<6L), "%s has colliding constructor definitions coming from traits", ce->name);
  }
  ce->constructor = fe; fe->common.fn_flags |= 0x2000;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__destruct") && strlen ("__destruct") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__destruct") && (__s1_len = strlen (mname), __s2_len = strlen ("__destruct"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__destruct") + 1) - (size_t)(const void *)("__destruct") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__destruct") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__destruct") && ((size_t)(const void *)(("__destruct") + 1) - (size_t)(const void *)("__destruct") == 1) ? __builtin_strcmp (mname, "__destruct") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__destruct"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__destruct") && ((size_t)(const void *)(("__destruct") + 1) - (size_t)(const void *)("__destruct") == 1) && (__s2_len = strlen ("__destruct"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__destruct") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__destruct"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__destruct"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__destruct"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__destruct"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__destruct")))); }) : strncmp (mname, "__destruct", mname_len)))) {
  ce->destructor = fe; fe->common.fn_flags |= 0x4000;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__get") && strlen ("__get") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__get") && (__s1_len = strlen (mname), __s2_len = strlen ("__get"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__get") + 1) - (size_t)(const void *)("__get") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__get") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__get") && ((size_t)(const void *)(("__get") + 1) - (size_t)(const void *)("__get") == 1) ? __builtin_strcmp (mname, "__get") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__get"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__get") && ((size_t)(const void *)(("__get") + 1) - (size_t)(const void *)("__get") == 1) && (__s2_len = strlen ("__get"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__get") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__get"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__get"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__get"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__get"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__get")))); }) : strncmp (mname, "__get", mname_len)))) {
  ce->__get = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__set") && strlen ("__set") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__set") && (__s1_len = strlen (mname), __s2_len = strlen ("__set"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__set") + 1) - (size_t)(const void *)("__set") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__set") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__set") && ((size_t)(const void *)(("__set") + 1) - (size_t)(const void *)("__set") == 1) ? __builtin_strcmp (mname, "__set") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__set"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__set") && ((size_t)(const void *)(("__set") + 1) - (size_t)(const void *)("__set") == 1) && (__s2_len = strlen ("__set"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__set") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__set"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__set"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__set"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__set"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__set")))); }) : strncmp (mname, "__set", mname_len)))) {
  ce->__set = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__call") && strlen ("__call") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__call") && (__s1_len = strlen (mname), __s2_len = strlen ("__call"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__call") + 1) - (size_t)(const void *)("__call") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__call") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__call") && ((size_t)(const void *)(("__call") + 1) - (size_t)(const void *)("__call") == 1) ? __builtin_strcmp (mname, "__call") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__call"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__call") && ((size_t)(const void *)(("__call") + 1) - (size_t)(const void *)("__call") == 1) && (__s2_len = strlen ("__call"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__call") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__call"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__call"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__call"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__call"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__call")))); }) : strncmp (mname, "__call", mname_len)))) {
  ce->__call = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__unset") && strlen ("__unset") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__unset") && (__s1_len = strlen (mname), __s2_len = strlen ("__unset"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__unset") + 1) - (size_t)(const void *)("__unset") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__unset") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__unset") && ((size_t)(const void *)(("__unset") + 1) - (size_t)(const void *)("__unset") == 1) ? __builtin_strcmp (mname, "__unset") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__unset"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__unset") && ((size_t)(const void *)(("__unset") + 1) - (size_t)(const void *)("__unset") == 1) && (__s2_len = strlen ("__unset"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__unset") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__unset"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__unset"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__unset"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__unset"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__unset")))); }) : strncmp (mname, "__unset", mname_len)))) {
  ce->__unset = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__isset") && strlen ("__isset") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__isset") && (__s1_len = strlen (mname), __s2_len = strlen ("__isset"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__isset") + 1) - (size_t)(const void *)("__isset") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__isset") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__isset") && ((size_t)(const void *)(("__isset") + 1) - (size_t)(const void *)("__isset") == 1) ? __builtin_strcmp (mname, "__isset") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__isset"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__isset") && ((size_t)(const void *)(("__isset") + 1) - (size_t)(const void *)("__isset") == 1) && (__s2_len = strlen ("__isset"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__isset") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__isset"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__isset"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__isset"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__isset"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__isset")))); }) : strncmp (mname, "__isset", mname_len)))) {
  ce->__isset = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__callstatic") && strlen ("__callstatic") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__callstatic") && (__s1_len = strlen (mname), __s2_len = strlen ("__callstatic"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__callstatic") + 1) - (size_t)(const void *)("__callstatic") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__callstatic") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__callstatic") && ((size_t)(const void *)(("__callstatic") + 1) - (size_t)(const void *)("__callstatic") == 1) ? __builtin_strcmp (mname, "__callstatic") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__callstatic"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__callstatic") && ((size_t)(const void *)(("__callstatic") + 1) - (size_t)(const void *)("__callstatic") == 1) && (__s2_len = strlen ("__callstatic"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__callstatic") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__callstatic"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__callstatic"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__callstatic"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__callstatic"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__callstatic")))); }) : strncmp (mname, "__callstatic", mname_len)))) {
  ce->__callstatic = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname_len) && ((__builtin_constant_p (mname) && strlen (mname) < ((size_t) (mname_len))) || (__builtin_constant_p ("__tostring") && strlen ("__tostring") < ((size_t) (mname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname) && __builtin_constant_p ("__tostring") && (__s1_len = strlen (mname), __s2_len = strlen ("__tostring"), (!((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__tostring") + 1) - (size_t)(const void *)("__tostring") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname, "__tostring") : (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) && (__s1_len = strlen (mname), __s1_len < 4) ? (__builtin_constant_p ("__tostring") && ((size_t)(const void *)(("__tostring") + 1) - (size_t)(const void *)("__tostring") == 1) ? __builtin_strcmp (mname, "__tostring") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("__tostring"); register int __result = (((__const unsigned char *) (__const char *) (mname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (mname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (mname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__tostring") && ((size_t)(const void *)(("__tostring") + 1) - (size_t)(const void *)("__tostring") == 1) && (__s2_len = strlen ("__tostring"), __s2_len < 4) ? (__builtin_constant_p (mname) && ((size_t)(const void *)((mname) + 1) - (size_t)(const void *)(mname) == 1) ? __builtin_strcmp (mname, "__tostring") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (mname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("__tostring"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("__tostring"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("__tostring"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("__tostring"))[3]); } } __result; }))) : __builtin_strcmp (mname, "__tostring")))); }) : strncmp (mname, "__tostring", mname_len)))) {
  ce->__tostring = fe;
 } else if (ce->name_length + 1 == mname_len) {
  char *lowercase_name = _emalloc((ce->name_length + 1) );
  zend_str_tolower_copy(lowercase_name, ce->name, ce->name_length);
  lowercase_name = (char*)zend_new_interned_string(lowercase_name, ce->name_length + 1, 1 );
  if (!memcmp(mname, lowercase_name, mname_len)) {
   if (ce->constructor) {
    zend_error((1<<6L), "%s has colliding constructor definitions coming from traits", ce->name);
   }
   ce->constructor = fe;
   fe->common.fn_flags |= 0x2000;
  }
  do { if (!(((lowercase_name) >= (compiler_globals.interned_strings_start)) && ((lowercase_name) < (compiler_globals.interned_strings_end)))) { _efree(((char*)lowercase_name) ); } } while (0);
 }
}


static int zend_traits_merge_functions_to_class(zend_function *fn , int num_args, va_list args, zend_hash_key *hash_key)
{
 zend_class_entry *ce = __builtin_va_arg(args,zend_class_entry*);
 int add = 0;
 zend_function* existing_fn = ((void *)0);
 zend_function fn_copy, *fn_copy_p;
 zend_function* prototype = ((void *)0);

 if (zend_hash_quick_find(&ce->function_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void**) &existing_fn) == -1) {
  add = 1;
 } else if (existing_fn->common.scope != ce) {
  add = 1;
 }

 if (add) {
  zend_function* parent_function;
  if (ce->parent && zend_hash_quick_find(&ce->parent->function_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void**) &parent_function) != -1) {
   prototype = parent_function;



   if (fn->common.fn_flags & 0x02) {

    zend_function_dtor(fn);
    return 1<<0;
   }
  }

  fn->common.scope = ce;
  fn->common.prototype = prototype;

  if (prototype
   && (prototype->common.fn_flags & 0x08
    || prototype->common.fn_flags & 0x02)) {
    fn->common.fn_flags |= 0x08;
   } else if (fn->common.fn_flags & 0x08) {

    fn->common.fn_flags = fn->common.fn_flags - 0x08;
   }


  if (prototype) {
   do_inheritance_check_on_method(fn, prototype );
  }

  if (existing_fn && existing_fn->common.fn_flags & 0x02) {
   do_inheritance_check_on_method(fn, existing_fn );
  }


  if (existing_fn
   && existing_fn->common.scope != ce
   && (fn->common.fn_flags & 0x02) == 0) {





   zend_hash_del_key_or_index(&ce->function_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, 2);
  }


  if (fn->common.fn_flags & 0x02) {
   ce->ce_flags |= 0x10;
  }
  if (fn->op_array.static_variables) {
   ce->ce_flags |= 0x800000;
  }
  fn_copy = *fn;
  zend_traits_duplicate_function(&fn_copy, ce, _estrdup((fn->common.function_name) ) );

  if (_zend_hash_quick_add_or_update(&ce->function_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, &fn_copy, sizeof(zend_function), (void**)&fn_copy_p, (1<<0) )==-1) {
   zend_error((1<<6L), "Trait method %s has not been applied, because failure occured during updating class method table", hash_key->arKey);
  }

  zend_add_magic_methods(ce, hash_key->arKey, hash_key->nKeyLength, fn_copy_p );

  zend_function_dtor(fn);
 } else {
  zend_function_dtor(fn);
 }

 return 1<<0;
}


static int zend_traits_copy_functions(zend_function *fn , int num_args, va_list args, zend_hash_key *hash_key)
{
 HashTable* target;
 zend_class_entry *target_ce;
 zend_trait_alias** aliases;
 HashTable* exclude_table;
 char* lcname;
 unsigned int fnname_len;
 zend_function fn_copy;
 void* dummy;
 size_t i = 0;

 target = __builtin_va_arg(args,HashTable*);
 target_ce = __builtin_va_arg(args,zend_class_entry*);
 aliases = __builtin_va_arg(args,zend_trait_alias**);
 exclude_table = __builtin_va_arg(args,HashTable*);

 fnname_len = strlen(fn->common.function_name);


 if (aliases) {
  while (aliases[i]) {

   if (aliases[i]->alias != ((void *)0)
    && (!aliases[i]->trait_method->ce || fn->common.scope == aliases[i]->trait_method->ce)
    && aliases[i]->trait_method->mname_len == fnname_len
    && (zend_binary_strcasecmp(aliases[i]->trait_method->method_name, aliases[i]->trait_method->mname_len, fn->common.function_name, fnname_len) == 0)) {
    fn_copy = *fn;
    zend_traits_duplicate_function(&fn_copy, ((void *)0), _estrndup((aliases[i]->alias), (aliases[i]->alias_len) ) );


    if (aliases[i]->modifiers) {
     fn_copy.common.fn_flags = aliases[i]->modifiers;
     if (!(aliases[i]->modifiers & (0x100 | 0x200 | 0x400))) {
      fn_copy.common.fn_flags |= 0x100;
     }
     fn_copy.common.fn_flags |= fn->common.fn_flags ^ (fn->common.fn_flags & (0x100 | 0x200 | 0x400));
    }

    lcname = zend_str_tolower_dup(aliases[i]->alias, aliases[i]->alias_len);

    if (_zend_hash_add_or_update(target, lcname, aliases[i]->alias_len+1, &fn_copy, sizeof(zend_function), ((void *)0), (1<<1) )==-1) {
     zend_error((1<<6L), "Failed to add aliased trait method (%s) to the trait table. There is probably already a trait method with the same name", fn_copy.common.function_name);
    }
    _efree((lcname) );


    if (!aliases[i]->trait_method->ce) {
     aliases[i]->trait_method->ce = fn->common.scope;
    }
   }
   i++;
  }
 }

 lcname = zend_str_tolower_dup(fn->common.function_name, fnname_len);

 if (exclude_table == ((void *)0) || zend_hash_find(exclude_table, lcname, fnname_len, &dummy) == -1) {

  fn_copy = *fn;
  zend_traits_duplicate_function(&fn_copy, ((void *)0), _estrndup((fn->common.function_name), (fnname_len) ) );



  if (aliases) {
   i = 0;
   while (aliases[i]) {

    if (aliases[i]->alias == ((void *)0) && aliases[i]->modifiers != 0
     && (!aliases[i]->trait_method->ce || fn->common.scope == aliases[i]->trait_method->ce)
     && (aliases[i]->trait_method->mname_len == fnname_len)
     && (zend_binary_strcasecmp(aliases[i]->trait_method->method_name, aliases[i]->trait_method->mname_len, fn->common.function_name, fnname_len) == 0)) {
     fn_copy.common.fn_flags = aliases[i]->modifiers;

     if (!(aliases[i]->modifiers & (0x100 | 0x200 | 0x400))) {
      fn_copy.common.fn_flags |= 0x100;
     }
     fn_copy.common.fn_flags |= fn->common.fn_flags ^ (fn->common.fn_flags & (0x100 | 0x200 | 0x400));


     if (!aliases[i]->trait_method->ce) {
      aliases[i]->trait_method->ce = fn->common.scope;
     }
    }
    i++;
   }
  }

  if (_zend_hash_add_or_update(target, lcname, fnname_len+1, &fn_copy, sizeof(zend_function), ((void *)0), (1<<1) )==-1) {
   zend_error((1<<6L), "Failed to add trait method (%s) to the trait table. There is probably already a trait method with the same name", fn_copy.common.function_name);
  }
 }

 _efree((lcname) );

 return 0;
}



static void zend_traits_copy_trait_function_table(HashTable *target, zend_class_entry *target_ce, HashTable *source, zend_trait_alias** aliases, HashTable* exclude_table )
{
 zend_hash_apply_with_arguments(source , (apply_func_args_t)zend_traits_copy_functions, 4, target, target_ce, aliases, exclude_table);
}


static void zend_traits_init_trait_structures(zend_class_entry *ce )
{
 size_t i, j = 0;
 zend_trait_precedence *cur_precedence;
 zend_trait_method_reference *cur_method_ref;
 char *lcname;
 zend_bool method_exists;


 if (ce->trait_precedences) {
  i = 0;
  while ((cur_precedence = ce->trait_precedences[i])) {

   if (cur_precedence->exclude_from_classes) {
    cur_method_ref = cur_precedence->trait_method;
    cur_precedence->trait_method->ce = zend_fetch_class(cur_method_ref->class_name,
                 cur_method_ref->cname_len, 14 );


    lcname = zend_str_tolower_dup(cur_method_ref->method_name,
             cur_method_ref->mname_len);
    method_exists = zend_hash_exists(&cur_method_ref->ce->function_table,
             lcname,
             cur_method_ref->mname_len + 1);
    _efree((lcname) );
    if (!method_exists) {
     zend_error((1<<6L),
          "A precedence rule was defined for %s::%s but this method does not exist",
          cur_method_ref->ce->name,
          cur_method_ref->method_name);
    }




    j = 0;
    while (cur_precedence->exclude_from_classes[j]) {
     char* class_name = (char*)cur_precedence->exclude_from_classes[j];
     zend_uint name_length = strlen(class_name);

     cur_precedence->exclude_from_classes[j] = zend_fetch_class(class_name, name_length, 14 );
     _efree((class_name) );
     j++;
    }
   }
   i++;
  }
 }

 if (ce->trait_aliases) {
  i = 0;
  while (ce->trait_aliases[i]) {

   if (ce->trait_aliases[i]->trait_method->class_name) {
    cur_method_ref = ce->trait_aliases[i]->trait_method;
    cur_method_ref->ce = zend_fetch_class(cur_method_ref->class_name, cur_method_ref->cname_len, 14 );


    lcname = zend_str_tolower_dup(cur_method_ref->method_name,
                                      cur_method_ref->mname_len);
    method_exists = zend_hash_exists(&cur_method_ref->ce->function_table,
                                         lcname, cur_method_ref->mname_len + 1);
    _efree((lcname) );

    if (!method_exists) {
     zend_error((1<<6L), "An alias was defined for %s::%s but this method does not exist", cur_method_ref->ce->name, cur_method_ref->method_name);
    }
   }
   i++;
  }
 }
}


static void zend_traits_compile_exclude_table(HashTable* exclude_table, zend_trait_precedence **precedences, zend_class_entry *trait)
{
 size_t i = 0, j;

 if (!precedences) {
  return;
 }
 while (precedences[i]) {
  if (precedences[i]->exclude_from_classes) {
   j = 0;
   while (precedences[i]->exclude_from_classes[j]) {
    if (precedences[i]->exclude_from_classes[j] == trait) {
     zend_uint lcname_len = precedences[i]->trait_method->mname_len;
     char *lcname = zend_str_tolower_dup(precedences[i]->trait_method->method_name, lcname_len);

     if (_zend_hash_add_or_update(exclude_table, lcname, lcname_len, ((void *)0), 0, ((void *)0), (1<<1) ) == -1) {
      _efree((lcname) );
      zend_error((1<<6L), "Failed to evaluate a trait precedence (%s). Method of trait %s was defined to be excluded multiple times", precedences[i]->trait_method->method_name, trait->name);
     }
     _efree((lcname) );
    }
    ++j;
   }
  }
  ++i;
 }
}


static void zend_do_traits_method_binding(zend_class_entry *ce )
{
 HashTable** function_tables;
 HashTable* resulting_table;
 HashTable exclude_table;
 size_t i;


 function_tables = malloc(sizeof(HashTable*) * ce->num_traits);
 resulting_table = (HashTable *) malloc(sizeof(HashTable));


 _zend_hash_init_ex((resulting_table), (10), (((void *)0)), (((void *)0)), (1), (0) );

 for (i = 0; i < ce->num_traits; i++) {
  function_tables[i] = (HashTable *) malloc(sizeof(HashTable));
  _zend_hash_init_ex((function_tables[i]), (ce->traits[i]->function_table.nNumOfElements), (((void *)0)), (((void *)0)), (1), (0) );

  if (ce->trait_precedences) {

   _zend_hash_init_ex((&exclude_table), (2), (((void *)0)), (((void *)0)), (0), (0) );

   zend_traits_compile_exclude_table(&exclude_table, ce->trait_precedences, ce->traits[i]);


   zend_traits_copy_trait_function_table(function_tables[i], ce, &ce->traits[i]->function_table, ce->trait_aliases, &exclude_table );
   zend_hash_graceful_destroy(&exclude_table);
  } else {
   zend_traits_copy_trait_function_table(function_tables[i], ce, &ce->traits[i]->function_table, ce->trait_aliases, ((void *)0) );
  }
 }


 for (i = 0; i < ce->num_traits; i++) {
  zend_hash_apply_with_arguments(function_tables[i] , (apply_func_args_t)zend_traits_merge_functions, 5, i, ce->num_traits, resulting_table, function_tables, ce);
 }






 zend_hash_apply_with_arguments(resulting_table , (apply_func_args_t)zend_traits_merge_functions_to_class, 1, ce);


 for (i = 0; i < ce->num_traits; i++) {

  zend_hash_graceful_destroy(function_tables[i]);
  free(function_tables[i]);
 }
 free(function_tables);



 zend_hash_graceful_destroy(resulting_table);
 free(resulting_table);
}


static zend_class_entry* find_first_definition(zend_class_entry *ce, size_t current_trait, const char* prop_name, int prop_name_length, ulong prop_hash, zend_class_entry *coliding_ce)
{
 size_t i;
 zend_property_info *coliding_prop;
 for (i = 0; (i < current_trait) && (i < ce->num_traits); i++) {
  if (zend_hash_quick_find(&ce->traits[i]->properties_info, prop_name, prop_name_length+1, prop_hash, (void **) &coliding_prop) == 0) {
   return ce->traits[i];
  }
 }

 return coliding_ce;
}


static void zend_do_traits_property_binding(zend_class_entry *ce )
{
 size_t i;
 zend_property_info *property_info;
 zend_property_info *coliding_prop;
 zval compare_result;
 const char* prop_name;
 int prop_name_length;
 ulong prop_hash;
 const char* class_name_unused;
 zend_bool prop_found;
 zend_bool not_compatible;
 zval* prop_value;







 for (i = 0; i < ce->num_traits; i++) {
  for (zend_hash_internal_pointer_reset_ex(&ce->traits[i]->properties_info, ((void *)0));
    zend_hash_get_current_data_ex(&ce->traits[i]->properties_info, (void *) &property_info, ((void *)0)) == 0;
    zend_hash_move_forward_ex(&ce->traits[i]->properties_info, ((void *)0))) {



   if ((property_info->flags & (0x100 | 0x200 | 0x400)) == 0x100) {
    prop_hash = property_info->h;
    prop_name = property_info->name;
    prop_name_length = property_info->name_length;
    prop_found = zend_hash_quick_find(&ce->properties_info,
              property_info->name, property_info->name_length+1,
              property_info->h, (void **) &coliding_prop) == 0;
   } else {

    zend_unmangle_property_name(property_info->name, property_info->name_length,
           &class_name_unused, &prop_name);
    prop_name_length = strlen(prop_name);
    prop_hash = zend_get_hash_value(prop_name, prop_name_length + 1);
    prop_found = zend_hash_quick_find(&ce->properties_info, prop_name, prop_name_length+1, prop_hash, (void **) &coliding_prop) == 0;
   }


   if (prop_found) {
    if (coliding_prop->flags & 0x20000) {

     zend_hash_quick_find(&coliding_prop->ce->properties_info, prop_name, prop_name_length+1, prop_hash, (void **) &coliding_prop);
    }
    if ((coliding_prop->flags & (0x100 | 0x200 | 0x400)) == (property_info->flags & (0x100 | 0x200 | 0x400))) {

     if (property_info->flags & 0x01) {
            not_compatible = (-1 == compare_function(&compare_result,
                                          ce->default_static_members_table[coliding_prop->offset],
                                          ce->traits[i]->default_static_members_table[property_info->offset] ))
                              || ((compare_result).value.lval != 0);
     } else {
      not_compatible = (-1 == compare_function(&compare_result,
                                          ce->default_properties_table[coliding_prop->offset],
                                          ce->traits[i]->default_properties_table[property_info->offset] ))
                              || ((compare_result).value.lval != 0);
     }
    } else {

     not_compatible = 1;
    }

    if (not_compatible) {
     zend_error((1<<6L),
          "%s and %s define the same property ($%s) in the composition of %s. However, the definition differs and is considered incompatible. Class was composed",
        find_first_definition(ce, i, prop_name, prop_name_length, prop_hash, coliding_prop->ce)->name,
        property_info->ce->name,
        prop_name,
        ce->name);
    } else {
     zend_error((1<<11L),
          "%s and %s define the same property ($%s) in the composition of %s. This might be incompatible, to improve maintainability consider using accessor methods in traits instead. Class was composed",
        find_first_definition(ce, i, prop_name, prop_name_length, prop_hash, coliding_prop->ce)->name,
        property_info->ce->name,
        prop_name,
        ce->name);
    }
   }


   if (property_info->flags & 0x01) {
    prop_value = ce->traits[i]->default_static_members_table[property_info->offset];
   } else {
    prop_value = ce->traits[i]->default_properties_table[property_info->offset];
   }
   zval_addref_p(prop_value);

   zend_declare_property_ex(ce, prop_name, prop_name_length,
          prop_value, property_info->flags,
             property_info->doc_comment, property_info->doc_comment_len );
  }
 }
}


static void zend_do_check_for_inconsistent_traits_aliasing(zend_class_entry *ce )
{
 int i = 0;
 zend_trait_alias* cur_alias;
 char* lc_method_name;

 if (ce->trait_aliases) {
  while (ce->trait_aliases[i]) {
   cur_alias = ce->trait_aliases[i];


   if (!cur_alias->trait_method->ce) {
    if (cur_alias->alias) {

     zend_error((1<<6L),
          "An alias (%s) was defined for method %s(), but this method does not exist",
          cur_alias->alias,
          cur_alias->trait_method->method_name);
    } else {
# 4352 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
     lc_method_name = zend_str_tolower_dup(cur_alias->trait_method->method_name,
                cur_alias->trait_method->mname_len);
     if (zend_hash_exists(&ce->function_table,
           lc_method_name,
           cur_alias->trait_method->mname_len+1)) {
      _efree((lc_method_name) );
      zend_error((1<<6L),
           "The modifiers for the trait alias %s() need to be changed in the same statment in which the alias is defined. Error",
           cur_alias->trait_method->method_name);
     } else {
      _efree((lc_method_name) );
      zend_error((1<<6L),
           "The modifiers of the trait method %s() are changed, but this method does not exist. Error",
           cur_alias->trait_method->method_name);

     }
    }
   }
   i++;
  }
 }
}


__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce )
{

 if (ce->num_traits <= 0) {
  return;
 }


 zend_traits_init_trait_structures(ce );


 zend_do_traits_method_binding(ce );


 zend_do_check_for_inconsistent_traits_aliasing(ce );


 zend_do_traits_property_binding(ce );


 zend_verify_abstract_class(ce );


 if (ce->ce_flags & 0x10) {
  ce->ce_flags -= 0x10;
 }
}



__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, zend_op *opline, HashTable *function_table, zend_bool compile_time)
{
 zend_function *function;
 zval *op1, *op2;

 if (compile_time) {
  op1 = &(op_array)->literals[opline->op1.constant].constant;
  op2 = &(op_array)->literals[opline->op2.constant].constant;
 } else {
  op1 = opline->op1.zv;
  op2 = opline->op2.zv;
 }

 zend_hash_quick_find(function_table, (*op1).value.str.val, (*op1).value.str.len, (((zend_literal*)(op1))->hash_value), (void *) &function);
 if (_zend_hash_quick_add_or_update(function_table, (*op2).value.str.val, (*op2).value.str.len+1, (((zend_literal*)(op2))->hash_value), function, sizeof(zend_function), ((void *)0), (1<<1) )==-1) {
  int error_level = compile_time ? (1<<6L) : (1<<0L);
  zend_function *old_function;

  if (zend_hash_quick_find(function_table, (*op2).value.str.val, (*op2).value.str.len+1, (((zend_literal*)(op2))->hash_value), (void *) &old_function)==0
   && old_function->type == 2
   && old_function->op_array.last > 0) {
   zend_error(error_level, "Cannot redeclare %s() (previously declared in %s:%d)",
      function->common.function_name,
      old_function->op_array.filename,
      old_function->op_array.opcodes[0].lineno);
  } else {
   zend_error(error_level, "Cannot redeclare %s()", function->common.function_name);
  }
  return -1;
 } else {
  (*function->op_array.refcount)++;
  function->op_array.static_variables = ((void *)0);
  return 0;
 }
}



void zend_add_trait_precedence(znode *precedence_znode )
{
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 zend_add_to_list(&ce->trait_precedences, precedence_znode->u.op.ptr );
}


void zend_add_trait_alias(znode *alias_znode )
{
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 zend_add_to_list(&ce->trait_aliases, alias_znode->u.op.ptr );
}


void zend_prepare_reference(znode *result, znode *class_name, znode *method_name )
{
 zend_trait_method_reference *method_ref = _emalloc((sizeof(zend_trait_method_reference)) );
 method_ref->ce = ((void *)0);



 if (class_name) {
  zend_resolve_class_name(class_name, 4, 1 );
  method_ref->class_name = (class_name->u.constant).value.str.val;
  method_ref->cname_len = (class_name->u.constant).value.str.len;
 } else {
  method_ref->class_name = ((void *)0);
  method_ref->cname_len = 0;
 }

 method_ref->method_name = (method_name->u.constant).value.str.val;
 method_ref->mname_len = (method_name->u.constant).value.str.len;

 result->u.op.ptr = method_ref;
 result->op_type = (1<<1);
}



void zend_prepare_trait_alias(znode *result, znode *method_reference, znode *modifiers, znode *alias )
{
 zend_trait_alias *trait_alias = _emalloc((sizeof(zend_trait_alias)) );

 trait_alias->trait_method = (zend_trait_method_reference*)method_reference->u.op.ptr;
 trait_alias->modifiers = (modifiers->u.constant).value.lval;

 if ((modifiers->u.constant).value.lval == 0x01) {
  zend_error((1<<6L), "Cannot use 'static' as method modifier");
  return;
 }

 if (alias) {
  trait_alias->alias = (alias->u.constant).value.str.val;
  trait_alias->alias_len = (alias->u.constant).value.str.len;
 } else {
  trait_alias->alias = ((void *)0);
 }
 trait_alias->function = ((void *)0);

 result->u.op.ptr = trait_alias;
}


void zend_prepare_trait_precedence(znode *result, znode *method_reference, znode *trait_list )
{
 zend_trait_precedence *trait_precedence = _emalloc((sizeof(zend_trait_precedence)) );

 trait_precedence->trait_method = (zend_trait_method_reference*)method_reference->u.op.ptr;
 trait_precedence->exclude_from_classes = (zend_class_entry**) trait_list->u.op.ptr;

 trait_precedence->function = ((void *)0);

 result->u.op.ptr = trait_precedence;
}


__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array* op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time )
{
 zend_class_entry *ce, **pce;
 zval *op1, *op2;

 if (compile_time) {
  op1 = &(op_array)->literals[opline->op1.constant].constant;
  op2 = &(op_array)->literals[opline->op2.constant].constant;
 } else {
  op1 = opline->op1.zv;
  op2 = opline->op2.zv;
 }
 if (zend_hash_quick_find(class_table, (*op1).value.str.val, (*op1).value.str.len, (((zend_literal*)(op1))->hash_value), (void **) &pce)==-1) {
  zend_error((1<<6L), "Internal Zend error - Missing class information for %s", (*op1).value.str.val);
  return ((void *)0);
 } else {
  ce = *pce;
 }
 ce->refcount++;
 if (_zend_hash_quick_add_or_update(class_table, (*op2).value.str.val, (*op2).value.str.len+1, (((zend_literal*)(op2))->hash_value), &ce, sizeof(zend_class_entry *), ((void *)0), (1<<1) )==-1) {
  ce->refcount--;
  if (!compile_time) {





   zend_error((1<<6L), "Cannot redeclare class %s", ce->name);
  }
  return ((void *)0);
 } else {
  if (!(ce->ce_flags & (0x80|0x80000))) {
   zend_verify_abstract_class(ce );
  }
  return ce;
 }
}


__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time )
{
 zend_class_entry *ce, **pce;
 int found_ce;
 zval *op1, *op2;

 if (compile_time) {
  op1 = &(op_array)->literals[opline->op1.constant].constant;
  op2 = &(op_array)->literals[opline->op2.constant].constant;
 } else {
  op1 = opline->op1.zv;
  op2 = opline->op2.zv;
 }

 found_ce = zend_hash_quick_find(class_table, (*op1).value.str.val, (*op1).value.str.len, (((zend_literal*)(op1))->hash_value), (void **) &pce);

 if (found_ce == -1) {
  if (!compile_time) {





   zend_error((1<<6L), "Cannot redeclare class %s", (*op2).value.str.val);
  }
  return ((void *)0);
 } else {
  ce = *pce;
 }

 if (parent_ce->ce_flags & 0x80) {
  zend_error((1<<6L), "Class %s cannot extend from interface %s", ce->name, parent_ce->name);
 } else if ((parent_ce->ce_flags & 0x120) == 0x120) {
  zend_error((1<<6L), "Class %s cannot extend from trait %s", ce->name, parent_ce->name);
 }

 zend_do_inheritance(ce, parent_ce );

 ce->refcount++;


 if (_zend_hash_quick_add_or_update(class_table, (*op2).value.str.val, (*op2).value.str.len+1, (((zend_literal*)(op2))->hash_value), pce, sizeof(zend_class_entry *), ((void *)0), (1<<1) )==-1) {
  zend_error((1<<6L), "Cannot redeclare class %s", ce->name);
 }
 return ce;
}


void zend_do_early_binding(void)
{
 zend_op *opline = &(compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1];
 HashTable *table;

 while (opline->opcode == 105 && opline > (compiler_globals.active_op_array)->opcodes) {
  opline--;
 }

 switch (opline->opcode) {
  case 141:
   if (do_bind_function((compiler_globals.active_op_array), opline, (compiler_globals.function_table), 1) == -1) {
    return;
   }
   table = (compiler_globals.function_table);
   break;
  case 139:
   if (do_bind_class((compiler_globals.active_op_array), opline, (compiler_globals.class_table), 1 ) == ((void *)0)) {
    return;
   }
   table = (compiler_globals.class_table);
   break;
  case 140:
   {
    zend_op *fetch_class_opline = opline-1;
    zval *parent_name;
    zend_class_entry **pce;

    parent_name = &((compiler_globals.active_op_array))->literals[fetch_class_opline->op2.constant].constant;
    if ((zend_lookup_class((*parent_name).value.str.val, (*parent_name).value.str.len, &pce ) == -1) ||
        (((compiler_globals.compiler_options) & (1<<3)) &&
         ((*pce)->type == 1))) {
        if ((compiler_globals.compiler_options) & (1<<4)) {
      zend_uint *opline_num = &(compiler_globals.active_op_array)->early_binding;

      while (*opline_num != -1) {
       opline_num = &(compiler_globals.active_op_array)->opcodes[*opline_num].result.opline_num;
      }
      *opline_num = opline - (compiler_globals.active_op_array)->opcodes;
      opline->opcode = 145;
      opline->result_type = (1<<3);
      opline->result.opline_num = -1;
     }
     return;
    }
    if (do_bind_inherited_class((compiler_globals.active_op_array), opline, (compiler_globals.class_table), *pce, 1 ) == ((void *)0)) {
     return;
    }

    zend_del_literal((compiler_globals.active_op_array), fetch_class_opline->op2.constant);
    { fetch_class_opline->opcode = 0; memset(&fetch_class_opline->result,0,sizeof(fetch_class_opline->result)); memset(&fetch_class_opline->op1,0,sizeof(fetch_class_opline->op1)); memset(&fetch_class_opline->op2,0,sizeof(fetch_class_opline->op2)); fetch_class_opline->result_type=fetch_class_opline->op1_type=fetch_class_opline->op2_type=(1<<3); };

    table = (compiler_globals.class_table);
    break;
   }
  case 146:
  case 144:
  case 154:
  case 155:


   return;
  default:
   zend_error((1<<6L), "Invalid binding type");
   return;
 }

 zend_hash_del_key_or_index(table, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len, (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value), 2);
 zend_del_literal((compiler_globals.active_op_array), opline->op1.constant);
 zend_del_literal((compiler_globals.active_op_array), opline->op2.constant);
 { opline->opcode = 0; memset(&opline->result,0,sizeof(opline->result)); memset(&opline->op1,0,sizeof(opline->op1)); memset(&opline->op2,0,sizeof(opline->op2)); opline->result_type=opline->op1_type=opline->op2_type=(1<<3); };
}


__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array )
{
 if (op_array->early_binding != -1) {
  zend_bool orig_in_compilation = (compiler_globals.in_compilation);
  zend_uint opline_num = op_array->early_binding;
  zend_class_entry **pce;

  (compiler_globals.in_compilation) = 1;
  while (opline_num != -1) {
   if (zend_lookup_class((*op_array->opcodes[opline_num-1].op2.zv).value.str.val, (*op_array->opcodes[opline_num-1].op2.zv).value.str.len, &pce ) == 0) {
    do_bind_inherited_class(op_array, &op_array->opcodes[opline_num], (executor_globals.class_table), *pce, 0 );
   }
   opline_num = op_array->opcodes[opline_num].result.opline_num;
  }
  (compiler_globals.in_compilation) = orig_in_compilation;
 }
}


void zend_do_boolean_or_begin(znode *expr1, znode *op_token )
{
 int next_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 47;
 if (expr1->op_type == (1<<1)) {
  do { opline->result_type = (expr1)->op_type; if ((expr1)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(expr1)->u.constant ); } else { opline->result = (expr1)->u.op; } } while (0);
 } else {
  opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
  opline->result_type = (1<<1);
 }
 do { opline->op1_type = (expr1)->op_type; if ((expr1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr1)->u.constant ); } else { opline->op1 = (expr1)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 op_token->u.op.opline_num = next_op_number;

 do { (expr1)->op_type = opline->result_type; if ((expr1)->op_type == (1<<0)) { (expr1)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (expr1)->u.op = opline->result; (expr1)->EA = 0; } } while (0);
}


void zend_do_boolean_or_end(znode *result, const znode *expr1, const znode *expr2, znode *op_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 *result = *expr1;
 opline->opcode = 52;
 do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline->result = (result)->u.op; } } while (0);
 do { opline->op1_type = (expr2)->op_type; if ((expr2)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr2)->u.constant ); } else { opline->op1 = (expr2)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 (compiler_globals.active_op_array)->opcodes[op_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
}


void zend_do_boolean_and_begin(znode *expr1, znode *op_token )
{
 int next_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 46;
 if (expr1->op_type == (1<<1)) {
  do { opline->result_type = (expr1)->op_type; if ((expr1)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(expr1)->u.constant ); } else { opline->result = (expr1)->u.op; } } while (0);
 } else {
  opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
  opline->result_type = (1<<1);
 }
 do { opline->op1_type = (expr1)->op_type; if ((expr1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr1)->u.constant ); } else { opline->op1 = (expr1)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 op_token->u.op.opline_num = next_op_number;

 do { (expr1)->op_type = opline->result_type; if ((expr1)->op_type == (1<<0)) { (expr1)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (expr1)->u.op = opline->result; (expr1)->EA = 0; } } while (0);
}


void zend_do_boolean_and_end(znode *result, const znode *expr1, const znode *expr2, const znode *op_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 *result = *expr1;
 opline->opcode = 52;
 do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline->result = (result)->u.op; } } while (0);
 do { opline->op1_type = (expr2)->op_type; if ((expr2)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr2)->u.constant ); } else { opline->op1 = (expr2)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 (compiler_globals.active_op_array)->opcodes[op_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
}


void zend_do_do_while_begin(void)
{
 do_begin_loop();
 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_do_while_end(const znode *do_token, const znode *expr_open_bracket, const znode *expr )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 44;
 do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);
 opline->op2.opline_num = do_token->u.op.opline_num;
 opline->op2_type = (1<<3);

 do_end_loop(expr_open_bracket->u.op.opline_num, 0 );

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_do_brk_cont(zend_uchar op, const znode *expr )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = op;
 opline->op1.opline_num = (compiler_globals.context).current_brk_cont;
 opline->op1_type = (1<<3);
 if (expr) {
  if (expr->op_type != (1<<0)) {
   zend_error((1<<6L), "'%s' operator with non-constant operand is no longer supported", op == 50 ? "break" : "continue");
  } else if ((expr->u.constant).type != 1 || (expr->u.constant).value.lval < 1) {
   zend_error((1<<6L), "'%s' operator accepts only positive numbers", op == 50 ? "break" : "continue");
  }
  do { opline->op2_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op2 = (expr)->u.op; } } while (0);
 } else {
  do { zval _c; { zval *__z = (&_c); (*__z).value.lval = 1; (*__z).type = 1; }; opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
  opline->op2_type = (1<<0);
 }
}


void zend_do_switch_cond(const znode *cond )
{
 zend_switch_entry switch_entry;

 switch_entry.cond = *cond;
 switch_entry.default_case = -1;
 switch_entry.control_var = -1;
 zend_stack_push(&(compiler_globals.switch_cond_stack), (void *) &switch_entry, sizeof(switch_entry));

 do_begin_loop();

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_switch_end(const znode *case_list )
{
 zend_op *opline;
 zend_switch_entry *switch_entry_ptr;

 zend_stack_top(&(compiler_globals.switch_cond_stack), (void **) &switch_entry_ptr);


 if (switch_entry_ptr->default_case != -1) {
  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 42;
  opline->op1_type = (1<<3);
  opline->op2_type = (1<<3);
  opline->op1.opline_num = switch_entry_ptr->default_case;
 }

 if (case_list->op_type != (1<<3)) {
  int next_op_number = get_next_op_number((compiler_globals.active_op_array));

  (compiler_globals.active_op_array)->opcodes[case_list->u.op.opline_num].op1.opline_num = next_op_number;
 }


 (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].cont = (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].brk = get_next_op_number((compiler_globals.active_op_array));
 (compiler_globals.context).current_brk_cont = (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].parent;

 if (switch_entry_ptr->cond.op_type==(1<<2) || switch_entry_ptr->cond.op_type==(1<<1)) {

  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = (switch_entry_ptr->cond.op_type == (1<<1)) ? 70 : 49;
  do { opline->op1_type = (&switch_entry_ptr->cond)->op_type; if ((&switch_entry_ptr->cond)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&switch_entry_ptr->cond)->u.constant ); } else { opline->op1 = (&switch_entry_ptr->cond)->u.op; } } while (0);
  opline->op2_type = (1<<3);
 }
 if (switch_entry_ptr->cond.op_type == (1<<0)) {
  _zval_dtor((&switch_entry_ptr->cond.u.constant) );
 }

 zend_stack_del_top(&(compiler_globals.switch_cond_stack));

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_do_case_before_statement(const znode *case_list, znode *case_token, const znode *case_expr )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 int next_op_number;
 zend_switch_entry *switch_entry_ptr;
 znode result;

 zend_stack_top(&(compiler_globals.switch_cond_stack), (void **) &switch_entry_ptr);

 if (switch_entry_ptr->control_var == -1) {
  switch_entry_ptr->control_var = get_temporary_variable((compiler_globals.active_op_array));
 }
 opline->opcode = 48;
 opline->result.var = switch_entry_ptr->control_var;
 opline->result_type = (1<<1);
 do { opline->op1_type = (&switch_entry_ptr->cond)->op_type; if ((&switch_entry_ptr->cond)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&switch_entry_ptr->cond)->u.constant ); } else { opline->op1 = (&switch_entry_ptr->cond)->u.op; } } while (0);
 do { opline->op2_type = (case_expr)->op_type; if ((case_expr)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(case_expr)->u.constant ); } else { opline->op2 = (case_expr)->u.op; } } while (0);
 if (opline->op1_type == (1<<0)) {
  _zval_copy_ctor((&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant) );
 }
 do { (&result)->op_type = opline->result_type; if ((&result)->op_type == (1<<0)) { (&result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (&result)->u.op = opline->result; (&result)->EA = 0; } } while (0);

 next_op_number = get_next_op_number((compiler_globals.active_op_array));
 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 43;
 do { opline->op1_type = (&result)->op_type; if ((&result)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&result)->u.constant ); } else { opline->op1 = (&result)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 case_token->u.op.opline_num = next_op_number;

 if (case_list->op_type==(1<<3)) {
  return;
 }
 next_op_number = get_next_op_number((compiler_globals.active_op_array));
 (compiler_globals.active_op_array)->opcodes[case_list->u.op.opline_num].op1.opline_num = next_op_number;
}


void zend_do_case_after_statement(znode *result, const znode *case_token )
{
 int next_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 42;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
 result->u.op.opline_num = next_op_number;

 switch ((compiler_globals.active_op_array)->opcodes[case_token->u.op.opline_num].opcode) {
  case 42:
   (compiler_globals.active_op_array)->opcodes[case_token->u.op.opline_num].op1.opline_num = get_next_op_number((compiler_globals.active_op_array));
   break;
  case 43:
   (compiler_globals.active_op_array)->opcodes[case_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
   break;
 }
}


void zend_do_default_before_statement(const znode *case_list, znode *default_token )
{
 int next_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 zend_switch_entry *switch_entry_ptr;

 zend_stack_top(&(compiler_globals.switch_cond_stack), (void **) &switch_entry_ptr);

 opline->opcode = 42;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
 default_token->u.op.opline_num = next_op_number;

 next_op_number = get_next_op_number((compiler_globals.active_op_array));
 switch_entry_ptr->default_case = next_op_number;

 if (case_list->op_type==(1<<3)) {
  return;
 }
 (compiler_globals.active_op_array)->opcodes[case_list->u.op.opline_num].op1.opline_num = next_op_number;
}


void zend_do_begin_class_declaration(const znode *class_token, znode *class_name, const znode *parent_class_name )
{
 zend_op *opline;
 int doing_inheritance = 0;
 zend_class_entry *new_class_entry;
 char *lcname;
 int error = 0;
 zval **ns_name, key;

 if ((compiler_globals.active_class_entry)) {
  zend_error((1<<6L), "Class declarations may not be nested");
  return;
 }

 lcname = zend_str_tolower_dup(class_name->u.constant.value.str.val, class_name->u.constant.value.str.len);

 if (!(__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (lcname) && __builtin_constant_p ("self") && (__s1_len = strlen (lcname), __s2_len = strlen ("self"), (!((size_t)(const void *)((lcname) + 1) - (size_t)(const void *)(lcname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("self") + 1) - (size_t)(const void *)("self") == 1) || __s2_len >= 4)) ? __builtin_strcmp (lcname, "self") : (__builtin_constant_p (lcname) && ((size_t)(const void *)((lcname) + 1) - (size_t)(const void *)(lcname) == 1) && (__s1_len = strlen (lcname), __s1_len < 4) ? (__builtin_constant_p ("self") && ((size_t)(const void *)(("self") + 1) - (size_t)(const void *)("self") == 1) ? __builtin_strcmp (lcname, "self") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("self"); register int __result = (((__const unsigned char *) (__const char *) (lcname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (lcname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (lcname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (lcname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("self") && ((size_t)(const void *)(("self") + 1) - (size_t)(const void *)("self") == 1) && (__s2_len = strlen ("self"), __s2_len < 4) ? (__builtin_constant_p (lcname) && ((size_t)(const void *)((lcname) + 1) - (size_t)(const void *)(lcname) == 1) ? __builtin_strcmp (lcname, "self") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (lcname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("self"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("self"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("self"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("self"))[3]); } } __result; }))) : __builtin_strcmp (lcname, "self")))); }) && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (lcname) && __builtin_constant_p ("parent") && (__s1_len = strlen (lcname), __s2_len = strlen ("parent"), (!((size_t)(const void *)((lcname) + 1) - (size_t)(const void *)(lcname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("parent") + 1) - (size_t)(const void *)("parent") == 1) || __s2_len >= 4)) ? __builtin_strcmp (lcname, "parent") : (__builtin_constant_p (lcname) && ((size_t)(const void *)((lcname) + 1) - (size_t)(const void *)(lcname) == 1) && (__s1_len = strlen (lcname), __s1_len < 4) ? (__builtin_constant_p ("parent") && ((size_t)(const void *)(("parent") + 1) - (size_t)(const void *)("parent") == 1) ? __builtin_strcmp (lcname, "parent") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("parent"); register int __result = (((__const unsigned char *) (__const char *) (lcname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (lcname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (lcname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (lcname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("parent") && ((size_t)(const void *)(("parent") + 1) - (size_t)(const void *)("parent") == 1) && (__s2_len = strlen ("parent"), __s2_len < 4) ? (__builtin_constant_p (lcname) && ((size_t)(const void *)((lcname) + 1) - (size_t)(const void *)(lcname) == 1) ? __builtin_strcmp (lcname, "parent") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (lcname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("parent"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("parent"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("parent"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("parent"))[3]); } } __result; }))) : __builtin_strcmp (lcname, "parent")))); }))) {
  _efree((lcname) );
  zend_error((1<<6L), "Cannot use '%s' as class name as it is reserved", (class_name->u.constant).value.str.val);
 }


 if ((compiler_globals.current_import) &&
     zend_hash_find((compiler_globals.current_import), lcname, (class_name->u.constant).value.str.len+1, (void**)&ns_name) == 0) {
  error = 1;
 }

 if ((compiler_globals.current_namespace)) {

  znode tmp;

  tmp.u.constant = *(compiler_globals.current_namespace);
  _zval_copy_ctor((&tmp.u.constant) );
  zend_do_build_namespace_name(&tmp, &tmp, class_name );
  class_name = &tmp;
  _efree((lcname) );
  lcname = zend_str_tolower_dup((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.len);
 }

 if (error) {
  char *tmp = zend_str_tolower_dup((**ns_name).value.str.val, (**ns_name).value.str.len);

  if ((**ns_name).value.str.len != (class_name->u.constant).value.str.len ||
   memcmp(tmp, lcname, (class_name->u.constant).value.str.len)) {
   zend_error((1<<6L), "Cannot declare class %s because the name is already in use", (class_name->u.constant).value.str.val);
  }
  _efree((tmp) );
 }

 new_class_entry = _emalloc((sizeof(zend_class_entry)) );
 new_class_entry->type = 2;
 new_class_entry->name = zend_new_interned_string((class_name->u.constant).value.str.val, (class_name->u.constant).value.str.len + 1, 1 );
 new_class_entry->name_length = (class_name->u.constant).value.str.len;

 zend_initialize_class_data(new_class_entry, 1 );
 new_class_entry->info.user.filename = zend_get_compiled_filename();
 new_class_entry->info.user.line_start = class_token->u.op.opline_num;
 new_class_entry->ce_flags |= class_token->EA;

 if (parent_class_name && parent_class_name->op_type != (1<<3)) {
  switch (parent_class_name->EA) {
   case 1:
    zend_error((1<<6L), "Cannot use 'self' as class name as it is reserved");
    break;
   case 2:
    zend_error((1<<6L), "Cannot use 'parent' as class name as it is reserved");
    break;
   case 7:
    zend_error((1<<6L), "Cannot use 'static' as class name as it is reserved");
    break;
   default:
    break;
  }
  doing_inheritance = 1;
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->op1_type = (1<<0);
 build_runtime_defined_function_key(&key, lcname, new_class_entry->name_length );
 opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &key );
 (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len);

 opline->op2_type = (1<<0);

 if (doing_inheritance) {

       if ((new_class_entry->ce_flags & 0x120) == 0x120) {
           zend_error((1<<6L), "A trait (%s) cannot extend a class", new_class_entry->name);
       }

  opline->extended_value = parent_class_name->u.op.var;
  opline->opcode = 140;
 } else {
  opline->opcode = 139;
 }

 do { zval _c; do { const char *__s=(lcname); int __l=new_class_entry->name_length; zval *__z = (&_c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
 do { if (((((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1); } } while (0);

 _zend_hash_quick_add_or_update((compiler_globals.class_table), (key).value.str.val, (key).value.str.len, (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value), &new_class_entry, sizeof(zend_class_entry *), ((void *)0), (1<<0) );
 (compiler_globals.active_class_entry) = new_class_entry;

 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 opline->result_type = (1<<2);
 do { (&(compiler_globals.implementing_class))->op_type = opline->result_type; if ((&(compiler_globals.implementing_class))->op_type == (1<<0)) { (&(compiler_globals.implementing_class))->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (&(compiler_globals.implementing_class))->u.op = opline->result; (&(compiler_globals.implementing_class))->EA = 0; } } while (0);

 if ((compiler_globals.doc_comment)) {
  (compiler_globals.active_class_entry)->info.user.doc_comment = (compiler_globals.doc_comment);
  (compiler_globals.active_class_entry)->info.user.doc_comment_len = (compiler_globals.doc_comment_len);
  (compiler_globals.doc_comment) = ((void *)0);
  (compiler_globals.doc_comment_len) = 0;
 }
}


static void do_verify_abstract_class(void)
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 146;
 do { opline->op1_type = (&(compiler_globals.implementing_class))->op_type; if ((&(compiler_globals.implementing_class))->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&(compiler_globals.implementing_class))->u.constant ); } else { opline->op1 = (&(compiler_globals.implementing_class))->u.op; } } while (0);
 opline->op2_type = (1<<3);
}


void zend_do_end_class_declaration(const znode *class_token, const znode *parent_token )
{
 zend_class_entry *ce = (compiler_globals.active_class_entry);

 if (ce->constructor) {
  ce->constructor->common.fn_flags |= 0x2000;
  if (ce->constructor->common.fn_flags & 0x01) {
   zend_error((1<<6L), "Constructor %s::%s() cannot be static", ce->name, ce->constructor->common.function_name);
  }
 }
 if (ce->destructor) {
  ce->destructor->common.fn_flags |= 0x4000;
  if (ce->destructor->common.fn_flags & 0x01) {
   zend_error((1<<6L), "Destructor %s::%s() cannot be static", ce->name, ce->destructor->common.function_name);
  }
 }
 if (ce->clone) {
  ce->clone->common.fn_flags |= 0x8000;
  if (ce->clone->common.fn_flags & 0x01) {
   zend_error((1<<6L), "Clone method %s::%s() cannot be static", ce->name, ce->clone->common.function_name);
  }
 }

 ce->info.user.line_end = zend_get_compiled_lineno();




 if (ce->num_traits > 0) {
  zend_op *opline;

  ce->traits = ((void *)0);
  ce->num_traits = 0;
  ce->ce_flags |= 0x400000;


  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 155;
  do { opline->op1_type = (&(compiler_globals.implementing_class))->op_type; if ((&(compiler_globals.implementing_class))->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&(compiler_globals.implementing_class))->u.constant ); } else { opline->op1 = (&(compiler_globals.implementing_class))->u.op; } } while (0);
 }

 if (!(ce->ce_flags & (0x80|0x20))
  && ((parent_token->op_type != (1<<3)) || (ce->num_interfaces > 0))) {
  zend_verify_abstract_class(ce );
  if (ce->num_interfaces) {
   do_verify_abstract_class();
  }
 }




 if (ce->num_interfaces > 0) {
  ce->interfaces = ((void *)0);
  ce->num_interfaces = 0;
  ce->ce_flags |= 0x80000;
 }

 (compiler_globals.active_class_entry) = ((void *)0);
}


void zend_do_implements_interface(znode *interface_name )
{
 zend_op *opline;


 if (((compiler_globals.active_class_entry)->ce_flags & 0x120) == 0x120) {
  zend_error((1<<6L), "Cannot use '%s' as interface on '%s' since it is a Trait",
        (interface_name->u.constant).value.str.val,
        (compiler_globals.active_class_entry)->name);
 }

 switch (zend_get_class_fetch_type((interface_name->u.constant).value.str.val, (interface_name->u.constant).value.str.len)) {
  case 1:
  case 2:
  case 7:
   zend_error((1<<6L), "Cannot use '%s' as interface name as it is reserved", (interface_name->u.constant).value.str.val);
   break;
  default:
   break;
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 144;
 do { opline->op1_type = (&(compiler_globals.implementing_class))->op_type; if ((&(compiler_globals.implementing_class))->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&(compiler_globals.implementing_class))->u.constant ); } else { opline->op1 = (&(compiler_globals.implementing_class))->u.op; } } while (0);
 zend_resolve_class_name(interface_name, opline->extended_value, 0 );
 opline->extended_value = (opline->extended_value & ~0x0f) | 6;
 opline->op2_type = (1<<0);
 opline->op2.constant = zend_add_class_name_literal((compiler_globals.active_op_array), &interface_name->u.constant );
 (compiler_globals.active_class_entry)->num_interfaces++;
}


void zend_do_implements_trait(znode *trait_name )
{
 zend_op *opline;
  if (((compiler_globals.active_class_entry)->ce_flags & 0x80)) {
    zend_error((1<<6L),
               "Cannot use traits inside of interfaces. %s is used in %s",
               (trait_name->u.constant).value.str.val, (compiler_globals.active_class_entry)->name);
  }


 switch (zend_get_class_fetch_type((trait_name->u.constant).value.str.val, (trait_name->u.constant).value.str.len)) {
  case 1:
  case 2:
  case 7:
   zend_error((1<<6L), "Cannot use '%s' as trait name as it is reserved", (trait_name->u.constant).value.str.val);
   break;
  default:
   break;
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 154;
 do { opline->op1_type = (&(compiler_globals.implementing_class))->op_type; if ((&(compiler_globals.implementing_class))->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&(compiler_globals.implementing_class))->u.constant ); } else { opline->op1 = (&(compiler_globals.implementing_class))->u.op; } } while (0);
 zend_resolve_class_name(trait_name, opline->extended_value, 0 );
 opline->extended_value = 14;
 opline->op2_type = (1<<0);
 opline->op2.constant = zend_add_class_name_literal((compiler_globals.active_op_array), &trait_name->u.constant );
 (compiler_globals.active_class_entry)->num_traits++;
}


__attribute__ ((visibility("default"))) void zend_mangle_property_name(char **dest, int *dest_length, const char *src1, int src1_length, const char *src2, int src2_length, int internal)
{
 char *prop_name;
 int prop_name_length;

 prop_name_length = 1 + src1_length + 1 + src2_length;
 prop_name = ((internal)?__zend_malloc(prop_name_length + 1):_emalloc((prop_name_length + 1) ));
 prop_name[0] = '\0';
 memcpy(prop_name + 1, src1, src1_length+1);
 memcpy(prop_name + 1 + src1_length + 1, src2, src2_length+1);

 *dest = prop_name;
 *dest_length = prop_name_length;
}


static int zend_strnlen(const char* s, int maxlen)
{
 int len = 0;
 while (*s++ && maxlen--) len++;
 return len;
}


__attribute__ ((visibility("default"))) int zend_unmangle_property_name(const char *mangled_property, int len, const char **class_name, const char **prop_name)
{
 int class_name_len;

 *class_name = ((void *)0);

 if (mangled_property[0]!=0) {
  *prop_name = mangled_property;
  return 0;
 }
 if (len < 3 || mangled_property[1]==0) {
  zend_error((1<<3L), "Illegal member variable name");
  *prop_name = mangled_property;
  return -1;
 }

 class_name_len = zend_strnlen(mangled_property+1, --len - 1) + 1;
 if (class_name_len >= len || mangled_property[class_name_len]!=0) {
  zend_error((1<<3L), "Corrupt member variable name");
  *prop_name = mangled_property;
  return -1;
 }
 *class_name = mangled_property+1;
 *prop_name = (*class_name)+class_name_len;
 return 0;
}


void zend_do_declare_property(const znode *var_name, const znode *value, zend_uint access_type )
{
 zval *property;
 zend_property_info *existing_property_info;
 char *comment = ((void *)0);
 int comment_len = 0;

 if ((compiler_globals.active_class_entry)->ce_flags & 0x80) {
  zend_error((1<<6L), "Interfaces may not include member variables");
 }

 if (access_type & 0x02) {
  zend_error((1<<6L), "Properties cannot be declared abstract");
 }

 if (access_type & 0x04) {
  zend_error((1<<6L), "Cannot declare property %s::$%s final, the final modifier is allowed only for methods and classes",
       (compiler_globals.active_class_entry)->name, var_name->u.constant.value.str.val);
 }

 if (zend_hash_find(&(compiler_globals.active_class_entry)->properties_info, var_name->u.constant.value.str.val, var_name->u.constant.value.str.len+1, (void **) &existing_property_info)==0) {
  zend_error((1<<6L), "Cannot redeclare %s::$%s", (compiler_globals.active_class_entry)->name, var_name->u.constant.value.str.val);
 }
 do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);

 if (value) {
  *property = value->u.constant;
 } else {
  (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;
  (*property).type = 0;
 }

 if ((compiler_globals.doc_comment)) {
  comment = (compiler_globals.doc_comment);
  comment_len = (compiler_globals.doc_comment_len);
  (compiler_globals.doc_comment) = ((void *)0);
  (compiler_globals.doc_comment_len) = 0;
 }

 zend_declare_property_ex((compiler_globals.active_class_entry), zend_new_interned_string(var_name->u.constant.value.str.val, var_name->u.constant.value.str.len + 1, 0 ), var_name->u.constant.value.str.len, property, access_type, comment, comment_len );
 _efree((var_name->u.constant.value.str.val) );
}


void zend_do_declare_class_constant(znode *var_name, const znode *value )
{
 zval *property;
 const char *cname = ((void *)0);
 int result;

 if((value->u.constant).type == 9) {
  zend_error((1<<6L), "Arrays are not allowed in class constants");
  return;
 }
 if (((compiler_globals.active_class_entry)->ce_flags & 0x120) == 0x120) {
  zend_error((1<<6L), "Traits cannot have constants");
  return;
 }

 do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 *property = value->u.constant;

 cname = zend_new_interned_string(var_name->u.constant.value.str.val, var_name->u.constant.value.str.len+1, 0 );

 if ((((cname) >= (compiler_globals.interned_strings_start)) && ((cname) < (compiler_globals.interned_strings_end)))) {
  result = _zend_hash_quick_add_or_update(&(compiler_globals.active_class_entry)->constants_table, cname, var_name->u.constant.value.str.len+1, (((Bucket*)(((char*)(cname))-sizeof(Bucket)))->h), &property, sizeof(zval *), ((void *)0), (1<<1) );
 } else {
  result = _zend_hash_add_or_update(&(compiler_globals.active_class_entry)->constants_table, cname, var_name->u.constant.value.str.len+1, &property, sizeof(zval *), ((void *)0), (1<<1) );
 }
 if (result == -1) {
  do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)property)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(property ); }; _efree((property) ); } while (0);
  zend_error((1<<6L), "Cannot redefine class constant %s::%s", (compiler_globals.active_class_entry)->name, var_name->u.constant.value.str.val);
 }
 _zval_dtor((&var_name->u.constant) );;

 if ((compiler_globals.doc_comment)) {
  _efree(((compiler_globals.doc_comment)) );
  (compiler_globals.doc_comment) = ((void *)0);
  (compiler_globals.doc_comment_len) = 0;
 }
}


void zend_do_fetch_property(znode *result, znode *object, const znode *property )
{
 zend_op opline;
 zend_llist *fetch_list_ptr;

 zend_stack_top(&(compiler_globals.bp_stack), (void **) &fetch_list_ptr);

 if (object->op_type == (1<<4)) {
  if (object->u.op.var == (compiler_globals.active_op_array)->this_var) {
   object->op_type = (1<<3);
  }
 } else if (fetch_list_ptr->count == 1) {
  zend_llist_element *le = fetch_list_ptr->head;
  zend_op *opline_ptr = (zend_op *) le->data;

  if (opline_is_fetch_this(opline_ptr )) {
   zend_del_literal((compiler_globals.active_op_array), opline_ptr->op1.constant);
   opline_ptr->op1_type = (1<<3);
   do { opline_ptr->op2_type = (property)->op_type; if ((property)->op_type == (1<<0)) { opline_ptr->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(property)->u.constant ); } else { opline_ptr->op2 = (property)->u.op; } } while (0);

   switch (opline_ptr->opcode) {
    case 83:
     opline_ptr->opcode = 85;
     break;
    case 80:
     opline_ptr->opcode = 82;
     break;
    case 86:
     opline_ptr->opcode = 88;
     break;
    case 89:
     opline_ptr->opcode = 91;
     break;
    case 95:
     opline_ptr->opcode = 97;
     break;
    case 92:
     opline_ptr->opcode = 94;
     break;
   }
   if (opline_ptr->op2_type == (1<<0) && (((compiler_globals.active_op_array))->literals[opline_ptr->op2.constant].constant).type == 6) {
    do { if (((((((compiler_globals.active_op_array))->literals[opline_ptr->op2.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline_ptr->op2.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline_ptr->op2.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline_ptr->op2.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline_ptr->op2.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline_ptr->op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline_ptr->op2.constant].constant).value.str.len+1); } } while (0);
    do { (compiler_globals.active_op_array)->literals[opline_ptr->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot; (compiler_globals.active_op_array)->last_cache_slot += 2; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 2] = ((void *)0); } } while (0);
   }
   do { (result)->op_type = opline_ptr->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline_ptr->result.constant].constant; } else { (result)->u.op = opline_ptr->result; (result)->EA = 0; } } while (0);
   return;
  }
 }

 if (zend_is_function_or_method_call(object)) {
  init_op(&opline );
  opline.opcode = 156;
  do { opline.op1_type = (object)->op_type; if ((object)->op_type == (1<<0)) { opline.op1.constant = zend_add_literal((compiler_globals.active_op_array), &(object)->u.constant ); } else { opline.op1 = (object)->u.op; } } while (0);
  opline.op2_type = (1<<3);
  opline.result_type = (1<<2);
  opline.result.var = opline.op1.var;
  zend_llist_add_element(fetch_list_ptr, &opline);
 }

 init_op(&opline );
 opline.opcode = 85;
 opline.result_type = (1<<2);
 opline.result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline.op1_type = (object)->op_type; if ((object)->op_type == (1<<0)) { opline.op1.constant = zend_add_literal((compiler_globals.active_op_array), &(object)->u.constant ); } else { opline.op1 = (object)->u.op; } } while (0);
 do { opline.op2_type = (property)->op_type; if ((property)->op_type == (1<<0)) { opline.op2.constant = zend_add_literal((compiler_globals.active_op_array), &(property)->u.constant ); } else { opline.op2 = (property)->u.op; } } while (0);
 if (opline.op2_type == (1<<0) && (((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).type == 6) {
  do { if (((((((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline.op2.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline.op2.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline.op2.constant].constant).value.str.len+1); } } while (0);
  do { (compiler_globals.active_op_array)->literals[opline.op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot; (compiler_globals.active_op_array)->last_cache_slot += 2; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 2] = ((void *)0); } } while (0);
 }
 do { (result)->op_type = opline.result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline.result.constant].constant; } else { (result)->u.op = opline.result; (result)->EA = 0; } } while (0);

 zend_llist_add_element(fetch_list_ptr, &opline);
}


void zend_do_halt_compiler_register(void)
{
 char *name, *cfilename;
 char haltoff[] = "__COMPILER_HALT_OFFSET__";
 int len, clen;

 if ((compiler_globals.has_bracketed_namespaces) && (compiler_globals.in_namespace)) {
  zend_error((1<<6L), "__HALT_COMPILER() can only be used from the outermost scope");
 }

 cfilename = zend_get_compiled_filename();
 clen = strlen(cfilename);
 zend_mangle_property_name(&name, &len, haltoff, sizeof(haltoff) - 1, cfilename, clen, 0);
 zend_register_long_constant(name, len+1, zend_get_scanned_file_offset(), (1<<0), 0 );
 ((0)?free(name):_efree((name) ));

 if ((compiler_globals.in_namespace)) {
  zend_do_end_namespace();
 }
}


void zend_do_push_object(const znode *object )
{
 zend_stack_push(&(compiler_globals.object_stack), object, sizeof(znode));
}


void zend_do_pop_object(znode *object )
{
 if (object) {
  znode *tmp;

  zend_stack_top(&(compiler_globals.object_stack), (void **) &tmp);
  *object = *tmp;
 }
 zend_stack_del_top(&(compiler_globals.object_stack));
}


void zend_do_begin_new_object(znode *new_token, znode *class_type )
{
 zend_op *opline;
 unsigned char *ptr = ((void *)0);

 new_token->u.op.opline_num = get_next_op_number((compiler_globals.active_op_array));
 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 68;
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (class_type)->op_type; if ((class_type)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(class_type)->u.constant ); } else { opline->op1 = (class_type)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 zend_stack_push(&(compiler_globals.function_call_stack), (void *) &ptr, sizeof(unsigned char *));
}


void zend_do_end_new_object(znode *result, const znode *new_token, const znode *argument_list )
{
 znode ctor_result;

 zend_do_end_function_call(((void *)0), &ctor_result, argument_list, 1, 0 );
 zend_do_free(&ctor_result );

 (compiler_globals.active_op_array)->opcodes[new_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
 do { (result)->op_type = (compiler_globals.active_op_array)->opcodes[new_token->u.op.opline_num].result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[(compiler_globals.active_op_array)->opcodes[new_token->u.op.opline_num].result.constant].constant; } else { (result)->u.op = (compiler_globals.active_op_array)->opcodes[new_token->u.op.opline_num].result; (result)->EA = 0; } } while (0);
}


static zend_constant* zend_get_ct_const(const zval *const_name, int all_internal_constants_substitution )
{
 zend_constant *c = ((void *)0);

 if ((*const_name).value.str.val[0] == '\\') {
  if (zend_hash_find((executor_globals.zend_constants), (*const_name).value.str.val+1, (*const_name).value.str.len, (void **) &c) == -1) {
   char *lookup_name = zend_str_tolower_dup((*const_name).value.str.val+1, (*const_name).value.str.len-1);

   if (zend_hash_find((executor_globals.zend_constants), lookup_name, (*const_name).value.str.len, (void **) &c)==0) {
    if ((c->flags & (1<<2)) && !(c->flags & (1<<0))) {
     _efree((lookup_name) );
     return c;
    }
   }
   _efree((lookup_name) );
   return ((void *)0);
  }
 } else if (zend_hash_find((executor_globals.zend_constants), (*const_name).value.str.val, (*const_name).value.str.len+1, (void **) &c) == -1) {
  char *lookup_name = zend_str_tolower_dup((*const_name).value.str.val, (*const_name).value.str.len);

  if (zend_hash_find((executor_globals.zend_constants), lookup_name, (*const_name).value.str.len+1, (void **) &c)==0) {
   if ((c->flags & (1<<2)) && !(c->flags & (1<<0))) {
    _efree((lookup_name) );
    return c;
   }
  }
  _efree((lookup_name) );
  return ((void *)0);
 }
 if (c->flags & (1<<2)) {
  return c;
 }
 if (all_internal_constants_substitution &&
     (c->flags & (1<<1)) &&
     !((compiler_globals.compiler_options) & (1<<5)) &&
     (c->value).type != 8 &&
     (c->value).type != 9) {
  return c;
 }
 return ((void *)0);
}


static int zend_constant_ct_subst(znode *result, zval *const_name, int all_internal_constants_substitution )
{
 zend_constant *c = zend_get_ct_const(const_name, all_internal_constants_substitution );

 if (c) {
  _zval_dtor((const_name) );
  result->op_type = (1<<0);
  result->u.constant = c->value;
  _zval_copy_ctor((&result->u.constant) );
  (&result->u.constant)->refcount__gc = 1; (&result->u.constant)->is_ref__gc = 0;;
  return 1;
 }
 return 0;
}


void zend_do_fetch_constant(znode *result, znode *constant_container, znode *constant_name, int mode, zend_bool check_namespace )
{
 znode tmp;
 zend_op *opline;
 int type;
 char *compound;
 ulong fetch_type = 0;

 if (constant_container) {
  switch (mode) {
   case (1<<0):

    type = zend_get_class_fetch_type((constant_container->u.constant).value.str.val, (constant_container->u.constant).value.str.len);

    if (7 == type) {
     zend_error((1<<0L), "\"static::\" is not allowed in compile-time constants");
    } else if (0 == type) {
     zend_resolve_class_name(constant_container, fetch_type, 1 );
    }
    zend_do_build_full_name(((void *)0), constant_container, constant_name, 1 );
    *result = *constant_container;
    result->u.constant.type = 8 | fetch_type;
    break;
   case (1<<1):
    if (constant_container->op_type == (1<<0) &&
    0 == zend_get_class_fetch_type((constant_container->u.constant).value.str.val, (constant_container->u.constant).value.str.len)) {
     zend_resolve_class_name(constant_container, fetch_type, 1 );
    } else {
     zend_do_fetch_class(&tmp, constant_container );
     constant_container = &tmp;
    }
    opline = get_next_op((compiler_globals.active_op_array) );
    opline->opcode = 99;
    opline->result_type = (1<<1);
    opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
    if (constant_container->op_type == (1<<0)) {
     opline->op1_type = (1<<0);
     opline->op1.constant = zend_add_class_name_literal((compiler_globals.active_op_array), &constant_container->u.constant );
    } else {
     do { opline->op1_type = (constant_container)->op_type; if ((constant_container)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(constant_container)->u.constant ); } else { opline->op1 = (constant_container)->u.op; } } while (0);
    }
    do { opline->op2_type = (constant_name)->op_type; if ((constant_name)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(constant_name)->u.constant ); } else { opline->op2 = (constant_name)->u.op; } } while (0);
    do { if (((((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1); } } while (0);
    if (opline->op1_type == (1<<0)) {
     do { (compiler_globals.active_op_array)->literals[opline->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);
    } else {
     do { (compiler_globals.active_op_array)->literals[opline->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot; (compiler_globals.active_op_array)->last_cache_slot += 2; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 2] = ((void *)0); } } while (0);
    }
    do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
    break;
  }
  return;
 }


 switch (mode) {
  case (1<<0):
   compound = memchr((constant_name->u.constant).value.str.val, '\\', (constant_name->u.constant).value.str.len);


   if (zend_constant_ct_subst(result, &constant_name->u.constant, 0 )) {
    break;
   }

   zend_resolve_non_class_name(constant_name, check_namespace );

   if(!compound) {
    fetch_type |= 0x010;
   }

   *result = *constant_name;
   result->u.constant.type = 8 | fetch_type;
   break;
  case (1<<1):
   compound = memchr((constant_name->u.constant).value.str.val, '\\', (constant_name->u.constant).value.str.len);

   zend_resolve_non_class_name(constant_name, check_namespace );

   if(zend_constant_ct_subst(result, &constant_name->u.constant, 1 )) {
    break;
   }

   opline = get_next_op((compiler_globals.active_op_array) );
   opline->opcode = 99;
   opline->result_type = (1<<1);
   opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
   do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
   opline->op1_type = (1<<3);
   opline->op2_type = (1<<0);
   if (compound) {

    opline->extended_value = 0;
    opline->op2.constant = zend_add_const_name_literal((compiler_globals.active_op_array), &constant_name->u.constant, 0 );
   } else {
    opline->extended_value = 0x010;
    if ((compiler_globals.current_namespace)) {
     opline->extended_value |= 0x100;
     opline->op2.constant = zend_add_const_name_literal((compiler_globals.active_op_array), &constant_name->u.constant, 1 );
    } else {
     opline->op2.constant = zend_add_const_name_literal((compiler_globals.active_op_array), &constant_name->u.constant, 0 );
    }
   }
   do { (compiler_globals.active_op_array)->literals[opline->op2.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);
   break;
 }
}


void zend_do_shell_exec(znode *result, const znode *cmd )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 switch (cmd->op_type) {
  case (1<<0):
  case (1<<1):
   opline->opcode = 65;
   break;
  default:
   opline->opcode = 66;
   break;
 }
 do { opline->op1_type = (cmd)->op_type; if ((cmd)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(cmd)->u.constant ); } else { opline->op1 = (cmd)->u.op; } } while (0);
 opline->op2.opline_num = 0;
 opline->extended_value = 60;
 opline->op2_type = (1<<3);


 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 60;
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 opline->result_type = (1<<2);
 do { zval _c; do { const char *__s=(_estrndup(("shell_exec"), (sizeof("shell_exec")-1) )); int __l=sizeof("shell_exec")-1; zval *__z = (&_c); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
 do { if (((((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len+1); } } while (0);
 opline->op1_type = (1<<0);
 do { (compiler_globals.active_op_array)->literals[opline->op1.constant].cache_slot = (compiler_globals.active_op_array)->last_cache_slot++; if (((compiler_globals.active_op_array)->fn_flags & 0x10) && (compiler_globals.active_op_array)->run_time_cache) { (compiler_globals.active_op_array)->run_time_cache = _erealloc(((compiler_globals.active_op_array)->run_time_cache), ((compiler_globals.active_op_array)->last_cache_slot * sizeof(void*)), 0 ); (compiler_globals.active_op_array)->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void *)0); } } while (0);
 opline->extended_value = 1;
 opline->op2_type = (1<<3);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_init_array(znode *result, const znode *expr, const znode *offset, zend_bool is_ref )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 71;
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 opline->result_type = (1<<1);
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
 if (expr) {
  do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);
  if (offset) {
   do { opline->op2_type = (offset)->op_type; if ((offset)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(offset)->u.constant ); } else { opline->op2 = (offset)->u.op; } } while (0);
   if (opline->op2_type == (1<<0) && (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).type == 6) {
    ulong index;
    int numeric = 0;

    do { register const char *tmp = (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val + (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1 - 1; if ((*end != '\0') || (*tmp == '0' && (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1 > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } index = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { index = (index * 10) + (*tmp - '0'); } if (tmp == end) { if (*(((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val == '-') { if (index-1 > 2147483647L) { break; } index = (ulong)(-(long)index); } else if (index > 2147483647L) { break; } numeric = 1; } } } while (0);
    if (numeric) {
     _zval_dtor((&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant) );
     { zval *__z = (&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant); (*__z).value.lval = index; (*__z).type = 1; };
    } else {
     do { if (((((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1); } } while (0);
    }
   }
  } else {
   opline->op2_type = (1<<3);
  }
 } else {
  opline->op1_type = (1<<3);
  opline->op2_type = (1<<3);
 }
 opline->extended_value = is_ref;
}


void zend_do_add_array_element(znode *result, const znode *expr, const znode *offset, zend_bool is_ref )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 72;
 do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline->result = (result)->u.op; } } while (0);
 do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);
 if (offset) {
  do { opline->op2_type = (offset)->op_type; if ((offset)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(offset)->u.constant ); } else { opline->op2 = (offset)->u.op; } } while (0);
  if (opline->op2_type == (1<<0) && (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).type == 6) {
   ulong index;
   int numeric = 0;

   do { register const char *tmp = (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val + (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1 - 1; if ((*end != '\0') || (*tmp == '0' && (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1 > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } index = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { index = (index * 10) + (*tmp - '0'); } if (tmp == end) { if (*(((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val == '-') { if (index-1 > 2147483647L) { break; } index = (ulong)(-(long)index); } else if (index > 2147483647L) { break; } numeric = 1; } } } while (0);
   if (numeric) {
    _zval_dtor((&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant) );
    { zval *__z = (&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant); (*__z).value.lval = index; (*__z).type = 1; };
   } else {
    do { if (((((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op2.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op2.constant].constant).value.str.len+1); } } while (0);
   }
  }
 } else {
  opline->op2_type = (1<<3);
 }
 opline->extended_value = is_ref;
}


void zend_do_add_static_array_element(znode *result, znode *offset, const znode *expr)
{
 zval *element;

 do { (element) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(element))->u.buffered = ((void *)0); } while (0);
 *element = expr->u.constant;
 if (offset) {
  switch (offset->u.constant.type & 0x00f) {
   case 8:

    (*element).type |= 0x080;
    (offset->u.constant).value.str.val = _erealloc(((offset->u.constant).value.str.val), ((offset->u.constant).value.str.len+3), 0 );
    (offset->u.constant).value.str.val[(offset->u.constant).value.str.len+1] = (offset->u.constant).type;
    (offset->u.constant).value.str.val[(offset->u.constant).value.str.len+2] = 0;
    zend_symtable_update(result->u.constant.value.ht, (offset->u.constant).value.str.val, (offset->u.constant).value.str.len+3, &element, sizeof(zval *), ((void *)0));
    _zval_dtor((&offset->u.constant) );
    break;
   case 6:
    zend_symtable_update(result->u.constant.value.ht, offset->u.constant.value.str.val, offset->u.constant.value.str.len+1, &element, sizeof(zval *), ((void *)0));
    _zval_dtor((&offset->u.constant) );
    break;
   case 0:
    zend_symtable_update((result->u.constant).value.ht, "", 1, &element, sizeof(zval *), ((void *)0));
    break;
   case 1:
   case 3:
    _zend_hash_index_update_or_next_insert((result->u.constant).value.ht, (offset->u.constant).value.lval, &element, sizeof(zval *), ((void *)0), (1<<0) );
    break;
   case 2:
    _zend_hash_index_update_or_next_insert((result->u.constant).value.ht, zend_dval_to_lval((offset->u.constant).value.dval), &element, sizeof(zval *), ((void *)0), (1<<0) );
    break;
   case 9:
    zend_error((1<<0L), "Illegal offset type");
    break;
  }
 } else {
  _zend_hash_index_update_or_next_insert((result->u.constant).value.ht, 0, &element, sizeof(zval *), ((void *)0), (1<<2) );
 }
}


void zend_do_add_list_element(const znode *element )
{
 list_llist_element lle;

 if (element) {
  zend_check_writable_variable(element);

  lle.var = *element;
  zend_llist_copy(&lle.dimensions, &(compiler_globals.dimension_llist));
  zend_llist_prepend_element(&(compiler_globals.list_llist), &lle);
 }
 (*((int *)(compiler_globals.dimension_llist).tail->data))++;
}


void zend_do_new_list_begin(void)
{
 int current_dimension = 0;
 zend_llist_add_element(&(compiler_globals.dimension_llist), &current_dimension);
}


void zend_do_new_list_end(void)
{
 zend_llist_remove_tail(&(compiler_globals.dimension_llist));
 (*((int *)(compiler_globals.dimension_llist).tail->data))++;
}


void zend_do_list_init(void)
{
 zend_stack_push(&(compiler_globals.list_stack), &(compiler_globals.list_llist), sizeof(zend_llist));
 zend_stack_push(&(compiler_globals.list_stack), &(compiler_globals.dimension_llist), sizeof(zend_llist));
 zend_llist_init(&(compiler_globals.list_llist), sizeof(list_llist_element), ((void *)0), 0);
 zend_llist_init(&(compiler_globals.dimension_llist), sizeof(int), ((void *)0), 0);
 zend_do_new_list_begin();
}


void zend_do_list_end(znode *result, znode *expr )
{
 zend_llist_element *le;
 zend_llist_element *dimension;
 zend_op *opline;
 znode last_container;

 le = (compiler_globals.list_llist).head;
 while (le) {
  zend_llist *tmp_dimension_llist = &((list_llist_element *)le->data)->dimensions;
  dimension = tmp_dimension_llist->head;
  while (dimension) {
   opline = get_next_op((compiler_globals.active_op_array) );
   if (dimension == tmp_dimension_llist->head) {
    last_container = *expr;
    switch (expr->op_type) {
     case (1<<2):
     case (1<<4):
      opline->opcode = 81;
      break;
     case (1<<1):
      opline->opcode = 98;
      break;
     case (1<<0):
      _zval_copy_ctor((&expr->u.constant) );
      opline->opcode = 98;
      break;
    }
    opline->extended_value |= 0x08000000;
   } else {
    opline->opcode = 81;
   }
   opline->result_type = (1<<2);
   opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
   do { opline->op1_type = (&last_container)->op_type; if ((&last_container)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&last_container)->u.constant ); } else { opline->op1 = (&last_container)->u.op; } } while (0);
   opline->op2_type = (1<<0);
   do { zval _c; { zval *__z = (&_c); (*__z).value.lval = *((int *) dimension->data); (*__z).type = 1; }; opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
   do { (&last_container)->op_type = opline->result_type; if ((&last_container)->op_type == (1<<0)) { (&last_container)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (&last_container)->u.op = opline->result; (&last_container)->EA = 0; } } while (0);
   dimension = dimension->next;
  }
  ((list_llist_element *) le->data)->value = last_container;
  zend_llist_destroy(&((list_llist_element *) le->data)->dimensions);
  zend_do_assign(result, &((list_llist_element *) le->data)->var, &((list_llist_element *) le->data)->value );
  zend_do_free(result );
  le = le->next;
 }
 zend_llist_destroy(&(compiler_globals.dimension_llist));
 zend_llist_destroy(&(compiler_globals.list_llist));
 *result = *expr;
 {
  zend_llist *p;


  zend_stack_top(&(compiler_globals.list_stack), (void **) &p);
  (compiler_globals.dimension_llist) = *p;
  zend_stack_del_top(&(compiler_globals.list_stack));
  zend_stack_top(&(compiler_globals.list_stack), (void **) &p);
  (compiler_globals.list_llist) = *p;
  zend_stack_del_top(&(compiler_globals.list_stack));
 }
}


void zend_init_list(void *result, void *item )
{
 void** list = _emalloc((sizeof(void*) * 2) );

 list[0] = item;
 list[1] = ((void *)0);

 *(void**)result = list;
}


void zend_add_to_list(void *result, void *item )
{
 void** list = *(void**)result;
 size_t n = 0;

 while (list && list[n]) { n++; }

 list = _erealloc((list), (sizeof(void*) * (n+2)), 0 );

 list[n] = item;
 list[n+1] = ((void *)0);

 *(void**)result = list;
}


void zend_do_fetch_static_variable(znode *varname, const znode *static_assignment, int fetch_type )
{
 zval *tmp;
 zend_op *opline;
 znode lval;
 znode result;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);

 if (static_assignment) {
  *tmp = static_assignment->u.constant;
 } else {
  *tmp = zval_used_for_init;;
 }
 if (!(compiler_globals.active_op_array)->static_variables) {
  if ((compiler_globals.active_op_array)->scope) {
   (compiler_globals.active_op_array)->scope->ce_flags |= 0x800000;
  }
  ((compiler_globals.active_op_array)->static_variables) = (HashTable *) _emalloc((sizeof(HashTable)) );
  _zend_hash_init(((compiler_globals.active_op_array)->static_variables), (2), (((void *)0)), ((void (*)(void *)) _zval_ptr_dtor), (0) );
 }
 _zend_hash_add_or_update((compiler_globals.active_op_array)->static_variables, varname->u.constant.value.str.val, varname->u.constant.value.str.len+1, &tmp, sizeof(zval *), ((void *)0), (1<<0) );

 if (varname->op_type == (1<<0)) {
  if ((varname->u.constant).type != 6) {
   if ((&varname->u.constant)->type != 6) { _convert_to_string((&varname->u.constant) ); };
  }
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = (fetch_type == 0x50000000) ? 80 : 83;
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (varname)->op_type; if ((varname)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(varname)->u.constant ); } else { opline->op1 = (varname)->u.op; } } while (0);
 if (opline->op1_type == (1<<0)) {
  do { if (((((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len+1); } } while (0);
 }
 opline->op2_type = (1<<3);
 opline->extended_value = 0x20000000;
 do { (&result)->op_type = opline->result_type; if ((&result)->op_type == (1<<0)) { (&result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (&result)->u.op = opline->result; (&result)->EA = 0; } } while (0);

 if (varname->op_type == (1<<0)) {
  _zval_copy_ctor((&varname->u.constant) );
 }
 fetch_simple_variable(&lval, varname, 0 );

 if (fetch_type == 0x50000000) {
  znode dummy;

  zend_do_begin_variable_parse();
  zend_do_assign(&dummy, &lval, &result );
  zend_do_free(&dummy );
 } else {
  zend_do_assign_ref(((void *)0), &lval, &result );
 }
 (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1].result_type |= (1<<5);
}


void zend_do_fetch_lexical_variable(znode *varname, zend_bool is_ref )
{
 znode value;

 if ((varname->u.constant).value.str.len == sizeof("this") - 1 &&
     memcmp((varname->u.constant).value.str.val, "this", sizeof("this") - 1) == 0) {
  zend_error((1<<6L), "Cannot use $this as lexical variable");
  return;
 }

 value.op_type = (1<<0);
 { (*&value.u.constant).type = 0; };
 (value.u.constant).type |= is_ref ? 0x040 : 0x020;
 zval_set_refcount_p(&value.u.constant, 1);
 zval_unset_isref_p(&value.u.constant);

 zend_do_fetch_static_variable(varname, &value, is_ref ? 0x20000000 : 0x50000000 );
}


void zend_do_fetch_global_variable(znode *varname, const znode *static_assignment, int fetch_type )
{
 zend_op *opline;
 znode lval;
 znode result;

 if (varname->op_type == (1<<0)) {
  if ((varname->u.constant).type != 6) {
   if ((&varname->u.constant)->type != 6) { _convert_to_string((&varname->u.constant) ); };
  }
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 83;
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (varname)->op_type; if ((varname)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(varname)->u.constant ); } else { opline->op1 = (varname)->u.op; } } while (0);
 if (opline->op1_type == (1<<0)) {
  do { if (((((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) >= (compiler_globals.interned_strings_start)) && (((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val) < (compiler_globals.interned_strings_end)))) { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = (((Bucket*)(((char*)((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val))-sizeof(Bucket)))->h); } else { (((zend_literal*)(&((compiler_globals.active_op_array))->literals[opline->op1.constant].constant))->hash_value) = zend_hash_func((((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.val, (((compiler_globals.active_op_array))->literals[opline->op1.constant].constant).value.str.len+1); } } while (0);
 }
 opline->op2_type = (1<<3);
 opline->extended_value = fetch_type;
 do { (&result)->op_type = opline->result_type; if ((&result)->op_type == (1<<0)) { (&result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (&result)->u.op = opline->result; (&result)->EA = 0; } } while (0);

 if (varname->op_type == (1<<0)) {
  _zval_copy_ctor((&varname->u.constant) );
 }
 fetch_simple_variable(&lval, varname, 0 );

 zend_do_assign_ref(((void *)0), &lval, &result );
 (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1].result_type |= (1<<5);
}


void zend_do_cast(znode *result, const znode *expr, int type )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 21;
 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 opline->extended_value = type;
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_include_or_eval(int type, znode *result, const znode *op1 )
{
 zend_do_extended_fcall_begin();
 {
  zend_op *opline = get_next_op((compiler_globals.active_op_array) );

  opline->opcode = 73;
  opline->result_type = (1<<2);
  opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
  opline->op2_type = (1<<3);
  opline->extended_value = type;
  do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
 }
 zend_do_extended_fcall_end();
}


void zend_do_indirect_references(znode *result, const znode *num_references, znode *variable )
{
 int i;

 zend_do_end_variable_parse(variable, 0, 0 );
 for (i=1; i<num_references->u.constant.value.lval; i++) {
  fetch_simple_variable_ex(result, variable, 0, 80 );
  *variable = *result;
 }
 zend_do_begin_variable_parse();
 fetch_simple_variable(result, variable, 1 );

 if ((compiler_globals.active_op_array)->scope && (compiler_globals.active_op_array)->this_var == -1) {
  (compiler_globals.active_op_array)->this_var = lookup_cv((compiler_globals.active_op_array), _estrndup(("this"), (sizeof("this")-1) ), sizeof("this")-1, 275574653UL );
 }
}


void zend_do_unset(const znode *variable )
{
 zend_op *last_op;

 zend_check_writable_variable(variable);

 if (variable->op_type == (1<<4)) {
  zend_op *opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 74;
  do { opline->op1_type = (variable)->op_type; if ((variable)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(variable)->u.constant ); } else { opline->op1 = (variable)->u.op; } } while (0);
  opline->op2_type = (1<<3);
  opline->result_type = (1<<3);
  opline->extended_value = 0x10000000 | 0x00800000;
 } else {
  last_op = &(compiler_globals.active_op_array)->opcodes[get_next_op_number((compiler_globals.active_op_array))-1];

  switch (last_op->opcode) {
   case 95:
    last_op->opcode = 74;
    last_op->result_type = (1<<3);
    break;
   case 96:
    last_op->opcode = 75;
    last_op->result_type = (1<<3);
    break;
   case 97:
    last_op->opcode = 76;
    last_op->result_type = (1<<3);
    break;

  }
 }
}


void zend_do_isset_or_isempty(int type, znode *result, znode *variable )
{
 zend_op *last_op;

 zend_do_end_variable_parse(variable, 3, 0 );

 zend_check_writable_variable(variable);

 if (variable->op_type == (1<<4)) {
  last_op = get_next_op((compiler_globals.active_op_array) );
  last_op->opcode = 114;
  do { last_op->op1_type = (variable)->op_type; if ((variable)->op_type == (1<<0)) { last_op->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(variable)->u.constant ); } else { last_op->op1 = (variable)->u.op; } } while (0);
  last_op->op2_type = (1<<3);
  last_op->result.var = get_temporary_variable((compiler_globals.active_op_array));
  last_op->extended_value = 0x10000000 | 0x00800000;
 } else {
  last_op = &(compiler_globals.active_op_array)->opcodes[get_next_op_number((compiler_globals.active_op_array))-1];

  switch (last_op->opcode) {
   case 89:
    last_op->opcode = 114;
    break;
   case 90:
    last_op->opcode = 115;
    break;
   case 91:
    last_op->opcode = 148;
    break;
  }
 }
 last_op->result_type = (1<<1);
 last_op->extended_value |= type;

 do { (result)->op_type = last_op->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[last_op->result.constant].constant; } else { (result)->u.op = last_op->result; (result)->EA = 0; } } while (0);
}


void zend_do_instanceof(znode *result, const znode *expr, const znode *class_znode, int type )
{
 int last_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline;

 if (last_op_number > 0) {
  opline = &(compiler_globals.active_op_array)->opcodes[last_op_number-1];
  if (opline->opcode == 109) {
   opline->extended_value |= 0x80;
  }
 }

 if (expr->op_type == (1<<0)) {
  zend_error((1<<6L), "instanceof expects an object instance, constant given");
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 138;
 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (expr)->op_type; if ((expr)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(expr)->u.constant ); } else { opline->op1 = (expr)->u.op; } } while (0);

 do { opline->op2_type = (class_znode)->op_type; if ((class_znode)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(class_znode)->u.constant ); } else { opline->op2 = (class_znode)->u.op; } } while (0);

 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);
}


void zend_do_foreach_begin(znode *foreach_token, znode *open_brackets_token, znode *array, znode *as_token, int variable )
{
 zend_op *opline;
 zend_bool is_variable;
 zend_bool push_container = 0;
 zend_op dummy_opline;

 if (variable) {
  if (zend_is_function_or_method_call(array)) {
   is_variable = 0;
  } else {
   is_variable = 1;
  }

  open_brackets_token->u.op.opline_num = get_next_op_number((compiler_globals.active_op_array));
  zend_do_end_variable_parse(array, 1, 0 );
  if ((compiler_globals.active_op_array)->last > 0 &&
      (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1].opcode == 85) {

   if ((compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1].op1_type == (1<<2)) {
    (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1].extended_value |= 0x08000000;
    push_container = 1;
   }
  }
 } else {
  is_variable = 0;
  open_brackets_token->u.op.opline_num = get_next_op_number((compiler_globals.active_op_array));
 }


 foreach_token->u.op.opline_num = get_next_op_number((compiler_globals.active_op_array));

 opline = get_next_op((compiler_globals.active_op_array) );


 opline->opcode = 77;
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (array)->op_type; if ((array)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(array)->u.constant ); } else { opline->op1 = (array)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 opline->extended_value = is_variable ? (1<<0) : 0;

 do { dummy_opline.result_type = opline->result_type; dummy_opline.result = opline->result; } while (0);
 if (push_container) {
  do { dummy_opline.op1_type = (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-2].op1_type; dummy_opline.op1 = (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-2].op1; } while (0);
 } else {
  dummy_opline.op1_type = (1<<3);
 }
 zend_stack_push(&(compiler_globals.foreach_copy_stack), (void *) &dummy_opline, sizeof(zend_op));


 as_token->u.op.opline_num = get_next_op_number((compiler_globals.active_op_array));

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 78;
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = dummy_opline.result_type; opline->op1 = dummy_opline.result; } while (0);
 opline->extended_value = 0;
 opline->op2_type = (1<<3);

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 137;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
 opline->result_type = (1<<3);
}


void zend_do_foreach_cont(znode *foreach_token, const znode *open_brackets_token, const znode *as_token, znode *value, znode *key )
{
 zend_op *opline;
 znode dummy, value_node;
 zend_bool assign_by_ref=0;

 opline = &(compiler_globals.active_op_array)->opcodes[as_token->u.op.opline_num];
 if (key->op_type != (1<<3)) {
  znode *tmp;


  tmp = key;
  key = value;
  value = tmp;


  opline->extended_value |= 2;
 }

 if ((key->op_type != (1<<3)) && (key->EA & (1<<5))) {
  zend_error((1<<6L), "Key element cannot be a reference");
 }

 if (value->EA & (1<<5)) {
  assign_by_ref = 1;
  if (!(opline-1)->extended_value) {
   zend_error((1<<6L), "Cannot create references to elements of a temporary array expression");
  }

  opline->extended_value |= 1;
  (compiler_globals.active_op_array)->opcodes[foreach_token->u.op.opline_num].extended_value |= (1<<1);
 } else {
  zend_op *foreach_copy;
  zend_op *fetch = &(compiler_globals.active_op_array)->opcodes[foreach_token->u.op.opline_num];
  zend_op *end = &(compiler_globals.active_op_array)->opcodes[open_brackets_token->u.op.opline_num];


  fetch->extended_value = 0;
  while (fetch != end) {
   --fetch;
   if (fetch->opcode == 84 && fetch->op2_type == (1<<3)) {
    zend_error((1<<6L), "Cannot use [] for reading");
   }
   if (fetch->opcode == 156) {
    { fetch->opcode = 0; memset(&fetch->result,0,sizeof(fetch->result)); memset(&fetch->op1,0,sizeof(fetch->op1)); memset(&fetch->op2,0,sizeof(fetch->op2)); fetch->result_type=fetch->op1_type=fetch->op2_type=(1<<3); };
   } else {
    fetch->opcode -= 3;
   }
  }

  zend_stack_top(&(compiler_globals.foreach_copy_stack), (void **) &foreach_copy);
  foreach_copy->op1_type = (1<<3);
 }

 do { (&value_node)->op_type = opline->result_type; if ((&value_node)->op_type == (1<<0)) { (&value_node)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (&value_node)->u.op = opline->result; (&value_node)->EA = 0; } } while (0);

 if (assign_by_ref) {
  zend_do_end_variable_parse(value, 1, 0 );

  zend_do_assign_ref(((void *)0), value, &value_node );
 } else {
  zend_do_assign(&dummy, value, &value_node );
  zend_do_free(&dummy );
 }

 if (key->op_type != (1<<3)) {
  znode key_node;

  opline = &(compiler_globals.active_op_array)->opcodes[as_token->u.op.opline_num+1];
  opline->result_type = (1<<1);
  opline->result.opline_num = get_temporary_variable((compiler_globals.active_op_array));
  do { (&key_node)->op_type = opline->result_type; if ((&key_node)->op_type == (1<<0)) { (&key_node)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (&key_node)->u.op = opline->result; (&key_node)->EA = 0; } } while (0);

  zend_do_assign(&dummy, key, &key_node );
  zend_do_free(&dummy );
 }

 do_begin_loop();
 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_foreach_end(const znode *foreach_token, const znode *as_token )
{
 zend_op *container_ptr;
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 42;
 opline->op1.opline_num = as_token->u.op.opline_num;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);

 (compiler_globals.active_op_array)->opcodes[foreach_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
 (compiler_globals.active_op_array)->opcodes[as_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));

 do_end_loop(as_token->u.op.opline_num, 1 );

 zend_stack_top(&(compiler_globals.foreach_copy_stack), (void **) &container_ptr);
 generate_free_foreach_copy(container_ptr );
 zend_stack_del_top(&(compiler_globals.foreach_copy_stack));

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_do_declare_begin(void)
{
 zend_stack_push(&(compiler_globals.declare_stack), &(compiler_globals.declarables), sizeof(zend_declarables));
}


void zend_do_declare_stmt(znode *var, znode *val )
{
 if (!zend_binary_strcasecmp(var->u.constant.value.str.val, var->u.constant.value.str.len, "ticks", sizeof("ticks")-1)) {
  convert_to_long(&val->u.constant);
  (compiler_globals.declarables).ticks = val->u.constant;
 } else if (!zend_binary_strcasecmp(var->u.constant.value.str.val, var->u.constant.value.str.len, "encoding", sizeof("encoding")-1)) {
  if (((val->u.constant).type & 0x00f) == 8) {
   zend_error((1<<6L), "Cannot use constants as encoding");
  }







  {
   int num = (compiler_globals.active_op_array)->last;

   while (num > 0 &&
          ((compiler_globals.active_op_array)->opcodes[num-1].opcode == 101 ||
           (compiler_globals.active_op_array)->opcodes[num-1].opcode == 105)) {
    --num;
   }

   if (num > 0) {
    zend_error((1<<6L), "Encoding declaration pragma must be the very first statement in the script");
   }
  }

  if ((compiler_globals.multibyte)) {
   const zend_encoding *new_encoding, *old_encoding;
   zend_encoding_filter old_input_filter;

   (compiler_globals.encoding_declared) = 1;

   if ((&val->u.constant)->type != 6) { _convert_to_string((&val->u.constant) ); };
   new_encoding = zend_multibyte_fetch_encoding(val->u.constant.value.str.val );
   if (!new_encoding) {
    zend_error((1<<7L), "Unsupported encoding [%s]", val->u.constant.value.str.val);
   } else {
    old_input_filter = (language_scanner_globals.input_filter);
    old_encoding = (language_scanner_globals.script_encoding);
    zend_multibyte_set_filter(new_encoding );


    if (old_input_filter != (language_scanner_globals.input_filter) ||
      (old_input_filter && new_encoding != old_encoding)) {
     zend_multibyte_yyinput_again(old_input_filter, old_encoding );
    }
   }
  } else {
   zend_error((1<<7L), "declare(encoding=...) ignored because Zend multibyte feature is turned off by settings");
  }
  _zval_dtor((&val->u.constant) );
 } else {
  zend_error((1<<7L), "Unsupported declare '%s'", var->u.constant.value.str.val);
  _zval_dtor((&val->u.constant) );
 }
 _zval_dtor((&var->u.constant) );
}


void zend_do_declare_end(const znode *declare_token )
{
 zend_declarables *declarables;

 zend_stack_top(&(compiler_globals.declare_stack), (void **) &declarables);

 if ((get_next_op_number((compiler_globals.active_op_array)) - declare_token->u.op.opline_num) - ((((compiler_globals.declarables).ticks).value.lval)?1:0)) {
  (compiler_globals.declarables) = *declarables;
 }
}


void zend_do_exit(znode *result, const znode *message )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 79;
 do { opline->op1_type = (message)->op_type; if ((message)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(message)->u.constant ); } else { opline->op1 = (message)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 result->op_type = (1<<0);
 (result->u.constant).type = 3;
 (result->u.constant).value.lval = 1;
}


void zend_do_begin_silence(znode *strudel_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 57;
 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
 do { (strudel_token)->op_type = opline->result_type; if ((strudel_token)->op_type == (1<<0)) { (strudel_token)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (strudel_token)->u.op = opline->result; (strudel_token)->EA = 0; } } while (0);
}


void zend_do_end_silence(const znode *strudel_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 58;
 do { opline->op1_type = (strudel_token)->op_type; if ((strudel_token)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(strudel_token)->u.constant ); } else { opline->op1 = (strudel_token)->u.op; } } while (0);
 opline->op2_type = (1<<3);
}


void zend_do_jmp_set(const znode *value, znode *jmp_token, znode *colon_token )
{
 int op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 if (value->op_type == (1<<2) || value->op_type == (1<<4)) {
  opline->opcode = 158;
  opline->result_type = (1<<2);
 } else {
  opline->opcode = 152;
  opline->result_type = (1<<1);
 }
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (value)->op_type; if ((value)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(value)->u.constant ); } else { opline->op1 = (value)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 do { (colon_token)->op_type = opline->result_type; if ((colon_token)->op_type == (1<<0)) { (colon_token)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (colon_token)->u.op = opline->result; (colon_token)->EA = 0; } } while (0);

 jmp_token->u.op .opline_num = op_number;

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_jmp_set_else(znode *result, const znode *false_value, const znode *jmp_token, const znode *colon_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 do { opline->result_type = (colon_token)->op_type; if ((colon_token)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(colon_token)->u.constant ); } else { opline->result = (colon_token)->u.op; } } while (0);
 if (colon_token->op_type == (1<<1)) {
  if (false_value->op_type == (1<<2) || false_value->op_type == (1<<4)) {
   (compiler_globals.active_op_array)->opcodes[jmp_token->u.op.opline_num].opcode = 158;
   (compiler_globals.active_op_array)->opcodes[jmp_token->u.op.opline_num].result_type = (1<<2);
   opline->opcode = 157;
   opline->result_type = (1<<2);
  } else {
   opline->opcode = 22;
  }
 } else {
  opline->opcode = 157;
 }
 opline->extended_value = 0;
 do { opline->op1_type = (false_value)->op_type; if ((false_value)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(false_value)->u.constant ); } else { opline->op1 = (false_value)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);

 (compiler_globals.active_op_array)->opcodes[jmp_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array));

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_do_begin_qm_op(const znode *cond, znode *qm_token )
{
 int jmpz_op_number = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline;

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 43;
 do { opline->op1_type = (cond)->op_type; if ((cond)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(cond)->u.constant ); } else { opline->op1 = (cond)->u.op; } } while (0);
 opline->op2_type = (1<<3);
 opline->op2.opline_num = jmpz_op_number;
 do { (qm_token)->op_type = opline->op2_type; if ((qm_token)->op_type == (1<<0)) { (qm_token)->u.constant = ((compiler_globals.active_op_array))->literals[opline->op2.constant].constant; } else { (qm_token)->u.op = opline->op2; (qm_token)->EA = 0; } } while (0);

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
}


void zend_do_qm_true(const znode *true_value, znode *qm_token, znode *colon_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 (compiler_globals.active_op_array)->opcodes[qm_token->u.op.opline_num].op2.opline_num = get_next_op_number((compiler_globals.active_op_array))+1;

 if (true_value->op_type == (1<<2) || true_value->op_type == (1<<4)) {
  opline->opcode = 157;
  opline->result_type = (1<<2);
 } else {
  opline->opcode = 22;
  opline->result_type = (1<<1);
 }
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { opline->op1_type = (true_value)->op_type; if ((true_value)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(true_value)->u.constant ); } else { opline->op1 = (true_value)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 do { (qm_token)->op_type = opline->result_type; if ((qm_token)->op_type == (1<<0)) { (qm_token)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (qm_token)->u.op = opline->result; (qm_token)->EA = 0; } } while (0);
 colon_token->u.op.opline_num = get_next_op_number((compiler_globals.active_op_array));

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 42;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_qm_false(znode *result, const znode *false_value, const znode *qm_token, const znode *colon_token )
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 do { opline->result_type = (qm_token)->op_type; if ((qm_token)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(qm_token)->u.constant ); } else { opline->result = (qm_token)->u.op; } } while (0);
 if (qm_token->op_type == (1<<1)) {
  if (false_value->op_type == (1<<2) || false_value->op_type == (1<<4)) {
   (compiler_globals.active_op_array)->opcodes[colon_token->u.op.opline_num - 1].opcode = 157;
   (compiler_globals.active_op_array)->opcodes[colon_token->u.op.opline_num - 1].result_type = (1<<2);
   opline->opcode = 157;
   opline->result_type = (1<<2);
  } else {
   opline->opcode = 22;
  }
 } else {
  opline->opcode = 157;
 }
 do { opline->op1_type = (false_value)->op_type; if ((false_value)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(false_value)->u.constant ); } else { opline->op1 = (false_value)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 (compiler_globals.active_op_array)->opcodes[colon_token->u.op.opline_num].op1.opline_num = get_next_op_number((compiler_globals.active_op_array));

 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant].constant; } else { (result)->u.op = opline->result; (result)->EA = 0; } } while (0);

 if ((compiler_globals.active_op_array)->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
}


void zend_do_extended_info(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 101;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_extended_fcall_begin(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 102;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_extended_fcall_end(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 103;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_ticks(void)
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 105;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
 opline->extended_value = ((compiler_globals.declarables).ticks).value.lval;
}


zend_bool zend_is_auto_global_quick(const char *name, uint name_len, ulong hashval )
{
 zend_auto_global *auto_global;
 ulong hash = hashval ? hashval : zend_hash_func(name, name_len+1);

 if (zend_hash_quick_find((compiler_globals.auto_globals), name, name_len+1, hash, (void **) &auto_global)==0) {
  if (auto_global->armed) {
   auto_global->armed = auto_global->auto_global_callback(auto_global->name, auto_global->name_len );
  }
  return 1;
 }
 return 0;
}


zend_bool zend_is_auto_global(const char *name, uint name_len )
{
 return zend_is_auto_global_quick(name, name_len, 0 );
}


int zend_register_auto_global(const char *name, uint name_len, zend_bool jit, zend_auto_global_callback auto_global_callback )
{
 zend_auto_global auto_global;

 auto_global.name = zend_new_interned_string((char*)name, name_len + 1, 0 );
 auto_global.name_len = name_len;
 auto_global.auto_global_callback = auto_global_callback;
 auto_global.jit = jit;

 return _zend_hash_add_or_update((compiler_globals.auto_globals), name, name_len+1, &auto_global, sizeof(zend_auto_global), ((void *)0), (1<<1) );
}


static int zend_auto_global_init(zend_auto_global *auto_global )
{
 if (auto_global->jit) {
  auto_global->armed = 1;
 } else if (auto_global->auto_global_callback) {
  auto_global->armed = auto_global->auto_global_callback(auto_global->name, auto_global->name_len );
 } else {
  auto_global->armed = 0;
 }
 return 0;
}


__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void)
{
 zend_hash_apply((compiler_globals.auto_globals), (apply_func_t) zend_auto_global_init );
}


int zendlex(znode *zendlval )
{
 int retval;

 if ((compiler_globals.increment_lineno)) {
  (compiler_globals.zend_lineno)++;
  (compiler_globals.increment_lineno) = 0;
 }

again:
 (zendlval->u.constant).type = 1;
 retval = lex_scan(&zendlval->u.constant );
 switch (retval) {
  case 370:
  case 371:
  case 372:
  case 375:
   goto again;

  case 374:
   if ((language_scanner_globals.yy_text)[(language_scanner_globals.yy_leng)-1] != '>') {
    (compiler_globals.increment_lineno) = 1;
   }
   if ((compiler_globals.has_bracketed_namespaces) && !(compiler_globals.in_namespace)) {
    goto again;
   }
   retval = ';';
   break;
  case 373:
   retval = 316;
   break;
  case 377:
   _efree(((zendlval->u.constant).value.str.val) );
   break;
 }

 (&zendlval->u.constant)->refcount__gc = 1; (&zendlval->u.constant)->is_ref__gc = 0;;
 zendlval->op_type = (1<<0);
 return retval;
}


__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers )
{
 zend_bool persistent_hashes = (ce->type == 1) ? 1 : 0;
 dtor_func_t zval_ptr_dtor_func = ((persistent_hashes) ? (void (*)(void *)) _zval_internal_ptr_dtor : (void (*)(void *)) _zval_ptr_dtor);

 ce->refcount = 1;
 ce->ce_flags = 0;

 ce->default_properties_table = ((void *)0);
 ce->default_static_members_table = ((void *)0);
 _zend_hash_init_ex((&ce->properties_info), (0), (((void *)0)), ((dtor_func_t) (persistent_hashes ? zend_destroy_property_info_internal : zend_destroy_property_info)), (persistent_hashes), (0) );
 _zend_hash_init_ex((&ce->constants_table), (0), (((void *)0)), (zval_ptr_dtor_func), (persistent_hashes), (0) );
 _zend_hash_init_ex((&ce->function_table), (0), (((void *)0)), ((void (*)(void *)) zend_function_dtor), (persistent_hashes), (0) );

 if (ce->type == 1) {
# 6774 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
  ce->static_members_table = ((void *)0);

 } else {
  ce->static_members_table = ce->default_static_members_table;
  ce->info.user.doc_comment = ((void *)0);
  ce->info.user.doc_comment_len = 0;
 }

 ce->default_properties_count = 0;
 ce->default_static_members_count = 0;

 if (nullify_handlers) {
  ce->constructor = ((void *)0);
  ce->destructor = ((void *)0);
  ce->clone = ((void *)0);
  ce->__get = ((void *)0);
  ce->__set = ((void *)0);
  ce->__unset = ((void *)0);
  ce->__isset = ((void *)0);
  ce->__call = ((void *)0);
  ce->__callstatic = ((void *)0);
  ce->__tostring = ((void *)0);
  ce->create_object = ((void *)0);
  ce->get_iterator = ((void *)0);
  ce->iterator_funcs.funcs = ((void *)0);
  ce->interface_gets_implemented = ((void *)0);
  ce->get_static_method = ((void *)0);
  ce->parent = ((void *)0);
  ce->num_interfaces = 0;
  ce->interfaces = ((void *)0);
  ce->num_traits = 0;
  ce->traits = ((void *)0);
  ce->trait_aliases = ((void *)0);
  ce->trait_precedences = ((void *)0);
  ce->serialize = ((void *)0);
  ce->unserialize = ((void *)0);
  ce->serialize_func = ((void *)0);
  ce->unserialize_func = ((void *)0);
  if (ce->type == 1) {
   ce->info.internal.module = ((void *)0);
   ce->info.internal.builtin_functions = ((void *)0);
  }
 }
}


int zend_get_class_fetch_type(const char *class_name, uint class_name_len)
{
 if ((class_name_len == sizeof("self")-1) &&
  !memcmp(class_name, "self", sizeof("self")-1)) {
  return 1;
 } else if ((class_name_len == sizeof("parent")-1) &&
  !memcmp(class_name, "parent", sizeof("parent")-1)) {
  return 2;
 } else if ((class_name_len == sizeof("static")-1) &&
  !memcmp(class_name, "static", sizeof("static")-1)) {
  return 7;
 } else {
  return 0;
 }
}


__attribute__ ((visibility("default"))) const char* zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var, int* name_len)
{
 if (name_len) {
  *name_len = op_array->vars[var].name_len;
 }
 return op_array->vars[var].name;
}


void zend_do_build_namespace_name(znode *result, znode *prefix, znode *name )
{
 if (prefix) {
  *result = *prefix;
  if ((result->u.constant).type == 6 &&
      (result->u.constant).value.str.len == 0) {

   if ((compiler_globals.current_namespace)) {
    znode tmp;

    _zval_dtor((&result->u.constant) );
    tmp.op_type = (1<<0);
    tmp.u.constant = *(compiler_globals.current_namespace);
    _zval_copy_ctor((&tmp.u.constant) );
    zend_do_build_namespace_name(result, ((void *)0), &tmp );
   }
  }
 } else {
  result->op_type = (1<<0);
  (result->u.constant).type = 6;
  (result->u.constant).value.str.val = ((void *)0);
  (result->u.constant).value.str.len = 0;
 }

 zend_do_build_full_name(((void *)0), result, name, 0 );
}


void zend_do_begin_namespace(const znode *name, zend_bool with_bracket )
{
 char *lcname;


 if (!(compiler_globals.has_bracketed_namespaces)) {
  if ((compiler_globals.current_namespace)) {

   if (with_bracket) {
    zend_error((1<<6L), "Cannot mix bracketed namespace declarations with unbracketed namespace declarations");
   }
  }
 } else {

  if (!with_bracket) {
   zend_error((1<<6L), "Cannot mix bracketed namespace declarations with unbracketed namespace declarations");
  } else if ((compiler_globals.current_namespace) || (compiler_globals.in_namespace)) {
   zend_error((1<<6L), "Namespace declarations cannot be nested");
  }
 }

 if (((!with_bracket && !(compiler_globals.current_namespace)) || (with_bracket && !(compiler_globals.has_bracketed_namespaces))) && (compiler_globals.active_op_array)->last > 0) {

  int num = (compiler_globals.active_op_array)->last;
  while (num > 0 &&
         ((compiler_globals.active_op_array)->opcodes[num-1].opcode == 101 ||
          (compiler_globals.active_op_array)->opcodes[num-1].opcode == 105)) {
   --num;
  }
  if (num > 0) {
   zend_error((1<<6L), "Namespace declaration statement has to be the very first statement in the script");
  }
 }

 (compiler_globals.in_namespace) = 1;
 if (with_bracket) {
  (compiler_globals.has_bracketed_namespaces) = 1;
 }

 if (name) {
  lcname = zend_str_tolower_dup((name->u.constant).value.str.val, (name->u.constant).value.str.len);
  if ((((name->u.constant).value.str.len == sizeof("self")-1) &&
        !memcmp(lcname, "self", sizeof("self")-1)) ||
      (((name->u.constant).value.str.len == sizeof("parent")-1) &&
           !memcmp(lcname, "parent", sizeof("parent")-1))) {
   zend_error((1<<6L), "Cannot use '%s' as namespace name", (name->u.constant).value.str.val);
  }
  _efree((lcname) );

  if ((compiler_globals.current_namespace)) {
   _zval_dtor(((compiler_globals.current_namespace)) );
  } else {
   do { ((compiler_globals.current_namespace)) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)((compiler_globals.current_namespace)))->u.buffered = ((void *)0); } while (0);
  }
  *(compiler_globals.current_namespace) = name->u.constant;
 } else {
  if ((compiler_globals.current_namespace)) {
   _zval_dtor(((compiler_globals.current_namespace)) );
   do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)(compiler_globals.current_namespace))->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer((compiler_globals.current_namespace) ); }; _efree(((compiler_globals.current_namespace)) ); } while (0);
   (compiler_globals.current_namespace) = ((void *)0);
  }
 }

 if ((compiler_globals.current_import)) {
  zend_hash_destroy((compiler_globals.current_import));
  _efree(((compiler_globals.current_import)) );
  (compiler_globals.current_import) = ((void *)0);
 }

 if ((compiler_globals.doc_comment)) {
  _efree(((compiler_globals.doc_comment)) );
  (compiler_globals.doc_comment) = ((void *)0);
  (compiler_globals.doc_comment_len) = 0;
 }
}


void zend_do_use(znode *ns_name, znode *new_name, int is_global )
{
 char *lcname;
 zval *name, *ns, tmp;
 zend_bool warn = 0;
 zend_class_entry **pce;

 if (!(compiler_globals.current_import)) {
  (compiler_globals.current_import) = _emalloc((sizeof(HashTable)) );
  _zend_hash_init(((compiler_globals.current_import)), (0), (((void *)0)), ((void (*)(void *)) _zval_ptr_dtor), (0) );
 }

 do { (ns) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(ns))->u.buffered = ((void *)0); } while (0);
 *ns = ns_name->u.constant;
 if (new_name) {
  name = &new_name->u.constant;
 } else {
  const char *p;



  name = &tmp;
  p = zend_memrchr((*ns).value.str.val, '\\', (*ns).value.str.len);
  if (p) {
   do { const char *__s=(p+1); zval *__z = (name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
  } else {
   *name = *ns;
   _zval_copy_ctor((name) );
   warn = !is_global && !(compiler_globals.current_namespace);
  }
 }

 lcname = zend_str_tolower_dup((*name).value.str.val, (*name).value.str.len);

 if ((((*name).value.str.len == sizeof("self")-1) &&
          !memcmp(lcname, "self", sizeof("self")-1)) ||
     (((*name).value.str.len == sizeof("parent")-1) &&
          !memcmp(lcname, "parent", sizeof("parent")-1))) {
  zend_error((1<<6L), "Cannot use %s as %s because '%s' is a special class name", (*ns).value.str.val, (*name).value.str.val, (*name).value.str.val);
 }

 if ((compiler_globals.current_namespace)) {

  char *c_ns_name = _emalloc(((*(compiler_globals.current_namespace)).value.str.len + 1 + (*name).value.str.len + 1) );

  zend_str_tolower_copy(c_ns_name, (*(compiler_globals.current_namespace)).value.str.val, (*(compiler_globals.current_namespace)).value.str.len);
  c_ns_name[(*(compiler_globals.current_namespace)).value.str.len] = '\\';
  memcpy(c_ns_name+(*(compiler_globals.current_namespace)).value.str.len+1, lcname, (*name).value.str.len+1);
  if (zend_hash_exists((compiler_globals.class_table), c_ns_name, (*(compiler_globals.current_namespace)).value.str.len + 1 + (*name).value.str.len+1)) {
   char *tmp2 = zend_str_tolower_dup((*ns).value.str.val, (*ns).value.str.len);

   if ((*ns).value.str.len != (*(compiler_globals.current_namespace)).value.str.len + 1 + (*name).value.str.len ||
    memcmp(tmp2, c_ns_name, (*ns).value.str.len)) {
    zend_error((1<<6L), "Cannot use %s as %s because the name is already in use", (*ns).value.str.val, (*name).value.str.val);
   }
   _efree((tmp2) );
  }
  _efree((c_ns_name) );
 } else if (zend_hash_find((compiler_globals.class_table), lcname, (*name).value.str.len+1, (void**)&pce) == 0 &&
            (*pce)->type == 2 &&
            (*pce)->info.user.filename == (compiler_globals.compiled_filename)) {
  char *c_tmp = zend_str_tolower_dup((*ns).value.str.val, (*ns).value.str.len);

  if ((*ns).value.str.len != (*name).value.str.len ||
   memcmp(c_tmp, lcname, (*ns).value.str.len)) {
   zend_error((1<<6L), "Cannot use %s as %s because the name is already in use", (*ns).value.str.val, (*name).value.str.val);
  }
  _efree((c_tmp) );
 }

 if (_zend_hash_add_or_update((compiler_globals.current_import), lcname, (*name).value.str.len+1, &ns, sizeof(zval*), ((void *)0), (1<<1) ) != 0) {
  zend_error((1<<6L), "Cannot use %s as %s because the name is already in use", (*ns).value.str.val, (*name).value.str.val);
 }
 if (warn) {
  if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p ((*name).value.str.val) && __builtin_constant_p ("strict") && (__s1_len = strlen ((*name).value.str.val), __s2_len = strlen ("strict"), (!((size_t)(const void *)(((*name).value.str.val) + 1) - (size_t)(const void *)((*name).value.str.val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("strict") + 1) - (size_t)(const void *)("strict") == 1) || __s2_len >= 4)) ? __builtin_strcmp ((*name).value.str.val, "strict") : (__builtin_constant_p ((*name).value.str.val) && ((size_t)(const void *)(((*name).value.str.val) + 1) - (size_t)(const void *)((*name).value.str.val) == 1) && (__s1_len = strlen ((*name).value.str.val), __s1_len < 4) ? (__builtin_constant_p ("strict") && ((size_t)(const void *)(("strict") + 1) - (size_t)(const void *)("strict") == 1) ? __builtin_strcmp ((*name).value.str.val, "strict") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("strict"); register int __result = (((__const unsigned char *) (__const char *) ((*name).value.str.val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) ((*name).value.str.val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) ((*name).value.str.val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) ((*name).value.str.val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("strict") && ((size_t)(const void *)(("strict") + 1) - (size_t)(const void *)("strict") == 1) && (__s2_len = strlen ("strict"), __s2_len < 4) ? (__builtin_constant_p ((*name).value.str.val) && ((size_t)(const void *)(((*name).value.str.val) + 1) - (size_t)(const void *)((*name).value.str.val) == 1) ? __builtin_strcmp ((*name).value.str.val, "strict") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) ((*name).value.str.val); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("strict"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("strict"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("strict"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("strict"))[3]); } } __result; }))) : __builtin_strcmp ((*name).value.str.val, "strict")))); })) {
   zend_error((1<<6L), "You seem to be trying to use a different language...");
  }
  zend_error((1<<1L), "The use statement with non-compound name '%s' has no effect", (*name).value.str.val);
 }
 _efree((lcname) );
 _zval_dtor((name) );
}


void zend_do_declare_constant(znode *name, znode *value )
{
 zend_op *opline;

 if((value->u.constant).type == 9) {
  zend_error((1<<6L), "Arrays are not allowed as constants");
 }

 if (zend_get_ct_const(&name->u.constant, 0 )) {
  zend_error((1<<6L), "Cannot redeclare constant '%s'", (name->u.constant).value.str.val);
 }

 if ((compiler_globals.current_namespace)) {

  znode tmp;

  tmp.op_type = (1<<0);
  tmp.u.constant = *(compiler_globals.current_namespace);
  (tmp.u.constant).value.str.val = zend_str_tolower_dup((tmp.u.constant).value.str.val, (tmp.u.constant).value.str.len);
  zend_do_build_namespace_name(&tmp, &tmp, name );
  *name = tmp;
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 143;
 opline->result_type = (1<<3);
 do { opline->op1_type = (name)->op_type; if ((name)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(name)->u.constant ); } else { opline->op1 = (name)->u.op; } } while (0);
 do { opline->op2_type = (value)->op_type; if ((value)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(value)->u.constant ); } else { opline->op2 = (value)->u.op; } } while (0);
}


void zend_verify_namespace(void)
{
 if ((compiler_globals.has_bracketed_namespaces) && !(compiler_globals.in_namespace)) {
  zend_error((1<<6L), "No code may exist outside of namespace {}");
 }
}


void zend_do_end_namespace(void)
{
 (compiler_globals.in_namespace) = 0;
 if ((compiler_globals.current_namespace)) {
  _zval_dtor(((compiler_globals.current_namespace)) );
  do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)(compiler_globals.current_namespace))->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer((compiler_globals.current_namespace) ); }; _efree(((compiler_globals.current_namespace)) ); } while (0);
  (compiler_globals.current_namespace) = ((void *)0);
 }
 if ((compiler_globals.current_import)) {
  zend_hash_destroy((compiler_globals.current_import));
  _efree(((compiler_globals.current_import)) );
  (compiler_globals.current_import) = ((void *)0);
 }
}


void zend_do_end_compilation(void)
{
 (compiler_globals.has_bracketed_namespaces) = 0;
 zend_do_end_namespace();
}




__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len)
{
 register char *end = path + len - 1;
 unsigned int len_adjust = 0;
# 7138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
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
# 7170 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-51a4ae6576-bc810a443d/php/Zend/zend_compile.c"
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
