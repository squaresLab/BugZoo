# 1 "tif_dirread.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-d13be72c-ccadf48a/libtiff/libtiff//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "tif_dirread.c"
# 32 "tif_dirread.c"
# 1 "tiffiop.h" 1
# 33 "tiffiop.h"
# 1 "tif_config.h" 1
# 34 "tiffiop.h" 2


# 1 "/usr/include/fcntl.h" 1 3 4
# 27 "/usr/include/fcntl.h" 3 4
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
# 28 "/usr/include/fcntl.h" 2 3 4






# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 25 "/usr/include/bits/fcntl.h" 3 4
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





typedef __ino64_t ino_t;
# 61 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;







typedef __off64_t off_t;
# 99 "/usr/include/sys/types.h" 3 4
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
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
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
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
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



# 26 "/usr/include/bits/fcntl.h" 2 3 4
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





# 1 "/usr/include/time.h" 1 3 4
# 41 "/usr/include/fcntl.h" 2 3 4
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
# 209 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64");
# 227 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off64_t __offset, __off64_t __len, int __advise) __asm__ ("" "posix_fadvise64") __attribute__ ((__nothrow__))

                      ;
# 248 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off64_t __offset, __off64_t __len) __asm__ ("" "posix_fallocate64")

                           ;
# 267 "/usr/include/fcntl.h" 3 4

# 37 "tiffiop.h" 2







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

# 45 "tiffiop.h" 2



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



# 49 "tiffiop.h" 2





# 1 "/usr/include/search.h" 1 3 4
# 26 "/usr/include/search.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 27 "/usr/include/search.h" 2 3 4


# 45 "/usr/include/search.h" 3 4
extern void insque (void *__elem, void *__prev) __attribute__ ((__nothrow__));


extern void remque (void *__elem) __attribute__ ((__nothrow__));






typedef int (*__compar_fn_t) (__const void *, __const void *);







typedef enum
  {
    FIND,
    ENTER
  }
ACTION;

typedef struct entry
  {
    char *key;
    void *data;
  }
ENTRY;


struct _ENTRY;
# 88 "/usr/include/search.h" 3 4
extern ENTRY *hsearch (ENTRY __item, ACTION __action) __attribute__ ((__nothrow__));


extern int hcreate (size_t __nel) __attribute__ ((__nothrow__));


extern void hdestroy (void) __attribute__ ((__nothrow__));
# 119 "/usr/include/search.h" 3 4
typedef enum
{
  preorder,
  postorder,
  endorder,
  leaf
}
VISIT;



extern void *tsearch (__const void *__key, void **__rootp,
        __compar_fn_t __compar);



extern void *tfind (__const void *__key, void *__const *__rootp,
      __compar_fn_t __compar);


extern void *tdelete (__const void *__restrict __key,
        void **__restrict __rootp,
        __compar_fn_t __compar);



typedef void (*__action_fn_t) (__const void *__nodep, VISIT __value,
          int __level);




extern void twalk (__const void *__root, __action_fn_t __action);
# 165 "/usr/include/search.h" 3 4
extern void *lfind (__const void *__key, __const void *__base,
      size_t *__nmemb, size_t __size, __compar_fn_t __compar);



extern void *lsearch (__const void *__key, void *__base,
        size_t *__nmemb, size_t __size, __compar_fn_t __compar);


# 55 "tiffiop.h" 2





# 1 "tiffio.h" 1
# 33 "tiffio.h"
# 1 "tiff.h" 1
# 30 "tiff.h"
# 1 "tiffconf.h" 1
# 31 "tiff.h" 2
# 65 "tiff.h"
typedef signed char int8;

typedef unsigned char uint8;

typedef short int16;

typedef unsigned short uint16;


typedef int int32;

typedef unsigned int uint32;
# 85 "tiff.h"
enum TIFFIgnoreSense
{
 TIS_STORE,
 TIS_EXTRACT,
 TIS_EMPTY
};




typedef struct {
 uint16 tiff_magic;

 uint16 tiff_version;

 uint32 tiff_diroff;

} TIFFHeader;
# 116 "tiff.h"
typedef struct {
 uint16 tdir_tag;
 uint16 tdir_type;
 uint32 tdir_count;
 uint32 tdir_offset;
} TIFFDirEntry;
# 137 "tiff.h"
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
 TIFF_IFD = 13
} TIFFDataType;
# 34 "tiffio.h" 2
# 1 "tiffvers.h" 1
# 35 "tiffio.h" 2





typedef struct tiff TIFF;
# 61 "tiffio.h"
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrip_t;
typedef uint32 ttile_t;
typedef int32 tsize_t;
typedef void* tdata_t;
typedef uint32 toff_t;
# 96 "tiffio.h"
typedef void* thandle_t;
# 132 "tiffio.h"
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
# 184 "tiffio.h"
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

        int row_offset;
        int col_offset;
};
# 241 "tiffio.h"
typedef int (*TIFFInitMethod)(TIFF*, int);
typedef struct {
 char* name;
 uint16 scheme;
 TIFFInitMethod init;
} TIFFCodec;

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
# 109 "/usr/include/stdio.h" 3 4




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

# 249 "tiffio.h" 2
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 250 "tiffio.h" 2
# 259 "tiffio.h"
typedef void (*TIFFErrorHandler)(const char*, const char*, va_list);
typedef void (*TIFFErrorHandlerExt)(thandle_t, const char*, const char*, va_list);
typedef tsize_t (*TIFFReadWriteProc)(thandle_t, tdata_t, tsize_t);
typedef toff_t (*TIFFSeekProc)(thandle_t, toff_t, int);
typedef int (*TIFFCloseProc)(thandle_t);
typedef toff_t (*TIFFSizeProc)(thandle_t);
typedef int (*TIFFMapFileProc)(thandle_t, tdata_t*, toff_t*);
typedef void (*TIFFUnmapFileProc)(thandle_t, tdata_t, toff_t);
typedef void (*TIFFExtendProc)(TIFF*);

extern const char* TIFFGetVersion(void);

extern const TIFFCodec* TIFFFindCODEC(uint16);
extern TIFFCodec* TIFFRegisterCODEC(uint16, const char*, TIFFInitMethod);
extern void TIFFUnRegisterCODEC(TIFFCodec*);
extern int TIFFIsCODECConfigured(uint16);
extern TIFFCodec* TIFFGetConfiguredCODECs(void);





extern tdata_t _TIFFmalloc(tsize_t);
extern tdata_t _TIFFrealloc(tdata_t, tsize_t);
extern void _TIFFmemset(tdata_t, int, tsize_t);
extern void _TIFFmemcpy(tdata_t, const tdata_t, tsize_t);
extern int _TIFFmemcmp(const tdata_t, const tdata_t, tsize_t);
extern void _TIFFfree(tdata_t);




extern int TIFFGetTagListCount( TIFF * );
extern ttag_t TIFFGetTagListEntry( TIFF *, int tag_index );
# 301 "tiffio.h"
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

typedef struct _TIFFTagValue {
    const TIFFFieldInfo *info;
    int count;
    void *value;
} TIFFTagValue;

extern void TIFFMergeFieldInfo(TIFF*, const TIFFFieldInfo[], int);
extern const TIFFFieldInfo* TIFFFindFieldInfo(TIFF*, ttag_t, TIFFDataType);
extern const TIFFFieldInfo* TIFFFindFieldInfoByName(TIFF* , const char *,
           TIFFDataType);
extern const TIFFFieldInfo* TIFFFieldWithTag(TIFF*, ttag_t);
extern const TIFFFieldInfo* TIFFFieldWithName(TIFF*, const char *);

typedef int (*TIFFVSetMethod)(TIFF*, ttag_t, va_list);
typedef int (*TIFFVGetMethod)(TIFF*, ttag_t, va_list);
typedef void (*TIFFPrintMethod)(TIFF*, FILE*, long);

typedef struct {
    TIFFVSetMethod vsetfield;
    TIFFVGetMethod vgetfield;
    TIFFPrintMethod printdir;
} TIFFTagMethods;

extern TIFFTagMethods *TIFFAccessTagMethods( TIFF * );
extern void *TIFFGetClientInfo( TIFF *, const char * );
extern void TIFFSetClientInfo( TIFF *, void *, const char * );

extern void TIFFCleanup(TIFF*);
extern void TIFFClose(TIFF*);
extern int TIFFFlush(TIFF*);
extern int TIFFFlushData(TIFF*);
extern int TIFFGetField(TIFF*, ttag_t, ...);
extern int TIFFVGetField(TIFF*, ttag_t, va_list);
extern int TIFFGetFieldDefaulted(TIFF*, ttag_t, ...);
extern int TIFFVGetFieldDefaulted(TIFF*, ttag_t, va_list);
extern int TIFFReadDirectory(TIFF*);
extern int TIFFReadCustomDirectory(TIFF*, toff_t, const TIFFFieldInfo[],
        size_t);
extern int TIFFReadEXIFDirectory(TIFF*, toff_t);
extern tsize_t TIFFScanlineSize(TIFF*);
extern tsize_t TIFFRasterScanlineSize(TIFF*);
extern tsize_t TIFFStripSize(TIFF*);
extern tsize_t TIFFRawStripSize(TIFF*, tstrip_t);
extern tsize_t TIFFVStripSize(TIFF*, uint32);
extern tsize_t TIFFTileRowSize(TIFF*);
extern tsize_t TIFFTileSize(TIFF*);
extern tsize_t TIFFVTileSize(TIFF*, uint32);
extern uint32 TIFFDefaultStripSize(TIFF*, uint32);
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
extern tdir_t TIFFCurrentDirectory(TIFF*);
extern tdir_t TIFFNumberOfDirectories(TIFF*);
extern uint32 TIFFCurrentDirOffset(TIFF*);
extern tstrip_t TIFFCurrentStrip(TIFF*);
extern ttile_t TIFFCurrentTile(TIFF*);
extern int TIFFReadBufferSetup(TIFF*, tdata_t, tsize_t);
extern int TIFFWriteBufferSetup(TIFF*, tdata_t, tsize_t);
extern int TIFFSetupStrips(TIFF *);
extern int TIFFWriteCheck(TIFF*, int, const char *);
extern void TIFFFreeDirectory(TIFF*);
extern int TIFFCreateDirectory(TIFF*);
extern int TIFFLastDirectory(TIFF*);
extern int TIFFSetDirectory(TIFF*, tdir_t);
extern int TIFFSetSubDirectory(TIFF*, uint32);
extern int TIFFUnlinkDirectory(TIFF*, tdir_t);
extern int TIFFSetField(TIFF*, ttag_t, ...);
extern int TIFFVSetField(TIFF*, ttag_t, va_list);
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFCheckpointDirectory(TIFF *);
extern int TIFFRewriteDirectory(TIFF *);
extern int TIFFReassignTagToIgnore(enum TIFFIgnoreSense, int);
# 410 "tiffio.h"
extern void TIFFPrintDirectory(TIFF*, FILE*, long);
extern int TIFFReadScanline(TIFF*, tdata_t, uint32, tsample_t);
extern int TIFFWriteScanline(TIFF*, tdata_t, uint32, tsample_t);
extern int TIFFReadRGBAImage(TIFF*, uint32, uint32, uint32*, int);
extern int TIFFReadRGBAImageOriented(TIFF*, uint32, uint32, uint32*, int, int);


extern int TIFFReadRGBAStrip(TIFF*, tstrip_t, uint32 * );
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
extern void TIFFError(const char*, const char*, ...);
extern void TIFFErrorExt(thandle_t, const char*, const char*, ...);
extern void TIFFWarning(const char*, const char*, ...);
extern void TIFFWarningExt(thandle_t, const char*, const char*, ...);
extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(TIFFErrorHandlerExt);
extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetWarningHandlerExt(TIFFErrorHandlerExt);
extern TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc);
extern ttile_t TIFFComputeTile(TIFF*, uint32, uint32, uint32, tsample_t);
extern int TIFFCheckTile(TIFF*, uint32, uint32, uint32, tsample_t);
extern ttile_t TIFFNumberOfTiles(TIFF*);
extern tsize_t TIFFReadTile(TIFF*,
     tdata_t, uint32, uint32, uint32, tsample_t);
