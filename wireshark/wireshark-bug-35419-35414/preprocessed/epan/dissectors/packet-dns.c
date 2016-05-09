# 1 "packet-dns.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/wireshark-bug-35419-35414/wireshark/epan/dissectors//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "packet-dns.c"
# 35 "packet-dns.c"
# 1 "../../config.h" 1
# 36 "packet-dns.c" 2


# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
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
# 28 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
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
# 52 "/usr/include/bits/string2.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 53 "/usr/include/bits/string2.h" 2 3 4
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
# 54 "/usr/include/bits/string2.h" 2 3 4
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
# 1298 "/usr/include/bits/string2.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4


# 469 "/usr/include/stdlib.h" 3 4


extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

# 964 "/usr/include/stdlib.h" 3 4

# 1299 "/usr/include/bits/string2.h" 2 3 4




extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 1322 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 638 "/usr/include/string.h" 2 3 4
# 646 "/usr/include/string.h" 3 4

# 39 "packet-dns.c" 2
# 1 "/usr/include/memory.h" 1 3 4
# 40 "packet-dns.c" 2

# 1 "/usr/include/glib-2.0/glib.h" 1
# 32 "/usr/include/glib-2.0/glib.h"
# 1 "/usr/include/glib-2.0/glib/galloca.h" 1
# 34 "/usr/include/glib-2.0/glib/galloca.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 34 "/usr/include/glib-2.0/glib/gtypes.h"
# 1 "/usr/lib/glib-2.0/include/glibconfig.h" 1
# 9 "/usr/lib/glib-2.0/include/glibconfig.h"
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 40 "/usr/include/glib-2.0/glib/gmacros.h"
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 323 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef long int wchar_t;
# 41 "/usr/include/glib-2.0/glib/gmacros.h" 2
# 10 "/usr/lib/glib-2.0/include/glibconfig.h" 2

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
# 123 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 12 "/usr/lib/glib-2.0/include/glibconfig.h" 2
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/float.h" 1 3 4
# 13 "/usr/lib/glib-2.0/include/glibconfig.h" 2
# 22 "/usr/lib/glib-2.0/include/glibconfig.h"

# 38 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef signed char gint8;
typedef unsigned char guint8;
typedef signed short gint16;
typedef unsigned short guint16;



typedef signed int gint32;
typedef unsigned int guint32;





__extension__ typedef signed long long gint64;
__extension__ typedef unsigned long long guint64;
# 65 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef signed int gssize;
typedef unsigned int gsize;
# 75 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef gint64 goffset;
# 90 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef signed int gintptr;
typedef unsigned int guintptr;
# 159 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef struct _GStaticMutex GStaticMutex;
struct _GStaticMutex
{
  struct _GMutex *runtime_mutex;
  union {
    char pad[24];
    double dummy_double;
    void *dummy_pointer;
    long dummy_long;
  } static_mutex;
};
# 178 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef union _GSystemThread GSystemThread;
union _GSystemThread
{
  char data[4];
  double dummy_double;
  void *dummy_pointer;
  long dummy_long;
};
# 231 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef int GPid;
# 241 "/usr/lib/glib-2.0/include/glibconfig.h"

# 35 "/usr/include/glib-2.0/glib/gtypes.h" 2
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 36 "/usr/include/glib-2.0/glib/gtypes.h" 2


# 46 "/usr/include/glib-2.0/glib/gtypes.h"
typedef char gchar;
typedef short gshort;
typedef long glong;
typedef int gint;
typedef gint gboolean;

typedef unsigned char guchar;
typedef unsigned short gushort;
typedef unsigned long gulong;
typedef unsigned int guint;

typedef float gfloat;
typedef double gdouble;
# 77 "/usr/include/glib-2.0/glib/gtypes.h"
typedef void* gpointer;
typedef const void *gconstpointer;

typedef gint (*GCompareFunc) (gconstpointer a,
                                                 gconstpointer b);
typedef gint (*GCompareDataFunc) (gconstpointer a,
                                                 gconstpointer b,
       gpointer user_data);
typedef gboolean (*GEqualFunc) (gconstpointer a,
                                                 gconstpointer b);
typedef void (*GDestroyNotify) (gpointer data);
typedef void (*GFunc) (gpointer data,
                                                 gpointer user_data);
typedef guint (*GHashFunc) (gconstpointer key);
typedef void (*GHFunc) (gpointer key,
                                                 gpointer value,
                                                 gpointer user_data);
typedef void (*GFreeFunc) (gpointer data);
# 108 "/usr/include/glib-2.0/glib/gtypes.h"
typedef const gchar * (*GTranslateFunc) (const gchar *str,
       gpointer data);
# 368 "/usr/include/glib-2.0/glib/gtypes.h"
typedef union _GDoubleIEEE754 GDoubleIEEE754;
typedef union _GFloatIEEE754 GFloatIEEE754;





union _GFloatIEEE754
{
  gfloat v_float;
  struct {
    guint mantissa : 23;
    guint biased_exponent : 8;
    guint sign : 1;
  } mpn;
};
union _GDoubleIEEE754
{
  gdouble v_double;
  struct {
    guint mantissa_low : 32;
    guint mantissa_high : 20;
    guint biased_exponent : 11;
    guint sign : 1;
  } mpn;
};
# 418 "/usr/include/glib-2.0/glib/gtypes.h"
typedef struct _GTimeVal GTimeVal;

struct _GTimeVal
{
  glong tv_sec;
  glong tv_usec;
};


# 35 "/usr/include/glib-2.0/glib/galloca.h" 2
# 33 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/garray.h" 1
# 34 "/usr/include/glib-2.0/glib/garray.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/garray.h" 2



typedef struct _GArray GArray;
typedef struct _GByteArray GByteArray;
typedef struct _GPtrArray GPtrArray;

struct _GArray
{
  gchar *data;
  guint len;
};

struct _GByteArray
{
  guint8 *data;
  guint len;
};

struct _GPtrArray
{
  gpointer *pdata;
  guint len;
};
# 70 "/usr/include/glib-2.0/glib/garray.h"
GArray* g_array_new (gboolean zero_terminated,
       gboolean clear_,
       guint element_size);
GArray* g_array_sized_new (gboolean zero_terminated,
       gboolean clear_,
       guint element_size,
       guint reserved_size);
gchar* g_array_free (GArray *array,
       gboolean free_segment);
GArray *g_array_ref (GArray *array);
void g_array_unref (GArray *array);
guint g_array_get_element_size (GArray *array);
GArray* g_array_append_vals (GArray *array,
       gconstpointer data,
       guint len);
GArray* g_array_prepend_vals (GArray *array,
       gconstpointer data,
       guint len);
GArray* g_array_insert_vals (GArray *array,
       guint index_,
       gconstpointer data,
       guint len);
GArray* g_array_set_size (GArray *array,
       guint length);
GArray* g_array_remove_index (GArray *array,
       guint index_);
GArray* g_array_remove_index_fast (GArray *array,
       guint index_);
GArray* g_array_remove_range (GArray *array,
       guint index_,
       guint length);
void g_array_sort (GArray *array,
       GCompareFunc compare_func);
void g_array_sort_with_data (GArray *array,
       GCompareDataFunc compare_func,
       gpointer user_data);






GPtrArray* g_ptr_array_new (void);
GPtrArray* g_ptr_array_new_with_free_func (GDestroyNotify element_free_func);
GPtrArray* g_ptr_array_sized_new (guint reserved_size);
gpointer* g_ptr_array_free (GPtrArray *array,
        gboolean free_seg);
GPtrArray* g_ptr_array_ref (GPtrArray *array);
void g_ptr_array_unref (GPtrArray *array);
void g_ptr_array_set_free_func (GPtrArray *array,
                                           GDestroyNotify element_free_func);
void g_ptr_array_set_size (GPtrArray *array,
        gint length);
gpointer g_ptr_array_remove_index (GPtrArray *array,
        guint index_);
gpointer g_ptr_array_remove_index_fast (GPtrArray *array,
        guint index_);
gboolean g_ptr_array_remove (GPtrArray *array,
        gpointer data);
gboolean g_ptr_array_remove_fast (GPtrArray *array,
        gpointer data);
void g_ptr_array_remove_range (GPtrArray *array,
        guint index_,
        guint length);
void g_ptr_array_add (GPtrArray *array,
        gpointer data);
void g_ptr_array_sort (GPtrArray *array,
        GCompareFunc compare_func);
void g_ptr_array_sort_with_data (GPtrArray *array,
        GCompareDataFunc compare_func,
        gpointer user_data);
void g_ptr_array_foreach (GPtrArray *array,
        GFunc func,
        gpointer user_data);






GByteArray* g_byte_array_new (void);
GByteArray* g_byte_array_sized_new (guint reserved_size);
guint8* g_byte_array_free (GByteArray *array,
         gboolean free_segment);
GByteArray *g_byte_array_ref (GByteArray *array);
void g_byte_array_unref (GByteArray *array);
GByteArray* g_byte_array_append (GByteArray *array,
         const guint8 *data,
         guint len);
GByteArray* g_byte_array_prepend (GByteArray *array,
         const guint8 *data,
         guint len);
GByteArray* g_byte_array_set_size (GByteArray *array,
         guint length);
GByteArray* g_byte_array_remove_index (GByteArray *array,
         guint index_);
GByteArray* g_byte_array_remove_index_fast (GByteArray *array,
         guint index_);
GByteArray* g_byte_array_remove_range (GByteArray *array,
         guint index_,
         guint length);
void g_byte_array_sort (GByteArray *array,
         GCompareFunc compare_func);
void g_byte_array_sort_with_data (GByteArray *array,
         GCompareDataFunc compare_func,
         gpointer user_data);


# 34 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gasyncqueue.h" 1
# 34 "/usr/include/glib-2.0/glib/gasyncqueue.h"
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 34 "/usr/include/glib-2.0/glib/gthread.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 28 "/usr/include/glib-2.0/glib/gerror.h"
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 29 "/usr/include/glib-2.0/glib/gerror.h" 2

# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 34 "/usr/include/glib-2.0/glib/gquark.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gquark.h" 2



typedef guint32 GQuark;



GQuark g_quark_try_string (const gchar *string);
GQuark g_quark_from_static_string (const gchar *string);
GQuark g_quark_from_string (const gchar *string);
const gchar* g_quark_to_string (GQuark quark) __attribute__((__const__));

const gchar* g_intern_string (const gchar *string);
const gchar* g_intern_static_string (const gchar *string);


# 31 "/usr/include/glib-2.0/glib/gerror.h" 2



typedef struct _GError GError;

struct _GError
{
  GQuark domain;
  gint code;
  gchar *message;
};

GError* g_error_new (GQuark domain,
                                gint code,
                                const gchar *format,
                                ...) __attribute__((__format__ (__printf__, 3, 4)));

GError* g_error_new_literal (GQuark domain,
                                gint code,
                                const gchar *message);
GError* g_error_new_valist (GQuark domain,
                                gint code,
                                const gchar *format,
                                va_list args);

void g_error_free (GError *error);
GError* g_error_copy (const GError *error);

gboolean g_error_matches (const GError *error,
                                GQuark domain,
                                gint code);




void g_set_error (GError **err,
                                GQuark domain,
                                gint code,
                                const gchar *format,
                                ...) __attribute__((__format__ (__printf__, 4, 5)));

void g_set_error_literal (GError **err,
                                GQuark domain,
                                gint code,
                                const gchar *message);



void g_propagate_error (GError **dest,
    GError *src);


void g_clear_error (GError **err);


void g_prefix_error (GError **err,
                                       const gchar *format,
                                       ...) __attribute__((__format__ (__printf__, 2, 3)));


void g_propagate_prefixed_error (GError **dest,
                                       GError *src,
                                       const gchar *format,
                                       ...) __attribute__((__format__ (__printf__, 3, 4)));


# 35 "/usr/include/glib-2.0/glib/gthread.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 36 "/usr/include/glib-2.0/glib/gthread.h" 2
# 1 "/usr/include/glib-2.0/glib/gutils.h" 1
# 34 "/usr/include/glib-2.0/glib/gutils.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gutils.h" 2



# 120 "/usr/include/glib-2.0/glib/gutils.h"
const gchar* g_get_user_name (void);
const gchar* g_get_real_name (void);
const gchar* g_get_home_dir (void);
const gchar* g_get_tmp_dir (void);
const gchar* g_get_host_name (void);
gchar* g_get_prgname (void);
void g_set_prgname (const gchar *prgname);
const gchar* g_get_application_name (void);
void g_set_application_name (const gchar *application_name);

void g_reload_user_special_dirs_cache (void);
const gchar* g_get_user_data_dir (void);
const gchar* g_get_user_config_dir (void);
const gchar* g_get_user_cache_dir (void);
const gchar* const * g_get_system_data_dirs (void);
# 154 "/usr/include/glib-2.0/glib/gutils.h"
const gchar* const * g_get_system_config_dirs (void);

const gchar* const * g_get_language_names (void);
# 180 "/usr/include/glib-2.0/glib/gutils.h"
typedef enum {
  G_USER_DIRECTORY_DESKTOP,
  G_USER_DIRECTORY_DOCUMENTS,
  G_USER_DIRECTORY_DOWNLOAD,
  G_USER_DIRECTORY_MUSIC,
  G_USER_DIRECTORY_PICTURES,
  G_USER_DIRECTORY_PUBLIC_SHARE,
  G_USER_DIRECTORY_TEMPLATES,
  G_USER_DIRECTORY_VIDEOS,

  G_USER_N_DIRECTORIES
} GUserDirectory;

const gchar* g_get_user_special_dir (GUserDirectory directory);

typedef struct _GDebugKey GDebugKey;
struct _GDebugKey
{
  const gchar *key;
  guint value;
};



guint g_parse_debug_string (const gchar *string,
         const GDebugKey *keys,
         guint nkeys);

gint g_snprintf (gchar *string,
         gulong n,
         gchar const *format,
         ...) __attribute__((__format__ (__printf__, 3, 4)));
gint g_vsnprintf (gchar *string,
         gulong n,
         gchar const *format,
         va_list args);


gboolean g_path_is_absolute (const gchar *file_name);


const gchar* g_path_skip_root (const gchar *file_name);







const gchar* g_basename (const gchar *file_name);
# 239 "/usr/include/glib-2.0/glib/gutils.h"
gchar* g_get_current_dir (void);
gchar* g_path_get_basename (const gchar *file_name) __attribute__((__malloc__));
gchar* g_path_get_dirname (const gchar *file_name) __attribute__((__malloc__));


void g_nullify_pointer (gpointer *nullify_location);
# 255 "/usr/include/glib-2.0/glib/gutils.h"
const gchar* g_getenv (const gchar *variable);
gboolean g_setenv (const gchar *variable,
         const gchar *value,
         gboolean overwrite);
void g_unsetenv (const gchar *variable);
gchar** g_listenv (void);


const gchar* _g_getenv_nomalloc (const gchar *variable,
         gchar buffer[1024]);





typedef void (*GVoidFunc) (void);
# 281 "/usr/include/glib-2.0/glib/gutils.h"
void g_atexit (GVoidFunc func);
# 297 "/usr/include/glib-2.0/glib/gutils.h"
gchar* g_find_program_in_path (const gchar *program);



static __inline __attribute__ ((unused)) gint g_bit_nth_lsf (gulong mask,
           gint nth_bit) __attribute__((__const__));
static __inline __attribute__ ((unused)) gint g_bit_nth_msf (gulong mask,
           gint nth_bit) __attribute__((__const__));
static __inline __attribute__ ((unused)) guint g_bit_storage (gulong number) __attribute__((__const__));




typedef struct _GTrashStack GTrashStack;
struct _GTrashStack
{
  GTrashStack *next;
};

static __inline __attribute__ ((unused)) void g_trash_stack_push (GTrashStack **stack_p,
       gpointer data_p);
static __inline __attribute__ ((unused)) gpointer g_trash_stack_pop (GTrashStack **stack_p);
static __inline __attribute__ ((unused)) gpointer g_trash_stack_peek (GTrashStack **stack_p);
static __inline __attribute__ ((unused)) guint g_trash_stack_height (GTrashStack **stack_p);




static __inline __attribute__ ((unused)) gint
g_bit_nth_lsf (gulong mask,
        gint nth_bit)
{
  if ((__builtin_expect (__extension__ ({ int _g_boolean_var_; if (nth_bit < -1) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 0)))
    nth_bit = -1;
  while (nth_bit < ((4 * 8) - 1))
    {
      nth_bit++;
      if (mask & (1UL << nth_bit))
 return nth_bit;
    }
  return -1;
}
static __inline __attribute__ ((unused)) gint
g_bit_nth_msf (gulong mask,
        gint nth_bit)
{
  if (nth_bit < 0 || (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (nth_bit > 4 * 8) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 0)))
    nth_bit = 4 * 8;
  while (nth_bit > 0)
    {
      nth_bit--;
      if (mask & (1UL << nth_bit))
 return nth_bit;
    }
  return -1;
}
static __inline __attribute__ ((unused)) guint
g_bit_storage (gulong number)
{

  return (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (number) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) ?
    ((4 * 8 - 1) ^ __builtin_clzl(number)) + 1 : 1;
# 370 "/usr/include/glib-2.0/glib/gutils.h"
}
static __inline __attribute__ ((unused)) void
g_trash_stack_push (GTrashStack **stack_p,
      gpointer data_p)
{
  GTrashStack *data = (GTrashStack *) data_p;

  data->next = *stack_p;
  *stack_p = data;
}
static __inline __attribute__ ((unused)) gpointer
g_trash_stack_pop (GTrashStack **stack_p)
{
  GTrashStack *data;

  data = *stack_p;
  if (data)
    {
      *stack_p = data->next;



      data->next = ((void *)0);
    }

  return data;
}
static __inline __attribute__ ((unused)) gpointer
g_trash_stack_peek (GTrashStack **stack_p)
{
  GTrashStack *data;

  data = *stack_p;

  return data;
}
static __inline __attribute__ ((unused)) guint
g_trash_stack_height (GTrashStack **stack_p)
{
  GTrashStack *data;
  guint i = 0;

  for (data = *stack_p; data; data = data->next)
    i++;

  return i;
}






extern const guint glib_major_version;
extern const guint glib_minor_version;
extern const guint glib_micro_version;
extern const guint glib_interface_age;
extern const guint glib_binary_age;

const gchar * glib_check_version (guint required_major,
                                  guint required_minor,
                                  guint required_micro);








# 37 "/usr/include/glib-2.0/glib/gthread.h" 2
# 1 "/usr/include/glib-2.0/glib/gatomic.h" 1
# 37 "/usr/include/glib-2.0/glib/gatomic.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 38 "/usr/include/glib-2.0/glib/gatomic.h" 2



gint g_atomic_int_exchange_and_add (volatile gint __attribute__((may_alias)) *atomic,
      gint val);
void g_atomic_int_add (volatile gint __attribute__((may_alias)) *atomic,
      gint val);
gboolean g_atomic_int_compare_and_exchange (volatile gint __attribute__((may_alias)) *atomic,
      gint oldval,
      gint newval);
gboolean g_atomic_pointer_compare_and_exchange (volatile gpointer __attribute__((may_alias)) *atomic,
      gpointer oldval,
      gpointer newval);

gint g_atomic_int_get (volatile gint __attribute__((may_alias)) *atomic);
void g_atomic_int_set (volatile gint __attribute__((may_alias)) *atomic,
      gint newval);
gpointer g_atomic_pointer_get (volatile gpointer __attribute__((may_alias)) *atomic);
void g_atomic_pointer_set (volatile gpointer __attribute__((may_alias)) *atomic,
      gpointer newval);
# 83 "/usr/include/glib-2.0/glib/gatomic.h"

# 38 "/usr/include/glib-2.0/glib/gthread.h" 2






extern GQuark g_thread_error_quark (void);


typedef enum
{
  G_THREAD_ERROR_AGAIN
} GThreadError;

typedef gpointer (*GThreadFunc) (gpointer data);

typedef enum
{
  G_THREAD_PRIORITY_LOW,
  G_THREAD_PRIORITY_NORMAL,
  G_THREAD_PRIORITY_HIGH,
  G_THREAD_PRIORITY_URGENT
} GThreadPriority;

typedef struct _GThread GThread;
struct _GThread
{

  GThreadFunc func;
  gpointer data;
  gboolean joinable;
  GThreadPriority priority;
};

typedef struct _GMutex GMutex;
typedef struct _GCond GCond;
typedef struct _GPrivate GPrivate;
typedef struct _GStaticPrivate GStaticPrivate;

typedef struct _GThreadFunctions GThreadFunctions;
struct _GThreadFunctions
{
  GMutex* (*mutex_new) (void);
  void (*mutex_lock) (GMutex *mutex);
  gboolean (*mutex_trylock) (GMutex *mutex);
  void (*mutex_unlock) (GMutex *mutex);
  void (*mutex_free) (GMutex *mutex);
  GCond* (*cond_new) (void);
  void (*cond_signal) (GCond *cond);
  void (*cond_broadcast) (GCond *cond);
  void (*cond_wait) (GCond *cond,
                                   GMutex *mutex);
  gboolean (*cond_timed_wait) (GCond *cond,
                                   GMutex *mutex,
                                   GTimeVal *end_time);
  void (*cond_free) (GCond *cond);
  GPrivate* (*private_new) (GDestroyNotify destructor);
  gpointer (*private_get) (GPrivate *private_key);
  void (*private_set) (GPrivate *private_key,
                                   gpointer data);
  void (*thread_create) (GThreadFunc func,
                                   gpointer data,
                                   gulong stack_size,
                                   gboolean joinable,
                                   gboolean bound,
                                   GThreadPriority priority,
                                   gpointer thread,
                                   GError **error);
  void (*thread_yield) (void);
  void (*thread_join) (gpointer thread);
  void (*thread_exit) (void);
  void (*thread_set_priority)(gpointer thread,
                                   GThreadPriority priority);
  void (*thread_self) (gpointer thread);
  gboolean (*thread_equal) (gpointer thread1,
       gpointer thread2);
};

extern GThreadFunctions g_thread_functions_for_glib_use;
extern gboolean g_thread_use_default_impl;
extern gboolean g_threads_got_initialized;

extern guint64 (*g_thread_gettime) (void);





void g_thread_init (GThreadFunctions *vtable);
# 135 "/usr/include/glib-2.0/glib/gthread.h"
void g_thread_init_with_errorcheck_mutexes (GThreadFunctions* vtable);




gboolean g_thread_get_initialized (void);
# 150 "/usr/include/glib-2.0/glib/gthread.h"
GMutex* g_static_mutex_get_mutex_impl (GMutex **mutex);
# 225 "/usr/include/glib-2.0/glib/gthread.h"
GThread* g_thread_create_full (GThreadFunc func,
                                gpointer data,
                                gulong stack_size,
                                gboolean joinable,
                                gboolean bound,
                                GThreadPriority priority,
                                GError **error);
GThread* g_thread_self (void);
void g_thread_exit (gpointer retval);
gpointer g_thread_join (GThread *thread);

void g_thread_set_priority (GThread *thread,
                                GThreadPriority priority);
# 250 "/usr/include/glib-2.0/glib/gthread.h"
void g_static_mutex_init (GStaticMutex *mutex);
void g_static_mutex_free (GStaticMutex *mutex);

struct _GStaticPrivate
{

  guint index;
};

void g_static_private_init (GStaticPrivate *private_key);
gpointer g_static_private_get (GStaticPrivate *private_key);
void g_static_private_set (GStaticPrivate *private_key,
       gpointer data,
       GDestroyNotify notify);
void g_static_private_free (GStaticPrivate *private_key);

typedef struct _GStaticRecMutex GStaticRecMutex;
struct _GStaticRecMutex
{

  GStaticMutex mutex;
  guint depth;
  GSystemThread owner;
};


void g_static_rec_mutex_init (GStaticRecMutex *mutex);
void g_static_rec_mutex_lock (GStaticRecMutex *mutex);
gboolean g_static_rec_mutex_trylock (GStaticRecMutex *mutex);
void g_static_rec_mutex_unlock (GStaticRecMutex *mutex);
void g_static_rec_mutex_lock_full (GStaticRecMutex *mutex,
                                         guint depth);
guint g_static_rec_mutex_unlock_full (GStaticRecMutex *mutex);
void g_static_rec_mutex_free (GStaticRecMutex *mutex);

typedef struct _GStaticRWLock GStaticRWLock;
struct _GStaticRWLock
{

  GStaticMutex mutex;
  GCond *read_cond;
  GCond *write_cond;
  guint read_counter;
  gboolean have_writer;
  guint want_to_read;
  guint want_to_write;
};



void g_static_rw_lock_init (GStaticRWLock* lock);
void g_static_rw_lock_reader_lock (GStaticRWLock* lock);
gboolean g_static_rw_lock_reader_trylock (GStaticRWLock* lock);
void g_static_rw_lock_reader_unlock (GStaticRWLock* lock);
void g_static_rw_lock_writer_lock (GStaticRWLock* lock);
gboolean g_static_rw_lock_writer_trylock (GStaticRWLock* lock);
void g_static_rw_lock_writer_unlock (GStaticRWLock* lock);
void g_static_rw_lock_free (GStaticRWLock* lock);

void g_thread_foreach (GFunc thread_func,
        gpointer user_data);

typedef enum
{
  G_ONCE_STATUS_NOTCALLED,
  G_ONCE_STATUS_PROGRESS,
  G_ONCE_STATUS_READY
} GOnceStatus;

typedef struct _GOnce GOnce;
struct _GOnce
{
  volatile GOnceStatus status;
  volatile gpointer retval;
};



gpointer g_once_impl (GOnce *once, GThreadFunc func, gpointer arg);
# 340 "/usr/include/glib-2.0/glib/gthread.h"
static __inline __attribute__ ((unused)) gboolean g_once_init_enter (volatile gsize *value_location);
gboolean g_once_init_enter_impl (volatile gsize *value_location);
void g_once_init_leave (volatile gsize *value_location,
                                                 gsize initialization_value);

static __inline __attribute__ ((unused)) gboolean
g_once_init_enter (volatile gsize *value_location)
{
  if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((gpointer) ((void) sizeof (gchar [sizeof (*(value_location)) == sizeof (gpointer) ? 1 : -1]), (g_atomic_pointer_get) ((volatile gpointer __attribute__((may_alias)) *) (void *) (value_location))) != ((void *)0)) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1))
    return (0);
  else
    return g_once_init_enter_impl (value_location);
}
# 364 "/usr/include/glib-2.0/glib/gthread.h"
extern void glib_dummy_decl (void);
# 406 "/usr/include/glib-2.0/glib/gthread.h"

# 35 "/usr/include/glib-2.0/glib/gasyncqueue.h" 2



typedef struct _GAsyncQueue GAsyncQueue;




GAsyncQueue* g_async_queue_new (void);

GAsyncQueue* g_async_queue_new_full (GDestroyNotify item_free_func);





void g_async_queue_lock (GAsyncQueue *queue);
void g_async_queue_unlock (GAsyncQueue *queue);


GAsyncQueue* g_async_queue_ref (GAsyncQueue *queue);
void g_async_queue_unref (GAsyncQueue *queue);



void g_async_queue_ref_unlocked (GAsyncQueue *queue);
void g_async_queue_unref_and_unlock (GAsyncQueue *queue);



void g_async_queue_push (GAsyncQueue *queue,
       gpointer data);
void g_async_queue_push_unlocked (GAsyncQueue *queue,
       gpointer data);

void g_async_queue_push_sorted (GAsyncQueue *queue,
       gpointer data,
       GCompareDataFunc func,
       gpointer user_data);
void g_async_queue_push_sorted_unlocked (GAsyncQueue *queue,
       gpointer data,
       GCompareDataFunc func,
       gpointer user_data);




gpointer g_async_queue_pop (GAsyncQueue *queue);
gpointer g_async_queue_pop_unlocked (GAsyncQueue *queue);


gpointer g_async_queue_try_pop (GAsyncQueue *queue);
gpointer g_async_queue_try_pop_unlocked (GAsyncQueue *queue);






gpointer g_async_queue_timed_pop (GAsyncQueue *queue,
       GTimeVal *end_time);
gpointer g_async_queue_timed_pop_unlocked (GAsyncQueue *queue,
       GTimeVal *end_time);
# 106 "/usr/include/glib-2.0/glib/gasyncqueue.h"
gint g_async_queue_length (GAsyncQueue *queue);
gint g_async_queue_length_unlocked (GAsyncQueue *queue);
void g_async_queue_sort (GAsyncQueue *queue,
       GCompareDataFunc func,
       gpointer user_data);
void g_async_queue_sort_unlocked (GAsyncQueue *queue,
       GCompareDataFunc func,
       gpointer user_data);


GMutex* _g_async_queue_get_mutex (GAsyncQueue *queue);


# 35 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gatomic.h" 1
# 36 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbacktrace.h" 1
# 34 "/usr/include/glib-2.0/glib/gbacktrace.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gbacktrace.h" 2
# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
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








typedef __sigset_t sigset_t;







# 1 "/usr/include/bits/signum.h" 1 3 4
# 59 "/usr/include/signal.h" 2 3 4



typedef __pid_t pid_t;





typedef __uid_t uid_t;







# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
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
# 99 "/usr/include/signal.h" 3 4


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
# 113 "/usr/include/signal.h" 3 4

# 126 "/usr/include/signal.h" 3 4
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
# 196 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
# 216 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (__const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 252 "/usr/include/signal.h" 3 4
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
# 85 "/usr/include/sys/ucontext.h" 3 4
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
# 394 "/usr/include/signal.h" 3 4
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
# 395 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 31 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       __const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));
# 396 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__));




# 36 "/usr/include/glib-2.0/glib/gbacktrace.h" 2


# 48 "/usr/include/glib-2.0/glib/gbacktrace.h"
void g_on_error_query (const gchar *prg_name);
void g_on_error_stack_trace (const gchar *prg_name);
# 66 "/usr/include/glib-2.0/glib/gbacktrace.h"

# 37 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbase64.h" 1
# 28 "/usr/include/glib-2.0/glib/gbase64.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 29 "/usr/include/glib-2.0/glib/gbase64.h" 2



gsize g_base64_encode_step (const guchar *in,
          gsize len,
          gboolean break_lines,
          gchar *out,
          gint *state,
          gint *save);
gsize g_base64_encode_close (gboolean break_lines,
          gchar *out,
          gint *state,
          gint *save);
gchar* g_base64_encode (const guchar *data,
          gsize len) __attribute__((__malloc__));
gsize g_base64_decode_step (const gchar *in,
          gsize len,
          guchar *out,
          gint *state,
          guint *save);
guchar *g_base64_decode (const gchar *text,
          gsize *out_len) __attribute__((__malloc__));
guchar *g_base64_decode_inplace (gchar *text,
                                 gsize *out_len);



# 38 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbitlock.h" 1
# 26 "/usr/include/glib-2.0/glib/gbitlock.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 27 "/usr/include/glib-2.0/glib/gbitlock.h" 2







void g_bit_lock (volatile gint *address,
                                           gint lock_bit);
gboolean g_bit_trylock (volatile gint *address,
                                           gint lock_bit);
void g_bit_unlock (volatile gint *address,
                                           gint lock_bit);


# 39 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbookmarkfile.h" 1
# 27 "/usr/include/glib-2.0/glib/gbookmarkfile.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 28 "/usr/include/glib-2.0/glib/gbookmarkfile.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
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

# 29 "/usr/include/glib-2.0/glib/gbookmarkfile.h" 2







typedef enum
{
  G_BOOKMARK_FILE_ERROR_INVALID_URI,
  G_BOOKMARK_FILE_ERROR_INVALID_VALUE,
  G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED,
  G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND,
  G_BOOKMARK_FILE_ERROR_READ,
  G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING,
  G_BOOKMARK_FILE_ERROR_WRITE,
  G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND
} GBookmarkFileError;

GQuark g_bookmark_file_error_quark (void);




typedef struct _GBookmarkFile GBookmarkFile;

GBookmarkFile *g_bookmark_file_new (void);
void g_bookmark_file_free (GBookmarkFile *bookmark);

gboolean g_bookmark_file_load_from_file (GBookmarkFile *bookmark,
          const gchar *filename,
          GError **error);
gboolean g_bookmark_file_load_from_data (GBookmarkFile *bookmark,
          const gchar *data,
          gsize length,
          GError **error);
gboolean g_bookmark_file_load_from_data_dirs (GBookmarkFile *bookmark,
          const gchar *file,
          gchar **full_path,
          GError **error);
gchar * g_bookmark_file_to_data (GBookmarkFile *bookmark,
          gsize *length,
          GError **error) __attribute__((__malloc__));
gboolean g_bookmark_file_to_file (GBookmarkFile *bookmark,
          const gchar *filename,
          GError **error);

void g_bookmark_file_set_title (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *title);
gchar * g_bookmark_file_get_title (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
void g_bookmark_file_set_description (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *description);
gchar * g_bookmark_file_get_description (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
void g_bookmark_file_set_mime_type (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *mime_type);
gchar * g_bookmark_file_get_mime_type (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
void g_bookmark_file_set_groups (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar **groups,
          gsize length);
void g_bookmark_file_add_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group);
gboolean g_bookmark_file_has_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group,
          GError **error);
gchar ** g_bookmark_file_get_groups (GBookmarkFile *bookmark,
          const gchar *uri,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_bookmark_file_add_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          const gchar *exec);
gboolean g_bookmark_file_has_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          GError **error);
gchar ** g_bookmark_file_get_applications (GBookmarkFile *bookmark,
          const gchar *uri,
          gsize *length,
          GError **error) __attribute__((__malloc__));
gboolean g_bookmark_file_set_app_info (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          const gchar *exec,
          gint count,
          time_t stamp,
          GError **error);
gboolean g_bookmark_file_get_app_info (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          gchar **exec,
          guint *count,
          time_t *stamp,
          GError **error);
void g_bookmark_file_set_is_private (GBookmarkFile *bookmark,
          const gchar *uri,
          gboolean is_private);
gboolean g_bookmark_file_get_is_private (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
void g_bookmark_file_set_icon (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *href,
          const gchar *mime_type);
gboolean g_bookmark_file_get_icon (GBookmarkFile *bookmark,
          const gchar *uri,
          gchar **href,
          gchar **mime_type,
          GError **error);
void g_bookmark_file_set_added (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t added);
time_t g_bookmark_file_get_added (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
void g_bookmark_file_set_modified (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t modified);
time_t g_bookmark_file_get_modified (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
void g_bookmark_file_set_visited (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t visited);
time_t g_bookmark_file_get_visited (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
gboolean g_bookmark_file_has_item (GBookmarkFile *bookmark,
          const gchar *uri);
gint g_bookmark_file_get_size (GBookmarkFile *bookmark);
gchar ** g_bookmark_file_get_uris (GBookmarkFile *bookmark,
          gsize *length) __attribute__((__malloc__));
gboolean g_bookmark_file_remove_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group,
          GError **error);
gboolean g_bookmark_file_remove_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          GError **error);
gboolean g_bookmark_file_remove_item (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
gboolean g_bookmark_file_move_item (GBookmarkFile *bookmark,
          const gchar *old_uri,
          const gchar *new_uri,
          GError **error);


# 40 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gcache.h" 1
# 34 "/usr/include/glib-2.0/glib/gcache.h"
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 34 "/usr/include/glib-2.0/glib/glist.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 34 "/usr/include/glib-2.0/glib/gmem.h"
# 1 "/usr/include/glib-2.0/glib/gslice.h" 1
# 27 "/usr/include/glib-2.0/glib/gslice.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/gslice.h" 2





gpointer g_slice_alloc (gsize block_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_slice_alloc0 (gsize block_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_slice_copy (gsize block_size,
                                         gconstpointer mem_block) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
void g_slice_free1 (gsize block_size,
      gpointer mem_block);
void g_slice_free_chain_with_offset (gsize block_size,
      gpointer mem_chain,
      gsize next_offset);
# 72 "/usr/include/glib-2.0/glib/gslice.h"
typedef enum {
  G_SLICE_CONFIG_ALWAYS_MALLOC = 1,
  G_SLICE_CONFIG_BYPASS_MAGAZINES,
  G_SLICE_CONFIG_WORKING_SET_MSECS,
  G_SLICE_CONFIG_COLOR_INCREMENT,
  G_SLICE_CONFIG_CHUNK_SIZES,
  G_SLICE_CONFIG_CONTENTION_COUNTER
} GSliceConfig;
void g_slice_set_config (GSliceConfig ckey, gint64 value);
gint64 g_slice_get_config (GSliceConfig ckey);
gint64* g_slice_get_config_state (GSliceConfig ckey, gint64 address, guint *n_values);


# 35 "/usr/include/glib-2.0/glib/gmem.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 36 "/usr/include/glib-2.0/glib/gmem.h" 2



typedef struct _GMemVTable GMemVTable;
# 52 "/usr/include/glib-2.0/glib/gmem.h"
void g_free (gpointer mem);

gpointer g_malloc (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_malloc0 (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_realloc (gpointer mem,
      gsize n_bytes) __attribute__((warn_unused_result));
gpointer g_try_malloc (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_try_malloc0 (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_try_realloc (gpointer mem,
      gsize n_bytes) __attribute__((warn_unused_result));

gpointer g_malloc_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
gpointer g_malloc0_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
gpointer g_realloc_n (gpointer mem,
      gsize n_blocks,
      gsize n_block_bytes) __attribute__((warn_unused_result));
gpointer g_try_malloc_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
gpointer g_try_malloc0_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
gpointer g_try_realloc_n (gpointer mem,
      gsize n_blocks,
      gsize n_block_bytes) __attribute__((warn_unused_result));
# 135 "/usr/include/glib-2.0/glib/gmem.h"
struct _GMemVTable {
  gpointer (*malloc) (gsize n_bytes);
  gpointer (*realloc) (gpointer mem,
      gsize n_bytes);
  void (*free) (gpointer mem);

  gpointer (*calloc) (gsize n_blocks,
      gsize n_block_bytes);
  gpointer (*try_malloc) (gsize n_bytes);
  gpointer (*try_realloc) (gpointer mem,
      gsize n_bytes);
};
void g_mem_set_vtable (GMemVTable *vtable);
gboolean g_mem_is_system_malloc (void);

extern gboolean g_mem_gc_friendly;



extern GMemVTable *glib_mem_profiler_table;
void g_mem_profile (void);




typedef struct _GAllocator GAllocator;
typedef struct _GMemChunk GMemChunk;
# 179 "/usr/include/glib-2.0/glib/gmem.h"
GMemChunk* g_mem_chunk_new (const gchar *name,
    gint atom_size,
    gsize area_size,
    gint type);
void g_mem_chunk_destroy (GMemChunk *mem_chunk);
gpointer g_mem_chunk_alloc (GMemChunk *mem_chunk);
gpointer g_mem_chunk_alloc0 (GMemChunk *mem_chunk);
void g_mem_chunk_free (GMemChunk *mem_chunk,
    gpointer mem);
void g_mem_chunk_clean (GMemChunk *mem_chunk);
void g_mem_chunk_reset (GMemChunk *mem_chunk);
void g_mem_chunk_print (GMemChunk *mem_chunk);
void g_mem_chunk_info (void);
void g_blow_chunks (void);
GAllocator*g_allocator_new (const gchar *name,
    guint n_preallocs);
void g_allocator_free (GAllocator *allocator);






# 35 "/usr/include/glib-2.0/glib/glist.h" 2



typedef struct _GList GList;

struct _GList
{
  gpointer data;
  GList *next;
  GList *prev;
};



GList* g_list_alloc (void) __attribute__((warn_unused_result));
void g_list_free (GList *list);
void g_list_free_1 (GList *list);

GList* g_list_append (GList *list,
      gpointer data) __attribute__((warn_unused_result));
GList* g_list_prepend (GList *list,
      gpointer data) __attribute__((warn_unused_result));
GList* g_list_insert (GList *list,
      gpointer data,
      gint position) __attribute__((warn_unused_result));
GList* g_list_insert_sorted (GList *list,
      gpointer data,
      GCompareFunc func) __attribute__((warn_unused_result));
GList* g_list_insert_sorted_with_data (GList *list,
      gpointer data,
      GCompareDataFunc func,
      gpointer user_data) __attribute__((warn_unused_result));
GList* g_list_insert_before (GList *list,
      GList *sibling,
      gpointer data) __attribute__((warn_unused_result));
GList* g_list_concat (GList *list1,
      GList *list2) __attribute__((warn_unused_result));
GList* g_list_remove (GList *list,
      gconstpointer data) __attribute__((warn_unused_result));
GList* g_list_remove_all (GList *list,
      gconstpointer data) __attribute__((warn_unused_result));
GList* g_list_remove_link (GList *list,
      GList *llink) __attribute__((warn_unused_result));
GList* g_list_delete_link (GList *list,
      GList *link_) __attribute__((warn_unused_result));
GList* g_list_reverse (GList *list) __attribute__((warn_unused_result));
GList* g_list_copy (GList *list) __attribute__((warn_unused_result));
GList* g_list_nth (GList *list,
      guint n);
GList* g_list_nth_prev (GList *list,
      guint n);
GList* g_list_find (GList *list,
      gconstpointer data);
GList* g_list_find_custom (GList *list,
      gconstpointer data,
      GCompareFunc func);
gint g_list_position (GList *list,
      GList *llink);
gint g_list_index (GList *list,
      gconstpointer data);
GList* g_list_last (GList *list);
GList* g_list_first (GList *list);
guint g_list_length (GList *list);
void g_list_foreach (GList *list,
      GFunc func,
      gpointer user_data);
GList* g_list_sort (GList *list,
      GCompareFunc compare_func) __attribute__((warn_unused_result));
GList* g_list_sort_with_data (GList *list,
      GCompareDataFunc compare_func,
      gpointer user_data) __attribute__((warn_unused_result));
gpointer g_list_nth_data (GList *list,
      guint n);






void g_list_push_allocator (gpointer allocator);
void g_list_pop_allocator (void);



# 35 "/usr/include/glib-2.0/glib/gcache.h" 2



typedef struct _GCache GCache;

typedef gpointer (*GCacheNewFunc) (gpointer key);
typedef gpointer (*GCacheDupFunc) (gpointer value);
typedef void (*GCacheDestroyFunc) (gpointer value);



GCache* g_cache_new (GCacheNewFunc value_new_func,
                                GCacheDestroyFunc value_destroy_func,
                                GCacheDupFunc key_dup_func,
                                GCacheDestroyFunc key_destroy_func,
                                GHashFunc hash_key_func,
                                GHashFunc hash_value_func,
                                GEqualFunc key_equal_func);
void g_cache_destroy (GCache *cache);
gpointer g_cache_insert (GCache *cache,
                                gpointer key);
void g_cache_remove (GCache *cache,
                                gconstpointer value);
void g_cache_key_foreach (GCache *cache,
                                GHFunc func,
                                gpointer user_data);

void g_cache_value_foreach (GCache *cache,
                                GHFunc func,
                                gpointer user_data);



# 41 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gchecksum.h" 1
# 28 "/usr/include/glib-2.0/glib/gchecksum.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 29 "/usr/include/glib-2.0/glib/gchecksum.h" 2


# 46 "/usr/include/glib-2.0/glib/gchecksum.h"
typedef enum {
  G_CHECKSUM_MD5,
  G_CHECKSUM_SHA1,
  G_CHECKSUM_SHA256
} GChecksumType;
# 61 "/usr/include/glib-2.0/glib/gchecksum.h"
typedef struct _GChecksum GChecksum;

gssize g_checksum_type_get_length (GChecksumType checksum_type);

GChecksum * g_checksum_new (GChecksumType checksum_type);
void g_checksum_reset (GChecksum *checksum);
GChecksum * g_checksum_copy (const GChecksum *checksum);
void g_checksum_free (GChecksum *checksum);
void g_checksum_update (GChecksum *checksum,
                                             const guchar *data,
                                             gssize length);
const gchar *g_checksum_get_string (GChecksum *checksum);
void g_checksum_get_digest (GChecksum *checksum,
                                             guint8 *buffer,
                                             gsize *digest_len);

gchar *g_compute_checksum_for_data (GChecksumType checksum_type,
                                      const guchar *data,
                                      gsize length);
gchar *g_compute_checksum_for_string (GChecksumType checksum_type,
                                      const gchar *str,
                                      gssize length);


# 42 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gcompletion.h" 1
# 34 "/usr/include/glib-2.0/glib/gcompletion.h"
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 35 "/usr/include/glib-2.0/glib/gcompletion.h" 2



typedef struct _GCompletion GCompletion;

typedef gchar* (*GCompletionFunc) (gpointer);




typedef gint (*GCompletionStrncmpFunc) (const gchar *s1,
     const gchar *s2,
     gsize n);

struct _GCompletion
{
  GList* items;
  GCompletionFunc func;

  gchar* prefix;
  GList* cache;
  GCompletionStrncmpFunc strncmp_func;
};

GCompletion* g_completion_new (GCompletionFunc func);
void g_completion_add_items (GCompletion* cmp,
                                         GList* items);
void g_completion_remove_items (GCompletion* cmp,
                                         GList* items);
void g_completion_clear_items (GCompletion* cmp);
GList* g_completion_complete (GCompletion* cmp,
                                         const gchar* prefix,
                                         gchar** new_prefix);
GList* g_completion_complete_utf8 (GCompletion *cmp,
                                         const gchar* prefix,
                                         gchar** new_prefix);
void g_completion_set_compare (GCompletion *cmp,
             GCompletionStrncmpFunc strncmp_func);
void g_completion_free (GCompletion* cmp);


# 43 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gconvert.h" 1
# 34 "/usr/include/glib-2.0/glib/gconvert.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 35 "/usr/include/glib-2.0/glib/gconvert.h" 2



typedef enum
{
  G_CONVERT_ERROR_NO_CONVERSION,
  G_CONVERT_ERROR_ILLEGAL_SEQUENCE,
  G_CONVERT_ERROR_FAILED,
  G_CONVERT_ERROR_PARTIAL_INPUT,
  G_CONVERT_ERROR_BAD_URI,
  G_CONVERT_ERROR_NOT_ABSOLUTE_PATH
} GConvertError;


GQuark g_convert_error_quark (void);



typedef struct _GIConv *GIConv;

GIConv g_iconv_open (const gchar *to_codeset,
         const gchar *from_codeset);
gsize g_iconv (GIConv converter,
         gchar **inbuf,
         gsize *inbytes_left,
         gchar **outbuf,
         gsize *outbytes_left);
gint g_iconv_close (GIConv converter);


gchar* g_convert (const gchar *str,
    gssize len,
    const gchar *to_codeset,
    const gchar *from_codeset,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));
gchar* g_convert_with_iconv (const gchar *str,
    gssize len,
    GIConv converter,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));
gchar* g_convert_with_fallback (const gchar *str,
    gssize len,
    const gchar *to_codeset,
    const gchar *from_codeset,
    const gchar *fallback,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));




gchar* g_locale_to_utf8 (const gchar *opsysstring,
      gssize len,
      gsize *bytes_read,
      gsize *bytes_written,
      GError **error) __attribute__((__malloc__));
gchar* g_locale_from_utf8 (const gchar *utf8string,
      gssize len,
      gsize *bytes_read,
      gsize *bytes_written,
      GError **error) __attribute__((__malloc__));
# 111 "/usr/include/glib-2.0/glib/gconvert.h"
gchar* g_filename_to_utf8 (const gchar *opsysstring,
        gssize len,
        gsize *bytes_read,
        gsize *bytes_written,
        GError **error) __attribute__((__malloc__));
gchar* g_filename_from_utf8 (const gchar *utf8string,
        gssize len,
        gsize *bytes_read,
        gsize *bytes_written,
        GError **error) __attribute__((__malloc__));

gchar *g_filename_from_uri (const gchar *uri,
       gchar **hostname,
       GError **error) __attribute__((__malloc__));

gchar *g_filename_to_uri (const gchar *filename,
       const gchar *hostname,
       GError **error) __attribute__((__malloc__));
gchar *g_filename_display_name (const gchar *filename) __attribute__((__malloc__));
gboolean g_get_filename_charsets (const gchar ***charsets);

gchar *g_filename_display_basename (const gchar *filename) __attribute__((__malloc__));

gchar **g_uri_list_extract_uris (const gchar *uri_list) __attribute__((__malloc__));


# 44 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdataset.h" 1
# 34 "/usr/include/glib-2.0/glib/gdataset.h"
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 35 "/usr/include/glib-2.0/glib/gdataset.h" 2



typedef struct _GData GData;

typedef void (*GDataForeachFunc) (GQuark key_id,
                                                 gpointer data,
                                                 gpointer user_data);



void g_datalist_init (GData **datalist);
void g_datalist_clear (GData **datalist);
gpointer g_datalist_id_get_data (GData **datalist,
      GQuark key_id);
void g_datalist_id_set_data_full (GData **datalist,
      GQuark key_id,
      gpointer data,
      GDestroyNotify destroy_func);
gpointer g_datalist_id_remove_no_notify (GData **datalist,
      GQuark key_id);
void g_datalist_foreach (GData **datalist,
      GDataForeachFunc func,
      gpointer user_data);
# 69 "/usr/include/glib-2.0/glib/gdataset.h"
void g_datalist_set_flags (GData **datalist,
      guint flags);
void g_datalist_unset_flags (GData **datalist,
      guint flags);
guint g_datalist_get_flags (GData **datalist);
# 93 "/usr/include/glib-2.0/glib/gdataset.h"
void g_dataset_destroy (gconstpointer dataset_location);
gpointer g_dataset_id_get_data (gconstpointer dataset_location,
                                         GQuark key_id);
void g_dataset_id_set_data_full (gconstpointer dataset_location,
                                         GQuark key_id,
                                         gpointer data,
                                         GDestroyNotify destroy_func);
gpointer g_dataset_id_remove_no_notify (gconstpointer dataset_location,
                                         GQuark key_id);
void g_dataset_foreach (gconstpointer dataset_location,
                                         GDataForeachFunc func,
                                         gpointer user_data);
# 120 "/usr/include/glib-2.0/glib/gdataset.h"

# 45 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdate.h" 1
# 36 "/usr/include/glib-2.0/glib/gdate.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 37 "/usr/include/glib-2.0/glib/gdate.h" 2
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 38 "/usr/include/glib-2.0/glib/gdate.h" 2


# 50 "/usr/include/glib-2.0/glib/gdate.h"
typedef gint32 GTime;
typedef guint16 GDateYear;
typedef guint8 GDateDay;
typedef struct _GDate GDate;


typedef enum
{
  G_DATE_DAY = 0,
  G_DATE_MONTH = 1,
  G_DATE_YEAR = 2
} GDateDMY;


typedef enum
{
  G_DATE_BAD_WEEKDAY = 0,
  G_DATE_MONDAY = 1,
  G_DATE_TUESDAY = 2,
  G_DATE_WEDNESDAY = 3,
  G_DATE_THURSDAY = 4,
  G_DATE_FRIDAY = 5,
  G_DATE_SATURDAY = 6,
  G_DATE_SUNDAY = 7
} GDateWeekday;
typedef enum
{
  G_DATE_BAD_MONTH = 0,
  G_DATE_JANUARY = 1,
  G_DATE_FEBRUARY = 2,
  G_DATE_MARCH = 3,
  G_DATE_APRIL = 4,
  G_DATE_MAY = 5,
  G_DATE_JUNE = 6,
  G_DATE_JULY = 7,
  G_DATE_AUGUST = 8,
  G_DATE_SEPTEMBER = 9,
  G_DATE_OCTOBER = 10,
  G_DATE_NOVEMBER = 11,
  G_DATE_DECEMBER = 12
} GDateMonth;
# 101 "/usr/include/glib-2.0/glib/gdate.h"
struct _GDate
{
  guint julian_days : 32;





  guint julian : 1;
  guint dmy : 1;


  guint day : 6;
  guint month : 4;
  guint year : 16;
};





GDate* g_date_new (void);
GDate* g_date_new_dmy (GDateDay day,
                                           GDateMonth month,
                                           GDateYear year);
GDate* g_date_new_julian (guint32 julian_day);
void g_date_free (GDate *date);






gboolean g_date_valid (const GDate *date);
gboolean g_date_valid_day (GDateDay day) __attribute__((__const__));
gboolean g_date_valid_month (GDateMonth month) __attribute__((__const__));
gboolean g_date_valid_year (GDateYear year) __attribute__((__const__));
gboolean g_date_valid_weekday (GDateWeekday weekday) __attribute__((__const__));
gboolean g_date_valid_julian (guint32 julian_date) __attribute__((__const__));
gboolean g_date_valid_dmy (GDateDay day,
                                           GDateMonth month,
                                           GDateYear year) __attribute__((__const__));

GDateWeekday g_date_get_weekday (const GDate *date);
GDateMonth g_date_get_month (const GDate *date);
GDateYear g_date_get_year (const GDate *date);
GDateDay g_date_get_day (const GDate *date);
guint32 g_date_get_julian (const GDate *date);
guint g_date_get_day_of_year (const GDate *date);






guint g_date_get_monday_week_of_year (const GDate *date);
guint g_date_get_sunday_week_of_year (const GDate *date);
guint g_date_get_iso8601_week_of_year (const GDate *date);





void g_date_clear (GDate *date,
                                           guint n_dates);





void g_date_set_parse (GDate *date,
                                           const gchar *str);
void g_date_set_time_t (GDate *date,
        time_t timet);
void g_date_set_time_val (GDate *date,
        GTimeVal *timeval);

void g_date_set_time (GDate *date,
                                           GTime time_);

void g_date_set_month (GDate *date,
                                           GDateMonth month);
void g_date_set_day (GDate *date,
                                           GDateDay day);
void g_date_set_year (GDate *date,
                                           GDateYear year);
void g_date_set_dmy (GDate *date,
                                           GDateDay day,
                                           GDateMonth month,
                                           GDateYear y);
void g_date_set_julian (GDate *date,
                                           guint32 julian_date);
gboolean g_date_is_first_of_month (const GDate *date);
gboolean g_date_is_last_of_month (const GDate *date);


void g_date_add_days (GDate *date,
                                           guint n_days);
void g_date_subtract_days (GDate *date,
                                           guint n_days);


void g_date_add_months (GDate *date,
                                           guint n_months);
void g_date_subtract_months (GDate *date,
                                           guint n_months);


void g_date_add_years (GDate *date,
                                           guint n_years);
void g_date_subtract_years (GDate *date,
                                           guint n_years);
gboolean g_date_is_leap_year (GDateYear year) __attribute__((__const__));
guint8 g_date_get_days_in_month (GDateMonth month,
                                           GDateYear year) __attribute__((__const__));
guint8 g_date_get_monday_weeks_in_year (GDateYear year) __attribute__((__const__));
guint8 g_date_get_sunday_weeks_in_year (GDateYear year) __attribute__((__const__));



gint g_date_days_between (const GDate *date1,
        const GDate *date2);


gint g_date_compare (const GDate *lhs,
                                           const GDate *rhs);
void g_date_to_struct_tm (const GDate *date,
                                           struct tm *tm);

void g_date_clamp (GDate *date,
        const GDate *min_date,
        const GDate *max_date);


void g_date_order (GDate *date1, GDate *date2);




gsize g_date_strftime (gchar *s,
                                           gsize slen,
                                           const gchar *format,
                                           const GDate *date);
# 261 "/usr/include/glib-2.0/glib/gdate.h"

# 46 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdir.h" 1
# 31 "/usr/include/glib-2.0/glib/gdir.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 32 "/usr/include/glib-2.0/glib/gdir.h" 2



typedef struct _GDir GDir;







GDir * g_dir_open (const gchar *path,
            guint flags,
            GError **error);
const gchar *g_dir_read_name (GDir *dir);
void g_dir_rewind (GDir *dir);
void g_dir_close (GDir *dir);


# 47 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 48 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gfileutils.h" 1
# 28 "/usr/include/glib-2.0/glib/gfileutils.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/gfileutils.h" 2





typedef enum
{
  G_FILE_ERROR_EXIST,
  G_FILE_ERROR_ISDIR,
  G_FILE_ERROR_ACCES,
  G_FILE_ERROR_NAMETOOLONG,
  G_FILE_ERROR_NOENT,
  G_FILE_ERROR_NOTDIR,
  G_FILE_ERROR_NXIO,
  G_FILE_ERROR_NODEV,
  G_FILE_ERROR_ROFS,
  G_FILE_ERROR_TXTBSY,
  G_FILE_ERROR_FAULT,
  G_FILE_ERROR_LOOP,
  G_FILE_ERROR_NOSPC,
  G_FILE_ERROR_NOMEM,
  G_FILE_ERROR_MFILE,
  G_FILE_ERROR_NFILE,
  G_FILE_ERROR_BADF,
  G_FILE_ERROR_INVAL,
  G_FILE_ERROR_PIPE,
  G_FILE_ERROR_AGAIN,
  G_FILE_ERROR_INTR,
  G_FILE_ERROR_IO,
  G_FILE_ERROR_PERM,
  G_FILE_ERROR_NOSYS,
  G_FILE_ERROR_FAILED
} GFileError;





typedef enum
{
  G_FILE_TEST_IS_REGULAR = 1 << 0,
  G_FILE_TEST_IS_SYMLINK = 1 << 1,
  G_FILE_TEST_IS_DIR = 1 << 2,
  G_FILE_TEST_IS_EXECUTABLE = 1 << 3,
  G_FILE_TEST_EXISTS = 1 << 4
} GFileTest;

GQuark g_file_error_quark (void);

GFileError g_file_error_from_errno (gint err_no);
# 87 "/usr/include/glib-2.0/glib/gfileutils.h"
gboolean g_file_test (const gchar *filename,
                              GFileTest test);
gboolean g_file_get_contents (const gchar *filename,
                              gchar **contents,
                              gsize *length,
                              GError **error);
gboolean g_file_set_contents (const gchar *filename,
         const gchar *contents,
         gssize length,
         GError **error);
gchar *g_file_read_link (const gchar *filename,
         GError **error);


gint g_mkstemp (gchar *tmpl);
gint g_mkstemp_full (gchar *tmpl,
                              int flags,
                              int mode);


gint g_file_open_tmp (const gchar *tmpl,
         gchar **name_used,
         GError **error);

char *g_format_size_for_display (goffset size);

gchar *g_build_path (const gchar *separator,
    const gchar *first_element,
    ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
gchar *g_build_pathv (const gchar *separator,
    gchar **args) __attribute__((__malloc__));

gchar *g_build_filename (const gchar *first_element,
    ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
gchar *g_build_filenamev (gchar **args) __attribute__((__malloc__));

int g_mkdir_with_parents (const gchar *pathname,
        int mode);


# 49 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghash.h" 1
# 34 "/usr/include/glib-2.0/glib/ghash.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/ghash.h" 2
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 36 "/usr/include/glib-2.0/glib/ghash.h" 2



typedef struct _GHashTable GHashTable;

typedef gboolean (*GHRFunc) (gpointer key,
                               gpointer value,
                               gpointer user_data);

typedef struct _GHashTableIter GHashTableIter;

struct _GHashTableIter
{

  gpointer dummy1;
  gpointer dummy2;
  gpointer dummy3;
  int dummy4;
  gboolean dummy5;
  gpointer dummy6;
};



GHashTable* g_hash_table_new (GHashFunc hash_func,
         GEqualFunc key_equal_func);
GHashTable* g_hash_table_new_full (GHashFunc hash_func,
         GEqualFunc key_equal_func,
         GDestroyNotify key_destroy_func,
         GDestroyNotify value_destroy_func);
void g_hash_table_destroy (GHashTable *hash_table);
void g_hash_table_insert (GHashTable *hash_table,
         gpointer key,
         gpointer value);
void g_hash_table_replace (GHashTable *hash_table,
         gpointer key,
         gpointer value);
gboolean g_hash_table_remove (GHashTable *hash_table,
         gconstpointer key);
void g_hash_table_remove_all (GHashTable *hash_table);
gboolean g_hash_table_steal (GHashTable *hash_table,
         gconstpointer key);
void g_hash_table_steal_all (GHashTable *hash_table);
gpointer g_hash_table_lookup (GHashTable *hash_table,
         gconstpointer key);
gboolean g_hash_table_lookup_extended (GHashTable *hash_table,
         gconstpointer lookup_key,
         gpointer *orig_key,
         gpointer *value);
void g_hash_table_foreach (GHashTable *hash_table,
         GHFunc func,
         gpointer user_data);
gpointer g_hash_table_find (GHashTable *hash_table,
         GHRFunc predicate,
         gpointer user_data);
guint g_hash_table_foreach_remove (GHashTable *hash_table,
         GHRFunc func,
         gpointer user_data);
guint g_hash_table_foreach_steal (GHashTable *hash_table,
         GHRFunc func,
         gpointer user_data);
guint g_hash_table_size (GHashTable *hash_table);
GList * g_hash_table_get_keys (GHashTable *hash_table);
GList * g_hash_table_get_values (GHashTable *hash_table);

void g_hash_table_iter_init (GHashTableIter *iter,
         GHashTable *hash_table);
gboolean g_hash_table_iter_next (GHashTableIter *iter,
         gpointer *key,
         gpointer *value);
GHashTable* g_hash_table_iter_get_hash_table (GHashTableIter *iter);
void g_hash_table_iter_remove (GHashTableIter *iter);
void g_hash_table_iter_steal (GHashTableIter *iter);


GHashTable* g_hash_table_ref (GHashTable *hash_table);
void g_hash_table_unref (GHashTable *hash_table);
# 138 "/usr/include/glib-2.0/glib/ghash.h"
gboolean g_str_equal (gconstpointer v1,
                      gconstpointer v2);
guint g_str_hash (gconstpointer v);

gboolean g_int_equal (gconstpointer v1,
                      gconstpointer v2);
guint g_int_hash (gconstpointer v);

gboolean g_int64_equal (gconstpointer v1,
                        gconstpointer v2);
guint g_int64_hash (gconstpointer v);

gboolean g_double_equal (gconstpointer v1,
                         gconstpointer v2);
guint g_double_hash (gconstpointer v);







guint g_direct_hash (gconstpointer v) __attribute__((__const__));
gboolean g_direct_equal (gconstpointer v1,
                         gconstpointer v2) __attribute__((__const__));


# 50 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghook.h" 1
# 34 "/usr/include/glib-2.0/glib/ghook.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 35 "/usr/include/glib-2.0/glib/ghook.h" 2





typedef struct _GHook GHook;
typedef struct _GHookList GHookList;

typedef gint (*GHookCompareFunc) (GHook *new_hook,
       GHook *sibling);
typedef gboolean (*GHookFindFunc) (GHook *hook,
       gpointer data);
typedef void (*GHookMarshaller) (GHook *hook,
       gpointer marshal_data);
typedef gboolean (*GHookCheckMarshaller) (GHook *hook,
       gpointer marshal_data);
typedef void (*GHookFunc) (gpointer data);
typedef gboolean (*GHookCheckFunc) (gpointer data);
typedef void (*GHookFinalizeFunc) (GHookList *hook_list,
       GHook *hook);
typedef enum
{
  G_HOOK_FLAG_ACTIVE = 1 << 0,
  G_HOOK_FLAG_IN_CALL = 1 << 1,
  G_HOOK_FLAG_MASK = 0x0f
} GHookFlagMask;




struct _GHookList
{
  gulong seq_id;
  guint hook_size : 16;
  guint is_setup : 1;
  GHook *hooks;
  gpointer dummy3;
  GHookFinalizeFunc finalize_hook;
  gpointer dummy[2];
};
struct _GHook
{
  gpointer data;
  GHook *next;
  GHook *prev;
  guint ref_count;
  gulong hook_id;
  guint flags;
  gpointer func;
  GDestroyNotify destroy;
};
# 106 "/usr/include/glib-2.0/glib/ghook.h"
void g_hook_list_init (GHookList *hook_list,
      guint hook_size);
void g_hook_list_clear (GHookList *hook_list);
GHook* g_hook_alloc (GHookList *hook_list);
void g_hook_free (GHookList *hook_list,
      GHook *hook);
GHook * g_hook_ref (GHookList *hook_list,
      GHook *hook);
void g_hook_unref (GHookList *hook_list,
      GHook *hook);
gboolean g_hook_destroy (GHookList *hook_list,
      gulong hook_id);
void g_hook_destroy_link (GHookList *hook_list,
      GHook *hook);
void g_hook_prepend (GHookList *hook_list,
      GHook *hook);
void g_hook_insert_before (GHookList *hook_list,
      GHook *sibling,
      GHook *hook);
void g_hook_insert_sorted (GHookList *hook_list,
      GHook *hook,
      GHookCompareFunc func);
GHook* g_hook_get (GHookList *hook_list,
      gulong hook_id);
GHook* g_hook_find (GHookList *hook_list,
      gboolean need_valids,
      GHookFindFunc func,
      gpointer data);
GHook* g_hook_find_data (GHookList *hook_list,
      gboolean need_valids,
      gpointer data);
GHook* g_hook_find_func (GHookList *hook_list,
      gboolean need_valids,
      gpointer func);
GHook* g_hook_find_func_data (GHookList *hook_list,
      gboolean need_valids,
      gpointer func,
      gpointer data);

GHook* g_hook_first_valid (GHookList *hook_list,
      gboolean may_be_in_call);



GHook* g_hook_next_valid (GHookList *hook_list,
      GHook *hook,
      gboolean may_be_in_call);

gint g_hook_compare_ids (GHook *new_hook,
      GHook *sibling);





void g_hook_list_invoke (GHookList *hook_list,
      gboolean may_recurse);



void g_hook_list_invoke_check (GHookList *hook_list,
      gboolean may_recurse);


void g_hook_list_marshal (GHookList *hook_list,
      gboolean may_recurse,
      GHookMarshaller marshaller,
      gpointer marshal_data);
void g_hook_list_marshal_check (GHookList *hook_list,
      gboolean may_recurse,
      GHookCheckMarshaller marshaller,
      gpointer marshal_data);


# 51 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghostutils.h" 1
# 27 "/usr/include/glib-2.0/glib/ghostutils.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/ghostutils.h" 2



gboolean g_hostname_is_non_ascii (const gchar *hostname);
gboolean g_hostname_is_ascii_encoded (const gchar *hostname);
gboolean g_hostname_is_ip_address (const gchar *hostname);

gchar *g_hostname_to_ascii (const gchar *hostname);
gchar *g_hostname_to_unicode (const gchar *hostname);


# 52 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/giochannel.h" 1
# 34 "/usr/include/glib-2.0/glib/giochannel.h"
# 1 "/usr/include/glib-2.0/glib/gconvert.h" 1
# 35 "/usr/include/glib-2.0/glib/giochannel.h" 2
# 1 "/usr/include/glib-2.0/glib/gmain.h" 1
# 27 "/usr/include/glib-2.0/glib/gmain.h"
# 1 "/usr/include/glib-2.0/glib/gpoll.h" 1
# 27 "/usr/include/glib-2.0/glib/gpoll.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/gpoll.h" 2


# 61 "/usr/include/glib-2.0/glib/gpoll.h"
typedef struct _GPollFD GPollFD;
typedef gint (*GPollFunc) (GPollFD *ufds,
     guint nfsd,
     gint timeout_);

struct _GPollFD
{



  gint fd;

  gushort events;
  gushort revents;
};
# 87 "/usr/include/glib-2.0/glib/gpoll.h"
gint g_poll (GPollFD *fds,
      guint nfds,
      gint timeout);


# 28 "/usr/include/glib-2.0/glib/gmain.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 34 "/usr/include/glib-2.0/glib/gslist.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 35 "/usr/include/glib-2.0/glib/gslist.h" 2



typedef struct _GSList GSList;

struct _GSList
{
  gpointer data;
  GSList *next;
};



GSList* g_slist_alloc (void) __attribute__((warn_unused_result));
void g_slist_free (GSList *list);
void g_slist_free_1 (GSList *list);

GSList* g_slist_append (GSList *list,
       gpointer data) __attribute__((warn_unused_result));
GSList* g_slist_prepend (GSList *list,
       gpointer data) __attribute__((warn_unused_result));
GSList* g_slist_insert (GSList *list,
       gpointer data,
       gint position) __attribute__((warn_unused_result));
GSList* g_slist_insert_sorted (GSList *list,
       gpointer data,
       GCompareFunc func) __attribute__((warn_unused_result));
GSList* g_slist_insert_sorted_with_data (GSList *list,
       gpointer data,
       GCompareDataFunc func,
       gpointer user_data) __attribute__((warn_unused_result));
GSList* g_slist_insert_before (GSList *slist,
       GSList *sibling,
       gpointer data) __attribute__((warn_unused_result));
GSList* g_slist_concat (GSList *list1,
       GSList *list2) __attribute__((warn_unused_result));
GSList* g_slist_remove (GSList *list,
       gconstpointer data) __attribute__((warn_unused_result));
GSList* g_slist_remove_all (GSList *list,
       gconstpointer data) __attribute__((warn_unused_result));
GSList* g_slist_remove_link (GSList *list,
       GSList *link_) __attribute__((warn_unused_result));
GSList* g_slist_delete_link (GSList *list,
       GSList *link_) __attribute__((warn_unused_result));
GSList* g_slist_reverse (GSList *list) __attribute__((warn_unused_result));
GSList* g_slist_copy (GSList *list) __attribute__((warn_unused_result));
GSList* g_slist_nth (GSList *list,
       guint n);
GSList* g_slist_find (GSList *list,
       gconstpointer data);
GSList* g_slist_find_custom (GSList *list,
       gconstpointer data,
       GCompareFunc func);
gint g_slist_position (GSList *list,
       GSList *llink);
gint g_slist_index (GSList *list,
       gconstpointer data);
GSList* g_slist_last (GSList *list);
guint g_slist_length (GSList *list);
void g_slist_foreach (GSList *list,
       GFunc func,
       gpointer user_data);
GSList* g_slist_sort (GSList *list,
       GCompareFunc compare_func) __attribute__((warn_unused_result));
GSList* g_slist_sort_with_data (GSList *list,
       GCompareDataFunc compare_func,
       gpointer user_data) __attribute__((warn_unused_result));
gpointer g_slist_nth_data (GSList *list,
       guint n);




void g_slist_push_allocator (gpointer dummy);
void g_slist_pop_allocator (void);



# 29 "/usr/include/glib-2.0/glib/gmain.h" 2
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 30 "/usr/include/glib-2.0/glib/gmain.h" 2



typedef struct _GMainContext GMainContext;
typedef struct _GMainLoop GMainLoop;
typedef struct _GSource GSource;
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs;
typedef struct _GSourceFuncs GSourceFuncs;

typedef gboolean (*GSourceFunc) (gpointer data);
typedef void (*GChildWatchFunc) (GPid pid,
           gint status,
           gpointer data);
struct _GSource
{

  gpointer callback_data;
  GSourceCallbackFuncs *callback_funcs;

  GSourceFuncs *source_funcs;
  guint ref_count;

  GMainContext *context;

  gint priority;
  guint flags;
  guint source_id;

  GSList *poll_fds;

  GSource *prev;
  GSource *next;

  gpointer reserved1;
  gpointer reserved2;
};

struct _GSourceCallbackFuncs
{
  void (*ref) (gpointer cb_data);
  void (*unref) (gpointer cb_data);
  void (*get) (gpointer cb_data,
   GSource *source,
   GSourceFunc *func,
   gpointer *data);
};

typedef void (*GSourceDummyMarshal) (void);

struct _GSourceFuncs
{
  gboolean (*prepare) (GSource *source,
   gint *timeout_);
  gboolean (*check) (GSource *source);
  gboolean (*dispatch) (GSource *source,
   GSourceFunc callback,
   gpointer user_data);
  void (*finalize) (GSource *source);


  GSourceFunc closure_callback;
  GSourceDummyMarshal closure_marshal;
};
# 104 "/usr/include/glib-2.0/glib/gmain.h"
GMainContext *g_main_context_new (void);
GMainContext *g_main_context_ref (GMainContext *context);
void g_main_context_unref (GMainContext *context);
GMainContext *g_main_context_default (void);

gboolean g_main_context_iteration (GMainContext *context,
     gboolean may_block);
gboolean g_main_context_pending (GMainContext *context);



GSource *g_main_context_find_source_by_id (GMainContext *context,
            guint source_id);
GSource *g_main_context_find_source_by_user_data (GMainContext *context,
            gpointer user_data);
GSource *g_main_context_find_source_by_funcs_user_data (GMainContext *context,
             GSourceFuncs *funcs,
            gpointer user_data);



void g_main_context_wakeup (GMainContext *context);
gboolean g_main_context_acquire (GMainContext *context);
void g_main_context_release (GMainContext *context);
gboolean g_main_context_is_owner (GMainContext *context);
gboolean g_main_context_wait (GMainContext *context,
     GCond *cond,
     GMutex *mutex);

gboolean g_main_context_prepare (GMainContext *context,
      gint *priority);
gint g_main_context_query (GMainContext *context,
      gint max_priority,
      gint *timeout_,
      GPollFD *fds,
      gint n_fds);
gint g_main_context_check (GMainContext *context,
      gint max_priority,
      GPollFD *fds,
      gint n_fds);
void g_main_context_dispatch (GMainContext *context);

void g_main_context_set_poll_func (GMainContext *context,
           GPollFunc func);
GPollFunc g_main_context_get_poll_func (GMainContext *context);



void g_main_context_add_poll (GMainContext *context,
         GPollFD *fd,
         gint priority);
void g_main_context_remove_poll (GMainContext *context,
         GPollFD *fd);

gint g_main_depth (void);
GSource *g_main_current_source (void);



void g_main_context_push_thread_default (GMainContext *context);
void g_main_context_pop_thread_default (GMainContext *context);
GMainContext *g_main_context_get_thread_default (void);



GMainLoop *g_main_loop_new (GMainContext *context,
           gboolean is_running);
void g_main_loop_run (GMainLoop *loop);
void g_main_loop_quit (GMainLoop *loop);
GMainLoop *g_main_loop_ref (GMainLoop *loop);
void g_main_loop_unref (GMainLoop *loop);
gboolean g_main_loop_is_running (GMainLoop *loop);
GMainContext *g_main_loop_get_context (GMainLoop *loop);



GSource *g_source_new (GSourceFuncs *source_funcs,
       guint struct_size);
GSource *g_source_ref (GSource *source);
void g_source_unref (GSource *source);

guint g_source_attach (GSource *source,
       GMainContext *context);
void g_source_destroy (GSource *source);

void g_source_set_priority (GSource *source,
       gint priority);
gint g_source_get_priority (GSource *source);
void g_source_set_can_recurse (GSource *source,
       gboolean can_recurse);
gboolean g_source_get_can_recurse (GSource *source);
guint g_source_get_id (GSource *source);

GMainContext *g_source_get_context (GSource *source);

void g_source_set_callback (GSource *source,
       GSourceFunc func,
       gpointer data,
       GDestroyNotify notify);

void g_source_set_funcs (GSource *source,
                                   GSourceFuncs *funcs);
gboolean g_source_is_destroyed (GSource *source);


void g_source_set_callback_indirect (GSource *source,
         gpointer callback_data,
         GSourceCallbackFuncs *callback_funcs);

void g_source_add_poll (GSource *source,
        GPollFD *fd);
void g_source_remove_poll (GSource *source,
        GPollFD *fd);

void g_source_get_current_time (GSource *source,
        GTimeVal *timeval);







GSource *g_idle_source_new (void);
GSource *g_child_watch_source_new (GPid pid);
GSource *g_timeout_source_new (guint interval);
GSource *g_timeout_source_new_seconds (guint interval);



void g_get_current_time (GTimeVal *result);
# 259 "/usr/include/glib-2.0/glib/gmain.h"
gboolean g_source_remove (guint tag);
gboolean g_source_remove_by_user_data (gpointer user_data);
gboolean g_source_remove_by_funcs_user_data (GSourceFuncs *funcs,
           gpointer user_data);


guint g_timeout_add_full (gint priority,
         guint interval,
         GSourceFunc function,
         gpointer data,
         GDestroyNotify notify);
guint g_timeout_add (guint interval,
         GSourceFunc function,
         gpointer data);
guint g_timeout_add_seconds_full (gint priority,
                                     guint interval,
                                     GSourceFunc function,
                                     gpointer data,
                                     GDestroyNotify notify);
guint g_timeout_add_seconds (guint interval,
         GSourceFunc function,
         gpointer data);
guint g_child_watch_add_full (gint priority,
         GPid pid,
         GChildWatchFunc function,
         gpointer data,
         GDestroyNotify notify);
guint g_child_watch_add (GPid pid,
         GChildWatchFunc function,
         gpointer data);
guint g_idle_add (GSourceFunc function,
         gpointer data);
guint g_idle_add_full (gint priority,
         GSourceFunc function,
         gpointer data,
         GDestroyNotify notify);
gboolean g_idle_remove_by_data (gpointer data);


extern GSourceFuncs g_timeout_funcs;
extern GSourceFuncs g_child_watch_funcs;
extern GSourceFuncs g_idle_funcs;


# 36 "/usr/include/glib-2.0/glib/giochannel.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 34 "/usr/include/glib-2.0/glib/gstring.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gstring.h" 2
# 1 "/usr/include/glib-2.0/glib/gunicode.h" 1
# 29 "/usr/include/glib-2.0/glib/gunicode.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 30 "/usr/include/glib-2.0/glib/gunicode.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 31 "/usr/include/glib-2.0/glib/gunicode.h" 2



typedef guint32 gunichar;
typedef guint16 gunichar2;




typedef enum
{
  G_UNICODE_CONTROL,
  G_UNICODE_FORMAT,
  G_UNICODE_UNASSIGNED,
  G_UNICODE_PRIVATE_USE,
  G_UNICODE_SURROGATE,
  G_UNICODE_LOWERCASE_LETTER,
  G_UNICODE_MODIFIER_LETTER,
  G_UNICODE_OTHER_LETTER,
  G_UNICODE_TITLECASE_LETTER,
  G_UNICODE_UPPERCASE_LETTER,
  G_UNICODE_COMBINING_MARK,
  G_UNICODE_ENCLOSING_MARK,
  G_UNICODE_NON_SPACING_MARK,
  G_UNICODE_DECIMAL_NUMBER,
  G_UNICODE_LETTER_NUMBER,
  G_UNICODE_OTHER_NUMBER,
  G_UNICODE_CONNECT_PUNCTUATION,
  G_UNICODE_DASH_PUNCTUATION,
  G_UNICODE_CLOSE_PUNCTUATION,
  G_UNICODE_FINAL_PUNCTUATION,
  G_UNICODE_INITIAL_PUNCTUATION,
  G_UNICODE_OTHER_PUNCTUATION,
  G_UNICODE_OPEN_PUNCTUATION,
  G_UNICODE_CURRENCY_SYMBOL,
  G_UNICODE_MODIFIER_SYMBOL,
  G_UNICODE_MATH_SYMBOL,
  G_UNICODE_OTHER_SYMBOL,
  G_UNICODE_LINE_SEPARATOR,
  G_UNICODE_PARAGRAPH_SEPARATOR,
  G_UNICODE_SPACE_SEPARATOR
} GUnicodeType;






typedef enum
{
  G_UNICODE_BREAK_MANDATORY,
  G_UNICODE_BREAK_CARRIAGE_RETURN,
  G_UNICODE_BREAK_LINE_FEED,
  G_UNICODE_BREAK_COMBINING_MARK,
  G_UNICODE_BREAK_SURROGATE,
  G_UNICODE_BREAK_ZERO_WIDTH_SPACE,
  G_UNICODE_BREAK_INSEPARABLE,
  G_UNICODE_BREAK_NON_BREAKING_GLUE,
  G_UNICODE_BREAK_CONTINGENT,
  G_UNICODE_BREAK_SPACE,
  G_UNICODE_BREAK_AFTER,
  G_UNICODE_BREAK_BEFORE,
  G_UNICODE_BREAK_BEFORE_AND_AFTER,
  G_UNICODE_BREAK_HYPHEN,
  G_UNICODE_BREAK_NON_STARTER,
  G_UNICODE_BREAK_OPEN_PUNCTUATION,
  G_UNICODE_BREAK_CLOSE_PUNCTUATION,
  G_UNICODE_BREAK_QUOTATION,
  G_UNICODE_BREAK_EXCLAMATION,
  G_UNICODE_BREAK_IDEOGRAPHIC,
  G_UNICODE_BREAK_NUMERIC,
  G_UNICODE_BREAK_INFIX_SEPARATOR,
  G_UNICODE_BREAK_SYMBOL,
  G_UNICODE_BREAK_ALPHABETIC,
  G_UNICODE_BREAK_PREFIX,
  G_UNICODE_BREAK_POSTFIX,
  G_UNICODE_BREAK_COMPLEX_CONTEXT,
  G_UNICODE_BREAK_AMBIGUOUS,
  G_UNICODE_BREAK_UNKNOWN,
  G_UNICODE_BREAK_NEXT_LINE,
  G_UNICODE_BREAK_WORD_JOINER,
  G_UNICODE_BREAK_HANGUL_L_JAMO,
  G_UNICODE_BREAK_HANGUL_V_JAMO,
  G_UNICODE_BREAK_HANGUL_T_JAMO,
  G_UNICODE_BREAK_HANGUL_LV_SYLLABLE,
  G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE
} GUnicodeBreakType;

typedef enum
{
  G_UNICODE_SCRIPT_INVALID_CODE = -1,
  G_UNICODE_SCRIPT_COMMON = 0,
  G_UNICODE_SCRIPT_INHERITED,
  G_UNICODE_SCRIPT_ARABIC,
  G_UNICODE_SCRIPT_ARMENIAN,
  G_UNICODE_SCRIPT_BENGALI,
  G_UNICODE_SCRIPT_BOPOMOFO,
  G_UNICODE_SCRIPT_CHEROKEE,
  G_UNICODE_SCRIPT_COPTIC,
  G_UNICODE_SCRIPT_CYRILLIC,
  G_UNICODE_SCRIPT_DESERET,
  G_UNICODE_SCRIPT_DEVANAGARI,
  G_UNICODE_SCRIPT_ETHIOPIC,
  G_UNICODE_SCRIPT_GEORGIAN,
  G_UNICODE_SCRIPT_GOTHIC,
  G_UNICODE_SCRIPT_GREEK,
  G_UNICODE_SCRIPT_GUJARATI,
  G_UNICODE_SCRIPT_GURMUKHI,
  G_UNICODE_SCRIPT_HAN,
  G_UNICODE_SCRIPT_HANGUL,
  G_UNICODE_SCRIPT_HEBREW,
  G_UNICODE_SCRIPT_HIRAGANA,
  G_UNICODE_SCRIPT_KANNADA,
  G_UNICODE_SCRIPT_KATAKANA,
  G_UNICODE_SCRIPT_KHMER,
  G_UNICODE_SCRIPT_LAO,
  G_UNICODE_SCRIPT_LATIN,
  G_UNICODE_SCRIPT_MALAYALAM,
  G_UNICODE_SCRIPT_MONGOLIAN,
  G_UNICODE_SCRIPT_MYANMAR,
  G_UNICODE_SCRIPT_OGHAM,
  G_UNICODE_SCRIPT_OLD_ITALIC,
  G_UNICODE_SCRIPT_ORIYA,
  G_UNICODE_SCRIPT_RUNIC,
  G_UNICODE_SCRIPT_SINHALA,
  G_UNICODE_SCRIPT_SYRIAC,
  G_UNICODE_SCRIPT_TAMIL,
  G_UNICODE_SCRIPT_TELUGU,
  G_UNICODE_SCRIPT_THAANA,
  G_UNICODE_SCRIPT_THAI,
  G_UNICODE_SCRIPT_TIBETAN,
  G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL,
  G_UNICODE_SCRIPT_YI,
  G_UNICODE_SCRIPT_TAGALOG,
  G_UNICODE_SCRIPT_HANUNOO,
  G_UNICODE_SCRIPT_BUHID,
  G_UNICODE_SCRIPT_TAGBANWA,


  G_UNICODE_SCRIPT_BRAILLE,
  G_UNICODE_SCRIPT_CYPRIOT,
  G_UNICODE_SCRIPT_LIMBU,
  G_UNICODE_SCRIPT_OSMANYA,
  G_UNICODE_SCRIPT_SHAVIAN,
  G_UNICODE_SCRIPT_LINEAR_B,
  G_UNICODE_SCRIPT_TAI_LE,
  G_UNICODE_SCRIPT_UGARITIC,


  G_UNICODE_SCRIPT_NEW_TAI_LUE,
  G_UNICODE_SCRIPT_BUGINESE,
  G_UNICODE_SCRIPT_GLAGOLITIC,
  G_UNICODE_SCRIPT_TIFINAGH,
  G_UNICODE_SCRIPT_SYLOTI_NAGRI,
  G_UNICODE_SCRIPT_OLD_PERSIAN,
  G_UNICODE_SCRIPT_KHAROSHTHI,


  G_UNICODE_SCRIPT_UNKNOWN,
  G_UNICODE_SCRIPT_BALINESE,
  G_UNICODE_SCRIPT_CUNEIFORM,
  G_UNICODE_SCRIPT_PHOENICIAN,
  G_UNICODE_SCRIPT_PHAGS_PA,
  G_UNICODE_SCRIPT_NKO,


  G_UNICODE_SCRIPT_KAYAH_LI,
  G_UNICODE_SCRIPT_LEPCHA,
  G_UNICODE_SCRIPT_REJANG,
  G_UNICODE_SCRIPT_SUNDANESE,
  G_UNICODE_SCRIPT_SAURASHTRA,
  G_UNICODE_SCRIPT_CHAM,
  G_UNICODE_SCRIPT_OL_CHIKI,
  G_UNICODE_SCRIPT_VAI,
  G_UNICODE_SCRIPT_CARIAN,
  G_UNICODE_SCRIPT_LYCIAN,
  G_UNICODE_SCRIPT_LYDIAN
} GUnicodeScript;







gboolean g_get_charset (const char **charset);



gboolean g_unichar_isalnum (gunichar c) __attribute__((__const__));
gboolean g_unichar_isalpha (gunichar c) __attribute__((__const__));
gboolean g_unichar_iscntrl (gunichar c) __attribute__((__const__));
gboolean g_unichar_isdigit (gunichar c) __attribute__((__const__));
gboolean g_unichar_isgraph (gunichar c) __attribute__((__const__));
gboolean g_unichar_islower (gunichar c) __attribute__((__const__));
gboolean g_unichar_isprint (gunichar c) __attribute__((__const__));
gboolean g_unichar_ispunct (gunichar c) __attribute__((__const__));
gboolean g_unichar_isspace (gunichar c) __attribute__((__const__));
gboolean g_unichar_isupper (gunichar c) __attribute__((__const__));
gboolean g_unichar_isxdigit (gunichar c) __attribute__((__const__));
gboolean g_unichar_istitle (gunichar c) __attribute__((__const__));
gboolean g_unichar_isdefined (gunichar c) __attribute__((__const__));
gboolean g_unichar_iswide (gunichar c) __attribute__((__const__));
gboolean g_unichar_iswide_cjk(gunichar c) __attribute__((__const__));
gboolean g_unichar_iszerowidth(gunichar c) __attribute__((__const__));
gboolean g_unichar_ismark (gunichar c) __attribute__((__const__));



gunichar g_unichar_toupper (gunichar c) __attribute__((__const__));
gunichar g_unichar_tolower (gunichar c) __attribute__((__const__));
gunichar g_unichar_totitle (gunichar c) __attribute__((__const__));



gint g_unichar_digit_value (gunichar c) __attribute__((__const__));

gint g_unichar_xdigit_value (gunichar c) __attribute__((__const__));


GUnicodeType g_unichar_type (gunichar c) __attribute__((__const__));


GUnicodeBreakType g_unichar_break_type (gunichar c) __attribute__((__const__));


gint g_unichar_combining_class (gunichar uc) __attribute__((__const__));





void g_unicode_canonical_ordering (gunichar *string,
       gsize len);




gunichar *g_unicode_canonical_decomposition (gunichar ch,
          gsize *result_len) __attribute__((__malloc__));



extern const gchar * const g_utf8_skip;



gunichar g_utf8_get_char (const gchar *p) __attribute__((__pure__));
gunichar g_utf8_get_char_validated (const gchar *p,
        gssize max_len) __attribute__((__pure__));

gchar* g_utf8_offset_to_pointer (const gchar *str,
                                   glong offset) __attribute__((__pure__));
glong g_utf8_pointer_to_offset (const gchar *str,
       const gchar *pos) __attribute__((__pure__));
gchar* g_utf8_prev_char (const gchar *p) __attribute__((__pure__));
gchar* g_utf8_find_next_char (const gchar *p,
       const gchar *end) __attribute__((__pure__));
gchar* g_utf8_find_prev_char (const gchar *str,
       const gchar *p) __attribute__((__pure__));

glong g_utf8_strlen (const gchar *p,
       gssize max) __attribute__((__pure__));


gchar* g_utf8_strncpy (gchar *dest,
         const gchar *src,
         gsize n);



gchar* g_utf8_strchr (const gchar *p,
         gssize len,
         gunichar c);
gchar* g_utf8_strrchr (const gchar *p,
         gssize len,
         gunichar c);
gchar* g_utf8_strreverse (const gchar *str,
     gssize len);

gunichar2 *g_utf8_to_utf16 (const gchar *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gunichar * g_utf8_to_ucs4 (const gchar *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gunichar * g_utf8_to_ucs4_fast (const gchar *str,
    glong len,
    glong *items_written) __attribute__((__malloc__));
gunichar * g_utf16_to_ucs4 (const gunichar2 *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gchar* g_utf16_to_utf8 (const gunichar2 *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gunichar2 *g_ucs4_to_utf16 (const gunichar *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gchar* g_ucs4_to_utf8 (const gunichar *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));





gint g_unichar_to_utf8 (gunichar c,
        gchar *outbuf);





gboolean g_utf8_validate (const gchar *str,
                          gssize max_len,
                          const gchar **end);


gboolean g_unichar_validate (gunichar ch) __attribute__((__const__));

gchar *g_utf8_strup (const gchar *str,
         gssize len) __attribute__((__malloc__));
gchar *g_utf8_strdown (const gchar *str,
         gssize len) __attribute__((__malloc__));
gchar *g_utf8_casefold (const gchar *str,
   gssize len) __attribute__((__malloc__));

typedef enum {
  G_NORMALIZE_DEFAULT,
  G_NORMALIZE_NFD = G_NORMALIZE_DEFAULT,
  G_NORMALIZE_DEFAULT_COMPOSE,
  G_NORMALIZE_NFC = G_NORMALIZE_DEFAULT_COMPOSE,
  G_NORMALIZE_ALL,
  G_NORMALIZE_NFKD = G_NORMALIZE_ALL,
  G_NORMALIZE_ALL_COMPOSE,
  G_NORMALIZE_NFKC = G_NORMALIZE_ALL_COMPOSE
} GNormalizeMode;

gchar *g_utf8_normalize (const gchar *str,
    gssize len,
    GNormalizeMode mode) __attribute__((__malloc__));

gint g_utf8_collate (const gchar *str1,
      const gchar *str2) __attribute__((__pure__));
gchar *g_utf8_collate_key (const gchar *str,
      gssize len) __attribute__((__malloc__));
gchar *g_utf8_collate_key_for_filename (const gchar *str,
                   gssize len) __attribute__((__malloc__));

gboolean g_unichar_get_mirror_char (gunichar ch,
                                    gunichar *mirrored_ch);

GUnicodeScript g_unichar_get_script (gunichar ch) __attribute__((__const__));




gchar *_g_utf8_make_valid (const gchar *name);


# 36 "/usr/include/glib-2.0/glib/gstring.h" 2
# 1 "/usr/include/glib-2.0/glib/gutils.h" 1
# 37 "/usr/include/glib-2.0/glib/gstring.h" 2



typedef struct _GString GString;
typedef struct _GStringChunk GStringChunk;

struct _GString
{
  gchar *str;
  gsize len;
  gsize allocated_len;
};



GStringChunk* g_string_chunk_new (gsize size);
void g_string_chunk_free (GStringChunk *chunk);
void g_string_chunk_clear (GStringChunk *chunk);
gchar* g_string_chunk_insert (GStringChunk *chunk,
         const gchar *string);
gchar* g_string_chunk_insert_len (GStringChunk *chunk,
         const gchar *string,
         gssize len);
gchar* g_string_chunk_insert_const (GStringChunk *chunk,
         const gchar *string);




GString* g_string_new (const gchar *init);
GString* g_string_new_len (const gchar *init,
                                         gssize len);
GString* g_string_sized_new (gsize dfl_size);
gchar* g_string_free (GString *string,
      gboolean free_segment);
gboolean g_string_equal (const GString *v,
      const GString *v2);
guint g_string_hash (const GString *str);
GString* g_string_assign (GString *string,
      const gchar *rval);
GString* g_string_truncate (GString *string,
      gsize len);
GString* g_string_set_size (GString *string,
      gsize len);
GString* g_string_insert_len (GString *string,
                                         gssize pos,
                                         const gchar *val,
                                         gssize len);
GString* g_string_append (GString *string,
                    const gchar *val);
GString* g_string_append_len (GString *string,
                    const gchar *val,
                                         gssize len);
GString* g_string_append_c (GString *string,
      gchar c);
GString* g_string_append_unichar (GString *string,
      gunichar wc);
GString* g_string_prepend (GString *string,
      const gchar *val);
GString* g_string_prepend_c (GString *string,
      gchar c);
GString* g_string_prepend_unichar (GString *string,
      gunichar wc);
GString* g_string_prepend_len (GString *string,
                    const gchar *val,
                                         gssize len);
GString* g_string_insert (GString *string,
      gssize pos,
      const gchar *val);
GString* g_string_insert_c (GString *string,
      gssize pos,
      gchar c);
GString* g_string_insert_unichar (GString *string,
      gssize pos,
      gunichar wc);
GString* g_string_overwrite (GString *string,
      gsize pos,
      const gchar *val);
GString* g_string_overwrite_len (GString *string,
      gsize pos,
      const gchar *val,
      gssize len);
GString* g_string_erase (GString *string,
      gssize pos,
      gssize len);
GString* g_string_ascii_down (GString *string);
GString* g_string_ascii_up (GString *string);
void g_string_vprintf (GString *string,
      const gchar *format,
      va_list args);
void g_string_printf (GString *string,
      const gchar *format,
      ...) __attribute__((__format__ (__printf__, 2, 3)));
void g_string_append_vprintf (GString *string,
      const gchar *format,
      va_list args);
void g_string_append_printf (GString *string,
      const gchar *format,
      ...) __attribute__((__format__ (__printf__, 2, 3)));
GString * g_string_append_uri_escaped(GString *string,
      const char *unescaped,
      const char *reserved_chars_allowed,
      gboolean allow_utf8);



static inline GString*
g_string_append_c_inline (GString *gstring,
                          gchar c)
{
  if (gstring->len + 1 < gstring->allocated_len)
    {
      gstring->str[gstring->len++] = c;
      gstring->str[gstring->len] = 0;
    }
  else
    g_string_insert_c (gstring, -1, c);
  return gstring;
}
# 167 "/usr/include/glib-2.0/glib/gstring.h"
GString* g_string_down (GString *string);
GString* g_string_up (GString *string);








# 37 "/usr/include/glib-2.0/glib/giochannel.h" 2






typedef struct _GIOChannel GIOChannel;
typedef struct _GIOFuncs GIOFuncs;

typedef enum
{
  G_IO_ERROR_NONE,
  G_IO_ERROR_AGAIN,
  G_IO_ERROR_INVAL,
  G_IO_ERROR_UNKNOWN
} GIOError;



typedef enum
{

  G_IO_CHANNEL_ERROR_FBIG,
  G_IO_CHANNEL_ERROR_INVAL,
  G_IO_CHANNEL_ERROR_IO,
  G_IO_CHANNEL_ERROR_ISDIR,
  G_IO_CHANNEL_ERROR_NOSPC,
  G_IO_CHANNEL_ERROR_NXIO,
  G_IO_CHANNEL_ERROR_OVERFLOW,
  G_IO_CHANNEL_ERROR_PIPE,

  G_IO_CHANNEL_ERROR_FAILED
} GIOChannelError;

typedef enum
{
  G_IO_STATUS_ERROR,
  G_IO_STATUS_NORMAL,
  G_IO_STATUS_EOF,
  G_IO_STATUS_AGAIN
} GIOStatus;

typedef enum
{
  G_SEEK_CUR,
  G_SEEK_SET,
  G_SEEK_END
} GSeekType;

typedef enum
{
  G_IO_IN =1,
  G_IO_OUT =4,
  G_IO_PRI =2,
  G_IO_ERR =8,
  G_IO_HUP =16,
  G_IO_NVAL =32
} GIOCondition;

typedef enum
{
  G_IO_FLAG_APPEND = 1 << 0,
  G_IO_FLAG_NONBLOCK = 1 << 1,
  G_IO_FLAG_IS_READABLE = 1 << 2,
  G_IO_FLAG_IS_WRITEABLE = 1 << 3,
  G_IO_FLAG_IS_SEEKABLE = 1 << 4,
  G_IO_FLAG_MASK = (1 << 5) - 1,
  G_IO_FLAG_GET_MASK = G_IO_FLAG_MASK,
  G_IO_FLAG_SET_MASK = G_IO_FLAG_APPEND | G_IO_FLAG_NONBLOCK
} GIOFlags;

struct _GIOChannel
{

  gint ref_count;
  GIOFuncs *funcs;

  gchar *encoding;
  GIConv read_cd;
  GIConv write_cd;
  gchar *line_term;
  guint line_term_len;

  gsize buf_size;
  GString *read_buf;
  GString *encoded_read_buf;
  GString *write_buf;
  gchar partial_write_buf[6];



  guint use_buffer : 1;
  guint do_encode : 1;
  guint close_on_unref : 1;
  guint is_readable : 1;
  guint is_writeable : 1;
  guint is_seekable : 1;

  gpointer reserved1;
  gpointer reserved2;
};

typedef gboolean (*GIOFunc) (GIOChannel *source,
        GIOCondition condition,
        gpointer data);
struct _GIOFuncs
{
  GIOStatus (*io_read) (GIOChannel *channel,
             gchar *buf,
      gsize count,
      gsize *bytes_read,
      GError **err);
  GIOStatus (*io_write) (GIOChannel *channel,
      const gchar *buf,
      gsize count,
      gsize *bytes_written,
      GError **err);
  GIOStatus (*io_seek) (GIOChannel *channel,
      gint64 offset,
      GSeekType type,
      GError **err);
  GIOStatus (*io_close) (GIOChannel *channel,
      GError **err);
  GSource* (*io_create_watch) (GIOChannel *channel,
      GIOCondition condition);
  void (*io_free) (GIOChannel *channel);
  GIOStatus (*io_set_flags) (GIOChannel *channel,
                                  GIOFlags flags,
      GError **err);
  GIOFlags (*io_get_flags) (GIOChannel *channel);
};

void g_io_channel_init (GIOChannel *channel);
GIOChannel *g_io_channel_ref (GIOChannel *channel);
void g_io_channel_unref (GIOChannel *channel);


GIOError g_io_channel_read (GIOChannel *channel,
            gchar *buf,
            gsize count,
            gsize *bytes_read);
GIOError g_io_channel_write (GIOChannel *channel,
            const gchar *buf,
            gsize count,
            gsize *bytes_written);
GIOError g_io_channel_seek (GIOChannel *channel,
            gint64 offset,
            GSeekType type);
void g_io_channel_close (GIOChannel *channel);


GIOStatus g_io_channel_shutdown (GIOChannel *channel,
     gboolean flush,
     GError **err);
guint g_io_add_watch_full (GIOChannel *channel,
     gint priority,
     GIOCondition condition,
     GIOFunc func,
     gpointer user_data,
     GDestroyNotify notify);
GSource * g_io_create_watch (GIOChannel *channel,
     GIOCondition condition);
guint g_io_add_watch (GIOChannel *channel,
     GIOCondition condition,
     GIOFunc func,
     gpointer user_data);




void g_io_channel_set_buffer_size (GIOChannel *channel,
        gsize size);
gsize g_io_channel_get_buffer_size (GIOChannel *channel);
GIOCondition g_io_channel_get_buffer_condition (GIOChannel *channel);
GIOStatus g_io_channel_set_flags (GIOChannel *channel,
        GIOFlags flags,
        GError **error);
GIOFlags g_io_channel_get_flags (GIOChannel *channel);
void g_io_channel_set_line_term (GIOChannel *channel,
        const gchar *line_term,
        gint length);
const gchar* g_io_channel_get_line_term (GIOChannel *channel,
        gint *length);
void g_io_channel_set_buffered (GIOChannel *channel,
        gboolean buffered);
gboolean g_io_channel_get_buffered (GIOChannel *channel);
GIOStatus g_io_channel_set_encoding (GIOChannel *channel,
        const gchar *encoding,
        GError **error);
const gchar* g_io_channel_get_encoding (GIOChannel *channel);
void g_io_channel_set_close_on_unref (GIOChannel *channel,
        gboolean do_close);
gboolean g_io_channel_get_close_on_unref (GIOChannel *channel);


GIOStatus g_io_channel_flush (GIOChannel *channel,
        GError **error);
GIOStatus g_io_channel_read_line (GIOChannel *channel,
        gchar **str_return,
        gsize *length,
        gsize *terminator_pos,
        GError **error);
GIOStatus g_io_channel_read_line_string (GIOChannel *channel,
        GString *buffer,
        gsize *terminator_pos,
        GError **error);
GIOStatus g_io_channel_read_to_end (GIOChannel *channel,
        gchar **str_return,
        gsize *length,
        GError **error);
GIOStatus g_io_channel_read_chars (GIOChannel *channel,
        gchar *buf,
        gsize count,
        gsize *bytes_read,
        GError **error);
GIOStatus g_io_channel_read_unichar (GIOChannel *channel,
        gunichar *thechar,
        GError **error);
GIOStatus g_io_channel_write_chars (GIOChannel *channel,
        const gchar *buf,
        gssize count,
        gsize *bytes_written,
        GError **error);
GIOStatus g_io_channel_write_unichar (GIOChannel *channel,
        gunichar thechar,
        GError **error);
GIOStatus g_io_channel_seek_position (GIOChannel *channel,
        gint64 offset,
        GSeekType type,
        GError **error);




GIOChannel* g_io_channel_new_file (const gchar *filename,
        const gchar *mode,
        GError **error);



GQuark g_io_channel_error_quark (void);
GIOChannelError g_io_channel_error_from_errno (gint en);
# 298 "/usr/include/glib-2.0/glib/giochannel.h"
GIOChannel* g_io_channel_unix_new (int fd);
gint g_io_channel_unix_get_fd (GIOChannel *channel);



extern GSourceFuncs g_io_watch_funcs;
# 364 "/usr/include/glib-2.0/glib/giochannel.h"

# 53 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gkeyfile.h" 1
# 30 "/usr/include/glib-2.0/glib/gkeyfile.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 31 "/usr/include/glib-2.0/glib/gkeyfile.h" 2



typedef enum
{
  G_KEY_FILE_ERROR_UNKNOWN_ENCODING,
  G_KEY_FILE_ERROR_PARSE,
  G_KEY_FILE_ERROR_NOT_FOUND,
  G_KEY_FILE_ERROR_KEY_NOT_FOUND,
  G_KEY_FILE_ERROR_GROUP_NOT_FOUND,
  G_KEY_FILE_ERROR_INVALID_VALUE
} GKeyFileError;



GQuark g_key_file_error_quark (void);

typedef struct _GKeyFile GKeyFile;

typedef enum
{
  G_KEY_FILE_NONE = 0,
  G_KEY_FILE_KEEP_COMMENTS = 1 << 0,
  G_KEY_FILE_KEEP_TRANSLATIONS = 1 << 1
} GKeyFileFlags;

GKeyFile *g_key_file_new (void);
void g_key_file_free (GKeyFile *key_file);
void g_key_file_set_list_separator (GKeyFile *key_file,
          gchar separator);
gboolean g_key_file_load_from_file (GKeyFile *key_file,
          const gchar *file,
          GKeyFileFlags flags,
          GError **error);
gboolean g_key_file_load_from_data (GKeyFile *key_file,
          const gchar *data,
          gsize length,
          GKeyFileFlags flags,
          GError **error);
gboolean g_key_file_load_from_dirs (GKeyFile *key_file,
          const gchar *file,
          const gchar **search_dirs,
          gchar **full_path,
          GKeyFileFlags flags,
          GError **error);
gboolean g_key_file_load_from_data_dirs (GKeyFile *key_file,
          const gchar *file,
          gchar **full_path,
          GKeyFileFlags flags,
          GError **error);
gchar *g_key_file_to_data (GKeyFile *key_file,
          gsize *length,
          GError **error) __attribute__((__malloc__));
gchar *g_key_file_get_start_group (GKeyFile *key_file) __attribute__((__malloc__));
gchar **g_key_file_get_groups (GKeyFile *key_file,
          gsize *length) __attribute__((__malloc__));
gchar **g_key_file_get_keys (GKeyFile *key_file,
          const gchar *group_name,
          gsize *length,
          GError **error) __attribute__((__malloc__));
gboolean g_key_file_has_group (GKeyFile *key_file,
          const gchar *group_name);
gboolean g_key_file_has_key (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
gchar *g_key_file_get_value (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_value (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *value);
gchar *g_key_file_get_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *string);
gchar *g_key_file_get_locale_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_locale_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          const gchar *string);
gboolean g_key_file_get_boolean (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
void g_key_file_set_boolean (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gboolean value);
gint g_key_file_get_integer (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
void g_key_file_set_integer (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gint value);
gdouble g_key_file_get_double (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             GError **error);
void g_key_file_set_double (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gdouble value);
gchar **g_key_file_get_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar * const list[],
          gsize length);
gchar **g_key_file_get_locale_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_locale_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          const gchar * const list[],
          gsize length);
gboolean *g_key_file_get_boolean_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_boolean_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gboolean list[],
          gsize length);
gint *g_key_file_get_integer_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_double_list (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gdouble list[],
                                             gsize length);
gdouble *g_key_file_get_double_list (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gsize *length,
                                             GError **error) __attribute__((__malloc__));
void g_key_file_set_integer_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gint list[],
          gsize length);
gboolean g_key_file_set_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             const gchar *comment,
                                             GError **error);
gchar *g_key_file_get_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             GError **error) __attribute__((__malloc__));

gboolean g_key_file_remove_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
          GError **error);
gboolean g_key_file_remove_key (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
gboolean g_key_file_remove_group (GKeyFile *key_file,
          const gchar *group_name,
          GError **error);
# 248 "/usr/include/glib-2.0/glib/gkeyfile.h"

# 54 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 55 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 56 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmain.h" 1
# 57 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmappedfile.h" 1
# 29 "/usr/include/glib-2.0/glib/gmappedfile.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 30 "/usr/include/glib-2.0/glib/gmappedfile.h" 2



typedef struct _GMappedFile GMappedFile;

GMappedFile *g_mapped_file_new (const gchar *filename,
             gboolean writable,
             GError **error) __attribute__((__malloc__));
gsize g_mapped_file_get_length (GMappedFile *file);
gchar *g_mapped_file_get_contents (GMappedFile *file);
GMappedFile *g_mapped_file_ref (GMappedFile *file);
void g_mapped_file_unref (GMappedFile *file);


void g_mapped_file_free (GMappedFile *file);



# 58 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmarkup.h" 1
# 30 "/usr/include/glib-2.0/glib/gmarkup.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 31 "/usr/include/glib-2.0/glib/gmarkup.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 32 "/usr/include/glib-2.0/glib/gmarkup.h" 2



typedef enum
{
  G_MARKUP_ERROR_BAD_UTF8,
  G_MARKUP_ERROR_EMPTY,
  G_MARKUP_ERROR_PARSE,



  G_MARKUP_ERROR_UNKNOWN_ELEMENT,
  G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,
  G_MARKUP_ERROR_INVALID_CONTENT,
  G_MARKUP_ERROR_MISSING_ATTRIBUTE
} GMarkupError;



GQuark g_markup_error_quark (void);

typedef enum
{
  G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG = 1 << 0,
  G_MARKUP_TREAT_CDATA_AS_TEXT = 1 << 1,
  G_MARKUP_PREFIX_ERROR_POSITION = 1 << 2
} GMarkupParseFlags;

typedef struct _GMarkupParseContext GMarkupParseContext;
typedef struct _GMarkupParser GMarkupParser;

struct _GMarkupParser
{

  void (*start_element) (GMarkupParseContext *context,
                          const gchar *element_name,
                          const gchar **attribute_names,
                          const gchar **attribute_values,
                          gpointer user_data,
                          GError **error);


  void (*end_element) (GMarkupParseContext *context,
                          const gchar *element_name,
                          gpointer user_data,
                          GError **error);



  void (*text) (GMarkupParseContext *context,
                          const gchar *text,
                          gsize text_len,
                          gpointer user_data,
                          GError **error);






  void (*passthrough) (GMarkupParseContext *context,
                          const gchar *passthrough_text,
                          gsize text_len,
                          gpointer user_data,
                          GError **error);




  void (*error) (GMarkupParseContext *context,
                          GError *error,
                          gpointer user_data);
};

GMarkupParseContext *g_markup_parse_context_new (const GMarkupParser *parser,
                                                   GMarkupParseFlags flags,
                                                   gpointer user_data,
                                                   GDestroyNotify user_data_dnotify);
void g_markup_parse_context_free (GMarkupParseContext *context);
gboolean g_markup_parse_context_parse (GMarkupParseContext *context,
                                                   const gchar *text,
                                                   gssize text_len,
                                                   GError **error);
void g_markup_parse_context_push (GMarkupParseContext *context,
                                                   GMarkupParser *parser,
                                                   gpointer user_data);
gpointer g_markup_parse_context_pop (GMarkupParseContext *context);

gboolean g_markup_parse_context_end_parse (GMarkupParseContext *context,
                                                       GError **error);
const gchar *g_markup_parse_context_get_element (GMarkupParseContext *context);
const GSList *g_markup_parse_context_get_element_stack (GMarkupParseContext *context);


void g_markup_parse_context_get_position (GMarkupParseContext *context,
                                                          gint *line_number,
                                                          gint *char_number);
gpointer g_markup_parse_context_get_user_data (GMarkupParseContext *context);


gchar* g_markup_escape_text (const gchar *text,
                             gssize length);

gchar *g_markup_printf_escaped (const char *format,
    ...) __attribute__((__format__ (__printf__, 1, 2)));
gchar *g_markup_vprintf_escaped (const char *format,
     va_list args);

typedef enum
{
  G_MARKUP_COLLECT_INVALID,
  G_MARKUP_COLLECT_STRING,
  G_MARKUP_COLLECT_STRDUP,
  G_MARKUP_COLLECT_BOOLEAN,
  G_MARKUP_COLLECT_TRISTATE,

  G_MARKUP_COLLECT_OPTIONAL = (1 << 16)
} GMarkupCollectType;



gboolean g_markup_collect_attributes (const gchar *element_name,
                                        const gchar **attribute_names,
                                        const gchar **attribute_values,
                                        GError **error,
                                        GMarkupCollectType first_type,
                                        const gchar *first_attr,
                                        ...);


# 59 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 60 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmessages.h" 1
# 35 "/usr/include/glib-2.0/glib/gmessages.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 36 "/usr/include/glib-2.0/glib/gmessages.h" 2
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 37 "/usr/include/glib-2.0/glib/gmessages.h" 2




       
# 42 "/usr/include/glib-2.0/glib/gmessages.h" 3






gsize g_printf_string_upper_bound (const gchar* format,
         va_list args);
# 58 "/usr/include/glib-2.0/glib/gmessages.h" 3
typedef enum
{

  G_LOG_FLAG_RECURSION = 1 << 0,
  G_LOG_FLAG_FATAL = 1 << 1,


  G_LOG_LEVEL_ERROR = 1 << 2,
  G_LOG_LEVEL_CRITICAL = 1 << 3,
  G_LOG_LEVEL_WARNING = 1 << 4,
  G_LOG_LEVEL_MESSAGE = 1 << 5,
  G_LOG_LEVEL_INFO = 1 << 6,
  G_LOG_LEVEL_DEBUG = 1 << 7,

  G_LOG_LEVEL_MASK = ~(G_LOG_FLAG_RECURSION | G_LOG_FLAG_FATAL)
} GLogLevelFlags;




typedef void (*GLogFunc) (const gchar *log_domain,
                                                 GLogLevelFlags log_level,
                                                 const gchar *message,
                                                 gpointer user_data);



guint g_log_set_handler (const gchar *log_domain,
                                         GLogLevelFlags log_levels,
                                         GLogFunc log_func,
                                         gpointer user_data);
void g_log_remove_handler (const gchar *log_domain,
                                         guint handler_id);
void g_log_default_handler (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *message,
                                         gpointer unused_data);
GLogFunc g_log_set_default_handler (GLogFunc log_func,
        gpointer user_data);
void g_log (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 3, 4)));
void g_logv (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *format,
                                         va_list args);
GLogLevelFlags g_log_set_fatal_mask (const gchar *log_domain,
                                         GLogLevelFlags fatal_mask);
GLogLevelFlags g_log_set_always_fatal (GLogLevelFlags fatal_mask);


__attribute__((visibility("hidden"))) void _g_log_fallback_handler (const gchar *log_domain,
       GLogLevelFlags log_level,
       const gchar *message,
       gpointer unused_data);


void g_return_if_fail_warning (const char *log_domain,
          const char *pretty_function,
          const char *expression);
void g_warn_message (const char *domain,
                               const char *file,
                               int line,
                               const char *func,
                               const char *warnexpr);

void g_assert_warning (const char *log_domain,
          const char *file,
          const int line,
                 const char *pretty_function,
                 const char *expression) __attribute__((__noreturn__));
# 229 "/usr/include/glib-2.0/glib/gmessages.h" 3
typedef void (*GPrintFunc) (const gchar *string);
void g_print (const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
GPrintFunc g_set_print_handler (GPrintFunc func);
void g_printerr (const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
GPrintFunc g_set_printerr_handler (GPrintFunc func);
# 341 "/usr/include/glib-2.0/glib/gmessages.h" 3

# 61 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gnode.h" 1
# 34 "/usr/include/glib-2.0/glib/gnode.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 35 "/usr/include/glib-2.0/glib/gnode.h" 2



typedef struct _GNode GNode;


typedef enum
{
  G_TRAVERSE_LEAVES = 1 << 0,
  G_TRAVERSE_NON_LEAVES = 1 << 1,
  G_TRAVERSE_ALL = G_TRAVERSE_LEAVES | G_TRAVERSE_NON_LEAVES,
  G_TRAVERSE_MASK = 0x03,
  G_TRAVERSE_LEAFS = G_TRAVERSE_LEAVES,
  G_TRAVERSE_NON_LEAFS = G_TRAVERSE_NON_LEAVES
} GTraverseFlags;


typedef enum
{
  G_IN_ORDER,
  G_PRE_ORDER,
  G_POST_ORDER,
  G_LEVEL_ORDER
} GTraverseType;

typedef gboolean (*GNodeTraverseFunc) (GNode *node,
       gpointer data);
typedef void (*GNodeForeachFunc) (GNode *node,
       gpointer data);
# 77 "/usr/include/glib-2.0/glib/gnode.h"
typedef gpointer (*GCopyFunc) (gconstpointer src,
                                                 gpointer data);



struct _GNode
{
  gpointer data;
  GNode *next;
  GNode *prev;
  GNode *parent;
  GNode *children;
};
# 115 "/usr/include/glib-2.0/glib/gnode.h"
GNode* g_node_new (gpointer data);
void g_node_destroy (GNode *root);
void g_node_unlink (GNode *node);
GNode* g_node_copy_deep (GNode *node,
     GCopyFunc copy_func,
     gpointer data);
GNode* g_node_copy (GNode *node);
GNode* g_node_insert (GNode *parent,
     gint position,
     GNode *node);
GNode* g_node_insert_before (GNode *parent,
     GNode *sibling,
     GNode *node);
GNode* g_node_insert_after (GNode *parent,
     GNode *sibling,
     GNode *node);
GNode* g_node_prepend (GNode *parent,
     GNode *node);
guint g_node_n_nodes (GNode *root,
     GTraverseFlags flags);
GNode* g_node_get_root (GNode *node);
gboolean g_node_is_ancestor (GNode *node,
     GNode *descendant);
guint g_node_depth (GNode *node);
GNode* g_node_find (GNode *root,
     GTraverseType order,
     GTraverseFlags flags,
     gpointer data);
# 213 "/usr/include/glib-2.0/glib/gnode.h"
void g_node_traverse (GNode *root,
     GTraverseType order,
     GTraverseFlags flags,
     gint max_depth,
     GNodeTraverseFunc func,
     gpointer data);






guint g_node_max_height (GNode *root);

void g_node_children_foreach (GNode *node,
      GTraverseFlags flags,
      GNodeForeachFunc func,
      gpointer data);
void g_node_reverse_children (GNode *node);
guint g_node_n_children (GNode *node);
GNode* g_node_nth_child (GNode *node,
      guint n);
GNode* g_node_last_child (GNode *node);
GNode* g_node_find_child (GNode *node,
      GTraverseFlags flags,
      gpointer data);
gint g_node_child_position (GNode *node,
      GNode *child);
gint g_node_child_index (GNode *node,
      gpointer data);

GNode* g_node_first_sibling (GNode *node);
GNode* g_node_last_sibling (GNode *node);
# 282 "/usr/include/glib-2.0/glib/gnode.h"
void g_node_push_allocator (gpointer dummy);
void g_node_pop_allocator (void);



# 62 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/goption.h" 1
# 28 "/usr/include/glib-2.0/glib/goption.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/goption.h" 2
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 30 "/usr/include/glib-2.0/glib/goption.h" 2


# 40 "/usr/include/glib-2.0/glib/goption.h"
typedef struct _GOptionContext GOptionContext;
# 53 "/usr/include/glib-2.0/glib/goption.h"
typedef struct _GOptionGroup GOptionGroup;
typedef struct _GOptionEntry GOptionEntry;
# 82 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_FLAG_HIDDEN = 1 << 0,
  G_OPTION_FLAG_IN_MAIN = 1 << 1,
  G_OPTION_FLAG_REVERSE = 1 << 2,
  G_OPTION_FLAG_NO_ARG = 1 << 3,
  G_OPTION_FLAG_FILENAME = 1 << 4,
  G_OPTION_FLAG_OPTIONAL_ARG = 1 << 5,
  G_OPTION_FLAG_NOALIAS = 1 << 6
} GOptionFlags;
# 118 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_ARG_NONE,
  G_OPTION_ARG_STRING,
  G_OPTION_ARG_INT,
  G_OPTION_ARG_CALLBACK,
  G_OPTION_ARG_FILENAME,
  G_OPTION_ARG_STRING_ARRAY,
  G_OPTION_ARG_FILENAME_ARRAY,
  G_OPTION_ARG_DOUBLE,
  G_OPTION_ARG_INT64
} GOptionArg;
# 148 "/usr/include/glib-2.0/glib/goption.h"
typedef gboolean (*GOptionArgFunc) (const gchar *option_name,
        const gchar *value,
        gpointer data,
        GError **error);
# 166 "/usr/include/glib-2.0/glib/goption.h"
typedef gboolean (*GOptionParseFunc) (GOptionContext *context,
          GOptionGroup *group,
          gpointer data,
          GError **error);
# 181 "/usr/include/glib-2.0/glib/goption.h"
typedef void (*GOptionErrorFunc) (GOptionContext *context,
      GOptionGroup *group,
      gpointer data,
      GError **error);
# 205 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_ERROR_UNKNOWN_OPTION,
  G_OPTION_ERROR_BAD_VALUE,
  G_OPTION_ERROR_FAILED
} GOptionError;

GQuark g_option_error_quark (void);
# 279 "/usr/include/glib-2.0/glib/goption.h"
struct _GOptionEntry
{
  const gchar *long_name;
  gchar short_name;
  gint flags;

  GOptionArg arg;
  gpointer arg_data;

  const gchar *description;
  const gchar *arg_description;
};
# 310 "/usr/include/glib-2.0/glib/goption.h"
GOptionContext *g_option_context_new (const gchar *parameter_string);
void g_option_context_set_summary (GOptionContext *context,
                                                   const gchar *summary);
const gchar *g_option_context_get_summary (GOptionContext *context);
void g_option_context_set_description (GOptionContext *context,
                                                   const gchar *description);
const gchar *g_option_context_get_description (GOptionContext *context);
void g_option_context_free (GOptionContext *context);
void g_option_context_set_help_enabled (GOptionContext *context,
         gboolean help_enabled);
gboolean g_option_context_get_help_enabled (GOptionContext *context);
void g_option_context_set_ignore_unknown_options (GOptionContext *context,
            gboolean ignore_unknown);
gboolean g_option_context_get_ignore_unknown_options (GOptionContext *context);

void g_option_context_add_main_entries (GOptionContext *context,
         const GOptionEntry *entries,
         const gchar *translation_domain);
gboolean g_option_context_parse (GOptionContext *context,
         gint *argc,
         gchar ***argv,
         GError **error);
void g_option_context_set_translate_func (GOptionContext *context,
           GTranslateFunc func,
           gpointer data,
           GDestroyNotify destroy_notify);
void g_option_context_set_translation_domain (GOptionContext *context,
        const gchar *domain);

void g_option_context_add_group (GOptionContext *context,
       GOptionGroup *group);
void g_option_context_set_main_group (GOptionContext *context,
            GOptionGroup *group);
GOptionGroup *g_option_context_get_main_group (GOptionContext *context);
gchar *g_option_context_get_help (GOptionContext *context,
                                               gboolean main_help,
                                               GOptionGroup *group);

GOptionGroup *g_option_group_new (const gchar *name,
           const gchar *description,
           const gchar *help_description,
           gpointer user_data,
           GDestroyNotify destroy);
void g_option_group_set_parse_hooks (GOptionGroup *group,
           GOptionParseFunc pre_parse_func,
           GOptionParseFunc post_parse_func);
void g_option_group_set_error_hook (GOptionGroup *group,
           GOptionErrorFunc error_func);
void g_option_group_free (GOptionGroup *group);
void g_option_group_add_entries (GOptionGroup *group,
           const GOptionEntry *entries);
void g_option_group_set_translate_func (GOptionGroup *group,
           GTranslateFunc func,
           gpointer data,
           GDestroyNotify destroy_notify);
void g_option_group_set_translation_domain (GOptionGroup *group,
           const gchar *domain);


# 63 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gpattern.h" 1
# 27 "/usr/include/glib-2.0/glib/gpattern.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/gpattern.h" 2




typedef struct _GPatternSpec GPatternSpec;

GPatternSpec* g_pattern_spec_new (const gchar *pattern);
void g_pattern_spec_free (GPatternSpec *pspec);
gboolean g_pattern_spec_equal (GPatternSpec *pspec1,
     GPatternSpec *pspec2);
gboolean g_pattern_match (GPatternSpec *pspec,
     guint string_length,
     const gchar *string,
     const gchar *string_reversed);
gboolean g_pattern_match_string (GPatternSpec *pspec,
     const gchar *string);
gboolean g_pattern_match_simple (const gchar *pattern,
     const gchar *string);


# 64 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gpoll.h" 1
# 65 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gprimes.h" 1
# 34 "/usr/include/glib-2.0/glib/gprimes.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gprimes.h" 2


# 47 "/usr/include/glib-2.0/glib/gprimes.h"
guint g_spaced_primes_closest (guint num) __attribute__((__const__));


# 66 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gqsort.h" 1
# 34 "/usr/include/glib-2.0/glib/gqsort.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gqsort.h" 2



void g_qsort_with_data (gconstpointer pbase,
   gint total_elems,
   gsize size,
   GCompareDataFunc compare_func,
   gpointer user_data);


# 67 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 68 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gqueue.h" 1
# 34 "/usr/include/glib-2.0/glib/gqueue.h"
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 35 "/usr/include/glib-2.0/glib/gqueue.h" 2



typedef struct _GQueue GQueue;

struct _GQueue
{
  GList *head;
  GList *tail;
  guint length;
};





GQueue* g_queue_new (void);
void g_queue_free (GQueue *queue);
void g_queue_init (GQueue *queue);
void g_queue_clear (GQueue *queue);
gboolean g_queue_is_empty (GQueue *queue);
guint g_queue_get_length (GQueue *queue);
void g_queue_reverse (GQueue *queue);
GQueue * g_queue_copy (GQueue *queue);
void g_queue_foreach (GQueue *queue,
     GFunc func,
     gpointer user_data);
GList * g_queue_find (GQueue *queue,
     gconstpointer data);
GList * g_queue_find_custom (GQueue *queue,
     gconstpointer data,
     GCompareFunc func);
void g_queue_sort (GQueue *queue,
     GCompareDataFunc compare_func,
     gpointer user_data);

void g_queue_push_head (GQueue *queue,
     gpointer data);
void g_queue_push_tail (GQueue *queue,
     gpointer data);
void g_queue_push_nth (GQueue *queue,
     gpointer data,
     gint n);
gpointer g_queue_pop_head (GQueue *queue);
gpointer g_queue_pop_tail (GQueue *queue);
gpointer g_queue_pop_nth (GQueue *queue,
     guint n);
gpointer g_queue_peek_head (GQueue *queue);
gpointer g_queue_peek_tail (GQueue *queue);
gpointer g_queue_peek_nth (GQueue *queue,
     guint n);
gint g_queue_index (GQueue *queue,
     gconstpointer data);
void g_queue_remove (GQueue *queue,
     gconstpointer data);
void g_queue_remove_all (GQueue *queue,
     gconstpointer data);
void g_queue_insert_before (GQueue *queue,
     GList *sibling,
     gpointer data);
void g_queue_insert_after (GQueue *queue,
     GList *sibling,
     gpointer data);
void g_queue_insert_sorted (GQueue *queue,
     gpointer data,
     GCompareDataFunc func,
     gpointer user_data);

void g_queue_push_head_link (GQueue *queue,
     GList *link_);
void g_queue_push_tail_link (GQueue *queue,
     GList *link_);
void g_queue_push_nth_link (GQueue *queue,
     gint n,
     GList *link_);
GList* g_queue_pop_head_link (GQueue *queue);
GList* g_queue_pop_tail_link (GQueue *queue);
GList* g_queue_pop_nth_link (GQueue *queue,
     guint n);
GList* g_queue_peek_head_link (GQueue *queue);
GList* g_queue_peek_tail_link (GQueue *queue);
GList* g_queue_peek_nth_link (GQueue *queue,
     guint n);
gint g_queue_link_index (GQueue *queue,
     GList *link_);
void g_queue_unlink (GQueue *queue,
     GList *link_);
void g_queue_delete_link (GQueue *queue,
     GList *link_);


# 69 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/grand.h" 1
# 34 "/usr/include/glib-2.0/glib/grand.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/grand.h" 2



typedef struct _GRand GRand;
# 49 "/usr/include/glib-2.0/glib/grand.h"
GRand* g_rand_new_with_seed (guint32 seed);
GRand* g_rand_new_with_seed_array (const guint32 *seed,
        guint seed_length);
GRand* g_rand_new (void);
void g_rand_free (GRand *rand_);
GRand* g_rand_copy (GRand *rand_);
void g_rand_set_seed (GRand *rand_,
          guint32 seed);
void g_rand_set_seed_array (GRand *rand_,
          const guint32 *seed,
          guint seed_length);



guint32 g_rand_int (GRand *rand_);
gint32 g_rand_int_range (GRand *rand_,
          gint32 begin,
          gint32 end);
gdouble g_rand_double (GRand *rand_);
gdouble g_rand_double_range (GRand *rand_,
          gdouble begin,
          gdouble end);
void g_random_set_seed (guint32 seed);



guint32 g_random_int (void);
gint32 g_random_int_range (gint32 begin,
          gint32 end);
gdouble g_random_double (void);
gdouble g_random_double_range (gdouble begin,
          gdouble end);



# 70 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/grel.h" 1
# 34 "/usr/include/glib-2.0/glib/grel.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/grel.h" 2



typedef struct _GRelation GRelation;
typedef struct _GTuples GTuples;

struct _GTuples
{
  guint len;
};
# 69 "/usr/include/glib-2.0/glib/grel.h"
GRelation* g_relation_new (gint fields);
void g_relation_destroy (GRelation *relation);
void g_relation_index (GRelation *relation,
                               gint field,
                               GHashFunc hash_func,
                               GEqualFunc key_equal_func);
void g_relation_insert (GRelation *relation,
                               ...);
gint g_relation_delete (GRelation *relation,
                               gconstpointer key,
                               gint field);
GTuples* g_relation_select (GRelation *relation,
                               gconstpointer key,
                               gint field);
gint g_relation_count (GRelation *relation,
                               gconstpointer key,
                               gint field);
gboolean g_relation_exists (GRelation *relation,
                               ...);
void g_relation_print (GRelation *relation);

void g_tuples_destroy (GTuples *tuples);
gpointer g_tuples_index (GTuples *tuples,
                               gint index_,
                               gint field);


# 71 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gregex.h" 1
# 29 "/usr/include/glib-2.0/glib/gregex.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 30 "/usr/include/glib-2.0/glib/gregex.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 31 "/usr/include/glib-2.0/glib/gregex.h" 2



typedef enum
{
  G_REGEX_ERROR_COMPILE,
  G_REGEX_ERROR_OPTIMIZE,
  G_REGEX_ERROR_REPLACE,
  G_REGEX_ERROR_MATCH,
  G_REGEX_ERROR_INTERNAL,


  G_REGEX_ERROR_STRAY_BACKSLASH = 101,
  G_REGEX_ERROR_MISSING_CONTROL_CHAR = 102,
  G_REGEX_ERROR_UNRECOGNIZED_ESCAPE = 103,
  G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER = 104,
  G_REGEX_ERROR_QUANTIFIER_TOO_BIG = 105,
  G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS = 106,
  G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS = 107,
  G_REGEX_ERROR_RANGE_OUT_OF_ORDER = 108,
  G_REGEX_ERROR_NOTHING_TO_REPEAT = 109,
  G_REGEX_ERROR_UNRECOGNIZED_CHARACTER = 112,
  G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS = 113,
  G_REGEX_ERROR_UNMATCHED_PARENTHESIS = 114,
  G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE = 115,
  G_REGEX_ERROR_UNTERMINATED_COMMENT = 118,
  G_REGEX_ERROR_EXPRESSION_TOO_LARGE = 120,
  G_REGEX_ERROR_MEMORY_ERROR = 121,
  G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND = 125,
  G_REGEX_ERROR_MALFORMED_CONDITION = 126,
  G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES = 127,
  G_REGEX_ERROR_ASSERTION_EXPECTED = 128,
  G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME = 130,
  G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED = 131,
  G_REGEX_ERROR_HEX_CODE_TOO_LARGE = 134,
  G_REGEX_ERROR_INVALID_CONDITION = 135,
  G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND = 136,
  G_REGEX_ERROR_INFINITE_LOOP = 140,
  G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR = 142,
  G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME = 143,
  G_REGEX_ERROR_MALFORMED_PROPERTY = 146,
  G_REGEX_ERROR_UNKNOWN_PROPERTY = 147,
  G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG = 148,
  G_REGEX_ERROR_TOO_MANY_SUBPATTERNS = 149,
  G_REGEX_ERROR_INVALID_OCTAL_VALUE = 151,
  G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE = 154,
  G_REGEX_ERROR_DEFINE_REPETION = 155,
  G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS = 156,
  G_REGEX_ERROR_MISSING_BACK_REFERENCE = 157
} GRegexError;



GQuark g_regex_error_quark (void);



typedef enum
{
  G_REGEX_CASELESS = 1 << 0,
  G_REGEX_MULTILINE = 1 << 1,
  G_REGEX_DOTALL = 1 << 2,
  G_REGEX_EXTENDED = 1 << 3,
  G_REGEX_ANCHORED = 1 << 4,
  G_REGEX_DOLLAR_ENDONLY = 1 << 5,
  G_REGEX_UNGREEDY = 1 << 9,
  G_REGEX_RAW = 1 << 11,
  G_REGEX_NO_AUTO_CAPTURE = 1 << 12,
  G_REGEX_OPTIMIZE = 1 << 13,
  G_REGEX_DUPNAMES = 1 << 19,
  G_REGEX_NEWLINE_CR = 1 << 20,
  G_REGEX_NEWLINE_LF = 1 << 21,
  G_REGEX_NEWLINE_CRLF = G_REGEX_NEWLINE_CR | G_REGEX_NEWLINE_LF
} GRegexCompileFlags;



typedef enum
{
  G_REGEX_MATCH_ANCHORED = 1 << 4,
  G_REGEX_MATCH_NOTBOL = 1 << 7,
  G_REGEX_MATCH_NOTEOL = 1 << 8,
  G_REGEX_MATCH_NOTEMPTY = 1 << 10,
  G_REGEX_MATCH_PARTIAL = 1 << 15,
  G_REGEX_MATCH_NEWLINE_CR = 1 << 20,
  G_REGEX_MATCH_NEWLINE_LF = 1 << 21,
  G_REGEX_MATCH_NEWLINE_CRLF = G_REGEX_MATCH_NEWLINE_CR | G_REGEX_MATCH_NEWLINE_LF,
  G_REGEX_MATCH_NEWLINE_ANY = 1 << 22
} GRegexMatchFlags;

typedef struct _GRegex GRegex;
typedef struct _GMatchInfo GMatchInfo;

typedef gboolean (*GRegexEvalCallback) (const GMatchInfo *match_info,
       GString *result,
       gpointer user_data);


GRegex *g_regex_new (const gchar *pattern,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options,
       GError **error);
GRegex *g_regex_ref (GRegex *regex);
void g_regex_unref (GRegex *regex);
const gchar *g_regex_get_pattern (const GRegex *regex);
gint g_regex_get_max_backref (const GRegex *regex);
gint g_regex_get_capture_count (const GRegex *regex);
gint g_regex_get_string_number (const GRegex *regex,
       const gchar *name);
gchar *g_regex_escape_string (const gchar *string,
       gint length);


gboolean g_regex_match_simple (const gchar *pattern,
       const gchar *string,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options);
gboolean g_regex_match (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info);
gboolean g_regex_match_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info,
       GError **error);
gboolean g_regex_match_all (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info);
gboolean g_regex_match_all_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info,
       GError **error);


gchar **g_regex_split_simple (const gchar *pattern,
       const gchar *string,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options);
gchar **g_regex_split (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options);
gchar **g_regex_split_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       gint max_tokens,
       GError **error);


gchar *g_regex_replace (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       const gchar *replacement,
       GRegexMatchFlags match_options,
       GError **error);
gchar *g_regex_replace_literal (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       const gchar *replacement,
       GRegexMatchFlags match_options,
       GError **error);
gchar *g_regex_replace_eval (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GRegexEvalCallback eval,
       gpointer user_data,
       GError **error);
gboolean g_regex_check_replacement (const gchar *replacement,
       gboolean *has_references,
       GError **error);


GRegex *g_match_info_get_regex (const GMatchInfo *match_info);
const gchar *g_match_info_get_string (const GMatchInfo *match_info);

void g_match_info_free (GMatchInfo *match_info);
gboolean g_match_info_next (GMatchInfo *match_info,
       GError **error);
gboolean g_match_info_matches (const GMatchInfo *match_info);
gint g_match_info_get_match_count (const GMatchInfo *match_info);
gboolean g_match_info_is_partial_match (const GMatchInfo *match_info);
gchar *g_match_info_expand_references(const GMatchInfo *match_info,
       const gchar *string_to_expand,
       GError **error);
gchar *g_match_info_fetch (const GMatchInfo *match_info,
       gint match_num);
gboolean g_match_info_fetch_pos (const GMatchInfo *match_info,
       gint match_num,
       gint *start_pos,
       gint *end_pos);
gchar *g_match_info_fetch_named (const GMatchInfo *match_info,
       const gchar *name);
gboolean g_match_info_fetch_named_pos (const GMatchInfo *match_info,
       const gchar *name,
       gint *start_pos,
       gint *end_pos);
gchar **g_match_info_fetch_all (const GMatchInfo *match_info);


# 72 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gscanner.h" 1
# 34 "/usr/include/glib-2.0/glib/gscanner.h"
# 1 "/usr/include/glib-2.0/glib/gdataset.h" 1
# 35 "/usr/include/glib-2.0/glib/gscanner.h" 2
# 1 "/usr/include/glib-2.0/glib/ghash.h" 1
# 36 "/usr/include/glib-2.0/glib/gscanner.h" 2



typedef struct _GScanner GScanner;
typedef struct _GScannerConfig GScannerConfig;
typedef union _GTokenValue GTokenValue;

typedef void (*GScannerMsgFunc) (GScanner *scanner,
       gchar *message,
       gboolean error);
# 64 "/usr/include/glib-2.0/glib/gscanner.h"
typedef enum
{
  G_ERR_UNKNOWN,
  G_ERR_UNEXP_EOF,
  G_ERR_UNEXP_EOF_IN_STRING,
  G_ERR_UNEXP_EOF_IN_COMMENT,
  G_ERR_NON_DIGIT_IN_CONST,
  G_ERR_DIGIT_RADIX,
  G_ERR_FLOAT_RADIX,
  G_ERR_FLOAT_MALFORMED
} GErrorType;


typedef enum
{
  G_TOKEN_EOF = 0,

  G_TOKEN_LEFT_PAREN = '(',
  G_TOKEN_RIGHT_PAREN = ')',
  G_TOKEN_LEFT_CURLY = '{',
  G_TOKEN_RIGHT_CURLY = '}',
  G_TOKEN_LEFT_BRACE = '[',
  G_TOKEN_RIGHT_BRACE = ']',
  G_TOKEN_EQUAL_SIGN = '=',
  G_TOKEN_COMMA = ',',

  G_TOKEN_NONE = 256,

  G_TOKEN_ERROR,

  G_TOKEN_CHAR,
  G_TOKEN_BINARY,
  G_TOKEN_OCTAL,
  G_TOKEN_INT,
  G_TOKEN_HEX,
  G_TOKEN_FLOAT,
  G_TOKEN_STRING,

  G_TOKEN_SYMBOL,
  G_TOKEN_IDENTIFIER,
  G_TOKEN_IDENTIFIER_NULL,

  G_TOKEN_COMMENT_SINGLE,
  G_TOKEN_COMMENT_MULTI,
  G_TOKEN_LAST
} GTokenType;

union _GTokenValue
{
  gpointer v_symbol;
  gchar *v_identifier;
  gulong v_binary;
  gulong v_octal;
  gulong v_int;
  guint64 v_int64;
  gdouble v_float;
  gulong v_hex;
  gchar *v_string;
  gchar *v_comment;
  guchar v_char;
  guint v_error;
};

struct _GScannerConfig
{


  gchar *cset_skip_characters;
  gchar *cset_identifier_first;
  gchar *cset_identifier_nth;
  gchar *cpair_comment_single;



  guint case_sensitive : 1;




  guint skip_comment_multi : 1;
  guint skip_comment_single : 1;
  guint scan_comment_multi : 1;
  guint scan_identifier : 1;
  guint scan_identifier_1char : 1;
  guint scan_identifier_NULL : 1;
  guint scan_symbols : 1;
  guint scan_binary : 1;
  guint scan_octal : 1;
  guint scan_float : 1;
  guint scan_hex : 1;
  guint scan_hex_dollar : 1;
  guint scan_string_sq : 1;
  guint scan_string_dq : 1;
  guint numbers_2_int : 1;
  guint int_2_float : 1;
  guint identifier_2_string : 1;
  guint char_2_token : 1;
  guint symbol_2_token : 1;
  guint scope_0_fallback : 1;
  guint store_int64 : 1;
  guint padding_dummy;
};

struct _GScanner
{

  gpointer user_data;
  guint max_parse_errors;


  guint parse_errors;


  const gchar *input_name;


  GData *qdata;


  GScannerConfig *config;


  GTokenType token;
  GTokenValue value;
  guint line;
  guint position;


  GTokenType next_token;
  GTokenValue next_value;
  guint next_line;
  guint next_position;


  GHashTable *symbol_table;
  gint input_fd;
  const gchar *text;
  const gchar *text_end;
  gchar *buffer;
  guint scope_id;


  GScannerMsgFunc msg_handler;
};

GScanner* g_scanner_new (const GScannerConfig *config_templ);
void g_scanner_destroy (GScanner *scanner);
void g_scanner_input_file (GScanner *scanner,
       gint input_fd);
void g_scanner_sync_file_offset (GScanner *scanner);
void g_scanner_input_text (GScanner *scanner,
       const gchar *text,
       guint text_len);
GTokenType g_scanner_get_next_token (GScanner *scanner);
GTokenType g_scanner_peek_next_token (GScanner *scanner);
GTokenType g_scanner_cur_token (GScanner *scanner);
GTokenValue g_scanner_cur_value (GScanner *scanner);
guint g_scanner_cur_line (GScanner *scanner);
guint g_scanner_cur_position (GScanner *scanner);
gboolean g_scanner_eof (GScanner *scanner);
guint g_scanner_set_scope (GScanner *scanner,
       guint scope_id);
void g_scanner_scope_add_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol,
       gpointer value);
void g_scanner_scope_remove_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol);
gpointer g_scanner_scope_lookup_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol);
void g_scanner_scope_foreach_symbol (GScanner *scanner,
       guint scope_id,
       GHFunc func,
       gpointer user_data);
gpointer g_scanner_lookup_symbol (GScanner *scanner,
       const gchar *symbol);
void g_scanner_unexp_token (GScanner *scanner,
       GTokenType expected_token,
       const gchar *identifier_spec,
       const gchar *symbol_spec,
       const gchar *symbol_name,
       const gchar *message,
       gint is_error);
void g_scanner_error (GScanner *scanner,
       const gchar *format,
       ...) __attribute__((__format__ (__printf__, 2, 3)));
void g_scanner_warn (GScanner *scanner,
       const gchar *format,
       ...) __attribute__((__format__ (__printf__, 2, 3)));
# 276 "/usr/include/glib-2.0/glib/gscanner.h"

# 73 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gsequence.h" 1
# 28 "/usr/include/glib-2.0/glib/gsequence.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 29 "/usr/include/glib-2.0/glib/gsequence.h" 2



typedef struct _GSequence GSequence;
typedef struct _GSequenceNode GSequenceIter;

typedef gint (* GSequenceIterCompareFunc) (GSequenceIter *a,
                                           GSequenceIter *b,
                                           gpointer data);



GSequence * g_sequence_new (GDestroyNotify data_destroy);
void g_sequence_free (GSequence *seq);
gint g_sequence_get_length (GSequence *seq);
void g_sequence_foreach (GSequence *seq,
                                              GFunc func,
                                              gpointer user_data);
void g_sequence_foreach_range (GSequenceIter *begin,
                                              GSequenceIter *end,
                                              GFunc func,
                                              gpointer user_data);
void g_sequence_sort (GSequence *seq,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
void g_sequence_sort_iter (GSequence *seq,
                                              GSequenceIterCompareFunc cmp_func,
                                              gpointer cmp_data);



GSequenceIter *g_sequence_get_begin_iter (GSequence *seq);
GSequenceIter *g_sequence_get_end_iter (GSequence *seq);
GSequenceIter *g_sequence_get_iter_at_pos (GSequence *seq,
                                              gint pos);
GSequenceIter *g_sequence_append (GSequence *seq,
                                              gpointer data);
GSequenceIter *g_sequence_prepend (GSequence *seq,
                                              gpointer data);
GSequenceIter *g_sequence_insert_before (GSequenceIter *iter,
                                              gpointer data);
void g_sequence_move (GSequenceIter *src,
                                              GSequenceIter *dest);
void g_sequence_swap (GSequenceIter *a,
                                              GSequenceIter *b);
GSequenceIter *g_sequence_insert_sorted (GSequence *seq,
                                              gpointer data,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
GSequenceIter *g_sequence_insert_sorted_iter (GSequence *seq,
                                              gpointer data,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);
void g_sequence_sort_changed (GSequenceIter *iter,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
void g_sequence_sort_changed_iter (GSequenceIter *iter,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);
void g_sequence_remove (GSequenceIter *iter);
void g_sequence_remove_range (GSequenceIter *begin,
                                              GSequenceIter *end);
void g_sequence_move_range (GSequenceIter *dest,
                                              GSequenceIter *begin,
                                              GSequenceIter *end);
GSequenceIter *g_sequence_search (GSequence *seq,
                                              gpointer data,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
GSequenceIter *g_sequence_search_iter (GSequence *seq,
                                              gpointer data,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);



gpointer g_sequence_get (GSequenceIter *iter);
void g_sequence_set (GSequenceIter *iter,
                                              gpointer data);


gboolean g_sequence_iter_is_begin (GSequenceIter *iter);
gboolean g_sequence_iter_is_end (GSequenceIter *iter);
GSequenceIter *g_sequence_iter_next (GSequenceIter *iter);
GSequenceIter *g_sequence_iter_prev (GSequenceIter *iter);
gint g_sequence_iter_get_position (GSequenceIter *iter);
GSequenceIter *g_sequence_iter_move (GSequenceIter *iter,
                                              gint delta);
GSequence * g_sequence_iter_get_sequence (GSequenceIter *iter);



gint g_sequence_iter_compare (GSequenceIter *a,
                                              GSequenceIter *b);
GSequenceIter *g_sequence_range_get_midpoint (GSequenceIter *begin,
                                              GSequenceIter *end);


# 74 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gshell.h" 1
# 28 "/usr/include/glib-2.0/glib/gshell.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/gshell.h" 2





typedef enum
{

  G_SHELL_ERROR_BAD_QUOTING,

  G_SHELL_ERROR_EMPTY_STRING,
  G_SHELL_ERROR_FAILED
} GShellError;

GQuark g_shell_error_quark (void);

gchar* g_shell_quote (const gchar *unquoted_string);
gchar* g_shell_unquote (const gchar *quoted_string,
                             GError **error);
gboolean g_shell_parse_argv (const gchar *command_line,
                             gint *argcp,
                             gchar ***argvp,
                             GError **error);


# 75 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gslice.h" 1
# 76 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 77 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gspawn.h" 1
# 28 "/usr/include/glib-2.0/glib/gspawn.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/gspawn.h" 2






typedef enum
{
  G_SPAWN_ERROR_FORK,
  G_SPAWN_ERROR_READ,
  G_SPAWN_ERROR_CHDIR,
  G_SPAWN_ERROR_ACCES,
  G_SPAWN_ERROR_PERM,
  G_SPAWN_ERROR_2BIG,
  G_SPAWN_ERROR_NOEXEC,
  G_SPAWN_ERROR_NAMETOOLONG,
  G_SPAWN_ERROR_NOENT,
  G_SPAWN_ERROR_NOMEM,
  G_SPAWN_ERROR_NOTDIR,
  G_SPAWN_ERROR_LOOP,
  G_SPAWN_ERROR_TXTBUSY,
  G_SPAWN_ERROR_IO,
  G_SPAWN_ERROR_NFILE,
  G_SPAWN_ERROR_MFILE,
  G_SPAWN_ERROR_INVAL,
  G_SPAWN_ERROR_ISDIR,
  G_SPAWN_ERROR_LIBBAD,
  G_SPAWN_ERROR_FAILED


} GSpawnError;

typedef void (* GSpawnChildSetupFunc) (gpointer user_data);

typedef enum
{
  G_SPAWN_LEAVE_DESCRIPTORS_OPEN = 1 << 0,
  G_SPAWN_DO_NOT_REAP_CHILD = 1 << 1,

  G_SPAWN_SEARCH_PATH = 1 << 2,

  G_SPAWN_STDOUT_TO_DEV_NULL = 1 << 3,
  G_SPAWN_STDERR_TO_DEV_NULL = 1 << 4,
  G_SPAWN_CHILD_INHERITS_STDIN = 1 << 5,
  G_SPAWN_FILE_AND_ARGV_ZERO = 1 << 6
} GSpawnFlags;

GQuark g_spawn_error_quark (void);
# 86 "/usr/include/glib-2.0/glib/gspawn.h"
gboolean g_spawn_async (const gchar *working_directory,
                        gchar **argv,
                        gchar **envp,
                        GSpawnFlags flags,
                        GSpawnChildSetupFunc child_setup,
                        gpointer user_data,
                        GPid *child_pid,
                        GError **error);





gboolean g_spawn_async_with_pipes (const gchar *working_directory,
                                   gchar **argv,
                                   gchar **envp,
                                   GSpawnFlags flags,
                                   GSpawnChildSetupFunc child_setup,
                                   gpointer user_data,
                                   GPid *child_pid,
                                   gint *standard_input,
                                   gint *standard_output,
                                   gint *standard_error,
                                   GError **error);






gboolean g_spawn_sync (const gchar *working_directory,
                               gchar **argv,
                               gchar **envp,
                               GSpawnFlags flags,
                               GSpawnChildSetupFunc child_setup,
                               gpointer user_data,
                               gchar **standard_output,
                               gchar **standard_error,
                               gint *exit_status,
                               GError **error);

gboolean g_spawn_command_line_sync (const gchar *command_line,
                                     gchar **standard_output,
                                     gchar **standard_error,
                                     gint *exit_status,
                                     GError **error);
gboolean g_spawn_command_line_async (const gchar *command_line,
                                     GError **error);

void g_spawn_close_pid (GPid pid);


# 78 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gstrfuncs.h" 1
# 35 "/usr/include/glib-2.0/glib/gstrfuncs.h"
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 36 "/usr/include/glib-2.0/glib/gstrfuncs.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 37 "/usr/include/glib-2.0/glib/gstrfuncs.h" 2




typedef enum {
  G_ASCII_ALNUM = 1 << 0,
  G_ASCII_ALPHA = 1 << 1,
  G_ASCII_CNTRL = 1 << 2,
  G_ASCII_DIGIT = 1 << 3,
  G_ASCII_GRAPH = 1 << 4,
  G_ASCII_LOWER = 1 << 5,
  G_ASCII_PRINT = 1 << 6,
  G_ASCII_PUNCT = 1 << 7,
  G_ASCII_SPACE = 1 << 8,
  G_ASCII_UPPER = 1 << 9,
  G_ASCII_XDIGIT = 1 << 10
} GAsciiType;

extern const guint16 * const g_ascii_table;
# 90 "/usr/include/glib-2.0/glib/gstrfuncs.h"
gchar g_ascii_tolower (gchar c) __attribute__((__const__));
gchar g_ascii_toupper (gchar c) __attribute__((__const__));

gint g_ascii_digit_value (gchar c) __attribute__((__const__));
gint g_ascii_xdigit_value (gchar c) __attribute__((__const__));





gchar* g_strdelimit (gchar *string,
     const gchar *delimiters,
     gchar new_delimiter);
gchar* g_strcanon (gchar *string,
     const gchar *valid_chars,
     gchar substitutor);
const gchar* g_strerror (gint errnum) __attribute__((__const__));
const gchar* g_strsignal (gint signum) __attribute__((__const__));
gchar* g_strreverse (gchar *string);
gsize g_strlcpy (gchar *dest,
     const gchar *src,
     gsize dest_size);
gsize g_strlcat (gchar *dest,
     const gchar *src,
     gsize dest_size);
gchar * g_strstr_len (const gchar *haystack,
     gssize haystack_len,
     const gchar *needle);
gchar * g_strrstr (const gchar *haystack,
     const gchar *needle);
gchar * g_strrstr_len (const gchar *haystack,
     gssize haystack_len,
     const gchar *needle);

gboolean g_str_has_suffix (const gchar *str,
     const gchar *suffix);
gboolean g_str_has_prefix (const gchar *str,
     const gchar *prefix);



gdouble g_strtod (const gchar *nptr,
     gchar **endptr);
gdouble g_ascii_strtod (const gchar *nptr,
     gchar **endptr);
guint64 g_ascii_strtoull (const gchar *nptr,
     gchar **endptr,
     guint base);
gint64 g_ascii_strtoll (const gchar *nptr,
     gchar **endptr,
     guint base);




gchar * g_ascii_dtostr (gchar *buffer,
     gint buf_len,
     gdouble d);
gchar * g_ascii_formatd (gchar *buffer,
     gint buf_len,
     const gchar *format,
     gdouble d);


gchar* g_strchug (gchar *string);

gchar* g_strchomp (gchar *string);



gint g_ascii_strcasecmp (const gchar *s1,
        const gchar *s2);
gint g_ascii_strncasecmp (const gchar *s1,
        const gchar *s2,
        gsize n);
gchar* g_ascii_strdown (const gchar *str,
        gssize len) __attribute__((__malloc__));
gchar* g_ascii_strup (const gchar *str,
        gssize len) __attribute__((__malloc__));
# 177 "/usr/include/glib-2.0/glib/gstrfuncs.h"
gint g_strcasecmp (const gchar *s1,
     const gchar *s2);
gint g_strncasecmp (const gchar *s1,
     const gchar *s2,
     guint n);
gchar* g_strdown (gchar *string);
gchar* g_strup (gchar *string);






gchar* g_strdup (const gchar *str) __attribute__((__malloc__));
gchar* g_strdup_printf (const gchar *format,
     ...) __attribute__((__format__ (__printf__, 1, 2))) __attribute__((__malloc__));
gchar* g_strdup_vprintf (const gchar *format,
     va_list args) __attribute__((__malloc__));
gchar* g_strndup (const gchar *str,
     gsize n) __attribute__((__malloc__));
gchar* g_strnfill (gsize length,
     gchar fill_char) __attribute__((__malloc__));
gchar* g_strconcat (const gchar *string1,
     ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
gchar* g_strjoin (const gchar *separator,
     ...) __attribute__((__malloc__)) __attribute__((__sentinel__));





gchar* g_strcompress (const gchar *source) __attribute__((__malloc__));
# 218 "/usr/include/glib-2.0/glib/gstrfuncs.h"
gchar* g_strescape (const gchar *source,
     const gchar *exceptions) __attribute__((__malloc__));

gpointer g_memdup (gconstpointer mem,
     guint byte_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(2)));
# 233 "/usr/include/glib-2.0/glib/gstrfuncs.h"
gchar** g_strsplit (const gchar *string,
     const gchar *delimiter,
     gint max_tokens) __attribute__((__malloc__));
gchar ** g_strsplit_set (const gchar *string,
     const gchar *delimiters,
     gint max_tokens) __attribute__((__malloc__));
gchar* g_strjoinv (const gchar *separator,
     gchar **str_array) __attribute__((__malloc__));
void g_strfreev (gchar **str_array);
gchar** g_strdupv (gchar **str_array) __attribute__((__malloc__));
guint g_strv_length (gchar **str_array);

gchar* g_stpcpy (gchar *dest,
                                        const char *src);

const gchar *g_strip_context (const gchar *msgid,
     const gchar *msgval) __attribute__((__format_arg__ (1)));

const gchar *g_dgettext (const gchar *domain,
     const gchar *msgid) __attribute__((__format_arg__ (2)));

const gchar *g_dngettext (const gchar *domain,
     const gchar *msgid,
     const gchar *msgid_plural,
     gulong n) __attribute__((__format_arg__ (3)));
const gchar *g_dpgettext (const gchar *domain,
                                        const gchar *msgctxtid,
                                        gsize msgidoffset) __attribute__((__format_arg__ (2)));
const gchar *g_dpgettext2 (const gchar *domain,
                                        const gchar *context,
                                        const gchar *msgid) __attribute__((__format_arg__ (3)));


# 79 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 80 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtestutils.h" 1
# 28 "/usr/include/glib-2.0/glib/gtestutils.h"
# 1 "/usr/include/glib-2.0/glib/gmessages.h" 1
# 29 "/usr/include/glib-2.0/glib/gtestutils.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 30 "/usr/include/glib-2.0/glib/gtestutils.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 31 "/usr/include/glib-2.0/glib/gtestutils.h" 2
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 32 "/usr/include/glib-2.0/glib/gtestutils.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 33 "/usr/include/glib-2.0/glib/gtestutils.h" 2



typedef struct GTestCase GTestCase;
typedef struct GTestSuite GTestSuite;
# 76 "/usr/include/glib-2.0/glib/gtestutils.h"
int g_strcmp0 (const char *str1,
                                         const char *str2);


void g_test_minimized_result (double minimized_quantity,
                                         const char *format,
                                         ...) __attribute__((__format__ (__printf__, 2, 3)));
void g_test_maximized_result (double maximized_quantity,
                                         const char *format,
                                         ...) __attribute__((__format__ (__printf__, 2, 3)));


void g_test_init (int *argc,
                                         char ***argv,
                                         ...);
# 99 "/usr/include/glib-2.0/glib/gtestutils.h"
int g_test_run (void);

void g_test_add_func (const char *testpath,
                                         void (*test_func) (void));
void g_test_add_data_func (const char *testpath,
                                         gconstpointer test_data,
                                         void (*test_func) (gconstpointer));
# 120 "/usr/include/glib-2.0/glib/gtestutils.h"
void g_test_message (const char *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
void g_test_bug_base (const char *uri_pattern);
void g_test_bug (const char *bug_uri_snippet);

void g_test_timer_start (void);
double g_test_timer_elapsed (void);
double g_test_timer_last (void);


void g_test_queue_free (gpointer gfree_pointer);
void g_test_queue_destroy (GDestroyNotify destroy_func,
                                         gpointer destroy_data);



typedef enum {
  G_TEST_TRAP_SILENCE_STDOUT = 1 << 7,
  G_TEST_TRAP_SILENCE_STDERR = 1 << 8,
  G_TEST_TRAP_INHERIT_STDIN = 1 << 9
} GTestTrapFlags;
gboolean g_test_trap_fork (guint64 usec_timeout,
                                         GTestTrapFlags test_trap_flags);
gboolean g_test_trap_has_passed (void);
gboolean g_test_trap_reached_timeout (void);
# 154 "/usr/include/glib-2.0/glib/gtestutils.h"
gint32 g_test_rand_int (void);
gint32 g_test_rand_int_range (gint32 begin,
                                         gint32 end);
double g_test_rand_double (void);
double g_test_rand_double_range (double range_start,
                                         double range_end);


GTestCase* g_test_create_case (const char *test_name,
                                         gsize data_size,
                                         gconstpointer test_data,
                                         void (*data_setup) (void),
                                         void (*data_test) (void),
                                         void (*data_teardown) (void));
GTestSuite* g_test_create_suite (const char *suite_name);
GTestSuite* g_test_get_root (void);
void g_test_suite_add (GTestSuite *suite,
                                         GTestCase *test_case);
void g_test_suite_add_suite (GTestSuite *suite,
                                         GTestSuite *nestedsuite);
int g_test_run_suite (GTestSuite *suite);


void g_test_trap_assertions (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         guint64 assertion_flags,
                                         const char *pattern);
void g_assertion_message (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *message) __attribute__((__noreturn__));
void g_assertion_message_expr (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr) __attribute__((__noreturn__));
void g_assertion_message_cmpstr (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         const char *arg1,
                                         const char *cmp,
                                         const char *arg2) __attribute__((__noreturn__));
void g_assertion_message_cmpnum (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         long double arg1,
                                         const char *cmp,
                                         long double arg2,
                                         char numtype) __attribute__((__noreturn__));
void g_assertion_message_error (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         GError *error,
                                         GQuark error_domain,
                                         int error_code) __attribute__((__noreturn__));
void g_test_add_vtable (const char *testpath,
                                         gsize data_size,
                                         gconstpointer test_data,
                                         void (*data_setup) (void),
                                         void (*data_test) (void),
                                         void (*data_teardown) (void));
typedef struct {
  gboolean test_initialized;
  gboolean test_quick;
  gboolean test_perf;
  gboolean test_verbose;
  gboolean test_quiet;
} GTestConfig;
extern const GTestConfig * const g_test_config_vars;


typedef enum {
  G_TEST_LOG_NONE,
  G_TEST_LOG_ERROR,
  G_TEST_LOG_START_BINARY,
  G_TEST_LOG_LIST_CASE,
  G_TEST_LOG_SKIP_CASE,
  G_TEST_LOG_START_CASE,
  G_TEST_LOG_STOP_CASE,
  G_TEST_LOG_MIN_RESULT,
  G_TEST_LOG_MAX_RESULT,
  G_TEST_LOG_MESSAGE
} GTestLogType;

typedef struct {
  GTestLogType log_type;
  guint n_strings;
  gchar **strings;
  guint n_nums;
  long double *nums;
} GTestLogMsg;
typedef struct {

  GString *data;
  GSList *msgs;
} GTestLogBuffer;

const char* g_test_log_type_name (GTestLogType log_type);
GTestLogBuffer* g_test_log_buffer_new (void);
void g_test_log_buffer_free (GTestLogBuffer *tbuffer);
void g_test_log_buffer_push (GTestLogBuffer *tbuffer,
                                         guint n_bytes,
                                         const guint8 *bytes);
GTestLogMsg* g_test_log_buffer_pop (GTestLogBuffer *tbuffer);
void g_test_log_msg_free (GTestLogMsg *tmsg);
# 282 "/usr/include/glib-2.0/glib/gtestutils.h"
typedef gboolean (*GTestLogFatalFunc) (const gchar *log_domain,
                                                 GLogLevelFlags log_level,
                                                 const gchar *message,
                                                 gpointer user_data);
void
g_test_log_set_fatal_handler (GTestLogFatalFunc log_func,
                                         gpointer user_data);


# 81 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 82 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gthreadpool.h" 1
# 34 "/usr/include/glib-2.0/glib/gthreadpool.h"
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 35 "/usr/include/glib-2.0/glib/gthreadpool.h" 2



typedef struct _GThreadPool GThreadPool;






struct _GThreadPool
{
  GFunc func;
  gpointer user_data;
  gboolean exclusive;
};






GThreadPool* g_thread_pool_new (GFunc func,
                                               gpointer user_data,
                                               gint max_threads,
                                               gboolean exclusive,
                                               GError **error);





void g_thread_pool_push (GThreadPool *pool,
                                               gpointer data,
                                               GError **error);




void g_thread_pool_set_max_threads (GThreadPool *pool,
                                               gint max_threads,
                                               GError **error);
gint g_thread_pool_get_max_threads (GThreadPool *pool);



guint g_thread_pool_get_num_threads (GThreadPool *pool);


guint g_thread_pool_unprocessed (GThreadPool *pool);





void g_thread_pool_free (GThreadPool *pool,
                                               gboolean immediate,
                                               gboolean wait_);



void g_thread_pool_set_max_unused_threads (gint max_threads);
gint g_thread_pool_get_max_unused_threads (void);
guint g_thread_pool_get_num_unused_threads (void);


void g_thread_pool_stop_unused_threads (void);


void g_thread_pool_set_sort_function (GThreadPool *pool,
                                        GCompareDataFunc func,
            gpointer user_data);


void g_thread_pool_set_max_idle_time (guint interval);
guint g_thread_pool_get_max_idle_time (void);


# 83 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtimer.h" 1
# 34 "/usr/include/glib-2.0/glib/gtimer.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gtimer.h" 2







typedef struct _GTimer GTimer;



GTimer* g_timer_new (void);
void g_timer_destroy (GTimer *timer);
void g_timer_start (GTimer *timer);
void g_timer_stop (GTimer *timer);
void g_timer_reset (GTimer *timer);
void g_timer_continue (GTimer *timer);
gdouble g_timer_elapsed (GTimer *timer,
      gulong *microseconds);

void g_usleep (gulong microseconds);

void g_time_val_add (GTimeVal *time_,
                                  glong microseconds);
gboolean g_time_val_from_iso8601 (const gchar *iso_date,
      GTimeVal *time_);
gchar* g_time_val_to_iso8601 (GTimeVal *time_) __attribute__((__malloc__));


# 84 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtree.h" 1
# 34 "/usr/include/glib-2.0/glib/gtree.h"
# 1 "/usr/include/glib-2.0/glib/gnode.h" 1
# 35 "/usr/include/glib-2.0/glib/gtree.h" 2



typedef struct _GTree GTree;

typedef gboolean (*GTraverseFunc) (gpointer key,
                                   gpointer value,
                                   gpointer data);



GTree* g_tree_new (GCompareFunc key_compare_func);
GTree* g_tree_new_with_data (GCompareDataFunc key_compare_func,
                                 gpointer key_compare_data);
GTree* g_tree_new_full (GCompareDataFunc key_compare_func,
                                 gpointer key_compare_data,
                                 GDestroyNotify key_destroy_func,
                                 GDestroyNotify value_destroy_func);
GTree* g_tree_ref (GTree *tree);
void g_tree_unref (GTree *tree);
void g_tree_destroy (GTree *tree);
void g_tree_insert (GTree *tree,
                                 gpointer key,
                                 gpointer value);
void g_tree_replace (GTree *tree,
                                 gpointer key,
                                 gpointer value);
gboolean g_tree_remove (GTree *tree,
                                 gconstpointer key);
gboolean g_tree_steal (GTree *tree,
                                 gconstpointer key);
gpointer g_tree_lookup (GTree *tree,
                                 gconstpointer key);
gboolean g_tree_lookup_extended (GTree *tree,
                                 gconstpointer lookup_key,
                                 gpointer *orig_key,
                                 gpointer *value);
void g_tree_foreach (GTree *tree,
                                 GTraverseFunc func,
                                 gpointer user_data);


void g_tree_traverse (GTree *tree,
                                 GTraverseFunc traverse_func,
                                 GTraverseType traverse_type,
                                 gpointer user_data);


gpointer g_tree_search (GTree *tree,
                                 GCompareFunc search_func,
                                 gconstpointer user_data);
gint g_tree_height (GTree *tree);
gint g_tree_nnodes (GTree *tree);


# 85 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 86 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gunicode.h" 1
# 87 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gurifuncs.h" 1
# 30 "/usr/include/glib-2.0/glib/gurifuncs.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 31 "/usr/include/glib-2.0/glib/gurifuncs.h" 2


# 69 "/usr/include/glib-2.0/glib/gurifuncs.h"
char * g_uri_unescape_string (const char *escaped_string,
          const char *illegal_characters);
char * g_uri_unescape_segment (const char *escaped_string,
          const char *escaped_string_end,
          const char *illegal_characters);
char * g_uri_parse_scheme (const char *uri);
char * g_uri_escape_string (const char *unescaped,
          const char *reserved_chars_allowed,
          gboolean allow_utf8);


# 88 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gutils.h" 1
# 89 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gvarianttype.h" 1
# 26 "/usr/include/glib-2.0/glib/gvarianttype.h"
# 1 "/usr/include/glib-2.0/glib/gmessages.h" 1
# 27 "/usr/include/glib-2.0/glib/gvarianttype.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/gvarianttype.h" 2


# 40 "/usr/include/glib-2.0/glib/gvarianttype.h"
typedef struct _GVariantType GVariantType;
# 250 "/usr/include/glib-2.0/glib/gvarianttype.h"
gboolean g_variant_type_string_is_valid (const gchar *type_string);
gboolean g_variant_type_string_scan (const gchar *string,
                                                                         const gchar *limit,
                                                                         const gchar **endptr);


void g_variant_type_free (GVariantType *type);
GVariantType * g_variant_type_copy (const GVariantType *type);
GVariantType * g_variant_type_new (const gchar *type_string);


gsize g_variant_type_get_string_length (const GVariantType *type);
const gchar * g_variant_type_peek_string (const GVariantType *type);
gchar * g_variant_type_dup_string (const GVariantType *type);


gboolean g_variant_type_is_definite (const GVariantType *type);
gboolean g_variant_type_is_container (const GVariantType *type);
gboolean g_variant_type_is_basic (const GVariantType *type);
gboolean g_variant_type_is_maybe (const GVariantType *type);
gboolean g_variant_type_is_array (const GVariantType *type);
gboolean g_variant_type_is_tuple (const GVariantType *type);
gboolean g_variant_type_is_dict_entry (const GVariantType *type);
gboolean g_variant_type_is_variant (const GVariantType *type);


guint g_variant_type_hash (gconstpointer type);
gboolean g_variant_type_equal (gconstpointer type1,
                                                                         gconstpointer type2);


gboolean g_variant_type_is_subtype_of (const GVariantType *type,
                                                                         const GVariantType *supertype);


const GVariantType * g_variant_type_element (const GVariantType *type);
const GVariantType * g_variant_type_first (const GVariantType *type);
const GVariantType * g_variant_type_next (const GVariantType *type);
gsize g_variant_type_n_items (const GVariantType *type);
const GVariantType * g_variant_type_key (const GVariantType *type);
const GVariantType * g_variant_type_value (const GVariantType *type);


GVariantType * g_variant_type_new_array (const GVariantType *element);
GVariantType * g_variant_type_new_maybe (const GVariantType *element);
GVariantType * g_variant_type_new_tuple (const GVariantType * const *items,
                                                                         gint length);
GVariantType * g_variant_type_new_dict_entry (const GVariantType *key,
                                                                         const GVariantType *value);


const GVariantType * g_variant_type_checked_ (const gchar *);


# 90 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gvariant.h" 1
# 27 "/usr/include/glib-2.0/glib/gvariant.h"
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 28 "/usr/include/glib-2.0/glib/gvariant.h" 2



typedef struct _GVariant GVariant;

typedef enum
{
  G_VARIANT_CLASS_BOOLEAN = 'b',
  G_VARIANT_CLASS_BYTE = 'y',
  G_VARIANT_CLASS_INT16 = 'n',
  G_VARIANT_CLASS_UINT16 = 'q',
  G_VARIANT_CLASS_INT32 = 'i',
  G_VARIANT_CLASS_UINT32 = 'u',
  G_VARIANT_CLASS_INT64 = 'x',
  G_VARIANT_CLASS_UINT64 = 't',
  G_VARIANT_CLASS_HANDLE = 'h',
  G_VARIANT_CLASS_DOUBLE = 'd',
  G_VARIANT_CLASS_STRING = 's',
  G_VARIANT_CLASS_OBJECT_PATH = 'o',
  G_VARIANT_CLASS_SIGNATURE = 'g',
  G_VARIANT_CLASS_VARIANT = 'v',
  G_VARIANT_CLASS_MAYBE = 'm',
  G_VARIANT_CLASS_ARRAY = 'a',
  G_VARIANT_CLASS_TUPLE = '(',
  G_VARIANT_CLASS_DICT_ENTRY = '{'
} GVariantClass;

void g_variant_unref (GVariant *value);
GVariant * g_variant_ref (GVariant *value);
GVariant * g_variant_ref_sink (GVariant *value);

const GVariantType * g_variant_get_type (GVariant *value);
const gchar * g_variant_get_type_string (GVariant *value);
gboolean g_variant_is_of_type (GVariant *value,
                                                                         const GVariantType *type);
gboolean g_variant_is_container (GVariant *value);
GVariantClass g_variant_classify (GVariant *value);

GVariant * g_variant_new_boolean (gboolean boolean);
GVariant * g_variant_new_byte (guchar byte);
GVariant * g_variant_new_int16 (gint16 int16);
GVariant * g_variant_new_uint16 (guint16 uint16);
GVariant * g_variant_new_int32 (gint32 int32);
GVariant * g_variant_new_uint32 (guint32 uint32);
GVariant * g_variant_new_int64 (gint64 int64);
GVariant * g_variant_new_uint64 (guint64 uint64);
GVariant * g_variant_new_handle (gint32 handle);
GVariant * g_variant_new_double (gdouble floating);
GVariant * g_variant_new_string (const gchar *string);
GVariant * g_variant_new_object_path (const gchar *object_path);
gboolean g_variant_is_object_path (const gchar *string);
GVariant * g_variant_new_signature (const gchar *signature);
gboolean g_variant_is_signature (const gchar *string);
GVariant * g_variant_new_variant (GVariant *value);
GVariant * g_variant_new_strv (const gchar * const *strv,
                                                                         gssize length);

gboolean g_variant_get_boolean (GVariant *value);
guchar g_variant_get_byte (GVariant *value);
gint16 g_variant_get_int16 (GVariant *value);
guint16 g_variant_get_uint16 (GVariant *value);
gint32 g_variant_get_int32 (GVariant *value);
guint32 g_variant_get_uint32 (GVariant *value);
gint64 g_variant_get_int64 (GVariant *value);
guint64 g_variant_get_uint64 (GVariant *value);
gint32 g_variant_get_handle (GVariant *value);
gdouble g_variant_get_double (GVariant *value);
GVariant * g_variant_get_variant (GVariant *value);
const gchar * g_variant_get_string (GVariant *value,
                                                                         gsize *length);
gchar * g_variant_dup_string (GVariant *value,
                                                                         gsize *length);
const gchar ** g_variant_get_strv (GVariant *value,
                                                                         gsize *length);
gchar ** g_variant_dup_strv (GVariant *value,
                                                                         gsize *length);

GVariant * g_variant_new_maybe (const GVariantType *child_type,
                                                                         GVariant *child);
GVariant * g_variant_new_array (const GVariantType *child_type,
                                                                         GVariant * const *children,
                                                                         gsize n_children);
GVariant * g_variant_new_tuple (GVariant * const *children,
                                                                         gsize n_children);
GVariant * g_variant_new_dict_entry (GVariant *key,
                                                                         GVariant *value);

GVariant * g_variant_get_maybe (GVariant *value);
gsize g_variant_n_children (GVariant *value);
void g_variant_get_child (GVariant *value,
                                                                         gsize index_,
                                                                         const gchar *format_string,
                                                                         ...);
GVariant * g_variant_get_child_value (GVariant *value,
                                                                         gsize index_);
gconstpointer g_variant_get_fixed_array (GVariant *value,
                                                                         gsize *n_elements,
                                                                         gsize element_size);

gsize g_variant_get_size (GVariant *value);
gconstpointer g_variant_get_data (GVariant *value);
void g_variant_store (GVariant *value,
                                                                         gpointer data);

gchar * g_variant_print (GVariant *value,
                                                                         gboolean type_annotate);
GString * g_variant_print_string (GVariant *value,
                                                                         GString *string,
                                                                         gboolean type_annotate);

guint g_variant_hash (gconstpointer value);
gboolean g_variant_equal (gconstpointer one,
                                                                         gconstpointer two);

GVariant * g_variant_get_normal_form (GVariant *value);
gboolean g_variant_is_normal_form (GVariant *value);
GVariant * g_variant_byteswap (GVariant *value);
GVariant * g_variant_new_from_data (const GVariantType *type,
                                                                         gconstpointer data,
                                                                         gsize size,
                                                                         gboolean trusted,
                                                                         GDestroyNotify notify,
                                                                         gpointer user_data);

typedef struct _GVariantIter GVariantIter;
struct _GVariantIter {

  gsize x[16];
};

GVariantIter * g_variant_iter_new (GVariant *value);
gsize g_variant_iter_init (GVariantIter *iter,
                                                                         GVariant *value);
GVariantIter * g_variant_iter_copy (GVariantIter *iter);
gsize g_variant_iter_n_children (GVariantIter *iter);
void g_variant_iter_free (GVariantIter *iter);
GVariant * g_variant_iter_next_value (GVariantIter *iter);
gboolean g_variant_iter_next (GVariantIter *iter,
                                                                         const gchar *format_string,
                                                                         ...);
gboolean g_variant_iter_loop (GVariantIter *iter,
                                                                         const gchar *format_string,
                                                                         ...);


typedef struct _GVariantBuilder GVariantBuilder;
struct _GVariantBuilder {

  gsize x[16];
};


GQuark g_variant_parser_get_error_quark (void);

GVariantBuilder * g_variant_builder_new (const GVariantType *type);
void g_variant_builder_unref (GVariantBuilder *builder);
GVariantBuilder * g_variant_builder_ref (GVariantBuilder *builder);
void g_variant_builder_init (GVariantBuilder *builder,
                                                                         const GVariantType *type);
GVariant * g_variant_builder_end (GVariantBuilder *builder);
void g_variant_builder_clear (GVariantBuilder *builder);
void g_variant_builder_open (GVariantBuilder *builder,
                                                                         const GVariantType *type);
void g_variant_builder_close (GVariantBuilder *builder);
void g_variant_builder_add_value (GVariantBuilder *builder,
                                                                         GVariant *value);
void g_variant_builder_add (GVariantBuilder *builder,
                                                                         const gchar *format_string,
                                                                         ...);

GVariant * g_variant_new (const gchar *format_string,
                                                                         ...);
void g_variant_get (GVariant *value,
                                                                         const gchar *format_string,
                                                                         ...);
GVariant * g_variant_new_va (const gchar *format_string,
                                                                         const gchar **endptr,
                                                                         va_list *app);
void g_variant_get_va (GVariant *value,
                                                                         const gchar *format_string,
                                                                         const gchar **endptr,
                                                                         va_list *app);


GVariant * g_variant_parse (const GVariantType *type,
                                                                         const gchar *text,
                                                                         const gchar *limit,
                                                                         const gchar **endptr,
                                                                         GError **error);
GVariant * g_variant_new_parsed (const gchar *format,
                                                                         ...);
GVariant * g_variant_new_parsed_va (const gchar *format,
                                                                         va_list *app);


# 91 "/usr/include/glib-2.0/glib.h" 2
# 42 "packet-dns.c" 2
# 1 "../../epan/packet.h" 1
# 28 "../../epan/packet.h"
# 1 "../../wiretap/wtap.h" 1
# 27 "../../wiretap/wtap.h"
# 1 "/usr/include/sys/time.h" 1 3 4
# 29 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 30 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 35 "/usr/include/sys/select.h" 2 3 4
# 46 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
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



# 32 "/usr/include/sys/time.h" 2 3 4








# 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__));




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
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));
# 191 "/usr/include/sys/time.h" 3 4

# 28 "../../wiretap/wtap.h" 2
# 325 "../../wiretap/wtap.h"
struct nstr_phdr {
 gint64 rec_offset;
 gint32 rec_len;
 guint8 nicno_offset;
 guint8 nicno_len;
 guint8 dir_offset;
 guint8 dir_len;
 guint8 eth_offset;
 guint8 pcb_offset;
 guint8 l_pcb_offset;
 guint8 rec_type;
 guint8 vlantag_offset;
 guint8 coreid_offset;
};


struct eth_phdr {
 gint fcs_len;
};



struct x25_phdr {
 guint8 flags;
};




struct isdn_phdr {
 gboolean uton;
 guint8 channel;
};
# 431 "../../wiretap/wtap.h"
struct atm_phdr {
 guint32 flags;
 guint8 aal;
 guint8 type;
 guint8 subtype;
 guint16 vpi;
 guint16 vci;
 guint8 aal2_cid;
 guint16 channel;
 guint16 cells;
 guint16 aal5t_u2u;
 guint16 aal5t_len;
 guint32 aal5t_chksum;
};
# 458 "../../wiretap/wtap.h"
struct ascend_phdr {
 guint16 type;
 char user[64];
 guint32 sess;
 char call_num[64];
 guint32 chunk;
 guint32 task;
};







struct p2p_phdr {
 int sent;
};
# 495 "../../wiretap/wtap.h"
struct ieee_802_11_phdr {
 gint fcs_len;
 guint8 channel;
 guint8 data_rate;
 guint8 signal_level;
};
# 519 "../../wiretap/wtap.h"
struct cosine_phdr {
 guint8 encap;
 guint8 direction;
 char if_name[128];
 guint16 pro;
 guint16 off;
 guint16 pri;
 guint16 rm;
 guint16 err;
};
# 551 "../../wiretap/wtap.h"
struct irda_phdr {
 guint16 pkttype;
};



struct nettl_phdr {
 guint16 subsys;
 guint32 devid;
 guint32 kind;
 gint32 pid;
 guint16 uid;
};







struct mtp2_phdr {
 guint8 sent;
 guint8 annex_a_used;
 guint16 link_number;
};



typedef union {
 struct {
  guint16 vp;
  guint16 vc;
  guint16 cid;
 } atm;

 guint32 ds0mask;
} k12_input_info_t;

struct k12_phdr {
 guint32 input;
 const gchar* input_name;
 const gchar* stack_file;
 guint32 input_type;
 k12_input_info_t input_info;
 guchar* extra_info;
 guint32 extra_length;
 void* stuff;
};





struct lapd_phdr {
 guint16 pkttype;
 guint8 we_network;
};

struct wtap;
struct catapult_dct2000_phdr
{
 union
 {
  struct isdn_phdr isdn;
  struct atm_phdr atm;
  struct p2p_phdr p2p;
 } inner_pseudo_header;
 gint64 seek_off;
 struct wtap *wth;
};
# 629 "../../wiretap/wtap.h"
struct libpcap_bt_phdr {
    guint32 direction;
};







struct libpcap_ppp_phdr {
    guint8 direction;
};




struct erf_phdr {
  guint64 ts;
  guint8 type;
  guint8 flags;
  guint16 rlen;
  guint16 lctr;
  guint16 wlen;
};

struct erf_ehdr {
  guint64 ehdr;
};





struct erf_mc_phdr {
  struct erf_phdr phdr;
  struct erf_ehdr ehdr_list[8];
  union
  {
    guint16 eth_hdr;
    guint32 mc_hdr;
  } subhdr;
};
# 728 "../../wiretap/wtap.h"
struct sita_phdr {
   guint8 flags;
   guint8 signals;
   guint8 errors1;
   guint8 errors2;
   guint8 proto;
};


struct bthci_phdr {
 gboolean sent;
 guint8 channel;
};







struct l1event_phdr {
 gboolean uton;
};


struct i2c_phdr {
 guint8 is_event;
 guint8 bus;
 guint32 flags;
};


struct gsm_um_phdr {
 gboolean uplink;
 guint8 channel;

 guint8 bsic;
 guint16 arfcn;
 guint32 tdma_frame;
 guint8 error;
 guint16 timeshift;
};
# 781 "../../wiretap/wtap.h"
union wtap_pseudo_header {
 struct eth_phdr eth;
 struct x25_phdr x25;
 struct isdn_phdr isdn;
 struct atm_phdr atm;
 struct ascend_phdr ascend;
 struct p2p_phdr p2p;
 struct ieee_802_11_phdr ieee_802_11;
 struct cosine_phdr cosine;
 struct irda_phdr irda;
 struct nettl_phdr nettl;
 struct mtp2_phdr mtp2;
 struct k12_phdr k12;
 struct lapd_phdr lapd;
 struct catapult_dct2000_phdr dct2000;
 struct erf_mc_phdr erf;
 struct sita_phdr sita;
 struct bthci_phdr bthci;
 struct l1event_phdr l1event;
 struct i2c_phdr i2c;
 struct gsm_um_phdr gsm_um;
 struct nstr_phdr nstr;
};

struct wtap_nstime {
 time_t secs;
 int nsecs;
};

struct wtap_pkthdr {
 struct wtap_nstime ts;
 guint32 caplen;
 guint32 len;
 int pkt_encap;
};

struct Buffer;
struct wtap_dumper;

typedef struct wtap wtap;
typedef struct wtap_dumper wtap_dumper;

struct file_type_info {


    const char *name;



    const char *short_name;



    const char *file_extensions;



    const char *file_extension_default;


    gboolean can_compress;



    int (*can_write_encap)(int);



    int (*dump_open)(wtap_dumper *, gboolean, int *);
};


typedef int (*wtap_open_routine_t)(struct wtap*, int *, char **);
# 863 "../../wiretap/wtap.h"
struct wtap* wtap_open_offline(const char *filename, int *err,
    gchar **err_info, gboolean do_random);






void wtap_cleareof(wtap *wth);




gboolean wtap_read(wtap *wth, int *err, gchar **err_info,
    gint64 *data_offset);

gboolean wtap_seek_read (wtap *wth, gint64 seek_off,
 union wtap_pseudo_header *pseudo_header, guint8 *pd, int len,
 int *err, gchar **err_info);


struct wtap_pkthdr *wtap_phdr(wtap *wth);
union wtap_pseudo_header *wtap_pseudoheader(wtap *wth);
guint8 *wtap_buf_ptr(wtap *wth);





gint64 wtap_read_so_far(wtap *wth, int *err);
gint64 wtap_file_size(wtap *wth, int *err);
int wtap_snapshot_length(wtap *wth);
int wtap_file_type(wtap *wth);
int wtap_file_encap(wtap *wth);
int wtap_file_tsprecision(wtap *wth);


void wtap_sequential_close(wtap *wth);
void wtap_close(wtap *wth);


gboolean wtap_dump_can_open(int filetype);
gboolean wtap_dump_can_write_encap(int filetype, int encap);
gboolean wtap_dump_can_compress(int filetype);
wtap_dumper* wtap_dump_open(const char *filename, int filetype, int encap,
 int snaplen, gboolean compressed, int *err);
wtap_dumper* wtap_dump_fdopen(int fd, int filetype, int encap, int snaplen,
 gboolean compressed, int *err);
gboolean wtap_dump(wtap_dumper *, const struct wtap_pkthdr *,
 const union wtap_pseudo_header *pseudo_header, const guchar *, int *err);
void wtap_dump_flush(wtap_dumper *);
gint64 wtap_get_bytes_dumped(wtap_dumper *);
void wtap_set_bytes_dumped(wtap_dumper *wdh, gint64 bytes_dumped);
gboolean wtap_dump_close(wtap_dumper *, int *);


const char *wtap_file_type_string(int filetype);
const char *wtap_file_type_short_string(int filetype);
int wtap_short_string_to_file_type(const char *short_name);

const char *wtap_file_extensions_string(int filetype);
const char *wtap_file_extension_default_string(int filetype);

const char *wtap_encap_string(int encap);
const char *wtap_encap_short_string(int encap);
int wtap_short_string_to_encap(const char *short_name);

const char *wtap_strerror(int err);


int wtap_get_num_encap_types(void);
int wtap_get_num_file_types(void);


void wtap_register_open_routine(wtap_open_routine_t, gboolean has_magic);
int wtap_register_file_type(const struct file_type_info* fi);
int wtap_register_encap_type(char* name, char* short_name);
# 29 "../../epan/packet.h" 2
# 1 "../../epan/proto.h" 1
# 48 "../../epan/proto.h"
# 1 "../../epan/ipv4.h" 1
# 34 "../../epan/ipv4.h"
typedef struct {
 guint32 addr;
 guint32 nmask;
} ipv4_addr;


ipv4_addr* ipv4_addr_new(void);


void ipv4_addr_free(ipv4_addr *ipv4);

void ipv4_addr_set_host_order_addr(ipv4_addr *ipv4, const guint32 new_addr);
void ipv4_addr_set_net_order_addr(ipv4_addr *ipv4, const guint32 new_addr);
void ipv4_addr_set_netmask_bits(ipv4_addr *ipv4, const guint new_nmask_bits);

guint32 ipv4_get_net_order_addr(ipv4_addr *ipv4);
guint32 ipv4_get_host_order_addr(ipv4_addr *ipv4);



void ipv4_addr_str_buf(const ipv4_addr *ipv4, gchar *buf);




gboolean ipv4_addr_eq(ipv4_addr *a, ipv4_addr *b);
gboolean ipv4_addr_gt(ipv4_addr *a, ipv4_addr *b);
gboolean ipv4_addr_ge(ipv4_addr *a, ipv4_addr *b);
gboolean ipv4_addr_lt(ipv4_addr *a, ipv4_addr *b);
gboolean ipv4_addr_le(ipv4_addr *a, ipv4_addr *b);
# 49 "../../epan/proto.h" 2
# 1 "../../epan/nstime.h" 1
# 37 "../../epan/nstime.h"
typedef struct {
 time_t secs;
 int nsecs;
} nstime_t;




extern void nstime_set_zero(nstime_t *nstime);


extern gboolean nstime_is_zero(nstime_t *nstime);





extern void nstime_set_unset(nstime_t *nstime);


extern gboolean nstime_is_unset(nstime_t *nstime);
# 66 "../../epan/nstime.h"
extern void nstime_delta(nstime_t *delta, const nstime_t *b, const nstime_t *a );
# 75 "../../epan/nstime.h"
extern void nstime_sum(nstime_t *sum, const nstime_t *b, const nstime_t *a );
# 84 "../../epan/nstime.h"
extern void nstime_diff(nstime_t *diff, const nstime_t *b, const nstime_t *a );
# 98 "../../epan/nstime.h"
extern int nstime_cmp (const nstime_t *a, const nstime_t *b );


extern double nstime_to_msec(const nstime_t *nstime);


extern double nstime_to_sec(const nstime_t *nstime);


extern double wtap_nstime_to_sec(const struct wtap_nstime *nstime);
# 50 "../../epan/proto.h" 2
# 1 "../../epan/time_fmt.h" 1
# 31 "../../epan/time_fmt.h"
typedef enum {
 TO_STR_TIME_RES_T_SECS,
 TO_STR_TIME_RES_T_DSECS,
 TO_STR_TIME_RES_T_CSECS,
 TO_STR_TIME_RES_T_MSECS,
 TO_STR_TIME_RES_T_USECS,
 TO_STR_TIME_RES_T_NSECS
} to_str_time_res_t;




typedef enum {

 ABSOLUTE_TIME_LOCAL = 1000,
 ABSOLUTE_TIME_UTC,
 ABSOLUTE_TIME_DOY_UTC
} absolute_time_display_e;
# 51 "../../epan/proto.h" 2
# 1 "../../epan/tvbuff.h" 1
# 39 "../../epan/tvbuff.h"
# 1 "../../epan/ipv6-utils.h" 1
# 31 "../../epan/ipv6-utils.h"
struct e_in6_addr {
 guint8 bytes[16];
};
# 40 "../../epan/tvbuff.h" 2
# 1 "../../epan/guid-utils.h" 1
# 33 "../../epan/guid-utils.h"
typedef struct _e_guid_t {
    guint32 data1;
    guint16 data2;
    guint16 data3;
    guint8 data4[8];
} e_guid_t;


extern void guids_init(void);


extern void guids_add_guid(e_guid_t *guid, const gchar *name);


extern const gchar *guids_get_guid_name(e_guid_t *guid);



extern const gchar* guids_resolve_guid_to_str(e_guid_t *guid);
# 41 "../../epan/tvbuff.h" 2
# 1 "../../epan/exceptions.h" 1
# 29 "../../epan/exceptions.h"
# 1 "../../epan/except.h" 1
# 36 "../../epan/except.h"
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

# 37 "../../epan/except.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 67 "/usr/include/bits/waitstatus.h" 3 4
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



typedef __ino_t ino_t;
# 61 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 87 "/usr/include/sys/types.h" 3 4
typedef __off_t off_t;
# 105 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
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
# 223 "/usr/include/sys/types.h" 3 4
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
# 274 "/usr/include/sys/types.h" 3 4

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
# 479 "/usr/include/stdlib.h" 3 4






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
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
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

# 38 "../../epan/except.h" 2
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



# 39 "../../epan/except.h" 2
# 48 "../../epan/except.h"
enum { except_no_call, except_call };

typedef struct {
    unsigned long except_group;
    unsigned long except_code;
} except_id_t;

typedef struct {
    except_id_t volatile except_id;
    const char *volatile except_message;
    void *volatile except_dyndata;
} except_t;

struct except_cleanup {
    void (*except_func)(void *);
    void *except_context;
};

struct except_catch {
    const except_id_t *except_id;
    size_t except_size;
    except_t except_obj;
    jmp_buf except_jmp;
};

enum except_stacktype {
    XCEPT_CLEANUP, XCEPT_CATCHER
};

struct except_stacknode {
    struct except_stacknode *except_down;
    enum except_stacktype except_type;
    union {
 struct except_catch *except_catcher;
 struct except_cleanup *except_cleanup;
    } except_info;
};


extern void except_setup_clean(struct except_stacknode *,
 struct except_cleanup *, void (*)(void *), void *);
extern void except_setup_try(struct except_stacknode *,
 struct except_catch *, const except_id_t [], size_t);
extern struct except_stacknode *except_pop(void);


extern int except_init(void);
extern void except_deinit(void);
extern void except_rethrow(except_t *) __attribute__((__noreturn__));
extern void except_throw(long, long, const char *) __attribute__((__noreturn__));
extern void except_throwd(long, long, const char *, void *) __attribute__((__noreturn__));
extern void except_throwf(long, long, const char *, ...) __attribute__((__noreturn__));
extern void (*except_unhandled_catcher(void (*)(except_t *)))(except_t *);
extern unsigned long except_code(except_t *);
extern unsigned long except_group(except_t *);
extern const char *except_message(except_t *);
extern void *except_data(except_t *);
extern void *except_take_data(except_t *);
extern void except_set_allocator(void *(*)(size_t), void (*)(void *));
extern void *except_alloc(size_t);
extern void except_free(void *);
# 30 "../../epan/exceptions.h" 2
# 42 "../../epan/tvbuff.h" 2
# 55 "../../epan/tvbuff.h"
typedef enum {
 TVBUFF_REAL_DATA,
 TVBUFF_SUBSET,
 TVBUFF_COMPOSITE
} tvbuff_type;

typedef struct {

 struct tvbuff *tvb;


 guint offset;

 guint length;

} tvb_backing_t;

typedef struct {
 GSList *tvbs;




 guint *start_offsets;
 guint *end_offsets;

} tvb_comp_t;

typedef void (*tvbuff_free_cb_t)(void*);

typedef struct tvbuff {

 tvbuff_type type;
 gboolean initialized;
 guint usage_count;
 struct tvbuff *ds_tvb;




 GSList *used_in;



 union {
  tvb_backing_t subset;
  tvb_comp_t composite;
 } tvbuffs;







 const guint8 *real_data;


 guint length;


 guint reported_length;


 gint raw_offset;


 tvbuff_free_cb_t free_cb;
} tvbuff_t;
# 148 "../../epan/tvbuff.h"
extern void tvbuff_init(void);



extern void tvbuff_cleanup(void);





extern tvbuff_t* tvb_new(tvbuff_type);
# 179 "../../epan/tvbuff.h"
extern void tvb_free(tvbuff_t*);


extern void tvb_free_chain(tvbuff_t*);


extern guint tvb_increment_usage_count(tvbuff_t*, const guint count);






extern guint tvb_decrement_usage_count(tvbuff_t*, const guint count);





extern void tvb_set_free_cb(tvbuff_t*, const tvbuff_free_cb_t);
# 210 "../../epan/tvbuff.h"
extern void tvb_set_child_real_data_tvbuff(tvbuff_t* parent, tvbuff_t* child);

extern tvbuff_t* tvb_new_child_real_data(tvbuff_t* parent, const guint8* data, const guint length,
    const gint reported_length);


extern void tvb_set_real_data(tvbuff_t*, const guint8* data, const guint length,
    const gint reported_length);


extern tvbuff_t* tvb_new_real_data(const guint8* data, const guint length,
    const gint reported_length);
# 237 "../../epan/tvbuff.h"
extern void tvb_set_subset(tvbuff_t* tvb, tvbuff_t* backing,
  const gint backing_offset, const gint backing_length, const gint reported_length);



extern tvbuff_t* tvb_new_subset(tvbuff_t* backing,
  const gint backing_offset, const gint backing_length, const gint reported_length);



extern tvbuff_t* tvb_new_subset_remaining(tvbuff_t* backing,
  const gint backing_offset);






extern void tvb_composite_append(tvbuff_t* tvb, tvbuff_t* member);


extern void tvb_composite_prepend(tvbuff_t* tvb, tvbuff_t* member);



extern tvbuff_t* tvb_new_composite(void);



extern void tvb_composite_finalize(tvbuff_t* tvb);



extern guint tvb_length(const tvbuff_t*);




extern gint tvb_length_remaining(const tvbuff_t*, const gint offset);


extern guint tvb_ensure_length_remaining(const tvbuff_t*, const gint offset);



extern gboolean tvb_bytes_exist(const tvbuff_t*, const gint offset, const gint length);



extern void tvb_ensure_bytes_exist(const tvbuff_t *tvb, const gint offset, const gint length);


extern gboolean tvb_offset_exists(const tvbuff_t*, const gint offset);


extern guint tvb_reported_length(const tvbuff_t*);





extern gint tvb_reported_length_remaining(const tvbuff_t *tvb, const gint offset);







extern void tvb_set_reported_length(tvbuff_t*, const guint);

extern guint tvb_offset_from_real_beginning(const tvbuff_t *tvb);
# 317 "../../epan/tvbuff.h"
extern guint8 tvb_get_guint8(tvbuff_t*, const gint offset);

extern guint16 tvb_get_ntohs(tvbuff_t*, const gint offset);
extern guint32 tvb_get_ntoh24(tvbuff_t*, const gint offset);
extern guint32 tvb_get_ntohl(tvbuff_t*, const gint offset);
extern guint64 tvb_get_ntoh64(tvbuff_t*, const gint offset);
extern gfloat tvb_get_ntohieee_float(tvbuff_t*, const gint offset);
extern gdouble tvb_get_ntohieee_double(tvbuff_t*, const gint offset);

extern guint16 tvb_get_letohs(tvbuff_t*, const gint offset);
extern guint32 tvb_get_letoh24(tvbuff_t*, const gint offset);
extern guint32 tvb_get_letohl(tvbuff_t*, const gint offset);
extern guint64 tvb_get_letoh64(tvbuff_t*, const gint offset);
extern gfloat tvb_get_letohieee_float(tvbuff_t*, const gint offset);
extern gdouble tvb_get_letohieee_double(tvbuff_t*, const gint offset);





extern guint32 tvb_get_ipv4(tvbuff_t*, const gint offset);


extern void tvb_get_ipv6(tvbuff_t*, const gint offset, struct e_in6_addr *addr);


extern void tvb_get_ntohguid(tvbuff_t *tvb, const gint offset, e_guid_t *guid);
extern void tvb_get_letohguid(tvbuff_t *tvb, const gint offset, e_guid_t *guid);
extern void tvb_get_guid(tvbuff_t *tvb, const gint offset, e_guid_t *guid, const guint representation);


extern guint8 tvb_get_bits8(tvbuff_t *tvb, gint bit_offset, const gint no_of_bits);
extern guint16 tvb_get_bits16(tvbuff_t *tvb, gint bit_offset, const gint no_of_bits, const gboolean little_endian);
extern guint32 tvb_get_bits32(tvbuff_t *tvb, gint bit_offset, const gint no_of_bits, const gboolean little_endian);
extern guint64 tvb_get_bits64(tvbuff_t *tvb, gint bit_offset, const gint no_of_bits, const gboolean little_endian);






extern guint32 tvb_get_bits(tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits, const gboolean little_endian);







extern void* tvb_memcpy(tvbuff_t*, void* target, const gint offset, size_t length);



extern void* tvb_memdup(tvbuff_t*, const gint offset, size_t length);





extern void* ep_tvb_memdup(tvbuff_t *tvb, const gint offset, size_t length);
# 403 "../../epan/tvbuff.h"
extern const guint8* tvb_get_ptr(tvbuff_t*, const gint offset, const gint length);
# 412 "../../epan/tvbuff.h"
extern gint tvb_find_guint8(tvbuff_t*, const gint offset, const gint maxlength,
    const guint8 needle);







extern gint tvb_pbrk_guint8(tvbuff_t *, const gint offset, const gint maxlength,
    const guint8 *needles, guchar *found_needle);






extern guint tvb_strsize(tvbuff_t *tvb, const gint offset);





extern gint tvb_strnlen(tvbuff_t*, const gint offset, const guint maxlength);
# 448 "../../epan/tvbuff.h"
extern char *tvb_fake_unicode(tvbuff_t *tvb, int offset, const int len,
                              const gboolean little_endian);
extern char *tvb_get_ephemeral_faked_unicode(tvbuff_t *tvb, int offset, const int len,
                              const gboolean little_endian);




extern gchar * tvb_format_text(tvbuff_t *tvb, const gint offset, const gint size);





extern gchar * tvb_format_text_wsp(tvbuff_t *tvb, const gint offset, const gint size);





extern gchar *tvb_format_stringzpad(tvbuff_t *tvb, const gint offset, const gint size);





extern gchar *tvb_format_stringzpad_wsp(tvbuff_t *tvb, const gint offset, const gint size);
# 501 "../../epan/tvbuff.h"
extern guint8 *tvb_get_string(tvbuff_t *tvb, const gint offset, const gint length);
extern gchar *tvb_get_unicode_string(tvbuff_t *tvb, const gint offset, gint length, const guint encoding);
extern guint8 *tvb_get_ephemeral_string(tvbuff_t *tvb, const gint offset, const gint length);
extern gchar *tvb_get_ephemeral_unicode_string(tvbuff_t *tvb, const gint offset, gint length, const guint encoding);
extern guint8 *tvb_get_seasonal_string(tvbuff_t *tvb, const gint offset, const gint length);
# 530 "../../epan/tvbuff.h"
extern guint8 *tvb_get_stringz(tvbuff_t *tvb, const gint offset, gint *lengthp);
extern guint8 *tvb_get_ephemeral_stringz(tvbuff_t *tvb, const gint offset, gint *lengthp);
extern gchar *tvb_get_ephemeral_unicode_stringz(tvbuff_t *tvb, const gint offset, gint *lengthp, const guint encoding);
extern guint8 *tvb_get_seasonal_stringz(tvbuff_t *tvb, const gint offset, gint *lengthp);
# 548 "../../epan/tvbuff.h"
extern gint tvb_get_nstringz(tvbuff_t *tvb, const gint offset, const guint bufsize,
    guint8* buffer);







extern gint tvb_get_nstringz0(tvbuff_t *tvb, const gint offset, const guint bufsize,
    guint8* buffer);
# 579 "../../epan/tvbuff.h"
extern gint tvb_find_line_end(tvbuff_t *tvb, const gint offset, int len,
    gint *next_offset, const gboolean desegment);
# 600 "../../epan/tvbuff.h"
extern gint tvb_find_line_end_unquoted(tvbuff_t *tvb, const gint offset, int len,
    gint *next_offset);
# 620 "../../epan/tvbuff.h"
extern gint tvb_skip_wsp(tvbuff_t* tvb, const gint offset, const gint maxlength);

extern gint tvb_skip_wsp_return(tvbuff_t* tvb, const gint offset);





extern gint tvb_strneql(tvbuff_t *tvb, const gint offset, const gchar *str,
    const size_t size);





extern gint tvb_strncaseeql(tvbuff_t *tvb, const gint offset, const gchar *str,
    const size_t size);





extern gint tvb_memeql(tvbuff_t *tvb, const gint offset, const guint8 *str,
    size_t size);






extern gchar *tvb_bytes_to_str_punct(tvbuff_t *tvb, const gint offset, const gint len,
    const gchar punct);





extern gchar *tvb_bytes_to_str(tvbuff_t *tvb, const gint offset, const gint len);
# 668 "../../epan/tvbuff.h"
typedef struct dgt_set_t
{
 const unsigned char out[15];
}
dgt_set_t;

extern gchar *tvb_bcd_dig_to_ep_str(tvbuff_t *tvb, const gint offset, const gint len, dgt_set_t *dgt, gboolean skip_first);
# 683 "../../epan/tvbuff.h"
extern gint tvb_find_tvb(tvbuff_t *haystack_tvb, tvbuff_t *needle_tvb,
 const gint haystack_offset);






extern tvbuff_t* tvb_uncompress(tvbuff_t *tvb, const int offset, int comprlen);






extern tvbuff_t* tvb_child_uncompress(tvbuff_t *parent, tvbuff_t *tvb, const int offset, int comprlen);
# 52 "../../epan/proto.h" 2
# 1 "../../epan/ftypes/ftypes.h" 1
# 30 "../../epan/ftypes/ftypes.h"
# 1 "../../epan/ftypes/../slab.h" 1
# 31 "../../epan/ftypes/ftypes.h" 2


enum ftenum {
 FT_NONE,
 FT_PROTOCOL,
 FT_BOOLEAN,
 FT_UINT8,
 FT_UINT16,
 FT_UINT24,
 FT_UINT32,
 FT_UINT64,
 FT_INT8,
 FT_INT16,
 FT_INT24,
 FT_INT32,
 FT_INT64,
 FT_FLOAT,
 FT_DOUBLE,
 FT_ABSOLUTE_TIME,
 FT_RELATIVE_TIME,
 FT_STRING,
 FT_STRINGZ,
 FT_EBCDIC,
 FT_UINT_STRING,

 FT_ETHER,
 FT_BYTES,
 FT_UINT_BYTES,
 FT_IPv4,
 FT_IPv6,
 FT_IPXNET,
 FT_FRAMENUM,
 FT_PCRE,
 FT_GUID,
 FT_OID,
 FT_NUM_TYPES
};
# 81 "../../epan/ftypes/ftypes.h"
typedef enum ftenum ftenum_t;
typedef struct _ftype_t ftype_t;


enum ftrepr {
 FTREPR_DISPLAY,
 FTREPR_DFILTER
};

typedef enum ftrepr ftrepr_t;






void
ftypes_initialize(void);




const char*
ftype_name(ftenum_t ftype);




const char*
ftype_pretty_name(ftenum_t ftype);


int
ftype_length(ftenum_t ftype);

gboolean
ftype_can_slice(enum ftenum ftype);

gboolean
ftype_can_eq(enum ftenum ftype);

gboolean
ftype_can_ne(enum ftenum ftype);

gboolean
ftype_can_gt(enum ftenum ftype);

gboolean
ftype_can_ge(enum ftenum ftype);

gboolean
ftype_can_lt(enum ftenum ftype);

gboolean
ftype_can_le(enum ftenum ftype);

gboolean
ftype_can_bitwise_and(enum ftenum ftype);

gboolean
ftype_can_contains(enum ftenum ftype);

gboolean
ftype_can_matches(enum ftenum ftype);



# 1 "../../epan/ipv4.h" 1
# 149 "../../epan/ftypes/ftypes.h" 2


# 1 "../../epan/tvbuff.h" 1
# 152 "../../epan/ftypes/ftypes.h" 2
# 1 "../../epan/nstime.h" 1
# 153 "../../epan/ftypes/ftypes.h" 2
# 1 "../../epan/dfilter/drange.h" 1
# 39 "../../epan/dfilter/drange.h"
typedef enum {
 DRANGE_NODE_END_T_UNINITIALIZED,
 DRANGE_NODE_END_T_LENGTH,
 DRANGE_NODE_END_T_OFFSET,
 DRANGE_NODE_END_T_TO_THE_END
} drange_node_end_t;

typedef struct _drange_node {
  gint start_offset;
  gint length;
  gint end_offset;
  drange_node_end_t ending;
} drange_node;

typedef struct _drange {
  GSList* range_list;
  gboolean has_total_length;
  gint total_length;
  gint min_start_offset;
  gint max_start_offset;
} drange;


drange_node* drange_node_new(void);


void drange_node_free(drange_node* drnode);


void drange_node_free_list(GSList* list);


gint drange_node_get_start_offset(drange_node* drnode);
gint drange_node_get_length(drange_node* drnode);
gint drange_node_get_end_offset(drange_node* drnode);
drange_node_end_t drange_node_get_ending(drange_node* drnode);


void drange_node_set_start_offset(drange_node* drnode, gint offset);
void drange_node_set_length(drange_node* drnode, gint length);
void drange_node_set_end_offset(drange_node* drnode, gint offset);
void drange_node_set_to_the_end(drange_node* drnode);


drange* drange_new(void);
drange* drange_new_from_list(GSList *list);




void drange_free(drange* dr);


gboolean drange_has_total_length(drange* dr);
gint drange_get_total_length(drange* dr);
gint drange_get_min_start_offset(drange* dr);
gint drange_get_max_start_offset(drange* dr);


void drange_append_drange_node(drange* dr, drange_node* drnode);
void drange_prepend_drange_node(drange* dr, drange_node* drnode);
void drange_foreach_drange_node(drange* dr, GFunc func, gpointer funcdata);
# 154 "../../epan/ftypes/ftypes.h" 2

typedef struct _fvalue_t {
 ftype_t *ftype;
 union {

  guint32 uinteger;
  gint32 sinteger;
  guint64 integer64;
  gdouble floating;
  gchar *string;
  guchar *ustring;
  GByteArray *bytes;
  ipv4_addr ipv4;
  e_guid_t guid;
  nstime_t time;
  tvbuff_t *tvb;



  GRegex *re;

 } value;



 gboolean fvalue_gboolean1;

} fvalue_t;

typedef void (*FvalueNewFunc)(fvalue_t*);
typedef void (*FvalueFreeFunc)(fvalue_t*);
typedef void (*LogFunc)(const char*,...);

typedef gboolean (*FvalueFromUnparsed)(fvalue_t*, char*, gboolean, LogFunc);
typedef gboolean (*FvalueFromString)(fvalue_t*, char*, LogFunc);
typedef void (*FvalueToStringRepr)(fvalue_t*, ftrepr_t, char*);
typedef int (*FvalueStringReprLen)(fvalue_t*, ftrepr_t);

typedef void (*FvalueSetFunc)(fvalue_t*, gpointer, gboolean);
typedef void (*FvalueSetUnsignedIntegerFunc)(fvalue_t*, guint32);
typedef void (*FvalueSetSignedIntegerFunc)(fvalue_t*, gint32);
typedef void (*FvalueSetInteger64Func)(fvalue_t*, guint64);
typedef void (*FvalueSetFloatingFunc)(fvalue_t*, gdouble);

typedef gpointer (*FvalueGetFunc)(fvalue_t*);
typedef guint32 (*FvalueGetUnsignedIntegerFunc)(fvalue_t*);
typedef gint32 (*FvalueGetSignedIntegerFunc)(fvalue_t*);
typedef guint64 (*FvalueGetInteger64Func)(fvalue_t*);
typedef double (*FvalueGetFloatingFunc)(fvalue_t*);

typedef gboolean (*FvalueCmp)(fvalue_t*, fvalue_t*);

typedef guint (*FvalueLen)(fvalue_t*);
typedef void (*FvalueSlice)(fvalue_t*, GByteArray *, guint offset, guint length);

struct _ftype_t {
 ftenum_t ftype;
 const char *name;
 const char *pretty_name;
 int wire_size;
 FvalueNewFunc new_value;
 FvalueFreeFunc free_value;
 FvalueFromUnparsed val_from_unparsed;
 FvalueFromString val_from_string;
 FvalueToStringRepr val_to_string_repr;
 FvalueStringReprLen len_string_repr;


 FvalueSetFunc set_value;
 FvalueSetUnsignedIntegerFunc set_value_uinteger;
 FvalueSetSignedIntegerFunc set_value_sinteger;
 FvalueSetInteger64Func set_value_integer64;
 FvalueSetFloatingFunc set_value_floating;


 FvalueGetFunc get_value;
 FvalueGetUnsignedIntegerFunc get_value_uinteger;
 FvalueGetSignedIntegerFunc get_value_sinteger;
 FvalueGetInteger64Func get_value_integer64;
 FvalueGetFloatingFunc get_value_floating;

 FvalueCmp cmp_eq;
 FvalueCmp cmp_ne;
 FvalueCmp cmp_gt;
 FvalueCmp cmp_ge;
 FvalueCmp cmp_lt;
 FvalueCmp cmp_le;
 FvalueCmp cmp_bitwise_and;
 FvalueCmp cmp_contains;
 FvalueCmp cmp_matches;

 FvalueLen len;
 FvalueSlice slice;
};


fvalue_t*
fvalue_new(ftenum_t ftype);

void
fvalue_init(fvalue_t *fv, ftenum_t ftype);



union fvalue_tslab_item { fvalue_t slab_item; union fvalue_tslab_item *next_free; };




extern union fvalue_tslab_item *fvalue_t_free_list;
# 282 "../../epan/ftypes/ftypes.h"
fvalue_t*
fvalue_from_unparsed(ftenum_t ftype, char *s, gboolean allow_partial_value, LogFunc logfunc);

fvalue_t*
fvalue_from_string(ftenum_t ftype, char *s, LogFunc logfunc);







int
fvalue_string_repr_len(fvalue_t *fv, ftrepr_t rtype);
# 307 "../../epan/ftypes/ftypes.h"
extern char *
fvalue_to_string_repr(fvalue_t *fv, ftrepr_t rtype, char *buf);

ftype_t*
fvalue_ftype(fvalue_t *fv);

const char*
fvalue_type_name(fvalue_t *fv);

void
fvalue_set(fvalue_t *fv, gpointer value, gboolean already_copied);

void
fvalue_set_uinteger(fvalue_t *fv, guint32 value);

void
fvalue_set_sinteger(fvalue_t *fv, gint32 value);

void
fvalue_set_integer64(fvalue_t *fv, guint64 value);

void
fvalue_set_floating(fvalue_t *fv, gdouble value);

gpointer
fvalue_get(fvalue_t *fv);

extern guint32
fvalue_get_uinteger(fvalue_t *fv);

extern gint32
fvalue_get_sinteger(fvalue_t *fv);

guint64
fvalue_get_integer64(fvalue_t *fv);

extern double
fvalue_get_floating(fvalue_t *fv);

gboolean
fvalue_eq(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_ne(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_gt(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_ge(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_lt(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_le(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_bitwise_and(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_contains(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_matches(fvalue_t *a, fvalue_t *b);

guint
fvalue_length(fvalue_t *fv);

fvalue_t*
fvalue_slice(fvalue_t *fv, drange *dr);
# 53 "../../epan/proto.h" 2
# 1 "../../register.h" 1
# 30 "../../register.h"
typedef enum {
  RA_NONE,
  RA_DISSECTORS,
  RA_LISTENERS,
  RA_REGISTER,
  RA_PLUGIN_REGISTER,
  RA_HANDOFF,
  RA_PLUGIN_HANDOFF,
  RA_PREFERENCES,
  RA_CONFIGURATION
} register_action_e;

typedef void (*register_cb)(register_action_e action, const char *message, gpointer client_data);

extern void register_all_protocols(register_cb cb, gpointer client_data);
extern void register_all_protocol_handoffs(register_cb cb, gpointer client_data);
extern void register_all_tap_listeners(void);
extern gulong register_count(void);
# 54 "../../epan/proto.h" 2






extern int hf_text_only;




struct _value_string;







typedef void (*custom_fmt_func_t)(gchar *, guint32);





struct _protocol;


typedef struct _protocol protocol_t;
# 220 "../../epan/proto.h"
typedef enum {
 BASE_NONE,
 BASE_DEC,
 BASE_HEX,
 BASE_OCT,
 BASE_DEC_HEX,
 BASE_HEX_DEC,
 BASE_CUSTOM
} base_display_e;
# 242 "../../epan/proto.h"
typedef enum {
    HF_REF_TYPE_NONE,
    HF_REF_TYPE_INDIRECT,
    HF_REF_TYPE_DIRECT
} hf_ref_type;


typedef struct _header_field_info header_field_info;


struct _header_field_info {

 const char *name;
 const char *abbrev;
 enum ftenum type;
 int display;
 const void *strings;



 guint32 bitmask;
 const char *blurb;


 int id;
 int parent;
 hf_ref_type ref_type;
 int bitshift;
 header_field_info *same_name_next;
 header_field_info *same_name_prev;
};
# 282 "../../epan/proto.h"
typedef struct hf_register_info {
 int *p_id;
 header_field_info hfinfo;
} hf_register_info;





typedef struct _item_label_t {
 char representation[240];
} item_label_t;



typedef struct field_info {
 header_field_info *hfinfo;
 gint start;
 gint length;
 gint appendix_start;
 gint appendix_length;
 gint tree_type;
 item_label_t *rep;
 guint32 flags;
 tvbuff_t *ds_tvb;
 fvalue_t value;
} field_info;
# 352 "../../epan/proto.h"
typedef struct {
    GHashTable *interesting_hfids;
    gboolean visible;
    gboolean fake_protocols;
    gint count;
} tree_data_t;


typedef struct _proto_node {
 struct _proto_node *first_child;
 struct _proto_node *last_child;
 struct _proto_node *next;
 struct _proto_node *parent;
 field_info *finfo;
 tree_data_t *tree_data;
} proto_node;


typedef proto_node proto_tree;

typedef proto_node proto_item;
# 449 "../../epan/proto.h"
typedef void (*proto_tree_foreach_func)(proto_node *, gpointer);
typedef gboolean (*proto_tree_traverse_func)(proto_node *, gpointer);

extern gboolean proto_tree_traverse_post_order(proto_tree *tree,
    proto_tree_traverse_func func, gpointer data);

extern void proto_tree_children_foreach(proto_tree *tree,
    proto_tree_foreach_func func, gpointer data);
# 471 "../../epan/proto.h"
extern void proto_init(void (register_all_protocols_func)(register_cb cb, gpointer client_data),
         void (register_all_handoffs_func)(register_cb cb, gpointer client_data),
         register_cb cb, void *client_data);



extern void proto_cleanup(void);
# 492 "../../epan/proto.h"
extern gboolean proto_field_is_referenced(proto_tree *tree, int proto_id);







extern proto_tree* proto_item_add_subtree(proto_item *ti, const gint idx);




extern proto_tree* proto_item_get_subtree(const proto_item *ti);




extern proto_item* proto_item_get_parent(const proto_item *ti);





extern proto_item* proto_item_get_parent_nth(proto_item *ti, int gen);





extern void proto_item_set_text(proto_item *ti, const char *format, ...)
 __attribute__((__format__ (__printf__, 2, 3)));





extern void proto_item_append_text(proto_item *ti, const char *format, ...)
 __attribute__((__format__ (__printf__, 2, 3)));





extern void proto_item_prepend_text(proto_item *ti, const char *format, ...)
 __attribute__((__format__ (__printf__, 2, 3)));




extern void proto_item_set_len(proto_item *ti, const gint length);
# 554 "../../epan/proto.h"
extern void proto_item_set_end(proto_item *ti, tvbuff_t *tvb, gint end);





extern int proto_item_get_len(const proto_item *ti);
# 569 "../../epan/proto.h"
extern gboolean proto_item_set_expert_flags(proto_item *ti, const int group, const guint severity);






extern proto_tree* proto_tree_create_root(void);



extern void proto_tree_free(proto_tree *tree);
# 589 "../../epan/proto.h"
extern gboolean
proto_tree_set_visible(proto_tree *tree, gboolean visible);




extern void
proto_tree_set_fake_protocols(proto_tree *tree, gboolean fake_protocols);





extern void
proto_tree_prime_hfid(proto_tree *tree, const int hfid);




extern proto_item* proto_tree_get_parent(const proto_tree *tree);




extern proto_tree* proto_tree_get_root(proto_tree *tree);





extern void proto_tree_move_item(proto_tree *tree, proto_item *fixed_item, proto_item *item_to_move);







extern void proto_tree_set_appendix(proto_tree *tree, tvbuff_t *tvb, gint start, const gint length);
# 639 "../../epan/proto.h"
extern proto_item *
proto_tree_add_item(proto_tree *tree, const int hfindex, tvbuff_t *tvb,
    const gint start, gint length, const guint encoding);
# 651 "../../epan/proto.h"
extern proto_item *
proto_tree_add_text(proto_tree *tree, tvbuff_t *tvb, gint start, gint length, const char *format,
 ...) __attribute__((__format__ (__printf__, 5, 6)));
# 663 "../../epan/proto.h"
extern proto_item *
proto_tree_add_text_valist(proto_tree *tree, tvbuff_t *tvb, gint start,
 gint length, const char *format, va_list ap);
# 677 "../../epan/proto.h"
extern proto_item *
proto_tree_add_none_format(proto_tree *tree, const int hfindex, tvbuff_t *tvb, const gint start,
 gint length, const char *format, ...) __attribute__((__format__ (__printf__, 6, 7)));
# 690 "../../epan/proto.h"
extern proto_item *
proto_tree_add_protocol_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const char *format, ...) __attribute__((__format__ (__printf__, 6, 7)));
# 705 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bytes(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* start_ptr);
# 721 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bytes_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const guint8* start_ptr, const char *format,
 ...) __attribute__((__format__ (__printf__, 7, 8)));
# 737 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bytes_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* start_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 749 "../../epan/proto.h"
extern proto_item *
proto_tree_add_time(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, nstime_t* value_ptr);
# 765 "../../epan/proto.h"
extern proto_item *
proto_tree_add_time_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, nstime_t* value_ptr, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 782 "../../epan/proto.h"
extern proto_item *
proto_tree_add_time_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, nstime_t* value_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 794 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipxnet(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value);
# 810 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipxnet_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, guint32 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 826 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipxnet_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 838 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv4(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value);
# 854 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv4_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, guint32 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 870 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv4_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 882 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv6(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value_ptr);
# 898 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv6_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const guint8* value_ptr, const char *format,
 ...) __attribute__((__format__ (__printf__, 7, 8)));
# 914 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv6_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 926 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ether(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value);
# 942 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ether_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const guint8* value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 958 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ether_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 970 "../../epan/proto.h"
extern proto_item *
proto_tree_add_guid(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const e_guid_t *value_ptr);
# 986 "../../epan/proto.h"
extern proto_item *
proto_tree_add_guid_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const e_guid_t *value_ptr, const char *format,
 ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1002 "../../epan/proto.h"
extern proto_item *
proto_tree_add_guid_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const e_guid_t *value_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1014 "../../epan/proto.h"
extern proto_item *
proto_tree_add_oid(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value_ptr);
# 1030 "../../epan/proto.h"
extern proto_item *
proto_tree_add_oid_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const guint8* value_ptr, const char *format,
 ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1046 "../../epan/proto.h"
extern proto_item *
proto_tree_add_oid_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1058 "../../epan/proto.h"
extern proto_item *
proto_tree_add_string(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const char* value);
# 1074 "../../epan/proto.h"
extern proto_item *
proto_tree_add_string_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const char* value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1090 "../../epan/proto.h"
extern proto_item *
proto_tree_add_string_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const char* value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1102 "../../epan/proto.h"
extern proto_item *
proto_tree_add_boolean(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value);
# 1118 "../../epan/proto.h"
extern proto_item *
proto_tree_add_boolean_format_value(proto_tree *tree, int hfindex,
 tvbuff_t *tvb, gint start, gint length, guint32 value,
 const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1134 "../../epan/proto.h"
extern proto_item *
proto_tree_add_boolean_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1146 "../../epan/proto.h"
extern proto_item *
proto_tree_add_float(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, float value);
# 1162 "../../epan/proto.h"
extern proto_item *
proto_tree_add_float_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, float value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1178 "../../epan/proto.h"
extern proto_item *
proto_tree_add_float_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, float value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1190 "../../epan/proto.h"
extern proto_item *
proto_tree_add_double(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, double value);
# 1206 "../../epan/proto.h"
extern proto_item *
proto_tree_add_double_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, double value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1222 "../../epan/proto.h"
extern proto_item *
proto_tree_add_double_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, double value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1234 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value);
# 1250 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, guint32 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1267 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1279 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint64(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint64 value);
# 1295 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint64_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, guint64 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1311 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint64_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint64 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1323 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, gint32 value);
# 1339 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, gint32 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1356 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, gint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1368 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int64(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, gint64 value);
# 1384 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int64_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, gint64 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1400 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int64_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, gint64 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));







extern proto_item *
proto_tree_add_debug_text(proto_tree *tree, const char *format,
 ...) __attribute__((__format__ (__printf__, 2, 3)));
# 1430 "../../epan/proto.h"
extern void
proto_item_append_string(proto_item *pi, const char *str);







extern void
proto_item_fill_label(field_info *fi, gchar *label_str);







extern int
proto_register_protocol(const char *name, const char *short_name, const char *filter_name);



extern void
proto_mark_private(const int proto_id);




extern gboolean
proto_is_private(const int proto_id);





typedef void (*prefix_initializer_t)(const char* match);




extern void
proto_register_prefix(const char *prefix, prefix_initializer_t initializer);


extern void proto_initialize_all_prefixes(void);





extern void
proto_register_field_array(const int parent, hf_register_info *hf, const int num_records);




extern void
proto_register_subtree_array(gint *const *indices, const int num_indices);



extern int proto_registrar_n(void);




extern const char* proto_registrar_get_name(const int n);




extern const char* proto_registrar_get_abbrev(const int n);




extern header_field_info* proto_registrar_get_nth(guint hfindex);




extern header_field_info* proto_registrar_get_byname(const char *field_name);




extern int proto_registrar_get_ftype(const int n);




extern int proto_registrar_get_parent(const int n);




extern gboolean proto_registrar_is_protocol(const int n);




extern gint proto_registrar_get_length(const int n);





extern int proto_get_first_protocol(void **cookie);
extern int proto_get_next_protocol(void **cookie);
extern header_field_info *proto_get_first_protocol_field(const int proto_id, void **cookle);
extern header_field_info *proto_get_next_protocol_field(void **cookle);




extern int proto_get_id_by_filter_name(const gchar* filter_name);




extern gboolean proto_can_toggle_protocol(const int proto_id);



extern protocol_t *find_protocol_by_id(const int proto_id);




extern const char *proto_get_protocol_name(const int proto_id);



extern int proto_get_id(const protocol_t *protocol);



extern const char *proto_get_protocol_short_name(const protocol_t *protocol);



extern const char *proto_get_protocol_long_name(const protocol_t *protocol);




extern gboolean proto_is_protocol_enabled(const protocol_t *protocol);




extern const char *proto_get_protocol_filter_name(const int proto_id);




extern void proto_set_decoding(const int proto_id, const gboolean enabled);


extern void proto_enable_all(void);



extern void proto_set_cant_toggle(const int proto_id);






extern gboolean proto_check_for_protocol_or_field(const proto_tree* tree, const int id);






extern GPtrArray* proto_get_finfo_ptr_array(const proto_tree *tree, const int hfindex);





extern gboolean proto_tracking_interesting_fields(const proto_tree *tree);







extern GPtrArray* proto_find_finfo(proto_tree *tree, const int hfindex);





extern GPtrArray* proto_all_finfos(proto_tree *tree);


extern void proto_registrar_dump_protocols(void);


extern void proto_registrar_dump_values(void);




extern void proto_registrar_dump_fields(const int format);







extern gboolean *tree_is_expanded;



extern int num_tree_types;
# 1661 "../../epan/proto.h"
extern int
hfinfo_bitwidth(const header_field_info *hfinfo);




# 1 "../../epan/epan.h" 1
# 28 "../../epan/epan.h"
# 1 "../../epan/frame_data.h" 1
# 28 "../../epan/frame_data.h"
# 1 "../../epan/column_info.h" 1
# 42 "../../epan/column_info.h"
typedef struct {
  const gchar **col_expr;
  gchar **col_expr_val;
} col_expr_t;


typedef struct _column_info {
  gint num_cols;
  gint *col_fmt;
  gboolean **fmt_matx;
  gint *col_first;
  gint *col_last;
  gchar **col_title;
  gchar **col_custom_field;
  gint *col_custom_occurrence;
  gint *col_custom_field_id;
  struct _dfilter_t **col_custom_dfilter;
  const gchar **col_data;
  gchar **col_buf;
  int *col_fence;
  col_expr_t col_expr;
  gboolean writable;
  gboolean columns_changed;
} column_info;
# 76 "../../epan/column_info.h"
enum {
  COL_8021Q_VLAN_ID,
  COL_ABS_DATE_TIME,
  COL_ABS_TIME,
  COL_CIRCUIT_ID,
  COL_DSTIDX,
  COL_SRCIDX,
  COL_VSAN,
  COL_CUMULATIVE_BYTES,
  COL_CUSTOM,
  COL_DCE_CALL,
  COL_DCE_CTX,
  COL_DELTA_TIME,
  COL_DELTA_CONV_TIME,
  COL_DELTA_TIME_DIS,
  COL_RES_DST,
  COL_UNRES_DST,
  COL_RES_DST_PORT,
  COL_UNRES_DST_PORT,
  COL_DEF_DST,
  COL_DEF_DST_PORT,
  COL_EXPERT,
  COL_IF_DIR,
  COL_OXID,
  COL_RXID,
  COL_FR_DLCI,
  COL_FREQ_CHAN,
  COL_BSSGP_TLLI,
  COL_HPUX_DEVID,
  COL_HPUX_SUBSYS,
  COL_DEF_DL_DST,
  COL_DEF_DL_SRC,
  COL_RES_DL_DST,
  COL_UNRES_DL_DST,
  COL_RES_DL_SRC,
  COL_UNRES_DL_SRC,
  COL_RSSI,
  COL_TX_RATE,
  COL_DSCP_VALUE,
  COL_INFO,
  COL_COS_VALUE,
  COL_RES_NET_DST,
  COL_UNRES_NET_DST,
  COL_RES_NET_SRC,
  COL_UNRES_NET_SRC,
  COL_DEF_NET_DST,
  COL_DEF_NET_SRC,
  COL_NUMBER,
  COL_PACKET_LENGTH,
  COL_PROTOCOL,
  COL_REL_TIME,
  COL_REL_CONV_TIME,
  COL_DEF_SRC,
  COL_DEF_SRC_PORT,
  COL_RES_SRC,
  COL_UNRES_SRC,
  COL_RES_SRC_PORT,
  COL_UNRES_SRC_PORT,
  COL_TEI,
  COL_CLS_TIME,
  NUM_COL_FMTS
};
# 29 "../../epan/frame_data.h" 2
# 42 "../../epan/frame_data.h"
typedef struct _frame_data {
  struct _frame_data *next;
  struct _frame_data *prev;
  GSList *pfd;
  guint32 num;
  guint32 pkt_len;
  guint32 cap_len;
  guint32 cum_bytes;
  gint64 file_off;
  guint16 subnum;
  gint16 lnk_t;
  struct {
    unsigned int passed_dfilter : 1;
    unsigned int encoding : 2;
    unsigned int visited : 1;
    unsigned int marked : 1;
    unsigned int ref_time : 1;
    unsigned int ignored : 1;
  } flags;

  const void *color_filter;

  nstime_t abs_ts;
  nstime_t rel_ts;
  nstime_t del_dis_ts;
  nstime_t del_cap_ts;


  gchar **col_text;
  guint *col_text_len;

} frame_data;





typedef struct {
  tvbuff_t *tvb;
  gboolean name_initialized;
  const char *name;
} data_source;



extern void p_add_proto_data(frame_data *fd, int proto, void *proto_data);
extern void *p_get_proto_data(frame_data *fd, int proto);
extern void p_remove_proto_data(frame_data *fd, int proto);


extern gint frame_data_compare(const frame_data *fdata1, const frame_data *fdata2, int field);

extern void frame_data_cleanup(frame_data *fdata);

extern void frame_data_init(frame_data *fdata, guint32 num,
                const struct wtap_pkthdr *phdr, gint64 offset,
                guint32 cum_bytes);



extern void frame_data_set_before_dissect(frame_data *fdata,
                nstime_t *elapsed_time,
                nstime_t *first_ts,
                nstime_t *prev_dis_ts,
                nstime_t *prev_cap_ts);

extern void frame_data_set_after_dissect(frame_data *fdata,
                guint32 *cum_bytes,
                nstime_t *prev_dis_ts);
# 29 "../../epan/epan.h" 2
# 1 "../../epan/column_info.h" 1
# 30 "../../epan/epan.h" 2


typedef struct _epan_dissect_t epan_dissect_t;

# 1 "../../epan/dfilter/dfilter.h" 1
# 29 "../../epan/dfilter/dfilter.h"
typedef struct _dfilter_t dfilter_t;

# 1 "../../epan/epan.h" 1
# 32 "../../epan/dfilter/dfilter.h" 2
# 1 "../../epan/proto.h" 1
# 33 "../../epan/dfilter/dfilter.h" 2



void
dfilter_init(void);


void
dfilter_cleanup(void);
# 58 "../../epan/dfilter/dfilter.h"
gboolean
dfilter_compile(const gchar *text, dfilter_t **dfp);



void
dfilter_free(dfilter_t *df);







extern const gchar *dfilter_error_msg;



gboolean
dfilter_apply_edt(dfilter_t *df, epan_dissect_t* edt);


gboolean
dfilter_apply(dfilter_t *df, proto_tree *tree);


void
dfilter_prime_proto_tree(const dfilter_t *df, proto_tree *tree);

GPtrArray *
dfilter_deprecated_tokens(dfilter_t *df);


void
dfilter_dump(dfilter_t *df);
# 35 "../../epan/epan.h" 2


void epan_init(void (*register_all_protocols_func)(register_cb cb, gpointer client_data),
        void (*register_all_handoffs_func)(register_cb cb, gpointer client_data),
        register_cb cb,
        void *client_data,
        void (*report_failure_fcn_p)(const char *, va_list),
        void (*report_open_failure_fcn_p)(const char *, int, gboolean),
        void (*report_read_failure_fcn_p)(const char *, int),
        void (*report_write_failure_fcn_p)(const char *, int));


void epan_cleanup(void);







void epan_conversation_init(void);
void epan_conversation_cleanup(void);
# 68 "../../epan/epan.h"
void epan_circuit_init(void);
void epan_circuit_cleanup(void);
# 79 "../../epan/epan.h"
typedef struct epan_session epan_t;

epan_t*
epan_new(void);

void
epan_free(epan_t*);

extern gchar*
epan_get_version(void);


epan_dissect_t*
epan_dissect_init(epan_dissect_t *edt, const gboolean create_proto_tree, const gboolean proto_tree_visible);




epan_dissect_t*
epan_dissect_new(const gboolean create_proto_tree, const gboolean proto_tree_visible);


void
epan_dissect_fake_protocols(epan_dissect_t *edt, const gboolean fake_protocols);


void
epan_dissect_run(epan_dissect_t *edt, void* pseudo_header,
        const guint8* data, frame_data *fd, column_info *cinfo);


void
epan_dissect_prime_dfilter(epan_dissect_t *edt, const dfilter_t *dfcode);


void
epan_dissect_fill_in_columns(epan_dissect_t *edt, const gboolean fill_col_exprs, const gboolean fill_fd_colums);


void
epan_dissect_cleanup(epan_dissect_t* edt);


void
epan_dissect_free(epan_dissect_t* edt);


const gchar *
epan_custom_set(epan_dissect_t *edt, int id, gint occurrence,
    gchar *result, gchar *expr, const int size);




void
epan_get_compiled_version_info(GString *str);




void
epan_get_runtime_version_info(GString *str);
# 1668 "../../epan/proto.h" 2





extern gboolean
proto_can_match_selected(field_info *finfo, epan_dissect_t *edt);





extern char*
proto_construct_match_selected_string(field_info *finfo, epan_dissect_t *edt);






extern field_info*
proto_find_field_from_offset(proto_tree *tree, guint offset, tvbuff_t *tvb);
# 1709 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bitmask(proto_tree *tree, tvbuff_t *tvb, const guint offset,
  const int hf_hdr, const gint ett, const int **fields, const gboolean little_endian);
# 1726 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bitmask_text(proto_tree *tree, tvbuff_t *tvb, const guint offset, const guint len,
  const char *name, const char *fallback,
  const gint ett, const int **fields, const gboolean little_endian, const int flags);
# 1745 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bits_item(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits, const gboolean little_endian);
# 1758 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bits_ret_val(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits, guint64 *return_value, const gboolean little_endian);
# 1772 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint_bits_format_value(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits,
 guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1788 "../../epan/proto.h"
extern proto_item *
proto_tree_add_boolean_bits_format_value(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits,
 guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1804 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int_bits_format_value(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits,
 gint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1820 "../../epan/proto.h"
extern proto_item *
proto_tree_add_float_bits_format_value(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits,
 float value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));




extern guchar
proto_check_field_name(const gchar *field_name);
# 1838 "../../epan/proto.h"
const gchar *
proto_custom_set(proto_tree* tree, const int field_id,
                             gint occurrence,
                             gchar *result,
                             gchar *expr, const int size );
# 30 "../../epan/packet.h" 2

# 1 "../../epan/pint.h" 1
# 32 "../../epan/packet.h" 2
# 1 "../../epan/to_str.h" 1
# 32 "../../epan/to_str.h"
# 1 "../../epan/packet_info.h" 1
# 30 "../../epan/packet_info.h"
# 1 "../../epan/address.h" 1
# 30 "../../epan/address.h"
# 1 "../../epan/emem.h" 1
# 29 "../../epan/emem.h"
# 1 "../../epan/g_gnuc_malloc.h" 1
# 30 "../../epan/emem.h" 2






void emem_init(void);
# 51 "../../epan/emem.h"
void *ep_alloc(size_t size) __attribute__((__malloc__));



void* ep_alloc0(size_t size) __attribute__((__malloc__));



gchar* ep_strdup(const gchar* src) __attribute__((__malloc__));


gchar* ep_strndup(const gchar* src, size_t len) __attribute__((__malloc__));


void* ep_memdup(const void* src, size_t len) __attribute__((__malloc__));


gchar* ep_strdup_vprintf(const gchar* fmt, va_list ap) __attribute__((__malloc__));
gchar* ep_strdup_printf(const gchar* fmt, ...)
     __attribute__((__malloc__)) __attribute__((__format__ (__printf__, 1, 2)));
# 87 "../../epan/emem.h"
gchar** ep_strsplit(const gchar* string, const gchar* delimiter, int max_tokens);


void ep_free_all(void);




typedef struct _ep_stack_frame_t** ep_stack_t;

struct _ep_stack_frame_t {
    void* payload;
    struct _ep_stack_frame_t* below;
    struct _ep_stack_frame_t* above;
};




ep_stack_t ep_stack_new(void) __attribute__((__malloc__));




void* ep_stack_push(ep_stack_t stack, void* item);




void* ep_stack_pop(ep_stack_t stack);
# 136 "../../epan/emem.h"
void *se_alloc(size_t size) __attribute__((__malloc__));


void* se_alloc0(size_t size) __attribute__((__malloc__));


gchar* se_strdup(const gchar* src) __attribute__((__malloc__));


gchar* se_strndup(const gchar* src, size_t len) __attribute__((__malloc__));


void* se_memdup(const void* src, size_t len) __attribute__((__malloc__));


gchar* se_strdup_vprintf(const gchar* fmt, va_list ap) __attribute__((__malloc__));
gchar* se_strdup_printf(const gchar* fmt, ...)
     __attribute__((__malloc__)) __attribute__((__format__ (__printf__, 1, 2)));





void se_free_all(void);







typedef struct _emem_tree_node_t {
 struct _emem_tree_node_t *parent;
 struct _emem_tree_node_t *left;
 struct _emem_tree_node_t *right;
 struct {


  guint32 rb_color:1;


  guint32 is_subtree:1;
 } u;
 guint32 key32;
 void *data;
} emem_tree_node_t;
# 190 "../../epan/emem.h"
typedef struct _emem_tree_t {
 struct _emem_tree_t *next;
 int type;
 const char *name;
 emem_tree_node_t *tree;
 void *(*malloc)(size_t);
} emem_tree_t;
# 207 "../../epan/emem.h"
emem_tree_t *se_tree_create(int type, const char *name) __attribute__((__malloc__));
# 218 "../../epan/emem.h"
emem_tree_t *se_tree_create_non_persistent(int type, const char *name) __attribute__((__malloc__));
# 270 "../../epan/emem.h"
emem_tree_t *pe_tree_create(int type, const char *name) __attribute__((__malloc__));
# 291 "../../epan/emem.h"
void emem_tree_insert32(emem_tree_t *se_tree, guint32 key, void *data);




void *emem_tree_lookup32(emem_tree_t *se_tree, guint32 key);







void *emem_tree_lookup32_le(emem_tree_t *se_tree, guint32 key);

typedef struct _emem_tree_key_t {
 guint32 length;
 guint32 *key;
} emem_tree_key_t;
# 342 "../../epan/emem.h"
void emem_tree_insert32_array(emem_tree_t *se_tree, emem_tree_key_t *key, void *data);




void *emem_tree_lookup32_array(emem_tree_t *se_tree, emem_tree_key_t *key);
# 357 "../../epan/emem.h"
void *emem_tree_lookup32_array_le(emem_tree_t *se_tree, emem_tree_key_t *key);




void emem_tree_insert_string(emem_tree_t* h, const gchar* k, void* v, guint32 flags);


void* emem_tree_lookup_string(emem_tree_t* h, const gchar* k, guint32 flags);



typedef gboolean (*tree_foreach_func)(void *value, void *userdata);

gboolean emem_tree_foreach(emem_tree_t* emem_tree, tree_foreach_func callback, void *user_data);






typedef struct _emem_strbuf_t {
    gchar *str;


    gsize len;
    gsize alloc_len;
    gsize max_alloc_len;
} emem_strbuf_t;
# 399 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_new(const gchar *init) __attribute__((__malloc__));
# 409 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_new_label(const gchar *init) __attribute__((__malloc__));
# 422 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_sized_new(gsize alloc_len, gsize max_alloc_len) __attribute__((__malloc__));
# 431 "../../epan/emem.h"
void ep_strbuf_append_vprintf(emem_strbuf_t *strbuf, const gchar *format, va_list ap);







void ep_strbuf_printf(emem_strbuf_t *strbuf, const gchar *format, ...)
     __attribute__((__format__ (__printf__, 2, 3)));







void ep_strbuf_append_printf(emem_strbuf_t *strbuf, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 2, 3)));
# 459 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_append(emem_strbuf_t *strbuf, const gchar *str);
# 469 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_append_c(emem_strbuf_t *strbuf, const gchar c);
# 479 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_truncate(emem_strbuf_t *strbuf, gsize len);

void emem_print_tree(emem_tree_t* emem_tree);
# 508 "../../epan/emem.h"
gboolean ep_verify_pointer(const void *ptr);







gboolean se_verify_pointer(const void *ptr);
# 31 "../../epan/address.h" 2
# 40 "../../epan/address.h"
typedef enum {
  AT_NONE,
  AT_ETHER,
  AT_IPv4,
  AT_IPv6,
  AT_IPX,
  AT_SNA,
  AT_ATALK,
  AT_VINES,
  AT_OSI,
  AT_ARCNET,
  AT_FC,
  AT_SS7PC,
  AT_STRINGZ,
  AT_EUI64,
  AT_URI,
  AT_TIPC,
  AT_IB,
  AT_USB

} address_type;

typedef struct _address {
  address_type type;
  int len;
  const void *data;
} address;
# 141 "../../epan/address.h"
typedef enum {
  PT_NONE,
  PT_SCTP,
  PT_TCP,
  PT_UDP,
  PT_DCCP,
  PT_IPX,
  PT_NCP,
  PT_EXCHG,
  PT_DDP,
  PT_SBCCS,
  PT_IDP,
  PT_TIPC,
  PT_USB,
  PT_I2C,
  PT_IBQP
} port_type;


typedef enum {
  CT_NONE,
  CT_DLCI,
  CT_ISDN,
  CT_X25,
  CT_ISUP,
  CT_IAX2,
  CT_H223,
  CT_BICC

} circuit_type;
# 31 "../../epan/packet_info.h" 2
# 48 "../../epan/packet_info.h"
typedef struct _packet_info {
  const char *current_proto;
  column_info *cinfo;
  frame_data *fd;
  union wtap_pseudo_header *pseudo_header;
  GSList *data_src;
  address dl_src;
  address dl_dst;
  address net_src;
  address net_dst;
  address src;
  address dst;
  guint32 ethertype;
  guint32 ipproto;
  guint32 ipxptype;
  guint32 mpls_label;
  circuit_type ctype;
  guint32 circuit_id;
  const char *noreassembly_reason;
  gboolean fragmented;
  gboolean in_error_pkt;
  port_type ptype;
  guint32 srcport;
  guint32 destport;
  guint32 match_uint;
  const char *match_string;
  guint16 can_desegment;






  guint16 saved_can_desegment;
# 90 "../../epan/packet_info.h"
  int desegment_offset;


  guint32 desegment_len;
# 102 "../../epan/packet_info.h"
  guint16 want_pdu_tracking;
# 125 "../../epan/packet_info.h"
  guint32 bytes_until_next_pdu;


  int iplen;
  int iphdrlen;
  guint8 ip_ttl;
  int p2p_dir;



  guint16 oxid;
  guint16 rxid;
  guint8 r_ctl;
  guint8 sof_eof;





  guint16 src_idx;
  guint16 dst_idx;
  guint16 vsan;


  guint16 dcectxid;
  int dcetransporttype;


  guint16 dcetransportsalt;
# 167 "../../epan/packet_info.h"
  guint16 decrypt_gssapi_tvb;
  tvbuff_t *gssapi_wrap_tvb;
  tvbuff_t *gssapi_encrypted_tvb;
  tvbuff_t *gssapi_decrypted_tvb;
  gboolean gssapi_data_encrypted;

  guint32 ppid;
  guint32 ppids[2];


  void *private_data;

  GString *layer_names;
  guint16 link_number;
  guint8 annex_a_used;
  guint16 profinet_type;
  void *profinet_conv;
  void *usb_conv_info;
  void *tcp_tree;

  const char *dcerpc_procedure_name;

  struct _sccp_msg_info_t* sccp_info;
  guint16 clnp_srcref;
  guint16 clnp_dstref;

  guint16 zbee_cluster_id;


  guint8 zbee_stack_vers;


  int link_dir;


} packet_info;
# 33 "../../epan/to_str.h" 2
# 43 "../../epan/to_str.h"
struct e_in6_addr;



extern gchar* ep_address_to_str(const address *);
extern gchar* se_address_to_str(const address *);
extern void address_to_str_buf(const address *addr, gchar *buf, int buf_len);
extern gchar* bytestring_to_str(const guint8 *, const guint32, const char);
extern gchar* ether_to_str(const guint8 *);
extern const gchar* ip_to_str(const guint8 *);
extern void ip_to_str_buf(const guint8 *ad, gchar *buf, const int buf_len);
extern gchar* fc_to_str(const guint8 *);
extern gchar* fcwwn_to_str (const guint8 *);
extern gchar* ip6_to_str(const struct e_in6_addr *);
extern void ip6_to_str_buf(const struct e_in6_addr *, gchar *);
extern gchar* ipx_addr_to_str(const guint32, const guint8 *);
extern gchar* ipxnet_to_string(const guint8 *ad);
extern gchar* ipxnet_to_str_punct(const guint32 ad, const char punct);
extern gchar* vines_addr_to_str(const guint8 *addrp);
extern gchar* time_secs_to_str(const gint32 time_val);
extern gchar* time_secs_to_str_unsigned(const guint32);
extern gchar* time_msecs_to_str(gint32 time_val);
extern gchar* abs_time_to_str(const nstime_t*, const absolute_time_display_e fmt,
    gboolean show_zone);
extern gchar* abs_time_secs_to_str(const time_t, const absolute_time_display_e fmt,
    gboolean show_zone);
extern void display_signed_time(gchar *, int, const gint32, gint32, const to_str_time_res_t);
extern void display_epoch_time(gchar *, int, const time_t, gint32, const to_str_time_res_t);

extern gchar* guint32_to_str(const guint32 u);
extern void guint32_to_str_buf(guint32 u, gchar *buf, int buf_len);

extern gchar* rel_time_to_str(const nstime_t*);
extern gchar* rel_time_to_secs_str(const nstime_t*);
extern gchar* guid_to_str(const e_guid_t*);
extern gchar* guid_to_str_buf(const e_guid_t*, gchar*, int);

extern char *decode_bits_in_field(const gint bit_offset, const gint no_of_bits, const guint64 value);

extern char *other_decode_bitfield_value(char *buf, const guint32 val, const guint32 mask,
    const int width);
extern char *decode_bitfield_value(char *buf, const guint32 val, const guint32 mask,
    const int width);
extern const char *decode_boolean_bitfield(const guint32 val, const guint32 mask, const int width,
  const char *truedesc, const char *falsedesc);
extern const char *decode_numeric_bitfield(const guint32 val, const guint32 mask, const int width,
  const char *fmt);
# 33 "../../epan/packet.h" 2
# 1 "../../epan/value_string.h" 1
# 32 "../../epan/value_string.h"
typedef struct _value_string {
  guint32 value;
  const gchar *strptr;
} value_string;



typedef struct _string_string {
  const gchar *value;
  const gchar *strptr;
} string_string;


typedef struct _range_string {
  guint32 value_min;
  guint32 value_max;
  const gchar *strptr;
} range_string;
# 58 "../../epan/value_string.h"
extern const gchar* match_strval_idx(const guint32 val, const value_string *vs, gint *idx);


extern const gchar* match_strval(const guint32 val, const value_string *vs);




extern const gchar* val_to_str(const guint32 val, const value_string *vs, const char *fmt);





extern const gchar* val_to_str_const(const guint32 val, const value_string *vs, const char *unknown_str);





extern const gchar* match_strstr_idx(const gchar *val, const string_string *vs, gint *idx);


extern const gchar* match_strstr(const gchar *val, const string_string *vs);




extern const gchar* str_to_str(const gchar *val, const string_string *vs, const char *fmt);
# 117 "../../epan/value_string.h"
struct _value_string_ext;
typedef const char *(*_value_string_match_t)(const guint32, const struct _value_string_ext *);

typedef struct _value_string_ext {
  _value_string_match_t _vs_match;
  guint32 _vs_first_value;
  guint _vs_num_entries;

  const value_string *_vs_p;
  const gchar *_vs_name;
} value_string_ext;







gboolean value_string_ext_validate(value_string_ext *vse);
gchar *value_string_ext_match_type_str(value_string_ext *vse);


extern const gchar *_match_strval_ext_init(const guint32 val, value_string_ext *vse);





extern value_string_ext *value_string_ext_new(value_string *vs, guint vs_tot_num_entries, gchar *vs_name);





extern const gchar* match_strval_ext(const guint32 val, const value_string_ext *vse);




extern const gchar* val_to_str_ext(const guint32 val, const value_string_ext *vs, const char *fmt);




extern const gchar* val_to_str_ext_const(const guint32 val, const value_string_ext *vs, const char *unknown_str);





extern const char *decode_enumerated_bitfield(const guint32 val, const guint32 mask,
  const int width, const value_string *tab, const char *fmt);



extern const char *decode_enumerated_bitfield_shifted(const guint32 val, const guint32 mask,
  const int width, const value_string *tab, const char *fmt);







extern const gchar* rval_to_str(const guint32 val, const range_string *rs, const char *fmt);





extern const gchar *match_strrval_idx(const guint32 val, const range_string *rs, gint *idx);


extern const gchar *match_strrval(const guint32 val, const range_string *rs);
# 34 "../../epan/packet.h" 2


# 1 "../../epan/packet_info.h" 1
# 37 "../../epan/packet.h" 2
# 1 "../../epan/column-utils.h" 1
# 47 "../../epan/column-utils.h"
extern void col_setup(column_info *cinfo, const gint num_cols);





extern void col_init(column_info *cinfo);





extern void col_set_fmt_time(const frame_data *fd, column_info *cinfo, const gint fmt, const gint col);





extern void col_fill_in_frame_data(const frame_data *fd, column_info *cinfo, const gint col, gboolean const fill_col_exprs);





extern void col_fill_in(packet_info *pinfo, const gboolean fill_col_exprs, const gboolean fill_fd_colums);
# 80 "../../epan/column-utils.h"
extern gboolean col_get_writable(column_info *cinfo);






extern void col_set_writable(column_info *cinfo, const gboolean writable);
# 98 "../../epan/column-utils.h"
extern gint check_col(column_info *cinfo, const gint col);
# 109 "../../epan/column-utils.h"
extern void col_set_fence(column_info *cinfo, const gint col);






extern void col_clear(column_info *cinfo, const gint col);
# 126 "../../epan/column-utils.h"
extern void col_set_str(column_info *cinfo, const gint col, const gchar * str);







extern void col_add_str(column_info *cinfo, const gint col, const gchar *str);
# 145 "../../epan/column-utils.h"
extern void col_add_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 3, 4)));


void col_custom_set_edt(epan_dissect_t *edt, column_info *cinfo);


void col_custom_prime_edt(epan_dissect_t *edt, column_info *cinfo);


gboolean have_custom_cols(column_info *cinfo);

gboolean col_has_time_fmt(column_info *cinfo, const gint col);

gboolean col_based_on_frame_data(column_info *cinfo, const gint col);







extern void col_append_str(column_info *cinfo, const gint col, const gchar *str);
# 178 "../../epan/column-utils.h"
extern void col_append_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 3, 4)));
# 188 "../../epan/column-utils.h"
extern void col_prepend_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 3, 4)));
# 199 "../../epan/column-utils.h"
extern void col_prepend_fence_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 3, 4)));
# 211 "../../epan/column-utils.h"
extern void col_append_sep_str(column_info *cinfo, const gint col, const gchar *sep,
  const gchar *str);
# 224 "../../epan/column-utils.h"
extern void col_append_sep_fstr(column_info *cinfo, const gint col, const gchar *sep,
  const gchar *format, ...)
    __attribute__((__format__ (__printf__, 4, 5)));
# 239 "../../epan/column-utils.h"
extern void col_set_time(column_info *cinfo, const int col,
   const nstime_t *ts, char *fieldname);
# 38 "../../epan/packet.h" 2

# 1 "../../epan/tfs.h" 1
# 34 "../../epan/tfs.h"
typedef struct true_false_string {
        const char *true_string;
        const char *false_string;
} true_false_string;





extern const true_false_string tfs_true_false;
extern const true_false_string tfs_yes_no;
extern const true_false_string tfs_set_notset;
extern const true_false_string tfs_enabled_disabled;
extern const true_false_string tfs_ok_error;
extern const true_false_string tfs_error_ok;
extern const true_false_string tfs_success_fail;
extern const true_false_string tfs_fail_success;
extern const true_false_string tfs_on_off;
extern const true_false_string tfs_ack_nack;
extern const true_false_string tfs_odd_even;
extern const true_false_string tfs_allow_block;
extern const true_false_string tfs_restricted_allowed;
extern const true_false_string tfs_accept_reject;
extern const true_false_string tfs_more_nomore;
extern const true_false_string tfs_present_absent;
extern const true_false_string tfs_active_inactive;
extern const true_false_string tfs_found_not_found;
extern const true_false_string tfs_command_response;
extern const true_false_string tfs_capable_not_capable;
extern const true_false_string tfs_supported_not_supported;
extern const true_false_string tfs_used_notused;
extern const true_false_string tfs_high_low;
extern const true_false_string tfs_pressed_not_pressed;
# 40 "../../epan/packet.h" 2
# 60 "../../epan/packet.h"
typedef struct _packet_counts {
  gint sctp;
  gint tcp;
  gint udp;
  gint icmp;
  gint ospf;
  gint gre;
  gint netbios;
  gint ipx;
  gint vines;
  gint other;
  gint total;
  gint arp;
  gint i2c_event;
  gint i2c_data;
} packet_counts;





typedef enum {
 PACKET_CHAR_ENC_CHAR_ASCII = 0,
 PACKET_CHAR_ENC_CHAR_EBCDIC = 1
} packet_char_enc;

extern void packet_init(void);
extern void packet_cleanup(void);



struct dissector_handle;
typedef struct dissector_handle *dissector_handle_t;



struct dissector_table;
typedef struct dissector_table *dissector_table_t;




typedef void (*dissector_t)(tvbuff_t *, packet_info *, proto_tree *);
# 116 "../../epan/packet.h"
typedef int (*new_dissector_t)(tvbuff_t *, packet_info *, proto_tree *);
# 125 "../../epan/packet.h"
typedef gboolean (*heur_dissector_t)(tvbuff_t *tvb, packet_info *pinfo,
 proto_tree *tree);

typedef void (*DATFunc) (const gchar *table_name, ftenum_t selector_type,
    gpointer key, gpointer value, gpointer user_data);
typedef void (*DATFunc_handle) (const gchar *table_name, gpointer value,
    gpointer user_data);
typedef void (*DATFunc_table) (const gchar *table_name, const gchar *ui_name,
    gpointer user_data);


typedef struct dtbl_entry dtbl_entry_t;

extern dissector_handle_t dtbl_entry_get_handle (dtbl_entry_t *dtbl_entry);
extern dissector_handle_t dtbl_entry_get_initial_handle (dtbl_entry_t * entry);
extern void dissector_table_foreach_changed (const char *name, DATFunc func,
    gpointer user_data);
extern void dissector_table_foreach (const char *name, DATFunc func,
    gpointer user_data);
extern void dissector_all_tables_foreach_changed (DATFunc func,
    gpointer user_data);
extern void dissector_table_foreach_handle(const char *name, DATFunc_handle func,
    gpointer user_data);
extern void dissector_all_tables_foreach_table (DATFunc_table func,
    gpointer user_data);


extern dissector_table_t register_dissector_table(const char *name,
    const char *ui_name, const ftenum_t type, const int base);


extern dissector_table_t find_dissector_table(const char *name);


extern const char *get_dissector_table_ui_name(const char *name);



extern ftenum_t get_dissector_table_selector_type(const char *name);



extern int get_dissector_table_base(const char *name);


extern void dissector_add_uint(const char *abbrev, const guint32 pattern,
    dissector_handle_t handle);







extern void dissector_delete_uint(const char *name, const guint32 pattern,
    dissector_handle_t handle);







extern void dissector_change_uint(const char *abbrev, const guint32 pattern,
    dissector_handle_t handle);






extern void dissector_reset_uint(const char *name, const guint32 pattern);
# 205 "../../epan/packet.h"
extern gboolean dissector_try_uint(dissector_table_t sub_dissectors,
    const guint32 uint_val, tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);
# 215 "../../epan/packet.h"
extern gboolean dissector_try_uint_new(dissector_table_t sub_dissectors,
 const guint32 uint_val, tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, const gboolean add_proto_name);







extern dissector_handle_t dissector_get_uint_handle(
    dissector_table_t const sub_dissectors, const guint32 uint_val);






extern void dissector_add_string(const char *name, const gchar *pattern,
    dissector_handle_t handle);



extern void dissector_delete_string(const char *name, const gchar *pattern,
 dissector_handle_t handle);



extern void dissector_change_string(const char *name, const gchar *pattern,
    dissector_handle_t handle);


extern void dissector_reset_string(const char *name, const gchar *pattern);




extern gboolean dissector_try_string(dissector_table_t sub_dissectors,
    const gchar *string, tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);



extern dissector_handle_t dissector_get_string_handle(
    dissector_table_t sub_dissectors, const gchar *string);



extern void dissector_add_handle(const char *name, dissector_handle_t handle);





typedef GSList *heur_dissector_list_t;







extern void register_heur_dissector_list(const char *name,
    heur_dissector_list_t *list);
# 288 "../../epan/packet.h"
extern gboolean dissector_try_heuristic(heur_dissector_list_t sub_dissectors,
    tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);
# 298 "../../epan/packet.h"
extern void heur_dissector_add(const char *name, heur_dissector_t dissector,
    const int proto);
# 308 "../../epan/packet.h"
extern void heur_dissector_delete(const char *name, heur_dissector_t dissector, const int proto);


extern void register_dissector(const char *name, dissector_t dissector,
    const int proto);
extern void new_register_dissector(const char *name, new_dissector_t dissector,
    const int proto);


extern const char *dissector_handle_get_short_name(const dissector_handle_t handle);


extern int dissector_handle_get_protocol_index(const dissector_handle_t handle);


extern dissector_handle_t find_dissector(const char *name);


extern dissector_handle_t create_dissector_handle(dissector_t dissector,
    const int proto);
extern dissector_handle_t new_create_dissector_handle(new_dissector_t dissector,
    const int proto);
# 343 "../../epan/packet.h"
extern int call_dissector(dissector_handle_t handle, tvbuff_t *tvb,
    packet_info *pinfo, proto_tree *tree);
# 358 "../../epan/packet.h"
extern int call_dissector_only(dissector_handle_t handle, tvbuff_t *tvb,
    packet_info *pinfo, proto_tree *tree);


extern void dissect_init(void);

extern void dissect_cleanup(void);





extern void set_actual_length(tvbuff_t *tvb, const guint specified_len);





extern void register_init_routine(void (*func)(void));


extern void init_dissection(void);


extern void cleanup_dissection(void);





extern void register_postseq_cleanup_routine(void (*func)(void));


extern void postseq_cleanup_all_protocols(void);
# 400 "../../epan/packet.h"
extern void
register_final_registration_routine(void (*func)(void));


extern void
final_registration_all_protocols(void);





extern void add_new_data_source(packet_info *pinfo, tvbuff_t *tvb,
    const char *name);




extern const char* get_data_source_name(data_source *src);




extern void free_data_sources(packet_info *pinfo);




extern void dissect_packet(epan_dissect_t *edt,
    union wtap_pseudo_header *pseudo_header, const guchar *pd,
    frame_data *fd, column_info *cinfo);


extern void capture_ethertype(guint16 etype, const guchar *pd, int offset,
  int len, packet_counts *ld);
extern void ethertype(guint16 etype, tvbuff_t *tvb, int offset_after_ethertype,
  packet_info *pinfo, proto_tree *tree, proto_tree *fh_tree,
  int etype_id, int trailer_id, int fcs_len);





extern void dissector_dump_decodes(void);





extern void register_postdissector(dissector_handle_t);
extern gboolean have_postdissector(void);
extern void call_all_postdissectors(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);
# 43 "packet-dns.c" 2
# 1 "../../epan/conversation.h" 1
# 58 "../../epan/conversation.h"
# 1 "../../epan/packet.h" 1
# 59 "../../epan/conversation.h" 2




typedef struct conversation_key {
 struct conversation_key *next;
 address addr1;
 address addr2;
 port_type ptype;
 guint32 port1;
 guint32 port2;
} conversation_key;

typedef struct conversation {
 struct conversation *next;
 guint32 index;
 guint32 setup_frame;
 GSList *data_list;
 dissector_handle_t dissector_handle;

 guint options;
 conversation_key *key_ptr;
} conversation_t;




extern void conversation_cleanup(void);





extern void conversation_init(void);
# 102 "../../epan/conversation.h"
extern conversation_t *conversation_new(const guint32 setup_frame, const address *addr1, const address *addr2,
    const port_type ptype, const guint32 port1, const guint32 port2, const guint options);
# 141 "../../epan/conversation.h"
extern conversation_t *find_conversation(const guint32 frame_num, const address *addr_a, const address *addr_b,
    const port_type ptype, const guint32 port_a, const guint32 port_b, const guint options);







extern conversation_t *find_or_create_conversation(packet_info *pinfo);

extern void conversation_add_proto_data(conversation_t *conv, const int proto,
    void *proto_data);
extern void *conversation_get_proto_data(const conversation_t *conv, const int proto);
extern void conversation_delete_proto_data(conversation_t *conv, const int proto);

extern void conversation_set_dissector(conversation_t *conversation,
    const dissector_handle_t handle);
# 169 "../../epan/conversation.h"
extern gboolean
try_conversation_dissector(const address *addr_a, const address *addr_b, const port_type ptype,
    const guint32 port_a, const guint32 port_b, tvbuff_t *tvb, packet_info *pinfo,
    proto_tree *tree);



extern void conversation_set_port2(conversation_t *conv, const guint32 port);
extern void conversation_set_addr2(conversation_t *conv, const address *addr);
# 44 "packet-dns.c" 2
# 1 "../../epan/emem.h" 1
# 45 "packet-dns.c" 2
# 1 "../../epan/ipproto.h" 1
# 195 "../../epan/ipproto.h"
extern value_string_ext ipproto_val_ext;
extern const char *ipprotostr(const int proto);
# 46 "packet-dns.c" 2
# 1 "../../epan/addr_resolv.h" 1
# 37 "../../epan/addr_resolv.h"
# 1 "../../epan/address.h" 1
# 38 "../../epan/addr_resolv.h" 2
# 50 "../../epan/addr_resolv.h"
extern guint32 gbl_resolv_flags;
# 66 "../../epan/addr_resolv.h"
extern gchar *g_ethers_path;
extern gchar *g_ipxnets_path;
extern gchar *g_pethers_path;
extern gchar *g_pipxnets_path;




extern void resolv_set_flags(guint32 flags);





extern gchar *get_udp_port(guint port);





extern gchar *get_tcp_port(guint port);





extern gchar *get_dccp_port(guint port);





extern gchar *get_sctp_port(guint port);
# 109 "../../epan/addr_resolv.h"
const gchar *get_addr_name(const address *addr);
const gchar *se_get_addr_name(const address *addr);






void get_addr_name_buf(const address *addr, gchar *buf, gsize size);







extern void host_name_lookup_init(void);
# 135 "../../epan/addr_resolv.h"
extern gboolean host_name_lookup_process(gpointer data);


extern void host_name_lookup_cleanup(void);


extern const gchar *get_hostname(const guint addr);


struct e_in6_addr;
extern const gchar* get_hostname6(const struct e_in6_addr *ad);




extern gchar *get_ether_name(const guint8 *addr);


extern gchar *get_ether_name_if_known(const guint8 *addr);


extern const gchar *get_manuf_name(const guint8 *addr);


extern const gchar *get_manuf_name_if_known(const guint8 *addr);



extern const gchar *get_ipxnet_name(const guint32 addr);


extern guint8 *get_ether_addr(const gchar *name);




guint32 get_ipxnet_addr(const gchar *name, gboolean *known);


extern void add_ipv4_name(const guint addr, const gchar *name);


extern void add_ipv6_name(const struct e_in6_addr *addr, const gchar *name);


extern gboolean add_ip_name_from_string (const char *addr, const char *name);


extern void add_ether_byip(const guint ip, const guint8 *eth);
# 196 "../../epan/addr_resolv.h"
gboolean get_host_ipaddr(const char *host, guint32 *addrp);
# 209 "../../epan/addr_resolv.h"
gboolean get_host_ipaddr6(const char *host, struct e_in6_addr *addrp);






const char* host_ip_af(const char *host);
# 47 "packet-dns.c" 2
# 1 "packet-dns.h" 1
# 30 "packet-dns.h"
const char *dns_class_name(int class);

int get_dns_name(tvbuff_t *, int, int, int, const guchar **);
# 48 "packet-dns.c" 2
# 1 "packet-tcp.h" 1
# 51 "packet-tcp.h"
typedef struct tcpheader {
 guint32 th_seq;
 guint32 th_ack;
 gboolean th_have_seglen;
 guint32 th_seglen;
 guint32 th_win;
 guint16 th_sport;
 guint16 th_dport;
 guint8 th_hlen;
 guint16 th_flags;
 address ip_src;
 address ip_dst;
} tcp_info_t;





struct tcpinfo {
 guint32 seq;
 guint32 nxtseq;
 guint32 lastackseq;
 gboolean is_reassembled;
 gboolean urgent;
 guint16 urgent_pointer;
};
# 96 "packet-tcp.h"
extern void
tcp_dissect_pdus(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree,
   gboolean proto_desegment, guint fixed_len,
   guint (*get_pdu_len)(packet_info *, tvbuff_t *, int),
   dissector_t dissect_pdu);

extern struct tcp_multisegment_pdu *
pdu_store_sequencenumber_of_next_pdu(packet_info *pinfo, guint32 seq, guint32 nxtpdu, emem_tree_t *multisegment_pdus);

typedef struct _tcp_unacked_t {
 struct _tcp_unacked_t *next;
 guint32 frame;
 guint32 seq;
 guint32 nextseq;
 nstime_t ts;
} tcp_unacked_t;

struct tcp_acked {
 guint32 frame_acked;
 nstime_t ts;

 guint32 rto_frame;
 nstime_t rto_ts;

 guint16 flags;
 guint32 dupack_num;
 guint32 dupack_frame;
 guint32 bytes_in_flight;
};




struct tcp_multisegment_pdu {
 guint32 seq;
 guint32 nxtpdu;
 guint32 first_frame;
 guint32 last_frame;
 nstime_t last_frame_time;
 guint32 flags;

};

typedef struct _tcp_flow_t {
 guint32 base_seq;


 tcp_unacked_t *segments;
 guint32 lastack;
 nstime_t lastacktime;
 guint32 lastnondupack;
 guint32 dupacknum;
 guint32 nextseq;
 guint32 nextseqframe;


 nstime_t nextseqtime;



 guint32 window;
 gint16 win_scale;
 gint16 scps_capable;
 guint16 maxsizeacked;
 gboolean valid_bif;





 guint16 flags;
 guint32 lastsegmentflags;




 emem_tree_t *multisegment_pdus;


 guint32 process_uid;
 guint32 process_pid;
 gchar *username;
 gchar *command;
} tcp_flow_t;


struct tcp_analysis {
# 196 "packet-tcp.h"
 tcp_flow_t flow1;
 tcp_flow_t flow2;





 tcp_flow_t *fwd;
 tcp_flow_t *rev;





 struct tcp_acked *ta;



 emem_tree_t *acked_table;





 nstime_t ts_first;





 nstime_t ts_prev;
};





struct tcp_per_packet_data_t {
 nstime_t ts_del;
};


extern void dissect_tcp_payload(tvbuff_t *tvb, packet_info *pinfo, int offset,
    guint32 seq, guint32 nxtseq, guint32 sport,
    guint32 dport, proto_tree *tree,
    proto_tree *tcp_tree,
    struct tcp_analysis *tcpd);

extern struct tcp_analysis *get_tcp_conversation_data(conversation_t *conv,
                                packet_info *pinfo);

extern gboolean decode_tcp_ports(tvbuff_t *, int, packet_info *, proto_tree *, int, int, struct tcp_analysis *);
# 261 "packet-tcp.h"
extern void add_tcp_process_info(guint32 frame_num, address *local_addr, address *remote_addr, guint16 local_port, guint16 remote_port, guint32 uid, guint32 pid, gchar *username, gchar *command);
# 49 "packet-dns.c" 2
# 1 "../../epan/prefs.h" 1
# 30 "../../epan/prefs.h"
# 1 "../../color.h" 1
# 37 "../../color.h"
typedef struct {
 guint32 pixel;
 guint16 red;
 guint16 green;
 guint16 blue;
} color_t;
# 53 "../../color.h"
gboolean initialize_color(color_t *color, guint16 red, guint16 green, guint16 blue);
# 31 "../../epan/prefs.h" 2

# 1 "../../epan/range.h" 1
# 43 "../../epan/range.h"
typedef struct range_admin_tag {
    guint32 low;
    guint32 high;
} range_admin_t;


typedef struct range {
    guint nranges;
    range_admin_t ranges[1];
} range_t;




typedef enum {
    CVT_NO_ERROR,
    CVT_SYNTAX_ERROR,
    CVT_NUMBER_TOO_BIG
} convert_ret_t;

extern range_t *range_empty(void);
# 88 "../../epan/range.h"
extern convert_ret_t range_convert_str(range_t **range, const gchar *es,
    guint32 max_value);

extern convert_ret_t range_convert_str_work(range_t **range, const gchar *es,
    guint32 max_value, gboolean err_on_max);







extern gboolean value_is_in_range(range_t *range, guint32 val);






extern gboolean ranges_are_equal(range_t *a, range_t *b);






extern void range_foreach(range_t *range, void (*callback)(guint32 val));




extern char *range_convert_range(range_t *range);






extern range_t *range_copy(range_t *src);
# 33 "../../epan/prefs.h" 2
# 52 "../../epan/prefs.h"
char string_to_name_resolve(char *string, guint32 *name_resolve);
# 70 "../../epan/prefs.h"
typedef enum {
    layout_unused,
    layout_type_5,
    layout_type_2,
    layout_type_1,
    layout_type_4,
    layout_type_3,
    layout_type_6,
    layout_type_max
} layout_type_e;




typedef enum {
    layout_pane_content_none,
    layout_pane_content_plist,
    layout_pane_content_pdetails,
    layout_pane_content_pbytes
} layout_pane_content_e;




typedef enum {
    console_open_never,
    console_open_auto,
    console_open_always
} console_open_e;


typedef struct _e_prefs {
  gint pr_format;
  gint pr_dest;
  gchar *pr_file;
  gchar *pr_cmd;
  GList *col_list;
  gint num_cols;
  color_t st_client_fg, st_client_bg, st_server_fg, st_server_bg;
  gboolean gui_scrollbar_on_right;
  gboolean gui_plist_sel_browse;
  gboolean gui_ptree_sel_browse;
  gboolean gui_altern_colors;
  gboolean filter_toolbar_show_in_statusbar;
  gint gui_ptree_line_style;
  gint gui_ptree_expander_style;
  gboolean gui_hex_dump_highlight_style;
  gint gui_toolbar_main_style;
  gint gui_toolbar_filter_style;
  gchar *gui_font_name;
  color_t gui_marked_fg;
  color_t gui_marked_bg;
  color_t gui_ignored_fg;
  color_t gui_ignored_bg;
  gchar *gui_colorized_fg;
  gchar *gui_colorized_bg;
  gboolean gui_geometry_save_position;
  gboolean gui_geometry_save_size;
  gboolean gui_geometry_save_maximized;
  gboolean gui_macosx_style;
  console_open_e gui_console_open;
  guint gui_recent_df_entries_max;
  guint gui_recent_files_count_max;
  guint gui_fileopen_style;
  gchar *gui_fileopen_dir;
  guint gui_fileopen_preview;
  gboolean gui_ask_unsaved;
  gboolean gui_find_wrap;
  gboolean gui_use_pref_save;
  gchar *gui_webbrowser;
  gchar *gui_window_title;
  gchar *gui_start_title;
  gboolean gui_version_in_start_page;
  layout_type_e gui_layout_type;
  layout_pane_content_e gui_layout_content_1;
  layout_pane_content_e gui_layout_content_2;
  layout_pane_content_e gui_layout_content_3;
  gint console_log_level;
  guint32 name_resolve;
  gint name_resolve_concurrency;
  gboolean load_smi_modules;
  gboolean suppress_smi_errors;
  gchar *capture_device;
  gchar *capture_devices_linktypes;
  gchar *capture_devices_descr;
  gchar *capture_devices_hide;
  gchar *capture_devices_monitor_mode;
  gboolean capture_prom_mode;
  gboolean capture_pcap_ng;
  gboolean capture_real_time;
  gboolean capture_auto_scroll;
  gboolean capture_show_info;
  guint rtp_player_max_visible;
  guint tap_update_interval;
  gboolean display_hidden_proto_items;
} e_prefs;

extern e_prefs prefs;






struct pref_module;

typedef struct pref_module module_t;


extern void prefs_init(void);


extern void prefs_reset(void);


extern void prefs_cleanup(void);
# 200 "../../epan/prefs.h"
extern module_t *prefs_register_module(module_t *parent, const char *name,
    const char *title, const char *description, void (*apply_cb)(void));







extern module_t *prefs_register_subtree(module_t *parent, const char *title,
    const char *description);




extern module_t *prefs_register_protocol(int id, void (*apply_cb)(void));






extern module_t *prefs_register_protocol_subtree(const char *subtree, int id,
       void (*apply_cb)(void));





extern module_t *prefs_register_protocol_obsolete(int id);




typedef guint (*module_cb)(module_t *module, gpointer user_data);




extern gboolean prefs_module_has_submodules(module_t *module);
# 249 "../../epan/prefs.h"
extern guint prefs_modules_foreach(module_cb callback, gpointer user_data);
# 261 "../../epan/prefs.h"
extern guint prefs_modules_foreach_submodules(module_t *module, module_cb callback, gpointer user_data);







extern void prefs_apply_all(void);







extern void prefs_apply(module_t *module);


struct preference;

typedef struct preference pref_t;




extern gboolean prefs_is_registered_protocol(const char *name);




extern const char *prefs_get_title_by_name(const char *name);
# 302 "../../epan/prefs.h"
extern module_t *prefs_find_module(const char *name);
# 313 "../../epan/prefs.h"
extern pref_t *prefs_find_preference(module_t * module, const char *pref);




extern void prefs_register_uint_preference(module_t *module, const char *name,
    const char *title, const char *description, guint base, guint *var);





extern void prefs_register_bool_preference(module_t *module, const char *name,
    const char *title, const char *description, gboolean *var);




typedef struct {
 const char *name;
 const char *description;
 gint value;
} enum_val_t;

extern void prefs_register_enum_preference(module_t *module, const char *name,
    const char *title, const char *description, gint *var,
    const enum_val_t *enumvals, gboolean radio_buttons);




extern void prefs_register_string_preference(module_t *module, const char *name,
    const char *title, const char *description, const char **var);




extern void prefs_register_range_preference(module_t *module, const char *name,
    const char *title, const char *description, range_t **var,
    guint32 max_value);




extern void prefs_register_static_text_preference(module_t *module, const char *name,
    const char *title, const char *description);





extern void prefs_register_uat_preference(module_t *module,
            const char *name,
            const char* title,
            const char *description,
            void* uat);




extern void prefs_register_obsolete_preference(module_t *module,
    const char *name);

typedef guint (*pref_cb)(pref_t *pref, gpointer user_data);
# 385 "../../epan/prefs.h"
extern guint prefs_pref_foreach(module_t *module, pref_cb callback,
    gpointer user_data);




extern GList *prefs_get_string_list(gchar *str);


extern void prefs_clear_string_list(GList *sl);




extern void prefs_register_modules(void);
# 414 "../../epan/prefs.h"
extern e_prefs *read_prefs(int *, int *, char **, int *, int *, char **);





extern int write_prefs(char **);


extern void copy_prefs(e_prefs *dest, e_prefs *src);


extern void free_prefs(e_prefs *pr);
# 437 "../../epan/prefs.h"
typedef enum {
    PREFS_SET_OK,
    PREFS_SET_SYNTAX_ERR,
    PREFS_SET_NO_SUCH_PREF,
    PREFS_SET_OBSOLETE
} prefs_set_pref_e;

extern prefs_set_pref_e prefs_set_pref(char *prefarg);




extern gboolean prefs_is_capture_device_hidden(const char *name);




extern gboolean prefs_capture_device_monitor_mode(const char *name);
# 50 "packet-dns.c" 2
# 1 "../../epan/strutil.h" 1
# 43 "../../epan/strutil.h"
const guchar *find_line_end(const guchar *data, const guchar *dataend,
    const guchar **eol);
# 53 "../../epan/strutil.h"
int get_token_len(const guchar *linep, const guchar *lineend,
    const guchar **next_token);
# 65 "../../epan/strutil.h"
gchar* format_text(const guchar *line, size_t len);
# 78 "../../epan/strutil.h"
gchar* format_text_wsp(const guchar *line, size_t len);
# 88 "../../epan/strutil.h"
gchar* bytes_to_str(const guint8 *bd, int bd_len);
# 100 "../../epan/strutil.h"
gchar* bytes_to_str_punct(const guint8 *bd, int bd_len, gchar punct);
# 112 "../../epan/strutil.h"
gboolean hex_str_to_bytes(const char *hex_str, GByteArray *bytes,
    gboolean force_separators);
# 123 "../../epan/strutil.h"
gboolean uri_str_to_bytes(const char *uri_str, GByteArray *bytes);
# 138 "../../epan/strutil.h"
gchar* format_uri(const GByteArray *bytes, const gchar *reserved_chars);
# 147 "../../epan/strutil.h"
gboolean oid_str_to_bytes(const char *oid_str, GByteArray *bytes);
# 157 "../../epan/strutil.h"
GByteArray *byte_array_dup(GByteArray *ba);
# 170 "../../epan/strutil.h"
gboolean byte_array_equal(GByteArray *ba1, GByteArray *ba2);
# 179 "../../epan/strutil.h"
gchar* xml_escape(const gchar *unescaped);
# 193 "../../epan/strutil.h"
const guint8 * epan_memmem(const guint8 *haystack, guint haystack_len,
  const guint8 *needle, guint needle_len);
# 207 "../../epan/strutil.h"
guint8 * convert_string_to_hex(const char *string, size_t *nbytes);
# 217 "../../epan/strutil.h"
char * convert_string_case(const char *string, gboolean case_insensitive);
# 227 "../../epan/strutil.h"
char * epan_strcasestr(const char *haystack, const char *needle);






const char * string_or_null(const char *string);

int escape_string_len(const char *string);
char * escape_string(char *dst, const char *string);


void IA5_7BIT_decode(unsigned char * dest, const unsigned char* src, int len);







gchar* ws_strdup_escape_underscore (const gchar *str);







gchar* ws_strdup_unescape_underscore (const gchar *str);
# 267 "../../epan/strutil.h"
gchar *string_replace(const gchar* str, const gchar *old_val, const gchar *new_val);
# 51 "packet-dns.c" 2

static int proto_dns = -1;
static int hf_dns_length = -1;
static int hf_dns_flags = -1;
static int hf_dns_flags_response = -1;
static int hf_dns_flags_opcode = -1;
static int hf_dns_flags_authoritative = -1;
static int hf_dns_flags_conflict_query = -1;
static int hf_dns_flags_conflict_response = -1;
static int hf_dns_flags_truncated = -1;
static int hf_dns_flags_recdesired = -1;
static int hf_dns_flags_tentative = -1;
static int hf_dns_flags_recavail = -1;
static int hf_dns_flags_z = -1;
static int hf_dns_flags_authenticated = -1;
static int hf_dns_flags_checkdisable = -1;
static int hf_dns_flags_rcode = -1;
static int hf_dns_transaction_id = -1;
static int hf_dns_count_questions = -1;
static int hf_dns_count_zones = -1;
static int hf_dns_count_answers = -1;
static int hf_dns_count_prerequisites = -1;
static int hf_dns_count_updates = -1;
static int hf_dns_count_auth_rr = -1;
static int hf_dns_count_add_rr = -1;
static int hf_dns_qry_name = -1;
static int hf_dns_qry_type = -1;
static int hf_dns_qry_class = -1;
static int hf_dns_qry_class_mdns = -1;
static int hf_dns_qry_qu = -1;
static int hf_dns_srv_service = -1;
static int hf_dns_srv_proto = -1;
static int hf_dns_srv_name = -1;
static int hf_dns_rr_name = -1;
static int hf_dns_rr_type = -1;
static int hf_dns_rr_class = -1;
static int hf_dns_rr_class_mdns = -1;
static int hf_dns_rr_cache_flush = -1;
static int hf_dns_rr_ttl = -1;
static int hf_dns_rr_len = -1;
static int hf_dns_rr_addr = -1;
static int hf_dns_rr_primaryname = -1;
static int hf_dns_rr_ns = -1;
static int hf_dns_nsec3_algo = -1;
static int hf_dns_nsec3_flags = -1;
static int hf_dns_nsec3_flag_optout = -1;
static int hf_dns_nsec3_iterations = -1;
static int hf_dns_nsec3_salt_length = -1;
static int hf_dns_nsec3_salt_value = -1;
static int hf_dns_nsec3_hash_length = -1;
static int hf_dns_nsec3_hash_value = -1;
static int hf_dns_tsig_error = -1;
static int hf_dns_tsig_fudge = -1;
static int hf_dns_tsig_mac_size = -1;
static int hf_dns_tsig_mac = -1;
static int hf_dns_tsig_original_id = -1;
static int hf_dns_tsig_algorithm_name = -1;
static int hf_dns_tsig_other_len = -1;
static int hf_dns_tsig_other_data = -1;
static int hf_dns_response_in = -1;
static int hf_dns_response_to = -1;
static int hf_dns_time = -1;
static int hf_dns_sshfp_fingerprint = -1;
static int hf_dns_hip_hit = -1;
static int hf_dns_hip_pk = -1;
static int hf_dns_dhcid_rdata = -1;
static int hf_dns_apl_coded_prefix = -1;
static int hf_dns_apl_negation = -1;
static int hf_dns_apl_afdlength = -1;
static int hf_dns_nsap_rdata = -1;

static gint ett_dns = -1;
static gint ett_dns_qd = -1;
static gint ett_dns_rr = -1;
static gint ett_dns_qry = -1;
static gint ett_dns_ans = -1;
static gint ett_dns_flags = -1;
static gint ett_nsec3_flags = -1;
static gint ett_t_key_flags = -1;
static gint ett_t_key = -1;
static gint ett_dns_mac = -1;

static dissector_table_t dns_tsig_dissector_table=((void *)0);


static gboolean dns_desegment = (!(0));


static dissector_handle_t gssapi_handle;
static dissector_handle_t ntlmssp_handle;


typedef struct _dns_transaction_t {
        guint32 req_frame;
        guint32 rep_frame;
        nstime_t req_time;
} dns_transaction_t;


typedef struct _dns_conv_info_t {
        emem_tree_t *pdus;
} dns_conv_info_t;
# 264 "packet-dns.c"
static const true_false_string tfs_flags_response = {
 "Message is a response",
 "Message is a query"
};

static const true_false_string tfs_flags_authoritative = {
 "Server is an authority for domain",
 "Server is not an authority for domain"
};

static const true_false_string tfs_flags_conflict_query = {
 "The sender received multiple responses",
 "None"
};

static const true_false_string tfs_flags_conflict_response = {
 "The name is not considered unique",
 "The name is considered unique"
};

static const true_false_string tfs_flags_truncated = {
 "Message is truncated",
 "Message is not truncated"
};

static const true_false_string tfs_flags_recdesired = {
 "Do query recursively",
 "Don't do query recursively"
};

static const true_false_string tfs_flags_tentative = {
 "Tentative",
 "Not tentative"
};

static const true_false_string tfs_flags_recavail = {
 "Server can do recursive queries",
 "Server can't do recursive queries"
};

static const true_false_string tfs_flags_z = {
 "reserved - incorrect!",
 "reserved (0)"
};

static const true_false_string tfs_flags_authenticated = {
 "Answer/authority portion was authenticated by the server",
 "Answer/authority portion was not authenticated by the server"
};

static const true_false_string tfs_flags_checkdisable = {
 "Acceptable",
 "Unacceptable"
};
# 326 "packet-dns.c"
static const value_string opcode_vals[] = {
   { 0, "Standard query" },
   { 1, "Inverse query" },
   { 2, "Server status request" },
   { 4, "Zone change notification" },
   { 5, "Dynamic update" },
   { 0, ((void *)0) } };
# 347 "packet-dns.c"
static const value_string rcode_vals[] = {
   { 0, "No error" },
   { 1, "Format error" },
   { 2, "Server failure" },
   { 3, "No such name" },
   { 4, "Not implemented" },
   { 5, "Refused" },
   { 6, "Name exists" },
   { 7, "RRset exists" },
   { 8, "RRset does not exist" },
   { 9, "Not authoritative" },
   { 10, "Name out of zone" },
   { 0, ((void *)0) } };






static const value_string hash_algorithms[] = {
   { 0, "Reserved" },
   { 1, "SHA-1" },
   { 0, ((void *)0) } };

static const true_false_string tfs_flags_nsec3_optout = {
 "Additional insecure delegations allowed",
 "Additional insecure delegations forbidden"
};
# 384 "packet-dns.c"
static const value_string tsigerror_vals[] = {
   { (16), "Bad signature" },
   { (17), "Bad key" },
   { (18), "Bad time failure" },
   { (19), "Bad mode such name" },
   { (20), "Bad name implemented" },
   { (21), "Bad algorithm" },
   { 0, ((void *)0) } };
# 423 "packet-dns.c"
static const true_false_string tfs_dns_apl_negation = {
 "Yes (!)",
 "No (0)"
};
# 441 "packet-dns.c"
static const value_string dns_types[] = {
 { 0, "Unused" },
 { 1, "A" },
 { 2, "NS" },
 { 3, "MD" },
 { 4, "MF" },
 { 5, "CNAME" },
 { 6, "SOA" },
 { 7, "MB" },
 { 8, "MG" },
 { 9, "MR" },
 { 10, "NULL" },
 { 11, "WKS" },
 { 12, "PTR" },
 { 13, "HINFO" },
 { 14, "MINFO" },
 { 15, "MX" },
 { 16, "TXT" },
 { 17, "RP" },
 { 18, "AFSDB" },
 { 19, "X25" },
 { 20, "ISDN" },
 { 21, "RT" },
 { 22, "NSAP" },
 { 23, "NSAP-PTR" },
 { 24, "SIG" },
 { 25, "KEY" },
 { 26, "PX" },
 { 27, "GPOS" },
 { 28, "AAAA" },
 { 29, "LOC" },
 { 30, "NXT" },
 { 31, "EID" },
 { 32, "NIMLOC" },
 { 33, "SRV" },
 { 34, "ATMA" },
 { 35, "NAPTR" },
 { 36, "KX" },
 { 37, "CERT" },
 { 38, "A6" },
 { 39, "DNAME" },

 { 41, "OPT" },
 { 42, "APL" },
 { 43, "DS" },
 { 44, "SSHFP" },
 { 45, "IPSECKEY" },
 { 46, "RRSIG" },
 { 47, "NSEC" },
 { 48, "DNSKEY" },
 { 49, "DHCID" },
 { 50, "NSEC3" },
 { 51, "NSEC3PARAM" },

 { 55, "HIP" },



 { 99, "SPF" },
 { 100, "UINFO" },
 { 101, "UID" },
 { 102, "GID" },
 { 103, "UNSPEC" },

 { 249, "TKEY"},
 { 250, "TSIG"},

 { 65281, "WINS"},
 { 65282, "WINS-R"},

 { 251, "IXFR"},
 { 252, "AXFR"},
 { 253, "MAILB"},
 { 254, "MAILA"},
 { 255, "ANY"},


 { 32769, "DLV" },
 {0, ((void *)0)}
};

static const char *
dns_type_name (guint type)
{
  return val_to_str(type, dns_types, "Unknown (%u)");
}

static char *
dns_type_description (guint type)
{
  static const char *type_names[] = {
    "unused",
    "Host address",
    "Authoritative name server",
    "Mail destination",
    "Mail forwarder",
    "Canonical name for an alias",
    "Start of zone of authority",
    "Mailbox domain name",
    "Mail group member",
    "Mail rename domain name",
    "Null resource record",
    "Well-known service description",
    "Domain name pointer",
    "Host information",
    "Mailbox or mail list information",
    "Mail exchange",
    "Text strings",
    "Responsible person",
    "AFS data base location",
    "X.25 address",
    "ISDN number",
    "Route through",
    "OSI NSAP",
    "OSI NSAP name pointer",
    "Signature",
    "Public key",
    "Pointer to X.400/RFC822 mapping info",
    "Geographical position",
    "IPv6 address",
    "Location",
    "Next",
    "EID",
    "NIMLOC",
    "Service location",
    "ATMA",
    "Naming authority pointer",
    "Key Exchange",
    "Certificate",
    "IPv6 address with indirection",
    "Non-terminal DNS name redirection",
    ((void *)0),
    "EDNS0 option",
    "Lists of Address Prefixes",
    "Delegation Signer",
    "SSH public host key fingerprint",
    "key to use with IPSEC",
    "RR signature",
    "Next secured",
    "DNS public key",
    "DHCP Information",
    "Next secured hash",
    "NSEC3 parameters",
    ((void *)0),
    ((void *)0),
    ((void *)0),
    "Host Identity Protocol"
  };
  const char *short_name;
  const char *long_name;

  short_name = dns_type_name(type);
  if (short_name == ((void *)0)) {
    return ep_strdup_printf("Unknown (%u)", type);
  }
  if (type < sizeof(type_names)/sizeof(type_names[0]))
    long_name = type_names[type];
  else {

    switch (type) {

      case 249:
        long_name = "Transaction Key";
        break;
      case 250:
        long_name = "Transaction Signature";
        break;


      case 251:
        long_name = "Request for incremental zone transfer";
        break;
      case 252:
        long_name = "Request for full zone transfer";
        break;
      case 253:
        long_name = "Request for mailbox-related records";
        break;
      case 254:
        long_name = "Request for mail agent resource records";
        break;
      case 255:
        long_name = "Request for all records";
        break;
      default:
        long_name = ((void *)0);
        break;
      }
  }

  if (long_name != ((void *)0))
    return ep_strdup_printf("%s (%s)", short_name, long_name);
  else
    return ep_strdup(short_name);
}

static const value_string dns_classes[] = {
 {1, "IN"},
 {2, "CS"},
 {3, "CH"},
 {4, "HS"},
 {254, "NONE"},
 {255, "ANY"},
 {0,((void *)0)}
};

const char *
dns_class_name(int class)
{
  return val_to_str(class, dns_classes, "Unknown (%u)");
}






int
get_dns_name(tvbuff_t *tvb, int offset, int max_len, int dns_data_offset,
    const guchar **name)
{
  int start_offset = offset;
  guchar *np;
  int len = -1;
  int chars_processed = 0;
  int data_size = tvb_reported_length_remaining(tvb, dns_data_offset);
  int component_len;
  int indir_offset;
  int maxname;

  const int min_len = 1;




  maxname=1025;
  np=ep_alloc(maxname);
  *name=np;

  maxname--;
  for (;;) {
    if (max_len && offset - start_offset > max_len - 1)
      break;
    component_len = tvb_get_guint8(tvb, offset);
    offset++;
    if (component_len == 0)
      break;
    chars_processed++;
    switch (component_len & 0xc0) {

    case 0x00:

      if (np != *name) {

        if (maxname > 0) {
          *np++ = '.';
          maxname--;
        }
      }
      while (component_len > 0) {
        if (max_len && offset - start_offset > max_len - 1)
          except_throw(1, (2), ((void *)0));
        if (maxname > 0) {
          *np++ = tvb_get_guint8(tvb, offset);
          maxname--;
        }
       component_len--;
       offset++;
        chars_processed++;
      }
      break;

    case 0x40:

      switch (component_len & 0x3f) {

      case 0x01:

 {
   int bit_count;
   int label_len;
   int print_len;

   bit_count = tvb_get_guint8(tvb, offset);
   offset++;
   label_len = (bit_count - 1) / 8 + 1;

   if (maxname > 0) {
     print_len = g_snprintf(np, maxname + 1, "\\[x");
     if (print_len != -1 && print_len <= maxname) {


       np += print_len;
       maxname -= print_len;
     } else {


       maxname = 0;
     }
   }
   while(label_len--) {
     if (maxname > 0) {
       print_len = g_snprintf(np, maxname + 1, "%02x",
         tvb_get_guint8(tvb, offset));
       if (print_len != -1 && print_len <= maxname) {


  np += print_len;
  maxname -= print_len;
       } else {


  maxname = 0;
       }
     }
     offset++;
   }
   if (maxname > 0) {
     print_len = g_snprintf(np, maxname + 1, "/%d]", bit_count);
     if (print_len != -1 && print_len <= maxname) {


       np += print_len;
       maxname -= print_len;
     } else {


       maxname = 0;
     }
   }
 }
 break;

      default:
 *name="<Unknown extended label>";


 len = offset - start_offset;
        if (len < min_len)
          except_throw(1, (2), ((void *)0));
        return len;
      }
      break;

    case 0x80:
      except_throw(1, (2), ((void *)0));

    case 0xc0:

      indir_offset = dns_data_offset +
          (((component_len & ~0xc0) << 8) | tvb_get_guint8(tvb, offset));
      offset++;
      chars_processed++;




      if (len < 0)
        len = offset - start_offset;




      if (chars_processed >= data_size) {
        *name="<Name contains a pointer that loops>";
        if (len < min_len)
          except_throw(1, (2), ((void *)0));
        return len;
      }

      offset = indir_offset;
      break;
    }
  }

  *np = '\0';


  if (len < 0)
    len = offset - start_offset;

  if (**name == '\0')
    *name="<Root>";
  if (len < min_len)
    except_throw(1, (2), ((void *)0));
  return len;
}


static int
get_dns_name_type_class(tvbuff_t *tvb, int offset, int dns_data_offset,
    const guchar **name_ret, int *name_len_ret, int *type_ret, int *class_ret)
{
  int len;
  int name_len;
  int type;
  int class;
  int start_offset = offset;


  name_len = get_dns_name(tvb, offset, 0, dns_data_offset, name_ret);
  offset += name_len;

  type = tvb_get_ntohs(tvb, offset);
  offset += 2;

  class = tvb_get_ntohs(tvb, offset);
  offset += 2;

  *type_ret = type;
  *class_ret = class;
  *name_len_ret = name_len;

  len = offset - start_offset;
  return len;
}

static double
rfc1867_size(tvbuff_t *tvb, int offset)
{
  guint8 val;
  double size;
  guint32 exponent;

  val = tvb_get_guint8(tvb, offset);
  size = (val & 0xF0) >> 4;
  exponent = (val & 0x0F);
  while (exponent != 0) {
    size *= 10;
    exponent--;
  }
  return size / 100;
}

static char *
rfc1867_angle(tvbuff_t *tvb, int offset, const char *nsew)
{
  guint32 angle;
  char direction;
  guint32 degrees, minutes, secs, tsecs;

  static char buf[10+1+3+1 + 2+1+3+1 + 2+1+3+1+3+1 + 1 + 1];

  angle = tvb_get_ntohl(tvb, offset);

  if (angle < 0x80000000U) {
    angle = 0x80000000U - angle;
    direction = nsew[1];
  } else {
    angle = angle - 0x80000000U;
    direction = nsew[0];
  }
  tsecs = angle % 1000;
  angle = angle / 1000;
  secs = angle % 60;
  angle = angle / 60;
  minutes = angle % 60;
  degrees = angle / 60;
  g_snprintf(buf, sizeof(buf), "%u deg %u min %u.%03u sec %c", degrees, minutes, secs,
  tsecs, direction);
  return buf;
}

static int
dissect_dns_query(tvbuff_t *tvb, int offset, int dns_data_offset,
  column_info *cinfo, proto_tree *dns_tree, gboolean is_mdns)
{
  int len;
  const guchar *name;
  gchar *name_out;
  int name_len;
  int type;
  int class;
  int qu;
  const char *type_name;
  int data_offset;
  int data_start;
  proto_tree *q_tree;
  proto_item *tq;

  data_start = data_offset = offset;

  len = get_dns_name_type_class(tvb, offset, dns_data_offset, &name, &name_len,
    &type, &class);
  data_offset += len;
  if (is_mdns) {

    qu = class & (1<<15);
    class &= ~(1<<15);
  } else
    qu = 0;

  type_name = dns_type_name(type);





  name_out = format_text(name, strlen(name));

  if (cinfo != ((void *)0)) {
    col_append_fstr(cinfo, COL_INFO, " %s %s", type_name, name_out);
    if (is_mdns)
      col_append_fstr(cinfo, COL_INFO, ", \"%s\" question", qu ? "QU" : "QM");
  }
  if (dns_tree != ((void *)0)) {
    tq = proto_tree_add_text(dns_tree, tvb, offset, len, "%s: type %s, class %s",
     name_out, type_name, dns_class_name(class));
    if (is_mdns)
      proto_item_append_text(tq, ", \"%s\" question", qu ? "QU" : "QM");
    q_tree = proto_item_add_subtree(tq, ett_dns_qd);

    proto_tree_add_string(q_tree, hf_dns_qry_name, tvb, offset, name_len, name);
    offset += name_len;

    proto_tree_add_uint_format(q_tree, hf_dns_qry_type, tvb, offset, 2, type,
  "Type: %s", dns_type_description(type));
    offset += 2;

    if (is_mdns) {
      proto_tree_add_uint(q_tree, hf_dns_qry_class_mdns, tvb, offset, 2, class);
      proto_tree_add_boolean(q_tree, hf_dns_qry_qu, tvb, offset, 2, qu);
    } else
      proto_tree_add_uint(q_tree, hf_dns_qry_class, tvb, offset, 2, class);

    offset += 2;
  }

  return data_offset - data_start;
}


static proto_tree *
add_rr_to_tree(proto_item *trr, int rr_type, tvbuff_t *tvb, int offset,
  const guchar *name, int namelen, int type, int class, int flush,
  guint ttl, gushort data_len, gboolean is_mdns)
{
  proto_tree *rr_tree;
  gchar **srv_rr_info;

  rr_tree = proto_item_add_subtree(trr, rr_type);

  if(type == 33) {
    srv_rr_info = g_strsplit(name, ".", 3);



    proto_tree_add_string(rr_tree, hf_dns_srv_service, tvb, offset,
     namelen, srv_rr_info[0]+1);

    if (srv_rr_info[1]) {
      proto_tree_add_string(rr_tree, hf_dns_srv_proto, tvb, offset,
       namelen, srv_rr_info[1]+1);

      if (srv_rr_info[2])
 proto_tree_add_string(rr_tree, hf_dns_srv_name, tvb, offset,
         namelen, srv_rr_info[2]);
    }

    g_strfreev(srv_rr_info);
  } else {
    proto_tree_add_string(rr_tree, hf_dns_rr_name, tvb, offset, namelen, name);
  }

  offset += namelen;

  proto_tree_add_uint_format(rr_tree, hf_dns_rr_type, tvb, offset, 2, type,
  "Type: %s", dns_type_description(type));
  offset += 2;
  if (is_mdns) {
    proto_tree_add_uint(rr_tree, hf_dns_rr_class_mdns, tvb, offset, 2, class);
    proto_tree_add_boolean(rr_tree, hf_dns_rr_cache_flush, tvb, offset, 2, flush);
  } else
    proto_tree_add_uint(rr_tree, hf_dns_rr_class, tvb, offset, 2, class);
  offset += 2;
  proto_tree_add_uint_format(rr_tree, hf_dns_rr_ttl, tvb, offset, 4, ttl,
  "Time to live: %s", time_secs_to_str(ttl));
  offset += 4;
  proto_tree_add_uint(rr_tree, hf_dns_rr_len, tvb, offset, 2, data_len);
  return rr_tree;
}


static proto_tree *
add_opt_rr_to_tree(proto_item *trr, int rr_type, tvbuff_t *tvb, int offset,
  const char *name, int namelen, int type, int class, int flush,
  guint ttl, gushort data_len, gboolean is_mdns)
{
  proto_tree *rr_tree, *Z_tree;
  proto_item *Z_item = ((void *)0);

  rr_tree = proto_item_add_subtree(trr, rr_type);
  proto_tree_add_string(rr_tree, hf_dns_rr_name, tvb, offset, namelen, name);
  offset += namelen;
  proto_tree_add_uint_format(rr_tree, hf_dns_rr_type, tvb, offset, 2, type,
  "Type: %s", dns_type_description(type));
  offset += 2;
  if (is_mdns) {
    proto_tree_add_text(rr_tree, tvb, offset, 2, "%s",
                        decode_numeric_bitfield(class, 0x7fff, 16,
                                                "UDP payload size: %u"));
    proto_tree_add_boolean(rr_tree, hf_dns_rr_cache_flush, tvb, offset, 2,
       flush);
  } else {
    proto_tree_add_text(rr_tree, tvb, offset, 2, "UDP payload size: %u",
      class & 0xffff);
  }
  offset += 2;
  proto_tree_add_text(rr_tree, tvb, offset, 1, "Higher bits in extended RCODE: 0x%x",
      (ttl >> 24) & 0xff0);
  offset++;
  proto_tree_add_text(rr_tree, tvb, offset, 1, "EDNS0 version: %u",
      (ttl >> 16) & 0xff);
  offset++;
  Z_item = proto_tree_add_text(rr_tree, tvb, offset, 2, "Z: 0x%x", ttl & 0xffff);
  if (ttl & 0x8000) {
     Z_tree = proto_item_add_subtree(Z_item, rr_type);
     proto_tree_add_text(Z_tree, tvb, offset, 2, "Bit 0 (DO bit): 1 (Accepts DNSSEC security RRs)");
     proto_tree_add_text(Z_tree, tvb, offset, 2, "Bits 1-15: 0x%x (reserved)", (ttl >> 17) & 0xff);
  }
  offset += 2;
  proto_tree_add_uint(rr_tree, hf_dns_rr_len, tvb, offset, 2, data_len);
  return rr_tree;
}

static int
dissect_type_bitmap(proto_tree *rr_tree, tvbuff_t *tvb, int cur_offset, int rr_len)
{
  int mask, blockbase, blocksize;
  int i, initial_offset, rr_type;
  guint8 bits;

  initial_offset = cur_offset;
  while (rr_len != 0) {
    blockbase = tvb_get_guint8(tvb, cur_offset);
    blocksize = tvb_get_guint8(tvb, cur_offset + 1);
    cur_offset += 2;
    rr_len -= 2;
    rr_type = blockbase * 256;
    for( ; blocksize; blocksize-- ) {
      bits = tvb_get_guint8(tvb, cur_offset);
      mask = 1<<7;
      for (i = 0; i < 8; i++) {
        if (bits & mask) {
          proto_tree_add_text(rr_tree, tvb, cur_offset, 1,
            "RR type in bit map: %s",
            dns_type_description(rr_type));
        }
        mask >>= 1;
        rr_type++;
      }
      cur_offset += 1;
      rr_len -= 1;
    }
  }
  return(initial_offset - cur_offset);
}
# 1118 "packet-dns.c"
static const value_string algo_vals[] = {
   { 1, "RSA/MD5" },
   { 2, "Diffie-Hellman" },
   { 3, "DSA" },
   { 4, "Elliptic curve crypto" },
   { 5, "RSA/SHA1" },
   { 6, "DSA + NSEC3/SHA1" },
   { 7,"RSA/SHA1 + NSEC3/SHA1" },
   { 8, "RSA/SHA-256" },
   { 10, "RSA/SHA-512" },
   { 12, "GOST R 34.10-2001" },
   { 157, "HMAC/MD5" },
   { 252, "Indirect key" },
   { 253, "Private, domain name" },
   { 254, "Private, OID" },
   { 0, ((void *)0) }
};







static const value_string cert_vals[] = {
   { 1, "PGP" },
   { 2, "PKIX" },
   { 3, "SPKI" },
   { 253, "Private, URI" },
   { 254, "Private, OID" },
   { 0, ((void *)0) }
};




static guint16
compute_key_id(tvbuff_t *tvb, int offset, int size, guint8 algo)
{
  guint32 ac;
  guint8 c1, c2;

  ((void) ((size >= 4) ? (void)0 : (((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)) ? abort() : except_throw(1, (4), (ep_strdup_printf("%s:%u: failed assertion \"%s\"", "packet-dns.c", 1160, "size >= 4")))))));

  switch( algo ) {
     case 1:
       return (guint16)(tvb_get_guint8(tvb, offset + size - 3) << 8) + tvb_get_guint8( tvb, offset + size - 2 );
     default:
       for (ac = 0; size > 1; size -= 2, offset += 2) {
  c1 = tvb_get_guint8( tvb, offset );
  c2 = tvb_get_guint8( tvb, offset + 1 );
  ac += (c1 << 8) + c2 ;
       }
       if (size > 0) {
  c1 = tvb_get_guint8( tvb, offset );
  ac += c1 << 8;
       }
       ac += (ac >> 16) & 0xffff;
       return (guint16)(ac & 0xffff);
  }
}


static int
dissect_dns_answer(tvbuff_t *tvb, int offsetx, int dns_data_offset,
  column_info *cinfo, proto_tree *dns_tree, packet_info *pinfo,
  gboolean is_mdns)
{
  int len;
  const guchar *name;
  gchar *name_out;
  int name_len;
  int type;
  int class;
  int flush;
  const char *class_name;
  const char *type_name;
  int data_offset;
  int cur_offset;
  int data_start;
  guint ttl;
  gushort data_len;
  proto_tree *rr_tree = ((void *)0);
  proto_item *trr = ((void *)0);

  data_start = data_offset = offsetx;
  cur_offset = offsetx;

  len = get_dns_name_type_class(tvb, offsetx, dns_data_offset, &name, &name_len,
    &type, &class);
  data_offset += len;
  cur_offset += len;
  if (is_mdns) {

    flush = class & (1<<15);
    class &= ~(1<<15);
  } else
    flush = 0;

  type_name = dns_type_name(type);
  class_name = dns_class_name(class);

  ttl = tvb_get_ntohl(tvb, data_offset);
  data_offset += 4;
  cur_offset += 4;

  data_len = tvb_get_ntohs(tvb, data_offset);
  data_offset += 2;
  cur_offset += 2;

  if (cinfo != ((void *)0)) {
    col_append_fstr(cinfo, COL_INFO, " %s", type_name);
    if (is_mdns && flush)
      col_append_str(cinfo, COL_INFO, ", cache flush");
  }
  if (dns_tree != ((void *)0)) {




    name_out = format_text(name, strlen(name));
    if (type != 41) {
      trr = proto_tree_add_text(dns_tree, tvb, offsetx,
      (data_offset - data_start) + data_len,
      "%s: type %s, class %s",
      name_out, type_name, class_name);
      rr_tree = add_rr_to_tree(trr, ett_dns_rr, tvb, offsetx, name, name_len,
       type, class, flush, ttl, data_len, is_mdns);
    } else {
      trr = proto_tree_add_text(dns_tree, tvb, offsetx,
      (data_offset - data_start) + data_len,
      "%s: type %s", name_out, type_name);
      rr_tree = add_opt_rr_to_tree(trr, ett_dns_rr, tvb, offsetx, name, name_len,
       type, class, flush, ttl, data_len, is_mdns);
    }
    if (is_mdns && flush)
      proto_item_append_text(trr, ", cache flush");
  }

  if (data_len == 0)
    return data_offset - data_start;

  switch (type) {

  case 1:
    {
      const guint8 *addr;
      guint32 addr_int;

      addr = tvb_get_ptr(tvb, cur_offset, 4);
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", ip_to_str(addr));

 proto_item_append_text(trr, ", addr %s", ip_to_str(addr));
 proto_tree_add_item(rr_tree, hf_dns_rr_addr, tvb, cur_offset, 4, (0));

      if ((class & 0x7f) == 1) {
 memcpy(&addr_int, addr, sizeof(addr_int));
 add_ipv4_name(addr_int, name);
      }
    }
    break;

  case 2:
    {
      const guchar *ns_name;
      int ns_name_len;

      ns_name_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &ns_name);
      name_out = format_text(ns_name, strlen(ns_name));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", name_out);

 proto_item_append_text(trr, ", ns %s", name_out);
 proto_tree_add_string(rr_tree, hf_dns_rr_ns, tvb, cur_offset, ns_name_len, name_out);

    }
    break;

  case 5:
    {
      const guchar *cname;
      int cname_len;

      cname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &cname);
      name_out = format_text(cname, strlen(cname));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", name_out);

 proto_item_append_text(trr, ", cname %s", name_out);
 proto_tree_add_string(rr_tree, hf_dns_rr_primaryname, tvb, cur_offset, cname_len, name_out);

    }
    break;

  case 6:
    {
      const guchar *mname;
      int mname_len;
      const guchar *rname;
      int rname_len;
      guint32 serial;
      guint32 refresh;
      guint32 retry;
      guint32 expire;
      guint32 minimum;


      mname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &mname);
      name_out = format_text(mname, strlen(mname));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", name_out);

 proto_item_append_text(trr, ", mname %s", name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset, mname_len, "Primary name server: %s",
         name_out);
 cur_offset += mname_len;


 rname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &rname);
        name_out = format_text(rname, strlen(rname));
 proto_tree_add_text(rr_tree, tvb, cur_offset, rname_len, "Responsible authority's mailbox: %s",
         name_out);
 cur_offset += rname_len;

 serial = tvb_get_ntohl(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Serial number: %u",
         serial);
 cur_offset += 4;

 refresh = tvb_get_ntohl(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Refresh interval: %s",
         time_secs_to_str(refresh));
 cur_offset += 4;

 retry = tvb_get_ntohl(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Retry interval: %s",
         time_secs_to_str(retry));
 cur_offset += 4;

 expire = tvb_get_ntohl(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Expiration limit: %s",
         time_secs_to_str(expire));
 cur_offset += 4;

 minimum = tvb_get_ntohl(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Minimum TTL: %s",
         time_secs_to_str(minimum));

    }
    break;

  case 12:
    {
      const guchar *pname;
      int pname_len;


      pname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &pname);
      name_out = format_text(pname, strlen(pname));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", name_out);

 proto_item_append_text(trr, ", %s", name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset, pname_len, "Domain name: %s",
   name_out);

    }
    break;

  case 11:
    {
      int rr_len = data_len;
      const guint8 *wks_addr;
      guint8 protocol;
      guint8 bits;
      int mask;
      int port_num;
      int i;
      emem_strbuf_t *bitnames = ep_strbuf_new_label(((void *)0));

      if (rr_len < 4) {

   goto bad_rr;
 break;
      }
      wks_addr = tvb_get_ptr(tvb, cur_offset, 4);
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", ip_to_str(wks_addr));

 proto_item_append_text(trr, ", addr %s", ip_to_str(wks_addr));
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Addr: %s",
       ip_to_str(wks_addr));
 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 1)
   goto bad_rr;
 protocol = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Protocol: %s",
       ipprotostr(protocol));
 cur_offset += 1;
 rr_len -= 1;

 port_num = 0;
 while (rr_len != 0) {
   bits = tvb_get_guint8(tvb, cur_offset);
   if (bits != 0) {
     mask = 1<<7;
            ep_strbuf_truncate(bitnames, 0);
     for (i = 0; i < 8; i++) {
       if (bits & mask) {
  if (bitnames->len > 0) {
    ep_strbuf_append(bitnames, ", ");
  }
  switch (protocol) {

  case 6:
    ep_strbuf_append(bitnames, get_tcp_port(port_num));
    break;

  case 17:
    ep_strbuf_append(bitnames, get_udp_port(port_num));
    break;

  default:
    ep_strbuf_append_printf(bitnames, "%u", port_num);
    break;
         }
       }
       mask >>= 1;
       port_num++;
     }
     proto_tree_add_text(rr_tree, tvb, cur_offset, 1,
  "Bits: 0x%02x (%s)", bits, bitnames->str);
   } else
     port_num += 8;
   cur_offset += 1;
   rr_len -= 1;
 }

    }
    break;

  case 13:
    {
      int cpu_offset;
      int cpu_len;
      const guint8 *cpu;
      int os_offset;
      int os_len;
      const guint8 *os;

      cpu_offset = cur_offset;
      cpu_len = tvb_get_guint8(tvb, cpu_offset);
      cpu = tvb_get_ptr(tvb, cpu_offset + 1, cpu_len);
      os_offset = cpu_offset + 1 + cpu_len;
      os_len = tvb_get_guint8(tvb, os_offset);
      os = tvb_get_ptr(tvb, os_offset + 1, os_len);
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %.*s %.*s", cpu_len, cpu,
     os_len, os);

 proto_item_append_text(trr, ", CPU %.*s, OS %.*s",
       cpu_len, cpu, os_len, os);
 proto_tree_add_text(rr_tree, tvb, cpu_offset, 1 + cpu_len, "CPU: %.*s",
   cpu_len, cpu);
 proto_tree_add_text(rr_tree, tvb, os_offset, 1 + os_len, "OS: %.*s",
   os_len, os);

    }
    break;

  case 15:
    {
      guint16 preference = 0;
      const guchar *mx_name;
      int mx_name_len;

      preference = tvb_get_ntohs(tvb, cur_offset);

      mx_name_len = get_dns_name(tvb, cur_offset + 2, 0, dns_data_offset, &mx_name);
      name_out = format_text(mx_name, strlen(mx_name));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %u %s", preference, name_out);

 proto_item_append_text(trr, ", preference %u, mx %s",
         preference, name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Preference: %u", preference);
 proto_tree_add_text(rr_tree, tvb, cur_offset + 2, mx_name_len, "Mail exchange: %s",
   name_out);

    }
    break;

  case 16:
  case 99:
    {
      int rr_len = data_len;
      int txt_offset;
      int txt_len;


 txt_offset = cur_offset;
 while (rr_len != 0) {
   txt_len = tvb_get_guint8(tvb, txt_offset);
   proto_tree_add_text(rr_tree, tvb, txt_offset, 1 + txt_len,
    "Text: %.*s", txt_len, tvb_get_ptr(tvb, txt_offset + 1, txt_len));
   txt_offset += 1 + txt_len;
   rr_len -= 1 + txt_len;
 }

    }
    break;

  case 46:
  case 24:
    {
      int rr_len = data_len;
      guint16 type_covered;
      nstime_t nstime;
      const guchar *signer_name;
      int signer_name_len;


 if (rr_len < 2)
   goto bad_rr;
 type_covered = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Type covered: %s",
  dns_type_description(type_covered));
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 1)
   goto bad_rr;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Algorithm: %s",
  val_to_str(tvb_get_guint8(tvb, cur_offset), algo_vals,
             "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 1)
   goto bad_rr;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Labels: %u",
  tvb_get_guint8(tvb, cur_offset));
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 4)
   goto bad_rr;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Original TTL: %s",
  time_secs_to_str(tvb_get_ntohl(tvb, cur_offset)));
 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 4)
   goto bad_rr;
 nstime.secs = tvb_get_ntohl(tvb, cur_offset);
 nstime.nsecs = 0;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Signature expiration: %s",
  abs_time_to_str(&nstime, ABSOLUTE_TIME_LOCAL, (!(0))));
 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 4)
   goto bad_rr;
 nstime.secs = tvb_get_ntohl(tvb, cur_offset);
 nstime.nsecs = 0;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Time signed: %s",
  abs_time_to_str(&nstime, ABSOLUTE_TIME_LOCAL, (!(0))));
 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 2)
   goto bad_rr;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Id of signing key(footprint): %u",
  tvb_get_ntohs(tvb, cur_offset));
 cur_offset += 2;
 rr_len -= 2;


 signer_name_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &signer_name);
 proto_tree_add_text(rr_tree, tvb, cur_offset, signer_name_len,
  "Signer's name: %s",
  format_text(signer_name, strlen(signer_name)));
 cur_offset += signer_name_len;
 rr_len -= signer_name_len;

 if (rr_len != 0)
   proto_tree_add_text(rr_tree, tvb, cur_offset, rr_len, "Signature");

    }
    break;

  case 48:
    {
      int rr_len = data_len;
      guint16 flags;
      proto_item *tf;
      proto_tree *flags_tree;
      guint8 algo;
      guint16 key_id;


 if (rr_len < 2)
   goto bad_rr;
        flags = tvb_get_ntohs(tvb, cur_offset);
 tf = proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Flags: 0x%04X", flags);
 flags_tree = proto_item_add_subtree(tf, ett_t_key_flags);
 proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x0100,
    2*8, "This is the zone key for the specified zone",
         "This is not a zone key"));
 proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x0080,
    2*8, "Key is revoked",
         "Key is not revoked"));
 proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x0001,
    2*8, "Key is a Key Signing Key",
         "Key is a Zone Signing Key"));

 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 1)
   goto bad_rr;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Protocol: %u",
  tvb_get_guint8(tvb, cur_offset));
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 1)
   goto bad_rr;
 algo = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Algorithm: %s",
  val_to_str(algo, algo_vals, "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;

 key_id = compute_key_id(tvb, cur_offset-4, rr_len+4, algo);
 proto_tree_add_text(rr_tree, tvb, 0, 0, "Key id: %u", key_id);

 if (rr_len != 0)
   proto_tree_add_text(rr_tree, tvb, cur_offset, rr_len, "Public key");

    }
    break;

  case 25:
    {
      int rr_len = data_len;
      guint16 flags;
      proto_item *tf;
      proto_tree *flags_tree;
      guint8 algo;
      guint16 key_id;


 if (rr_len < 2)
   goto bad_rr;
        flags = tvb_get_ntohs(tvb, cur_offset);
 tf = proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Flags: 0x%04X", flags);
 flags_tree = proto_item_add_subtree(tf, ett_t_key_flags);
 proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x8000,
    2*8, "Key prohibited for authentication",
         "Key allowed for authentication"));
 proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x4000,
    2*8, "Key prohibited for confidentiality",
         "Key allowed for confidentiality"));
 if ((flags & 0xC000) != 0xC000) {

   proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x2000,
    2*8, "Key is experimental or optional",
         "Key is required"));
   proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x0400,
    2*8, "Key is associated with a user",
         "Key is not associated with a user"));
   proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x0200,
    2*8, "Key is associated with the named entity",
         "Key is not associated with the named entity"));
   proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x0080,
    2*8, "Key is valid for use with IPSEC",
         "Key is not valid for use with IPSEC"));
   proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_boolean_bitfield(flags, 0x0040,
    2*8, "Key is valid for use with MIME security multiparts",
         "Key is not valid for use with MIME security multiparts"));
   proto_tree_add_text(flags_tree, tvb, cur_offset, 2, "%s",
  decode_numeric_bitfield(flags, 0x000F,
    2*8, "Signatory = %u"));
 }
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 1)
   goto bad_rr;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Protocol: %u",
  tvb_get_guint8(tvb, cur_offset));
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 1)
   goto bad_rr;
 algo = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Algorithm: %s",
  val_to_str(algo, algo_vals, "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;

 key_id = compute_key_id(tvb, cur_offset-4, rr_len+4, algo);
 proto_tree_add_text(rr_tree, tvb, 0, 0, "Key id: %u", key_id);

 if (rr_len != 0)
   proto_tree_add_text(rr_tree, tvb, cur_offset, rr_len, "Public key");

    }
    break;
  case 45:
    {
      int rr_len = data_len;
      guint8 gw_type, algo;
      const guint8 *addr;
      const guchar *gw;
      int gw_name_len;
      static const value_string gw_algo[] = {
   { 1, "DSA" },
   { 2, "RSA" },
   { 0, ((void *)0) }
      };



 if(rr_len < 3)
   goto bad_rr;

 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Gateway precedence: %u",
  tvb_get_guint8(tvb, cur_offset));
 cur_offset += 1;
 rr_len -= 1;

 gw_type = tvb_get_guint8(tvb, cur_offset);
 cur_offset += 1;
 rr_len -= 1;

 algo = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Algorithm: %s",
  val_to_str(algo, gw_algo, "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;
 switch( gw_type ) {
    case 0:
      proto_tree_add_text(rr_tree, tvb, cur_offset, 0, "Gateway: no gateway");
      break;
    case 1:
      addr = tvb_get_ptr(tvb, cur_offset, 4);
      proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Gateway: %s",
     ip_to_str(addr) );

      cur_offset += 4;
      rr_len -= 4;
      break;
    case 2:
      addr = tvb_get_ptr(tvb, cur_offset, 16);
      proto_tree_add_text(rr_tree, tvb, cur_offset, 16, "Gateway: %s",
     ip6_to_str((const struct e_in6_addr *)addr));

      cur_offset += 16;
      rr_len -= 16;
      break;
    case 3:

      gw_name_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &gw);
      proto_tree_add_text(rr_tree, tvb, cur_offset, gw_name_len,
     "Gateway: %s", format_text(gw, strlen(gw)));

      cur_offset += gw_name_len;
      rr_len -= gw_name_len;
      break;
    default:
      proto_tree_add_text(rr_tree, tvb, cur_offset, 0, "Gateway: Unknown gateway type(%u)", gw_type);
      break;
 }
 if (rr_len != 0)
   proto_tree_add_text(rr_tree, tvb, cur_offset, rr_len, "Public key");

    }
    break;

  case 28:
    {
      const guint8 *addr6;
      struct e_in6_addr addr_in6;

      addr6 = tvb_get_ptr(tvb, cur_offset, 16);
      if (cinfo != ((void *)0)) {
 col_append_fstr(cinfo, COL_INFO, " %s",
   ip6_to_str((const struct e_in6_addr *)addr6));
      }

 proto_item_append_text(trr, ", addr %s",
       ip6_to_str((const struct e_in6_addr *)addr6));
 proto_tree_add_text(rr_tree, tvb, cur_offset, 16, "Addr: %s",
       ip6_to_str((const struct e_in6_addr *)addr6));

      if ((class & 0x7f) == 1) {
 memcpy(&addr_in6, addr6, sizeof(addr_in6));
 add_ipv6_name(&addr_in6, name);
      }
    }
    break;

  case 38:
    {
      unsigned short pre_len;
      unsigned short suf_len;
      unsigned short suf_octet_count;
      const guchar *pname;
      int pname_len;
      int a6_offset;
      int suf_offset;
      struct e_in6_addr suffix;

      a6_offset = cur_offset;
      pre_len = tvb_get_guint8(tvb, cur_offset);
      cur_offset++;
      suf_len = 128 - pre_len;
      suf_octet_count = suf_len ? (suf_len - 1) / 8 + 1 : 0;

      for (suf_offset = 0; suf_offset < 16 - suf_octet_count; suf_offset++) {
        suffix.bytes[suf_offset] = 0;
      }
      for (; suf_offset < 16; suf_offset++) {
        suffix.bytes[suf_offset] = tvb_get_guint8(tvb, cur_offset);
        cur_offset++;
      }

      if (pre_len > 0) {

        pname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset,
                                 &pname);
      } else {
        pname="";
        pname_len = 0;
      }
      name_out = format_text(pname, strlen(pname));

      if (cinfo != ((void *)0)) {
        col_append_fstr(cinfo, COL_INFO, " %d %s %s",
                        pre_len,
                        ip6_to_str(&suffix),
                        name_out);
      }

        proto_tree_add_text(rr_tree, tvb, a6_offset, 1,
                            "Prefix len: %u", pre_len);
        a6_offset++;
        if (suf_len) {
          proto_tree_add_text(rr_tree, tvb, a6_offset, suf_octet_count,
                              "Address suffix: %s",
                              ip6_to_str(&suffix));
          a6_offset += suf_octet_count;
        }
        if (pre_len > 0) {
          proto_tree_add_text(rr_tree, tvb, a6_offset, pname_len,
                              "Prefix name: %s", name_out);
        }
        proto_item_append_text(trr, ", addr %d %s %s",
                            pre_len,
                            ip6_to_str(&suffix),
                            name_out);

    }
    break;

  case 39:
    {
      const guchar *dname;
      int dname_len;


      dname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset,
          &dname);
      name_out = format_text(dname, strlen(dname));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", name_out);

 proto_item_append_text(trr, ", dname %s", name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset,
       dname_len, "Target name: %s", name_out);

    }
    break;

  case 29:
    {
      guint8 version;


 version = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Version: %u", version);
 if (version == 0) {

   cur_offset++;

   proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Size: %g m",
    rfc1867_size(tvb, cur_offset));
   cur_offset++;

   proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Horizontal precision: %g m",
    rfc1867_size(tvb, cur_offset));
   cur_offset++;

   proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Vertical precision: %g m",
    rfc1867_size(tvb, cur_offset));
   cur_offset++;

   proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Latitude: %s",
    rfc1867_angle(tvb, cur_offset, "NS"));
   cur_offset += 4;

   proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Longitude: %s",
    rfc1867_angle(tvb, cur_offset, "EW"));
   cur_offset += 4;

   proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Altitude: %g m",
    ((gint32)tvb_get_ntohl(tvb, cur_offset) - 10000000)/100.0);
 } else
   proto_tree_add_text(rr_tree, tvb, cur_offset, data_len, "Data");

    }
    break;

  case 47:
    {
      int rr_len = data_len;
      const guchar *next_domain_name;
      int next_domain_name_len;


      next_domain_name_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset,
   &next_domain_name);
      name_out = format_text(next_domain_name, strlen(next_domain_name));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", name_out);

 proto_item_append_text(trr, ", next domain name %s", name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset, next_domain_name_len,
   "Next domain name: %s", name_out);
 cur_offset += next_domain_name_len;
 rr_len -= next_domain_name_len;
        cur_offset += dissect_type_bitmap(rr_tree, tvb, cur_offset, rr_len);

    }
    break;

  case 50:
    {
      int rr_len, initial_offset = cur_offset;
      guint8 salt_len, hash_len;
      proto_item *flags_item;
      proto_tree *flags_tree;


        proto_tree_add_item(rr_tree, hf_dns_nsec3_algo, tvb, cur_offset++, 1, (0));
        flags_item = proto_tree_add_item(rr_tree, hf_dns_nsec3_flags, tvb, cur_offset, 1, (0));
        flags_tree = proto_item_add_subtree(flags_item, ett_nsec3_flags);
        proto_tree_add_item(flags_tree, hf_dns_nsec3_flag_optout, tvb, cur_offset, 1, (0));
        cur_offset++;
        proto_tree_add_item(rr_tree, hf_dns_nsec3_iterations, tvb, cur_offset, 2, (0));
        cur_offset += 2;
        salt_len = tvb_get_guint8(tvb, cur_offset);
        proto_tree_add_item(rr_tree, hf_dns_nsec3_salt_length, tvb, cur_offset++, 1, (0));
        proto_tree_add_item(rr_tree, hf_dns_nsec3_salt_value, tvb, cur_offset, salt_len, (0));
        cur_offset += salt_len;
        hash_len = tvb_get_guint8(tvb, cur_offset);
        proto_tree_add_item(rr_tree, hf_dns_nsec3_hash_length, tvb, cur_offset++, 1, (0));
        proto_tree_add_item(rr_tree, hf_dns_nsec3_hash_value, tvb, cur_offset, hash_len, (0));
        cur_offset += hash_len;
        rr_len = data_len - (cur_offset - initial_offset);
        cur_offset += dissect_type_bitmap(rr_tree, tvb, cur_offset, rr_len);

    }
    break;

  case 51:
    {
    int salt_len;
      if (cinfo != ((void *)0))
        col_append_fstr(cinfo, COL_INFO, " %s", name);


        proto_tree_add_item(rr_tree, hf_dns_nsec3_algo, tvb, cur_offset, 1, (0));
        cur_offset ++;
        proto_tree_add_item(rr_tree, hf_dns_nsec3_flags, tvb, cur_offset, 1, (0));
        cur_offset ++;
        proto_tree_add_item(rr_tree, hf_dns_nsec3_iterations, tvb, cur_offset, 2, (0));
        cur_offset += 2;
        salt_len = tvb_get_guint8(tvb, cur_offset);
        proto_tree_add_item(rr_tree, hf_dns_nsec3_salt_length, tvb, cur_offset, 1, (0));
        cur_offset ++;
        proto_tree_add_item(rr_tree, hf_dns_nsec3_salt_value, tvb, cur_offset, salt_len, (0));

    }
    break;

  case 30:
    {
      int rr_len = data_len;
      const guchar *next_domain_name;
      int next_domain_name_len;
      int rr_type;
      guint8 bits;
      int mask;
      int i;


      next_domain_name_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset,
   &next_domain_name);
      name_out = format_text(next_domain_name, strlen(next_domain_name));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", name_out);

 proto_item_append_text(trr, ", next domain name %s", name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset, next_domain_name_len,
   "Next domain name: %s", name_out);
 cur_offset += next_domain_name_len;
 rr_len -= next_domain_name_len;
 rr_type = 0;
 while (rr_len != 0) {
   bits = tvb_get_guint8(tvb, cur_offset);
   mask = 1<<7;
   for (i = 0; i < 8; i++) {
     if (bits & mask) {
       proto_tree_add_text(rr_tree, tvb, cur_offset, 1,
   "RR type in bit map: %s",
   dns_type_description(rr_type));
     }
     mask >>= 1;
     rr_type++;
   }
   cur_offset += 1;
   rr_len -= 1;
 }

    }
    break;

  case 36:
    {
      guint16 preference = 0;
      const guchar *kx_name;
      int kx_name_len;


      kx_name_len = get_dns_name(tvb, cur_offset + 2, 0, dns_data_offset, &kx_name);
      name_out = format_text(kx_name, strlen(kx_name));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %u %s", preference, name_out);

 proto_item_append_text(trr, ", preference %u, kx %s",
         preference, name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Preference: %u", preference);
 proto_tree_add_text(rr_tree, tvb, cur_offset + 2, kx_name_len, "Key exchange: %s",
   name_out);

    }
    break;

  case 37:
    {
      guint16 cert_type, cert_keytag;
      guint8 cert_keyalg;
      int rr_len = data_len;


 if (rr_len < 2)
   goto bad_rr;
 cert_type = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Type: %s",
  val_to_str(cert_type, cert_vals,
             "Unknown (0x%02X)"));
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 2)
   goto bad_rr;
 cert_keytag = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Key footprint: 0x%04x",
  cert_keytag);
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 1)
   goto bad_rr;
 cert_keyalg = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Algorithm: %s",
  val_to_str(cert_keyalg, algo_vals,
             "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len != 0)
   proto_tree_add_text(rr_tree, tvb, cur_offset, rr_len, "Public key");
      }

    break;

  case 41:

      proto_tree_add_text(rr_tree, tvb, cur_offset, data_len, "Data");
    break;

  case 43:
  case 32769:
    {
      guint16 keytag, digest_data_size;
      guint8 ds_algorithm, ds_digest;
      int rr_len = data_len;

      static const value_string tds_digests[] = {
 { (0), "Reserved digest" },
 { (1), "SHA-1" },
 { (2), "SHA-256" },
 { 0, ((void *)0) }
      };


 if (rr_len < 2)
   goto bad_rr;
 keytag = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Key id: %04u", keytag);
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 1)
   goto bad_rr;
 ds_algorithm = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Algorithm: %s", val_to_str(ds_algorithm, algo_vals,"Unknown (0x%02X)") );
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 1)
   goto bad_rr;
 ds_digest = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Digest type: %s", val_to_str(ds_digest, tds_digests, "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;

 if (ds_digest == (1)) {
   digest_data_size = 20;
   if (rr_len < digest_data_size)
     goto bad_rr;
   proto_tree_add_text(rr_tree, tvb, cur_offset, digest_data_size, "Public key");
 }

 if (ds_digest == (2)) {
   digest_data_size = 32;
   if (rr_len < digest_data_size)
     goto bad_rr;
   proto_tree_add_text(rr_tree, tvb, cur_offset, digest_data_size, "Public key");
 }

    }
    break;

  case 249:
    {
      const guchar *tkey_algname;
      int tkey_algname_len;
      guint16 tkey_mode, tkey_error, tkey_keylen, tkey_otherlen;
      int rr_len = data_len;
      nstime_t nstime;
      static const value_string tkey_modes[] = {
    { (1), "Server assigned" },
    { (2), "Diffie Hellman" },
    { (3), "GSSAPI" },
    { (4), "Resolver assigned" },
    { (5), "Delete" },
    { 0, ((void *)0) } };


 proto_tree *key_tree;
 proto_item *key_item;


 tkey_algname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &tkey_algname);
 proto_tree_add_text(rr_tree, tvb, cur_offset, tkey_algname_len,
  "Algorithm name: %s",
  format_text(tkey_algname, strlen(tkey_algname)));
 cur_offset += tkey_algname_len;
 rr_len -= tkey_algname_len;

 if (rr_len < 4)
   goto bad_rr;
 nstime.secs = tvb_get_ntohl(tvb, cur_offset);
 nstime.nsecs = 0;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Signature inception: %s",
  abs_time_to_str(&nstime, ABSOLUTE_TIME_LOCAL, (!(0))));
 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 4)
   goto bad_rr;
 nstime.secs = tvb_get_ntohl(tvb, cur_offset);
 nstime.nsecs = 0;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Signature expiration: %s",
  abs_time_to_str(&nstime, ABSOLUTE_TIME_LOCAL, (!(0))));
 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 2)
   goto bad_rr;
 tkey_mode = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Mode: %s",
  val_to_str(tkey_mode, tkey_modes,
             "Unknown (0x%04X)"));
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 2)
   goto bad_rr;
 tkey_error = tvb_get_ntohs(tvb, cur_offset);
        proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Error: %s",
  val_to_str(tkey_error, rcode_vals,
  val_to_str(tkey_error, tsigerror_vals, "Unknown error (%x)")));
 cur_offset += 2;
 rr_len -= 2;

 tkey_keylen = tvb_get_ntohs(tvb, cur_offset);
        proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Key Size: %u",
            tkey_keylen);
 cur_offset += 2;
 rr_len -= 2;

 if (tkey_keylen != 0) {
  key_item = proto_tree_add_text(
   rr_tree, tvb, cur_offset, tkey_keylen, "Key Data");

  key_tree = proto_item_add_subtree(key_item, ett_t_key);

  switch(tkey_mode) {
  case (3): {
   tvbuff_t *gssapi_tvb;
# 2285 "packet-dns.c"
   gssapi_tvb = tvb_new_subset(
    tvb, cur_offset, tkey_keylen, tkey_keylen);
   if(tvb_strneql(gssapi_tvb, 0, "NTLMSSP", 7) == 0)
    call_dissector(ntlmssp_handle, gssapi_tvb, pinfo, key_tree);
   else
    call_dissector(gssapi_handle, gssapi_tvb, pinfo,
    key_tree);

   break;
  }
  default:



   break;
  }

  cur_offset += tkey_keylen;
  rr_len -= tkey_keylen;
 }

 if (rr_len < 2)
   goto bad_rr;
 tkey_otherlen = tvb_get_ntohs(tvb, cur_offset);
        proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Other Size: %u",
            tkey_otherlen);
 cur_offset += 2;
 rr_len -= 2;

 if (tkey_otherlen != 0) {
   if (rr_len < tkey_otherlen)
     goto bad_rr;
   proto_tree_add_text(rr_tree, tvb, cur_offset, tkey_otherlen, "Other Data");
   cur_offset += tkey_otherlen;
   rr_len -= tkey_otherlen;
 }

    }
    break;

  case 250:
    {
      guint16 tsig_error, tsig_timehi, tsig_siglen, tsig_otherlen;
      guint32 tsig_timelo;
      const guchar *tsig_raw_algname;
      char *tsig_algname;
      int tsig_algname_len;
      nstime_t nstime;
      int rr_len = data_len;


 tsig_algname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &tsig_raw_algname);
 tsig_algname=format_text(tsig_raw_algname, strlen(tsig_raw_algname));
 proto_tree_add_string(rr_tree, hf_dns_tsig_algorithm_name, tvb, cur_offset, tsig_algname_len, tsig_algname);
 cur_offset += tsig_algname_len;
 rr_len -= tsig_algname_len;

 if (rr_len < 6)
   goto bad_rr;
 tsig_timehi = tvb_get_ntohs(tvb, cur_offset);
 tsig_timelo = tvb_get_ntohl(tvb, cur_offset + 2);
 nstime.secs = tsig_timelo;
 nstime.nsecs = 0;
 proto_tree_add_text(rr_tree, tvb, cur_offset, 6, "Time signed: %s%s",
  abs_time_to_str(&nstime, ABSOLUTE_TIME_LOCAL, (!(0))),
  tsig_timehi == 0 ? "" : "(high bits set)");
 cur_offset += 6;
 rr_len -= 6;

 if (rr_len < 2)
   goto bad_rr;

 proto_tree_add_item(rr_tree, hf_dns_tsig_fudge, tvb, cur_offset, 2, (0));
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 2)
   goto bad_rr;
 tsig_siglen = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_item(rr_tree, hf_dns_tsig_mac_size, tvb, cur_offset, 2, (0));
 cur_offset += 2;
 rr_len -= 2;

 if (tsig_siglen != 0) {
   proto_item *mac_item;
   proto_tree *mac_tree;
   tvbuff_t *sub_tvb;

   if (rr_len < tsig_siglen)
     goto bad_rr;

   mac_item = proto_tree_add_item(rr_tree, hf_dns_tsig_mac, tvb, cur_offset, tsig_siglen, (0));
   mac_tree = proto_item_add_subtree(mac_item, ett_dns_mac);

   sub_tvb=tvb_new_subset(tvb, cur_offset, tsig_siglen, tsig_siglen);

   if(!dissector_try_string(dns_tsig_dissector_table, tsig_algname, sub_tvb, pinfo, mac_tree)){
  proto_tree_add_text(mac_tree, sub_tvb, 0, tvb_length(sub_tvb), "No dissector for algorithm:%s", tsig_algname);
   }

   cur_offset += tsig_siglen;
   rr_len -= tsig_siglen;
 }

 if (rr_len < 2)
   goto bad_rr;
 proto_tree_add_item(rr_tree, hf_dns_tsig_original_id, tvb, cur_offset, 2, (0));
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 2)
   goto bad_rr;
 tsig_error = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_uint_format(rr_tree, hf_dns_tsig_error, tvb, cur_offset, 2, tsig_error, "Error: %s (%d)",
  val_to_str(tsig_error, rcode_vals,val_to_str(tsig_error, tsigerror_vals, "Unknown error")),
  tsig_error);
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 2)
   goto bad_rr;
 tsig_otherlen = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_item(rr_tree, hf_dns_tsig_other_len, tvb, cur_offset, 2, (0));
 cur_offset += 2;
 rr_len -= 2;

 if (tsig_otherlen != 0) {
   if (rr_len < tsig_otherlen)
     goto bad_rr;
   proto_tree_add_item(rr_tree, hf_dns_tsig_other_data, tvb, cur_offset, tsig_otherlen, (0));
   cur_offset += tsig_otherlen;
   rr_len -= tsig_otherlen;
 }

    }
    break;

  case 65281:
    {
      int rr_len = data_len;
      guint32 local_flag;
      guint32 lookup_timeout;
      guint32 cache_timeout;
      guint32 nservers;


 if (rr_len < 4)
   goto bad_rr;
 local_flag = tvb_get_ntohl(tvb, cur_offset);

   proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Local flag: %s",
         local_flag ? "true" : "false");

 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 4)
   goto bad_rr;
 lookup_timeout = tvb_get_ntohl(tvb, cur_offset);

   proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Lookup timeout: %u seconds",
         lookup_timeout);

 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 4)
   goto bad_rr;
 cache_timeout = tvb_get_ntohl(tvb, cur_offset);

   proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Cache timeout: %u seconds",
         cache_timeout);

 cur_offset += 4;
 rr_len -= 4;

 if (rr_len < 4)
   goto bad_rr;
 nservers = tvb_get_ntohl(tvb, cur_offset);

   proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Number of WINS servers: %u",
         nservers);

 cur_offset += 4;
 rr_len -= 4;

 while (rr_len != 0 && nservers != 0) {
   if (rr_len < 4)
     goto bad_rr;

     proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "WINS server address: %s",
       ip_to_str(tvb_get_ptr(tvb, cur_offset, 4)));

   cur_offset += 4;
   rr_len -= 4;
   nservers--;
 }

    }
    break;

  case 65282:
    {
      int rr_len = data_len;
      guint32 local_flag;
      guint32 lookup_timeout;
      guint32 cache_timeout;
      const guchar *dname;
      int dname_len;

      if (rr_len < 4)
 goto bad_rr;
      local_flag = tvb_get_ntohl(tvb, cur_offset);

 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Local flag: %s",
         local_flag ? "true" : "false");

      cur_offset += 4;
      rr_len -= 4;

      if (rr_len < 4)
 goto bad_rr;
      lookup_timeout = tvb_get_ntohl(tvb, cur_offset);

 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Lookup timeout: %u seconds",
         lookup_timeout);

      cur_offset += 4;
      rr_len -= 4;

      if (rr_len < 4)
 goto bad_rr;
      cache_timeout = tvb_get_ntohl(tvb, cur_offset);

 proto_tree_add_text(rr_tree, tvb, cur_offset, 4, "Cache timeout: %u seconds",
         cache_timeout);

      cur_offset += 4;
      rr_len -= 4;


      dname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &dname);
      name_out = format_text(dname, strlen(dname));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %s", name_out);
 proto_item_append_text(trr, ", name result domain %s", name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset, dname_len, "Name result domain: %s",
   name_out);
    }
    break;

  case 33:
    {
      guint16 priority = 0;
      guint16 weight = 0;
      guint16 port = 0;
      const guchar *target;
      int target_len;

      priority = tvb_get_ntohs(tvb, cur_offset);
      weight = tvb_get_ntohs(tvb, cur_offset+2);
      port = tvb_get_ntohs(tvb, cur_offset+4);


      target_len = get_dns_name(tvb, cur_offset + 6, 0, dns_data_offset, &target);
      name_out = format_text(target, strlen(target));
      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %u %u %u %s", priority, weight, port, name_out);

 proto_item_append_text(trr,
         ", priority %u, weight %u, port %u, target %s",
         priority, weight, port, name_out);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Priority: %u", priority);
 proto_tree_add_text(rr_tree, tvb, cur_offset + 2, 2, "Weight: %u", weight);
 proto_tree_add_text(rr_tree, tvb, cur_offset + 4, 2, "Port: %u", port);
 proto_tree_add_text(rr_tree, tvb, cur_offset + 6, target_len, "Target: %s",
   name_out);

    }
    break;

    case 35:
    {
      int offset = cur_offset;
      guint16 order;
      guint16 preference;
      gchar *flags;
      guint8 flags_len;
      guchar *service;
      guint8 service_len;
      guchar *regex;
      guint8 regex_len;
      const guchar *replacement;
      int replacement_len;

      order = tvb_get_ntohs(tvb, offset);
      offset += 2;
      preference = tvb_get_ntohs(tvb, offset);
      offset += 2;
      flags_len = tvb_get_guint8(tvb, offset);
      offset++;
      flags = tvb_get_ephemeral_string(tvb, offset, flags_len);
      offset += flags_len;
      service_len = tvb_get_guint8(tvb, offset);
      offset++;
      service = tvb_get_ephemeral_string(tvb, offset, service_len);
      offset += service_len;
      regex_len = tvb_get_guint8(tvb, offset);
      offset++;
      regex = tvb_get_ephemeral_string(tvb, offset, regex_len);
      offset += regex_len;
      replacement_len = get_dns_name(tvb, offset, 0, dns_data_offset, &replacement);
      offset++;
      name_out = format_text(replacement, strlen(replacement));

      if (cinfo != ((void *)0))
 col_append_fstr(cinfo, COL_INFO, " %u %u %s", order, preference, flags);


 proto_item_append_text(trr, ", order %u, preference %u, flags %s",
  order, preference, flags);
 offset = cur_offset;
 proto_tree_add_text(rr_tree, tvb, offset, 2, "Order: %u", order);
 offset += 2;
 proto_tree_add_text(rr_tree, tvb, offset, 2, "Preference: %u", preference);
 offset += 2;
 proto_tree_add_text(rr_tree, tvb, offset, 1, "Flags length: %u", flags_len);
 offset++;
 proto_tree_add_text(rr_tree, tvb, offset, flags_len, "Flags: \"%s\"", flags);
 offset += flags_len;
 proto_tree_add_text(rr_tree, tvb, offset, 1, "Service length: %u", service_len);
 offset++;
 proto_tree_add_text(rr_tree, tvb, offset, service_len, "Service: \"%s\"", service);
 offset += service_len;
 proto_tree_add_text(rr_tree, tvb, offset, 1, "Regex length: %u", regex_len);
 offset++;
 proto_tree_add_text(rr_tree, tvb, offset, regex_len, "Regex: \"%s\"", regex);
 offset += regex_len;
 proto_tree_add_text(rr_tree, tvb, offset, 1, "Replacement length: %u", replacement_len);
 offset++;
 proto_tree_add_text(rr_tree, tvb, offset, replacement_len, "Replacement: %s", name_out);

    }
    break;

    case 44:
    {
      guint8 sshfp_algorithm, sshfp_type;
      int rr_len = data_len;

      static const value_string sshfp_algo[] = {
 { (0), "Reserved" },
 { (1), "RSA" },
 { (2), "DSA" },
 { 0, ((void *)0) }
      };

      static const value_string sshfp_fingertype[] = {
 { (0), "Reserved" },
 { (1), "SHA1" },
 { 0, ((void *)0) }
      };


 if (rr_len < 1)
   goto bad_rr;
 sshfp_algorithm = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Algorithm: %s", val_to_str(sshfp_algorithm, sshfp_algo, "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 1)
   goto bad_rr;
 sshfp_type = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "Fingerprint type: %s", val_to_str(sshfp_type, sshfp_fingertype, "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 1)
   goto bad_rr;
 if (rr_len != 0)
 proto_tree_add_item(rr_tree, hf_dns_sshfp_fingerprint, tvb, cur_offset, rr_len, (0));

    }
    break;

    case 55:
    {
      guint8 hit_len, algo;
      guint16 pk_len;
      int rr_len = data_len;
      int rendezvous_len;
      const guchar *rend_server_dns_name;

      static const value_string hip_algo_vals[] = {
        { (1), "DSA" },
        { (2), "RSA" },
        { (0), "Reserved" },
        { 0, ((void *)0) }
      };

      if (cinfo != ((void *)0))
         col_append_fstr(cinfo, COL_INFO, " %s", name);


 if (rr_len < 1)
           goto bad_rr;
 hit_len = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "HIT length: %u", hit_len);
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 1)
           goto bad_rr;
 algo = tvb_get_guint8(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 1, "PK algorithm: %s", val_to_str(algo, hip_algo_vals, "Unknown (0x%02X)"));
 cur_offset += 1;
 rr_len -= 1;

 if (rr_len < 1)
           goto bad_rr;
 pk_len = tvb_get_ntohs(tvb, cur_offset);
 proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "PK length: %u", pk_len);
 cur_offset += 2;
 rr_len -= 2;

 if (rr_len < 1)
           goto bad_rr;
 proto_tree_add_item(rr_tree, hf_dns_hip_hit, tvb, cur_offset, hit_len, (0));
 cur_offset += hit_len;
 rr_len -= hit_len;

 if (rr_len < 1)
           goto bad_rr;
 proto_tree_add_item(rr_tree, hf_dns_hip_pk, tvb, cur_offset, pk_len, (0));
 cur_offset += pk_len;
 rr_len -= pk_len;

 if (rr_len < 1)
    goto bad_rr;

 while (rr_len > 1) {
    rendezvous_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &rend_server_dns_name);
    proto_tree_add_text(rr_tree, tvb, cur_offset, rendezvous_len, "Rendezvous Server: %s",
    format_text(rend_server_dns_name, strlen(rend_server_dns_name)));
    cur_offset += rendezvous_len;
    rr_len -= rendezvous_len;
 }

    }
    break;

    case 49:
    {
      if (cinfo != ((void *)0))
         col_append_fstr(cinfo, COL_INFO, " %s", name);


 if (data_len < 1)
           goto bad_rr;
 proto_tree_add_item(rr_tree, hf_dns_dhcid_rdata, tvb, cur_offset, data_len, (0));


    }
    break;

    case 42:
      {
        int rr_len = data_len;
        guint16 afamily;
        guint8 afdpart_len;
        guint8 *addr_copy;

        static const value_string apl_afamily_vals[] = {
        { (1), "IPv4" },
        { (2), "IPv6" },
        { 0, ((void *)0) }};

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);

           while (rr_len > 1) {

            if (rr_len < 1)
                goto bad_rr;
            afamily = tvb_get_ntohs(tvb, cur_offset);
            proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Address Family: %s", val_to_str(afamily, apl_afamily_vals, "Unknown (0x%02X)"));
            cur_offset += 2;
            rr_len -= 2;

            if (rr_len < 1)
                goto bad_rr;
            proto_tree_add_item(rr_tree, hf_dns_apl_coded_prefix, tvb, cur_offset, 1, (0));
            cur_offset += 1;
            rr_len -= 1;

            if (rr_len < 1)
                goto bad_rr;
            afdpart_len = tvb_get_guint8(tvb, cur_offset) & (0x7F<<0);
            proto_tree_add_item(rr_tree, hf_dns_apl_negation, tvb, cur_offset, 1, (0));
            proto_tree_add_item(rr_tree, hf_dns_apl_afdlength, tvb, cur_offset, 1, (0));
            cur_offset += 1;
            rr_len -= 1;

            if (rr_len < 1)
                goto bad_rr;
             if (afamily == 1 && afdpart_len <= 4) {
                addr_copy = se_alloc0(4);
      } else if (afamily == 2 && afdpart_len <= 16) {
                addr_copy = se_alloc0(16);
             } else {
                goto bad_rr;
             }
            tvb_memcpy(tvb, (guint8 *)addr_copy, cur_offset, afdpart_len);
            proto_tree_add_text(rr_tree, tvb, cur_offset, afdpart_len, "%s address: %s", val_to_str(afamily, apl_afamily_vals, "Unknown"),
                                                    (afamily == 0x02) ? ip6_to_str((const struct e_in6_addr *)addr_copy)
                                                    : ip_to_str(addr_copy) );
            cur_offset += afdpart_len;
            rr_len -= afdpart_len;
           }
      }
    break;

    case 27:
      {
        guint8 long_len, lat_len, alt_len;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        if (data_len < 1)
           goto bad_rr;
        long_len = tvb_get_guint8(tvb, cur_offset);
        proto_tree_add_text(rr_tree, tvb, cur_offset + 1, long_len, "Longitude: %.*s", long_len, tvb_get_ptr(tvb, cur_offset +1 , long_len));
        cur_offset += 1 + long_len;

        lat_len = tvb_get_guint8(tvb, cur_offset);
        proto_tree_add_text(rr_tree, tvb, cur_offset + 1, lat_len, "Latitude: %.*s", lat_len, tvb_get_ptr(tvb, cur_offset + 1, lat_len));
        cur_offset += 1 + lat_len;

        alt_len = tvb_get_guint8(tvb, cur_offset);
        proto_tree_add_text(rr_tree, tvb, cur_offset + 1, alt_len, "Altitude: %.*s", alt_len, tvb_get_ptr(tvb, cur_offset + 1, alt_len));
      }
    break;

    case 17:
      {
        int mbox_dname_len, txt_dname_len;
        const guchar *mbox_dname, *txt_dname;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);

        if (data_len < 1)
           goto bad_rr;
        mbox_dname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &mbox_dname);
        proto_tree_add_text(rr_tree, tvb, cur_offset, mbox_dname_len, "Mailbox: %s", format_text(mbox_dname, strlen(mbox_dname)));
        cur_offset += mbox_dname_len;
        txt_dname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &txt_dname);
        proto_tree_add_text(rr_tree, tvb, cur_offset, txt_dname_len, "TXT RR: %s", format_text(txt_dname, strlen(txt_dname)));
      }
    break;

    case 18:
    case 21:
      {
        guint16 subtype = 0;
        const guchar *host_name;
        int host_name_len;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        subtype = tvb_get_ntohs(tvb, cur_offset);
        host_name_len = get_dns_name(tvb, cur_offset + 2, 0, dns_data_offset, &host_name);

        if (data_len < 1)
           goto bad_rr;
        proto_tree_add_text(rr_tree, tvb, cur_offset, 2, (type == 18) ? "Subtype: %u" : "Preference: %u", subtype);
        proto_tree_add_text(rr_tree, tvb, cur_offset + 2, host_name_len, (type == 18) ? "Hostname: %s" : "Intermediate-Host: %s",format_text(host_name, strlen(host_name)));


      }
    break;

    case 19:
      {
        guint8 x25_len;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        if (data_len < 1)
           goto bad_rr;
        x25_len = tvb_get_guint8(tvb, cur_offset);
        proto_tree_add_text(rr_tree, tvb, cur_offset, x25_len + 1, "PSDN-Address: %.*s", x25_len, tvb_get_ptr(tvb, cur_offset +1, x25_len));
      }
    break;

    case 20:
      {
        guint8 isdn_address_len, isdn_sa_len;
        int rr_len = data_len;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        if (rr_len < 1)
           goto bad_rr;
        isdn_address_len = tvb_get_guint8(tvb, cur_offset);
        proto_tree_add_text(rr_tree, tvb, cur_offset, isdn_address_len + 1, "ISDN Address: %.*s", isdn_address_len, tvb_get_ptr(tvb, cur_offset +1, isdn_address_len));
        cur_offset += 1 + isdn_address_len;
        rr_len -= 1 + isdn_address_len;

        if (rr_len > 1) {
           isdn_sa_len = tvb_get_guint8(tvb, cur_offset);
           proto_tree_add_text(rr_tree, tvb, cur_offset, isdn_sa_len + 1, "Subaddress: %.*s", isdn_sa_len, tvb_get_ptr(tvb, cur_offset +1, isdn_sa_len));
        }
      }
    break;

    case 26:
      {
        int px_map822_len, px_mapx400_len;
        const guchar *px_map822_dnsname, *px_mapx400_dnsname;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        if (data_len < 1)
           goto bad_rr;
        proto_tree_add_text(rr_tree, tvb, cur_offset, 2, "Preference: %u", tvb_get_ntohs(tvb, cur_offset));
        cur_offset += 2;
        px_map822_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &px_map822_dnsname);
        proto_tree_add_text(rr_tree, tvb, cur_offset, px_map822_len, "MAP822: %s", format_text(px_map822_dnsname, strlen(px_map822_dnsname)));
        cur_offset += px_map822_len;
        px_mapx400_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &px_mapx400_dnsname);
        proto_tree_add_text(rr_tree, tvb, cur_offset, px_mapx400_len, "MAPX400: %s", format_text(px_mapx400_dnsname, strlen(px_mapx400_dnsname)) );
        cur_offset += px_mapx400_len;
      }
    break;

    case 22:
      {
        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        if (data_len < 1)
           goto bad_rr;
        proto_tree_add_item(rr_tree, hf_dns_nsap_rdata, tvb, cur_offset, data_len, (0));
      }
    break;

    case 23:
      {
        int nsap_ptr_owner_len;
        const guchar *nsap_ptr_owner;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        if (data_len < 1)
           goto bad_rr;
        nsap_ptr_owner_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &nsap_ptr_owner);
        proto_tree_add_text(rr_tree, tvb, cur_offset, nsap_ptr_owner_len, "Owner: %s", format_text(nsap_ptr_owner, strlen(nsap_ptr_owner)) );
      }
    break;

    case 7:
    case 4:
    case 3:
    case 8:
    case 9:
      {
        int hostname_len;
        const guchar *hostname_str;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        if (data_len < 1)
           goto bad_rr;
        hostname_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &hostname_str);
        proto_tree_add_text(rr_tree, tvb, cur_offset, hostname_len, "Host: %s", format_text(hostname_str, strlen(hostname_str)));
      }
    break;

    case 14:
      {
        int rmailbx_len, emailbx_len;
        const guchar *rmailbx_str, *emailbx_str;

        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        if (data_len < 1)
           goto bad_rr;
        rmailbx_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &rmailbx_str);
        proto_tree_add_text(rr_tree, tvb, cur_offset, rmailbx_len, "Responsible Mailbox: %s", format_text(rmailbx_str, strlen(rmailbx_str)));
        cur_offset += rmailbx_len;
        emailbx_len = get_dns_name(tvb, cur_offset, 0, dns_data_offset, &emailbx_str);
        proto_tree_add_text(rr_tree, tvb, cur_offset, emailbx_len, "Error Mailbox: %s", format_text(emailbx_str, strlen(emailbx_str)));
      }
    break;

    case 10:
      {
        if (cinfo != ((void *)0))
           col_append_fstr(cinfo, COL_INFO, " %s", name);
        proto_tree_add_text(rr_tree, tvb, cur_offset, data_len, "Data");
      }
    break;



  default:

      proto_tree_add_text(rr_tree, tvb, cur_offset, data_len, "Data");
    break;
  }

  data_offset += data_len;

  return data_offset - data_start;

bad_rr:

    proto_item_append_text(trr, ", bad RR length %d, too short",
   data_len);


  data_offset += data_len;

  return data_offset - data_start;
}

static int
dissect_query_records(tvbuff_t *tvb, int cur_off, int dns_data_offset,
    int count, column_info *cinfo, proto_tree *dns_tree, gboolean isupdate,
    gboolean is_mdns)
{
  int start_off, add_off;
  proto_tree *qatree = ((void *)0);
  proto_item *ti = ((void *)0);

  start_off = cur_off;
  if (dns_tree) {
    const char *s = (isupdate ? "Zone" : "Queries");
    ti = proto_tree_add_text(dns_tree, tvb, start_off, -1, "%s", s);
    qatree = proto_item_add_subtree(ti, ett_dns_qry);
  }
  while (count-- > 0) {
    add_off = dissect_dns_query(tvb, cur_off, dns_data_offset, cinfo, qatree,
                                is_mdns);
    cur_off += add_off;
  }
  if (ti)
    proto_item_set_len(ti, cur_off - start_off);

  return cur_off - start_off;
}

static int
dissect_answer_records(tvbuff_t *tvb, int cur_off, int dns_data_offset,
    int count, column_info *cinfo, proto_tree *dns_tree, const char *name,
    packet_info *pinfo, gboolean is_mdns)
{
  int start_off, add_off;
  proto_tree *qatree = ((void *)0);
  proto_item *ti = ((void *)0);

  start_off = cur_off;
  if (dns_tree) {
    ti = proto_tree_add_text(dns_tree, tvb, start_off, -1, "%s", name);
    qatree = proto_item_add_subtree(ti, ett_dns_ans);
  }
  while (count-- > 0) {
    add_off = dissect_dns_answer(
     tvb, cur_off, dns_data_offset, cinfo, qatree, pinfo, is_mdns);
    cur_off += add_off;
  }
  if (ti)
    proto_item_set_len(ti, cur_off - start_off);

  return cur_off - start_off;
}

static void
dissect_dns_common(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree,
    gboolean is_tcp, gboolean is_mdns, gboolean is_llmnr)
{
  int offset = is_tcp ? 2 : 0;
  int dns_data_offset;
  column_info *cinfo;
  proto_tree *dns_tree = ((void *)0), *field_tree;
  proto_item *ti, *tf;
  guint16 id, flags, opcode, rcode, quest, ans, auth, add;
  char *buf;
  int bufpos;
  int cur_off;
  gboolean isupdate;
  conversation_t *conversation;
  dns_conv_info_t *dns_info;
  dns_transaction_t *dns_trans;

  dns_data_offset = offset;

  col_clear(pinfo->cinfo, COL_INFO);


  buf=ep_alloc((128+1));
  buf[0]=0;
  bufpos=0;


  id = tvb_get_ntohs(tvb, offset + 0);
  flags = tvb_get_ntohs(tvb, offset + 2);
  opcode = (guint16) ((flags & (0xF<<11)) >> 11);
  rcode = (guint16) (flags & (0xF<<0));

  if (check_col(pinfo->cinfo, COL_INFO)) {
    bufpos=0;
    bufpos+=((((128+1)-bufpos) < (g_snprintf(buf+bufpos, (128+1)-bufpos, "%s%s", val_to_str(opcode, opcode_vals, "Unknown operation (%u)"), (flags&(1<<15))?" response":""))) ? ((128+1)-bufpos) : (g_snprintf(buf+bufpos, (128+1)-bufpos, "%s%s", val_to_str(opcode, opcode_vals, "Unknown operation (%u)"), (flags&(1<<15))?" response":"")))


                                     ;

    if (flags & (1<<15)) {
      if ((flags & (0xF<<0)) != 0) {
 bufpos+=((((128+1)-bufpos) < (g_snprintf(buf+bufpos, (128+1)-bufpos, ", %s", val_to_str(flags & (0xF<<0), rcode_vals, "Unknown error (%u)")))) ? ((128+1)-bufpos) : (g_snprintf(buf+bufpos, (128+1)-bufpos, ", %s", val_to_str(flags & (0xF<<0), rcode_vals, "Unknown error (%u)"))))

                                                                  ;
      }
    }
    col_add_str(pinfo->cinfo, COL_INFO, buf);
    cinfo = pinfo->cinfo;
  } else {




    cinfo = ((void *)0);
  }
  if (opcode == 5)
    isupdate = (!(0));
  else
    isupdate = (0);

  if (tree) {
    if (is_llmnr) {
      ti = proto_tree_add_protocol_format(tree, proto_dns, tvb, 0, -1,
        "Link-local Multicast Name Resolution (%s)", (flags & (1<<15)) ? "response" : "query");
    } else {
      ti = proto_tree_add_protocol_format(tree, proto_dns, tvb, 0, -1,
        "Domain Name System (%s)", (flags & (1<<15)) ? "response" : "query");
    }

    dns_tree = proto_item_add_subtree(ti, ett_dns);
  }




  conversation = find_or_create_conversation(pinfo);




  dns_info = conversation_get_proto_data(conversation, proto_dns);
  if (!dns_info) {



    dns_info = se_alloc(sizeof(dns_conv_info_t));
    dns_info->pdus=se_tree_create_non_persistent(1, "dns_pdus");
    conversation_add_proto_data(conversation, proto_dns, dns_info);
  }
  if(!pinfo->fd->flags.visited){
    if(!(flags&(1<<15))){

      dns_trans=se_alloc(sizeof(dns_transaction_t));
      dns_trans->req_frame=pinfo->fd->num;
      dns_trans->rep_frame=0;
      dns_trans->req_time=pinfo->fd->abs_ts;
      emem_tree_insert32(dns_info->pdus, id, (void *)dns_trans);
    } else {
      dns_trans=emem_tree_lookup32(dns_info->pdus, id);
      if(dns_trans){
        dns_trans->rep_frame=pinfo->fd->num;
      }
    }
  } else {
    dns_trans=emem_tree_lookup32(dns_info->pdus, id);
  }
  if(!dns_trans){

    dns_trans=ep_alloc(sizeof(dns_transaction_t));
    dns_trans->req_frame=0;
    dns_trans->rep_frame=0;
    dns_trans->req_time=pinfo->fd->abs_ts;
  }


  if(!(flags&(1<<15))){

    if(dns_trans->rep_frame){
      proto_item *it;

      it=proto_tree_add_uint(dns_tree, hf_dns_response_in, tvb, 0, 0, dns_trans->rep_frame);
      do { if (it) do { if (((it)->finfo)) (((it)->finfo))->flags = (((it)->finfo))->flags | (0x00000002); } while(0); } while(0);
    }
  } else {

    if(dns_trans->req_frame){
      proto_item *it;
      nstime_t ns;

      it=proto_tree_add_uint(dns_tree, hf_dns_response_to, tvb, 0, 0, dns_trans->req_frame);
      do { if (it) do { if (((it)->finfo)) (((it)->finfo))->flags = (((it)->finfo))->flags | (0x00000002); } while(0); } while(0);

      nstime_delta(&ns, &pinfo->fd->abs_ts, &dns_trans->req_time);
      it=proto_tree_add_time(dns_tree, hf_dns_time, tvb, 0, 0, &ns);
      do { if (it) do { if (((it)->finfo)) (((it)->finfo))->flags = (((it)->finfo))->flags | (0x00000002); } while(0); } while(0);
    }
  }

  if (is_tcp) {

    proto_tree_add_item(dns_tree, hf_dns_length, tvb, offset - 2, 2, (0));
  }

  proto_tree_add_uint(dns_tree, hf_dns_transaction_id, tvb,
 offset + 0, 2, id);

  bufpos=0;
  bufpos+=((((128+1)-bufpos) < (g_snprintf(buf+bufpos, (128+1)-bufpos, "%s", val_to_str(opcode, opcode_vals, "Unknown operation")))) ? ((128+1)-bufpos) : (g_snprintf(buf+bufpos, (128+1)-bufpos, "%s", val_to_str(opcode, opcode_vals, "Unknown operation"))))

                                                        ;
  if (flags & (1<<15)) {
    bufpos+=((((128+1)-bufpos) < (g_snprintf(buf+bufpos, (128+1)-bufpos, " response, %s", val_to_str(flags & (0xF<<0), rcode_vals, "Unknown error")))) ? ((128+1)-bufpos) : (g_snprintf(buf+bufpos, (128+1)-bufpos, " response, %s", val_to_str(flags & (0xF<<0), rcode_vals, "Unknown error"))))

                                                            ;
  }
  tf = proto_tree_add_uint_format(dns_tree, hf_dns_flags, tvb,
  offset + 2, 2,
  flags,
  "Flags: 0x%04x (%s)",
  flags, buf);
  field_tree = proto_item_add_subtree(tf, ett_dns_flags);
  proto_tree_add_item(field_tree, hf_dns_flags_response,
  tvb, offset + 2, 2, (0));
  proto_tree_add_item(field_tree, hf_dns_flags_opcode,
  tvb, offset + 2, 2, (0));
  if (is_llmnr) {
    if (flags & (1<<15)) {
      proto_tree_add_item(field_tree, hf_dns_flags_conflict_response,
  tvb, offset + 2, 2, (0));
    } else {
      proto_tree_add_item(field_tree, hf_dns_flags_conflict_query,
  tvb, offset + 2, 2, (0));
    }
    proto_tree_add_item(field_tree, hf_dns_flags_truncated,
  tvb, offset + 2, 2, (0));
    proto_tree_add_item(field_tree, hf_dns_flags_tentative,
  tvb, offset + 2, 2, (0));
    if (flags & (1<<15)) {
      proto_tree_add_item(field_tree, hf_dns_flags_rcode,
  tvb, offset + 2, 2, (0));
    }
  } else {
    if (flags & (1<<15)) {
      proto_tree_add_item(field_tree, hf_dns_flags_authoritative,
   tvb, offset + 2, 2, (0));
    }
    proto_tree_add_item(field_tree, hf_dns_flags_truncated,
  tvb, offset + 2, 2, (0));
    proto_tree_add_item(field_tree, hf_dns_flags_recdesired,
  tvb, offset + 2, 2, (0));
    if (flags & (1<<15)) {
      proto_tree_add_item(field_tree, hf_dns_flags_recavail,
  tvb, offset + 2, 2, (0));
    }
    proto_tree_add_item(field_tree, hf_dns_flags_z,
  tvb, offset + 2, 2, (0));
    if (flags & (1<<15)) {
      proto_tree_add_item(field_tree, hf_dns_flags_authenticated,
  tvb, offset + 2, 2, (0));
    }
    proto_tree_add_item(field_tree, hf_dns_flags_checkdisable,
                tvb, offset + 2, 2, (0));
    if (flags & (1<<15)) {
      proto_tree_add_item(field_tree, hf_dns_flags_rcode,
  tvb, offset + 2, 2, (0));
    }
  }

  quest = tvb_get_ntohs(tvb, offset + 4);
  if (tree) {
    if (isupdate) {
      proto_tree_add_uint(dns_tree, hf_dns_count_zones, tvb,
     offset + 4, 2, quest);
    } else {
      proto_tree_add_uint(dns_tree, hf_dns_count_questions, tvb,
     offset + 4, 2, quest);
    }
  }
  ans = tvb_get_ntohs(tvb, offset + 6);
  if (tree) {
    if (isupdate) {
      proto_tree_add_uint(dns_tree, hf_dns_count_prerequisites, tvb,
     offset + 6, 2, ans);
    } else {
      proto_tree_add_uint(dns_tree, hf_dns_count_answers, tvb,
     offset + 6, 2, ans);
    }
  }
  auth = tvb_get_ntohs(tvb, offset + 8);
  if (tree) {
    if (isupdate) {
      proto_tree_add_uint(dns_tree, hf_dns_count_updates, tvb,
     offset + 8, 2, auth);
    } else {
      proto_tree_add_uint(dns_tree, hf_dns_count_auth_rr, tvb,
     offset + 8, 2, auth);
    }
  }
  add = tvb_get_ntohs(tvb, offset + 10);
  if (tree) {
    proto_tree_add_uint(dns_tree, hf_dns_count_add_rr, tvb,
   offset + 10, 2, add);

  }
  cur_off = offset + 12;

  if (quest > 0) {


    cur_off += dissect_query_records(tvb, cur_off, dns_data_offset, quest,
         (!(flags & (1<<15)) ? cinfo : ((void *)0)),
         dns_tree, isupdate, is_mdns);
  }

  if (ans > 0) {


    cur_off += dissect_answer_records(tvb, cur_off, dns_data_offset, ans,
          ((flags & (1<<15)) ? cinfo : ((void *)0)),
          dns_tree, (isupdate ?
       "Prerequisites" : "Answers"),
          pinfo, is_mdns);
  }



  if (auth > 0) {
    cur_off += dissect_answer_records(tvb, cur_off, dns_data_offset, auth,
          ((void *)0), dns_tree,
          (isupdate ? "Updates" :
           "Authoritative nameservers"),
          pinfo, is_mdns);
  }

  if (add > 0) {
    cur_off += dissect_answer_records(tvb, cur_off, dns_data_offset, add,
          ((void *)0), dns_tree, "Additional records",
          pinfo, is_mdns);
  }
}

static void
dissect_dns_udp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
  col_set_str(pinfo->cinfo, COL_PROTOCOL, "DNS");

  dissect_dns_common(tvb, pinfo, tree, (0), (0), (0));
}

static void
dissect_dns_sctp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
  col_set_str(pinfo->cinfo, COL_PROTOCOL, "DNS");

  dissect_dns_common(tvb, pinfo, tree, (0), (0), (0));
}

static void
dissect_mdns_udp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
  col_set_str(pinfo->cinfo, COL_PROTOCOL, "MDNS");

  dissect_dns_common(tvb, pinfo, tree, (0), (!(0)), (0));
}

static void
dissect_llmnr_udp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
  col_set_str(pinfo->cinfo, COL_PROTOCOL, "LLMNR");

  dissect_dns_common(tvb, pinfo, tree, (0), (0), (!(0)));
}

static guint
get_dns_pdu_len(packet_info *pinfo __attribute__((unused)), tvbuff_t *tvb, int offset)
{
  guint16 plen;




  plen = tvb_get_ntohs(tvb, offset);




  return plen + 2;
}

static void
dissect_dns_tcp_pdu(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
  col_set_str(pinfo->cinfo, COL_PROTOCOL, "DNS");

  dissect_dns_common(tvb, pinfo, tree, (!(0)), (0), (0));
}

static void
dissect_dns_tcp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
  tcp_dissect_pdus(tvb, pinfo, tree, dns_desegment, 2, get_dns_pdu_len,
 dissect_dns_tcp_pdu);
}

void
proto_register_dns(void)
{
  static hf_register_info hf[] = {
    { &hf_dns_length,
      { "Length", "dns.length",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Length of DNS-over-TCP request or response", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags,
      { "Flags", "dns.flags",
 FT_UINT16, BASE_HEX, ((void *)0), 0x0,
 ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_response,
      { "Response", "dns.flags.response",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_response), (1<<15),
 "Is the message a response?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_opcode,
      { "Opcode", "dns.flags.opcode",
 FT_UINT16, BASE_DEC, (const struct _value_string*)(opcode_vals), (0xF<<11),
 "Operation code", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_authoritative,
      { "Authoritative", "dns.flags.authoritative",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_authoritative), (1<<10),
 "Is the server is an authority for the domain?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_conflict_query,
      { "Conflict", "dns.flags.conflict",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_conflict_query), (1<<10),
 "Did we receive multiple responses to a query?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_conflict_response,
      { "Conflict", "dns.flags.conflict",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_conflict_response), (1<<10),
 "Is the name considered unique?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_truncated,
      { "Truncated", "dns.flags.truncated",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_truncated), (1<<9),
 "Is the message truncated?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_recdesired,
      { "Recursion desired", "dns.flags.recdesired",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_recdesired), (1<<8),
 "Do query recursively?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_tentative,
      { "Tentative", "dns.flags.tentative",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_tentative), (1<<8),
 "Is the responder authoritative for the name, but not yet verified the uniqueness?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_recavail,
      { "Recursion available", "dns.flags.recavail",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_recavail), (1<<7),
 "Can the server do recursive queries?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_z,
      { "Z", "dns.flags.z",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_z), (1<<6),
 "Z flag", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_authenticated,
      { "Answer authenticated", "dns.flags.authenticated",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_authenticated), (1<<5),
 "Was the reply data authenticated by the server?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_checkdisable,
      { "Non-authenticated data", "dns.flags.checkdisable",
 FT_BOOLEAN, 16, (const struct true_false_string*)(&tfs_flags_checkdisable), (1<<4),
 "Is non-authenticated data acceptable?", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_flags_rcode,
      { "Reply code", "dns.flags.rcode",
 FT_UINT16, BASE_DEC, (const struct _value_string*)(rcode_vals), (0xF<<0),
 ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_transaction_id,
      { "Transaction ID", "dns.id",
 FT_UINT16, BASE_HEX, ((void *)0), 0x0,
 "Identification of transaction", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_qry_type,
      { "Type", "dns.qry.type",
 FT_UINT16, BASE_HEX, (const struct _value_string*)(dns_types), 0x0,
 "Query Type", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_qry_class,
      { "Class", "dns.qry.class",
 FT_UINT16, BASE_HEX, (const struct _value_string*)(dns_classes), 0x0,
 "Query Class", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_qry_class_mdns,
      { "Class", "dns.qry.class",
 FT_UINT16, BASE_HEX, (const struct _value_string*)(dns_classes), 0x7FFF,
 "Query Class", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_qry_qu,
      { "\"QU\" question", "dns.qry.qu",
 FT_BOOLEAN, 16, ((void *)0), (1<<15),
 "QU flag", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_qry_name,
      { "Name", "dns.qry.name",
 FT_STRING, BASE_NONE, ((void *)0), 0x0,
 "Query Name", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_type,
      { "Type", "dns.resp.type",
 FT_UINT16, BASE_HEX, (const struct _value_string*)(dns_types), 0x0,
 "Response Type", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_class,
      { "Class", "dns.resp.class",
 FT_UINT16, BASE_HEX, (const struct _value_string*)(dns_classes), 0x0,
 "Response Class", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_class_mdns,
      { "Class", "dns.resp.class",
 FT_UINT16, BASE_HEX, (const struct _value_string*)(dns_classes), 0x7FFF,
 "Response Class", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_cache_flush,
      { "Cache flush", "dns.resp.cache_flush",
 FT_BOOLEAN, 16, ((void *)0), (1<<15),
 "Cache flush flag", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_srv_service,
      { "Service", "dns.srv.service",
 FT_STRING, BASE_NONE, ((void *)0), 0x0,
 "Desired service", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_srv_proto,
      { "Protocol", "dns.srv.proto",
 FT_STRING, BASE_NONE, ((void *)0), 0x0,
 "Desired protocol", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_srv_name,
      { "Name", "dns.srv.name",
 FT_STRING, BASE_NONE, ((void *)0), 0x0,
 "Domain this resource record refers to", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_name,
      { "Name", "dns.resp.name",
 FT_STRING, BASE_NONE, ((void *)0), 0x0,
 "Response Name", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_ttl,
      { "Time to live", "dns.resp.ttl",
 FT_UINT32, BASE_DEC, ((void *)0), 0x0,
 "Response TTL", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_len,
      { "Data length", "dns.resp.len",
 FT_UINT32, BASE_DEC, ((void *)0), 0x0,
 "Response Length", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_addr,
      { "Addr", "dns.resp.addr",
 FT_IPv4, BASE_NONE, ((void *)0), 0x0,
 "Response Address", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_primaryname,
      { "Primaryname", "dns.resp.primaryname",
 FT_STRING, BASE_NONE, ((void *)0), 0x0,
 "Response Primary Name", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_rr_ns,
      { "Name Server", "dns.resp.ns",
 FT_STRING, BASE_NONE, ((void *)0), 0x0,
 ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_count_questions,
      { "Questions", "dns.count.queries",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of queries in packet", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_count_zones,
      { "Zones", "dns.count.zones",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of zones in packet", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_count_answers,
      { "Answer RRs", "dns.count.answers",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of answers in packet", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_count_prerequisites,
      { "Prerequisites", "dns.count.prerequisites",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of prerequisites in packet", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_count_auth_rr,
      { "Authority RRs", "dns.count.auth_rr",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of authoritative records in packet", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_count_updates,
      { "Updates", "dns.count.updates",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of updates records in packet", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsec3_algo,
      { "Hash algorithm", "dns.nsec3.algo",
        FT_UINT8, BASE_DEC, (const struct _value_string*)(hash_algorithms), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsec3_flags,
      { "NSEC3 flags", "dns.nsec3.flags",
        FT_UINT8, BASE_DEC, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsec3_flag_optout,
      { "NSEC3 Opt-out flag", "dns.nsec3.flags.opt_out",
        FT_BOOLEAN, 8, (const struct true_false_string*)(&tfs_flags_nsec3_optout), 1,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsec3_iterations,
      { "NSEC3 iterations", "dns.nsec3.iterations",
        FT_UINT16, BASE_DEC, ((void *)0), 0,
        "Number of hashing iterations", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsec3_salt_length,
      { "Salt length", "dns.nsec3.salt_length",
        FT_UINT8, BASE_DEC, ((void *)0), 0,
        "Length of salt in bytes", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsec3_salt_value,
      { "Salt value", "dns.nsec3.salt_value",
        FT_BYTES, BASE_NONE, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsec3_hash_length,
      { "Hash length", "dns.nsec3.hash_length",
        FT_UINT8, BASE_DEC, ((void *)0), 0,
        "Length in bytes of next hashed owner", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsec3_hash_value,
      { "Next hashed owner", "dns.nsec3.hash_value",
        FT_BYTES, BASE_NONE, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_tsig_original_id,
      { "Original Id", "dns.tsig.original_id",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_tsig_error,
      { "Error", "dns.tsig.error",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Expanded RCODE for TSIG", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_tsig_fudge,
      { "Fudge", "dns.tsig.fudge",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of bytes for the MAC", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_tsig_mac_size,
      { "MAC Size", "dns.tsig.mac_size",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of bytes for the MAC", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_tsig_other_len,
      { "Other Len", "dns.tsig.other_len",
 FT_UINT16, BASE_DEC, ((void *)0), 0x0,
 "Number of bytes for Other Data", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_tsig_mac,
      { "MAC", "dns.tsig.mac",
 FT_NONE, BASE_NONE, ((void *)0), 0x0,
 ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_tsig_other_data,
      { "Other Data", "dns.tsig.other_data",
 FT_BYTES, BASE_NONE, ((void *)0), 0x0,
 ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_tsig_algorithm_name,
      { "Algorithm Name", "dns.tsig.algorithm_name",
 FT_STRING, BASE_NONE, ((void *)0), 0x0,
 "Name of algorithm used for the MAC", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_response_in,
      { "Response In", "dns.response_in",
        FT_FRAMENUM, BASE_NONE, ((void *)0), 0x0,
        "The response to this DNS query is in this frame", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_response_to,
      { "Request In", "dns.response_to",
        FT_FRAMENUM, BASE_NONE, ((void *)0), 0x0,
        "This is a response to the DNS query in this frame", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_time,
      { "Time", "dns.time",
        FT_RELATIVE_TIME, BASE_NONE, ((void *)0), 0x0,
        "The time between the Query and the Response", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_count_add_rr,
      { "Additional RRs", "dns.count.add_rr",
        FT_UINT16, BASE_DEC, ((void *)0), 0x0,
        "Number of additional records in packet", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_sshfp_fingerprint,
      { "Fingerprint", "dns.sshfp.fingerprint",
        FT_BYTES, BASE_NONE, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_hip_hit,
      { "Host Identity Tag", "dns.hip.hit",
        FT_BYTES, BASE_NONE, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_hip_pk,
      { "HIP Public Key", "dns.hip.pk",
        FT_BYTES, BASE_NONE, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_dhcid_rdata,
      { "DHCID Data", "dns.dhcid.rdata",
        FT_BYTES, BASE_NONE, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_apl_coded_prefix,
      { "Prefix Length", "hf.dns.apl.coded.prefix",
        FT_UINT8, BASE_DEC, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_apl_negation,
      { "Negation Flag", "dns.apl.negation",
        FT_BOOLEAN, 8, (const struct true_false_string*)(&tfs_dns_apl_negation), (1<<7),
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_apl_afdlength,
      { "Address Length, in octets","dns.apl.afdlength",
        FT_UINT8, BASE_DEC, ((void *)0), (0x7F<<0),
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }},
    { &hf_dns_nsap_rdata,
      { "NSAP Data", "dns.nsap.rdata",
        FT_BYTES, BASE_NONE, ((void *)0), 0,
        ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }}
  };
  static gint *ett[] = {
    &ett_dns,
    &ett_dns_qd,
    &ett_dns_rr,
    &ett_dns_qry,
    &ett_dns_ans,
    &ett_dns_flags,
    &ett_nsec3_flags,
    &ett_t_key_flags,
    &ett_t_key,
    &ett_dns_mac,
  };
  module_t *dns_module;

  proto_dns = proto_register_protocol("Domain Name Service", "DNS", "dns");
  proto_register_field_array(proto_dns, hf, (sizeof hf / sizeof hf[0]));
  proto_register_subtree_array(ett, (sizeof ett / sizeof ett[0]));

  dns_module = prefs_register_protocol(proto_dns, ((void *)0));
  prefs_register_bool_preference(dns_module, "desegment_dns_messages",
    "Reassemble DNS messages spanning multiple TCP segments",
    "Whether the DNS dissector should reassemble messages spanning multiple TCP segments."
    " To use this option, you must also enable \"Allow subdissectors to reassemble TCP streams\" in the TCP protocol settings.",
    &dns_desegment);

  dns_tsig_dissector_table = register_dissector_table("dns.tsig.mac", "DNS TSIG MAC Dissectors", FT_STRING, BASE_NONE);
}

void
proto_reg_handoff_dns(void)
{
  dissector_handle_t dns_udp_handle;
  dissector_handle_t dns_tcp_handle;
  dissector_handle_t dns_sctp_handle;
  dissector_handle_t mdns_udp_handle;
  dissector_handle_t llmnr_udp_handle;

  dns_udp_handle = create_dissector_handle(dissect_dns_udp, proto_dns);
  dns_tcp_handle = create_dissector_handle(dissect_dns_tcp, proto_dns);
  dns_sctp_handle = create_dissector_handle(dissect_dns_sctp, proto_dns);
  mdns_udp_handle = create_dissector_handle(dissect_mdns_udp, proto_dns);
  llmnr_udp_handle = create_dissector_handle(dissect_llmnr_udp, proto_dns);

  dissector_add_uint("udp.port", 53, dns_udp_handle);
  dissector_add_uint("tcp.port", 53, dns_tcp_handle);
  dissector_add_uint("udp.port", 5353, mdns_udp_handle);
  dissector_add_uint("tcp.port", 5353, dns_tcp_handle);
  dissector_add_uint("udp.port", 5355, llmnr_udp_handle);
  dissector_add_uint("sctp.port", 53, dns_sctp_handle);




  gssapi_handle = find_dissector("gssapi");
  ntlmssp_handle = find_dissector("ntlmssp");

}