extern tsize_t TIFFWriteTile(TIFF*,
     tdata_t, uint32, uint32, uint32, tsample_t);
extern tstrip_t TIFFComputeStrip(TIFF*, uint32, tsample_t);
extern tstrip_t TIFFNumberOfStrips(TIFF*);
extern tsize_t TIFFReadEncodedStrip(TIFF*, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFReadRawStrip(TIFF*, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFReadEncodedTile(TIFF*, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFReadRawTile(TIFF*, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteEncodedStrip(TIFF*, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteRawStrip(TIFF*, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteEncodedTile(TIFF*, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteRawTile(TIFF*, ttile_t, tdata_t, tsize_t);
extern int TIFFDataWidth(TIFFDataType);
extern void TIFFSetWriteOffset(TIFF*, toff_t);
extern void TIFFSwabShort(uint16*);
extern void TIFFSwabLong(uint32*);
extern void TIFFSwabDouble(double*);
extern void TIFFSwabArrayOfShort(uint16*, unsigned long);
extern void TIFFSwabArrayOfTriples(uint8*, unsigned long);
extern void TIFFSwabArrayOfLong(uint32*, unsigned long);
extern void TIFFSwabArrayOfDouble(double*, unsigned long);
extern void TIFFReverseBits(unsigned char *, unsigned long);
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



extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB*, TIFFDisplay *, float*);
extern void TIFFCIELabToXYZ(TIFFCIELabToRGB *, uint32, int32, int32,
       float *, float *, float *);
extern void TIFFXYZToRGB(TIFFCIELabToRGB *, float, float, float,
    uint32 *, uint32 *, uint32 *);

extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB*, float*, float*);
extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB *, uint32, int32, int32,
      uint32 *, uint32 *, uint32 *);
# 61 "tiffiop.h" 2
# 1 "tif_dir.h" 1
# 36 "tif_dir.h"
typedef struct {


 unsigned long td_fieldsset[4];

 uint32 td_imagewidth, td_imagelength, td_imagedepth;
 uint32 td_tilewidth, td_tilelength, td_tiledepth;
 uint32 td_subfiletype;
 uint16 td_bitspersample;
 uint16 td_sampleformat;
 uint16 td_compression;
 uint16 td_photometric;
 uint16 td_threshholding;
 uint16 td_fillorder;
 uint16 td_orientation;
 uint16 td_samplesperpixel;
 uint32 td_rowsperstrip;
 uint16 td_minsamplevalue, td_maxsamplevalue;
 double td_sminsamplevalue, td_smaxsamplevalue;
 float td_xresolution, td_yresolution;
 uint16 td_resolutionunit;
 uint16 td_planarconfig;
 float td_xposition, td_yposition;
 uint16 td_pagenumber[2];
 uint16* td_colormap[3];
 uint16 td_halftonehints[2];
 uint16 td_extrasamples;
 uint16* td_sampleinfo;
 double td_stonits;
 tstrip_t td_stripsperimage;
 tstrip_t td_nstrips;
 uint32* td_stripoffset;
 uint32* td_stripbytecount;
 int td_stripbytecountsorted;
 uint16 td_nsubifd;
 uint32* td_subifd;

 uint16 td_ycbcrsubsampling[2];
 uint16 td_ycbcrpositioning;

 float* td_whitepoint;
 uint16* td_transferfunction[3];

 uint16 td_inkset;
 uint16 td_ninks;
 uint16 td_dotrange[2];
 int td_inknameslen;
 char* td_inknames;
 int td_customValueCount;
        TIFFTagValue *td_customValues;
} TIFFDirectory;
# 188 "tif_dir.h"
static const TIFFFieldInfo tiffFieldInfo[] = {
    { 254, 1, 1, TIFF_LONG, 5,
      1, 0, "SubfileType" },

    { 254, 1, 1, TIFF_SHORT, 5,
      1, 0, "SubfileType" },
    { 255, 1, 1, TIFF_SHORT, 5,
      1, 0, "OldSubfileType" },
    { 256, 1, 1, TIFF_LONG, 1,
      0, 0, "ImageWidth" },
    { 256, 1, 1, TIFF_SHORT, 1,
      0, 0, "ImageWidth" },
    { 257, 1, 1, TIFF_LONG, 1,
      1, 0, "ImageLength" },
    { 257, 1, 1, TIFF_SHORT, 1,
      1, 0, "ImageLength" },
    { 258, -1,-1, TIFF_SHORT, 6,
      0, 0, "BitsPerSample" },

    { 258, -1,-1, TIFF_LONG, 6,
      0, 0, "BitsPerSample" },
    { 259, -1, 1, TIFF_SHORT, 7,
      0, 0, "Compression" },

    { 259, -1, 1, TIFF_LONG, 7,
      0, 0, "Compression" },
    { 262, 1, 1, TIFF_SHORT, 8,
      0, 0, "PhotometricInterpretation" },

    { 262, 1, 1, TIFF_LONG, 8,
      0, 0, "PhotometricInterpretation" },
    { 263, 1, 1, TIFF_SHORT, 9,
      1, 0, "Threshholding" },
    { 264, 1, 1, TIFF_SHORT, 0,
      1, 0, "CellWidth" },
    { 265, 1, 1, TIFF_SHORT, 0,
      1, 0, "CellLength" },
    { 266, 1, 1, TIFF_SHORT, 10,
      0, 0, "FillOrder" },
    { 269, -1,-1, TIFF_ASCII, 65,
      1, 0, "DocumentName" },
    { 270, -1,-1, TIFF_ASCII, 65,
      1, 0, "ImageDescription" },
    { 271, -1,-1, TIFF_ASCII, 65,
      1, 0, "Make" },
    { 272, -1,-1, TIFF_ASCII, 65,
      1, 0, "Model" },
    { 273, -1,-1, TIFF_LONG, 25,
      0, 0, "StripOffsets" },
    { 273, -1,-1, TIFF_SHORT, 25,
      0, 0, "StripOffsets" },
    { 274, 1, 1, TIFF_SHORT, 15,
      0, 0, "Orientation" },
    { 277, 1, 1, TIFF_SHORT, 16,
      0, 0, "SamplesPerPixel" },
    { 278, 1, 1, TIFF_LONG, 17,
      0, 0, "RowsPerStrip" },
    { 278, 1, 1, TIFF_SHORT, 17,
      0, 0, "RowsPerStrip" },
    { 279, -1,-1, TIFF_LONG, 24,
      0, 0, "StripByteCounts" },
    { 279, -1,-1, TIFF_SHORT, 24,
      0, 0, "StripByteCounts" },
    { 280, -2,-1, TIFF_SHORT, 18,
      1, 0, "MinSampleValue" },
    { 281, -2,-1, TIFF_SHORT, 19,
      1, 0, "MaxSampleValue" },
    { 282, 1, 1, TIFF_RATIONAL, 3,
      1, 0, "XResolution" },
    { 283, 1, 1, TIFF_RATIONAL, 3,
      1, 0, "YResolution" },
    { 284, 1, 1, TIFF_SHORT, 20,
      0, 0, "PlanarConfiguration" },
    { 285, -1,-1, TIFF_ASCII, 65,
      1, 0, "PageName" },
    { 286, 1, 1, TIFF_RATIONAL, 4,
      1, 0, "XPosition" },
    { 287, 1, 1, TIFF_RATIONAL, 4,
      1, 0, "YPosition" },
    { 288, -1,-1, TIFF_LONG, 0,
      0, 0, "FreeOffsets" },
    { 289, -1,-1, TIFF_LONG, 0,
      0, 0, "FreeByteCounts" },
    { 290, 1, 1, TIFF_SHORT, 0,
      1, 0, "GrayResponseUnit" },
    { 291,-1,-1, TIFF_SHORT, 0,
      1, 0, "GrayResponseCurve" },
    { 296, 1, 1, TIFF_SHORT, 22,
      1, 0, "ResolutionUnit" },
    { 297, 2, 2, TIFF_SHORT, 23,
      1, 0, "PageNumber" },
    { 300, 1, 1, TIFF_SHORT, 0,
      1, 0, "ColorResponseUnit" },
    { 301, -1,-1, TIFF_SHORT, 44,
      1, 0, "TransferFunction" },
    { 305, -1,-1, TIFF_ASCII, 65,
      1, 0, "Software" },
    { 306, 20,20, TIFF_ASCII, 65,
      1, 0, "DateTime" },
    { 315, -1,-1, TIFF_ASCII, 65,
      1, 0, "Artist" },
    { 316, -1,-1, TIFF_ASCII, 65,
      1, 0, "HostComputer" },
    { 318, 2, 2, TIFF_RATIONAL, 42,
      1, 0, "WhitePoint" },
    { 319,6,6,TIFF_RATIONAL, 65,
      1, 0, "PrimaryChromaticities" },
    { 320, -1,-1, TIFF_SHORT, 26,
      1, 0, "ColorMap" },
    { 321, 2, 2, TIFF_SHORT, 37,
      1, 0, "HalftoneHints" },
    { 322, 1, 1, TIFF_LONG, 2,
      0, 0, "TileWidth" },
    { 322, 1, 1, TIFF_SHORT, 2,
      0, 0, "TileWidth" },
    { 323, 1, 1, TIFF_LONG, 2,
      0, 0, "TileLength" },
    { 323, 1, 1, TIFF_SHORT, 2,
      0, 0, "TileLength" },
    { 324, -1, 1, TIFF_LONG, 25,
      0, 0, "TileOffsets" },
    { 325, -1, 1, TIFF_LONG, 24,
      0, 0, "TileByteCounts" },
    { 325, -1, 1, TIFF_SHORT, 24,
      0, 0, "TileByteCounts" },
    { 330, -1,-1, TIFF_IFD, 49,
      1, 1, "SubIFD" },
    { 330, -1,-1, TIFF_LONG, 49,
      1, 1, "SubIFD" },
    { 332, 1, 1, TIFF_SHORT, 45,
      0, 0, "InkSet" },
    { 333, -1,-1, TIFF_ASCII, 46,
      1, 1, "InkNames" },
    { 334, 1, 1, TIFF_SHORT, 50,
      1, 0, "NumberOfInks" },
    { 336, 2, 2, TIFF_SHORT, 47,
      0, 0, "DotRange" },
    { 336, 2, 2, TIFF_BYTE, 47,
      0, 0, "DotRange" },
    { 337, -1,-1, TIFF_ASCII, 65,
      1, 0, "TargetPrinter" },
    { 338, -1,-1, TIFF_SHORT, 31,
      0, 1, "ExtraSamples" },

    { 338, -1,-1, TIFF_BYTE, 31,
      0, 1, "ExtraSamples" },
    { 339, -1,-1, TIFF_SHORT, 32,
      0, 0, "SampleFormat" },
    { 340, -2,-1, TIFF_NOTYPE, 33,
      1, 0, "SMinSampleValue" },
    { 341, -2,-1, TIFF_NOTYPE, 34,
      1, 0, "SMaxSampleValue" },
    { 343, -1, -3, TIFF_BYTE, 65,
      0, 1, "ClipPath" },
    { 344, 1, 1, TIFF_SLONG, 65,
      0, 0, "XClipPathUnits" },
    { 344, 1, 1, TIFF_SSHORT, 65,
      0, 0, "XClipPathUnits" },
    { 344, 1, 1, TIFF_SBYTE, 65,
      0, 0, "XClipPathUnits" },
    { 345, 1, 1, TIFF_SLONG, 65,
      0, 0, "YClipPathUnits" },
    { 345, 1, 1, TIFF_SSHORT, 65,
      0, 0, "YClipPathUnits" },
    { 345, 1, 1, TIFF_SBYTE, 65,
      0, 0, "YClipPathUnits" },
    { 529, 3, 3, TIFF_RATIONAL, 65,
      0, 0, "YCbCrCoefficients" },
    { 530, 2, 2, TIFF_SHORT, 39,
      0, 0, "YCbCrSubsampling" },
    { 531, 1, 1, TIFF_SHORT, 40,
      0, 0, "YCbCrPositioning" },
    { 532, 6, 6, TIFF_RATIONAL, 65,
      1, 0, "ReferenceBlackWhite" },

    { 532, 6, 6, TIFF_LONG, 65,
      1, 0, "ReferenceBlackWhite" },
    { 700, -1,-3, TIFF_BYTE, 65,
      0, 1, "XMLPacket" },

    { 32995, 1, 1, TIFF_SHORT, 31,
      0, 0, "Matteing" },
    { 32996, -2,-1, TIFF_SHORT, 32,
      0, 0, "DataType" },
    { 32997, 1, 1, TIFF_LONG, 35,
      0, 0, "ImageDepth" },
    { 32997, 1, 1, TIFF_SHORT, 35,
      0, 0, "ImageDepth" },
    { 32998, 1, 1, TIFF_LONG, 36,
      0, 0, "TileDepth" },
    { 32998, 1, 1, TIFF_SHORT, 36,
      0, 0, "TileDepth" },


    { 33300, 1, 1, TIFF_LONG, 65,
      1, 0, "ImageFullWidth" },
    { 33301, 1, 1, TIFF_LONG, 65,
      1, 0, "ImageFullLength" },
    { 33302, -1, -1, TIFF_ASCII, 65,
      1, 0, "TextureFormat" },
    { 33303, -1, -1, TIFF_ASCII, 65,
      1, 0, "TextureWrapModes" },
    { 33304, 1, 1, TIFF_FLOAT, 65,
      1, 0, "FieldOfViewCotangent" },
    { 33305, 16,16, TIFF_FLOAT,
      65, 1, 0, "MatrixWorldToScreen" },
    { 33306, 16,16, TIFF_FLOAT,
       65, 1, 0, "MatrixWorldToCamera" },
    { 33432, -1, -1, TIFF_ASCII, 65,
      1, 0, "Copyright" },

    { 33723, -1, -3, TIFF_LONG, 65,
      0, 1, "RichTIFFIPTC" },
    { 34377, -1, -3, TIFF_BYTE, 65,
      0, 1, "Photoshop" },
    { 34665, 1, 1, TIFF_LONG, 65,
      0, 0, "EXIFIFDOffset" },
    { 34675, -1, -3, TIFF_UNDEFINED, 65,
      0, 1, "ICC Profile" },
    { 34853, 1, 1, TIFF_LONG, 65,
      0, 0, "GPSIFDOffset" },
    { 37439, 1, 1, TIFF_DOUBLE, 54,
      0, 0, "StoNits" },
    { 40965, 1, 1, TIFF_LONG, 65,
      0, 0, "InteroperabilityIFDOffset" },

    { 50706, 4, 4, TIFF_BYTE, 65,
      0, 0, "DNGVersion" },
    { 50707, 4, 4, TIFF_BYTE, 65,
      0, 0, "DNGBackwardVersion" },
    { 50708, -1, -1, TIFF_ASCII, 65,
      1, 0, "UniqueCameraModel" },
    { 50709, -1, -1, TIFF_ASCII, 65,
      1, 0, "LocalizedCameraModel" },
    { 50709, -1, -1, TIFF_BYTE, 65,
      1, 1, "LocalizedCameraModel" },
    { 50710, -1, -1, TIFF_BYTE, 65,
      0, 1, "CFAPlaneColor" },
    { 50711, 1, 1, TIFF_SHORT, 65,
      0, 0, "CFALayout" },
    { 50712, -1, -1, TIFF_SHORT, 65,
      0, 1, "LinearizationTable" },
    { 50713, 2, 2, TIFF_SHORT, 65,
      0, 0, "BlackLevelRepeatDim" },
    { 50714, -1, -1, TIFF_LONG, 65,
      0, 1, "BlackLevel" },
    { 50714, -1, -1, TIFF_SHORT, 65,
      0, 1, "BlackLevel" },
    { 50714, -1, -1, TIFF_RATIONAL, 65,
      0, 1, "BlackLevel" },
    { 50715, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "BlackLevelDeltaH" },
    { 50716, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "BlackLevelDeltaV" },
    { 50717, -2, -2, TIFF_LONG, 65,
      0, 0, "WhiteLevel" },
    { 50717, -2, -2, TIFF_SHORT, 65,
      0, 0, "WhiteLevel" },
    { 50718, 2, 2, TIFF_RATIONAL, 65,
      0, 0, "DefaultScale" },
    { 50780, 1, 1, TIFF_RATIONAL, 65,
      0, 0, "BestQualityScale" },
    { 50719, 2, 2, TIFF_LONG, 65,
      0, 0, "DefaultCropOrigin" },
    { 50719, 2, 2, TIFF_SHORT, 65,
      0, 0, "DefaultCropOrigin" },
    { 50719, 2, 2, TIFF_RATIONAL, 65,
      0, 0, "DefaultCropOrigin" },
    { 50720, 2, 2, TIFF_LONG, 65,
      0, 0, "DefaultCropSize" },
    { 50720, 2, 2, TIFF_SHORT, 65,
      0, 0, "DefaultCropSize" },
    { 50720, 2, 2, TIFF_RATIONAL, 65,
      0, 0, "DefaultCropSize" },
    { 50721, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "ColorMatrix1" },
    { 50722, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "ColorMatrix2" },
    { 50723, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "CameraCalibration1" },
    { 50724, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "CameraCalibration2" },
    { 50725, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "ReductionMatrix1" },
    { 50726, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "ReductionMatrix2" },
    { 50727, -1, -1, TIFF_RATIONAL, 65,
      0, 1, "AnalogBalance" },
    { 50728, -1, -1, TIFF_SHORT, 65,
      0, 1, "AsShotNeutral" },
    { 50728, -1, -1, TIFF_RATIONAL, 65,
      0, 1, "AsShotNeutral" },
    { 50729, 2, 2, TIFF_RATIONAL, 65,
      0, 0, "AsShotWhiteXY" },
    { 50730, 1, 1, TIFF_SRATIONAL, 65,
      0, 0, "BaselineExposure" },
    { 50731, 1, 1, TIFF_RATIONAL, 65,
      0, 0, "BaselineNoise" },
    { 50732, 1, 1, TIFF_RATIONAL, 65,
      0, 0, "BaselineSharpness" },
    { 50733, 1, 1, TIFF_LONG, 65,
      0, 0, "BayerGreenSplit" },
    { 50734, 1, 1, TIFF_RATIONAL, 65,
      0, 0, "LinearResponseLimit" },
    { 50735, -1, -1, TIFF_ASCII, 65,
      1, 0, "CameraSerialNumber" },
    { 50736, 4, 4, TIFF_RATIONAL, 65,
      0, 0, "LensInfo" },
    { 50737, 1, 1, TIFF_RATIONAL, 65,
      0, 0, "ChromaBlurRadius" },
    { 50738, 1, 1, TIFF_RATIONAL, 65,
      0, 0, "AntiAliasStrength" },
    { 50739, 1, 1, TIFF_RATIONAL, 65,
      0, 0, "ShadowScale" },
    { 50740, -1, -1, TIFF_BYTE, 65,
      0, 1, "DNGPrivateData" },
    { 50741, 1, 1, TIFF_SHORT, 65,
      0, 0, "MakerNoteSafety" },
    { 50778, 1, 1, TIFF_SHORT, 65,
      0, 0, "CalibrationIlluminant1" },
    { 50779, 1, 1, TIFF_SHORT, 65,
      0, 0, "CalibrationIlluminant2" },
    { 50781, 16, 16, TIFF_BYTE, 65,
      0, 0, "RawDataUniqueID" },
    { 50827, -1, -1, TIFF_ASCII, 65,
      1, 0, "OriginalRawFileName" },
    { 50827, -1, -1, TIFF_BYTE, 65,
      1, 1, "OriginalRawFileName" },
    { 50828, -1, -1, TIFF_UNDEFINED, 65,
      0, 1, "OriginalRawFileData" },
    { 50829, 4, 4, TIFF_LONG, 65,
      0, 0, "ActiveArea" },
    { 50829, 4, 4, TIFF_SHORT, 65,
      0, 0, "ActiveArea" },
    { 50830, -1, -1, TIFF_LONG, 65,
      0, 1, "MaskedAreas" },
    { 50831, -1, -1, TIFF_UNDEFINED, 65,
      0, 1, "AsShotICCProfile" },
    { 50832, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "AsShotPreProfileMatrix" },
    { 50833, -1, -1, TIFF_UNDEFINED, 65,
      0, 1, "CurrentICCProfile" },
    { 50834, -1, -1, TIFF_SRATIONAL, 65,
      0, 1, "CurrentPreProfileMatrix" },

};

static const TIFFFieldInfo exifFieldInfo[] = {
    { 33434, 1, 1, TIFF_RATIONAL, 65,
      1, 0, "ExposureTime" },
    { 33437, 1, 1, TIFF_RATIONAL, 65,
      1, 0, "FNumber" },
    { 34850, 1, 1, TIFF_SHORT, 65,
      1, 0, "ExposureProgram" },
    { 34852, -1, -1, TIFF_ASCII, 65,
      1, 0, "SpectralSensitivity" },
    { 34855, -1, -1, TIFF_SHORT, 65,
      1, 1, "ISOSpeedRatings" },
    { 34856, -1, -1, TIFF_UNDEFINED, 65,
      1, 1, "OptoelectricConversionFactor" },
    { 36864, 4, 4, TIFF_UNDEFINED, 65,
      1, 0, "ExifVersion" },
    { 37121, 4, 4, TIFF_UNDEFINED, 65,
      1, 0, "ComponentsConfiguration" },
    { 37122, 1, 1, TIFF_RATIONAL, 65,
      1, 0, "CompressedBitsPerPixel" },
    { 37377, 1, 1, TIFF_SRATIONAL, 65,
      1, 0, "ShutterSpeedValue" },
    { 37378, 1, 1, TIFF_RATIONAL, 65,
      1, 0, "ApertureValue" },
    { 37379, 1, 1, TIFF_SRATIONAL, 65,
      1, 0, "BrightnessValue" },
    { 37380, 1, 1, TIFF_SRATIONAL, 65,
      1, 0, "ExposureBiasValue" },
    { 37381, 1, 1, TIFF_RATIONAL, 65,
      1, 0, "MaxApertureValue" },
    { 37382, 1, 1, TIFF_RATIONAL, 65,
      1, 0, "SubjectDistance" },
    { 37383, 1, 1, TIFF_SHORT, 65,
      1, 0, "MeteringMode" },
    { 37384, 1, 1, TIFF_SHORT, 65,
      1, 0, "LightSource" },
    { 37385, 1, 1, TIFF_SHORT, 65,
      1, 0, "Flash" },
    { 37386, 1, 1, TIFF_RATIONAL, 65,
      1, 0, "FocalLength" },
    { 37500, -1, -1, TIFF_UNDEFINED, 65,
      1, 1, "MakerNote" },
    { 37510, -1, -1, TIFF_UNDEFINED, 65,
      1, 1, "UserComment" },
    { 36867, 20, 20, TIFF_ASCII, 65,
      1, 0, "DateTimeOriginal" },
    { 36868, 20, 20, TIFF_ASCII, 65,
      1, 0, "DateTimeDigitized" },
    { 37520, -1, -1, TIFF_ASCII, 65,
      1, 0, "SubSecTime" },
    { 37521, -1, -1, TIFF_ASCII, 65,
      1, 0, "SubSecTimeOriginal" },
    { 37522,-1, -1, TIFF_ASCII, 65,
      1, 0, "SubSecTimeDigitized" },
    { 40960, 4, 4, TIFF_UNDEFINED, 65,
      1, 0, "FlashpixVersion" },
    { 40962, 1, 1, TIFF_LONG, 65,
      1, 0, "PixelXDimension" },
    { 40962, 1, 1, TIFF_SHORT, 65,
      1, 0, "PixelXDimension" },
    { 40963, 1, 1, TIFF_LONG, 65,
      1, 0, "PixelYDimension" },
    { 40963, 1, 1, TIFF_SHORT, 65,
      1, 0, "PixelYDimension" },
    { 40964, 13, 13, TIFF_ASCII, 65,
      1, 0, "RelatedSoundFile" },
    { 42016, 33, 33, TIFF_ASCII, 65,
      1, 0, "ImageUniqueID" },
};
# 626 "tif_dir.h"
extern void _TIFFSetupFieldInfo(TIFF*, const TIFFFieldInfo[], int);
extern void _TIFFPrintFieldInfo(TIFF*, FILE*);
extern TIFFDataType _TIFFSampleToTagType(TIFF*);
extern const TIFFFieldInfo* _TIFFFindOrRegisterFieldInfo( TIFF *tif,
          ttag_t tag,
          TIFFDataType dt );
extern TIFFFieldInfo* _TIFFCreateAnonFieldInfo( TIFF *tif, ttag_t tag,
                                                 TIFFDataType dt );
# 62 "tiffiop.h" 2

typedef double dblparam_t;
# 74 "tiffiop.h"
typedef struct client_info {
    struct client_info *next;
    void *data;
    char *name;
} TIFFClientInfoLink;




typedef unsigned char tidataval_t;
typedef tidataval_t* tidata_t;

typedef void (*TIFFVoidMethod)(TIFF*);
typedef int (*TIFFBoolMethod)(TIFF*);
typedef int (*TIFFPreMethod)(TIFF*, tsample_t);
typedef int (*TIFFCodeMethod)(TIFF*, tidata_t, tsize_t, tsample_t);
typedef int (*TIFFSeekMethod)(TIFF*, uint32);
typedef void (*TIFFPostMethod)(TIFF*, tidata_t, tsize_t);
typedef uint32 (*TIFFStripMethod)(TIFF*, uint32);
typedef void (*TIFFTileMethod)(TIFF*, uint32*, uint32*);

struct tiff {
 char* tif_name;
 int tif_fd;
 int tif_mode;
 uint32 tif_flags;
# 117 "tiffiop.h"
 toff_t tif_diroff;
 toff_t tif_nextdiroff;
 toff_t* tif_dirlist;

 uint16 tif_dirnumber;
 TIFFDirectory tif_dir;
 TIFFHeader tif_header;
 const int* tif_typeshift;
 const long* tif_typemask;
 uint32 tif_row;
 tdir_t tif_curdir;
 tstrip_t tif_curstrip;
 toff_t tif_curoff;
 toff_t tif_dataoff;

 uint16 tif_nsubifd;
 toff_t tif_subifdoff;

 uint32 tif_col;
 ttile_t tif_curtile;
 tsize_t tif_tilesize;

 int tif_decodestatus;
 TIFFBoolMethod tif_setupdecode;
 TIFFPreMethod tif_predecode;
 TIFFBoolMethod tif_setupencode;
 int tif_encodestatus;
 TIFFPreMethod tif_preencode;
 TIFFBoolMethod tif_postencode;
 TIFFCodeMethod tif_decoderow;
 TIFFCodeMethod tif_encoderow;
 TIFFCodeMethod tif_decodestrip;
 TIFFCodeMethod tif_encodestrip;
 TIFFCodeMethod tif_decodetile;
 TIFFCodeMethod tif_encodetile;
 TIFFVoidMethod tif_close;
 TIFFSeekMethod tif_seek;
 TIFFVoidMethod tif_cleanup;
 TIFFStripMethod tif_defstripsize;
 TIFFTileMethod tif_deftilesize;
 tidata_t tif_data;

 tsize_t tif_scanlinesize;
 tsize_t tif_scanlineskew;
 tidata_t tif_rawdata;
 tsize_t tif_rawdatasize;
 tidata_t tif_rawcp;
 tsize_t tif_rawcc;

 tidata_t tif_base;
 toff_t tif_size;
 TIFFMapFileProc tif_mapproc;
 TIFFUnmapFileProc tif_unmapproc;

 thandle_t tif_clientdata;
 TIFFReadWriteProc tif_readproc;
 TIFFReadWriteProc tif_writeproc;
 TIFFSeekProc tif_seekproc;
 TIFFCloseProc tif_closeproc;
 TIFFSizeProc tif_sizeproc;

 TIFFPostMethod tif_postdecode;

 TIFFFieldInfo** tif_fieldinfo;
 size_t tif_nfields;
 const TIFFFieldInfo *tif_foundfield;
        TIFFTagMethods tif_tagmethods;
        TIFFClientInfoLink *tif_clientinfo;
};
# 237 "tiffiop.h"
extern int _TIFFgetMode(const char*, const char*);
extern int _TIFFNoRowEncode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoStripEncode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoTileEncode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoRowDecode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoStripDecode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoTileDecode(TIFF*, tidata_t, tsize_t, tsample_t);
extern void _TIFFNoPostDecode(TIFF*, tidata_t, tsize_t);
extern int _TIFFNoPreCode (TIFF*, tsample_t);
extern int _TIFFNoSeek(TIFF*, uint32);
extern void _TIFFSwab16BitData(TIFF*, tidata_t, tsize_t);
extern void _TIFFSwab24BitData(TIFF*, tidata_t, tsize_t);
extern void _TIFFSwab32BitData(TIFF*, tidata_t, tsize_t);
extern void _TIFFSwab64BitData(TIFF*, tidata_t, tsize_t);
extern int TIFFFlushData1(TIFF*);
extern int TIFFDefaultDirectory(TIFF*);
extern int TIFFSetCompressionScheme(TIFF*, int);
extern int TIFFSetDefaultCompressionState(TIFF*);
extern uint32 _TIFFDefaultStripSize(TIFF*, uint32);
extern void _TIFFDefaultTileSize(TIFF*, uint32*, uint32*);
extern int _TIFFDataSize(TIFFDataType);

extern void _TIFFsetByteArray(void**, void*, uint32);
extern void _TIFFsetString(char**, char*);
extern void _TIFFsetShortArray(uint16**, uint16*, uint32);
extern void _TIFFsetLongArray(uint32**, uint32*, uint32);
extern void _TIFFsetFloatArray(float**, float*, uint32);
extern void _TIFFsetDoubleArray(double**, double*, uint32);

extern void _TIFFprintAscii(FILE*, const char*);
extern void _TIFFprintAsciiTag(FILE*, const char*, const char*);

extern TIFFErrorHandler _TIFFwarningHandler;
extern TIFFErrorHandler _TIFFerrorHandler;
extern TIFFErrorHandlerExt _TIFFwarningHandlerExt;
extern TIFFErrorHandlerExt _TIFFerrorHandlerExt;

extern tdata_t _TIFFCheckMalloc(TIFF*, size_t, size_t, const char*);

extern int TIFFInitDumpMode(TIFF*, int);

extern int TIFFInitPackBits(TIFF*, int);


extern int TIFFInitCCITTRLE(TIFF*, int), TIFFInitCCITTRLEW(TIFF*, int);
extern int TIFFInitCCITTFax3(TIFF*, int), TIFFInitCCITTFax4(TIFF*, int);


extern int TIFFInitThunderScan(TIFF*, int);


extern int TIFFInitNeXT(TIFF*, int);


extern int TIFFInitLZW(TIFF*, int);
# 303 "tiffiop.h"
extern int TIFFInitZIP(TIFF*, int);


extern int TIFFInitPixarLog(TIFF*, int);


extern int TIFFInitSGILog(TIFF*, int);




extern TIFFCodec _TIFFBuiltinCODECS[];
# 33 "tif_dirread.c" 2
# 44 "tif_dirread.c"
static int EstimateStripByteCounts(TIFF*, TIFFDirEntry*, uint16);
static void MissingRequired(TIFF*, const char*);
static int CheckDirCount(TIFF*, TIFFDirEntry*, uint32);
static tsize_t TIFFFetchData(TIFF*, TIFFDirEntry*, char*);
static tsize_t TIFFFetchString(TIFF*, TIFFDirEntry*, char*);
static float TIFFFetchRational(TIFF*, TIFFDirEntry*);
static int TIFFFetchNormalTag(TIFF*, TIFFDirEntry*);
static int TIFFFetchPerSampleShorts(TIFF*, TIFFDirEntry*, uint16*);
static int TIFFFetchPerSampleLongs(TIFF*, TIFFDirEntry*, uint32*);
static int TIFFFetchPerSampleAnys(TIFF*, TIFFDirEntry*, double*);
static int TIFFFetchShortArray(TIFF*, TIFFDirEntry*, uint16*);
static int TIFFFetchStripThing(TIFF*, TIFFDirEntry*, long, uint32**);
static int TIFFFetchRefBlackWhite(TIFF*, TIFFDirEntry*);
static float TIFFFetchFloat(TIFF*, TIFFDirEntry*);
static int TIFFFetchFloatArray(TIFF*, TIFFDirEntry*, float*);
static int TIFFFetchDoubleArray(TIFF*, TIFFDirEntry*, double*);
static int TIFFFetchAnyArray(TIFF*, TIFFDirEntry*, double*);
static int TIFFFetchShortPair(TIFF*, TIFFDirEntry*);
static void ChopUpSingleUncompressedStrip(TIFF*);






int
TIFFReadDirectory(TIFF* tif)
{
 static const char module[] = "TIFFReadDirectory";

 int n;
 TIFFDirectory* td;
 TIFFDirEntry *dp, *dir = ((void *)0);
 uint16 iv;
 uint32 v;
 const TIFFFieldInfo* fip;
 size_t fix;
 uint16 dircount;
 toff_t nextdiroff;
 char* cp;
 int diroutoforderwarning = 0;
 toff_t* new_dirlist;

 tif->tif_diroff = tif->tif_nextdiroff;
 if (tif->tif_diroff == 0)
  return (0);






 for (n = 0; n < tif->tif_dirnumber; n++) {
  if (tif->tif_dirlist[n] == tif->tif_diroff)
   return (0);
 }
 tif->tif_dirnumber++;
 new_dirlist = _TIFFrealloc(tif->tif_dirlist,
       tif->tif_dirnumber * sizeof(toff_t));
 if (!new_dirlist) {
  TIFFErrorExt(tif->tif_clientdata, module,
     "%s: Failed to allocate space for IFD list",
     tif->tif_name);
  return (0);
 }
 tif->tif_dirlist = new_dirlist;
 tif->tif_dirlist[tif->tif_dirnumber - 1] = tif->tif_diroff;




 (*tif->tif_cleanup)(tif);
 tif->tif_curdir++;
 nextdiroff = 0;
 if (!(((tif)->tif_flags & 0x0800) != 0)) {
  if (!(((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t) tif->tif_diroff),0)) == (toff_t) tif->tif_diroff)) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Seek error accessing TIFF directory",
                            tif->tif_name);
   return (0);
  }
  if (!(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) &dircount,(tsize_t)(sizeof (uint16)))) == (tsize_t)(sizeof (uint16)))) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Can not read TIFF directory count",
                            tif->tif_name);
   return (0);
  }
  if (tif->tif_flags & 0x0080)
   TIFFSwabShort(&dircount);
  dir = (TIFFDirEntry *)_TIFFCheckMalloc(tif,
        dircount,
        sizeof (TIFFDirEntry),
        "to read TIFF directory");
  if (dir == ((void *)0))
   return (0);
  if (!(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) dir,(tsize_t)(dircount*sizeof (TIFFDirEntry)))) == (tsize_t)(dircount*sizeof (TIFFDirEntry)))) {
   TIFFErrorExt(tif->tif_clientdata, module,
                                  "%.100s: Can not read TIFF directory",
                                  tif->tif_name);
   goto bad;
  }



  (void) (((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) &nextdiroff,(tsize_t)(sizeof (uint32)))) == (tsize_t)(sizeof (uint32)));
 } else {
  toff_t off = tif->tif_diroff;

  if (off + sizeof (uint16) > tif->tif_size) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Can not read TIFF directory count",
                            tif->tif_name);
   return (0);
  } else
   _TIFFmemcpy(&dircount, tif->tif_base + off, sizeof (uint16));
  off += sizeof (uint16);
  if (tif->tif_flags & 0x0080)
   TIFFSwabShort(&dircount);
  dir = (TIFFDirEntry *)_TIFFCheckMalloc(tif,
      dircount, sizeof (TIFFDirEntry), "to read TIFF directory");
  if (dir == ((void *)0))
   return (0);
  if (off + dircount*sizeof (TIFFDirEntry) > tif->tif_size) {
   TIFFErrorExt(tif->tif_clientdata, module,
                                  "%s: Can not read TIFF directory",
                                  tif->tif_name);
   goto bad;
  } else {
   _TIFFmemcpy(dir, tif->tif_base + off,
        dircount*sizeof (TIFFDirEntry));
  }
  off += dircount* sizeof (TIFFDirEntry);
  if (off + sizeof (uint32) <= tif->tif_size)
   _TIFFmemcpy(&nextdiroff, tif->tif_base+off, sizeof (uint32));
 }
 if (tif->tif_flags & 0x0080)
  TIFFSwabLong(&nextdiroff);
 tif->tif_nextdiroff = nextdiroff;

 tif->tif_flags &= ~0x0040;







 td = &tif->tif_dir;

 TIFFFreeDirectory(tif);
 TIFFDefaultDirectory(tif);






 TIFFSetField(tif, 284, 1);
# 221 "tif_dirread.c"
 for (dp = dir, n = dircount; n > 0; n--, dp++) {
  if (tif->tif_flags & 0x0080) {
   TIFFSwabArrayOfShort(&dp->tdir_tag, 2);
   TIFFSwabArrayOfLong(&dp->tdir_count, 2);
  }
  if (dp->tdir_tag == 277) {
   if (!TIFFFetchNormalTag(tif, dp))
    goto bad;
   dp->tdir_tag = 0;
  }
 }



 fix = 0;
 for (dp = dir, n = dircount; n > 0; n--, dp++) {

  if (fix >= tif->tif_nfields || dp->tdir_tag == 0)
   continue;






  if (dp->tdir_tag < tif->tif_fieldinfo[fix]->field_tag) {
   if (!diroutoforderwarning) {
    TIFFWarning(module,
"%s: invalid TIFF directory; tags are not sorted in ascending order",
                                            tif->tif_name);
    diroutoforderwarning = 1;
   }
   fix = 0;
  }
  while (fix < tif->tif_nfields &&
         tif->tif_fieldinfo[fix]->field_tag < dp->tdir_tag)
   fix++;
  if (fix >= tif->tif_nfields ||
      tif->tif_fieldinfo[fix]->field_tag != dp->tdir_tag) {

                    TIFFWarning(module,
                        "%s: unknown field with tag %d (0x%x) encountered",
                                tif->tif_name, dp->tdir_tag, dp->tdir_tag,
                                dp->tdir_type);

                    TIFFMergeFieldInfo( tif,
                                        _TIFFCreateAnonFieldInfo( tif,
                                              dp->tdir_tag,
           (TIFFDataType) dp->tdir_type ),
                                        1 );
                    fix = 0;
                    while (fix < tif->tif_nfields &&
                           tif->tif_fieldinfo[fix]->field_tag < dp->tdir_tag)
   fix++;
  }



  if (tif->tif_fieldinfo[fix]->field_bit == 0) {
 ignore:
   dp->tdir_tag = 0;
   continue;
  }



  fip = tif->tif_fieldinfo[fix];
  while (dp->tdir_type != (unsigned short) fip->field_type
                       && fix < tif->tif_nfields) {
   if (fip->field_type == TIFF_NOTYPE)
    break;
                        fip = tif->tif_fieldinfo[++fix];
   if (fix >= tif->tif_nfields ||
       fip->field_tag != dp->tdir_tag) {
    TIFFWarning(module,
   "%s: wrong data type %d for \"%s\"; tag ignored",
         tif->tif_name, dp->tdir_type,
         tif->tif_fieldinfo[fix-1]->field_name);
    goto ignore;
   }
  }



  if (fip->field_readcount != -1
      && fip->field_readcount != -3) {
   uint32 expected = (fip->field_readcount == -2) ?
       (uint32) td->td_samplesperpixel :
       (uint32) fip->field_readcount;
   if (!CheckDirCount(tif, dp, expected))
    goto ignore;
  }

  switch (dp->tdir_tag) {
  case 259:






   if (dp->tdir_count == 1) {
    v = ((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((dp->tdir_offset) >> (tif)->tif_typeshift[dp->tdir_type]) & (tif)->tif_typemask[dp->tdir_type] : (dp->tdir_offset) & (tif)->tif_typemask[dp->tdir_type]))
                                       ;
    if (!TIFFSetField(tif, dp->tdir_tag, (uint16)v))
     goto bad;
    break;

   } else if (dp->tdir_type == TIFF_LONG) {
    if (!TIFFFetchPerSampleLongs(tif, dp, &v) ||
        !TIFFSetField(tif, dp->tdir_tag, (uint16)v))
     goto bad;
   } else {
    if (!TIFFFetchPerSampleShorts(tif, dp, &iv)
        || !TIFFSetField(tif, dp->tdir_tag, iv))
     goto bad;
   }
   dp->tdir_tag = 0;
   break;
  case 273:
  case 279:
  case 324:
  case 325:
   (((tif)->tif_dir.td_fieldsset[(fip->field_bit)/32]) |= (((unsigned long)1L)<<((fip->field_bit)&0x1f)));
   break;
  case 256:
  case 257:
  case 32997:
  case 323:
  case 322:
  case 32998:
  case 284:
  case 278:
  case 338:
   if (!TIFFFetchNormalTag(tif, dp))
    goto bad;
   dp->tdir_tag = 0;
   break;
  }
 }




 if (!(((tif)->tif_dir.td_fieldsset[(1)/32]) & (((unsigned long)1L)<<((1)&0x1f)))) {
  MissingRequired(tif, "ImageLength");
  goto bad;
 }
 if (!(((tif)->tif_dir.td_fieldsset[(20)/32]) & (((unsigned long)1L)<<((20)&0x1f)))) {
  MissingRequired(tif, "PlanarConfiguration");
  goto bad;
 }



 if (!(((tif)->tif_dir.td_fieldsset[(2)/32]) & (((unsigned long)1L)<<((2)&0x1f)))) {
  td->td_nstrips = TIFFNumberOfStrips(tif);
  td->td_tilewidth = td->td_imagewidth;
  td->td_tilelength = td->td_rowsperstrip;
  td->td_tiledepth = td->td_imagedepth;
  tif->tif_flags &= ~0x0400;
 } else {
  td->td_nstrips = TIFFNumberOfTiles(tif);
  tif->tif_flags |= 0x0400;
 }
 if (!td->td_nstrips) {
  TIFFErrorExt(tif->tif_clientdata, module, "%s: cannot handle zero number of %s",
     tif->tif_name, (((tif)->tif_flags & 0x0400) != 0) ? "tiles" : "strips");
  goto bad;
 }
 td->td_stripsperimage = td->td_nstrips;
 if (td->td_planarconfig == 2)
  td->td_stripsperimage /= td->td_samplesperpixel;
 if (!(((tif)->tif_dir.td_fieldsset[(25)/32]) & (((unsigned long)1L)<<((25)&0x1f)))) {
  MissingRequired(tif,
      (((tif)->tif_flags & 0x0400) != 0) ? "TileOffsets" : "StripOffsets");
  goto bad;
 }




 for (dp = dir, n = dircount; n > 0; n--, dp++) {
  if (dp->tdir_tag == 0)
   continue;
  switch (dp->tdir_tag) {
  case 280:
  case 281:
  case 258:
  case 32996:
  case 339:
# 427 "tif_dirread.c"
   if (dp->tdir_count == 1) {
    v = ((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((dp->tdir_offset) >> (tif)->tif_typeshift[dp->tdir_type]) & (tif)->tif_typemask[dp->tdir_type] : (dp->tdir_offset) & (tif)->tif_typemask[dp->tdir_type]))
                                       ;
    if (!TIFFSetField(tif, dp->tdir_tag, (uint16)v))
     goto bad;

   } else if (dp->tdir_tag == 258
       && dp->tdir_type == TIFF_LONG) {
    if (!TIFFFetchPerSampleLongs(tif, dp, &v) ||
        !TIFFSetField(tif, dp->tdir_tag, (uint16)v))
     goto bad;
   } else {
    if (!TIFFFetchPerSampleShorts(tif, dp, &iv) ||
        !TIFFSetField(tif, dp->tdir_tag, iv))
     goto bad;
   }
   break;
  case 340:
  case 341:
   {
    double dv = 0.0;
    if (!TIFFFetchPerSampleAnys(tif, dp, &dv) ||
        !TIFFSetField(tif, dp->tdir_tag, dv))
     goto bad;
   }
   break;
  case 273:
  case 324:
   if (!TIFFFetchStripThing(tif, dp,
       td->td_nstrips, &td->td_stripoffset))
    goto bad;
   break;
  case 279:
  case 325:
   if (!TIFFFetchStripThing(tif, dp,
       td->td_nstrips, &td->td_stripbytecount))
    goto bad;
   break;
  case 320:
  case 301:




   v = 1L<<td->td_bitspersample;
   if (dp->tdir_tag == 320 ||
       dp->tdir_count != v) {
    if (!CheckDirCount(tif, dp, 3 * v))
     break;
   }
   v *= sizeof(uint16);
   cp = _TIFFCheckMalloc(tif, dp->tdir_count, sizeof (uint16),
       "to read \"TransferFunction\" tag");
   if (cp != ((void *)0)) {
    if (TIFFFetchData(tif, dp, cp)) {




     uint32 c = 1L << td->td_bitspersample;
     if (dp->tdir_count == c)
      v = 0L;
     TIFFSetField(tif, dp->tdir_tag,
         cp, cp+v, cp+2*v);
    }
    _TIFFfree(cp);
   }
   break;
  case 297:
  case 321:
  case 530:
  case 336:
   (void) TIFFFetchShortPair(tif, dp);
   break;
  case 532:
   (void) TIFFFetchRefBlackWhite(tif, dp);
   break;

  case 255:
   v = 0L;
   switch (((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((dp->tdir_offset) >> (tif)->tif_typeshift[dp->tdir_type]) & (tif)->tif_typemask[dp->tdir_type] : (dp->tdir_offset) & (tif)->tif_typemask[dp->tdir_type]))
                       ) {
   case 2:
    v = 0x1;
    break;
   case 3:
    v = 0x2;
    break;
   }
   if (v)
    TIFFSetField(tif, 254, v);
   break;

  default:
   (void) TIFFFetchNormalTag(tif, dp);
   break;
  }
 }



 if (td->td_photometric == 3 &&
     !(((tif)->tif_dir.td_fieldsset[(26)/32]) & (((unsigned long)1L)<<((26)&0x1f)))) {
  MissingRequired(tif, "Colormap");
  goto bad;
 }



 if (!(((tif)->tif_dir.td_fieldsset[(24)/32]) & (((unsigned long)1L)<<((24)&0x1f)))) {





  if ((td->td_planarconfig == 1 &&
      td->td_nstrips > 1) ||
      (td->td_planarconfig == 2 &&
       td->td_nstrips != td->td_samplesperpixel)) {
      MissingRequired(tif, "StripByteCounts");
      goto bad;
  }
  TIFFWarning(module,
   "%s: TIFF directory is missing required "
   "\"%s\" field, calculating from imagelength",
   tif->tif_name,
          TIFFFieldWithTag(tif,279)->field_name);
  if (EstimateStripByteCounts(tif, dir, dircount) < 0)
      goto bad;
# 574 "tif_dirread.c"
 } else if (td->td_nstrips == 1
                   && td->td_stripoffset[0] != 0
                   && ( (td->td_stripbytecount[0] == 0 && td->td_stripoffset[0] != 0) || (td->td_compression == 1 && td->td_stripbytecount[0] > ((*(tif)->tif_sizeproc)((tif)->tif_clientdata)) - td->td_stripoffset[0]) || (tif->tif_mode == 00 && td->td_compression == 1 && td->td_stripbytecount[0] < TIFFScanlineSize(tif) * td->td_imagelength) )) {






  TIFFWarning(module,
 "%s: Bogus \"%s\" field, ignoring and calculating from imagelength",
                            tif->tif_name,
              TIFFFieldWithTag(tif,279)->field_name);
  if(EstimateStripByteCounts(tif, dir, dircount) < 0)
      goto bad;
 } else if (td->td_nstrips > 2
     && td->td_compression == 1
     && td->td_stripbytecount[0] != td->td_stripbytecount[1]) {





  TIFFWarning(module,
 "%s: Wrong \"%s\" field, ignoring and calculating from imagelength",
                            tif->tif_name,
              TIFFFieldWithTag(tif,279)->field_name);
  if (EstimateStripByteCounts(tif, dir, dircount) < 0)
      goto bad;
 }
 if (dir) {
  _TIFFfree((char *)dir);
  dir = ((void *)0);
 }
 if (!(((tif)->tif_dir.td_fieldsset[(19)/32]) & (((unsigned long)1L)<<((19)&0x1f))))
  td->td_maxsamplevalue = (uint16)((1L<<td->td_bitspersample)-1);
# 619 "tif_dirread.c"
 if (td->td_nstrips > 1) {
  tstrip_t strip;

  td->td_stripbytecountsorted = 1;
  for (strip = 1; strip < td->td_nstrips; strip++) {
   if (td->td_stripoffset[strip - 1] >
       td->td_stripoffset[strip]) {
    td->td_stripbytecountsorted = 0;
    break;
   }
  }
 }

 if (!(((tif)->tif_dir.td_fieldsset[(7)/32]) & (((unsigned long)1L)<<((7)&0x1f))))
  TIFFSetField(tif, 259, 1);
# 643 "tif_dirread.c"
 if (td->td_nstrips == 1 && td->td_compression == 1 &&
     (tif->tif_flags & (0x8000|0x0400)) == 0x8000)
  ChopUpSingleUncompressedStrip(tif);




 tif->tif_row = (uint32) -1;
 tif->tif_curstrip = (tstrip_t) -1;
 tif->tif_col = (uint32) -1;
 tif->tif_curtile = (ttile_t) -1;
 tif->tif_tilesize = (tsize_t) -1;

 tif->tif_scanlinesize = TIFFScanlineSize(tif);
 if (!tif->tif_scanlinesize) {
  TIFFErrorExt(tif->tif_clientdata, module, "%s: cannot handle zero scanline size",
     tif->tif_name);
  return (0);
 }

 if ((((tif)->tif_flags & 0x0400) != 0)) {
  tif->tif_tilesize = TIFFTileSize(tif);
  if (!tif->tif_tilesize) {
   TIFFErrorExt(tif->tif_clientdata, module, "%s: cannot handle zero tile size",
      tif->tif_name);
   return (0);
  }
 } else {
  if (!TIFFStripSize(tif)) {
   TIFFErrorExt(tif->tif_clientdata, module, "%s: cannot handle zero strip size",
      tif->tif_name);
   return (0);
  }
 }
 return (1);
bad:
 if (dir)
  _TIFFfree(dir);
 return (0);
}





int
TIFFReadCustomDirectory(TIFF* tif, toff_t diroff,
   const TIFFFieldInfo info[], size_t n)
{
 static const char module[] = "TIFFReadCustomDirectory";

 TIFFDirectory* td = &tif->tif_dir;
 TIFFDirEntry *dp, *dir = ((void *)0);
 const TIFFFieldInfo* fip;
 size_t fix;
 uint16 i, dircount;

 _TIFFSetupFieldInfo(tif, info, n);

 tif->tif_diroff = diroff;

 if (!(((tif)->tif_flags & 0x0800) != 0)) {
  if (!(((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t) diroff),0)) == (toff_t) diroff)) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Seek error accessing TIFF directory",
                            tif->tif_name);
   return (0);
  }
  if (!(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) &dircount,(tsize_t)(sizeof (uint16)))) == (tsize_t)(sizeof (uint16)))) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Can not read TIFF directory count",
                            tif->tif_name);
   return (0);
  }
  if (tif->tif_flags & 0x0080)
   TIFFSwabShort(&dircount);
  dir = (TIFFDirEntry *)_TIFFCheckMalloc(tif,
        dircount,
        sizeof (TIFFDirEntry),
        "to read TIFF directory");
  if (dir == ((void *)0))
   return (0);
  if (!(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) dir,(tsize_t)(dircount * sizeof (TIFFDirEntry)))) == (tsize_t)(dircount * sizeof (TIFFDirEntry)))) {
   TIFFErrorExt(tif->tif_clientdata, module,
                                  "%.100s: Can not read TIFF directory",
                                  tif->tif_name);
   goto bad;
  }
 } else {
  toff_t off = diroff;

  if (off + sizeof (uint16) > tif->tif_size) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Can not read TIFF directory count",
                            tif->tif_name);
   return (0);
  } else
   _TIFFmemcpy(&dircount, tif->tif_base + off, sizeof (uint16));
  off += sizeof (uint16);
  if (tif->tif_flags & 0x0080)
   TIFFSwabShort(&dircount);
  dir = (TIFFDirEntry *)_TIFFCheckMalloc(tif,
      dircount, sizeof (TIFFDirEntry), "to read TIFF directory");
  if (dir == ((void *)0))
   return (0);
  if (off + dircount * sizeof (TIFFDirEntry) > tif->tif_size) {
   TIFFErrorExt(tif->tif_clientdata, module,
                                  "%s: Can not read TIFF directory",
                                  tif->tif_name);
   goto bad;
  } else {
   _TIFFmemcpy(dir, tif->tif_base + off,
        dircount * sizeof (TIFFDirEntry));
  }
 }

 TIFFFreeDirectory(tif);

 fix = 0;
 for (dp = dir, i = dircount; i > 0; i--, dp++) {
  if (tif->tif_flags & 0x0080) {
   TIFFSwabArrayOfShort(&dp->tdir_tag, 2);
   TIFFSwabArrayOfLong(&dp->tdir_count, 2);
  }

  if (fix >= tif->tif_nfields || dp->tdir_tag == 0)
   continue;

  while (fix < tif->tif_nfields &&
         tif->tif_fieldinfo[fix]->field_tag < dp->tdir_tag)
   fix++;

  if (fix >= tif->tif_nfields ||
      tif->tif_fieldinfo[fix]->field_tag != dp->tdir_tag) {

   TIFFWarning(module,
                        "%s: unknown field with tag %d (0x%x) encountered",
        tif->tif_name, dp->tdir_tag, dp->tdir_tag,
        dp->tdir_type);

   TIFFMergeFieldInfo(tif,
        _TIFFCreateAnonFieldInfo(tif,
      dp->tdir_tag,
      (TIFFDataType)dp->tdir_type),
        1);

   fix = 0;
   while (fix < tif->tif_nfields &&
          tif->tif_fieldinfo[fix]->field_tag < dp->tdir_tag)
    fix++;
  }



  if (tif->tif_fieldinfo[fix]->field_bit == 0) {
 ignore:
   dp->tdir_tag = 0;
   continue;
  }



  fip = tif->tif_fieldinfo[fix];
  while (dp->tdir_type != (unsigned short) fip->field_type
                       && fix < tif->tif_nfields) {
   if (fip->field_type == TIFF_NOTYPE)
    break;
                        fip = tif->tif_fieldinfo[++fix];
   if (fix >= tif->tif_nfields ||
       fip->field_tag != dp->tdir_tag) {
    TIFFWarning(module,
   "%s: wrong data type %d for \"%s\"; tag ignored",
         tif->tif_name, dp->tdir_type,
         tif->tif_fieldinfo[fix-1]->field_name);
    goto ignore;
   }
  }



  if (fip->field_readcount != -1
      && fip->field_readcount != -3) {
   uint32 expected = (fip->field_readcount == -2) ?
       (uint32) td->td_samplesperpixel :
       (uint32) fip->field_readcount;
   if (!CheckDirCount(tif, dp, expected))
    goto ignore;
  }

  (void) TIFFFetchNormalTag(tif, dp);
 }

 if (dir)
  _TIFFfree(dir);
 return 1;

bad:
 if (dir)
  _TIFFfree(dir);
 return 0;
}





int
TIFFReadEXIFDirectory(TIFF* tif, toff_t diroff)
{
 return TIFFReadCustomDirectory(tif, diroff, exifFieldInfo,
           (sizeof (exifFieldInfo) / sizeof ((exifFieldInfo)[0])));
}

static int
EstimateStripByteCounts(TIFF* tif, TIFFDirEntry* dir, uint16 dircount)
{
 static const char module[] = "EstimateStripByteCounts";

 register TIFFDirEntry *dp;
 register TIFFDirectory *td = &tif->tif_dir;
 uint16 i;

 if (td->td_stripbytecount)
  _TIFFfree(td->td_stripbytecount);
 td->td_stripbytecount = (uint32*)
     _TIFFCheckMalloc(tif, td->td_nstrips, sizeof (uint32),
  "for \"StripByteCounts\" array");
 if (td->td_compression != 1) {
  uint32 space = (uint32)(sizeof (TIFFHeader)
      + sizeof (uint16)
      + (dircount * sizeof (TIFFDirEntry))
      + sizeof (uint32));
  toff_t filesize = ((*(tif)->tif_sizeproc)((tif)->tif_clientdata));
  uint16 n;


  for (dp = dir, n = dircount; n > 0; n--, dp++)
  {
   uint32 cc = TIFFDataWidth((TIFFDataType) dp->tdir_type);
   if (cc == 0) {
    TIFFErrorExt(tif->tif_clientdata, module,
   "%s: Cannot determine size of unknown tag type %d",
       tif->tif_name, dp->tdir_type);
    return -1;
   }
   cc = cc * dp->tdir_count;
   if (cc > sizeof (uint32))
    space += cc;
  }
  space = filesize - space;
  if (td->td_planarconfig == 2)
   space /= td->td_samplesperpixel;
  for (i = 0; i < td->td_nstrips; i++)
   td->td_stripbytecount[i] = space;







  i--;
  if (((toff_t)(td->td_stripoffset[i]+td->td_stripbytecount[i]))
                                                               > filesize)
   td->td_stripbytecount[i] =
       filesize - td->td_stripoffset[i];
 } else {
  uint32 rowbytes = TIFFScanlineSize(tif);
  uint32 rowsperstrip = td->td_imagelength/td->td_stripsperimage;
  for (i = 0; i < td->td_nstrips; i++)
   td->td_stripbytecount[i] = rowbytes*rowsperstrip;
 }
 (((tif)->tif_dir.td_fieldsset[(24)/32]) |= (((unsigned long)1L)<<((24)&0x1f)));
 if (!(((tif)->tif_dir.td_fieldsset[(17)/32]) & (((unsigned long)1L)<<((17)&0x1f))))
  td->td_rowsperstrip = td->td_imagelength;
 return 1;
}

static void
MissingRequired(TIFF* tif, const char* tagname)
{
 static const char module[] = "MissingRequired";

 TIFFErrorExt(tif->tif_clientdata, module,
    "%s: TIFF directory is missing required \"%s\" field",
    tif->tif_name, tagname);
}







static int
CheckDirCount(TIFF* tif, TIFFDirEntry* dir, uint32 count)
{
 if (count > dir->tdir_count) {
  TIFFWarning(tif->tif_name,
 "incorrect count for field \"%s\" (%lu, expecting %lu); tag ignored",
      TIFFFieldWithTag(tif, dir->tdir_tag)->field_name,
      dir->tdir_count, count);
  return (0);
 } else if (count < dir->tdir_count) {
  TIFFWarning(tif->tif_name,
 "incorrect count for field \"%s\" (%lu, expecting %lu); tag trimmed",
      TIFFFieldWithTag(tif, dir->tdir_tag)->field_name,
      dir->tdir_count, count);
  return (1);
 }
 return (1);
}




static tsize_t
TIFFFetchData(TIFF* tif, TIFFDirEntry* dir, char* cp)
{
 int w = TIFFDataWidth((TIFFDataType) dir->tdir_type);
 tsize_t cc = dir->tdir_count * w;

 if (!(((tif)->tif_flags & 0x0800) != 0)) {
  if (!(((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t) dir->tdir_offset),0)) == (toff_t) dir->tdir_offset))
   goto bad;
  if (!(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) cp,(tsize_t)(cc))) == (tsize_t)(cc)))
   goto bad;
 } else {
  if (dir->tdir_offset + cc > tif->tif_size)
   goto bad;
  _TIFFmemcpy(cp, tif->tif_base + dir->tdir_offset, cc);
 }
 if (tif->tif_flags & 0x0080) {
  switch (dir->tdir_type) {
  case TIFF_SHORT:
  case TIFF_SSHORT:
   TIFFSwabArrayOfShort((uint16*) cp, dir->tdir_count);
   break;
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_FLOAT:
   TIFFSwabArrayOfLong((uint32*) cp, dir->tdir_count);
   break;
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
   TIFFSwabArrayOfLong((uint32*) cp, 2*dir->tdir_count);
   break;
  case TIFF_DOUBLE:
   TIFFSwabArrayOfDouble((double*) cp, dir->tdir_count);
   break;
  }
 }
 return (cc);
bad:
 TIFFErrorExt(tif->tif_clientdata, tif->tif_name, "Error fetching data for field \"%s\"",
     TIFFFieldWithTag(tif, dir->tdir_tag)->field_name);
 return ((tsize_t) 0);
}




static tsize_t
TIFFFetchString(TIFF* tif, TIFFDirEntry* dir, char* cp)
{
 if (dir->tdir_count <= 4) {
  uint32 l = dir->tdir_offset;
  if (tif->tif_flags & 0x0080)
   TIFFSwabLong(&l);
  _TIFFmemcpy(cp, &l, dir->tdir_count);
  return (1);
 }
 return (TIFFFetchData(tif, dir, cp));
}




static int
cvtRational(TIFF* tif, TIFFDirEntry* dir, uint32 num, uint32 denom, float* rv)
{
 if (denom == 0) {
  TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
      "%s: Rational with zero denominator (num = %lu)",
      TIFFFieldWithTag(tif, dir->tdir_tag)->field_name, num);
  return (0);
 } else {
  if (dir->tdir_type == TIFF_RATIONAL)
   *rv = ((float)num / (float)denom);
  else
   *rv = ((float)(int32)num / (float)(int32)denom);
  return (1);
 }
}






static float
TIFFFetchRational(TIFF* tif, TIFFDirEntry* dir)
{
 uint32 l[2];
 float v;

 return (!TIFFFetchData(tif, dir, (char *)l) ||
     !cvtRational(tif, dir, l[0], l[1], &v) ? 1.0f : v);
}






static float
TIFFFetchFloat(TIFF* tif, TIFFDirEntry* dir)
{
 float v;
 int32 l = ((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((dir->tdir_offset) >> (tif)->tif_typeshift[dir->tdir_type]) & (tif)->tif_typemask[dir->tdir_type] : (dir->tdir_offset) & (tif)->tif_typemask[dir->tdir_type]));
        _TIFFmemcpy(&v, &l, sizeof(float));
 ;
 return (v);
}




static int
TIFFFetchByteArray(TIFF* tif, TIFFDirEntry* dir, uint8* v)
{
    if (dir->tdir_count <= 4) {



        if (tif->tif_header.tiff_magic == 0x4d4d) {
     if (dir->tdir_type == TIFF_SBYTE)
                switch (dir->tdir_count) {
                    case 4: v[3] = dir->tdir_offset & 0xff;
                    case 3: v[2] = (dir->tdir_offset >> 8) & 0xff;
                    case 2: v[1] = (dir->tdir_offset >> 16) & 0xff;
      case 1: v[0] = dir->tdir_offset >> 24;
                }
     else
                switch (dir->tdir_count) {
                    case 4: v[3] = dir->tdir_offset & 0xff;
                    case 3: v[2] = (dir->tdir_offset >> 8) & 0xff;
                    case 2: v[1] = (dir->tdir_offset >> 16) & 0xff;
      case 1: v[0] = dir->tdir_offset >> 24;
                }
 } else {
     if (dir->tdir_type == TIFF_SBYTE)
                switch (dir->tdir_count) {
                    case 4: v[3] = dir->tdir_offset >> 24;
                    case 3: v[2] = (dir->tdir_offset >> 16) & 0xff;
                    case 2: v[1] = (dir->tdir_offset >> 8) & 0xff;
                    case 1: v[0] = dir->tdir_offset & 0xff;
  }
     else
                switch (dir->tdir_count) {
                    case 4: v[3] = dir->tdir_offset >> 24;
                    case 3: v[2] = (dir->tdir_offset >> 16) & 0xff;
                    case 2: v[1] = (dir->tdir_offset >> 8) & 0xff;
                    case 1: v[0] = dir->tdir_offset & 0xff;
  }
 }
        return (1);
    } else
        return (TIFFFetchData(tif, dir, (char*) v) != 0);
}




static int
TIFFFetchShortArray(TIFF* tif, TIFFDirEntry* dir, uint16* v)
{
 if (dir->tdir_count <= 2) {
  if (tif->tif_header.tiff_magic == 0x4d4d) {
   switch (dir->tdir_count) {
   case 2: v[1] = (uint16) (dir->tdir_offset & 0xffff);
   case 1: v[0] = (uint16) (dir->tdir_offset >> 16);
   }
  } else {
   switch (dir->tdir_count) {
   case 2: v[1] = (uint16) (dir->tdir_offset >> 16);
   case 1: v[0] = (uint16) (dir->tdir_offset & 0xffff);
   }
  }
  return (1);
 } else
  return (TIFFFetchData(tif, dir, (char *)v) != 0);
}





static int
TIFFFetchShortPair(TIFF* tif, TIFFDirEntry* dir)
{
 switch (dir->tdir_type) {
  case TIFF_BYTE:
  case TIFF_SBYTE:
   {
   uint8 v[4];
   return TIFFFetchByteArray(tif, dir, v)
    && TIFFSetField(tif, dir->tdir_tag, v[0], v[1]);
   }
  case TIFF_SHORT:
  case TIFF_SSHORT:
   {
   uint16 v[4];
   return TIFFFetchShortArray(tif, dir, v)
    && TIFFSetField(tif, dir->tdir_tag, v[0], v[1]);
   }
  default:
   return 0;
 }
}




static int
TIFFFetchLongArray(TIFF* tif, TIFFDirEntry* dir, uint32* v)
{
 if (dir->tdir_count == 1) {
  v[0] = dir->tdir_offset;
  return (1);
 } else
  return (TIFFFetchData(tif, dir, (char*) v) != 0);
}




static int
TIFFFetchRationalArray(TIFF* tif, TIFFDirEntry* dir, float* v)
{
 int ok = 0;
 uint32* l;

 l = (uint32*)_TIFFCheckMalloc(tif,
     dir->tdir_count, TIFFDataWidth((TIFFDataType) dir->tdir_type),
     "to fetch array of rationals");
 if (l) {
  if (TIFFFetchData(tif, dir, (char *)l)) {
   uint32 i;
   for (i = 0; i < dir->tdir_count; i++) {
    ok = cvtRational(tif, dir,
        l[2*i+0], l[2*i+1], &v[i]);
    if (!ok)
     break;
   }
  }
  _TIFFfree((char *)l);
 }
 return (ok);
}




static int
TIFFFetchFloatArray(TIFF* tif, TIFFDirEntry* dir, float* v)
{

 if (dir->tdir_count == 1) {
  v[0] = *(float*) &dir->tdir_offset;
  ;
  return (1);
 } else if (TIFFFetchData(tif, dir, (char*) v)) {
  ;
  return (1);
 } else
  return (0);
}




static int
TIFFFetchDoubleArray(TIFF* tif, TIFFDirEntry* dir, double* v)
{
 if (TIFFFetchData(tif, dir, (char*) v)) {
  ;
  return (1);
 } else
  return (0);
}
# 1246 "tif_dirread.c"
static int
TIFFFetchAnyArray(TIFF* tif, TIFFDirEntry* dir, double* v)
{
 int i;

 switch (dir->tdir_type) {
 case TIFF_BYTE:
 case TIFF_SBYTE:
  if (!TIFFFetchByteArray(tif, dir, (uint8*) v))
   return (0);
  if (dir->tdir_type == TIFF_BYTE) {
   uint8* vp = (uint8*) v;
   for (i = dir->tdir_count-1; i >= 0; i--)
    v[i] = vp[i];
  } else {
   int8* vp = (int8*) v;
   for (i = dir->tdir_count-1; i >= 0; i--)
    v[i] = vp[i];
  }
  break;
 case TIFF_SHORT:
 case TIFF_SSHORT:
  if (!TIFFFetchShortArray(tif, dir, (uint16*) v))
   return (0);
  if (dir->tdir_type == TIFF_SHORT) {
   uint16* vp = (uint16*) v;
   for (i = dir->tdir_count-1; i >= 0; i--)
    v[i] = vp[i];
  } else {
   int16* vp = (int16*) v;
   for (i = dir->tdir_count-1; i >= 0; i--)
    v[i] = vp[i];
  }
  break;
 case TIFF_LONG:
 case TIFF_SLONG:
  if (!TIFFFetchLongArray(tif, dir, (uint32*) v))
   return (0);
  if (dir->tdir_type == TIFF_LONG) {
   uint32* vp = (uint32*) v;
   for (i = dir->tdir_count-1; i >= 0; i--)
    v[i] = vp[i];
  } else {
   int32* vp = (int32*) v;
   for (i = dir->tdir_count-1; i >= 0; i--)
    v[i] = vp[i];
  }
  break;
 case TIFF_RATIONAL:
 case TIFF_SRATIONAL:
  if (!TIFFFetchRationalArray(tif, dir, (float*) v))
   return (0);
  { float* vp = (float*) v;
    for (i = dir->tdir_count-1; i >= 0; i--)
   v[i] = vp[i];
  }
  break;
 case TIFF_FLOAT:
  if (!TIFFFetchFloatArray(tif, dir, (float*) v))
   return (0);
  { float* vp = (float*) v;
    for (i = dir->tdir_count-1; i >= 0; i--)
   v[i] = vp[i];
  }
  break;
 case TIFF_DOUBLE:
  return (TIFFFetchDoubleArray(tif, dir, (double*) v));
 default:



  TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
      "cannot read TIFF_ANY type %d for field \"%s\"",
      TIFFFieldWithTag(tif, dir->tdir_tag)->field_name);
  return (0);
 }
 return (1);
}




static int
TIFFFetchNormalTag(TIFF* tif, TIFFDirEntry* dp)
{
 static const char mesg[] = "to fetch tag value";
 int ok = 0;
 const TIFFFieldInfo* fip = TIFFFieldWithTag(tif, dp->tdir_tag);

 if (dp->tdir_count > 1) {
  char* cp = ((void *)0);

  switch (dp->tdir_type) {
  case TIFF_BYTE:
  case TIFF_SBYTE:
   cp = _TIFFCheckMalloc(tif,
       dp->tdir_count, sizeof (uint8), mesg);
   ok = cp && TIFFFetchByteArray(tif, dp, (uint8*) cp);
   break;
  case TIFF_SHORT:
  case TIFF_SSHORT:
   cp = _TIFFCheckMalloc(tif,
       dp->tdir_count, sizeof (uint16), mesg);
   ok = cp && TIFFFetchShortArray(tif, dp, (uint16*) cp);
   break;
  case TIFF_LONG:
  case TIFF_SLONG:
   cp = _TIFFCheckMalloc(tif,
       dp->tdir_count, sizeof (uint32), mesg);
   ok = cp && TIFFFetchLongArray(tif, dp, (uint32*) cp);
   break;
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
   cp = _TIFFCheckMalloc(tif,
       dp->tdir_count, sizeof (float), mesg);
   ok = cp && TIFFFetchRationalArray(tif, dp, (float*) cp);
   break;
  case TIFF_FLOAT:
   cp = _TIFFCheckMalloc(tif,
       dp->tdir_count, sizeof (float), mesg);
   ok = cp && TIFFFetchFloatArray(tif, dp, (float*) cp);
   break;
  case TIFF_DOUBLE:
   cp = _TIFFCheckMalloc(tif,
       dp->tdir_count, sizeof (double), mesg);
   ok = cp && TIFFFetchDoubleArray(tif, dp, (double*) cp);
   break;
  case TIFF_ASCII:
  case TIFF_UNDEFINED:




   cp = _TIFFCheckMalloc(tif, dp->tdir_count+1, 1, mesg);
   if( (ok = (cp && TIFFFetchString(tif, dp, cp))) != 0 )
    cp[dp->tdir_count] = '\0';
   break;
  }
  if (ok) {
   ok = (fip->field_passcount ?
       TIFFSetField(tif, dp->tdir_tag, dp->tdir_count, cp)
     : TIFFSetField(tif, dp->tdir_tag, cp));
  }
  if (cp != ((void *)0))
   _TIFFfree(cp);
 } else if (CheckDirCount(tif, dp, 1)) {
  switch (dp->tdir_type) {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
# 1410 "tif_dirread.c"
   { TIFFDataType type = fip->field_type;
     if (type != TIFF_LONG && type != TIFF_SLONG) {
    uint16 v = (uint16)
      ((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((dp->tdir_offset) >> (tif)->tif_typeshift[dp->tdir_type]) & (tif)->tif_typemask[dp->tdir_type] : (dp->tdir_offset) & (tif)->tif_typemask[dp->tdir_type]));
    ok = (fip->field_passcount ?
        TIFFSetField(tif, dp->tdir_tag, 1, &v)
      : TIFFSetField(tif, dp->tdir_tag, v));
    break;
     }
   }

  case TIFF_LONG:
  case TIFF_SLONG:
   { uint32 v32 =
      ((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((dp->tdir_offset) >> (tif)->tif_typeshift[dp->tdir_type]) & (tif)->tif_typemask[dp->tdir_type] : (dp->tdir_offset) & (tif)->tif_typemask[dp->tdir_type]));
     ok = (fip->field_passcount ?
         TIFFSetField(tif, dp->tdir_tag, 1, &v32)
       : TIFFSetField(tif, dp->tdir_tag, v32));
   }
   break;
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
  case TIFF_FLOAT:
   { float v = (dp->tdir_type == TIFF_FLOAT ?
         TIFFFetchFloat(tif, dp)
       : TIFFFetchRational(tif, dp));
     ok = (fip->field_passcount ?
         TIFFSetField(tif, dp->tdir_tag, 1, &v)
       : TIFFSetField(tif, dp->tdir_tag, v));
   }
   break;
  case TIFF_DOUBLE:
   { double v;
     ok = (TIFFFetchDoubleArray(tif, dp, &v) &&
       (fip->field_passcount ?
         TIFFSetField(tif, dp->tdir_tag, 1, &v)
       : TIFFSetField(tif, dp->tdir_tag, v))
     );
   }
   break;
  case TIFF_ASCII:
  case TIFF_UNDEFINED:
   { char c[2];
     if( (ok = (TIFFFetchString(tif, dp, c) != 0)) != 0 ) {
    c[1] = '\0';
    ok = (fip->field_passcount ?
     TIFFSetField(tif, dp->tdir_tag, 1, c)
          : TIFFSetField(tif, dp->tdir_tag, c));
     }
   }
   break;
  }
 }
 return (ok);
}







static int
TIFFFetchPerSampleShorts(TIFF* tif, TIFFDirEntry* dir, uint16* pl)
{
    uint16 samples = tif->tif_dir.td_samplesperpixel;
    int status = 0;

    if (CheckDirCount(tif, dir, (uint32) samples)) {
        uint16 buf[10];
        uint16* v = buf;

        if (dir->tdir_count > (sizeof (buf) / sizeof (buf[0])))
            v = (uint16*) _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(uint16),
                                      "to fetch per-sample values");
        if (v && TIFFFetchShortArray(tif, dir, v)) {
            uint16 i;
            int check_count = dir->tdir_count;
            if( samples < check_count )
                check_count = samples;

            for (i = 1; i < check_count; i++)
                if (v[i] != v[0]) {
     TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
                              "Cannot handle different per-sample values for field \"%s\"",
                              TIFFFieldWithTag(tif, dir->tdir_tag)->field_name);
                    goto bad;
                }
            *pl = v[0];
            status = 1;
        }
      bad:
        if (v && v != buf)
            _TIFFfree(v);
    }
    return (status);
}






static int
TIFFFetchPerSampleLongs(TIFF* tif, TIFFDirEntry* dir, uint32* pl)
{
    uint16 samples = tif->tif_dir.td_samplesperpixel;
    int status = 0;

    if (CheckDirCount(tif, dir, (uint32) samples)) {
        uint32 buf[10];
        uint32* v = buf;

        if (dir->tdir_count > (sizeof (buf) / sizeof (buf[0])))
            v = (uint32*) _TIFFCheckMalloc(tif, dir->tdir_count, sizeof(uint32),
                                      "to fetch per-sample values");
        if (v && TIFFFetchLongArray(tif, dir, v)) {
            uint16 i;
            int check_count = dir->tdir_count;

            if( samples < check_count )
                check_count = samples;
            for (i = 1; i < check_count; i++)
                if (v[i] != v[0]) {
     TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
                              "Cannot handle different per-sample values for field \"%s\"",
                              TIFFFieldWithTag(tif, dir->tdir_tag)->field_name);
                    goto bad;
                }
            *pl = v[0];
            status = 1;
        }
      bad:
        if (v && v != buf)
            _TIFFfree(v);
    }
    return (status);
}





static int
TIFFFetchPerSampleAnys(TIFF* tif, TIFFDirEntry* dir, double* pl)
{
    uint16 samples = tif->tif_dir.td_samplesperpixel;
    int status = 0;

    if (CheckDirCount(tif, dir, (uint32) samples)) {
        double buf[10];
        double* v = buf;

        if (dir->tdir_count > (sizeof (buf) / sizeof (buf[0])))
            v = (double*) _TIFFCheckMalloc(tif, dir->tdir_count, sizeof (double),
                                      "to fetch per-sample values");
        if (v && TIFFFetchAnyArray(tif, dir, v)) {
            uint16 i;
            int check_count = dir->tdir_count;
            if( samples < check_count )
                check_count = samples;

            for (i = 1; i < check_count; i++)
                if (v[i] != v[0]) {
                    TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
                              "Cannot handle different per-sample values for field \"%s\"",
                              TIFFFieldWithTag(tif, dir->tdir_tag)->field_name);
                    goto bad;
                }
            *pl = v[0];
            status = 1;
        }
      bad:
        if (v && v != buf)
            _TIFFfree(v);
    }
    return (status);
}






static int
TIFFFetchStripThing(TIFF* tif, TIFFDirEntry* dir, long nstrips, uint32** lpp)
{
 register uint32* lp;
 int status;

        CheckDirCount(tif, dir, (uint32) nstrips);




 if (*lpp == ((void *)0) &&
     (*lpp = (uint32 *)_TIFFCheckMalloc(tif,
       nstrips, sizeof (uint32), "for strip array")) == ((void *)0))
  return (0);
 lp = *lpp;
        _TIFFmemset( lp, 0, sizeof(uint32) * nstrips );

 if (dir->tdir_type == (int)TIFF_SHORT) {



  uint16* dp = (uint16*) _TIFFCheckMalloc(tif,
      dir->tdir_count, sizeof (uint16), "to fetch strip tag");
  if (dp == ((void *)0))
   return (0);
  if( (status = TIFFFetchShortArray(tif, dir, dp)) != 0 ) {
                    int i;

                    for( i = 0; i < nstrips && i < (int) dir->tdir_count; i++ )
                    {
                        lp[i] = dp[i];
                    }
  }
  _TIFFfree((char*) dp);

        } else if( nstrips != (int) dir->tdir_count ) {


            uint32* dp = (uint32*) _TIFFCheckMalloc(tif,
      dir->tdir_count, sizeof (uint32), "to fetch strip tag");
            if (dp == ((void *)0))
                return (0);

            status = TIFFFetchLongArray(tif, dir, dp);
            if( status != 0 ) {
                int i;

                for( i = 0; i < nstrips && i < (int) dir->tdir_count; i++ )
                {
                    lp[i] = dp[i];
                }
            }

            _TIFFfree( (char *) dp );
 } else
            status = TIFFFetchLongArray(tif, dir, lp);

 return (status);
}




static int
TIFFFetchRefBlackWhite(TIFF* tif, TIFFDirEntry* dir)
{
 static const char mesg[] = "for \"ReferenceBlackWhite\" array";
 char* cp;
 int ok;

 if (dir->tdir_type == TIFF_RATIONAL)
  return (TIFFFetchNormalTag(tif, dir));



 cp = _TIFFCheckMalloc(tif, dir->tdir_count, sizeof (uint32), mesg);
 if( (ok = (cp && TIFFFetchLongArray(tif, dir, (uint32*) cp))) != 0) {
  float* fp = (float*)
      _TIFFCheckMalloc(tif, dir->tdir_count, sizeof (float), mesg);
  if( (ok = (fp != ((void *)0))) != 0 ) {
   uint32 i;
   for (i = 0; i < dir->tdir_count; i++)
    fp[i] = (float)((uint32*) cp)[i];
   ok = TIFFSetField(tif, dir->tdir_tag, fp);
   _TIFFfree((char*) fp);
  }
 }
 if (cp)
  _TIFFfree(cp);
 return (ok);
}
# 1694 "tif_dirread.c"
static void
ChopUpSingleUncompressedStrip(TIFF* tif)
{
 register TIFFDirectory *td = &tif->tif_dir;
 uint32 bytecount = td->td_stripbytecount[0];
 uint32 offset = td->td_stripoffset[0];
 tsize_t rowbytes = TIFFVTileSize(tif, 1), stripbytes;
 tstrip_t strip, nstrips, rowsperstrip;
 uint32* newcounts;
 uint32* newoffsets;
# 1712 "tif_dirread.c"
 if (rowbytes > 8192) {
  stripbytes = rowbytes;
  rowsperstrip = 1;
 } else if (rowbytes > 0 ) {
  rowsperstrip = 8192 / rowbytes;
  stripbytes = rowbytes * rowsperstrip;
 }
        else
            return;





 if (rowsperstrip >= td->td_rowsperstrip)
  return;
 nstrips = (tstrip_t) ((((uint32)(bytecount))+(((uint32)(stripbytes))-1))/((uint32)(stripbytes)));
        if( nstrips == 0 )
            return;

 newcounts = (uint32*) _TIFFCheckMalloc(tif, nstrips, sizeof (uint32),
    "for chopped \"StripByteCounts\" array");
 newoffsets = (uint32*) _TIFFCheckMalloc(tif, nstrips, sizeof (uint32),
    "for chopped \"StripOffsets\" array");
 if (newcounts == ((void *)0) || newoffsets == ((void *)0)) {




  if (newcounts != ((void *)0))
   _TIFFfree(newcounts);
  if (newoffsets != ((void *)0))
   _TIFFfree(newoffsets);
  return;
 }




 for (strip = 0; strip < nstrips; strip++) {
  if (stripbytes > (tsize_t) bytecount)
   stripbytes = bytecount;
  newcounts[strip] = stripbytes;
  newoffsets[strip] = offset;
  offset += stripbytes;
  bytecount -= stripbytes;
 }



 td->td_stripsperimage = td->td_nstrips = nstrips;
 TIFFSetField(tif, 278, rowsperstrip);

 _TIFFfree(td->td_stripbytecount);
 _TIFFfree(td->td_stripoffset);
 td->td_stripbytecount = newcounts;
 td->td_stripoffset = newoffsets;
 td->td_stripbytecountsorted = 1;
}
